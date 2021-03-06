(** Our Control-flow graph implementation. *)

module GU = Goblintutil
module CF = Cilfacade
open Cil
open Pretty
open GobConfig

module BISet = BatSet.Make (BatInt)

(** A node in the Control Flow Graph is either a statement or function. Think of
 * the function node as last node that all the returning nodes point to.  So
 * the result of the function call is contained in the function node. *)
type node =
  | Statement of stmt
  (** The statements as identified by CIL *)
  | FunctionEntry of varinfo
  (** *)
  | Function of varinfo
  (** The variable information associated with the function declaration. *)

let write_cfgs : ((node -> bool) -> unit) ref = ref (fun _ -> ())

let pretty_node () = function
  | Statement s -> text "Statement " ++ dn_stmt () s
  | Function f -> text "Function " ++ text f.vname
  | FunctionEntry f -> text "FunctionEntry " ++ text f.vname


let pretty_short_node () = function
  | Statement s -> text "Statement @ " ++ d_loc () (get_stmtLoc s.skind)
  | Function f -> text "Function " ++ text f.vname
  | FunctionEntry f -> text "FunctionEntry " ++ text f.vname

let node_compare n1 n2 =
  match n1, n2 with
  | FunctionEntry f, FunctionEntry g -> compare f.vid g.vid
  | _                    , FunctionEntry g -> -1
  | FunctionEntry g, _                     -> 1
  | Statement _, Function _  -> -1
  | Function  _, Statement _ -> 1
  | Statement s, Statement l -> compare s.sid l.sid
  | Function  f, Function g  -> compare f.vid g.vid

module Node :
sig
  include Hashtbl.HashedType with type t = node
  include Set.OrderedType with type t := node
end =
struct
  type t = node
  let equal x y =
    match x,y with
    | Statement s1, Statement s2 -> s1.sid = s2.sid
    | Function f1, Function f2 -> f1.vid = f2.vid
    | FunctionEntry f1, FunctionEntry f2 -> f1.vid = f2.vid
    | _ -> false
  let hash x =
    match x with
    | Statement s     -> s.sid * 17
    | Function f      -> f.vid
    | FunctionEntry f -> -f.vid

  let compare = node_compare
end

type asm_out = (string option * string * lval) list
type asm_in  = (string option * string * exp ) list

type edge =
  | Assign of lval * exp
  (** Assignments lval = exp *)
  | Proc of lval option * exp * exp list
  (** Function calls of the form lva = fexp (e1, e2, ...) *)
  | Entry of fundec
  (** Entry edge that relates function declaration to function body. You can use
    * this to initialize the local variables. *)
  | Ret of exp option * fundec
  (** Return edge is between the return statement, which may optionally contain
    * a return value, and the function. The result of the call is then
    * transfered to the function node! *)
  | Test of exp * bool
  (** The true-branch or false-branch of a conditional exp *)
  | ASM of string list * asm_out * asm_in
  (** Inline assembly statements, and the annotations for output and input
    * variables. *)
  | Skip
  (** This is here for historical reasons. I never use Skip edges! *)
  | SelfLoop
  (** This for interrupt edges.! *)


let pretty_edge () = function
  | Assign (lv,rv) -> dprintf "Assign '%a = %a' " d_lval lv d_exp rv
  | Proc (None  ,f,ars) -> dprintf "Proc '%a(%a)'" d_exp f (d_list ", " d_exp) ars
  | Proc (Some r,f,ars) -> dprintf "Proc '%a = %a(%a)'" d_lval r d_exp f (d_list ", " d_exp) ars
  | Entry f -> dprintf "Entry %s" f.svar.vname
  | Ret (None,fd) -> dprintf "Ret (None, %s)" fd.svar.vname
  | Ret (Some r,fd) -> dprintf "Ret (Some %a, %s)" d_exp r fd.svar.vname
  | Test (p,b) -> dprintf "Test (%a,%b)" d_exp p b
  | ASM _ -> text "ASM ..."
  | Skip -> text "Skip"
  | SelfLoop -> text "SelfLoop"

let pretty_edge_kind () = function
  | Assign (lv,rv) -> dprintf "Assign"
  | Proc (_  ,f,ars) -> dprintf "Proc"
  | Entry f -> dprintf "Entry %s" f.svar.vname
  | Ret (r,fd) -> dprintf "Ret"
  | Test (p,b) -> dprintf "Test"
  | ASM _ -> text "ASM"
  | Skip -> text "Skip"
  | SelfLoop -> text "SelfLoop"

type cfg = node -> ((location * edge) list * node) list

module type CfgBackward =
sig
  val prev : node -> ((location * edge) list * node) list
end

module type CfgForward =
sig
  val next : node -> ((location * edge) list * node) list
end

module type CfgBidir =
sig
  include CfgBackward
  include CfgForward
end

module H = Hashtbl.Make(Node)

(* Dumps a statement to the standard output *)
let pstmt stmt = dumpStmt defaultCilPrinter stdout 0 stmt; print_newline ()

let stmt_index_hack = Hashtbl.create 113
let current_node : node option ref = ref None

let do_the_params (fd: fundec) =
  (* This function used to create extra variables, but now it just sets the
   * vdecl to -3, lovely... *)
  let create_extra_var (p: varinfo): unit =
    match p.vtype with
    | TPtr (t,_) -> p.vdecl <- {p.vdecl with line = -3 }
    | _ -> p.vdecl <- {p.vdecl with line = -3 }
  in
  List.iter create_extra_var fd.sformals

let unknown_exp : exp = mkString "__unknown_value__"
let dummy_func = emptyFunction "__goblint_dummy_init"

let getLoc (node: node) =
  match node with
  | Statement stmt -> get_stmtLoc stmt.skind
  | Function fv -> fv.vdecl
  | FunctionEntry fv -> fv.vdecl

let createCFG (file: file) =
  let cfgF = H.create 113 in
  let cfgB = H.create 113 in
  if Messages.tracing then Messages.trace "cfg" "Starting to build the cfg.\n\n";

  (* Utility function to add stmt edges to the cfg *)
  let addCfg t (e,f) =
    if Messages.tracing then
      Messages.trace "cfg" "Adding edge (%a) from\n\t%a\nto\n\t%a ... "
        pretty_edge_kind e
        pretty_short_node f
        pretty_short_node t;
    H.add cfgB t ([getLoc f,e],f);
    H.add cfgF f ([getLoc f,e],t);
    Messages.trace "cfg" "done\n\n"
  in
  let mkEdge fromNode edge toNode = addCfg (Statement toNode) (edge, Statement fromNode) in
  (* Function for finding the next real successor of a statement. CIL tends to
   * put a lot of junk between stuff: *)
  let realnode ie stmt =
    let rec realnode ie visited stmt =
      if List.mem stmt.sid visited then stmt  else
        let sid = stmt.sid in
        try
          match stmt.skind with
          | Block _ -> realnode ie (sid::visited) (List.hd stmt.succs)
          | Goto _ -> realnode ie (sid::visited) (List.hd stmt.succs)
          | Instr [] -> begin
              let next = List.hd stmt.succs in
              if next.sid == stmt.sid
              then stmt
              else realnode ie (sid::visited) next
            end
          | Loop _ -> realnode ie (sid::visited) (List.hd stmt.succs)
          | If (exp,_,_,_) -> if isZero exp then realnode ie (sid::visited) (List.hd stmt.succs) else stmt
          | _ -> stmt
        with
        | Failure "hd" -> if ie then stmt else raise (Failure "hd")
    in realnode ie [] stmt
  in
  addCfg (Function dummy_func.svar) (Ret (None, dummy_func), FunctionEntry dummy_func.svar);
  (* We iterate over all globals looking for functions: *)
  iterGlobals file (fun glob ->
      match glob with
      | GFun (fd,loc) ->
        if Messages.tracing then Messages.trace "cfg" "Looking at the function %s.\n" fd.svar.vname;
        (* Walk through the parameters and pre-process them a bit... *)
        do_the_params fd;
        (* Find the first statement in the function *)
        let entrynode = realnode true (CF.getFirstStmt fd) in
        (* Add the entry edge to that node *)
        let _ = addCfg (Statement entrynode) ((Entry fd), (FunctionEntry fd.svar)) in
        (* So for each statement in the function body, we do the following: *)
        let handle stmt =
          (* Please ignore the next line. It creates an index of statements
           * so the Eclipse plug-in can know what function a given result
           * belongs to. *)
          Hashtbl.add stmt_index_hack stmt.sid fd;
          if Messages.tracing then Messages.trace "cfg" "Statement at %a.\n" d_loc (get_stmtLoc stmt.skind);
          match stmt.skind with
          (* Normal instructions are easy. They should be a list of a single
           * instruction, either Set, Call or ASM: *)
          | Instr x ->
            (* We need to add an edge to each of the successors of the
             * current statement *)
            let foreach succ =
              match x with
              | [Set (lval,exp,loc)] -> mkEdge stmt (Assign (lval, exp)) succ
              | [Call (lval,func,args,loc)] -> mkEdge stmt (Proc (lval,func,args)) succ
              | [Asm (attr,tmpl,out,inp,regs,loc)] -> mkEdge stmt (ASM (tmpl,out,inp)) succ
              | [] -> ()
              | _ -> print_endline "block escaped:"; pstmt stmt;
            in begin
              (* Sometimes a statement might not have a successor, but we
               * still need to do something about him, this can happen if
               * the last statement of a function is a call to exit.
               * Also see test 00/11. Code changed in revision 244. *)
              match stmt.succs with
              | [] -> addCfg (Function fd.svar) (Ret (None, fd), Statement stmt)
              | _ -> List.iter foreach (List.map (realnode true) stmt.succs)
            end
          (* If expressions are a bit more interesting, but CIL has done
           * it's job well and we just pick out the right successors *)
          | If (exp, true_block, false_block, loc) -> begin
              if isZero exp then ()
              else
                let false_stmt = realnode true (List.nth stmt.succs 0) in
                let true_stmt = try
                    realnode true (List.nth stmt.succs 1)
                  with Failure _ -> realnode true (List.hd stmt.succs) in
                mkEdge stmt (Test (exp, true )) true_stmt;
                mkEdge stmt (Test (exp, false)) false_stmt
            end
          (* Loops can generally be ignored because CIL creates gotos for us,
           * except constant conditions are eliminated, so non-terminating
           * loops are not connected to the rest of the code. This is a
           * problem for side-effecting demand driven solvers. I add one
           * extra edge that is always false to the exit of the loop. *)
          | Loop (bl,loc,Some cont, Some brk) -> begin
              try
                mkEdge (realnode true stmt) (Test (one, false)) (realnode false brk);
              with
              (* The [realnode brk] fails when the break label is at the end
               * of the function. In that case, we need to connect it to
               * the [Call] node. *)
              | Failure "hd" ->
                let newst = mkStmt (Return (None, locUnknown)) in
                newst.sid <- new_sid ();
                mkEdge (realnode true stmt) (Test (one, false)) newst;
                addCfg (Function fd.svar) (Ret (None,fd), Statement newst);
            end
          (* The return edges are connected to the function *)
          | Return (exp,loc) -> addCfg (Function fd.svar) (Ret (exp,fd), Statement stmt)
          | _ -> ()
        in
        List.iter handle fd.sallstmts
      | _ -> ()
    );
  if Messages.tracing then Messages.trace "cfg" "CFG building finished.\n\n";
  cfgF, cfgB

let print cfg  =
  let out = open_out "cfg.dot" in
  let module NH = Hashtbl.Make (Node) in
  let node_table = NH.create 113 in
  let _ = Printf.fprintf out "digraph cfg {\n" in
  let p_node () = function
    | Statement stmt  -> Pretty.dprintf "%d" stmt.sid
    | Function f      -> Pretty.dprintf "ret%d" f.vid
    | FunctionEntry f -> Pretty.dprintf "fun%d" f.vid
  in
  let dn_exp () e =
    text (Goblintutil.escape (sprint 800 (dn_exp () e)))
  in
  let dn_lval () l =
    text (Goblintutil.escape (sprint 800 (dn_lval () l)))
  in
  let p_edge () = function
    | Test (exp, b) -> if b then Pretty.dprintf "Pos(%a)" dn_exp exp else Pretty.dprintf "Neg(%a)" dn_exp exp
    | Assign (lv,rv) -> Pretty.dprintf "%a = %a" dn_lval lv dn_exp rv
    | Proc (Some ret,f,args) -> Pretty.dprintf "%a = %a(%a)" dn_lval ret dn_exp f (d_list ", " dn_exp) args
    | Proc (None,f,args) -> Pretty.dprintf "%a(%a)" dn_exp f (d_list ", " dn_exp) args
    | Entry (f) -> Pretty.text "(body)"
    | Ret (Some e,f) -> Pretty.dprintf "return %a" dn_exp e
    | Ret (None,f) -> Pretty.dprintf "return"
    | ASM (_,_,_) -> Pretty.text "ASM ..."
    | Skip -> Pretty.text "skip"
    | SelfLoop -> Pretty.text "SelfLoop"
  in
  (* escape string in label, otherwise dot might fail *)
  let p_edge_escaped () x = Pretty.text (String.escaped (Pretty.sprint ~width:0 (Pretty.dprintf "%a" p_edge x))) in
  let rec p_edges () = function
    | [] -> Pretty.dprintf ""
    | (_,x)::xs -> Pretty.dprintf "%a\n%a" p_edge_escaped x p_edges xs
  in
  let printNodeStyle (n:node) () =
    match n with
    | Statement {skind=If (_,_,_,_)} as s  -> ignore (Pretty.fprintf out "\t%a [shape=diamond]\n" p_node s)
    | Statement stmt  -> ()
    | Function f      -> ignore (Pretty.fprintf out "\t%a [label =\"return of %s()\",shape=box];\n" p_node (Function f) f.vname)
    | FunctionEntry f -> ignore (Pretty.fprintf out "\t%a [label =\"%s()\",shape=box];\n" p_node (FunctionEntry f) f.vname)
  in
  let printEdge (toNode: node) ((edges:(location * edge) list), (fromNode: node)) =
    ignore (Pretty.fprintf out "\t%a -> %a [label = \"%a\"] ;\n" p_node fromNode p_node toNode p_edges edges);
    NH.add node_table toNode ();
    NH.add node_table fromNode ()
  in
  H.iter printEdge cfg;
  NH.iter printNodeStyle node_table;
  Printf.fprintf out "}\n";
  flush out;
  close_out_noerr out

let initfun = emptyFunction "goblin_initfun"
let getGlobalInits (file: file) : (edge * location) list  =
  let vars = ref [] in
  let inits = ref [] in
  let rec doInit lval loc init =
    let rec initoffs offs init typ lval =
      doInit (addOffsetLval offs lval) loc init;
      lval
    in
    match init with
    | SingleInit exp -> begin
        inits := (Assign (lval, exp), loc) :: !inits
      end
    | CompoundInit (typ, lst) ->
      ignore (foldLeftCompound ~implicit:true ~doinit:initoffs ~ct:typ ~initl:lst ~acc:lval)
  in
  let f glob =
    match glob with
    | GVar ({vtype=vtype} as v, init, loc) -> begin
        vars := v :: !vars;
        let init = match init.init with
          | None -> makeZeroInit vtype
          | Some x -> x
        in
        doInit (var v) loc init
      end
    | _ -> ()
  in
  iterGlobals file f;
  initfun.slocals <- List.rev !vars;
  (Entry initfun, {line = 0; file="initfun"; byte= 0} ) :: List.rev !inits

let generate_irpt_edges cfg =
  let make_irpt_edge toNode (_, fromNode) =
    match toNode with
    | FunctionEntry f -> let _ = print_endline ( " Entry " ) in ()
    | _ -> H.add cfg toNode (SelfLoop, toNode)
  in
  H.iter make_irpt_edge cfg

let minimizeCFG (fw,bw) =
  let keep = H.create 113 in
  let comp_keep t (_,f) =
    if (List.length (H.find_all bw t)<>1) || (List.length (H.find_all fw t)<>1) then
      H.replace keep t ();
    if (List.length (H.find_all bw f)<>1) || (List.length (H.find_all fw f)<>1) then
      H.replace keep f ()
  in
  H.iter comp_keep bw;
  (* H.iter comp_keep fw; *)
  let cfgB = H.create 113 in
  let cfgF = H.create 113 in
  let ready = H.create 113 in
  let rec add a b t (e,f)=
    if H.mem keep f then begin
      H.add cfgB b (e@a,f);
      H.add cfgF f (e@a,b);
      if H.mem ready b then begin
        H.replace ready f ();
        List.iter (add [] f f) (H.find_all bw f)
      end
    end else begin
      List.iter (add (e@a) b f) (H.find_all bw f)
    end
  in
  H.iter (fun k _ -> List.iter (add [] k k) (H.find_all bw k)) keep;
  H.clear ready;
  H.clear keep;
  cfgF, cfgB

let getCFG (file: file) : cfg * cfg =
  let cfgF, cfgB = createCFG file in
  let cfgF, cfgB =
    if get_bool "exp.mincfg" then
      Stats.time "minimizing the cfg" minimizeCFG (cfgF, cfgB)
    else
      (cfgF, cfgB)
  in
  if get_bool "justcfg" then print cfgB;
  H.find_all cfgF, H.find_all cfgB

let get_containing_function (stmt: stmt): fundec = Hashtbl.find stmt_index_hack stmt.sid

let getFun (node: node) =
  match node with
  | Statement stmt -> get_containing_function stmt
  | Function fv -> CF.getdec fv
  | FunctionEntry fv -> CF.getdec fv

let printFun (module Cfg : CfgBidir) live fd out =
  (* let out = open_out "cfg.dot" in *)
  let module NH = Hashtbl.Make (Node) in
  let ready      = NH.create 113 in
  let node_table = NH.create 113 in
  let _ = Printf.fprintf out "digraph cfg {\n" in
  let p_node () = function
    | Statement stmt  -> Pretty.dprintf "%d" stmt.sid
    | Function f      -> Pretty.dprintf "ret%d" f.vid
    | FunctionEntry f -> Pretty.dprintf "fun%d" f.vid
  in
  let dn_exp () e =
    text (Goblintutil.escape (sprint 800 (dn_exp () e)))
  in
  let dn_lval () l =
    text (Goblintutil.escape (sprint 800 (dn_lval () l)))
  in
  let p_edge () = function
    | Test (exp, b) -> if b then Pretty.dprintf "Pos(%a)" dn_exp exp else Pretty.dprintf "Neg(%a)" dn_exp exp
    | Assign (lv,rv) -> Pretty.dprintf "%a = %a" dn_lval lv dn_exp rv
    | Proc (Some ret,f,args) -> Pretty.dprintf "%a = %a(%a)" dn_lval ret dn_exp f (d_list ", " dn_exp) args
    | Proc (None,f,args) -> Pretty.dprintf "%a(%a)" dn_exp f (d_list ", " dn_exp) args
    | Entry (f) -> Pretty.text "(body)"
    | Ret (Some e,f) -> Pretty.dprintf "return %a" dn_exp e
    | Ret (None,f) -> Pretty.dprintf "return"
    | ASM (_,_,_) -> Pretty.text "ASM ..."
    | Skip -> Pretty.text "skip"
    | SelfLoop -> Pretty.text "SelfLoop"
  in
  let rec p_edges () = function
    | [] -> Pretty.dprintf ""
    | (_,x)::xs -> Pretty.dprintf "%a\n%a" p_edge x p_edges xs
  in
  let printNodeStyle (n:node) () =
    let liveness = if live n then "fillcolor=white,style=filled" else "fillcolor=orange,style=filled" in
    let kind_style =
      match n with
      | Statement {skind=If (_,_,_,_)}  -> "shape=diamond"
      | Statement stmt  -> ""
      | Function f      -> "label =\"return of "^f.vname^"()\",shape=box"
      | FunctionEntry f -> "label =\""^f.vname^"()\",shape=box"
    in
    ignore (Pretty.fprintf out ("\t%a [id=\"%a\",URL=\"javascript:show_info('\\N');\",%s,%s];\n") p_node n p_node n liveness kind_style)
  in
  let printEdge (toNode: node) ((edges:(location * edge) list), (fromNode: node)) =
    ignore (Pretty.fprintf out "\t%a -> %a [label = \"%a\"] ;\n" p_node fromNode p_node toNode p_edges edges);
    NH.replace node_table toNode ();
    NH.replace node_table fromNode ()
  in
  let rec printNode (toNode : node) =
    if not (NH.mem ready toNode) then begin
      NH.add ready toNode ();
      let prevs = Cfg.prev toNode in
      List.iter (printEdge toNode) prevs;
      List.iter (fun (_,x) -> printNode x) prevs
    end
  in
  printNode (Function fd.svar);
  NH.iter printNodeStyle node_table;
  Printf.fprintf out "}\n";
  flush out;
  close_out_noerr out

let dead_code_cfg (file:file) (module Cfg : CfgBidir) live =
  iterGlobals file (fun glob ->
      match glob with
      | GFun (fd,loc) ->
        (* ignore (Printf.printf "fun: %s\n" fd.svar.vname); *)
        let base_dir = Goblintutil.create_dir ((if get_bool "interact.enabled" then get_string "interact.out"^"/" else "")^"cfgs") in
        let c_file_name = Str.global_substitute (Str.regexp Filename.dir_sep) (fun _ -> "%2F") fd.svar.vdecl.file in
        let dot_file_name = fd.svar.vname^".dot" in
        let file_dir = Goblintutil.create_dir (Filename.concat base_dir c_file_name) in
        let fname = Filename.concat file_dir dot_file_name in
        printFun (module Cfg : CfgBidir) live fd (open_out fname)
      | _ -> ()
    )

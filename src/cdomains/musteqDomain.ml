open Gil
open Pretty

module V = Basetype.Variables
module F = Lval.Fields

module EquAddr = 
struct 
  include Printable.ProdSimple (V) (F)
  let short w (v,fd) = 
    let v_str = V.short w v in let w = w - String.length v_str in
    let fd_str = F.short w fd in
      v_str ^ fd_str
  let toXML s  = toXML_f short s
  let pretty () x = pretty_f short () x

  let prefix (v1,fd1: t) (v2,fd2: t): F.t option = 
    if V.equal v1 v2 then F.prefix fd1 fd2 else None
end

module P = Printable.ProdSimple (V) (V)

module Equ = 
struct
  include MapDomain.MapTop (P) (F)

  let toXML_f sf mapping =
    let esc = Goblintutil.escape in
    let f ((v1,v2: key), (fd: value)) = 
      let w = Goblintutil.summary_length - 4 in
      let v1_str = V.short w v1 in let w = w - String.length v1_str in
      let v2_str = V.short w v2 in let w = w - String.length v2_str in
      let fd_str = F.short w fd in
      let summary = esc (v1_str ^ " = " ^ v2_str ^ fd_str) in
      let attr = [("text", summary)] in 
        Xml.Element ("Leaf",attr,[])
    in
    let assoclist = fold (fun x y rest -> (x,y)::rest) mapping [] in
    let children = List.rev_map f assoclist in
    let node_attrs = [("text", esc (sf Goblintutil.summary_length mapping));("id","map")] in
      Xml.Element ("Node", node_attrs, children)

  let pretty_f short () mapping = 
    let f (v1,v2) st dok: doc = 
      dok ++ dprintf "%a = %a%a\n" V.pretty v1 V.pretty v2 F.pretty st in
    let content () = fold f mapping nil in
      dprintf "@[%s {\n  @[%t@]}@]" (short 60 mapping) content

  let short _ _ = "Equalities"

  let toXML s  = toXML_f short s
  let pretty () x = pretty_f short () x

  let add_old = add
  let rec add (x,y) fd d =
    if V.equal x y || mem (x,y) d then d else
      let add_closure (x,y) fd d = 
        let f (x',y') fd' acc =
          if V.equal y y' then 
            match F.prefix fd fd' with
              | Some rest -> add (x',x) rest acc
              | None -> match F.prefix fd' fd with
                  | Some rest -> add (x,x') rest acc
                  | None -> acc
          else acc
        in
        fold f d (add_old (x,y) fd d)
      in
        if fd = [] then add_closure (y,x) [] (add_closure (x,y) [] d)
        else add_closure (x,y) fd d

  let kill x d = 
    let f (y,z) fd acc = 
      if V.equal x y || V.equal x z || F.occurs x fd then 
        remove (y,z) acc else acc
    in
      fold f d d 

  let kill_vars vars st = List.fold_right kill vars st

  (* Function to find all addresses equal to { vfd } in { eq }. *)
  let other_addrs vfd eq = 
    let rec helper (v,fd) addrs = 
      if List.exists (EquAddr.equal (v,fd)) addrs then addrs else
        let f (x,y) fd' acc = 
          if V.equal v x then
            helper (y, F.append fd' fd) acc
          else if V.equal v y then 
            (match F.prefix fd' fd with
               | Some rest -> helper (x,rest) acc
               | None -> acc)
          else acc
        in
          fold f eq ((v,fd) :: addrs)
    in
      helper vfd []

  let eval_rv rv: EquAddr.t option = 
    match rv with 
      | Lval (Var x, NoOffset) -> Some (x, [])
      | AddrOf (Var x, ofs)
      | AddrOf (Mem (Lval (Var x, NoOffset)),  ofs) -> Some (x, F.listify ofs)
      | _ -> None

  let eval_lv lv = 
    match lv with 
      | Var x, NoOffset -> Some x
      | _ -> None

  let add_eq (x,y) d = add (x,y) [] d

  let assign lval rval st =
    match lval with
      | Var x, NoOffset -> begin 
          let st = kill x st in
          (* let _ = printf "Here: %a\n" (printExp plainCilPrinter) rval in *)
            match rval with
              | Lval   (Var y, NoOffset) when y.vname.[0] = '{' -> st
              | AddrOf (Var y, NoOffset) when y.vname.[0] = '{' -> st
              | Lval (Var y, NoOffset) -> add_eq (x,y) st 
              | AddrOf (Var y, ofs) -> add (x,y) (F.listify ofs) st 
              | AddrOf (Mem (Lval (Var y, NoOffset)),  ofs) -> 
                  add (x,y) (F.listify ofs) st 
              | _ -> st
        end
      | _ -> st

end

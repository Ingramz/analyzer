open Cil
open Analyses

module Path = AccessDomain.Path

module Spec =
struct 
  module Glob = Global.Make (Lattice.Unit)
  module Dom = AccessDomain.Access
  
  type glob_fun = Glob.Var.t -> Glob.Val.t

  let startstate () = Dom.startstate ()
  let otherstate () = Dom.startstate ()

  let get_diff _ = []
  let reset_diff x = x
  
  let name = "Access Analysis"
  let es_to_string f _ = f.svar.vname

  let should_join _ _ = true
  let finalize () = ()
  let init () = ()
  
  let query _ _ : Queries.Result.t = 
    Queries.Result.top ()

  (* todo:
     return 
     
     Everything that changes must be dropped from PathMaps left hand side 
     and inlined into right hand sides. Assign to vars and globals work, but escaped 
     and indirect changes do not. *)
  let assign ctx (lval:lval) (rval:exp) : Dom.t = 
    List.fold_left (fun x f -> f x) ctx.local
      [ Dom.reset_accs 
      ; Dom.add_accsess rval true 
      ; Dom.add_accsess (mkAddrOf lval) false 
      ; Dom.assign ctx.ask lval rval ]    
    
  let branch ctx (exp:exp) (tv:bool) : Dom.t = 
      List.fold_left (fun x f -> f x) ctx.local
      [ Dom.reset_accs 
      ; Dom.add_accsess exp true ]    
      
  let body ctx (f:fundec) : Dom.t =  
    Dom.reset_accs ctx.local
    
  let return ctx (exp:exp option) (f:fundec) : Dom.t = 
    Dom.reset_accs ctx.local
    
  let eval_funvar ctx (fv:exp) : varinfo list = []
  let fork ctx lv f args = [] 
  
  let enter_func ctx (lval: lval option) (f:varinfo) (args:exp list) : (Dom.t * Dom.t) list = 
    [ctx.local, Dom.reset_accs ctx.local]
    
  let leave_func ctx (lval:lval option) (f:varinfo) (args:exp list) (au:Dom.t) : Dom.t = 
    List.fold_left (fun x f -> f x) au
      (List.map (fun e -> Dom.add_accsess e true) args)
  
  let special_fn ctx (lval: lval option) (f:varinfo) (arglist:exp list) : (Dom.t * Cil.exp * bool) list =
    match lval with 
       | None -> 
          let m = 
            List.fold_left (fun x f -> f x) ctx.local
            (Dom.reset_accs :: List.map (fun e -> Dom.add_accsess e true) arglist)
          in       
          [m,Cil.integer 1, true]
      | Some (Var v,o) ->  
          let m = 
            List.fold_left (fun x f -> f x) ctx.local
            ([ Dom.reset_accs 
             ; Dom.kill (Dom.Lvals.from_var v) ]
            @ List.map (fun e -> Dom.add_accsess e true) arglist)
          in       
          [m,Cil.integer 1, true]
       | _ -> [Dom.top (),Cil.integer 1, true] (*i think this should not happen*)
end

module AccessMCP =
  MCP.ConvertToMCPPart
        (Spec)
        (struct let name = "access"
                let depends = []
                type lf = Spec.Dom.t
                let inject_l (x:lf) = (`Access x:MCP.local_state)
                let extract_l x = match x with `Access x -> x | _ -> raise MCP.SpecificationConversionError
                type gf = Spec.Glob.Val.t
                let inject_g x = `None 
                let extract_g x = match x with `None -> () | _ -> raise MCP.SpecificationConversionError
         end)

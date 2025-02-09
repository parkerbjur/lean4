/-
Copyright (c) 2019 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Leonardo de Moura
-/
import Lean.Meta.Basic
import Lean.Meta.FunInfo

namespace Lean.Meta

partial def reduce (e : Expr) (explicitOnly skipTypes skipProofs := true) : MetaM Expr :=
  let rec visit (e : Expr) := do
    if (← (pure skipTypes <&&> isType e)) then
      pure e
    else if (← (pure skipProofs <&&> isProof e)) then
      pure e
    else
      let e ← whnf e
      match e with
      | Expr.app .. =>
        let f     := e.getAppFn
        let nargs := e.getAppNumArgs
        let finfo ← getFunInfoNArgs f nargs
        let mut args  := e.getAppArgs
        for i in [:args.size] do
          if i < finfo.paramInfo.size then
            let info := finfo.paramInfo[i]
            if !explicitOnly || info.isExplicit then
              args ← args.modifyM i visit
          else
            args ← args.modifyM i visit
        pure (mkAppN f args)
      | Expr.lam ..     => lambdaTelescope e fun xs b => do mkLambdaFVars xs (← visit b)
      | Expr.forallE .. => forallTelescope e fun xs b => do mkForallFVars xs (← visit b)
      | _               => pure e
  visit e

end Lean.Meta

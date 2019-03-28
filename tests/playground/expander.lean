import init.lean.expander

open Lean
open Lean.Parser
open Lean.Expander

def prof {α : Type} (msg : String) (p : IO α) : IO α :=
let msg₁ := "Time for '" ++ msg ++ "':" in
let msg₂ := "Memory usage for '" ++ msg ++ "':" in
allocprof msg₂ (timeit msg₁ p)

def node : SyntaxNodeKind := ⟨`node⟩
def leaf : SyntaxNodeKind := ⟨`leaf⟩

def node.arity := 4

def mkStx : ℕ → Syntax
| 0 := Syntax.mkNode leaf Array.empty
| (n+1) := Syntax.mkNode node $ (Array.mkArray node.arity Syntax.missing).map (λ _, mkStx n)

def cfg : FrontendConfig := {filename := "foo", fileMap := FileMap.fromString "", input := ""}

def test (transformers : List (Name × transformer)) (stx : Syntax) : IO Unit :=
match expand stx {cfg with transformers := RBMap.fromList transformers _} with
| Except.ok _ := pure ()
| Except.error e := throw e.toString

def testNoOp  := test []
def testNoExp := test [(`node, λ stx, noExpansion)]
def testSimple := test [(`node, λ stx, match stx.asNode with
  | some n := pure $ Syntax.mkNode ⟨`node2⟩ n.args
  | none   := pure Syntax.missing)]

def main (xs : List String) : IO Unit := do
  let stx := mkStx 11, --xs.head.toNat,
  prof "testNoOp" $ testNoOp stx,
  prof "testNoExp" $ testNoExp stx,
  prof "testSimple" $ testSimple stx,
  pure ()

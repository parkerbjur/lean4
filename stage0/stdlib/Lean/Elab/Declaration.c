// Lean compiler output
// Module: Lean.Elab.Declaration
// Imports: Init Lean.Util.CollectLevelParams Lean.Elab.DeclUtil Lean.Elab.DefView Lean.Elab.Inductive Lean.Elab.Structure Lean.Elab.MutualDef
#include <lean/lean.h>
#if defined(__clang__)
#pragma clang diagnostic ignored "-Wunused-parameter"
#pragma clang diagnostic ignored "-Wunused-label"
#elif defined(__GNUC__) && !defined(__CLANG__)
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-label"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#endif
#ifdef __cplusplus
extern "C" {
#endif
lean_object* l_Lean_Elab_Command_elabDeclaration(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_expandInitialize(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_expandDeclNamespace_x3f_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_expandMutualElement_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Command_elabAttr___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Name_toString___closed__1;
lean_object* l_Lean_extractMacroScopes(lean_object*);
size_t l_USize_add(size_t, size_t);
lean_object* l_Lean_Elab_expandOptDeclSig(lean_object*);
extern lean_object* l_Lean_Parser_Command_abbrev___elambda__1___closed__2;
lean_object* l_Lean_Elab_Command_expandMutualElement_match__2(lean_object*);
extern lean_object* l_Lean_Elab_checkNotAlreadyDeclared___rarg___lambda__3___closed__2;
lean_object* l___regBuiltin_Lean_Elab_Command_expandMutualPreamble___closed__1;
lean_object* l_Lean_Elab_getOptDerivingClasses___at_Lean_Elab_Command_elabStructure___spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_expandMutualNamespace_match__4(lean_object*);
lean_object* l_Lean_Elab_Command_elabAxiom___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkForallFVars(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_addDecl___at_Lean_Elab_Term_declareTacticSyntax___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_nullKind;
lean_object* l_Lean_setEnv___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__5(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_expandInitCmd___closed__7;
lean_object* l_Lean_Elab_Command_elabMutualDef(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_term_x5b___x5d___closed__9;
lean_object* l_Lean_Elab_Command_expandDeclIdNamespace_x3f(lean_object*);
lean_object* l_Lean_Elab_Command_liftTermElabM___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Command_expandBuiltinInitialize___closed__1;
lean_object* lean_name_mk_string(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_expandMutualNamespace_match__1(lean_object*);
uint8_t l_USize_decEq(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* l_Array_append___rarg(lean_object*, lean_object*);
uint8_t l_Lean_Elab_Modifiers_isProtected(lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Command_expandInitialize___closed__1;
lean_object* l_Lean_Elab_Command_checkValidCtorModifier___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__1___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getIdAt(lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_Command_commandElabAttribute;
lean_object* l_Lean_Elab_Command_expandDeclNamespace_x3f_match__2___rarg(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Lean_Elab_Command_checkValidCtorModifier___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__1___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_expandDeclNamespace_x3f_match__2(lean_object*);
lean_object* l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView_match__1___rarg(lean_object*, lean_object*);
extern lean_object* l_myMacro____x40_Init_System_IO___hyg_2694____closed__5;
lean_object* l_Lean_Elab_Command_elabAxiom_match__1___rarg(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Array_empty___closed__1;
lean_object* l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView_match__3___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_elabAxiom_match__3(lean_object*);
lean_object* l_Lean_Elab_Command_elabDeclaration_match__1___rarg(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Parser_Command_section___elambda__1___closed__2;
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__6___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_checkValidCtorModifier___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_isMutualPreambleCommand___boxed(lean_object*);
lean_object* l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_splitMutualPreamble(lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_isMutualPreambleCommand___closed__1;
lean_object* lean_private_to_user_name(lean_object*);
lean_object* l_Lean_Elab_elabAttrs___at_Lean_Elab_Command_elabMutualDef___spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_myMacro____x40_Init_NotationExtra___hyg_1098____closed__23;
lean_object* l_Lean_Elab_Term_ensureNoUnassignedMVars(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkIdentFrom(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_expandInitCmd___closed__14;
lean_object* l_Lean_throwErrorAt___at_Lean_Elab_Command_elabAxiom___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_expandMutualPreamble_match__1(lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Command_expandInitialize(lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Command_elabDeclaration(lean_object*);
extern lean_object* l_Lean_Parser_Command_mutual___elambda__1___closed__2;
lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Command_elabAttr___spec__1___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_elabAxiom_match__5___rarg(lean_object*, lean_object*);
extern lean_object* l_Lean_myMacro____x40_Init_NotationExtra___hyg_1098____closed__21;
extern lean_object* l_Lean_Elab_throwAlreadyDeclaredUniverseLevel___rarg___closed__3;
lean_object* l_Array_toSubarray___rarg(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Elab_checkNotAlreadyDeclared___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__4___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_elabMutualInductive___spec__1(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_expandMutualNamespace_match__3(lean_object*);
lean_object* l_Lean_Elab_Term_applyAttributesAt(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_expandMutualElement_match__1(lean_object*);
extern lean_object* l_Lean_myMacro____x40_Init_NotationExtra___hyg_1098____closed__13;
lean_object* l_Lean_Elab_Command_getLevelNames___rarg(lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Command_elabMutual(lean_object*);
extern lean_object* l_Lean_myMacro____x40_Init_NotationExtra___hyg_1098____closed__20;
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__6___lambda__2___closed__2;
lean_object* lean_string_utf8_byte_size(lean_object*);
lean_object* l_Lean_Elab_Command_expandMutualElement_match__3___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_withLevelNames___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_myMacro____x40_Init_NotationExtra___hyg_1098____closed__10;
lean_object* l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_elabAxiom___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Parser_Command_section___elambda__1___closed__1;
lean_object* l_Lean_Elab_Command_checkValidCtorModifier___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__1___lambda__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_USize_decLt(size_t, size_t);
lean_object* l___regBuiltin_Lean_Elab_Command_elabDeclaration___closed__1;
lean_object* l_Lean_Elab_checkNotAlreadyDeclared___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_elabMutualInductive___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_checkNotAlreadyDeclared___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__4___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_Command_checkValidCtorModifier___rarg___closed__3;
lean_object* l_Lean_throwError___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_109____spec__1(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_elabAxiom_match__4___rarg(lean_object*, lean_object*);
extern lean_object* l_myMacro____x40_Init_System_IO___hyg_2694____closed__16;
lean_object* l___private_Lean_Elab_Command_0__Lean_Elab_Command_getVarDecls(lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Command_expandMutualNamespace(lean_object*);
lean_object* l_Lean_Name_toStringWithSep(lean_object*, lean_object*);
extern lean_object* l_Lean_Parser_Command_check___elambda__1___closed__2;
lean_object* l_Lean_throwError___at_Lean_Elab_Term_throwErrorIfErrors___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_classInductiveSyntaxToView(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Parser_Command_classInductive___elambda__1___closed__2;
lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Command_elabAttr___spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_expandDeclIdNamespace_x3f_match__1(lean_object*);
extern lean_object* l_myMacro____x40_Init_Notation___hyg_13985____closed__10;
extern lean_object* l_Lean_myMacro____x40_Init_NotationExtra___hyg_1098____closed__7;
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__6___closed__3;
lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Command_expandMutualNamespace___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_expandBuiltinInitialize___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_expandDeclIdNamespace_x3f_match__2___rarg(lean_object*, lean_object*);
lean_object* l_Array_anyMUnsafe_any___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_isMutualDef___spec__1___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__6___lambda__2___closed__3;
lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Command_expandMutualNamespace___spec__1___closed__2;
lean_object* lean_array_fget(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_expandMutualPreamble_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView_match__2(lean_object*);
lean_object* l_Lean_Elab_Term_levelMVarToParam(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*, lean_object*);
extern lean_object* l_Lean_Parser_Command_initialize___elambda__1___closed__2;
lean_object* l_Lean_Elab_Command_elabAxiom___lambda__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_elabAxiom(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Parser_Command_set__option___elambda__1___closed__2;
lean_object* l_Lean_Elab_Command_expandMutualNamespace___closed__1;
lean_object* l_Lean_Elab_Command_expandDeclId(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Array_anyMUnsafe_any___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_isMutualInductive___spec__1(lean_object*, size_t, size_t);
lean_object* l_Lean_Elab_Command_expandInitCmd___closed__12;
extern lean_object* l_Lean_Elab_Command_checkValidCtorModifier___rarg___lambda__3___closed__3;
lean_object* l_Lean_Elab_elabModifiers___at_Lean_Elab_Command_elabMutualDef___spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_elabInductiveViews(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_elabAxiom_match__3___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkForallUsedOnly(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_elabAxiom___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_myMacro____x40_Init_NotationExtra___hyg_1098____closed__11;
extern lean_object* l_Lean_Parser_Command_namespace___elambda__1___closed__2;
lean_object* l___regBuiltin_Lean_Elab_Command_expandMutualPreamble(lean_object*);
lean_object* l_Lean_Elab_Command_expandInitCmd___closed__10;
extern lean_object* l_Lean_initFn____x40_Lean_Compiler_InitAttr___hyg_507____closed__2;
lean_object* l_Lean_Elab_checkNotAlreadyDeclared___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__4___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedSourceInfo___closed__1;
lean_object* l_Lean_Elab_Command_expandDeclNamespace_x3f_match__1(lean_object*);
extern lean_object* l_Lean_Elab_Command_checkValidCtorModifier___rarg___lambda__1___closed__3;
lean_object* l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView_match__2___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getId(lean_object*);
lean_object* l_Lean_Elab_Command_elabClassInductive(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_synthesizeSyntheticMVars_loop(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwError___at_Lean_Elab_Command_elabCommand___spec__12(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Parser_Command_namespace___elambda__1___closed__1;
extern lean_object* l_Lean_myMacro____x40_Init_NotationExtra___hyg_1098____closed__33;
lean_object* l_Lean_addMessageContextPartial___at_Lean_Elab_Command_instAddMessageContextCommandElabM___spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_expandInitialize___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Macro_throwErrorAt___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Environment_contains(lean_object*, lean_object*);
extern lean_object* l_Lean_protectedExt;
lean_object* l_Lean_CollectLevelParams_main(lean_object*, lean_object*);
lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Command_expandMutualNamespace___spec__1___closed__3;
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__6___closed__1;
extern lean_object* l_myMacro____x40_Init_NotationExtra___hyg_3357____closed__30;
extern lean_object* l_myMacro____x40_Init_NotationExtra___hyg_3357____closed__28;
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__6___closed__2;
lean_object* l_Lean_Elab_Command_expandInitCmd___closed__2;
lean_object* l_Lean_Elab_Command_expandMutualElement___closed__1;
lean_object* l_Lean_Elab_Command_expandMutualPreamble___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_applyVisibility___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_elabMutual___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Command_elabAttr___closed__1;
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Elab_Command_isDefLike(lean_object*);
lean_object* l_Lean_Elab_Command_expandDeclIdNamespace_x3f_match__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_expandDeclNamespace_x3f(lean_object*);
extern lean_object* l_Lean_Parser_Command_open___elambda__1___closed__2;
lean_object* l_Lean_Elab_Command_elabCommand(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_myMacro____x40_Init_NotationExtra___hyg_1098____closed__25;
lean_object* l_Lean_Elab_sortDeclLevelParams(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_isMutualInductive___boxed(lean_object*);
lean_object* l_Lean_Elab_Command_elabMutual___closed__2;
lean_object* l_Lean_Elab_Command_elabAxiom_match__2___rarg(lean_object*, lean_object*);
lean_object* l_ReaderT_bind___at_Lean_Elab_Term_instMonadLogTermElabM___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_KernelException_toMessageData___closed__3;
size_t lean_usize_of_nat(lean_object*);
lean_object* l_Lean_Elab_Command_elabAxiom___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_elabAxiom_match__2(lean_object*);
lean_object* l_Lean_Elab_expandDeclIdCore(lean_object*);
lean_object* l_Lean_Elab_Command_elabAttr___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_isMutualDef(lean_object*);
lean_object* l_Lean_Elab_Command_expandMutualNamespace_match__4___rarg(lean_object*, lean_object*);
lean_object* l_Lean_addMacroScope(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Command_expandMutualElement___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_isMutualPreambleCommand(lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Command_expandBuiltinInitialize(lean_object*);
lean_object* l_Lean_Elab_Command_expandMutualPreamble(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentEnvExtension_addEntry___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabBinders___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__6___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_nullKind___closed__2;
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__6___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_expandMutualElement(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_checkNotAlreadyDeclared___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_myMacro____x40_Init_NotationExtra___hyg_3357____closed__18;
lean_object* l___regBuiltin_Lean_Elab_Command_expandMutualElement(lean_object*);
extern lean_object* l_Lean_initFn____x40_Lean_Compiler_InitAttr___hyg_523____closed__2;
lean_object* l_Lean_Elab_checkNotAlreadyDeclared___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__4___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Parser_Command_universe___elambda__1___closed__2;
lean_object* l_Lean_Elab_applyVisibility___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__3(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_resetMessageLog(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_expandInitCmd(uint8_t, lean_object*, lean_object*, lean_object*);
extern lean_object* l_myMacro____x40_Init_System_IO___hyg_2694____closed__19;
lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Command_expandMutualNamespace___spec__1___closed__1;
extern lean_object* l_Lean_Parser_Command_end___elambda__1___closed__2;
lean_object* l_Lean_Elab_Command_expandInitCmd___closed__4;
lean_object* l_Lean_Elab_Command_expandInitCmd___closed__11;
extern lean_object* l_Lean_CollectLevelParams_instInhabitedState___closed__1;
extern lean_object* l_Lean_Elab_macroAttribute;
lean_object* l_Lean_Syntax_setArg(lean_object*, lean_object*, lean_object*);
extern lean_object* l_myMacro____x40_Init_Notation___hyg_1340____closed__8;
extern lean_object* l_Lean_Parser_Command_end___elambda__1___closed__1;
lean_object* l_Lean_Elab_Command_elabMutual(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_elabMutualInductive(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_addMacroStack___at_Lean_Elab_Command_instAddErrorMessageContextCommandElabM___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_resolveGlobalConstNoOverload___at_Lean_Elab_Term_elabDoubleQuotedName___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_expandMutualElement_match__3(lean_object*);
extern lean_object* l_Lean_Parser_Command_axiom___elambda__1___closed__2;
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_getCurrMacroScope(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkPrivateName(lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView_match__3(lean_object*);
lean_object* l_Lean_Syntax_getArgs(lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getKind(lean_object*);
lean_object* l_Lean_MacroScopesView_review(lean_object*);
lean_object* l_Lean_Elab_Term_applyAttributes(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_Command_elabStructure___closed__1;
extern lean_object* l_myMacro____x40_Init_Notation___hyg_13068____closed__5;
lean_object* l_Lean_Elab_Command_expandMutualNamespace_match__2(lean_object*);
lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Command_expandMutualElement___spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_getMainModule___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_elabStructure(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView_match__1(lean_object*);
lean_object* l_Lean_Elab_Command_expandInitCmd___closed__13;
extern lean_object* l_myMacro____x40_Init_Notation___hyg_14562____closed__11;
extern lean_object* l_Lean_myMacro____x40_Init_NotationExtra___hyg_1098____closed__1;
lean_object* l_Lean_Elab_Command_elabMutual___closed__3;
lean_object* l_Array_ofSubarray___rarg(lean_object*);
lean_object* l_Lean_Elab_Command_expandMutualNamespace_match__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_expandInitCmd___closed__3;
lean_object* l_Lean_Elab_Command_getRef(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_splitMutualPreamble_loop(lean_object*, lean_object*);
lean_object* l_Lean_Elab_expandDeclSig(lean_object*);
extern lean_object* l_myMacro____x40_Init_System_IO___hyg_2694____closed__17;
lean_object* l_Lean_Elab_Term_elabType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_isMutualDef___boxed(lean_object*);
extern lean_object* l_Lean_Parser_Command_attribute___elambda__1___closed__2;
extern lean_object* l_myMacro____x40_Init_NotationExtra___hyg_3357____closed__32;
lean_object* l_Lean_Elab_Command_expandInitCmd___closed__15;
extern lean_object* l_Lean_Parser_Command_inductive___elambda__1___closed__2;
extern lean_object* l_Lean_Parser_myMacro____x40_Lean_Parser_Extra___hyg_272____closed__1;
uint8_t l_Lean_Syntax_isNone(lean_object*);
extern lean_object* l_Lean_Parser_Command_universes___elambda__1___closed__2;
lean_object* l_Lean_Elab_Modifiers_addAttribute(lean_object*, lean_object*);
lean_object* l_Lean_setEnv___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_checkValidCtorModifier___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__1___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_checkValidCtorModifier___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Macro_expandMacro_x3fImp(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_expandInitCmd___closed__6;
extern lean_object* l_Lean_Parser_myMacro____x40_Lean_Parser_Extra___hyg_272____closed__2;
lean_object* l_Lean_Meta_instantiateMVars(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_expandMutualNamespace(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_elabAxiom_match__4(lean_object*);
lean_object* l_Lean_throwError___at___private_Lean_Elab_Command_0__Lean_Elab_Command_elabCommandUsing___spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwError___at_Lean_Elab_Command_elabEnd___spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__6(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_checkValidInductiveModifier___at_Lean_Elab_Command_elabStructure___spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_checkValidCtorModifier___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__1___lambda__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__6___lambda__2___closed__1;
extern lean_object* l_Lean_myMacro____x40_Init_NotationExtra___hyg_1098____closed__8;
lean_object* l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_elabMutualInductive___boxed__const__1;
lean_object* l___regBuiltin_Lean_Elab_Command_expandMutualNamespace___closed__1;
lean_object* l_Lean_Elab_Command_elabAxiom_match__5(lean_object*);
extern lean_object* l_Lean_Parser_Command_variables___elambda__1___closed__2;
lean_object* l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Elab_Modifiers_isPrivate(lean_object*);
lean_object* l_Lean_Elab_Command_elabDeclaration_match__1(lean_object*);
lean_object* l_Lean_Elab_Command_expandInitCmd___closed__9;
lean_object* l_Lean_Elab_Term_addAutoBoundImplicits(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_withAutoBoundImplicitLocal___rarg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__6___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_expandInitCmd___closed__8;
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_elabDeclaration___closed__2;
extern lean_object* l_Lean_mkOptionalNode___closed__2;
lean_object* l_Lean_Elab_Command_elabAxiom___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_checkValidCtorModifier___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__1___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_expandExplicitBindersAux_loop___closed__4;
lean_object* l_unsafeCast(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_elabInductive(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_myMacro____x40_Init_Notation___hyg_2137____closed__4;
extern lean_object* l_Lean_Parser_Command_builtin__initialize___elambda__1___closed__2;
extern lean_object* l_Lean_myMacro____x40_Init_NotationExtra___hyg_1098____closed__3;
uint8_t l_Array_anyMUnsafe_any___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_isMutualDef___spec__1(lean_object*, size_t, size_t);
lean_object* l_Lean_Elab_Command_elabAttr(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_elabDeclaration___closed__1;
lean_object* l_Array_anyMUnsafe_any___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_isMutualInductive___spec__1___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___boxed__const__1;
lean_object* l_Lean_Elab_Command_expandDeclIdNamespace_x3f_match__2(lean_object*);
lean_object* l_Lean_Elab_Command_elabDeclaration___closed__3;
lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Command_expandMutualNamespace___spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
extern lean_object* l_myMacro____x40_Init_System_IO___hyg_2694____closed__11;
extern lean_object* l_Lean_myMacro____x40_Init_NotationExtra___hyg_1098____closed__15;
lean_object* l_Lean_Elab_Command_expandMutualElement_match__2___rarg(lean_object*, lean_object*);
uint8_t l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_isMutualInductive(lean_object*);
lean_object* l_Lean_throwError___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_myMacro____x40_Init_NotationExtra___hyg_1098____closed__5;
lean_object* l_Lean_Elab_Command_expandMutualNamespace_match__3___rarg(lean_object*, lean_object*, lean_object*);
extern lean_object* l_myMacro____x40_Init_Notation___hyg_13985____closed__9;
lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Command_elabAttr___spec__1___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_Command_checkValidCtorModifier___rarg___lambda__2___closed__3;
lean_object* l___regBuiltin_Lean_Elab_Command_elabMutual___closed__1;
lean_object* l_Lean_Elab_Command_elabAxiom_match__1(lean_object*);
lean_object* l_Lean_Elab_Command_expandInitCmd___closed__1;
extern lean_object* l_Lean_Parser_Command_constant___elambda__1___closed__2;
extern lean_object* l_Lean_Elab_checkNotAlreadyDeclared___rarg___lambda__2___closed__2;
lean_object* l_Lean_Elab_Command_expandInitCmd___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Parser_Command_theorem___elambda__1___closed__2;
extern lean_object* l_Lean_Parser_Command_constant___elambda__1___closed__1;
lean_object* l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Command_mkDefViewOfConstant___spec__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_withAutoBoundImplicitLocal___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_expandInitCmd___closed__5;
extern lean_object* l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_process___lambda__1___closed__1;
extern lean_object* l_Lean_Elab_checkNotAlreadyDeclared___rarg___lambda__1___closed__2;
lean_object* l_Lean_Elab_Command_expandBuiltinInitialize(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwErrorAt___at_Lean_Elab_Command_elabAxiom___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_getBetterRef(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_elabAxiom___lambda__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_expandMutualNamespace_match__2___rarg(lean_object*, lean_object*);
lean_object* l___regBuiltin_Lean_Elab_Command_elabAttr(lean_object*);
uint8_t l_Lean_Syntax_isIdent(lean_object*);
lean_object* l_Lean_Elab_Command_elabMutual___closed__1;
lean_object* l___regBuiltin_Lean_Elab_Command_expandMutualElement___closed__1;
lean_object* l_Lean_Elab_Command_expandDeclIdNamespace_x3f_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_1) == 1)
{
lean_object* x_5; 
lean_dec(x_4);
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_6; size_t x_7; lean_object* x_8; lean_object* x_9; 
lean_dec(x_3);
x_6 = lean_ctor_get(x_1, 1);
lean_inc(x_6);
x_7 = lean_ctor_get_usize(x_1, 2);
lean_dec(x_1);
x_8 = lean_box_usize(x_7);
x_9 = lean_apply_2(x_2, x_6, x_8);
return x_9;
}
else
{
lean_object* x_10; size_t x_11; lean_object* x_12; lean_object* x_13; 
lean_dec(x_2);
x_10 = lean_ctor_get(x_1, 1);
lean_inc(x_10);
x_11 = lean_ctor_get_usize(x_1, 2);
lean_dec(x_1);
x_12 = lean_box_usize(x_11);
x_13 = lean_apply_3(x_3, x_5, x_10, x_12);
return x_13;
}
}
else
{
lean_object* x_14; 
lean_dec(x_3);
lean_dec(x_2);
x_14 = lean_apply_1(x_4, x_1);
return x_14;
}
}
}
lean_object* l_Lean_Elab_Command_expandDeclIdNamespace_x3f_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Command_expandDeclIdNamespace_x3f_match__1___rarg), 4, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_Command_expandDeclIdNamespace_x3f_match__2___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_apply_2(x_2, x_3, x_4);
return x_5;
}
}
lean_object* l_Lean_Elab_Command_expandDeclIdNamespace_x3f_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Command_expandDeclIdNamespace_x3f_match__2___rarg), 2, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_Command_expandDeclIdNamespace_x3f(lean_object* x_1) {
_start:
{
lean_object* x_2; uint8_t x_3; 
x_2 = l_Lean_Elab_expandDeclIdCore(x_1);
x_3 = !lean_is_exclusive(x_2);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_ctor_get(x_2, 1);
lean_dec(x_5);
x_6 = l_Lean_extractMacroScopes(x_4);
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
if (lean_obj_tag(x_7) == 1)
{
lean_object* x_8; 
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; 
lean_dec(x_7);
lean_dec(x_6);
lean_free_object(x_2);
lean_dec(x_1);
x_9 = lean_box(0);
return x_9;
}
else
{
uint8_t x_10; 
x_10 = !lean_is_exclusive(x_6);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_11 = lean_ctor_get(x_6, 0);
lean_dec(x_11);
x_12 = lean_ctor_get(x_7, 1);
lean_inc(x_12);
lean_dec(x_7);
x_13 = lean_box(0);
x_14 = lean_name_mk_string(x_13, x_12);
lean_ctor_set(x_6, 0, x_14);
x_15 = l_Lean_MacroScopesView_review(x_6);
x_16 = l_Lean_Syntax_isIdent(x_1);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_17 = l_Lean_mkIdentFrom(x_1, x_15);
x_18 = lean_unsigned_to_nat(0u);
x_19 = l_Lean_Syntax_setArg(x_1, x_18, x_17);
lean_ctor_set(x_2, 1, x_19);
lean_ctor_set(x_2, 0, x_8);
x_20 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_20, 0, x_2);
return x_20;
}
else
{
lean_object* x_21; lean_object* x_22; 
x_21 = l_Lean_mkIdentFrom(x_1, x_15);
lean_dec(x_1);
lean_ctor_set(x_2, 1, x_21);
lean_ctor_set(x_2, 0, x_8);
x_22 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_22, 0, x_2);
return x_22;
}
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; uint8_t x_31; 
x_23 = lean_ctor_get(x_6, 1);
x_24 = lean_ctor_get(x_6, 2);
x_25 = lean_ctor_get(x_6, 3);
lean_inc(x_25);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_6);
x_26 = lean_ctor_get(x_7, 1);
lean_inc(x_26);
lean_dec(x_7);
x_27 = lean_box(0);
x_28 = lean_name_mk_string(x_27, x_26);
x_29 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_29, 0, x_28);
lean_ctor_set(x_29, 1, x_23);
lean_ctor_set(x_29, 2, x_24);
lean_ctor_set(x_29, 3, x_25);
x_30 = l_Lean_MacroScopesView_review(x_29);
x_31 = l_Lean_Syntax_isIdent(x_1);
if (x_31 == 0)
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_32 = l_Lean_mkIdentFrom(x_1, x_30);
x_33 = lean_unsigned_to_nat(0u);
x_34 = l_Lean_Syntax_setArg(x_1, x_33, x_32);
lean_ctor_set(x_2, 1, x_34);
lean_ctor_set(x_2, 0, x_8);
x_35 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_35, 0, x_2);
return x_35;
}
else
{
lean_object* x_36; lean_object* x_37; 
x_36 = l_Lean_mkIdentFrom(x_1, x_30);
lean_dec(x_1);
lean_ctor_set(x_2, 1, x_36);
lean_ctor_set(x_2, 0, x_8);
x_37 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_37, 0, x_2);
return x_37;
}
}
}
}
else
{
lean_object* x_38; 
lean_dec(x_7);
lean_dec(x_6);
lean_free_object(x_2);
lean_dec(x_1);
x_38 = lean_box(0);
return x_38;
}
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_39 = lean_ctor_get(x_2, 0);
lean_inc(x_39);
lean_dec(x_2);
x_40 = l_Lean_extractMacroScopes(x_39);
x_41 = lean_ctor_get(x_40, 0);
lean_inc(x_41);
if (lean_obj_tag(x_41) == 1)
{
lean_object* x_42; 
x_42 = lean_ctor_get(x_41, 0);
lean_inc(x_42);
if (lean_obj_tag(x_42) == 0)
{
lean_object* x_43; 
lean_dec(x_41);
lean_dec(x_40);
lean_dec(x_1);
x_43 = lean_box(0);
return x_43;
}
else
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; uint8_t x_53; 
x_44 = lean_ctor_get(x_40, 1);
lean_inc(x_44);
x_45 = lean_ctor_get(x_40, 2);
lean_inc(x_45);
x_46 = lean_ctor_get(x_40, 3);
lean_inc(x_46);
if (lean_is_exclusive(x_40)) {
 lean_ctor_release(x_40, 0);
 lean_ctor_release(x_40, 1);
 lean_ctor_release(x_40, 2);
 lean_ctor_release(x_40, 3);
 x_47 = x_40;
} else {
 lean_dec_ref(x_40);
 x_47 = lean_box(0);
}
x_48 = lean_ctor_get(x_41, 1);
lean_inc(x_48);
lean_dec(x_41);
x_49 = lean_box(0);
x_50 = lean_name_mk_string(x_49, x_48);
if (lean_is_scalar(x_47)) {
 x_51 = lean_alloc_ctor(0, 4, 0);
} else {
 x_51 = x_47;
}
lean_ctor_set(x_51, 0, x_50);
lean_ctor_set(x_51, 1, x_44);
lean_ctor_set(x_51, 2, x_45);
lean_ctor_set(x_51, 3, x_46);
x_52 = l_Lean_MacroScopesView_review(x_51);
x_53 = l_Lean_Syntax_isIdent(x_1);
if (x_53 == 0)
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; 
x_54 = l_Lean_mkIdentFrom(x_1, x_52);
x_55 = lean_unsigned_to_nat(0u);
x_56 = l_Lean_Syntax_setArg(x_1, x_55, x_54);
x_57 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_57, 0, x_42);
lean_ctor_set(x_57, 1, x_56);
x_58 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_58, 0, x_57);
return x_58;
}
else
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; 
x_59 = l_Lean_mkIdentFrom(x_1, x_52);
lean_dec(x_1);
x_60 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_60, 0, x_42);
lean_ctor_set(x_60, 1, x_59);
x_61 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_61, 0, x_60);
return x_61;
}
}
}
else
{
lean_object* x_62; 
lean_dec(x_41);
lean_dec(x_40);
lean_dec(x_1);
x_62 = lean_box(0);
return x_62;
}
}
}
}
lean_object* l_Lean_Elab_Command_expandDeclNamespace_x3f_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_2);
x_4 = lean_box(0);
x_5 = lean_apply_1(x_3, x_4);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_dec(x_3);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_6, 1);
lean_inc(x_8);
lean_dec(x_6);
x_9 = lean_apply_2(x_2, x_7, x_8);
return x_9;
}
}
}
lean_object* l_Lean_Elab_Command_expandDeclNamespace_x3f_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Command_expandDeclNamespace_x3f_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_Command_expandDeclNamespace_x3f_match__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_2);
x_4 = lean_box(0);
x_5 = lean_apply_1(x_3, x_4);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_dec(x_3);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_6, 1);
lean_inc(x_8);
lean_dec(x_6);
x_9 = lean_apply_2(x_2, x_7, x_8);
return x_9;
}
}
}
lean_object* l_Lean_Elab_Command_expandDeclNamespace_x3f_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Command_expandDeclNamespace_x3f_match__2___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_Command_expandDeclNamespace_x3f(lean_object* x_1) {
_start:
{
lean_object* x_2; uint8_t x_3; 
x_2 = l_Lean_myMacro____x40_Init_NotationExtra___hyg_1098____closed__5;
lean_inc(x_1);
x_3 = l_Lean_Syntax_isOfKind(x_1, x_2);
if (x_3 == 0)
{
lean_object* x_4; 
lean_dec(x_1);
x_4 = lean_box(0);
return x_4;
}
else
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_5 = lean_unsigned_to_nat(1u);
x_6 = l_Lean_Syntax_getArg(x_1, x_5);
lean_inc(x_6);
x_7 = l_Lean_Syntax_getKind(x_6);
x_8 = l_Lean_Parser_Command_abbrev___elambda__1___closed__2;
x_9 = lean_name_eq(x_7, x_8);
if (x_9 == 0)
{
lean_object* x_10; uint8_t x_11; 
x_10 = l_Lean_myMacro____x40_Init_NotationExtra___hyg_1098____closed__21;
x_11 = lean_name_eq(x_7, x_10);
if (x_11 == 0)
{
lean_object* x_12; uint8_t x_13; 
x_12 = l_Lean_Parser_Command_theorem___elambda__1___closed__2;
x_13 = lean_name_eq(x_7, x_12);
if (x_13 == 0)
{
lean_object* x_14; uint8_t x_15; 
x_14 = l_Lean_Parser_Command_constant___elambda__1___closed__2;
x_15 = lean_name_eq(x_7, x_14);
if (x_15 == 0)
{
lean_object* x_16; uint8_t x_17; 
x_16 = l_Lean_Parser_Command_axiom___elambda__1___closed__2;
x_17 = lean_name_eq(x_7, x_16);
if (x_17 == 0)
{
lean_object* x_18; uint8_t x_19; 
x_18 = l_Lean_Parser_Command_inductive___elambda__1___closed__2;
x_19 = lean_name_eq(x_7, x_18);
if (x_19 == 0)
{
lean_object* x_20; uint8_t x_21; 
x_20 = l_Lean_Parser_Command_classInductive___elambda__1___closed__2;
x_21 = lean_name_eq(x_7, x_20);
if (x_21 == 0)
{
lean_object* x_22; uint8_t x_23; 
x_22 = l_myMacro____x40_Init_NotationExtra___hyg_3357____closed__18;
x_23 = lean_name_eq(x_7, x_22);
if (x_23 == 0)
{
lean_object* x_24; uint8_t x_25; 
x_24 = l_myMacro____x40_Init_NotationExtra___hyg_3357____closed__28;
x_25 = lean_name_eq(x_7, x_24);
lean_dec(x_7);
if (x_25 == 0)
{
lean_object* x_26; 
lean_dec(x_6);
lean_dec(x_1);
x_26 = lean_box(0);
return x_26;
}
else
{
lean_object* x_27; lean_object* x_28; uint8_t x_29; 
x_27 = lean_unsigned_to_nat(3u);
x_28 = l_Lean_Syntax_getArg(x_6, x_27);
x_29 = l_Lean_Syntax_isNone(x_28);
if (x_29 == 0)
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_30 = lean_unsigned_to_nat(0u);
x_31 = l_Lean_Syntax_getArg(x_28, x_30);
x_32 = l_Lean_Elab_Command_expandDeclIdNamespace_x3f(x_31);
if (lean_obj_tag(x_32) == 0)
{
lean_object* x_33; 
lean_dec(x_28);
lean_dec(x_6);
lean_dec(x_1);
x_33 = lean_box(0);
return x_33;
}
else
{
uint8_t x_34; 
x_34 = !lean_is_exclusive(x_32);
if (x_34 == 0)
{
lean_object* x_35; uint8_t x_36; 
x_35 = lean_ctor_get(x_32, 0);
x_36 = !lean_is_exclusive(x_35);
if (x_36 == 0)
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_37 = lean_ctor_get(x_35, 1);
x_38 = l_Lean_Syntax_setArg(x_28, x_30, x_37);
x_39 = l_Lean_Syntax_setArg(x_6, x_27, x_38);
x_40 = l_Lean_Syntax_setArg(x_1, x_5, x_39);
lean_ctor_set(x_35, 1, x_40);
return x_32;
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_41 = lean_ctor_get(x_35, 0);
x_42 = lean_ctor_get(x_35, 1);
lean_inc(x_42);
lean_inc(x_41);
lean_dec(x_35);
x_43 = l_Lean_Syntax_setArg(x_28, x_30, x_42);
x_44 = l_Lean_Syntax_setArg(x_6, x_27, x_43);
x_45 = l_Lean_Syntax_setArg(x_1, x_5, x_44);
x_46 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_46, 0, x_41);
lean_ctor_set(x_46, 1, x_45);
lean_ctor_set(x_32, 0, x_46);
return x_32;
}
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; 
x_47 = lean_ctor_get(x_32, 0);
lean_inc(x_47);
lean_dec(x_32);
x_48 = lean_ctor_get(x_47, 0);
lean_inc(x_48);
x_49 = lean_ctor_get(x_47, 1);
lean_inc(x_49);
if (lean_is_exclusive(x_47)) {
 lean_ctor_release(x_47, 0);
 lean_ctor_release(x_47, 1);
 x_50 = x_47;
} else {
 lean_dec_ref(x_47);
 x_50 = lean_box(0);
}
x_51 = l_Lean_Syntax_setArg(x_28, x_30, x_49);
x_52 = l_Lean_Syntax_setArg(x_6, x_27, x_51);
x_53 = l_Lean_Syntax_setArg(x_1, x_5, x_52);
if (lean_is_scalar(x_50)) {
 x_54 = lean_alloc_ctor(0, 2, 0);
} else {
 x_54 = x_50;
}
lean_ctor_set(x_54, 0, x_48);
lean_ctor_set(x_54, 1, x_53);
x_55 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_55, 0, x_54);
return x_55;
}
}
}
else
{
lean_object* x_56; 
lean_dec(x_28);
lean_dec(x_6);
lean_dec(x_1);
x_56 = lean_box(0);
return x_56;
}
}
}
else
{
lean_object* x_57; lean_object* x_58; 
lean_dec(x_7);
x_57 = l_Lean_Syntax_getArg(x_6, x_5);
x_58 = l_Lean_Elab_Command_expandDeclIdNamespace_x3f(x_57);
if (lean_obj_tag(x_58) == 0)
{
lean_object* x_59; 
lean_dec(x_6);
lean_dec(x_1);
x_59 = lean_box(0);
return x_59;
}
else
{
uint8_t x_60; 
x_60 = !lean_is_exclusive(x_58);
if (x_60 == 0)
{
lean_object* x_61; uint8_t x_62; 
x_61 = lean_ctor_get(x_58, 0);
x_62 = !lean_is_exclusive(x_61);
if (x_62 == 0)
{
lean_object* x_63; lean_object* x_64; lean_object* x_65; 
x_63 = lean_ctor_get(x_61, 1);
x_64 = l_Lean_Syntax_setArg(x_6, x_5, x_63);
x_65 = l_Lean_Syntax_setArg(x_1, x_5, x_64);
lean_ctor_set(x_61, 1, x_65);
return x_58;
}
else
{
lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; 
x_66 = lean_ctor_get(x_61, 0);
x_67 = lean_ctor_get(x_61, 1);
lean_inc(x_67);
lean_inc(x_66);
lean_dec(x_61);
x_68 = l_Lean_Syntax_setArg(x_6, x_5, x_67);
x_69 = l_Lean_Syntax_setArg(x_1, x_5, x_68);
x_70 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_70, 0, x_66);
lean_ctor_set(x_70, 1, x_69);
lean_ctor_set(x_58, 0, x_70);
return x_58;
}
}
else
{
lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; 
x_71 = lean_ctor_get(x_58, 0);
lean_inc(x_71);
lean_dec(x_58);
x_72 = lean_ctor_get(x_71, 0);
lean_inc(x_72);
x_73 = lean_ctor_get(x_71, 1);
lean_inc(x_73);
if (lean_is_exclusive(x_71)) {
 lean_ctor_release(x_71, 0);
 lean_ctor_release(x_71, 1);
 x_74 = x_71;
} else {
 lean_dec_ref(x_71);
 x_74 = lean_box(0);
}
x_75 = l_Lean_Syntax_setArg(x_6, x_5, x_73);
x_76 = l_Lean_Syntax_setArg(x_1, x_5, x_75);
if (lean_is_scalar(x_74)) {
 x_77 = lean_alloc_ctor(0, 2, 0);
} else {
 x_77 = x_74;
}
lean_ctor_set(x_77, 0, x_72);
lean_ctor_set(x_77, 1, x_76);
x_78 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_78, 0, x_77);
return x_78;
}
}
}
}
else
{
lean_object* x_79; lean_object* x_80; 
lean_dec(x_7);
x_79 = l_Lean_Syntax_getArg(x_6, x_5);
x_80 = l_Lean_Elab_Command_expandDeclIdNamespace_x3f(x_79);
if (lean_obj_tag(x_80) == 0)
{
lean_object* x_81; 
lean_dec(x_6);
lean_dec(x_1);
x_81 = lean_box(0);
return x_81;
}
else
{
uint8_t x_82; 
x_82 = !lean_is_exclusive(x_80);
if (x_82 == 0)
{
lean_object* x_83; uint8_t x_84; 
x_83 = lean_ctor_get(x_80, 0);
x_84 = !lean_is_exclusive(x_83);
if (x_84 == 0)
{
lean_object* x_85; lean_object* x_86; lean_object* x_87; 
x_85 = lean_ctor_get(x_83, 1);
x_86 = l_Lean_Syntax_setArg(x_6, x_5, x_85);
x_87 = l_Lean_Syntax_setArg(x_1, x_5, x_86);
lean_ctor_set(x_83, 1, x_87);
return x_80;
}
else
{
lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; 
x_88 = lean_ctor_get(x_83, 0);
x_89 = lean_ctor_get(x_83, 1);
lean_inc(x_89);
lean_inc(x_88);
lean_dec(x_83);
x_90 = l_Lean_Syntax_setArg(x_6, x_5, x_89);
x_91 = l_Lean_Syntax_setArg(x_1, x_5, x_90);
x_92 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_92, 0, x_88);
lean_ctor_set(x_92, 1, x_91);
lean_ctor_set(x_80, 0, x_92);
return x_80;
}
}
else
{
lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; 
x_93 = lean_ctor_get(x_80, 0);
lean_inc(x_93);
lean_dec(x_80);
x_94 = lean_ctor_get(x_93, 0);
lean_inc(x_94);
x_95 = lean_ctor_get(x_93, 1);
lean_inc(x_95);
if (lean_is_exclusive(x_93)) {
 lean_ctor_release(x_93, 0);
 lean_ctor_release(x_93, 1);
 x_96 = x_93;
} else {
 lean_dec_ref(x_93);
 x_96 = lean_box(0);
}
x_97 = l_Lean_Syntax_setArg(x_6, x_5, x_95);
x_98 = l_Lean_Syntax_setArg(x_1, x_5, x_97);
if (lean_is_scalar(x_96)) {
 x_99 = lean_alloc_ctor(0, 2, 0);
} else {
 x_99 = x_96;
}
lean_ctor_set(x_99, 0, x_94);
lean_ctor_set(x_99, 1, x_98);
x_100 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_100, 0, x_99);
return x_100;
}
}
}
}
else
{
lean_object* x_101; lean_object* x_102; 
lean_dec(x_7);
x_101 = l_Lean_Syntax_getArg(x_6, x_5);
x_102 = l_Lean_Elab_Command_expandDeclIdNamespace_x3f(x_101);
if (lean_obj_tag(x_102) == 0)
{
lean_object* x_103; 
lean_dec(x_6);
lean_dec(x_1);
x_103 = lean_box(0);
return x_103;
}
else
{
uint8_t x_104; 
x_104 = !lean_is_exclusive(x_102);
if (x_104 == 0)
{
lean_object* x_105; uint8_t x_106; 
x_105 = lean_ctor_get(x_102, 0);
x_106 = !lean_is_exclusive(x_105);
if (x_106 == 0)
{
lean_object* x_107; lean_object* x_108; lean_object* x_109; 
x_107 = lean_ctor_get(x_105, 1);
x_108 = l_Lean_Syntax_setArg(x_6, x_5, x_107);
x_109 = l_Lean_Syntax_setArg(x_1, x_5, x_108);
lean_ctor_set(x_105, 1, x_109);
return x_102;
}
else
{
lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; 
x_110 = lean_ctor_get(x_105, 0);
x_111 = lean_ctor_get(x_105, 1);
lean_inc(x_111);
lean_inc(x_110);
lean_dec(x_105);
x_112 = l_Lean_Syntax_setArg(x_6, x_5, x_111);
x_113 = l_Lean_Syntax_setArg(x_1, x_5, x_112);
x_114 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_114, 0, x_110);
lean_ctor_set(x_114, 1, x_113);
lean_ctor_set(x_102, 0, x_114);
return x_102;
}
}
else
{
lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; 
x_115 = lean_ctor_get(x_102, 0);
lean_inc(x_115);
lean_dec(x_102);
x_116 = lean_ctor_get(x_115, 0);
lean_inc(x_116);
x_117 = lean_ctor_get(x_115, 1);
lean_inc(x_117);
if (lean_is_exclusive(x_115)) {
 lean_ctor_release(x_115, 0);
 lean_ctor_release(x_115, 1);
 x_118 = x_115;
} else {
 lean_dec_ref(x_115);
 x_118 = lean_box(0);
}
x_119 = l_Lean_Syntax_setArg(x_6, x_5, x_117);
x_120 = l_Lean_Syntax_setArg(x_1, x_5, x_119);
if (lean_is_scalar(x_118)) {
 x_121 = lean_alloc_ctor(0, 2, 0);
} else {
 x_121 = x_118;
}
lean_ctor_set(x_121, 0, x_116);
lean_ctor_set(x_121, 1, x_120);
x_122 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_122, 0, x_121);
return x_122;
}
}
}
}
else
{
lean_object* x_123; lean_object* x_124; 
lean_dec(x_7);
x_123 = l_Lean_Syntax_getArg(x_6, x_5);
x_124 = l_Lean_Elab_Command_expandDeclIdNamespace_x3f(x_123);
if (lean_obj_tag(x_124) == 0)
{
lean_object* x_125; 
lean_dec(x_6);
lean_dec(x_1);
x_125 = lean_box(0);
return x_125;
}
else
{
uint8_t x_126; 
x_126 = !lean_is_exclusive(x_124);
if (x_126 == 0)
{
lean_object* x_127; uint8_t x_128; 
x_127 = lean_ctor_get(x_124, 0);
x_128 = !lean_is_exclusive(x_127);
if (x_128 == 0)
{
lean_object* x_129; lean_object* x_130; lean_object* x_131; 
x_129 = lean_ctor_get(x_127, 1);
x_130 = l_Lean_Syntax_setArg(x_6, x_5, x_129);
x_131 = l_Lean_Syntax_setArg(x_1, x_5, x_130);
lean_ctor_set(x_127, 1, x_131);
return x_124;
}
else
{
lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; 
x_132 = lean_ctor_get(x_127, 0);
x_133 = lean_ctor_get(x_127, 1);
lean_inc(x_133);
lean_inc(x_132);
lean_dec(x_127);
x_134 = l_Lean_Syntax_setArg(x_6, x_5, x_133);
x_135 = l_Lean_Syntax_setArg(x_1, x_5, x_134);
x_136 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_136, 0, x_132);
lean_ctor_set(x_136, 1, x_135);
lean_ctor_set(x_124, 0, x_136);
return x_124;
}
}
else
{
lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; 
x_137 = lean_ctor_get(x_124, 0);
lean_inc(x_137);
lean_dec(x_124);
x_138 = lean_ctor_get(x_137, 0);
lean_inc(x_138);
x_139 = lean_ctor_get(x_137, 1);
lean_inc(x_139);
if (lean_is_exclusive(x_137)) {
 lean_ctor_release(x_137, 0);
 lean_ctor_release(x_137, 1);
 x_140 = x_137;
} else {
 lean_dec_ref(x_137);
 x_140 = lean_box(0);
}
x_141 = l_Lean_Syntax_setArg(x_6, x_5, x_139);
x_142 = l_Lean_Syntax_setArg(x_1, x_5, x_141);
if (lean_is_scalar(x_140)) {
 x_143 = lean_alloc_ctor(0, 2, 0);
} else {
 x_143 = x_140;
}
lean_ctor_set(x_143, 0, x_138);
lean_ctor_set(x_143, 1, x_142);
x_144 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_144, 0, x_143);
return x_144;
}
}
}
}
else
{
lean_object* x_145; lean_object* x_146; 
lean_dec(x_7);
x_145 = l_Lean_Syntax_getArg(x_6, x_5);
x_146 = l_Lean_Elab_Command_expandDeclIdNamespace_x3f(x_145);
if (lean_obj_tag(x_146) == 0)
{
lean_object* x_147; 
lean_dec(x_6);
lean_dec(x_1);
x_147 = lean_box(0);
return x_147;
}
else
{
uint8_t x_148; 
x_148 = !lean_is_exclusive(x_146);
if (x_148 == 0)
{
lean_object* x_149; uint8_t x_150; 
x_149 = lean_ctor_get(x_146, 0);
x_150 = !lean_is_exclusive(x_149);
if (x_150 == 0)
{
lean_object* x_151; lean_object* x_152; lean_object* x_153; 
x_151 = lean_ctor_get(x_149, 1);
x_152 = l_Lean_Syntax_setArg(x_6, x_5, x_151);
x_153 = l_Lean_Syntax_setArg(x_1, x_5, x_152);
lean_ctor_set(x_149, 1, x_153);
return x_146;
}
else
{
lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; 
x_154 = lean_ctor_get(x_149, 0);
x_155 = lean_ctor_get(x_149, 1);
lean_inc(x_155);
lean_inc(x_154);
lean_dec(x_149);
x_156 = l_Lean_Syntax_setArg(x_6, x_5, x_155);
x_157 = l_Lean_Syntax_setArg(x_1, x_5, x_156);
x_158 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_158, 0, x_154);
lean_ctor_set(x_158, 1, x_157);
lean_ctor_set(x_146, 0, x_158);
return x_146;
}
}
else
{
lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_166; 
x_159 = lean_ctor_get(x_146, 0);
lean_inc(x_159);
lean_dec(x_146);
x_160 = lean_ctor_get(x_159, 0);
lean_inc(x_160);
x_161 = lean_ctor_get(x_159, 1);
lean_inc(x_161);
if (lean_is_exclusive(x_159)) {
 lean_ctor_release(x_159, 0);
 lean_ctor_release(x_159, 1);
 x_162 = x_159;
} else {
 lean_dec_ref(x_159);
 x_162 = lean_box(0);
}
x_163 = l_Lean_Syntax_setArg(x_6, x_5, x_161);
x_164 = l_Lean_Syntax_setArg(x_1, x_5, x_163);
if (lean_is_scalar(x_162)) {
 x_165 = lean_alloc_ctor(0, 2, 0);
} else {
 x_165 = x_162;
}
lean_ctor_set(x_165, 0, x_160);
lean_ctor_set(x_165, 1, x_164);
x_166 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_166, 0, x_165);
return x_166;
}
}
}
}
else
{
lean_object* x_167; lean_object* x_168; 
lean_dec(x_7);
x_167 = l_Lean_Syntax_getArg(x_6, x_5);
x_168 = l_Lean_Elab_Command_expandDeclIdNamespace_x3f(x_167);
if (lean_obj_tag(x_168) == 0)
{
lean_object* x_169; 
lean_dec(x_6);
lean_dec(x_1);
x_169 = lean_box(0);
return x_169;
}
else
{
uint8_t x_170; 
x_170 = !lean_is_exclusive(x_168);
if (x_170 == 0)
{
lean_object* x_171; uint8_t x_172; 
x_171 = lean_ctor_get(x_168, 0);
x_172 = !lean_is_exclusive(x_171);
if (x_172 == 0)
{
lean_object* x_173; lean_object* x_174; lean_object* x_175; 
x_173 = lean_ctor_get(x_171, 1);
x_174 = l_Lean_Syntax_setArg(x_6, x_5, x_173);
x_175 = l_Lean_Syntax_setArg(x_1, x_5, x_174);
lean_ctor_set(x_171, 1, x_175);
return x_168;
}
else
{
lean_object* x_176; lean_object* x_177; lean_object* x_178; lean_object* x_179; lean_object* x_180; 
x_176 = lean_ctor_get(x_171, 0);
x_177 = lean_ctor_get(x_171, 1);
lean_inc(x_177);
lean_inc(x_176);
lean_dec(x_171);
x_178 = l_Lean_Syntax_setArg(x_6, x_5, x_177);
x_179 = l_Lean_Syntax_setArg(x_1, x_5, x_178);
x_180 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_180, 0, x_176);
lean_ctor_set(x_180, 1, x_179);
lean_ctor_set(x_168, 0, x_180);
return x_168;
}
}
else
{
lean_object* x_181; lean_object* x_182; lean_object* x_183; lean_object* x_184; lean_object* x_185; lean_object* x_186; lean_object* x_187; lean_object* x_188; 
x_181 = lean_ctor_get(x_168, 0);
lean_inc(x_181);
lean_dec(x_168);
x_182 = lean_ctor_get(x_181, 0);
lean_inc(x_182);
x_183 = lean_ctor_get(x_181, 1);
lean_inc(x_183);
if (lean_is_exclusive(x_181)) {
 lean_ctor_release(x_181, 0);
 lean_ctor_release(x_181, 1);
 x_184 = x_181;
} else {
 lean_dec_ref(x_181);
 x_184 = lean_box(0);
}
x_185 = l_Lean_Syntax_setArg(x_6, x_5, x_183);
x_186 = l_Lean_Syntax_setArg(x_1, x_5, x_185);
if (lean_is_scalar(x_184)) {
 x_187 = lean_alloc_ctor(0, 2, 0);
} else {
 x_187 = x_184;
}
lean_ctor_set(x_187, 0, x_182);
lean_ctor_set(x_187, 1, x_186);
x_188 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_188, 0, x_187);
return x_188;
}
}
}
}
else
{
lean_object* x_189; lean_object* x_190; 
lean_dec(x_7);
x_189 = l_Lean_Syntax_getArg(x_6, x_5);
x_190 = l_Lean_Elab_Command_expandDeclIdNamespace_x3f(x_189);
if (lean_obj_tag(x_190) == 0)
{
lean_object* x_191; 
lean_dec(x_6);
lean_dec(x_1);
x_191 = lean_box(0);
return x_191;
}
else
{
uint8_t x_192; 
x_192 = !lean_is_exclusive(x_190);
if (x_192 == 0)
{
lean_object* x_193; uint8_t x_194; 
x_193 = lean_ctor_get(x_190, 0);
x_194 = !lean_is_exclusive(x_193);
if (x_194 == 0)
{
lean_object* x_195; lean_object* x_196; lean_object* x_197; 
x_195 = lean_ctor_get(x_193, 1);
x_196 = l_Lean_Syntax_setArg(x_6, x_5, x_195);
x_197 = l_Lean_Syntax_setArg(x_1, x_5, x_196);
lean_ctor_set(x_193, 1, x_197);
return x_190;
}
else
{
lean_object* x_198; lean_object* x_199; lean_object* x_200; lean_object* x_201; lean_object* x_202; 
x_198 = lean_ctor_get(x_193, 0);
x_199 = lean_ctor_get(x_193, 1);
lean_inc(x_199);
lean_inc(x_198);
lean_dec(x_193);
x_200 = l_Lean_Syntax_setArg(x_6, x_5, x_199);
x_201 = l_Lean_Syntax_setArg(x_1, x_5, x_200);
x_202 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_202, 0, x_198);
lean_ctor_set(x_202, 1, x_201);
lean_ctor_set(x_190, 0, x_202);
return x_190;
}
}
else
{
lean_object* x_203; lean_object* x_204; lean_object* x_205; lean_object* x_206; lean_object* x_207; lean_object* x_208; lean_object* x_209; lean_object* x_210; 
x_203 = lean_ctor_get(x_190, 0);
lean_inc(x_203);
lean_dec(x_190);
x_204 = lean_ctor_get(x_203, 0);
lean_inc(x_204);
x_205 = lean_ctor_get(x_203, 1);
lean_inc(x_205);
if (lean_is_exclusive(x_203)) {
 lean_ctor_release(x_203, 0);
 lean_ctor_release(x_203, 1);
 x_206 = x_203;
} else {
 lean_dec_ref(x_203);
 x_206 = lean_box(0);
}
x_207 = l_Lean_Syntax_setArg(x_6, x_5, x_205);
x_208 = l_Lean_Syntax_setArg(x_1, x_5, x_207);
if (lean_is_scalar(x_206)) {
 x_209 = lean_alloc_ctor(0, 2, 0);
} else {
 x_209 = x_206;
}
lean_ctor_set(x_209, 0, x_204);
lean_ctor_set(x_209, 1, x_208);
x_210 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_210, 0, x_209);
return x_210;
}
}
}
}
else
{
lean_object* x_211; lean_object* x_212; 
lean_dec(x_7);
x_211 = l_Lean_Syntax_getArg(x_6, x_5);
x_212 = l_Lean_Elab_Command_expandDeclIdNamespace_x3f(x_211);
if (lean_obj_tag(x_212) == 0)
{
lean_object* x_213; 
lean_dec(x_6);
lean_dec(x_1);
x_213 = lean_box(0);
return x_213;
}
else
{
uint8_t x_214; 
x_214 = !lean_is_exclusive(x_212);
if (x_214 == 0)
{
lean_object* x_215; uint8_t x_216; 
x_215 = lean_ctor_get(x_212, 0);
x_216 = !lean_is_exclusive(x_215);
if (x_216 == 0)
{
lean_object* x_217; lean_object* x_218; lean_object* x_219; 
x_217 = lean_ctor_get(x_215, 1);
x_218 = l_Lean_Syntax_setArg(x_6, x_5, x_217);
x_219 = l_Lean_Syntax_setArg(x_1, x_5, x_218);
lean_ctor_set(x_215, 1, x_219);
return x_212;
}
else
{
lean_object* x_220; lean_object* x_221; lean_object* x_222; lean_object* x_223; lean_object* x_224; 
x_220 = lean_ctor_get(x_215, 0);
x_221 = lean_ctor_get(x_215, 1);
lean_inc(x_221);
lean_inc(x_220);
lean_dec(x_215);
x_222 = l_Lean_Syntax_setArg(x_6, x_5, x_221);
x_223 = l_Lean_Syntax_setArg(x_1, x_5, x_222);
x_224 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_224, 0, x_220);
lean_ctor_set(x_224, 1, x_223);
lean_ctor_set(x_212, 0, x_224);
return x_212;
}
}
else
{
lean_object* x_225; lean_object* x_226; lean_object* x_227; lean_object* x_228; lean_object* x_229; lean_object* x_230; lean_object* x_231; lean_object* x_232; 
x_225 = lean_ctor_get(x_212, 0);
lean_inc(x_225);
lean_dec(x_212);
x_226 = lean_ctor_get(x_225, 0);
lean_inc(x_226);
x_227 = lean_ctor_get(x_225, 1);
lean_inc(x_227);
if (lean_is_exclusive(x_225)) {
 lean_ctor_release(x_225, 0);
 lean_ctor_release(x_225, 1);
 x_228 = x_225;
} else {
 lean_dec_ref(x_225);
 x_228 = lean_box(0);
}
x_229 = l_Lean_Syntax_setArg(x_6, x_5, x_227);
x_230 = l_Lean_Syntax_setArg(x_1, x_5, x_229);
if (lean_is_scalar(x_228)) {
 x_231 = lean_alloc_ctor(0, 2, 0);
} else {
 x_231 = x_228;
}
lean_ctor_set(x_231, 0, x_226);
lean_ctor_set(x_231, 1, x_230);
x_232 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_232, 0, x_231);
return x_232;
}
}
}
}
}
}
lean_object* l_Lean_Elab_Command_elabAxiom_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_3);
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_apply_1(x_2, x_4);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_2);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_apply_1(x_3, x_6);
return x_7;
}
}
}
lean_object* l_Lean_Elab_Command_elabAxiom_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Command_elabAxiom_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_Command_elabAxiom_match__2___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_apply_2(x_2, x_3, x_4);
return x_5;
}
}
lean_object* l_Lean_Elab_Command_elabAxiom_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Command_elabAxiom_match__2___rarg), 2, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_Command_elabAxiom_match__3___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_apply_2(x_2, x_3, x_4);
return x_5;
}
}
lean_object* l_Lean_Elab_Command_elabAxiom_match__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Command_elabAxiom_match__3___rarg), 2, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_Command_elabAxiom_match__4___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 2);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_apply_3(x_2, x_3, x_4, x_5);
return x_6;
}
}
lean_object* l_Lean_Elab_Command_elabAxiom_match__4(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Command_elabAxiom_match__4___rarg), 2, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_Command_elabAxiom_match__5___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_apply_2(x_2, x_3, x_4);
return x_5;
}
}
lean_object* l_Lean_Elab_Command_elabAxiom_match__5(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Command_elabAxiom_match__5___rarg), 2, 0);
return x_2;
}
}
lean_object* l_Lean_throwErrorAt___at_Lean_Elab_Command_elabAxiom___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
uint8_t x_10; 
x_10 = !lean_is_exclusive(x_7);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = lean_ctor_get(x_7, 3);
x_12 = l_Lean_replaceRef(x_1, x_11);
lean_dec(x_11);
lean_ctor_set(x_7, 3, x_12);
x_13 = l_Lean_throwError___at_Lean_Elab_Term_throwErrorIfErrors___spec__1(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_7);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_14 = lean_ctor_get(x_7, 0);
x_15 = lean_ctor_get(x_7, 1);
x_16 = lean_ctor_get(x_7, 2);
x_17 = lean_ctor_get(x_7, 3);
x_18 = lean_ctor_get(x_7, 4);
x_19 = lean_ctor_get(x_7, 5);
lean_inc(x_19);
lean_inc(x_18);
lean_inc(x_17);
lean_inc(x_16);
lean_inc(x_15);
lean_inc(x_14);
lean_dec(x_7);
x_20 = l_Lean_replaceRef(x_1, x_17);
lean_dec(x_17);
x_21 = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(x_21, 0, x_14);
lean_ctor_set(x_21, 1, x_15);
lean_ctor_set(x_21, 2, x_16);
lean_ctor_set(x_21, 3, x_20);
lean_ctor_set(x_21, 4, x_18);
lean_ctor_set(x_21, 5, x_19);
x_22 = l_Lean_throwError___at_Lean_Elab_Term_throwErrorIfErrors___spec__1(x_2, x_3, x_4, x_5, x_6, x_21, x_8, x_9);
lean_dec(x_21);
return x_22;
}
}
}
lean_object* l_Lean_Elab_Command_elabAxiom___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15) {
_start:
{
lean_object* x_16; uint8_t x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_1, 1);
x_17 = 2;
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_9);
lean_inc(x_2);
x_18 = l_Lean_Elab_Term_applyAttributesAt(x_2, x_16, x_17, x_9, x_10, x_11, x_12, x_13, x_14, x_15);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; lean_object* x_20; 
x_19 = lean_ctor_get(x_18, 1);
lean_inc(x_19);
lean_dec(x_18);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
x_20 = l_Lean_Elab_Term_elabType(x_3, x_9, x_10, x_11, x_12, x_13, x_14, x_19);
if (lean_obj_tag(x_20) == 0)
{
lean_object* x_21; lean_object* x_22; uint8_t x_23; lean_object* x_24; lean_object* x_25; 
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_20, 1);
lean_inc(x_22);
lean_dec(x_20);
x_23 = 0;
x_24 = lean_box(0);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
x_25 = l_Lean_Elab_Term_synthesizeSyntheticMVars_loop(x_23, x_24, x_9, x_10, x_11, x_12, x_13, x_14, x_22);
if (lean_obj_tag(x_25) == 0)
{
lean_object* x_26; lean_object* x_27; 
x_26 = lean_ctor_get(x_25, 1);
lean_inc(x_26);
lean_dec(x_25);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
x_27 = l_Lean_Meta_instantiateMVars(x_21, x_11, x_12, x_13, x_14, x_26);
if (lean_obj_tag(x_27) == 0)
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_28 = lean_ctor_get(x_27, 0);
lean_inc(x_28);
x_29 = lean_ctor_get(x_27, 1);
lean_inc(x_29);
lean_dec(x_27);
lean_inc(x_11);
x_30 = l_Lean_Meta_mkForallFVars(x_8, x_28, x_11, x_12, x_13, x_14, x_29);
if (lean_obj_tag(x_30) == 0)
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_31 = lean_ctor_get(x_30, 0);
lean_inc(x_31);
x_32 = lean_ctor_get(x_30, 1);
lean_inc(x_32);
lean_dec(x_30);
lean_inc(x_11);
x_33 = l_Lean_Meta_mkForallUsedOnly(x_4, x_31, x_11, x_12, x_13, x_14, x_32);
if (lean_obj_tag(x_33) == 0)
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_34 = lean_ctor_get(x_33, 0);
lean_inc(x_34);
x_35 = lean_ctor_get(x_33, 1);
lean_inc(x_35);
lean_dec(x_33);
x_36 = lean_ctor_get(x_34, 0);
lean_inc(x_36);
lean_dec(x_34);
x_37 = lean_unsigned_to_nat(1u);
x_38 = l_Lean_Elab_Term_levelMVarToParam(x_36, x_37, x_9, x_10, x_11, x_12, x_13, x_14, x_35);
x_39 = lean_ctor_get(x_38, 0);
lean_inc(x_39);
x_40 = lean_ctor_get(x_38, 1);
lean_inc(x_40);
lean_dec(x_38);
x_41 = lean_ctor_get(x_39, 0);
lean_inc(x_41);
lean_dec(x_39);
x_42 = l_Lean_CollectLevelParams_instInhabitedState___closed__1;
lean_inc(x_41);
x_43 = l_Lean_CollectLevelParams_main(x_41, x_42);
x_44 = lean_ctor_get(x_43, 2);
lean_inc(x_44);
lean_dec(x_43);
x_45 = l_Lean_Elab_sortDeclLevelParams(x_5, x_6, x_44);
if (lean_obj_tag(x_45) == 0)
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; 
lean_dec(x_41);
lean_dec(x_2);
x_46 = lean_ctor_get(x_45, 0);
lean_inc(x_46);
lean_dec(x_45);
x_47 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_47, 0, x_46);
x_48 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_48, 0, x_47);
x_49 = l_Lean_throwErrorAt___at_Lean_Elab_Command_elabAxiom___spec__1(x_7, x_48, x_9, x_10, x_11, x_12, x_13, x_14, x_40);
lean_dec(x_14);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
return x_49;
}
else
{
lean_object* x_50; lean_object* x_51; uint8_t x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; 
x_50 = lean_ctor_get(x_45, 0);
lean_inc(x_50);
lean_dec(x_45);
lean_inc(x_2);
x_51 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_51, 0, x_2);
lean_ctor_set(x_51, 1, x_50);
lean_ctor_set(x_51, 2, x_41);
x_52 = lean_ctor_get_uint8(x_1, sizeof(void*)*2 + 3);
x_53 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_53, 0, x_51);
lean_ctor_set_uint8(x_53, sizeof(void*)*1, x_52);
x_54 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_54, 0, x_53);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_54);
x_55 = l_Lean_Elab_Term_ensureNoUnassignedMVars(x_54, x_9, x_10, x_11, x_12, x_13, x_14, x_40);
if (lean_obj_tag(x_55) == 0)
{
lean_object* x_56; lean_object* x_57; 
x_56 = lean_ctor_get(x_55, 1);
lean_inc(x_56);
lean_dec(x_55);
lean_inc(x_13);
lean_inc(x_9);
x_57 = l_Lean_addDecl___at_Lean_Elab_Term_declareTacticSyntax___spec__1(x_54, x_9, x_10, x_11, x_12, x_13, x_14, x_56);
lean_dec(x_54);
if (lean_obj_tag(x_57) == 0)
{
lean_object* x_58; uint8_t x_59; lean_object* x_60; 
x_58 = lean_ctor_get(x_57, 1);
lean_inc(x_58);
lean_dec(x_57);
x_59 = 0;
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_9);
lean_inc(x_2);
x_60 = l_Lean_Elab_Term_applyAttributesAt(x_2, x_16, x_59, x_9, x_10, x_11, x_12, x_13, x_14, x_58);
if (lean_obj_tag(x_60) == 0)
{
lean_object* x_61; uint8_t x_62; lean_object* x_63; 
x_61 = lean_ctor_get(x_60, 1);
lean_inc(x_61);
lean_dec(x_60);
x_62 = 1;
x_63 = l_Lean_Elab_Term_applyAttributesAt(x_2, x_16, x_62, x_9, x_10, x_11, x_12, x_13, x_14, x_61);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
return x_63;
}
else
{
uint8_t x_64; 
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_2);
x_64 = !lean_is_exclusive(x_60);
if (x_64 == 0)
{
return x_60;
}
else
{
lean_object* x_65; lean_object* x_66; lean_object* x_67; 
x_65 = lean_ctor_get(x_60, 0);
x_66 = lean_ctor_get(x_60, 1);
lean_inc(x_66);
lean_inc(x_65);
lean_dec(x_60);
x_67 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_67, 0, x_65);
lean_ctor_set(x_67, 1, x_66);
return x_67;
}
}
}
else
{
uint8_t x_68; 
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_2);
x_68 = !lean_is_exclusive(x_57);
if (x_68 == 0)
{
return x_57;
}
else
{
lean_object* x_69; lean_object* x_70; lean_object* x_71; 
x_69 = lean_ctor_get(x_57, 0);
x_70 = lean_ctor_get(x_57, 1);
lean_inc(x_70);
lean_inc(x_69);
lean_dec(x_57);
x_71 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_71, 0, x_69);
lean_ctor_set(x_71, 1, x_70);
return x_71;
}
}
}
else
{
uint8_t x_72; 
lean_dec(x_54);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_2);
x_72 = !lean_is_exclusive(x_55);
if (x_72 == 0)
{
return x_55;
}
else
{
lean_object* x_73; lean_object* x_74; lean_object* x_75; 
x_73 = lean_ctor_get(x_55, 0);
x_74 = lean_ctor_get(x_55, 1);
lean_inc(x_74);
lean_inc(x_73);
lean_dec(x_55);
x_75 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_75, 0, x_73);
lean_ctor_set(x_75, 1, x_74);
return x_75;
}
}
}
}
else
{
uint8_t x_76; 
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
x_76 = !lean_is_exclusive(x_33);
if (x_76 == 0)
{
return x_33;
}
else
{
lean_object* x_77; lean_object* x_78; lean_object* x_79; 
x_77 = lean_ctor_get(x_33, 0);
x_78 = lean_ctor_get(x_33, 1);
lean_inc(x_78);
lean_inc(x_77);
lean_dec(x_33);
x_79 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_79, 0, x_77);
lean_ctor_set(x_79, 1, x_78);
return x_79;
}
}
}
else
{
uint8_t x_80; 
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_80 = !lean_is_exclusive(x_30);
if (x_80 == 0)
{
return x_30;
}
else
{
lean_object* x_81; lean_object* x_82; lean_object* x_83; 
x_81 = lean_ctor_get(x_30, 0);
x_82 = lean_ctor_get(x_30, 1);
lean_inc(x_82);
lean_inc(x_81);
lean_dec(x_30);
x_83 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_83, 0, x_81);
lean_ctor_set(x_83, 1, x_82);
return x_83;
}
}
}
else
{
uint8_t x_84; 
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_84 = !lean_is_exclusive(x_27);
if (x_84 == 0)
{
return x_27;
}
else
{
lean_object* x_85; lean_object* x_86; lean_object* x_87; 
x_85 = lean_ctor_get(x_27, 0);
x_86 = lean_ctor_get(x_27, 1);
lean_inc(x_86);
lean_inc(x_85);
lean_dec(x_27);
x_87 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_87, 0, x_85);
lean_ctor_set(x_87, 1, x_86);
return x_87;
}
}
}
else
{
uint8_t x_88; 
lean_dec(x_21);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_88 = !lean_is_exclusive(x_25);
if (x_88 == 0)
{
return x_25;
}
else
{
lean_object* x_89; lean_object* x_90; lean_object* x_91; 
x_89 = lean_ctor_get(x_25, 0);
x_90 = lean_ctor_get(x_25, 1);
lean_inc(x_90);
lean_inc(x_89);
lean_dec(x_25);
x_91 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_91, 0, x_89);
lean_ctor_set(x_91, 1, x_90);
return x_91;
}
}
}
else
{
uint8_t x_92; 
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_92 = !lean_is_exclusive(x_20);
if (x_92 == 0)
{
return x_20;
}
else
{
lean_object* x_93; lean_object* x_94; lean_object* x_95; 
x_93 = lean_ctor_get(x_20, 0);
x_94 = lean_ctor_get(x_20, 1);
lean_inc(x_94);
lean_inc(x_93);
lean_dec(x_20);
x_95 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_95, 0, x_93);
lean_ctor_set(x_95, 1, x_94);
return x_95;
}
}
}
else
{
uint8_t x_96; 
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_96 = !lean_is_exclusive(x_18);
if (x_96 == 0)
{
return x_18;
}
else
{
lean_object* x_97; lean_object* x_98; lean_object* x_99; 
x_97 = lean_ctor_get(x_18, 0);
x_98 = lean_ctor_get(x_18, 1);
lean_inc(x_98);
lean_inc(x_97);
lean_dec(x_18);
x_99 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_99, 0, x_97);
lean_ctor_set(x_99, 1, x_98);
return x_99;
}
}
}
}
lean_object* l_Lean_Elab_Command_elabAxiom___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15) {
_start:
{
lean_object* x_16; lean_object* x_17; uint8_t x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_16 = l_Lean_Syntax_getArgs(x_1);
lean_inc(x_7);
x_17 = lean_alloc_closure((void*)(l_Lean_Elab_Command_elabAxiom___lambda__1___boxed), 15, 7);
lean_closure_set(x_17, 0, x_2);
lean_closure_set(x_17, 1, x_3);
lean_closure_set(x_17, 2, x_4);
lean_closure_set(x_17, 3, x_5);
lean_closure_set(x_17, 4, x_6);
lean_closure_set(x_17, 5, x_7);
lean_closure_set(x_17, 6, x_8);
x_18 = 0;
x_19 = lean_box(x_18);
x_20 = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabBinders___rarg___boxed), 10, 3);
lean_closure_set(x_20, 0, x_16);
lean_closure_set(x_20, 1, x_17);
lean_closure_set(x_20, 2, x_19);
x_21 = l_Lean_Elab_Term_withLevelNames___rarg(x_7, x_20, x_9, x_10, x_11, x_12, x_13, x_14, x_15);
return x_21;
}
}
lean_object* l_Lean_Elab_Command_elabAxiom___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15) {
_start:
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = l_Lean_Elab_Term_resetMessageLog(x_9, x_10, x_11, x_12, x_13, x_14, x_15);
x_17 = lean_ctor_get(x_16, 1);
lean_inc(x_17);
lean_dec(x_16);
lean_inc(x_11);
lean_inc(x_9);
x_18 = l_Lean_Elab_Term_addAutoBoundImplicits(x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_17);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; uint8_t x_22; lean_object* x_23; 
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
x_21 = lean_alloc_closure((void*)(l_Lean_Elab_Command_elabAxiom___lambda__2___boxed), 15, 8);
lean_closure_set(x_21, 0, x_1);
lean_closure_set(x_21, 1, x_2);
lean_closure_set(x_21, 2, x_3);
lean_closure_set(x_21, 3, x_4);
lean_closure_set(x_21, 4, x_19);
lean_closure_set(x_21, 5, x_5);
lean_closure_set(x_21, 6, x_6);
lean_closure_set(x_21, 7, x_7);
x_22 = 0;
x_23 = l_Lean_Elab_Term_withAutoBoundImplicitLocal___rarg(x_21, x_22, x_9, x_10, x_11, x_12, x_13, x_14, x_20);
return x_23;
}
else
{
uint8_t x_24; 
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_24 = !lean_is_exclusive(x_18);
if (x_24 == 0)
{
return x_18;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_25 = lean_ctor_get(x_18, 0);
x_26 = lean_ctor_get(x_18, 1);
lean_inc(x_26);
lean_inc(x_25);
lean_dec(x_18);
x_27 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_27, 0, x_25);
lean_ctor_set(x_27, 1, x_26);
return x_27;
}
}
}
}
lean_object* l_Lean_Elab_Command_elabAxiom(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_6 = lean_unsigned_to_nat(1u);
x_7 = l_Lean_Syntax_getArg(x_2, x_6);
x_8 = lean_unsigned_to_nat(2u);
x_9 = l_Lean_Syntax_getArg(x_2, x_8);
x_10 = l_Lean_Elab_expandDeclSig(x_9);
lean_dec(x_9);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = l_Lean_Elab_Command_getLevelNames___rarg(x_4, x_5);
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
lean_inc(x_3);
x_16 = l_Lean_Elab_Command_expandDeclId(x_7, x_1, x_3, x_4, x_15);
lean_dec(x_7);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; uint8_t x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
x_20 = lean_ctor_get(x_17, 2);
lean_inc(x_20);
lean_dec(x_17);
lean_inc(x_19);
x_21 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_21, 0, x_19);
x_22 = lean_st_ref_get(x_4, x_18);
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_22, 1);
lean_inc(x_24);
lean_dec(x_22);
x_25 = l___private_Lean_Elab_Command_0__Lean_Elab_Command_getVarDecls(x_23);
lean_dec(x_23);
x_26 = lean_alloc_closure((void*)(l_Lean_Elab_Command_elabAxiom___lambda__3___boxed), 15, 7);
lean_closure_set(x_26, 0, x_11);
lean_closure_set(x_26, 1, x_1);
lean_closure_set(x_26, 2, x_19);
lean_closure_set(x_26, 3, x_12);
lean_closure_set(x_26, 4, x_14);
lean_closure_set(x_26, 5, x_20);
lean_closure_set(x_26, 6, x_2);
x_27 = 1;
x_28 = lean_box(x_27);
x_29 = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabBinders___rarg___boxed), 10, 3);
lean_closure_set(x_29, 0, x_25);
lean_closure_set(x_29, 1, x_26);
lean_closure_set(x_29, 2, x_28);
x_30 = lean_box(x_27);
x_31 = lean_alloc_closure((void*)(l_Lean_Elab_Term_withAutoBoundImplicitLocal___rarg___boxed), 9, 2);
lean_closure_set(x_31, 0, x_29);
lean_closure_set(x_31, 1, x_30);
x_32 = l_Lean_Elab_Command_liftTermElabM___rarg(x_21, x_31, x_3, x_4, x_24);
return x_32;
}
else
{
uint8_t x_33; 
lean_dec(x_14);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_33 = !lean_is_exclusive(x_16);
if (x_33 == 0)
{
return x_16;
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_34 = lean_ctor_get(x_16, 0);
x_35 = lean_ctor_get(x_16, 1);
lean_inc(x_35);
lean_inc(x_34);
lean_dec(x_16);
x_36 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_36, 0, x_34);
lean_ctor_set(x_36, 1, x_35);
return x_36;
}
}
}
}
lean_object* l_Lean_throwErrorAt___at_Lean_Elab_Command_elabAxiom___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_throwErrorAt___at_Lean_Elab_Command_elabAxiom___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
return x_10;
}
}
lean_object* l_Lean_Elab_Command_elabAxiom___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15) {
_start:
{
lean_object* x_16; 
x_16 = l_Lean_Elab_Command_elabAxiom___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15);
lean_dec(x_7);
lean_dec(x_1);
return x_16;
}
}
lean_object* l_Lean_Elab_Command_elabAxiom___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15) {
_start:
{
lean_object* x_16; 
x_16 = l_Lean_Elab_Command_elabAxiom___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15);
lean_dec(x_1);
return x_16;
}
}
lean_object* l_Lean_Elab_Command_elabAxiom___lambda__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14, lean_object* x_15) {
_start:
{
lean_object* x_16; 
x_16 = l_Lean_Elab_Command_elabAxiom___lambda__3(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14, x_15);
lean_dec(x_8);
return x_16;
}
}
lean_object* l_Lean_Elab_Command_elabAxiom___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Lean_Elab_Command_elabAxiom(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
return x_6;
}
}
lean_object* l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView_match__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_apply_2(x_2, x_3, x_4);
return x_5;
}
}
lean_object* l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView_match__1___rarg), 2, 0);
return x_2;
}
}
lean_object* l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView_match__2___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 2);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_apply_3(x_2, x_3, x_4, x_5);
return x_6;
}
}
lean_object* l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView_match__2___rarg), 2, 0);
return x_2;
}
}
lean_object* l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView_match__3___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_apply_2(x_2, x_3, x_4);
return x_5;
}
}
lean_object* l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView_match__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView_match__3___rarg), 2, 0);
return x_2;
}
}
lean_object* l_Lean_throwError___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_5 = l_Lean_Elab_Command_getRef(x_2, x_3, x_4);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_5, 1);
lean_inc(x_7);
lean_dec(x_5);
x_8 = lean_ctor_get(x_2, 4);
lean_inc(x_8);
lean_inc(x_8);
x_9 = l_Lean_Elab_getBetterRef(x_6, x_8);
lean_dec(x_6);
x_10 = l_Lean_addMessageContextPartial___at_Lean_Elab_Command_instAddMessageContextCommandElabM___spec__1(x_1, x_2, x_3, x_7);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = l_Lean_Elab_addMacroStack___at_Lean_Elab_Command_instAddErrorMessageContextCommandElabM___spec__1(x_11, x_8, x_2, x_3, x_12);
lean_dec(x_2);
lean_dec(x_8);
x_14 = !lean_is_exclusive(x_13);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; 
x_15 = lean_ctor_get(x_13, 0);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_9);
lean_ctor_set(x_16, 1, x_15);
lean_ctor_set_tag(x_13, 1);
lean_ctor_set(x_13, 0, x_16);
return x_13;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_17 = lean_ctor_get(x_13, 0);
x_18 = lean_ctor_get(x_13, 1);
lean_inc(x_18);
lean_inc(x_17);
lean_dec(x_13);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_9);
lean_ctor_set(x_19, 1, x_17);
x_20 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set(x_20, 1, x_18);
return x_20;
}
}
}
lean_object* l_Lean_Elab_Command_checkValidCtorModifier___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__1___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_6 = lean_ctor_get(x_1, 1);
x_7 = lean_array_get_size(x_6);
x_8 = lean_unsigned_to_nat(0u);
x_9 = lean_nat_dec_eq(x_7, x_8);
lean_dec(x_7);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; 
x_10 = l_Lean_Elab_Command_checkValidCtorModifier___rarg___lambda__1___closed__3;
x_11 = l_Lean_throwError___at_Lean_Elab_Command_elabEnd___spec__1(x_10, x_3, x_4, x_5);
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; 
lean_dec(x_3);
x_12 = lean_box(0);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_5);
return x_13;
}
}
}
lean_object* l_Lean_Elab_Command_checkValidCtorModifier___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__1___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; 
x_6 = lean_ctor_get_uint8(x_1, sizeof(void*)*2 + 3);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_box(0);
x_8 = l_Lean_Elab_Command_checkValidCtorModifier___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__1___lambda__1(x_1, x_7, x_3, x_4, x_5);
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_9 = l_Lean_Elab_Command_checkValidCtorModifier___rarg___lambda__2___closed__3;
x_10 = l_Lean_throwError___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__2(x_9, x_3, x_4, x_5);
x_11 = !lean_is_exclusive(x_10);
if (x_11 == 0)
{
return x_10;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = lean_ctor_get(x_10, 0);
x_13 = lean_ctor_get(x_10, 1);
lean_inc(x_13);
lean_inc(x_12);
lean_dec(x_10);
x_14 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_14, 0, x_12);
lean_ctor_set(x_14, 1, x_13);
return x_14;
}
}
}
}
lean_object* l_Lean_Elab_Command_checkValidCtorModifier___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__1___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; 
x_6 = lean_ctor_get_uint8(x_1, sizeof(void*)*2 + 2);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_box(0);
x_8 = l_Lean_Elab_Command_checkValidCtorModifier___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__1___lambda__2(x_1, x_7, x_3, x_4, x_5);
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_9 = l_Lean_Elab_Command_checkValidCtorModifier___rarg___lambda__3___closed__3;
x_10 = l_Lean_throwError___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__2(x_9, x_3, x_4, x_5);
x_11 = !lean_is_exclusive(x_10);
if (x_11 == 0)
{
return x_10;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = lean_ctor_get(x_10, 0);
x_13 = lean_ctor_get(x_10, 1);
lean_inc(x_13);
lean_inc(x_12);
lean_dec(x_10);
x_14 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_14, 0, x_12);
lean_ctor_set(x_14, 1, x_13);
return x_14;
}
}
}
}
lean_object* l_Lean_Elab_Command_checkValidCtorModifier___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = lean_ctor_get_uint8(x_1, sizeof(void*)*2 + 1);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_box(0);
x_7 = l_Lean_Elab_Command_checkValidCtorModifier___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__1___lambda__3(x_1, x_6, x_2, x_3, x_4);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_8 = l_Lean_Elab_Command_checkValidCtorModifier___rarg___closed__3;
x_9 = l_Lean_throwError___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__2(x_8, x_2, x_3, x_4);
x_10 = !lean_is_exclusive(x_9);
if (x_10 == 0)
{
return x_9;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = lean_ctor_get(x_9, 0);
x_12 = lean_ctor_get(x_9, 1);
lean_inc(x_12);
lean_inc(x_11);
lean_dec(x_9);
x_13 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_13, 0, x_11);
lean_ctor_set(x_13, 1, x_12);
return x_13;
}
}
}
}
lean_object* l_Lean_Elab_checkNotAlreadyDeclared___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__4___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_private_to_user_name(x_1);
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_8; lean_object* x_9; 
lean_dec(x_4);
lean_dec(x_2);
x_8 = lean_box(0);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_9, 1, x_6);
return x_9;
}
else
{
lean_object* x_10; uint8_t x_11; 
x_10 = lean_ctor_get(x_7, 0);
lean_inc(x_10);
lean_dec(x_7);
x_11 = l_Lean_Environment_contains(x_2, x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; 
lean_dec(x_10);
lean_dec(x_4);
x_12 = lean_box(0);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_6);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_14 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_14, 0, x_10);
x_15 = l_Lean_Elab_checkNotAlreadyDeclared___rarg___lambda__1___closed__2;
x_16 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_16, 0, x_15);
lean_ctor_set(x_16, 1, x_14);
x_17 = l_Lean_Elab_throwAlreadyDeclaredUniverseLevel___rarg___closed__3;
x_18 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_18, 0, x_16);
lean_ctor_set(x_18, 1, x_17);
x_19 = l_Lean_throwError___at_Lean_Elab_Command_elabEnd___spec__1(x_18, x_4, x_5, x_6);
return x_19;
}
}
}
}
lean_object* l_Lean_Elab_checkNotAlreadyDeclared___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__4___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; uint8_t x_8; 
lean_inc(x_1);
lean_inc(x_2);
x_7 = l_Lean_mkPrivateName(x_2, x_1);
lean_inc(x_2);
x_8 = l_Lean_Environment_contains(x_2, x_7);
lean_dec(x_7);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_box(0);
x_10 = l_Lean_Elab_checkNotAlreadyDeclared___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__4___lambda__1(x_1, x_2, x_9, x_4, x_5, x_6);
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; 
lean_dec(x_2);
x_11 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_11, 0, x_1);
x_12 = l_Lean_Elab_checkNotAlreadyDeclared___rarg___lambda__2___closed__2;
x_13 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_11);
x_14 = l_Lean_Elab_throwAlreadyDeclaredUniverseLevel___rarg___closed__3;
x_15 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_15, 0, x_13);
lean_ctor_set(x_15, 1, x_14);
x_16 = l_Lean_throwError___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__2(x_15, x_4, x_5, x_6);
x_17 = !lean_is_exclusive(x_16);
if (x_17 == 0)
{
return x_16;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_16, 0);
x_19 = lean_ctor_get(x_16, 1);
lean_inc(x_19);
lean_inc(x_18);
lean_dec(x_16);
x_20 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_20, 0, x_18);
lean_ctor_set(x_20, 1, x_19);
return x_20;
}
}
}
}
lean_object* l_Lean_Elab_checkNotAlreadyDeclared___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_5 = lean_st_ref_get(x_3, x_4);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_5, 1);
lean_inc(x_7);
lean_dec(x_5);
x_8 = lean_ctor_get(x_6, 0);
lean_inc(x_8);
lean_dec(x_6);
lean_inc(x_8);
x_9 = l_Lean_Environment_contains(x_8, x_1);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_box(0);
x_11 = l_Lean_Elab_checkNotAlreadyDeclared___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__4___lambda__2(x_1, x_8, x_10, x_2, x_3, x_7);
return x_11;
}
else
{
lean_object* x_12; 
lean_dec(x_8);
lean_inc(x_1);
x_12 = lean_private_to_user_name(x_1);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; uint8_t x_19; 
x_13 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_13, 0, x_1);
x_14 = l_Lean_KernelException_toMessageData___closed__3;
x_15 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set(x_15, 1, x_13);
x_16 = l_Lean_Elab_throwAlreadyDeclaredUniverseLevel___rarg___closed__3;
x_17 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_17, 0, x_15);
lean_ctor_set(x_17, 1, x_16);
x_18 = l_Lean_throwError___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__2(x_17, x_2, x_3, x_7);
x_19 = !lean_is_exclusive(x_18);
if (x_19 == 0)
{
return x_18;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_20 = lean_ctor_get(x_18, 0);
x_21 = lean_ctor_get(x_18, 1);
lean_inc(x_21);
lean_inc(x_20);
lean_dec(x_18);
x_22 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_22, 0, x_20);
lean_ctor_set(x_22, 1, x_21);
return x_22;
}
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; uint8_t x_30; 
lean_dec(x_1);
x_23 = lean_ctor_get(x_12, 0);
lean_inc(x_23);
lean_dec(x_12);
x_24 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_24, 0, x_23);
x_25 = l_Lean_Elab_checkNotAlreadyDeclared___rarg___lambda__3___closed__2;
x_26 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_26, 0, x_25);
lean_ctor_set(x_26, 1, x_24);
x_27 = l_Lean_Elab_throwAlreadyDeclaredUniverseLevel___rarg___closed__3;
x_28 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_28, 0, x_26);
lean_ctor_set(x_28, 1, x_27);
x_29 = l_Lean_throwError___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__2(x_28, x_2, x_3, x_7);
x_30 = !lean_is_exclusive(x_29);
if (x_30 == 0)
{
return x_29;
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_31 = lean_ctor_get(x_29, 0);
x_32 = lean_ctor_get(x_29, 1);
lean_inc(x_32);
lean_inc(x_31);
lean_dec(x_29);
x_33 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_33, 0, x_31);
lean_ctor_set(x_33, 1, x_32);
return x_33;
}
}
}
}
}
lean_object* l_Lean_setEnv___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__5(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_5 = lean_st_ref_take(x_3, x_4);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_5, 1);
lean_inc(x_7);
lean_dec(x_5);
x_8 = !lean_is_exclusive(x_6);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_9 = lean_ctor_get(x_6, 0);
lean_dec(x_9);
lean_ctor_set(x_6, 0, x_1);
x_10 = lean_st_ref_set(x_3, x_6, x_7);
x_11 = !lean_is_exclusive(x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_ctor_get(x_10, 0);
lean_dec(x_12);
x_13 = lean_box(0);
lean_ctor_set(x_10, 0, x_13);
return x_10;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_ctor_get(x_10, 1);
lean_inc(x_14);
lean_dec(x_10);
x_15 = lean_box(0);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_15);
lean_ctor_set(x_16, 1, x_14);
return x_16;
}
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_17 = lean_ctor_get(x_6, 1);
x_18 = lean_ctor_get(x_6, 2);
x_19 = lean_ctor_get(x_6, 3);
x_20 = lean_ctor_get(x_6, 4);
x_21 = lean_ctor_get(x_6, 5);
x_22 = lean_ctor_get(x_6, 6);
lean_inc(x_22);
lean_inc(x_21);
lean_inc(x_20);
lean_inc(x_19);
lean_inc(x_18);
lean_inc(x_17);
lean_dec(x_6);
x_23 = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(x_23, 0, x_1);
lean_ctor_set(x_23, 1, x_17);
lean_ctor_set(x_23, 2, x_18);
lean_ctor_set(x_23, 3, x_19);
lean_ctor_set(x_23, 4, x_20);
lean_ctor_set(x_23, 5, x_21);
lean_ctor_set(x_23, 6, x_22);
x_24 = lean_st_ref_set(x_3, x_23, x_7);
x_25 = lean_ctor_get(x_24, 1);
lean_inc(x_25);
if (lean_is_exclusive(x_24)) {
 lean_ctor_release(x_24, 0);
 lean_ctor_release(x_24, 1);
 x_26 = x_24;
} else {
 lean_dec_ref(x_24);
 x_26 = lean_box(0);
}
x_27 = lean_box(0);
if (lean_is_scalar(x_26)) {
 x_28 = lean_alloc_ctor(0, 2, 0);
} else {
 x_28 = x_26;
}
lean_ctor_set(x_28, 0, x_27);
lean_ctor_set(x_28, 1, x_25);
return x_28;
}
}
}
lean_object* l_Lean_Elab_applyVisibility___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__3(uint8_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
switch (x_1) {
case 0:
{
lean_object* x_6; 
lean_inc(x_2);
x_6 = l_Lean_Elab_checkNotAlreadyDeclared___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__4(x_2, x_3, x_4, x_5);
if (lean_obj_tag(x_6) == 0)
{
uint8_t x_7; 
x_7 = !lean_is_exclusive(x_6);
if (x_7 == 0)
{
lean_object* x_8; 
x_8 = lean_ctor_get(x_6, 0);
lean_dec(x_8);
lean_ctor_set(x_6, 0, x_2);
return x_6;
}
else
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_ctor_get(x_6, 1);
lean_inc(x_9);
lean_dec(x_6);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_2);
lean_ctor_set(x_10, 1, x_9);
return x_10;
}
}
else
{
uint8_t x_11; 
lean_dec(x_2);
x_11 = !lean_is_exclusive(x_6);
if (x_11 == 0)
{
return x_6;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = lean_ctor_get(x_6, 0);
x_13 = lean_ctor_get(x_6, 1);
lean_inc(x_13);
lean_inc(x_12);
lean_dec(x_6);
x_14 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_14, 0, x_12);
lean_ctor_set(x_14, 1, x_13);
return x_14;
}
}
}
case 1:
{
lean_object* x_15; 
lean_inc(x_3);
lean_inc(x_2);
x_15 = l_Lean_Elab_checkNotAlreadyDeclared___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__4(x_2, x_3, x_4, x_5);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; uint8_t x_24; 
x_16 = lean_ctor_get(x_15, 1);
lean_inc(x_16);
lean_dec(x_15);
x_17 = lean_st_ref_get(x_4, x_16);
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
x_20 = lean_ctor_get(x_18, 0);
lean_inc(x_20);
lean_dec(x_18);
x_21 = l_Lean_protectedExt;
lean_inc(x_2);
x_22 = l_Lean_PersistentEnvExtension_addEntry___rarg(x_21, x_20, x_2);
x_23 = l_Lean_setEnv___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__5(x_22, x_3, x_4, x_19);
lean_dec(x_3);
x_24 = !lean_is_exclusive(x_23);
if (x_24 == 0)
{
lean_object* x_25; 
x_25 = lean_ctor_get(x_23, 0);
lean_dec(x_25);
lean_ctor_set(x_23, 0, x_2);
return x_23;
}
else
{
lean_object* x_26; lean_object* x_27; 
x_26 = lean_ctor_get(x_23, 1);
lean_inc(x_26);
lean_dec(x_23);
x_27 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_27, 0, x_2);
lean_ctor_set(x_27, 1, x_26);
return x_27;
}
}
else
{
uint8_t x_28; 
lean_dec(x_3);
lean_dec(x_2);
x_28 = !lean_is_exclusive(x_15);
if (x_28 == 0)
{
return x_15;
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_29 = lean_ctor_get(x_15, 0);
x_30 = lean_ctor_get(x_15, 1);
lean_inc(x_30);
lean_inc(x_29);
lean_dec(x_15);
x_31 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_31, 0, x_29);
lean_ctor_set(x_31, 1, x_30);
return x_31;
}
}
}
default: 
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_32 = lean_st_ref_get(x_4, x_5);
x_33 = lean_ctor_get(x_32, 0);
lean_inc(x_33);
x_34 = lean_ctor_get(x_32, 1);
lean_inc(x_34);
lean_dec(x_32);
x_35 = lean_ctor_get(x_33, 0);
lean_inc(x_35);
lean_dec(x_33);
x_36 = l_Lean_mkPrivateName(x_35, x_2);
lean_inc(x_36);
x_37 = l_Lean_Elab_checkNotAlreadyDeclared___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__4(x_36, x_3, x_4, x_34);
if (lean_obj_tag(x_37) == 0)
{
uint8_t x_38; 
x_38 = !lean_is_exclusive(x_37);
if (x_38 == 0)
{
lean_object* x_39; 
x_39 = lean_ctor_get(x_37, 0);
lean_dec(x_39);
lean_ctor_set(x_37, 0, x_36);
return x_37;
}
else
{
lean_object* x_40; lean_object* x_41; 
x_40 = lean_ctor_get(x_37, 1);
lean_inc(x_40);
lean_dec(x_37);
x_41 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_41, 0, x_36);
lean_ctor_set(x_41, 1, x_40);
return x_41;
}
}
else
{
uint8_t x_42; 
lean_dec(x_36);
x_42 = !lean_is_exclusive(x_37);
if (x_42 == 0)
{
return x_37;
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_43 = lean_ctor_get(x_37, 0);
x_44 = lean_ctor_get(x_37, 1);
lean_inc(x_44);
lean_inc(x_43);
lean_dec(x_37);
x_45 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_45, 0, x_43);
lean_ctor_set(x_45, 1, x_44);
return x_45;
}
}
}
}
}
}
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__6___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
lean_inc(x_5);
x_8 = l_Lean_Elab_Command_checkValidCtorModifier___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__1(x_1, x_5, x_6, x_7);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; uint8_t x_19; 
x_9 = lean_ctor_get(x_8, 1);
lean_inc(x_9);
lean_dec(x_8);
x_10 = lean_unsigned_to_nat(2u);
x_11 = l_Lean_Syntax_getIdAt(x_2, x_10);
x_12 = l_Lean_Name_append(x_3, x_11);
x_13 = l_Lean_Syntax_getArg(x_2, x_10);
x_14 = lean_ctor_get_uint8(x_1, sizeof(void*)*2);
x_15 = l_Lean_Elab_Command_getRef(x_5, x_6, x_9);
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
lean_dec(x_15);
x_18 = l_Lean_replaceRef(x_13, x_16);
lean_dec(x_16);
lean_dec(x_13);
x_19 = !lean_is_exclusive(x_5);
if (x_19 == 0)
{
lean_object* x_20; lean_object* x_21; 
x_20 = lean_ctor_get(x_5, 6);
lean_dec(x_20);
lean_ctor_set(x_5, 6, x_18);
x_21 = l_Lean_Elab_applyVisibility___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__3(x_14, x_12, x_5, x_6, x_17);
if (lean_obj_tag(x_21) == 0)
{
uint8_t x_22; 
x_22 = !lean_is_exclusive(x_21);
if (x_22 == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; uint8_t x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_23 = lean_ctor_get(x_21, 0);
x_24 = lean_unsigned_to_nat(3u);
x_25 = l_Lean_Syntax_getArg(x_2, x_24);
x_26 = l_Lean_Syntax_isNone(x_25);
lean_dec(x_25);
x_27 = lean_unsigned_to_nat(4u);
x_28 = l_Lean_Syntax_getArg(x_2, x_27);
x_29 = l_Lean_Elab_expandOptDeclSig(x_28);
lean_dec(x_28);
if (x_26 == 0)
{
lean_object* x_30; lean_object* x_31; uint8_t x_32; lean_object* x_33; 
x_30 = lean_ctor_get(x_29, 0);
lean_inc(x_30);
x_31 = lean_ctor_get(x_29, 1);
lean_inc(x_31);
lean_dec(x_29);
x_32 = 1;
x_33 = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(x_33, 0, x_2);
lean_ctor_set(x_33, 1, x_1);
lean_ctor_set(x_33, 2, x_23);
lean_ctor_set(x_33, 3, x_30);
lean_ctor_set(x_33, 4, x_31);
lean_ctor_set_uint8(x_33, sizeof(void*)*5, x_32);
lean_ctor_set(x_21, 0, x_33);
return x_21;
}
else
{
lean_object* x_34; lean_object* x_35; uint8_t x_36; lean_object* x_37; 
x_34 = lean_ctor_get(x_29, 0);
lean_inc(x_34);
x_35 = lean_ctor_get(x_29, 1);
lean_inc(x_35);
lean_dec(x_29);
x_36 = 0;
x_37 = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(x_37, 0, x_2);
lean_ctor_set(x_37, 1, x_1);
lean_ctor_set(x_37, 2, x_23);
lean_ctor_set(x_37, 3, x_34);
lean_ctor_set(x_37, 4, x_35);
lean_ctor_set_uint8(x_37, sizeof(void*)*5, x_36);
lean_ctor_set(x_21, 0, x_37);
return x_21;
}
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; uint8_t x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_38 = lean_ctor_get(x_21, 0);
x_39 = lean_ctor_get(x_21, 1);
lean_inc(x_39);
lean_inc(x_38);
lean_dec(x_21);
x_40 = lean_unsigned_to_nat(3u);
x_41 = l_Lean_Syntax_getArg(x_2, x_40);
x_42 = l_Lean_Syntax_isNone(x_41);
lean_dec(x_41);
x_43 = lean_unsigned_to_nat(4u);
x_44 = l_Lean_Syntax_getArg(x_2, x_43);
x_45 = l_Lean_Elab_expandOptDeclSig(x_44);
lean_dec(x_44);
if (x_42 == 0)
{
lean_object* x_46; lean_object* x_47; uint8_t x_48; lean_object* x_49; lean_object* x_50; 
x_46 = lean_ctor_get(x_45, 0);
lean_inc(x_46);
x_47 = lean_ctor_get(x_45, 1);
lean_inc(x_47);
lean_dec(x_45);
x_48 = 1;
x_49 = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(x_49, 0, x_2);
lean_ctor_set(x_49, 1, x_1);
lean_ctor_set(x_49, 2, x_38);
lean_ctor_set(x_49, 3, x_46);
lean_ctor_set(x_49, 4, x_47);
lean_ctor_set_uint8(x_49, sizeof(void*)*5, x_48);
x_50 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_50, 0, x_49);
lean_ctor_set(x_50, 1, x_39);
return x_50;
}
else
{
lean_object* x_51; lean_object* x_52; uint8_t x_53; lean_object* x_54; lean_object* x_55; 
x_51 = lean_ctor_get(x_45, 0);
lean_inc(x_51);
x_52 = lean_ctor_get(x_45, 1);
lean_inc(x_52);
lean_dec(x_45);
x_53 = 0;
x_54 = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(x_54, 0, x_2);
lean_ctor_set(x_54, 1, x_1);
lean_ctor_set(x_54, 2, x_38);
lean_ctor_set(x_54, 3, x_51);
lean_ctor_set(x_54, 4, x_52);
lean_ctor_set_uint8(x_54, sizeof(void*)*5, x_53);
x_55 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_55, 0, x_54);
lean_ctor_set(x_55, 1, x_39);
return x_55;
}
}
}
else
{
uint8_t x_56; 
lean_dec(x_2);
lean_dec(x_1);
x_56 = !lean_is_exclusive(x_21);
if (x_56 == 0)
{
return x_21;
}
else
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; 
x_57 = lean_ctor_get(x_21, 0);
x_58 = lean_ctor_get(x_21, 1);
lean_inc(x_58);
lean_inc(x_57);
lean_dec(x_21);
x_59 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_59, 0, x_57);
lean_ctor_set(x_59, 1, x_58);
return x_59;
}
}
}
else
{
lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; 
x_60 = lean_ctor_get(x_5, 0);
x_61 = lean_ctor_get(x_5, 1);
x_62 = lean_ctor_get(x_5, 2);
x_63 = lean_ctor_get(x_5, 3);
x_64 = lean_ctor_get(x_5, 4);
x_65 = lean_ctor_get(x_5, 5);
lean_inc(x_65);
lean_inc(x_64);
lean_inc(x_63);
lean_inc(x_62);
lean_inc(x_61);
lean_inc(x_60);
lean_dec(x_5);
x_66 = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(x_66, 0, x_60);
lean_ctor_set(x_66, 1, x_61);
lean_ctor_set(x_66, 2, x_62);
lean_ctor_set(x_66, 3, x_63);
lean_ctor_set(x_66, 4, x_64);
lean_ctor_set(x_66, 5, x_65);
lean_ctor_set(x_66, 6, x_18);
x_67 = l_Lean_Elab_applyVisibility___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__3(x_14, x_12, x_66, x_6, x_17);
if (lean_obj_tag(x_67) == 0)
{
lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; uint8_t x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; 
x_68 = lean_ctor_get(x_67, 0);
lean_inc(x_68);
x_69 = lean_ctor_get(x_67, 1);
lean_inc(x_69);
if (lean_is_exclusive(x_67)) {
 lean_ctor_release(x_67, 0);
 lean_ctor_release(x_67, 1);
 x_70 = x_67;
} else {
 lean_dec_ref(x_67);
 x_70 = lean_box(0);
}
x_71 = lean_unsigned_to_nat(3u);
x_72 = l_Lean_Syntax_getArg(x_2, x_71);
x_73 = l_Lean_Syntax_isNone(x_72);
lean_dec(x_72);
x_74 = lean_unsigned_to_nat(4u);
x_75 = l_Lean_Syntax_getArg(x_2, x_74);
x_76 = l_Lean_Elab_expandOptDeclSig(x_75);
lean_dec(x_75);
if (x_73 == 0)
{
lean_object* x_77; lean_object* x_78; uint8_t x_79; lean_object* x_80; lean_object* x_81; 
x_77 = lean_ctor_get(x_76, 0);
lean_inc(x_77);
x_78 = lean_ctor_get(x_76, 1);
lean_inc(x_78);
lean_dec(x_76);
x_79 = 1;
x_80 = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(x_80, 0, x_2);
lean_ctor_set(x_80, 1, x_1);
lean_ctor_set(x_80, 2, x_68);
lean_ctor_set(x_80, 3, x_77);
lean_ctor_set(x_80, 4, x_78);
lean_ctor_set_uint8(x_80, sizeof(void*)*5, x_79);
if (lean_is_scalar(x_70)) {
 x_81 = lean_alloc_ctor(0, 2, 0);
} else {
 x_81 = x_70;
}
lean_ctor_set(x_81, 0, x_80);
lean_ctor_set(x_81, 1, x_69);
return x_81;
}
else
{
lean_object* x_82; lean_object* x_83; uint8_t x_84; lean_object* x_85; lean_object* x_86; 
x_82 = lean_ctor_get(x_76, 0);
lean_inc(x_82);
x_83 = lean_ctor_get(x_76, 1);
lean_inc(x_83);
lean_dec(x_76);
x_84 = 0;
x_85 = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(x_85, 0, x_2);
lean_ctor_set(x_85, 1, x_1);
lean_ctor_set(x_85, 2, x_68);
lean_ctor_set(x_85, 3, x_82);
lean_ctor_set(x_85, 4, x_83);
lean_ctor_set_uint8(x_85, sizeof(void*)*5, x_84);
if (lean_is_scalar(x_70)) {
 x_86 = lean_alloc_ctor(0, 2, 0);
} else {
 x_86 = x_70;
}
lean_ctor_set(x_86, 0, x_85);
lean_ctor_set(x_86, 1, x_69);
return x_86;
}
}
else
{
lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; 
lean_dec(x_2);
lean_dec(x_1);
x_87 = lean_ctor_get(x_67, 0);
lean_inc(x_87);
x_88 = lean_ctor_get(x_67, 1);
lean_inc(x_88);
if (lean_is_exclusive(x_67)) {
 lean_ctor_release(x_67, 0);
 lean_ctor_release(x_67, 1);
 x_89 = x_67;
} else {
 lean_dec_ref(x_67);
 x_89 = lean_box(0);
}
if (lean_is_scalar(x_89)) {
 x_90 = lean_alloc_ctor(1, 2, 0);
} else {
 x_90 = x_89;
}
lean_ctor_set(x_90, 0, x_87);
lean_ctor_set(x_90, 1, x_88);
return x_90;
}
}
}
else
{
uint8_t x_91; 
lean_dec(x_5);
lean_dec(x_2);
lean_dec(x_1);
x_91 = !lean_is_exclusive(x_8);
if (x_91 == 0)
{
return x_8;
}
else
{
lean_object* x_92; lean_object* x_93; lean_object* x_94; 
x_92 = lean_ctor_get(x_8, 0);
x_93 = lean_ctor_get(x_8, 1);
lean_inc(x_93);
lean_inc(x_92);
lean_dec(x_8);
x_94 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_94, 0, x_92);
lean_ctor_set(x_94, 1, x_93);
return x_94;
}
}
}
}
static lean_object* _init_l_Array_mapMUnsafe_map___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__6___lambda__2___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("invalid 'protected' constructor in a 'private' inductive datatype");
return x_1;
}
}
static lean_object* _init_l_Array_mapMUnsafe_map___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__6___lambda__2___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Array_mapMUnsafe_map___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__6___lambda__2___closed__1;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Array_mapMUnsafe_map___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__6___lambda__2___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Array_mapMUnsafe_map___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__6___lambda__2___closed__2;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__6___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
uint8_t x_9; 
x_9 = l_Lean_Elab_Modifiers_isProtected(x_1);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_box(0);
x_11 = l_Array_mapMUnsafe_map___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__6___lambda__1(x_1, x_2, x_3, x_10, x_6, x_7, x_8);
return x_11;
}
else
{
uint8_t x_12; 
x_12 = l_Lean_Elab_Modifiers_isPrivate(x_4);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; 
x_13 = lean_box(0);
x_14 = l_Array_mapMUnsafe_map___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__6___lambda__1(x_1, x_2, x_3, x_13, x_6, x_7, x_8);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; uint8_t x_17; 
lean_dec(x_2);
lean_dec(x_1);
x_15 = l_Array_mapMUnsafe_map___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__6___lambda__2___closed__3;
x_16 = l_Lean_throwError___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__2(x_15, x_6, x_7, x_8);
x_17 = !lean_is_exclusive(x_16);
if (x_17 == 0)
{
return x_16;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_16, 0);
x_19 = lean_ctor_get(x_16, 1);
lean_inc(x_19);
lean_inc(x_18);
lean_dec(x_16);
x_20 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_20, 0, x_18);
lean_ctor_set(x_20, 1, x_19);
return x_20;
}
}
}
}
}
static lean_object* _init_l_Array_mapMUnsafe_map___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__6___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("invalid 'private' constructor in a 'private' inductive datatype");
return x_1;
}
}
static lean_object* _init_l_Array_mapMUnsafe_map___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__6___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Array_mapMUnsafe_map___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__6___closed__1;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Array_mapMUnsafe_map___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__6___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Array_mapMUnsafe_map___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__6___closed__2;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__6(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
uint8_t x_9; 
x_9 = x_4 < x_3;
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; 
lean_dec(x_7);
x_10 = x_5;
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_8);
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_12 = lean_array_uget(x_5, x_4);
x_13 = lean_unsigned_to_nat(0u);
x_14 = lean_array_uset(x_5, x_4, x_13);
x_23 = x_12;
x_24 = lean_unsigned_to_nat(1u);
x_25 = l_Lean_Syntax_getArg(x_23, x_24);
x_26 = l_Lean_Elab_Command_getRef(x_6, x_7, x_8);
x_27 = lean_ctor_get(x_26, 0);
lean_inc(x_27);
x_28 = lean_ctor_get(x_26, 1);
lean_inc(x_28);
lean_dec(x_26);
x_29 = l_Lean_replaceRef(x_23, x_27);
lean_dec(x_27);
x_30 = lean_ctor_get(x_6, 0);
x_31 = lean_ctor_get(x_6, 1);
x_32 = lean_ctor_get(x_6, 2);
x_33 = lean_ctor_get(x_6, 3);
x_34 = lean_ctor_get(x_6, 4);
x_35 = lean_ctor_get(x_6, 5);
lean_inc(x_35);
lean_inc(x_34);
lean_inc(x_33);
lean_inc(x_32);
lean_inc(x_31);
lean_inc(x_30);
x_36 = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(x_36, 0, x_30);
lean_ctor_set(x_36, 1, x_31);
lean_ctor_set(x_36, 2, x_32);
lean_ctor_set(x_36, 3, x_33);
lean_ctor_set(x_36, 4, x_34);
lean_ctor_set(x_36, 5, x_35);
lean_ctor_set(x_36, 6, x_29);
lean_inc(x_7);
lean_inc(x_36);
x_37 = l_Lean_Elab_elabModifiers___at_Lean_Elab_Command_elabMutualDef___spec__1(x_25, x_36, x_7, x_28);
lean_dec(x_25);
if (lean_obj_tag(x_37) == 0)
{
lean_object* x_38; lean_object* x_39; uint8_t x_40; 
x_38 = lean_ctor_get(x_37, 0);
lean_inc(x_38);
x_39 = lean_ctor_get(x_37, 1);
lean_inc(x_39);
lean_dec(x_37);
x_40 = l_Lean_Elab_Modifiers_isPrivate(x_38);
if (x_40 == 0)
{
lean_object* x_41; lean_object* x_42; 
x_41 = lean_box(0);
x_42 = l_Array_mapMUnsafe_map___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__6___lambda__2(x_38, x_23, x_2, x_1, x_41, x_36, x_7, x_39);
if (lean_obj_tag(x_42) == 0)
{
lean_object* x_43; lean_object* x_44; 
x_43 = lean_ctor_get(x_42, 0);
lean_inc(x_43);
x_44 = lean_ctor_get(x_42, 1);
lean_inc(x_44);
lean_dec(x_42);
x_15 = x_43;
x_16 = x_44;
goto block_22;
}
else
{
uint8_t x_45; 
lean_dec(x_14);
lean_dec(x_7);
x_45 = !lean_is_exclusive(x_42);
if (x_45 == 0)
{
return x_42;
}
else
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; 
x_46 = lean_ctor_get(x_42, 0);
x_47 = lean_ctor_get(x_42, 1);
lean_inc(x_47);
lean_inc(x_46);
lean_dec(x_42);
x_48 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_48, 0, x_46);
lean_ctor_set(x_48, 1, x_47);
return x_48;
}
}
}
else
{
uint8_t x_49; 
x_49 = l_Lean_Elab_Modifiers_isPrivate(x_1);
if (x_49 == 0)
{
lean_object* x_50; lean_object* x_51; 
x_50 = lean_box(0);
x_51 = l_Array_mapMUnsafe_map___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__6___lambda__2(x_38, x_23, x_2, x_1, x_50, x_36, x_7, x_39);
if (lean_obj_tag(x_51) == 0)
{
lean_object* x_52; lean_object* x_53; 
x_52 = lean_ctor_get(x_51, 0);
lean_inc(x_52);
x_53 = lean_ctor_get(x_51, 1);
lean_inc(x_53);
lean_dec(x_51);
x_15 = x_52;
x_16 = x_53;
goto block_22;
}
else
{
uint8_t x_54; 
lean_dec(x_14);
lean_dec(x_7);
x_54 = !lean_is_exclusive(x_51);
if (x_54 == 0)
{
return x_51;
}
else
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; 
x_55 = lean_ctor_get(x_51, 0);
x_56 = lean_ctor_get(x_51, 1);
lean_inc(x_56);
lean_inc(x_55);
lean_dec(x_51);
x_57 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_57, 0, x_55);
lean_ctor_set(x_57, 1, x_56);
return x_57;
}
}
}
else
{
lean_object* x_58; lean_object* x_59; uint8_t x_60; 
lean_dec(x_38);
lean_dec(x_23);
lean_dec(x_14);
x_58 = l_Array_mapMUnsafe_map___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__6___closed__3;
x_59 = l_Lean_throwError___at_Lean_Elab_Command_elabCommand___spec__12(x_58, x_36, x_7, x_39);
lean_dec(x_7);
x_60 = !lean_is_exclusive(x_59);
if (x_60 == 0)
{
return x_59;
}
else
{
lean_object* x_61; lean_object* x_62; lean_object* x_63; 
x_61 = lean_ctor_get(x_59, 0);
x_62 = lean_ctor_get(x_59, 1);
lean_inc(x_62);
lean_inc(x_61);
lean_dec(x_59);
x_63 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_63, 0, x_61);
lean_ctor_set(x_63, 1, x_62);
return x_63;
}
}
}
}
else
{
uint8_t x_64; 
lean_dec(x_36);
lean_dec(x_23);
lean_dec(x_14);
lean_dec(x_7);
x_64 = !lean_is_exclusive(x_37);
if (x_64 == 0)
{
return x_37;
}
else
{
lean_object* x_65; lean_object* x_66; lean_object* x_67; 
x_65 = lean_ctor_get(x_37, 0);
x_66 = lean_ctor_get(x_37, 1);
lean_inc(x_66);
lean_inc(x_65);
lean_dec(x_37);
x_67 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_67, 0, x_65);
lean_ctor_set(x_67, 1, x_66);
return x_67;
}
}
block_22:
{
size_t x_17; size_t x_18; lean_object* x_19; lean_object* x_20; 
x_17 = 1;
x_18 = x_4 + x_17;
x_19 = x_15;
x_20 = lean_array_uset(x_14, x_4, x_19);
x_4 = x_18;
x_5 = x_20;
x_8 = x_16;
goto _start;
}
}
}
}
static lean_object* _init_l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___boxed__const__1() {
_start:
{
size_t x_1; lean_object* x_2; 
x_1 = 0;
x_2 = lean_box_usize(x_1);
return x_2;
}
}
lean_object* l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
lean_inc(x_3);
x_6 = l_Lean_Elab_Command_checkValidInductiveModifier___at_Lean_Elab_Command_elabStructure___spec__1(x_1, x_3, x_4, x_5);
if (lean_obj_tag(x_6) == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_7 = lean_ctor_get(x_6, 1);
lean_inc(x_7);
lean_dec(x_6);
x_8 = lean_unsigned_to_nat(2u);
x_9 = l_Lean_Syntax_getArg(x_2, x_8);
x_10 = l_Lean_Elab_expandOptDeclSig(x_9);
lean_dec(x_9);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = lean_unsigned_to_nat(1u);
x_14 = l_Lean_Syntax_getArg(x_2, x_13);
lean_inc(x_3);
x_15 = l_Lean_Elab_Command_expandDeclId(x_14, x_1, x_3, x_4, x_7);
lean_dec(x_14);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; size_t x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
lean_dec(x_15);
x_18 = lean_ctor_get(x_16, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_16, 1);
lean_inc(x_19);
x_20 = lean_ctor_get(x_16, 2);
lean_inc(x_20);
lean_dec(x_16);
x_21 = lean_unsigned_to_nat(4u);
x_22 = l_Lean_Syntax_getArg(x_2, x_21);
x_23 = l_Lean_Syntax_getArgs(x_22);
lean_dec(x_22);
x_24 = lean_array_get_size(x_23);
x_25 = lean_usize_of_nat(x_24);
lean_dec(x_24);
x_26 = x_23;
x_27 = lean_box_usize(x_25);
x_28 = l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___boxed__const__1;
lean_inc(x_19);
lean_inc(x_1);
x_29 = lean_alloc_closure((void*)(l_Array_mapMUnsafe_map___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__6___boxed), 8, 5);
lean_closure_set(x_29, 0, x_1);
lean_closure_set(x_29, 1, x_19);
lean_closure_set(x_29, 2, x_27);
lean_closure_set(x_29, 3, x_28);
lean_closure_set(x_29, 4, x_26);
x_30 = x_29;
lean_inc(x_4);
lean_inc(x_3);
x_31 = lean_apply_3(x_30, x_3, x_4, x_17);
if (lean_obj_tag(x_31) == 0)
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_32 = lean_ctor_get(x_31, 0);
lean_inc(x_32);
x_33 = lean_ctor_get(x_31, 1);
lean_inc(x_33);
lean_dec(x_31);
x_34 = lean_unsigned_to_nat(5u);
x_35 = l_Lean_Syntax_getArg(x_2, x_34);
x_36 = l_Lean_Elab_getOptDerivingClasses___at_Lean_Elab_Command_elabStructure___spec__2(x_35, x_3, x_4, x_33);
lean_dec(x_35);
if (lean_obj_tag(x_36) == 0)
{
uint8_t x_37; 
x_37 = !lean_is_exclusive(x_36);
if (x_37 == 0)
{
lean_object* x_38; lean_object* x_39; 
x_38 = lean_ctor_get(x_36, 0);
x_39 = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(x_39, 0, x_2);
lean_ctor_set(x_39, 1, x_1);
lean_ctor_set(x_39, 2, x_18);
lean_ctor_set(x_39, 3, x_19);
lean_ctor_set(x_39, 4, x_20);
lean_ctor_set(x_39, 5, x_11);
lean_ctor_set(x_39, 6, x_12);
lean_ctor_set(x_39, 7, x_32);
lean_ctor_set(x_39, 8, x_38);
lean_ctor_set(x_36, 0, x_39);
return x_36;
}
else
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_40 = lean_ctor_get(x_36, 0);
x_41 = lean_ctor_get(x_36, 1);
lean_inc(x_41);
lean_inc(x_40);
lean_dec(x_36);
x_42 = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(x_42, 0, x_2);
lean_ctor_set(x_42, 1, x_1);
lean_ctor_set(x_42, 2, x_18);
lean_ctor_set(x_42, 3, x_19);
lean_ctor_set(x_42, 4, x_20);
lean_ctor_set(x_42, 5, x_11);
lean_ctor_set(x_42, 6, x_12);
lean_ctor_set(x_42, 7, x_32);
lean_ctor_set(x_42, 8, x_40);
x_43 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_43, 0, x_42);
lean_ctor_set(x_43, 1, x_41);
return x_43;
}
}
else
{
uint8_t x_44; 
lean_dec(x_32);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_2);
lean_dec(x_1);
x_44 = !lean_is_exclusive(x_36);
if (x_44 == 0)
{
return x_36;
}
else
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_45 = lean_ctor_get(x_36, 0);
x_46 = lean_ctor_get(x_36, 1);
lean_inc(x_46);
lean_inc(x_45);
lean_dec(x_36);
x_47 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_47, 0, x_45);
lean_ctor_set(x_47, 1, x_46);
return x_47;
}
}
}
else
{
uint8_t x_48; 
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_48 = !lean_is_exclusive(x_31);
if (x_48 == 0)
{
return x_31;
}
else
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_49 = lean_ctor_get(x_31, 0);
x_50 = lean_ctor_get(x_31, 1);
lean_inc(x_50);
lean_inc(x_49);
lean_dec(x_31);
x_51 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_51, 0, x_49);
lean_ctor_set(x_51, 1, x_50);
return x_51;
}
}
}
else
{
uint8_t x_52; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_52 = !lean_is_exclusive(x_15);
if (x_52 == 0)
{
return x_15;
}
else
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; 
x_53 = lean_ctor_get(x_15, 0);
x_54 = lean_ctor_get(x_15, 1);
lean_inc(x_54);
lean_inc(x_53);
lean_dec(x_15);
x_55 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_55, 0, x_53);
lean_ctor_set(x_55, 1, x_54);
return x_55;
}
}
}
else
{
uint8_t x_56; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_56 = !lean_is_exclusive(x_6);
if (x_56 == 0)
{
return x_6;
}
else
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; 
x_57 = lean_ctor_get(x_6, 0);
x_58 = lean_ctor_get(x_6, 1);
lean_inc(x_58);
lean_inc(x_57);
lean_dec(x_6);
x_59 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_59, 0, x_57);
lean_ctor_set(x_59, 1, x_58);
return x_59;
}
}
}
}
lean_object* l_Lean_throwError___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_throwError___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__2(x_1, x_2, x_3, x_4);
lean_dec(x_3);
return x_5;
}
}
lean_object* l_Lean_Elab_Command_checkValidCtorModifier___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__1___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Lean_Elab_Command_checkValidCtorModifier___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__1___lambda__1(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
lean_object* l_Lean_Elab_Command_checkValidCtorModifier___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__1___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Lean_Elab_Command_checkValidCtorModifier___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__1___lambda__2(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
lean_object* l_Lean_Elab_Command_checkValidCtorModifier___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__1___lambda__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Lean_Elab_Command_checkValidCtorModifier___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__1___lambda__3(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
lean_object* l_Lean_Elab_Command_checkValidCtorModifier___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_Elab_Command_checkValidCtorModifier___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__1(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_5;
}
}
lean_object* l_Lean_Elab_checkNotAlreadyDeclared___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__4___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_Elab_checkNotAlreadyDeclared___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__4___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_3);
return x_7;
}
}
lean_object* l_Lean_Elab_checkNotAlreadyDeclared___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__4___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_Elab_checkNotAlreadyDeclared___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__4___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_3);
return x_7;
}
}
lean_object* l_Lean_Elab_checkNotAlreadyDeclared___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_Elab_checkNotAlreadyDeclared___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__4(x_1, x_2, x_3, x_4);
lean_dec(x_3);
return x_5;
}
}
lean_object* l_Lean_setEnv___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_setEnv___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__5(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_5;
}
}
lean_object* l_Lean_Elab_applyVisibility___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; lean_object* x_7; 
x_6 = lean_unbox(x_1);
lean_dec(x_1);
x_7 = l_Lean_Elab_applyVisibility___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__3(x_6, x_2, x_3, x_4, x_5);
lean_dec(x_4);
return x_7;
}
}
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__6___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Array_mapMUnsafe_map___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__6___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
return x_8;
}
}
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__6___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Array_mapMUnsafe_map___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__6___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_9;
}
}
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__6___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
size_t x_9; size_t x_10; lean_object* x_11; 
x_9 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_10 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_11 = l_Array_mapMUnsafe_map___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__6(x_1, x_2, x_9, x_10, x_5, x_6, x_7, x_8);
lean_dec(x_6);
lean_dec(x_2);
lean_dec(x_1);
return x_11;
}
}
lean_object* l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_classInductiveSyntaxToView(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView(x_1, x_2, x_3, x_4, x_5);
return x_6;
}
}
lean_object* l_Lean_Elab_Command_elabInductive(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
lean_inc(x_4);
lean_inc(x_3);
x_6 = l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView(x_1, x_2, x_3, x_4, x_5);
if (lean_obj_tag(x_6) == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_6, 1);
lean_inc(x_8);
lean_dec(x_6);
x_9 = l_Lean_mkOptionalNode___closed__2;
x_10 = lean_array_push(x_9, x_7);
x_11 = l_Lean_Elab_Command_elabInductiveViews(x_10, x_3, x_4, x_8);
return x_11;
}
else
{
uint8_t x_12; 
lean_dec(x_4);
lean_dec(x_3);
x_12 = !lean_is_exclusive(x_6);
if (x_12 == 0)
{
return x_6;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_13 = lean_ctor_get(x_6, 0);
x_14 = lean_ctor_get(x_6, 1);
lean_inc(x_14);
lean_inc(x_13);
lean_dec(x_6);
x_15 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_15, 0, x_13);
lean_ctor_set(x_15, 1, x_14);
return x_15;
}
}
}
}
lean_object* l_Lean_Elab_Command_elabClassInductive(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = l_Lean_Elab_Command_elabStructure___closed__1;
x_7 = l_Lean_Elab_Modifiers_addAttribute(x_1, x_6);
lean_inc(x_4);
lean_inc(x_3);
x_8 = l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView(x_7, x_2, x_3, x_4, x_5);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_8, 1);
lean_inc(x_10);
lean_dec(x_8);
x_11 = l_Lean_mkOptionalNode___closed__2;
x_12 = lean_array_push(x_11, x_9);
x_13 = l_Lean_Elab_Command_elabInductiveViews(x_12, x_3, x_4, x_10);
return x_13;
}
else
{
uint8_t x_14; 
lean_dec(x_4);
lean_dec(x_3);
x_14 = !lean_is_exclusive(x_8);
if (x_14 == 0)
{
return x_8;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_8, 0);
x_16 = lean_ctor_get(x_8, 1);
lean_inc(x_16);
lean_inc(x_15);
lean_dec(x_8);
x_17 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_17, 0, x_15);
lean_ctor_set(x_17, 1, x_16);
return x_17;
}
}
}
}
lean_object* l_Lean_Elab_Command_elabDeclaration_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_2);
x_4 = lean_box(0);
x_5 = lean_apply_1(x_3, x_4);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_dec(x_3);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_6, 1);
lean_inc(x_8);
lean_dec(x_6);
x_9 = lean_apply_2(x_2, x_7, x_8);
return x_9;
}
}
}
lean_object* l_Lean_Elab_Command_elabDeclaration_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Command_elabDeclaration_match__1___rarg), 3, 0);
return x_2;
}
}
static lean_object* _init_l_Lean_Elab_Command_elabDeclaration___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("unexpected declaration");
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Command_elabDeclaration___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Command_elabDeclaration___closed__1;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Elab_Command_elabDeclaration___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Command_elabDeclaration___closed__2;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l_Lean_Elab_Command_elabDeclaration(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
lean_inc(x_1);
x_5 = l_Lean_Elab_Command_expandDeclNamespace_x3f(x_1);
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_unsigned_to_nat(0u);
x_7 = l_Lean_Syntax_getArg(x_1, x_6);
lean_inc(x_3);
lean_inc(x_2);
x_8 = l_Lean_Elab_elabModifiers___at_Lean_Elab_Command_elabMutualDef___spec__1(x_7, x_2, x_3, x_4);
lean_dec(x_7);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_8, 1);
lean_inc(x_10);
lean_dec(x_8);
x_11 = lean_unsigned_to_nat(1u);
x_12 = l_Lean_Syntax_getArg(x_1, x_11);
lean_inc(x_12);
x_13 = l_Lean_Syntax_getKind(x_12);
x_14 = l_Lean_Parser_Command_axiom___elambda__1___closed__2;
x_15 = lean_name_eq(x_13, x_14);
if (x_15 == 0)
{
lean_object* x_16; uint8_t x_17; 
x_16 = l_Lean_Parser_Command_inductive___elambda__1___closed__2;
x_17 = lean_name_eq(x_13, x_16);
if (x_17 == 0)
{
lean_object* x_18; uint8_t x_19; 
x_18 = l_Lean_Parser_Command_classInductive___elambda__1___closed__2;
x_19 = lean_name_eq(x_13, x_18);
if (x_19 == 0)
{
lean_object* x_20; uint8_t x_21; 
x_20 = l_myMacro____x40_Init_NotationExtra___hyg_3357____closed__18;
x_21 = lean_name_eq(x_13, x_20);
lean_dec(x_13);
if (x_21 == 0)
{
uint8_t x_22; 
lean_dec(x_9);
x_22 = l_Lean_Elab_Command_isDefLike(x_12);
if (x_22 == 0)
{
lean_object* x_23; lean_object* x_24; 
lean_dec(x_1);
x_23 = l_Lean_Elab_Command_elabDeclaration___closed__3;
x_24 = l_Lean_throwError___at___private_Lean_Elab_Command_0__Lean_Elab_Command_elabCommandUsing___spec__1(x_23, x_2, x_3, x_10);
lean_dec(x_3);
return x_24;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_25 = l_Lean_mkOptionalNode___closed__2;
x_26 = lean_array_push(x_25, x_1);
x_27 = l_Lean_Elab_Command_elabMutualDef(x_26, x_2, x_3, x_10);
return x_27;
}
}
else
{
lean_object* x_28; 
lean_dec(x_1);
x_28 = l_Lean_Elab_Command_elabStructure(x_9, x_12, x_2, x_3, x_10);
return x_28;
}
}
else
{
lean_object* x_29; 
lean_dec(x_13);
lean_dec(x_1);
x_29 = l_Lean_Elab_Command_elabClassInductive(x_9, x_12, x_2, x_3, x_10);
return x_29;
}
}
else
{
lean_object* x_30; 
lean_dec(x_13);
lean_dec(x_1);
x_30 = l_Lean_Elab_Command_elabInductive(x_9, x_12, x_2, x_3, x_10);
return x_30;
}
}
else
{
lean_object* x_31; 
lean_dec(x_13);
lean_dec(x_1);
x_31 = l_Lean_Elab_Command_elabAxiom(x_9, x_12, x_2, x_3, x_10);
lean_dec(x_3);
return x_31;
}
}
else
{
uint8_t x_32; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_32 = !lean_is_exclusive(x_8);
if (x_32 == 0)
{
return x_8;
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_33 = lean_ctor_get(x_8, 0);
x_34 = lean_ctor_get(x_8, 1);
lean_inc(x_34);
lean_inc(x_33);
lean_dec(x_8);
x_35 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_35, 0, x_33);
lean_ctor_set(x_35, 1, x_34);
return x_35;
}
}
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; uint8_t x_67; 
x_36 = lean_ctor_get(x_5, 0);
lean_inc(x_36);
lean_dec(x_5);
x_37 = lean_ctor_get(x_36, 0);
lean_inc(x_37);
x_38 = lean_ctor_get(x_36, 1);
lean_inc(x_38);
lean_dec(x_36);
x_39 = l_Lean_mkIdentFrom(x_1, x_37);
x_40 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Command_mkDefViewOfConstant___spec__1(x_2, x_3, x_4);
x_41 = lean_ctor_get(x_40, 0);
lean_inc(x_41);
x_42 = lean_ctor_get(x_40, 1);
lean_inc(x_42);
lean_dec(x_40);
x_43 = l_Lean_Elab_Command_getCurrMacroScope(x_2, x_3, x_42);
x_44 = lean_ctor_get(x_43, 1);
lean_inc(x_44);
lean_dec(x_43);
x_45 = l_Lean_Elab_Command_getMainModule___rarg(x_3, x_44);
x_46 = lean_ctor_get(x_45, 1);
lean_inc(x_46);
lean_dec(x_45);
x_47 = l_Lean_Parser_Command_namespace___elambda__1___closed__1;
lean_inc(x_41);
x_48 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_48, 0, x_41);
lean_ctor_set(x_48, 1, x_47);
x_49 = l_Array_empty___closed__1;
x_50 = lean_array_push(x_49, x_48);
lean_inc(x_39);
x_51 = lean_array_push(x_50, x_39);
x_52 = l_Lean_Parser_Command_namespace___elambda__1___closed__2;
x_53 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_53, 0, x_52);
lean_ctor_set(x_53, 1, x_51);
x_54 = lean_array_push(x_49, x_53);
x_55 = lean_array_push(x_54, x_38);
x_56 = l_Lean_Parser_Command_end___elambda__1___closed__1;
x_57 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_57, 0, x_41);
lean_ctor_set(x_57, 1, x_56);
x_58 = lean_array_push(x_49, x_57);
x_59 = lean_array_push(x_49, x_39);
x_60 = l_Lean_nullKind___closed__2;
x_61 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_61, 0, x_60);
lean_ctor_set(x_61, 1, x_59);
x_62 = lean_array_push(x_58, x_61);
x_63 = l_Lean_Parser_Command_end___elambda__1___closed__2;
x_64 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_64, 0, x_63);
lean_ctor_set(x_64, 1, x_62);
x_65 = lean_array_push(x_55, x_64);
x_66 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_66, 0, x_60);
lean_ctor_set(x_66, 1, x_65);
x_67 = !lean_is_exclusive(x_2);
if (x_67 == 0)
{
lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; 
x_68 = lean_ctor_get(x_2, 4);
lean_inc(x_66);
x_69 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_69, 0, x_1);
lean_ctor_set(x_69, 1, x_66);
x_70 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_70, 0, x_69);
lean_ctor_set(x_70, 1, x_68);
lean_ctor_set(x_2, 4, x_70);
x_71 = l_Lean_Elab_Command_elabCommand(x_66, x_2, x_3, x_46);
lean_dec(x_2);
return x_71;
}
else
{
lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; 
x_72 = lean_ctor_get(x_2, 0);
x_73 = lean_ctor_get(x_2, 1);
x_74 = lean_ctor_get(x_2, 2);
x_75 = lean_ctor_get(x_2, 3);
x_76 = lean_ctor_get(x_2, 4);
x_77 = lean_ctor_get(x_2, 5);
x_78 = lean_ctor_get(x_2, 6);
lean_inc(x_78);
lean_inc(x_77);
lean_inc(x_76);
lean_inc(x_75);
lean_inc(x_74);
lean_inc(x_73);
lean_inc(x_72);
lean_dec(x_2);
lean_inc(x_66);
x_79 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_79, 0, x_1);
lean_ctor_set(x_79, 1, x_66);
x_80 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_80, 0, x_79);
lean_ctor_set(x_80, 1, x_76);
x_81 = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(x_81, 0, x_72);
lean_ctor_set(x_81, 1, x_73);
lean_ctor_set(x_81, 2, x_74);
lean_ctor_set(x_81, 3, x_75);
lean_ctor_set(x_81, 4, x_80);
lean_ctor_set(x_81, 5, x_77);
lean_ctor_set(x_81, 6, x_78);
x_82 = l_Lean_Elab_Command_elabCommand(x_66, x_81, x_3, x_46);
lean_dec(x_81);
return x_82;
}
}
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Command_elabDeclaration___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Command_elabDeclaration), 4, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Elab_Command_elabDeclaration(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_Lean_Elab_Command_commandElabAttribute;
x_3 = l_Lean_myMacro____x40_Init_NotationExtra___hyg_1098____closed__5;
x_4 = l___regBuiltin_Lean_Elab_Command_elabDeclaration___closed__1;
x_5 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_1);
return x_5;
}
}
uint8_t l_Array_anyMUnsafe_any___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_isMutualInductive___spec__1(lean_object* x_1, size_t x_2, size_t x_3) {
_start:
{
uint8_t x_4; 
x_4 = x_2 == x_3;
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_5 = lean_array_uget(x_1, x_2);
x_6 = lean_unsigned_to_nat(1u);
x_7 = l_Lean_Syntax_getArg(x_5, x_6);
lean_dec(x_5);
x_8 = l_Lean_Syntax_getKind(x_7);
x_9 = l_Lean_Parser_Command_inductive___elambda__1___closed__2;
x_10 = lean_name_eq(x_8, x_9);
lean_dec(x_8);
if (x_10 == 0)
{
uint8_t x_11; 
x_11 = 1;
return x_11;
}
else
{
size_t x_12; size_t x_13; 
x_12 = 1;
x_13 = x_2 + x_12;
x_2 = x_13;
goto _start;
}
}
else
{
uint8_t x_15; 
x_15 = 0;
return x_15;
}
}
}
uint8_t l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_isMutualInductive(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_2 = lean_unsigned_to_nat(1u);
x_3 = l_Lean_Syntax_getArg(x_1, x_2);
x_4 = l_Lean_Syntax_getArgs(x_3);
lean_dec(x_3);
x_5 = lean_array_get_size(x_4);
x_6 = lean_unsigned_to_nat(0u);
x_7 = lean_nat_dec_lt(x_6, x_5);
if (x_7 == 0)
{
uint8_t x_8; 
lean_dec(x_5);
lean_dec(x_4);
x_8 = 1;
return x_8;
}
else
{
uint8_t x_9; 
x_9 = lean_nat_dec_le(x_5, x_5);
if (x_9 == 0)
{
uint8_t x_10; 
lean_dec(x_5);
lean_dec(x_4);
x_10 = 1;
return x_10;
}
else
{
size_t x_11; size_t x_12; uint8_t x_13; 
x_11 = 0;
x_12 = lean_usize_of_nat(x_5);
lean_dec(x_5);
x_13 = l_Array_anyMUnsafe_any___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_isMutualInductive___spec__1(x_4, x_11, x_12);
lean_dec(x_4);
if (x_13 == 0)
{
uint8_t x_14; 
x_14 = 1;
return x_14;
}
else
{
uint8_t x_15; 
x_15 = 0;
return x_15;
}
}
}
}
}
lean_object* l_Array_anyMUnsafe_any___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_isMutualInductive___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
size_t x_4; size_t x_5; uint8_t x_6; lean_object* x_7; 
x_4 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_5 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_6 = l_Array_anyMUnsafe_any___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_isMutualInductive___spec__1(x_1, x_4, x_5);
lean_dec(x_1);
x_7 = lean_box(x_6);
return x_7;
}
}
lean_object* l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_isMutualInductive___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_isMutualInductive(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_elabMutualInductive___spec__1(size_t x_1, size_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; 
x_7 = x_2 < x_1;
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; 
lean_dec(x_5);
lean_dec(x_4);
x_8 = x_3;
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_9, 1, x_6);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_10 = lean_array_uget(x_3, x_2);
x_11 = lean_unsigned_to_nat(0u);
x_12 = lean_array_uset(x_3, x_2, x_11);
x_13 = x_10;
x_14 = l_Lean_Syntax_getArg(x_13, x_11);
lean_inc(x_5);
lean_inc(x_4);
x_15 = l_Lean_Elab_elabModifiers___at_Lean_Elab_Command_elabMutualDef___spec__1(x_14, x_4, x_5, x_6);
lean_dec(x_14);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
lean_dec(x_15);
x_18 = lean_unsigned_to_nat(1u);
x_19 = l_Lean_Syntax_getArg(x_13, x_18);
lean_dec(x_13);
lean_inc(x_5);
lean_inc(x_4);
x_20 = l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView(x_16, x_19, x_4, x_5, x_17);
if (lean_obj_tag(x_20) == 0)
{
lean_object* x_21; lean_object* x_22; size_t x_23; size_t x_24; lean_object* x_25; lean_object* x_26; 
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_20, 1);
lean_inc(x_22);
lean_dec(x_20);
x_23 = 1;
x_24 = x_2 + x_23;
x_25 = x_21;
x_26 = lean_array_uset(x_12, x_2, x_25);
x_2 = x_24;
x_3 = x_26;
x_6 = x_22;
goto _start;
}
else
{
uint8_t x_28; 
lean_dec(x_12);
lean_dec(x_5);
lean_dec(x_4);
x_28 = !lean_is_exclusive(x_20);
if (x_28 == 0)
{
return x_20;
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_29 = lean_ctor_get(x_20, 0);
x_30 = lean_ctor_get(x_20, 1);
lean_inc(x_30);
lean_inc(x_29);
lean_dec(x_20);
x_31 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_31, 0, x_29);
lean_ctor_set(x_31, 1, x_30);
return x_31;
}
}
}
else
{
uint8_t x_32; 
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_5);
lean_dec(x_4);
x_32 = !lean_is_exclusive(x_15);
if (x_32 == 0)
{
return x_15;
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_33 = lean_ctor_get(x_15, 0);
x_34 = lean_ctor_get(x_15, 1);
lean_inc(x_34);
lean_inc(x_33);
lean_dec(x_15);
x_35 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_35, 0, x_33);
lean_ctor_set(x_35, 1, x_34);
return x_35;
}
}
}
}
}
static lean_object* _init_l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_elabMutualInductive___boxed__const__1() {
_start:
{
size_t x_1; lean_object* x_2; 
x_1 = 0;
x_2 = lean_box_usize(x_1);
return x_2;
}
}
lean_object* l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_elabMutualInductive(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; size_t x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_5 = lean_array_get_size(x_1);
x_6 = lean_usize_of_nat(x_5);
lean_dec(x_5);
x_7 = x_1;
x_8 = lean_box_usize(x_6);
x_9 = l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_elabMutualInductive___boxed__const__1;
x_10 = lean_alloc_closure((void*)(l_Array_mapMUnsafe_map___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_elabMutualInductive___spec__1___boxed), 6, 3);
lean_closure_set(x_10, 0, x_8);
lean_closure_set(x_10, 1, x_9);
lean_closure_set(x_10, 2, x_7);
x_11 = x_10;
lean_inc(x_3);
lean_inc(x_2);
x_12 = lean_apply_3(x_11, x_2, x_3, x_4);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = l_Lean_Elab_Command_elabInductiveViews(x_13, x_2, x_3, x_14);
return x_15;
}
else
{
uint8_t x_16; 
lean_dec(x_3);
lean_dec(x_2);
x_16 = !lean_is_exclusive(x_12);
if (x_16 == 0)
{
return x_12;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_17 = lean_ctor_get(x_12, 0);
x_18 = lean_ctor_get(x_12, 1);
lean_inc(x_18);
lean_inc(x_17);
lean_dec(x_12);
x_19 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_19, 0, x_17);
lean_ctor_set(x_19, 1, x_18);
return x_19;
}
}
}
}
lean_object* l_Array_mapMUnsafe_map___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_elabMutualInductive___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
size_t x_7; size_t x_8; lean_object* x_9; 
x_7 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_8 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_9 = l_Array_mapMUnsafe_map___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_elabMutualInductive___spec__1(x_7, x_8, x_3, x_4, x_5, x_6);
return x_9;
}
}
uint8_t l_Array_anyMUnsafe_any___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_isMutualDef___spec__1(lean_object* x_1, size_t x_2, size_t x_3) {
_start:
{
uint8_t x_4; 
x_4 = x_2 == x_3;
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_5 = lean_array_uget(x_1, x_2);
x_6 = lean_unsigned_to_nat(1u);
x_7 = l_Lean_Syntax_getArg(x_5, x_6);
lean_dec(x_5);
x_8 = l_Lean_Elab_Command_isDefLike(x_7);
if (x_8 == 0)
{
uint8_t x_9; 
x_9 = 1;
return x_9;
}
else
{
size_t x_10; size_t x_11; 
x_10 = 1;
x_11 = x_2 + x_10;
x_2 = x_11;
goto _start;
}
}
else
{
uint8_t x_13; 
x_13 = 0;
return x_13;
}
}
}
uint8_t l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_isMutualDef(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_2 = lean_unsigned_to_nat(1u);
x_3 = l_Lean_Syntax_getArg(x_1, x_2);
x_4 = l_Lean_Syntax_getArgs(x_3);
lean_dec(x_3);
x_5 = lean_array_get_size(x_4);
x_6 = lean_unsigned_to_nat(0u);
x_7 = lean_nat_dec_lt(x_6, x_5);
if (x_7 == 0)
{
uint8_t x_8; 
lean_dec(x_5);
lean_dec(x_4);
x_8 = 1;
return x_8;
}
else
{
uint8_t x_9; 
x_9 = lean_nat_dec_le(x_5, x_5);
if (x_9 == 0)
{
uint8_t x_10; 
lean_dec(x_5);
lean_dec(x_4);
x_10 = 1;
return x_10;
}
else
{
size_t x_11; size_t x_12; uint8_t x_13; 
x_11 = 0;
x_12 = lean_usize_of_nat(x_5);
lean_dec(x_5);
x_13 = l_Array_anyMUnsafe_any___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_isMutualDef___spec__1(x_4, x_11, x_12);
lean_dec(x_4);
if (x_13 == 0)
{
uint8_t x_14; 
x_14 = 1;
return x_14;
}
else
{
uint8_t x_15; 
x_15 = 0;
return x_15;
}
}
}
}
}
lean_object* l_Array_anyMUnsafe_any___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_isMutualDef___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
size_t x_4; size_t x_5; uint8_t x_6; lean_object* x_7; 
x_4 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_5 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_6 = l_Array_anyMUnsafe_any___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_isMutualDef___spec__1(x_1, x_4, x_5);
lean_dec(x_1);
x_7 = lean_box(x_6);
return x_7;
}
}
lean_object* l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_isMutualDef___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_isMutualDef(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
static lean_object* _init_l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_isMutualPreambleCommand___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_myMacro____x40_Init_NotationExtra___hyg_1098____closed__3;
x_2 = l___private_Lean_Meta_Match_Match_0__Lean_Meta_Match_process___lambda__1___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
uint8_t l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_isMutualPreambleCommand(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; uint8_t x_4; 
x_2 = l_Lean_Syntax_getKind(x_1);
x_3 = l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_isMutualPreambleCommand___closed__1;
x_4 = lean_name_eq(x_2, x_3);
if (x_4 == 0)
{
lean_object* x_5; uint8_t x_6; 
x_5 = l_Lean_Parser_Command_variables___elambda__1___closed__2;
x_6 = lean_name_eq(x_2, x_5);
if (x_6 == 0)
{
lean_object* x_7; uint8_t x_8; 
x_7 = l_Lean_Parser_Command_universe___elambda__1___closed__2;
x_8 = lean_name_eq(x_2, x_7);
if (x_8 == 0)
{
lean_object* x_9; uint8_t x_10; 
x_9 = l_Lean_Parser_Command_universes___elambda__1___closed__2;
x_10 = lean_name_eq(x_2, x_9);
if (x_10 == 0)
{
lean_object* x_11; uint8_t x_12; 
x_11 = l_Lean_Parser_Command_check___elambda__1___closed__2;
x_12 = lean_name_eq(x_2, x_11);
if (x_12 == 0)
{
lean_object* x_13; uint8_t x_14; 
x_13 = l_Lean_Parser_Command_set__option___elambda__1___closed__2;
x_14 = lean_name_eq(x_2, x_13);
if (x_14 == 0)
{
lean_object* x_15; uint8_t x_16; 
x_15 = l_Lean_Parser_Command_open___elambda__1___closed__2;
x_16 = lean_name_eq(x_2, x_15);
lean_dec(x_2);
return x_16;
}
else
{
uint8_t x_17; 
lean_dec(x_2);
x_17 = 1;
return x_17;
}
}
else
{
uint8_t x_18; 
lean_dec(x_2);
x_18 = 1;
return x_18;
}
}
else
{
uint8_t x_19; 
lean_dec(x_2);
x_19 = 1;
return x_19;
}
}
else
{
uint8_t x_20; 
lean_dec(x_2);
x_20 = 1;
return x_20;
}
}
else
{
uint8_t x_21; 
lean_dec(x_2);
x_21 = 1;
return x_21;
}
}
else
{
uint8_t x_22; 
lean_dec(x_2);
x_22 = 1;
return x_22;
}
}
}
lean_object* l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_isMutualPreambleCommand___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_isMutualPreambleCommand(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
lean_object* l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_splitMutualPreamble_loop(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint8_t x_4; 
x_3 = lean_array_get_size(x_1);
x_4 = lean_nat_dec_lt(x_2, x_3);
if (x_4 == 0)
{
lean_object* x_5; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_5 = lean_box(0);
return x_5;
}
else
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_array_fget(x_1, x_2);
x_7 = l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_isMutualPreambleCommand(x_6);
if (x_7 == 0)
{
lean_object* x_8; uint8_t x_9; 
x_8 = lean_unsigned_to_nat(0u);
x_9 = lean_nat_dec_eq(x_2, x_8);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
lean_inc(x_2);
lean_inc(x_1);
x_10 = l_Array_toSubarray___rarg(x_1, x_8, x_2);
x_11 = l_Array_ofSubarray___rarg(x_10);
lean_dec(x_10);
x_12 = l_Array_toSubarray___rarg(x_1, x_2, x_3);
x_13 = l_Array_ofSubarray___rarg(x_12);
lean_dec(x_12);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_11);
lean_ctor_set(x_14, 1, x_13);
x_15 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_15, 0, x_14);
return x_15;
}
else
{
lean_object* x_16; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_16 = lean_box(0);
return x_16;
}
}
else
{
lean_object* x_17; lean_object* x_18; 
lean_dec(x_3);
x_17 = lean_unsigned_to_nat(1u);
x_18 = lean_nat_add(x_2, x_17);
lean_dec(x_2);
x_2 = x_18;
goto _start;
}
}
}
}
lean_object* l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_splitMutualPreamble(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_unsigned_to_nat(0u);
x_3 = l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_splitMutualPreamble_loop(x_1, x_2);
return x_3;
}
}
lean_object* l_Lean_Elab_Command_expandMutualNamespace_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_dec(x_5);
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_6; 
lean_dec(x_4);
x_6 = lean_apply_1(x_3, x_1);
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
lean_dec(x_3);
x_7 = lean_ctor_get(x_2, 0);
lean_inc(x_7);
lean_dec(x_2);
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_7, 1);
lean_inc(x_9);
lean_dec(x_7);
x_10 = lean_apply_2(x_4, x_8, x_9);
return x_10;
}
}
else
{
lean_dec(x_4);
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_11; 
lean_dec(x_5);
x_11 = lean_apply_1(x_3, x_1);
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
lean_dec(x_3);
x_12 = lean_ctor_get(x_2, 0);
lean_inc(x_12);
lean_dec(x_2);
x_13 = lean_ctor_get(x_1, 0);
lean_inc(x_13);
lean_dec(x_1);
x_14 = lean_ctor_get(x_12, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_12, 1);
lean_inc(x_15);
lean_dec(x_12);
x_16 = lean_apply_3(x_5, x_13, x_14, x_15);
return x_16;
}
}
}
}
lean_object* l_Lean_Elab_Command_expandMutualNamespace_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Command_expandMutualNamespace_match__1___rarg), 5, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_Command_expandMutualNamespace_match__2___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_apply_2(x_2, x_3, x_4);
return x_5;
}
}
lean_object* l_Lean_Elab_Command_expandMutualNamespace_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Command_expandMutualNamespace_match__2___rarg), 2, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_Command_expandMutualNamespace_match__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_2);
x_4 = lean_box(0);
x_5 = lean_apply_1(x_3, x_4);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_3);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_apply_1(x_2, x_6);
return x_7;
}
}
}
lean_object* l_Lean_Elab_Command_expandMutualNamespace_match__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Command_expandMutualNamespace_match__3___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_Command_expandMutualNamespace_match__4___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_apply_2(x_2, x_3, x_4);
return x_5;
}
}
lean_object* l_Lean_Elab_Command_expandMutualNamespace_match__4(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Command_expandMutualNamespace_match__4___rarg), 2, 0);
return x_2;
}
}
static lean_object* _init_l_Array_forInUnsafe_loop___at_Lean_Elab_Command_expandMutualNamespace___spec__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("conflicting namespaces in mutual declaration, using namespace '");
return x_1;
}
}
static lean_object* _init_l_Array_forInUnsafe_loop___at_Lean_Elab_Command_expandMutualNamespace___spec__1___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("', but used '");
return x_1;
}
}
static lean_object* _init_l_Array_forInUnsafe_loop___at_Lean_Elab_Command_expandMutualNamespace___spec__1___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("' in previous declaration");
return x_1;
}
}
lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Command_expandMutualNamespace___spec__1(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; uint8_t x_14; 
x_14 = x_3 < x_2;
if (x_14 == 0)
{
lean_object* x_15; 
lean_dec(x_5);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_4);
lean_ctor_set(x_15, 1, x_6);
return x_15;
}
else
{
lean_object* x_16; uint8_t x_17; 
x_16 = lean_array_uget(x_1, x_3);
x_17 = !lean_is_exclusive(x_4);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_4, 0);
x_19 = lean_ctor_get(x_4, 1);
lean_inc(x_16);
x_20 = l_Lean_Elab_Command_expandDeclNamespace_x3f(x_16);
if (lean_obj_tag(x_19) == 0)
{
if (lean_obj_tag(x_20) == 0)
{
lean_object* x_21; lean_object* x_22; 
x_21 = lean_array_push(x_18, x_16);
lean_ctor_set(x_4, 0, x_21);
x_22 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_22, 0, x_4);
x_7 = x_22;
x_8 = x_6;
goto block_13;
}
else
{
uint8_t x_23; 
lean_dec(x_16);
x_23 = !lean_is_exclusive(x_20);
if (x_23 == 0)
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_24 = lean_ctor_get(x_20, 0);
x_25 = lean_ctor_get(x_24, 0);
lean_inc(x_25);
x_26 = lean_ctor_get(x_24, 1);
lean_inc(x_26);
lean_dec(x_24);
lean_ctor_set(x_20, 0, x_25);
x_27 = lean_array_push(x_18, x_26);
lean_ctor_set(x_4, 1, x_20);
lean_ctor_set(x_4, 0, x_27);
x_28 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_28, 0, x_4);
x_7 = x_28;
x_8 = x_6;
goto block_13;
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_29 = lean_ctor_get(x_20, 0);
lean_inc(x_29);
lean_dec(x_20);
x_30 = lean_ctor_get(x_29, 0);
lean_inc(x_30);
x_31 = lean_ctor_get(x_29, 1);
lean_inc(x_31);
lean_dec(x_29);
x_32 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_32, 0, x_30);
x_33 = lean_array_push(x_18, x_31);
lean_ctor_set(x_4, 1, x_32);
lean_ctor_set(x_4, 0, x_33);
x_34 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_34, 0, x_4);
x_7 = x_34;
x_8 = x_6;
goto block_13;
}
}
}
else
{
if (lean_obj_tag(x_20) == 0)
{
lean_object* x_35; lean_object* x_36; 
x_35 = lean_array_push(x_18, x_16);
lean_ctor_set(x_4, 0, x_35);
x_36 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_36, 0, x_4);
x_7 = x_36;
x_8 = x_6;
goto block_13;
}
else
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; uint8_t x_41; 
lean_dec(x_16);
x_37 = lean_ctor_get(x_20, 0);
lean_inc(x_37);
lean_dec(x_20);
x_38 = lean_ctor_get(x_19, 0);
lean_inc(x_38);
x_39 = lean_ctor_get(x_37, 0);
lean_inc(x_39);
x_40 = lean_ctor_get(x_37, 1);
lean_inc(x_40);
lean_dec(x_37);
x_41 = lean_name_eq(x_38, x_39);
if (x_41 == 0)
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; uint8_t x_53; 
lean_free_object(x_4);
lean_dec(x_19);
lean_dec(x_18);
x_42 = l_Lean_Name_toString___closed__1;
x_43 = l_Lean_Name_toStringWithSep(x_42, x_39);
x_44 = l_Array_forInUnsafe_loop___at_Lean_Elab_Command_expandMutualNamespace___spec__1___closed__1;
x_45 = lean_string_append(x_44, x_43);
lean_dec(x_43);
x_46 = l_Array_forInUnsafe_loop___at_Lean_Elab_Command_expandMutualNamespace___spec__1___closed__2;
x_47 = lean_string_append(x_45, x_46);
x_48 = l_Lean_Name_toStringWithSep(x_42, x_38);
x_49 = lean_string_append(x_47, x_48);
lean_dec(x_48);
x_50 = l_Array_forInUnsafe_loop___at_Lean_Elab_Command_expandMutualNamespace___spec__1___closed__3;
x_51 = lean_string_append(x_49, x_50);
x_52 = l_Lean_Macro_throwErrorAt___rarg(x_40, x_51, x_5, x_6);
lean_dec(x_40);
x_53 = !lean_is_exclusive(x_52);
if (x_53 == 0)
{
return x_52;
}
else
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; 
x_54 = lean_ctor_get(x_52, 0);
x_55 = lean_ctor_get(x_52, 1);
lean_inc(x_55);
lean_inc(x_54);
lean_dec(x_52);
x_56 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_56, 0, x_54);
lean_ctor_set(x_56, 1, x_55);
return x_56;
}
}
else
{
lean_object* x_57; lean_object* x_58; 
lean_dec(x_39);
lean_dec(x_38);
x_57 = lean_array_push(x_18, x_40);
lean_ctor_set(x_4, 0, x_57);
x_58 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_58, 0, x_4);
x_7 = x_58;
x_8 = x_6;
goto block_13;
}
}
}
}
else
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; 
x_59 = lean_ctor_get(x_4, 0);
x_60 = lean_ctor_get(x_4, 1);
lean_inc(x_60);
lean_inc(x_59);
lean_dec(x_4);
lean_inc(x_16);
x_61 = l_Lean_Elab_Command_expandDeclNamespace_x3f(x_16);
if (lean_obj_tag(x_60) == 0)
{
if (lean_obj_tag(x_61) == 0)
{
lean_object* x_62; lean_object* x_63; lean_object* x_64; 
x_62 = lean_array_push(x_59, x_16);
x_63 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_63, 0, x_62);
lean_ctor_set(x_63, 1, x_60);
x_64 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_64, 0, x_63);
x_7 = x_64;
x_8 = x_6;
goto block_13;
}
else
{
lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; 
lean_dec(x_16);
x_65 = lean_ctor_get(x_61, 0);
lean_inc(x_65);
if (lean_is_exclusive(x_61)) {
 lean_ctor_release(x_61, 0);
 x_66 = x_61;
} else {
 lean_dec_ref(x_61);
 x_66 = lean_box(0);
}
x_67 = lean_ctor_get(x_65, 0);
lean_inc(x_67);
x_68 = lean_ctor_get(x_65, 1);
lean_inc(x_68);
lean_dec(x_65);
if (lean_is_scalar(x_66)) {
 x_69 = lean_alloc_ctor(1, 1, 0);
} else {
 x_69 = x_66;
}
lean_ctor_set(x_69, 0, x_67);
x_70 = lean_array_push(x_59, x_68);
x_71 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_71, 0, x_70);
lean_ctor_set(x_71, 1, x_69);
x_72 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_72, 0, x_71);
x_7 = x_72;
x_8 = x_6;
goto block_13;
}
}
else
{
if (lean_obj_tag(x_61) == 0)
{
lean_object* x_73; lean_object* x_74; lean_object* x_75; 
x_73 = lean_array_push(x_59, x_16);
x_74 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_74, 0, x_73);
lean_ctor_set(x_74, 1, x_60);
x_75 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_75, 0, x_74);
x_7 = x_75;
x_8 = x_6;
goto block_13;
}
else
{
lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; uint8_t x_80; 
lean_dec(x_16);
x_76 = lean_ctor_get(x_61, 0);
lean_inc(x_76);
lean_dec(x_61);
x_77 = lean_ctor_get(x_60, 0);
lean_inc(x_77);
x_78 = lean_ctor_get(x_76, 0);
lean_inc(x_78);
x_79 = lean_ctor_get(x_76, 1);
lean_inc(x_79);
lean_dec(x_76);
x_80 = lean_name_eq(x_77, x_78);
if (x_80 == 0)
{
lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; 
lean_dec(x_60);
lean_dec(x_59);
x_81 = l_Lean_Name_toString___closed__1;
x_82 = l_Lean_Name_toStringWithSep(x_81, x_78);
x_83 = l_Array_forInUnsafe_loop___at_Lean_Elab_Command_expandMutualNamespace___spec__1___closed__1;
x_84 = lean_string_append(x_83, x_82);
lean_dec(x_82);
x_85 = l_Array_forInUnsafe_loop___at_Lean_Elab_Command_expandMutualNamespace___spec__1___closed__2;
x_86 = lean_string_append(x_84, x_85);
x_87 = l_Lean_Name_toStringWithSep(x_81, x_77);
x_88 = lean_string_append(x_86, x_87);
lean_dec(x_87);
x_89 = l_Array_forInUnsafe_loop___at_Lean_Elab_Command_expandMutualNamespace___spec__1___closed__3;
x_90 = lean_string_append(x_88, x_89);
x_91 = l_Lean_Macro_throwErrorAt___rarg(x_79, x_90, x_5, x_6);
lean_dec(x_79);
x_92 = lean_ctor_get(x_91, 0);
lean_inc(x_92);
x_93 = lean_ctor_get(x_91, 1);
lean_inc(x_93);
if (lean_is_exclusive(x_91)) {
 lean_ctor_release(x_91, 0);
 lean_ctor_release(x_91, 1);
 x_94 = x_91;
} else {
 lean_dec_ref(x_91);
 x_94 = lean_box(0);
}
if (lean_is_scalar(x_94)) {
 x_95 = lean_alloc_ctor(1, 2, 0);
} else {
 x_95 = x_94;
}
lean_ctor_set(x_95, 0, x_92);
lean_ctor_set(x_95, 1, x_93);
return x_95;
}
else
{
lean_object* x_96; lean_object* x_97; lean_object* x_98; 
lean_dec(x_78);
lean_dec(x_77);
x_96 = lean_array_push(x_59, x_79);
x_97 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_97, 0, x_96);
lean_ctor_set(x_97, 1, x_60);
x_98 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_98, 0, x_97);
x_7 = x_98;
x_8 = x_6;
goto block_13;
}
}
}
}
}
block_13:
{
lean_object* x_9; size_t x_10; size_t x_11; 
x_9 = lean_ctor_get(x_7, 0);
lean_inc(x_9);
lean_dec(x_7);
x_10 = 1;
x_11 = x_3 + x_10;
x_3 = x_11;
x_4 = x_9;
x_6 = x_8;
goto _start;
}
}
}
static lean_object* _init_l_Lean_Elab_Command_expandMutualNamespace___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Array_empty___closed__1;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
lean_object* l_Lean_Elab_Command_expandMutualNamespace(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; size_t x_8; size_t x_9; lean_object* x_10; lean_object* x_11; 
x_4 = lean_unsigned_to_nat(1u);
x_5 = l_Lean_Syntax_getArg(x_1, x_4);
x_6 = l_Lean_Syntax_getArgs(x_5);
lean_dec(x_5);
x_7 = lean_array_get_size(x_6);
x_8 = lean_usize_of_nat(x_7);
lean_dec(x_7);
x_9 = 0;
x_10 = l_Lean_Elab_Command_expandMutualNamespace___closed__1;
lean_inc(x_2);
x_11 = l_Array_forInUnsafe_loop___at_Lean_Elab_Command_expandMutualNamespace___spec__1(x_6, x_8, x_9, x_10, x_2, x_3);
lean_dec(x_6);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_12, 1);
lean_inc(x_13);
if (lean_obj_tag(x_13) == 0)
{
uint8_t x_14; 
lean_dec(x_12);
lean_dec(x_2);
lean_dec(x_1);
x_14 = !lean_is_exclusive(x_11);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; 
x_15 = lean_ctor_get(x_11, 0);
lean_dec(x_15);
x_16 = lean_box(1);
lean_ctor_set_tag(x_11, 1);
lean_ctor_set(x_11, 0, x_16);
return x_11;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_17 = lean_ctor_get(x_11, 1);
lean_inc(x_17);
lean_dec(x_11);
x_18 = lean_box(1);
x_19 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_19, 0, x_18);
lean_ctor_set(x_19, 1, x_17);
return x_19;
}
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; uint8_t x_28; 
x_20 = lean_ctor_get(x_11, 1);
lean_inc(x_20);
lean_dec(x_11);
x_21 = lean_ctor_get(x_12, 0);
lean_inc(x_21);
lean_dec(x_12);
x_22 = lean_ctor_get(x_13, 0);
lean_inc(x_22);
lean_dec(x_13);
x_23 = l_Lean_mkIdentFrom(x_1, x_22);
x_24 = l_Lean_nullKind;
x_25 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_25, 0, x_24);
lean_ctor_set(x_25, 1, x_21);
x_26 = l_Lean_Syntax_setArg(x_1, x_4, x_25);
x_27 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_109____spec__1(x_2, x_20);
lean_dec(x_2);
x_28 = !lean_is_exclusive(x_27);
if (x_28 == 0)
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_29 = lean_ctor_get(x_27, 0);
x_30 = l_Lean_Parser_Command_namespace___elambda__1___closed__1;
lean_inc(x_29);
x_31 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_31, 0, x_29);
lean_ctor_set(x_31, 1, x_30);
x_32 = l_Array_empty___closed__1;
x_33 = lean_array_push(x_32, x_31);
lean_inc(x_23);
x_34 = lean_array_push(x_33, x_23);
x_35 = l_Lean_Parser_Command_namespace___elambda__1___closed__2;
x_36 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_36, 0, x_35);
lean_ctor_set(x_36, 1, x_34);
x_37 = lean_array_push(x_32, x_36);
x_38 = lean_array_push(x_37, x_26);
x_39 = l_Lean_Parser_Command_end___elambda__1___closed__1;
x_40 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_40, 0, x_29);
lean_ctor_set(x_40, 1, x_39);
x_41 = lean_array_push(x_32, x_40);
x_42 = lean_array_push(x_32, x_23);
x_43 = l_Lean_nullKind___closed__2;
x_44 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_44, 0, x_43);
lean_ctor_set(x_44, 1, x_42);
x_45 = lean_array_push(x_41, x_44);
x_46 = l_Lean_Parser_Command_end___elambda__1___closed__2;
x_47 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_47, 0, x_46);
lean_ctor_set(x_47, 1, x_45);
x_48 = lean_array_push(x_38, x_47);
x_49 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_49, 0, x_43);
lean_ctor_set(x_49, 1, x_48);
lean_ctor_set(x_27, 0, x_49);
return x_27;
}
else
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; 
x_50 = lean_ctor_get(x_27, 0);
x_51 = lean_ctor_get(x_27, 1);
lean_inc(x_51);
lean_inc(x_50);
lean_dec(x_27);
x_52 = l_Lean_Parser_Command_namespace___elambda__1___closed__1;
lean_inc(x_50);
x_53 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_53, 0, x_50);
lean_ctor_set(x_53, 1, x_52);
x_54 = l_Array_empty___closed__1;
x_55 = lean_array_push(x_54, x_53);
lean_inc(x_23);
x_56 = lean_array_push(x_55, x_23);
x_57 = l_Lean_Parser_Command_namespace___elambda__1___closed__2;
x_58 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_58, 0, x_57);
lean_ctor_set(x_58, 1, x_56);
x_59 = lean_array_push(x_54, x_58);
x_60 = lean_array_push(x_59, x_26);
x_61 = l_Lean_Parser_Command_end___elambda__1___closed__1;
x_62 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_62, 0, x_50);
lean_ctor_set(x_62, 1, x_61);
x_63 = lean_array_push(x_54, x_62);
x_64 = lean_array_push(x_54, x_23);
x_65 = l_Lean_nullKind___closed__2;
x_66 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_66, 0, x_65);
lean_ctor_set(x_66, 1, x_64);
x_67 = lean_array_push(x_63, x_66);
x_68 = l_Lean_Parser_Command_end___elambda__1___closed__2;
x_69 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_69, 0, x_68);
lean_ctor_set(x_69, 1, x_67);
x_70 = lean_array_push(x_60, x_69);
x_71 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_71, 0, x_65);
lean_ctor_set(x_71, 1, x_70);
x_72 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_72, 0, x_71);
lean_ctor_set(x_72, 1, x_51);
return x_72;
}
}
}
else
{
uint8_t x_73; 
lean_dec(x_2);
lean_dec(x_1);
x_73 = !lean_is_exclusive(x_11);
if (x_73 == 0)
{
return x_11;
}
else
{
lean_object* x_74; lean_object* x_75; lean_object* x_76; 
x_74 = lean_ctor_get(x_11, 0);
x_75 = lean_ctor_get(x_11, 1);
lean_inc(x_75);
lean_inc(x_74);
lean_dec(x_11);
x_76 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_76, 0, x_74);
lean_ctor_set(x_76, 1, x_75);
return x_76;
}
}
}
}
lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Command_expandMutualNamespace___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
size_t x_7; size_t x_8; lean_object* x_9; 
x_7 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_8 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_9 = l_Array_forInUnsafe_loop___at_Lean_Elab_Command_expandMutualNamespace___spec__1(x_1, x_7, x_8, x_4, x_5, x_6);
lean_dec(x_1);
return x_9;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Command_expandMutualNamespace___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Command_expandMutualNamespace), 3, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Elab_Command_expandMutualNamespace(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_Lean_Elab_macroAttribute;
x_3 = l_Lean_Parser_Command_mutual___elambda__1___closed__2;
x_4 = l___regBuiltin_Lean_Elab_Command_expandMutualNamespace___closed__1;
x_5 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_1);
return x_5;
}
}
lean_object* l_Lean_Elab_Command_expandMutualElement_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_2);
x_4 = lean_box(0);
x_5 = lean_apply_1(x_3, x_4);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_3);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_apply_1(x_2, x_6);
return x_7;
}
}
}
lean_object* l_Lean_Elab_Command_expandMutualElement_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Command_expandMutualElement_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_Command_expandMutualElement_match__2___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_apply_2(x_2, x_3, x_4);
return x_5;
}
}
lean_object* l_Lean_Elab_Command_expandMutualElement_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Command_expandMutualElement_match__2___rarg), 2, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_Command_expandMutualElement_match__3___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_apply_2(x_2, x_3, x_4);
return x_5;
}
}
lean_object* l_Lean_Elab_Command_expandMutualElement_match__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Command_expandMutualElement_match__3___rarg), 2, 0);
return x_2;
}
}
lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Command_expandMutualElement___spec__1(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; 
x_7 = x_3 < x_2;
if (x_7 == 0)
{
lean_object* x_8; 
lean_dec(x_5);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_4);
lean_ctor_set(x_8, 1, x_6);
return x_8;
}
else
{
lean_object* x_9; uint8_t x_10; 
x_9 = lean_array_uget(x_1, x_3);
x_10 = !lean_is_exclusive(x_4);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = lean_ctor_get(x_4, 0);
x_12 = lean_ctor_get(x_4, 1);
lean_inc(x_5);
lean_inc(x_9);
x_13 = l_Lean_Macro_expandMacro_x3fImp(x_9, x_5, x_6);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; 
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; lean_object* x_16; size_t x_17; size_t x_18; 
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_16 = lean_array_push(x_11, x_9);
lean_ctor_set(x_4, 0, x_16);
x_17 = 1;
x_18 = x_3 + x_17;
x_3 = x_18;
x_6 = x_15;
goto _start;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; uint8_t x_23; lean_object* x_24; size_t x_25; size_t x_26; 
lean_dec(x_12);
lean_dec(x_9);
x_20 = lean_ctor_get(x_13, 1);
lean_inc(x_20);
lean_dec(x_13);
x_21 = lean_ctor_get(x_14, 0);
lean_inc(x_21);
lean_dec(x_14);
x_22 = lean_array_push(x_11, x_21);
x_23 = 1;
x_24 = lean_box(x_23);
lean_ctor_set(x_4, 1, x_24);
lean_ctor_set(x_4, 0, x_22);
x_25 = 1;
x_26 = x_3 + x_25;
x_3 = x_26;
x_6 = x_20;
goto _start;
}
}
else
{
uint8_t x_28; 
lean_free_object(x_4);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_9);
lean_dec(x_5);
x_28 = !lean_is_exclusive(x_13);
if (x_28 == 0)
{
return x_13;
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_29 = lean_ctor_get(x_13, 0);
x_30 = lean_ctor_get(x_13, 1);
lean_inc(x_30);
lean_inc(x_29);
lean_dec(x_13);
x_31 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_31, 0, x_29);
lean_ctor_set(x_31, 1, x_30);
return x_31;
}
}
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_32 = lean_ctor_get(x_4, 0);
x_33 = lean_ctor_get(x_4, 1);
lean_inc(x_33);
lean_inc(x_32);
lean_dec(x_4);
lean_inc(x_5);
lean_inc(x_9);
x_34 = l_Lean_Macro_expandMacro_x3fImp(x_9, x_5, x_6);
if (lean_obj_tag(x_34) == 0)
{
lean_object* x_35; 
x_35 = lean_ctor_get(x_34, 0);
lean_inc(x_35);
if (lean_obj_tag(x_35) == 0)
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; size_t x_39; size_t x_40; 
x_36 = lean_ctor_get(x_34, 1);
lean_inc(x_36);
lean_dec(x_34);
x_37 = lean_array_push(x_32, x_9);
x_38 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_38, 0, x_37);
lean_ctor_set(x_38, 1, x_33);
x_39 = 1;
x_40 = x_3 + x_39;
x_3 = x_40;
x_4 = x_38;
x_6 = x_36;
goto _start;
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; uint8_t x_45; lean_object* x_46; lean_object* x_47; size_t x_48; size_t x_49; 
lean_dec(x_33);
lean_dec(x_9);
x_42 = lean_ctor_get(x_34, 1);
lean_inc(x_42);
lean_dec(x_34);
x_43 = lean_ctor_get(x_35, 0);
lean_inc(x_43);
lean_dec(x_35);
x_44 = lean_array_push(x_32, x_43);
x_45 = 1;
x_46 = lean_box(x_45);
x_47 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_47, 0, x_44);
lean_ctor_set(x_47, 1, x_46);
x_48 = 1;
x_49 = x_3 + x_48;
x_3 = x_49;
x_4 = x_47;
x_6 = x_42;
goto _start;
}
}
else
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; 
lean_dec(x_33);
lean_dec(x_32);
lean_dec(x_9);
lean_dec(x_5);
x_51 = lean_ctor_get(x_34, 0);
lean_inc(x_51);
x_52 = lean_ctor_get(x_34, 1);
lean_inc(x_52);
if (lean_is_exclusive(x_34)) {
 lean_ctor_release(x_34, 0);
 lean_ctor_release(x_34, 1);
 x_53 = x_34;
} else {
 lean_dec_ref(x_34);
 x_53 = lean_box(0);
}
if (lean_is_scalar(x_53)) {
 x_54 = lean_alloc_ctor(1, 2, 0);
} else {
 x_54 = x_53;
}
lean_ctor_set(x_54, 0, x_51);
lean_ctor_set(x_54, 1, x_52);
return x_54;
}
}
}
}
}
static lean_object* _init_l_Lean_Elab_Command_expandMutualElement___closed__1() {
_start:
{
lean_object* x_1; uint8_t x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Array_empty___closed__1;
x_2 = 0;
x_3 = lean_box(x_2);
x_4 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_3);
return x_4;
}
}
lean_object* l_Lean_Elab_Command_expandMutualElement(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; size_t x_8; size_t x_9; lean_object* x_10; lean_object* x_11; 
x_4 = lean_unsigned_to_nat(1u);
x_5 = l_Lean_Syntax_getArg(x_1, x_4);
x_6 = l_Lean_Syntax_getArgs(x_5);
lean_dec(x_5);
x_7 = lean_array_get_size(x_6);
x_8 = lean_usize_of_nat(x_7);
lean_dec(x_7);
x_9 = 0;
x_10 = l_Lean_Elab_Command_expandMutualElement___closed__1;
x_11 = l_Array_forInUnsafe_loop___at_Lean_Elab_Command_expandMutualElement___spec__1(x_6, x_8, x_9, x_10, x_2, x_3);
lean_dec(x_6);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_12, 1);
lean_inc(x_13);
x_14 = lean_unbox(x_13);
lean_dec(x_13);
if (x_14 == 0)
{
uint8_t x_15; 
lean_dec(x_12);
lean_dec(x_1);
x_15 = !lean_is_exclusive(x_11);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; 
x_16 = lean_ctor_get(x_11, 0);
lean_dec(x_16);
x_17 = lean_box(1);
lean_ctor_set_tag(x_11, 1);
lean_ctor_set(x_11, 0, x_17);
return x_11;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_11, 1);
lean_inc(x_18);
lean_dec(x_11);
x_19 = lean_box(1);
x_20 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set(x_20, 1, x_18);
return x_20;
}
}
else
{
uint8_t x_21; 
x_21 = !lean_is_exclusive(x_11);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_22 = lean_ctor_get(x_11, 0);
lean_dec(x_22);
x_23 = lean_ctor_get(x_12, 0);
lean_inc(x_23);
lean_dec(x_12);
x_24 = l_Lean_nullKind;
x_25 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_25, 0, x_24);
lean_ctor_set(x_25, 1, x_23);
x_26 = l_Lean_Syntax_setArg(x_1, x_4, x_25);
lean_ctor_set(x_11, 0, x_26);
return x_11;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_27 = lean_ctor_get(x_11, 1);
lean_inc(x_27);
lean_dec(x_11);
x_28 = lean_ctor_get(x_12, 0);
lean_inc(x_28);
lean_dec(x_12);
x_29 = l_Lean_nullKind;
x_30 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_30, 0, x_29);
lean_ctor_set(x_30, 1, x_28);
x_31 = l_Lean_Syntax_setArg(x_1, x_4, x_30);
x_32 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_32, 0, x_31);
lean_ctor_set(x_32, 1, x_27);
return x_32;
}
}
}
else
{
uint8_t x_33; 
lean_dec(x_1);
x_33 = !lean_is_exclusive(x_11);
if (x_33 == 0)
{
return x_11;
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_34 = lean_ctor_get(x_11, 0);
x_35 = lean_ctor_get(x_11, 1);
lean_inc(x_35);
lean_inc(x_34);
lean_dec(x_11);
x_36 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_36, 0, x_34);
lean_ctor_set(x_36, 1, x_35);
return x_36;
}
}
}
}
lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Command_expandMutualElement___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
size_t x_7; size_t x_8; lean_object* x_9; 
x_7 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_8 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_9 = l_Array_forInUnsafe_loop___at_Lean_Elab_Command_expandMutualElement___spec__1(x_1, x_7, x_8, x_4, x_5, x_6);
lean_dec(x_1);
return x_9;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Command_expandMutualElement___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Command_expandMutualElement), 3, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Elab_Command_expandMutualElement(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_Lean_Elab_macroAttribute;
x_3 = l_Lean_Parser_Command_mutual___elambda__1___closed__2;
x_4 = l___regBuiltin_Lean_Elab_Command_expandMutualElement___closed__1;
x_5 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_1);
return x_5;
}
}
lean_object* l_Lean_Elab_Command_expandMutualPreamble_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_3);
x_4 = lean_box(0);
x_5 = lean_apply_1(x_2, x_4);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_dec(x_2);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_6, 1);
lean_inc(x_8);
lean_dec(x_6);
x_9 = lean_apply_2(x_3, x_7, x_8);
return x_9;
}
}
}
lean_object* l_Lean_Elab_Command_expandMutualPreamble_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Command_expandMutualPreamble_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_Command_expandMutualPreamble(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_4 = lean_unsigned_to_nat(1u);
x_5 = l_Lean_Syntax_getArg(x_1, x_4);
x_6 = l_Lean_Syntax_getArgs(x_5);
lean_dec(x_5);
x_7 = lean_unsigned_to_nat(0u);
x_8 = l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_splitMutualPreamble_loop(x_6, x_7);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; lean_object* x_10; 
lean_dec(x_1);
x_9 = lean_box(1);
x_10 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_10, 0, x_9);
lean_ctor_set(x_10, 1, x_3);
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; uint8_t x_29; 
x_11 = lean_ctor_get(x_8, 0);
lean_inc(x_11);
lean_dec(x_8);
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_14 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_109____spec__1(x_2, x_3);
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
x_17 = l_Lean_Parser_Command_section___elambda__1___closed__1;
x_18 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_18, 0, x_15);
lean_ctor_set(x_18, 1, x_17);
x_19 = l_Array_empty___closed__1;
x_20 = lean_array_push(x_19, x_18);
x_21 = l_myMacro____x40_Init_Notation___hyg_1340____closed__8;
x_22 = lean_array_push(x_20, x_21);
x_23 = l_Lean_Parser_Command_section___elambda__1___closed__2;
x_24 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_24, 0, x_23);
lean_ctor_set(x_24, 1, x_22);
x_25 = l_Lean_nullKind;
x_26 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_26, 0, x_25);
lean_ctor_set(x_26, 1, x_13);
x_27 = l_Lean_Syntax_setArg(x_1, x_4, x_26);
x_28 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_109____spec__1(x_2, x_16);
x_29 = !lean_is_exclusive(x_28);
if (x_29 == 0)
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_30 = lean_ctor_get(x_28, 0);
x_31 = l_Lean_Parser_Command_end___elambda__1___closed__1;
x_32 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_32, 0, x_30);
lean_ctor_set(x_32, 1, x_31);
x_33 = lean_array_push(x_19, x_32);
x_34 = lean_array_push(x_33, x_21);
x_35 = l_Lean_Parser_Command_end___elambda__1___closed__2;
x_36 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_36, 0, x_35);
lean_ctor_set(x_36, 1, x_34);
x_37 = l_Lean_mkOptionalNode___closed__2;
x_38 = lean_array_push(x_37, x_24);
x_39 = l_Array_append___rarg(x_38, x_12);
lean_dec(x_12);
x_40 = lean_array_push(x_37, x_27);
x_41 = l_Array_append___rarg(x_39, x_40);
lean_dec(x_40);
x_42 = lean_array_push(x_37, x_36);
x_43 = l_Array_append___rarg(x_41, x_42);
lean_dec(x_42);
x_44 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_44, 0, x_25);
lean_ctor_set(x_44, 1, x_43);
lean_ctor_set(x_28, 0, x_44);
return x_28;
}
else
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; 
x_45 = lean_ctor_get(x_28, 0);
x_46 = lean_ctor_get(x_28, 1);
lean_inc(x_46);
lean_inc(x_45);
lean_dec(x_28);
x_47 = l_Lean_Parser_Command_end___elambda__1___closed__1;
x_48 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_48, 0, x_45);
lean_ctor_set(x_48, 1, x_47);
x_49 = lean_array_push(x_19, x_48);
x_50 = lean_array_push(x_49, x_21);
x_51 = l_Lean_Parser_Command_end___elambda__1___closed__2;
x_52 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_52, 0, x_51);
lean_ctor_set(x_52, 1, x_50);
x_53 = l_Lean_mkOptionalNode___closed__2;
x_54 = lean_array_push(x_53, x_24);
x_55 = l_Array_append___rarg(x_54, x_12);
lean_dec(x_12);
x_56 = lean_array_push(x_53, x_27);
x_57 = l_Array_append___rarg(x_55, x_56);
lean_dec(x_56);
x_58 = lean_array_push(x_53, x_52);
x_59 = l_Array_append___rarg(x_57, x_58);
lean_dec(x_58);
x_60 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_60, 0, x_25);
lean_ctor_set(x_60, 1, x_59);
x_61 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_61, 0, x_60);
lean_ctor_set(x_61, 1, x_46);
return x_61;
}
}
}
}
lean_object* l_Lean_Elab_Command_expandMutualPreamble___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Elab_Command_expandMutualPreamble(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Command_expandMutualPreamble___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Command_expandMutualPreamble___boxed), 3, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Elab_Command_expandMutualPreamble(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_Lean_Elab_macroAttribute;
x_3 = l_Lean_Parser_Command_mutual___elambda__1___closed__2;
x_4 = l___regBuiltin_Lean_Elab_Command_expandMutualPreamble___closed__1;
x_5 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_1);
return x_5;
}
}
static lean_object* _init_l_Lean_Elab_Command_elabMutual___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("invalid mutual block");
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Command_elabMutual___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Command_elabMutual___closed__1;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Elab_Command_elabMutual___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Command_elabMutual___closed__2;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l_Lean_Elab_Command_elabMutual(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_isMutualInductive(x_1);
if (x_5 == 0)
{
uint8_t x_6; 
x_6 = l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_isMutualDef(x_1);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; 
x_7 = l_Lean_Elab_Command_elabMutual___closed__3;
x_8 = l_Lean_throwError___at___private_Lean_Elab_Command_0__Lean_Elab_Command_elabCommandUsing___spec__1(x_7, x_2, x_3, x_4);
lean_dec(x_3);
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_9 = lean_unsigned_to_nat(1u);
x_10 = l_Lean_Syntax_getArg(x_1, x_9);
x_11 = l_Lean_Syntax_getArgs(x_10);
lean_dec(x_10);
x_12 = l_Lean_Elab_Command_elabMutualDef(x_11, x_2, x_3, x_4);
return x_12;
}
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_13 = lean_unsigned_to_nat(1u);
x_14 = l_Lean_Syntax_getArg(x_1, x_13);
x_15 = l_Lean_Syntax_getArgs(x_14);
lean_dec(x_14);
x_16 = l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_elabMutualInductive(x_15, x_2, x_3, x_4);
return x_16;
}
}
}
lean_object* l_Lean_Elab_Command_elabMutual___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_Elab_Command_elabMutual(x_1, x_2, x_3, x_4);
lean_dec(x_1);
return x_5;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Command_elabMutual___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Command_elabMutual___boxed), 4, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Elab_Command_elabMutual(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_Lean_Elab_Command_commandElabAttribute;
x_3 = l_Lean_Parser_Command_mutual___elambda__1___closed__2;
x_4 = l___regBuiltin_Lean_Elab_Command_elabMutual___closed__1;
x_5 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_1);
return x_5;
}
}
lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Command_elabAttr___spec__1___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Elab_Term_applyAttributes(x_2, x_1, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_10;
}
}
lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Command_elabAttr___spec__1(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
uint8_t x_9; 
x_9 = x_4 < x_3;
if (x_9 == 0)
{
lean_object* x_10; 
lean_dec(x_1);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_5);
lean_ctor_set(x_10, 1, x_8);
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
lean_dec(x_5);
x_11 = lean_array_uget(x_2, x_4);
x_12 = lean_box(0);
x_13 = l_Lean_Syntax_getId(x_11);
x_14 = lean_alloc_closure((void*)(l_Lean_resolveGlobalConstNoOverload___at_Lean_Elab_Term_elabDoubleQuotedName___spec__1___boxed), 8, 1);
lean_closure_set(x_14, 0, x_13);
lean_inc(x_1);
x_15 = lean_alloc_closure((void*)(l_Array_forInUnsafe_loop___at_Lean_Elab_Command_elabAttr___spec__1___lambda__1___boxed), 9, 1);
lean_closure_set(x_15, 0, x_1);
x_16 = lean_alloc_closure((void*)(l_ReaderT_bind___at_Lean_Elab_Term_instMonadLogTermElabM___spec__2___rarg), 9, 2);
lean_closure_set(x_16, 0, x_14);
lean_closure_set(x_16, 1, x_15);
x_17 = l_Lean_Elab_Command_getRef(x_6, x_7, x_8);
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
x_20 = l_Lean_replaceRef(x_11, x_18);
lean_dec(x_18);
lean_dec(x_11);
x_21 = lean_ctor_get(x_6, 0);
x_22 = lean_ctor_get(x_6, 1);
x_23 = lean_ctor_get(x_6, 2);
x_24 = lean_ctor_get(x_6, 3);
x_25 = lean_ctor_get(x_6, 4);
x_26 = lean_ctor_get(x_6, 5);
lean_inc(x_26);
lean_inc(x_25);
lean_inc(x_24);
lean_inc(x_23);
lean_inc(x_22);
lean_inc(x_21);
x_27 = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(x_27, 0, x_21);
lean_ctor_set(x_27, 1, x_22);
lean_ctor_set(x_27, 2, x_23);
lean_ctor_set(x_27, 3, x_24);
lean_ctor_set(x_27, 4, x_25);
lean_ctor_set(x_27, 5, x_26);
lean_ctor_set(x_27, 6, x_20);
x_28 = l_Lean_Elab_Command_liftTermElabM___rarg(x_12, x_16, x_27, x_7, x_19);
if (lean_obj_tag(x_28) == 0)
{
lean_object* x_29; size_t x_30; size_t x_31; lean_object* x_32; 
x_29 = lean_ctor_get(x_28, 1);
lean_inc(x_29);
lean_dec(x_28);
x_30 = 1;
x_31 = x_4 + x_30;
x_32 = lean_box(0);
x_4 = x_31;
x_5 = x_32;
x_8 = x_29;
goto _start;
}
else
{
uint8_t x_34; 
lean_dec(x_1);
x_34 = !lean_is_exclusive(x_28);
if (x_34 == 0)
{
return x_28;
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_35 = lean_ctor_get(x_28, 0);
x_36 = lean_ctor_get(x_28, 1);
lean_inc(x_36);
lean_inc(x_35);
lean_dec(x_28);
x_37 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_37, 0, x_35);
lean_ctor_set(x_37, 1, x_36);
return x_37;
}
}
}
}
}
lean_object* l_Lean_Elab_Command_elabAttr(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_unsigned_to_nat(2u);
x_6 = l_Lean_Syntax_getArg(x_1, x_5);
lean_inc(x_3);
lean_inc(x_2);
x_7 = l_Lean_Elab_elabAttrs___at_Lean_Elab_Command_elabMutualDef___spec__3(x_6, x_2, x_3, x_4);
lean_dec(x_6);
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; size_t x_14; size_t x_15; lean_object* x_16; lean_object* x_17; 
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_7, 1);
lean_inc(x_9);
lean_dec(x_7);
x_10 = lean_unsigned_to_nat(4u);
x_11 = l_Lean_Syntax_getArg(x_1, x_10);
x_12 = l_Lean_Syntax_getArgs(x_11);
lean_dec(x_11);
x_13 = lean_array_get_size(x_12);
x_14 = lean_usize_of_nat(x_13);
lean_dec(x_13);
x_15 = 0;
x_16 = lean_box(0);
x_17 = l_Array_forInUnsafe_loop___at_Lean_Elab_Command_elabAttr___spec__1(x_8, x_12, x_14, x_15, x_16, x_2, x_3, x_9);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_12);
if (lean_obj_tag(x_17) == 0)
{
uint8_t x_18; 
x_18 = !lean_is_exclusive(x_17);
if (x_18 == 0)
{
return x_17;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_19 = lean_ctor_get(x_17, 0);
x_20 = lean_ctor_get(x_17, 1);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_17);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_19);
lean_ctor_set(x_21, 1, x_20);
return x_21;
}
}
else
{
uint8_t x_22; 
x_22 = !lean_is_exclusive(x_17);
if (x_22 == 0)
{
return x_17;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_23 = lean_ctor_get(x_17, 0);
x_24 = lean_ctor_get(x_17, 1);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_17);
x_25 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_25, 0, x_23);
lean_ctor_set(x_25, 1, x_24);
return x_25;
}
}
}
else
{
uint8_t x_26; 
lean_dec(x_3);
lean_dec(x_2);
x_26 = !lean_is_exclusive(x_7);
if (x_26 == 0)
{
return x_7;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_27 = lean_ctor_get(x_7, 0);
x_28 = lean_ctor_get(x_7, 1);
lean_inc(x_28);
lean_inc(x_27);
lean_dec(x_7);
x_29 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_29, 0, x_27);
lean_ctor_set(x_29, 1, x_28);
return x_29;
}
}
}
}
lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Command_elabAttr___spec__1___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Array_forInUnsafe_loop___at_Lean_Elab_Command_elabAttr___spec__1___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
return x_10;
}
}
lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Command_elabAttr___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
size_t x_9; size_t x_10; lean_object* x_11; 
x_9 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_10 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_11 = l_Array_forInUnsafe_loop___at_Lean_Elab_Command_elabAttr___spec__1(x_1, x_2, x_9, x_10, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_2);
return x_11;
}
}
lean_object* l_Lean_Elab_Command_elabAttr___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_Elab_Command_elabAttr(x_1, x_2, x_3, x_4);
lean_dec(x_1);
return x_5;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Command_elabAttr___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Command_elabAttr___boxed), 4, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Elab_Command_elabAttr(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_Lean_Elab_Command_commandElabAttribute;
x_3 = l_Lean_Parser_Command_attribute___elambda__1___closed__2;
x_4 = l___regBuiltin_Lean_Elab_Command_elabAttr___closed__1;
x_5 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_1);
return x_5;
}
}
static lean_object* _init_l_Lean_Elab_Command_expandInitCmd___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_myMacro____x40_Init_NotationExtra___hyg_1098____closed__8;
x_2 = l_myMacro____x40_Init_Notation___hyg_13985____closed__10;
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Command_expandInitCmd___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Elab_Command_expandInitCmd___closed__1;
x_2 = l_myMacro____x40_Init_Notation___hyg_13985____closed__10;
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Command_expandInitCmd___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Elab_Command_expandInitCmd___closed__2;
x_2 = l_myMacro____x40_Init_Notation___hyg_13985____closed__10;
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Command_expandInitCmd___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Elab_Command_expandInitCmd___closed__3;
x_2 = l_myMacro____x40_Init_Notation___hyg_13985____closed__10;
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Command_expandInitCmd___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Elab_Command_expandInitCmd___closed__4;
x_2 = l_myMacro____x40_Init_Notation___hyg_13985____closed__10;
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Command_expandInitCmd___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_myMacro____x40_Init_NotationExtra___hyg_1098____closed__7;
x_2 = l_Lean_Elab_Command_expandInitCmd___closed__5;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Command_expandInitCmd___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Array_empty___closed__1;
x_2 = l_Lean_Elab_Command_expandInitCmd___closed__6;
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Command_expandInitCmd___closed__8() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("initFn");
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Command_expandInitCmd___closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Command_expandInitCmd___closed__8;
x_2 = lean_string_utf8_byte_size(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Elab_Command_expandInitCmd___closed__10() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Elab_Command_expandInitCmd___closed__8;
x_2 = lean_unsigned_to_nat(0u);
x_3 = l_Lean_Elab_Command_expandInitCmd___closed__9;
x_4 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Elab_Command_expandInitCmd___closed__11() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Elab_Command_expandInitCmd___closed__8;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Command_expandInitCmd___closed__12() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_myMacro____x40_Init_System_IO___hyg_2694____closed__5;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Command_expandInitCmd___closed__13() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Elab_Command_expandInitCmd___closed__12;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Command_expandInitCmd___closed__14() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_myMacro____x40_Init_NotationExtra___hyg_1098____closed__1;
x_2 = l_Lean_myMacro____x40_Init_NotationExtra___hyg_1098____closed__8;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Command_expandInitCmd___closed__15() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Array_empty___closed__1;
x_2 = l_Lean_Elab_Command_expandInitCmd___closed__14;
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
lean_object* l_Lean_Elab_Command_expandInitCmd(uint8_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; lean_object* x_10; 
x_5 = lean_unsigned_to_nat(1u);
x_6 = l_Lean_Syntax_getArg(x_2, x_5);
x_7 = lean_unsigned_to_nat(2u);
x_8 = l_Lean_Syntax_getArg(x_2, x_7);
x_9 = l_Lean_Syntax_isNone(x_6);
if (x_1 == 0)
{
lean_object* x_443; 
x_443 = l_Lean_initFn____x40_Lean_Compiler_InitAttr___hyg_507____closed__2;
x_10 = x_443;
goto block_442;
}
else
{
lean_object* x_444; 
x_444 = l_Lean_initFn____x40_Lean_Compiler_InitAttr___hyg_523____closed__2;
x_10 = x_444;
goto block_442;
}
block_442:
{
lean_object* x_11; 
x_11 = l_Lean_mkIdentFrom(x_2, x_10);
if (x_9 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_12 = lean_unsigned_to_nat(0u);
x_13 = l_Lean_Syntax_getArg(x_6, x_12);
x_14 = l_Lean_Syntax_getArg(x_6, x_5);
lean_dec(x_6);
x_15 = l_Lean_Syntax_getArg(x_14, x_5);
lean_dec(x_14);
x_16 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_109____spec__1(x_3, x_4);
x_17 = !lean_is_exclusive(x_16);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; 
x_18 = lean_ctor_get(x_16, 0);
x_19 = lean_ctor_get(x_3, 2);
lean_inc(x_19);
x_20 = lean_ctor_get(x_3, 1);
lean_inc(x_20);
lean_dec(x_3);
x_21 = l_Lean_myMacro____x40_Init_NotationExtra___hyg_1098____closed__20;
lean_inc(x_18);
x_22 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_22, 0, x_18);
lean_ctor_set(x_22, 1, x_21);
x_23 = l_Array_empty___closed__1;
x_24 = lean_array_push(x_23, x_22);
x_25 = l_Lean_Elab_Command_expandInitCmd___closed__11;
lean_inc(x_19);
lean_inc(x_20);
x_26 = l_Lean_addMacroScope(x_20, x_25, x_19);
x_27 = lean_box(0);
x_28 = l_Lean_instInhabitedSourceInfo___closed__1;
x_29 = l_Lean_Elab_Command_expandInitCmd___closed__10;
x_30 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_30, 0, x_28);
lean_ctor_set(x_30, 1, x_29);
lean_ctor_set(x_30, 2, x_26);
lean_ctor_set(x_30, 3, x_27);
x_31 = lean_array_push(x_23, x_30);
x_32 = l_myMacro____x40_Init_Notation___hyg_13985____closed__10;
lean_inc(x_31);
x_33 = lean_array_push(x_31, x_32);
x_34 = l_Lean_myMacro____x40_Init_NotationExtra___hyg_1098____closed__23;
x_35 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_35, 0, x_34);
lean_ctor_set(x_35, 1, x_33);
x_36 = lean_array_push(x_24, x_35);
x_37 = l_myMacro____x40_Init_Notation___hyg_13985____closed__9;
lean_inc(x_18);
x_38 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_38, 0, x_18);
lean_ctor_set(x_38, 1, x_37);
x_39 = lean_array_push(x_23, x_38);
x_40 = l_myMacro____x40_Init_System_IO___hyg_2694____closed__5;
x_41 = l_Lean_addMacroScope(x_20, x_40, x_19);
x_42 = l_myMacro____x40_Init_System_IO___hyg_2694____closed__11;
x_43 = l_Lean_Elab_Command_expandInitCmd___closed__13;
x_44 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_44, 0, x_28);
lean_ctor_set(x_44, 1, x_42);
lean_ctor_set(x_44, 2, x_41);
lean_ctor_set(x_44, 3, x_43);
x_45 = lean_array_push(x_23, x_44);
lean_inc(x_15);
x_46 = lean_array_push(x_23, x_15);
x_47 = l_Lean_nullKind___closed__2;
x_48 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_48, 0, x_47);
lean_ctor_set(x_48, 1, x_46);
x_49 = lean_array_push(x_45, x_48);
x_50 = l_myMacro____x40_Init_Notation___hyg_2137____closed__4;
x_51 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_51, 0, x_50);
lean_ctor_set(x_51, 1, x_49);
lean_inc(x_39);
x_52 = lean_array_push(x_39, x_51);
x_53 = l_Lean_expandExplicitBindersAux_loop___closed__4;
x_54 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_54, 0, x_53);
lean_ctor_set(x_54, 1, x_52);
x_55 = lean_array_push(x_23, x_54);
x_56 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_56, 0, x_47);
lean_ctor_set(x_56, 1, x_55);
x_57 = l_Lean_myMacro____x40_Init_NotationExtra___hyg_1098____closed__8;
x_58 = lean_array_push(x_57, x_56);
x_59 = l_Lean_myMacro____x40_Init_NotationExtra___hyg_1098____closed__25;
x_60 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_60, 0, x_59);
lean_ctor_set(x_60, 1, x_58);
x_61 = lean_array_push(x_36, x_60);
x_62 = l_myMacro____x40_Init_Notation___hyg_14562____closed__11;
lean_inc(x_18);
x_63 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_63, 0, x_18);
lean_ctor_set(x_63, 1, x_62);
x_64 = lean_array_push(x_23, x_63);
x_65 = l_Lean_Parser_myMacro____x40_Lean_Parser_Extra___hyg_272____closed__1;
lean_inc(x_18);
x_66 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_66, 0, x_18);
lean_ctor_set(x_66, 1, x_65);
x_67 = lean_array_push(x_23, x_66);
x_68 = lean_array_push(x_67, x_8);
x_69 = l_Lean_Parser_myMacro____x40_Lean_Parser_Extra___hyg_272____closed__2;
x_70 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_70, 0, x_69);
lean_ctor_set(x_70, 1, x_68);
x_71 = lean_array_push(x_64, x_70);
x_72 = lean_array_push(x_71, x_32);
x_73 = l_Lean_myMacro____x40_Init_NotationExtra___hyg_1098____closed__33;
x_74 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_74, 0, x_73);
lean_ctor_set(x_74, 1, x_72);
x_75 = lean_array_push(x_61, x_74);
x_76 = l_Lean_myMacro____x40_Init_NotationExtra___hyg_1098____closed__21;
x_77 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_77, 0, x_76);
lean_ctor_set(x_77, 1, x_75);
x_78 = l_Lean_Elab_Command_expandInitCmd___closed__7;
x_79 = lean_array_push(x_78, x_77);
x_80 = l_Lean_myMacro____x40_Init_NotationExtra___hyg_1098____closed__5;
x_81 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_81, 0, x_80);
lean_ctor_set(x_81, 1, x_79);
x_82 = lean_array_push(x_23, x_81);
x_83 = l_Lean_myMacro____x40_Init_NotationExtra___hyg_1098____closed__11;
lean_inc(x_18);
x_84 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_84, 0, x_18);
lean_ctor_set(x_84, 1, x_83);
x_85 = lean_array_push(x_23, x_84);
x_86 = lean_array_push(x_23, x_11);
x_87 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_87, 0, x_47);
lean_ctor_set(x_87, 1, x_31);
x_88 = lean_array_push(x_86, x_87);
x_89 = l_Lean_myMacro____x40_Init_NotationExtra___hyg_1098____closed__15;
x_90 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_90, 0, x_89);
lean_ctor_set(x_90, 1, x_88);
x_91 = l_Lean_Elab_Command_expandInitCmd___closed__15;
x_92 = lean_array_push(x_91, x_90);
x_93 = l_Lean_myMacro____x40_Init_NotationExtra___hyg_1098____closed__13;
x_94 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_94, 0, x_93);
lean_ctor_set(x_94, 1, x_92);
x_95 = lean_array_push(x_23, x_94);
x_96 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_96, 0, x_47);
lean_ctor_set(x_96, 1, x_95);
x_97 = lean_array_push(x_85, x_96);
x_98 = l_term_x5b___x5d___closed__9;
lean_inc(x_18);
x_99 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_99, 0, x_18);
lean_ctor_set(x_99, 1, x_98);
x_100 = lean_array_push(x_97, x_99);
x_101 = l_Lean_myMacro____x40_Init_NotationExtra___hyg_1098____closed__10;
x_102 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_102, 0, x_101);
lean_ctor_set(x_102, 1, x_100);
x_103 = lean_array_push(x_23, x_102);
x_104 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_104, 0, x_47);
lean_ctor_set(x_104, 1, x_103);
x_105 = lean_array_push(x_57, x_104);
x_106 = lean_array_push(x_105, x_32);
x_107 = lean_array_push(x_106, x_32);
x_108 = lean_array_push(x_107, x_32);
x_109 = lean_array_push(x_108, x_32);
x_110 = l_Lean_myMacro____x40_Init_NotationExtra___hyg_1098____closed__7;
x_111 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_111, 0, x_110);
lean_ctor_set(x_111, 1, x_109);
x_112 = lean_array_push(x_23, x_111);
x_113 = l_Lean_Parser_Command_constant___elambda__1___closed__1;
x_114 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_114, 0, x_18);
lean_ctor_set(x_114, 1, x_113);
x_115 = lean_array_push(x_23, x_114);
x_116 = lean_array_push(x_115, x_13);
x_117 = lean_array_push(x_39, x_15);
x_118 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_118, 0, x_53);
lean_ctor_set(x_118, 1, x_117);
x_119 = lean_array_push(x_57, x_118);
x_120 = l_myMacro____x40_Init_NotationExtra___hyg_3357____closed__32;
x_121 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_121, 0, x_120);
lean_ctor_set(x_121, 1, x_119);
x_122 = lean_array_push(x_116, x_121);
x_123 = lean_array_push(x_122, x_32);
x_124 = l_Lean_Parser_Command_constant___elambda__1___closed__2;
x_125 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_125, 0, x_124);
lean_ctor_set(x_125, 1, x_123);
x_126 = lean_array_push(x_112, x_125);
x_127 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_127, 0, x_80);
lean_ctor_set(x_127, 1, x_126);
x_128 = lean_array_push(x_82, x_127);
x_129 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_129, 0, x_47);
lean_ctor_set(x_129, 1, x_128);
lean_ctor_set(x_16, 0, x_129);
return x_16;
}
else
{
lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; lean_object* x_170; lean_object* x_171; lean_object* x_172; lean_object* x_173; lean_object* x_174; lean_object* x_175; lean_object* x_176; lean_object* x_177; lean_object* x_178; lean_object* x_179; lean_object* x_180; lean_object* x_181; lean_object* x_182; lean_object* x_183; lean_object* x_184; lean_object* x_185; lean_object* x_186; lean_object* x_187; lean_object* x_188; lean_object* x_189; lean_object* x_190; lean_object* x_191; lean_object* x_192; lean_object* x_193; lean_object* x_194; lean_object* x_195; lean_object* x_196; lean_object* x_197; lean_object* x_198; lean_object* x_199; lean_object* x_200; lean_object* x_201; lean_object* x_202; lean_object* x_203; lean_object* x_204; lean_object* x_205; lean_object* x_206; lean_object* x_207; lean_object* x_208; lean_object* x_209; lean_object* x_210; lean_object* x_211; lean_object* x_212; lean_object* x_213; lean_object* x_214; lean_object* x_215; lean_object* x_216; lean_object* x_217; lean_object* x_218; lean_object* x_219; lean_object* x_220; lean_object* x_221; lean_object* x_222; lean_object* x_223; lean_object* x_224; lean_object* x_225; lean_object* x_226; lean_object* x_227; lean_object* x_228; lean_object* x_229; lean_object* x_230; lean_object* x_231; lean_object* x_232; lean_object* x_233; lean_object* x_234; lean_object* x_235; lean_object* x_236; lean_object* x_237; lean_object* x_238; lean_object* x_239; lean_object* x_240; lean_object* x_241; lean_object* x_242; lean_object* x_243; 
x_130 = lean_ctor_get(x_16, 0);
x_131 = lean_ctor_get(x_16, 1);
lean_inc(x_131);
lean_inc(x_130);
lean_dec(x_16);
x_132 = lean_ctor_get(x_3, 2);
lean_inc(x_132);
x_133 = lean_ctor_get(x_3, 1);
lean_inc(x_133);
lean_dec(x_3);
x_134 = l_Lean_myMacro____x40_Init_NotationExtra___hyg_1098____closed__20;
lean_inc(x_130);
x_135 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_135, 0, x_130);
lean_ctor_set(x_135, 1, x_134);
x_136 = l_Array_empty___closed__1;
x_137 = lean_array_push(x_136, x_135);
x_138 = l_Lean_Elab_Command_expandInitCmd___closed__11;
lean_inc(x_132);
lean_inc(x_133);
x_139 = l_Lean_addMacroScope(x_133, x_138, x_132);
x_140 = lean_box(0);
x_141 = l_Lean_instInhabitedSourceInfo___closed__1;
x_142 = l_Lean_Elab_Command_expandInitCmd___closed__10;
x_143 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_143, 0, x_141);
lean_ctor_set(x_143, 1, x_142);
lean_ctor_set(x_143, 2, x_139);
lean_ctor_set(x_143, 3, x_140);
x_144 = lean_array_push(x_136, x_143);
x_145 = l_myMacro____x40_Init_Notation___hyg_13985____closed__10;
lean_inc(x_144);
x_146 = lean_array_push(x_144, x_145);
x_147 = l_Lean_myMacro____x40_Init_NotationExtra___hyg_1098____closed__23;
x_148 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_148, 0, x_147);
lean_ctor_set(x_148, 1, x_146);
x_149 = lean_array_push(x_137, x_148);
x_150 = l_myMacro____x40_Init_Notation___hyg_13985____closed__9;
lean_inc(x_130);
x_151 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_151, 0, x_130);
lean_ctor_set(x_151, 1, x_150);
x_152 = lean_array_push(x_136, x_151);
x_153 = l_myMacro____x40_Init_System_IO___hyg_2694____closed__5;
x_154 = l_Lean_addMacroScope(x_133, x_153, x_132);
x_155 = l_myMacro____x40_Init_System_IO___hyg_2694____closed__11;
x_156 = l_Lean_Elab_Command_expandInitCmd___closed__13;
x_157 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_157, 0, x_141);
lean_ctor_set(x_157, 1, x_155);
lean_ctor_set(x_157, 2, x_154);
lean_ctor_set(x_157, 3, x_156);
x_158 = lean_array_push(x_136, x_157);
lean_inc(x_15);
x_159 = lean_array_push(x_136, x_15);
x_160 = l_Lean_nullKind___closed__2;
x_161 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_161, 0, x_160);
lean_ctor_set(x_161, 1, x_159);
x_162 = lean_array_push(x_158, x_161);
x_163 = l_myMacro____x40_Init_Notation___hyg_2137____closed__4;
x_164 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_164, 0, x_163);
lean_ctor_set(x_164, 1, x_162);
lean_inc(x_152);
x_165 = lean_array_push(x_152, x_164);
x_166 = l_Lean_expandExplicitBindersAux_loop___closed__4;
x_167 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_167, 0, x_166);
lean_ctor_set(x_167, 1, x_165);
x_168 = lean_array_push(x_136, x_167);
x_169 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_169, 0, x_160);
lean_ctor_set(x_169, 1, x_168);
x_170 = l_Lean_myMacro____x40_Init_NotationExtra___hyg_1098____closed__8;
x_171 = lean_array_push(x_170, x_169);
x_172 = l_Lean_myMacro____x40_Init_NotationExtra___hyg_1098____closed__25;
x_173 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_173, 0, x_172);
lean_ctor_set(x_173, 1, x_171);
x_174 = lean_array_push(x_149, x_173);
x_175 = l_myMacro____x40_Init_Notation___hyg_14562____closed__11;
lean_inc(x_130);
x_176 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_176, 0, x_130);
lean_ctor_set(x_176, 1, x_175);
x_177 = lean_array_push(x_136, x_176);
x_178 = l_Lean_Parser_myMacro____x40_Lean_Parser_Extra___hyg_272____closed__1;
lean_inc(x_130);
x_179 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_179, 0, x_130);
lean_ctor_set(x_179, 1, x_178);
x_180 = lean_array_push(x_136, x_179);
x_181 = lean_array_push(x_180, x_8);
x_182 = l_Lean_Parser_myMacro____x40_Lean_Parser_Extra___hyg_272____closed__2;
x_183 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_183, 0, x_182);
lean_ctor_set(x_183, 1, x_181);
x_184 = lean_array_push(x_177, x_183);
x_185 = lean_array_push(x_184, x_145);
x_186 = l_Lean_myMacro____x40_Init_NotationExtra___hyg_1098____closed__33;
x_187 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_187, 0, x_186);
lean_ctor_set(x_187, 1, x_185);
x_188 = lean_array_push(x_174, x_187);
x_189 = l_Lean_myMacro____x40_Init_NotationExtra___hyg_1098____closed__21;
x_190 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_190, 0, x_189);
lean_ctor_set(x_190, 1, x_188);
x_191 = l_Lean_Elab_Command_expandInitCmd___closed__7;
x_192 = lean_array_push(x_191, x_190);
x_193 = l_Lean_myMacro____x40_Init_NotationExtra___hyg_1098____closed__5;
x_194 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_194, 0, x_193);
lean_ctor_set(x_194, 1, x_192);
x_195 = lean_array_push(x_136, x_194);
x_196 = l_Lean_myMacro____x40_Init_NotationExtra___hyg_1098____closed__11;
lean_inc(x_130);
x_197 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_197, 0, x_130);
lean_ctor_set(x_197, 1, x_196);
x_198 = lean_array_push(x_136, x_197);
x_199 = lean_array_push(x_136, x_11);
x_200 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_200, 0, x_160);
lean_ctor_set(x_200, 1, x_144);
x_201 = lean_array_push(x_199, x_200);
x_202 = l_Lean_myMacro____x40_Init_NotationExtra___hyg_1098____closed__15;
x_203 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_203, 0, x_202);
lean_ctor_set(x_203, 1, x_201);
x_204 = l_Lean_Elab_Command_expandInitCmd___closed__15;
x_205 = lean_array_push(x_204, x_203);
x_206 = l_Lean_myMacro____x40_Init_NotationExtra___hyg_1098____closed__13;
x_207 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_207, 0, x_206);
lean_ctor_set(x_207, 1, x_205);
x_208 = lean_array_push(x_136, x_207);
x_209 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_209, 0, x_160);
lean_ctor_set(x_209, 1, x_208);
x_210 = lean_array_push(x_198, x_209);
x_211 = l_term_x5b___x5d___closed__9;
lean_inc(x_130);
x_212 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_212, 0, x_130);
lean_ctor_set(x_212, 1, x_211);
x_213 = lean_array_push(x_210, x_212);
x_214 = l_Lean_myMacro____x40_Init_NotationExtra___hyg_1098____closed__10;
x_215 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_215, 0, x_214);
lean_ctor_set(x_215, 1, x_213);
x_216 = lean_array_push(x_136, x_215);
x_217 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_217, 0, x_160);
lean_ctor_set(x_217, 1, x_216);
x_218 = lean_array_push(x_170, x_217);
x_219 = lean_array_push(x_218, x_145);
x_220 = lean_array_push(x_219, x_145);
x_221 = lean_array_push(x_220, x_145);
x_222 = lean_array_push(x_221, x_145);
x_223 = l_Lean_myMacro____x40_Init_NotationExtra___hyg_1098____closed__7;
x_224 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_224, 0, x_223);
lean_ctor_set(x_224, 1, x_222);
x_225 = lean_array_push(x_136, x_224);
x_226 = l_Lean_Parser_Command_constant___elambda__1___closed__1;
x_227 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_227, 0, x_130);
lean_ctor_set(x_227, 1, x_226);
x_228 = lean_array_push(x_136, x_227);
x_229 = lean_array_push(x_228, x_13);
x_230 = lean_array_push(x_152, x_15);
x_231 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_231, 0, x_166);
lean_ctor_set(x_231, 1, x_230);
x_232 = lean_array_push(x_170, x_231);
x_233 = l_myMacro____x40_Init_NotationExtra___hyg_3357____closed__32;
x_234 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_234, 0, x_233);
lean_ctor_set(x_234, 1, x_232);
x_235 = lean_array_push(x_229, x_234);
x_236 = lean_array_push(x_235, x_145);
x_237 = l_Lean_Parser_Command_constant___elambda__1___closed__2;
x_238 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_238, 0, x_237);
lean_ctor_set(x_238, 1, x_236);
x_239 = lean_array_push(x_225, x_238);
x_240 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_240, 0, x_193);
lean_ctor_set(x_240, 1, x_239);
x_241 = lean_array_push(x_195, x_240);
x_242 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_242, 0, x_160);
lean_ctor_set(x_242, 1, x_241);
x_243 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_243, 0, x_242);
lean_ctor_set(x_243, 1, x_131);
return x_243;
}
}
else
{
lean_object* x_244; uint8_t x_245; 
lean_dec(x_6);
x_244 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_109____spec__1(x_3, x_4);
x_245 = !lean_is_exclusive(x_244);
if (x_245 == 0)
{
lean_object* x_246; lean_object* x_247; lean_object* x_248; lean_object* x_249; lean_object* x_250; lean_object* x_251; lean_object* x_252; lean_object* x_253; lean_object* x_254; lean_object* x_255; lean_object* x_256; lean_object* x_257; lean_object* x_258; lean_object* x_259; lean_object* x_260; lean_object* x_261; lean_object* x_262; lean_object* x_263; lean_object* x_264; lean_object* x_265; lean_object* x_266; lean_object* x_267; lean_object* x_268; lean_object* x_269; lean_object* x_270; lean_object* x_271; lean_object* x_272; lean_object* x_273; lean_object* x_274; lean_object* x_275; lean_object* x_276; lean_object* x_277; lean_object* x_278; lean_object* x_279; lean_object* x_280; lean_object* x_281; lean_object* x_282; lean_object* x_283; lean_object* x_284; lean_object* x_285; lean_object* x_286; lean_object* x_287; lean_object* x_288; lean_object* x_289; lean_object* x_290; lean_object* x_291; lean_object* x_292; lean_object* x_293; lean_object* x_294; lean_object* x_295; lean_object* x_296; lean_object* x_297; lean_object* x_298; lean_object* x_299; lean_object* x_300; lean_object* x_301; lean_object* x_302; lean_object* x_303; lean_object* x_304; lean_object* x_305; lean_object* x_306; lean_object* x_307; lean_object* x_308; lean_object* x_309; lean_object* x_310; lean_object* x_311; lean_object* x_312; lean_object* x_313; lean_object* x_314; lean_object* x_315; lean_object* x_316; lean_object* x_317; lean_object* x_318; lean_object* x_319; lean_object* x_320; lean_object* x_321; lean_object* x_322; lean_object* x_323; lean_object* x_324; lean_object* x_325; lean_object* x_326; lean_object* x_327; lean_object* x_328; lean_object* x_329; lean_object* x_330; lean_object* x_331; lean_object* x_332; lean_object* x_333; lean_object* x_334; lean_object* x_335; lean_object* x_336; lean_object* x_337; lean_object* x_338; lean_object* x_339; lean_object* x_340; lean_object* x_341; lean_object* x_342; 
x_246 = lean_ctor_get(x_244, 0);
x_247 = lean_ctor_get(x_3, 2);
lean_inc(x_247);
x_248 = lean_ctor_get(x_3, 1);
lean_inc(x_248);
lean_dec(x_3);
x_249 = l_Lean_myMacro____x40_Init_NotationExtra___hyg_1098____closed__11;
lean_inc(x_246);
x_250 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_250, 0, x_246);
lean_ctor_set(x_250, 1, x_249);
x_251 = l_Array_empty___closed__1;
x_252 = lean_array_push(x_251, x_250);
x_253 = lean_array_push(x_251, x_11);
x_254 = l_myMacro____x40_Init_Notation___hyg_1340____closed__8;
x_255 = lean_array_push(x_253, x_254);
x_256 = l_Lean_myMacro____x40_Init_NotationExtra___hyg_1098____closed__15;
x_257 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_257, 0, x_256);
lean_ctor_set(x_257, 1, x_255);
x_258 = l_myMacro____x40_Init_NotationExtra___hyg_3357____closed__30;
x_259 = lean_array_push(x_258, x_257);
x_260 = l_Lean_myMacro____x40_Init_NotationExtra___hyg_1098____closed__13;
x_261 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_261, 0, x_260);
lean_ctor_set(x_261, 1, x_259);
x_262 = lean_array_push(x_251, x_261);
x_263 = l_Lean_nullKind___closed__2;
x_264 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_264, 0, x_263);
lean_ctor_set(x_264, 1, x_262);
x_265 = lean_array_push(x_252, x_264);
x_266 = l_term_x5b___x5d___closed__9;
lean_inc(x_246);
x_267 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_267, 0, x_246);
lean_ctor_set(x_267, 1, x_266);
x_268 = lean_array_push(x_265, x_267);
x_269 = l_Lean_myMacro____x40_Init_NotationExtra___hyg_1098____closed__10;
x_270 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_270, 0, x_269);
lean_ctor_set(x_270, 1, x_268);
x_271 = lean_array_push(x_251, x_270);
x_272 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_272, 0, x_263);
lean_ctor_set(x_272, 1, x_271);
x_273 = l_myMacro____x40_Init_Notation___hyg_13068____closed__5;
x_274 = lean_array_push(x_273, x_272);
x_275 = lean_array_push(x_274, x_254);
x_276 = lean_array_push(x_275, x_254);
x_277 = lean_array_push(x_276, x_254);
x_278 = lean_array_push(x_277, x_254);
x_279 = l_Lean_myMacro____x40_Init_NotationExtra___hyg_1098____closed__7;
x_280 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_280, 0, x_279);
lean_ctor_set(x_280, 1, x_278);
x_281 = lean_array_push(x_251, x_280);
x_282 = l_Lean_myMacro____x40_Init_NotationExtra___hyg_1098____closed__20;
lean_inc(x_246);
x_283 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_283, 0, x_246);
lean_ctor_set(x_283, 1, x_282);
x_284 = lean_array_push(x_251, x_283);
x_285 = l_Lean_Elab_Command_expandInitCmd___closed__11;
lean_inc(x_247);
lean_inc(x_248);
x_286 = l_Lean_addMacroScope(x_248, x_285, x_247);
x_287 = lean_box(0);
x_288 = l_Lean_instInhabitedSourceInfo___closed__1;
x_289 = l_Lean_Elab_Command_expandInitCmd___closed__10;
x_290 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_290, 0, x_288);
lean_ctor_set(x_290, 1, x_289);
lean_ctor_set(x_290, 2, x_286);
lean_ctor_set(x_290, 3, x_287);
x_291 = lean_array_push(x_251, x_290);
x_292 = lean_array_push(x_291, x_254);
x_293 = l_Lean_myMacro____x40_Init_NotationExtra___hyg_1098____closed__23;
x_294 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_294, 0, x_293);
lean_ctor_set(x_294, 1, x_292);
x_295 = lean_array_push(x_284, x_294);
x_296 = l_myMacro____x40_Init_Notation___hyg_13985____closed__9;
lean_inc(x_246);
x_297 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_297, 0, x_246);
lean_ctor_set(x_297, 1, x_296);
x_298 = lean_array_push(x_251, x_297);
x_299 = l_myMacro____x40_Init_System_IO___hyg_2694____closed__5;
lean_inc(x_247);
lean_inc(x_248);
x_300 = l_Lean_addMacroScope(x_248, x_299, x_247);
x_301 = l_myMacro____x40_Init_System_IO___hyg_2694____closed__11;
x_302 = l_Lean_Elab_Command_expandInitCmd___closed__13;
x_303 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_303, 0, x_288);
lean_ctor_set(x_303, 1, x_301);
lean_ctor_set(x_303, 2, x_300);
lean_ctor_set(x_303, 3, x_302);
x_304 = lean_array_push(x_251, x_303);
x_305 = l_myMacro____x40_Init_System_IO___hyg_2694____closed__17;
x_306 = l_Lean_addMacroScope(x_248, x_305, x_247);
x_307 = l_myMacro____x40_Init_System_IO___hyg_2694____closed__16;
x_308 = l_myMacro____x40_Init_System_IO___hyg_2694____closed__19;
x_309 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_309, 0, x_288);
lean_ctor_set(x_309, 1, x_307);
lean_ctor_set(x_309, 2, x_306);
lean_ctor_set(x_309, 3, x_308);
x_310 = lean_array_push(x_251, x_309);
x_311 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_311, 0, x_263);
lean_ctor_set(x_311, 1, x_310);
x_312 = lean_array_push(x_304, x_311);
x_313 = l_myMacro____x40_Init_Notation___hyg_2137____closed__4;
x_314 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_314, 0, x_313);
lean_ctor_set(x_314, 1, x_312);
x_315 = lean_array_push(x_298, x_314);
x_316 = l_Lean_expandExplicitBindersAux_loop___closed__4;
x_317 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_317, 0, x_316);
lean_ctor_set(x_317, 1, x_315);
x_318 = lean_array_push(x_251, x_317);
x_319 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_319, 0, x_263);
lean_ctor_set(x_319, 1, x_318);
x_320 = lean_array_push(x_273, x_319);
x_321 = l_Lean_myMacro____x40_Init_NotationExtra___hyg_1098____closed__25;
x_322 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_322, 0, x_321);
lean_ctor_set(x_322, 1, x_320);
x_323 = lean_array_push(x_295, x_322);
x_324 = l_myMacro____x40_Init_Notation___hyg_14562____closed__11;
lean_inc(x_246);
x_325 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_325, 0, x_246);
lean_ctor_set(x_325, 1, x_324);
x_326 = lean_array_push(x_251, x_325);
x_327 = l_Lean_Parser_myMacro____x40_Lean_Parser_Extra___hyg_272____closed__1;
x_328 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_328, 0, x_246);
lean_ctor_set(x_328, 1, x_327);
x_329 = lean_array_push(x_251, x_328);
x_330 = lean_array_push(x_329, x_8);
x_331 = l_Lean_Parser_myMacro____x40_Lean_Parser_Extra___hyg_272____closed__2;
x_332 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_332, 0, x_331);
lean_ctor_set(x_332, 1, x_330);
x_333 = lean_array_push(x_326, x_332);
x_334 = lean_array_push(x_333, x_254);
x_335 = l_Lean_myMacro____x40_Init_NotationExtra___hyg_1098____closed__33;
x_336 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_336, 0, x_335);
lean_ctor_set(x_336, 1, x_334);
x_337 = lean_array_push(x_323, x_336);
x_338 = l_Lean_myMacro____x40_Init_NotationExtra___hyg_1098____closed__21;
x_339 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_339, 0, x_338);
lean_ctor_set(x_339, 1, x_337);
x_340 = lean_array_push(x_281, x_339);
x_341 = l_Lean_myMacro____x40_Init_NotationExtra___hyg_1098____closed__5;
x_342 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_342, 0, x_341);
lean_ctor_set(x_342, 1, x_340);
lean_ctor_set(x_244, 0, x_342);
return x_244;
}
else
{
lean_object* x_343; lean_object* x_344; lean_object* x_345; lean_object* x_346; lean_object* x_347; lean_object* x_348; lean_object* x_349; lean_object* x_350; lean_object* x_351; lean_object* x_352; lean_object* x_353; lean_object* x_354; lean_object* x_355; lean_object* x_356; lean_object* x_357; lean_object* x_358; lean_object* x_359; lean_object* x_360; lean_object* x_361; lean_object* x_362; lean_object* x_363; lean_object* x_364; lean_object* x_365; lean_object* x_366; lean_object* x_367; lean_object* x_368; lean_object* x_369; lean_object* x_370; lean_object* x_371; lean_object* x_372; lean_object* x_373; lean_object* x_374; lean_object* x_375; lean_object* x_376; lean_object* x_377; lean_object* x_378; lean_object* x_379; lean_object* x_380; lean_object* x_381; lean_object* x_382; lean_object* x_383; lean_object* x_384; lean_object* x_385; lean_object* x_386; lean_object* x_387; lean_object* x_388; lean_object* x_389; lean_object* x_390; lean_object* x_391; lean_object* x_392; lean_object* x_393; lean_object* x_394; lean_object* x_395; lean_object* x_396; lean_object* x_397; lean_object* x_398; lean_object* x_399; lean_object* x_400; lean_object* x_401; lean_object* x_402; lean_object* x_403; lean_object* x_404; lean_object* x_405; lean_object* x_406; lean_object* x_407; lean_object* x_408; lean_object* x_409; lean_object* x_410; lean_object* x_411; lean_object* x_412; lean_object* x_413; lean_object* x_414; lean_object* x_415; lean_object* x_416; lean_object* x_417; lean_object* x_418; lean_object* x_419; lean_object* x_420; lean_object* x_421; lean_object* x_422; lean_object* x_423; lean_object* x_424; lean_object* x_425; lean_object* x_426; lean_object* x_427; lean_object* x_428; lean_object* x_429; lean_object* x_430; lean_object* x_431; lean_object* x_432; lean_object* x_433; lean_object* x_434; lean_object* x_435; lean_object* x_436; lean_object* x_437; lean_object* x_438; lean_object* x_439; lean_object* x_440; lean_object* x_441; 
x_343 = lean_ctor_get(x_244, 0);
x_344 = lean_ctor_get(x_244, 1);
lean_inc(x_344);
lean_inc(x_343);
lean_dec(x_244);
x_345 = lean_ctor_get(x_3, 2);
lean_inc(x_345);
x_346 = lean_ctor_get(x_3, 1);
lean_inc(x_346);
lean_dec(x_3);
x_347 = l_Lean_myMacro____x40_Init_NotationExtra___hyg_1098____closed__11;
lean_inc(x_343);
x_348 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_348, 0, x_343);
lean_ctor_set(x_348, 1, x_347);
x_349 = l_Array_empty___closed__1;
x_350 = lean_array_push(x_349, x_348);
x_351 = lean_array_push(x_349, x_11);
x_352 = l_myMacro____x40_Init_Notation___hyg_1340____closed__8;
x_353 = lean_array_push(x_351, x_352);
x_354 = l_Lean_myMacro____x40_Init_NotationExtra___hyg_1098____closed__15;
x_355 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_355, 0, x_354);
lean_ctor_set(x_355, 1, x_353);
x_356 = l_myMacro____x40_Init_NotationExtra___hyg_3357____closed__30;
x_357 = lean_array_push(x_356, x_355);
x_358 = l_Lean_myMacro____x40_Init_NotationExtra___hyg_1098____closed__13;
x_359 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_359, 0, x_358);
lean_ctor_set(x_359, 1, x_357);
x_360 = lean_array_push(x_349, x_359);
x_361 = l_Lean_nullKind___closed__2;
x_362 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_362, 0, x_361);
lean_ctor_set(x_362, 1, x_360);
x_363 = lean_array_push(x_350, x_362);
x_364 = l_term_x5b___x5d___closed__9;
lean_inc(x_343);
x_365 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_365, 0, x_343);
lean_ctor_set(x_365, 1, x_364);
x_366 = lean_array_push(x_363, x_365);
x_367 = l_Lean_myMacro____x40_Init_NotationExtra___hyg_1098____closed__10;
x_368 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_368, 0, x_367);
lean_ctor_set(x_368, 1, x_366);
x_369 = lean_array_push(x_349, x_368);
x_370 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_370, 0, x_361);
lean_ctor_set(x_370, 1, x_369);
x_371 = l_myMacro____x40_Init_Notation___hyg_13068____closed__5;
x_372 = lean_array_push(x_371, x_370);
x_373 = lean_array_push(x_372, x_352);
x_374 = lean_array_push(x_373, x_352);
x_375 = lean_array_push(x_374, x_352);
x_376 = lean_array_push(x_375, x_352);
x_377 = l_Lean_myMacro____x40_Init_NotationExtra___hyg_1098____closed__7;
x_378 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_378, 0, x_377);
lean_ctor_set(x_378, 1, x_376);
x_379 = lean_array_push(x_349, x_378);
x_380 = l_Lean_myMacro____x40_Init_NotationExtra___hyg_1098____closed__20;
lean_inc(x_343);
x_381 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_381, 0, x_343);
lean_ctor_set(x_381, 1, x_380);
x_382 = lean_array_push(x_349, x_381);
x_383 = l_Lean_Elab_Command_expandInitCmd___closed__11;
lean_inc(x_345);
lean_inc(x_346);
x_384 = l_Lean_addMacroScope(x_346, x_383, x_345);
x_385 = lean_box(0);
x_386 = l_Lean_instInhabitedSourceInfo___closed__1;
x_387 = l_Lean_Elab_Command_expandInitCmd___closed__10;
x_388 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_388, 0, x_386);
lean_ctor_set(x_388, 1, x_387);
lean_ctor_set(x_388, 2, x_384);
lean_ctor_set(x_388, 3, x_385);
x_389 = lean_array_push(x_349, x_388);
x_390 = lean_array_push(x_389, x_352);
x_391 = l_Lean_myMacro____x40_Init_NotationExtra___hyg_1098____closed__23;
x_392 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_392, 0, x_391);
lean_ctor_set(x_392, 1, x_390);
x_393 = lean_array_push(x_382, x_392);
x_394 = l_myMacro____x40_Init_Notation___hyg_13985____closed__9;
lean_inc(x_343);
x_395 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_395, 0, x_343);
lean_ctor_set(x_395, 1, x_394);
x_396 = lean_array_push(x_349, x_395);
x_397 = l_myMacro____x40_Init_System_IO___hyg_2694____closed__5;
lean_inc(x_345);
lean_inc(x_346);
x_398 = l_Lean_addMacroScope(x_346, x_397, x_345);
x_399 = l_myMacro____x40_Init_System_IO___hyg_2694____closed__11;
x_400 = l_Lean_Elab_Command_expandInitCmd___closed__13;
x_401 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_401, 0, x_386);
lean_ctor_set(x_401, 1, x_399);
lean_ctor_set(x_401, 2, x_398);
lean_ctor_set(x_401, 3, x_400);
x_402 = lean_array_push(x_349, x_401);
x_403 = l_myMacro____x40_Init_System_IO___hyg_2694____closed__17;
x_404 = l_Lean_addMacroScope(x_346, x_403, x_345);
x_405 = l_myMacro____x40_Init_System_IO___hyg_2694____closed__16;
x_406 = l_myMacro____x40_Init_System_IO___hyg_2694____closed__19;
x_407 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_407, 0, x_386);
lean_ctor_set(x_407, 1, x_405);
lean_ctor_set(x_407, 2, x_404);
lean_ctor_set(x_407, 3, x_406);
x_408 = lean_array_push(x_349, x_407);
x_409 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_409, 0, x_361);
lean_ctor_set(x_409, 1, x_408);
x_410 = lean_array_push(x_402, x_409);
x_411 = l_myMacro____x40_Init_Notation___hyg_2137____closed__4;
x_412 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_412, 0, x_411);
lean_ctor_set(x_412, 1, x_410);
x_413 = lean_array_push(x_396, x_412);
x_414 = l_Lean_expandExplicitBindersAux_loop___closed__4;
x_415 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_415, 0, x_414);
lean_ctor_set(x_415, 1, x_413);
x_416 = lean_array_push(x_349, x_415);
x_417 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_417, 0, x_361);
lean_ctor_set(x_417, 1, x_416);
x_418 = lean_array_push(x_371, x_417);
x_419 = l_Lean_myMacro____x40_Init_NotationExtra___hyg_1098____closed__25;
x_420 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_420, 0, x_419);
lean_ctor_set(x_420, 1, x_418);
x_421 = lean_array_push(x_393, x_420);
x_422 = l_myMacro____x40_Init_Notation___hyg_14562____closed__11;
lean_inc(x_343);
x_423 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_423, 0, x_343);
lean_ctor_set(x_423, 1, x_422);
x_424 = lean_array_push(x_349, x_423);
x_425 = l_Lean_Parser_myMacro____x40_Lean_Parser_Extra___hyg_272____closed__1;
x_426 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_426, 0, x_343);
lean_ctor_set(x_426, 1, x_425);
x_427 = lean_array_push(x_349, x_426);
x_428 = lean_array_push(x_427, x_8);
x_429 = l_Lean_Parser_myMacro____x40_Lean_Parser_Extra___hyg_272____closed__2;
x_430 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_430, 0, x_429);
lean_ctor_set(x_430, 1, x_428);
x_431 = lean_array_push(x_424, x_430);
x_432 = lean_array_push(x_431, x_352);
x_433 = l_Lean_myMacro____x40_Init_NotationExtra___hyg_1098____closed__33;
x_434 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_434, 0, x_433);
lean_ctor_set(x_434, 1, x_432);
x_435 = lean_array_push(x_421, x_434);
x_436 = l_Lean_myMacro____x40_Init_NotationExtra___hyg_1098____closed__21;
x_437 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_437, 0, x_436);
lean_ctor_set(x_437, 1, x_435);
x_438 = lean_array_push(x_379, x_437);
x_439 = l_Lean_myMacro____x40_Init_NotationExtra___hyg_1098____closed__5;
x_440 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_440, 0, x_439);
lean_ctor_set(x_440, 1, x_438);
x_441 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_441, 0, x_440);
lean_ctor_set(x_441, 1, x_344);
return x_441;
}
}
}
}
}
lean_object* l_Lean_Elab_Command_expandInitCmd___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = lean_unbox(x_1);
lean_dec(x_1);
x_6 = l_Lean_Elab_Command_expandInitCmd(x_5, x_2, x_3, x_4);
lean_dec(x_2);
return x_6;
}
}
lean_object* l_Lean_Elab_Command_expandInitialize(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = 0;
x_5 = l_Lean_Elab_Command_expandInitCmd(x_4, x_1, x_2, x_3);
return x_5;
}
}
lean_object* l_Lean_Elab_Command_expandInitialize___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Elab_Command_expandInitialize(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Command_expandInitialize___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Command_expandInitialize___boxed), 3, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Elab_Command_expandInitialize(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_Lean_Elab_macroAttribute;
x_3 = l_Lean_Parser_Command_initialize___elambda__1___closed__2;
x_4 = l___regBuiltin_Lean_Elab_Command_expandInitialize___closed__1;
x_5 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_1);
return x_5;
}
}
lean_object* l_Lean_Elab_Command_expandBuiltinInitialize(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = 1;
x_5 = l_Lean_Elab_Command_expandInitCmd(x_4, x_1, x_2, x_3);
return x_5;
}
}
lean_object* l_Lean_Elab_Command_expandBuiltinInitialize___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Elab_Command_expandBuiltinInitialize(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
static lean_object* _init_l___regBuiltin_Lean_Elab_Command_expandBuiltinInitialize___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Command_expandBuiltinInitialize___boxed), 3, 0);
return x_1;
}
}
lean_object* l___regBuiltin_Lean_Elab_Command_expandBuiltinInitialize(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_Lean_Elab_macroAttribute;
x_3 = l_Lean_Parser_Command_builtin__initialize___elambda__1___closed__2;
x_4 = l___regBuiltin_Lean_Elab_Command_expandBuiltinInitialize___closed__1;
x_5 = l_Lean_KeyedDeclsAttribute_addBuiltin___rarg(x_2, x_3, x_4, x_1);
return x_5;
}
}
lean_object* initialize_Init(lean_object*);
lean_object* initialize_Lean_Util_CollectLevelParams(lean_object*);
lean_object* initialize_Lean_Elab_DeclUtil(lean_object*);
lean_object* initialize_Lean_Elab_DefView(lean_object*);
lean_object* initialize_Lean_Elab_Inductive(lean_object*);
lean_object* initialize_Lean_Elab_Structure(lean_object*);
lean_object* initialize_Lean_Elab_MutualDef(lean_object*);
static bool _G_initialized = false;
lean_object* initialize_Lean_Elab_Declaration(lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Util_CollectLevelParams(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_DeclUtil(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_DefView(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Inductive(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Structure(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_MutualDef(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Array_mapMUnsafe_map___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__6___lambda__2___closed__1 = _init_l_Array_mapMUnsafe_map___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__6___lambda__2___closed__1();
lean_mark_persistent(l_Array_mapMUnsafe_map___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__6___lambda__2___closed__1);
l_Array_mapMUnsafe_map___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__6___lambda__2___closed__2 = _init_l_Array_mapMUnsafe_map___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__6___lambda__2___closed__2();
lean_mark_persistent(l_Array_mapMUnsafe_map___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__6___lambda__2___closed__2);
l_Array_mapMUnsafe_map___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__6___lambda__2___closed__3 = _init_l_Array_mapMUnsafe_map___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__6___lambda__2___closed__3();
lean_mark_persistent(l_Array_mapMUnsafe_map___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__6___lambda__2___closed__3);
l_Array_mapMUnsafe_map___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__6___closed__1 = _init_l_Array_mapMUnsafe_map___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__6___closed__1();
lean_mark_persistent(l_Array_mapMUnsafe_map___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__6___closed__1);
l_Array_mapMUnsafe_map___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__6___closed__2 = _init_l_Array_mapMUnsafe_map___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__6___closed__2();
lean_mark_persistent(l_Array_mapMUnsafe_map___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__6___closed__2);
l_Array_mapMUnsafe_map___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__6___closed__3 = _init_l_Array_mapMUnsafe_map___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__6___closed__3();
lean_mark_persistent(l_Array_mapMUnsafe_map___at___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___spec__6___closed__3);
l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___boxed__const__1 = _init_l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___boxed__const__1();
lean_mark_persistent(l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_inductiveSyntaxToView___boxed__const__1);
l_Lean_Elab_Command_elabDeclaration___closed__1 = _init_l_Lean_Elab_Command_elabDeclaration___closed__1();
lean_mark_persistent(l_Lean_Elab_Command_elabDeclaration___closed__1);
l_Lean_Elab_Command_elabDeclaration___closed__2 = _init_l_Lean_Elab_Command_elabDeclaration___closed__2();
lean_mark_persistent(l_Lean_Elab_Command_elabDeclaration___closed__2);
l_Lean_Elab_Command_elabDeclaration___closed__3 = _init_l_Lean_Elab_Command_elabDeclaration___closed__3();
lean_mark_persistent(l_Lean_Elab_Command_elabDeclaration___closed__3);
l___regBuiltin_Lean_Elab_Command_elabDeclaration___closed__1 = _init_l___regBuiltin_Lean_Elab_Command_elabDeclaration___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Command_elabDeclaration___closed__1);
res = l___regBuiltin_Lean_Elab_Command_elabDeclaration(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_elabMutualInductive___boxed__const__1 = _init_l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_elabMutualInductive___boxed__const__1();
lean_mark_persistent(l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_elabMutualInductive___boxed__const__1);
l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_isMutualPreambleCommand___closed__1 = _init_l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_isMutualPreambleCommand___closed__1();
lean_mark_persistent(l___private_Lean_Elab_Declaration_0__Lean_Elab_Command_isMutualPreambleCommand___closed__1);
l_Array_forInUnsafe_loop___at_Lean_Elab_Command_expandMutualNamespace___spec__1___closed__1 = _init_l_Array_forInUnsafe_loop___at_Lean_Elab_Command_expandMutualNamespace___spec__1___closed__1();
lean_mark_persistent(l_Array_forInUnsafe_loop___at_Lean_Elab_Command_expandMutualNamespace___spec__1___closed__1);
l_Array_forInUnsafe_loop___at_Lean_Elab_Command_expandMutualNamespace___spec__1___closed__2 = _init_l_Array_forInUnsafe_loop___at_Lean_Elab_Command_expandMutualNamespace___spec__1___closed__2();
lean_mark_persistent(l_Array_forInUnsafe_loop___at_Lean_Elab_Command_expandMutualNamespace___spec__1___closed__2);
l_Array_forInUnsafe_loop___at_Lean_Elab_Command_expandMutualNamespace___spec__1___closed__3 = _init_l_Array_forInUnsafe_loop___at_Lean_Elab_Command_expandMutualNamespace___spec__1___closed__3();
lean_mark_persistent(l_Array_forInUnsafe_loop___at_Lean_Elab_Command_expandMutualNamespace___spec__1___closed__3);
l_Lean_Elab_Command_expandMutualNamespace___closed__1 = _init_l_Lean_Elab_Command_expandMutualNamespace___closed__1();
lean_mark_persistent(l_Lean_Elab_Command_expandMutualNamespace___closed__1);
l___regBuiltin_Lean_Elab_Command_expandMutualNamespace___closed__1 = _init_l___regBuiltin_Lean_Elab_Command_expandMutualNamespace___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Command_expandMutualNamespace___closed__1);
res = l___regBuiltin_Lean_Elab_Command_expandMutualNamespace(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Elab_Command_expandMutualElement___closed__1 = _init_l_Lean_Elab_Command_expandMutualElement___closed__1();
lean_mark_persistent(l_Lean_Elab_Command_expandMutualElement___closed__1);
l___regBuiltin_Lean_Elab_Command_expandMutualElement___closed__1 = _init_l___regBuiltin_Lean_Elab_Command_expandMutualElement___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Command_expandMutualElement___closed__1);
res = l___regBuiltin_Lean_Elab_Command_expandMutualElement(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___regBuiltin_Lean_Elab_Command_expandMutualPreamble___closed__1 = _init_l___regBuiltin_Lean_Elab_Command_expandMutualPreamble___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Command_expandMutualPreamble___closed__1);
res = l___regBuiltin_Lean_Elab_Command_expandMutualPreamble(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Elab_Command_elabMutual___closed__1 = _init_l_Lean_Elab_Command_elabMutual___closed__1();
lean_mark_persistent(l_Lean_Elab_Command_elabMutual___closed__1);
l_Lean_Elab_Command_elabMutual___closed__2 = _init_l_Lean_Elab_Command_elabMutual___closed__2();
lean_mark_persistent(l_Lean_Elab_Command_elabMutual___closed__2);
l_Lean_Elab_Command_elabMutual___closed__3 = _init_l_Lean_Elab_Command_elabMutual___closed__3();
lean_mark_persistent(l_Lean_Elab_Command_elabMutual___closed__3);
l___regBuiltin_Lean_Elab_Command_elabMutual___closed__1 = _init_l___regBuiltin_Lean_Elab_Command_elabMutual___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Command_elabMutual___closed__1);
res = l___regBuiltin_Lean_Elab_Command_elabMutual(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___regBuiltin_Lean_Elab_Command_elabAttr___closed__1 = _init_l___regBuiltin_Lean_Elab_Command_elabAttr___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Command_elabAttr___closed__1);
res = l___regBuiltin_Lean_Elab_Command_elabAttr(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Elab_Command_expandInitCmd___closed__1 = _init_l_Lean_Elab_Command_expandInitCmd___closed__1();
lean_mark_persistent(l_Lean_Elab_Command_expandInitCmd___closed__1);
l_Lean_Elab_Command_expandInitCmd___closed__2 = _init_l_Lean_Elab_Command_expandInitCmd___closed__2();
lean_mark_persistent(l_Lean_Elab_Command_expandInitCmd___closed__2);
l_Lean_Elab_Command_expandInitCmd___closed__3 = _init_l_Lean_Elab_Command_expandInitCmd___closed__3();
lean_mark_persistent(l_Lean_Elab_Command_expandInitCmd___closed__3);
l_Lean_Elab_Command_expandInitCmd___closed__4 = _init_l_Lean_Elab_Command_expandInitCmd___closed__4();
lean_mark_persistent(l_Lean_Elab_Command_expandInitCmd___closed__4);
l_Lean_Elab_Command_expandInitCmd___closed__5 = _init_l_Lean_Elab_Command_expandInitCmd___closed__5();
lean_mark_persistent(l_Lean_Elab_Command_expandInitCmd___closed__5);
l_Lean_Elab_Command_expandInitCmd___closed__6 = _init_l_Lean_Elab_Command_expandInitCmd___closed__6();
lean_mark_persistent(l_Lean_Elab_Command_expandInitCmd___closed__6);
l_Lean_Elab_Command_expandInitCmd___closed__7 = _init_l_Lean_Elab_Command_expandInitCmd___closed__7();
lean_mark_persistent(l_Lean_Elab_Command_expandInitCmd___closed__7);
l_Lean_Elab_Command_expandInitCmd___closed__8 = _init_l_Lean_Elab_Command_expandInitCmd___closed__8();
lean_mark_persistent(l_Lean_Elab_Command_expandInitCmd___closed__8);
l_Lean_Elab_Command_expandInitCmd___closed__9 = _init_l_Lean_Elab_Command_expandInitCmd___closed__9();
lean_mark_persistent(l_Lean_Elab_Command_expandInitCmd___closed__9);
l_Lean_Elab_Command_expandInitCmd___closed__10 = _init_l_Lean_Elab_Command_expandInitCmd___closed__10();
lean_mark_persistent(l_Lean_Elab_Command_expandInitCmd___closed__10);
l_Lean_Elab_Command_expandInitCmd___closed__11 = _init_l_Lean_Elab_Command_expandInitCmd___closed__11();
lean_mark_persistent(l_Lean_Elab_Command_expandInitCmd___closed__11);
l_Lean_Elab_Command_expandInitCmd___closed__12 = _init_l_Lean_Elab_Command_expandInitCmd___closed__12();
lean_mark_persistent(l_Lean_Elab_Command_expandInitCmd___closed__12);
l_Lean_Elab_Command_expandInitCmd___closed__13 = _init_l_Lean_Elab_Command_expandInitCmd___closed__13();
lean_mark_persistent(l_Lean_Elab_Command_expandInitCmd___closed__13);
l_Lean_Elab_Command_expandInitCmd___closed__14 = _init_l_Lean_Elab_Command_expandInitCmd___closed__14();
lean_mark_persistent(l_Lean_Elab_Command_expandInitCmd___closed__14);
l_Lean_Elab_Command_expandInitCmd___closed__15 = _init_l_Lean_Elab_Command_expandInitCmd___closed__15();
lean_mark_persistent(l_Lean_Elab_Command_expandInitCmd___closed__15);
l___regBuiltin_Lean_Elab_Command_expandInitialize___closed__1 = _init_l___regBuiltin_Lean_Elab_Command_expandInitialize___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Command_expandInitialize___closed__1);
res = l___regBuiltin_Lean_Elab_Command_expandInitialize(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___regBuiltin_Lean_Elab_Command_expandBuiltinInitialize___closed__1 = _init_l___regBuiltin_Lean_Elab_Command_expandBuiltinInitialize___closed__1();
lean_mark_persistent(l___regBuiltin_Lean_Elab_Command_expandBuiltinInitialize___closed__1);
res = l___regBuiltin_Lean_Elab_Command_expandBuiltinInitialize(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif

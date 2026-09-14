// Lean compiler output
// Module: Lean.Elab.CheckTactic
// Imports: public import Lean.Elab.Tactic.ElabTerm public import Lean.Elab.Command public import Lean.Elab.Tactic.Meta public import Lean.Meta.CheckTactic
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
lean_object* l_Lean_stringToMessageData(lean_object*);
extern lean_object* l_Lean_Elab_unsupportedSyntaxExceptionId;
extern lean_object* l_Lean_Elab_pp_macroStack;
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_MessageData_ofSyntax(lean_object*);
lean_object* l_Lean_indentD(lean_object*);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Lean_Elab_getBetterRef(lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_MVarId_getType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_CheckTactic_matchCheckGoalType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_addBuiltinDeclarationRanges(lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_Command_commandElabAttribute;
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabTerm___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_withSynthesizeImp(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_CheckTactic_mkCheckGoalType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* l_Lean_Meta_mkFreshExprMVar(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabTerm(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_mvarId_x21(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Elab_runTactic(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_addPPExplicitToExposeDiff(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Context_config(lean_object*);
uint8_t l_Lean_Meta_instBEqTransparencyMode_beq(uint8_t, uint8_t);
lean_object* l_Lean_Meta_ConfigWithKey_setTransparency(uint8_t, lean_object*);
lean_object* l_Lean_Meta_isExprDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_runTermElabM___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Environment_unlockAsync(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_withoutErrToSorryImp___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Exception_isInterrupt(lean_object*);
uint8_t l_Lean_Exception_isRuntime(lean_object*);
extern lean_object* l_Lean_Elab_macroAttribute;
lean_object* l_Lean_Macro_throwUnsupported___redArg(lean_object*);
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Array_mkArray0___redArg();
lean_object* l_Lean_Syntax_node1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_CheckTactic_elabCheckTactic_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_CheckTactic_elabCheckTactic_spec__0___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_CheckTactic_elabCheckTactic_spec__0___redArg();
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_CheckTactic_elabCheckTactic_spec__0___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_CheckTactic_elabCheckTactic_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_CheckTactic_elabCheckTactic_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Elab_CheckTactic_elabCheckTactic___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_CheckTactic_elabCheckTactic___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_CheckTactic_elabCheckTactic_spec__1_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_CheckTactic_elabCheckTactic_spec__1_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_CheckTactic_elabCheckTactic_spec__1_spec__1_spec__3_spec__7___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_CheckTactic_elabCheckTactic_spec__1_spec__1_spec__3_spec__7___closed__0;
static const lean_string_object l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_CheckTactic_elabCheckTactic_spec__1_spec__1_spec__3_spec__7___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "while expanding"};
static const lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_CheckTactic_elabCheckTactic_spec__1_spec__1_spec__3_spec__7___closed__1 = (const lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_CheckTactic_elabCheckTactic_spec__1_spec__1_spec__3_spec__7___closed__1_value;
static const lean_ctor_object l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_CheckTactic_elabCheckTactic_spec__1_spec__1_spec__3_spec__7___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_CheckTactic_elabCheckTactic_spec__1_spec__1_spec__3_spec__7___closed__1_value)}};
static const lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_CheckTactic_elabCheckTactic_spec__1_spec__1_spec__3_spec__7___closed__2 = (const lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_CheckTactic_elabCheckTactic_spec__1_spec__1_spec__3_spec__7___closed__2_value;
static lean_once_cell_t l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_CheckTactic_elabCheckTactic_spec__1_spec__1_spec__3_spec__7___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_CheckTactic_elabCheckTactic_spec__1_spec__1_spec__3_spec__7___closed__3;
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_CheckTactic_elabCheckTactic_spec__1_spec__1_spec__3_spec__7(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_CheckTactic_elabCheckTactic_spec__1_spec__1_spec__3_spec__6(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_CheckTactic_elabCheckTactic_spec__1_spec__1_spec__3_spec__6___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_CheckTactic_elabCheckTactic_spec__1_spec__1_spec__3___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "with resulting expansion"};
static const lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_CheckTactic_elabCheckTactic_spec__1_spec__1_spec__3___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_CheckTactic_elabCheckTactic_spec__1_spec__1_spec__3___redArg___closed__0_value;
static const lean_ctor_object l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_CheckTactic_elabCheckTactic_spec__1_spec__1_spec__3___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_CheckTactic_elabCheckTactic_spec__1_spec__1_spec__3___redArg___closed__0_value)}};
static const lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_CheckTactic_elabCheckTactic_spec__1_spec__1_spec__3___redArg___closed__1 = (const lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_CheckTactic_elabCheckTactic_spec__1_spec__1_spec__3___redArg___closed__1_value;
static lean_once_cell_t l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_CheckTactic_elabCheckTactic_spec__1_spec__1_spec__3___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_CheckTactic_elabCheckTactic_spec__1_spec__1_spec__3___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_CheckTactic_elabCheckTactic_spec__1_spec__1_spec__3___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_CheckTactic_elabCheckTactic_spec__1_spec__1_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_CheckTactic_elabCheckTactic_spec__1_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_CheckTactic_elabCheckTactic_spec__1_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_CheckTactic_elabCheckTactic_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_CheckTactic_elabCheckTactic_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_CheckTactic_elabCheckTactic___lam__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_CheckTactic_elabCheckTactic___lam__1___closed__0;
static const lean_array_object l_Lean_Elab_CheckTactic_elabCheckTactic___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Elab_CheckTactic_elabCheckTactic___lam__1___closed__1 = (const lean_object*)&l_Lean_Elab_CheckTactic_elabCheckTactic___lam__1___closed__1_value;
static const lean_string_object l_Lean_Elab_CheckTactic_elabCheckTactic___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 44, .m_capacity = 44, .m_length = 43, .m_data = " closed goal, but is expected to reduce to "};
static const lean_object* l_Lean_Elab_CheckTactic_elabCheckTactic___lam__1___closed__2 = (const lean_object*)&l_Lean_Elab_CheckTactic_elabCheckTactic___lam__1___closed__2_value;
static lean_once_cell_t l_Lean_Elab_CheckTactic_elabCheckTactic___lam__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_CheckTactic_elabCheckTactic___lam__1___closed__3;
static const lean_string_object l_Lean_Elab_CheckTactic_elabCheckTactic___lam__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "."};
static const lean_object* l_Lean_Elab_CheckTactic_elabCheckTactic___lam__1___closed__4 = (const lean_object*)&l_Lean_Elab_CheckTactic_elabCheckTactic___lam__1___closed__4_value;
static lean_once_cell_t l_Lean_Elab_CheckTactic_elabCheckTactic___lam__1___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_CheckTactic_elabCheckTactic___lam__1___closed__5;
static const lean_string_object l_Lean_Elab_CheckTactic_elabCheckTactic___lam__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "Term reduces to"};
static const lean_object* l_Lean_Elab_CheckTactic_elabCheckTactic___lam__1___closed__6 = (const lean_object*)&l_Lean_Elab_CheckTactic_elabCheckTactic___lam__1___closed__6_value;
static lean_once_cell_t l_Lean_Elab_CheckTactic_elabCheckTactic___lam__1___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_CheckTactic_elabCheckTactic___lam__1___closed__7;
static const lean_string_object l_Lean_Elab_CheckTactic_elabCheckTactic___lam__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "\nbut is expected to reduce to "};
static const lean_object* l_Lean_Elab_CheckTactic_elabCheckTactic___lam__1___closed__8 = (const lean_object*)&l_Lean_Elab_CheckTactic_elabCheckTactic___lam__1___closed__8_value;
static lean_once_cell_t l_Lean_Elab_CheckTactic_elabCheckTactic___lam__1___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_CheckTactic_elabCheckTactic___lam__1___closed__9;
static const lean_string_object l_Lean_Elab_CheckTactic_elabCheckTactic___lam__1___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 56, .m_capacity = 56, .m_length = 55, .m_data = " produced multiple goals, but is expected to reduce to "};
static const lean_object* l_Lean_Elab_CheckTactic_elabCheckTactic___lam__1___closed__10 = (const lean_object*)&l_Lean_Elab_CheckTactic_elabCheckTactic___lam__1___closed__10_value;
static lean_once_cell_t l_Lean_Elab_CheckTactic_elabCheckTactic___lam__1___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_CheckTactic_elabCheckTactic___lam__1___closed__11;
LEAN_EXPORT lean_object* l_Lean_Elab_CheckTactic_elabCheckTactic___lam__1(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_CheckTactic_elabCheckTactic___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_CheckTactic_elabCheckTactic_spec__2_spec__3___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_CheckTactic_elabCheckTactic_spec__2_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00Lean_Elab_CheckTactic_elabCheckTactic_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00Lean_Elab_CheckTactic_elabCheckTactic_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_CheckTactic_elabCheckTactic___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Lean_Elab_CheckTactic_elabCheckTactic___closed__0 = (const lean_object*)&l_Lean_Elab_CheckTactic_elabCheckTactic___closed__0_value;
static const lean_string_object l_Lean_Elab_CheckTactic_elabCheckTactic___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l_Lean_Elab_CheckTactic_elabCheckTactic___closed__1 = (const lean_object*)&l_Lean_Elab_CheckTactic_elabCheckTactic___closed__1_value;
static const lean_string_object l_Lean_Elab_CheckTactic_elabCheckTactic___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "checkTactic"};
static const lean_object* l_Lean_Elab_CheckTactic_elabCheckTactic___closed__2 = (const lean_object*)&l_Lean_Elab_CheckTactic_elabCheckTactic___closed__2_value;
static const lean_ctor_object l_Lean_Elab_CheckTactic_elabCheckTactic___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_CheckTactic_elabCheckTactic___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_CheckTactic_elabCheckTactic___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_CheckTactic_elabCheckTactic___closed__3_value_aux_0),((lean_object*)&l_Lean_Elab_CheckTactic_elabCheckTactic___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_CheckTactic_elabCheckTactic___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_CheckTactic_elabCheckTactic___closed__3_value_aux_1),((lean_object*)&l_Lean_Elab_CheckTactic_elabCheckTactic___closed__2_value),LEAN_SCALAR_PTR_LITERAL(83, 196, 193, 73, 233, 22, 219, 16)}};
static const lean_object* l_Lean_Elab_CheckTactic_elabCheckTactic___closed__3 = (const lean_object*)&l_Lean_Elab_CheckTactic_elabCheckTactic___closed__3_value;
static const lean_closure_object l_Lean_Elab_CheckTactic_elabCheckTactic___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_CheckTactic_elabCheckTactic___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_CheckTactic_elabCheckTactic___closed__4 = (const lean_object*)&l_Lean_Elab_CheckTactic_elabCheckTactic___closed__4_value;
LEAN_EXPORT lean_object* l_Lean_Elab_CheckTactic_elabCheckTactic(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_CheckTactic_elabCheckTactic___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_CheckTactic_elabCheckTactic_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_CheckTactic_elabCheckTactic_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_CheckTactic_elabCheckTactic_spec__2_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_CheckTactic_elabCheckTactic_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00Lean_Elab_CheckTactic_elabCheckTactic_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00Lean_Elab_CheckTactic_elabCheckTactic_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_CheckTactic_elabCheckTactic_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_CheckTactic_elabCheckTactic_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_CheckTactic_elabCheckTactic_spec__1_spec__1_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_CheckTactic_elabCheckTactic_spec__1_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_elabCheckTactic___regBuiltin_Lean_Elab_CheckTactic_elabCheckTactic__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_elabCheckTactic___regBuiltin_Lean_Elab_CheckTactic_elabCheckTactic__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_elabCheckTactic___regBuiltin_Lean_Elab_CheckTactic_elabCheckTactic__1___closed__0_value;
static const lean_string_object l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_elabCheckTactic___regBuiltin_Lean_Elab_CheckTactic_elabCheckTactic__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "CheckTactic"};
static const lean_object* l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_elabCheckTactic___regBuiltin_Lean_Elab_CheckTactic_elabCheckTactic__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_elabCheckTactic___regBuiltin_Lean_Elab_CheckTactic_elabCheckTactic__1___closed__1_value;
static const lean_string_object l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_elabCheckTactic___regBuiltin_Lean_Elab_CheckTactic_elabCheckTactic__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "elabCheckTactic"};
static const lean_object* l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_elabCheckTactic___regBuiltin_Lean_Elab_CheckTactic_elabCheckTactic__1___closed__2 = (const lean_object*)&l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_elabCheckTactic___regBuiltin_Lean_Elab_CheckTactic_elabCheckTactic__1___closed__2_value;
static const lean_ctor_object l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_elabCheckTactic___regBuiltin_Lean_Elab_CheckTactic_elabCheckTactic__1___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_CheckTactic_elabCheckTactic___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_elabCheckTactic___regBuiltin_Lean_Elab_CheckTactic_elabCheckTactic__1___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_elabCheckTactic___regBuiltin_Lean_Elab_CheckTactic_elabCheckTactic__1___closed__3_value_aux_0),((lean_object*)&l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_elabCheckTactic___regBuiltin_Lean_Elab_CheckTactic_elabCheckTactic__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_elabCheckTactic___regBuiltin_Lean_Elab_CheckTactic_elabCheckTactic__1___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_elabCheckTactic___regBuiltin_Lean_Elab_CheckTactic_elabCheckTactic__1___closed__3_value_aux_1),((lean_object*)&l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_elabCheckTactic___regBuiltin_Lean_Elab_CheckTactic_elabCheckTactic__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(177, 138, 121, 117, 47, 212, 130, 79)}};
static const lean_ctor_object l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_elabCheckTactic___regBuiltin_Lean_Elab_CheckTactic_elabCheckTactic__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_elabCheckTactic___regBuiltin_Lean_Elab_CheckTactic_elabCheckTactic__1___closed__3_value_aux_2),((lean_object*)&l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_elabCheckTactic___regBuiltin_Lean_Elab_CheckTactic_elabCheckTactic__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(106, 72, 15, 247, 239, 21, 78, 147)}};
static const lean_object* l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_elabCheckTactic___regBuiltin_Lean_Elab_CheckTactic_elabCheckTactic__1___closed__3 = (const lean_object*)&l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_elabCheckTactic___regBuiltin_Lean_Elab_CheckTactic_elabCheckTactic__1___closed__3_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_elabCheckTactic___regBuiltin_Lean_Elab_CheckTactic_elabCheckTactic__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_elabCheckTactic___regBuiltin_Lean_Elab_CheckTactic_elabCheckTactic__1___boxed(lean_object*);
static const lean_ctor_object l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_elabCheckTactic___regBuiltin_Lean_Elab_CheckTactic_elabCheckTactic_declRange__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(24) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_elabCheckTactic___regBuiltin_Lean_Elab_CheckTactic_elabCheckTactic_declRange__3___closed__0 = (const lean_object*)&l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_elabCheckTactic___regBuiltin_Lean_Elab_CheckTactic_elabCheckTactic_declRange__3___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_elabCheckTactic___regBuiltin_Lean_Elab_CheckTactic_elabCheckTactic_declRange__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(45) << 1) | 1)),((lean_object*)(((size_t)(95) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_elabCheckTactic___regBuiltin_Lean_Elab_CheckTactic_elabCheckTactic_declRange__3___closed__1 = (const lean_object*)&l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_elabCheckTactic___regBuiltin_Lean_Elab_CheckTactic_elabCheckTactic_declRange__3___closed__1_value;
static const lean_ctor_object l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_elabCheckTactic___regBuiltin_Lean_Elab_CheckTactic_elabCheckTactic_declRange__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_elabCheckTactic___regBuiltin_Lean_Elab_CheckTactic_elabCheckTactic_declRange__3___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_elabCheckTactic___regBuiltin_Lean_Elab_CheckTactic_elabCheckTactic_declRange__3___closed__1_value),((lean_object*)(((size_t)(95) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_elabCheckTactic___regBuiltin_Lean_Elab_CheckTactic_elabCheckTactic_declRange__3___closed__2 = (const lean_object*)&l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_elabCheckTactic___regBuiltin_Lean_Elab_CheckTactic_elabCheckTactic_declRange__3___closed__2_value;
static const lean_ctor_object l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_elabCheckTactic___regBuiltin_Lean_Elab_CheckTactic_elabCheckTactic_declRange__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(24) << 1) | 1)),((lean_object*)(((size_t)(4) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_elabCheckTactic___regBuiltin_Lean_Elab_CheckTactic_elabCheckTactic_declRange__3___closed__3 = (const lean_object*)&l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_elabCheckTactic___regBuiltin_Lean_Elab_CheckTactic_elabCheckTactic_declRange__3___closed__3_value;
static const lean_ctor_object l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_elabCheckTactic___regBuiltin_Lean_Elab_CheckTactic_elabCheckTactic_declRange__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(24) << 1) | 1)),((lean_object*)(((size_t)(19) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_elabCheckTactic___regBuiltin_Lean_Elab_CheckTactic_elabCheckTactic_declRange__3___closed__4 = (const lean_object*)&l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_elabCheckTactic___regBuiltin_Lean_Elab_CheckTactic_elabCheckTactic_declRange__3___closed__4_value;
static const lean_ctor_object l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_elabCheckTactic___regBuiltin_Lean_Elab_CheckTactic_elabCheckTactic_declRange__3___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_elabCheckTactic___regBuiltin_Lean_Elab_CheckTactic_elabCheckTactic_declRange__3___closed__3_value),((lean_object*)(((size_t)(4) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_elabCheckTactic___regBuiltin_Lean_Elab_CheckTactic_elabCheckTactic_declRange__3___closed__4_value),((lean_object*)(((size_t)(19) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_elabCheckTactic___regBuiltin_Lean_Elab_CheckTactic_elabCheckTactic_declRange__3___closed__5 = (const lean_object*)&l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_elabCheckTactic___regBuiltin_Lean_Elab_CheckTactic_elabCheckTactic_declRange__3___closed__5_value;
static const lean_ctor_object l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_elabCheckTactic___regBuiltin_Lean_Elab_CheckTactic_elabCheckTactic_declRange__3___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_elabCheckTactic___regBuiltin_Lean_Elab_CheckTactic_elabCheckTactic_declRange__3___closed__2_value),((lean_object*)&l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_elabCheckTactic___regBuiltin_Lean_Elab_CheckTactic_elabCheckTactic_declRange__3___closed__5_value)}};
static const lean_object* l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_elabCheckTactic___regBuiltin_Lean_Elab_CheckTactic_elabCheckTactic_declRange__3___closed__6 = (const lean_object*)&l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_elabCheckTactic___regBuiltin_Lean_Elab_CheckTactic_elabCheckTactic_declRange__3___closed__6_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_elabCheckTactic___regBuiltin_Lean_Elab_CheckTactic_elabCheckTactic_declRange__3();
LEAN_EXPORT lean_object* l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_elabCheckTactic___regBuiltin_Lean_Elab_CheckTactic_elabCheckTactic_declRange__3___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutErrToSorry___at___00Lean_Elab_CheckTactic_elabCheckTacticFailure_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutErrToSorry___at___00Lean_Elab_CheckTactic_elabCheckTacticFailure_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutErrToSorry___at___00Lean_Elab_CheckTactic_elabCheckTacticFailure_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutErrToSorry___at___00Lean_Elab_CheckTactic_elabCheckTacticFailure_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_CheckTactic_elabCheckTacticFailure___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_CheckTactic_elabCheckTacticFailure___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldlM___at___00List_foldlM___at___00Lean_Elab_CheckTactic_elabCheckTacticFailure_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldlM___at___00List_foldlM___at___00Lean_Elab_CheckTactic_elabCheckTacticFailure_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldlM___at___00Lean_Elab_CheckTactic_elabCheckTacticFailure_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldlM___at___00Lean_Elab_CheckTactic_elabCheckTacticFailure_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_CheckTactic_elabCheckTacticFailure___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = " expected to fail on "};
static const lean_object* l_Lean_Elab_CheckTactic_elabCheckTacticFailure___lam__0___closed__0 = (const lean_object*)&l_Lean_Elab_CheckTactic_elabCheckTacticFailure___lam__0___closed__0_value;
static lean_once_cell_t l_Lean_Elab_CheckTactic_elabCheckTacticFailure___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_CheckTactic_elabCheckTacticFailure___lam__0___closed__1;
static const lean_string_object l_Lean_Elab_CheckTactic_elabCheckTacticFailure___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = ", but closed goal."};
static const lean_object* l_Lean_Elab_CheckTactic_elabCheckTacticFailure___lam__0___closed__2 = (const lean_object*)&l_Lean_Elab_CheckTactic_elabCheckTacticFailure___lam__0___closed__2_value;
static lean_once_cell_t l_Lean_Elab_CheckTactic_elabCheckTacticFailure___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_CheckTactic_elabCheckTacticFailure___lam__0___closed__3;
static const lean_string_object l_Lean_Elab_CheckTactic_elabCheckTacticFailure___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = ", but returned: "};
static const lean_object* l_Lean_Elab_CheckTactic_elabCheckTacticFailure___lam__0___closed__4 = (const lean_object*)&l_Lean_Elab_CheckTactic_elabCheckTacticFailure___lam__0___closed__4_value;
static lean_once_cell_t l_Lean_Elab_CheckTactic_elabCheckTacticFailure___lam__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_CheckTactic_elabCheckTacticFailure___lam__0___closed__5;
static const lean_string_object l_Lean_Elab_CheckTactic_elabCheckTacticFailure___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = ", but returned goals:"};
static const lean_object* l_Lean_Elab_CheckTactic_elabCheckTacticFailure___lam__0___closed__6 = (const lean_object*)&l_Lean_Elab_CheckTactic_elabCheckTacticFailure___lam__0___closed__6_value;
static lean_once_cell_t l_Lean_Elab_CheckTactic_elabCheckTacticFailure___lam__0___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_CheckTactic_elabCheckTacticFailure___lam__0___closed__7;
LEAN_EXPORT lean_object* l_Lean_Elab_CheckTactic_elabCheckTacticFailure___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_CheckTactic_elabCheckTacticFailure___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_CheckTactic_elabCheckTacticFailure___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "checkTacticFailure"};
static const lean_object* l_Lean_Elab_CheckTactic_elabCheckTacticFailure___closed__0 = (const lean_object*)&l_Lean_Elab_CheckTactic_elabCheckTacticFailure___closed__0_value;
static const lean_ctor_object l_Lean_Elab_CheckTactic_elabCheckTacticFailure___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_CheckTactic_elabCheckTactic___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_CheckTactic_elabCheckTacticFailure___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_CheckTactic_elabCheckTacticFailure___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_CheckTactic_elabCheckTactic___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_CheckTactic_elabCheckTacticFailure___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_CheckTactic_elabCheckTacticFailure___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_CheckTactic_elabCheckTacticFailure___closed__0_value),LEAN_SCALAR_PTR_LITERAL(44, 178, 39, 246, 220, 9, 15, 154)}};
static const lean_object* l_Lean_Elab_CheckTactic_elabCheckTacticFailure___closed__1 = (const lean_object*)&l_Lean_Elab_CheckTactic_elabCheckTacticFailure___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_CheckTactic_elabCheckTacticFailure(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_CheckTactic_elabCheckTacticFailure___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldlM___at___00List_foldlM___at___00Lean_Elab_CheckTactic_elabCheckTacticFailure_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldlM___at___00List_foldlM___at___00Lean_Elab_CheckTactic_elabCheckTacticFailure_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_elabCheckTacticFailure___regBuiltin_Lean_Elab_CheckTactic_elabCheckTacticFailure__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "elabCheckTacticFailure"};
static const lean_object* l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_elabCheckTacticFailure___regBuiltin_Lean_Elab_CheckTactic_elabCheckTacticFailure__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_elabCheckTacticFailure___regBuiltin_Lean_Elab_CheckTactic_elabCheckTacticFailure__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_elabCheckTacticFailure___regBuiltin_Lean_Elab_CheckTactic_elabCheckTacticFailure__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_CheckTactic_elabCheckTactic___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_elabCheckTacticFailure___regBuiltin_Lean_Elab_CheckTactic_elabCheckTacticFailure__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_elabCheckTacticFailure___regBuiltin_Lean_Elab_CheckTactic_elabCheckTacticFailure__1___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_elabCheckTactic___regBuiltin_Lean_Elab_CheckTactic_elabCheckTactic__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_elabCheckTacticFailure___regBuiltin_Lean_Elab_CheckTactic_elabCheckTacticFailure__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_elabCheckTacticFailure___regBuiltin_Lean_Elab_CheckTactic_elabCheckTacticFailure__1___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_elabCheckTactic___regBuiltin_Lean_Elab_CheckTactic_elabCheckTactic__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(177, 138, 121, 117, 47, 212, 130, 79)}};
static const lean_ctor_object l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_elabCheckTacticFailure___regBuiltin_Lean_Elab_CheckTactic_elabCheckTacticFailure__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_elabCheckTacticFailure___regBuiltin_Lean_Elab_CheckTactic_elabCheckTacticFailure__1___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_elabCheckTacticFailure___regBuiltin_Lean_Elab_CheckTactic_elabCheckTacticFailure__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(154, 111, 187, 142, 78, 109, 254, 147)}};
static const lean_object* l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_elabCheckTacticFailure___regBuiltin_Lean_Elab_CheckTactic_elabCheckTacticFailure__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_elabCheckTacticFailure___regBuiltin_Lean_Elab_CheckTactic_elabCheckTacticFailure__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_elabCheckTacticFailure___regBuiltin_Lean_Elab_CheckTactic_elabCheckTacticFailure__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_elabCheckTacticFailure___regBuiltin_Lean_Elab_CheckTactic_elabCheckTacticFailure__1___boxed(lean_object*);
static const lean_ctor_object l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_elabCheckTacticFailure___regBuiltin_Lean_Elab_CheckTactic_elabCheckTacticFailure_declRange__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(48) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_elabCheckTacticFailure___regBuiltin_Lean_Elab_CheckTactic_elabCheckTacticFailure_declRange__3___closed__0 = (const lean_object*)&l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_elabCheckTacticFailure___regBuiltin_Lean_Elab_CheckTactic_elabCheckTacticFailure_declRange__3___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_elabCheckTacticFailure___regBuiltin_Lean_Elab_CheckTactic_elabCheckTacticFailure_declRange__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(73) << 1) | 1)),((lean_object*)(((size_t)(30) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_elabCheckTacticFailure___regBuiltin_Lean_Elab_CheckTactic_elabCheckTacticFailure_declRange__3___closed__1 = (const lean_object*)&l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_elabCheckTacticFailure___regBuiltin_Lean_Elab_CheckTactic_elabCheckTacticFailure_declRange__3___closed__1_value;
static const lean_ctor_object l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_elabCheckTacticFailure___regBuiltin_Lean_Elab_CheckTactic_elabCheckTacticFailure_declRange__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_elabCheckTacticFailure___regBuiltin_Lean_Elab_CheckTactic_elabCheckTacticFailure_declRange__3___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_elabCheckTacticFailure___regBuiltin_Lean_Elab_CheckTactic_elabCheckTacticFailure_declRange__3___closed__1_value),((lean_object*)(((size_t)(30) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_elabCheckTacticFailure___regBuiltin_Lean_Elab_CheckTactic_elabCheckTacticFailure_declRange__3___closed__2 = (const lean_object*)&l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_elabCheckTacticFailure___regBuiltin_Lean_Elab_CheckTactic_elabCheckTacticFailure_declRange__3___closed__2_value;
static const lean_ctor_object l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_elabCheckTacticFailure___regBuiltin_Lean_Elab_CheckTactic_elabCheckTacticFailure_declRange__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(48) << 1) | 1)),((lean_object*)(((size_t)(4) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_elabCheckTacticFailure___regBuiltin_Lean_Elab_CheckTactic_elabCheckTacticFailure_declRange__3___closed__3 = (const lean_object*)&l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_elabCheckTacticFailure___regBuiltin_Lean_Elab_CheckTactic_elabCheckTacticFailure_declRange__3___closed__3_value;
static const lean_ctor_object l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_elabCheckTacticFailure___regBuiltin_Lean_Elab_CheckTactic_elabCheckTacticFailure_declRange__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(48) << 1) | 1)),((lean_object*)(((size_t)(26) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_elabCheckTacticFailure___regBuiltin_Lean_Elab_CheckTactic_elabCheckTacticFailure_declRange__3___closed__4 = (const lean_object*)&l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_elabCheckTacticFailure___regBuiltin_Lean_Elab_CheckTactic_elabCheckTacticFailure_declRange__3___closed__4_value;
static const lean_ctor_object l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_elabCheckTacticFailure___regBuiltin_Lean_Elab_CheckTactic_elabCheckTacticFailure_declRange__3___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_elabCheckTacticFailure___regBuiltin_Lean_Elab_CheckTactic_elabCheckTacticFailure_declRange__3___closed__3_value),((lean_object*)(((size_t)(4) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_elabCheckTacticFailure___regBuiltin_Lean_Elab_CheckTactic_elabCheckTacticFailure_declRange__3___closed__4_value),((lean_object*)(((size_t)(26) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_elabCheckTacticFailure___regBuiltin_Lean_Elab_CheckTactic_elabCheckTacticFailure_declRange__3___closed__5 = (const lean_object*)&l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_elabCheckTacticFailure___regBuiltin_Lean_Elab_CheckTactic_elabCheckTacticFailure_declRange__3___closed__5_value;
static const lean_ctor_object l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_elabCheckTacticFailure___regBuiltin_Lean_Elab_CheckTactic_elabCheckTacticFailure_declRange__3___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_elabCheckTacticFailure___regBuiltin_Lean_Elab_CheckTactic_elabCheckTacticFailure_declRange__3___closed__2_value),((lean_object*)&l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_elabCheckTacticFailure___regBuiltin_Lean_Elab_CheckTactic_elabCheckTacticFailure_declRange__3___closed__5_value)}};
static const lean_object* l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_elabCheckTacticFailure___regBuiltin_Lean_Elab_CheckTactic_elabCheckTacticFailure_declRange__3___closed__6 = (const lean_object*)&l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_elabCheckTacticFailure___regBuiltin_Lean_Elab_CheckTactic_elabCheckTacticFailure_declRange__3___closed__6_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_elabCheckTacticFailure___regBuiltin_Lean_Elab_CheckTactic_elabCheckTacticFailure_declRange__3();
LEAN_EXPORT lean_object* l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_elabCheckTacticFailure___regBuiltin_Lean_Elab_CheckTactic_elabCheckTacticFailure_declRange__3___boxed(lean_object*);
static const lean_string_object l_Lean_Elab_CheckTactic_expandCheckSimp___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "checkSimp"};
static const lean_object* l_Lean_Elab_CheckTactic_expandCheckSimp___closed__0 = (const lean_object*)&l_Lean_Elab_CheckTactic_expandCheckSimp___closed__0_value;
static const lean_ctor_object l_Lean_Elab_CheckTactic_expandCheckSimp___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_CheckTactic_elabCheckTactic___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_CheckTactic_expandCheckSimp___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_CheckTactic_expandCheckSimp___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_CheckTactic_elabCheckTactic___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_CheckTactic_expandCheckSimp___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_CheckTactic_expandCheckSimp___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_CheckTactic_expandCheckSimp___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 79, 163, 70, 127, 40, 174, 58)}};
static const lean_object* l_Lean_Elab_CheckTactic_expandCheckSimp___closed__1 = (const lean_object*)&l_Lean_Elab_CheckTactic_expandCheckSimp___closed__1_value;
static const lean_string_object l_Lean_Elab_CheckTactic_expandCheckSimp___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "#check_tactic"};
static const lean_object* l_Lean_Elab_CheckTactic_expandCheckSimp___closed__2 = (const lean_object*)&l_Lean_Elab_CheckTactic_expandCheckSimp___closed__2_value;
static const lean_string_object l_Lean_Elab_CheckTactic_expandCheckSimp___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "~>"};
static const lean_object* l_Lean_Elab_CheckTactic_expandCheckSimp___closed__3 = (const lean_object*)&l_Lean_Elab_CheckTactic_expandCheckSimp___closed__3_value;
static const lean_string_object l_Lean_Elab_CheckTactic_expandCheckSimp___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "by"};
static const lean_object* l_Lean_Elab_CheckTactic_expandCheckSimp___closed__4 = (const lean_object*)&l_Lean_Elab_CheckTactic_expandCheckSimp___closed__4_value;
static const lean_string_object l_Lean_Elab_CheckTactic_expandCheckSimp___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l_Lean_Elab_CheckTactic_expandCheckSimp___closed__5 = (const lean_object*)&l_Lean_Elab_CheckTactic_expandCheckSimp___closed__5_value;
static const lean_string_object l_Lean_Elab_CheckTactic_expandCheckSimp___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "simp"};
static const lean_object* l_Lean_Elab_CheckTactic_expandCheckSimp___closed__6 = (const lean_object*)&l_Lean_Elab_CheckTactic_expandCheckSimp___closed__6_value;
static const lean_ctor_object l_Lean_Elab_CheckTactic_expandCheckSimp___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_CheckTactic_elabCheckTactic___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_CheckTactic_expandCheckSimp___closed__7_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_CheckTactic_expandCheckSimp___closed__7_value_aux_0),((lean_object*)&l_Lean_Elab_CheckTactic_elabCheckTactic___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_CheckTactic_expandCheckSimp___closed__7_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_CheckTactic_expandCheckSimp___closed__7_value_aux_1),((lean_object*)&l_Lean_Elab_CheckTactic_expandCheckSimp___closed__5_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Elab_CheckTactic_expandCheckSimp___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_CheckTactic_expandCheckSimp___closed__7_value_aux_2),((lean_object*)&l_Lean_Elab_CheckTactic_expandCheckSimp___closed__6_value),LEAN_SCALAR_PTR_LITERAL(50, 13, 241, 145, 67, 153, 105, 177)}};
static const lean_object* l_Lean_Elab_CheckTactic_expandCheckSimp___closed__7 = (const lean_object*)&l_Lean_Elab_CheckTactic_expandCheckSimp___closed__7_value;
static const lean_string_object l_Lean_Elab_CheckTactic_expandCheckSimp___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "optConfig"};
static const lean_object* l_Lean_Elab_CheckTactic_expandCheckSimp___closed__8 = (const lean_object*)&l_Lean_Elab_CheckTactic_expandCheckSimp___closed__8_value;
static const lean_ctor_object l_Lean_Elab_CheckTactic_expandCheckSimp___closed__9_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_CheckTactic_elabCheckTactic___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_CheckTactic_expandCheckSimp___closed__9_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_CheckTactic_expandCheckSimp___closed__9_value_aux_0),((lean_object*)&l_Lean_Elab_CheckTactic_elabCheckTactic___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_CheckTactic_expandCheckSimp___closed__9_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_CheckTactic_expandCheckSimp___closed__9_value_aux_1),((lean_object*)&l_Lean_Elab_CheckTactic_expandCheckSimp___closed__5_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Elab_CheckTactic_expandCheckSimp___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_CheckTactic_expandCheckSimp___closed__9_value_aux_2),((lean_object*)&l_Lean_Elab_CheckTactic_expandCheckSimp___closed__8_value),LEAN_SCALAR_PTR_LITERAL(137, 208, 10, 74, 108, 50, 106, 48)}};
static const lean_object* l_Lean_Elab_CheckTactic_expandCheckSimp___closed__9 = (const lean_object*)&l_Lean_Elab_CheckTactic_expandCheckSimp___closed__9_value;
static const lean_string_object l_Lean_Elab_CheckTactic_expandCheckSimp___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* l_Lean_Elab_CheckTactic_expandCheckSimp___closed__10 = (const lean_object*)&l_Lean_Elab_CheckTactic_expandCheckSimp___closed__10_value;
static const lean_ctor_object l_Lean_Elab_CheckTactic_expandCheckSimp___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_CheckTactic_expandCheckSimp___closed__10_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* l_Lean_Elab_CheckTactic_expandCheckSimp___closed__11 = (const lean_object*)&l_Lean_Elab_CheckTactic_expandCheckSimp___closed__11_value;
static lean_once_cell_t l_Lean_Elab_CheckTactic_expandCheckSimp___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_CheckTactic_expandCheckSimp___closed__12;
LEAN_EXPORT lean_object* l_Lean_Elab_CheckTactic_expandCheckSimp(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_CheckTactic_expandCheckSimp___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_expandCheckSimp___regBuiltin_Lean_Elab_CheckTactic_expandCheckSimp__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "expandCheckSimp"};
static const lean_object* l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_expandCheckSimp___regBuiltin_Lean_Elab_CheckTactic_expandCheckSimp__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_expandCheckSimp___regBuiltin_Lean_Elab_CheckTactic_expandCheckSimp__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_expandCheckSimp___regBuiltin_Lean_Elab_CheckTactic_expandCheckSimp__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_CheckTactic_elabCheckTactic___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_expandCheckSimp___regBuiltin_Lean_Elab_CheckTactic_expandCheckSimp__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_expandCheckSimp___regBuiltin_Lean_Elab_CheckTactic_expandCheckSimp__1___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_elabCheckTactic___regBuiltin_Lean_Elab_CheckTactic_elabCheckTactic__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_expandCheckSimp___regBuiltin_Lean_Elab_CheckTactic_expandCheckSimp__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_expandCheckSimp___regBuiltin_Lean_Elab_CheckTactic_expandCheckSimp__1___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_elabCheckTactic___regBuiltin_Lean_Elab_CheckTactic_elabCheckTactic__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(177, 138, 121, 117, 47, 212, 130, 79)}};
static const lean_ctor_object l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_expandCheckSimp___regBuiltin_Lean_Elab_CheckTactic_expandCheckSimp__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_expandCheckSimp___regBuiltin_Lean_Elab_CheckTactic_expandCheckSimp__1___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_expandCheckSimp___regBuiltin_Lean_Elab_CheckTactic_expandCheckSimp__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(244, 31, 125, 199, 240, 147, 190, 74)}};
static const lean_object* l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_expandCheckSimp___regBuiltin_Lean_Elab_CheckTactic_expandCheckSimp__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_expandCheckSimp___regBuiltin_Lean_Elab_CheckTactic_expandCheckSimp__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_expandCheckSimp___regBuiltin_Lean_Elab_CheckTactic_expandCheckSimp__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_expandCheckSimp___regBuiltin_Lean_Elab_CheckTactic_expandCheckSimp__1___boxed(lean_object*);
static const lean_ctor_object l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_expandCheckSimp___regBuiltin_Lean_Elab_CheckTactic_expandCheckSimp_declRange__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(76) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_expandCheckSimp___regBuiltin_Lean_Elab_CheckTactic_expandCheckSimp_declRange__3___closed__0 = (const lean_object*)&l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_expandCheckSimp___regBuiltin_Lean_Elab_CheckTactic_expandCheckSimp_declRange__3___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_expandCheckSimp___regBuiltin_Lean_Elab_CheckTactic_expandCheckSimp_declRange__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(78) << 1) | 1)),((lean_object*)(((size_t)(45) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_expandCheckSimp___regBuiltin_Lean_Elab_CheckTactic_expandCheckSimp_declRange__3___closed__1 = (const lean_object*)&l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_expandCheckSimp___regBuiltin_Lean_Elab_CheckTactic_expandCheckSimp_declRange__3___closed__1_value;
static const lean_ctor_object l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_expandCheckSimp___regBuiltin_Lean_Elab_CheckTactic_expandCheckSimp_declRange__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_expandCheckSimp___regBuiltin_Lean_Elab_CheckTactic_expandCheckSimp_declRange__3___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_expandCheckSimp___regBuiltin_Lean_Elab_CheckTactic_expandCheckSimp_declRange__3___closed__1_value),((lean_object*)(((size_t)(45) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_expandCheckSimp___regBuiltin_Lean_Elab_CheckTactic_expandCheckSimp_declRange__3___closed__2 = (const lean_object*)&l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_expandCheckSimp___regBuiltin_Lean_Elab_CheckTactic_expandCheckSimp_declRange__3___closed__2_value;
static const lean_ctor_object l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_expandCheckSimp___regBuiltin_Lean_Elab_CheckTactic_expandCheckSimp_declRange__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(76) << 1) | 1)),((lean_object*)(((size_t)(4) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_expandCheckSimp___regBuiltin_Lean_Elab_CheckTactic_expandCheckSimp_declRange__3___closed__3 = (const lean_object*)&l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_expandCheckSimp___regBuiltin_Lean_Elab_CheckTactic_expandCheckSimp_declRange__3___closed__3_value;
static const lean_ctor_object l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_expandCheckSimp___regBuiltin_Lean_Elab_CheckTactic_expandCheckSimp_declRange__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(76) << 1) | 1)),((lean_object*)(((size_t)(19) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_expandCheckSimp___regBuiltin_Lean_Elab_CheckTactic_expandCheckSimp_declRange__3___closed__4 = (const lean_object*)&l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_expandCheckSimp___regBuiltin_Lean_Elab_CheckTactic_expandCheckSimp_declRange__3___closed__4_value;
static const lean_ctor_object l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_expandCheckSimp___regBuiltin_Lean_Elab_CheckTactic_expandCheckSimp_declRange__3___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_expandCheckSimp___regBuiltin_Lean_Elab_CheckTactic_expandCheckSimp_declRange__3___closed__3_value),((lean_object*)(((size_t)(4) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_expandCheckSimp___regBuiltin_Lean_Elab_CheckTactic_expandCheckSimp_declRange__3___closed__4_value),((lean_object*)(((size_t)(19) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_expandCheckSimp___regBuiltin_Lean_Elab_CheckTactic_expandCheckSimp_declRange__3___closed__5 = (const lean_object*)&l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_expandCheckSimp___regBuiltin_Lean_Elab_CheckTactic_expandCheckSimp_declRange__3___closed__5_value;
static const lean_ctor_object l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_expandCheckSimp___regBuiltin_Lean_Elab_CheckTactic_expandCheckSimp_declRange__3___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_expandCheckSimp___regBuiltin_Lean_Elab_CheckTactic_expandCheckSimp_declRange__3___closed__2_value),((lean_object*)&l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_expandCheckSimp___regBuiltin_Lean_Elab_CheckTactic_expandCheckSimp_declRange__3___closed__5_value)}};
static const lean_object* l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_expandCheckSimp___regBuiltin_Lean_Elab_CheckTactic_expandCheckSimp_declRange__3___closed__6 = (const lean_object*)&l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_expandCheckSimp___regBuiltin_Lean_Elab_CheckTactic_expandCheckSimp_declRange__3___closed__6_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_expandCheckSimp___regBuiltin_Lean_Elab_CheckTactic_expandCheckSimp_declRange__3();
LEAN_EXPORT lean_object* l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_expandCheckSimp___regBuiltin_Lean_Elab_CheckTactic_expandCheckSimp_declRange__3___boxed(lean_object*);
static const lean_string_object l_Lean_Elab_CheckTactic_expandCheckSimpFailure___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "checkSimpFailure"};
static const lean_object* l_Lean_Elab_CheckTactic_expandCheckSimpFailure___closed__0 = (const lean_object*)&l_Lean_Elab_CheckTactic_expandCheckSimpFailure___closed__0_value;
static const lean_ctor_object l_Lean_Elab_CheckTactic_expandCheckSimpFailure___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_CheckTactic_elabCheckTactic___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_CheckTactic_expandCheckSimpFailure___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_CheckTactic_expandCheckSimpFailure___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_CheckTactic_elabCheckTactic___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_CheckTactic_expandCheckSimpFailure___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_CheckTactic_expandCheckSimpFailure___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_CheckTactic_expandCheckSimpFailure___closed__0_value),LEAN_SCALAR_PTR_LITERAL(198, 64, 91, 201, 12, 111, 199, 188)}};
static const lean_object* l_Lean_Elab_CheckTactic_expandCheckSimpFailure___closed__1 = (const lean_object*)&l_Lean_Elab_CheckTactic_expandCheckSimpFailure___closed__1_value;
static const lean_string_object l_Lean_Elab_CheckTactic_expandCheckSimpFailure___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "#check_tactic_failure"};
static const lean_object* l_Lean_Elab_CheckTactic_expandCheckSimpFailure___closed__2 = (const lean_object*)&l_Lean_Elab_CheckTactic_expandCheckSimpFailure___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Elab_CheckTactic_expandCheckSimpFailure(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_CheckTactic_expandCheckSimpFailure___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_expandCheckSimpFailure___regBuiltin_Lean_Elab_CheckTactic_expandCheckSimpFailure__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "expandCheckSimpFailure"};
static const lean_object* l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_expandCheckSimpFailure___regBuiltin_Lean_Elab_CheckTactic_expandCheckSimpFailure__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_expandCheckSimpFailure___regBuiltin_Lean_Elab_CheckTactic_expandCheckSimpFailure__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_expandCheckSimpFailure___regBuiltin_Lean_Elab_CheckTactic_expandCheckSimpFailure__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_CheckTactic_elabCheckTactic___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_expandCheckSimpFailure___regBuiltin_Lean_Elab_CheckTactic_expandCheckSimpFailure__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_expandCheckSimpFailure___regBuiltin_Lean_Elab_CheckTactic_expandCheckSimpFailure__1___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_elabCheckTactic___regBuiltin_Lean_Elab_CheckTactic_elabCheckTactic__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_expandCheckSimpFailure___regBuiltin_Lean_Elab_CheckTactic_expandCheckSimpFailure__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_expandCheckSimpFailure___regBuiltin_Lean_Elab_CheckTactic_expandCheckSimpFailure__1___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_elabCheckTactic___regBuiltin_Lean_Elab_CheckTactic_elabCheckTactic__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(177, 138, 121, 117, 47, 212, 130, 79)}};
static const lean_ctor_object l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_expandCheckSimpFailure___regBuiltin_Lean_Elab_CheckTactic_expandCheckSimpFailure__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_expandCheckSimpFailure___regBuiltin_Lean_Elab_CheckTactic_expandCheckSimpFailure__1___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_expandCheckSimpFailure___regBuiltin_Lean_Elab_CheckTactic_expandCheckSimpFailure__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(119, 74, 202, 176, 97, 48, 121, 220)}};
static const lean_object* l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_expandCheckSimpFailure___regBuiltin_Lean_Elab_CheckTactic_expandCheckSimpFailure__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_expandCheckSimpFailure___regBuiltin_Lean_Elab_CheckTactic_expandCheckSimpFailure__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_expandCheckSimpFailure___regBuiltin_Lean_Elab_CheckTactic_expandCheckSimpFailure__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_expandCheckSimpFailure___regBuiltin_Lean_Elab_CheckTactic_expandCheckSimpFailure__1___boxed(lean_object*);
static const lean_ctor_object l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_expandCheckSimpFailure___regBuiltin_Lean_Elab_CheckTactic_expandCheckSimpFailure_declRange__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(81) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_expandCheckSimpFailure___regBuiltin_Lean_Elab_CheckTactic_expandCheckSimpFailure_declRange__3___closed__0 = (const lean_object*)&l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_expandCheckSimpFailure___regBuiltin_Lean_Elab_CheckTactic_expandCheckSimpFailure_declRange__3___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_expandCheckSimpFailure___regBuiltin_Lean_Elab_CheckTactic_expandCheckSimpFailure_declRange__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(83) << 1) | 1)),((lean_object*)(((size_t)(45) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_expandCheckSimpFailure___regBuiltin_Lean_Elab_CheckTactic_expandCheckSimpFailure_declRange__3___closed__1 = (const lean_object*)&l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_expandCheckSimpFailure___regBuiltin_Lean_Elab_CheckTactic_expandCheckSimpFailure_declRange__3___closed__1_value;
static const lean_ctor_object l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_expandCheckSimpFailure___regBuiltin_Lean_Elab_CheckTactic_expandCheckSimpFailure_declRange__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_expandCheckSimpFailure___regBuiltin_Lean_Elab_CheckTactic_expandCheckSimpFailure_declRange__3___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_expandCheckSimpFailure___regBuiltin_Lean_Elab_CheckTactic_expandCheckSimpFailure_declRange__3___closed__1_value),((lean_object*)(((size_t)(45) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_expandCheckSimpFailure___regBuiltin_Lean_Elab_CheckTactic_expandCheckSimpFailure_declRange__3___closed__2 = (const lean_object*)&l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_expandCheckSimpFailure___regBuiltin_Lean_Elab_CheckTactic_expandCheckSimpFailure_declRange__3___closed__2_value;
static const lean_ctor_object l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_expandCheckSimpFailure___regBuiltin_Lean_Elab_CheckTactic_expandCheckSimpFailure_declRange__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(81) << 1) | 1)),((lean_object*)(((size_t)(4) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_expandCheckSimpFailure___regBuiltin_Lean_Elab_CheckTactic_expandCheckSimpFailure_declRange__3___closed__3 = (const lean_object*)&l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_expandCheckSimpFailure___regBuiltin_Lean_Elab_CheckTactic_expandCheckSimpFailure_declRange__3___closed__3_value;
static const lean_ctor_object l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_expandCheckSimpFailure___regBuiltin_Lean_Elab_CheckTactic_expandCheckSimpFailure_declRange__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(81) << 1) | 1)),((lean_object*)(((size_t)(26) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_expandCheckSimpFailure___regBuiltin_Lean_Elab_CheckTactic_expandCheckSimpFailure_declRange__3___closed__4 = (const lean_object*)&l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_expandCheckSimpFailure___regBuiltin_Lean_Elab_CheckTactic_expandCheckSimpFailure_declRange__3___closed__4_value;
static const lean_ctor_object l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_expandCheckSimpFailure___regBuiltin_Lean_Elab_CheckTactic_expandCheckSimpFailure_declRange__3___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_expandCheckSimpFailure___regBuiltin_Lean_Elab_CheckTactic_expandCheckSimpFailure_declRange__3___closed__3_value),((lean_object*)(((size_t)(4) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_expandCheckSimpFailure___regBuiltin_Lean_Elab_CheckTactic_expandCheckSimpFailure_declRange__3___closed__4_value),((lean_object*)(((size_t)(26) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_expandCheckSimpFailure___regBuiltin_Lean_Elab_CheckTactic_expandCheckSimpFailure_declRange__3___closed__5 = (const lean_object*)&l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_expandCheckSimpFailure___regBuiltin_Lean_Elab_CheckTactic_expandCheckSimpFailure_declRange__3___closed__5_value;
static const lean_ctor_object l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_expandCheckSimpFailure___regBuiltin_Lean_Elab_CheckTactic_expandCheckSimpFailure_declRange__3___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_expandCheckSimpFailure___regBuiltin_Lean_Elab_CheckTactic_expandCheckSimpFailure_declRange__3___closed__2_value),((lean_object*)&l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_expandCheckSimpFailure___regBuiltin_Lean_Elab_CheckTactic_expandCheckSimpFailure_declRange__3___closed__5_value)}};
static const lean_object* l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_expandCheckSimpFailure___regBuiltin_Lean_Elab_CheckTactic_expandCheckSimpFailure_declRange__3___closed__6 = (const lean_object*)&l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_expandCheckSimpFailure___regBuiltin_Lean_Elab_CheckTactic_expandCheckSimpFailure_declRange__3___closed__6_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_expandCheckSimpFailure___regBuiltin_Lean_Elab_CheckTactic_expandCheckSimpFailure_declRange__3();
LEAN_EXPORT lean_object* l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_expandCheckSimpFailure___regBuiltin_Lean_Elab_CheckTactic_expandCheckSimpFailure_declRange__3___boxed(lean_object*);
static lean_object* _init_l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_CheckTactic_elabCheckTactic_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_1_; lean_object* v___x_2_; lean_object* v___x_3_; 
v___x_1_ = lean_box(0);
v___x_2_ = l_Lean_Elab_unsupportedSyntaxExceptionId;
v___x_3_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3_, 0, v___x_2_);
lean_ctor_set(v___x_3_, 1, v___x_1_);
return v___x_3_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_CheckTactic_elabCheckTactic_spec__0___redArg(){
_start:
{
lean_object* v___x_5_; lean_object* v___x_6_; 
v___x_5_ = lean_obj_once(&l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_CheckTactic_elabCheckTactic_spec__0___redArg___closed__0, &l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_CheckTactic_elabCheckTactic_spec__0___redArg___closed__0_once, _init_l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_CheckTactic_elabCheckTactic_spec__0___redArg___closed__0);
v___x_6_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6_, 0, v___x_5_);
return v___x_6_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_CheckTactic_elabCheckTactic_spec__0___redArg___boxed(lean_object* v___y_7_){
_start:
{
lean_object* v_res_8_; 
v_res_8_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_CheckTactic_elabCheckTactic_spec__0___redArg();
return v_res_8_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_CheckTactic_elabCheckTactic_spec__0(lean_object* v_00_u03b1_9_, lean_object* v___y_10_, lean_object* v___y_11_){
_start:
{
lean_object* v___x_13_; 
v___x_13_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_CheckTactic_elabCheckTactic_spec__0___redArg();
return v___x_13_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_CheckTactic_elabCheckTactic_spec__0___boxed(lean_object* v_00_u03b1_14_, lean_object* v___y_15_, lean_object* v___y_16_, lean_object* v___y_17_){
_start:
{
lean_object* v_res_18_; 
v_res_18_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_CheckTactic_elabCheckTactic_spec__0(v_00_u03b1_14_, v___y_15_, v___y_16_);
lean_dec(v___y_16_);
lean_dec_ref(v___y_15_);
return v_res_18_;
}
}
LEAN_EXPORT uint8_t l_Lean_Elab_CheckTactic_elabCheckTactic___lam__0(lean_object* v_x_19_){
_start:
{
uint8_t v___x_20_; 
v___x_20_ = 0;
return v___x_20_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_CheckTactic_elabCheckTactic___lam__0___boxed(lean_object* v_x_21_){
_start:
{
uint8_t v_res_22_; lean_object* v_r_23_; 
v_res_22_ = l_Lean_Elab_CheckTactic_elabCheckTactic___lam__0(v_x_21_);
lean_dec(v_x_21_);
v_r_23_ = lean_box(v_res_22_);
return v_r_23_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_CheckTactic_elabCheckTactic_spec__1_spec__1_spec__2(lean_object* v_msgData_24_, lean_object* v___y_25_, lean_object* v___y_26_, lean_object* v___y_27_, lean_object* v___y_28_){
_start:
{
lean_object* v___x_30_; lean_object* v_env_31_; lean_object* v___x_32_; lean_object* v_toCold_33_; lean_object* v_mctx_34_; lean_object* v_lctx_35_; lean_object* v_options_36_; lean_object* v___x_37_; lean_object* v___x_38_; lean_object* v___x_39_; 
v___x_30_ = lean_st_ref_get(v___y_28_);
v_env_31_ = lean_ctor_get(v___x_30_, 0);
lean_inc_ref(v_env_31_);
lean_dec(v___x_30_);
v___x_32_ = lean_st_ref_get(v___y_26_);
v_toCold_33_ = lean_ctor_get(v___y_27_, 0);
v_mctx_34_ = lean_ctor_get(v___x_32_, 0);
lean_inc_ref(v_mctx_34_);
lean_dec(v___x_32_);
v_lctx_35_ = lean_ctor_get(v___y_25_, 2);
v_options_36_ = lean_ctor_get(v_toCold_33_, 2);
lean_inc_ref(v_options_36_);
lean_inc_ref(v_lctx_35_);
v___x_37_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_37_, 0, v_env_31_);
lean_ctor_set(v___x_37_, 1, v_mctx_34_);
lean_ctor_set(v___x_37_, 2, v_lctx_35_);
lean_ctor_set(v___x_37_, 3, v_options_36_);
v___x_38_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_38_, 0, v___x_37_);
lean_ctor_set(v___x_38_, 1, v_msgData_24_);
v___x_39_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_39_, 0, v___x_38_);
return v___x_39_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_CheckTactic_elabCheckTactic_spec__1_spec__1_spec__2___boxed(lean_object* v_msgData_40_, lean_object* v___y_41_, lean_object* v___y_42_, lean_object* v___y_43_, lean_object* v___y_44_, lean_object* v___y_45_){
_start:
{
lean_object* v_res_46_; 
v_res_46_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_CheckTactic_elabCheckTactic_spec__1_spec__1_spec__2(v_msgData_40_, v___y_41_, v___y_42_, v___y_43_, v___y_44_);
lean_dec(v___y_44_);
lean_dec_ref(v___y_43_);
lean_dec(v___y_42_);
lean_dec_ref(v___y_41_);
return v_res_46_;
}
}
static lean_object* _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_CheckTactic_elabCheckTactic_spec__1_spec__1_spec__3_spec__7___closed__0(void){
_start:
{
lean_object* v___x_47_; lean_object* v___x_48_; 
v___x_47_ = lean_box(1);
v___x_48_ = l_Lean_MessageData_ofFormat(v___x_47_);
return v___x_48_;
}
}
static lean_object* _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_CheckTactic_elabCheckTactic_spec__1_spec__1_spec__3_spec__7___closed__3(void){
_start:
{
lean_object* v___x_52_; lean_object* v___x_53_; 
v___x_52_ = ((lean_object*)(l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_CheckTactic_elabCheckTactic_spec__1_spec__1_spec__3_spec__7___closed__2));
v___x_53_ = l_Lean_MessageData_ofFormat(v___x_52_);
return v___x_53_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_CheckTactic_elabCheckTactic_spec__1_spec__1_spec__3_spec__7(lean_object* v_x_54_, lean_object* v_x_55_){
_start:
{
if (lean_obj_tag(v_x_55_) == 0)
{
return v_x_54_;
}
else
{
lean_object* v_head_56_; lean_object* v_tail_57_; lean_object* v___x_59_; uint8_t v_isShared_60_; uint8_t v_isSharedCheck_79_; 
v_head_56_ = lean_ctor_get(v_x_55_, 0);
v_tail_57_ = lean_ctor_get(v_x_55_, 1);
v_isSharedCheck_79_ = !lean_is_exclusive(v_x_55_);
if (v_isSharedCheck_79_ == 0)
{
v___x_59_ = v_x_55_;
v_isShared_60_ = v_isSharedCheck_79_;
goto v_resetjp_58_;
}
else
{
lean_inc(v_tail_57_);
lean_inc(v_head_56_);
lean_dec(v_x_55_);
v___x_59_ = lean_box(0);
v_isShared_60_ = v_isSharedCheck_79_;
goto v_resetjp_58_;
}
v_resetjp_58_:
{
lean_object* v_before_61_; lean_object* v___x_63_; uint8_t v_isShared_64_; uint8_t v_isSharedCheck_77_; 
v_before_61_ = lean_ctor_get(v_head_56_, 0);
v_isSharedCheck_77_ = !lean_is_exclusive(v_head_56_);
if (v_isSharedCheck_77_ == 0)
{
lean_object* v_unused_78_; 
v_unused_78_ = lean_ctor_get(v_head_56_, 1);
lean_dec(v_unused_78_);
v___x_63_ = v_head_56_;
v_isShared_64_ = v_isSharedCheck_77_;
goto v_resetjp_62_;
}
else
{
lean_inc(v_before_61_);
lean_dec(v_head_56_);
v___x_63_ = lean_box(0);
v_isShared_64_ = v_isSharedCheck_77_;
goto v_resetjp_62_;
}
v_resetjp_62_:
{
lean_object* v___x_65_; lean_object* v___x_67_; 
v___x_65_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_CheckTactic_elabCheckTactic_spec__1_spec__1_spec__3_spec__7___closed__0, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_CheckTactic_elabCheckTactic_spec__1_spec__1_spec__3_spec__7___closed__0_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_CheckTactic_elabCheckTactic_spec__1_spec__1_spec__3_spec__7___closed__0);
if (v_isShared_64_ == 0)
{
lean_ctor_set_tag(v___x_63_, 7);
lean_ctor_set(v___x_63_, 1, v___x_65_);
lean_ctor_set(v___x_63_, 0, v_x_54_);
v___x_67_ = v___x_63_;
goto v_reusejp_66_;
}
else
{
lean_object* v_reuseFailAlloc_76_; 
v_reuseFailAlloc_76_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_76_, 0, v_x_54_);
lean_ctor_set(v_reuseFailAlloc_76_, 1, v___x_65_);
v___x_67_ = v_reuseFailAlloc_76_;
goto v_reusejp_66_;
}
v_reusejp_66_:
{
lean_object* v___x_68_; lean_object* v___x_70_; 
v___x_68_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_CheckTactic_elabCheckTactic_spec__1_spec__1_spec__3_spec__7___closed__3, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_CheckTactic_elabCheckTactic_spec__1_spec__1_spec__3_spec__7___closed__3_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_CheckTactic_elabCheckTactic_spec__1_spec__1_spec__3_spec__7___closed__3);
if (v_isShared_60_ == 0)
{
lean_ctor_set_tag(v___x_59_, 7);
lean_ctor_set(v___x_59_, 1, v___x_68_);
lean_ctor_set(v___x_59_, 0, v___x_67_);
v___x_70_ = v___x_59_;
goto v_reusejp_69_;
}
else
{
lean_object* v_reuseFailAlloc_75_; 
v_reuseFailAlloc_75_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_75_, 0, v___x_67_);
lean_ctor_set(v_reuseFailAlloc_75_, 1, v___x_68_);
v___x_70_ = v_reuseFailAlloc_75_;
goto v_reusejp_69_;
}
v_reusejp_69_:
{
lean_object* v___x_71_; lean_object* v___x_72_; lean_object* v___x_73_; 
v___x_71_ = l_Lean_MessageData_ofSyntax(v_before_61_);
v___x_72_ = l_Lean_indentD(v___x_71_);
v___x_73_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_73_, 0, v___x_70_);
lean_ctor_set(v___x_73_, 1, v___x_72_);
v_x_54_ = v___x_73_;
v_x_55_ = v_tail_57_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_CheckTactic_elabCheckTactic_spec__1_spec__1_spec__3_spec__6(lean_object* v_opts_80_, lean_object* v_opt_81_){
_start:
{
lean_object* v_name_82_; lean_object* v_defValue_83_; lean_object* v_map_84_; lean_object* v___x_85_; 
v_name_82_ = lean_ctor_get(v_opt_81_, 0);
v_defValue_83_ = lean_ctor_get(v_opt_81_, 1);
v_map_84_ = lean_ctor_get(v_opts_80_, 0);
v___x_85_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_84_, v_name_82_);
if (lean_obj_tag(v___x_85_) == 0)
{
uint8_t v___x_86_; 
v___x_86_ = lean_unbox(v_defValue_83_);
return v___x_86_;
}
else
{
lean_object* v_val_87_; 
v_val_87_ = lean_ctor_get(v___x_85_, 0);
lean_inc(v_val_87_);
lean_dec_ref_known(v___x_85_, 1);
if (lean_obj_tag(v_val_87_) == 1)
{
uint8_t v_v_88_; 
v_v_88_ = lean_ctor_get_uint8(v_val_87_, 0);
lean_dec_ref_known(v_val_87_, 0);
return v_v_88_;
}
else
{
uint8_t v___x_89_; 
lean_dec(v_val_87_);
v___x_89_ = lean_unbox(v_defValue_83_);
return v___x_89_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_CheckTactic_elabCheckTactic_spec__1_spec__1_spec__3_spec__6___boxed(lean_object* v_opts_90_, lean_object* v_opt_91_){
_start:
{
uint8_t v_res_92_; lean_object* v_r_93_; 
v_res_92_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_CheckTactic_elabCheckTactic_spec__1_spec__1_spec__3_spec__6(v_opts_90_, v_opt_91_);
lean_dec_ref(v_opt_91_);
lean_dec_ref(v_opts_90_);
v_r_93_ = lean_box(v_res_92_);
return v_r_93_;
}
}
static lean_object* _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_CheckTactic_elabCheckTactic_spec__1_spec__1_spec__3___redArg___closed__2(void){
_start:
{
lean_object* v___x_97_; lean_object* v___x_98_; 
v___x_97_ = ((lean_object*)(l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_CheckTactic_elabCheckTactic_spec__1_spec__1_spec__3___redArg___closed__1));
v___x_98_ = l_Lean_MessageData_ofFormat(v___x_97_);
return v___x_98_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_CheckTactic_elabCheckTactic_spec__1_spec__1_spec__3___redArg(lean_object* v_msgData_99_, lean_object* v_macroStack_100_, lean_object* v___y_101_){
_start:
{
lean_object* v_toCold_103_; lean_object* v_options_104_; lean_object* v___x_105_; uint8_t v___x_106_; 
v_toCold_103_ = lean_ctor_get(v___y_101_, 0);
v_options_104_ = lean_ctor_get(v_toCold_103_, 2);
v___x_105_ = l_Lean_Elab_pp_macroStack;
v___x_106_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_CheckTactic_elabCheckTactic_spec__1_spec__1_spec__3_spec__6(v_options_104_, v___x_105_);
if (v___x_106_ == 0)
{
lean_object* v___x_107_; 
lean_dec(v_macroStack_100_);
v___x_107_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_107_, 0, v_msgData_99_);
return v___x_107_;
}
else
{
if (lean_obj_tag(v_macroStack_100_) == 0)
{
lean_object* v___x_108_; 
v___x_108_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_108_, 0, v_msgData_99_);
return v___x_108_;
}
else
{
lean_object* v_head_109_; lean_object* v_after_110_; lean_object* v___x_112_; uint8_t v_isShared_113_; uint8_t v_isSharedCheck_125_; 
v_head_109_ = lean_ctor_get(v_macroStack_100_, 0);
lean_inc(v_head_109_);
v_after_110_ = lean_ctor_get(v_head_109_, 1);
v_isSharedCheck_125_ = !lean_is_exclusive(v_head_109_);
if (v_isSharedCheck_125_ == 0)
{
lean_object* v_unused_126_; 
v_unused_126_ = lean_ctor_get(v_head_109_, 0);
lean_dec(v_unused_126_);
v___x_112_ = v_head_109_;
v_isShared_113_ = v_isSharedCheck_125_;
goto v_resetjp_111_;
}
else
{
lean_inc(v_after_110_);
lean_dec(v_head_109_);
v___x_112_ = lean_box(0);
v_isShared_113_ = v_isSharedCheck_125_;
goto v_resetjp_111_;
}
v_resetjp_111_:
{
lean_object* v___x_114_; lean_object* v___x_116_; 
v___x_114_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_CheckTactic_elabCheckTactic_spec__1_spec__1_spec__3_spec__7___closed__0, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_CheckTactic_elabCheckTactic_spec__1_spec__1_spec__3_spec__7___closed__0_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_CheckTactic_elabCheckTactic_spec__1_spec__1_spec__3_spec__7___closed__0);
if (v_isShared_113_ == 0)
{
lean_ctor_set_tag(v___x_112_, 7);
lean_ctor_set(v___x_112_, 1, v___x_114_);
lean_ctor_set(v___x_112_, 0, v_msgData_99_);
v___x_116_ = v___x_112_;
goto v_reusejp_115_;
}
else
{
lean_object* v_reuseFailAlloc_124_; 
v_reuseFailAlloc_124_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_124_, 0, v_msgData_99_);
lean_ctor_set(v_reuseFailAlloc_124_, 1, v___x_114_);
v___x_116_ = v_reuseFailAlloc_124_;
goto v_reusejp_115_;
}
v_reusejp_115_:
{
lean_object* v___x_117_; lean_object* v___x_118_; lean_object* v___x_119_; lean_object* v___x_120_; lean_object* v_msgData_121_; lean_object* v___x_122_; lean_object* v___x_123_; 
v___x_117_ = lean_obj_once(&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_CheckTactic_elabCheckTactic_spec__1_spec__1_spec__3___redArg___closed__2, &l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_CheckTactic_elabCheckTactic_spec__1_spec__1_spec__3___redArg___closed__2_once, _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_CheckTactic_elabCheckTactic_spec__1_spec__1_spec__3___redArg___closed__2);
v___x_118_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_118_, 0, v___x_116_);
lean_ctor_set(v___x_118_, 1, v___x_117_);
v___x_119_ = l_Lean_MessageData_ofSyntax(v_after_110_);
v___x_120_ = l_Lean_indentD(v___x_119_);
v_msgData_121_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_msgData_121_, 0, v___x_118_);
lean_ctor_set(v_msgData_121_, 1, v___x_120_);
v___x_122_ = l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_CheckTactic_elabCheckTactic_spec__1_spec__1_spec__3_spec__7(v_msgData_121_, v_macroStack_100_);
v___x_123_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_123_, 0, v___x_122_);
return v___x_123_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_CheckTactic_elabCheckTactic_spec__1_spec__1_spec__3___redArg___boxed(lean_object* v_msgData_127_, lean_object* v_macroStack_128_, lean_object* v___y_129_, lean_object* v___y_130_){
_start:
{
lean_object* v_res_131_; 
v_res_131_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_CheckTactic_elabCheckTactic_spec__1_spec__1_spec__3___redArg(v_msgData_127_, v_macroStack_128_, v___y_129_);
lean_dec_ref(v___y_129_);
return v_res_131_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_CheckTactic_elabCheckTactic_spec__1_spec__1___redArg(lean_object* v_msg_132_, lean_object* v___y_133_, lean_object* v___y_134_, lean_object* v___y_135_, lean_object* v___y_136_, lean_object* v___y_137_, lean_object* v___y_138_){
_start:
{
lean_object* v_ref_140_; lean_object* v_macroStack_141_; lean_object* v___x_142_; lean_object* v___x_143_; lean_object* v_a_144_; lean_object* v___x_145_; lean_object* v_a_146_; lean_object* v___x_148_; uint8_t v_isShared_149_; uint8_t v_isSharedCheck_154_; 
v_ref_140_ = lean_ctor_get(v___y_137_, 2);
v_macroStack_141_ = lean_ctor_get(v___y_133_, 1);
v___x_142_ = l_Lean_Elab_getBetterRef(v_ref_140_, v_macroStack_141_);
v___x_143_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_CheckTactic_elabCheckTactic_spec__1_spec__1_spec__2(v_msg_132_, v___y_135_, v___y_136_, v___y_137_, v___y_138_);
v_a_144_ = lean_ctor_get(v___x_143_, 0);
lean_inc(v_a_144_);
lean_dec_ref(v___x_143_);
lean_inc(v_macroStack_141_);
v___x_145_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_CheckTactic_elabCheckTactic_spec__1_spec__1_spec__3___redArg(v_a_144_, v_macroStack_141_, v___y_137_);
v_a_146_ = lean_ctor_get(v___x_145_, 0);
v_isSharedCheck_154_ = !lean_is_exclusive(v___x_145_);
if (v_isSharedCheck_154_ == 0)
{
v___x_148_ = v___x_145_;
v_isShared_149_ = v_isSharedCheck_154_;
goto v_resetjp_147_;
}
else
{
lean_inc(v_a_146_);
lean_dec(v___x_145_);
v___x_148_ = lean_box(0);
v_isShared_149_ = v_isSharedCheck_154_;
goto v_resetjp_147_;
}
v_resetjp_147_:
{
lean_object* v___x_150_; lean_object* v___x_152_; 
v___x_150_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_150_, 0, v___x_142_);
lean_ctor_set(v___x_150_, 1, v_a_146_);
if (v_isShared_149_ == 0)
{
lean_ctor_set_tag(v___x_148_, 1);
lean_ctor_set(v___x_148_, 0, v___x_150_);
v___x_152_ = v___x_148_;
goto v_reusejp_151_;
}
else
{
lean_object* v_reuseFailAlloc_153_; 
v_reuseFailAlloc_153_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_153_, 0, v___x_150_);
v___x_152_ = v_reuseFailAlloc_153_;
goto v_reusejp_151_;
}
v_reusejp_151_:
{
return v___x_152_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_CheckTactic_elabCheckTactic_spec__1_spec__1___redArg___boxed(lean_object* v_msg_155_, lean_object* v___y_156_, lean_object* v___y_157_, lean_object* v___y_158_, lean_object* v___y_159_, lean_object* v___y_160_, lean_object* v___y_161_, lean_object* v___y_162_){
_start:
{
lean_object* v_res_163_; 
v_res_163_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_CheckTactic_elabCheckTactic_spec__1_spec__1___redArg(v_msg_155_, v___y_156_, v___y_157_, v___y_158_, v___y_159_, v___y_160_, v___y_161_);
lean_dec(v___y_161_);
lean_dec_ref(v___y_160_);
lean_dec(v___y_159_);
lean_dec_ref(v___y_158_);
lean_dec(v___y_157_);
lean_dec_ref(v___y_156_);
return v_res_163_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_CheckTactic_elabCheckTactic_spec__1___redArg(lean_object* v_ref_164_, lean_object* v_msg_165_, lean_object* v___y_166_, lean_object* v___y_167_, lean_object* v___y_168_, lean_object* v___y_169_, lean_object* v___y_170_, lean_object* v___y_171_){
_start:
{
lean_object* v_toCold_173_; lean_object* v_currRecDepth_174_; lean_object* v_ref_175_; uint8_t v_diag_176_; uint8_t v_suppressElabErrors_177_; lean_object* v_ref_178_; lean_object* v___x_179_; lean_object* v___x_180_; 
v_toCold_173_ = lean_ctor_get(v___y_170_, 0);
v_currRecDepth_174_ = lean_ctor_get(v___y_170_, 1);
v_ref_175_ = lean_ctor_get(v___y_170_, 2);
v_diag_176_ = lean_ctor_get_uint8(v___y_170_, sizeof(void*)*3);
v_suppressElabErrors_177_ = lean_ctor_get_uint8(v___y_170_, sizeof(void*)*3 + 1);
v_ref_178_ = l_Lean_replaceRef(v_ref_164_, v_ref_175_);
lean_inc(v_currRecDepth_174_);
lean_inc_ref(v_toCold_173_);
v___x_179_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_179_, 0, v_toCold_173_);
lean_ctor_set(v___x_179_, 1, v_currRecDepth_174_);
lean_ctor_set(v___x_179_, 2, v_ref_178_);
lean_ctor_set_uint8(v___x_179_, sizeof(void*)*3, v_diag_176_);
lean_ctor_set_uint8(v___x_179_, sizeof(void*)*3 + 1, v_suppressElabErrors_177_);
v___x_180_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_CheckTactic_elabCheckTactic_spec__1_spec__1___redArg(v_msg_165_, v___y_166_, v___y_167_, v___y_168_, v___y_169_, v___x_179_, v___y_171_);
lean_dec_ref_known(v___x_179_, 3);
return v___x_180_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_CheckTactic_elabCheckTactic_spec__1___redArg___boxed(lean_object* v_ref_181_, lean_object* v_msg_182_, lean_object* v___y_183_, lean_object* v___y_184_, lean_object* v___y_185_, lean_object* v___y_186_, lean_object* v___y_187_, lean_object* v___y_188_, lean_object* v___y_189_){
_start:
{
lean_object* v_res_190_; 
v_res_190_ = l_Lean_throwErrorAt___at___00Lean_Elab_CheckTactic_elabCheckTactic_spec__1___redArg(v_ref_181_, v_msg_182_, v___y_183_, v___y_184_, v___y_185_, v___y_186_, v___y_187_, v___y_188_);
lean_dec(v___y_188_);
lean_dec_ref(v___y_187_);
lean_dec(v___y_186_);
lean_dec_ref(v___y_185_);
lean_dec(v___y_184_);
lean_dec_ref(v___y_183_);
lean_dec(v_ref_181_);
return v_res_190_;
}
}
static lean_object* _init_l_Lean_Elab_CheckTactic_elabCheckTactic___lam__1___closed__0(void){
_start:
{
lean_object* v___x_191_; lean_object* v___x_192_; 
v___x_191_ = lean_box(0);
v___x_192_ = l_unsafeCast___redArg(v___x_191_);
return v___x_192_;
}
}
static lean_object* _init_l_Lean_Elab_CheckTactic_elabCheckTactic___lam__1___closed__3(void){
_start:
{
lean_object* v___x_196_; lean_object* v___x_197_; 
v___x_196_ = ((lean_object*)(l_Lean_Elab_CheckTactic_elabCheckTactic___lam__1___closed__2));
v___x_197_ = l_Lean_stringToMessageData(v___x_196_);
return v___x_197_;
}
}
static lean_object* _init_l_Lean_Elab_CheckTactic_elabCheckTactic___lam__1___closed__5(void){
_start:
{
lean_object* v___x_199_; lean_object* v___x_200_; 
v___x_199_ = ((lean_object*)(l_Lean_Elab_CheckTactic_elabCheckTactic___lam__1___closed__4));
v___x_200_ = l_Lean_stringToMessageData(v___x_199_);
return v___x_200_;
}
}
static lean_object* _init_l_Lean_Elab_CheckTactic_elabCheckTactic___lam__1___closed__7(void){
_start:
{
lean_object* v___x_202_; lean_object* v___x_203_; 
v___x_202_ = ((lean_object*)(l_Lean_Elab_CheckTactic_elabCheckTactic___lam__1___closed__6));
v___x_203_ = l_Lean_stringToMessageData(v___x_202_);
return v___x_203_;
}
}
static lean_object* _init_l_Lean_Elab_CheckTactic_elabCheckTactic___lam__1___closed__9(void){
_start:
{
lean_object* v___x_205_; lean_object* v___x_206_; 
v___x_205_ = ((lean_object*)(l_Lean_Elab_CheckTactic_elabCheckTactic___lam__1___closed__8));
v___x_206_ = l_Lean_stringToMessageData(v___x_205_);
return v___x_206_;
}
}
static lean_object* _init_l_Lean_Elab_CheckTactic_elabCheckTactic___lam__1___closed__11(void){
_start:
{
lean_object* v___x_208_; lean_object* v___x_209_; 
v___x_208_ = ((lean_object*)(l_Lean_Elab_CheckTactic_elabCheckTactic___lam__1___closed__10));
v___x_209_ = l_Lean_stringToMessageData(v___x_208_);
return v___x_209_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_CheckTactic_elabCheckTactic___lam__1(lean_object* v___x_210_, uint8_t v___x_211_, lean_object* v___x_212_, lean_object* v___f_213_, lean_object* v___x_214_, lean_object* v___x_215_, lean_object* v_stx_216_, lean_object* v___vars_217_, lean_object* v___y_218_, lean_object* v___y_219_, lean_object* v___y_220_, lean_object* v___y_221_, lean_object* v___y_222_, lean_object* v___y_223_){
_start:
{
lean_object* v___x_228_; lean_object* v___x_229_; lean_object* v___x_230_; lean_object* v___x_231_; uint8_t v___x_232_; lean_object* v___x_233_; 
v___x_228_ = lean_box(0);
v___x_229_ = lean_box(v___x_211_);
v___x_230_ = lean_box(v___x_211_);
v___x_231_ = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabTerm___boxed), 11, 4);
lean_closure_set(v___x_231_, 0, v___x_210_);
lean_closure_set(v___x_231_, 1, v___x_228_);
lean_closure_set(v___x_231_, 2, v___x_229_);
lean_closure_set(v___x_231_, 3, v___x_230_);
v___x_232_ = 1;
v___x_233_ = l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_withSynthesizeImp(lean_box(0), v___x_231_, v___x_232_, v___y_218_, v___y_219_, v___y_220_, v___y_221_, v___y_222_, v___y_223_);
if (lean_obj_tag(v___x_233_) == 0)
{
lean_object* v_a_234_; lean_object* v___x_235_; 
v_a_234_ = lean_ctor_get(v___x_233_, 0);
lean_inc_n(v_a_234_, 2);
lean_dec_ref_known(v___x_233_, 1);
lean_inc(v___y_223_);
lean_inc_ref(v___y_222_);
lean_inc(v___y_221_);
lean_inc_ref(v___y_220_);
v___x_235_ = lean_infer_type(v_a_234_, v___y_220_, v___y_221_, v___y_222_, v___y_223_);
if (lean_obj_tag(v___x_235_) == 0)
{
lean_object* v_a_236_; lean_object* v___x_237_; 
v_a_236_ = lean_ctor_get(v___x_235_, 0);
lean_inc_n(v_a_236_, 2);
lean_dec_ref_known(v___x_235_, 1);
v___x_237_ = l_Lean_Meta_CheckTactic_mkCheckGoalType(v_a_234_, v_a_236_, v___y_220_, v___y_221_, v___y_222_, v___y_223_);
if (lean_obj_tag(v___x_237_) == 0)
{
lean_object* v_a_238_; lean_object* v___x_239_; uint8_t v___x_240_; lean_object* v___x_241_; lean_object* v___x_242_; 
v_a_238_ = lean_ctor_get(v___x_237_, 0);
lean_inc(v_a_238_);
lean_dec_ref_known(v___x_237_, 1);
v___x_239_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_239_, 0, v_a_238_);
v___x_240_ = 0;
v___x_241_ = lean_obj_once(&l_Lean_Elab_CheckTactic_elabCheckTactic___lam__1___closed__0, &l_Lean_Elab_CheckTactic_elabCheckTactic___lam__1___closed__0_once, _init_l_Lean_Elab_CheckTactic_elabCheckTactic___lam__1___closed__0);
v___x_242_ = l_Lean_Meta_mkFreshExprMVar(v___x_239_, v___x_240_, v___x_241_, v___y_220_, v___y_221_, v___y_222_, v___y_223_);
if (lean_obj_tag(v___x_242_) == 0)
{
lean_object* v_a_243_; lean_object* v___x_244_; lean_object* v___x_245_; 
v_a_243_ = lean_ctor_get(v___x_242_, 0);
lean_inc(v_a_243_);
lean_dec_ref_known(v___x_242_, 1);
v___x_244_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_244_, 0, v_a_236_);
v___x_245_ = l_Lean_Elab_Term_elabTerm(v___x_212_, v___x_244_, v___x_211_, v___x_211_, v___y_218_, v___y_219_, v___y_220_, v___y_221_, v___y_222_, v___y_223_);
if (lean_obj_tag(v___x_245_) == 0)
{
lean_object* v_a_246_; lean_object* v___x_247_; lean_object* v___x_248_; lean_object* v___x_249_; uint8_t v___x_250_; lean_object* v___x_251_; lean_object* v___x_252_; lean_object* v___x_253_; lean_object* v___x_254_; 
v_a_246_ = lean_ctor_get(v___x_245_, 0);
lean_inc(v_a_246_);
lean_dec_ref_known(v___x_245_, 1);
v___x_247_ = l_Lean_Expr_mvarId_x21(v_a_243_);
lean_dec(v_a_243_);
v___x_248_ = lean_box(0);
v___x_249_ = lean_box(1);
v___x_250_ = 0;
v___x_251_ = ((lean_object*)(l_Lean_Elab_CheckTactic_elabCheckTactic___lam__1___closed__1));
v___x_252_ = lean_alloc_ctor(0, 8, 11);
lean_ctor_set(v___x_252_, 0, v___x_228_);
lean_ctor_set(v___x_252_, 1, v___x_248_);
lean_ctor_set(v___x_252_, 2, v___x_228_);
lean_ctor_set(v___x_252_, 3, v___f_213_);
lean_ctor_set(v___x_252_, 4, v___x_249_);
lean_ctor_set(v___x_252_, 5, v___x_249_);
lean_ctor_set(v___x_252_, 6, v___x_228_);
lean_ctor_set(v___x_252_, 7, v___x_251_);
lean_ctor_set_uint8(v___x_252_, sizeof(void*)*8, v___x_211_);
lean_ctor_set_uint8(v___x_252_, sizeof(void*)*8 + 1, v___x_211_);
lean_ctor_set_uint8(v___x_252_, sizeof(void*)*8 + 2, v___x_211_);
lean_ctor_set_uint8(v___x_252_, sizeof(void*)*8 + 3, v___x_211_);
lean_ctor_set_uint8(v___x_252_, sizeof(void*)*8 + 4, v___x_250_);
lean_ctor_set_uint8(v___x_252_, sizeof(void*)*8 + 5, v___x_250_);
lean_ctor_set_uint8(v___x_252_, sizeof(void*)*8 + 6, v___x_250_);
lean_ctor_set_uint8(v___x_252_, sizeof(void*)*8 + 7, v___x_250_);
lean_ctor_set_uint8(v___x_252_, sizeof(void*)*8 + 8, v___x_211_);
lean_ctor_set_uint8(v___x_252_, sizeof(void*)*8 + 9, v___x_250_);
lean_ctor_set_uint8(v___x_252_, sizeof(void*)*8 + 10, v___x_211_);
v___x_253_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v___x_253_, 0, v___x_214_);
lean_ctor_set(v___x_253_, 1, v___x_249_);
lean_ctor_set(v___x_253_, 2, v___x_248_);
lean_ctor_set(v___x_253_, 3, v___x_248_);
lean_ctor_set(v___x_253_, 4, v___x_248_);
lean_ctor_set(v___x_253_, 5, v___x_249_);
lean_ctor_set(v___x_253_, 6, v___x_248_);
lean_inc(v___x_215_);
v___x_254_ = l_Lean_Elab_runTactic(v___x_247_, v___x_215_, v___x_252_, v___x_253_, v___y_220_, v___y_221_, v___y_222_, v___y_223_);
if (lean_obj_tag(v___x_254_) == 0)
{
lean_object* v_a_255_; lean_object* v_fst_256_; lean_object* v___x_258_; uint8_t v_isShared_259_; uint8_t v_isSharedCheck_382_; 
v_a_255_ = lean_ctor_get(v___x_254_, 0);
lean_inc(v_a_255_);
lean_dec_ref_known(v___x_254_, 1);
v_fst_256_ = lean_ctor_get(v_a_255_, 0);
v_isSharedCheck_382_ = !lean_is_exclusive(v_a_255_);
if (v_isSharedCheck_382_ == 0)
{
lean_object* v_unused_383_; 
v_unused_383_ = lean_ctor_get(v_a_255_, 1);
lean_dec(v_unused_383_);
v___x_258_ = v_a_255_;
v_isShared_259_ = v_isSharedCheck_382_;
goto v_resetjp_257_;
}
else
{
lean_inc(v_fst_256_);
lean_dec(v_a_255_);
v___x_258_ = lean_box(0);
v_isShared_259_ = v_isSharedCheck_382_;
goto v_resetjp_257_;
}
v_resetjp_257_:
{
if (lean_obj_tag(v_fst_256_) == 0)
{
lean_object* v___x_260_; lean_object* v___x_261_; lean_object* v___x_263_; 
v___x_260_ = l_Lean_MessageData_ofSyntax(v___x_215_);
v___x_261_ = lean_obj_once(&l_Lean_Elab_CheckTactic_elabCheckTactic___lam__1___closed__3, &l_Lean_Elab_CheckTactic_elabCheckTactic___lam__1___closed__3_once, _init_l_Lean_Elab_CheckTactic_elabCheckTactic___lam__1___closed__3);
if (v_isShared_259_ == 0)
{
lean_ctor_set_tag(v___x_258_, 7);
lean_ctor_set(v___x_258_, 1, v___x_261_);
lean_ctor_set(v___x_258_, 0, v___x_260_);
v___x_263_ = v___x_258_;
goto v_reusejp_262_;
}
else
{
lean_object* v_reuseFailAlloc_269_; 
v_reuseFailAlloc_269_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_269_, 0, v___x_260_);
lean_ctor_set(v_reuseFailAlloc_269_, 1, v___x_261_);
v___x_263_ = v_reuseFailAlloc_269_;
goto v_reusejp_262_;
}
v_reusejp_262_:
{
lean_object* v___x_264_; lean_object* v___x_265_; lean_object* v___x_266_; lean_object* v___x_267_; lean_object* v___x_268_; 
v___x_264_ = l_Lean_indentExpr(v_a_246_);
v___x_265_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_265_, 0, v___x_263_);
lean_ctor_set(v___x_265_, 1, v___x_264_);
v___x_266_ = lean_obj_once(&l_Lean_Elab_CheckTactic_elabCheckTactic___lam__1___closed__5, &l_Lean_Elab_CheckTactic_elabCheckTactic___lam__1___closed__5_once, _init_l_Lean_Elab_CheckTactic_elabCheckTactic___lam__1___closed__5);
v___x_267_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_267_, 0, v___x_265_);
lean_ctor_set(v___x_267_, 1, v___x_266_);
v___x_268_ = l_Lean_throwErrorAt___at___00Lean_Elab_CheckTactic_elabCheckTactic_spec__1___redArg(v_stx_216_, v___x_267_, v___y_218_, v___y_219_, v___y_220_, v___y_221_, v___y_222_, v___y_223_);
return v___x_268_;
}
}
else
{
lean_object* v_tail_270_; 
v_tail_270_ = lean_ctor_get(v_fst_256_, 1);
if (lean_obj_tag(v_tail_270_) == 0)
{
lean_object* v_head_271_; lean_object* v___x_273_; uint8_t v_isShared_274_; uint8_t v_isSharedCheck_362_; 
lean_del_object(v___x_258_);
lean_dec(v___x_215_);
v_head_271_ = lean_ctor_get(v_fst_256_, 0);
v_isSharedCheck_362_ = !lean_is_exclusive(v_fst_256_);
if (v_isSharedCheck_362_ == 0)
{
lean_object* v_unused_363_; 
v_unused_363_ = lean_ctor_get(v_fst_256_, 1);
lean_dec(v_unused_363_);
v___x_273_ = v_fst_256_;
v_isShared_274_ = v_isSharedCheck_362_;
goto v_resetjp_272_;
}
else
{
lean_inc(v_head_271_);
lean_dec(v_fst_256_);
v___x_273_ = lean_box(0);
v_isShared_274_ = v_isSharedCheck_362_;
goto v_resetjp_272_;
}
v_resetjp_272_:
{
lean_object* v___x_275_; 
v___x_275_ = l_Lean_MVarId_getType(v_head_271_, v___y_220_, v___y_221_, v___y_222_, v___y_223_);
if (lean_obj_tag(v___x_275_) == 0)
{
lean_object* v_a_276_; lean_object* v___x_277_; 
v_a_276_ = lean_ctor_get(v___x_275_, 0);
lean_inc(v_a_276_);
lean_dec_ref_known(v___x_275_, 1);
v___x_277_ = l_Lean_Meta_CheckTactic_matchCheckGoalType(v_stx_216_, v_a_276_, v___y_220_, v___y_221_, v___y_222_, v___y_223_);
if (lean_obj_tag(v___x_277_) == 0)
{
lean_object* v_a_278_; lean_object* v_fst_279_; lean_object* v___x_281_; uint8_t v_isShared_282_; uint8_t v_isSharedCheck_344_; 
v_a_278_ = lean_ctor_get(v___x_277_, 0);
lean_inc(v_a_278_);
lean_dec_ref_known(v___x_277_, 1);
v_fst_279_ = lean_ctor_get(v_a_278_, 0);
v_isSharedCheck_344_ = !lean_is_exclusive(v_a_278_);
if (v_isSharedCheck_344_ == 0)
{
lean_object* v_unused_345_; 
v_unused_345_ = lean_ctor_get(v_a_278_, 1);
lean_dec(v_unused_345_);
v___x_281_ = v_a_278_;
v_isShared_282_ = v_isSharedCheck_344_;
goto v_resetjp_280_;
}
else
{
lean_inc(v_fst_279_);
lean_dec(v_a_278_);
v___x_281_ = lean_box(0);
v_isShared_282_ = v_isSharedCheck_344_;
goto v_resetjp_280_;
}
v_resetjp_280_:
{
lean_object* v___y_284_; lean_object* v___x_325_; uint8_t v_transparency_326_; uint8_t v___x_327_; uint8_t v___x_328_; 
v___x_325_ = l_Lean_Meta_Context_config(v___y_220_);
v_transparency_326_ = lean_ctor_get_uint8(v___x_325_, 9);
lean_dec_ref(v___x_325_);
v___x_327_ = 2;
v___x_328_ = l_Lean_Meta_instBEqTransparencyMode_beq(v_transparency_326_, v___x_327_);
if (v___x_328_ == 0)
{
lean_object* v_keyedConfig_329_; uint8_t v_trackZetaDelta_330_; lean_object* v_zetaDeltaSet_331_; lean_object* v_lctx_332_; lean_object* v_localInstances_333_; lean_object* v_defEqCtx_x3f_334_; lean_object* v_synthPendingDepth_335_; lean_object* v_customCanUnfoldPredicate_x3f_336_; uint8_t v_univApprox_337_; uint8_t v_inTypeClassResolution_338_; uint8_t v_cacheInferType_339_; lean_object* v___x_340_; lean_object* v___x_341_; lean_object* v___x_342_; 
v_keyedConfig_329_ = lean_ctor_get(v___y_220_, 0);
v_trackZetaDelta_330_ = lean_ctor_get_uint8(v___y_220_, sizeof(void*)*7);
v_zetaDeltaSet_331_ = lean_ctor_get(v___y_220_, 1);
v_lctx_332_ = lean_ctor_get(v___y_220_, 2);
v_localInstances_333_ = lean_ctor_get(v___y_220_, 3);
v_defEqCtx_x3f_334_ = lean_ctor_get(v___y_220_, 4);
v_synthPendingDepth_335_ = lean_ctor_get(v___y_220_, 5);
v_customCanUnfoldPredicate_x3f_336_ = lean_ctor_get(v___y_220_, 6);
v_univApprox_337_ = lean_ctor_get_uint8(v___y_220_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_338_ = lean_ctor_get_uint8(v___y_220_, sizeof(void*)*7 + 2);
v_cacheInferType_339_ = lean_ctor_get_uint8(v___y_220_, sizeof(void*)*7 + 3);
lean_inc_ref(v_keyedConfig_329_);
v___x_340_ = l_Lean_Meta_ConfigWithKey_setTransparency(v___x_327_, v_keyedConfig_329_);
lean_inc(v_customCanUnfoldPredicate_x3f_336_);
lean_inc(v_synthPendingDepth_335_);
lean_inc(v_defEqCtx_x3f_334_);
lean_inc_ref(v_localInstances_333_);
lean_inc_ref(v_lctx_332_);
lean_inc(v_zetaDeltaSet_331_);
v___x_341_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_341_, 0, v___x_340_);
lean_ctor_set(v___x_341_, 1, v_zetaDeltaSet_331_);
lean_ctor_set(v___x_341_, 2, v_lctx_332_);
lean_ctor_set(v___x_341_, 3, v_localInstances_333_);
lean_ctor_set(v___x_341_, 4, v_defEqCtx_x3f_334_);
lean_ctor_set(v___x_341_, 5, v_synthPendingDepth_335_);
lean_ctor_set(v___x_341_, 6, v_customCanUnfoldPredicate_x3f_336_);
lean_ctor_set_uint8(v___x_341_, sizeof(void*)*7, v_trackZetaDelta_330_);
lean_ctor_set_uint8(v___x_341_, sizeof(void*)*7 + 1, v_univApprox_337_);
lean_ctor_set_uint8(v___x_341_, sizeof(void*)*7 + 2, v_inTypeClassResolution_338_);
lean_ctor_set_uint8(v___x_341_, sizeof(void*)*7 + 3, v_cacheInferType_339_);
lean_inc(v_a_246_);
lean_inc(v_fst_279_);
v___x_342_ = l_Lean_Meta_isExprDefEq(v_fst_279_, v_a_246_, v___x_341_, v___y_221_, v___y_222_, v___y_223_);
lean_dec_ref_known(v___x_341_, 7);
v___y_284_ = v___x_342_;
goto v___jp_283_;
}
else
{
lean_object* v___x_343_; 
lean_inc(v_a_246_);
lean_inc(v_fst_279_);
v___x_343_ = l_Lean_Meta_isExprDefEq(v_fst_279_, v_a_246_, v___y_220_, v___y_221_, v___y_222_, v___y_223_);
v___y_284_ = v___x_343_;
goto v___jp_283_;
}
v___jp_283_:
{
if (lean_obj_tag(v___y_284_) == 0)
{
lean_object* v_a_285_; uint8_t v___x_286_; 
v_a_285_ = lean_ctor_get(v___y_284_, 0);
lean_inc(v_a_285_);
lean_dec_ref_known(v___y_284_, 1);
v___x_286_ = lean_unbox(v_a_285_);
lean_dec(v_a_285_);
if (v___x_286_ == 0)
{
if (v___x_211_ == 0)
{
lean_del_object(v___x_281_);
lean_dec(v_fst_279_);
lean_del_object(v___x_273_);
lean_dec(v_a_246_);
goto v___jp_225_;
}
else
{
lean_object* v___x_287_; 
v___x_287_ = l_Lean_Meta_addPPExplicitToExposeDiff(v_fst_279_, v_a_246_, v___y_220_, v___y_221_, v___y_222_, v___y_223_);
if (lean_obj_tag(v___x_287_) == 0)
{
lean_object* v_a_288_; lean_object* v_fst_289_; lean_object* v_snd_290_; lean_object* v___x_292_; uint8_t v_isShared_293_; uint8_t v_isSharedCheck_308_; 
v_a_288_ = lean_ctor_get(v___x_287_, 0);
lean_inc(v_a_288_);
lean_dec_ref_known(v___x_287_, 1);
v_fst_289_ = lean_ctor_get(v_a_288_, 0);
v_snd_290_ = lean_ctor_get(v_a_288_, 1);
v_isSharedCheck_308_ = !lean_is_exclusive(v_a_288_);
if (v_isSharedCheck_308_ == 0)
{
v___x_292_ = v_a_288_;
v_isShared_293_ = v_isSharedCheck_308_;
goto v_resetjp_291_;
}
else
{
lean_inc(v_snd_290_);
lean_inc(v_fst_289_);
lean_dec(v_a_288_);
v___x_292_ = lean_box(0);
v_isShared_293_ = v_isSharedCheck_308_;
goto v_resetjp_291_;
}
v_resetjp_291_:
{
lean_object* v___x_294_; lean_object* v___x_295_; lean_object* v___x_297_; 
v___x_294_ = lean_obj_once(&l_Lean_Elab_CheckTactic_elabCheckTactic___lam__1___closed__7, &l_Lean_Elab_CheckTactic_elabCheckTactic___lam__1___closed__7_once, _init_l_Lean_Elab_CheckTactic_elabCheckTactic___lam__1___closed__7);
v___x_295_ = l_Lean_indentExpr(v_fst_289_);
if (v_isShared_293_ == 0)
{
lean_ctor_set_tag(v___x_292_, 7);
lean_ctor_set(v___x_292_, 1, v___x_295_);
lean_ctor_set(v___x_292_, 0, v___x_294_);
v___x_297_ = v___x_292_;
goto v_reusejp_296_;
}
else
{
lean_object* v_reuseFailAlloc_307_; 
v_reuseFailAlloc_307_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_307_, 0, v___x_294_);
lean_ctor_set(v_reuseFailAlloc_307_, 1, v___x_295_);
v___x_297_ = v_reuseFailAlloc_307_;
goto v_reusejp_296_;
}
v_reusejp_296_:
{
lean_object* v___x_298_; lean_object* v___x_300_; 
v___x_298_ = lean_obj_once(&l_Lean_Elab_CheckTactic_elabCheckTactic___lam__1___closed__9, &l_Lean_Elab_CheckTactic_elabCheckTactic___lam__1___closed__9_once, _init_l_Lean_Elab_CheckTactic_elabCheckTactic___lam__1___closed__9);
if (v_isShared_282_ == 0)
{
lean_ctor_set_tag(v___x_281_, 7);
lean_ctor_set(v___x_281_, 1, v___x_298_);
lean_ctor_set(v___x_281_, 0, v___x_297_);
v___x_300_ = v___x_281_;
goto v_reusejp_299_;
}
else
{
lean_object* v_reuseFailAlloc_306_; 
v_reuseFailAlloc_306_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_306_, 0, v___x_297_);
lean_ctor_set(v_reuseFailAlloc_306_, 1, v___x_298_);
v___x_300_ = v_reuseFailAlloc_306_;
goto v_reusejp_299_;
}
v_reusejp_299_:
{
lean_object* v___x_301_; lean_object* v___x_303_; 
v___x_301_ = l_Lean_indentExpr(v_snd_290_);
if (v_isShared_274_ == 0)
{
lean_ctor_set_tag(v___x_273_, 7);
lean_ctor_set(v___x_273_, 1, v___x_301_);
lean_ctor_set(v___x_273_, 0, v___x_300_);
v___x_303_ = v___x_273_;
goto v_reusejp_302_;
}
else
{
lean_object* v_reuseFailAlloc_305_; 
v_reuseFailAlloc_305_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_305_, 0, v___x_300_);
lean_ctor_set(v_reuseFailAlloc_305_, 1, v___x_301_);
v___x_303_ = v_reuseFailAlloc_305_;
goto v_reusejp_302_;
}
v_reusejp_302_:
{
lean_object* v___x_304_; 
v___x_304_ = l_Lean_throwErrorAt___at___00Lean_Elab_CheckTactic_elabCheckTactic_spec__1___redArg(v_stx_216_, v___x_303_, v___y_218_, v___y_219_, v___y_220_, v___y_221_, v___y_222_, v___y_223_);
return v___x_304_;
}
}
}
}
}
else
{
lean_object* v_a_309_; lean_object* v___x_311_; uint8_t v_isShared_312_; uint8_t v_isSharedCheck_316_; 
lean_del_object(v___x_281_);
lean_del_object(v___x_273_);
v_a_309_ = lean_ctor_get(v___x_287_, 0);
v_isSharedCheck_316_ = !lean_is_exclusive(v___x_287_);
if (v_isSharedCheck_316_ == 0)
{
v___x_311_ = v___x_287_;
v_isShared_312_ = v_isSharedCheck_316_;
goto v_resetjp_310_;
}
else
{
lean_inc(v_a_309_);
lean_dec(v___x_287_);
v___x_311_ = lean_box(0);
v_isShared_312_ = v_isSharedCheck_316_;
goto v_resetjp_310_;
}
v_resetjp_310_:
{
lean_object* v___x_314_; 
if (v_isShared_312_ == 0)
{
v___x_314_ = v___x_311_;
goto v_reusejp_313_;
}
else
{
lean_object* v_reuseFailAlloc_315_; 
v_reuseFailAlloc_315_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_315_, 0, v_a_309_);
v___x_314_ = v_reuseFailAlloc_315_;
goto v_reusejp_313_;
}
v_reusejp_313_:
{
return v___x_314_;
}
}
}
}
}
else
{
lean_del_object(v___x_281_);
lean_dec(v_fst_279_);
lean_del_object(v___x_273_);
lean_dec(v_a_246_);
goto v___jp_225_;
}
}
else
{
lean_object* v_a_317_; lean_object* v___x_319_; uint8_t v_isShared_320_; uint8_t v_isSharedCheck_324_; 
lean_del_object(v___x_281_);
lean_dec(v_fst_279_);
lean_del_object(v___x_273_);
lean_dec(v_a_246_);
v_a_317_ = lean_ctor_get(v___y_284_, 0);
v_isSharedCheck_324_ = !lean_is_exclusive(v___y_284_);
if (v_isSharedCheck_324_ == 0)
{
v___x_319_ = v___y_284_;
v_isShared_320_ = v_isSharedCheck_324_;
goto v_resetjp_318_;
}
else
{
lean_inc(v_a_317_);
lean_dec(v___y_284_);
v___x_319_ = lean_box(0);
v_isShared_320_ = v_isSharedCheck_324_;
goto v_resetjp_318_;
}
v_resetjp_318_:
{
lean_object* v___x_322_; 
if (v_isShared_320_ == 0)
{
v___x_322_ = v___x_319_;
goto v_reusejp_321_;
}
else
{
lean_object* v_reuseFailAlloc_323_; 
v_reuseFailAlloc_323_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_323_, 0, v_a_317_);
v___x_322_ = v_reuseFailAlloc_323_;
goto v_reusejp_321_;
}
v_reusejp_321_:
{
return v___x_322_;
}
}
}
}
}
}
else
{
lean_object* v_a_346_; lean_object* v___x_348_; uint8_t v_isShared_349_; uint8_t v_isSharedCheck_353_; 
lean_del_object(v___x_273_);
lean_dec(v_a_246_);
v_a_346_ = lean_ctor_get(v___x_277_, 0);
v_isSharedCheck_353_ = !lean_is_exclusive(v___x_277_);
if (v_isSharedCheck_353_ == 0)
{
v___x_348_ = v___x_277_;
v_isShared_349_ = v_isSharedCheck_353_;
goto v_resetjp_347_;
}
else
{
lean_inc(v_a_346_);
lean_dec(v___x_277_);
v___x_348_ = lean_box(0);
v_isShared_349_ = v_isSharedCheck_353_;
goto v_resetjp_347_;
}
v_resetjp_347_:
{
lean_object* v___x_351_; 
if (v_isShared_349_ == 0)
{
v___x_351_ = v___x_348_;
goto v_reusejp_350_;
}
else
{
lean_object* v_reuseFailAlloc_352_; 
v_reuseFailAlloc_352_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_352_, 0, v_a_346_);
v___x_351_ = v_reuseFailAlloc_352_;
goto v_reusejp_350_;
}
v_reusejp_350_:
{
return v___x_351_;
}
}
}
}
else
{
lean_object* v_a_354_; lean_object* v___x_356_; uint8_t v_isShared_357_; uint8_t v_isSharedCheck_361_; 
lean_del_object(v___x_273_);
lean_dec(v_a_246_);
v_a_354_ = lean_ctor_get(v___x_275_, 0);
v_isSharedCheck_361_ = !lean_is_exclusive(v___x_275_);
if (v_isSharedCheck_361_ == 0)
{
v___x_356_ = v___x_275_;
v_isShared_357_ = v_isSharedCheck_361_;
goto v_resetjp_355_;
}
else
{
lean_inc(v_a_354_);
lean_dec(v___x_275_);
v___x_356_ = lean_box(0);
v_isShared_357_ = v_isSharedCheck_361_;
goto v_resetjp_355_;
}
v_resetjp_355_:
{
lean_object* v___x_359_; 
if (v_isShared_357_ == 0)
{
v___x_359_ = v___x_356_;
goto v_reusejp_358_;
}
else
{
lean_object* v_reuseFailAlloc_360_; 
v_reuseFailAlloc_360_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_360_, 0, v_a_354_);
v___x_359_ = v_reuseFailAlloc_360_;
goto v_reusejp_358_;
}
v_reusejp_358_:
{
return v___x_359_;
}
}
}
}
}
else
{
lean_object* v___x_365_; uint8_t v_isShared_366_; uint8_t v_isSharedCheck_379_; 
v_isSharedCheck_379_ = !lean_is_exclusive(v_fst_256_);
if (v_isSharedCheck_379_ == 0)
{
lean_object* v_unused_380_; lean_object* v_unused_381_; 
v_unused_380_ = lean_ctor_get(v_fst_256_, 1);
lean_dec(v_unused_380_);
v_unused_381_ = lean_ctor_get(v_fst_256_, 0);
lean_dec(v_unused_381_);
v___x_365_ = v_fst_256_;
v_isShared_366_ = v_isSharedCheck_379_;
goto v_resetjp_364_;
}
else
{
lean_dec(v_fst_256_);
v___x_365_ = lean_box(0);
v_isShared_366_ = v_isSharedCheck_379_;
goto v_resetjp_364_;
}
v_resetjp_364_:
{
lean_object* v___x_367_; lean_object* v___x_368_; lean_object* v___x_370_; 
v___x_367_ = l_Lean_MessageData_ofSyntax(v___x_215_);
v___x_368_ = lean_obj_once(&l_Lean_Elab_CheckTactic_elabCheckTactic___lam__1___closed__11, &l_Lean_Elab_CheckTactic_elabCheckTactic___lam__1___closed__11_once, _init_l_Lean_Elab_CheckTactic_elabCheckTactic___lam__1___closed__11);
if (v_isShared_366_ == 0)
{
lean_ctor_set_tag(v___x_365_, 7);
lean_ctor_set(v___x_365_, 1, v___x_368_);
lean_ctor_set(v___x_365_, 0, v___x_367_);
v___x_370_ = v___x_365_;
goto v_reusejp_369_;
}
else
{
lean_object* v_reuseFailAlloc_378_; 
v_reuseFailAlloc_378_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_378_, 0, v___x_367_);
lean_ctor_set(v_reuseFailAlloc_378_, 1, v___x_368_);
v___x_370_ = v_reuseFailAlloc_378_;
goto v_reusejp_369_;
}
v_reusejp_369_:
{
lean_object* v___x_371_; lean_object* v___x_373_; 
v___x_371_ = l_Lean_indentExpr(v_a_246_);
if (v_isShared_259_ == 0)
{
lean_ctor_set_tag(v___x_258_, 7);
lean_ctor_set(v___x_258_, 1, v___x_371_);
lean_ctor_set(v___x_258_, 0, v___x_370_);
v___x_373_ = v___x_258_;
goto v_reusejp_372_;
}
else
{
lean_object* v_reuseFailAlloc_377_; 
v_reuseFailAlloc_377_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_377_, 0, v___x_370_);
lean_ctor_set(v_reuseFailAlloc_377_, 1, v___x_371_);
v___x_373_ = v_reuseFailAlloc_377_;
goto v_reusejp_372_;
}
v_reusejp_372_:
{
lean_object* v___x_374_; lean_object* v___x_375_; lean_object* v___x_376_; 
v___x_374_ = lean_obj_once(&l_Lean_Elab_CheckTactic_elabCheckTactic___lam__1___closed__5, &l_Lean_Elab_CheckTactic_elabCheckTactic___lam__1___closed__5_once, _init_l_Lean_Elab_CheckTactic_elabCheckTactic___lam__1___closed__5);
v___x_375_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_375_, 0, v___x_373_);
lean_ctor_set(v___x_375_, 1, v___x_374_);
v___x_376_ = l_Lean_throwErrorAt___at___00Lean_Elab_CheckTactic_elabCheckTactic_spec__1___redArg(v_stx_216_, v___x_375_, v___y_218_, v___y_219_, v___y_220_, v___y_221_, v___y_222_, v___y_223_);
return v___x_376_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_384_; lean_object* v___x_386_; uint8_t v_isShared_387_; uint8_t v_isSharedCheck_391_; 
lean_dec(v_a_246_);
lean_dec(v___x_215_);
v_a_384_ = lean_ctor_get(v___x_254_, 0);
v_isSharedCheck_391_ = !lean_is_exclusive(v___x_254_);
if (v_isSharedCheck_391_ == 0)
{
v___x_386_ = v___x_254_;
v_isShared_387_ = v_isSharedCheck_391_;
goto v_resetjp_385_;
}
else
{
lean_inc(v_a_384_);
lean_dec(v___x_254_);
v___x_386_ = lean_box(0);
v_isShared_387_ = v_isSharedCheck_391_;
goto v_resetjp_385_;
}
v_resetjp_385_:
{
lean_object* v___x_389_; 
if (v_isShared_387_ == 0)
{
v___x_389_ = v___x_386_;
goto v_reusejp_388_;
}
else
{
lean_object* v_reuseFailAlloc_390_; 
v_reuseFailAlloc_390_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_390_, 0, v_a_384_);
v___x_389_ = v_reuseFailAlloc_390_;
goto v_reusejp_388_;
}
v_reusejp_388_:
{
return v___x_389_;
}
}
}
}
else
{
lean_object* v_a_392_; lean_object* v___x_394_; uint8_t v_isShared_395_; uint8_t v_isSharedCheck_399_; 
lean_dec(v_a_243_);
lean_dec(v___x_215_);
lean_dec(v___x_214_);
lean_dec_ref(v___f_213_);
v_a_392_ = lean_ctor_get(v___x_245_, 0);
v_isSharedCheck_399_ = !lean_is_exclusive(v___x_245_);
if (v_isSharedCheck_399_ == 0)
{
v___x_394_ = v___x_245_;
v_isShared_395_ = v_isSharedCheck_399_;
goto v_resetjp_393_;
}
else
{
lean_inc(v_a_392_);
lean_dec(v___x_245_);
v___x_394_ = lean_box(0);
v_isShared_395_ = v_isSharedCheck_399_;
goto v_resetjp_393_;
}
v_resetjp_393_:
{
lean_object* v___x_397_; 
if (v_isShared_395_ == 0)
{
v___x_397_ = v___x_394_;
goto v_reusejp_396_;
}
else
{
lean_object* v_reuseFailAlloc_398_; 
v_reuseFailAlloc_398_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_398_, 0, v_a_392_);
v___x_397_ = v_reuseFailAlloc_398_;
goto v_reusejp_396_;
}
v_reusejp_396_:
{
return v___x_397_;
}
}
}
}
else
{
lean_object* v_a_400_; lean_object* v___x_402_; uint8_t v_isShared_403_; uint8_t v_isSharedCheck_407_; 
lean_dec(v_a_236_);
lean_dec(v___x_215_);
lean_dec(v___x_214_);
lean_dec_ref(v___f_213_);
lean_dec(v___x_212_);
v_a_400_ = lean_ctor_get(v___x_242_, 0);
v_isSharedCheck_407_ = !lean_is_exclusive(v___x_242_);
if (v_isSharedCheck_407_ == 0)
{
v___x_402_ = v___x_242_;
v_isShared_403_ = v_isSharedCheck_407_;
goto v_resetjp_401_;
}
else
{
lean_inc(v_a_400_);
lean_dec(v___x_242_);
v___x_402_ = lean_box(0);
v_isShared_403_ = v_isSharedCheck_407_;
goto v_resetjp_401_;
}
v_resetjp_401_:
{
lean_object* v___x_405_; 
if (v_isShared_403_ == 0)
{
v___x_405_ = v___x_402_;
goto v_reusejp_404_;
}
else
{
lean_object* v_reuseFailAlloc_406_; 
v_reuseFailAlloc_406_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_406_, 0, v_a_400_);
v___x_405_ = v_reuseFailAlloc_406_;
goto v_reusejp_404_;
}
v_reusejp_404_:
{
return v___x_405_;
}
}
}
}
else
{
lean_object* v_a_408_; lean_object* v___x_410_; uint8_t v_isShared_411_; uint8_t v_isSharedCheck_415_; 
lean_dec(v_a_236_);
lean_dec(v___x_215_);
lean_dec(v___x_214_);
lean_dec_ref(v___f_213_);
lean_dec(v___x_212_);
v_a_408_ = lean_ctor_get(v___x_237_, 0);
v_isSharedCheck_415_ = !lean_is_exclusive(v___x_237_);
if (v_isSharedCheck_415_ == 0)
{
v___x_410_ = v___x_237_;
v_isShared_411_ = v_isSharedCheck_415_;
goto v_resetjp_409_;
}
else
{
lean_inc(v_a_408_);
lean_dec(v___x_237_);
v___x_410_ = lean_box(0);
v_isShared_411_ = v_isSharedCheck_415_;
goto v_resetjp_409_;
}
v_resetjp_409_:
{
lean_object* v___x_413_; 
if (v_isShared_411_ == 0)
{
v___x_413_ = v___x_410_;
goto v_reusejp_412_;
}
else
{
lean_object* v_reuseFailAlloc_414_; 
v_reuseFailAlloc_414_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_414_, 0, v_a_408_);
v___x_413_ = v_reuseFailAlloc_414_;
goto v_reusejp_412_;
}
v_reusejp_412_:
{
return v___x_413_;
}
}
}
}
else
{
lean_object* v_a_416_; lean_object* v___x_418_; uint8_t v_isShared_419_; uint8_t v_isSharedCheck_423_; 
lean_dec(v_a_234_);
lean_dec(v___x_215_);
lean_dec(v___x_214_);
lean_dec_ref(v___f_213_);
lean_dec(v___x_212_);
v_a_416_ = lean_ctor_get(v___x_235_, 0);
v_isSharedCheck_423_ = !lean_is_exclusive(v___x_235_);
if (v_isSharedCheck_423_ == 0)
{
v___x_418_ = v___x_235_;
v_isShared_419_ = v_isSharedCheck_423_;
goto v_resetjp_417_;
}
else
{
lean_inc(v_a_416_);
lean_dec(v___x_235_);
v___x_418_ = lean_box(0);
v_isShared_419_ = v_isSharedCheck_423_;
goto v_resetjp_417_;
}
v_resetjp_417_:
{
lean_object* v___x_421_; 
if (v_isShared_419_ == 0)
{
v___x_421_ = v___x_418_;
goto v_reusejp_420_;
}
else
{
lean_object* v_reuseFailAlloc_422_; 
v_reuseFailAlloc_422_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_422_, 0, v_a_416_);
v___x_421_ = v_reuseFailAlloc_422_;
goto v_reusejp_420_;
}
v_reusejp_420_:
{
return v___x_421_;
}
}
}
}
else
{
lean_object* v_a_424_; lean_object* v___x_426_; uint8_t v_isShared_427_; uint8_t v_isSharedCheck_431_; 
lean_dec(v___x_215_);
lean_dec(v___x_214_);
lean_dec_ref(v___f_213_);
lean_dec(v___x_212_);
v_a_424_ = lean_ctor_get(v___x_233_, 0);
v_isSharedCheck_431_ = !lean_is_exclusive(v___x_233_);
if (v_isSharedCheck_431_ == 0)
{
v___x_426_ = v___x_233_;
v_isShared_427_ = v_isSharedCheck_431_;
goto v_resetjp_425_;
}
else
{
lean_inc(v_a_424_);
lean_dec(v___x_233_);
v___x_426_ = lean_box(0);
v_isShared_427_ = v_isSharedCheck_431_;
goto v_resetjp_425_;
}
v_resetjp_425_:
{
lean_object* v___x_429_; 
if (v_isShared_427_ == 0)
{
v___x_429_ = v___x_426_;
goto v_reusejp_428_;
}
else
{
lean_object* v_reuseFailAlloc_430_; 
v_reuseFailAlloc_430_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_430_, 0, v_a_424_);
v___x_429_ = v_reuseFailAlloc_430_;
goto v_reusejp_428_;
}
v_reusejp_428_:
{
return v___x_429_;
}
}
}
v___jp_225_:
{
lean_object* v___x_226_; lean_object* v___x_227_; 
v___x_226_ = lean_box(0);
v___x_227_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_227_, 0, v___x_226_);
return v___x_227_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_CheckTactic_elabCheckTactic___lam__1___boxed(lean_object* v___x_432_, lean_object* v___x_433_, lean_object* v___x_434_, lean_object* v___f_435_, lean_object* v___x_436_, lean_object* v___x_437_, lean_object* v_stx_438_, lean_object* v___vars_439_, lean_object* v___y_440_, lean_object* v___y_441_, lean_object* v___y_442_, lean_object* v___y_443_, lean_object* v___y_444_, lean_object* v___y_445_, lean_object* v___y_446_){
_start:
{
uint8_t v___x_9570__boxed_447_; lean_object* v_res_448_; 
v___x_9570__boxed_447_ = lean_unbox(v___x_433_);
v_res_448_ = l_Lean_Elab_CheckTactic_elabCheckTactic___lam__1(v___x_432_, v___x_9570__boxed_447_, v___x_434_, v___f_435_, v___x_436_, v___x_437_, v_stx_438_, v___vars_439_, v___y_440_, v___y_441_, v___y_442_, v___y_443_, v___y_444_, v___y_445_);
lean_dec(v___y_445_);
lean_dec_ref(v___y_444_);
lean_dec(v___y_443_);
lean_dec_ref(v___y_442_);
lean_dec(v___y_441_);
lean_dec_ref(v___y_440_);
lean_dec_ref(v___vars_439_);
lean_dec(v_stx_438_);
return v_res_448_;
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_CheckTactic_elabCheckTactic_spec__2_spec__3___redArg(lean_object* v_env_449_, lean_object* v___y_450_){
_start:
{
lean_object* v___x_452_; lean_object* v_messages_453_; lean_object* v_scopes_454_; lean_object* v_usedQuotCtxts_455_; lean_object* v_nextMacroScope_456_; lean_object* v_maxRecDepth_457_; lean_object* v_ngen_458_; lean_object* v_auxDeclNGen_459_; lean_object* v_infoState_460_; lean_object* v_traceState_461_; lean_object* v_snapshotTasks_462_; lean_object* v_prevLinterStates_463_; lean_object* v_codeQualityEntryTasks_464_; lean_object* v___x_466_; uint8_t v_isShared_467_; uint8_t v_isSharedCheck_474_; 
v___x_452_ = lean_st_ref_take(v___y_450_);
v_messages_453_ = lean_ctor_get(v___x_452_, 1);
v_scopes_454_ = lean_ctor_get(v___x_452_, 2);
v_usedQuotCtxts_455_ = lean_ctor_get(v___x_452_, 3);
v_nextMacroScope_456_ = lean_ctor_get(v___x_452_, 4);
v_maxRecDepth_457_ = lean_ctor_get(v___x_452_, 5);
v_ngen_458_ = lean_ctor_get(v___x_452_, 6);
v_auxDeclNGen_459_ = lean_ctor_get(v___x_452_, 7);
v_infoState_460_ = lean_ctor_get(v___x_452_, 8);
v_traceState_461_ = lean_ctor_get(v___x_452_, 9);
v_snapshotTasks_462_ = lean_ctor_get(v___x_452_, 10);
v_prevLinterStates_463_ = lean_ctor_get(v___x_452_, 11);
v_codeQualityEntryTasks_464_ = lean_ctor_get(v___x_452_, 12);
v_isSharedCheck_474_ = !lean_is_exclusive(v___x_452_);
if (v_isSharedCheck_474_ == 0)
{
lean_object* v_unused_475_; 
v_unused_475_ = lean_ctor_get(v___x_452_, 0);
lean_dec(v_unused_475_);
v___x_466_ = v___x_452_;
v_isShared_467_ = v_isSharedCheck_474_;
goto v_resetjp_465_;
}
else
{
lean_inc(v_codeQualityEntryTasks_464_);
lean_inc(v_prevLinterStates_463_);
lean_inc(v_snapshotTasks_462_);
lean_inc(v_traceState_461_);
lean_inc(v_infoState_460_);
lean_inc(v_auxDeclNGen_459_);
lean_inc(v_ngen_458_);
lean_inc(v_maxRecDepth_457_);
lean_inc(v_nextMacroScope_456_);
lean_inc(v_usedQuotCtxts_455_);
lean_inc(v_scopes_454_);
lean_inc(v_messages_453_);
lean_dec(v___x_452_);
v___x_466_ = lean_box(0);
v_isShared_467_ = v_isSharedCheck_474_;
goto v_resetjp_465_;
}
v_resetjp_465_:
{
lean_object* v___x_468_; lean_object* v___x_470_; 
v___x_468_ = lean_box(0);
if (v_isShared_467_ == 0)
{
lean_ctor_set(v___x_466_, 0, v_env_449_);
v___x_470_ = v___x_466_;
goto v_reusejp_469_;
}
else
{
lean_object* v_reuseFailAlloc_473_; 
v_reuseFailAlloc_473_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_473_, 0, v_env_449_);
lean_ctor_set(v_reuseFailAlloc_473_, 1, v_messages_453_);
lean_ctor_set(v_reuseFailAlloc_473_, 2, v_scopes_454_);
lean_ctor_set(v_reuseFailAlloc_473_, 3, v_usedQuotCtxts_455_);
lean_ctor_set(v_reuseFailAlloc_473_, 4, v_nextMacroScope_456_);
lean_ctor_set(v_reuseFailAlloc_473_, 5, v_maxRecDepth_457_);
lean_ctor_set(v_reuseFailAlloc_473_, 6, v_ngen_458_);
lean_ctor_set(v_reuseFailAlloc_473_, 7, v_auxDeclNGen_459_);
lean_ctor_set(v_reuseFailAlloc_473_, 8, v_infoState_460_);
lean_ctor_set(v_reuseFailAlloc_473_, 9, v_traceState_461_);
lean_ctor_set(v_reuseFailAlloc_473_, 10, v_snapshotTasks_462_);
lean_ctor_set(v_reuseFailAlloc_473_, 11, v_prevLinterStates_463_);
lean_ctor_set(v_reuseFailAlloc_473_, 12, v_codeQualityEntryTasks_464_);
v___x_470_ = v_reuseFailAlloc_473_;
goto v_reusejp_469_;
}
v_reusejp_469_:
{
lean_object* v___x_471_; lean_object* v___x_472_; 
v___x_471_ = lean_st_ref_put(v___y_450_, v___x_470_);
v___x_472_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_472_, 0, v___x_468_);
return v___x_472_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_CheckTactic_elabCheckTactic_spec__2_spec__3___redArg___boxed(lean_object* v_env_476_, lean_object* v___y_477_, lean_object* v___y_478_){
_start:
{
lean_object* v_res_479_; 
v_res_479_ = l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_CheckTactic_elabCheckTactic_spec__2_spec__3___redArg(v_env_476_, v___y_477_);
lean_dec(v___y_477_);
return v_res_479_;
}
}
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00Lean_Elab_CheckTactic_elabCheckTactic_spec__2___redArg(lean_object* v_env_480_, lean_object* v_x_481_, lean_object* v___y_482_, lean_object* v___y_483_){
_start:
{
lean_object* v___x_485_; lean_object* v_env_486_; lean_object* v_a_488_; lean_object* v___x_498_; lean_object* v___x_499_; 
v___x_485_ = lean_st_ref_get(v___y_483_);
v_env_486_ = lean_ctor_get(v___x_485_, 0);
lean_inc_ref(v_env_486_);
lean_dec(v___x_485_);
v___x_498_ = l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_CheckTactic_elabCheckTactic_spec__2_spec__3___redArg(v_env_480_, v___y_483_);
lean_dec_ref(v___x_498_);
lean_inc(v___y_483_);
lean_inc_ref(v___y_482_);
v___x_499_ = lean_apply_3(v_x_481_, v___y_482_, v___y_483_, lean_box(0));
if (lean_obj_tag(v___x_499_) == 0)
{
lean_object* v_a_500_; lean_object* v___x_501_; lean_object* v___x_503_; uint8_t v_isShared_504_; uint8_t v_isSharedCheck_508_; 
v_a_500_ = lean_ctor_get(v___x_499_, 0);
lean_inc(v_a_500_);
lean_dec_ref_known(v___x_499_, 1);
v___x_501_ = l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_CheckTactic_elabCheckTactic_spec__2_spec__3___redArg(v_env_486_, v___y_483_);
v_isSharedCheck_508_ = !lean_is_exclusive(v___x_501_);
if (v_isSharedCheck_508_ == 0)
{
lean_object* v_unused_509_; 
v_unused_509_ = lean_ctor_get(v___x_501_, 0);
lean_dec(v_unused_509_);
v___x_503_ = v___x_501_;
v_isShared_504_ = v_isSharedCheck_508_;
goto v_resetjp_502_;
}
else
{
lean_dec(v___x_501_);
v___x_503_ = lean_box(0);
v_isShared_504_ = v_isSharedCheck_508_;
goto v_resetjp_502_;
}
v_resetjp_502_:
{
lean_object* v___x_506_; 
if (v_isShared_504_ == 0)
{
lean_ctor_set(v___x_503_, 0, v_a_500_);
v___x_506_ = v___x_503_;
goto v_reusejp_505_;
}
else
{
lean_object* v_reuseFailAlloc_507_; 
v_reuseFailAlloc_507_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_507_, 0, v_a_500_);
v___x_506_ = v_reuseFailAlloc_507_;
goto v_reusejp_505_;
}
v_reusejp_505_:
{
return v___x_506_;
}
}
}
else
{
lean_object* v_a_510_; 
v_a_510_ = lean_ctor_get(v___x_499_, 0);
lean_inc(v_a_510_);
lean_dec_ref_known(v___x_499_, 1);
v_a_488_ = v_a_510_;
goto v___jp_487_;
}
v___jp_487_:
{
lean_object* v___x_489_; lean_object* v___x_491_; uint8_t v_isShared_492_; uint8_t v_isSharedCheck_496_; 
v___x_489_ = l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_CheckTactic_elabCheckTactic_spec__2_spec__3___redArg(v_env_486_, v___y_483_);
v_isSharedCheck_496_ = !lean_is_exclusive(v___x_489_);
if (v_isSharedCheck_496_ == 0)
{
lean_object* v_unused_497_; 
v_unused_497_ = lean_ctor_get(v___x_489_, 0);
lean_dec(v_unused_497_);
v___x_491_ = v___x_489_;
v_isShared_492_ = v_isSharedCheck_496_;
goto v_resetjp_490_;
}
else
{
lean_dec(v___x_489_);
v___x_491_ = lean_box(0);
v_isShared_492_ = v_isSharedCheck_496_;
goto v_resetjp_490_;
}
v_resetjp_490_:
{
lean_object* v___x_494_; 
if (v_isShared_492_ == 0)
{
lean_ctor_set_tag(v___x_491_, 1);
lean_ctor_set(v___x_491_, 0, v_a_488_);
v___x_494_ = v___x_491_;
goto v_reusejp_493_;
}
else
{
lean_object* v_reuseFailAlloc_495_; 
v_reuseFailAlloc_495_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_495_, 0, v_a_488_);
v___x_494_ = v_reuseFailAlloc_495_;
goto v_reusejp_493_;
}
v_reusejp_493_:
{
return v___x_494_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00Lean_Elab_CheckTactic_elabCheckTactic_spec__2___redArg___boxed(lean_object* v_env_511_, lean_object* v_x_512_, lean_object* v___y_513_, lean_object* v___y_514_, lean_object* v___y_515_){
_start:
{
lean_object* v_res_516_; 
v_res_516_ = l_Lean_withEnv___at___00Lean_Elab_CheckTactic_elabCheckTactic_spec__2___redArg(v_env_511_, v_x_512_, v___y_513_, v___y_514_);
lean_dec(v___y_514_);
lean_dec_ref(v___y_513_);
return v_res_516_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_CheckTactic_elabCheckTactic(lean_object* v_stx_525_, lean_object* v_a_526_, lean_object* v_a_527_){
_start:
{
lean_object* v___x_529_; uint8_t v___x_530_; 
v___x_529_ = ((lean_object*)(l_Lean_Elab_CheckTactic_elabCheckTactic___closed__3));
lean_inc(v_stx_525_);
v___x_530_ = l_Lean_Syntax_isOfKind(v_stx_525_, v___x_529_);
if (v___x_530_ == 0)
{
lean_object* v___x_531_; 
lean_dec(v_stx_525_);
v___x_531_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_CheckTactic_elabCheckTactic_spec__0___redArg();
return v___x_531_;
}
else
{
lean_object* v___f_532_; lean_object* v___x_533_; lean_object* v___x_534_; lean_object* v___x_535_; lean_object* v___x_536_; lean_object* v___x_537_; lean_object* v___x_538_; lean_object* v___x_539_; lean_object* v___x_540_; lean_object* v___f_541_; lean_object* v___x_542_; lean_object* v___x_543_; lean_object* v_env_544_; lean_object* v___x_545_; lean_object* v___x_546_; 
v___f_532_ = ((lean_object*)(l_Lean_Elab_CheckTactic_elabCheckTactic___closed__4));
v___x_533_ = lean_unsigned_to_nat(1u);
v___x_534_ = l_Lean_Syntax_getArg(v_stx_525_, v___x_533_);
v___x_535_ = lean_unsigned_to_nat(3u);
v___x_536_ = l_Lean_Syntax_getArg(v_stx_525_, v___x_535_);
v___x_537_ = lean_unsigned_to_nat(5u);
v___x_538_ = l_Lean_Syntax_getArg(v_stx_525_, v___x_537_);
v___x_539_ = lean_box(0);
v___x_540_ = lean_box(v___x_530_);
v___f_541_ = lean_alloc_closure((void*)(l_Lean_Elab_CheckTactic_elabCheckTactic___lam__1___boxed), 15, 7);
lean_closure_set(v___f_541_, 0, v___x_534_);
lean_closure_set(v___f_541_, 1, v___x_540_);
lean_closure_set(v___f_541_, 2, v___x_536_);
lean_closure_set(v___f_541_, 3, v___f_532_);
lean_closure_set(v___f_541_, 4, v___x_539_);
lean_closure_set(v___f_541_, 5, v___x_538_);
lean_closure_set(v___f_541_, 6, v_stx_525_);
v___x_542_ = lean_alloc_closure((void*)(l_Lean_Elab_Command_runTermElabM___boxed), 5, 2);
lean_closure_set(v___x_542_, 0, lean_box(0));
lean_closure_set(v___x_542_, 1, v___f_541_);
v___x_543_ = lean_st_ref_get(v_a_527_);
v_env_544_ = lean_ctor_get(v___x_543_, 0);
lean_inc_ref(v_env_544_);
lean_dec(v___x_543_);
v___x_545_ = l_Lean_Environment_unlockAsync(v_env_544_);
v___x_546_ = l_Lean_withEnv___at___00Lean_Elab_CheckTactic_elabCheckTactic_spec__2___redArg(v___x_545_, v___x_542_, v_a_526_, v_a_527_);
return v___x_546_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_CheckTactic_elabCheckTactic___boxed(lean_object* v_stx_547_, lean_object* v_a_548_, lean_object* v_a_549_, lean_object* v_a_550_){
_start:
{
lean_object* v_res_551_; 
v_res_551_ = l_Lean_Elab_CheckTactic_elabCheckTactic(v_stx_547_, v_a_548_, v_a_549_);
lean_dec(v_a_549_);
lean_dec_ref(v_a_548_);
return v_res_551_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_CheckTactic_elabCheckTactic_spec__1(lean_object* v_00_u03b1_552_, lean_object* v_ref_553_, lean_object* v_msg_554_, lean_object* v___y_555_, lean_object* v___y_556_, lean_object* v___y_557_, lean_object* v___y_558_, lean_object* v___y_559_, lean_object* v___y_560_){
_start:
{
lean_object* v___x_562_; 
v___x_562_ = l_Lean_throwErrorAt___at___00Lean_Elab_CheckTactic_elabCheckTactic_spec__1___redArg(v_ref_553_, v_msg_554_, v___y_555_, v___y_556_, v___y_557_, v___y_558_, v___y_559_, v___y_560_);
return v___x_562_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_CheckTactic_elabCheckTactic_spec__1___boxed(lean_object* v_00_u03b1_563_, lean_object* v_ref_564_, lean_object* v_msg_565_, lean_object* v___y_566_, lean_object* v___y_567_, lean_object* v___y_568_, lean_object* v___y_569_, lean_object* v___y_570_, lean_object* v___y_571_, lean_object* v___y_572_){
_start:
{
lean_object* v_res_573_; 
v_res_573_ = l_Lean_throwErrorAt___at___00Lean_Elab_CheckTactic_elabCheckTactic_spec__1(v_00_u03b1_563_, v_ref_564_, v_msg_565_, v___y_566_, v___y_567_, v___y_568_, v___y_569_, v___y_570_, v___y_571_);
lean_dec(v___y_571_);
lean_dec_ref(v___y_570_);
lean_dec(v___y_569_);
lean_dec_ref(v___y_568_);
lean_dec(v___y_567_);
lean_dec_ref(v___y_566_);
lean_dec(v_ref_564_);
return v_res_573_;
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_CheckTactic_elabCheckTactic_spec__2_spec__3(lean_object* v_env_574_, lean_object* v___y_575_, lean_object* v___y_576_){
_start:
{
lean_object* v___x_578_; 
v___x_578_ = l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_CheckTactic_elabCheckTactic_spec__2_spec__3___redArg(v_env_574_, v___y_576_);
return v___x_578_;
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_CheckTactic_elabCheckTactic_spec__2_spec__3___boxed(lean_object* v_env_579_, lean_object* v___y_580_, lean_object* v___y_581_, lean_object* v___y_582_){
_start:
{
lean_object* v_res_583_; 
v_res_583_ = l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_CheckTactic_elabCheckTactic_spec__2_spec__3(v_env_579_, v___y_580_, v___y_581_);
lean_dec(v___y_581_);
lean_dec_ref(v___y_580_);
return v_res_583_;
}
}
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00Lean_Elab_CheckTactic_elabCheckTactic_spec__2(lean_object* v_00_u03b1_584_, lean_object* v_env_585_, lean_object* v_x_586_, lean_object* v___y_587_, lean_object* v___y_588_){
_start:
{
lean_object* v___x_590_; 
v___x_590_ = l_Lean_withEnv___at___00Lean_Elab_CheckTactic_elabCheckTactic_spec__2___redArg(v_env_585_, v_x_586_, v___y_587_, v___y_588_);
return v___x_590_;
}
}
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00Lean_Elab_CheckTactic_elabCheckTactic_spec__2___boxed(lean_object* v_00_u03b1_591_, lean_object* v_env_592_, lean_object* v_x_593_, lean_object* v___y_594_, lean_object* v___y_595_, lean_object* v___y_596_){
_start:
{
lean_object* v_res_597_; 
v_res_597_ = l_Lean_withEnv___at___00Lean_Elab_CheckTactic_elabCheckTactic_spec__2(v_00_u03b1_591_, v_env_592_, v_x_593_, v___y_594_, v___y_595_);
lean_dec(v___y_595_);
lean_dec_ref(v___y_594_);
return v_res_597_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_CheckTactic_elabCheckTactic_spec__1_spec__1(lean_object* v_00_u03b1_598_, lean_object* v_msg_599_, lean_object* v___y_600_, lean_object* v___y_601_, lean_object* v___y_602_, lean_object* v___y_603_, lean_object* v___y_604_, lean_object* v___y_605_){
_start:
{
lean_object* v___x_607_; 
v___x_607_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_CheckTactic_elabCheckTactic_spec__1_spec__1___redArg(v_msg_599_, v___y_600_, v___y_601_, v___y_602_, v___y_603_, v___y_604_, v___y_605_);
return v___x_607_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_CheckTactic_elabCheckTactic_spec__1_spec__1___boxed(lean_object* v_00_u03b1_608_, lean_object* v_msg_609_, lean_object* v___y_610_, lean_object* v___y_611_, lean_object* v___y_612_, lean_object* v___y_613_, lean_object* v___y_614_, lean_object* v___y_615_, lean_object* v___y_616_){
_start:
{
lean_object* v_res_617_; 
v_res_617_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_CheckTactic_elabCheckTactic_spec__1_spec__1(v_00_u03b1_608_, v_msg_609_, v___y_610_, v___y_611_, v___y_612_, v___y_613_, v___y_614_, v___y_615_);
lean_dec(v___y_615_);
lean_dec_ref(v___y_614_);
lean_dec(v___y_613_);
lean_dec_ref(v___y_612_);
lean_dec(v___y_611_);
lean_dec_ref(v___y_610_);
return v_res_617_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_CheckTactic_elabCheckTactic_spec__1_spec__1_spec__3(lean_object* v_msgData_618_, lean_object* v_macroStack_619_, lean_object* v___y_620_, lean_object* v___y_621_, lean_object* v___y_622_, lean_object* v___y_623_, lean_object* v___y_624_, lean_object* v___y_625_){
_start:
{
lean_object* v___x_627_; 
v___x_627_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_CheckTactic_elabCheckTactic_spec__1_spec__1_spec__3___redArg(v_msgData_618_, v_macroStack_619_, v___y_624_);
return v___x_627_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_CheckTactic_elabCheckTactic_spec__1_spec__1_spec__3___boxed(lean_object* v_msgData_628_, lean_object* v_macroStack_629_, lean_object* v___y_630_, lean_object* v___y_631_, lean_object* v___y_632_, lean_object* v___y_633_, lean_object* v___y_634_, lean_object* v___y_635_, lean_object* v___y_636_){
_start:
{
lean_object* v_res_637_; 
v_res_637_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_CheckTactic_elabCheckTactic_spec__1_spec__1_spec__3(v_msgData_628_, v_macroStack_629_, v___y_630_, v___y_631_, v___y_632_, v___y_633_, v___y_634_, v___y_635_);
lean_dec(v___y_635_);
lean_dec_ref(v___y_634_);
lean_dec(v___y_633_);
lean_dec_ref(v___y_632_);
lean_dec(v___y_631_);
lean_dec_ref(v___y_630_);
return v_res_637_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_elabCheckTactic___regBuiltin_Lean_Elab_CheckTactic_elabCheckTactic__1(){
_start:
{
lean_object* v___x_647_; lean_object* v___x_648_; lean_object* v___x_649_; lean_object* v___x_650_; lean_object* v___x_651_; 
v___x_647_ = l_Lean_Elab_Command_commandElabAttribute;
v___x_648_ = ((lean_object*)(l_Lean_Elab_CheckTactic_elabCheckTactic___closed__3));
v___x_649_ = ((lean_object*)(l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_elabCheckTactic___regBuiltin_Lean_Elab_CheckTactic_elabCheckTactic__1___closed__3));
v___x_650_ = lean_alloc_closure((void*)(l_Lean_Elab_CheckTactic_elabCheckTactic___boxed), 4, 0);
v___x_651_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_647_, v___x_648_, v___x_649_, v___x_650_);
return v___x_651_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_elabCheckTactic___regBuiltin_Lean_Elab_CheckTactic_elabCheckTactic__1___boxed(lean_object* v_a_652_){
_start:
{
lean_object* v_res_653_; 
v_res_653_ = l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_elabCheckTactic___regBuiltin_Lean_Elab_CheckTactic_elabCheckTactic__1();
return v_res_653_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_elabCheckTactic___regBuiltin_Lean_Elab_CheckTactic_elabCheckTactic_declRange__3(){
_start:
{
lean_object* v___x_680_; lean_object* v___x_681_; lean_object* v___x_682_; 
v___x_680_ = ((lean_object*)(l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_elabCheckTactic___regBuiltin_Lean_Elab_CheckTactic_elabCheckTactic__1___closed__3));
v___x_681_ = ((lean_object*)(l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_elabCheckTactic___regBuiltin_Lean_Elab_CheckTactic_elabCheckTactic_declRange__3___closed__6));
v___x_682_ = l_Lean_addBuiltinDeclarationRanges(v___x_680_, v___x_681_);
return v___x_682_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_elabCheckTactic___regBuiltin_Lean_Elab_CheckTactic_elabCheckTactic_declRange__3___boxed(lean_object* v_a_683_){
_start:
{
lean_object* v_res_684_; 
v_res_684_ = l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_elabCheckTactic___regBuiltin_Lean_Elab_CheckTactic_elabCheckTactic_declRange__3();
return v_res_684_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutErrToSorry___at___00Lean_Elab_CheckTactic_elabCheckTacticFailure_spec__1___redArg(lean_object* v_a_685_, lean_object* v___y_686_, lean_object* v___y_687_, lean_object* v___y_688_, lean_object* v___y_689_, lean_object* v___y_690_, lean_object* v___y_691_){
_start:
{
lean_object* v___x_693_; 
v___x_693_ = l_Lean_Elab_Term_withoutErrToSorryImp___redArg(v_a_685_, v___y_686_, v___y_687_, v___y_688_, v___y_689_, v___y_690_, v___y_691_);
return v___x_693_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutErrToSorry___at___00Lean_Elab_CheckTactic_elabCheckTacticFailure_spec__1___redArg___boxed(lean_object* v_a_694_, lean_object* v___y_695_, lean_object* v___y_696_, lean_object* v___y_697_, lean_object* v___y_698_, lean_object* v___y_699_, lean_object* v___y_700_, lean_object* v___y_701_){
_start:
{
lean_object* v_res_702_; 
v_res_702_ = l_Lean_Elab_Term_withoutErrToSorry___at___00Lean_Elab_CheckTactic_elabCheckTacticFailure_spec__1___redArg(v_a_694_, v___y_695_, v___y_696_, v___y_697_, v___y_698_, v___y_699_, v___y_700_);
lean_dec(v___y_700_);
lean_dec_ref(v___y_699_);
lean_dec(v___y_698_);
lean_dec_ref(v___y_697_);
lean_dec(v___y_696_);
lean_dec_ref(v___y_695_);
return v_res_702_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutErrToSorry___at___00Lean_Elab_CheckTactic_elabCheckTacticFailure_spec__1(lean_object* v_00_u03b1_703_, lean_object* v_a_704_, lean_object* v___y_705_, lean_object* v___y_706_, lean_object* v___y_707_, lean_object* v___y_708_, lean_object* v___y_709_, lean_object* v___y_710_){
_start:
{
lean_object* v___x_712_; 
v___x_712_ = l_Lean_Elab_Term_withoutErrToSorryImp___redArg(v_a_704_, v___y_705_, v___y_706_, v___y_707_, v___y_708_, v___y_709_, v___y_710_);
return v___x_712_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutErrToSorry___at___00Lean_Elab_CheckTactic_elabCheckTacticFailure_spec__1___boxed(lean_object* v_00_u03b1_713_, lean_object* v_a_714_, lean_object* v___y_715_, lean_object* v___y_716_, lean_object* v___y_717_, lean_object* v___y_718_, lean_object* v___y_719_, lean_object* v___y_720_, lean_object* v___y_721_){
_start:
{
lean_object* v_res_722_; 
v_res_722_ = l_Lean_Elab_Term_withoutErrToSorry___at___00Lean_Elab_CheckTactic_elabCheckTacticFailure_spec__1(v_00_u03b1_713_, v_a_714_, v___y_715_, v___y_716_, v___y_717_, v___y_718_, v___y_719_, v___y_720_);
lean_dec(v___y_720_);
lean_dec_ref(v___y_719_);
lean_dec(v___y_718_);
lean_dec_ref(v___y_717_);
lean_dec(v___y_716_);
lean_dec_ref(v___y_715_);
return v_res_722_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_CheckTactic_elabCheckTacticFailure___lam__1(lean_object* v___x_723_, lean_object* v___x_724_, lean_object* v___x_725_, lean_object* v___x_726_, lean_object* v___y_727_, lean_object* v___y_728_, lean_object* v___y_729_, lean_object* v___y_730_, lean_object* v___y_731_, lean_object* v___y_732_){
_start:
{
lean_object* v___x_734_; 
v___x_734_ = l_Lean_Elab_runTactic(v___x_723_, v___x_724_, v___x_725_, v___x_726_, v___y_729_, v___y_730_, v___y_731_, v___y_732_);
if (lean_obj_tag(v___x_734_) == 0)
{
lean_object* v_a_735_; lean_object* v___x_737_; uint8_t v_isShared_738_; uint8_t v_isSharedCheck_743_; 
v_a_735_ = lean_ctor_get(v___x_734_, 0);
v_isSharedCheck_743_ = !lean_is_exclusive(v___x_734_);
if (v_isSharedCheck_743_ == 0)
{
v___x_737_ = v___x_734_;
v_isShared_738_ = v_isSharedCheck_743_;
goto v_resetjp_736_;
}
else
{
lean_inc(v_a_735_);
lean_dec(v___x_734_);
v___x_737_ = lean_box(0);
v_isShared_738_ = v_isSharedCheck_743_;
goto v_resetjp_736_;
}
v_resetjp_736_:
{
lean_object* v___x_739_; lean_object* v___x_741_; 
v___x_739_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_739_, 0, v_a_735_);
if (v_isShared_738_ == 0)
{
lean_ctor_set(v___x_737_, 0, v___x_739_);
v___x_741_ = v___x_737_;
goto v_reusejp_740_;
}
else
{
lean_object* v_reuseFailAlloc_742_; 
v_reuseFailAlloc_742_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_742_, 0, v___x_739_);
v___x_741_ = v_reuseFailAlloc_742_;
goto v_reusejp_740_;
}
v_reusejp_740_:
{
return v___x_741_;
}
}
}
else
{
lean_object* v_a_744_; lean_object* v___x_746_; uint8_t v_isShared_747_; uint8_t v_isSharedCheck_751_; 
v_a_744_ = lean_ctor_get(v___x_734_, 0);
v_isSharedCheck_751_ = !lean_is_exclusive(v___x_734_);
if (v_isSharedCheck_751_ == 0)
{
v___x_746_ = v___x_734_;
v_isShared_747_ = v_isSharedCheck_751_;
goto v_resetjp_745_;
}
else
{
lean_inc(v_a_744_);
lean_dec(v___x_734_);
v___x_746_ = lean_box(0);
v_isShared_747_ = v_isSharedCheck_751_;
goto v_resetjp_745_;
}
v_resetjp_745_:
{
lean_object* v___x_749_; 
if (v_isShared_747_ == 0)
{
v___x_749_ = v___x_746_;
goto v_reusejp_748_;
}
else
{
lean_object* v_reuseFailAlloc_750_; 
v_reuseFailAlloc_750_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_750_, 0, v_a_744_);
v___x_749_ = v_reuseFailAlloc_750_;
goto v_reusejp_748_;
}
v_reusejp_748_:
{
return v___x_749_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_CheckTactic_elabCheckTacticFailure___lam__1___boxed(lean_object* v___x_752_, lean_object* v___x_753_, lean_object* v___x_754_, lean_object* v___x_755_, lean_object* v___y_756_, lean_object* v___y_757_, lean_object* v___y_758_, lean_object* v___y_759_, lean_object* v___y_760_, lean_object* v___y_761_, lean_object* v___y_762_){
_start:
{
lean_object* v_res_763_; 
v_res_763_ = l_Lean_Elab_CheckTactic_elabCheckTacticFailure___lam__1(v___x_752_, v___x_753_, v___x_754_, v___x_755_, v___y_756_, v___y_757_, v___y_758_, v___y_759_, v___y_760_, v___y_761_);
lean_dec(v___y_761_);
lean_dec_ref(v___y_760_);
lean_dec(v___y_759_);
lean_dec_ref(v___y_758_);
lean_dec(v___y_757_);
lean_dec_ref(v___y_756_);
return v_res_763_;
}
}
LEAN_EXPORT lean_object* l_List_foldlM___at___00List_foldlM___at___00Lean_Elab_CheckTactic_elabCheckTacticFailure_spec__0_spec__0___redArg(lean_object* v_stx_764_, lean_object* v_x_765_, lean_object* v_x_766_, lean_object* v___y_767_, lean_object* v___y_768_, lean_object* v___y_769_, lean_object* v___y_770_){
_start:
{
if (lean_obj_tag(v_x_766_) == 0)
{
lean_object* v___x_772_; 
v___x_772_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_772_, 0, v_x_765_);
return v___x_772_;
}
else
{
lean_object* v_head_773_; lean_object* v_tail_774_; lean_object* v___x_775_; 
v_head_773_ = lean_ctor_get(v_x_766_, 0);
lean_inc(v_head_773_);
v_tail_774_ = lean_ctor_get(v_x_766_, 1);
lean_inc(v_tail_774_);
lean_dec_ref_known(v_x_766_, 2);
v___x_775_ = l_Lean_MVarId_getType(v_head_773_, v___y_767_, v___y_768_, v___y_769_, v___y_770_);
if (lean_obj_tag(v___x_775_) == 0)
{
lean_object* v_a_776_; lean_object* v___x_777_; 
v_a_776_ = lean_ctor_get(v___x_775_, 0);
lean_inc(v_a_776_);
lean_dec_ref_known(v___x_775_, 1);
v___x_777_ = l_Lean_Meta_CheckTactic_matchCheckGoalType(v_stx_764_, v_a_776_, v___y_767_, v___y_768_, v___y_769_, v___y_770_);
if (lean_obj_tag(v___x_777_) == 0)
{
lean_object* v_a_778_; lean_object* v_fst_779_; lean_object* v___x_781_; uint8_t v_isShared_782_; uint8_t v_isSharedCheck_788_; 
v_a_778_ = lean_ctor_get(v___x_777_, 0);
lean_inc(v_a_778_);
lean_dec_ref_known(v___x_777_, 1);
v_fst_779_ = lean_ctor_get(v_a_778_, 0);
v_isSharedCheck_788_ = !lean_is_exclusive(v_a_778_);
if (v_isSharedCheck_788_ == 0)
{
lean_object* v_unused_789_; 
v_unused_789_ = lean_ctor_get(v_a_778_, 1);
lean_dec(v_unused_789_);
v___x_781_ = v_a_778_;
v_isShared_782_ = v_isSharedCheck_788_;
goto v_resetjp_780_;
}
else
{
lean_inc(v_fst_779_);
lean_dec(v_a_778_);
v___x_781_ = lean_box(0);
v_isShared_782_ = v_isSharedCheck_788_;
goto v_resetjp_780_;
}
v_resetjp_780_:
{
lean_object* v___x_783_; lean_object* v___x_785_; 
v___x_783_ = l_Lean_indentExpr(v_fst_779_);
if (v_isShared_782_ == 0)
{
lean_ctor_set_tag(v___x_781_, 7);
lean_ctor_set(v___x_781_, 1, v___x_783_);
lean_ctor_set(v___x_781_, 0, v_x_765_);
v___x_785_ = v___x_781_;
goto v_reusejp_784_;
}
else
{
lean_object* v_reuseFailAlloc_787_; 
v_reuseFailAlloc_787_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_787_, 0, v_x_765_);
lean_ctor_set(v_reuseFailAlloc_787_, 1, v___x_783_);
v___x_785_ = v_reuseFailAlloc_787_;
goto v_reusejp_784_;
}
v_reusejp_784_:
{
v_x_765_ = v___x_785_;
v_x_766_ = v_tail_774_;
goto _start;
}
}
}
else
{
lean_object* v_a_790_; lean_object* v___x_792_; uint8_t v_isShared_793_; uint8_t v_isSharedCheck_797_; 
lean_dec(v_tail_774_);
lean_dec_ref(v_x_765_);
v_a_790_ = lean_ctor_get(v___x_777_, 0);
v_isSharedCheck_797_ = !lean_is_exclusive(v___x_777_);
if (v_isSharedCheck_797_ == 0)
{
v___x_792_ = v___x_777_;
v_isShared_793_ = v_isSharedCheck_797_;
goto v_resetjp_791_;
}
else
{
lean_inc(v_a_790_);
lean_dec(v___x_777_);
v___x_792_ = lean_box(0);
v_isShared_793_ = v_isSharedCheck_797_;
goto v_resetjp_791_;
}
v_resetjp_791_:
{
lean_object* v___x_795_; 
if (v_isShared_793_ == 0)
{
v___x_795_ = v___x_792_;
goto v_reusejp_794_;
}
else
{
lean_object* v_reuseFailAlloc_796_; 
v_reuseFailAlloc_796_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_796_, 0, v_a_790_);
v___x_795_ = v_reuseFailAlloc_796_;
goto v_reusejp_794_;
}
v_reusejp_794_:
{
return v___x_795_;
}
}
}
}
else
{
lean_object* v_a_798_; lean_object* v___x_800_; uint8_t v_isShared_801_; uint8_t v_isSharedCheck_805_; 
lean_dec(v_tail_774_);
lean_dec_ref(v_x_765_);
v_a_798_ = lean_ctor_get(v___x_775_, 0);
v_isSharedCheck_805_ = !lean_is_exclusive(v___x_775_);
if (v_isSharedCheck_805_ == 0)
{
v___x_800_ = v___x_775_;
v_isShared_801_ = v_isSharedCheck_805_;
goto v_resetjp_799_;
}
else
{
lean_inc(v_a_798_);
lean_dec(v___x_775_);
v___x_800_ = lean_box(0);
v_isShared_801_ = v_isSharedCheck_805_;
goto v_resetjp_799_;
}
v_resetjp_799_:
{
lean_object* v___x_803_; 
if (v_isShared_801_ == 0)
{
v___x_803_ = v___x_800_;
goto v_reusejp_802_;
}
else
{
lean_object* v_reuseFailAlloc_804_; 
v_reuseFailAlloc_804_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_804_, 0, v_a_798_);
v___x_803_ = v_reuseFailAlloc_804_;
goto v_reusejp_802_;
}
v_reusejp_802_:
{
return v___x_803_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldlM___at___00List_foldlM___at___00Lean_Elab_CheckTactic_elabCheckTacticFailure_spec__0_spec__0___redArg___boxed(lean_object* v_stx_806_, lean_object* v_x_807_, lean_object* v_x_808_, lean_object* v___y_809_, lean_object* v___y_810_, lean_object* v___y_811_, lean_object* v___y_812_, lean_object* v___y_813_){
_start:
{
lean_object* v_res_814_; 
v_res_814_ = l_List_foldlM___at___00List_foldlM___at___00Lean_Elab_CheckTactic_elabCheckTacticFailure_spec__0_spec__0___redArg(v_stx_806_, v_x_807_, v_x_808_, v___y_809_, v___y_810_, v___y_811_, v___y_812_);
lean_dec(v___y_812_);
lean_dec_ref(v___y_811_);
lean_dec(v___y_810_);
lean_dec_ref(v___y_809_);
lean_dec(v_stx_806_);
return v_res_814_;
}
}
LEAN_EXPORT lean_object* l_List_foldlM___at___00Lean_Elab_CheckTactic_elabCheckTacticFailure_spec__0(lean_object* v_stx_815_, lean_object* v_x_816_, lean_object* v_x_817_, lean_object* v___y_818_, lean_object* v___y_819_, lean_object* v___y_820_, lean_object* v___y_821_, lean_object* v___y_822_, lean_object* v___y_823_){
_start:
{
if (lean_obj_tag(v_x_817_) == 0)
{
lean_object* v___x_825_; 
v___x_825_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_825_, 0, v_x_816_);
return v___x_825_;
}
else
{
lean_object* v_head_826_; lean_object* v_tail_827_; lean_object* v___x_828_; 
v_head_826_ = lean_ctor_get(v_x_817_, 0);
lean_inc(v_head_826_);
v_tail_827_ = lean_ctor_get(v_x_817_, 1);
lean_inc(v_tail_827_);
lean_dec_ref_known(v_x_817_, 2);
v___x_828_ = l_Lean_MVarId_getType(v_head_826_, v___y_820_, v___y_821_, v___y_822_, v___y_823_);
if (lean_obj_tag(v___x_828_) == 0)
{
lean_object* v_a_829_; lean_object* v___x_830_; 
v_a_829_ = lean_ctor_get(v___x_828_, 0);
lean_inc(v_a_829_);
lean_dec_ref_known(v___x_828_, 1);
v___x_830_ = l_Lean_Meta_CheckTactic_matchCheckGoalType(v_stx_815_, v_a_829_, v___y_820_, v___y_821_, v___y_822_, v___y_823_);
if (lean_obj_tag(v___x_830_) == 0)
{
lean_object* v_a_831_; lean_object* v_fst_832_; lean_object* v___x_834_; uint8_t v_isShared_835_; uint8_t v_isSharedCheck_841_; 
v_a_831_ = lean_ctor_get(v___x_830_, 0);
lean_inc(v_a_831_);
lean_dec_ref_known(v___x_830_, 1);
v_fst_832_ = lean_ctor_get(v_a_831_, 0);
v_isSharedCheck_841_ = !lean_is_exclusive(v_a_831_);
if (v_isSharedCheck_841_ == 0)
{
lean_object* v_unused_842_; 
v_unused_842_ = lean_ctor_get(v_a_831_, 1);
lean_dec(v_unused_842_);
v___x_834_ = v_a_831_;
v_isShared_835_ = v_isSharedCheck_841_;
goto v_resetjp_833_;
}
else
{
lean_inc(v_fst_832_);
lean_dec(v_a_831_);
v___x_834_ = lean_box(0);
v_isShared_835_ = v_isSharedCheck_841_;
goto v_resetjp_833_;
}
v_resetjp_833_:
{
lean_object* v___x_836_; lean_object* v___x_838_; 
v___x_836_ = l_Lean_indentExpr(v_fst_832_);
if (v_isShared_835_ == 0)
{
lean_ctor_set_tag(v___x_834_, 7);
lean_ctor_set(v___x_834_, 1, v___x_836_);
lean_ctor_set(v___x_834_, 0, v_x_816_);
v___x_838_ = v___x_834_;
goto v_reusejp_837_;
}
else
{
lean_object* v_reuseFailAlloc_840_; 
v_reuseFailAlloc_840_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_840_, 0, v_x_816_);
lean_ctor_set(v_reuseFailAlloc_840_, 1, v___x_836_);
v___x_838_ = v_reuseFailAlloc_840_;
goto v_reusejp_837_;
}
v_reusejp_837_:
{
lean_object* v___x_839_; 
v___x_839_ = l_List_foldlM___at___00List_foldlM___at___00Lean_Elab_CheckTactic_elabCheckTacticFailure_spec__0_spec__0___redArg(v_stx_815_, v___x_838_, v_tail_827_, v___y_820_, v___y_821_, v___y_822_, v___y_823_);
return v___x_839_;
}
}
}
else
{
lean_object* v_a_843_; lean_object* v___x_845_; uint8_t v_isShared_846_; uint8_t v_isSharedCheck_850_; 
lean_dec(v_tail_827_);
lean_dec_ref(v_x_816_);
v_a_843_ = lean_ctor_get(v___x_830_, 0);
v_isSharedCheck_850_ = !lean_is_exclusive(v___x_830_);
if (v_isSharedCheck_850_ == 0)
{
v___x_845_ = v___x_830_;
v_isShared_846_ = v_isSharedCheck_850_;
goto v_resetjp_844_;
}
else
{
lean_inc(v_a_843_);
lean_dec(v___x_830_);
v___x_845_ = lean_box(0);
v_isShared_846_ = v_isSharedCheck_850_;
goto v_resetjp_844_;
}
v_resetjp_844_:
{
lean_object* v___x_848_; 
if (v_isShared_846_ == 0)
{
v___x_848_ = v___x_845_;
goto v_reusejp_847_;
}
else
{
lean_object* v_reuseFailAlloc_849_; 
v_reuseFailAlloc_849_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_849_, 0, v_a_843_);
v___x_848_ = v_reuseFailAlloc_849_;
goto v_reusejp_847_;
}
v_reusejp_847_:
{
return v___x_848_;
}
}
}
}
else
{
lean_object* v_a_851_; lean_object* v___x_853_; uint8_t v_isShared_854_; uint8_t v_isSharedCheck_858_; 
lean_dec(v_tail_827_);
lean_dec_ref(v_x_816_);
v_a_851_ = lean_ctor_get(v___x_828_, 0);
v_isSharedCheck_858_ = !lean_is_exclusive(v___x_828_);
if (v_isSharedCheck_858_ == 0)
{
v___x_853_ = v___x_828_;
v_isShared_854_ = v_isSharedCheck_858_;
goto v_resetjp_852_;
}
else
{
lean_inc(v_a_851_);
lean_dec(v___x_828_);
v___x_853_ = lean_box(0);
v_isShared_854_ = v_isSharedCheck_858_;
goto v_resetjp_852_;
}
v_resetjp_852_:
{
lean_object* v___x_856_; 
if (v_isShared_854_ == 0)
{
v___x_856_ = v___x_853_;
goto v_reusejp_855_;
}
else
{
lean_object* v_reuseFailAlloc_857_; 
v_reuseFailAlloc_857_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_857_, 0, v_a_851_);
v___x_856_ = v_reuseFailAlloc_857_;
goto v_reusejp_855_;
}
v_reusejp_855_:
{
return v___x_856_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldlM___at___00Lean_Elab_CheckTactic_elabCheckTacticFailure_spec__0___boxed(lean_object* v_stx_859_, lean_object* v_x_860_, lean_object* v_x_861_, lean_object* v___y_862_, lean_object* v___y_863_, lean_object* v___y_864_, lean_object* v___y_865_, lean_object* v___y_866_, lean_object* v___y_867_, lean_object* v___y_868_){
_start:
{
lean_object* v_res_869_; 
v_res_869_ = l_List_foldlM___at___00Lean_Elab_CheckTactic_elabCheckTacticFailure_spec__0(v_stx_859_, v_x_860_, v_x_861_, v___y_862_, v___y_863_, v___y_864_, v___y_865_, v___y_866_, v___y_867_);
lean_dec(v___y_867_);
lean_dec_ref(v___y_866_);
lean_dec(v___y_865_);
lean_dec_ref(v___y_864_);
lean_dec(v___y_863_);
lean_dec_ref(v___y_862_);
lean_dec(v_stx_859_);
return v_res_869_;
}
}
static lean_object* _init_l_Lean_Elab_CheckTactic_elabCheckTacticFailure___lam__0___closed__1(void){
_start:
{
lean_object* v___x_871_; lean_object* v___x_872_; 
v___x_871_ = ((lean_object*)(l_Lean_Elab_CheckTactic_elabCheckTacticFailure___lam__0___closed__0));
v___x_872_ = l_Lean_stringToMessageData(v___x_871_);
return v___x_872_;
}
}
static lean_object* _init_l_Lean_Elab_CheckTactic_elabCheckTacticFailure___lam__0___closed__3(void){
_start:
{
lean_object* v___x_874_; lean_object* v___x_875_; 
v___x_874_ = ((lean_object*)(l_Lean_Elab_CheckTactic_elabCheckTacticFailure___lam__0___closed__2));
v___x_875_ = l_Lean_stringToMessageData(v___x_874_);
return v___x_875_;
}
}
static lean_object* _init_l_Lean_Elab_CheckTactic_elabCheckTacticFailure___lam__0___closed__5(void){
_start:
{
lean_object* v___x_877_; lean_object* v___x_878_; 
v___x_877_ = ((lean_object*)(l_Lean_Elab_CheckTactic_elabCheckTacticFailure___lam__0___closed__4));
v___x_878_ = l_Lean_stringToMessageData(v___x_877_);
return v___x_878_;
}
}
static lean_object* _init_l_Lean_Elab_CheckTactic_elabCheckTacticFailure___lam__0___closed__7(void){
_start:
{
lean_object* v___x_880_; lean_object* v___x_881_; 
v___x_880_ = ((lean_object*)(l_Lean_Elab_CheckTactic_elabCheckTacticFailure___lam__0___closed__6));
v___x_881_ = l_Lean_stringToMessageData(v___x_880_);
return v___x_881_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_CheckTactic_elabCheckTacticFailure___lam__0(lean_object* v___x_882_, lean_object* v___x_883_, lean_object* v_stx_884_, uint8_t v___x_885_, lean_object* v___f_886_, lean_object* v___x_887_, lean_object* v___vars_888_, lean_object* v___y_889_, lean_object* v___y_890_, lean_object* v___y_891_, lean_object* v___y_892_, lean_object* v___y_893_, lean_object* v___y_894_){
_start:
{
lean_object* v___y_900_; lean_object* v___x_996_; lean_object* v___x_997_; 
v___x_996_ = lean_box(0);
lean_inc(v___x_883_);
v___x_997_ = l_Lean_Elab_Term_elabTerm(v___x_883_, v___x_996_, v___x_885_, v___x_885_, v___y_889_, v___y_890_, v___y_891_, v___y_892_, v___y_893_, v___y_894_);
if (lean_obj_tag(v___x_997_) == 0)
{
lean_object* v_a_998_; lean_object* v___x_999_; 
v_a_998_ = lean_ctor_get(v___x_997_, 0);
lean_inc_n(v_a_998_, 2);
lean_dec_ref_known(v___x_997_, 1);
lean_inc(v___y_894_);
lean_inc_ref(v___y_893_);
lean_inc(v___y_892_);
lean_inc_ref(v___y_891_);
v___x_999_ = lean_infer_type(v_a_998_, v___y_891_, v___y_892_, v___y_893_, v___y_894_);
if (lean_obj_tag(v___x_999_) == 0)
{
lean_object* v_a_1000_; lean_object* v___x_1001_; 
v_a_1000_ = lean_ctor_get(v___x_999_, 0);
lean_inc(v_a_1000_);
lean_dec_ref_known(v___x_999_, 1);
v___x_1001_ = l_Lean_Meta_CheckTactic_mkCheckGoalType(v_a_998_, v_a_1000_, v___y_891_, v___y_892_, v___y_893_, v___y_894_);
if (lean_obj_tag(v___x_1001_) == 0)
{
lean_object* v_a_1002_; lean_object* v___x_1003_; uint8_t v___x_1004_; lean_object* v___x_1005_; lean_object* v___x_1006_; 
v_a_1002_ = lean_ctor_get(v___x_1001_, 0);
lean_inc(v_a_1002_);
lean_dec_ref_known(v___x_1001_, 1);
v___x_1003_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1003_, 0, v_a_1002_);
v___x_1004_ = 0;
v___x_1005_ = lean_obj_once(&l_Lean_Elab_CheckTactic_elabCheckTactic___lam__1___closed__0, &l_Lean_Elab_CheckTactic_elabCheckTactic___lam__1___closed__0_once, _init_l_Lean_Elab_CheckTactic_elabCheckTactic___lam__1___closed__0);
v___x_1006_ = l_Lean_Meta_mkFreshExprMVar(v___x_1003_, v___x_1004_, v___x_1005_, v___y_891_, v___y_892_, v___y_893_, v___y_894_);
if (lean_obj_tag(v___x_1006_) == 0)
{
lean_object* v_a_1007_; lean_object* v___x_1008_; lean_object* v___x_1009_; lean_object* v___x_1010_; uint8_t v___x_1011_; lean_object* v___x_1012_; lean_object* v___x_1013_; lean_object* v___x_1014_; lean_object* v___f_1015_; lean_object* v___x_1016_; 
v_a_1007_ = lean_ctor_get(v___x_1006_, 0);
lean_inc(v_a_1007_);
lean_dec_ref_known(v___x_1006_, 1);
v___x_1008_ = l_Lean_Expr_mvarId_x21(v_a_1007_);
lean_dec(v_a_1007_);
v___x_1009_ = lean_box(0);
v___x_1010_ = lean_box(1);
v___x_1011_ = 0;
v___x_1012_ = ((lean_object*)(l_Lean_Elab_CheckTactic_elabCheckTactic___lam__1___closed__1));
v___x_1013_ = lean_alloc_ctor(0, 8, 11);
lean_ctor_set(v___x_1013_, 0, v___x_996_);
lean_ctor_set(v___x_1013_, 1, v___x_1009_);
lean_ctor_set(v___x_1013_, 2, v___x_996_);
lean_ctor_set(v___x_1013_, 3, v___f_886_);
lean_ctor_set(v___x_1013_, 4, v___x_1010_);
lean_ctor_set(v___x_1013_, 5, v___x_1010_);
lean_ctor_set(v___x_1013_, 6, v___x_996_);
lean_ctor_set(v___x_1013_, 7, v___x_1012_);
lean_ctor_set_uint8(v___x_1013_, sizeof(void*)*8, v___x_885_);
lean_ctor_set_uint8(v___x_1013_, sizeof(void*)*8 + 1, v___x_885_);
lean_ctor_set_uint8(v___x_1013_, sizeof(void*)*8 + 2, v___x_885_);
lean_ctor_set_uint8(v___x_1013_, sizeof(void*)*8 + 3, v___x_885_);
lean_ctor_set_uint8(v___x_1013_, sizeof(void*)*8 + 4, v___x_1011_);
lean_ctor_set_uint8(v___x_1013_, sizeof(void*)*8 + 5, v___x_1011_);
lean_ctor_set_uint8(v___x_1013_, sizeof(void*)*8 + 6, v___x_1011_);
lean_ctor_set_uint8(v___x_1013_, sizeof(void*)*8 + 7, v___x_1011_);
lean_ctor_set_uint8(v___x_1013_, sizeof(void*)*8 + 8, v___x_885_);
lean_ctor_set_uint8(v___x_1013_, sizeof(void*)*8 + 9, v___x_1011_);
lean_ctor_set_uint8(v___x_1013_, sizeof(void*)*8 + 10, v___x_885_);
v___x_1014_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v___x_1014_, 0, v___x_887_);
lean_ctor_set(v___x_1014_, 1, v___x_1010_);
lean_ctor_set(v___x_1014_, 2, v___x_1009_);
lean_ctor_set(v___x_1014_, 3, v___x_1009_);
lean_ctor_set(v___x_1014_, 4, v___x_1009_);
lean_ctor_set(v___x_1014_, 5, v___x_1010_);
lean_ctor_set(v___x_1014_, 6, v___x_1009_);
lean_inc(v___x_882_);
v___f_1015_ = lean_alloc_closure((void*)(l_Lean_Elab_CheckTactic_elabCheckTacticFailure___lam__1___boxed), 11, 4);
lean_closure_set(v___f_1015_, 0, v___x_1008_);
lean_closure_set(v___f_1015_, 1, v___x_882_);
lean_closure_set(v___f_1015_, 2, v___x_1013_);
lean_closure_set(v___f_1015_, 3, v___x_1014_);
v___x_1016_ = l_Lean_Elab_Term_withoutErrToSorryImp___redArg(v___f_1015_, v___y_889_, v___y_890_, v___y_891_, v___y_892_, v___y_893_, v___y_894_);
if (lean_obj_tag(v___x_1016_) == 0)
{
v___y_900_ = v___x_1016_;
goto v___jp_899_;
}
else
{
lean_object* v_a_1017_; uint8_t v___y_1019_; uint8_t v___x_1020_; 
v_a_1017_ = lean_ctor_get(v___x_1016_, 0);
lean_inc(v_a_1017_);
v___x_1020_ = l_Lean_Exception_isInterrupt(v_a_1017_);
if (v___x_1020_ == 0)
{
uint8_t v___x_1021_; 
v___x_1021_ = l_Lean_Exception_isRuntime(v_a_1017_);
v___y_1019_ = v___x_1021_;
goto v___jp_1018_;
}
else
{
lean_dec(v_a_1017_);
v___y_1019_ = v___x_1020_;
goto v___jp_1018_;
}
v___jp_1018_:
{
if (v___y_1019_ == 0)
{
lean_dec_ref_known(v___x_1016_, 1);
lean_dec(v___x_883_);
lean_dec(v___x_882_);
goto v___jp_896_;
}
else
{
v___y_900_ = v___x_1016_;
goto v___jp_899_;
}
}
}
}
else
{
lean_object* v_a_1022_; lean_object* v___x_1024_; uint8_t v_isShared_1025_; uint8_t v_isSharedCheck_1029_; 
lean_dec(v___x_887_);
lean_dec_ref(v___f_886_);
lean_dec(v___x_883_);
lean_dec(v___x_882_);
v_a_1022_ = lean_ctor_get(v___x_1006_, 0);
v_isSharedCheck_1029_ = !lean_is_exclusive(v___x_1006_);
if (v_isSharedCheck_1029_ == 0)
{
v___x_1024_ = v___x_1006_;
v_isShared_1025_ = v_isSharedCheck_1029_;
goto v_resetjp_1023_;
}
else
{
lean_inc(v_a_1022_);
lean_dec(v___x_1006_);
v___x_1024_ = lean_box(0);
v_isShared_1025_ = v_isSharedCheck_1029_;
goto v_resetjp_1023_;
}
v_resetjp_1023_:
{
lean_object* v___x_1027_; 
if (v_isShared_1025_ == 0)
{
v___x_1027_ = v___x_1024_;
goto v_reusejp_1026_;
}
else
{
lean_object* v_reuseFailAlloc_1028_; 
v_reuseFailAlloc_1028_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1028_, 0, v_a_1022_);
v___x_1027_ = v_reuseFailAlloc_1028_;
goto v_reusejp_1026_;
}
v_reusejp_1026_:
{
return v___x_1027_;
}
}
}
}
else
{
lean_object* v_a_1030_; lean_object* v___x_1032_; uint8_t v_isShared_1033_; uint8_t v_isSharedCheck_1037_; 
lean_dec(v___x_887_);
lean_dec_ref(v___f_886_);
lean_dec(v___x_883_);
lean_dec(v___x_882_);
v_a_1030_ = lean_ctor_get(v___x_1001_, 0);
v_isSharedCheck_1037_ = !lean_is_exclusive(v___x_1001_);
if (v_isSharedCheck_1037_ == 0)
{
v___x_1032_ = v___x_1001_;
v_isShared_1033_ = v_isSharedCheck_1037_;
goto v_resetjp_1031_;
}
else
{
lean_inc(v_a_1030_);
lean_dec(v___x_1001_);
v___x_1032_ = lean_box(0);
v_isShared_1033_ = v_isSharedCheck_1037_;
goto v_resetjp_1031_;
}
v_resetjp_1031_:
{
lean_object* v___x_1035_; 
if (v_isShared_1033_ == 0)
{
v___x_1035_ = v___x_1032_;
goto v_reusejp_1034_;
}
else
{
lean_object* v_reuseFailAlloc_1036_; 
v_reuseFailAlloc_1036_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1036_, 0, v_a_1030_);
v___x_1035_ = v_reuseFailAlloc_1036_;
goto v_reusejp_1034_;
}
v_reusejp_1034_:
{
return v___x_1035_;
}
}
}
}
else
{
lean_object* v_a_1038_; lean_object* v___x_1040_; uint8_t v_isShared_1041_; uint8_t v_isSharedCheck_1045_; 
lean_dec(v_a_998_);
lean_dec(v___x_887_);
lean_dec_ref(v___f_886_);
lean_dec(v___x_883_);
lean_dec(v___x_882_);
v_a_1038_ = lean_ctor_get(v___x_999_, 0);
v_isSharedCheck_1045_ = !lean_is_exclusive(v___x_999_);
if (v_isSharedCheck_1045_ == 0)
{
v___x_1040_ = v___x_999_;
v_isShared_1041_ = v_isSharedCheck_1045_;
goto v_resetjp_1039_;
}
else
{
lean_inc(v_a_1038_);
lean_dec(v___x_999_);
v___x_1040_ = lean_box(0);
v_isShared_1041_ = v_isSharedCheck_1045_;
goto v_resetjp_1039_;
}
v_resetjp_1039_:
{
lean_object* v___x_1043_; 
if (v_isShared_1041_ == 0)
{
v___x_1043_ = v___x_1040_;
goto v_reusejp_1042_;
}
else
{
lean_object* v_reuseFailAlloc_1044_; 
v_reuseFailAlloc_1044_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1044_, 0, v_a_1038_);
v___x_1043_ = v_reuseFailAlloc_1044_;
goto v_reusejp_1042_;
}
v_reusejp_1042_:
{
return v___x_1043_;
}
}
}
}
else
{
lean_object* v_a_1046_; lean_object* v___x_1048_; uint8_t v_isShared_1049_; uint8_t v_isSharedCheck_1053_; 
lean_dec(v___x_887_);
lean_dec_ref(v___f_886_);
lean_dec(v___x_883_);
lean_dec(v___x_882_);
v_a_1046_ = lean_ctor_get(v___x_997_, 0);
v_isSharedCheck_1053_ = !lean_is_exclusive(v___x_997_);
if (v_isSharedCheck_1053_ == 0)
{
v___x_1048_ = v___x_997_;
v_isShared_1049_ = v_isSharedCheck_1053_;
goto v_resetjp_1047_;
}
else
{
lean_inc(v_a_1046_);
lean_dec(v___x_997_);
v___x_1048_ = lean_box(0);
v_isShared_1049_ = v_isSharedCheck_1053_;
goto v_resetjp_1047_;
}
v_resetjp_1047_:
{
lean_object* v___x_1051_; 
if (v_isShared_1049_ == 0)
{
v___x_1051_ = v___x_1048_;
goto v_reusejp_1050_;
}
else
{
lean_object* v_reuseFailAlloc_1052_; 
v_reuseFailAlloc_1052_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1052_, 0, v_a_1046_);
v___x_1051_ = v_reuseFailAlloc_1052_;
goto v_reusejp_1050_;
}
v_reusejp_1050_:
{
return v___x_1051_;
}
}
}
v___jp_896_:
{
lean_object* v___x_897_; lean_object* v___x_898_; 
v___x_897_ = lean_box(0);
v___x_898_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_898_, 0, v___x_897_);
return v___x_898_;
}
v___jp_899_:
{
if (lean_obj_tag(v___y_900_) == 0)
{
lean_object* v_a_901_; 
v_a_901_ = lean_ctor_get(v___y_900_, 0);
lean_inc(v_a_901_);
lean_dec_ref_known(v___y_900_, 1);
if (lean_obj_tag(v_a_901_) == 0)
{
lean_dec(v___x_883_);
lean_dec(v___x_882_);
goto v___jp_896_;
}
else
{
lean_object* v_val_902_; lean_object* v_fst_903_; lean_object* v___x_905_; uint8_t v_isShared_906_; uint8_t v_isSharedCheck_986_; 
v_val_902_ = lean_ctor_get(v_a_901_, 0);
lean_inc(v_val_902_);
lean_dec_ref_known(v_a_901_, 1);
v_fst_903_ = lean_ctor_get(v_val_902_, 0);
v_isSharedCheck_986_ = !lean_is_exclusive(v_val_902_);
if (v_isSharedCheck_986_ == 0)
{
lean_object* v_unused_987_; 
v_unused_987_ = lean_ctor_get(v_val_902_, 1);
lean_dec(v_unused_987_);
v___x_905_ = v_val_902_;
v_isShared_906_ = v_isSharedCheck_986_;
goto v_resetjp_904_;
}
else
{
lean_inc(v_fst_903_);
lean_dec(v_val_902_);
v___x_905_ = lean_box(0);
v_isShared_906_ = v_isSharedCheck_986_;
goto v_resetjp_904_;
}
v_resetjp_904_:
{
if (lean_obj_tag(v_fst_903_) == 0)
{
lean_object* v___x_907_; lean_object* v___x_908_; lean_object* v___x_910_; 
v___x_907_ = l_Lean_MessageData_ofSyntax(v___x_882_);
v___x_908_ = lean_obj_once(&l_Lean_Elab_CheckTactic_elabCheckTacticFailure___lam__0___closed__1, &l_Lean_Elab_CheckTactic_elabCheckTacticFailure___lam__0___closed__1_once, _init_l_Lean_Elab_CheckTactic_elabCheckTacticFailure___lam__0___closed__1);
if (v_isShared_906_ == 0)
{
lean_ctor_set_tag(v___x_905_, 7);
lean_ctor_set(v___x_905_, 1, v___x_908_);
lean_ctor_set(v___x_905_, 0, v___x_907_);
v___x_910_ = v___x_905_;
goto v_reusejp_909_;
}
else
{
lean_object* v_reuseFailAlloc_916_; 
v_reuseFailAlloc_916_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_916_, 0, v___x_907_);
lean_ctor_set(v_reuseFailAlloc_916_, 1, v___x_908_);
v___x_910_ = v_reuseFailAlloc_916_;
goto v_reusejp_909_;
}
v_reusejp_909_:
{
lean_object* v___x_911_; lean_object* v___x_912_; lean_object* v___x_913_; lean_object* v___x_914_; lean_object* v___x_915_; 
v___x_911_ = l_Lean_MessageData_ofSyntax(v___x_883_);
v___x_912_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_912_, 0, v___x_910_);
lean_ctor_set(v___x_912_, 1, v___x_911_);
v___x_913_ = lean_obj_once(&l_Lean_Elab_CheckTactic_elabCheckTacticFailure___lam__0___closed__3, &l_Lean_Elab_CheckTactic_elabCheckTacticFailure___lam__0___closed__3_once, _init_l_Lean_Elab_CheckTactic_elabCheckTacticFailure___lam__0___closed__3);
v___x_914_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_914_, 0, v___x_912_);
lean_ctor_set(v___x_914_, 1, v___x_913_);
v___x_915_ = l_Lean_throwErrorAt___at___00Lean_Elab_CheckTactic_elabCheckTactic_spec__1___redArg(v_stx_884_, v___x_914_, v___y_889_, v___y_890_, v___y_891_, v___y_892_, v___y_893_, v___y_894_);
return v___x_915_;
}
}
else
{
lean_object* v_tail_917_; 
v_tail_917_ = lean_ctor_get(v_fst_903_, 1);
if (lean_obj_tag(v_tail_917_) == 0)
{
lean_object* v_head_918_; lean_object* v___x_920_; uint8_t v_isShared_921_; uint8_t v_isSharedCheck_964_; 
v_head_918_ = lean_ctor_get(v_fst_903_, 0);
v_isSharedCheck_964_ = !lean_is_exclusive(v_fst_903_);
if (v_isSharedCheck_964_ == 0)
{
lean_object* v_unused_965_; 
v_unused_965_ = lean_ctor_get(v_fst_903_, 1);
lean_dec(v_unused_965_);
v___x_920_ = v_fst_903_;
v_isShared_921_ = v_isSharedCheck_964_;
goto v_resetjp_919_;
}
else
{
lean_inc(v_head_918_);
lean_dec(v_fst_903_);
v___x_920_ = lean_box(0);
v_isShared_921_ = v_isSharedCheck_964_;
goto v_resetjp_919_;
}
v_resetjp_919_:
{
lean_object* v___x_922_; 
v___x_922_ = l_Lean_MVarId_getType(v_head_918_, v___y_891_, v___y_892_, v___y_893_, v___y_894_);
if (lean_obj_tag(v___x_922_) == 0)
{
lean_object* v_a_923_; lean_object* v___x_924_; 
v_a_923_ = lean_ctor_get(v___x_922_, 0);
lean_inc(v_a_923_);
lean_dec_ref_known(v___x_922_, 1);
v___x_924_ = l_Lean_Meta_CheckTactic_matchCheckGoalType(v_stx_884_, v_a_923_, v___y_891_, v___y_892_, v___y_893_, v___y_894_);
if (lean_obj_tag(v___x_924_) == 0)
{
lean_object* v_a_925_; lean_object* v_fst_926_; lean_object* v___x_928_; uint8_t v_isShared_929_; uint8_t v_isSharedCheck_946_; 
v_a_925_ = lean_ctor_get(v___x_924_, 0);
lean_inc(v_a_925_);
lean_dec_ref_known(v___x_924_, 1);
v_fst_926_ = lean_ctor_get(v_a_925_, 0);
v_isSharedCheck_946_ = !lean_is_exclusive(v_a_925_);
if (v_isSharedCheck_946_ == 0)
{
lean_object* v_unused_947_; 
v_unused_947_ = lean_ctor_get(v_a_925_, 1);
lean_dec(v_unused_947_);
v___x_928_ = v_a_925_;
v_isShared_929_ = v_isSharedCheck_946_;
goto v_resetjp_927_;
}
else
{
lean_inc(v_fst_926_);
lean_dec(v_a_925_);
v___x_928_ = lean_box(0);
v_isShared_929_ = v_isSharedCheck_946_;
goto v_resetjp_927_;
}
v_resetjp_927_:
{
lean_object* v___x_930_; lean_object* v___x_931_; lean_object* v___x_932_; lean_object* v___x_934_; 
v___x_930_ = l_Lean_indentExpr(v_fst_926_);
v___x_931_ = l_Lean_MessageData_ofSyntax(v___x_882_);
v___x_932_ = lean_obj_once(&l_Lean_Elab_CheckTactic_elabCheckTacticFailure___lam__0___closed__1, &l_Lean_Elab_CheckTactic_elabCheckTacticFailure___lam__0___closed__1_once, _init_l_Lean_Elab_CheckTactic_elabCheckTacticFailure___lam__0___closed__1);
if (v_isShared_929_ == 0)
{
lean_ctor_set_tag(v___x_928_, 7);
lean_ctor_set(v___x_928_, 1, v___x_932_);
lean_ctor_set(v___x_928_, 0, v___x_931_);
v___x_934_ = v___x_928_;
goto v_reusejp_933_;
}
else
{
lean_object* v_reuseFailAlloc_945_; 
v_reuseFailAlloc_945_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_945_, 0, v___x_931_);
lean_ctor_set(v_reuseFailAlloc_945_, 1, v___x_932_);
v___x_934_ = v_reuseFailAlloc_945_;
goto v_reusejp_933_;
}
v_reusejp_933_:
{
lean_object* v___x_935_; lean_object* v___x_937_; 
v___x_935_ = l_Lean_MessageData_ofSyntax(v___x_883_);
if (v_isShared_921_ == 0)
{
lean_ctor_set_tag(v___x_920_, 7);
lean_ctor_set(v___x_920_, 1, v___x_935_);
lean_ctor_set(v___x_920_, 0, v___x_934_);
v___x_937_ = v___x_920_;
goto v_reusejp_936_;
}
else
{
lean_object* v_reuseFailAlloc_944_; 
v_reuseFailAlloc_944_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_944_, 0, v___x_934_);
lean_ctor_set(v_reuseFailAlloc_944_, 1, v___x_935_);
v___x_937_ = v_reuseFailAlloc_944_;
goto v_reusejp_936_;
}
v_reusejp_936_:
{
lean_object* v___x_938_; lean_object* v___x_940_; 
v___x_938_ = lean_obj_once(&l_Lean_Elab_CheckTactic_elabCheckTacticFailure___lam__0___closed__5, &l_Lean_Elab_CheckTactic_elabCheckTacticFailure___lam__0___closed__5_once, _init_l_Lean_Elab_CheckTactic_elabCheckTacticFailure___lam__0___closed__5);
if (v_isShared_906_ == 0)
{
lean_ctor_set_tag(v___x_905_, 7);
lean_ctor_set(v___x_905_, 1, v___x_938_);
lean_ctor_set(v___x_905_, 0, v___x_937_);
v___x_940_ = v___x_905_;
goto v_reusejp_939_;
}
else
{
lean_object* v_reuseFailAlloc_943_; 
v_reuseFailAlloc_943_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_943_, 0, v___x_937_);
lean_ctor_set(v_reuseFailAlloc_943_, 1, v___x_938_);
v___x_940_ = v_reuseFailAlloc_943_;
goto v_reusejp_939_;
}
v_reusejp_939_:
{
lean_object* v___x_941_; lean_object* v___x_942_; 
v___x_941_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_941_, 0, v___x_940_);
lean_ctor_set(v___x_941_, 1, v___x_930_);
v___x_942_ = l_Lean_throwErrorAt___at___00Lean_Elab_CheckTactic_elabCheckTactic_spec__1___redArg(v_stx_884_, v___x_941_, v___y_889_, v___y_890_, v___y_891_, v___y_892_, v___y_893_, v___y_894_);
return v___x_942_;
}
}
}
}
}
else
{
lean_object* v_a_948_; lean_object* v___x_950_; uint8_t v_isShared_951_; uint8_t v_isSharedCheck_955_; 
lean_del_object(v___x_920_);
lean_del_object(v___x_905_);
lean_dec(v___x_883_);
lean_dec(v___x_882_);
v_a_948_ = lean_ctor_get(v___x_924_, 0);
v_isSharedCheck_955_ = !lean_is_exclusive(v___x_924_);
if (v_isSharedCheck_955_ == 0)
{
v___x_950_ = v___x_924_;
v_isShared_951_ = v_isSharedCheck_955_;
goto v_resetjp_949_;
}
else
{
lean_inc(v_a_948_);
lean_dec(v___x_924_);
v___x_950_ = lean_box(0);
v_isShared_951_ = v_isSharedCheck_955_;
goto v_resetjp_949_;
}
v_resetjp_949_:
{
lean_object* v___x_953_; 
if (v_isShared_951_ == 0)
{
v___x_953_ = v___x_950_;
goto v_reusejp_952_;
}
else
{
lean_object* v_reuseFailAlloc_954_; 
v_reuseFailAlloc_954_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_954_, 0, v_a_948_);
v___x_953_ = v_reuseFailAlloc_954_;
goto v_reusejp_952_;
}
v_reusejp_952_:
{
return v___x_953_;
}
}
}
}
else
{
lean_object* v_a_956_; lean_object* v___x_958_; uint8_t v_isShared_959_; uint8_t v_isSharedCheck_963_; 
lean_del_object(v___x_920_);
lean_del_object(v___x_905_);
lean_dec(v___x_883_);
lean_dec(v___x_882_);
v_a_956_ = lean_ctor_get(v___x_922_, 0);
v_isSharedCheck_963_ = !lean_is_exclusive(v___x_922_);
if (v_isSharedCheck_963_ == 0)
{
v___x_958_ = v___x_922_;
v_isShared_959_ = v_isSharedCheck_963_;
goto v_resetjp_957_;
}
else
{
lean_inc(v_a_956_);
lean_dec(v___x_922_);
v___x_958_ = lean_box(0);
v_isShared_959_ = v_isSharedCheck_963_;
goto v_resetjp_957_;
}
v_resetjp_957_:
{
lean_object* v___x_961_; 
if (v_isShared_959_ == 0)
{
v___x_961_ = v___x_958_;
goto v_reusejp_960_;
}
else
{
lean_object* v_reuseFailAlloc_962_; 
v_reuseFailAlloc_962_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_962_, 0, v_a_956_);
v___x_961_ = v_reuseFailAlloc_962_;
goto v_reusejp_960_;
}
v_reusejp_960_:
{
return v___x_961_;
}
}
}
}
}
else
{
lean_object* v___x_966_; lean_object* v___x_967_; lean_object* v___x_969_; 
v___x_966_ = l_Lean_MessageData_ofSyntax(v___x_882_);
v___x_967_ = lean_obj_once(&l_Lean_Elab_CheckTactic_elabCheckTacticFailure___lam__0___closed__1, &l_Lean_Elab_CheckTactic_elabCheckTacticFailure___lam__0___closed__1_once, _init_l_Lean_Elab_CheckTactic_elabCheckTacticFailure___lam__0___closed__1);
if (v_isShared_906_ == 0)
{
lean_ctor_set_tag(v___x_905_, 7);
lean_ctor_set(v___x_905_, 1, v___x_967_);
lean_ctor_set(v___x_905_, 0, v___x_966_);
v___x_969_ = v___x_905_;
goto v_reusejp_968_;
}
else
{
lean_object* v_reuseFailAlloc_985_; 
v_reuseFailAlloc_985_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_985_, 0, v___x_966_);
lean_ctor_set(v_reuseFailAlloc_985_, 1, v___x_967_);
v___x_969_ = v_reuseFailAlloc_985_;
goto v_reusejp_968_;
}
v_reusejp_968_:
{
lean_object* v___x_970_; lean_object* v___x_971_; lean_object* v___x_972_; lean_object* v___x_973_; lean_object* v___x_974_; 
v___x_970_ = l_Lean_MessageData_ofSyntax(v___x_883_);
v___x_971_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_971_, 0, v___x_969_);
lean_ctor_set(v___x_971_, 1, v___x_970_);
v___x_972_ = lean_obj_once(&l_Lean_Elab_CheckTactic_elabCheckTacticFailure___lam__0___closed__7, &l_Lean_Elab_CheckTactic_elabCheckTacticFailure___lam__0___closed__7_once, _init_l_Lean_Elab_CheckTactic_elabCheckTacticFailure___lam__0___closed__7);
v___x_973_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_973_, 0, v___x_971_);
lean_ctor_set(v___x_973_, 1, v___x_972_);
v___x_974_ = l_List_foldlM___at___00Lean_Elab_CheckTactic_elabCheckTacticFailure_spec__0(v_stx_884_, v___x_973_, v_fst_903_, v___y_889_, v___y_890_, v___y_891_, v___y_892_, v___y_893_, v___y_894_);
if (lean_obj_tag(v___x_974_) == 0)
{
lean_object* v_a_975_; lean_object* v___x_976_; 
v_a_975_ = lean_ctor_get(v___x_974_, 0);
lean_inc(v_a_975_);
lean_dec_ref_known(v___x_974_, 1);
v___x_976_ = l_Lean_throwErrorAt___at___00Lean_Elab_CheckTactic_elabCheckTactic_spec__1___redArg(v_stx_884_, v_a_975_, v___y_889_, v___y_890_, v___y_891_, v___y_892_, v___y_893_, v___y_894_);
return v___x_976_;
}
else
{
lean_object* v_a_977_; lean_object* v___x_979_; uint8_t v_isShared_980_; uint8_t v_isSharedCheck_984_; 
v_a_977_ = lean_ctor_get(v___x_974_, 0);
v_isSharedCheck_984_ = !lean_is_exclusive(v___x_974_);
if (v_isSharedCheck_984_ == 0)
{
v___x_979_ = v___x_974_;
v_isShared_980_ = v_isSharedCheck_984_;
goto v_resetjp_978_;
}
else
{
lean_inc(v_a_977_);
lean_dec(v___x_974_);
v___x_979_ = lean_box(0);
v_isShared_980_ = v_isSharedCheck_984_;
goto v_resetjp_978_;
}
v_resetjp_978_:
{
lean_object* v___x_982_; 
if (v_isShared_980_ == 0)
{
v___x_982_ = v___x_979_;
goto v_reusejp_981_;
}
else
{
lean_object* v_reuseFailAlloc_983_; 
v_reuseFailAlloc_983_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_983_, 0, v_a_977_);
v___x_982_ = v_reuseFailAlloc_983_;
goto v_reusejp_981_;
}
v_reusejp_981_:
{
return v___x_982_;
}
}
}
}
}
}
}
}
}
else
{
lean_object* v_a_988_; lean_object* v___x_990_; uint8_t v_isShared_991_; uint8_t v_isSharedCheck_995_; 
lean_dec(v___x_883_);
lean_dec(v___x_882_);
v_a_988_ = lean_ctor_get(v___y_900_, 0);
v_isSharedCheck_995_ = !lean_is_exclusive(v___y_900_);
if (v_isSharedCheck_995_ == 0)
{
v___x_990_ = v___y_900_;
v_isShared_991_ = v_isSharedCheck_995_;
goto v_resetjp_989_;
}
else
{
lean_inc(v_a_988_);
lean_dec(v___y_900_);
v___x_990_ = lean_box(0);
v_isShared_991_ = v_isSharedCheck_995_;
goto v_resetjp_989_;
}
v_resetjp_989_:
{
lean_object* v___x_993_; 
if (v_isShared_991_ == 0)
{
v___x_993_ = v___x_990_;
goto v_reusejp_992_;
}
else
{
lean_object* v_reuseFailAlloc_994_; 
v_reuseFailAlloc_994_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_994_, 0, v_a_988_);
v___x_993_ = v_reuseFailAlloc_994_;
goto v_reusejp_992_;
}
v_reusejp_992_:
{
return v___x_993_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_CheckTactic_elabCheckTacticFailure___lam__0___boxed(lean_object* v___x_1054_, lean_object* v___x_1055_, lean_object* v_stx_1056_, lean_object* v___x_1057_, lean_object* v___f_1058_, lean_object* v___x_1059_, lean_object* v___vars_1060_, lean_object* v___y_1061_, lean_object* v___y_1062_, lean_object* v___y_1063_, lean_object* v___y_1064_, lean_object* v___y_1065_, lean_object* v___y_1066_, lean_object* v___y_1067_){
_start:
{
uint8_t v___x_6528__boxed_1068_; lean_object* v_res_1069_; 
v___x_6528__boxed_1068_ = lean_unbox(v___x_1057_);
v_res_1069_ = l_Lean_Elab_CheckTactic_elabCheckTacticFailure___lam__0(v___x_1054_, v___x_1055_, v_stx_1056_, v___x_6528__boxed_1068_, v___f_1058_, v___x_1059_, v___vars_1060_, v___y_1061_, v___y_1062_, v___y_1063_, v___y_1064_, v___y_1065_, v___y_1066_);
lean_dec(v___y_1066_);
lean_dec_ref(v___y_1065_);
lean_dec(v___y_1064_);
lean_dec_ref(v___y_1063_);
lean_dec(v___y_1062_);
lean_dec_ref(v___y_1061_);
lean_dec_ref(v___vars_1060_);
lean_dec(v_stx_1056_);
return v_res_1069_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_CheckTactic_elabCheckTacticFailure(lean_object* v_stx_1075_, lean_object* v_a_1076_, lean_object* v_a_1077_){
_start:
{
lean_object* v___x_1079_; uint8_t v___x_1080_; 
v___x_1079_ = ((lean_object*)(l_Lean_Elab_CheckTactic_elabCheckTacticFailure___closed__1));
lean_inc(v_stx_1075_);
v___x_1080_ = l_Lean_Syntax_isOfKind(v_stx_1075_, v___x_1079_);
if (v___x_1080_ == 0)
{
lean_object* v___x_1081_; 
lean_dec(v_stx_1075_);
v___x_1081_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_CheckTactic_elabCheckTactic_spec__0___redArg();
return v___x_1081_;
}
else
{
lean_object* v___f_1082_; lean_object* v___x_1083_; lean_object* v___x_1084_; lean_object* v___x_1085_; lean_object* v___x_1086_; lean_object* v___x_1087_; lean_object* v___x_1088_; lean_object* v___f_1089_; lean_object* v___x_1090_; lean_object* v___x_1091_; lean_object* v_env_1092_; lean_object* v___x_1093_; lean_object* v___x_1094_; 
v___f_1082_ = ((lean_object*)(l_Lean_Elab_CheckTactic_elabCheckTactic___closed__4));
v___x_1083_ = lean_unsigned_to_nat(1u);
v___x_1084_ = l_Lean_Syntax_getArg(v_stx_1075_, v___x_1083_);
v___x_1085_ = lean_unsigned_to_nat(3u);
v___x_1086_ = l_Lean_Syntax_getArg(v_stx_1075_, v___x_1085_);
v___x_1087_ = lean_box(0);
v___x_1088_ = lean_box(v___x_1080_);
v___f_1089_ = lean_alloc_closure((void*)(l_Lean_Elab_CheckTactic_elabCheckTacticFailure___lam__0___boxed), 14, 6);
lean_closure_set(v___f_1089_, 0, v___x_1086_);
lean_closure_set(v___f_1089_, 1, v___x_1084_);
lean_closure_set(v___f_1089_, 2, v_stx_1075_);
lean_closure_set(v___f_1089_, 3, v___x_1088_);
lean_closure_set(v___f_1089_, 4, v___f_1082_);
lean_closure_set(v___f_1089_, 5, v___x_1087_);
v___x_1090_ = lean_alloc_closure((void*)(l_Lean_Elab_Command_runTermElabM___boxed), 5, 2);
lean_closure_set(v___x_1090_, 0, lean_box(0));
lean_closure_set(v___x_1090_, 1, v___f_1089_);
v___x_1091_ = lean_st_ref_get(v_a_1077_);
v_env_1092_ = lean_ctor_get(v___x_1091_, 0);
lean_inc_ref(v_env_1092_);
lean_dec(v___x_1091_);
v___x_1093_ = l_Lean_Environment_unlockAsync(v_env_1092_);
v___x_1094_ = l_Lean_withEnv___at___00Lean_Elab_CheckTactic_elabCheckTactic_spec__2___redArg(v___x_1093_, v___x_1090_, v_a_1076_, v_a_1077_);
return v___x_1094_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_CheckTactic_elabCheckTacticFailure___boxed(lean_object* v_stx_1095_, lean_object* v_a_1096_, lean_object* v_a_1097_, lean_object* v_a_1098_){
_start:
{
lean_object* v_res_1099_; 
v_res_1099_ = l_Lean_Elab_CheckTactic_elabCheckTacticFailure(v_stx_1095_, v_a_1096_, v_a_1097_);
lean_dec(v_a_1097_);
lean_dec_ref(v_a_1096_);
return v_res_1099_;
}
}
LEAN_EXPORT lean_object* l_List_foldlM___at___00List_foldlM___at___00Lean_Elab_CheckTactic_elabCheckTacticFailure_spec__0_spec__0(lean_object* v_stx_1100_, lean_object* v_x_1101_, lean_object* v_x_1102_, lean_object* v___y_1103_, lean_object* v___y_1104_, lean_object* v___y_1105_, lean_object* v___y_1106_, lean_object* v___y_1107_, lean_object* v___y_1108_){
_start:
{
lean_object* v___x_1110_; 
v___x_1110_ = l_List_foldlM___at___00List_foldlM___at___00Lean_Elab_CheckTactic_elabCheckTacticFailure_spec__0_spec__0___redArg(v_stx_1100_, v_x_1101_, v_x_1102_, v___y_1105_, v___y_1106_, v___y_1107_, v___y_1108_);
return v___x_1110_;
}
}
LEAN_EXPORT lean_object* l_List_foldlM___at___00List_foldlM___at___00Lean_Elab_CheckTactic_elabCheckTacticFailure_spec__0_spec__0___boxed(lean_object* v_stx_1111_, lean_object* v_x_1112_, lean_object* v_x_1113_, lean_object* v___y_1114_, lean_object* v___y_1115_, lean_object* v___y_1116_, lean_object* v___y_1117_, lean_object* v___y_1118_, lean_object* v___y_1119_, lean_object* v___y_1120_){
_start:
{
lean_object* v_res_1121_; 
v_res_1121_ = l_List_foldlM___at___00List_foldlM___at___00Lean_Elab_CheckTactic_elabCheckTacticFailure_spec__0_spec__0(v_stx_1111_, v_x_1112_, v_x_1113_, v___y_1114_, v___y_1115_, v___y_1116_, v___y_1117_, v___y_1118_, v___y_1119_);
lean_dec(v___y_1119_);
lean_dec_ref(v___y_1118_);
lean_dec(v___y_1117_);
lean_dec_ref(v___y_1116_);
lean_dec(v___y_1115_);
lean_dec_ref(v___y_1114_);
lean_dec(v_stx_1111_);
return v_res_1121_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_elabCheckTacticFailure___regBuiltin_Lean_Elab_CheckTactic_elabCheckTacticFailure__1(){
_start:
{
lean_object* v___x_1129_; lean_object* v___x_1130_; lean_object* v___x_1131_; lean_object* v___x_1132_; lean_object* v___x_1133_; 
v___x_1129_ = l_Lean_Elab_Command_commandElabAttribute;
v___x_1130_ = ((lean_object*)(l_Lean_Elab_CheckTactic_elabCheckTacticFailure___closed__1));
v___x_1131_ = ((lean_object*)(l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_elabCheckTacticFailure___regBuiltin_Lean_Elab_CheckTactic_elabCheckTacticFailure__1___closed__1));
v___x_1132_ = lean_alloc_closure((void*)(l_Lean_Elab_CheckTactic_elabCheckTacticFailure___boxed), 4, 0);
v___x_1133_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_1129_, v___x_1130_, v___x_1131_, v___x_1132_);
return v___x_1133_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_elabCheckTacticFailure___regBuiltin_Lean_Elab_CheckTactic_elabCheckTacticFailure__1___boxed(lean_object* v_a_1134_){
_start:
{
lean_object* v_res_1135_; 
v_res_1135_ = l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_elabCheckTacticFailure___regBuiltin_Lean_Elab_CheckTactic_elabCheckTacticFailure__1();
return v_res_1135_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_elabCheckTacticFailure___regBuiltin_Lean_Elab_CheckTactic_elabCheckTacticFailure_declRange__3(){
_start:
{
lean_object* v___x_1162_; lean_object* v___x_1163_; lean_object* v___x_1164_; 
v___x_1162_ = ((lean_object*)(l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_elabCheckTacticFailure___regBuiltin_Lean_Elab_CheckTactic_elabCheckTacticFailure__1___closed__1));
v___x_1163_ = ((lean_object*)(l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_elabCheckTacticFailure___regBuiltin_Lean_Elab_CheckTactic_elabCheckTacticFailure_declRange__3___closed__6));
v___x_1164_ = l_Lean_addBuiltinDeclarationRanges(v___x_1162_, v___x_1163_);
return v___x_1164_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_elabCheckTacticFailure___regBuiltin_Lean_Elab_CheckTactic_elabCheckTacticFailure_declRange__3___boxed(lean_object* v_a_1165_){
_start:
{
lean_object* v_res_1166_; 
v_res_1166_ = l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_elabCheckTacticFailure___regBuiltin_Lean_Elab_CheckTactic_elabCheckTacticFailure_declRange__3();
return v_res_1166_;
}
}
static lean_object* _init_l_Lean_Elab_CheckTactic_expandCheckSimp___closed__12(void){
_start:
{
lean_object* v___x_1191_; 
v___x_1191_ = l_Array_mkArray0___redArg();
return v___x_1191_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_CheckTactic_expandCheckSimp(lean_object* v_stx_1192_, lean_object* v_a_1193_, lean_object* v_a_1194_){
_start:
{
lean_object* v___x_1195_; uint8_t v___x_1196_; 
v___x_1195_ = ((lean_object*)(l_Lean_Elab_CheckTactic_expandCheckSimp___closed__1));
lean_inc(v_stx_1192_);
v___x_1196_ = l_Lean_Syntax_isOfKind(v_stx_1192_, v___x_1195_);
if (v___x_1196_ == 0)
{
lean_object* v___x_1197_; 
lean_dec(v_stx_1192_);
v___x_1197_ = l_Lean_Macro_throwUnsupported___redArg(v_a_1194_);
return v___x_1197_;
}
else
{
lean_object* v_ref_1198_; lean_object* v___x_1199_; lean_object* v___x_1200_; lean_object* v___x_1201_; lean_object* v___x_1202_; uint8_t v___x_1203_; lean_object* v___x_1204_; lean_object* v___x_1205_; lean_object* v___x_1206_; lean_object* v___x_1207_; lean_object* v___x_1208_; lean_object* v___x_1209_; lean_object* v___x_1210_; lean_object* v___x_1211_; lean_object* v___x_1212_; lean_object* v___x_1213_; lean_object* v___x_1214_; lean_object* v___x_1215_; lean_object* v___x_1216_; lean_object* v___x_1217_; lean_object* v___x_1218_; lean_object* v___x_1219_; lean_object* v___x_1220_; lean_object* v___x_1221_; lean_object* v___x_1222_; 
v_ref_1198_ = lean_ctor_get(v_a_1193_, 5);
v___x_1199_ = lean_unsigned_to_nat(1u);
v___x_1200_ = l_Lean_Syntax_getArg(v_stx_1192_, v___x_1199_);
v___x_1201_ = lean_unsigned_to_nat(3u);
v___x_1202_ = l_Lean_Syntax_getArg(v_stx_1192_, v___x_1201_);
lean_dec(v_stx_1192_);
v___x_1203_ = 0;
v___x_1204_ = l_Lean_SourceInfo_fromRef(v_ref_1198_, v___x_1203_);
v___x_1205_ = ((lean_object*)(l_Lean_Elab_CheckTactic_elabCheckTactic___closed__3));
v___x_1206_ = ((lean_object*)(l_Lean_Elab_CheckTactic_expandCheckSimp___closed__2));
lean_inc_n(v___x_1204_, 7);
v___x_1207_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1207_, 0, v___x_1204_);
lean_ctor_set(v___x_1207_, 1, v___x_1206_);
v___x_1208_ = ((lean_object*)(l_Lean_Elab_CheckTactic_expandCheckSimp___closed__3));
v___x_1209_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1209_, 0, v___x_1204_);
lean_ctor_set(v___x_1209_, 1, v___x_1208_);
v___x_1210_ = ((lean_object*)(l_Lean_Elab_CheckTactic_expandCheckSimp___closed__4));
v___x_1211_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1211_, 0, v___x_1204_);
lean_ctor_set(v___x_1211_, 1, v___x_1210_);
v___x_1212_ = ((lean_object*)(l_Lean_Elab_CheckTactic_expandCheckSimp___closed__6));
v___x_1213_ = ((lean_object*)(l_Lean_Elab_CheckTactic_expandCheckSimp___closed__7));
v___x_1214_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1214_, 0, v___x_1204_);
lean_ctor_set(v___x_1214_, 1, v___x_1212_);
v___x_1215_ = ((lean_object*)(l_Lean_Elab_CheckTactic_expandCheckSimp___closed__9));
v___x_1216_ = ((lean_object*)(l_Lean_Elab_CheckTactic_expandCheckSimp___closed__11));
v___x_1217_ = lean_obj_once(&l_Lean_Elab_CheckTactic_expandCheckSimp___closed__12, &l_Lean_Elab_CheckTactic_expandCheckSimp___closed__12_once, _init_l_Lean_Elab_CheckTactic_expandCheckSimp___closed__12);
v___x_1218_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1218_, 0, v___x_1204_);
lean_ctor_set(v___x_1218_, 1, v___x_1216_);
lean_ctor_set(v___x_1218_, 2, v___x_1217_);
lean_inc_ref_n(v___x_1218_, 4);
v___x_1219_ = l_Lean_Syntax_node1(v___x_1204_, v___x_1215_, v___x_1218_);
v___x_1220_ = l_Lean_Syntax_node6(v___x_1204_, v___x_1213_, v___x_1214_, v___x_1219_, v___x_1218_, v___x_1218_, v___x_1218_, v___x_1218_);
v___x_1221_ = l_Lean_Syntax_node6(v___x_1204_, v___x_1205_, v___x_1207_, v___x_1200_, v___x_1209_, v___x_1202_, v___x_1211_, v___x_1220_);
v___x_1222_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1222_, 0, v___x_1221_);
lean_ctor_set(v___x_1222_, 1, v_a_1194_);
return v___x_1222_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_CheckTactic_expandCheckSimp___boxed(lean_object* v_stx_1223_, lean_object* v_a_1224_, lean_object* v_a_1225_){
_start:
{
lean_object* v_res_1226_; 
v_res_1226_ = l_Lean_Elab_CheckTactic_expandCheckSimp(v_stx_1223_, v_a_1224_, v_a_1225_);
lean_dec_ref(v_a_1224_);
return v_res_1226_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_expandCheckSimp___regBuiltin_Lean_Elab_CheckTactic_expandCheckSimp__1(){
_start:
{
lean_object* v___x_1234_; lean_object* v___x_1235_; lean_object* v___x_1236_; lean_object* v___x_1237_; lean_object* v___x_1238_; 
v___x_1234_ = l_Lean_Elab_macroAttribute;
v___x_1235_ = ((lean_object*)(l_Lean_Elab_CheckTactic_expandCheckSimp___closed__1));
v___x_1236_ = ((lean_object*)(l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_expandCheckSimp___regBuiltin_Lean_Elab_CheckTactic_expandCheckSimp__1___closed__1));
v___x_1237_ = lean_alloc_closure((void*)(l_Lean_Elab_CheckTactic_expandCheckSimp___boxed), 3, 0);
v___x_1238_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_1234_, v___x_1235_, v___x_1236_, v___x_1237_);
return v___x_1238_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_expandCheckSimp___regBuiltin_Lean_Elab_CheckTactic_expandCheckSimp__1___boxed(lean_object* v_a_1239_){
_start:
{
lean_object* v_res_1240_; 
v_res_1240_ = l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_expandCheckSimp___regBuiltin_Lean_Elab_CheckTactic_expandCheckSimp__1();
return v_res_1240_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_expandCheckSimp___regBuiltin_Lean_Elab_CheckTactic_expandCheckSimp_declRange__3(){
_start:
{
lean_object* v___x_1267_; lean_object* v___x_1268_; lean_object* v___x_1269_; 
v___x_1267_ = ((lean_object*)(l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_expandCheckSimp___regBuiltin_Lean_Elab_CheckTactic_expandCheckSimp__1___closed__1));
v___x_1268_ = ((lean_object*)(l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_expandCheckSimp___regBuiltin_Lean_Elab_CheckTactic_expandCheckSimp_declRange__3___closed__6));
v___x_1269_ = l_Lean_addBuiltinDeclarationRanges(v___x_1267_, v___x_1268_);
return v___x_1269_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_expandCheckSimp___regBuiltin_Lean_Elab_CheckTactic_expandCheckSimp_declRange__3___boxed(lean_object* v_a_1270_){
_start:
{
lean_object* v_res_1271_; 
v_res_1271_ = l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_expandCheckSimp___regBuiltin_Lean_Elab_CheckTactic_expandCheckSimp_declRange__3();
return v_res_1271_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_CheckTactic_expandCheckSimpFailure(lean_object* v_stx_1278_, lean_object* v_a_1279_, lean_object* v_a_1280_){
_start:
{
lean_object* v___x_1281_; uint8_t v___x_1282_; 
v___x_1281_ = ((lean_object*)(l_Lean_Elab_CheckTactic_expandCheckSimpFailure___closed__1));
lean_inc(v_stx_1278_);
v___x_1282_ = l_Lean_Syntax_isOfKind(v_stx_1278_, v___x_1281_);
if (v___x_1282_ == 0)
{
lean_object* v___x_1283_; 
lean_dec(v_stx_1278_);
v___x_1283_ = l_Lean_Macro_throwUnsupported___redArg(v_a_1280_);
return v___x_1283_;
}
else
{
lean_object* v_ref_1284_; lean_object* v___x_1285_; lean_object* v___x_1286_; uint8_t v___x_1287_; lean_object* v___x_1288_; lean_object* v___x_1289_; lean_object* v___x_1290_; lean_object* v___x_1291_; lean_object* v___x_1292_; lean_object* v___x_1293_; lean_object* v___x_1294_; lean_object* v___x_1295_; lean_object* v___x_1296_; lean_object* v___x_1297_; lean_object* v___x_1298_; lean_object* v___x_1299_; lean_object* v___x_1300_; lean_object* v___x_1301_; lean_object* v___x_1302_; lean_object* v___x_1303_; lean_object* v___x_1304_; 
v_ref_1284_ = lean_ctor_get(v_a_1279_, 5);
v___x_1285_ = lean_unsigned_to_nat(1u);
v___x_1286_ = l_Lean_Syntax_getArg(v_stx_1278_, v___x_1285_);
lean_dec(v_stx_1278_);
v___x_1287_ = 0;
v___x_1288_ = l_Lean_SourceInfo_fromRef(v_ref_1284_, v___x_1287_);
v___x_1289_ = ((lean_object*)(l_Lean_Elab_CheckTactic_elabCheckTacticFailure___closed__1));
v___x_1290_ = ((lean_object*)(l_Lean_Elab_CheckTactic_expandCheckSimpFailure___closed__2));
lean_inc_n(v___x_1288_, 6);
v___x_1291_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1291_, 0, v___x_1288_);
lean_ctor_set(v___x_1291_, 1, v___x_1290_);
v___x_1292_ = ((lean_object*)(l_Lean_Elab_CheckTactic_expandCheckSimp___closed__4));
v___x_1293_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1293_, 0, v___x_1288_);
lean_ctor_set(v___x_1293_, 1, v___x_1292_);
v___x_1294_ = ((lean_object*)(l_Lean_Elab_CheckTactic_expandCheckSimp___closed__6));
v___x_1295_ = ((lean_object*)(l_Lean_Elab_CheckTactic_expandCheckSimp___closed__7));
v___x_1296_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1296_, 0, v___x_1288_);
lean_ctor_set(v___x_1296_, 1, v___x_1294_);
v___x_1297_ = ((lean_object*)(l_Lean_Elab_CheckTactic_expandCheckSimp___closed__9));
v___x_1298_ = ((lean_object*)(l_Lean_Elab_CheckTactic_expandCheckSimp___closed__11));
v___x_1299_ = lean_obj_once(&l_Lean_Elab_CheckTactic_expandCheckSimp___closed__12, &l_Lean_Elab_CheckTactic_expandCheckSimp___closed__12_once, _init_l_Lean_Elab_CheckTactic_expandCheckSimp___closed__12);
v___x_1300_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1300_, 0, v___x_1288_);
lean_ctor_set(v___x_1300_, 1, v___x_1298_);
lean_ctor_set(v___x_1300_, 2, v___x_1299_);
lean_inc_ref_n(v___x_1300_, 4);
v___x_1301_ = l_Lean_Syntax_node1(v___x_1288_, v___x_1297_, v___x_1300_);
v___x_1302_ = l_Lean_Syntax_node6(v___x_1288_, v___x_1295_, v___x_1296_, v___x_1301_, v___x_1300_, v___x_1300_, v___x_1300_, v___x_1300_);
v___x_1303_ = l_Lean_Syntax_node4(v___x_1288_, v___x_1289_, v___x_1291_, v___x_1286_, v___x_1293_, v___x_1302_);
v___x_1304_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1304_, 0, v___x_1303_);
lean_ctor_set(v___x_1304_, 1, v_a_1280_);
return v___x_1304_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_CheckTactic_expandCheckSimpFailure___boxed(lean_object* v_stx_1305_, lean_object* v_a_1306_, lean_object* v_a_1307_){
_start:
{
lean_object* v_res_1308_; 
v_res_1308_ = l_Lean_Elab_CheckTactic_expandCheckSimpFailure(v_stx_1305_, v_a_1306_, v_a_1307_);
lean_dec_ref(v_a_1306_);
return v_res_1308_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_expandCheckSimpFailure___regBuiltin_Lean_Elab_CheckTactic_expandCheckSimpFailure__1(){
_start:
{
lean_object* v___x_1316_; lean_object* v___x_1317_; lean_object* v___x_1318_; lean_object* v___x_1319_; lean_object* v___x_1320_; 
v___x_1316_ = l_Lean_Elab_macroAttribute;
v___x_1317_ = ((lean_object*)(l_Lean_Elab_CheckTactic_expandCheckSimpFailure___closed__1));
v___x_1318_ = ((lean_object*)(l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_expandCheckSimpFailure___regBuiltin_Lean_Elab_CheckTactic_expandCheckSimpFailure__1___closed__1));
v___x_1319_ = lean_alloc_closure((void*)(l_Lean_Elab_CheckTactic_expandCheckSimpFailure___boxed), 3, 0);
v___x_1320_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_1316_, v___x_1317_, v___x_1318_, v___x_1319_);
return v___x_1320_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_expandCheckSimpFailure___regBuiltin_Lean_Elab_CheckTactic_expandCheckSimpFailure__1___boxed(lean_object* v_a_1321_){
_start:
{
lean_object* v_res_1322_; 
v_res_1322_ = l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_expandCheckSimpFailure___regBuiltin_Lean_Elab_CheckTactic_expandCheckSimpFailure__1();
return v_res_1322_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_expandCheckSimpFailure___regBuiltin_Lean_Elab_CheckTactic_expandCheckSimpFailure_declRange__3(){
_start:
{
lean_object* v___x_1349_; lean_object* v___x_1350_; lean_object* v___x_1351_; 
v___x_1349_ = ((lean_object*)(l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_expandCheckSimpFailure___regBuiltin_Lean_Elab_CheckTactic_expandCheckSimpFailure__1___closed__1));
v___x_1350_ = ((lean_object*)(l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_expandCheckSimpFailure___regBuiltin_Lean_Elab_CheckTactic_expandCheckSimpFailure_declRange__3___closed__6));
v___x_1351_ = l_Lean_addBuiltinDeclarationRanges(v___x_1349_, v___x_1350_);
return v___x_1351_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_expandCheckSimpFailure___regBuiltin_Lean_Elab_CheckTactic_expandCheckSimpFailure_declRange__3___boxed(lean_object* v_a_1352_){
_start:
{
lean_object* v_res_1353_; 
v_res_1353_ = l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_expandCheckSimpFailure___regBuiltin_Lean_Elab_CheckTactic_expandCheckSimpFailure_declRange__3();
return v_res_1353_;
}
}
lean_object* runtime_initialize_Lean_Elab_Tactic_ElabTerm(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Command(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Tactic_Meta(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_CheckTactic(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_CheckTactic(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Elab_Tactic_ElabTerm(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Command(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_Meta(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_CheckTactic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_elabCheckTactic___regBuiltin_Lean_Elab_CheckTactic_elabCheckTactic__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_elabCheckTactic___regBuiltin_Lean_Elab_CheckTactic_elabCheckTactic_declRange__3();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_elabCheckTacticFailure___regBuiltin_Lean_Elab_CheckTactic_elabCheckTacticFailure__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_elabCheckTacticFailure___regBuiltin_Lean_Elab_CheckTactic_elabCheckTacticFailure_declRange__3();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_expandCheckSimp___regBuiltin_Lean_Elab_CheckTactic_expandCheckSimp__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_expandCheckSimp___regBuiltin_Lean_Elab_CheckTactic_expandCheckSimp_declRange__3();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_expandCheckSimpFailure___regBuiltin_Lean_Elab_CheckTactic_expandCheckSimpFailure__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_CheckTactic_0__Lean_Elab_CheckTactic_expandCheckSimpFailure___regBuiltin_Lean_Elab_CheckTactic_expandCheckSimpFailure_declRange__3();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_CheckTactic(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Elab_Tactic_ElabTerm(uint8_t builtin);
lean_object* initialize_Lean_Elab_Command(uint8_t builtin);
lean_object* initialize_Lean_Elab_Tactic_Meta(uint8_t builtin);
lean_object* initialize_Lean_Meta_CheckTactic(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_CheckTactic(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Elab_Tactic_ElabTerm(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Command(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Tactic_Meta(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_CheckTactic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_CheckTactic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_CheckTactic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_CheckTactic(builtin);
}
#ifdef __cplusplus
}
#endif

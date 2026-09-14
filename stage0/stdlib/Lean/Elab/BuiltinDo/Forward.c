// Lean compiler output
// Module: Lean.Elab.BuiltinDo.Forward
// Imports: public import Lean.Elab.Do.Basic meta import Lean.Parser.Do import Lean.Elab.Do.Control import Lean.Elab.Do.InferControlInfo import Lean.Elab.Binders
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
lean_object* l_Lean_Elab_Term_elabFunBinders___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MessageData_ofSyntax(lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_whnfD(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
size_t lean_usize_add(size_t, size_t);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* l_Lean_Expr_mvarId_x21(lean_object*);
uint8_t l_Lean_instBEqMVarId_beq(lean_object*, lean_object*);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Lean_FindMVar_main(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
lean_object* l_Lean_Meta_isExprDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* l_Lean_Expr_sort___override(lean_object*);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_zip___redArg(lean_object*, lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* l_Lean_Expr_fvarId_x21(lean_object*);
lean_object* l_Lean_FVarId_getDecl___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_LocalDecl_binderInfo(lean_object*);
uint8_t lean_expr_eqv(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingImp(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppFn(lean_object*);
uint8_t l_Lean_Expr_isMVar(lean_object*);
extern lean_object* l_Lean_maxRecDepthErrorMessage;
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
uint64_t l_Lean_instHashableExtraModUse_hash(lean_object*);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_instBEqExtraModUse_beq(lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Lean_Elab_getBetterRef(lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_pp_macroStack;
lean_object* l_Lean_indentD(lean_object*);
lean_object* l_Lean_Environment_setExporting(lean_object*, uint8_t);
lean_object* l_Lean_mkPrivateName(lean_object*, lean_object*);
uint8_t l_Lean_Environment_contains(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_privateToUserName(lean_object*);
lean_object* l_Lean_ResolveName_resolveNamespace(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_HashMap_instInhabited___redArg();
lean_object* l_Lean_Environment_header(lean_object*);
extern lean_object* l_Lean_instInhabitedEffectiveImport_default;
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_empty___redArg();
extern lean_object* l___private_Lean_ExtraModUses_0__Lean_extraModUses;
lean_object* l_Lean_PersistentEnvExtension_addEntry___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* l_Lean_SimplePersistentEnvExtension_getState___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
double lean_float_of_nat(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
uint8_t l_Lean_Name_isAnonymous(lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Environment_getModuleIdxFor_x3f(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
extern lean_object* l_Lean_indirectModUseExt;
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_sub(size_t, size_t);
uint8_t l_Lean_isMarkedMeta(lean_object*, lean_object*);
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
lean_object* l_String_toRawSubstring_x27(lean_object*);
lean_object* l_Lean_addMacroScope(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabTerm(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_expandMacroImpl_x3f(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ResolveName_resolveGlobalName(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_unsupportedSyntaxExceptionId;
lean_object* l_Lean_Elab_Do_EffectForwarder_lift(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLambdaFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Lean_Elab_Do_elabDoSeq(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Do_Forward_matchApp_x3f(lean_object*);
lean_object* l_Lean_Core_withFreshMacroScope___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Do_InferControlInfo_ofSeq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Do_EffectForwarder_ofCont(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Do_EffectForwarder_restoreCont(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Do_DoElemCont_mkBindUnlessPure(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_checked_assign(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_expandFunBinders___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_Term_termElabAttribute;
lean_object* l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_elabDoForward_spec__0_spec__1_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_elabDoForward_spec__0_spec__1_spec__2___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_elabDoForward_spec__0_spec__1_spec__3___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_elabDoForward_spec__0_spec__1_spec__3___closed__0;
static const lean_string_object l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_elabDoForward_spec__0_spec__1_spec__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "while expanding"};
static const lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_elabDoForward_spec__0_spec__1_spec__3___closed__1 = (const lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_elabDoForward_spec__0_spec__1_spec__3___closed__1_value;
static const lean_ctor_object l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_elabDoForward_spec__0_spec__1_spec__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_elabDoForward_spec__0_spec__1_spec__3___closed__1_value)}};
static const lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_elabDoForward_spec__0_spec__1_spec__3___closed__2 = (const lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_elabDoForward_spec__0_spec__1_spec__3___closed__2_value;
static lean_once_cell_t l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_elabDoForward_spec__0_spec__1_spec__3___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_elabDoForward_spec__0_spec__1_spec__3___closed__3;
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_elabDoForward_spec__0_spec__1_spec__3(lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_elabDoForward_spec__0_spec__1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "with resulting expansion"};
static const lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_elabDoForward_spec__0_spec__1___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_elabDoForward_spec__0_spec__1___redArg___closed__0_value;
static const lean_ctor_object l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_elabDoForward_spec__0_spec__1___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_elabDoForward_spec__0_spec__1___redArg___closed__0_value)}};
static const lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_elabDoForward_spec__0_spec__1___redArg___closed__1 = (const lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_elabDoForward_spec__0_spec__1___redArg___closed__1_value;
static lean_once_cell_t l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_elabDoForward_spec__0_spec__1___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_elabDoForward_spec__0_spec__1___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_elabDoForward_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_elabDoForward_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Do_elabDoForward_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Do_elabDoForward_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Do_elabDoForward_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Do_elabDoForward_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Do_elabDoForward___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 136, .m_capacity = 136, .m_length = 133, .m_data = "`do←` may only appear as the last argument of a function application inside an enclosing `do` block, optionally inside a `fun` binder"};
static const lean_object* l_Lean_Elab_Do_elabDoForward___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_Do_elabDoForward___redArg___closed__0_value;
static lean_once_cell_t l_Lean_Elab_Do_elabDoForward___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoForward___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoForward___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoForward___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoForward(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoForward___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Do_elabDoForward_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Do_elabDoForward_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_elabDoForward_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_elabDoForward_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_elabDoForward___regBuiltin_Lean_Elab_Do_elabDoForward__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_elabDoForward___regBuiltin_Lean_Elab_Do_elabDoForward__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_elabDoForward___regBuiltin_Lean_Elab_Do_elabDoForward__1___closed__0_value;
static const lean_string_object l___private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_elabDoForward___regBuiltin_Lean_Elab_Do_elabDoForward__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_elabDoForward___regBuiltin_Lean_Elab_Do_elabDoForward__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_elabDoForward___regBuiltin_Lean_Elab_Do_elabDoForward__1___closed__1_value;
static const lean_string_object l___private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_elabDoForward___regBuiltin_Lean_Elab_Do_elabDoForward__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Term"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_elabDoForward___regBuiltin_Lean_Elab_Do_elabDoForward__1___closed__2 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_elabDoForward___regBuiltin_Lean_Elab_Do_elabDoForward__1___closed__2_value;
static const lean_string_object l___private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_elabDoForward___regBuiltin_Lean_Elab_Do_elabDoForward__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "doForward"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_elabDoForward___regBuiltin_Lean_Elab_Do_elabDoForward__1___closed__3 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_elabDoForward___regBuiltin_Lean_Elab_Do_elabDoForward__1___closed__3_value;
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_elabDoForward___regBuiltin_Lean_Elab_Do_elabDoForward__1___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_elabDoForward___regBuiltin_Lean_Elab_Do_elabDoForward__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_elabDoForward___regBuiltin_Lean_Elab_Do_elabDoForward__1___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_elabDoForward___regBuiltin_Lean_Elab_Do_elabDoForward__1___closed__4_value_aux_0),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_elabDoForward___regBuiltin_Lean_Elab_Do_elabDoForward__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_elabDoForward___regBuiltin_Lean_Elab_Do_elabDoForward__1___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_elabDoForward___regBuiltin_Lean_Elab_Do_elabDoForward__1___closed__4_value_aux_1),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_elabDoForward___regBuiltin_Lean_Elab_Do_elabDoForward__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_elabDoForward___regBuiltin_Lean_Elab_Do_elabDoForward__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_elabDoForward___regBuiltin_Lean_Elab_Do_elabDoForward__1___closed__4_value_aux_2),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_elabDoForward___regBuiltin_Lean_Elab_Do_elabDoForward__1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(207, 164, 175, 48, 233, 61, 15, 76)}};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_elabDoForward___regBuiltin_Lean_Elab_Do_elabDoForward__1___closed__4 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_elabDoForward___regBuiltin_Lean_Elab_Do_elabDoForward__1___closed__4_value;
static const lean_string_object l___private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_elabDoForward___regBuiltin_Lean_Elab_Do_elabDoForward__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_elabDoForward___regBuiltin_Lean_Elab_Do_elabDoForward__1___closed__5 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_elabDoForward___regBuiltin_Lean_Elab_Do_elabDoForward__1___closed__5_value;
static const lean_string_object l___private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_elabDoForward___regBuiltin_Lean_Elab_Do_elabDoForward__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Do"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_elabDoForward___regBuiltin_Lean_Elab_Do_elabDoForward__1___closed__6 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_elabDoForward___regBuiltin_Lean_Elab_Do_elabDoForward__1___closed__6_value;
static const lean_string_object l___private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_elabDoForward___regBuiltin_Lean_Elab_Do_elabDoForward__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "elabDoForward"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_elabDoForward___regBuiltin_Lean_Elab_Do_elabDoForward__1___closed__7 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_elabDoForward___regBuiltin_Lean_Elab_Do_elabDoForward__1___closed__7_value;
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_elabDoForward___regBuiltin_Lean_Elab_Do_elabDoForward__1___closed__8_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_elabDoForward___regBuiltin_Lean_Elab_Do_elabDoForward__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_elabDoForward___regBuiltin_Lean_Elab_Do_elabDoForward__1___closed__8_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_elabDoForward___regBuiltin_Lean_Elab_Do_elabDoForward__1___closed__8_value_aux_0),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_elabDoForward___regBuiltin_Lean_Elab_Do_elabDoForward__1___closed__5_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_elabDoForward___regBuiltin_Lean_Elab_Do_elabDoForward__1___closed__8_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_elabDoForward___regBuiltin_Lean_Elab_Do_elabDoForward__1___closed__8_value_aux_1),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_elabDoForward___regBuiltin_Lean_Elab_Do_elabDoForward__1___closed__6_value),LEAN_SCALAR_PTR_LITERAL(84, 203, 110, 70, 49, 253, 106, 1)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_elabDoForward___regBuiltin_Lean_Elab_Do_elabDoForward__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_elabDoForward___regBuiltin_Lean_Elab_Do_elabDoForward__1___closed__8_value_aux_2),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_elabDoForward___regBuiltin_Lean_Elab_Do_elabDoForward__1___closed__7_value),LEAN_SCALAR_PTR_LITERAL(86, 191, 102, 116, 164, 35, 128, 94)}};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_elabDoForward___regBuiltin_Lean_Elab_Do_elabDoForward__1___closed__8 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_elabDoForward___regBuiltin_Lean_Elab_Do_elabDoForward__1___closed__8_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_elabDoForward___regBuiltin_Lean_Elab_Do_elabDoForward__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_elabDoForward___regBuiltin_Lean_Elab_Do_elabDoForward__1___boxed(lean_object*);
static const lean_string_object l___private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_forwardHint___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_forwardHint___closed__0 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_forwardHint___closed__0_value;
static lean_once_cell_t l___private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_forwardHint___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_forwardHint___closed__1;
static const lean_string_object l___private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_forwardHint___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 32, .m_data = "` is not a valid `do←` wrapper: "};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_forwardHint___closed__2 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_forwardHint___closed__2_value;
static lean_once_cell_t l___private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_forwardHint___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_forwardHint___closed__3;
static const lean_string_object l___private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_forwardHint___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 158, .m_capacity = 158, .m_length = 148, .m_data = ". The wrapper must have type `(… → m α) → m α` for some `α` that is universally quantified in the wrapper's signature and does not appear elsewhere."};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_forwardHint___closed__4 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_forwardHint___closed__4_value;
static lean_once_cell_t l___private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_forwardHint___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_forwardHint___closed__5;
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_forwardHint(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_validateForwarder_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_validateForwarder_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_validateForwarder_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_validateForwarder_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_validateForwarder_spec__4___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_validateForwarder_spec__4___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_validateForwarder_spec__4___redArg(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_validateForwarder_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_validateForwarder_spec__4(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_validateForwarder_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_validateForwarder_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_validateForwarder_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_validateForwarder___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_validateForwarder___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_validateForwarder_spec__2___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_validateForwarder_spec__2___lam__0___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_validateForwarder_spec__3_spec__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 50, .m_capacity = 50, .m_length = 48, .m_data = "`α` appears in the forwarded body's input type `"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_validateForwarder_spec__3_spec__4___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_validateForwarder_spec__3_spec__4___closed__0_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_validateForwarder_spec__3_spec__4___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_validateForwarder_spec__3_spec__4___closed__1;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_validateForwarder_spec__3_spec__4(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_validateForwarder_spec__3_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_validateForwarder_spec__3(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_validateForwarder_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_validateForwarder___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 65, .m_capacity = 65, .m_length = 62, .m_data = "the forwarded body's `α` differs from the wrapper's return `α`"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_validateForwarder___lam__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_validateForwarder___lam__1___closed__0_value;
static lean_once_cell_t l___private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_validateForwarder___lam__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_validateForwarder___lam__1___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_validateForwarder___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_validateForwarder___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_validateForwarder_spec__2_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 55, .m_capacity = 55, .m_length = 53, .m_data = "`α` appears in an applied explicit argument of type `"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_validateForwarder_spec__2_spec__2___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_validateForwarder_spec__2_spec__2___closed__0_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_validateForwarder_spec__2_spec__2___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_validateForwarder_spec__2_spec__2___closed__1;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_validateForwarder_spec__2_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_validateForwarder_spec__2_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_validateForwarder_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_validateForwarder_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_validateForwarder___lam__2___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_validateForwarder___lam__2___closed__0;
static lean_once_cell_t l___private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_validateForwarder___lam__2___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_validateForwarder___lam__2___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_validateForwarder___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_validateForwarder___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_validateForwarder___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 45, .m_capacity = 45, .m_length = 43, .m_data = "its return type pins `α` to a concrete type"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_validateForwarder___closed__0 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_validateForwarder___closed__0_value;
static lean_once_cell_t l___private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_validateForwarder___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_validateForwarder___closed__1;
static const lean_string_object l___private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_validateForwarder___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "its return type `"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_validateForwarder___closed__2 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_validateForwarder___closed__2_value;
static lean_once_cell_t l___private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_validateForwarder___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_validateForwarder___closed__3;
static const lean_string_object l___private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_validateForwarder___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 26, .m_data = "` is not of the form `m α`"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_validateForwarder___closed__4 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_validateForwarder___closed__4_value;
static lean_once_cell_t l___private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_validateForwarder___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_validateForwarder___closed__5;
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_validateForwarder(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_validateForwarder___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_validateForwarder_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_validateForwarder_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Do_tryElabForwardApp_x3f___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "syntheticHole"};
static const lean_object* l_Lean_Elab_Do_tryElabForwardApp_x3f___lam__0___closed__0 = (const lean_object*)&l_Lean_Elab_Do_tryElabForwardApp_x3f___lam__0___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Do_tryElabForwardApp_x3f___lam__0___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_elabDoForward___regBuiltin_Lean_Elab_Do_elabDoForward__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_tryElabForwardApp_x3f___lam__0___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_tryElabForwardApp_x3f___lam__0___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_elabDoForward___regBuiltin_Lean_Elab_Do_elabDoForward__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_tryElabForwardApp_x3f___lam__0___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_tryElabForwardApp_x3f___lam__0___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_elabDoForward___regBuiltin_Lean_Elab_Do_elabDoForward__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_tryElabForwardApp_x3f___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_tryElabForwardApp_x3f___lam__0___closed__1_value_aux_2),((lean_object*)&l_Lean_Elab_Do_tryElabForwardApp_x3f___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(218, 189, 67, 60, 211, 196, 112, 165)}};
static const lean_object* l_Lean_Elab_Do_tryElabForwardApp_x3f___lam__0___closed__1 = (const lean_object*)&l_Lean_Elab_Do_tryElabForwardApp_x3f___lam__0___closed__1_value;
static const lean_string_object l_Lean_Elab_Do_tryElabForwardApp_x3f___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "\?"};
static const lean_object* l_Lean_Elab_Do_tryElabForwardApp_x3f___lam__0___closed__2 = (const lean_object*)&l_Lean_Elab_Do_tryElabForwardApp_x3f___lam__0___closed__2_value;
static const lean_string_object l_Lean_Elab_Do_tryElabForwardApp_x3f___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "forwarded"};
static const lean_object* l_Lean_Elab_Do_tryElabForwardApp_x3f___lam__0___closed__3 = (const lean_object*)&l_Lean_Elab_Do_tryElabForwardApp_x3f___lam__0___closed__3_value;
static lean_once_cell_t l_Lean_Elab_Do_tryElabForwardApp_x3f___lam__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_tryElabForwardApp_x3f___lam__0___closed__4;
static const lean_ctor_object l_Lean_Elab_Do_tryElabForwardApp_x3f___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_tryElabForwardApp_x3f___lam__0___closed__3_value),LEAN_SCALAR_PTR_LITERAL(125, 152, 115, 51, 73, 98, 174, 67)}};
static const lean_object* l_Lean_Elab_Do_tryElabForwardApp_x3f___lam__0___closed__5 = (const lean_object*)&l_Lean_Elab_Do_tryElabForwardApp_x3f___lam__0___closed__5_value;
static const lean_string_object l_Lean_Elab_Do_tryElabForwardApp_x3f___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "app"};
static const lean_object* l_Lean_Elab_Do_tryElabForwardApp_x3f___lam__0___closed__6 = (const lean_object*)&l_Lean_Elab_Do_tryElabForwardApp_x3f___lam__0___closed__6_value;
static const lean_ctor_object l_Lean_Elab_Do_tryElabForwardApp_x3f___lam__0___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_elabDoForward___regBuiltin_Lean_Elab_Do_elabDoForward__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_tryElabForwardApp_x3f___lam__0___closed__7_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_tryElabForwardApp_x3f___lam__0___closed__7_value_aux_0),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_elabDoForward___regBuiltin_Lean_Elab_Do_elabDoForward__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_tryElabForwardApp_x3f___lam__0___closed__7_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_tryElabForwardApp_x3f___lam__0___closed__7_value_aux_1),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_elabDoForward___regBuiltin_Lean_Elab_Do_elabDoForward__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_tryElabForwardApp_x3f___lam__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_tryElabForwardApp_x3f___lam__0___closed__7_value_aux_2),((lean_object*)&l_Lean_Elab_Do_tryElabForwardApp_x3f___lam__0___closed__6_value),LEAN_SCALAR_PTR_LITERAL(69, 118, 10, 41, 220, 156, 243, 179)}};
static const lean_object* l_Lean_Elab_Do_tryElabForwardApp_x3f___lam__0___closed__7 = (const lean_object*)&l_Lean_Elab_Do_tryElabForwardApp_x3f___lam__0___closed__7_value;
static const lean_string_object l_Lean_Elab_Do_tryElabForwardApp_x3f___lam__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* l_Lean_Elab_Do_tryElabForwardApp_x3f___lam__0___closed__8 = (const lean_object*)&l_Lean_Elab_Do_tryElabForwardApp_x3f___lam__0___closed__8_value;
static const lean_ctor_object l_Lean_Elab_Do_tryElabForwardApp_x3f___lam__0___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Do_tryElabForwardApp_x3f___lam__0___closed__8_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* l_Lean_Elab_Do_tryElabForwardApp_x3f___lam__0___closed__9 = (const lean_object*)&l_Lean_Elab_Do_tryElabForwardApp_x3f___lam__0___closed__9_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Do_tryElabForwardApp_x3f___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_tryElabForwardApp_x3f___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_tryElabForwardApp_x3f___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_tryElabForwardApp_x3f___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_tryElabForwardApp_x3f___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_tryElabForwardApp_x3f___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_tryElabForwardApp_x3f___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_tryElabForwardApp_x3f___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__2(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__5_spec__6_spec__9_spec__13_spec__16___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__5_spec__6_spec__9_spec__13_spec__16___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__5_spec__6_spec__9_spec__13___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__5_spec__6_spec__9_spec__13___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__5_spec__6_spec__9___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__5_spec__6_spec__9___redArg___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__3___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__3___redArg___closed__0;
static const lean_string_object l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__3___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__3___redArg___closed__1 = (const lean_object*)&l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__3___redArg___closed__1_value;
static const lean_array_object l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__3___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__3___redArg___closed__2 = (const lean_object*)&l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__3___redArg___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__5_spec__6___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__5_spec__6___closed__0;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__5_spec__6___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__5_spec__6___closed__1;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__5_spec__6___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__5_spec__6___closed__2;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__5_spec__6___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__5_spec__6___closed__3;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__5_spec__6___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__5_spec__6___closed__4;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__5_spec__6___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__5_spec__6___closed__5;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__5_spec__6___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "extraModUses"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__5_spec__6___closed__6 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__5_spec__6___closed__6_value;
static const lean_ctor_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__5_spec__6___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__5_spec__6___closed__6_value),LEAN_SCALAR_PTR_LITERAL(27, 95, 70, 98, 97, 66, 56, 109)}};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__5_spec__6___closed__7 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__5_spec__6___closed__7_value;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__5_spec__6___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = " extra mod use "};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__5_spec__6___closed__8 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__5_spec__6___closed__8_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__5_spec__6___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__5_spec__6___closed__9;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__5_spec__6___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " of "};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__5_spec__6___closed__10 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__5_spec__6___closed__10_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__5_spec__6___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__5_spec__6___closed__11;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__5_spec__6___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__5_spec__6___closed__12;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__5_spec__6___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__5_spec__6___closed__13 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__5_spec__6___closed__13_value;
static const lean_ctor_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__5_spec__6___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__5_spec__6___closed__13_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__5_spec__6___closed__14 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__5_spec__6___closed__14_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__5_spec__6___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__5_spec__6___closed__15;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__5_spec__6___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "recording "};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__5_spec__6___closed__16 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__5_spec__6___closed__16_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__5_spec__6___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__5_spec__6___closed__17;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__5_spec__6___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = " "};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__5_spec__6___closed__18 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__5_spec__6___closed__18_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__5_spec__6___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__5_spec__6___closed__19;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__5_spec__6___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "regular"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__5_spec__6___closed__20 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__5_spec__6___closed__20_value;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__5_spec__6___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "meta"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__5_spec__6___closed__21 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__5_spec__6___closed__21_value;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__5_spec__6___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "private"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__5_spec__6___closed__22 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__5_spec__6___closed__22_value;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__5_spec__6___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "public"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__5_spec__6___closed__23 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__5_spec__6___closed__23_value;
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__5_spec__6(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__5_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__5_spec__7(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__5_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__5_spec__8_spec__12___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__5_spec__8_spec__12___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__5_spec__8___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__5_spec__8___redArg___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__5___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__5___closed__0;
static const lean_array_object l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__5___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__5___closed__1 = (const lean_object*)&l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__5___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__5(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__6___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__9___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "runtime"};
static const lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__9___redArg___closed__0 = (const lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__9___redArg___closed__0_value;
static const lean_string_object l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__9___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "maxRecDepth"};
static const lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__9___redArg___closed__1 = (const lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__9___redArg___closed__1_value;
static const lean_ctor_object l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__9___redArg___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__9___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(2, 128, 123, 132, 117, 90, 116, 101)}};
static const lean_ctor_object l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__9___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__9___redArg___closed__2_value_aux_0),((lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__9___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(88, 230, 219, 180, 63, 89, 202, 3)}};
static const lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__9___redArg___closed__2 = (const lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__9___redArg___closed__2_value;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__9___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__9___redArg___closed__3;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__9___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__9___redArg___closed__4;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__9___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__9___redArg___closed__5;
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__9___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__9___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__4___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__4___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__10___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__10___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__10___redArg();
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__10___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_List_forM___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forM___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3___redArg___lam__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__8___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__8___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 158, .m_capacity = 158, .m_length = 157, .m_data = "maximum recursion depth has been reached\nuse `set_option maxRecDepth <num>` to increase limit\nuse `set_option diagnostics true` to get diagnostic information"};
static const lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Do_tryElabForwardApp_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 67, .m_capacity = 67, .m_length = 66, .m_data = "the lifted body's type does not match the wrapper's body slot type"};
static const lean_object* l_Lean_Elab_Do_tryElabForwardApp_x3f___closed__0 = (const lean_object*)&l_Lean_Elab_Do_tryElabForwardApp_x3f___closed__0_value;
static lean_once_cell_t l_Lean_Elab_Do_tryElabForwardApp_x3f___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_tryElabForwardApp_x3f___closed__1;
static const lean_string_object l_Lean_Elab_Do_tryElabForwardApp_x3f___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "hole"};
static const lean_object* l_Lean_Elab_Do_tryElabForwardApp_x3f___closed__2 = (const lean_object*)&l_Lean_Elab_Do_tryElabForwardApp_x3f___closed__2_value;
static const lean_ctor_object l_Lean_Elab_Do_tryElabForwardApp_x3f___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_elabDoForward___regBuiltin_Lean_Elab_Do_elabDoForward__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_tryElabForwardApp_x3f___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_tryElabForwardApp_x3f___closed__3_value_aux_0),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_elabDoForward___regBuiltin_Lean_Elab_Do_elabDoForward__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_tryElabForwardApp_x3f___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_tryElabForwardApp_x3f___closed__3_value_aux_1),((lean_object*)&l___private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_elabDoForward___regBuiltin_Lean_Elab_Do_elabDoForward__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_tryElabForwardApp_x3f___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_tryElabForwardApp_x3f___closed__3_value_aux_2),((lean_object*)&l_Lean_Elab_Do_tryElabForwardApp_x3f___closed__2_value),LEAN_SCALAR_PTR_LITERAL(135, 134, 219, 115, 97, 130, 74, 55)}};
static const lean_object* l_Lean_Elab_Do_tryElabForwardApp_x3f___closed__3 = (const lean_object*)&l_Lean_Elab_Do_tryElabForwardApp_x3f___closed__3_value;
static const lean_string_object l_Lean_Elab_Do_tryElabForwardApp_x3f___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "_"};
static const lean_object* l_Lean_Elab_Do_tryElabForwardApp_x3f___closed__4 = (const lean_object*)&l_Lean_Elab_Do_tryElabForwardApp_x3f___closed__4_value;
static const lean_string_object l_Lean_Elab_Do_tryElabForwardApp_x3f___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 84, .m_capacity = 84, .m_length = 81, .m_data = "A `do←` binder must be a variable. Bind a variable and `match` on it in the body."};
static const lean_object* l_Lean_Elab_Do_tryElabForwardApp_x3f___closed__5 = (const lean_object*)&l_Lean_Elab_Do_tryElabForwardApp_x3f___closed__5_value;
static lean_once_cell_t l_Lean_Elab_Do_tryElabForwardApp_x3f___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_tryElabForwardApp_x3f___closed__6;
LEAN_EXPORT lean_object* l_Lean_Elab_Do_tryElabForwardApp_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_tryElabForwardApp_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__5_spec__8(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__5_spec__8___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__5_spec__6_spec__9(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__5_spec__6_spec__9___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__5_spec__8_spec__12(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__5_spec__8_spec__12___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__5_spec__6_spec__9_spec__13(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__5_spec__6_spec__9_spec__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__5_spec__6_spec__9_spec__13_spec__16(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__5_spec__6_spec__9_spec__13_spec__16___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_elabDoForward_spec__0_spec__1_spec__2(lean_object* v_opts_1_, lean_object* v_opt_2_){
_start:
{
lean_object* v_name_3_; lean_object* v_defValue_4_; lean_object* v_map_5_; lean_object* v___x_6_; 
v_name_3_ = lean_ctor_get(v_opt_2_, 0);
v_defValue_4_ = lean_ctor_get(v_opt_2_, 1);
v_map_5_ = lean_ctor_get(v_opts_1_, 0);
v___x_6_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_5_, v_name_3_);
if (lean_obj_tag(v___x_6_) == 0)
{
uint8_t v___x_7_; 
v___x_7_ = lean_unbox(v_defValue_4_);
return v___x_7_;
}
else
{
lean_object* v_val_8_; 
v_val_8_ = lean_ctor_get(v___x_6_, 0);
lean_inc(v_val_8_);
lean_dec_ref_known(v___x_6_, 1);
if (lean_obj_tag(v_val_8_) == 1)
{
uint8_t v_v_9_; 
v_v_9_ = lean_ctor_get_uint8(v_val_8_, 0);
lean_dec_ref_known(v_val_8_, 0);
return v_v_9_;
}
else
{
uint8_t v___x_10_; 
lean_dec(v_val_8_);
v___x_10_ = lean_unbox(v_defValue_4_);
return v___x_10_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_elabDoForward_spec__0_spec__1_spec__2___boxed(lean_object* v_opts_11_, lean_object* v_opt_12_){
_start:
{
uint8_t v_res_13_; lean_object* v_r_14_; 
v_res_13_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_elabDoForward_spec__0_spec__1_spec__2(v_opts_11_, v_opt_12_);
lean_dec_ref(v_opt_12_);
lean_dec_ref(v_opts_11_);
v_r_14_ = lean_box(v_res_13_);
return v_r_14_;
}
}
static lean_object* _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_elabDoForward_spec__0_spec__1_spec__3___closed__0(void){
_start:
{
lean_object* v___x_15_; lean_object* v___x_16_; 
v___x_15_ = lean_box(1);
v___x_16_ = l_Lean_MessageData_ofFormat(v___x_15_);
return v___x_16_;
}
}
static lean_object* _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_elabDoForward_spec__0_spec__1_spec__3___closed__3(void){
_start:
{
lean_object* v___x_20_; lean_object* v___x_21_; 
v___x_20_ = ((lean_object*)(l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_elabDoForward_spec__0_spec__1_spec__3___closed__2));
v___x_21_ = l_Lean_MessageData_ofFormat(v___x_20_);
return v___x_21_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_elabDoForward_spec__0_spec__1_spec__3(lean_object* v_x_22_, lean_object* v_x_23_){
_start:
{
if (lean_obj_tag(v_x_23_) == 0)
{
return v_x_22_;
}
else
{
lean_object* v_head_24_; lean_object* v_tail_25_; lean_object* v___x_27_; uint8_t v_isShared_28_; uint8_t v_isSharedCheck_47_; 
v_head_24_ = lean_ctor_get(v_x_23_, 0);
v_tail_25_ = lean_ctor_get(v_x_23_, 1);
v_isSharedCheck_47_ = !lean_is_exclusive(v_x_23_);
if (v_isSharedCheck_47_ == 0)
{
v___x_27_ = v_x_23_;
v_isShared_28_ = v_isSharedCheck_47_;
goto v_resetjp_26_;
}
else
{
lean_inc(v_tail_25_);
lean_inc(v_head_24_);
lean_dec(v_x_23_);
v___x_27_ = lean_box(0);
v_isShared_28_ = v_isSharedCheck_47_;
goto v_resetjp_26_;
}
v_resetjp_26_:
{
lean_object* v_before_29_; lean_object* v___x_31_; uint8_t v_isShared_32_; uint8_t v_isSharedCheck_45_; 
v_before_29_ = lean_ctor_get(v_head_24_, 0);
v_isSharedCheck_45_ = !lean_is_exclusive(v_head_24_);
if (v_isSharedCheck_45_ == 0)
{
lean_object* v_unused_46_; 
v_unused_46_ = lean_ctor_get(v_head_24_, 1);
lean_dec(v_unused_46_);
v___x_31_ = v_head_24_;
v_isShared_32_ = v_isSharedCheck_45_;
goto v_resetjp_30_;
}
else
{
lean_inc(v_before_29_);
lean_dec(v_head_24_);
v___x_31_ = lean_box(0);
v_isShared_32_ = v_isSharedCheck_45_;
goto v_resetjp_30_;
}
v_resetjp_30_:
{
lean_object* v___x_33_; lean_object* v___x_35_; 
v___x_33_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_elabDoForward_spec__0_spec__1_spec__3___closed__0, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_elabDoForward_spec__0_spec__1_spec__3___closed__0_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_elabDoForward_spec__0_spec__1_spec__3___closed__0);
if (v_isShared_32_ == 0)
{
lean_ctor_set_tag(v___x_31_, 7);
lean_ctor_set(v___x_31_, 1, v___x_33_);
lean_ctor_set(v___x_31_, 0, v_x_22_);
v___x_35_ = v___x_31_;
goto v_reusejp_34_;
}
else
{
lean_object* v_reuseFailAlloc_44_; 
v_reuseFailAlloc_44_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_44_, 0, v_x_22_);
lean_ctor_set(v_reuseFailAlloc_44_, 1, v___x_33_);
v___x_35_ = v_reuseFailAlloc_44_;
goto v_reusejp_34_;
}
v_reusejp_34_:
{
lean_object* v___x_36_; lean_object* v___x_38_; 
v___x_36_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_elabDoForward_spec__0_spec__1_spec__3___closed__3, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_elabDoForward_spec__0_spec__1_spec__3___closed__3_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_elabDoForward_spec__0_spec__1_spec__3___closed__3);
if (v_isShared_28_ == 0)
{
lean_ctor_set_tag(v___x_27_, 7);
lean_ctor_set(v___x_27_, 1, v___x_36_);
lean_ctor_set(v___x_27_, 0, v___x_35_);
v___x_38_ = v___x_27_;
goto v_reusejp_37_;
}
else
{
lean_object* v_reuseFailAlloc_43_; 
v_reuseFailAlloc_43_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_43_, 0, v___x_35_);
lean_ctor_set(v_reuseFailAlloc_43_, 1, v___x_36_);
v___x_38_ = v_reuseFailAlloc_43_;
goto v_reusejp_37_;
}
v_reusejp_37_:
{
lean_object* v___x_39_; lean_object* v___x_40_; lean_object* v___x_41_; 
v___x_39_ = l_Lean_MessageData_ofSyntax(v_before_29_);
v___x_40_ = l_Lean_indentD(v___x_39_);
v___x_41_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_41_, 0, v___x_38_);
lean_ctor_set(v___x_41_, 1, v___x_40_);
v_x_22_ = v___x_41_;
v_x_23_ = v_tail_25_;
goto _start;
}
}
}
}
}
}
}
static lean_object* _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_elabDoForward_spec__0_spec__1___redArg___closed__2(void){
_start:
{
lean_object* v___x_51_; lean_object* v___x_52_; 
v___x_51_ = ((lean_object*)(l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_elabDoForward_spec__0_spec__1___redArg___closed__1));
v___x_52_ = l_Lean_MessageData_ofFormat(v___x_51_);
return v___x_52_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_elabDoForward_spec__0_spec__1___redArg(lean_object* v_msgData_53_, lean_object* v_macroStack_54_, lean_object* v___y_55_){
_start:
{
lean_object* v_toCold_57_; lean_object* v_options_58_; lean_object* v___x_59_; uint8_t v___x_60_; 
v_toCold_57_ = lean_ctor_get(v___y_55_, 0);
v_options_58_ = lean_ctor_get(v_toCold_57_, 2);
v___x_59_ = l_Lean_Elab_pp_macroStack;
v___x_60_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_elabDoForward_spec__0_spec__1_spec__2(v_options_58_, v___x_59_);
if (v___x_60_ == 0)
{
lean_object* v___x_61_; 
lean_dec(v_macroStack_54_);
v___x_61_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_61_, 0, v_msgData_53_);
return v___x_61_;
}
else
{
if (lean_obj_tag(v_macroStack_54_) == 0)
{
lean_object* v___x_62_; 
v___x_62_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_62_, 0, v_msgData_53_);
return v___x_62_;
}
else
{
lean_object* v_head_63_; lean_object* v_after_64_; lean_object* v___x_66_; uint8_t v_isShared_67_; uint8_t v_isSharedCheck_79_; 
v_head_63_ = lean_ctor_get(v_macroStack_54_, 0);
lean_inc(v_head_63_);
v_after_64_ = lean_ctor_get(v_head_63_, 1);
v_isSharedCheck_79_ = !lean_is_exclusive(v_head_63_);
if (v_isSharedCheck_79_ == 0)
{
lean_object* v_unused_80_; 
v_unused_80_ = lean_ctor_get(v_head_63_, 0);
lean_dec(v_unused_80_);
v___x_66_ = v_head_63_;
v_isShared_67_ = v_isSharedCheck_79_;
goto v_resetjp_65_;
}
else
{
lean_inc(v_after_64_);
lean_dec(v_head_63_);
v___x_66_ = lean_box(0);
v_isShared_67_ = v_isSharedCheck_79_;
goto v_resetjp_65_;
}
v_resetjp_65_:
{
lean_object* v___x_68_; lean_object* v___x_70_; 
v___x_68_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_elabDoForward_spec__0_spec__1_spec__3___closed__0, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_elabDoForward_spec__0_spec__1_spec__3___closed__0_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_elabDoForward_spec__0_spec__1_spec__3___closed__0);
if (v_isShared_67_ == 0)
{
lean_ctor_set_tag(v___x_66_, 7);
lean_ctor_set(v___x_66_, 1, v___x_68_);
lean_ctor_set(v___x_66_, 0, v_msgData_53_);
v___x_70_ = v___x_66_;
goto v_reusejp_69_;
}
else
{
lean_object* v_reuseFailAlloc_78_; 
v_reuseFailAlloc_78_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_78_, 0, v_msgData_53_);
lean_ctor_set(v_reuseFailAlloc_78_, 1, v___x_68_);
v___x_70_ = v_reuseFailAlloc_78_;
goto v_reusejp_69_;
}
v_reusejp_69_:
{
lean_object* v___x_71_; lean_object* v___x_72_; lean_object* v___x_73_; lean_object* v___x_74_; lean_object* v_msgData_75_; lean_object* v___x_76_; lean_object* v___x_77_; 
v___x_71_ = lean_obj_once(&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_elabDoForward_spec__0_spec__1___redArg___closed__2, &l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_elabDoForward_spec__0_spec__1___redArg___closed__2_once, _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_elabDoForward_spec__0_spec__1___redArg___closed__2);
v___x_72_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_72_, 0, v___x_70_);
lean_ctor_set(v___x_72_, 1, v___x_71_);
v___x_73_ = l_Lean_MessageData_ofSyntax(v_after_64_);
v___x_74_ = l_Lean_indentD(v___x_73_);
v_msgData_75_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_msgData_75_, 0, v___x_72_);
lean_ctor_set(v_msgData_75_, 1, v___x_74_);
v___x_76_ = l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_elabDoForward_spec__0_spec__1_spec__3(v_msgData_75_, v_macroStack_54_);
v___x_77_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_77_, 0, v___x_76_);
return v___x_77_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_elabDoForward_spec__0_spec__1___redArg___boxed(lean_object* v_msgData_81_, lean_object* v_macroStack_82_, lean_object* v___y_83_, lean_object* v___y_84_){
_start:
{
lean_object* v_res_85_; 
v_res_85_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_elabDoForward_spec__0_spec__1___redArg(v_msgData_81_, v_macroStack_82_, v___y_83_);
lean_dec_ref(v___y_83_);
return v_res_85_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Do_elabDoForward_spec__0_spec__0(lean_object* v_msgData_86_, lean_object* v___y_87_, lean_object* v___y_88_, lean_object* v___y_89_, lean_object* v___y_90_){
_start:
{
lean_object* v___x_92_; lean_object* v_env_93_; lean_object* v___x_94_; lean_object* v_toCold_95_; lean_object* v_mctx_96_; lean_object* v_lctx_97_; lean_object* v_options_98_; lean_object* v___x_99_; lean_object* v___x_100_; lean_object* v___x_101_; 
v___x_92_ = lean_st_ref_get(v___y_90_);
v_env_93_ = lean_ctor_get(v___x_92_, 0);
lean_inc_ref(v_env_93_);
lean_dec(v___x_92_);
v___x_94_ = lean_st_ref_get(v___y_88_);
v_toCold_95_ = lean_ctor_get(v___y_89_, 0);
v_mctx_96_ = lean_ctor_get(v___x_94_, 0);
lean_inc_ref(v_mctx_96_);
lean_dec(v___x_94_);
v_lctx_97_ = lean_ctor_get(v___y_87_, 2);
v_options_98_ = lean_ctor_get(v_toCold_95_, 2);
lean_inc_ref(v_options_98_);
lean_inc_ref(v_lctx_97_);
v___x_99_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_99_, 0, v_env_93_);
lean_ctor_set(v___x_99_, 1, v_mctx_96_);
lean_ctor_set(v___x_99_, 2, v_lctx_97_);
lean_ctor_set(v___x_99_, 3, v_options_98_);
v___x_100_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_100_, 0, v___x_99_);
lean_ctor_set(v___x_100_, 1, v_msgData_86_);
v___x_101_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_101_, 0, v___x_100_);
return v___x_101_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Do_elabDoForward_spec__0_spec__0___boxed(lean_object* v_msgData_102_, lean_object* v___y_103_, lean_object* v___y_104_, lean_object* v___y_105_, lean_object* v___y_106_, lean_object* v___y_107_){
_start:
{
lean_object* v_res_108_; 
v_res_108_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Do_elabDoForward_spec__0_spec__0(v_msgData_102_, v___y_103_, v___y_104_, v___y_105_, v___y_106_);
lean_dec(v___y_106_);
lean_dec_ref(v___y_105_);
lean_dec(v___y_104_);
lean_dec_ref(v___y_103_);
return v_res_108_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Do_elabDoForward_spec__0___redArg(lean_object* v_msg_109_, lean_object* v___y_110_, lean_object* v___y_111_, lean_object* v___y_112_, lean_object* v___y_113_, lean_object* v___y_114_, lean_object* v___y_115_){
_start:
{
lean_object* v_ref_117_; lean_object* v_macroStack_118_; lean_object* v___x_119_; lean_object* v___x_120_; lean_object* v_a_121_; lean_object* v___x_122_; lean_object* v_a_123_; lean_object* v___x_125_; uint8_t v_isShared_126_; uint8_t v_isSharedCheck_131_; 
v_ref_117_ = lean_ctor_get(v___y_114_, 2);
v_macroStack_118_ = lean_ctor_get(v___y_110_, 1);
v___x_119_ = l_Lean_Elab_getBetterRef(v_ref_117_, v_macroStack_118_);
v___x_120_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Do_elabDoForward_spec__0_spec__0(v_msg_109_, v___y_112_, v___y_113_, v___y_114_, v___y_115_);
v_a_121_ = lean_ctor_get(v___x_120_, 0);
lean_inc(v_a_121_);
lean_dec_ref(v___x_120_);
lean_inc(v_macroStack_118_);
v___x_122_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_elabDoForward_spec__0_spec__1___redArg(v_a_121_, v_macroStack_118_, v___y_114_);
v_a_123_ = lean_ctor_get(v___x_122_, 0);
v_isSharedCheck_131_ = !lean_is_exclusive(v___x_122_);
if (v_isSharedCheck_131_ == 0)
{
v___x_125_ = v___x_122_;
v_isShared_126_ = v_isSharedCheck_131_;
goto v_resetjp_124_;
}
else
{
lean_inc(v_a_123_);
lean_dec(v___x_122_);
v___x_125_ = lean_box(0);
v_isShared_126_ = v_isSharedCheck_131_;
goto v_resetjp_124_;
}
v_resetjp_124_:
{
lean_object* v___x_127_; lean_object* v___x_129_; 
v___x_127_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_127_, 0, v___x_119_);
lean_ctor_set(v___x_127_, 1, v_a_123_);
if (v_isShared_126_ == 0)
{
lean_ctor_set_tag(v___x_125_, 1);
lean_ctor_set(v___x_125_, 0, v___x_127_);
v___x_129_ = v___x_125_;
goto v_reusejp_128_;
}
else
{
lean_object* v_reuseFailAlloc_130_; 
v_reuseFailAlloc_130_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_130_, 0, v___x_127_);
v___x_129_ = v_reuseFailAlloc_130_;
goto v_reusejp_128_;
}
v_reusejp_128_:
{
return v___x_129_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Do_elabDoForward_spec__0___redArg___boxed(lean_object* v_msg_132_, lean_object* v___y_133_, lean_object* v___y_134_, lean_object* v___y_135_, lean_object* v___y_136_, lean_object* v___y_137_, lean_object* v___y_138_, lean_object* v___y_139_){
_start:
{
lean_object* v_res_140_; 
v_res_140_ = l_Lean_throwError___at___00Lean_Elab_Do_elabDoForward_spec__0___redArg(v_msg_132_, v___y_133_, v___y_134_, v___y_135_, v___y_136_, v___y_137_, v___y_138_);
lean_dec(v___y_138_);
lean_dec_ref(v___y_137_);
lean_dec(v___y_136_);
lean_dec_ref(v___y_135_);
lean_dec(v___y_134_);
lean_dec_ref(v___y_133_);
return v_res_140_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoForward___redArg___closed__1(void){
_start:
{
lean_object* v___x_142_; lean_object* v___x_143_; 
v___x_142_ = ((lean_object*)(l_Lean_Elab_Do_elabDoForward___redArg___closed__0));
v___x_143_ = l_Lean_stringToMessageData(v___x_142_);
return v___x_143_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoForward___redArg(lean_object* v_a_144_, lean_object* v_a_145_, lean_object* v_a_146_, lean_object* v_a_147_, lean_object* v_a_148_, lean_object* v_a_149_){
_start:
{
lean_object* v___x_151_; lean_object* v___x_152_; 
v___x_151_ = lean_obj_once(&l_Lean_Elab_Do_elabDoForward___redArg___closed__1, &l_Lean_Elab_Do_elabDoForward___redArg___closed__1_once, _init_l_Lean_Elab_Do_elabDoForward___redArg___closed__1);
v___x_152_ = l_Lean_throwError___at___00Lean_Elab_Do_elabDoForward_spec__0___redArg(v___x_151_, v_a_144_, v_a_145_, v_a_146_, v_a_147_, v_a_148_, v_a_149_);
return v___x_152_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoForward___redArg___boxed(lean_object* v_a_153_, lean_object* v_a_154_, lean_object* v_a_155_, lean_object* v_a_156_, lean_object* v_a_157_, lean_object* v_a_158_, lean_object* v_a_159_){
_start:
{
lean_object* v_res_160_; 
v_res_160_ = l_Lean_Elab_Do_elabDoForward___redArg(v_a_153_, v_a_154_, v_a_155_, v_a_156_, v_a_157_, v_a_158_);
lean_dec(v_a_158_);
lean_dec_ref(v_a_157_);
lean_dec(v_a_156_);
lean_dec_ref(v_a_155_);
lean_dec(v_a_154_);
lean_dec_ref(v_a_153_);
return v_res_160_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoForward(lean_object* v_x_161_, lean_object* v_x_162_, lean_object* v_a_163_, lean_object* v_a_164_, lean_object* v_a_165_, lean_object* v_a_166_, lean_object* v_a_167_, lean_object* v_a_168_){
_start:
{
lean_object* v___x_170_; 
v___x_170_ = l_Lean_Elab_Do_elabDoForward___redArg(v_a_163_, v_a_164_, v_a_165_, v_a_166_, v_a_167_, v_a_168_);
return v___x_170_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoForward___boxed(lean_object* v_x_171_, lean_object* v_x_172_, lean_object* v_a_173_, lean_object* v_a_174_, lean_object* v_a_175_, lean_object* v_a_176_, lean_object* v_a_177_, lean_object* v_a_178_, lean_object* v_a_179_){
_start:
{
lean_object* v_res_180_; 
v_res_180_ = l_Lean_Elab_Do_elabDoForward(v_x_171_, v_x_172_, v_a_173_, v_a_174_, v_a_175_, v_a_176_, v_a_177_, v_a_178_);
lean_dec(v_a_178_);
lean_dec_ref(v_a_177_);
lean_dec(v_a_176_);
lean_dec_ref(v_a_175_);
lean_dec(v_a_174_);
lean_dec_ref(v_a_173_);
lean_dec(v_x_172_);
lean_dec(v_x_171_);
return v_res_180_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Do_elabDoForward_spec__0(lean_object* v_00_u03b1_181_, lean_object* v_msg_182_, lean_object* v___y_183_, lean_object* v___y_184_, lean_object* v___y_185_, lean_object* v___y_186_, lean_object* v___y_187_, lean_object* v___y_188_){
_start:
{
lean_object* v___x_190_; 
v___x_190_ = l_Lean_throwError___at___00Lean_Elab_Do_elabDoForward_spec__0___redArg(v_msg_182_, v___y_183_, v___y_184_, v___y_185_, v___y_186_, v___y_187_, v___y_188_);
return v___x_190_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Do_elabDoForward_spec__0___boxed(lean_object* v_00_u03b1_191_, lean_object* v_msg_192_, lean_object* v___y_193_, lean_object* v___y_194_, lean_object* v___y_195_, lean_object* v___y_196_, lean_object* v___y_197_, lean_object* v___y_198_, lean_object* v___y_199_){
_start:
{
lean_object* v_res_200_; 
v_res_200_ = l_Lean_throwError___at___00Lean_Elab_Do_elabDoForward_spec__0(v_00_u03b1_191_, v_msg_192_, v___y_193_, v___y_194_, v___y_195_, v___y_196_, v___y_197_, v___y_198_);
lean_dec(v___y_198_);
lean_dec_ref(v___y_197_);
lean_dec(v___y_196_);
lean_dec_ref(v___y_195_);
lean_dec(v___y_194_);
lean_dec_ref(v___y_193_);
return v_res_200_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_elabDoForward_spec__0_spec__1(lean_object* v_msgData_201_, lean_object* v_macroStack_202_, lean_object* v___y_203_, lean_object* v___y_204_, lean_object* v___y_205_, lean_object* v___y_206_, lean_object* v___y_207_, lean_object* v___y_208_){
_start:
{
lean_object* v___x_210_; 
v___x_210_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_elabDoForward_spec__0_spec__1___redArg(v_msgData_201_, v_macroStack_202_, v___y_207_);
return v___x_210_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_elabDoForward_spec__0_spec__1___boxed(lean_object* v_msgData_211_, lean_object* v_macroStack_212_, lean_object* v___y_213_, lean_object* v___y_214_, lean_object* v___y_215_, lean_object* v___y_216_, lean_object* v___y_217_, lean_object* v___y_218_, lean_object* v___y_219_){
_start:
{
lean_object* v_res_220_; 
v_res_220_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Do_elabDoForward_spec__0_spec__1(v_msgData_211_, v_macroStack_212_, v___y_213_, v___y_214_, v___y_215_, v___y_216_, v___y_217_, v___y_218_);
lean_dec(v___y_218_);
lean_dec_ref(v___y_217_);
lean_dec(v___y_216_);
lean_dec_ref(v___y_215_);
lean_dec(v___y_214_);
lean_dec_ref(v___y_213_);
return v_res_220_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_elabDoForward___regBuiltin_Lean_Elab_Do_elabDoForward__1(){
_start:
{
lean_object* v___x_239_; lean_object* v___x_240_; lean_object* v___x_241_; lean_object* v___x_242_; lean_object* v___x_243_; 
v___x_239_ = l_Lean_Elab_Term_termElabAttribute;
v___x_240_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_elabDoForward___regBuiltin_Lean_Elab_Do_elabDoForward__1___closed__4));
v___x_241_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_elabDoForward___regBuiltin_Lean_Elab_Do_elabDoForward__1___closed__8));
v___x_242_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_elabDoForward___boxed), 9, 0);
v___x_243_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_239_, v___x_240_, v___x_241_, v___x_242_);
return v___x_243_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_elabDoForward___regBuiltin_Lean_Elab_Do_elabDoForward__1___boxed(lean_object* v_a_244_){
_start:
{
lean_object* v_res_245_; 
v_res_245_ = l___private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_elabDoForward___regBuiltin_Lean_Elab_Do_elabDoForward__1();
return v_res_245_;
}
}
static lean_object* _init_l___private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_forwardHint___closed__1(void){
_start:
{
lean_object* v___x_247_; lean_object* v___x_248_; 
v___x_247_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_forwardHint___closed__0));
v___x_248_ = l_Lean_stringToMessageData(v___x_247_);
return v___x_248_;
}
}
static lean_object* _init_l___private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_forwardHint___closed__3(void){
_start:
{
lean_object* v___x_250_; lean_object* v___x_251_; 
v___x_250_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_forwardHint___closed__2));
v___x_251_ = l_Lean_stringToMessageData(v___x_250_);
return v___x_251_;
}
}
static lean_object* _init_l___private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_forwardHint___closed__5(void){
_start:
{
lean_object* v___x_253_; lean_object* v___x_254_; 
v___x_253_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_forwardHint___closed__4));
v___x_254_ = l_Lean_stringToMessageData(v___x_253_);
return v___x_254_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_forwardHint(lean_object* v_headApp_255_, lean_object* v_reason_256_){
_start:
{
lean_object* v___x_257_; lean_object* v___x_258_; lean_object* v___x_259_; lean_object* v___x_260_; lean_object* v___x_261_; lean_object* v___x_262_; lean_object* v___x_263_; lean_object* v___x_264_; 
v___x_257_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_forwardHint___closed__1, &l___private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_forwardHint___closed__1_once, _init_l___private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_forwardHint___closed__1);
v___x_258_ = l_Lean_MessageData_ofSyntax(v_headApp_255_);
v___x_259_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_259_, 0, v___x_257_);
lean_ctor_set(v___x_259_, 1, v___x_258_);
v___x_260_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_forwardHint___closed__3, &l___private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_forwardHint___closed__3_once, _init_l___private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_forwardHint___closed__3);
v___x_261_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_261_, 0, v___x_259_);
lean_ctor_set(v___x_261_, 1, v___x_260_);
v___x_262_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_262_, 0, v___x_261_);
lean_ctor_set(v___x_262_, 1, v_reason_256_);
v___x_263_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_forwardHint___closed__5, &l___private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_forwardHint___closed__5_once, _init_l___private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_forwardHint___closed__5);
v___x_264_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_264_, 0, v___x_262_);
lean_ctor_set(v___x_264_, 1, v___x_263_);
return v___x_264_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_validateForwarder_spec__1___redArg(lean_object* v_e_265_, lean_object* v___y_266_){
_start:
{
uint8_t v___x_268_; 
v___x_268_ = l_Lean_Expr_hasMVar(v_e_265_);
if (v___x_268_ == 0)
{
lean_object* v___x_269_; 
v___x_269_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_269_, 0, v_e_265_);
return v___x_269_;
}
else
{
lean_object* v___x_270_; lean_object* v_mctx_271_; lean_object* v___x_272_; lean_object* v_fst_273_; lean_object* v_snd_274_; lean_object* v___x_275_; lean_object* v_cache_276_; lean_object* v_zetaDeltaFVarIds_277_; lean_object* v_postponed_278_; lean_object* v_diag_279_; lean_object* v___x_281_; uint8_t v_isShared_282_; uint8_t v_isSharedCheck_288_; 
v___x_270_ = lean_st_ref_get(v___y_266_);
v_mctx_271_ = lean_ctor_get(v___x_270_, 0);
lean_inc_ref(v_mctx_271_);
lean_dec(v___x_270_);
v___x_272_ = l_Lean_instantiateMVarsCore(v_mctx_271_, v_e_265_);
v_fst_273_ = lean_ctor_get(v___x_272_, 0);
lean_inc(v_fst_273_);
v_snd_274_ = lean_ctor_get(v___x_272_, 1);
lean_inc(v_snd_274_);
lean_dec_ref(v___x_272_);
v___x_275_ = lean_st_ref_take(v___y_266_);
v_cache_276_ = lean_ctor_get(v___x_275_, 1);
v_zetaDeltaFVarIds_277_ = lean_ctor_get(v___x_275_, 2);
v_postponed_278_ = lean_ctor_get(v___x_275_, 3);
v_diag_279_ = lean_ctor_get(v___x_275_, 4);
v_isSharedCheck_288_ = !lean_is_exclusive(v___x_275_);
if (v_isSharedCheck_288_ == 0)
{
lean_object* v_unused_289_; 
v_unused_289_ = lean_ctor_get(v___x_275_, 0);
lean_dec(v_unused_289_);
v___x_281_ = v___x_275_;
v_isShared_282_ = v_isSharedCheck_288_;
goto v_resetjp_280_;
}
else
{
lean_inc(v_diag_279_);
lean_inc(v_postponed_278_);
lean_inc(v_zetaDeltaFVarIds_277_);
lean_inc(v_cache_276_);
lean_dec(v___x_275_);
v___x_281_ = lean_box(0);
v_isShared_282_ = v_isSharedCheck_288_;
goto v_resetjp_280_;
}
v_resetjp_280_:
{
lean_object* v___x_284_; 
if (v_isShared_282_ == 0)
{
lean_ctor_set(v___x_281_, 0, v_snd_274_);
v___x_284_ = v___x_281_;
goto v_reusejp_283_;
}
else
{
lean_object* v_reuseFailAlloc_287_; 
v_reuseFailAlloc_287_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_287_, 0, v_snd_274_);
lean_ctor_set(v_reuseFailAlloc_287_, 1, v_cache_276_);
lean_ctor_set(v_reuseFailAlloc_287_, 2, v_zetaDeltaFVarIds_277_);
lean_ctor_set(v_reuseFailAlloc_287_, 3, v_postponed_278_);
lean_ctor_set(v_reuseFailAlloc_287_, 4, v_diag_279_);
v___x_284_ = v_reuseFailAlloc_287_;
goto v_reusejp_283_;
}
v_reusejp_283_:
{
lean_object* v___x_285_; lean_object* v___x_286_; 
v___x_285_ = lean_st_ref_put(v___y_266_, v___x_284_);
v___x_286_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_286_, 0, v_fst_273_);
return v___x_286_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_validateForwarder_spec__1___redArg___boxed(lean_object* v_e_290_, lean_object* v___y_291_, lean_object* v___y_292_){
_start:
{
lean_object* v_res_293_; 
v_res_293_ = l_Lean_instantiateMVars___at___00__private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_validateForwarder_spec__1___redArg(v_e_290_, v___y_291_);
lean_dec(v___y_291_);
return v_res_293_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_validateForwarder_spec__1(lean_object* v_e_294_, lean_object* v___y_295_, lean_object* v___y_296_, lean_object* v___y_297_, lean_object* v___y_298_){
_start:
{
lean_object* v___x_300_; 
v___x_300_ = l_Lean_instantiateMVars___at___00__private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_validateForwarder_spec__1___redArg(v_e_294_, v___y_296_);
return v___x_300_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_validateForwarder_spec__1___boxed(lean_object* v_e_301_, lean_object* v___y_302_, lean_object* v___y_303_, lean_object* v___y_304_, lean_object* v___y_305_, lean_object* v___y_306_){
_start:
{
lean_object* v_res_307_; 
v_res_307_ = l_Lean_instantiateMVars___at___00__private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_validateForwarder_spec__1(v_e_301_, v___y_302_, v___y_303_, v___y_304_, v___y_305_);
lean_dec(v___y_305_);
lean_dec_ref(v___y_304_);
lean_dec(v___y_303_);
lean_dec_ref(v___y_302_);
return v_res_307_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_validateForwarder_spec__4___redArg___lam__0(lean_object* v_k_308_, lean_object* v_b_309_, lean_object* v_c_310_, lean_object* v___y_311_, lean_object* v___y_312_, lean_object* v___y_313_, lean_object* v___y_314_){
_start:
{
lean_object* v___x_316_; 
lean_inc(v___y_314_);
lean_inc_ref(v___y_313_);
lean_inc(v___y_312_);
lean_inc_ref(v___y_311_);
v___x_316_ = lean_apply_7(v_k_308_, v_b_309_, v_c_310_, v___y_311_, v___y_312_, v___y_313_, v___y_314_, lean_box(0));
return v___x_316_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_validateForwarder_spec__4___redArg___lam__0___boxed(lean_object* v_k_317_, lean_object* v_b_318_, lean_object* v_c_319_, lean_object* v___y_320_, lean_object* v___y_321_, lean_object* v___y_322_, lean_object* v___y_323_, lean_object* v___y_324_){
_start:
{
lean_object* v_res_325_; 
v_res_325_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_validateForwarder_spec__4___redArg___lam__0(v_k_317_, v_b_318_, v_c_319_, v___y_320_, v___y_321_, v___y_322_, v___y_323_);
lean_dec(v___y_323_);
lean_dec_ref(v___y_322_);
lean_dec(v___y_321_);
lean_dec_ref(v___y_320_);
return v_res_325_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_validateForwarder_spec__4___redArg(lean_object* v_type_326_, lean_object* v_k_327_, uint8_t v_cleanupAnnotations_328_, uint8_t v_whnfType_329_, lean_object* v___y_330_, lean_object* v___y_331_, lean_object* v___y_332_, lean_object* v___y_333_){
_start:
{
lean_object* v___f_335_; lean_object* v___x_336_; 
v___f_335_ = lean_alloc_closure((void*)(l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_validateForwarder_spec__4___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_335_, 0, v_k_327_);
v___x_336_ = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingImp(lean_box(0), v_type_326_, v___f_335_, v_cleanupAnnotations_328_, v_whnfType_329_, v___y_330_, v___y_331_, v___y_332_, v___y_333_);
if (lean_obj_tag(v___x_336_) == 0)
{
lean_object* v_a_337_; lean_object* v___x_339_; uint8_t v_isShared_340_; uint8_t v_isSharedCheck_344_; 
v_a_337_ = lean_ctor_get(v___x_336_, 0);
v_isSharedCheck_344_ = !lean_is_exclusive(v___x_336_);
if (v_isSharedCheck_344_ == 0)
{
v___x_339_ = v___x_336_;
v_isShared_340_ = v_isSharedCheck_344_;
goto v_resetjp_338_;
}
else
{
lean_inc(v_a_337_);
lean_dec(v___x_336_);
v___x_339_ = lean_box(0);
v_isShared_340_ = v_isSharedCheck_344_;
goto v_resetjp_338_;
}
v_resetjp_338_:
{
lean_object* v___x_342_; 
if (v_isShared_340_ == 0)
{
v___x_342_ = v___x_339_;
goto v_reusejp_341_;
}
else
{
lean_object* v_reuseFailAlloc_343_; 
v_reuseFailAlloc_343_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_343_, 0, v_a_337_);
v___x_342_ = v_reuseFailAlloc_343_;
goto v_reusejp_341_;
}
v_reusejp_341_:
{
return v___x_342_;
}
}
}
else
{
lean_object* v_a_345_; lean_object* v___x_347_; uint8_t v_isShared_348_; uint8_t v_isSharedCheck_352_; 
v_a_345_ = lean_ctor_get(v___x_336_, 0);
v_isSharedCheck_352_ = !lean_is_exclusive(v___x_336_);
if (v_isSharedCheck_352_ == 0)
{
v___x_347_ = v___x_336_;
v_isShared_348_ = v_isSharedCheck_352_;
goto v_resetjp_346_;
}
else
{
lean_inc(v_a_345_);
lean_dec(v___x_336_);
v___x_347_ = lean_box(0);
v_isShared_348_ = v_isSharedCheck_352_;
goto v_resetjp_346_;
}
v_resetjp_346_:
{
lean_object* v___x_350_; 
if (v_isShared_348_ == 0)
{
v___x_350_ = v___x_347_;
goto v_reusejp_349_;
}
else
{
lean_object* v_reuseFailAlloc_351_; 
v_reuseFailAlloc_351_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_351_, 0, v_a_345_);
v___x_350_ = v_reuseFailAlloc_351_;
goto v_reusejp_349_;
}
v_reusejp_349_:
{
return v___x_350_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_validateForwarder_spec__4___redArg___boxed(lean_object* v_type_353_, lean_object* v_k_354_, lean_object* v_cleanupAnnotations_355_, lean_object* v_whnfType_356_, lean_object* v___y_357_, lean_object* v___y_358_, lean_object* v___y_359_, lean_object* v___y_360_, lean_object* v___y_361_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_362_; uint8_t v_whnfType_boxed_363_; lean_object* v_res_364_; 
v_cleanupAnnotations_boxed_362_ = lean_unbox(v_cleanupAnnotations_355_);
v_whnfType_boxed_363_ = lean_unbox(v_whnfType_356_);
v_res_364_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_validateForwarder_spec__4___redArg(v_type_353_, v_k_354_, v_cleanupAnnotations_boxed_362_, v_whnfType_boxed_363_, v___y_357_, v___y_358_, v___y_359_, v___y_360_);
lean_dec(v___y_360_);
lean_dec_ref(v___y_359_);
lean_dec(v___y_358_);
lean_dec_ref(v___y_357_);
return v_res_364_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_validateForwarder_spec__4(lean_object* v_00_u03b1_365_, lean_object* v_type_366_, lean_object* v_k_367_, uint8_t v_cleanupAnnotations_368_, uint8_t v_whnfType_369_, lean_object* v___y_370_, lean_object* v___y_371_, lean_object* v___y_372_, lean_object* v___y_373_){
_start:
{
lean_object* v___x_375_; 
v___x_375_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_validateForwarder_spec__4___redArg(v_type_366_, v_k_367_, v_cleanupAnnotations_368_, v_whnfType_369_, v___y_370_, v___y_371_, v___y_372_, v___y_373_);
return v___x_375_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_validateForwarder_spec__4___boxed(lean_object* v_00_u03b1_376_, lean_object* v_type_377_, lean_object* v_k_378_, lean_object* v_cleanupAnnotations_379_, lean_object* v_whnfType_380_, lean_object* v___y_381_, lean_object* v___y_382_, lean_object* v___y_383_, lean_object* v___y_384_, lean_object* v___y_385_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_386_; uint8_t v_whnfType_boxed_387_; lean_object* v_res_388_; 
v_cleanupAnnotations_boxed_386_ = lean_unbox(v_cleanupAnnotations_379_);
v_whnfType_boxed_387_ = lean_unbox(v_whnfType_380_);
v_res_388_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_validateForwarder_spec__4(v_00_u03b1_376_, v_type_377_, v_k_378_, v_cleanupAnnotations_boxed_386_, v_whnfType_boxed_387_, v___y_381_, v___y_382_, v___y_383_, v___y_384_);
lean_dec(v___y_384_);
lean_dec_ref(v___y_383_);
lean_dec(v___y_382_);
lean_dec_ref(v___y_381_);
return v_res_388_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_validateForwarder_spec__0___redArg(lean_object* v_msg_389_, lean_object* v___y_390_, lean_object* v___y_391_, lean_object* v___y_392_, lean_object* v___y_393_){
_start:
{
lean_object* v_ref_395_; lean_object* v___x_396_; lean_object* v_a_397_; lean_object* v___x_399_; uint8_t v_isShared_400_; uint8_t v_isSharedCheck_405_; 
v_ref_395_ = lean_ctor_get(v___y_392_, 2);
v___x_396_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Do_elabDoForward_spec__0_spec__0(v_msg_389_, v___y_390_, v___y_391_, v___y_392_, v___y_393_);
v_a_397_ = lean_ctor_get(v___x_396_, 0);
v_isSharedCheck_405_ = !lean_is_exclusive(v___x_396_);
if (v_isSharedCheck_405_ == 0)
{
v___x_399_ = v___x_396_;
v_isShared_400_ = v_isSharedCheck_405_;
goto v_resetjp_398_;
}
else
{
lean_inc(v_a_397_);
lean_dec(v___x_396_);
v___x_399_ = lean_box(0);
v_isShared_400_ = v_isSharedCheck_405_;
goto v_resetjp_398_;
}
v_resetjp_398_:
{
lean_object* v___x_401_; lean_object* v___x_403_; 
lean_inc(v_ref_395_);
v___x_401_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_401_, 0, v_ref_395_);
lean_ctor_set(v___x_401_, 1, v_a_397_);
if (v_isShared_400_ == 0)
{
lean_ctor_set_tag(v___x_399_, 1);
lean_ctor_set(v___x_399_, 0, v___x_401_);
v___x_403_ = v___x_399_;
goto v_reusejp_402_;
}
else
{
lean_object* v_reuseFailAlloc_404_; 
v_reuseFailAlloc_404_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_404_, 0, v___x_401_);
v___x_403_ = v_reuseFailAlloc_404_;
goto v_reusejp_402_;
}
v_reusejp_402_:
{
return v___x_403_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_validateForwarder_spec__0___redArg___boxed(lean_object* v_msg_406_, lean_object* v___y_407_, lean_object* v___y_408_, lean_object* v___y_409_, lean_object* v___y_410_, lean_object* v___y_411_){
_start:
{
lean_object* v_res_412_; 
v_res_412_ = l_Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_validateForwarder_spec__0___redArg(v_msg_406_, v___y_407_, v___y_408_, v___y_409_, v___y_410_);
lean_dec(v___y_410_);
lean_dec_ref(v___y_409_);
lean_dec(v___y_408_);
lean_dec_ref(v___y_407_);
return v_res_412_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_validateForwarder___lam__0(lean_object* v_headApp_413_, lean_object* v_00_u03b1_414_, lean_object* v_reason_415_, lean_object* v___y_416_, lean_object* v___y_417_, lean_object* v___y_418_, lean_object* v___y_419_){
_start:
{
lean_object* v___x_421_; lean_object* v___x_422_; 
v___x_421_ = l___private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_forwardHint(v_headApp_413_, v_reason_415_);
v___x_422_ = l_Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_validateForwarder_spec__0___redArg(v___x_421_, v___y_416_, v___y_417_, v___y_418_, v___y_419_);
return v___x_422_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_validateForwarder___lam__0___boxed(lean_object* v_headApp_423_, lean_object* v_00_u03b1_424_, lean_object* v_reason_425_, lean_object* v___y_426_, lean_object* v___y_427_, lean_object* v___y_428_, lean_object* v___y_429_, lean_object* v___y_430_){
_start:
{
lean_object* v_res_431_; 
v_res_431_ = l___private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_validateForwarder___lam__0(v_headApp_423_, v_00_u03b1_424_, v_reason_425_, v___y_426_, v___y_427_, v___y_428_, v___y_429_);
lean_dec(v___y_429_);
lean_dec_ref(v___y_428_);
lean_dec(v___y_427_);
lean_dec_ref(v___y_426_);
return v_res_431_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_validateForwarder_spec__2___lam__0(lean_object* v_arg_432_, lean_object* v_x_433_){
_start:
{
lean_object* v___x_434_; uint8_t v___x_435_; 
v___x_434_ = l_Lean_Expr_mvarId_x21(v_arg_432_);
v___x_435_ = l_Lean_instBEqMVarId_beq(v_x_433_, v___x_434_);
lean_dec(v___x_434_);
return v___x_435_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_validateForwarder_spec__2___lam__0___boxed(lean_object* v_arg_436_, lean_object* v_x_437_){
_start:
{
uint8_t v_res_438_; lean_object* v_r_439_; 
v_res_438_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_validateForwarder_spec__2___lam__0(v_arg_436_, v_x_437_);
lean_dec(v_x_437_);
lean_dec_ref(v_arg_436_);
v_r_439_ = lean_box(v_res_438_);
return v_r_439_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_validateForwarder_spec__3_spec__4___closed__1(void){
_start:
{
lean_object* v___x_441_; lean_object* v___x_442_; 
v___x_441_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_validateForwarder_spec__3_spec__4___closed__0));
v___x_442_ = l_Lean_stringToMessageData(v___x_441_);
return v___x_442_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_validateForwarder_spec__3_spec__4(lean_object* v_arg_443_, lean_object* v_headApp_444_, lean_object* v_as_445_, size_t v_sz_446_, size_t v_i_447_, lean_object* v_b_448_, lean_object* v___y_449_, lean_object* v___y_450_, lean_object* v___y_451_, lean_object* v___y_452_){
_start:
{
lean_object* v_a_455_; uint8_t v___x_459_; 
v___x_459_ = lean_usize_dec_lt(v_i_447_, v_sz_446_);
if (v___x_459_ == 0)
{
lean_object* v___x_460_; 
lean_dec(v_headApp_444_);
lean_dec_ref(v_arg_443_);
v___x_460_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_460_, 0, v_b_448_);
return v___x_460_;
}
else
{
lean_object* v___f_461_; lean_object* v___x_462_; lean_object* v_a_463_; lean_object* v___x_464_; 
lean_inc_ref(v_arg_443_);
v___f_461_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_validateForwarder_spec__2___lam__0___boxed), 2, 1);
lean_closure_set(v___f_461_, 0, v_arg_443_);
v___x_462_ = lean_box(0);
v_a_463_ = lean_array_uget_borrowed(v_as_445_, v_i_447_);
lean_inc(v___y_452_);
lean_inc_ref(v___y_451_);
lean_inc(v___y_450_);
lean_inc_ref(v___y_449_);
lean_inc(v_a_463_);
v___x_464_ = lean_infer_type(v_a_463_, v___y_449_, v___y_450_, v___y_451_, v___y_452_);
if (lean_obj_tag(v___x_464_) == 0)
{
lean_object* v_a_465_; lean_object* v___x_466_; 
v_a_465_ = lean_ctor_get(v___x_464_, 0);
lean_inc_n(v_a_465_, 2);
lean_dec_ref_known(v___x_464_, 1);
v___x_466_ = l_Lean_instantiateMVars___at___00__private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_validateForwarder_spec__1___redArg(v_a_465_, v___y_450_);
if (lean_obj_tag(v___x_466_) == 0)
{
lean_object* v_a_467_; lean_object* v___x_468_; lean_object* v___x_469_; 
v_a_467_ = lean_ctor_get(v___x_466_, 0);
lean_inc(v_a_467_);
lean_dec_ref_known(v___x_466_, 1);
v___x_468_ = lean_box(0);
v___x_469_ = l_Lean_FindMVar_main(v___f_461_, v_a_467_, v___x_468_);
if (lean_obj_tag(v___x_469_) == 0)
{
lean_dec(v_a_465_);
v_a_455_ = v___x_462_;
goto v___jp_454_;
}
else
{
lean_object* v___x_470_; lean_object* v___x_471_; lean_object* v___x_472_; lean_object* v___x_473_; lean_object* v___x_474_; lean_object* v___x_475_; lean_object* v___x_476_; 
lean_dec_ref_known(v___x_469_, 1);
v___x_470_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_validateForwarder_spec__3_spec__4___closed__1, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_validateForwarder_spec__3_spec__4___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_validateForwarder_spec__3_spec__4___closed__1);
v___x_471_ = l_Lean_MessageData_ofExpr(v_a_465_);
v___x_472_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_472_, 0, v___x_470_);
lean_ctor_set(v___x_472_, 1, v___x_471_);
v___x_473_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_forwardHint___closed__1, &l___private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_forwardHint___closed__1_once, _init_l___private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_forwardHint___closed__1);
v___x_474_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_474_, 0, v___x_472_);
lean_ctor_set(v___x_474_, 1, v___x_473_);
lean_inc(v_headApp_444_);
v___x_475_ = l___private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_forwardHint(v_headApp_444_, v___x_474_);
v___x_476_ = l_Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_validateForwarder_spec__0___redArg(v___x_475_, v___y_449_, v___y_450_, v___y_451_, v___y_452_);
if (lean_obj_tag(v___x_476_) == 0)
{
lean_dec_ref_known(v___x_476_, 1);
v_a_455_ = v___x_462_;
goto v___jp_454_;
}
else
{
lean_dec(v_headApp_444_);
lean_dec_ref(v_arg_443_);
return v___x_476_;
}
}
}
else
{
lean_object* v_a_477_; lean_object* v___x_479_; uint8_t v_isShared_480_; uint8_t v_isSharedCheck_484_; 
lean_dec(v_a_465_);
lean_dec_ref(v___f_461_);
lean_dec(v_headApp_444_);
lean_dec_ref(v_arg_443_);
v_a_477_ = lean_ctor_get(v___x_466_, 0);
v_isSharedCheck_484_ = !lean_is_exclusive(v___x_466_);
if (v_isSharedCheck_484_ == 0)
{
v___x_479_ = v___x_466_;
v_isShared_480_ = v_isSharedCheck_484_;
goto v_resetjp_478_;
}
else
{
lean_inc(v_a_477_);
lean_dec(v___x_466_);
v___x_479_ = lean_box(0);
v_isShared_480_ = v_isSharedCheck_484_;
goto v_resetjp_478_;
}
v_resetjp_478_:
{
lean_object* v___x_482_; 
if (v_isShared_480_ == 0)
{
v___x_482_ = v___x_479_;
goto v_reusejp_481_;
}
else
{
lean_object* v_reuseFailAlloc_483_; 
v_reuseFailAlloc_483_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_483_, 0, v_a_477_);
v___x_482_ = v_reuseFailAlloc_483_;
goto v_reusejp_481_;
}
v_reusejp_481_:
{
return v___x_482_;
}
}
}
}
else
{
lean_object* v_a_485_; lean_object* v___x_487_; uint8_t v_isShared_488_; uint8_t v_isSharedCheck_492_; 
lean_dec_ref(v___f_461_);
lean_dec(v_headApp_444_);
lean_dec_ref(v_arg_443_);
v_a_485_ = lean_ctor_get(v___x_464_, 0);
v_isSharedCheck_492_ = !lean_is_exclusive(v___x_464_);
if (v_isSharedCheck_492_ == 0)
{
v___x_487_ = v___x_464_;
v_isShared_488_ = v_isSharedCheck_492_;
goto v_resetjp_486_;
}
else
{
lean_inc(v_a_485_);
lean_dec(v___x_464_);
v___x_487_ = lean_box(0);
v_isShared_488_ = v_isSharedCheck_492_;
goto v_resetjp_486_;
}
v_resetjp_486_:
{
lean_object* v___x_490_; 
if (v_isShared_488_ == 0)
{
v___x_490_ = v___x_487_;
goto v_reusejp_489_;
}
else
{
lean_object* v_reuseFailAlloc_491_; 
v_reuseFailAlloc_491_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_491_, 0, v_a_485_);
v___x_490_ = v_reuseFailAlloc_491_;
goto v_reusejp_489_;
}
v_reusejp_489_:
{
return v___x_490_;
}
}
}
}
v___jp_454_:
{
size_t v___x_456_; size_t v___x_457_; 
v___x_456_ = ((size_t)1ULL);
v___x_457_ = lean_usize_add(v_i_447_, v___x_456_);
v_i_447_ = v___x_457_;
v_b_448_ = v_a_455_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_validateForwarder_spec__3_spec__4___boxed(lean_object* v_arg_493_, lean_object* v_headApp_494_, lean_object* v_as_495_, lean_object* v_sz_496_, lean_object* v_i_497_, lean_object* v_b_498_, lean_object* v___y_499_, lean_object* v___y_500_, lean_object* v___y_501_, lean_object* v___y_502_, lean_object* v___y_503_){
_start:
{
size_t v_sz_boxed_504_; size_t v_i_boxed_505_; lean_object* v_res_506_; 
v_sz_boxed_504_ = lean_unbox_usize(v_sz_496_);
lean_dec(v_sz_496_);
v_i_boxed_505_ = lean_unbox_usize(v_i_497_);
lean_dec(v_i_497_);
v_res_506_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_validateForwarder_spec__3_spec__4(v_arg_493_, v_headApp_494_, v_as_495_, v_sz_boxed_504_, v_i_boxed_505_, v_b_498_, v___y_499_, v___y_500_, v___y_501_, v___y_502_);
lean_dec(v___y_502_);
lean_dec_ref(v___y_501_);
lean_dec(v___y_500_);
lean_dec_ref(v___y_499_);
lean_dec_ref(v_as_495_);
return v_res_506_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_validateForwarder_spec__3(lean_object* v_arg_507_, lean_object* v_headApp_508_, lean_object* v_as_509_, size_t v_sz_510_, size_t v_i_511_, lean_object* v_b_512_, lean_object* v___y_513_, lean_object* v___y_514_, lean_object* v___y_515_, lean_object* v___y_516_){
_start:
{
lean_object* v_a_519_; uint8_t v___x_523_; 
v___x_523_ = lean_usize_dec_lt(v_i_511_, v_sz_510_);
if (v___x_523_ == 0)
{
lean_object* v___x_524_; 
lean_dec(v_headApp_508_);
lean_dec_ref(v_arg_507_);
v___x_524_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_524_, 0, v_b_512_);
return v___x_524_;
}
else
{
lean_object* v___f_525_; lean_object* v___x_526_; lean_object* v_a_527_; lean_object* v___x_528_; 
lean_inc_ref(v_arg_507_);
v___f_525_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_validateForwarder_spec__2___lam__0___boxed), 2, 1);
lean_closure_set(v___f_525_, 0, v_arg_507_);
v___x_526_ = lean_box(0);
v_a_527_ = lean_array_uget_borrowed(v_as_509_, v_i_511_);
lean_inc(v___y_516_);
lean_inc_ref(v___y_515_);
lean_inc(v___y_514_);
lean_inc_ref(v___y_513_);
lean_inc(v_a_527_);
v___x_528_ = lean_infer_type(v_a_527_, v___y_513_, v___y_514_, v___y_515_, v___y_516_);
if (lean_obj_tag(v___x_528_) == 0)
{
lean_object* v_a_529_; lean_object* v___x_530_; 
v_a_529_ = lean_ctor_get(v___x_528_, 0);
lean_inc_n(v_a_529_, 2);
lean_dec_ref_known(v___x_528_, 1);
v___x_530_ = l_Lean_instantiateMVars___at___00__private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_validateForwarder_spec__1___redArg(v_a_529_, v___y_514_);
if (lean_obj_tag(v___x_530_) == 0)
{
lean_object* v_a_531_; lean_object* v___x_532_; lean_object* v___x_533_; 
v_a_531_ = lean_ctor_get(v___x_530_, 0);
lean_inc(v_a_531_);
lean_dec_ref_known(v___x_530_, 1);
v___x_532_ = lean_box(0);
v___x_533_ = l_Lean_FindMVar_main(v___f_525_, v_a_531_, v___x_532_);
if (lean_obj_tag(v___x_533_) == 0)
{
lean_dec(v_a_529_);
v_a_519_ = v___x_526_;
goto v___jp_518_;
}
else
{
lean_object* v___x_534_; lean_object* v___x_535_; lean_object* v___x_536_; lean_object* v___x_537_; lean_object* v___x_538_; lean_object* v___x_539_; lean_object* v___x_540_; 
lean_dec_ref_known(v___x_533_, 1);
v___x_534_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_validateForwarder_spec__3_spec__4___closed__1, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_validateForwarder_spec__3_spec__4___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_validateForwarder_spec__3_spec__4___closed__1);
v___x_535_ = l_Lean_MessageData_ofExpr(v_a_529_);
v___x_536_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_536_, 0, v___x_534_);
lean_ctor_set(v___x_536_, 1, v___x_535_);
v___x_537_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_forwardHint___closed__1, &l___private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_forwardHint___closed__1_once, _init_l___private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_forwardHint___closed__1);
v___x_538_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_538_, 0, v___x_536_);
lean_ctor_set(v___x_538_, 1, v___x_537_);
lean_inc(v_headApp_508_);
v___x_539_ = l___private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_forwardHint(v_headApp_508_, v___x_538_);
v___x_540_ = l_Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_validateForwarder_spec__0___redArg(v___x_539_, v___y_513_, v___y_514_, v___y_515_, v___y_516_);
if (lean_obj_tag(v___x_540_) == 0)
{
lean_dec_ref_known(v___x_540_, 1);
v_a_519_ = v___x_526_;
goto v___jp_518_;
}
else
{
lean_dec(v_headApp_508_);
lean_dec_ref(v_arg_507_);
return v___x_540_;
}
}
}
else
{
lean_object* v_a_541_; lean_object* v___x_543_; uint8_t v_isShared_544_; uint8_t v_isSharedCheck_548_; 
lean_dec(v_a_529_);
lean_dec_ref(v___f_525_);
lean_dec(v_headApp_508_);
lean_dec_ref(v_arg_507_);
v_a_541_ = lean_ctor_get(v___x_530_, 0);
v_isSharedCheck_548_ = !lean_is_exclusive(v___x_530_);
if (v_isSharedCheck_548_ == 0)
{
v___x_543_ = v___x_530_;
v_isShared_544_ = v_isSharedCheck_548_;
goto v_resetjp_542_;
}
else
{
lean_inc(v_a_541_);
lean_dec(v___x_530_);
v___x_543_ = lean_box(0);
v_isShared_544_ = v_isSharedCheck_548_;
goto v_resetjp_542_;
}
v_resetjp_542_:
{
lean_object* v___x_546_; 
if (v_isShared_544_ == 0)
{
v___x_546_ = v___x_543_;
goto v_reusejp_545_;
}
else
{
lean_object* v_reuseFailAlloc_547_; 
v_reuseFailAlloc_547_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_547_, 0, v_a_541_);
v___x_546_ = v_reuseFailAlloc_547_;
goto v_reusejp_545_;
}
v_reusejp_545_:
{
return v___x_546_;
}
}
}
}
else
{
lean_object* v_a_549_; lean_object* v___x_551_; uint8_t v_isShared_552_; uint8_t v_isSharedCheck_556_; 
lean_dec_ref(v___f_525_);
lean_dec(v_headApp_508_);
lean_dec_ref(v_arg_507_);
v_a_549_ = lean_ctor_get(v___x_528_, 0);
v_isSharedCheck_556_ = !lean_is_exclusive(v___x_528_);
if (v_isSharedCheck_556_ == 0)
{
v___x_551_ = v___x_528_;
v_isShared_552_ = v_isSharedCheck_556_;
goto v_resetjp_550_;
}
else
{
lean_inc(v_a_549_);
lean_dec(v___x_528_);
v___x_551_ = lean_box(0);
v_isShared_552_ = v_isSharedCheck_556_;
goto v_resetjp_550_;
}
v_resetjp_550_:
{
lean_object* v___x_554_; 
if (v_isShared_552_ == 0)
{
v___x_554_ = v___x_551_;
goto v_reusejp_553_;
}
else
{
lean_object* v_reuseFailAlloc_555_; 
v_reuseFailAlloc_555_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_555_, 0, v_a_549_);
v___x_554_ = v_reuseFailAlloc_555_;
goto v_reusejp_553_;
}
v_reusejp_553_:
{
return v___x_554_;
}
}
}
}
v___jp_518_:
{
size_t v___x_520_; size_t v___x_521_; lean_object* v___x_522_; 
v___x_520_ = ((size_t)1ULL);
v___x_521_ = lean_usize_add(v_i_511_, v___x_520_);
v___x_522_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_validateForwarder_spec__3_spec__4(v_arg_507_, v_headApp_508_, v_as_509_, v_sz_510_, v___x_521_, v_a_519_, v___y_513_, v___y_514_, v___y_515_, v___y_516_);
return v___x_522_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_validateForwarder_spec__3___boxed(lean_object* v_arg_557_, lean_object* v_headApp_558_, lean_object* v_as_559_, lean_object* v_sz_560_, lean_object* v_i_561_, lean_object* v_b_562_, lean_object* v___y_563_, lean_object* v___y_564_, lean_object* v___y_565_, lean_object* v___y_566_, lean_object* v___y_567_){
_start:
{
size_t v_sz_boxed_568_; size_t v_i_boxed_569_; lean_object* v_res_570_; 
v_sz_boxed_568_ = lean_unbox_usize(v_sz_560_);
lean_dec(v_sz_560_);
v_i_boxed_569_ = lean_unbox_usize(v_i_561_);
lean_dec(v_i_561_);
v_res_570_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_validateForwarder_spec__3(v_arg_557_, v_headApp_558_, v_as_559_, v_sz_boxed_568_, v_i_boxed_569_, v_b_562_, v___y_563_, v___y_564_, v___y_565_, v___y_566_);
lean_dec(v___y_566_);
lean_dec_ref(v___y_565_);
lean_dec(v___y_564_);
lean_dec_ref(v___y_563_);
lean_dec_ref(v_as_559_);
return v_res_570_;
}
}
static lean_object* _init_l___private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_validateForwarder___lam__1___closed__1(void){
_start:
{
lean_object* v___x_572_; lean_object* v___x_573_; 
v___x_572_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_validateForwarder___lam__1___closed__0));
v___x_573_ = l_Lean_stringToMessageData(v___x_572_);
return v___x_573_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_validateForwarder___lam__1(lean_object* v_arg_574_, lean_object* v_headApp_575_, lean_object* v_a_576_, lean_object* v_reject_577_, lean_object* v_args_578_, lean_object* v_body_579_, lean_object* v___y_580_, lean_object* v___y_581_, lean_object* v___y_582_, lean_object* v___y_583_){
_start:
{
lean_object* v___x_598_; lean_object* v_a_599_; lean_object* v___x_600_; 
v___x_598_ = l_Lean_instantiateMVars___at___00__private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_validateForwarder_spec__1___redArg(v_body_579_, v___y_581_);
v_a_599_ = lean_ctor_get(v___x_598_, 0);
lean_inc(v_a_599_);
lean_dec_ref(v___x_598_);
v___x_600_ = l_Lean_Meta_whnfD(v_a_599_, v___y_580_, v___y_581_, v___y_582_, v___y_583_);
if (lean_obj_tag(v___x_600_) == 0)
{
lean_object* v_a_601_; lean_object* v___x_602_; 
v_a_601_ = lean_ctor_get(v___x_600_, 0);
lean_inc(v_a_601_);
lean_dec_ref_known(v___x_600_, 1);
v___x_602_ = l_Lean_Meta_isExprDefEq(v_a_576_, v_a_601_, v___y_580_, v___y_581_, v___y_582_, v___y_583_);
if (lean_obj_tag(v___x_602_) == 0)
{
lean_object* v_a_603_; uint8_t v___x_604_; 
v_a_603_ = lean_ctor_get(v___x_602_, 0);
lean_inc(v_a_603_);
lean_dec_ref_known(v___x_602_, 1);
v___x_604_ = lean_unbox(v_a_603_);
lean_dec(v_a_603_);
if (v___x_604_ == 0)
{
lean_object* v___x_605_; lean_object* v___x_606_; 
v___x_605_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_validateForwarder___lam__1___closed__1, &l___private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_validateForwarder___lam__1___closed__1_once, _init_l___private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_validateForwarder___lam__1___closed__1);
lean_inc(v___y_583_);
lean_inc_ref(v___y_582_);
lean_inc(v___y_581_);
lean_inc_ref(v___y_580_);
v___x_606_ = lean_apply_7(v_reject_577_, lean_box(0), v___x_605_, v___y_580_, v___y_581_, v___y_582_, v___y_583_, lean_box(0));
if (lean_obj_tag(v___x_606_) == 0)
{
lean_dec_ref_known(v___x_606_, 1);
goto v___jp_585_;
}
else
{
lean_dec(v_headApp_575_);
lean_dec_ref(v_arg_574_);
return v___x_606_;
}
}
else
{
lean_dec_ref(v_reject_577_);
goto v___jp_585_;
}
}
else
{
lean_object* v_a_607_; lean_object* v___x_609_; uint8_t v_isShared_610_; uint8_t v_isSharedCheck_614_; 
lean_dec_ref(v_reject_577_);
lean_dec(v_headApp_575_);
lean_dec_ref(v_arg_574_);
v_a_607_ = lean_ctor_get(v___x_602_, 0);
v_isSharedCheck_614_ = !lean_is_exclusive(v___x_602_);
if (v_isSharedCheck_614_ == 0)
{
v___x_609_ = v___x_602_;
v_isShared_610_ = v_isSharedCheck_614_;
goto v_resetjp_608_;
}
else
{
lean_inc(v_a_607_);
lean_dec(v___x_602_);
v___x_609_ = lean_box(0);
v_isShared_610_ = v_isSharedCheck_614_;
goto v_resetjp_608_;
}
v_resetjp_608_:
{
lean_object* v___x_612_; 
if (v_isShared_610_ == 0)
{
v___x_612_ = v___x_609_;
goto v_reusejp_611_;
}
else
{
lean_object* v_reuseFailAlloc_613_; 
v_reuseFailAlloc_613_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_613_, 0, v_a_607_);
v___x_612_ = v_reuseFailAlloc_613_;
goto v_reusejp_611_;
}
v_reusejp_611_:
{
return v___x_612_;
}
}
}
}
else
{
lean_object* v_a_615_; lean_object* v___x_617_; uint8_t v_isShared_618_; uint8_t v_isSharedCheck_622_; 
lean_dec_ref(v_reject_577_);
lean_dec_ref(v_a_576_);
lean_dec(v_headApp_575_);
lean_dec_ref(v_arg_574_);
v_a_615_ = lean_ctor_get(v___x_600_, 0);
v_isSharedCheck_622_ = !lean_is_exclusive(v___x_600_);
if (v_isSharedCheck_622_ == 0)
{
v___x_617_ = v___x_600_;
v_isShared_618_ = v_isSharedCheck_622_;
goto v_resetjp_616_;
}
else
{
lean_inc(v_a_615_);
lean_dec(v___x_600_);
v___x_617_ = lean_box(0);
v_isShared_618_ = v_isSharedCheck_622_;
goto v_resetjp_616_;
}
v_resetjp_616_:
{
lean_object* v___x_620_; 
if (v_isShared_618_ == 0)
{
v___x_620_ = v___x_617_;
goto v_reusejp_619_;
}
else
{
lean_object* v_reuseFailAlloc_621_; 
v_reuseFailAlloc_621_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_621_, 0, v_a_615_);
v___x_620_ = v_reuseFailAlloc_621_;
goto v_reusejp_619_;
}
v_reusejp_619_:
{
return v___x_620_;
}
}
}
v___jp_585_:
{
lean_object* v___x_586_; size_t v_sz_587_; size_t v___x_588_; lean_object* v___x_589_; 
v___x_586_ = lean_box(0);
v_sz_587_ = lean_array_size(v_args_578_);
v___x_588_ = ((size_t)0ULL);
v___x_589_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_validateForwarder_spec__3(v_arg_574_, v_headApp_575_, v_args_578_, v_sz_587_, v___x_588_, v___x_586_, v___y_580_, v___y_581_, v___y_582_, v___y_583_);
if (lean_obj_tag(v___x_589_) == 0)
{
lean_object* v___x_591_; uint8_t v_isShared_592_; uint8_t v_isSharedCheck_596_; 
v_isSharedCheck_596_ = !lean_is_exclusive(v___x_589_);
if (v_isSharedCheck_596_ == 0)
{
lean_object* v_unused_597_; 
v_unused_597_ = lean_ctor_get(v___x_589_, 0);
lean_dec(v_unused_597_);
v___x_591_ = v___x_589_;
v_isShared_592_ = v_isSharedCheck_596_;
goto v_resetjp_590_;
}
else
{
lean_dec(v___x_589_);
v___x_591_ = lean_box(0);
v_isShared_592_ = v_isSharedCheck_596_;
goto v_resetjp_590_;
}
v_resetjp_590_:
{
lean_object* v___x_594_; 
if (v_isShared_592_ == 0)
{
lean_ctor_set(v___x_591_, 0, v___x_586_);
v___x_594_ = v___x_591_;
goto v_reusejp_593_;
}
else
{
lean_object* v_reuseFailAlloc_595_; 
v_reuseFailAlloc_595_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_595_, 0, v___x_586_);
v___x_594_ = v_reuseFailAlloc_595_;
goto v_reusejp_593_;
}
v_reusejp_593_:
{
return v___x_594_;
}
}
}
else
{
return v___x_589_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_validateForwarder___lam__1___boxed(lean_object* v_arg_623_, lean_object* v_headApp_624_, lean_object* v_a_625_, lean_object* v_reject_626_, lean_object* v_args_627_, lean_object* v_body_628_, lean_object* v___y_629_, lean_object* v___y_630_, lean_object* v___y_631_, lean_object* v___y_632_, lean_object* v___y_633_){
_start:
{
lean_object* v_res_634_; 
v_res_634_ = l___private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_validateForwarder___lam__1(v_arg_623_, v_headApp_624_, v_a_625_, v_reject_626_, v_args_627_, v_body_628_, v___y_629_, v___y_630_, v___y_631_, v___y_632_);
lean_dec(v___y_632_);
lean_dec_ref(v___y_631_);
lean_dec(v___y_630_);
lean_dec_ref(v___y_629_);
lean_dec_ref(v_args_627_);
return v_res_634_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_validateForwarder_spec__2_spec__2___closed__1(void){
_start:
{
lean_object* v___x_636_; lean_object* v___x_637_; 
v___x_636_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_validateForwarder_spec__2_spec__2___closed__0));
v___x_637_ = l_Lean_stringToMessageData(v___x_636_);
return v___x_637_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_validateForwarder_spec__2_spec__2(lean_object* v_forwarded_638_, lean_object* v_arg_639_, lean_object* v_headApp_640_, lean_object* v_as_641_, size_t v_sz_642_, size_t v_i_643_, lean_object* v_b_644_, lean_object* v___y_645_, lean_object* v___y_646_, lean_object* v___y_647_, lean_object* v___y_648_){
_start:
{
lean_object* v_a_651_; uint8_t v___x_655_; 
v___x_655_ = lean_usize_dec_lt(v_i_643_, v_sz_642_);
if (v___x_655_ == 0)
{
lean_object* v___x_656_; 
lean_dec(v_headApp_640_);
lean_dec_ref(v_arg_639_);
v___x_656_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_656_, 0, v_b_644_);
return v___x_656_;
}
else
{
lean_object* v_a_657_; lean_object* v_fst_658_; lean_object* v_snd_659_; lean_object* v___x_661_; uint8_t v_isShared_662_; uint8_t v_isSharedCheck_719_; 
v_a_657_ = lean_array_uget(v_as_641_, v_i_643_);
v_fst_658_ = lean_ctor_get(v_a_657_, 0);
v_snd_659_ = lean_ctor_get(v_a_657_, 1);
v_isSharedCheck_719_ = !lean_is_exclusive(v_a_657_);
if (v_isSharedCheck_719_ == 0)
{
v___x_661_ = v_a_657_;
v_isShared_662_ = v_isSharedCheck_719_;
goto v_resetjp_660_;
}
else
{
lean_inc(v_snd_659_);
lean_inc(v_fst_658_);
lean_dec(v_a_657_);
v___x_661_ = lean_box(0);
v_isShared_662_ = v_isSharedCheck_719_;
goto v_resetjp_660_;
}
v_resetjp_660_:
{
lean_object* v___f_663_; lean_object* v___x_664_; lean_object* v___x_665_; lean_object* v___x_666_; 
lean_inc_ref(v_arg_639_);
v___f_663_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_validateForwarder_spec__2___lam__0___boxed), 2, 1);
lean_closure_set(v___f_663_, 0, v_arg_639_);
v___x_664_ = lean_box(0);
v___x_665_ = l_Lean_Expr_fvarId_x21(v_fst_658_);
lean_dec(v_fst_658_);
v___x_666_ = l_Lean_FVarId_getDecl___redArg(v___x_665_, v___y_645_, v___y_647_, v___y_648_);
if (lean_obj_tag(v___x_666_) == 0)
{
lean_object* v_a_667_; uint8_t v___x_668_; 
v_a_667_ = lean_ctor_get(v___x_666_, 0);
lean_inc(v_a_667_);
lean_dec_ref_known(v___x_666_, 1);
v___x_668_ = l_Lean_LocalDecl_binderInfo(v_a_667_);
lean_dec(v_a_667_);
if (v___x_668_ == 0)
{
lean_object* v___x_669_; 
v___x_669_ = l_Lean_instantiateMVars___at___00__private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_validateForwarder_spec__1___redArg(v_snd_659_, v___y_646_);
if (lean_obj_tag(v___x_669_) == 0)
{
lean_object* v_a_670_; uint8_t v___x_671_; 
v_a_670_ = lean_ctor_get(v___x_669_, 0);
lean_inc(v_a_670_);
lean_dec_ref_known(v___x_669_, 1);
v___x_671_ = lean_expr_eqv(v_a_670_, v_forwarded_638_);
if (v___x_671_ == 0)
{
lean_object* v___x_672_; 
lean_inc(v___y_648_);
lean_inc_ref(v___y_647_);
lean_inc(v___y_646_);
lean_inc_ref(v___y_645_);
v___x_672_ = lean_infer_type(v_a_670_, v___y_645_, v___y_646_, v___y_647_, v___y_648_);
if (lean_obj_tag(v___x_672_) == 0)
{
lean_object* v_a_673_; lean_object* v___x_674_; 
v_a_673_ = lean_ctor_get(v___x_672_, 0);
lean_inc_n(v_a_673_, 2);
lean_dec_ref_known(v___x_672_, 1);
v___x_674_ = l_Lean_instantiateMVars___at___00__private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_validateForwarder_spec__1___redArg(v_a_673_, v___y_646_);
if (lean_obj_tag(v___x_674_) == 0)
{
lean_object* v_a_675_; lean_object* v___x_676_; lean_object* v___x_677_; 
v_a_675_ = lean_ctor_get(v___x_674_, 0);
lean_inc(v_a_675_);
lean_dec_ref_known(v___x_674_, 1);
v___x_676_ = lean_box(0);
v___x_677_ = l_Lean_FindMVar_main(v___f_663_, v_a_675_, v___x_676_);
if (lean_obj_tag(v___x_677_) == 0)
{
lean_dec(v_a_673_);
lean_del_object(v___x_661_);
v_a_651_ = v___x_664_;
goto v___jp_650_;
}
else
{
lean_object* v___x_678_; lean_object* v___x_679_; lean_object* v___x_681_; 
lean_dec_ref_known(v___x_677_, 1);
v___x_678_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_validateForwarder_spec__2_spec__2___closed__1, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_validateForwarder_spec__2_spec__2___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_validateForwarder_spec__2_spec__2___closed__1);
v___x_679_ = l_Lean_MessageData_ofExpr(v_a_673_);
if (v_isShared_662_ == 0)
{
lean_ctor_set_tag(v___x_661_, 7);
lean_ctor_set(v___x_661_, 1, v___x_679_);
lean_ctor_set(v___x_661_, 0, v___x_678_);
v___x_681_ = v___x_661_;
goto v_reusejp_680_;
}
else
{
lean_object* v_reuseFailAlloc_686_; 
v_reuseFailAlloc_686_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_686_, 0, v___x_678_);
lean_ctor_set(v_reuseFailAlloc_686_, 1, v___x_679_);
v___x_681_ = v_reuseFailAlloc_686_;
goto v_reusejp_680_;
}
v_reusejp_680_:
{
lean_object* v___x_682_; lean_object* v___x_683_; lean_object* v___x_684_; lean_object* v___x_685_; 
v___x_682_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_forwardHint___closed__1, &l___private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_forwardHint___closed__1_once, _init_l___private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_forwardHint___closed__1);
v___x_683_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_683_, 0, v___x_681_);
lean_ctor_set(v___x_683_, 1, v___x_682_);
lean_inc(v_headApp_640_);
v___x_684_ = l___private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_forwardHint(v_headApp_640_, v___x_683_);
v___x_685_ = l_Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_validateForwarder_spec__0___redArg(v___x_684_, v___y_645_, v___y_646_, v___y_647_, v___y_648_);
if (lean_obj_tag(v___x_685_) == 0)
{
lean_dec_ref_known(v___x_685_, 1);
v_a_651_ = v___x_664_;
goto v___jp_650_;
}
else
{
lean_dec(v_headApp_640_);
lean_dec_ref(v_arg_639_);
return v___x_685_;
}
}
}
}
else
{
lean_object* v_a_687_; lean_object* v___x_689_; uint8_t v_isShared_690_; uint8_t v_isSharedCheck_694_; 
lean_dec(v_a_673_);
lean_dec_ref(v___f_663_);
lean_del_object(v___x_661_);
lean_dec(v_headApp_640_);
lean_dec_ref(v_arg_639_);
v_a_687_ = lean_ctor_get(v___x_674_, 0);
v_isSharedCheck_694_ = !lean_is_exclusive(v___x_674_);
if (v_isSharedCheck_694_ == 0)
{
v___x_689_ = v___x_674_;
v_isShared_690_ = v_isSharedCheck_694_;
goto v_resetjp_688_;
}
else
{
lean_inc(v_a_687_);
lean_dec(v___x_674_);
v___x_689_ = lean_box(0);
v_isShared_690_ = v_isSharedCheck_694_;
goto v_resetjp_688_;
}
v_resetjp_688_:
{
lean_object* v___x_692_; 
if (v_isShared_690_ == 0)
{
v___x_692_ = v___x_689_;
goto v_reusejp_691_;
}
else
{
lean_object* v_reuseFailAlloc_693_; 
v_reuseFailAlloc_693_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_693_, 0, v_a_687_);
v___x_692_ = v_reuseFailAlloc_693_;
goto v_reusejp_691_;
}
v_reusejp_691_:
{
return v___x_692_;
}
}
}
}
else
{
lean_object* v_a_695_; lean_object* v___x_697_; uint8_t v_isShared_698_; uint8_t v_isSharedCheck_702_; 
lean_dec_ref(v___f_663_);
lean_del_object(v___x_661_);
lean_dec(v_headApp_640_);
lean_dec_ref(v_arg_639_);
v_a_695_ = lean_ctor_get(v___x_672_, 0);
v_isSharedCheck_702_ = !lean_is_exclusive(v___x_672_);
if (v_isSharedCheck_702_ == 0)
{
v___x_697_ = v___x_672_;
v_isShared_698_ = v_isSharedCheck_702_;
goto v_resetjp_696_;
}
else
{
lean_inc(v_a_695_);
lean_dec(v___x_672_);
v___x_697_ = lean_box(0);
v_isShared_698_ = v_isSharedCheck_702_;
goto v_resetjp_696_;
}
v_resetjp_696_:
{
lean_object* v___x_700_; 
if (v_isShared_698_ == 0)
{
v___x_700_ = v___x_697_;
goto v_reusejp_699_;
}
else
{
lean_object* v_reuseFailAlloc_701_; 
v_reuseFailAlloc_701_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_701_, 0, v_a_695_);
v___x_700_ = v_reuseFailAlloc_701_;
goto v_reusejp_699_;
}
v_reusejp_699_:
{
return v___x_700_;
}
}
}
}
else
{
lean_dec(v_a_670_);
lean_dec_ref(v___f_663_);
lean_del_object(v___x_661_);
v_a_651_ = v___x_664_;
goto v___jp_650_;
}
}
else
{
lean_object* v_a_703_; lean_object* v___x_705_; uint8_t v_isShared_706_; uint8_t v_isSharedCheck_710_; 
lean_dec_ref(v___f_663_);
lean_del_object(v___x_661_);
lean_dec(v_headApp_640_);
lean_dec_ref(v_arg_639_);
v_a_703_ = lean_ctor_get(v___x_669_, 0);
v_isSharedCheck_710_ = !lean_is_exclusive(v___x_669_);
if (v_isSharedCheck_710_ == 0)
{
v___x_705_ = v___x_669_;
v_isShared_706_ = v_isSharedCheck_710_;
goto v_resetjp_704_;
}
else
{
lean_inc(v_a_703_);
lean_dec(v___x_669_);
v___x_705_ = lean_box(0);
v_isShared_706_ = v_isSharedCheck_710_;
goto v_resetjp_704_;
}
v_resetjp_704_:
{
lean_object* v___x_708_; 
if (v_isShared_706_ == 0)
{
v___x_708_ = v___x_705_;
goto v_reusejp_707_;
}
else
{
lean_object* v_reuseFailAlloc_709_; 
v_reuseFailAlloc_709_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_709_, 0, v_a_703_);
v___x_708_ = v_reuseFailAlloc_709_;
goto v_reusejp_707_;
}
v_reusejp_707_:
{
return v___x_708_;
}
}
}
}
else
{
lean_dec_ref(v___f_663_);
lean_del_object(v___x_661_);
lean_dec(v_snd_659_);
v_a_651_ = v___x_664_;
goto v___jp_650_;
}
}
else
{
lean_object* v_a_711_; lean_object* v___x_713_; uint8_t v_isShared_714_; uint8_t v_isSharedCheck_718_; 
lean_dec_ref(v___f_663_);
lean_del_object(v___x_661_);
lean_dec(v_snd_659_);
lean_dec(v_headApp_640_);
lean_dec_ref(v_arg_639_);
v_a_711_ = lean_ctor_get(v___x_666_, 0);
v_isSharedCheck_718_ = !lean_is_exclusive(v___x_666_);
if (v_isSharedCheck_718_ == 0)
{
v___x_713_ = v___x_666_;
v_isShared_714_ = v_isSharedCheck_718_;
goto v_resetjp_712_;
}
else
{
lean_inc(v_a_711_);
lean_dec(v___x_666_);
v___x_713_ = lean_box(0);
v_isShared_714_ = v_isSharedCheck_718_;
goto v_resetjp_712_;
}
v_resetjp_712_:
{
lean_object* v___x_716_; 
if (v_isShared_714_ == 0)
{
v___x_716_ = v___x_713_;
goto v_reusejp_715_;
}
else
{
lean_object* v_reuseFailAlloc_717_; 
v_reuseFailAlloc_717_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_717_, 0, v_a_711_);
v___x_716_ = v_reuseFailAlloc_717_;
goto v_reusejp_715_;
}
v_reusejp_715_:
{
return v___x_716_;
}
}
}
}
}
v___jp_650_:
{
size_t v___x_652_; size_t v___x_653_; 
v___x_652_ = ((size_t)1ULL);
v___x_653_ = lean_usize_add(v_i_643_, v___x_652_);
v_i_643_ = v___x_653_;
v_b_644_ = v_a_651_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_validateForwarder_spec__2_spec__2___boxed(lean_object* v_forwarded_720_, lean_object* v_arg_721_, lean_object* v_headApp_722_, lean_object* v_as_723_, lean_object* v_sz_724_, lean_object* v_i_725_, lean_object* v_b_726_, lean_object* v___y_727_, lean_object* v___y_728_, lean_object* v___y_729_, lean_object* v___y_730_, lean_object* v___y_731_){
_start:
{
size_t v_sz_boxed_732_; size_t v_i_boxed_733_; lean_object* v_res_734_; 
v_sz_boxed_732_ = lean_unbox_usize(v_sz_724_);
lean_dec(v_sz_724_);
v_i_boxed_733_ = lean_unbox_usize(v_i_725_);
lean_dec(v_i_725_);
v_res_734_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_validateForwarder_spec__2_spec__2(v_forwarded_720_, v_arg_721_, v_headApp_722_, v_as_723_, v_sz_boxed_732_, v_i_boxed_733_, v_b_726_, v___y_727_, v___y_728_, v___y_729_, v___y_730_);
lean_dec(v___y_730_);
lean_dec_ref(v___y_729_);
lean_dec(v___y_728_);
lean_dec_ref(v___y_727_);
lean_dec_ref(v_as_723_);
lean_dec_ref(v_forwarded_720_);
return v_res_734_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_validateForwarder_spec__2(lean_object* v_forwarded_735_, lean_object* v_arg_736_, lean_object* v_headApp_737_, lean_object* v_as_738_, size_t v_sz_739_, size_t v_i_740_, lean_object* v_b_741_, lean_object* v___y_742_, lean_object* v___y_743_, lean_object* v___y_744_, lean_object* v___y_745_){
_start:
{
lean_object* v_a_748_; uint8_t v___x_752_; 
v___x_752_ = lean_usize_dec_lt(v_i_740_, v_sz_739_);
if (v___x_752_ == 0)
{
lean_object* v___x_753_; 
lean_dec(v_headApp_737_);
lean_dec_ref(v_arg_736_);
v___x_753_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_753_, 0, v_b_741_);
return v___x_753_;
}
else
{
lean_object* v_a_754_; lean_object* v_fst_755_; lean_object* v_snd_756_; lean_object* v___x_758_; uint8_t v_isShared_759_; uint8_t v_isSharedCheck_816_; 
v_a_754_ = lean_array_uget(v_as_738_, v_i_740_);
v_fst_755_ = lean_ctor_get(v_a_754_, 0);
v_snd_756_ = lean_ctor_get(v_a_754_, 1);
v_isSharedCheck_816_ = !lean_is_exclusive(v_a_754_);
if (v_isSharedCheck_816_ == 0)
{
v___x_758_ = v_a_754_;
v_isShared_759_ = v_isSharedCheck_816_;
goto v_resetjp_757_;
}
else
{
lean_inc(v_snd_756_);
lean_inc(v_fst_755_);
lean_dec(v_a_754_);
v___x_758_ = lean_box(0);
v_isShared_759_ = v_isSharedCheck_816_;
goto v_resetjp_757_;
}
v_resetjp_757_:
{
lean_object* v___f_760_; lean_object* v___x_761_; lean_object* v___x_762_; lean_object* v___x_763_; 
lean_inc_ref(v_arg_736_);
v___f_760_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_validateForwarder_spec__2___lam__0___boxed), 2, 1);
lean_closure_set(v___f_760_, 0, v_arg_736_);
v___x_761_ = lean_box(0);
v___x_762_ = l_Lean_Expr_fvarId_x21(v_fst_755_);
lean_dec(v_fst_755_);
v___x_763_ = l_Lean_FVarId_getDecl___redArg(v___x_762_, v___y_742_, v___y_744_, v___y_745_);
if (lean_obj_tag(v___x_763_) == 0)
{
lean_object* v_a_764_; uint8_t v___x_765_; 
v_a_764_ = lean_ctor_get(v___x_763_, 0);
lean_inc(v_a_764_);
lean_dec_ref_known(v___x_763_, 1);
v___x_765_ = l_Lean_LocalDecl_binderInfo(v_a_764_);
lean_dec(v_a_764_);
if (v___x_765_ == 0)
{
lean_object* v___x_766_; 
v___x_766_ = l_Lean_instantiateMVars___at___00__private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_validateForwarder_spec__1___redArg(v_snd_756_, v___y_743_);
if (lean_obj_tag(v___x_766_) == 0)
{
lean_object* v_a_767_; uint8_t v___x_768_; 
v_a_767_ = lean_ctor_get(v___x_766_, 0);
lean_inc(v_a_767_);
lean_dec_ref_known(v___x_766_, 1);
v___x_768_ = lean_expr_eqv(v_a_767_, v_forwarded_735_);
if (v___x_768_ == 0)
{
lean_object* v___x_769_; 
lean_inc(v___y_745_);
lean_inc_ref(v___y_744_);
lean_inc(v___y_743_);
lean_inc_ref(v___y_742_);
v___x_769_ = lean_infer_type(v_a_767_, v___y_742_, v___y_743_, v___y_744_, v___y_745_);
if (lean_obj_tag(v___x_769_) == 0)
{
lean_object* v_a_770_; lean_object* v___x_771_; 
v_a_770_ = lean_ctor_get(v___x_769_, 0);
lean_inc_n(v_a_770_, 2);
lean_dec_ref_known(v___x_769_, 1);
v___x_771_ = l_Lean_instantiateMVars___at___00__private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_validateForwarder_spec__1___redArg(v_a_770_, v___y_743_);
if (lean_obj_tag(v___x_771_) == 0)
{
lean_object* v_a_772_; lean_object* v___x_773_; lean_object* v___x_774_; 
v_a_772_ = lean_ctor_get(v___x_771_, 0);
lean_inc(v_a_772_);
lean_dec_ref_known(v___x_771_, 1);
v___x_773_ = lean_box(0);
v___x_774_ = l_Lean_FindMVar_main(v___f_760_, v_a_772_, v___x_773_);
if (lean_obj_tag(v___x_774_) == 0)
{
lean_dec(v_a_770_);
lean_del_object(v___x_758_);
v_a_748_ = v___x_761_;
goto v___jp_747_;
}
else
{
lean_object* v___x_775_; lean_object* v___x_776_; lean_object* v___x_778_; 
lean_dec_ref_known(v___x_774_, 1);
v___x_775_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_validateForwarder_spec__2_spec__2___closed__1, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_validateForwarder_spec__2_spec__2___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_validateForwarder_spec__2_spec__2___closed__1);
v___x_776_ = l_Lean_MessageData_ofExpr(v_a_770_);
if (v_isShared_759_ == 0)
{
lean_ctor_set_tag(v___x_758_, 7);
lean_ctor_set(v___x_758_, 1, v___x_776_);
lean_ctor_set(v___x_758_, 0, v___x_775_);
v___x_778_ = v___x_758_;
goto v_reusejp_777_;
}
else
{
lean_object* v_reuseFailAlloc_783_; 
v_reuseFailAlloc_783_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_783_, 0, v___x_775_);
lean_ctor_set(v_reuseFailAlloc_783_, 1, v___x_776_);
v___x_778_ = v_reuseFailAlloc_783_;
goto v_reusejp_777_;
}
v_reusejp_777_:
{
lean_object* v___x_779_; lean_object* v___x_780_; lean_object* v___x_781_; lean_object* v___x_782_; 
v___x_779_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_forwardHint___closed__1, &l___private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_forwardHint___closed__1_once, _init_l___private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_forwardHint___closed__1);
v___x_780_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_780_, 0, v___x_778_);
lean_ctor_set(v___x_780_, 1, v___x_779_);
lean_inc(v_headApp_737_);
v___x_781_ = l___private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_forwardHint(v_headApp_737_, v___x_780_);
v___x_782_ = l_Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_validateForwarder_spec__0___redArg(v___x_781_, v___y_742_, v___y_743_, v___y_744_, v___y_745_);
if (lean_obj_tag(v___x_782_) == 0)
{
lean_dec_ref_known(v___x_782_, 1);
v_a_748_ = v___x_761_;
goto v___jp_747_;
}
else
{
lean_dec(v_headApp_737_);
lean_dec_ref(v_arg_736_);
return v___x_782_;
}
}
}
}
else
{
lean_object* v_a_784_; lean_object* v___x_786_; uint8_t v_isShared_787_; uint8_t v_isSharedCheck_791_; 
lean_dec(v_a_770_);
lean_dec_ref(v___f_760_);
lean_del_object(v___x_758_);
lean_dec(v_headApp_737_);
lean_dec_ref(v_arg_736_);
v_a_784_ = lean_ctor_get(v___x_771_, 0);
v_isSharedCheck_791_ = !lean_is_exclusive(v___x_771_);
if (v_isSharedCheck_791_ == 0)
{
v___x_786_ = v___x_771_;
v_isShared_787_ = v_isSharedCheck_791_;
goto v_resetjp_785_;
}
else
{
lean_inc(v_a_784_);
lean_dec(v___x_771_);
v___x_786_ = lean_box(0);
v_isShared_787_ = v_isSharedCheck_791_;
goto v_resetjp_785_;
}
v_resetjp_785_:
{
lean_object* v___x_789_; 
if (v_isShared_787_ == 0)
{
v___x_789_ = v___x_786_;
goto v_reusejp_788_;
}
else
{
lean_object* v_reuseFailAlloc_790_; 
v_reuseFailAlloc_790_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_790_, 0, v_a_784_);
v___x_789_ = v_reuseFailAlloc_790_;
goto v_reusejp_788_;
}
v_reusejp_788_:
{
return v___x_789_;
}
}
}
}
else
{
lean_object* v_a_792_; lean_object* v___x_794_; uint8_t v_isShared_795_; uint8_t v_isSharedCheck_799_; 
lean_dec_ref(v___f_760_);
lean_del_object(v___x_758_);
lean_dec(v_headApp_737_);
lean_dec_ref(v_arg_736_);
v_a_792_ = lean_ctor_get(v___x_769_, 0);
v_isSharedCheck_799_ = !lean_is_exclusive(v___x_769_);
if (v_isSharedCheck_799_ == 0)
{
v___x_794_ = v___x_769_;
v_isShared_795_ = v_isSharedCheck_799_;
goto v_resetjp_793_;
}
else
{
lean_inc(v_a_792_);
lean_dec(v___x_769_);
v___x_794_ = lean_box(0);
v_isShared_795_ = v_isSharedCheck_799_;
goto v_resetjp_793_;
}
v_resetjp_793_:
{
lean_object* v___x_797_; 
if (v_isShared_795_ == 0)
{
v___x_797_ = v___x_794_;
goto v_reusejp_796_;
}
else
{
lean_object* v_reuseFailAlloc_798_; 
v_reuseFailAlloc_798_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_798_, 0, v_a_792_);
v___x_797_ = v_reuseFailAlloc_798_;
goto v_reusejp_796_;
}
v_reusejp_796_:
{
return v___x_797_;
}
}
}
}
else
{
lean_dec(v_a_767_);
lean_dec_ref(v___f_760_);
lean_del_object(v___x_758_);
v_a_748_ = v___x_761_;
goto v___jp_747_;
}
}
else
{
lean_object* v_a_800_; lean_object* v___x_802_; uint8_t v_isShared_803_; uint8_t v_isSharedCheck_807_; 
lean_dec_ref(v___f_760_);
lean_del_object(v___x_758_);
lean_dec(v_headApp_737_);
lean_dec_ref(v_arg_736_);
v_a_800_ = lean_ctor_get(v___x_766_, 0);
v_isSharedCheck_807_ = !lean_is_exclusive(v___x_766_);
if (v_isSharedCheck_807_ == 0)
{
v___x_802_ = v___x_766_;
v_isShared_803_ = v_isSharedCheck_807_;
goto v_resetjp_801_;
}
else
{
lean_inc(v_a_800_);
lean_dec(v___x_766_);
v___x_802_ = lean_box(0);
v_isShared_803_ = v_isSharedCheck_807_;
goto v_resetjp_801_;
}
v_resetjp_801_:
{
lean_object* v___x_805_; 
if (v_isShared_803_ == 0)
{
v___x_805_ = v___x_802_;
goto v_reusejp_804_;
}
else
{
lean_object* v_reuseFailAlloc_806_; 
v_reuseFailAlloc_806_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_806_, 0, v_a_800_);
v___x_805_ = v_reuseFailAlloc_806_;
goto v_reusejp_804_;
}
v_reusejp_804_:
{
return v___x_805_;
}
}
}
}
else
{
lean_dec_ref(v___f_760_);
lean_del_object(v___x_758_);
lean_dec(v_snd_756_);
v_a_748_ = v___x_761_;
goto v___jp_747_;
}
}
else
{
lean_object* v_a_808_; lean_object* v___x_810_; uint8_t v_isShared_811_; uint8_t v_isSharedCheck_815_; 
lean_dec_ref(v___f_760_);
lean_del_object(v___x_758_);
lean_dec(v_snd_756_);
lean_dec(v_headApp_737_);
lean_dec_ref(v_arg_736_);
v_a_808_ = lean_ctor_get(v___x_763_, 0);
v_isSharedCheck_815_ = !lean_is_exclusive(v___x_763_);
if (v_isSharedCheck_815_ == 0)
{
v___x_810_ = v___x_763_;
v_isShared_811_ = v_isSharedCheck_815_;
goto v_resetjp_809_;
}
else
{
lean_inc(v_a_808_);
lean_dec(v___x_763_);
v___x_810_ = lean_box(0);
v_isShared_811_ = v_isSharedCheck_815_;
goto v_resetjp_809_;
}
v_resetjp_809_:
{
lean_object* v___x_813_; 
if (v_isShared_811_ == 0)
{
v___x_813_ = v___x_810_;
goto v_reusejp_812_;
}
else
{
lean_object* v_reuseFailAlloc_814_; 
v_reuseFailAlloc_814_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_814_, 0, v_a_808_);
v___x_813_ = v_reuseFailAlloc_814_;
goto v_reusejp_812_;
}
v_reusejp_812_:
{
return v___x_813_;
}
}
}
}
}
v___jp_747_:
{
size_t v___x_749_; size_t v___x_750_; lean_object* v___x_751_; 
v___x_749_ = ((size_t)1ULL);
v___x_750_ = lean_usize_add(v_i_740_, v___x_749_);
v___x_751_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_validateForwarder_spec__2_spec__2(v_forwarded_735_, v_arg_736_, v_headApp_737_, v_as_738_, v_sz_739_, v___x_750_, v_a_748_, v___y_742_, v___y_743_, v___y_744_, v___y_745_);
return v___x_751_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_validateForwarder_spec__2___boxed(lean_object* v_forwarded_817_, lean_object* v_arg_818_, lean_object* v_headApp_819_, lean_object* v_as_820_, lean_object* v_sz_821_, lean_object* v_i_822_, lean_object* v_b_823_, lean_object* v___y_824_, lean_object* v___y_825_, lean_object* v___y_826_, lean_object* v___y_827_, lean_object* v___y_828_){
_start:
{
size_t v_sz_boxed_829_; size_t v_i_boxed_830_; lean_object* v_res_831_; 
v_sz_boxed_829_ = lean_unbox_usize(v_sz_821_);
lean_dec(v_sz_821_);
v_i_boxed_830_ = lean_unbox_usize(v_i_822_);
lean_dec(v_i_822_);
v_res_831_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_validateForwarder_spec__2(v_forwarded_817_, v_arg_818_, v_headApp_819_, v_as_820_, v_sz_boxed_829_, v_i_boxed_830_, v_b_823_, v___y_824_, v___y_825_, v___y_826_, v___y_827_);
lean_dec(v___y_827_);
lean_dec_ref(v___y_826_);
lean_dec(v___y_825_);
lean_dec_ref(v___y_824_);
lean_dec_ref(v_as_820_);
lean_dec_ref(v_forwarded_817_);
return v_res_831_;
}
}
static lean_object* _init_l___private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_validateForwarder___lam__2___closed__0(void){
_start:
{
lean_object* v___x_832_; lean_object* v___x_833_; 
v___x_832_ = lean_box(0);
v___x_833_ = l_unsafeCast___redArg(v___x_832_);
return v___x_833_;
}
}
static lean_object* _init_l___private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_validateForwarder___lam__2___closed__1(void){
_start:
{
lean_object* v___x_834_; lean_object* v_dummy_835_; 
v___x_834_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_validateForwarder___lam__2___closed__0, &l___private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_validateForwarder___lam__2___closed__0_once, _init_l___private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_validateForwarder___lam__2___closed__0);
v_dummy_835_ = l_Lean_Expr_sort___override(v___x_834_);
return v_dummy_835_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_validateForwarder___lam__2(lean_object* v_probeExpr_836_, lean_object* v_forwarded_837_, lean_object* v_arg_838_, lean_object* v_headApp_839_, lean_object* v_fvars_840_, lean_object* v_x_841_, lean_object* v___y_842_, lean_object* v___y_843_, lean_object* v___y_844_, lean_object* v___y_845_){
_start:
{
lean_object* v_dummy_847_; lean_object* v_nargs_848_; lean_object* v___x_849_; lean_object* v___x_850_; lean_object* v___x_851_; lean_object* v___x_852_; lean_object* v___x_853_; lean_object* v___x_854_; size_t v_sz_855_; size_t v___x_856_; lean_object* v___x_857_; 
v_dummy_847_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_validateForwarder___lam__2___closed__1, &l___private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_validateForwarder___lam__2___closed__1_once, _init_l___private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_validateForwarder___lam__2___closed__1);
v_nargs_848_ = l_Lean_Expr_getAppNumArgs(v_probeExpr_836_);
lean_inc(v_nargs_848_);
v___x_849_ = lean_mk_array(v_nargs_848_, v_dummy_847_);
v___x_850_ = lean_unsigned_to_nat(1u);
v___x_851_ = lean_nat_sub(v_nargs_848_, v___x_850_);
lean_dec(v_nargs_848_);
v___x_852_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_probeExpr_836_, v___x_849_, v___x_851_);
v___x_853_ = l_Array_zip___redArg(v_fvars_840_, v___x_852_);
lean_dec_ref(v___x_852_);
v___x_854_ = lean_box(0);
v_sz_855_ = lean_array_size(v___x_853_);
v___x_856_ = ((size_t)0ULL);
v___x_857_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_validateForwarder_spec__2(v_forwarded_837_, v_arg_838_, v_headApp_839_, v___x_853_, v_sz_855_, v___x_856_, v___x_854_, v___y_842_, v___y_843_, v___y_844_, v___y_845_);
lean_dec_ref(v___x_853_);
if (lean_obj_tag(v___x_857_) == 0)
{
lean_object* v___x_859_; uint8_t v_isShared_860_; uint8_t v_isSharedCheck_864_; 
v_isSharedCheck_864_ = !lean_is_exclusive(v___x_857_);
if (v_isSharedCheck_864_ == 0)
{
lean_object* v_unused_865_; 
v_unused_865_ = lean_ctor_get(v___x_857_, 0);
lean_dec(v_unused_865_);
v___x_859_ = v___x_857_;
v_isShared_860_ = v_isSharedCheck_864_;
goto v_resetjp_858_;
}
else
{
lean_dec(v___x_857_);
v___x_859_ = lean_box(0);
v_isShared_860_ = v_isSharedCheck_864_;
goto v_resetjp_858_;
}
v_resetjp_858_:
{
lean_object* v___x_862_; 
if (v_isShared_860_ == 0)
{
lean_ctor_set(v___x_859_, 0, v___x_854_);
v___x_862_ = v___x_859_;
goto v_reusejp_861_;
}
else
{
lean_object* v_reuseFailAlloc_863_; 
v_reuseFailAlloc_863_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_863_, 0, v___x_854_);
v___x_862_ = v_reuseFailAlloc_863_;
goto v_reusejp_861_;
}
v_reusejp_861_:
{
return v___x_862_;
}
}
}
else
{
return v___x_857_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_validateForwarder___lam__2___boxed(lean_object* v_probeExpr_866_, lean_object* v_forwarded_867_, lean_object* v_arg_868_, lean_object* v_headApp_869_, lean_object* v_fvars_870_, lean_object* v_x_871_, lean_object* v___y_872_, lean_object* v___y_873_, lean_object* v___y_874_, lean_object* v___y_875_, lean_object* v___y_876_){
_start:
{
lean_object* v_res_877_; 
v_res_877_ = l___private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_validateForwarder___lam__2(v_probeExpr_866_, v_forwarded_867_, v_arg_868_, v_headApp_869_, v_fvars_870_, v_x_871_, v___y_872_, v___y_873_, v___y_874_, v___y_875_);
lean_dec(v___y_875_);
lean_dec_ref(v___y_874_);
lean_dec(v___y_873_);
lean_dec_ref(v___y_872_);
lean_dec_ref(v_x_871_);
lean_dec_ref(v_fvars_870_);
lean_dec_ref(v_forwarded_867_);
return v_res_877_;
}
}
static lean_object* _init_l___private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_validateForwarder___closed__1(void){
_start:
{
lean_object* v___x_879_; lean_object* v___x_880_; 
v___x_879_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_validateForwarder___closed__0));
v___x_880_ = l_Lean_stringToMessageData(v___x_879_);
return v___x_880_;
}
}
static lean_object* _init_l___private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_validateForwarder___closed__3(void){
_start:
{
lean_object* v___x_882_; lean_object* v___x_883_; 
v___x_882_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_validateForwarder___closed__2));
v___x_883_ = l_Lean_stringToMessageData(v___x_882_);
return v___x_883_;
}
}
static lean_object* _init_l___private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_validateForwarder___closed__5(void){
_start:
{
lean_object* v___x_885_; lean_object* v___x_886_; 
v___x_885_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_validateForwarder___closed__4));
v___x_886_ = l_Lean_stringToMessageData(v___x_885_);
return v___x_886_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_validateForwarder(lean_object* v_headApp_887_, lean_object* v_forwarded_888_, lean_object* v_probeExpr_889_, lean_object* v_a_890_, lean_object* v_a_891_, lean_object* v_a_892_, lean_object* v_a_893_){
_start:
{
lean_object* v_reject_895_; lean_object* v___x_896_; 
lean_inc(v_headApp_887_);
v_reject_895_ = lean_alloc_closure((void*)(l___private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_validateForwarder___lam__0___boxed), 8, 1);
lean_closure_set(v_reject_895_, 0, v_headApp_887_);
lean_inc(v_a_893_);
lean_inc_ref(v_a_892_);
lean_inc(v_a_891_);
lean_inc_ref(v_a_890_);
lean_inc_ref(v_probeExpr_889_);
v___x_896_ = lean_infer_type(v_probeExpr_889_, v_a_890_, v_a_891_, v_a_892_, v_a_893_);
if (lean_obj_tag(v___x_896_) == 0)
{
lean_object* v_a_897_; lean_object* v___x_898_; lean_object* v_a_899_; lean_object* v___x_900_; 
v_a_897_ = lean_ctor_get(v___x_896_, 0);
lean_inc(v_a_897_);
lean_dec_ref_known(v___x_896_, 1);
v___x_898_ = l_Lean_instantiateMVars___at___00__private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_validateForwarder_spec__1___redArg(v_a_897_, v_a_891_);
v_a_899_ = lean_ctor_get(v___x_898_, 0);
lean_inc(v_a_899_);
lean_dec_ref(v___x_898_);
v___x_900_ = l_Lean_Meta_whnfD(v_a_899_, v_a_890_, v_a_891_, v_a_892_, v_a_893_);
if (lean_obj_tag(v___x_900_) == 0)
{
lean_object* v_a_901_; 
v_a_901_ = lean_ctor_get(v___x_900_, 0);
lean_inc(v_a_901_);
lean_dec_ref_known(v___x_900_, 1);
if (lean_obj_tag(v_a_901_) == 5)
{
lean_object* v_arg_902_; lean_object* v___f_903_; lean_object* v___f_904_; lean_object* v___y_906_; lean_object* v___y_907_; lean_object* v___y_908_; lean_object* v___y_909_; uint8_t v___x_934_; 
v_arg_902_ = lean_ctor_get(v_a_901_, 1);
lean_inc_ref_n(v_arg_902_, 3);
lean_inc_n(v_headApp_887_, 2);
v___f_903_ = lean_alloc_closure((void*)(l___private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_validateForwarder___lam__1___boxed), 11, 4);
lean_closure_set(v___f_903_, 0, v_arg_902_);
lean_closure_set(v___f_903_, 1, v_headApp_887_);
lean_closure_set(v___f_903_, 2, v_a_901_);
lean_closure_set(v___f_903_, 3, v_reject_895_);
lean_inc_ref(v_forwarded_888_);
lean_inc_ref(v_probeExpr_889_);
v___f_904_ = lean_alloc_closure((void*)(l___private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_validateForwarder___lam__2___boxed), 11, 4);
lean_closure_set(v___f_904_, 0, v_probeExpr_889_);
lean_closure_set(v___f_904_, 1, v_forwarded_888_);
lean_closure_set(v___f_904_, 2, v_arg_902_);
lean_closure_set(v___f_904_, 3, v_headApp_887_);
v___x_934_ = l_Lean_Expr_isMVar(v_arg_902_);
lean_dec_ref(v_arg_902_);
if (v___x_934_ == 0)
{
lean_object* v___x_935_; lean_object* v___x_936_; 
lean_dec_ref(v___f_904_);
lean_dec_ref(v___f_903_);
lean_dec_ref(v_probeExpr_889_);
lean_dec_ref(v_forwarded_888_);
v___x_935_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_validateForwarder___closed__1, &l___private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_validateForwarder___closed__1_once, _init_l___private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_validateForwarder___closed__1);
v___x_936_ = l___private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_validateForwarder___lam__0(v_headApp_887_, lean_box(0), v___x_935_, v_a_890_, v_a_891_, v_a_892_, v_a_893_);
return v___x_936_;
}
else
{
lean_dec(v_headApp_887_);
v___y_906_ = v_a_890_;
v___y_907_ = v_a_891_;
v___y_908_ = v_a_892_;
v___y_909_ = v_a_893_;
goto v___jp_905_;
}
v___jp_905_:
{
lean_object* v___x_910_; 
lean_inc(v___y_909_);
lean_inc_ref(v___y_908_);
lean_inc(v___y_907_);
lean_inc_ref(v___y_906_);
v___x_910_ = lean_infer_type(v_forwarded_888_, v___y_906_, v___y_907_, v___y_908_, v___y_909_);
if (lean_obj_tag(v___x_910_) == 0)
{
lean_object* v_a_911_; uint8_t v___x_912_; lean_object* v___x_913_; 
v_a_911_ = lean_ctor_get(v___x_910_, 0);
lean_inc(v_a_911_);
lean_dec_ref_known(v___x_910_, 1);
v___x_912_ = 0;
v___x_913_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_validateForwarder_spec__4___redArg(v_a_911_, v___f_903_, v___x_912_, v___x_912_, v___y_906_, v___y_907_, v___y_908_, v___y_909_);
if (lean_obj_tag(v___x_913_) == 0)
{
lean_object* v___x_914_; lean_object* v___x_915_; 
lean_dec_ref_known(v___x_913_, 1);
v___x_914_ = l_Lean_Expr_getAppFn(v_probeExpr_889_);
lean_dec_ref(v_probeExpr_889_);
lean_inc(v___y_909_);
lean_inc_ref(v___y_908_);
lean_inc(v___y_907_);
lean_inc_ref(v___y_906_);
v___x_915_ = lean_infer_type(v___x_914_, v___y_906_, v___y_907_, v___y_908_, v___y_909_);
if (lean_obj_tag(v___x_915_) == 0)
{
lean_object* v_a_916_; lean_object* v___x_917_; 
v_a_916_ = lean_ctor_get(v___x_915_, 0);
lean_inc(v_a_916_);
lean_dec_ref_known(v___x_915_, 1);
v___x_917_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_validateForwarder_spec__4___redArg(v_a_916_, v___f_904_, v___x_912_, v___x_912_, v___y_906_, v___y_907_, v___y_908_, v___y_909_);
return v___x_917_;
}
else
{
lean_object* v_a_918_; lean_object* v___x_920_; uint8_t v_isShared_921_; uint8_t v_isSharedCheck_925_; 
lean_dec_ref(v___f_904_);
v_a_918_ = lean_ctor_get(v___x_915_, 0);
v_isSharedCheck_925_ = !lean_is_exclusive(v___x_915_);
if (v_isSharedCheck_925_ == 0)
{
v___x_920_ = v___x_915_;
v_isShared_921_ = v_isSharedCheck_925_;
goto v_resetjp_919_;
}
else
{
lean_inc(v_a_918_);
lean_dec(v___x_915_);
v___x_920_ = lean_box(0);
v_isShared_921_ = v_isSharedCheck_925_;
goto v_resetjp_919_;
}
v_resetjp_919_:
{
lean_object* v___x_923_; 
if (v_isShared_921_ == 0)
{
v___x_923_ = v___x_920_;
goto v_reusejp_922_;
}
else
{
lean_object* v_reuseFailAlloc_924_; 
v_reuseFailAlloc_924_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_924_, 0, v_a_918_);
v___x_923_ = v_reuseFailAlloc_924_;
goto v_reusejp_922_;
}
v_reusejp_922_:
{
return v___x_923_;
}
}
}
}
else
{
lean_dec_ref(v___f_904_);
lean_dec_ref(v_probeExpr_889_);
return v___x_913_;
}
}
else
{
lean_object* v_a_926_; lean_object* v___x_928_; uint8_t v_isShared_929_; uint8_t v_isSharedCheck_933_; 
lean_dec_ref(v___f_904_);
lean_dec_ref(v___f_903_);
lean_dec_ref(v_probeExpr_889_);
v_a_926_ = lean_ctor_get(v___x_910_, 0);
v_isSharedCheck_933_ = !lean_is_exclusive(v___x_910_);
if (v_isSharedCheck_933_ == 0)
{
v___x_928_ = v___x_910_;
v_isShared_929_ = v_isSharedCheck_933_;
goto v_resetjp_927_;
}
else
{
lean_inc(v_a_926_);
lean_dec(v___x_910_);
v___x_928_ = lean_box(0);
v_isShared_929_ = v_isSharedCheck_933_;
goto v_resetjp_927_;
}
v_resetjp_927_:
{
lean_object* v___x_931_; 
if (v_isShared_929_ == 0)
{
v___x_931_ = v___x_928_;
goto v_reusejp_930_;
}
else
{
lean_object* v_reuseFailAlloc_932_; 
v_reuseFailAlloc_932_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_932_, 0, v_a_926_);
v___x_931_ = v_reuseFailAlloc_932_;
goto v_reusejp_930_;
}
v_reusejp_930_:
{
return v___x_931_;
}
}
}
}
}
else
{
lean_object* v___x_937_; lean_object* v___x_938_; lean_object* v___x_939_; lean_object* v___x_940_; lean_object* v___x_941_; lean_object* v___x_942_; 
lean_dec_ref(v_reject_895_);
lean_dec_ref(v_probeExpr_889_);
lean_dec_ref(v_forwarded_888_);
v___x_937_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_validateForwarder___closed__3, &l___private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_validateForwarder___closed__3_once, _init_l___private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_validateForwarder___closed__3);
v___x_938_ = l_Lean_MessageData_ofExpr(v_a_901_);
v___x_939_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_939_, 0, v___x_937_);
lean_ctor_set(v___x_939_, 1, v___x_938_);
v___x_940_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_validateForwarder___closed__5, &l___private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_validateForwarder___closed__5_once, _init_l___private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_validateForwarder___closed__5);
v___x_941_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_941_, 0, v___x_939_);
lean_ctor_set(v___x_941_, 1, v___x_940_);
v___x_942_ = l___private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_validateForwarder___lam__0(v_headApp_887_, lean_box(0), v___x_941_, v_a_890_, v_a_891_, v_a_892_, v_a_893_);
return v___x_942_;
}
}
else
{
lean_object* v_a_943_; lean_object* v___x_945_; uint8_t v_isShared_946_; uint8_t v_isSharedCheck_950_; 
lean_dec_ref(v_reject_895_);
lean_dec_ref(v_probeExpr_889_);
lean_dec_ref(v_forwarded_888_);
lean_dec(v_headApp_887_);
v_a_943_ = lean_ctor_get(v___x_900_, 0);
v_isSharedCheck_950_ = !lean_is_exclusive(v___x_900_);
if (v_isSharedCheck_950_ == 0)
{
v___x_945_ = v___x_900_;
v_isShared_946_ = v_isSharedCheck_950_;
goto v_resetjp_944_;
}
else
{
lean_inc(v_a_943_);
lean_dec(v___x_900_);
v___x_945_ = lean_box(0);
v_isShared_946_ = v_isSharedCheck_950_;
goto v_resetjp_944_;
}
v_resetjp_944_:
{
lean_object* v___x_948_; 
if (v_isShared_946_ == 0)
{
v___x_948_ = v___x_945_;
goto v_reusejp_947_;
}
else
{
lean_object* v_reuseFailAlloc_949_; 
v_reuseFailAlloc_949_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_949_, 0, v_a_943_);
v___x_948_ = v_reuseFailAlloc_949_;
goto v_reusejp_947_;
}
v_reusejp_947_:
{
return v___x_948_;
}
}
}
}
else
{
lean_object* v_a_951_; lean_object* v___x_953_; uint8_t v_isShared_954_; uint8_t v_isSharedCheck_958_; 
lean_dec_ref(v_reject_895_);
lean_dec_ref(v_probeExpr_889_);
lean_dec_ref(v_forwarded_888_);
lean_dec(v_headApp_887_);
v_a_951_ = lean_ctor_get(v___x_896_, 0);
v_isSharedCheck_958_ = !lean_is_exclusive(v___x_896_);
if (v_isSharedCheck_958_ == 0)
{
v___x_953_ = v___x_896_;
v_isShared_954_ = v_isSharedCheck_958_;
goto v_resetjp_952_;
}
else
{
lean_inc(v_a_951_);
lean_dec(v___x_896_);
v___x_953_ = lean_box(0);
v_isShared_954_ = v_isSharedCheck_958_;
goto v_resetjp_952_;
}
v_resetjp_952_:
{
lean_object* v___x_956_; 
if (v_isShared_954_ == 0)
{
v___x_956_ = v___x_953_;
goto v_reusejp_955_;
}
else
{
lean_object* v_reuseFailAlloc_957_; 
v_reuseFailAlloc_957_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_957_, 0, v_a_951_);
v___x_956_ = v_reuseFailAlloc_957_;
goto v_reusejp_955_;
}
v_reusejp_955_:
{
return v___x_956_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_validateForwarder___boxed(lean_object* v_headApp_959_, lean_object* v_forwarded_960_, lean_object* v_probeExpr_961_, lean_object* v_a_962_, lean_object* v_a_963_, lean_object* v_a_964_, lean_object* v_a_965_, lean_object* v_a_966_){
_start:
{
lean_object* v_res_967_; 
v_res_967_ = l___private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_validateForwarder(v_headApp_959_, v_forwarded_960_, v_probeExpr_961_, v_a_962_, v_a_963_, v_a_964_, v_a_965_);
lean_dec(v_a_965_);
lean_dec_ref(v_a_964_);
lean_dec(v_a_963_);
lean_dec_ref(v_a_962_);
return v_res_967_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_validateForwarder_spec__0(lean_object* v_00_u03b1_968_, lean_object* v_msg_969_, lean_object* v___y_970_, lean_object* v___y_971_, lean_object* v___y_972_, lean_object* v___y_973_){
_start:
{
lean_object* v___x_975_; 
v___x_975_ = l_Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_validateForwarder_spec__0___redArg(v_msg_969_, v___y_970_, v___y_971_, v___y_972_, v___y_973_);
return v___x_975_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_validateForwarder_spec__0___boxed(lean_object* v_00_u03b1_976_, lean_object* v_msg_977_, lean_object* v___y_978_, lean_object* v___y_979_, lean_object* v___y_980_, lean_object* v___y_981_, lean_object* v___y_982_){
_start:
{
lean_object* v_res_983_; 
v_res_983_ = l_Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_validateForwarder_spec__0(v_00_u03b1_976_, v_msg_977_, v___y_978_, v___y_979_, v___y_980_, v___y_981_);
lean_dec(v___y_981_);
lean_dec_ref(v___y_980_);
lean_dec(v___y_979_);
lean_dec_ref(v___y_978_);
return v_res_983_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__1___redArg(lean_object* v_e_984_, lean_object* v___y_985_){
_start:
{
uint8_t v___x_987_; 
v___x_987_ = l_Lean_Expr_hasMVar(v_e_984_);
if (v___x_987_ == 0)
{
lean_object* v___x_988_; 
v___x_988_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_988_, 0, v_e_984_);
return v___x_988_;
}
else
{
lean_object* v___x_989_; lean_object* v_mctx_990_; lean_object* v___x_991_; lean_object* v_fst_992_; lean_object* v_snd_993_; lean_object* v___x_994_; lean_object* v_cache_995_; lean_object* v_zetaDeltaFVarIds_996_; lean_object* v_postponed_997_; lean_object* v_diag_998_; lean_object* v___x_1000_; uint8_t v_isShared_1001_; uint8_t v_isSharedCheck_1007_; 
v___x_989_ = lean_st_ref_get(v___y_985_);
v_mctx_990_ = lean_ctor_get(v___x_989_, 0);
lean_inc_ref(v_mctx_990_);
lean_dec(v___x_989_);
v___x_991_ = l_Lean_instantiateMVarsCore(v_mctx_990_, v_e_984_);
v_fst_992_ = lean_ctor_get(v___x_991_, 0);
lean_inc(v_fst_992_);
v_snd_993_ = lean_ctor_get(v___x_991_, 1);
lean_inc(v_snd_993_);
lean_dec_ref(v___x_991_);
v___x_994_ = lean_st_ref_take(v___y_985_);
v_cache_995_ = lean_ctor_get(v___x_994_, 1);
v_zetaDeltaFVarIds_996_ = lean_ctor_get(v___x_994_, 2);
v_postponed_997_ = lean_ctor_get(v___x_994_, 3);
v_diag_998_ = lean_ctor_get(v___x_994_, 4);
v_isSharedCheck_1007_ = !lean_is_exclusive(v___x_994_);
if (v_isSharedCheck_1007_ == 0)
{
lean_object* v_unused_1008_; 
v_unused_1008_ = lean_ctor_get(v___x_994_, 0);
lean_dec(v_unused_1008_);
v___x_1000_ = v___x_994_;
v_isShared_1001_ = v_isSharedCheck_1007_;
goto v_resetjp_999_;
}
else
{
lean_inc(v_diag_998_);
lean_inc(v_postponed_997_);
lean_inc(v_zetaDeltaFVarIds_996_);
lean_inc(v_cache_995_);
lean_dec(v___x_994_);
v___x_1000_ = lean_box(0);
v_isShared_1001_ = v_isSharedCheck_1007_;
goto v_resetjp_999_;
}
v_resetjp_999_:
{
lean_object* v___x_1003_; 
if (v_isShared_1001_ == 0)
{
lean_ctor_set(v___x_1000_, 0, v_snd_993_);
v___x_1003_ = v___x_1000_;
goto v_reusejp_1002_;
}
else
{
lean_object* v_reuseFailAlloc_1006_; 
v_reuseFailAlloc_1006_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1006_, 0, v_snd_993_);
lean_ctor_set(v_reuseFailAlloc_1006_, 1, v_cache_995_);
lean_ctor_set(v_reuseFailAlloc_1006_, 2, v_zetaDeltaFVarIds_996_);
lean_ctor_set(v_reuseFailAlloc_1006_, 3, v_postponed_997_);
lean_ctor_set(v_reuseFailAlloc_1006_, 4, v_diag_998_);
v___x_1003_ = v_reuseFailAlloc_1006_;
goto v_reusejp_1002_;
}
v_reusejp_1002_:
{
lean_object* v___x_1004_; lean_object* v___x_1005_; 
v___x_1004_ = lean_st_ref_put(v___y_985_, v___x_1003_);
v___x_1005_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1005_, 0, v_fst_992_);
return v___x_1005_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__1___redArg___boxed(lean_object* v_e_1009_, lean_object* v___y_1010_, lean_object* v___y_1011_){
_start:
{
lean_object* v_res_1012_; 
v_res_1012_ = l_Lean_instantiateMVars___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__1___redArg(v_e_1009_, v___y_1010_);
lean_dec(v___y_1010_);
return v_res_1012_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__1(lean_object* v_e_1013_, lean_object* v___y_1014_, lean_object* v___y_1015_, lean_object* v___y_1016_, lean_object* v___y_1017_, lean_object* v___y_1018_, lean_object* v___y_1019_){
_start:
{
lean_object* v___x_1021_; 
v___x_1021_ = l_Lean_instantiateMVars___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__1___redArg(v_e_1013_, v___y_1017_);
return v___x_1021_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__1___boxed(lean_object* v_e_1022_, lean_object* v___y_1023_, lean_object* v___y_1024_, lean_object* v___y_1025_, lean_object* v___y_1026_, lean_object* v___y_1027_, lean_object* v___y_1028_, lean_object* v___y_1029_){
_start:
{
lean_object* v_res_1030_; 
v_res_1030_ = l_Lean_instantiateMVars___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__1(v_e_1022_, v___y_1023_, v___y_1024_, v___y_1025_, v___y_1026_, v___y_1027_, v___y_1028_);
lean_dec(v___y_1028_);
lean_dec_ref(v___y_1027_);
lean_dec(v___y_1026_);
lean_dec_ref(v___y_1025_);
lean_dec(v___y_1024_);
lean_dec_ref(v___y_1023_);
return v_res_1030_;
}
}
static lean_object* _init_l_Lean_Elab_Do_tryElabForwardApp_x3f___lam__0___closed__4(void){
_start:
{
lean_object* v___x_1039_; lean_object* v___x_1040_; 
v___x_1039_ = ((lean_object*)(l_Lean_Elab_Do_tryElabForwardApp_x3f___lam__0___closed__3));
v___x_1040_ = l_String_toRawSubstring_x27(v___x_1039_);
return v___x_1040_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_tryElabForwardApp_x3f___lam__0(lean_object* v_a_1052_, lean_object* v_a_1053_, lean_object* v_a_1054_, lean_object* v_a_1055_, lean_object* v_fst_1056_, lean_object* v___y_1057_, lean_object* v___y_1058_){
_start:
{
lean_object* v_toCold_1060_; lean_object* v_ref_1061_; lean_object* v_quotContext_1062_; lean_object* v_currMacroScope_1063_; uint8_t v___x_1064_; lean_object* v___x_1065_; lean_object* v___x_1066_; lean_object* v___x_1067_; lean_object* v___x_1068_; lean_object* v___x_1069_; lean_object* v___x_1070_; lean_object* v___x_1071_; lean_object* v___x_1072_; lean_object* v___x_1073_; lean_object* v___x_1074_; lean_object* v___x_1075_; uint8_t v___x_1076_; lean_object* v___x_1077_; 
v_toCold_1060_ = lean_ctor_get(v___y_1057_, 0);
v_ref_1061_ = lean_ctor_get(v___y_1057_, 2);
v_quotContext_1062_ = lean_ctor_get(v_toCold_1060_, 8);
v_currMacroScope_1063_ = lean_ctor_get(v_toCold_1060_, 9);
v___x_1064_ = 0;
v___x_1065_ = l_Lean_SourceInfo_fromRef(v_ref_1061_, v___x_1064_);
v___x_1066_ = ((lean_object*)(l_Lean_Elab_Do_tryElabForwardApp_x3f___lam__0___closed__1));
v___x_1067_ = ((lean_object*)(l_Lean_Elab_Do_tryElabForwardApp_x3f___lam__0___closed__2));
lean_inc_n(v___x_1065_, 3);
v___x_1068_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1068_, 0, v___x_1065_);
lean_ctor_set(v___x_1068_, 1, v___x_1067_);
v___x_1069_ = lean_obj_once(&l_Lean_Elab_Do_tryElabForwardApp_x3f___lam__0___closed__4, &l_Lean_Elab_Do_tryElabForwardApp_x3f___lam__0___closed__4_once, _init_l_Lean_Elab_Do_tryElabForwardApp_x3f___lam__0___closed__4);
v___x_1070_ = ((lean_object*)(l_Lean_Elab_Do_tryElabForwardApp_x3f___lam__0___closed__5));
lean_inc(v_currMacroScope_1063_);
lean_inc(v_quotContext_1062_);
v___x_1071_ = l_Lean_addMacroScope(v_quotContext_1062_, v___x_1070_, v_currMacroScope_1063_);
v___x_1072_ = lean_box(0);
v___x_1073_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1073_, 0, v___x_1065_);
lean_ctor_set(v___x_1073_, 1, v___x_1069_);
lean_ctor_set(v___x_1073_, 2, v___x_1071_);
lean_ctor_set(v___x_1073_, 3, v___x_1072_);
v___x_1074_ = l_Lean_Syntax_node2(v___x_1065_, v___x_1066_, v___x_1068_, v___x_1073_);
v___x_1075_ = lean_box(0);
v___x_1076_ = 1;
lean_inc(v___x_1074_);
v___x_1077_ = l_Lean_Elab_Term_elabTerm(v___x_1074_, v___x_1075_, v___x_1076_, v___x_1076_, v_a_1052_, v_a_1053_, v_a_1054_, v_a_1055_, v___y_1057_, v___y_1058_);
if (lean_obj_tag(v___x_1077_) == 0)
{
lean_object* v_a_1078_; lean_object* v___x_1079_; lean_object* v___x_1080_; lean_object* v___x_1081_; lean_object* v___x_1082_; lean_object* v___x_1083_; 
v_a_1078_ = lean_ctor_get(v___x_1077_, 0);
lean_inc(v_a_1078_);
lean_dec_ref_known(v___x_1077_, 1);
v___x_1079_ = ((lean_object*)(l_Lean_Elab_Do_tryElabForwardApp_x3f___lam__0___closed__7));
v___x_1080_ = ((lean_object*)(l_Lean_Elab_Do_tryElabForwardApp_x3f___lam__0___closed__9));
lean_inc(v___x_1065_);
v___x_1081_ = l_Lean_Syntax_node1(v___x_1065_, v___x_1080_, v___x_1074_);
v___x_1082_ = l_Lean_Syntax_node2(v___x_1065_, v___x_1079_, v_fst_1056_, v___x_1081_);
v___x_1083_ = l_Lean_Elab_Term_elabTerm(v___x_1082_, v___x_1075_, v___x_1076_, v___x_1076_, v_a_1052_, v_a_1053_, v_a_1054_, v_a_1055_, v___y_1057_, v___y_1058_);
lean_dec_ref(v___y_1057_);
if (lean_obj_tag(v___x_1083_) == 0)
{
lean_object* v_a_1084_; lean_object* v___x_1086_; uint8_t v_isShared_1087_; uint8_t v_isSharedCheck_1092_; 
v_a_1084_ = lean_ctor_get(v___x_1083_, 0);
v_isSharedCheck_1092_ = !lean_is_exclusive(v___x_1083_);
if (v_isSharedCheck_1092_ == 0)
{
v___x_1086_ = v___x_1083_;
v_isShared_1087_ = v_isSharedCheck_1092_;
goto v_resetjp_1085_;
}
else
{
lean_inc(v_a_1084_);
lean_dec(v___x_1083_);
v___x_1086_ = lean_box(0);
v_isShared_1087_ = v_isSharedCheck_1092_;
goto v_resetjp_1085_;
}
v_resetjp_1085_:
{
lean_object* v___x_1088_; lean_object* v___x_1090_; 
v___x_1088_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1088_, 0, v_a_1078_);
lean_ctor_set(v___x_1088_, 1, v_a_1084_);
if (v_isShared_1087_ == 0)
{
lean_ctor_set(v___x_1086_, 0, v___x_1088_);
v___x_1090_ = v___x_1086_;
goto v_reusejp_1089_;
}
else
{
lean_object* v_reuseFailAlloc_1091_; 
v_reuseFailAlloc_1091_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1091_, 0, v___x_1088_);
v___x_1090_ = v_reuseFailAlloc_1091_;
goto v_reusejp_1089_;
}
v_reusejp_1089_:
{
return v___x_1090_;
}
}
}
else
{
lean_object* v_a_1093_; lean_object* v___x_1095_; uint8_t v_isShared_1096_; uint8_t v_isSharedCheck_1100_; 
lean_dec(v_a_1078_);
v_a_1093_ = lean_ctor_get(v___x_1083_, 0);
v_isSharedCheck_1100_ = !lean_is_exclusive(v___x_1083_);
if (v_isSharedCheck_1100_ == 0)
{
v___x_1095_ = v___x_1083_;
v_isShared_1096_ = v_isSharedCheck_1100_;
goto v_resetjp_1094_;
}
else
{
lean_inc(v_a_1093_);
lean_dec(v___x_1083_);
v___x_1095_ = lean_box(0);
v_isShared_1096_ = v_isSharedCheck_1100_;
goto v_resetjp_1094_;
}
v_resetjp_1094_:
{
lean_object* v___x_1098_; 
if (v_isShared_1096_ == 0)
{
v___x_1098_ = v___x_1095_;
goto v_reusejp_1097_;
}
else
{
lean_object* v_reuseFailAlloc_1099_; 
v_reuseFailAlloc_1099_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1099_, 0, v_a_1093_);
v___x_1098_ = v_reuseFailAlloc_1099_;
goto v_reusejp_1097_;
}
v_reusejp_1097_:
{
return v___x_1098_;
}
}
}
}
else
{
lean_object* v_a_1101_; lean_object* v___x_1103_; uint8_t v_isShared_1104_; uint8_t v_isSharedCheck_1108_; 
lean_dec(v___x_1074_);
lean_dec(v___x_1065_);
lean_dec_ref(v___y_1057_);
lean_dec(v_fst_1056_);
v_a_1101_ = lean_ctor_get(v___x_1077_, 0);
v_isSharedCheck_1108_ = !lean_is_exclusive(v___x_1077_);
if (v_isSharedCheck_1108_ == 0)
{
v___x_1103_ = v___x_1077_;
v_isShared_1104_ = v_isSharedCheck_1108_;
goto v_resetjp_1102_;
}
else
{
lean_inc(v_a_1101_);
lean_dec(v___x_1077_);
v___x_1103_ = lean_box(0);
v_isShared_1104_ = v_isSharedCheck_1108_;
goto v_resetjp_1102_;
}
v_resetjp_1102_:
{
lean_object* v___x_1106_; 
if (v_isShared_1104_ == 0)
{
v___x_1106_ = v___x_1103_;
goto v_reusejp_1105_;
}
else
{
lean_object* v_reuseFailAlloc_1107_; 
v_reuseFailAlloc_1107_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1107_, 0, v_a_1101_);
v___x_1106_ = v_reuseFailAlloc_1107_;
goto v_reusejp_1105_;
}
v_reusejp_1105_:
{
return v___x_1106_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_tryElabForwardApp_x3f___lam__0___boxed(lean_object* v_a_1109_, lean_object* v_a_1110_, lean_object* v_a_1111_, lean_object* v_a_1112_, lean_object* v_fst_1113_, lean_object* v___y_1114_, lean_object* v___y_1115_, lean_object* v___y_1116_){
_start:
{
lean_object* v_res_1117_; 
v_res_1117_ = l_Lean_Elab_Do_tryElabForwardApp_x3f___lam__0(v_a_1109_, v_a_1110_, v_a_1111_, v_a_1112_, v_fst_1113_, v___y_1114_, v___y_1115_);
lean_dec(v___y_1115_);
lean_dec(v_a_1112_);
lean_dec_ref(v_a_1111_);
lean_dec(v_a_1110_);
lean_dec_ref(v_a_1109_);
return v_res_1117_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_tryElabForwardApp_x3f___lam__1(lean_object* v_body_1118_, lean_object* v_cont_1119_, lean_object* v___y_1120_, lean_object* v___y_1121_, lean_object* v___y_1122_, lean_object* v___y_1123_, lean_object* v___y_1124_, lean_object* v___y_1125_, lean_object* v___y_1126_){
_start:
{
uint8_t v___x_1128_; lean_object* v___x_1129_; 
v___x_1128_ = 1;
v___x_1129_ = l_Lean_Elab_Do_elabDoSeq(v_body_1118_, v_cont_1119_, v___x_1128_, v___y_1120_, v___y_1121_, v___y_1122_, v___y_1123_, v___y_1124_, v___y_1125_, v___y_1126_);
return v___x_1129_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_tryElabForwardApp_x3f___lam__1___boxed(lean_object* v_body_1130_, lean_object* v_cont_1131_, lean_object* v___y_1132_, lean_object* v___y_1133_, lean_object* v___y_1134_, lean_object* v___y_1135_, lean_object* v___y_1136_, lean_object* v___y_1137_, lean_object* v___y_1138_, lean_object* v___y_1139_){
_start:
{
lean_object* v_res_1140_; 
v_res_1140_ = l_Lean_Elab_Do_tryElabForwardApp_x3f___lam__1(v_body_1130_, v_cont_1131_, v___y_1132_, v___y_1133_, v___y_1134_, v___y_1135_, v___y_1136_, v___y_1137_, v___y_1138_);
lean_dec(v___y_1138_);
lean_dec_ref(v___y_1137_);
lean_dec(v___y_1136_);
lean_dec_ref(v___y_1135_);
lean_dec(v___y_1134_);
lean_dec_ref(v___y_1133_);
lean_dec_ref(v___y_1132_);
return v_res_1140_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_tryElabForwardApp_x3f___lam__2(lean_object* v_a_1141_, lean_object* v___f_1142_, lean_object* v_a_1143_, lean_object* v_bsExpr_1144_, lean_object* v_x_1145_, lean_object* v___y_1146_, lean_object* v___y_1147_, lean_object* v___y_1148_, lean_object* v___y_1149_, lean_object* v___y_1150_, lean_object* v___y_1151_){
_start:
{
lean_object* v___x_1153_; 
v___x_1153_ = l_Lean_Elab_Do_EffectForwarder_lift(v_a_1141_, v___f_1142_, v_a_1143_, v___y_1146_, v___y_1147_, v___y_1148_, v___y_1149_, v___y_1150_, v___y_1151_);
if (lean_obj_tag(v___x_1153_) == 0)
{
lean_object* v_a_1154_; uint8_t v___x_1155_; uint8_t v___x_1156_; uint8_t v___x_1157_; lean_object* v___x_1158_; 
v_a_1154_ = lean_ctor_get(v___x_1153_, 0);
lean_inc(v_a_1154_);
lean_dec_ref_known(v___x_1153_, 1);
v___x_1155_ = 0;
v___x_1156_ = 1;
v___x_1157_ = 1;
v___x_1158_ = l_Lean_Meta_mkLambdaFVars(v_bsExpr_1144_, v_a_1154_, v___x_1155_, v___x_1156_, v___x_1155_, v___x_1156_, v___x_1157_, v___y_1148_, v___y_1149_, v___y_1150_, v___y_1151_);
return v___x_1158_;
}
else
{
lean_dec_ref(v_bsExpr_1144_);
return v___x_1153_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_tryElabForwardApp_x3f___lam__2___boxed(lean_object* v_a_1159_, lean_object* v___f_1160_, lean_object* v_a_1161_, lean_object* v_bsExpr_1162_, lean_object* v_x_1163_, lean_object* v___y_1164_, lean_object* v___y_1165_, lean_object* v___y_1166_, lean_object* v___y_1167_, lean_object* v___y_1168_, lean_object* v___y_1169_, lean_object* v___y_1170_){
_start:
{
lean_object* v_res_1171_; 
v_res_1171_ = l_Lean_Elab_Do_tryElabForwardApp_x3f___lam__2(v_a_1159_, v___f_1160_, v_a_1161_, v_bsExpr_1162_, v_x_1163_, v___y_1164_, v___y_1165_, v___y_1166_, v___y_1167_, v___y_1168_, v___y_1169_);
lean_dec(v___y_1169_);
lean_dec_ref(v___y_1168_);
lean_dec(v___y_1167_);
lean_dec_ref(v___y_1166_);
lean_dec(v___y_1165_);
lean_dec_ref(v___y_1164_);
lean_dec(v_x_1163_);
lean_dec_ref(v_a_1161_);
return v_res_1171_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_tryElabForwardApp_x3f___lam__3(lean_object* v_a_1172_, lean_object* v_fst_1173_, lean_object* v___f_1174_, lean_object* v_____r_1175_, lean_object* v___y_1176_, lean_object* v___y_1177_, lean_object* v___y_1178_, lean_object* v___y_1179_, lean_object* v___y_1180_, lean_object* v___y_1181_){
_start:
{
lean_object* v___x_1183_; lean_object* v___x_1184_; 
v___x_1183_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1183_, 0, v_a_1172_);
v___x_1184_ = l_Lean_Elab_Term_elabFunBinders___redArg(v_fst_1173_, v___x_1183_, v___f_1174_, v___y_1176_, v___y_1177_, v___y_1178_, v___y_1179_, v___y_1180_, v___y_1181_);
return v___x_1184_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_tryElabForwardApp_x3f___lam__3___boxed(lean_object* v_a_1185_, lean_object* v_fst_1186_, lean_object* v___f_1187_, lean_object* v_____r_1188_, lean_object* v___y_1189_, lean_object* v___y_1190_, lean_object* v___y_1191_, lean_object* v___y_1192_, lean_object* v___y_1193_, lean_object* v___y_1194_, lean_object* v___y_1195_){
_start:
{
lean_object* v_res_1196_; 
v_res_1196_ = l_Lean_Elab_Do_tryElabForwardApp_x3f___lam__3(v_a_1185_, v_fst_1186_, v___f_1187_, v_____r_1188_, v___y_1189_, v___y_1190_, v___y_1191_, v___y_1192_, v___y_1193_, v___y_1194_);
lean_dec(v___y_1194_);
lean_dec_ref(v___y_1193_);
lean_dec(v___y_1192_);
lean_dec_ref(v___y_1191_);
lean_dec(v___y_1190_);
lean_dec_ref(v___y_1189_);
lean_dec_ref(v_fst_1186_);
return v_res_1196_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__0___redArg(lean_object* v_msg_1197_, lean_object* v___y_1198_, lean_object* v___y_1199_, lean_object* v___y_1200_, lean_object* v___y_1201_){
_start:
{
lean_object* v_ref_1203_; lean_object* v___x_1204_; lean_object* v_a_1205_; lean_object* v___x_1207_; uint8_t v_isShared_1208_; uint8_t v_isSharedCheck_1213_; 
v_ref_1203_ = lean_ctor_get(v___y_1200_, 2);
v___x_1204_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Do_elabDoForward_spec__0_spec__0(v_msg_1197_, v___y_1198_, v___y_1199_, v___y_1200_, v___y_1201_);
v_a_1205_ = lean_ctor_get(v___x_1204_, 0);
v_isSharedCheck_1213_ = !lean_is_exclusive(v___x_1204_);
if (v_isSharedCheck_1213_ == 0)
{
v___x_1207_ = v___x_1204_;
v_isShared_1208_ = v_isSharedCheck_1213_;
goto v_resetjp_1206_;
}
else
{
lean_inc(v_a_1205_);
lean_dec(v___x_1204_);
v___x_1207_ = lean_box(0);
v_isShared_1208_ = v_isSharedCheck_1213_;
goto v_resetjp_1206_;
}
v_resetjp_1206_:
{
lean_object* v___x_1209_; lean_object* v___x_1211_; 
lean_inc(v_ref_1203_);
v___x_1209_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1209_, 0, v_ref_1203_);
lean_ctor_set(v___x_1209_, 1, v_a_1205_);
if (v_isShared_1208_ == 0)
{
lean_ctor_set_tag(v___x_1207_, 1);
lean_ctor_set(v___x_1207_, 0, v___x_1209_);
v___x_1211_ = v___x_1207_;
goto v_reusejp_1210_;
}
else
{
lean_object* v_reuseFailAlloc_1212_; 
v_reuseFailAlloc_1212_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1212_, 0, v___x_1209_);
v___x_1211_ = v_reuseFailAlloc_1212_;
goto v_reusejp_1210_;
}
v_reusejp_1210_:
{
return v___x_1211_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__0___redArg___boxed(lean_object* v_msg_1214_, lean_object* v___y_1215_, lean_object* v___y_1216_, lean_object* v___y_1217_, lean_object* v___y_1218_, lean_object* v___y_1219_){
_start:
{
lean_object* v_res_1220_; 
v_res_1220_ = l_Lean_throwError___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__0___redArg(v_msg_1214_, v___y_1215_, v___y_1216_, v___y_1217_, v___y_1218_);
lean_dec(v___y_1218_);
lean_dec_ref(v___y_1217_);
lean_dec(v___y_1216_);
lean_dec_ref(v___y_1215_);
return v_res_1220_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__2(size_t v_sz_1221_, size_t v_i_1222_, lean_object* v_bs_1223_){
_start:
{
uint8_t v___x_1224_; 
v___x_1224_ = lean_usize_dec_lt(v_i_1222_, v_sz_1221_);
if (v___x_1224_ == 0)
{
lean_object* v___x_1225_; 
v___x_1225_ = l_unsafeCast___redArg(v_bs_1223_);
lean_dec_ref(v_bs_1223_);
return v___x_1225_;
}
else
{
lean_object* v_v_1226_; lean_object* v___x_1227_; lean_object* v_bs_x27_1228_; lean_object* v___x_1229_; size_t v___x_1230_; size_t v___x_1231_; lean_object* v___x_1232_; lean_object* v___x_1233_; 
v_v_1226_ = lean_array_uget(v_bs_1223_, v_i_1222_);
v___x_1227_ = lean_unsigned_to_nat(0u);
v_bs_x27_1228_ = lean_array_uset(v_bs_1223_, v_i_1222_, v___x_1227_);
v___x_1229_ = l_unsafeCast___redArg(v_v_1226_);
lean_dec(v_v_1226_);
v___x_1230_ = ((size_t)1ULL);
v___x_1231_ = lean_usize_add(v_i_1222_, v___x_1230_);
v___x_1232_ = l_unsafeCast___redArg(v___x_1229_);
lean_dec(v___x_1229_);
v___x_1233_ = lean_array_uset(v_bs_x27_1228_, v_i_1222_, v___x_1232_);
v_i_1222_ = v___x_1231_;
v_bs_1223_ = v___x_1233_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__2___boxed(lean_object* v_sz_1235_, lean_object* v_i_1236_, lean_object* v_bs_1237_){
_start:
{
size_t v_sz_boxed_1238_; size_t v_i_boxed_1239_; lean_object* v_res_1240_; 
v_sz_boxed_1238_ = lean_unbox_usize(v_sz_1235_);
lean_dec(v_sz_1235_);
v_i_boxed_1239_ = lean_unbox_usize(v_i_1236_);
lean_dec(v_i_1236_);
v_res_1240_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__2(v_sz_boxed_1238_, v_i_boxed_1239_, v_bs_1237_);
return v_res_1240_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__5_spec__6_spec__9_spec__13_spec__16___redArg(lean_object* v_keys_1241_, lean_object* v_i_1242_, lean_object* v_k_1243_){
_start:
{
lean_object* v___x_1244_; uint8_t v___x_1245_; 
v___x_1244_ = lean_array_get_size(v_keys_1241_);
v___x_1245_ = lean_nat_dec_lt(v_i_1242_, v___x_1244_);
if (v___x_1245_ == 0)
{
lean_dec(v_i_1242_);
return v___x_1245_;
}
else
{
lean_object* v_k_x27_1246_; uint8_t v___x_1247_; 
v_k_x27_1246_ = lean_array_fget_borrowed(v_keys_1241_, v_i_1242_);
v___x_1247_ = l_Lean_instBEqExtraModUse_beq(v_k_1243_, v_k_x27_1246_);
if (v___x_1247_ == 0)
{
lean_object* v___x_1248_; lean_object* v___x_1249_; 
v___x_1248_ = lean_unsigned_to_nat(1u);
v___x_1249_ = lean_nat_add(v_i_1242_, v___x_1248_);
lean_dec(v_i_1242_);
v_i_1242_ = v___x_1249_;
goto _start;
}
else
{
lean_dec(v_i_1242_);
return v___x_1245_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__5_spec__6_spec__9_spec__13_spec__16___redArg___boxed(lean_object* v_keys_1251_, lean_object* v_i_1252_, lean_object* v_k_1253_){
_start:
{
uint8_t v_res_1254_; lean_object* v_r_1255_; 
v_res_1254_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__5_spec__6_spec__9_spec__13_spec__16___redArg(v_keys_1251_, v_i_1252_, v_k_1253_);
lean_dec_ref(v_k_1253_);
lean_dec_ref(v_keys_1251_);
v_r_1255_ = lean_box(v_res_1254_);
return v_r_1255_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__5_spec__6_spec__9_spec__13___redArg(lean_object* v_x_1256_, size_t v_x_1257_, lean_object* v_x_1258_){
_start:
{
if (lean_obj_tag(v_x_1256_) == 0)
{
lean_object* v_es_1259_; lean_object* v___x_1260_; size_t v___x_1261_; size_t v___x_1262_; lean_object* v_j_1263_; lean_object* v___x_1264_; 
v_es_1259_ = lean_ctor_get(v_x_1256_, 0);
v___x_1260_ = lean_box(2);
v___x_1261_ = ((size_t)31ULL);
v___x_1262_ = lean_usize_land(v_x_1257_, v___x_1261_);
v_j_1263_ = lean_usize_to_nat(v___x_1262_);
v___x_1264_ = lean_array_get_borrowed(v___x_1260_, v_es_1259_, v_j_1263_);
lean_dec(v_j_1263_);
switch(lean_obj_tag(v___x_1264_))
{
case 0:
{
lean_object* v_key_1265_; uint8_t v___x_1266_; 
v_key_1265_ = lean_ctor_get(v___x_1264_, 0);
v___x_1266_ = l_Lean_instBEqExtraModUse_beq(v_x_1258_, v_key_1265_);
return v___x_1266_;
}
case 1:
{
lean_object* v_node_1267_; size_t v___x_1268_; size_t v___x_1269_; 
v_node_1267_ = lean_ctor_get(v___x_1264_, 0);
v___x_1268_ = ((size_t)5ULL);
v___x_1269_ = lean_usize_shift_right(v_x_1257_, v___x_1268_);
v_x_1256_ = v_node_1267_;
v_x_1257_ = v___x_1269_;
goto _start;
}
default: 
{
uint8_t v___x_1271_; 
v___x_1271_ = 0;
return v___x_1271_;
}
}
}
else
{
lean_object* v_ks_1272_; lean_object* v___x_1273_; uint8_t v___x_1274_; 
v_ks_1272_ = lean_ctor_get(v_x_1256_, 0);
v___x_1273_ = lean_unsigned_to_nat(0u);
v___x_1274_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__5_spec__6_spec__9_spec__13_spec__16___redArg(v_ks_1272_, v___x_1273_, v_x_1258_);
return v___x_1274_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__5_spec__6_spec__9_spec__13___redArg___boxed(lean_object* v_x_1275_, lean_object* v_x_1276_, lean_object* v_x_1277_){
_start:
{
size_t v_x_28243__boxed_1278_; uint8_t v_res_1279_; lean_object* v_r_1280_; 
v_x_28243__boxed_1278_ = lean_unbox_usize(v_x_1276_);
lean_dec(v_x_1276_);
v_res_1279_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__5_spec__6_spec__9_spec__13___redArg(v_x_1275_, v_x_28243__boxed_1278_, v_x_1277_);
lean_dec_ref(v_x_1277_);
lean_dec_ref(v_x_1275_);
v_r_1280_ = lean_box(v_res_1279_);
return v_r_1280_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__5_spec__6_spec__9___redArg(lean_object* v_x_1281_, lean_object* v_x_1282_){
_start:
{
uint64_t v___x_1283_; size_t v___x_1284_; uint8_t v___x_1285_; 
v___x_1283_ = l_Lean_instHashableExtraModUse_hash(v_x_1282_);
v___x_1284_ = lean_uint64_to_usize(v___x_1283_);
v___x_1285_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__5_spec__6_spec__9_spec__13___redArg(v_x_1281_, v___x_1284_, v_x_1282_);
return v___x_1285_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__5_spec__6_spec__9___redArg___boxed(lean_object* v_x_1286_, lean_object* v_x_1287_){
_start:
{
uint8_t v_res_1288_; lean_object* v_r_1289_; 
v_res_1288_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__5_spec__6_spec__9___redArg(v_x_1286_, v_x_1287_);
lean_dec_ref(v_x_1287_);
lean_dec_ref(v_x_1286_);
v_r_1289_ = lean_box(v_res_1288_);
return v_r_1289_;
}
}
static double _init_l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__3___redArg___closed__0(void){
_start:
{
lean_object* v___x_1290_; double v___x_1291_; 
v___x_1290_ = lean_unsigned_to_nat(0u);
v___x_1291_ = lean_float_of_nat(v___x_1290_);
return v___x_1291_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__3___redArg(lean_object* v_cls_1295_, lean_object* v_msg_1296_, lean_object* v___y_1297_, lean_object* v___y_1298_, lean_object* v___y_1299_, lean_object* v___y_1300_){
_start:
{
lean_object* v_ref_1302_; lean_object* v___x_1303_; lean_object* v_a_1304_; lean_object* v___x_1306_; uint8_t v_isShared_1307_; uint8_t v_isSharedCheck_1348_; 
v_ref_1302_ = lean_ctor_get(v___y_1299_, 2);
v___x_1303_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Do_elabDoForward_spec__0_spec__0(v_msg_1296_, v___y_1297_, v___y_1298_, v___y_1299_, v___y_1300_);
v_a_1304_ = lean_ctor_get(v___x_1303_, 0);
v_isSharedCheck_1348_ = !lean_is_exclusive(v___x_1303_);
if (v_isSharedCheck_1348_ == 0)
{
v___x_1306_ = v___x_1303_;
v_isShared_1307_ = v_isSharedCheck_1348_;
goto v_resetjp_1305_;
}
else
{
lean_inc(v_a_1304_);
lean_dec(v___x_1303_);
v___x_1306_ = lean_box(0);
v_isShared_1307_ = v_isSharedCheck_1348_;
goto v_resetjp_1305_;
}
v_resetjp_1305_:
{
lean_object* v___x_1308_; lean_object* v_traceState_1309_; lean_object* v_env_1310_; lean_object* v_nextMacroScope_1311_; lean_object* v_ngen_1312_; lean_object* v_auxDeclNGen_1313_; lean_object* v_cache_1314_; lean_object* v_messages_1315_; lean_object* v_infoState_1316_; lean_object* v_snapshotTasks_1317_; lean_object* v___x_1319_; uint8_t v_isShared_1320_; uint8_t v_isSharedCheck_1347_; 
v___x_1308_ = lean_st_ref_take(v___y_1300_);
v_traceState_1309_ = lean_ctor_get(v___x_1308_, 4);
v_env_1310_ = lean_ctor_get(v___x_1308_, 0);
v_nextMacroScope_1311_ = lean_ctor_get(v___x_1308_, 1);
v_ngen_1312_ = lean_ctor_get(v___x_1308_, 2);
v_auxDeclNGen_1313_ = lean_ctor_get(v___x_1308_, 3);
v_cache_1314_ = lean_ctor_get(v___x_1308_, 5);
v_messages_1315_ = lean_ctor_get(v___x_1308_, 6);
v_infoState_1316_ = lean_ctor_get(v___x_1308_, 7);
v_snapshotTasks_1317_ = lean_ctor_get(v___x_1308_, 8);
v_isSharedCheck_1347_ = !lean_is_exclusive(v___x_1308_);
if (v_isSharedCheck_1347_ == 0)
{
v___x_1319_ = v___x_1308_;
v_isShared_1320_ = v_isSharedCheck_1347_;
goto v_resetjp_1318_;
}
else
{
lean_inc(v_snapshotTasks_1317_);
lean_inc(v_infoState_1316_);
lean_inc(v_messages_1315_);
lean_inc(v_cache_1314_);
lean_inc(v_traceState_1309_);
lean_inc(v_auxDeclNGen_1313_);
lean_inc(v_ngen_1312_);
lean_inc(v_nextMacroScope_1311_);
lean_inc(v_env_1310_);
lean_dec(v___x_1308_);
v___x_1319_ = lean_box(0);
v_isShared_1320_ = v_isSharedCheck_1347_;
goto v_resetjp_1318_;
}
v_resetjp_1318_:
{
uint64_t v_tid_1321_; lean_object* v_traces_1322_; lean_object* v___x_1324_; uint8_t v_isShared_1325_; uint8_t v_isSharedCheck_1346_; 
v_tid_1321_ = lean_ctor_get_uint64(v_traceState_1309_, sizeof(void*)*1);
v_traces_1322_ = lean_ctor_get(v_traceState_1309_, 0);
v_isSharedCheck_1346_ = !lean_is_exclusive(v_traceState_1309_);
if (v_isSharedCheck_1346_ == 0)
{
v___x_1324_ = v_traceState_1309_;
v_isShared_1325_ = v_isSharedCheck_1346_;
goto v_resetjp_1323_;
}
else
{
lean_inc(v_traces_1322_);
lean_dec(v_traceState_1309_);
v___x_1324_ = lean_box(0);
v_isShared_1325_ = v_isSharedCheck_1346_;
goto v_resetjp_1323_;
}
v_resetjp_1323_:
{
lean_object* v___x_1326_; lean_object* v___x_1327_; double v___x_1328_; uint8_t v___x_1329_; lean_object* v___x_1330_; lean_object* v___x_1331_; lean_object* v___x_1332_; lean_object* v___x_1333_; lean_object* v___x_1334_; lean_object* v___x_1335_; lean_object* v___x_1337_; 
v___x_1326_ = lean_box(0);
v___x_1327_ = lean_box(0);
v___x_1328_ = lean_float_once(&l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__3___redArg___closed__0, &l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__3___redArg___closed__0_once, _init_l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__3___redArg___closed__0);
v___x_1329_ = 0;
v___x_1330_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__3___redArg___closed__1));
v___x_1331_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_1331_, 0, v_cls_1295_);
lean_ctor_set(v___x_1331_, 1, v___x_1327_);
lean_ctor_set(v___x_1331_, 2, v___x_1330_);
lean_ctor_set_float(v___x_1331_, sizeof(void*)*3, v___x_1328_);
lean_ctor_set_float(v___x_1331_, sizeof(void*)*3 + 8, v___x_1328_);
lean_ctor_set_uint8(v___x_1331_, sizeof(void*)*3 + 16, v___x_1329_);
v___x_1332_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__3___redArg___closed__2));
v___x_1333_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_1333_, 0, v___x_1331_);
lean_ctor_set(v___x_1333_, 1, v_a_1304_);
lean_ctor_set(v___x_1333_, 2, v___x_1332_);
lean_inc(v_ref_1302_);
v___x_1334_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1334_, 0, v_ref_1302_);
lean_ctor_set(v___x_1334_, 1, v___x_1333_);
v___x_1335_ = l_Lean_PersistentArray_push___redArg(v_traces_1322_, v___x_1334_);
if (v_isShared_1325_ == 0)
{
lean_ctor_set(v___x_1324_, 0, v___x_1335_);
v___x_1337_ = v___x_1324_;
goto v_reusejp_1336_;
}
else
{
lean_object* v_reuseFailAlloc_1345_; 
v_reuseFailAlloc_1345_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_1345_, 0, v___x_1335_);
lean_ctor_set_uint64(v_reuseFailAlloc_1345_, sizeof(void*)*1, v_tid_1321_);
v___x_1337_ = v_reuseFailAlloc_1345_;
goto v_reusejp_1336_;
}
v_reusejp_1336_:
{
lean_object* v___x_1339_; 
if (v_isShared_1320_ == 0)
{
lean_ctor_set(v___x_1319_, 4, v___x_1337_);
v___x_1339_ = v___x_1319_;
goto v_reusejp_1338_;
}
else
{
lean_object* v_reuseFailAlloc_1344_; 
v_reuseFailAlloc_1344_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_1344_, 0, v_env_1310_);
lean_ctor_set(v_reuseFailAlloc_1344_, 1, v_nextMacroScope_1311_);
lean_ctor_set(v_reuseFailAlloc_1344_, 2, v_ngen_1312_);
lean_ctor_set(v_reuseFailAlloc_1344_, 3, v_auxDeclNGen_1313_);
lean_ctor_set(v_reuseFailAlloc_1344_, 4, v___x_1337_);
lean_ctor_set(v_reuseFailAlloc_1344_, 5, v_cache_1314_);
lean_ctor_set(v_reuseFailAlloc_1344_, 6, v_messages_1315_);
lean_ctor_set(v_reuseFailAlloc_1344_, 7, v_infoState_1316_);
lean_ctor_set(v_reuseFailAlloc_1344_, 8, v_snapshotTasks_1317_);
v___x_1339_ = v_reuseFailAlloc_1344_;
goto v_reusejp_1338_;
}
v_reusejp_1338_:
{
lean_object* v___x_1340_; lean_object* v___x_1342_; 
v___x_1340_ = lean_st_ref_put(v___y_1300_, v___x_1339_);
if (v_isShared_1307_ == 0)
{
lean_ctor_set(v___x_1306_, 0, v___x_1326_);
v___x_1342_ = v___x_1306_;
goto v_reusejp_1341_;
}
else
{
lean_object* v_reuseFailAlloc_1343_; 
v_reuseFailAlloc_1343_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1343_, 0, v___x_1326_);
v___x_1342_ = v_reuseFailAlloc_1343_;
goto v_reusejp_1341_;
}
v_reusejp_1341_:
{
return v___x_1342_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__3___redArg___boxed(lean_object* v_cls_1349_, lean_object* v_msg_1350_, lean_object* v___y_1351_, lean_object* v___y_1352_, lean_object* v___y_1353_, lean_object* v___y_1354_, lean_object* v___y_1355_){
_start:
{
lean_object* v_res_1356_; 
v_res_1356_ = l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__3___redArg(v_cls_1349_, v_msg_1350_, v___y_1351_, v___y_1352_, v___y_1353_, v___y_1354_);
lean_dec(v___y_1354_);
lean_dec_ref(v___y_1353_);
lean_dec(v___y_1352_);
lean_dec_ref(v___y_1351_);
return v_res_1356_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__5_spec__6___closed__0(void){
_start:
{
lean_object* v___x_1357_; 
v___x_1357_ = l_Lean_PersistentHashMap_empty___redArg();
return v___x_1357_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__5_spec__6___closed__1(void){
_start:
{
lean_object* v___x_1358_; lean_object* v___x_1359_; 
v___x_1358_ = lean_box(0);
v___x_1359_ = l_unsafeCast___redArg(v___x_1358_);
return v___x_1359_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__5_spec__6___closed__2(void){
_start:
{
lean_object* v___x_1360_; 
v___x_1360_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_1360_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__5_spec__6___closed__3(void){
_start:
{
lean_object* v___x_1361_; lean_object* v___x_1362_; 
v___x_1361_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__5_spec__6___closed__2, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__5_spec__6___closed__2_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__5_spec__6___closed__2);
v___x_1362_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1362_, 0, v___x_1361_);
return v___x_1362_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__5_spec__6___closed__4(void){
_start:
{
lean_object* v___x_1363_; lean_object* v___x_1364_; 
v___x_1363_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__5_spec__6___closed__3, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__5_spec__6___closed__3_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__5_spec__6___closed__3);
v___x_1364_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1364_, 0, v___x_1363_);
lean_ctor_set(v___x_1364_, 1, v___x_1363_);
return v___x_1364_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__5_spec__6___closed__5(void){
_start:
{
lean_object* v___x_1365_; lean_object* v___x_1366_; 
v___x_1365_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__5_spec__6___closed__3, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__5_spec__6___closed__3_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__5_spec__6___closed__3);
v___x_1366_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_1366_, 0, v___x_1365_);
lean_ctor_set(v___x_1366_, 1, v___x_1365_);
lean_ctor_set(v___x_1366_, 2, v___x_1365_);
lean_ctor_set(v___x_1366_, 3, v___x_1365_);
lean_ctor_set(v___x_1366_, 4, v___x_1365_);
lean_ctor_set(v___x_1366_, 5, v___x_1365_);
return v___x_1366_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__5_spec__6___closed__9(void){
_start:
{
lean_object* v___x_1371_; lean_object* v___x_1372_; 
v___x_1371_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__5_spec__6___closed__8));
v___x_1372_ = l_Lean_stringToMessageData(v___x_1371_);
return v___x_1372_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__5_spec__6___closed__11(void){
_start:
{
lean_object* v___x_1374_; lean_object* v___x_1375_; 
v___x_1374_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__5_spec__6___closed__10));
v___x_1375_ = l_Lean_stringToMessageData(v___x_1374_);
return v___x_1375_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__5_spec__6___closed__12(void){
_start:
{
lean_object* v___x_1376_; lean_object* v___x_1377_; 
v___x_1376_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__3___redArg___closed__1));
v___x_1377_ = l_Lean_stringToMessageData(v___x_1376_);
return v___x_1377_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__5_spec__6___closed__15(void){
_start:
{
lean_object* v_cls_1381_; lean_object* v___x_1382_; lean_object* v___x_1383_; 
v_cls_1381_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__5_spec__6___closed__7));
v___x_1382_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__5_spec__6___closed__14));
v___x_1383_ = l_Lean_Name_append(v___x_1382_, v_cls_1381_);
return v___x_1383_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__5_spec__6___closed__17(void){
_start:
{
lean_object* v___x_1385_; lean_object* v___x_1386_; 
v___x_1385_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__5_spec__6___closed__16));
v___x_1386_ = l_Lean_stringToMessageData(v___x_1385_);
return v___x_1386_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__5_spec__6___closed__19(void){
_start:
{
lean_object* v___x_1388_; lean_object* v___x_1389_; 
v___x_1388_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__5_spec__6___closed__18));
v___x_1389_ = l_Lean_stringToMessageData(v___x_1388_);
return v___x_1389_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__5_spec__6(lean_object* v_mod_1394_, uint8_t v_isMeta_1395_, lean_object* v_hint_1396_, lean_object* v___y_1397_, lean_object* v___y_1398_, lean_object* v___y_1399_, lean_object* v___y_1400_, lean_object* v___y_1401_, lean_object* v___y_1402_){
_start:
{
lean_object* v___x_1404_; lean_object* v___x_1405_; lean_object* v_env_1406_; uint8_t v_isExporting_1407_; lean_object* v_entry_1408_; lean_object* v___x_1409_; lean_object* v_env_1410_; lean_object* v___x_1411_; lean_object* v___x_1412_; lean_object* v___x_1413_; lean_object* v___y_1415_; lean_object* v___y_1416_; lean_object* v___x_1456_; uint8_t v___x_1457_; 
v___x_1404_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__5_spec__6___closed__0, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__5_spec__6___closed__0_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__5_spec__6___closed__0);
v___x_1405_ = lean_st_ref_get(v___y_1402_);
v_env_1406_ = lean_ctor_get(v___x_1405_, 0);
lean_inc_ref(v_env_1406_);
lean_dec(v___x_1405_);
v_isExporting_1407_ = lean_ctor_get_uint8(v_env_1406_, sizeof(void*)*8);
lean_dec_ref(v_env_1406_);
lean_inc(v_mod_1394_);
v_entry_1408_ = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(v_entry_1408_, 0, v_mod_1394_);
lean_ctor_set_uint8(v_entry_1408_, sizeof(void*)*1, v_isExporting_1407_);
lean_ctor_set_uint8(v_entry_1408_, sizeof(void*)*1 + 1, v_isMeta_1395_);
v___x_1409_ = lean_st_ref_get(v___y_1402_);
v_env_1410_ = lean_ctor_get(v___x_1409_, 0);
lean_inc_ref(v_env_1410_);
lean_dec(v___x_1409_);
v___x_1411_ = l___private_Lean_ExtraModUses_0__Lean_extraModUses;
v___x_1412_ = lean_box(1);
v___x_1413_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__5_spec__6___closed__1, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__5_spec__6___closed__1_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__5_spec__6___closed__1);
v___x_1456_ = l_Lean_SimplePersistentEnvExtension_getState___redArg(v___x_1404_, v___x_1411_, v_env_1410_, v___x_1412_, v___x_1413_);
v___x_1457_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__5_spec__6_spec__9___redArg(v___x_1456_, v_entry_1408_);
lean_dec(v___x_1456_);
if (v___x_1457_ == 0)
{
lean_object* v_toCold_1458_; lean_object* v_options_1459_; uint8_t v_hasTrace_1460_; 
v_toCold_1458_ = lean_ctor_get(v___y_1401_, 0);
v_options_1459_ = lean_ctor_get(v_toCold_1458_, 2);
v_hasTrace_1460_ = lean_ctor_get_uint8(v_options_1459_, sizeof(void*)*1);
if (v_hasTrace_1460_ == 0)
{
lean_dec(v_hint_1396_);
lean_dec(v_mod_1394_);
v___y_1415_ = v___y_1400_;
v___y_1416_ = v___y_1402_;
goto v___jp_1414_;
}
else
{
lean_object* v_inheritedTraceOptions_1461_; lean_object* v_cls_1462_; lean_object* v___y_1464_; lean_object* v___y_1465_; lean_object* v___y_1469_; lean_object* v___y_1470_; lean_object* v___x_1482_; uint8_t v___x_1483_; 
v_inheritedTraceOptions_1461_ = lean_ctor_get(v_toCold_1458_, 11);
v_cls_1462_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__5_spec__6___closed__7));
v___x_1482_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__5_spec__6___closed__15, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__5_spec__6___closed__15_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__5_spec__6___closed__15);
v___x_1483_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_1461_, v_options_1459_, v___x_1482_);
if (v___x_1483_ == 0)
{
lean_dec(v_hint_1396_);
lean_dec(v_mod_1394_);
v___y_1415_ = v___y_1400_;
v___y_1416_ = v___y_1402_;
goto v___jp_1414_;
}
else
{
lean_object* v___x_1484_; lean_object* v___y_1486_; 
v___x_1484_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__5_spec__6___closed__17, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__5_spec__6___closed__17_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__5_spec__6___closed__17);
if (v_isExporting_1407_ == 0)
{
lean_object* v___x_1493_; 
v___x_1493_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__5_spec__6___closed__22));
v___y_1486_ = v___x_1493_;
goto v___jp_1485_;
}
else
{
lean_object* v___x_1494_; 
v___x_1494_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__5_spec__6___closed__23));
v___y_1486_ = v___x_1494_;
goto v___jp_1485_;
}
v___jp_1485_:
{
lean_object* v___x_1487_; lean_object* v___x_1488_; lean_object* v___x_1489_; lean_object* v___x_1490_; 
lean_inc_ref(v___y_1486_);
v___x_1487_ = l_Lean_stringToMessageData(v___y_1486_);
v___x_1488_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1488_, 0, v___x_1484_);
lean_ctor_set(v___x_1488_, 1, v___x_1487_);
v___x_1489_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__5_spec__6___closed__19, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__5_spec__6___closed__19_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__5_spec__6___closed__19);
v___x_1490_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1490_, 0, v___x_1488_);
lean_ctor_set(v___x_1490_, 1, v___x_1489_);
if (v_isMeta_1395_ == 0)
{
lean_object* v___x_1491_; 
v___x_1491_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__5_spec__6___closed__20));
v___y_1469_ = v___x_1490_;
v___y_1470_ = v___x_1491_;
goto v___jp_1468_;
}
else
{
lean_object* v___x_1492_; 
v___x_1492_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__5_spec__6___closed__21));
v___y_1469_ = v___x_1490_;
v___y_1470_ = v___x_1492_;
goto v___jp_1468_;
}
}
}
v___jp_1463_:
{
lean_object* v___x_1466_; lean_object* v___x_1467_; 
v___x_1466_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1466_, 0, v___y_1464_);
lean_ctor_set(v___x_1466_, 1, v___y_1465_);
v___x_1467_ = l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__3___redArg(v_cls_1462_, v___x_1466_, v___y_1399_, v___y_1400_, v___y_1401_, v___y_1402_);
if (lean_obj_tag(v___x_1467_) == 0)
{
lean_dec_ref_known(v___x_1467_, 1);
v___y_1415_ = v___y_1400_;
v___y_1416_ = v___y_1402_;
goto v___jp_1414_;
}
else
{
lean_dec_ref_known(v_entry_1408_, 1);
return v___x_1467_;
}
}
v___jp_1468_:
{
lean_object* v___x_1471_; lean_object* v___x_1472_; lean_object* v___x_1473_; lean_object* v___x_1474_; lean_object* v___x_1475_; lean_object* v___x_1476_; uint8_t v___x_1477_; 
lean_inc_ref(v___y_1470_);
v___x_1471_ = l_Lean_stringToMessageData(v___y_1470_);
v___x_1472_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1472_, 0, v___y_1469_);
lean_ctor_set(v___x_1472_, 1, v___x_1471_);
v___x_1473_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__5_spec__6___closed__9, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__5_spec__6___closed__9_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__5_spec__6___closed__9);
v___x_1474_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1474_, 0, v___x_1472_);
lean_ctor_set(v___x_1474_, 1, v___x_1473_);
v___x_1475_ = l_Lean_MessageData_ofName(v_mod_1394_);
v___x_1476_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1476_, 0, v___x_1474_);
lean_ctor_set(v___x_1476_, 1, v___x_1475_);
v___x_1477_ = l_Lean_Name_isAnonymous(v_hint_1396_);
if (v___x_1477_ == 0)
{
lean_object* v___x_1478_; lean_object* v___x_1479_; lean_object* v___x_1480_; 
v___x_1478_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__5_spec__6___closed__11, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__5_spec__6___closed__11_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__5_spec__6___closed__11);
v___x_1479_ = l_Lean_MessageData_ofName(v_hint_1396_);
v___x_1480_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1480_, 0, v___x_1478_);
lean_ctor_set(v___x_1480_, 1, v___x_1479_);
v___y_1464_ = v___x_1476_;
v___y_1465_ = v___x_1480_;
goto v___jp_1463_;
}
else
{
lean_object* v___x_1481_; 
lean_dec(v_hint_1396_);
v___x_1481_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__5_spec__6___closed__12, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__5_spec__6___closed__12_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__5_spec__6___closed__12);
v___y_1464_ = v___x_1476_;
v___y_1465_ = v___x_1481_;
goto v___jp_1463_;
}
}
}
}
else
{
lean_object* v___x_1495_; lean_object* v___x_1496_; 
lean_dec_ref_known(v_entry_1408_, 1);
lean_dec(v_hint_1396_);
lean_dec(v_mod_1394_);
v___x_1495_ = lean_box(0);
v___x_1496_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1496_, 0, v___x_1495_);
return v___x_1496_;
}
v___jp_1414_:
{
lean_object* v___x_1417_; lean_object* v_toEnvExtension_1418_; lean_object* v_env_1419_; lean_object* v_nextMacroScope_1420_; lean_object* v_ngen_1421_; lean_object* v_auxDeclNGen_1422_; lean_object* v_traceState_1423_; lean_object* v_messages_1424_; lean_object* v_infoState_1425_; lean_object* v_snapshotTasks_1426_; lean_object* v___x_1428_; uint8_t v_isShared_1429_; uint8_t v_isSharedCheck_1454_; 
v___x_1417_ = lean_st_ref_take(v___y_1416_);
v_toEnvExtension_1418_ = lean_ctor_get(v___x_1411_, 0);
v_env_1419_ = lean_ctor_get(v___x_1417_, 0);
v_nextMacroScope_1420_ = lean_ctor_get(v___x_1417_, 1);
v_ngen_1421_ = lean_ctor_get(v___x_1417_, 2);
v_auxDeclNGen_1422_ = lean_ctor_get(v___x_1417_, 3);
v_traceState_1423_ = lean_ctor_get(v___x_1417_, 4);
v_messages_1424_ = lean_ctor_get(v___x_1417_, 6);
v_infoState_1425_ = lean_ctor_get(v___x_1417_, 7);
v_snapshotTasks_1426_ = lean_ctor_get(v___x_1417_, 8);
v_isSharedCheck_1454_ = !lean_is_exclusive(v___x_1417_);
if (v_isSharedCheck_1454_ == 0)
{
lean_object* v_unused_1455_; 
v_unused_1455_ = lean_ctor_get(v___x_1417_, 5);
lean_dec(v_unused_1455_);
v___x_1428_ = v___x_1417_;
v_isShared_1429_ = v_isSharedCheck_1454_;
goto v_resetjp_1427_;
}
else
{
lean_inc(v_snapshotTasks_1426_);
lean_inc(v_infoState_1425_);
lean_inc(v_messages_1424_);
lean_inc(v_traceState_1423_);
lean_inc(v_auxDeclNGen_1422_);
lean_inc(v_ngen_1421_);
lean_inc(v_nextMacroScope_1420_);
lean_inc(v_env_1419_);
lean_dec(v___x_1417_);
v___x_1428_ = lean_box(0);
v_isShared_1429_ = v_isSharedCheck_1454_;
goto v_resetjp_1427_;
}
v_resetjp_1427_:
{
lean_object* v_asyncMode_1430_; lean_object* v___x_1431_; lean_object* v___x_1432_; lean_object* v___x_1434_; 
v_asyncMode_1430_ = lean_ctor_get(v_toEnvExtension_1418_, 2);
v___x_1431_ = l_Lean_PersistentEnvExtension_addEntry___redArg(v___x_1411_, v_env_1419_, v_entry_1408_, v_asyncMode_1430_, v___x_1413_);
v___x_1432_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__5_spec__6___closed__4, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__5_spec__6___closed__4_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__5_spec__6___closed__4);
if (v_isShared_1429_ == 0)
{
lean_ctor_set(v___x_1428_, 5, v___x_1432_);
lean_ctor_set(v___x_1428_, 0, v___x_1431_);
v___x_1434_ = v___x_1428_;
goto v_reusejp_1433_;
}
else
{
lean_object* v_reuseFailAlloc_1453_; 
v_reuseFailAlloc_1453_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_1453_, 0, v___x_1431_);
lean_ctor_set(v_reuseFailAlloc_1453_, 1, v_nextMacroScope_1420_);
lean_ctor_set(v_reuseFailAlloc_1453_, 2, v_ngen_1421_);
lean_ctor_set(v_reuseFailAlloc_1453_, 3, v_auxDeclNGen_1422_);
lean_ctor_set(v_reuseFailAlloc_1453_, 4, v_traceState_1423_);
lean_ctor_set(v_reuseFailAlloc_1453_, 5, v___x_1432_);
lean_ctor_set(v_reuseFailAlloc_1453_, 6, v_messages_1424_);
lean_ctor_set(v_reuseFailAlloc_1453_, 7, v_infoState_1425_);
lean_ctor_set(v_reuseFailAlloc_1453_, 8, v_snapshotTasks_1426_);
v___x_1434_ = v_reuseFailAlloc_1453_;
goto v_reusejp_1433_;
}
v_reusejp_1433_:
{
lean_object* v___x_1435_; lean_object* v___x_1436_; lean_object* v_mctx_1437_; lean_object* v_zetaDeltaFVarIds_1438_; lean_object* v_postponed_1439_; lean_object* v_diag_1440_; lean_object* v___x_1442_; uint8_t v_isShared_1443_; uint8_t v_isSharedCheck_1451_; 
v___x_1435_ = lean_st_ref_put(v___y_1416_, v___x_1434_);
v___x_1436_ = lean_st_ref_take(v___y_1415_);
v_mctx_1437_ = lean_ctor_get(v___x_1436_, 0);
v_zetaDeltaFVarIds_1438_ = lean_ctor_get(v___x_1436_, 2);
v_postponed_1439_ = lean_ctor_get(v___x_1436_, 3);
v_diag_1440_ = lean_ctor_get(v___x_1436_, 4);
v_isSharedCheck_1451_ = !lean_is_exclusive(v___x_1436_);
if (v_isSharedCheck_1451_ == 0)
{
lean_object* v_unused_1452_; 
v_unused_1452_ = lean_ctor_get(v___x_1436_, 1);
lean_dec(v_unused_1452_);
v___x_1442_ = v___x_1436_;
v_isShared_1443_ = v_isSharedCheck_1451_;
goto v_resetjp_1441_;
}
else
{
lean_inc(v_diag_1440_);
lean_inc(v_postponed_1439_);
lean_inc(v_zetaDeltaFVarIds_1438_);
lean_inc(v_mctx_1437_);
lean_dec(v___x_1436_);
v___x_1442_ = lean_box(0);
v_isShared_1443_ = v_isSharedCheck_1451_;
goto v_resetjp_1441_;
}
v_resetjp_1441_:
{
lean_object* v___x_1444_; lean_object* v___x_1445_; lean_object* v___x_1447_; 
v___x_1444_ = lean_box(0);
v___x_1445_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__5_spec__6___closed__5, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__5_spec__6___closed__5_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__5_spec__6___closed__5);
if (v_isShared_1443_ == 0)
{
lean_ctor_set(v___x_1442_, 1, v___x_1445_);
v___x_1447_ = v___x_1442_;
goto v_reusejp_1446_;
}
else
{
lean_object* v_reuseFailAlloc_1450_; 
v_reuseFailAlloc_1450_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1450_, 0, v_mctx_1437_);
lean_ctor_set(v_reuseFailAlloc_1450_, 1, v___x_1445_);
lean_ctor_set(v_reuseFailAlloc_1450_, 2, v_zetaDeltaFVarIds_1438_);
lean_ctor_set(v_reuseFailAlloc_1450_, 3, v_postponed_1439_);
lean_ctor_set(v_reuseFailAlloc_1450_, 4, v_diag_1440_);
v___x_1447_ = v_reuseFailAlloc_1450_;
goto v_reusejp_1446_;
}
v_reusejp_1446_:
{
lean_object* v___x_1448_; lean_object* v___x_1449_; 
v___x_1448_ = lean_st_ref_put(v___y_1415_, v___x_1447_);
v___x_1449_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1449_, 0, v___x_1444_);
return v___x_1449_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__5_spec__6___boxed(lean_object* v_mod_1497_, lean_object* v_isMeta_1498_, lean_object* v_hint_1499_, lean_object* v___y_1500_, lean_object* v___y_1501_, lean_object* v___y_1502_, lean_object* v___y_1503_, lean_object* v___y_1504_, lean_object* v___y_1505_, lean_object* v___y_1506_){
_start:
{
uint8_t v_isMeta_boxed_1507_; lean_object* v_res_1508_; 
v_isMeta_boxed_1507_ = lean_unbox(v_isMeta_1498_);
v_res_1508_ = l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__5_spec__6(v_mod_1497_, v_isMeta_boxed_1507_, v_hint_1499_, v___y_1500_, v___y_1501_, v___y_1502_, v___y_1503_, v___y_1504_, v___y_1505_);
lean_dec(v___y_1505_);
lean_dec_ref(v___y_1504_);
lean_dec(v___y_1503_);
lean_dec_ref(v___y_1502_);
lean_dec(v___y_1501_);
lean_dec_ref(v___y_1500_);
return v_res_1508_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__5_spec__7(lean_object* v___x_1509_, lean_object* v_declName_1510_, lean_object* v_as_1511_, size_t v_sz_1512_, size_t v_i_1513_, lean_object* v_b_1514_, lean_object* v___y_1515_, lean_object* v___y_1516_, lean_object* v___y_1517_, lean_object* v___y_1518_, lean_object* v___y_1519_, lean_object* v___y_1520_){
_start:
{
uint8_t v___x_1522_; 
v___x_1522_ = lean_usize_dec_lt(v_i_1513_, v_sz_1512_);
if (v___x_1522_ == 0)
{
lean_object* v___x_1523_; 
lean_dec(v_declName_1510_);
v___x_1523_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1523_, 0, v_b_1514_);
return v___x_1523_;
}
else
{
lean_object* v___x_1524_; lean_object* v_modules_1525_; lean_object* v___x_1526_; lean_object* v_a_1527_; lean_object* v___x_1528_; lean_object* v_toImport_1529_; lean_object* v_module_1530_; lean_object* v___x_1531_; uint8_t v___x_1532_; lean_object* v___x_1533_; 
v___x_1524_ = l_Lean_Environment_header(v___x_1509_);
v_modules_1525_ = lean_ctor_get(v___x_1524_, 3);
lean_inc_ref(v_modules_1525_);
lean_dec_ref(v___x_1524_);
v___x_1526_ = l_Lean_instInhabitedEffectiveImport_default;
v_a_1527_ = lean_array_uget_borrowed(v_as_1511_, v_i_1513_);
v___x_1528_ = lean_array_get(v___x_1526_, v_modules_1525_, v_a_1527_);
lean_dec_ref(v_modules_1525_);
v_toImport_1529_ = lean_ctor_get(v___x_1528_, 0);
lean_inc_ref(v_toImport_1529_);
lean_dec(v___x_1528_);
v_module_1530_ = lean_ctor_get(v_toImport_1529_, 0);
lean_inc(v_module_1530_);
lean_dec_ref(v_toImport_1529_);
v___x_1531_ = lean_box(0);
v___x_1532_ = 0;
lean_inc(v_declName_1510_);
v___x_1533_ = l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__5_spec__6(v_module_1530_, v___x_1532_, v_declName_1510_, v___y_1515_, v___y_1516_, v___y_1517_, v___y_1518_, v___y_1519_, v___y_1520_);
if (lean_obj_tag(v___x_1533_) == 0)
{
size_t v___x_1534_; size_t v___x_1535_; 
lean_dec_ref_known(v___x_1533_, 1);
v___x_1534_ = ((size_t)1ULL);
v___x_1535_ = lean_usize_add(v_i_1513_, v___x_1534_);
v_i_1513_ = v___x_1535_;
v_b_1514_ = v___x_1531_;
goto _start;
}
else
{
lean_dec(v_declName_1510_);
return v___x_1533_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__5_spec__7___boxed(lean_object* v___x_1537_, lean_object* v_declName_1538_, lean_object* v_as_1539_, lean_object* v_sz_1540_, lean_object* v_i_1541_, lean_object* v_b_1542_, lean_object* v___y_1543_, lean_object* v___y_1544_, lean_object* v___y_1545_, lean_object* v___y_1546_, lean_object* v___y_1547_, lean_object* v___y_1548_, lean_object* v___y_1549_){
_start:
{
size_t v_sz_boxed_1550_; size_t v_i_boxed_1551_; lean_object* v_res_1552_; 
v_sz_boxed_1550_ = lean_unbox_usize(v_sz_1540_);
lean_dec(v_sz_1540_);
v_i_boxed_1551_ = lean_unbox_usize(v_i_1541_);
lean_dec(v_i_1541_);
v_res_1552_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__5_spec__7(v___x_1537_, v_declName_1538_, v_as_1539_, v_sz_boxed_1550_, v_i_boxed_1551_, v_b_1542_, v___y_1543_, v___y_1544_, v___y_1545_, v___y_1546_, v___y_1547_, v___y_1548_);
lean_dec(v___y_1548_);
lean_dec_ref(v___y_1547_);
lean_dec(v___y_1546_);
lean_dec_ref(v___y_1545_);
lean_dec(v___y_1544_);
lean_dec_ref(v___y_1543_);
lean_dec_ref(v_as_1539_);
lean_dec_ref(v___x_1537_);
return v_res_1552_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__5_spec__8_spec__12___redArg(lean_object* v_a_1553_, lean_object* v_x_1554_){
_start:
{
if (lean_obj_tag(v_x_1554_) == 0)
{
lean_object* v___x_1555_; 
v___x_1555_ = lean_box(0);
return v___x_1555_;
}
else
{
lean_object* v_key_1556_; lean_object* v_value_1557_; lean_object* v_tail_1558_; uint8_t v___x_1559_; 
v_key_1556_ = lean_ctor_get(v_x_1554_, 0);
v_value_1557_ = lean_ctor_get(v_x_1554_, 1);
v_tail_1558_ = lean_ctor_get(v_x_1554_, 2);
v___x_1559_ = lean_name_eq(v_key_1556_, v_a_1553_);
if (v___x_1559_ == 0)
{
v_x_1554_ = v_tail_1558_;
goto _start;
}
else
{
lean_object* v___x_1561_; 
lean_inc(v_value_1557_);
v___x_1561_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1561_, 0, v_value_1557_);
return v___x_1561_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__5_spec__8_spec__12___redArg___boxed(lean_object* v_a_1562_, lean_object* v_x_1563_){
_start:
{
lean_object* v_res_1564_; 
v_res_1564_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__5_spec__8_spec__12___redArg(v_a_1562_, v_x_1563_);
lean_dec(v_x_1563_);
lean_dec(v_a_1562_);
return v_res_1564_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__5_spec__8___redArg(lean_object* v_m_1565_, lean_object* v_a_1566_){
_start:
{
lean_object* v_buckets_1567_; lean_object* v___x_1568_; uint64_t v___y_1570_; lean_object* v___x_1584_; 
v_buckets_1567_ = lean_ctor_get(v_m_1565_, 1);
v___x_1568_ = lean_array_get_size(v_buckets_1567_);
v___x_1584_ = l_unsafeCast___redArg(v_a_1566_);
if (lean_obj_tag(v___x_1584_) == 0)
{
uint64_t v___x_1585_; 
v___x_1585_ = 1723ULL;
v___y_1570_ = v___x_1585_;
goto v___jp_1569_;
}
else
{
uint64_t v_hash_1586_; 
v_hash_1586_ = lean_ctor_get_uint64(v___x_1584_, sizeof(void*)*2);
lean_dec(v___x_1584_);
v___y_1570_ = v_hash_1586_;
goto v___jp_1569_;
}
v___jp_1569_:
{
uint64_t v___x_1571_; uint64_t v___x_1572_; uint64_t v_fold_1573_; uint64_t v___x_1574_; uint64_t v___x_1575_; uint64_t v___x_1576_; size_t v___x_1577_; size_t v___x_1578_; size_t v___x_1579_; size_t v___x_1580_; size_t v___x_1581_; lean_object* v___x_1582_; lean_object* v___x_1583_; 
v___x_1571_ = 32ULL;
v___x_1572_ = lean_uint64_shift_right(v___y_1570_, v___x_1571_);
v_fold_1573_ = lean_uint64_xor(v___y_1570_, v___x_1572_);
v___x_1574_ = 16ULL;
v___x_1575_ = lean_uint64_shift_right(v_fold_1573_, v___x_1574_);
v___x_1576_ = lean_uint64_xor(v_fold_1573_, v___x_1575_);
v___x_1577_ = lean_uint64_to_usize(v___x_1576_);
v___x_1578_ = lean_usize_of_nat(v___x_1568_);
v___x_1579_ = ((size_t)1ULL);
v___x_1580_ = lean_usize_sub(v___x_1578_, v___x_1579_);
v___x_1581_ = lean_usize_land(v___x_1577_, v___x_1580_);
v___x_1582_ = lean_array_uget_borrowed(v_buckets_1567_, v___x_1581_);
v___x_1583_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__5_spec__8_spec__12___redArg(v_a_1566_, v___x_1582_);
return v___x_1583_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__5_spec__8___redArg___boxed(lean_object* v_m_1587_, lean_object* v_a_1588_){
_start:
{
lean_object* v_res_1589_; 
v_res_1589_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__5_spec__8___redArg(v_m_1587_, v_a_1588_);
lean_dec(v_a_1588_);
lean_dec_ref(v_m_1587_);
return v_res_1589_;
}
}
static lean_object* _init_l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__5___closed__0(void){
_start:
{
lean_object* v___x_1590_; 
v___x_1590_ = l_Std_HashMap_instInhabited___redArg();
return v___x_1590_;
}
}
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__5(lean_object* v_declName_1593_, uint8_t v_isMeta_1594_, lean_object* v___y_1595_, lean_object* v___y_1596_, lean_object* v___y_1597_, lean_object* v___y_1598_, lean_object* v___y_1599_, lean_object* v___y_1600_){
_start:
{
lean_object* v___x_1602_; lean_object* v___x_1603_; lean_object* v_env_1607_; lean_object* v___y_1609_; lean_object* v___x_1622_; 
v___x_1602_ = lean_obj_once(&l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__5___closed__0, &l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__5___closed__0_once, _init_l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__5___closed__0);
v___x_1603_ = lean_st_ref_get(v___y_1600_);
v_env_1607_ = lean_ctor_get(v___x_1603_, 0);
lean_inc_ref(v_env_1607_);
lean_dec(v___x_1603_);
v___x_1622_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_1607_, v_declName_1593_);
if (lean_obj_tag(v___x_1622_) == 0)
{
lean_dec_ref(v_env_1607_);
lean_dec(v_declName_1593_);
goto v___jp_1604_;
}
else
{
lean_object* v_val_1623_; lean_object* v___x_1624_; lean_object* v_modules_1625_; lean_object* v___x_1626_; uint8_t v___x_1627_; 
v_val_1623_ = lean_ctor_get(v___x_1622_, 0);
lean_inc(v_val_1623_);
lean_dec_ref_known(v___x_1622_, 1);
v___x_1624_ = l_Lean_Environment_header(v_env_1607_);
v_modules_1625_ = lean_ctor_get(v___x_1624_, 3);
lean_inc_ref(v_modules_1625_);
lean_dec_ref(v___x_1624_);
v___x_1626_ = lean_array_get_size(v_modules_1625_);
v___x_1627_ = lean_nat_dec_lt(v_val_1623_, v___x_1626_);
if (v___x_1627_ == 0)
{
lean_dec_ref(v_modules_1625_);
lean_dec(v_val_1623_);
lean_dec_ref(v_env_1607_);
lean_dec(v_declName_1593_);
goto v___jp_1604_;
}
else
{
lean_object* v___x_1628_; lean_object* v___x_1629_; uint8_t v___y_1631_; 
v___x_1628_ = lean_array_fget(v_modules_1625_, v_val_1623_);
lean_dec(v_val_1623_);
lean_dec_ref(v_modules_1625_);
v___x_1629_ = lean_st_ref_get(v___y_1600_);
if (v_isMeta_1594_ == 0)
{
lean_dec(v___x_1629_);
v___y_1631_ = v_isMeta_1594_;
goto v___jp_1630_;
}
else
{
lean_object* v_env_1642_; uint8_t v___x_1643_; 
v_env_1642_ = lean_ctor_get(v___x_1629_, 0);
lean_inc_ref(v_env_1642_);
lean_dec(v___x_1629_);
lean_inc(v_declName_1593_);
v___x_1643_ = l_Lean_isMarkedMeta(v_env_1642_, v_declName_1593_);
if (v___x_1643_ == 0)
{
v___y_1631_ = v_isMeta_1594_;
goto v___jp_1630_;
}
else
{
uint8_t v___x_1644_; 
v___x_1644_ = 0;
v___y_1631_ = v___x_1644_;
goto v___jp_1630_;
}
}
v___jp_1630_:
{
lean_object* v_toImport_1632_; lean_object* v_module_1633_; lean_object* v___x_1634_; 
v_toImport_1632_ = lean_ctor_get(v___x_1628_, 0);
lean_inc_ref(v_toImport_1632_);
lean_dec(v___x_1628_);
v_module_1633_ = lean_ctor_get(v_toImport_1632_, 0);
lean_inc(v_module_1633_);
lean_dec_ref(v_toImport_1632_);
lean_inc(v_declName_1593_);
v___x_1634_ = l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__5_spec__6(v_module_1633_, v___y_1631_, v_declName_1593_, v___y_1595_, v___y_1596_, v___y_1597_, v___y_1598_, v___y_1599_, v___y_1600_);
if (lean_obj_tag(v___x_1634_) == 0)
{
lean_object* v___x_1635_; lean_object* v___x_1636_; lean_object* v___x_1637_; lean_object* v___x_1638_; lean_object* v___x_1639_; 
lean_dec_ref_known(v___x_1634_, 1);
v___x_1635_ = l_Lean_indirectModUseExt;
v___x_1636_ = lean_box(1);
v___x_1637_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__5_spec__6___closed__1, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__5_spec__6___closed__1_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__5_spec__6___closed__1);
lean_inc_ref(v_env_1607_);
v___x_1638_ = l_Lean_SimplePersistentEnvExtension_getState___redArg(v___x_1602_, v___x_1635_, v_env_1607_, v___x_1636_, v___x_1637_);
v___x_1639_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__5_spec__8___redArg(v___x_1638_, v_declName_1593_);
lean_dec(v___x_1638_);
if (lean_obj_tag(v___x_1639_) == 0)
{
lean_object* v___x_1640_; 
v___x_1640_ = ((lean_object*)(l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__5___closed__1));
v___y_1609_ = v___x_1640_;
goto v___jp_1608_;
}
else
{
lean_object* v_val_1641_; 
v_val_1641_ = lean_ctor_get(v___x_1639_, 0);
lean_inc(v_val_1641_);
lean_dec_ref_known(v___x_1639_, 1);
v___y_1609_ = v_val_1641_;
goto v___jp_1608_;
}
}
else
{
lean_dec_ref(v_env_1607_);
lean_dec(v_declName_1593_);
return v___x_1634_;
}
}
}
}
v___jp_1604_:
{
lean_object* v___x_1605_; lean_object* v___x_1606_; 
v___x_1605_ = lean_box(0);
v___x_1606_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1606_, 0, v___x_1605_);
return v___x_1606_;
}
v___jp_1608_:
{
lean_object* v___x_1610_; size_t v_sz_1611_; size_t v___x_1612_; lean_object* v___x_1613_; 
v___x_1610_ = lean_box(0);
v_sz_1611_ = lean_array_size(v___y_1609_);
v___x_1612_ = ((size_t)0ULL);
v___x_1613_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__5_spec__7(v_env_1607_, v_declName_1593_, v___y_1609_, v_sz_1611_, v___x_1612_, v___x_1610_, v___y_1595_, v___y_1596_, v___y_1597_, v___y_1598_, v___y_1599_, v___y_1600_);
lean_dec_ref(v___y_1609_);
lean_dec_ref(v_env_1607_);
if (lean_obj_tag(v___x_1613_) == 0)
{
lean_object* v___x_1615_; uint8_t v_isShared_1616_; uint8_t v_isSharedCheck_1620_; 
v_isSharedCheck_1620_ = !lean_is_exclusive(v___x_1613_);
if (v_isSharedCheck_1620_ == 0)
{
lean_object* v_unused_1621_; 
v_unused_1621_ = lean_ctor_get(v___x_1613_, 0);
lean_dec(v_unused_1621_);
v___x_1615_ = v___x_1613_;
v_isShared_1616_ = v_isSharedCheck_1620_;
goto v_resetjp_1614_;
}
else
{
lean_dec(v___x_1613_);
v___x_1615_ = lean_box(0);
v_isShared_1616_ = v_isSharedCheck_1620_;
goto v_resetjp_1614_;
}
v_resetjp_1614_:
{
lean_object* v___x_1618_; 
if (v_isShared_1616_ == 0)
{
lean_ctor_set(v___x_1615_, 0, v___x_1610_);
v___x_1618_ = v___x_1615_;
goto v_reusejp_1617_;
}
else
{
lean_object* v_reuseFailAlloc_1619_; 
v_reuseFailAlloc_1619_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1619_, 0, v___x_1610_);
v___x_1618_ = v_reuseFailAlloc_1619_;
goto v_reusejp_1617_;
}
v_reusejp_1617_:
{
return v___x_1618_;
}
}
}
else
{
return v___x_1613_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__5___boxed(lean_object* v_declName_1645_, lean_object* v_isMeta_1646_, lean_object* v___y_1647_, lean_object* v___y_1648_, lean_object* v___y_1649_, lean_object* v___y_1650_, lean_object* v___y_1651_, lean_object* v___y_1652_, lean_object* v___y_1653_){
_start:
{
uint8_t v_isMeta_boxed_1654_; lean_object* v_res_1655_; 
v_isMeta_boxed_1654_ = lean_unbox(v_isMeta_1646_);
v_res_1655_ = l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__5(v_declName_1645_, v_isMeta_boxed_1654_, v___y_1647_, v___y_1648_, v___y_1649_, v___y_1650_, v___y_1651_, v___y_1652_);
lean_dec(v___y_1652_);
lean_dec_ref(v___y_1651_);
lean_dec(v___y_1650_);
lean_dec_ref(v___y_1649_);
lean_dec(v___y_1648_);
lean_dec_ref(v___y_1647_);
return v_res_1655_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__6___redArg(lean_object* v_as_x27_1656_, lean_object* v_b_1657_, lean_object* v___y_1658_, lean_object* v___y_1659_, lean_object* v___y_1660_, lean_object* v___y_1661_, lean_object* v___y_1662_, lean_object* v___y_1663_){
_start:
{
if (lean_obj_tag(v_as_x27_1656_) == 0)
{
lean_object* v___x_1665_; 
v___x_1665_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1665_, 0, v_b_1657_);
return v___x_1665_;
}
else
{
lean_object* v_head_1666_; lean_object* v_tail_1667_; lean_object* v___x_1668_; uint8_t v___x_1669_; lean_object* v___x_1670_; 
v_head_1666_ = lean_ctor_get(v_as_x27_1656_, 0);
v_tail_1667_ = lean_ctor_get(v_as_x27_1656_, 1);
v___x_1668_ = lean_box(0);
v___x_1669_ = 1;
lean_inc(v_head_1666_);
v___x_1670_ = l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__5(v_head_1666_, v___x_1669_, v___y_1658_, v___y_1659_, v___y_1660_, v___y_1661_, v___y_1662_, v___y_1663_);
if (lean_obj_tag(v___x_1670_) == 0)
{
lean_dec_ref_known(v___x_1670_, 1);
v_as_x27_1656_ = v_tail_1667_;
v_b_1657_ = v___x_1668_;
goto _start;
}
else
{
return v___x_1670_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__6___redArg___boxed(lean_object* v_as_x27_1672_, lean_object* v_b_1673_, lean_object* v___y_1674_, lean_object* v___y_1675_, lean_object* v___y_1676_, lean_object* v___y_1677_, lean_object* v___y_1678_, lean_object* v___y_1679_, lean_object* v___y_1680_){
_start:
{
lean_object* v_res_1681_; 
v_res_1681_ = l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__6___redArg(v_as_x27_1672_, v_b_1673_, v___y_1674_, v___y_1675_, v___y_1676_, v___y_1677_, v___y_1678_, v___y_1679_);
lean_dec(v___y_1679_);
lean_dec_ref(v___y_1678_);
lean_dec(v___y_1677_);
lean_dec_ref(v___y_1676_);
lean_dec(v___y_1675_);
lean_dec_ref(v___y_1674_);
lean_dec(v_as_x27_1672_);
return v_res_1681_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__9___redArg___closed__3(void){
_start:
{
lean_object* v___x_1687_; lean_object* v___x_1688_; 
v___x_1687_ = l_Lean_maxRecDepthErrorMessage;
v___x_1688_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1688_, 0, v___x_1687_);
return v___x_1688_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__9___redArg___closed__4(void){
_start:
{
lean_object* v___x_1689_; lean_object* v___x_1690_; 
v___x_1689_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__9___redArg___closed__3, &l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__9___redArg___closed__3_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__9___redArg___closed__3);
v___x_1690_ = l_Lean_MessageData_ofFormat(v___x_1689_);
return v___x_1690_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__9___redArg___closed__5(void){
_start:
{
lean_object* v___x_1691_; lean_object* v___x_1692_; lean_object* v___x_1693_; 
v___x_1691_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__9___redArg___closed__4, &l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__9___redArg___closed__4_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__9___redArg___closed__4);
v___x_1692_ = ((lean_object*)(l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__9___redArg___closed__2));
v___x_1693_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_1693_, 0, v___x_1692_);
lean_ctor_set(v___x_1693_, 1, v___x_1691_);
return v___x_1693_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__9___redArg(lean_object* v_ref_1694_){
_start:
{
lean_object* v___x_1696_; lean_object* v___x_1697_; lean_object* v___x_1698_; 
v___x_1696_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__9___redArg___closed__5, &l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__9___redArg___closed__5_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__9___redArg___closed__5);
v___x_1697_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1697_, 0, v_ref_1694_);
lean_ctor_set(v___x_1697_, 1, v___x_1696_);
v___x_1698_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1698_, 0, v___x_1697_);
return v___x_1698_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__9___redArg___boxed(lean_object* v_ref_1699_, lean_object* v___y_1700_){
_start:
{
lean_object* v_res_1701_; 
v_res_1701_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__9___redArg(v_ref_1699_);
return v_res_1701_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3___redArg___lam__2(lean_object* v_env_1702_, lean_object* v_currNamespace_1703_, lean_object* v_openDecls_1704_, lean_object* v_n_1705_, lean_object* v___y_1706_, lean_object* v___y_1707_){
_start:
{
lean_object* v___x_1708_; lean_object* v___x_1709_; 
v___x_1708_ = l_Lean_ResolveName_resolveNamespace(v_env_1702_, v_currNamespace_1703_, v_openDecls_1704_, v_n_1705_);
v___x_1709_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1709_, 0, v___x_1708_);
lean_ctor_set(v___x_1709_, 1, v___y_1707_);
return v___x_1709_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3___redArg___lam__2___boxed(lean_object* v_env_1710_, lean_object* v_currNamespace_1711_, lean_object* v_openDecls_1712_, lean_object* v_n_1713_, lean_object* v___y_1714_, lean_object* v___y_1715_){
_start:
{
lean_object* v_res_1716_; 
v_res_1716_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3___redArg___lam__2(v_env_1710_, v_currNamespace_1711_, v_openDecls_1712_, v_n_1713_, v___y_1714_, v___y_1715_);
lean_dec_ref(v___y_1714_);
return v_res_1716_;
}
}
LEAN_EXPORT lean_object* l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__4___redArg(lean_object* v_x_1717_, lean_object* v___y_1718_){
_start:
{
if (lean_obj_tag(v_x_1717_) == 0)
{
lean_object* v_a_1719_; lean_object* v___x_1720_; 
v_a_1719_ = lean_ctor_get(v_x_1717_, 0);
lean_inc(v_a_1719_);
v___x_1720_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1720_, 0, v_a_1719_);
lean_ctor_set(v___x_1720_, 1, v___y_1718_);
return v___x_1720_;
}
else
{
lean_object* v_a_1721_; lean_object* v___x_1722_; 
v_a_1721_ = lean_ctor_get(v_x_1717_, 0);
lean_inc(v_a_1721_);
v___x_1722_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1722_, 0, v_a_1721_);
lean_ctor_set(v___x_1722_, 1, v___y_1718_);
return v___x_1722_;
}
}
}
LEAN_EXPORT lean_object* l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__4___redArg___boxed(lean_object* v_x_1723_, lean_object* v___y_1724_){
_start:
{
lean_object* v_res_1725_; 
v_res_1725_ = l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__4___redArg(v_x_1723_, v___y_1724_);
lean_dec_ref(v_x_1723_);
return v_res_1725_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3___redArg___lam__0(lean_object* v_env_1726_, lean_object* v_stx_1727_, lean_object* v___y_1728_, lean_object* v___y_1729_){
_start:
{
lean_object* v___x_1730_; 
v___x_1730_ = l_Lean_Elab_expandMacroImpl_x3f(v_env_1726_, v_stx_1727_, v___y_1728_, v___y_1729_);
if (lean_obj_tag(v___x_1730_) == 0)
{
lean_object* v_a_1731_; 
v_a_1731_ = lean_ctor_get(v___x_1730_, 0);
lean_inc(v_a_1731_);
if (lean_obj_tag(v_a_1731_) == 0)
{
lean_object* v_a_1732_; lean_object* v___x_1734_; uint8_t v_isShared_1735_; uint8_t v_isSharedCheck_1740_; 
v_a_1732_ = lean_ctor_get(v___x_1730_, 1);
v_isSharedCheck_1740_ = !lean_is_exclusive(v___x_1730_);
if (v_isSharedCheck_1740_ == 0)
{
lean_object* v_unused_1741_; 
v_unused_1741_ = lean_ctor_get(v___x_1730_, 0);
lean_dec(v_unused_1741_);
v___x_1734_ = v___x_1730_;
v_isShared_1735_ = v_isSharedCheck_1740_;
goto v_resetjp_1733_;
}
else
{
lean_inc(v_a_1732_);
lean_dec(v___x_1730_);
v___x_1734_ = lean_box(0);
v_isShared_1735_ = v_isSharedCheck_1740_;
goto v_resetjp_1733_;
}
v_resetjp_1733_:
{
lean_object* v___x_1736_; lean_object* v___x_1738_; 
v___x_1736_ = lean_box(0);
if (v_isShared_1735_ == 0)
{
lean_ctor_set(v___x_1734_, 0, v___x_1736_);
v___x_1738_ = v___x_1734_;
goto v_reusejp_1737_;
}
else
{
lean_object* v_reuseFailAlloc_1739_; 
v_reuseFailAlloc_1739_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1739_, 0, v___x_1736_);
lean_ctor_set(v_reuseFailAlloc_1739_, 1, v_a_1732_);
v___x_1738_ = v_reuseFailAlloc_1739_;
goto v_reusejp_1737_;
}
v_reusejp_1737_:
{
return v___x_1738_;
}
}
}
else
{
lean_object* v_val_1742_; lean_object* v___x_1744_; uint8_t v_isShared_1745_; uint8_t v_isSharedCheck_1770_; 
v_val_1742_ = lean_ctor_get(v_a_1731_, 0);
v_isSharedCheck_1770_ = !lean_is_exclusive(v_a_1731_);
if (v_isSharedCheck_1770_ == 0)
{
v___x_1744_ = v_a_1731_;
v_isShared_1745_ = v_isSharedCheck_1770_;
goto v_resetjp_1743_;
}
else
{
lean_inc(v_val_1742_);
lean_dec(v_a_1731_);
v___x_1744_ = lean_box(0);
v_isShared_1745_ = v_isSharedCheck_1770_;
goto v_resetjp_1743_;
}
v_resetjp_1743_:
{
lean_object* v_snd_1746_; 
v_snd_1746_ = lean_ctor_get(v_val_1742_, 1);
lean_inc(v_snd_1746_);
lean_dec(v_val_1742_);
if (lean_obj_tag(v_snd_1746_) == 0)
{
lean_object* v_a_1747_; lean_object* v_a_1748_; lean_object* v___x_1750_; uint8_t v_isShared_1751_; uint8_t v_isSharedCheck_1756_; 
lean_del_object(v___x_1744_);
v_a_1747_ = lean_ctor_get(v___x_1730_, 1);
lean_inc(v_a_1747_);
lean_dec_ref_known(v___x_1730_, 2);
v_a_1748_ = lean_ctor_get(v_snd_1746_, 0);
v_isSharedCheck_1756_ = !lean_is_exclusive(v_snd_1746_);
if (v_isSharedCheck_1756_ == 0)
{
v___x_1750_ = v_snd_1746_;
v_isShared_1751_ = v_isSharedCheck_1756_;
goto v_resetjp_1749_;
}
else
{
lean_inc(v_a_1748_);
lean_dec(v_snd_1746_);
v___x_1750_ = lean_box(0);
v_isShared_1751_ = v_isSharedCheck_1756_;
goto v_resetjp_1749_;
}
v_resetjp_1749_:
{
lean_object* v___x_1753_; 
if (v_isShared_1751_ == 0)
{
v___x_1753_ = v___x_1750_;
goto v_reusejp_1752_;
}
else
{
lean_object* v_reuseFailAlloc_1755_; 
v_reuseFailAlloc_1755_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1755_, 0, v_a_1748_);
v___x_1753_ = v_reuseFailAlloc_1755_;
goto v_reusejp_1752_;
}
v_reusejp_1752_:
{
lean_object* v___x_1754_; 
v___x_1754_ = l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__4___redArg(v___x_1753_, v_a_1747_);
lean_dec_ref(v___x_1753_);
return v___x_1754_;
}
}
}
else
{
lean_object* v_a_1757_; lean_object* v_a_1758_; lean_object* v___x_1760_; uint8_t v_isShared_1761_; uint8_t v_isSharedCheck_1769_; 
v_a_1757_ = lean_ctor_get(v___x_1730_, 1);
lean_inc(v_a_1757_);
lean_dec_ref_known(v___x_1730_, 2);
v_a_1758_ = lean_ctor_get(v_snd_1746_, 0);
v_isSharedCheck_1769_ = !lean_is_exclusive(v_snd_1746_);
if (v_isSharedCheck_1769_ == 0)
{
v___x_1760_ = v_snd_1746_;
v_isShared_1761_ = v_isSharedCheck_1769_;
goto v_resetjp_1759_;
}
else
{
lean_inc(v_a_1758_);
lean_dec(v_snd_1746_);
v___x_1760_ = lean_box(0);
v_isShared_1761_ = v_isSharedCheck_1769_;
goto v_resetjp_1759_;
}
v_resetjp_1759_:
{
lean_object* v___x_1763_; 
if (v_isShared_1745_ == 0)
{
lean_ctor_set(v___x_1744_, 0, v_a_1758_);
v___x_1763_ = v___x_1744_;
goto v_reusejp_1762_;
}
else
{
lean_object* v_reuseFailAlloc_1768_; 
v_reuseFailAlloc_1768_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1768_, 0, v_a_1758_);
v___x_1763_ = v_reuseFailAlloc_1768_;
goto v_reusejp_1762_;
}
v_reusejp_1762_:
{
lean_object* v___x_1765_; 
if (v_isShared_1761_ == 0)
{
lean_ctor_set(v___x_1760_, 0, v___x_1763_);
v___x_1765_ = v___x_1760_;
goto v_reusejp_1764_;
}
else
{
lean_object* v_reuseFailAlloc_1767_; 
v_reuseFailAlloc_1767_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1767_, 0, v___x_1763_);
v___x_1765_ = v_reuseFailAlloc_1767_;
goto v_reusejp_1764_;
}
v_reusejp_1764_:
{
lean_object* v___x_1766_; 
v___x_1766_ = l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__4___redArg(v___x_1765_, v_a_1757_);
lean_dec_ref(v___x_1765_);
return v___x_1766_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_1771_; lean_object* v_a_1772_; lean_object* v___x_1774_; uint8_t v_isShared_1775_; uint8_t v_isSharedCheck_1779_; 
v_a_1771_ = lean_ctor_get(v___x_1730_, 0);
v_a_1772_ = lean_ctor_get(v___x_1730_, 1);
v_isSharedCheck_1779_ = !lean_is_exclusive(v___x_1730_);
if (v_isSharedCheck_1779_ == 0)
{
v___x_1774_ = v___x_1730_;
v_isShared_1775_ = v_isSharedCheck_1779_;
goto v_resetjp_1773_;
}
else
{
lean_inc(v_a_1772_);
lean_inc(v_a_1771_);
lean_dec(v___x_1730_);
v___x_1774_ = lean_box(0);
v_isShared_1775_ = v_isSharedCheck_1779_;
goto v_resetjp_1773_;
}
v_resetjp_1773_:
{
lean_object* v___x_1777_; 
if (v_isShared_1775_ == 0)
{
v___x_1777_ = v___x_1774_;
goto v_reusejp_1776_;
}
else
{
lean_object* v_reuseFailAlloc_1778_; 
v_reuseFailAlloc_1778_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1778_, 0, v_a_1771_);
lean_ctor_set(v_reuseFailAlloc_1778_, 1, v_a_1772_);
v___x_1777_ = v_reuseFailAlloc_1778_;
goto v_reusejp_1776_;
}
v_reusejp_1776_:
{
return v___x_1777_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3___redArg___lam__0___boxed(lean_object* v_env_1780_, lean_object* v_stx_1781_, lean_object* v___y_1782_, lean_object* v___y_1783_){
_start:
{
lean_object* v_res_1784_; 
v_res_1784_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3___redArg___lam__0(v_env_1780_, v_stx_1781_, v___y_1782_, v___y_1783_);
lean_dec_ref(v___y_1782_);
return v_res_1784_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3___redArg___lam__4(lean_object* v_env_1785_, lean_object* v_options_1786_, lean_object* v_currNamespace_1787_, lean_object* v_openDecls_1788_, lean_object* v_n_1789_, lean_object* v___y_1790_, lean_object* v___y_1791_){
_start:
{
lean_object* v___x_1792_; lean_object* v___x_1793_; 
v___x_1792_ = l_Lean_ResolveName_resolveGlobalName(v_env_1785_, v_options_1786_, v_currNamespace_1787_, v_openDecls_1788_, v_n_1789_);
v___x_1793_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1793_, 0, v___x_1792_);
lean_ctor_set(v___x_1793_, 1, v___y_1791_);
return v___x_1793_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3___redArg___lam__4___boxed(lean_object* v_env_1794_, lean_object* v_options_1795_, lean_object* v_currNamespace_1796_, lean_object* v_openDecls_1797_, lean_object* v_n_1798_, lean_object* v___y_1799_, lean_object* v___y_1800_){
_start:
{
lean_object* v_res_1801_; 
v_res_1801_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3___redArg___lam__4(v_env_1794_, v_options_1795_, v_currNamespace_1796_, v_openDecls_1797_, v_n_1798_, v___y_1799_, v___y_1800_);
lean_dec_ref(v___y_1799_);
lean_dec_ref(v_options_1795_);
return v_res_1801_;
}
}
static lean_object* _init_l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__10___redArg___closed__0(void){
_start:
{
lean_object* v___x_1802_; lean_object* v___x_1803_; lean_object* v___x_1804_; 
v___x_1802_ = lean_box(0);
v___x_1803_ = l_Lean_Elab_unsupportedSyntaxExceptionId;
v___x_1804_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1804_, 0, v___x_1803_);
lean_ctor_set(v___x_1804_, 1, v___x_1802_);
return v___x_1804_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__10___redArg(){
_start:
{
lean_object* v___x_1806_; lean_object* v___x_1807_; 
v___x_1806_ = lean_obj_once(&l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__10___redArg___closed__0, &l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__10___redArg___closed__0_once, _init_l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__10___redArg___closed__0);
v___x_1807_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1807_, 0, v___x_1806_);
return v___x_1807_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__10___redArg___boxed(lean_object* v___y_1808_){
_start:
{
lean_object* v_res_1809_; 
v_res_1809_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__10___redArg();
return v_res_1809_;
}
}
LEAN_EXPORT lean_object* l_List_forM___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__7(lean_object* v_as_1810_, lean_object* v___y_1811_, lean_object* v___y_1812_, lean_object* v___y_1813_, lean_object* v___y_1814_, lean_object* v___y_1815_, lean_object* v___y_1816_){
_start:
{
if (lean_obj_tag(v_as_1810_) == 0)
{
lean_object* v___x_1818_; lean_object* v___x_1819_; 
v___x_1818_ = lean_box(0);
v___x_1819_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1819_, 0, v___x_1818_);
return v___x_1819_;
}
else
{
lean_object* v_toCold_1820_; lean_object* v_options_1821_; uint8_t v_hasTrace_1822_; 
v_toCold_1820_ = lean_ctor_get(v___y_1815_, 0);
v_options_1821_ = lean_ctor_get(v_toCold_1820_, 2);
v_hasTrace_1822_ = lean_ctor_get_uint8(v_options_1821_, sizeof(void*)*1);
if (v_hasTrace_1822_ == 0)
{
lean_object* v_tail_1823_; 
v_tail_1823_ = lean_ctor_get(v_as_1810_, 1);
lean_inc(v_tail_1823_);
lean_dec_ref_known(v_as_1810_, 2);
v_as_1810_ = v_tail_1823_;
goto _start;
}
else
{
lean_object* v_head_1825_; lean_object* v_tail_1826_; lean_object* v_fst_1827_; lean_object* v_snd_1828_; lean_object* v_inheritedTraceOptions_1829_; lean_object* v___x_1830_; lean_object* v___x_1831_; uint8_t v___x_1832_; 
v_head_1825_ = lean_ctor_get(v_as_1810_, 0);
lean_inc(v_head_1825_);
v_tail_1826_ = lean_ctor_get(v_as_1810_, 1);
lean_inc(v_tail_1826_);
lean_dec_ref_known(v_as_1810_, 2);
v_fst_1827_ = lean_ctor_get(v_head_1825_, 0);
lean_inc_n(v_fst_1827_, 2);
v_snd_1828_ = lean_ctor_get(v_head_1825_, 1);
lean_inc(v_snd_1828_);
lean_dec(v_head_1825_);
v_inheritedTraceOptions_1829_ = lean_ctor_get(v_toCold_1820_, 11);
v___x_1830_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__5_spec__6___closed__14));
v___x_1831_ = l_Lean_Name_append(v___x_1830_, v_fst_1827_);
v___x_1832_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_1829_, v_options_1821_, v___x_1831_);
lean_dec(v___x_1831_);
if (v___x_1832_ == 0)
{
lean_dec(v_snd_1828_);
lean_dec(v_fst_1827_);
v_as_1810_ = v_tail_1826_;
goto _start;
}
else
{
lean_object* v___x_1834_; lean_object* v___x_1835_; lean_object* v___x_1836_; 
v___x_1834_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1834_, 0, v_snd_1828_);
v___x_1835_ = l_Lean_MessageData_ofFormat(v___x_1834_);
v___x_1836_ = l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__3___redArg(v_fst_1827_, v___x_1835_, v___y_1813_, v___y_1814_, v___y_1815_, v___y_1816_);
if (lean_obj_tag(v___x_1836_) == 0)
{
lean_dec_ref_known(v___x_1836_, 1);
v_as_1810_ = v_tail_1826_;
goto _start;
}
else
{
lean_dec(v_tail_1826_);
return v___x_1836_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forM___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__7___boxed(lean_object* v_as_1838_, lean_object* v___y_1839_, lean_object* v___y_1840_, lean_object* v___y_1841_, lean_object* v___y_1842_, lean_object* v___y_1843_, lean_object* v___y_1844_, lean_object* v___y_1845_){
_start:
{
lean_object* v_res_1846_; 
v_res_1846_ = l_List_forM___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__7(v_as_1838_, v___y_1839_, v___y_1840_, v___y_1841_, v___y_1842_, v___y_1843_, v___y_1844_);
lean_dec(v___y_1844_);
lean_dec_ref(v___y_1843_);
lean_dec(v___y_1842_);
lean_dec_ref(v___y_1841_);
lean_dec(v___y_1840_);
lean_dec_ref(v___y_1839_);
return v_res_1846_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3___redArg___lam__3(lean_object* v_currNamespace_1847_, lean_object* v___y_1848_, lean_object* v___y_1849_){
_start:
{
lean_object* v___x_1850_; 
v___x_1850_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1850_, 0, v_currNamespace_1847_);
lean_ctor_set(v___x_1850_, 1, v___y_1849_);
return v___x_1850_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3___redArg___lam__3___boxed(lean_object* v_currNamespace_1851_, lean_object* v___y_1852_, lean_object* v___y_1853_){
_start:
{
lean_object* v_res_1854_; 
v_res_1854_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3___redArg___lam__3(v_currNamespace_1851_, v___y_1852_, v___y_1853_);
lean_dec_ref(v___y_1852_);
return v_res_1854_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__8___redArg(lean_object* v_ref_1855_, lean_object* v_msg_1856_, lean_object* v___y_1857_, lean_object* v___y_1858_, lean_object* v___y_1859_, lean_object* v___y_1860_, lean_object* v___y_1861_, lean_object* v___y_1862_){
_start:
{
lean_object* v_toCold_1864_; lean_object* v_currRecDepth_1865_; lean_object* v_ref_1866_; uint8_t v_diag_1867_; uint8_t v_suppressElabErrors_1868_; lean_object* v_ref_1869_; lean_object* v___x_1870_; lean_object* v___x_1871_; 
v_toCold_1864_ = lean_ctor_get(v___y_1861_, 0);
v_currRecDepth_1865_ = lean_ctor_get(v___y_1861_, 1);
v_ref_1866_ = lean_ctor_get(v___y_1861_, 2);
v_diag_1867_ = lean_ctor_get_uint8(v___y_1861_, sizeof(void*)*3);
v_suppressElabErrors_1868_ = lean_ctor_get_uint8(v___y_1861_, sizeof(void*)*3 + 1);
v_ref_1869_ = l_Lean_replaceRef(v_ref_1855_, v_ref_1866_);
lean_inc(v_currRecDepth_1865_);
lean_inc_ref(v_toCold_1864_);
v___x_1870_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_1870_, 0, v_toCold_1864_);
lean_ctor_set(v___x_1870_, 1, v_currRecDepth_1865_);
lean_ctor_set(v___x_1870_, 2, v_ref_1869_);
lean_ctor_set_uint8(v___x_1870_, sizeof(void*)*3, v_diag_1867_);
lean_ctor_set_uint8(v___x_1870_, sizeof(void*)*3 + 1, v_suppressElabErrors_1868_);
v___x_1871_ = l_Lean_throwError___at___00Lean_Elab_Do_elabDoForward_spec__0___redArg(v_msg_1856_, v___y_1857_, v___y_1858_, v___y_1859_, v___y_1860_, v___x_1870_, v___y_1862_);
lean_dec_ref_known(v___x_1870_, 3);
return v___x_1871_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__8___redArg___boxed(lean_object* v_ref_1872_, lean_object* v_msg_1873_, lean_object* v___y_1874_, lean_object* v___y_1875_, lean_object* v___y_1876_, lean_object* v___y_1877_, lean_object* v___y_1878_, lean_object* v___y_1879_, lean_object* v___y_1880_){
_start:
{
lean_object* v_res_1881_; 
v_res_1881_ = l_Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__8___redArg(v_ref_1872_, v_msg_1873_, v___y_1874_, v___y_1875_, v___y_1876_, v___y_1877_, v___y_1878_, v___y_1879_);
lean_dec(v___y_1879_);
lean_dec_ref(v___y_1878_);
lean_dec(v___y_1877_);
lean_dec_ref(v___y_1876_);
lean_dec(v___y_1875_);
lean_dec_ref(v___y_1874_);
lean_dec(v_ref_1872_);
return v_res_1881_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3___redArg___lam__1(lean_object* v_env_1882_, lean_object* v_declName_1883_, lean_object* v___y_1884_, lean_object* v___y_1885_){
_start:
{
uint8_t v___x_1886_; lean_object* v_env_1887_; lean_object* v___x_1888_; uint8_t v___x_1889_; uint8_t v___x_1890_; 
v___x_1886_ = 0;
v_env_1887_ = l_Lean_Environment_setExporting(v_env_1882_, v___x_1886_);
lean_inc(v_declName_1883_);
v___x_1888_ = l_Lean_mkPrivateName(v_env_1887_, v_declName_1883_);
v___x_1889_ = 1;
lean_inc_ref(v_env_1887_);
v___x_1890_ = l_Lean_Environment_contains(v_env_1887_, v___x_1888_, v___x_1889_);
if (v___x_1890_ == 0)
{
lean_object* v___x_1891_; uint8_t v___x_1892_; lean_object* v___x_1893_; lean_object* v___x_1894_; 
v___x_1891_ = l_Lean_privateToUserName(v_declName_1883_);
v___x_1892_ = l_Lean_Environment_contains(v_env_1887_, v___x_1891_, v___x_1889_);
v___x_1893_ = lean_box(v___x_1892_);
v___x_1894_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1894_, 0, v___x_1893_);
lean_ctor_set(v___x_1894_, 1, v___y_1885_);
return v___x_1894_;
}
else
{
lean_object* v___x_1895_; lean_object* v___x_1896_; 
lean_dec_ref(v_env_1887_);
lean_dec(v_declName_1883_);
v___x_1895_ = lean_box(v___x_1890_);
v___x_1896_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1896_, 0, v___x_1895_);
lean_ctor_set(v___x_1896_, 1, v___y_1885_);
return v___x_1896_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3___redArg___lam__1___boxed(lean_object* v_env_1897_, lean_object* v_declName_1898_, lean_object* v___y_1899_, lean_object* v___y_1900_){
_start:
{
lean_object* v_res_1901_; 
v_res_1901_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3___redArg___lam__1(v_env_1897_, v_declName_1898_, v___y_1899_, v___y_1900_);
lean_dec_ref(v___y_1899_);
return v_res_1901_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3___redArg(lean_object* v_x_1903_, lean_object* v___y_1904_, lean_object* v___y_1905_, lean_object* v___y_1906_, lean_object* v___y_1907_, lean_object* v___y_1908_, lean_object* v___y_1909_){
_start:
{
lean_object* v___x_1911_; lean_object* v_toCold_1912_; lean_object* v_env_1913_; lean_object* v_currRecDepth_1914_; lean_object* v_ref_1915_; lean_object* v_options_1916_; lean_object* v_maxRecDepth_1917_; lean_object* v_currNamespace_1918_; lean_object* v_openDecls_1919_; lean_object* v_quotContext_1920_; lean_object* v_currMacroScope_1921_; lean_object* v___f_1922_; lean_object* v___f_1923_; lean_object* v___f_1924_; lean_object* v___f_1925_; lean_object* v___f_1926_; lean_object* v___x_1927_; lean_object* v_methods_1928_; lean_object* v___x_1929_; lean_object* v_nextMacroScope_1930_; lean_object* v___x_1931_; lean_object* v___x_1932_; lean_object* v___x_1933_; lean_object* v___x_1934_; 
v___x_1911_ = lean_st_ref_get(v___y_1909_);
v_toCold_1912_ = lean_ctor_get(v___y_1908_, 0);
v_env_1913_ = lean_ctor_get(v___x_1911_, 0);
lean_inc_ref_n(v_env_1913_, 4);
lean_dec(v___x_1911_);
v_currRecDepth_1914_ = lean_ctor_get(v___y_1908_, 1);
v_ref_1915_ = lean_ctor_get(v___y_1908_, 2);
v_options_1916_ = lean_ctor_get(v_toCold_1912_, 2);
v_maxRecDepth_1917_ = lean_ctor_get(v_toCold_1912_, 3);
v_currNamespace_1918_ = lean_ctor_get(v_toCold_1912_, 4);
v_openDecls_1919_ = lean_ctor_get(v_toCold_1912_, 5);
v_quotContext_1920_ = lean_ctor_get(v_toCold_1912_, 8);
v_currMacroScope_1921_ = lean_ctor_get(v_toCold_1912_, 9);
v___f_1922_ = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3___redArg___lam__0___boxed), 4, 1);
lean_closure_set(v___f_1922_, 0, v_env_1913_);
v___f_1923_ = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3___redArg___lam__1___boxed), 4, 1);
lean_closure_set(v___f_1923_, 0, v_env_1913_);
lean_inc_n(v_openDecls_1919_, 2);
lean_inc_n(v_currNamespace_1918_, 3);
v___f_1924_ = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3___redArg___lam__2___boxed), 6, 3);
lean_closure_set(v___f_1924_, 0, v_env_1913_);
lean_closure_set(v___f_1924_, 1, v_currNamespace_1918_);
lean_closure_set(v___f_1924_, 2, v_openDecls_1919_);
v___f_1925_ = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3___redArg___lam__3___boxed), 3, 1);
lean_closure_set(v___f_1925_, 0, v_currNamespace_1918_);
lean_inc_ref(v_options_1916_);
v___f_1926_ = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3___redArg___lam__4___boxed), 7, 4);
lean_closure_set(v___f_1926_, 0, v_env_1913_);
lean_closure_set(v___f_1926_, 1, v_options_1916_);
lean_closure_set(v___f_1926_, 2, v_currNamespace_1918_);
lean_closure_set(v___f_1926_, 3, v_openDecls_1919_);
v___x_1927_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1927_, 0, v___f_1922_);
lean_ctor_set(v___x_1927_, 1, v___f_1925_);
lean_ctor_set(v___x_1927_, 2, v___f_1923_);
lean_ctor_set(v___x_1927_, 3, v___f_1924_);
lean_ctor_set(v___x_1927_, 4, v___f_1926_);
v_methods_1928_ = l_unsafeCast___redArg(v___x_1927_);
lean_dec_ref_known(v___x_1927_, 5);
v___x_1929_ = lean_st_ref_get(v___y_1909_);
v_nextMacroScope_1930_ = lean_ctor_get(v___x_1929_, 1);
lean_inc(v_nextMacroScope_1930_);
lean_dec(v___x_1929_);
lean_inc(v_ref_1915_);
lean_inc(v_maxRecDepth_1917_);
lean_inc(v_currRecDepth_1914_);
lean_inc(v_currMacroScope_1921_);
lean_inc(v_quotContext_1920_);
v___x_1931_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_1931_, 0, v_methods_1928_);
lean_ctor_set(v___x_1931_, 1, v_quotContext_1920_);
lean_ctor_set(v___x_1931_, 2, v_currMacroScope_1921_);
lean_ctor_set(v___x_1931_, 3, v_currRecDepth_1914_);
lean_ctor_set(v___x_1931_, 4, v_maxRecDepth_1917_);
lean_ctor_set(v___x_1931_, 5, v_ref_1915_);
v___x_1932_ = lean_box(0);
v___x_1933_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1933_, 0, v_nextMacroScope_1930_);
lean_ctor_set(v___x_1933_, 1, v___x_1932_);
lean_ctor_set(v___x_1933_, 2, v___x_1932_);
v___x_1934_ = lean_apply_2(v_x_1903_, v___x_1931_, v___x_1933_);
if (lean_obj_tag(v___x_1934_) == 0)
{
lean_object* v_a_1935_; lean_object* v_a_1936_; lean_object* v_macroScope_1937_; lean_object* v_traceMsgs_1938_; lean_object* v_expandedMacroDecls_1939_; lean_object* v___x_1940_; lean_object* v___x_1941_; 
v_a_1935_ = lean_ctor_get(v___x_1934_, 1);
lean_inc(v_a_1935_);
v_a_1936_ = lean_ctor_get(v___x_1934_, 0);
lean_inc(v_a_1936_);
lean_dec_ref_known(v___x_1934_, 2);
v_macroScope_1937_ = lean_ctor_get(v_a_1935_, 0);
lean_inc(v_macroScope_1937_);
v_traceMsgs_1938_ = lean_ctor_get(v_a_1935_, 1);
lean_inc(v_traceMsgs_1938_);
v_expandedMacroDecls_1939_ = lean_ctor_get(v_a_1935_, 2);
lean_inc(v_expandedMacroDecls_1939_);
lean_dec(v_a_1935_);
v___x_1940_ = lean_box(0);
v___x_1941_ = l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__6___redArg(v_expandedMacroDecls_1939_, v___x_1940_, v___y_1904_, v___y_1905_, v___y_1906_, v___y_1907_, v___y_1908_, v___y_1909_);
lean_dec(v_expandedMacroDecls_1939_);
if (lean_obj_tag(v___x_1941_) == 0)
{
lean_object* v___x_1942_; lean_object* v_env_1943_; lean_object* v_ngen_1944_; lean_object* v_auxDeclNGen_1945_; lean_object* v_traceState_1946_; lean_object* v_cache_1947_; lean_object* v_messages_1948_; lean_object* v_infoState_1949_; lean_object* v_snapshotTasks_1950_; lean_object* v___x_1952_; uint8_t v_isShared_1953_; uint8_t v_isSharedCheck_1976_; 
lean_dec_ref_known(v___x_1941_, 1);
v___x_1942_ = lean_st_ref_take(v___y_1909_);
v_env_1943_ = lean_ctor_get(v___x_1942_, 0);
v_ngen_1944_ = lean_ctor_get(v___x_1942_, 2);
v_auxDeclNGen_1945_ = lean_ctor_get(v___x_1942_, 3);
v_traceState_1946_ = lean_ctor_get(v___x_1942_, 4);
v_cache_1947_ = lean_ctor_get(v___x_1942_, 5);
v_messages_1948_ = lean_ctor_get(v___x_1942_, 6);
v_infoState_1949_ = lean_ctor_get(v___x_1942_, 7);
v_snapshotTasks_1950_ = lean_ctor_get(v___x_1942_, 8);
v_isSharedCheck_1976_ = !lean_is_exclusive(v___x_1942_);
if (v_isSharedCheck_1976_ == 0)
{
lean_object* v_unused_1977_; 
v_unused_1977_ = lean_ctor_get(v___x_1942_, 1);
lean_dec(v_unused_1977_);
v___x_1952_ = v___x_1942_;
v_isShared_1953_ = v_isSharedCheck_1976_;
goto v_resetjp_1951_;
}
else
{
lean_inc(v_snapshotTasks_1950_);
lean_inc(v_infoState_1949_);
lean_inc(v_messages_1948_);
lean_inc(v_cache_1947_);
lean_inc(v_traceState_1946_);
lean_inc(v_auxDeclNGen_1945_);
lean_inc(v_ngen_1944_);
lean_inc(v_env_1943_);
lean_dec(v___x_1942_);
v___x_1952_ = lean_box(0);
v_isShared_1953_ = v_isSharedCheck_1976_;
goto v_resetjp_1951_;
}
v_resetjp_1951_:
{
lean_object* v___x_1955_; 
if (v_isShared_1953_ == 0)
{
lean_ctor_set(v___x_1952_, 1, v_macroScope_1937_);
v___x_1955_ = v___x_1952_;
goto v_reusejp_1954_;
}
else
{
lean_object* v_reuseFailAlloc_1975_; 
v_reuseFailAlloc_1975_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_1975_, 0, v_env_1943_);
lean_ctor_set(v_reuseFailAlloc_1975_, 1, v_macroScope_1937_);
lean_ctor_set(v_reuseFailAlloc_1975_, 2, v_ngen_1944_);
lean_ctor_set(v_reuseFailAlloc_1975_, 3, v_auxDeclNGen_1945_);
lean_ctor_set(v_reuseFailAlloc_1975_, 4, v_traceState_1946_);
lean_ctor_set(v_reuseFailAlloc_1975_, 5, v_cache_1947_);
lean_ctor_set(v_reuseFailAlloc_1975_, 6, v_messages_1948_);
lean_ctor_set(v_reuseFailAlloc_1975_, 7, v_infoState_1949_);
lean_ctor_set(v_reuseFailAlloc_1975_, 8, v_snapshotTasks_1950_);
v___x_1955_ = v_reuseFailAlloc_1975_;
goto v_reusejp_1954_;
}
v_reusejp_1954_:
{
lean_object* v___x_1956_; lean_object* v___x_1957_; lean_object* v___x_1958_; 
v___x_1956_ = lean_st_ref_put(v___y_1909_, v___x_1955_);
v___x_1957_ = l_List_reverse___redArg(v_traceMsgs_1938_);
v___x_1958_ = l_List_forM___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__7(v___x_1957_, v___y_1904_, v___y_1905_, v___y_1906_, v___y_1907_, v___y_1908_, v___y_1909_);
if (lean_obj_tag(v___x_1958_) == 0)
{
lean_object* v___x_1960_; uint8_t v_isShared_1961_; uint8_t v_isSharedCheck_1965_; 
v_isSharedCheck_1965_ = !lean_is_exclusive(v___x_1958_);
if (v_isSharedCheck_1965_ == 0)
{
lean_object* v_unused_1966_; 
v_unused_1966_ = lean_ctor_get(v___x_1958_, 0);
lean_dec(v_unused_1966_);
v___x_1960_ = v___x_1958_;
v_isShared_1961_ = v_isSharedCheck_1965_;
goto v_resetjp_1959_;
}
else
{
lean_dec(v___x_1958_);
v___x_1960_ = lean_box(0);
v_isShared_1961_ = v_isSharedCheck_1965_;
goto v_resetjp_1959_;
}
v_resetjp_1959_:
{
lean_object* v___x_1963_; 
if (v_isShared_1961_ == 0)
{
lean_ctor_set(v___x_1960_, 0, v_a_1936_);
v___x_1963_ = v___x_1960_;
goto v_reusejp_1962_;
}
else
{
lean_object* v_reuseFailAlloc_1964_; 
v_reuseFailAlloc_1964_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1964_, 0, v_a_1936_);
v___x_1963_ = v_reuseFailAlloc_1964_;
goto v_reusejp_1962_;
}
v_reusejp_1962_:
{
return v___x_1963_;
}
}
}
else
{
lean_object* v_a_1967_; lean_object* v___x_1969_; uint8_t v_isShared_1970_; uint8_t v_isSharedCheck_1974_; 
lean_dec(v_a_1936_);
v_a_1967_ = lean_ctor_get(v___x_1958_, 0);
v_isSharedCheck_1974_ = !lean_is_exclusive(v___x_1958_);
if (v_isSharedCheck_1974_ == 0)
{
v___x_1969_ = v___x_1958_;
v_isShared_1970_ = v_isSharedCheck_1974_;
goto v_resetjp_1968_;
}
else
{
lean_inc(v_a_1967_);
lean_dec(v___x_1958_);
v___x_1969_ = lean_box(0);
v_isShared_1970_ = v_isSharedCheck_1974_;
goto v_resetjp_1968_;
}
v_resetjp_1968_:
{
lean_object* v___x_1972_; 
if (v_isShared_1970_ == 0)
{
v___x_1972_ = v___x_1969_;
goto v_reusejp_1971_;
}
else
{
lean_object* v_reuseFailAlloc_1973_; 
v_reuseFailAlloc_1973_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1973_, 0, v_a_1967_);
v___x_1972_ = v_reuseFailAlloc_1973_;
goto v_reusejp_1971_;
}
v_reusejp_1971_:
{
return v___x_1972_;
}
}
}
}
}
}
else
{
lean_object* v_a_1978_; lean_object* v___x_1980_; uint8_t v_isShared_1981_; uint8_t v_isSharedCheck_1985_; 
lean_dec(v_traceMsgs_1938_);
lean_dec(v_macroScope_1937_);
lean_dec(v_a_1936_);
v_a_1978_ = lean_ctor_get(v___x_1941_, 0);
v_isSharedCheck_1985_ = !lean_is_exclusive(v___x_1941_);
if (v_isSharedCheck_1985_ == 0)
{
v___x_1980_ = v___x_1941_;
v_isShared_1981_ = v_isSharedCheck_1985_;
goto v_resetjp_1979_;
}
else
{
lean_inc(v_a_1978_);
lean_dec(v___x_1941_);
v___x_1980_ = lean_box(0);
v_isShared_1981_ = v_isSharedCheck_1985_;
goto v_resetjp_1979_;
}
v_resetjp_1979_:
{
lean_object* v___x_1983_; 
if (v_isShared_1981_ == 0)
{
v___x_1983_ = v___x_1980_;
goto v_reusejp_1982_;
}
else
{
lean_object* v_reuseFailAlloc_1984_; 
v_reuseFailAlloc_1984_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1984_, 0, v_a_1978_);
v___x_1983_ = v_reuseFailAlloc_1984_;
goto v_reusejp_1982_;
}
v_reusejp_1982_:
{
return v___x_1983_;
}
}
}
}
else
{
lean_object* v_a_1986_; 
v_a_1986_ = lean_ctor_get(v___x_1934_, 0);
lean_inc(v_a_1986_);
lean_dec_ref_known(v___x_1934_, 2);
if (lean_obj_tag(v_a_1986_) == 0)
{
lean_object* v_a_1987_; lean_object* v_a_1988_; lean_object* v___x_1989_; uint8_t v___x_1990_; 
v_a_1987_ = lean_ctor_get(v_a_1986_, 0);
lean_inc(v_a_1987_);
v_a_1988_ = lean_ctor_get(v_a_1986_, 1);
lean_inc_ref(v_a_1988_);
lean_dec_ref_known(v_a_1986_, 2);
v___x_1989_ = ((lean_object*)(l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3___redArg___closed__0));
v___x_1990_ = lean_string_dec_eq(v_a_1988_, v___x_1989_);
if (v___x_1990_ == 0)
{
lean_object* v___x_1991_; lean_object* v___x_1992_; lean_object* v___x_1993_; 
v___x_1991_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1991_, 0, v_a_1988_);
v___x_1992_ = l_Lean_MessageData_ofFormat(v___x_1991_);
v___x_1993_ = l_Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__8___redArg(v_a_1987_, v___x_1992_, v___y_1904_, v___y_1905_, v___y_1906_, v___y_1907_, v___y_1908_, v___y_1909_);
lean_dec(v_a_1987_);
return v___x_1993_;
}
else
{
lean_object* v___x_1994_; 
lean_dec_ref(v_a_1988_);
v___x_1994_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__9___redArg(v_a_1987_);
return v___x_1994_;
}
}
else
{
lean_object* v___x_1995_; 
v___x_1995_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__10___redArg();
return v___x_1995_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3___redArg___boxed(lean_object* v_x_1996_, lean_object* v___y_1997_, lean_object* v___y_1998_, lean_object* v___y_1999_, lean_object* v___y_2000_, lean_object* v___y_2001_, lean_object* v___y_2002_, lean_object* v___y_2003_){
_start:
{
lean_object* v_res_2004_; 
v_res_2004_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3___redArg(v_x_1996_, v___y_1997_, v___y_1998_, v___y_1999_, v___y_2000_, v___y_2001_, v___y_2002_);
lean_dec(v___y_2002_);
lean_dec_ref(v___y_2001_);
lean_dec(v___y_2000_);
lean_dec_ref(v___y_1999_);
lean_dec(v___y_1998_);
lean_dec_ref(v___y_1997_);
return v_res_2004_;
}
}
static lean_object* _init_l_Lean_Elab_Do_tryElabForwardApp_x3f___closed__1(void){
_start:
{
lean_object* v___x_2006_; lean_object* v___x_2007_; 
v___x_2006_ = ((lean_object*)(l_Lean_Elab_Do_tryElabForwardApp_x3f___closed__0));
v___x_2007_ = l_Lean_stringToMessageData(v___x_2006_);
return v___x_2007_;
}
}
static lean_object* _init_l_Lean_Elab_Do_tryElabForwardApp_x3f___closed__6(void){
_start:
{
lean_object* v___x_2016_; lean_object* v___x_2017_; 
v___x_2016_ = ((lean_object*)(l_Lean_Elab_Do_tryElabForwardApp_x3f___closed__5));
v___x_2017_ = l_Lean_stringToMessageData(v___x_2016_);
return v___x_2017_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_tryElabForwardApp_x3f(lean_object* v_e_2018_, lean_object* v_dec_2019_, lean_object* v_a_2020_, lean_object* v_a_2021_, lean_object* v_a_2022_, lean_object* v_a_2023_, lean_object* v_a_2024_, lean_object* v_a_2025_, lean_object* v_a_2026_){
_start:
{
lean_object* v___x_2028_; 
v___x_2028_ = l_Lean_Elab_Do_Forward_matchApp_x3f(v_e_2018_);
if (lean_obj_tag(v___x_2028_) == 1)
{
lean_object* v_val_2029_; lean_object* v___x_2031_; uint8_t v_isShared_2032_; uint8_t v_isSharedCheck_2201_; 
v_val_2029_ = lean_ctor_get(v___x_2028_, 0);
v_isSharedCheck_2201_ = !lean_is_exclusive(v___x_2028_);
if (v_isSharedCheck_2201_ == 0)
{
v___x_2031_ = v___x_2028_;
v_isShared_2032_ = v_isSharedCheck_2201_;
goto v_resetjp_2030_;
}
else
{
lean_inc(v_val_2029_);
lean_dec(v___x_2028_);
v___x_2031_ = lean_box(0);
v_isShared_2032_ = v_isSharedCheck_2201_;
goto v_resetjp_2030_;
}
v_resetjp_2030_:
{
lean_object* v_fst_2033_; lean_object* v_snd_2034_; lean_object* v___f_2035_; lean_object* v___x_2036_; 
v_fst_2033_ = lean_ctor_get(v_val_2029_, 0);
lean_inc_n(v_fst_2033_, 2);
v_snd_2034_ = lean_ctor_get(v_val_2029_, 1);
lean_inc(v_snd_2034_);
lean_dec(v_val_2029_);
lean_inc(v_a_2024_);
lean_inc_ref(v_a_2023_);
lean_inc(v_a_2022_);
lean_inc_ref(v_a_2021_);
v___f_2035_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_tryElabForwardApp_x3f___lam__0___boxed), 8, 5);
lean_closure_set(v___f_2035_, 0, v_a_2021_);
lean_closure_set(v___f_2035_, 1, v_a_2022_);
lean_closure_set(v___f_2035_, 2, v_a_2023_);
lean_closure_set(v___f_2035_, 3, v_a_2024_);
lean_closure_set(v___f_2035_, 4, v_fst_2033_);
v___x_2036_ = l_Lean_Core_withFreshMacroScope___redArg(v___f_2035_, v_a_2025_, v_a_2026_);
if (lean_obj_tag(v___x_2036_) == 0)
{
lean_object* v_a_2037_; lean_object* v_fst_2038_; lean_object* v_snd_2039_; lean_object* v___x_2040_; 
v_a_2037_ = lean_ctor_get(v___x_2036_, 0);
lean_inc(v_a_2037_);
lean_dec_ref_known(v___x_2036_, 1);
v_fst_2038_ = lean_ctor_get(v_a_2037_, 0);
lean_inc_n(v_fst_2038_, 2);
v_snd_2039_ = lean_ctor_get(v_a_2037_, 1);
lean_inc_n(v_snd_2039_, 2);
lean_dec(v_a_2037_);
v___x_2040_ = l___private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_validateForwarder(v_fst_2033_, v_fst_2038_, v_snd_2039_, v_a_2023_, v_a_2024_, v_a_2025_, v_a_2026_);
if (lean_obj_tag(v___x_2040_) == 0)
{
lean_object* v_binders_2041_; lean_object* v_body_2042_; lean_object* v___x_2044_; uint8_t v_isShared_2045_; uint8_t v_isSharedCheck_2184_; 
lean_dec_ref_known(v___x_2040_, 1);
v_binders_2041_ = lean_ctor_get(v_snd_2034_, 0);
v_body_2042_ = lean_ctor_get(v_snd_2034_, 1);
v_isSharedCheck_2184_ = !lean_is_exclusive(v_snd_2034_);
if (v_isSharedCheck_2184_ == 0)
{
v___x_2044_ = v_snd_2034_;
v_isShared_2045_ = v_isSharedCheck_2184_;
goto v_resetjp_2043_;
}
else
{
lean_inc(v_body_2042_);
lean_inc(v_binders_2041_);
lean_dec(v_snd_2034_);
v___x_2044_ = lean_box(0);
v_isShared_2045_ = v_isSharedCheck_2184_;
goto v_resetjp_2043_;
}
v_resetjp_2043_:
{
lean_object* v___f_2046_; lean_object* v___x_2047_; 
lean_inc(v_body_2042_);
v___f_2046_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_tryElabForwardApp_x3f___lam__1___boxed), 10, 1);
lean_closure_set(v___f_2046_, 0, v_body_2042_);
v___x_2047_ = l_Lean_Elab_Do_InferControlInfo_ofSeq(v_body_2042_, v_a_2021_, v_a_2022_, v_a_2023_, v_a_2024_, v_a_2025_, v_a_2026_);
if (lean_obj_tag(v___x_2047_) == 0)
{
lean_object* v_a_2048_; lean_object* v___x_2049_; 
v_a_2048_ = lean_ctor_get(v___x_2047_, 0);
lean_inc(v_a_2048_);
lean_dec_ref_known(v___x_2047_, 1);
v___x_2049_ = l_Lean_Elab_Do_EffectForwarder_ofCont(v_a_2048_, v_dec_2019_, v_a_2020_, v_a_2021_, v_a_2022_, v_a_2023_, v_a_2024_, v_a_2025_, v_a_2026_);
lean_dec(v_a_2048_);
if (lean_obj_tag(v___x_2049_) == 0)
{
lean_object* v_a_2050_; lean_object* v___y_2052_; lean_object* v___y_2053_; lean_object* v___y_2054_; lean_object* v___y_2055_; lean_object* v___y_2056_; lean_object* v___y_2057_; lean_object* v___y_2058_; lean_object* v___y_2090_; lean_object* v___f_2122_; lean_object* v___x_2123_; 
v_a_2050_ = lean_ctor_get(v___x_2049_, 0);
lean_inc_n(v_a_2050_, 2);
lean_dec_ref_known(v___x_2049_, 1);
lean_inc_ref(v_a_2020_);
v___f_2122_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_tryElabForwardApp_x3f___lam__2___boxed), 12, 3);
lean_closure_set(v___f_2122_, 0, v_a_2050_);
lean_closure_set(v___f_2122_, 1, v___f_2046_);
lean_closure_set(v___f_2122_, 2, v_a_2020_);
lean_inc(v_a_2026_);
lean_inc_ref(v_a_2025_);
lean_inc(v_a_2024_);
lean_inc_ref(v_a_2023_);
lean_inc(v_fst_2038_);
v___x_2123_ = lean_infer_type(v_fst_2038_, v_a_2023_, v_a_2024_, v_a_2025_, v_a_2026_);
if (lean_obj_tag(v___x_2123_) == 0)
{
lean_object* v_a_2124_; lean_object* v___x_2125_; lean_object* v_a_2126_; lean_object* v_ref_2127_; uint8_t v___x_2128_; lean_object* v___x_2129_; lean_object* v___x_2130_; lean_object* v___x_2131_; lean_object* v___x_2133_; 
v_a_2124_ = lean_ctor_get(v___x_2123_, 0);
lean_inc(v_a_2124_);
lean_dec_ref_known(v___x_2123_, 1);
v___x_2125_ = l_Lean_instantiateMVars___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__1___redArg(v_a_2124_, v_a_2024_);
v_a_2126_ = lean_ctor_get(v___x_2125_, 0);
lean_inc(v_a_2126_);
lean_dec_ref(v___x_2125_);
v_ref_2127_ = lean_ctor_get(v_a_2025_, 2);
v___x_2128_ = 0;
v___x_2129_ = l_Lean_SourceInfo_fromRef(v_ref_2127_, v___x_2128_);
v___x_2130_ = ((lean_object*)(l_Lean_Elab_Do_tryElabForwardApp_x3f___closed__3));
v___x_2131_ = ((lean_object*)(l_Lean_Elab_Do_tryElabForwardApp_x3f___closed__4));
lean_inc(v___x_2129_);
if (v_isShared_2045_ == 0)
{
lean_ctor_set_tag(v___x_2044_, 2);
lean_ctor_set(v___x_2044_, 1, v___x_2131_);
lean_ctor_set(v___x_2044_, 0, v___x_2129_);
v___x_2133_ = v___x_2044_;
goto v_reusejp_2132_;
}
else
{
lean_object* v_reuseFailAlloc_2167_; 
v_reuseFailAlloc_2167_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2167_, 0, v___x_2129_);
lean_ctor_set(v_reuseFailAlloc_2167_, 1, v___x_2131_);
v___x_2133_ = v_reuseFailAlloc_2167_;
goto v_reusejp_2132_;
}
v_reusejp_2132_:
{
lean_object* v___x_2134_; size_t v_sz_2135_; size_t v___x_2136_; lean_object* v___x_2137_; lean_object* v___x_2138_; lean_object* v___x_2139_; lean_object* v___x_2140_; lean_object* v___x_2141_; 
v___x_2134_ = l_Lean_Syntax_node1(v___x_2129_, v___x_2130_, v___x_2133_);
v_sz_2135_ = lean_array_size(v_binders_2041_);
v___x_2136_ = ((size_t)0ULL);
v___x_2137_ = l_unsafeCast___redArg(v_binders_2041_);
lean_dec_ref(v_binders_2041_);
v___x_2138_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__2(v_sz_2135_, v___x_2136_, v___x_2137_);
v___x_2139_ = l_unsafeCast___redArg(v___x_2138_);
lean_dec_ref(v___x_2138_);
v___x_2140_ = lean_alloc_closure((void*)(l_Lean_Elab_Term_expandFunBinders___boxed), 4, 2);
lean_closure_set(v___x_2140_, 0, v___x_2139_);
lean_closure_set(v___x_2140_, 1, v___x_2134_);
v___x_2141_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3___redArg(v___x_2140_, v_a_2021_, v_a_2022_, v_a_2023_, v_a_2024_, v_a_2025_, v_a_2026_);
if (lean_obj_tag(v___x_2141_) == 0)
{
lean_object* v_a_2142_; lean_object* v_snd_2143_; lean_object* v_snd_2144_; uint8_t v___x_2145_; 
v_a_2142_ = lean_ctor_get(v___x_2141_, 0);
lean_inc(v_a_2142_);
lean_dec_ref_known(v___x_2141_, 1);
v_snd_2143_ = lean_ctor_get(v_a_2142_, 1);
v_snd_2144_ = lean_ctor_get(v_snd_2143_, 1);
v___x_2145_ = lean_unbox(v_snd_2144_);
if (v___x_2145_ == 0)
{
lean_object* v_fst_2146_; lean_object* v___x_2147_; lean_object* v___x_2148_; 
v_fst_2146_ = lean_ctor_get(v_a_2142_, 0);
lean_inc(v_fst_2146_);
lean_dec(v_a_2142_);
v___x_2147_ = lean_box(0);
v___x_2148_ = l_Lean_Elab_Do_tryElabForwardApp_x3f___lam__3(v_a_2126_, v_fst_2146_, v___f_2122_, v___x_2147_, v_a_2021_, v_a_2022_, v_a_2023_, v_a_2024_, v_a_2025_, v_a_2026_);
lean_dec(v_fst_2146_);
v___y_2090_ = v___x_2148_;
goto v___jp_2089_;
}
else
{
lean_object* v___x_2149_; lean_object* v___x_2150_; lean_object* v_a_2151_; lean_object* v___x_2153_; uint8_t v_isShared_2154_; uint8_t v_isSharedCheck_2158_; 
lean_dec(v_a_2142_);
lean_dec(v_a_2126_);
lean_dec_ref(v___f_2122_);
lean_dec(v_a_2050_);
lean_dec(v_snd_2039_);
lean_dec(v_fst_2038_);
lean_del_object(v___x_2031_);
v___x_2149_ = lean_obj_once(&l_Lean_Elab_Do_tryElabForwardApp_x3f___closed__6, &l_Lean_Elab_Do_tryElabForwardApp_x3f___closed__6_once, _init_l_Lean_Elab_Do_tryElabForwardApp_x3f___closed__6);
v___x_2150_ = l_Lean_throwError___at___00Lean_Elab_Do_elabDoForward_spec__0___redArg(v___x_2149_, v_a_2021_, v_a_2022_, v_a_2023_, v_a_2024_, v_a_2025_, v_a_2026_);
v_a_2151_ = lean_ctor_get(v___x_2150_, 0);
v_isSharedCheck_2158_ = !lean_is_exclusive(v___x_2150_);
if (v_isSharedCheck_2158_ == 0)
{
v___x_2153_ = v___x_2150_;
v_isShared_2154_ = v_isSharedCheck_2158_;
goto v_resetjp_2152_;
}
else
{
lean_inc(v_a_2151_);
lean_dec(v___x_2150_);
v___x_2153_ = lean_box(0);
v_isShared_2154_ = v_isSharedCheck_2158_;
goto v_resetjp_2152_;
}
v_resetjp_2152_:
{
lean_object* v___x_2156_; 
if (v_isShared_2154_ == 0)
{
v___x_2156_ = v___x_2153_;
goto v_reusejp_2155_;
}
else
{
lean_object* v_reuseFailAlloc_2157_; 
v_reuseFailAlloc_2157_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2157_, 0, v_a_2151_);
v___x_2156_ = v_reuseFailAlloc_2157_;
goto v_reusejp_2155_;
}
v_reusejp_2155_:
{
return v___x_2156_;
}
}
}
}
else
{
lean_object* v_a_2159_; lean_object* v___x_2161_; uint8_t v_isShared_2162_; uint8_t v_isSharedCheck_2166_; 
lean_dec(v_a_2126_);
lean_dec_ref(v___f_2122_);
lean_dec(v_a_2050_);
lean_dec(v_snd_2039_);
lean_dec(v_fst_2038_);
lean_del_object(v___x_2031_);
v_a_2159_ = lean_ctor_get(v___x_2141_, 0);
v_isSharedCheck_2166_ = !lean_is_exclusive(v___x_2141_);
if (v_isSharedCheck_2166_ == 0)
{
v___x_2161_ = v___x_2141_;
v_isShared_2162_ = v_isSharedCheck_2166_;
goto v_resetjp_2160_;
}
else
{
lean_inc(v_a_2159_);
lean_dec(v___x_2141_);
v___x_2161_ = lean_box(0);
v_isShared_2162_ = v_isSharedCheck_2166_;
goto v_resetjp_2160_;
}
v_resetjp_2160_:
{
lean_object* v___x_2164_; 
if (v_isShared_2162_ == 0)
{
v___x_2164_ = v___x_2161_;
goto v_reusejp_2163_;
}
else
{
lean_object* v_reuseFailAlloc_2165_; 
v_reuseFailAlloc_2165_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2165_, 0, v_a_2159_);
v___x_2164_ = v_reuseFailAlloc_2165_;
goto v_reusejp_2163_;
}
v_reusejp_2163_:
{
return v___x_2164_;
}
}
}
}
}
else
{
lean_dec_ref(v___f_2122_);
lean_del_object(v___x_2044_);
lean_dec_ref(v_binders_2041_);
v___y_2090_ = v___x_2123_;
goto v___jp_2089_;
}
v___jp_2051_:
{
lean_object* v___x_2059_; 
v___x_2059_ = l_Lean_Elab_Do_EffectForwarder_restoreCont(v_a_2050_, v___y_2052_, v___y_2053_, v___y_2054_, v___y_2055_, v___y_2056_, v___y_2057_, v___y_2058_);
if (lean_obj_tag(v___x_2059_) == 0)
{
lean_object* v_a_2060_; lean_object* v___x_2061_; 
v_a_2060_ = lean_ctor_get(v___x_2059_, 0);
lean_inc(v_a_2060_);
lean_dec_ref_known(v___x_2059_, 1);
v___x_2061_ = l_Lean_Elab_Do_DoElemCont_mkBindUnlessPure(v_a_2060_, v_snd_2039_, v___y_2052_, v___y_2053_, v___y_2054_, v___y_2055_, v___y_2056_, v___y_2057_, v___y_2058_);
if (lean_obj_tag(v___x_2061_) == 0)
{
lean_object* v_a_2062_; lean_object* v___x_2064_; uint8_t v_isShared_2065_; uint8_t v_isSharedCheck_2072_; 
v_a_2062_ = lean_ctor_get(v___x_2061_, 0);
v_isSharedCheck_2072_ = !lean_is_exclusive(v___x_2061_);
if (v_isSharedCheck_2072_ == 0)
{
v___x_2064_ = v___x_2061_;
v_isShared_2065_ = v_isSharedCheck_2072_;
goto v_resetjp_2063_;
}
else
{
lean_inc(v_a_2062_);
lean_dec(v___x_2061_);
v___x_2064_ = lean_box(0);
v_isShared_2065_ = v_isSharedCheck_2072_;
goto v_resetjp_2063_;
}
v_resetjp_2063_:
{
lean_object* v___x_2067_; 
if (v_isShared_2032_ == 0)
{
lean_ctor_set(v___x_2031_, 0, v_a_2062_);
v___x_2067_ = v___x_2031_;
goto v_reusejp_2066_;
}
else
{
lean_object* v_reuseFailAlloc_2071_; 
v_reuseFailAlloc_2071_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2071_, 0, v_a_2062_);
v___x_2067_ = v_reuseFailAlloc_2071_;
goto v_reusejp_2066_;
}
v_reusejp_2066_:
{
lean_object* v___x_2069_; 
if (v_isShared_2065_ == 0)
{
lean_ctor_set(v___x_2064_, 0, v___x_2067_);
v___x_2069_ = v___x_2064_;
goto v_reusejp_2068_;
}
else
{
lean_object* v_reuseFailAlloc_2070_; 
v_reuseFailAlloc_2070_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2070_, 0, v___x_2067_);
v___x_2069_ = v_reuseFailAlloc_2070_;
goto v_reusejp_2068_;
}
v_reusejp_2068_:
{
return v___x_2069_;
}
}
}
}
else
{
lean_object* v_a_2073_; lean_object* v___x_2075_; uint8_t v_isShared_2076_; uint8_t v_isSharedCheck_2080_; 
lean_del_object(v___x_2031_);
v_a_2073_ = lean_ctor_get(v___x_2061_, 0);
v_isSharedCheck_2080_ = !lean_is_exclusive(v___x_2061_);
if (v_isSharedCheck_2080_ == 0)
{
v___x_2075_ = v___x_2061_;
v_isShared_2076_ = v_isSharedCheck_2080_;
goto v_resetjp_2074_;
}
else
{
lean_inc(v_a_2073_);
lean_dec(v___x_2061_);
v___x_2075_ = lean_box(0);
v_isShared_2076_ = v_isSharedCheck_2080_;
goto v_resetjp_2074_;
}
v_resetjp_2074_:
{
lean_object* v___x_2078_; 
if (v_isShared_2076_ == 0)
{
v___x_2078_ = v___x_2075_;
goto v_reusejp_2077_;
}
else
{
lean_object* v_reuseFailAlloc_2079_; 
v_reuseFailAlloc_2079_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2079_, 0, v_a_2073_);
v___x_2078_ = v_reuseFailAlloc_2079_;
goto v_reusejp_2077_;
}
v_reusejp_2077_:
{
return v___x_2078_;
}
}
}
}
else
{
lean_object* v_a_2081_; lean_object* v___x_2083_; uint8_t v_isShared_2084_; uint8_t v_isSharedCheck_2088_; 
lean_dec(v_snd_2039_);
lean_del_object(v___x_2031_);
v_a_2081_ = lean_ctor_get(v___x_2059_, 0);
v_isSharedCheck_2088_ = !lean_is_exclusive(v___x_2059_);
if (v_isSharedCheck_2088_ == 0)
{
v___x_2083_ = v___x_2059_;
v_isShared_2084_ = v_isSharedCheck_2088_;
goto v_resetjp_2082_;
}
else
{
lean_inc(v_a_2081_);
lean_dec(v___x_2059_);
v___x_2083_ = lean_box(0);
v_isShared_2084_ = v_isSharedCheck_2088_;
goto v_resetjp_2082_;
}
v_resetjp_2082_:
{
lean_object* v___x_2086_; 
if (v_isShared_2084_ == 0)
{
v___x_2086_ = v___x_2083_;
goto v_reusejp_2085_;
}
else
{
lean_object* v_reuseFailAlloc_2087_; 
v_reuseFailAlloc_2087_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2087_, 0, v_a_2081_);
v___x_2086_ = v_reuseFailAlloc_2087_;
goto v_reusejp_2085_;
}
v_reusejp_2085_:
{
return v___x_2086_;
}
}
}
}
v___jp_2089_:
{
if (lean_obj_tag(v___y_2090_) == 0)
{
lean_object* v_a_2091_; lean_object* v___x_2092_; lean_object* v___x_2093_; 
v_a_2091_ = lean_ctor_get(v___y_2090_, 0);
lean_inc(v_a_2091_);
lean_dec_ref_known(v___y_2090_, 1);
v___x_2092_ = l_Lean_Expr_mvarId_x21(v_fst_2038_);
lean_dec(v_fst_2038_);
lean_inc(v_a_2026_);
lean_inc_ref(v_a_2025_);
lean_inc(v_a_2024_);
lean_inc_ref(v_a_2023_);
v___x_2093_ = lean_checked_assign(v___x_2092_, v_a_2091_, v_a_2023_, v_a_2024_, v_a_2025_, v_a_2026_);
if (lean_obj_tag(v___x_2093_) == 0)
{
lean_object* v_a_2094_; uint8_t v___x_2095_; 
v_a_2094_ = lean_ctor_get(v___x_2093_, 0);
lean_inc(v_a_2094_);
lean_dec_ref_known(v___x_2093_, 1);
v___x_2095_ = lean_unbox(v_a_2094_);
lean_dec(v_a_2094_);
if (v___x_2095_ == 0)
{
lean_object* v___x_2096_; lean_object* v___x_2097_; lean_object* v_a_2098_; lean_object* v___x_2100_; uint8_t v_isShared_2101_; uint8_t v_isSharedCheck_2105_; 
lean_dec(v_a_2050_);
lean_dec(v_snd_2039_);
lean_del_object(v___x_2031_);
v___x_2096_ = lean_obj_once(&l_Lean_Elab_Do_tryElabForwardApp_x3f___closed__1, &l_Lean_Elab_Do_tryElabForwardApp_x3f___closed__1_once, _init_l_Lean_Elab_Do_tryElabForwardApp_x3f___closed__1);
v___x_2097_ = l_Lean_throwError___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__0___redArg(v___x_2096_, v_a_2023_, v_a_2024_, v_a_2025_, v_a_2026_);
v_a_2098_ = lean_ctor_get(v___x_2097_, 0);
v_isSharedCheck_2105_ = !lean_is_exclusive(v___x_2097_);
if (v_isSharedCheck_2105_ == 0)
{
v___x_2100_ = v___x_2097_;
v_isShared_2101_ = v_isSharedCheck_2105_;
goto v_resetjp_2099_;
}
else
{
lean_inc(v_a_2098_);
lean_dec(v___x_2097_);
v___x_2100_ = lean_box(0);
v_isShared_2101_ = v_isSharedCheck_2105_;
goto v_resetjp_2099_;
}
v_resetjp_2099_:
{
lean_object* v___x_2103_; 
if (v_isShared_2101_ == 0)
{
v___x_2103_ = v___x_2100_;
goto v_reusejp_2102_;
}
else
{
lean_object* v_reuseFailAlloc_2104_; 
v_reuseFailAlloc_2104_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2104_, 0, v_a_2098_);
v___x_2103_ = v_reuseFailAlloc_2104_;
goto v_reusejp_2102_;
}
v_reusejp_2102_:
{
return v___x_2103_;
}
}
}
else
{
v___y_2052_ = v_a_2020_;
v___y_2053_ = v_a_2021_;
v___y_2054_ = v_a_2022_;
v___y_2055_ = v_a_2023_;
v___y_2056_ = v_a_2024_;
v___y_2057_ = v_a_2025_;
v___y_2058_ = v_a_2026_;
goto v___jp_2051_;
}
}
else
{
lean_object* v_a_2106_; lean_object* v___x_2108_; uint8_t v_isShared_2109_; uint8_t v_isSharedCheck_2113_; 
lean_dec(v_a_2050_);
lean_dec(v_snd_2039_);
lean_del_object(v___x_2031_);
v_a_2106_ = lean_ctor_get(v___x_2093_, 0);
v_isSharedCheck_2113_ = !lean_is_exclusive(v___x_2093_);
if (v_isSharedCheck_2113_ == 0)
{
v___x_2108_ = v___x_2093_;
v_isShared_2109_ = v_isSharedCheck_2113_;
goto v_resetjp_2107_;
}
else
{
lean_inc(v_a_2106_);
lean_dec(v___x_2093_);
v___x_2108_ = lean_box(0);
v_isShared_2109_ = v_isSharedCheck_2113_;
goto v_resetjp_2107_;
}
v_resetjp_2107_:
{
lean_object* v___x_2111_; 
if (v_isShared_2109_ == 0)
{
v___x_2111_ = v___x_2108_;
goto v_reusejp_2110_;
}
else
{
lean_object* v_reuseFailAlloc_2112_; 
v_reuseFailAlloc_2112_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2112_, 0, v_a_2106_);
v___x_2111_ = v_reuseFailAlloc_2112_;
goto v_reusejp_2110_;
}
v_reusejp_2110_:
{
return v___x_2111_;
}
}
}
}
else
{
lean_object* v_a_2114_; lean_object* v___x_2116_; uint8_t v_isShared_2117_; uint8_t v_isSharedCheck_2121_; 
lean_dec(v_a_2050_);
lean_dec(v_snd_2039_);
lean_dec(v_fst_2038_);
lean_del_object(v___x_2031_);
v_a_2114_ = lean_ctor_get(v___y_2090_, 0);
v_isSharedCheck_2121_ = !lean_is_exclusive(v___y_2090_);
if (v_isSharedCheck_2121_ == 0)
{
v___x_2116_ = v___y_2090_;
v_isShared_2117_ = v_isSharedCheck_2121_;
goto v_resetjp_2115_;
}
else
{
lean_inc(v_a_2114_);
lean_dec(v___y_2090_);
v___x_2116_ = lean_box(0);
v_isShared_2117_ = v_isSharedCheck_2121_;
goto v_resetjp_2115_;
}
v_resetjp_2115_:
{
lean_object* v___x_2119_; 
if (v_isShared_2117_ == 0)
{
v___x_2119_ = v___x_2116_;
goto v_reusejp_2118_;
}
else
{
lean_object* v_reuseFailAlloc_2120_; 
v_reuseFailAlloc_2120_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2120_, 0, v_a_2114_);
v___x_2119_ = v_reuseFailAlloc_2120_;
goto v_reusejp_2118_;
}
v_reusejp_2118_:
{
return v___x_2119_;
}
}
}
}
}
else
{
lean_object* v_a_2168_; lean_object* v___x_2170_; uint8_t v_isShared_2171_; uint8_t v_isSharedCheck_2175_; 
lean_dec_ref(v___f_2046_);
lean_del_object(v___x_2044_);
lean_dec_ref(v_binders_2041_);
lean_dec(v_snd_2039_);
lean_dec(v_fst_2038_);
lean_del_object(v___x_2031_);
v_a_2168_ = lean_ctor_get(v___x_2049_, 0);
v_isSharedCheck_2175_ = !lean_is_exclusive(v___x_2049_);
if (v_isSharedCheck_2175_ == 0)
{
v___x_2170_ = v___x_2049_;
v_isShared_2171_ = v_isSharedCheck_2175_;
goto v_resetjp_2169_;
}
else
{
lean_inc(v_a_2168_);
lean_dec(v___x_2049_);
v___x_2170_ = lean_box(0);
v_isShared_2171_ = v_isSharedCheck_2175_;
goto v_resetjp_2169_;
}
v_resetjp_2169_:
{
lean_object* v___x_2173_; 
if (v_isShared_2171_ == 0)
{
v___x_2173_ = v___x_2170_;
goto v_reusejp_2172_;
}
else
{
lean_object* v_reuseFailAlloc_2174_; 
v_reuseFailAlloc_2174_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2174_, 0, v_a_2168_);
v___x_2173_ = v_reuseFailAlloc_2174_;
goto v_reusejp_2172_;
}
v_reusejp_2172_:
{
return v___x_2173_;
}
}
}
}
else
{
lean_object* v_a_2176_; lean_object* v___x_2178_; uint8_t v_isShared_2179_; uint8_t v_isSharedCheck_2183_; 
lean_dec_ref(v___f_2046_);
lean_del_object(v___x_2044_);
lean_dec_ref(v_binders_2041_);
lean_dec(v_snd_2039_);
lean_dec(v_fst_2038_);
lean_del_object(v___x_2031_);
lean_dec_ref(v_dec_2019_);
v_a_2176_ = lean_ctor_get(v___x_2047_, 0);
v_isSharedCheck_2183_ = !lean_is_exclusive(v___x_2047_);
if (v_isSharedCheck_2183_ == 0)
{
v___x_2178_ = v___x_2047_;
v_isShared_2179_ = v_isSharedCheck_2183_;
goto v_resetjp_2177_;
}
else
{
lean_inc(v_a_2176_);
lean_dec(v___x_2047_);
v___x_2178_ = lean_box(0);
v_isShared_2179_ = v_isSharedCheck_2183_;
goto v_resetjp_2177_;
}
v_resetjp_2177_:
{
lean_object* v___x_2181_; 
if (v_isShared_2179_ == 0)
{
v___x_2181_ = v___x_2178_;
goto v_reusejp_2180_;
}
else
{
lean_object* v_reuseFailAlloc_2182_; 
v_reuseFailAlloc_2182_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2182_, 0, v_a_2176_);
v___x_2181_ = v_reuseFailAlloc_2182_;
goto v_reusejp_2180_;
}
v_reusejp_2180_:
{
return v___x_2181_;
}
}
}
}
}
else
{
lean_object* v_a_2185_; lean_object* v___x_2187_; uint8_t v_isShared_2188_; uint8_t v_isSharedCheck_2192_; 
lean_dec(v_snd_2039_);
lean_dec(v_fst_2038_);
lean_dec(v_snd_2034_);
lean_del_object(v___x_2031_);
lean_dec_ref(v_dec_2019_);
v_a_2185_ = lean_ctor_get(v___x_2040_, 0);
v_isSharedCheck_2192_ = !lean_is_exclusive(v___x_2040_);
if (v_isSharedCheck_2192_ == 0)
{
v___x_2187_ = v___x_2040_;
v_isShared_2188_ = v_isSharedCheck_2192_;
goto v_resetjp_2186_;
}
else
{
lean_inc(v_a_2185_);
lean_dec(v___x_2040_);
v___x_2187_ = lean_box(0);
v_isShared_2188_ = v_isSharedCheck_2192_;
goto v_resetjp_2186_;
}
v_resetjp_2186_:
{
lean_object* v___x_2190_; 
if (v_isShared_2188_ == 0)
{
v___x_2190_ = v___x_2187_;
goto v_reusejp_2189_;
}
else
{
lean_object* v_reuseFailAlloc_2191_; 
v_reuseFailAlloc_2191_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2191_, 0, v_a_2185_);
v___x_2190_ = v_reuseFailAlloc_2191_;
goto v_reusejp_2189_;
}
v_reusejp_2189_:
{
return v___x_2190_;
}
}
}
}
else
{
lean_object* v_a_2193_; lean_object* v___x_2195_; uint8_t v_isShared_2196_; uint8_t v_isSharedCheck_2200_; 
lean_dec(v_snd_2034_);
lean_dec(v_fst_2033_);
lean_del_object(v___x_2031_);
lean_dec_ref(v_dec_2019_);
v_a_2193_ = lean_ctor_get(v___x_2036_, 0);
v_isSharedCheck_2200_ = !lean_is_exclusive(v___x_2036_);
if (v_isSharedCheck_2200_ == 0)
{
v___x_2195_ = v___x_2036_;
v_isShared_2196_ = v_isSharedCheck_2200_;
goto v_resetjp_2194_;
}
else
{
lean_inc(v_a_2193_);
lean_dec(v___x_2036_);
v___x_2195_ = lean_box(0);
v_isShared_2196_ = v_isSharedCheck_2200_;
goto v_resetjp_2194_;
}
v_resetjp_2194_:
{
lean_object* v___x_2198_; 
if (v_isShared_2196_ == 0)
{
v___x_2198_ = v___x_2195_;
goto v_reusejp_2197_;
}
else
{
lean_object* v_reuseFailAlloc_2199_; 
v_reuseFailAlloc_2199_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2199_, 0, v_a_2193_);
v___x_2198_ = v_reuseFailAlloc_2199_;
goto v_reusejp_2197_;
}
v_reusejp_2197_:
{
return v___x_2198_;
}
}
}
}
}
else
{
lean_object* v___x_2202_; lean_object* v___x_2203_; 
lean_dec(v___x_2028_);
lean_dec_ref(v_dec_2019_);
v___x_2202_ = lean_box(0);
v___x_2203_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2203_, 0, v___x_2202_);
return v___x_2203_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_tryElabForwardApp_x3f___boxed(lean_object* v_e_2204_, lean_object* v_dec_2205_, lean_object* v_a_2206_, lean_object* v_a_2207_, lean_object* v_a_2208_, lean_object* v_a_2209_, lean_object* v_a_2210_, lean_object* v_a_2211_, lean_object* v_a_2212_, lean_object* v_a_2213_){
_start:
{
lean_object* v_res_2214_; 
v_res_2214_ = l_Lean_Elab_Do_tryElabForwardApp_x3f(v_e_2204_, v_dec_2205_, v_a_2206_, v_a_2207_, v_a_2208_, v_a_2209_, v_a_2210_, v_a_2211_, v_a_2212_);
lean_dec(v_a_2212_);
lean_dec_ref(v_a_2211_);
lean_dec(v_a_2210_);
lean_dec_ref(v_a_2209_);
lean_dec(v_a_2208_);
lean_dec_ref(v_a_2207_);
lean_dec_ref(v_a_2206_);
return v_res_2214_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__0(lean_object* v_00_u03b1_2215_, lean_object* v_msg_2216_, lean_object* v___y_2217_, lean_object* v___y_2218_, lean_object* v___y_2219_, lean_object* v___y_2220_, lean_object* v___y_2221_, lean_object* v___y_2222_, lean_object* v___y_2223_){
_start:
{
lean_object* v___x_2225_; 
v___x_2225_ = l_Lean_throwError___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__0___redArg(v_msg_2216_, v___y_2220_, v___y_2221_, v___y_2222_, v___y_2223_);
return v___x_2225_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__0___boxed(lean_object* v_00_u03b1_2226_, lean_object* v_msg_2227_, lean_object* v___y_2228_, lean_object* v___y_2229_, lean_object* v___y_2230_, lean_object* v___y_2231_, lean_object* v___y_2232_, lean_object* v___y_2233_, lean_object* v___y_2234_, lean_object* v___y_2235_){
_start:
{
lean_object* v_res_2236_; 
v_res_2236_ = l_Lean_throwError___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__0(v_00_u03b1_2226_, v_msg_2227_, v___y_2228_, v___y_2229_, v___y_2230_, v___y_2231_, v___y_2232_, v___y_2233_, v___y_2234_);
lean_dec(v___y_2234_);
lean_dec_ref(v___y_2233_);
lean_dec(v___y_2232_);
lean_dec_ref(v___y_2231_);
lean_dec(v___y_2230_);
lean_dec_ref(v___y_2229_);
lean_dec_ref(v___y_2228_);
return v_res_2236_;
}
}
LEAN_EXPORT lean_object* l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__4(lean_object* v_00_u03b1_2237_, lean_object* v_x_2238_, lean_object* v___y_2239_, lean_object* v___y_2240_){
_start:
{
lean_object* v___x_2241_; 
v___x_2241_ = l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__4___redArg(v_x_2238_, v___y_2240_);
return v___x_2241_;
}
}
LEAN_EXPORT lean_object* l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__4___boxed(lean_object* v_00_u03b1_2242_, lean_object* v_x_2243_, lean_object* v___y_2244_, lean_object* v___y_2245_){
_start:
{
lean_object* v_res_2246_; 
v_res_2246_ = l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__4(v_00_u03b1_2242_, v_x_2243_, v___y_2244_, v___y_2245_);
lean_dec_ref(v___y_2244_);
lean_dec_ref(v_x_2243_);
return v_res_2246_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__9(lean_object* v_00_u03b1_2247_, lean_object* v_ref_2248_, lean_object* v___y_2249_, lean_object* v___y_2250_, lean_object* v___y_2251_, lean_object* v___y_2252_, lean_object* v___y_2253_, lean_object* v___y_2254_){
_start:
{
lean_object* v___x_2256_; 
v___x_2256_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__9___redArg(v_ref_2248_);
return v___x_2256_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__9___boxed(lean_object* v_00_u03b1_2257_, lean_object* v_ref_2258_, lean_object* v___y_2259_, lean_object* v___y_2260_, lean_object* v___y_2261_, lean_object* v___y_2262_, lean_object* v___y_2263_, lean_object* v___y_2264_, lean_object* v___y_2265_){
_start:
{
lean_object* v_res_2266_; 
v_res_2266_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__9(v_00_u03b1_2257_, v_ref_2258_, v___y_2259_, v___y_2260_, v___y_2261_, v___y_2262_, v___y_2263_, v___y_2264_);
lean_dec(v___y_2264_);
lean_dec_ref(v___y_2263_);
lean_dec(v___y_2262_);
lean_dec_ref(v___y_2261_);
lean_dec(v___y_2260_);
lean_dec_ref(v___y_2259_);
return v_res_2266_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__10(lean_object* v_00_u03b1_2267_, lean_object* v___y_2268_, lean_object* v___y_2269_, lean_object* v___y_2270_, lean_object* v___y_2271_, lean_object* v___y_2272_, lean_object* v___y_2273_){
_start:
{
lean_object* v___x_2275_; 
v___x_2275_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__10___redArg();
return v___x_2275_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__10___boxed(lean_object* v_00_u03b1_2276_, lean_object* v___y_2277_, lean_object* v___y_2278_, lean_object* v___y_2279_, lean_object* v___y_2280_, lean_object* v___y_2281_, lean_object* v___y_2282_, lean_object* v___y_2283_){
_start:
{
lean_object* v_res_2284_; 
v_res_2284_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__10(v_00_u03b1_2276_, v___y_2277_, v___y_2278_, v___y_2279_, v___y_2280_, v___y_2281_, v___y_2282_);
lean_dec(v___y_2282_);
lean_dec_ref(v___y_2281_);
lean_dec(v___y_2280_);
lean_dec_ref(v___y_2279_);
lean_dec(v___y_2278_);
lean_dec_ref(v___y_2277_);
return v_res_2284_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3(lean_object* v_00_u03b1_2285_, lean_object* v_x_2286_, lean_object* v___y_2287_, lean_object* v___y_2288_, lean_object* v___y_2289_, lean_object* v___y_2290_, lean_object* v___y_2291_, lean_object* v___y_2292_){
_start:
{
lean_object* v___x_2294_; 
v___x_2294_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3___redArg(v_x_2286_, v___y_2287_, v___y_2288_, v___y_2289_, v___y_2290_, v___y_2291_, v___y_2292_);
return v___x_2294_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3___boxed(lean_object* v_00_u03b1_2295_, lean_object* v_x_2296_, lean_object* v___y_2297_, lean_object* v___y_2298_, lean_object* v___y_2299_, lean_object* v___y_2300_, lean_object* v___y_2301_, lean_object* v___y_2302_, lean_object* v___y_2303_){
_start:
{
lean_object* v_res_2304_; 
v_res_2304_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3(v_00_u03b1_2295_, v_x_2296_, v___y_2297_, v___y_2298_, v___y_2299_, v___y_2300_, v___y_2301_, v___y_2302_);
lean_dec(v___y_2302_);
lean_dec_ref(v___y_2301_);
lean_dec(v___y_2300_);
lean_dec_ref(v___y_2299_);
lean_dec(v___y_2298_);
lean_dec_ref(v___y_2297_);
return v_res_2304_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__3(lean_object* v_cls_2305_, lean_object* v_msg_2306_, lean_object* v___y_2307_, lean_object* v___y_2308_, lean_object* v___y_2309_, lean_object* v___y_2310_, lean_object* v___y_2311_, lean_object* v___y_2312_){
_start:
{
lean_object* v___x_2314_; 
v___x_2314_ = l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__3___redArg(v_cls_2305_, v_msg_2306_, v___y_2309_, v___y_2310_, v___y_2311_, v___y_2312_);
return v___x_2314_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__3___boxed(lean_object* v_cls_2315_, lean_object* v_msg_2316_, lean_object* v___y_2317_, lean_object* v___y_2318_, lean_object* v___y_2319_, lean_object* v___y_2320_, lean_object* v___y_2321_, lean_object* v___y_2322_, lean_object* v___y_2323_){
_start:
{
lean_object* v_res_2324_; 
v_res_2324_ = l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__3(v_cls_2315_, v_msg_2316_, v___y_2317_, v___y_2318_, v___y_2319_, v___y_2320_, v___y_2321_, v___y_2322_);
lean_dec(v___y_2322_);
lean_dec_ref(v___y_2321_);
lean_dec(v___y_2320_);
lean_dec_ref(v___y_2319_);
lean_dec(v___y_2318_);
lean_dec_ref(v___y_2317_);
return v_res_2324_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__6(lean_object* v_as_2325_, lean_object* v_as_x27_2326_, lean_object* v_b_2327_, lean_object* v_a_2328_, lean_object* v___y_2329_, lean_object* v___y_2330_, lean_object* v___y_2331_, lean_object* v___y_2332_, lean_object* v___y_2333_, lean_object* v___y_2334_){
_start:
{
lean_object* v___x_2336_; 
v___x_2336_ = l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__6___redArg(v_as_x27_2326_, v_b_2327_, v___y_2329_, v___y_2330_, v___y_2331_, v___y_2332_, v___y_2333_, v___y_2334_);
return v___x_2336_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__6___boxed(lean_object* v_as_2337_, lean_object* v_as_x27_2338_, lean_object* v_b_2339_, lean_object* v_a_2340_, lean_object* v___y_2341_, lean_object* v___y_2342_, lean_object* v___y_2343_, lean_object* v___y_2344_, lean_object* v___y_2345_, lean_object* v___y_2346_, lean_object* v___y_2347_){
_start:
{
lean_object* v_res_2348_; 
v_res_2348_ = l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__6(v_as_2337_, v_as_x27_2338_, v_b_2339_, v_a_2340_, v___y_2341_, v___y_2342_, v___y_2343_, v___y_2344_, v___y_2345_, v___y_2346_);
lean_dec(v___y_2346_);
lean_dec_ref(v___y_2345_);
lean_dec(v___y_2344_);
lean_dec_ref(v___y_2343_);
lean_dec(v___y_2342_);
lean_dec_ref(v___y_2341_);
lean_dec(v_as_x27_2338_);
lean_dec(v_as_2337_);
return v_res_2348_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__8(lean_object* v_00_u03b1_2349_, lean_object* v_ref_2350_, lean_object* v_msg_2351_, lean_object* v___y_2352_, lean_object* v___y_2353_, lean_object* v___y_2354_, lean_object* v___y_2355_, lean_object* v___y_2356_, lean_object* v___y_2357_){
_start:
{
lean_object* v___x_2359_; 
v___x_2359_ = l_Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__8___redArg(v_ref_2350_, v_msg_2351_, v___y_2352_, v___y_2353_, v___y_2354_, v___y_2355_, v___y_2356_, v___y_2357_);
return v___x_2359_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__8___boxed(lean_object* v_00_u03b1_2360_, lean_object* v_ref_2361_, lean_object* v_msg_2362_, lean_object* v___y_2363_, lean_object* v___y_2364_, lean_object* v___y_2365_, lean_object* v___y_2366_, lean_object* v___y_2367_, lean_object* v___y_2368_, lean_object* v___y_2369_){
_start:
{
lean_object* v_res_2370_; 
v_res_2370_ = l_Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__8(v_00_u03b1_2360_, v_ref_2361_, v_msg_2362_, v___y_2363_, v___y_2364_, v___y_2365_, v___y_2366_, v___y_2367_, v___y_2368_);
lean_dec(v___y_2368_);
lean_dec_ref(v___y_2367_);
lean_dec(v___y_2366_);
lean_dec_ref(v___y_2365_);
lean_dec(v___y_2364_);
lean_dec_ref(v___y_2363_);
lean_dec(v_ref_2361_);
return v_res_2370_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__5_spec__8(lean_object* v_00_u03b2_2371_, lean_object* v_m_2372_, lean_object* v_a_2373_){
_start:
{
lean_object* v___x_2374_; 
v___x_2374_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__5_spec__8___redArg(v_m_2372_, v_a_2373_);
return v___x_2374_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__5_spec__8___boxed(lean_object* v_00_u03b2_2375_, lean_object* v_m_2376_, lean_object* v_a_2377_){
_start:
{
lean_object* v_res_2378_; 
v_res_2378_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__5_spec__8(v_00_u03b2_2375_, v_m_2376_, v_a_2377_);
lean_dec(v_a_2377_);
lean_dec_ref(v_m_2376_);
return v_res_2378_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__5_spec__6_spec__9(lean_object* v_00_u03b2_2379_, lean_object* v_x_2380_, lean_object* v_x_2381_){
_start:
{
uint8_t v___x_2382_; 
v___x_2382_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__5_spec__6_spec__9___redArg(v_x_2380_, v_x_2381_);
return v___x_2382_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__5_spec__6_spec__9___boxed(lean_object* v_00_u03b2_2383_, lean_object* v_x_2384_, lean_object* v_x_2385_){
_start:
{
uint8_t v_res_2386_; lean_object* v_r_2387_; 
v_res_2386_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__5_spec__6_spec__9(v_00_u03b2_2383_, v_x_2384_, v_x_2385_);
lean_dec_ref(v_x_2385_);
lean_dec_ref(v_x_2384_);
v_r_2387_ = lean_box(v_res_2386_);
return v_r_2387_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__5_spec__8_spec__12(lean_object* v_00_u03b2_2388_, lean_object* v_a_2389_, lean_object* v_x_2390_){
_start:
{
lean_object* v___x_2391_; 
v___x_2391_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__5_spec__8_spec__12___redArg(v_a_2389_, v_x_2390_);
return v___x_2391_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__5_spec__8_spec__12___boxed(lean_object* v_00_u03b2_2392_, lean_object* v_a_2393_, lean_object* v_x_2394_){
_start:
{
lean_object* v_res_2395_; 
v_res_2395_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__5_spec__8_spec__12(v_00_u03b2_2392_, v_a_2393_, v_x_2394_);
lean_dec(v_x_2394_);
lean_dec(v_a_2393_);
return v_res_2395_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__5_spec__6_spec__9_spec__13(lean_object* v_00_u03b2_2396_, lean_object* v_x_2397_, size_t v_x_2398_, lean_object* v_x_2399_){
_start:
{
uint8_t v___x_2400_; 
v___x_2400_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__5_spec__6_spec__9_spec__13___redArg(v_x_2397_, v_x_2398_, v_x_2399_);
return v___x_2400_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__5_spec__6_spec__9_spec__13___boxed(lean_object* v_00_u03b2_2401_, lean_object* v_x_2402_, lean_object* v_x_2403_, lean_object* v_x_2404_){
_start:
{
size_t v_x_29990__boxed_2405_; uint8_t v_res_2406_; lean_object* v_r_2407_; 
v_x_29990__boxed_2405_ = lean_unbox_usize(v_x_2403_);
lean_dec(v_x_2403_);
v_res_2406_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__5_spec__6_spec__9_spec__13(v_00_u03b2_2401_, v_x_2402_, v_x_29990__boxed_2405_, v_x_2404_);
lean_dec_ref(v_x_2404_);
lean_dec_ref(v_x_2402_);
v_r_2407_ = lean_box(v_res_2406_);
return v_r_2407_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__5_spec__6_spec__9_spec__13_spec__16(lean_object* v_00_u03b2_2408_, lean_object* v_keys_2409_, lean_object* v_vals_2410_, lean_object* v_heq_2411_, lean_object* v_i_2412_, lean_object* v_k_2413_){
_start:
{
uint8_t v___x_2414_; 
v___x_2414_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__5_spec__6_spec__9_spec__13_spec__16___redArg(v_keys_2409_, v_i_2412_, v_k_2413_);
return v___x_2414_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__5_spec__6_spec__9_spec__13_spec__16___boxed(lean_object* v_00_u03b2_2415_, lean_object* v_keys_2416_, lean_object* v_vals_2417_, lean_object* v_heq_2418_, lean_object* v_i_2419_, lean_object* v_k_2420_){
_start:
{
uint8_t v_res_2421_; lean_object* v_r_2422_; 
v_res_2421_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_tryElabForwardApp_x3f_spec__3_spec__5_spec__6_spec__9_spec__13_spec__16(v_00_u03b2_2415_, v_keys_2416_, v_vals_2417_, v_heq_2418_, v_i_2419_, v_k_2420_);
lean_dec_ref(v_k_2420_);
lean_dec_ref(v_vals_2417_);
lean_dec_ref(v_keys_2416_);
v_r_2422_ = lean_box(v_res_2421_);
return v_r_2422_;
}
}
lean_object* runtime_initialize_Lean_Elab_Do_Basic(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Do_Control(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Do_InferControlInfo(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Binders(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_BuiltinDo_Forward(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Elab_Do_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Do_Control(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Do_InferControlInfo(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Binders(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_BuiltinDo_Forward_0__Lean_Elab_Do_elabDoForward___regBuiltin_Lean_Elab_Do_elabDoForward__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* runtime_initialize_Lean_Parser_Do(uint8_t builtin);
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_BuiltinDo_Forward(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
res = runtime_initialize_Lean_Parser_Do(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Elab_Do_Basic(uint8_t builtin);
lean_object* initialize_Lean_Parser_Do(uint8_t builtin);
lean_object* initialize_Lean_Elab_Do_Control(uint8_t builtin);
lean_object* initialize_Lean_Elab_Do_InferControlInfo(uint8_t builtin);
lean_object* initialize_Lean_Elab_Binders(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_BuiltinDo_Forward(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Elab_Do_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Parser_Do(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Do_Control(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Do_InferControlInfo(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Binders(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_BuiltinDo_Forward(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_BuiltinDo_Forward(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_BuiltinDo_Forward(builtin);
}
#ifdef __cplusplus
}
#endif

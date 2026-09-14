// Lean compiler output
// Module: Lean.Elab.PreDefinition.WF.Main
// Imports: public import Lean.Elab.PreDefinition.WF.PackMutual public import Lean.Elab.PreDefinition.WF.FloatRecApp public import Lean.Elab.PreDefinition.WF.Rel public import Lean.Elab.PreDefinition.WF.Fix public import Lean.Elab.PreDefinition.WF.Unfold public import Lean.Elab.PreDefinition.WF.Preprocess public import Lean.Elab.PreDefinition.WF.GuessLex
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
lean_object* lean_st_ref_get(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
double lean_float_of_nat(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_usize_to_nat(size_t);
lean_object* l_Lean_Elab_WF_varyingVarNames(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Lean_Elab_WF_floatRecApp(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_WF_guessLex(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* l_Lean_Elab_addAsAxiom___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_getFixedParamPerms(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* l_Array_toSubarray___redArg(lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
lean_object* l_Lean_Elab_getBetterRef(lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_pp_macroStack;
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_MessageData_ofSyntax(lean_object*);
lean_object* l_Lean_indentD(lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_unfoldIfArgIsAppOf(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_WF_packMutual(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_unfoldDeclsFrom(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_copyExtraModUses(lean_object*, lean_object*);
lean_object* l_Lean_Elab_WF_mkFix(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_eraseRecAppSyntaxExpr(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_WF_isNatLtWF(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(lean_object*, uint8_t);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Lean_MessageLog_add(lean_object*, lean_object*);
lean_object* l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(lean_object*);
lean_object* l_Lean_FileMap_toPosition(lean_object*, lean_object*);
uint8_t l_Lean_MessageData_hasTag(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getTailPos_x3f(lean_object*, uint8_t);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getPos_x3f(lean_object*, uint8_t);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
uint8_t l_Lean_instBEqMessageSeverity_beq(uint8_t, uint8_t);
extern lean_object* l_Lean_warningAsError;
uint8_t l_Lean_MessageData_hasSyntheticSorry(lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
uint8_t l_Lean_Elab_DefKind_isTheorem(uint8_t);
lean_object* l_Lean_Meta_isProp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_WF_mkBinaryUnfoldEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_WF_preprocess(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAux(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_instInhabitedPreDefinition_default;
lean_object* l_Lean_enableRealizationsForConst(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Mutual_addPreDefAttributes(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Environment_unlockAsync(lean_object*);
lean_object* l_Lean_Elab_WF_preDefsFromUnaryNonRec(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Mutual_addPreDefsFromUnary(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_addAndCompilePartialRec(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Mutual_cleanPreDef(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_WF_registerEqnsInfo(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_markAsRecursive___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Elab_WF_mkUnfoldEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_whnfForall(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_bindingDomain_x21(lean_object*);
lean_object* l_Lean_Elab_WF_elabWFRel___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isForall(lean_object*);
lean_object* l_Lean_Environment_header(lean_object*);
lean_object* l_Lean_Environment_setExporting(lean_object*, uint8_t);
lean_object* l_Lean_registerTraceClass(lean_object*, uint8_t, lean_object*);
static lean_once_cell_t l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9___redArg___closed__0;
static lean_once_cell_t l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9___redArg___closed__1;
static lean_once_cell_t l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9___redArg___closed__2;
static lean_once_cell_t l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9___redArg___closed__3;
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_wfRecursion_spec__15___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_wfRecursion_spec__15___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_wfRecursion_spec__15___redArg(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_wfRecursion_spec__15___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_wfRecursion_spec__15(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_wfRecursion_spec__15___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__3___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__6(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__6___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__7___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__7(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1_spec__5___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1_spec__5___closed__0;
static const lean_string_object l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1_spec__5___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "while expanding"};
static const lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1_spec__5___closed__1 = (const lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1_spec__5___closed__1_value;
static const lean_ctor_object l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1_spec__5___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1_spec__5___closed__1_value)}};
static const lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1_spec__5___closed__2 = (const lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1_spec__5___closed__2_value;
static lean_once_cell_t l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1_spec__5___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1_spec__5___closed__3;
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1_spec__5(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1_spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1_spec__4___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "with resulting expansion"};
static const lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1___redArg___closed__0_value;
static const lean_ctor_object l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1___redArg___closed__0_value)}};
static const lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1___redArg___closed__1 = (const lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1___redArg___closed__1_value;
static lean_once_cell_t l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__5___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 41, .m_capacity = 41, .m_length = 40, .m_data = "well-founded recursion cannot be used, `"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__5___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__5___closed__0_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__5___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__5___closed__1;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__5___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 42, .m_capacity = 42, .m_length = 41, .m_data = "` does not take any (non-fixed) arguments"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__5___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__5___closed__2_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__5___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__5___closed__3;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__5(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__4___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__4(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_wfRecursion___lam__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_wfRecursion___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_wfRecursion___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_wfRecursion___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_wfRecursion___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_Elab_wfRecursion___lam__2___closed__0 = (const lean_object*)&l_Lean_Elab_wfRecursion___lam__2___closed__0_value;
static const lean_ctor_object l_Lean_Elab_wfRecursion___lam__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_wfRecursion___lam__2___closed__0_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l_Lean_Elab_wfRecursion___lam__2___closed__1 = (const lean_object*)&l_Lean_Elab_wfRecursion___lam__2___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_wfRecursion___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_wfRecursion___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg___lam__0___closed__0 = (const lean_object*)&l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg___lam__0___closed__0_value;
static const lean_string_object l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg___lam__0___closed__1 = (const lean_object*)&l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg___lam__0___closed__1_value;
static const lean_string_object l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "unsolvedGoals"};
static const lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg___lam__0___closed__2 = (const lean_object*)&l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg___lam__0___closed__2_value;
static const lean_string_object l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "synthPlaceholder"};
static const lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg___lam__0___closed__3 = (const lean_object*)&l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg___lam__0___closed__3_value;
static const lean_string_object l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "lean"};
static const lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg___lam__0___closed__4 = (const lean_object*)&l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg___lam__0___closed__4_value;
static const lean_string_object l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "inductionWithNoAlts"};
static const lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg___lam__0___closed__5 = (const lean_object*)&l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg___lam__0___closed__5_value;
static const lean_string_object l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "_namedError"};
static const lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg___lam__0___closed__6 = (const lean_object*)&l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg___lam__0___closed__6_value;
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg___lam__0(uint8_t, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg___closed__0 = (const lean_object*)&l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_wfRecursion_spec__12___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 57, .m_capacity = 57, .m_length = 56, .m_data = "marking functions defined by well-founded recursion as `"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_wfRecursion_spec__12___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_wfRecursion_spec__12___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_wfRecursion_spec__12___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "` is not effective"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_wfRecursion_spec__12___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_wfRecursion_spec__12___closed__1_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_wfRecursion_spec__12___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "reducible"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_wfRecursion_spec__12___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_wfRecursion_spec__12___closed__2_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_wfRecursion_spec__12___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_wfRecursion_spec__12___closed__2_value),LEAN_SCALAR_PTR_LITERAL(29, 67, 225, 118, 155, 2, 197, 97)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_wfRecursion_spec__12___closed__3 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_wfRecursion_spec__12___closed__3_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_wfRecursion_spec__12___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "semireducible"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_wfRecursion_spec__12___closed__4 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_wfRecursion_spec__12___closed__4_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_wfRecursion_spec__12___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_wfRecursion_spec__12___closed__4_value),LEAN_SCALAR_PTR_LITERAL(106, 254, 211, 230, 8, 182, 79, 36)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_wfRecursion_spec__12___closed__5 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_wfRecursion_spec__12___closed__5_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_wfRecursion_spec__12(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_wfRecursion_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_wfRecursion_spec__13(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_wfRecursion_spec__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__10(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__10___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00Lean_Elab_wfRecursion_spec__14___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00Lean_Elab_wfRecursion_spec__14___redArg___closed__0;
static const lean_array_object l_Lean_addTrace___at___00Lean_Elab_wfRecursion_spec__14___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00Lean_Elab_wfRecursion_spec__14___redArg___closed__1 = (const lean_object*)&l_Lean_addTrace___at___00Lean_Elab_wfRecursion_spec__14___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_wfRecursion_spec__14___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_wfRecursion_spec__14___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_wfRecursion___lam__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "wfRel: "};
static const lean_object* l_Lean_Elab_wfRecursion___lam__3___closed__0 = (const lean_object*)&l_Lean_Elab_wfRecursion___lam__3___closed__0_value;
static lean_once_cell_t l_Lean_Elab_wfRecursion___lam__3___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_wfRecursion___lam__3___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_wfRecursion___lam__3(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_wfRecursion___lam__3___boxed(lean_object**);
static const lean_string_object l_Lean_Elab_wfRecursion___lam__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 44, .m_capacity = 44, .m_length = 43, .m_data = "wfRecursion: expected unary function type: "};
static const lean_object* l_Lean_Elab_wfRecursion___lam__4___closed__0 = (const lean_object*)&l_Lean_Elab_wfRecursion___lam__4___closed__0_value;
static lean_once_cell_t l_Lean_Elab_wfRecursion___lam__4___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_wfRecursion___lam__4___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_wfRecursion___lam__4(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_wfRecursion___lam__4___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Elab_wfRecursion___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_wfRecursion___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00Lean_Elab_wfRecursion_spec__8___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00Lean_Elab_wfRecursion_spec__8___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_wfRecursion_spec__18_spec__21___redArg___lam__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_wfRecursion_spec__18_spec__21___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_wfRecursion_spec__18_spec__21___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_wfRecursion_spec__18_spec__21___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Elab_wfRecursion_spec__18___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Elab_wfRecursion_spec__18___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__16___redArg(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__16___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__16(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__16___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__1(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__17___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__17___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__2___redArg(size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__2(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_wfRecursion___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "definition"};
static const lean_object* l_Lean_Elab_wfRecursion___closed__0 = (const lean_object*)&l_Lean_Elab_wfRecursion___closed__0_value;
static const lean_string_object l_Lean_Elab_wfRecursion___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "wf"};
static const lean_object* l_Lean_Elab_wfRecursion___closed__1 = (const lean_object*)&l_Lean_Elab_wfRecursion___closed__1_value;
static const lean_ctor_object l_Lean_Elab_wfRecursion___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(13, 84, 199, 228, 250, 36, 60, 178)}};
static const lean_ctor_object l_Lean_Elab_wfRecursion___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_wfRecursion___closed__2_value_aux_0),((lean_object*)&l_Lean_Elab_wfRecursion___closed__0_value),LEAN_SCALAR_PTR_LITERAL(127, 238, 145, 63, 173, 125, 183, 95)}};
static const lean_ctor_object l_Lean_Elab_wfRecursion___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_wfRecursion___closed__2_value_aux_1),((lean_object*)&l_Lean_Elab_wfRecursion___closed__1_value),LEAN_SCALAR_PTR_LITERAL(235, 76, 232, 241, 91, 21, 77, 227)}};
static const lean_object* l_Lean_Elab_wfRecursion___closed__2 = (const lean_object*)&l_Lean_Elab_wfRecursion___closed__2_value;
static const lean_string_object l_Lean_Elab_wfRecursion___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = ">> "};
static const lean_object* l_Lean_Elab_wfRecursion___closed__3 = (const lean_object*)&l_Lean_Elab_wfRecursion___closed__3_value;
static lean_once_cell_t l_Lean_Elab_wfRecursion___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_wfRecursion___closed__4;
static const lean_string_object l_Lean_Elab_wfRecursion___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " :=\n"};
static const lean_object* l_Lean_Elab_wfRecursion___closed__5 = (const lean_object*)&l_Lean_Elab_wfRecursion___closed__5_value;
static lean_once_cell_t l_Lean_Elab_wfRecursion___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_wfRecursion___closed__6;
static const lean_string_object l_Lean_Elab_wfRecursion___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "unaryPreDefProcessed:"};
static const lean_object* l_Lean_Elab_wfRecursion___closed__7 = (const lean_object*)&l_Lean_Elab_wfRecursion___closed__7_value;
static lean_once_cell_t l_Lean_Elab_wfRecursion___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_wfRecursion___closed__8;
static const lean_string_object l_Lean_Elab_wfRecursion___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "unaryPreDef:"};
static const lean_object* l_Lean_Elab_wfRecursion___closed__9 = (const lean_object*)&l_Lean_Elab_wfRecursion___closed__9_value;
static lean_once_cell_t l_Lean_Elab_wfRecursion___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_wfRecursion___closed__10;
static const lean_ctor_object l_Lean_Elab_wfRecursion___boxed__const__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + sizeof(size_t)*1, .m_other = 0, .m_tag = 0}, .m_objs = {(lean_object*)(size_t)(0ULL)}};
LEAN_EXPORT const lean_object* l_Lean_Elab_wfRecursion___boxed__const__1 = (const lean_object*)&l_Lean_Elab_wfRecursion___boxed__const__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_wfRecursion(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_wfRecursion___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__3(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00Lean_Elab_wfRecursion_spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00Lean_Elab_wfRecursion_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_wfRecursion_spec__14(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_wfRecursion_spec__14___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__17(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__17___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_wfRecursion_spec__18_spec__21(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_wfRecursion_spec__18_spec__21___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Elab_wfRecursion_spec__18(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Elab_wfRecursion_spec__18___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__0_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__0_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__1_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__1_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__1_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__2_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__2_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__3_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__3_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__3_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__4_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__4_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__5_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__5_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__6_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "PreDefinition"};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__6_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__6_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__7_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__7_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__8_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "WF"};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__8_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__8_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__9_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__9_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__10_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Main"};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__10_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__10_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__11_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__11_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__12_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__12_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__13_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__13_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__14_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__14_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__15_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "initFn"};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__15_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__15_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__16_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__16_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__17_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "_@"};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__17_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__17_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__18_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__18_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__19_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__19_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__20_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__20_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__21_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__21_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__22_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__22_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__23_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__23_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__24_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__24_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__25_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "_hygCtx"};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__25_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__25_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__26_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__26_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__27_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "_hyg"};
static const lean_object* l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__27_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__27_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__28_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__28_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__29_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__29_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2____boxed(lean_object*);
static lean_object* _init_l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9___redArg___closed__0(void){
_start:
{
lean_object* v___x_1_; 
v___x_1_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_1_;
}
}
static lean_object* _init_l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9___redArg___closed__1(void){
_start:
{
lean_object* v___x_2_; lean_object* v___x_3_; 
v___x_2_ = lean_obj_once(&l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9___redArg___closed__0, &l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9___redArg___closed__0_once, _init_l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9___redArg___closed__0);
v___x_3_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3_, 0, v___x_2_);
return v___x_3_;
}
}
static lean_object* _init_l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9___redArg___closed__2(void){
_start:
{
lean_object* v___x_4_; lean_object* v___x_5_; 
v___x_4_ = lean_obj_once(&l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9___redArg___closed__1, &l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9___redArg___closed__1_once, _init_l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9___redArg___closed__1);
v___x_5_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5_, 0, v___x_4_);
lean_ctor_set(v___x_5_, 1, v___x_4_);
return v___x_5_;
}
}
static lean_object* _init_l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9___redArg___closed__3(void){
_start:
{
lean_object* v___x_6_; lean_object* v___x_7_; 
v___x_6_ = lean_obj_once(&l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9___redArg___closed__1, &l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9___redArg___closed__1_once, _init_l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9___redArg___closed__1);
v___x_7_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_7_, 0, v___x_6_);
lean_ctor_set(v___x_7_, 1, v___x_6_);
lean_ctor_set(v___x_7_, 2, v___x_6_);
lean_ctor_set(v___x_7_, 3, v___x_6_);
lean_ctor_set(v___x_7_, 4, v___x_6_);
lean_ctor_set(v___x_7_, 5, v___x_6_);
return v___x_7_;
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9___redArg(lean_object* v_env_8_, lean_object* v___y_9_, lean_object* v___y_10_){
_start:
{
lean_object* v___x_12_; lean_object* v_nextMacroScope_13_; lean_object* v_ngen_14_; lean_object* v_auxDeclNGen_15_; lean_object* v_traceState_16_; lean_object* v_messages_17_; lean_object* v_infoState_18_; lean_object* v_snapshotTasks_19_; lean_object* v___x_21_; uint8_t v_isShared_22_; uint8_t v_isSharedCheck_45_; 
v___x_12_ = lean_st_ref_take(v___y_10_);
v_nextMacroScope_13_ = lean_ctor_get(v___x_12_, 1);
v_ngen_14_ = lean_ctor_get(v___x_12_, 2);
v_auxDeclNGen_15_ = lean_ctor_get(v___x_12_, 3);
v_traceState_16_ = lean_ctor_get(v___x_12_, 4);
v_messages_17_ = lean_ctor_get(v___x_12_, 6);
v_infoState_18_ = lean_ctor_get(v___x_12_, 7);
v_snapshotTasks_19_ = lean_ctor_get(v___x_12_, 8);
v_isSharedCheck_45_ = !lean_is_exclusive(v___x_12_);
if (v_isSharedCheck_45_ == 0)
{
lean_object* v_unused_46_; lean_object* v_unused_47_; 
v_unused_46_ = lean_ctor_get(v___x_12_, 5);
lean_dec(v_unused_46_);
v_unused_47_ = lean_ctor_get(v___x_12_, 0);
lean_dec(v_unused_47_);
v___x_21_ = v___x_12_;
v_isShared_22_ = v_isSharedCheck_45_;
goto v_resetjp_20_;
}
else
{
lean_inc(v_snapshotTasks_19_);
lean_inc(v_infoState_18_);
lean_inc(v_messages_17_);
lean_inc(v_traceState_16_);
lean_inc(v_auxDeclNGen_15_);
lean_inc(v_ngen_14_);
lean_inc(v_nextMacroScope_13_);
lean_dec(v___x_12_);
v___x_21_ = lean_box(0);
v_isShared_22_ = v_isSharedCheck_45_;
goto v_resetjp_20_;
}
v_resetjp_20_:
{
lean_object* v___x_23_; lean_object* v___x_25_; 
v___x_23_ = lean_obj_once(&l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9___redArg___closed__2, &l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9___redArg___closed__2_once, _init_l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9___redArg___closed__2);
if (v_isShared_22_ == 0)
{
lean_ctor_set(v___x_21_, 5, v___x_23_);
lean_ctor_set(v___x_21_, 0, v_env_8_);
v___x_25_ = v___x_21_;
goto v_reusejp_24_;
}
else
{
lean_object* v_reuseFailAlloc_44_; 
v_reuseFailAlloc_44_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_44_, 0, v_env_8_);
lean_ctor_set(v_reuseFailAlloc_44_, 1, v_nextMacroScope_13_);
lean_ctor_set(v_reuseFailAlloc_44_, 2, v_ngen_14_);
lean_ctor_set(v_reuseFailAlloc_44_, 3, v_auxDeclNGen_15_);
lean_ctor_set(v_reuseFailAlloc_44_, 4, v_traceState_16_);
lean_ctor_set(v_reuseFailAlloc_44_, 5, v___x_23_);
lean_ctor_set(v_reuseFailAlloc_44_, 6, v_messages_17_);
lean_ctor_set(v_reuseFailAlloc_44_, 7, v_infoState_18_);
lean_ctor_set(v_reuseFailAlloc_44_, 8, v_snapshotTasks_19_);
v___x_25_ = v_reuseFailAlloc_44_;
goto v_reusejp_24_;
}
v_reusejp_24_:
{
lean_object* v___x_26_; lean_object* v___x_27_; lean_object* v_mctx_28_; lean_object* v_zetaDeltaFVarIds_29_; lean_object* v_postponed_30_; lean_object* v_diag_31_; lean_object* v___x_33_; uint8_t v_isShared_34_; uint8_t v_isSharedCheck_42_; 
v___x_26_ = lean_st_ref_put(v___y_10_, v___x_25_);
v___x_27_ = lean_st_ref_take(v___y_9_);
v_mctx_28_ = lean_ctor_get(v___x_27_, 0);
v_zetaDeltaFVarIds_29_ = lean_ctor_get(v___x_27_, 2);
v_postponed_30_ = lean_ctor_get(v___x_27_, 3);
v_diag_31_ = lean_ctor_get(v___x_27_, 4);
v_isSharedCheck_42_ = !lean_is_exclusive(v___x_27_);
if (v_isSharedCheck_42_ == 0)
{
lean_object* v_unused_43_; 
v_unused_43_ = lean_ctor_get(v___x_27_, 1);
lean_dec(v_unused_43_);
v___x_33_ = v___x_27_;
v_isShared_34_ = v_isSharedCheck_42_;
goto v_resetjp_32_;
}
else
{
lean_inc(v_diag_31_);
lean_inc(v_postponed_30_);
lean_inc(v_zetaDeltaFVarIds_29_);
lean_inc(v_mctx_28_);
lean_dec(v___x_27_);
v___x_33_ = lean_box(0);
v_isShared_34_ = v_isSharedCheck_42_;
goto v_resetjp_32_;
}
v_resetjp_32_:
{
lean_object* v___x_35_; lean_object* v___x_36_; lean_object* v___x_38_; 
v___x_35_ = lean_box(0);
v___x_36_ = lean_obj_once(&l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9___redArg___closed__3, &l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9___redArg___closed__3_once, _init_l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9___redArg___closed__3);
if (v_isShared_34_ == 0)
{
lean_ctor_set(v___x_33_, 1, v___x_36_);
v___x_38_ = v___x_33_;
goto v_reusejp_37_;
}
else
{
lean_object* v_reuseFailAlloc_41_; 
v_reuseFailAlloc_41_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_41_, 0, v_mctx_28_);
lean_ctor_set(v_reuseFailAlloc_41_, 1, v___x_36_);
lean_ctor_set(v_reuseFailAlloc_41_, 2, v_zetaDeltaFVarIds_29_);
lean_ctor_set(v_reuseFailAlloc_41_, 3, v_postponed_30_);
lean_ctor_set(v_reuseFailAlloc_41_, 4, v_diag_31_);
v___x_38_ = v_reuseFailAlloc_41_;
goto v_reusejp_37_;
}
v_reusejp_37_:
{
lean_object* v___x_39_; lean_object* v___x_40_; 
v___x_39_ = lean_st_ref_put(v___y_9_, v___x_38_);
v___x_40_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_40_, 0, v___x_35_);
return v___x_40_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9___redArg___boxed(lean_object* v_env_48_, lean_object* v___y_49_, lean_object* v___y_50_, lean_object* v___y_51_){
_start:
{
lean_object* v_res_52_; 
v_res_52_ = l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9___redArg(v_env_48_, v___y_49_, v___y_50_);
lean_dec(v___y_50_);
lean_dec(v___y_49_);
return v_res_52_;
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9(lean_object* v_env_53_, lean_object* v___y_54_, lean_object* v___y_55_, lean_object* v___y_56_, lean_object* v___y_57_, lean_object* v___y_58_, lean_object* v___y_59_){
_start:
{
lean_object* v___x_61_; 
v___x_61_ = l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9___redArg(v_env_53_, v___y_57_, v___y_59_);
return v___x_61_;
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9___boxed(lean_object* v_env_62_, lean_object* v___y_63_, lean_object* v___y_64_, lean_object* v___y_65_, lean_object* v___y_66_, lean_object* v___y_67_, lean_object* v___y_68_, lean_object* v___y_69_){
_start:
{
lean_object* v_res_70_; 
v_res_70_ = l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9(v_env_62_, v___y_63_, v___y_64_, v___y_65_, v___y_66_, v___y_67_, v___y_68_);
lean_dec(v___y_68_);
lean_dec_ref(v___y_67_);
lean_dec(v___y_66_);
lean_dec_ref(v___y_65_);
lean_dec(v___y_64_);
lean_dec_ref(v___y_63_);
return v_res_70_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_wfRecursion_spec__15___redArg___lam__0(lean_object* v_k_71_, lean_object* v___y_72_, lean_object* v___y_73_, lean_object* v_b_74_, lean_object* v_c_75_, lean_object* v___y_76_, lean_object* v___y_77_, lean_object* v___y_78_, lean_object* v___y_79_){
_start:
{
lean_object* v___x_81_; 
lean_inc(v___y_79_);
lean_inc_ref(v___y_78_);
lean_inc(v___y_77_);
lean_inc_ref(v___y_76_);
lean_inc(v___y_73_);
lean_inc_ref(v___y_72_);
v___x_81_ = lean_apply_9(v_k_71_, v_b_74_, v_c_75_, v___y_72_, v___y_73_, v___y_76_, v___y_77_, v___y_78_, v___y_79_, lean_box(0));
return v___x_81_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_wfRecursion_spec__15___redArg___lam__0___boxed(lean_object* v_k_82_, lean_object* v___y_83_, lean_object* v___y_84_, lean_object* v_b_85_, lean_object* v_c_86_, lean_object* v___y_87_, lean_object* v___y_88_, lean_object* v___y_89_, lean_object* v___y_90_, lean_object* v___y_91_){
_start:
{
lean_object* v_res_92_; 
v_res_92_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_wfRecursion_spec__15___redArg___lam__0(v_k_82_, v___y_83_, v___y_84_, v_b_85_, v_c_86_, v___y_87_, v___y_88_, v___y_89_, v___y_90_);
lean_dec(v___y_90_);
lean_dec_ref(v___y_89_);
lean_dec(v___y_88_);
lean_dec_ref(v___y_87_);
lean_dec(v___y_84_);
lean_dec_ref(v___y_83_);
return v_res_92_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_wfRecursion_spec__15___redArg(lean_object* v_type_93_, lean_object* v_maxFVars_x3f_94_, lean_object* v_k_95_, uint8_t v_cleanupAnnotations_96_, uint8_t v_whnfType_97_, lean_object* v___y_98_, lean_object* v___y_99_, lean_object* v___y_100_, lean_object* v___y_101_, lean_object* v___y_102_, lean_object* v___y_103_){
_start:
{
lean_object* v___f_105_; lean_object* v___x_106_; 
lean_inc(v___y_99_);
lean_inc_ref(v___y_98_);
v___f_105_ = lean_alloc_closure((void*)(l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_wfRecursion_spec__15___redArg___lam__0___boxed), 10, 3);
lean_closure_set(v___f_105_, 0, v_k_95_);
lean_closure_set(v___f_105_, 1, v___y_98_);
lean_closure_set(v___f_105_, 2, v___y_99_);
v___x_106_ = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAux(lean_box(0), v_type_93_, v_maxFVars_x3f_94_, v___f_105_, v_cleanupAnnotations_96_, v_whnfType_97_, v___y_100_, v___y_101_, v___y_102_, v___y_103_);
if (lean_obj_tag(v___x_106_) == 0)
{
return v___x_106_;
}
else
{
lean_object* v_a_107_; lean_object* v___x_109_; uint8_t v_isShared_110_; uint8_t v_isSharedCheck_114_; 
v_a_107_ = lean_ctor_get(v___x_106_, 0);
v_isSharedCheck_114_ = !lean_is_exclusive(v___x_106_);
if (v_isSharedCheck_114_ == 0)
{
v___x_109_ = v___x_106_;
v_isShared_110_ = v_isSharedCheck_114_;
goto v_resetjp_108_;
}
else
{
lean_inc(v_a_107_);
lean_dec(v___x_106_);
v___x_109_ = lean_box(0);
v_isShared_110_ = v_isSharedCheck_114_;
goto v_resetjp_108_;
}
v_resetjp_108_:
{
lean_object* v___x_112_; 
if (v_isShared_110_ == 0)
{
v___x_112_ = v___x_109_;
goto v_reusejp_111_;
}
else
{
lean_object* v_reuseFailAlloc_113_; 
v_reuseFailAlloc_113_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_113_, 0, v_a_107_);
v___x_112_ = v_reuseFailAlloc_113_;
goto v_reusejp_111_;
}
v_reusejp_111_:
{
return v___x_112_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_wfRecursion_spec__15___redArg___boxed(lean_object* v_type_115_, lean_object* v_maxFVars_x3f_116_, lean_object* v_k_117_, lean_object* v_cleanupAnnotations_118_, lean_object* v_whnfType_119_, lean_object* v___y_120_, lean_object* v___y_121_, lean_object* v___y_122_, lean_object* v___y_123_, lean_object* v___y_124_, lean_object* v___y_125_, lean_object* v___y_126_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_127_; uint8_t v_whnfType_boxed_128_; lean_object* v_res_129_; 
v_cleanupAnnotations_boxed_127_ = lean_unbox(v_cleanupAnnotations_118_);
v_whnfType_boxed_128_ = lean_unbox(v_whnfType_119_);
v_res_129_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_wfRecursion_spec__15___redArg(v_type_115_, v_maxFVars_x3f_116_, v_k_117_, v_cleanupAnnotations_boxed_127_, v_whnfType_boxed_128_, v___y_120_, v___y_121_, v___y_122_, v___y_123_, v___y_124_, v___y_125_);
lean_dec(v___y_125_);
lean_dec_ref(v___y_124_);
lean_dec(v___y_123_);
lean_dec_ref(v___y_122_);
lean_dec(v___y_121_);
lean_dec_ref(v___y_120_);
return v_res_129_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_wfRecursion_spec__15(lean_object* v_00_u03b1_130_, lean_object* v_type_131_, lean_object* v_maxFVars_x3f_132_, lean_object* v_k_133_, uint8_t v_cleanupAnnotations_134_, uint8_t v_whnfType_135_, lean_object* v___y_136_, lean_object* v___y_137_, lean_object* v___y_138_, lean_object* v___y_139_, lean_object* v___y_140_, lean_object* v___y_141_){
_start:
{
lean_object* v___x_143_; 
v___x_143_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_wfRecursion_spec__15___redArg(v_type_131_, v_maxFVars_x3f_132_, v_k_133_, v_cleanupAnnotations_134_, v_whnfType_135_, v___y_136_, v___y_137_, v___y_138_, v___y_139_, v___y_140_, v___y_141_);
return v___x_143_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_wfRecursion_spec__15___boxed(lean_object* v_00_u03b1_144_, lean_object* v_type_145_, lean_object* v_maxFVars_x3f_146_, lean_object* v_k_147_, lean_object* v_cleanupAnnotations_148_, lean_object* v_whnfType_149_, lean_object* v___y_150_, lean_object* v___y_151_, lean_object* v___y_152_, lean_object* v___y_153_, lean_object* v___y_154_, lean_object* v___y_155_, lean_object* v___y_156_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_157_; uint8_t v_whnfType_boxed_158_; lean_object* v_res_159_; 
v_cleanupAnnotations_boxed_157_ = lean_unbox(v_cleanupAnnotations_148_);
v_whnfType_boxed_158_ = lean_unbox(v_whnfType_149_);
v_res_159_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_wfRecursion_spec__15(v_00_u03b1_144_, v_type_145_, v_maxFVars_x3f_146_, v_k_147_, v_cleanupAnnotations_boxed_157_, v_whnfType_boxed_158_, v___y_150_, v___y_151_, v___y_152_, v___y_153_, v___y_154_, v___y_155_);
lean_dec(v___y_155_);
lean_dec_ref(v___y_154_);
lean_dec(v___y_153_);
lean_dec_ref(v___y_152_);
lean_dec(v___y_151_);
lean_dec_ref(v___y_150_);
return v_res_159_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__3___redArg(lean_object* v_as_160_, size_t v_sz_161_, size_t v_i_162_, lean_object* v_b_163_, lean_object* v___y_164_, lean_object* v___y_165_){
_start:
{
uint8_t v___x_167_; 
v___x_167_ = lean_usize_dec_lt(v_i_162_, v_sz_161_);
if (v___x_167_ == 0)
{
lean_object* v___x_168_; 
v___x_168_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_168_, 0, v_b_163_);
return v___x_168_;
}
else
{
lean_object* v___x_169_; lean_object* v_a_170_; lean_object* v___x_171_; 
v___x_169_ = lean_box(0);
v_a_170_ = lean_array_uget_borrowed(v_as_160_, v_i_162_);
v___x_171_ = l_Lean_Elab_addAsAxiom___redArg(v_a_170_, v___y_164_, v___y_165_);
if (lean_obj_tag(v___x_171_) == 0)
{
size_t v___x_172_; size_t v___x_173_; 
lean_dec_ref_known(v___x_171_, 1);
v___x_172_ = ((size_t)1ULL);
v___x_173_ = lean_usize_add(v_i_162_, v___x_172_);
v_i_162_ = v___x_173_;
v_b_163_ = v___x_169_;
goto _start;
}
else
{
return v___x_171_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__3___redArg___boxed(lean_object* v_as_175_, lean_object* v_sz_176_, lean_object* v_i_177_, lean_object* v_b_178_, lean_object* v___y_179_, lean_object* v___y_180_, lean_object* v___y_181_){
_start:
{
size_t v_sz_boxed_182_; size_t v_i_boxed_183_; lean_object* v_res_184_; 
v_sz_boxed_182_ = lean_unbox_usize(v_sz_176_);
lean_dec(v_sz_176_);
v_i_boxed_183_ = lean_unbox_usize(v_i_177_);
lean_dec(v_i_177_);
v_res_184_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__3___redArg(v_as_175_, v_sz_boxed_182_, v_i_boxed_183_, v_b_178_, v___y_179_, v___y_180_);
lean_dec(v___y_180_);
lean_dec_ref(v___y_179_);
lean_dec_ref(v_as_175_);
return v_res_184_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__6(size_t v_sz_185_, size_t v_i_186_, lean_object* v_bs_187_){
_start:
{
uint8_t v___x_188_; 
v___x_188_ = lean_usize_dec_lt(v_i_186_, v_sz_185_);
if (v___x_188_ == 0)
{
lean_object* v___x_189_; 
v___x_189_ = l_unsafeCast___redArg(v_bs_187_);
lean_dec_ref(v_bs_187_);
return v___x_189_;
}
else
{
lean_object* v_v_190_; lean_object* v___x_191_; lean_object* v_declName_192_; lean_object* v___x_193_; lean_object* v_bs_x27_194_; size_t v___x_195_; size_t v___x_196_; lean_object* v___x_197_; lean_object* v___x_198_; 
v_v_190_ = lean_array_uget_borrowed(v_bs_187_, v_i_186_);
v___x_191_ = l_unsafeCast___redArg(v_v_190_);
v_declName_192_ = lean_ctor_get(v___x_191_, 3);
lean_inc(v_declName_192_);
lean_dec(v___x_191_);
v___x_193_ = lean_unsigned_to_nat(0u);
v_bs_x27_194_ = lean_array_uset(v_bs_187_, v_i_186_, v___x_193_);
v___x_195_ = ((size_t)1ULL);
v___x_196_ = lean_usize_add(v_i_186_, v___x_195_);
v___x_197_ = l_unsafeCast___redArg(v_declName_192_);
lean_dec(v_declName_192_);
v___x_198_ = lean_array_uset(v_bs_x27_194_, v_i_186_, v___x_197_);
v_i_186_ = v___x_196_;
v_bs_187_ = v___x_198_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__6___boxed(lean_object* v_sz_200_, lean_object* v_i_201_, lean_object* v_bs_202_){
_start:
{
size_t v_sz_boxed_203_; size_t v_i_boxed_204_; lean_object* v_res_205_; 
v_sz_boxed_203_ = lean_unbox_usize(v_sz_200_);
lean_dec(v_sz_200_);
v_i_boxed_204_ = lean_unbox_usize(v_i_201_);
lean_dec(v_i_201_);
v_res_205_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__6(v_sz_boxed_203_, v_i_boxed_204_, v_bs_202_);
return v_res_205_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__7___redArg(lean_object* v_a_206_, lean_object* v___x_207_, size_t v_sz_208_, size_t v_i_209_, lean_object* v_bs_210_, lean_object* v___y_211_, lean_object* v___y_212_){
_start:
{
uint8_t v___x_214_; 
v___x_214_ = lean_usize_dec_lt(v_i_209_, v_sz_208_);
if (v___x_214_ == 0)
{
lean_object* v___x_215_; lean_object* v___x_216_; 
lean_dec(v___x_207_);
v___x_215_ = l_unsafeCast___redArg(v_bs_210_);
lean_dec_ref(v_bs_210_);
v___x_216_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_216_, 0, v___x_215_);
return v___x_216_;
}
else
{
lean_object* v_v_217_; lean_object* v___x_218_; lean_object* v_ref_219_; uint8_t v_kind_220_; lean_object* v_levelParams_221_; lean_object* v_modifiers_222_; lean_object* v_declName_223_; lean_object* v_binders_224_; lean_object* v_numSectionVars_225_; lean_object* v_type_226_; lean_object* v_value_227_; lean_object* v_termination_228_; lean_object* v___x_230_; uint8_t v_isShared_231_; uint8_t v_isSharedCheck_257_; 
v_v_217_ = lean_array_uget_borrowed(v_bs_210_, v_i_209_);
v___x_218_ = l_unsafeCast___redArg(v_v_217_);
v_ref_219_ = lean_ctor_get(v___x_218_, 0);
v_kind_220_ = lean_ctor_get_uint8(v___x_218_, sizeof(void*)*9);
v_levelParams_221_ = lean_ctor_get(v___x_218_, 1);
v_modifiers_222_ = lean_ctor_get(v___x_218_, 2);
v_declName_223_ = lean_ctor_get(v___x_218_, 3);
v_binders_224_ = lean_ctor_get(v___x_218_, 4);
v_numSectionVars_225_ = lean_ctor_get(v___x_218_, 5);
v_type_226_ = lean_ctor_get(v___x_218_, 6);
v_value_227_ = lean_ctor_get(v___x_218_, 7);
v_termination_228_ = lean_ctor_get(v___x_218_, 8);
v_isSharedCheck_257_ = !lean_is_exclusive(v___x_218_);
if (v_isSharedCheck_257_ == 0)
{
v___x_230_ = v___x_218_;
v_isShared_231_ = v_isSharedCheck_257_;
goto v_resetjp_229_;
}
else
{
lean_inc(v_termination_228_);
lean_inc(v_value_227_);
lean_inc(v_type_226_);
lean_inc(v_numSectionVars_225_);
lean_inc(v_binders_224_);
lean_inc(v_declName_223_);
lean_inc(v_modifiers_222_);
lean_inc(v_levelParams_221_);
lean_inc(v_ref_219_);
lean_dec(v___x_218_);
v___x_230_ = lean_box(0);
v_isShared_231_ = v_isSharedCheck_257_;
goto v_resetjp_229_;
}
v_resetjp_229_:
{
lean_object* v___x_232_; lean_object* v_bs_x27_233_; size_t v_sz_234_; size_t v___x_235_; lean_object* v___x_236_; lean_object* v___x_237_; lean_object* v___x_238_; lean_object* v___x_239_; 
v___x_232_ = lean_unsigned_to_nat(0u);
v_bs_x27_233_ = lean_array_uset(v_bs_210_, v_i_209_, v___x_232_);
v_sz_234_ = lean_array_size(v_a_206_);
v___x_235_ = ((size_t)0ULL);
v___x_236_ = l_unsafeCast___redArg(v_a_206_);
v___x_237_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__6(v_sz_234_, v___x_235_, v___x_236_);
v___x_238_ = l_unsafeCast___redArg(v___x_237_);
lean_dec_ref(v___x_237_);
lean_inc(v___x_207_);
v___x_239_ = l_Lean_Meta_unfoldIfArgIsAppOf(v___x_238_, v___x_207_, v_value_227_, v___y_211_, v___y_212_);
if (lean_obj_tag(v___x_239_) == 0)
{
lean_object* v_a_240_; lean_object* v___x_242_; 
v_a_240_ = lean_ctor_get(v___x_239_, 0);
lean_inc(v_a_240_);
lean_dec_ref_known(v___x_239_, 1);
if (v_isShared_231_ == 0)
{
lean_ctor_set(v___x_230_, 7, v_a_240_);
v___x_242_ = v___x_230_;
goto v_reusejp_241_;
}
else
{
lean_object* v_reuseFailAlloc_248_; 
v_reuseFailAlloc_248_ = lean_alloc_ctor(0, 9, 1);
lean_ctor_set(v_reuseFailAlloc_248_, 0, v_ref_219_);
lean_ctor_set(v_reuseFailAlloc_248_, 1, v_levelParams_221_);
lean_ctor_set(v_reuseFailAlloc_248_, 2, v_modifiers_222_);
lean_ctor_set(v_reuseFailAlloc_248_, 3, v_declName_223_);
lean_ctor_set(v_reuseFailAlloc_248_, 4, v_binders_224_);
lean_ctor_set(v_reuseFailAlloc_248_, 5, v_numSectionVars_225_);
lean_ctor_set(v_reuseFailAlloc_248_, 6, v_type_226_);
lean_ctor_set(v_reuseFailAlloc_248_, 7, v_a_240_);
lean_ctor_set(v_reuseFailAlloc_248_, 8, v_termination_228_);
lean_ctor_set_uint8(v_reuseFailAlloc_248_, sizeof(void*)*9, v_kind_220_);
v___x_242_ = v_reuseFailAlloc_248_;
goto v_reusejp_241_;
}
v_reusejp_241_:
{
size_t v___x_243_; size_t v___x_244_; lean_object* v___x_245_; lean_object* v___x_246_; 
v___x_243_ = ((size_t)1ULL);
v___x_244_ = lean_usize_add(v_i_209_, v___x_243_);
v___x_245_ = l_unsafeCast___redArg(v___x_242_);
lean_dec_ref(v___x_242_);
v___x_246_ = lean_array_uset(v_bs_x27_233_, v_i_209_, v___x_245_);
v_i_209_ = v___x_244_;
v_bs_210_ = v___x_246_;
goto _start;
}
}
else
{
lean_object* v_a_249_; lean_object* v___x_251_; uint8_t v_isShared_252_; uint8_t v_isSharedCheck_256_; 
lean_dec_ref(v_bs_x27_233_);
lean_del_object(v___x_230_);
lean_dec_ref(v_termination_228_);
lean_dec_ref(v_type_226_);
lean_dec(v_numSectionVars_225_);
lean_dec(v_binders_224_);
lean_dec(v_declName_223_);
lean_dec_ref(v_modifiers_222_);
lean_dec(v_levelParams_221_);
lean_dec(v_ref_219_);
lean_dec(v___x_207_);
v_a_249_ = lean_ctor_get(v___x_239_, 0);
v_isSharedCheck_256_ = !lean_is_exclusive(v___x_239_);
if (v_isSharedCheck_256_ == 0)
{
v___x_251_ = v___x_239_;
v_isShared_252_ = v_isSharedCheck_256_;
goto v_resetjp_250_;
}
else
{
lean_inc(v_a_249_);
lean_dec(v___x_239_);
v___x_251_ = lean_box(0);
v_isShared_252_ = v_isSharedCheck_256_;
goto v_resetjp_250_;
}
v_resetjp_250_:
{
lean_object* v___x_254_; 
if (v_isShared_252_ == 0)
{
v___x_254_ = v___x_251_;
goto v_reusejp_253_;
}
else
{
lean_object* v_reuseFailAlloc_255_; 
v_reuseFailAlloc_255_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_255_, 0, v_a_249_);
v___x_254_ = v_reuseFailAlloc_255_;
goto v_reusejp_253_;
}
v_reusejp_253_:
{
return v___x_254_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__7___redArg___boxed(lean_object* v_a_258_, lean_object* v___x_259_, lean_object* v_sz_260_, lean_object* v_i_261_, lean_object* v_bs_262_, lean_object* v___y_263_, lean_object* v___y_264_, lean_object* v___y_265_){
_start:
{
size_t v_sz_boxed_266_; size_t v_i_boxed_267_; lean_object* v_res_268_; 
v_sz_boxed_266_ = lean_unbox_usize(v_sz_260_);
lean_dec(v_sz_260_);
v_i_boxed_267_ = lean_unbox_usize(v_i_261_);
lean_dec(v_i_261_);
v_res_268_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__7___redArg(v_a_258_, v___x_259_, v_sz_boxed_266_, v_i_boxed_267_, v_bs_262_, v___y_263_, v___y_264_);
lean_dec(v___y_264_);
lean_dec_ref(v___y_263_);
lean_dec_ref(v_a_258_);
return v_res_268_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__7(lean_object* v_a_269_, lean_object* v___x_270_, size_t v_sz_271_, size_t v_i_272_, lean_object* v_bs_273_, lean_object* v___y_274_, lean_object* v___y_275_, lean_object* v___y_276_, lean_object* v___y_277_, lean_object* v___y_278_, lean_object* v___y_279_){
_start:
{
lean_object* v___x_281_; 
v___x_281_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__7___redArg(v_a_269_, v___x_270_, v_sz_271_, v_i_272_, v_bs_273_, v___y_278_, v___y_279_);
return v___x_281_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__7___boxed(lean_object* v_a_282_, lean_object* v___x_283_, lean_object* v_sz_284_, lean_object* v_i_285_, lean_object* v_bs_286_, lean_object* v___y_287_, lean_object* v___y_288_, lean_object* v___y_289_, lean_object* v___y_290_, lean_object* v___y_291_, lean_object* v___y_292_, lean_object* v___y_293_){
_start:
{
size_t v_sz_boxed_294_; size_t v_i_boxed_295_; lean_object* v_res_296_; 
v_sz_boxed_294_ = lean_unbox_usize(v_sz_284_);
lean_dec(v_sz_284_);
v_i_boxed_295_ = lean_unbox_usize(v_i_285_);
lean_dec(v_i_285_);
v_res_296_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__7(v_a_282_, v___x_283_, v_sz_boxed_294_, v_i_boxed_295_, v_bs_286_, v___y_287_, v___y_288_, v___y_289_, v___y_290_, v___y_291_, v___y_292_);
lean_dec(v___y_292_);
lean_dec_ref(v___y_291_);
lean_dec(v___y_290_);
lean_dec_ref(v___y_289_);
lean_dec(v___y_288_);
lean_dec_ref(v___y_287_);
lean_dec_ref(v_a_282_);
return v_res_296_;
}
}
static lean_object* _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1_spec__5___closed__0(void){
_start:
{
lean_object* v___x_297_; lean_object* v___x_298_; 
v___x_297_ = lean_box(1);
v___x_298_ = l_Lean_MessageData_ofFormat(v___x_297_);
return v___x_298_;
}
}
static lean_object* _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1_spec__5___closed__3(void){
_start:
{
lean_object* v___x_302_; lean_object* v___x_303_; 
v___x_302_ = ((lean_object*)(l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1_spec__5___closed__2));
v___x_303_ = l_Lean_MessageData_ofFormat(v___x_302_);
return v___x_303_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1_spec__5(lean_object* v_x_304_, lean_object* v_x_305_){
_start:
{
if (lean_obj_tag(v_x_305_) == 0)
{
return v_x_304_;
}
else
{
lean_object* v_head_306_; lean_object* v_tail_307_; lean_object* v___x_309_; uint8_t v_isShared_310_; uint8_t v_isSharedCheck_329_; 
v_head_306_ = lean_ctor_get(v_x_305_, 0);
v_tail_307_ = lean_ctor_get(v_x_305_, 1);
v_isSharedCheck_329_ = !lean_is_exclusive(v_x_305_);
if (v_isSharedCheck_329_ == 0)
{
v___x_309_ = v_x_305_;
v_isShared_310_ = v_isSharedCheck_329_;
goto v_resetjp_308_;
}
else
{
lean_inc(v_tail_307_);
lean_inc(v_head_306_);
lean_dec(v_x_305_);
v___x_309_ = lean_box(0);
v_isShared_310_ = v_isSharedCheck_329_;
goto v_resetjp_308_;
}
v_resetjp_308_:
{
lean_object* v_before_311_; lean_object* v___x_313_; uint8_t v_isShared_314_; uint8_t v_isSharedCheck_327_; 
v_before_311_ = lean_ctor_get(v_head_306_, 0);
v_isSharedCheck_327_ = !lean_is_exclusive(v_head_306_);
if (v_isSharedCheck_327_ == 0)
{
lean_object* v_unused_328_; 
v_unused_328_ = lean_ctor_get(v_head_306_, 1);
lean_dec(v_unused_328_);
v___x_313_ = v_head_306_;
v_isShared_314_ = v_isSharedCheck_327_;
goto v_resetjp_312_;
}
else
{
lean_inc(v_before_311_);
lean_dec(v_head_306_);
v___x_313_ = lean_box(0);
v_isShared_314_ = v_isSharedCheck_327_;
goto v_resetjp_312_;
}
v_resetjp_312_:
{
lean_object* v___x_315_; lean_object* v___x_317_; 
v___x_315_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1_spec__5___closed__0, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1_spec__5___closed__0_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1_spec__5___closed__0);
if (v_isShared_314_ == 0)
{
lean_ctor_set_tag(v___x_313_, 7);
lean_ctor_set(v___x_313_, 1, v___x_315_);
lean_ctor_set(v___x_313_, 0, v_x_304_);
v___x_317_ = v___x_313_;
goto v_reusejp_316_;
}
else
{
lean_object* v_reuseFailAlloc_326_; 
v_reuseFailAlloc_326_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_326_, 0, v_x_304_);
lean_ctor_set(v_reuseFailAlloc_326_, 1, v___x_315_);
v___x_317_ = v_reuseFailAlloc_326_;
goto v_reusejp_316_;
}
v_reusejp_316_:
{
lean_object* v___x_318_; lean_object* v___x_320_; 
v___x_318_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1_spec__5___closed__3, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1_spec__5___closed__3_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1_spec__5___closed__3);
if (v_isShared_310_ == 0)
{
lean_ctor_set_tag(v___x_309_, 7);
lean_ctor_set(v___x_309_, 1, v___x_318_);
lean_ctor_set(v___x_309_, 0, v___x_317_);
v___x_320_ = v___x_309_;
goto v_reusejp_319_;
}
else
{
lean_object* v_reuseFailAlloc_325_; 
v_reuseFailAlloc_325_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_325_, 0, v___x_317_);
lean_ctor_set(v_reuseFailAlloc_325_, 1, v___x_318_);
v___x_320_ = v_reuseFailAlloc_325_;
goto v_reusejp_319_;
}
v_reusejp_319_:
{
lean_object* v___x_321_; lean_object* v___x_322_; lean_object* v___x_323_; 
v___x_321_ = l_Lean_MessageData_ofSyntax(v_before_311_);
v___x_322_ = l_Lean_indentD(v___x_321_);
v___x_323_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_323_, 0, v___x_320_);
lean_ctor_set(v___x_323_, 1, v___x_322_);
v_x_304_ = v___x_323_;
v_x_305_ = v_tail_307_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1_spec__4(lean_object* v_opts_330_, lean_object* v_opt_331_){
_start:
{
lean_object* v_name_332_; lean_object* v_defValue_333_; lean_object* v_map_334_; lean_object* v___x_335_; 
v_name_332_ = lean_ctor_get(v_opt_331_, 0);
v_defValue_333_ = lean_ctor_get(v_opt_331_, 1);
v_map_334_ = lean_ctor_get(v_opts_330_, 0);
v___x_335_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_334_, v_name_332_);
if (lean_obj_tag(v___x_335_) == 0)
{
uint8_t v___x_336_; 
v___x_336_ = lean_unbox(v_defValue_333_);
return v___x_336_;
}
else
{
lean_object* v_val_337_; 
v_val_337_ = lean_ctor_get(v___x_335_, 0);
lean_inc(v_val_337_);
lean_dec_ref_known(v___x_335_, 1);
if (lean_obj_tag(v_val_337_) == 1)
{
uint8_t v_v_338_; 
v_v_338_ = lean_ctor_get_uint8(v_val_337_, 0);
lean_dec_ref_known(v_val_337_, 0);
return v_v_338_;
}
else
{
uint8_t v___x_339_; 
lean_dec(v_val_337_);
v___x_339_ = lean_unbox(v_defValue_333_);
return v___x_339_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1_spec__4___boxed(lean_object* v_opts_340_, lean_object* v_opt_341_){
_start:
{
uint8_t v_res_342_; lean_object* v_r_343_; 
v_res_342_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1_spec__4(v_opts_340_, v_opt_341_);
lean_dec_ref(v_opt_341_);
lean_dec_ref(v_opts_340_);
v_r_343_ = lean_box(v_res_342_);
return v_r_343_;
}
}
static lean_object* _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1___redArg___closed__2(void){
_start:
{
lean_object* v___x_347_; lean_object* v___x_348_; 
v___x_347_ = ((lean_object*)(l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1___redArg___closed__1));
v___x_348_ = l_Lean_MessageData_ofFormat(v___x_347_);
return v___x_348_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1___redArg(lean_object* v_msgData_349_, lean_object* v_macroStack_350_, lean_object* v___y_351_){
_start:
{
lean_object* v_toCold_353_; lean_object* v_options_354_; lean_object* v___x_355_; uint8_t v___x_356_; 
v_toCold_353_ = lean_ctor_get(v___y_351_, 0);
v_options_354_ = lean_ctor_get(v_toCold_353_, 2);
v___x_355_ = l_Lean_Elab_pp_macroStack;
v___x_356_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1_spec__4(v_options_354_, v___x_355_);
if (v___x_356_ == 0)
{
lean_object* v___x_357_; 
lean_dec(v_macroStack_350_);
v___x_357_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_357_, 0, v_msgData_349_);
return v___x_357_;
}
else
{
if (lean_obj_tag(v_macroStack_350_) == 0)
{
lean_object* v___x_358_; 
v___x_358_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_358_, 0, v_msgData_349_);
return v___x_358_;
}
else
{
lean_object* v_head_359_; lean_object* v_after_360_; lean_object* v___x_362_; uint8_t v_isShared_363_; uint8_t v_isSharedCheck_375_; 
v_head_359_ = lean_ctor_get(v_macroStack_350_, 0);
lean_inc(v_head_359_);
v_after_360_ = lean_ctor_get(v_head_359_, 1);
v_isSharedCheck_375_ = !lean_is_exclusive(v_head_359_);
if (v_isSharedCheck_375_ == 0)
{
lean_object* v_unused_376_; 
v_unused_376_ = lean_ctor_get(v_head_359_, 0);
lean_dec(v_unused_376_);
v___x_362_ = v_head_359_;
v_isShared_363_ = v_isSharedCheck_375_;
goto v_resetjp_361_;
}
else
{
lean_inc(v_after_360_);
lean_dec(v_head_359_);
v___x_362_ = lean_box(0);
v_isShared_363_ = v_isSharedCheck_375_;
goto v_resetjp_361_;
}
v_resetjp_361_:
{
lean_object* v___x_364_; lean_object* v___x_366_; 
v___x_364_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1_spec__5___closed__0, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1_spec__5___closed__0_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1_spec__5___closed__0);
if (v_isShared_363_ == 0)
{
lean_ctor_set_tag(v___x_362_, 7);
lean_ctor_set(v___x_362_, 1, v___x_364_);
lean_ctor_set(v___x_362_, 0, v_msgData_349_);
v___x_366_ = v___x_362_;
goto v_reusejp_365_;
}
else
{
lean_object* v_reuseFailAlloc_374_; 
v_reuseFailAlloc_374_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_374_, 0, v_msgData_349_);
lean_ctor_set(v_reuseFailAlloc_374_, 1, v___x_364_);
v___x_366_ = v_reuseFailAlloc_374_;
goto v_reusejp_365_;
}
v_reusejp_365_:
{
lean_object* v___x_367_; lean_object* v___x_368_; lean_object* v___x_369_; lean_object* v___x_370_; lean_object* v_msgData_371_; lean_object* v___x_372_; lean_object* v___x_373_; 
v___x_367_ = lean_obj_once(&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1___redArg___closed__2, &l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1___redArg___closed__2_once, _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1___redArg___closed__2);
v___x_368_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_368_, 0, v___x_366_);
lean_ctor_set(v___x_368_, 1, v___x_367_);
v___x_369_ = l_Lean_MessageData_ofSyntax(v_after_360_);
v___x_370_ = l_Lean_indentD(v___x_369_);
v_msgData_371_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_msgData_371_, 0, v___x_368_);
lean_ctor_set(v_msgData_371_, 1, v___x_370_);
v___x_372_ = l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1_spec__5(v_msgData_371_, v_macroStack_350_);
v___x_373_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_373_, 0, v___x_372_);
return v___x_373_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1___redArg___boxed(lean_object* v_msgData_377_, lean_object* v_macroStack_378_, lean_object* v___y_379_, lean_object* v___y_380_){
_start:
{
lean_object* v_res_381_; 
v_res_381_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1___redArg(v_msgData_377_, v_macroStack_378_, v___y_379_);
lean_dec_ref(v___y_379_);
return v_res_381_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__0(lean_object* v_msgData_382_, lean_object* v___y_383_, lean_object* v___y_384_, lean_object* v___y_385_, lean_object* v___y_386_){
_start:
{
lean_object* v___x_388_; lean_object* v_env_389_; lean_object* v___x_390_; lean_object* v_toCold_391_; lean_object* v_mctx_392_; lean_object* v_lctx_393_; lean_object* v_options_394_; lean_object* v___x_395_; lean_object* v___x_396_; lean_object* v___x_397_; 
v___x_388_ = lean_st_ref_get(v___y_386_);
v_env_389_ = lean_ctor_get(v___x_388_, 0);
lean_inc_ref(v_env_389_);
lean_dec(v___x_388_);
v___x_390_ = lean_st_ref_get(v___y_384_);
v_toCold_391_ = lean_ctor_get(v___y_385_, 0);
v_mctx_392_ = lean_ctor_get(v___x_390_, 0);
lean_inc_ref(v_mctx_392_);
lean_dec(v___x_390_);
v_lctx_393_ = lean_ctor_get(v___y_383_, 2);
v_options_394_ = lean_ctor_get(v_toCold_391_, 2);
lean_inc_ref(v_options_394_);
lean_inc_ref(v_lctx_393_);
v___x_395_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_395_, 0, v_env_389_);
lean_ctor_set(v___x_395_, 1, v_mctx_392_);
lean_ctor_set(v___x_395_, 2, v_lctx_393_);
lean_ctor_set(v___x_395_, 3, v_options_394_);
v___x_396_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_396_, 0, v___x_395_);
lean_ctor_set(v___x_396_, 1, v_msgData_382_);
v___x_397_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_397_, 0, v___x_396_);
return v___x_397_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__0___boxed(lean_object* v_msgData_398_, lean_object* v___y_399_, lean_object* v___y_400_, lean_object* v___y_401_, lean_object* v___y_402_, lean_object* v___y_403_){
_start:
{
lean_object* v_res_404_; 
v_res_404_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__0(v_msgData_398_, v___y_399_, v___y_400_, v___y_401_, v___y_402_);
lean_dec(v___y_402_);
lean_dec_ref(v___y_401_);
lean_dec(v___y_400_);
lean_dec_ref(v___y_399_);
return v_res_404_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0___redArg(lean_object* v_msg_405_, lean_object* v___y_406_, lean_object* v___y_407_, lean_object* v___y_408_, lean_object* v___y_409_, lean_object* v___y_410_, lean_object* v___y_411_){
_start:
{
lean_object* v_ref_413_; lean_object* v_macroStack_414_; lean_object* v___x_415_; lean_object* v___x_416_; lean_object* v_a_417_; lean_object* v___x_418_; lean_object* v_a_419_; lean_object* v___x_421_; uint8_t v_isShared_422_; uint8_t v_isSharedCheck_427_; 
v_ref_413_ = lean_ctor_get(v___y_410_, 2);
v_macroStack_414_ = lean_ctor_get(v___y_406_, 1);
v___x_415_ = l_Lean_Elab_getBetterRef(v_ref_413_, v_macroStack_414_);
v___x_416_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__0(v_msg_405_, v___y_408_, v___y_409_, v___y_410_, v___y_411_);
v_a_417_ = lean_ctor_get(v___x_416_, 0);
lean_inc(v_a_417_);
lean_dec_ref(v___x_416_);
lean_inc(v_macroStack_414_);
v___x_418_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1___redArg(v_a_417_, v_macroStack_414_, v___y_410_);
v_a_419_ = lean_ctor_get(v___x_418_, 0);
v_isSharedCheck_427_ = !lean_is_exclusive(v___x_418_);
if (v_isSharedCheck_427_ == 0)
{
v___x_421_ = v___x_418_;
v_isShared_422_ = v_isSharedCheck_427_;
goto v_resetjp_420_;
}
else
{
lean_inc(v_a_419_);
lean_dec(v___x_418_);
v___x_421_ = lean_box(0);
v_isShared_422_ = v_isSharedCheck_427_;
goto v_resetjp_420_;
}
v_resetjp_420_:
{
lean_object* v___x_423_; lean_object* v___x_425_; 
v___x_423_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_423_, 0, v___x_415_);
lean_ctor_set(v___x_423_, 1, v_a_419_);
if (v_isShared_422_ == 0)
{
lean_ctor_set_tag(v___x_421_, 1);
lean_ctor_set(v___x_421_, 0, v___x_423_);
v___x_425_ = v___x_421_;
goto v_reusejp_424_;
}
else
{
lean_object* v_reuseFailAlloc_426_; 
v_reuseFailAlloc_426_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_426_, 0, v___x_423_);
v___x_425_ = v_reuseFailAlloc_426_;
goto v_reusejp_424_;
}
v_reusejp_424_:
{
return v___x_425_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0___redArg___boxed(lean_object* v_msg_428_, lean_object* v___y_429_, lean_object* v___y_430_, lean_object* v___y_431_, lean_object* v___y_432_, lean_object* v___y_433_, lean_object* v___y_434_, lean_object* v___y_435_){
_start:
{
lean_object* v_res_436_; 
v_res_436_ = l_Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0___redArg(v_msg_428_, v___y_429_, v___y_430_, v___y_431_, v___y_432_, v___y_433_, v___y_434_);
lean_dec(v___y_434_);
lean_dec_ref(v___y_433_);
lean_dec(v___y_432_);
lean_dec_ref(v___y_431_);
lean_dec(v___y_430_);
lean_dec_ref(v___y_429_);
return v_res_436_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__5___closed__1(void){
_start:
{
lean_object* v___x_438_; lean_object* v___x_439_; 
v___x_438_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__5___closed__0));
v___x_439_ = l_Lean_stringToMessageData(v___x_438_);
return v___x_439_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__5___closed__3(void){
_start:
{
lean_object* v___x_441_; lean_object* v___x_442_; 
v___x_441_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__5___closed__2));
v___x_442_ = l_Lean_stringToMessageData(v___x_441_);
return v___x_442_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__5(lean_object* v_as_443_, size_t v_sz_444_, size_t v_i_445_, lean_object* v_b_446_, lean_object* v___y_447_, lean_object* v___y_448_, lean_object* v___y_449_, lean_object* v___y_450_, lean_object* v___y_451_, lean_object* v___y_452_){
_start:
{
lean_object* v_a_455_; uint8_t v___x_459_; 
v___x_459_ = lean_usize_dec_lt(v_i_445_, v_sz_444_);
if (v___x_459_ == 0)
{
lean_object* v___x_460_; 
v___x_460_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_460_, 0, v_b_446_);
return v___x_460_;
}
else
{
lean_object* v_array_461_; lean_object* v_start_462_; lean_object* v_stop_463_; uint8_t v___x_464_; 
v_array_461_ = lean_ctor_get(v_b_446_, 0);
v_start_462_ = lean_ctor_get(v_b_446_, 1);
v_stop_463_ = lean_ctor_get(v_b_446_, 2);
v___x_464_ = lean_nat_dec_lt(v_start_462_, v_stop_463_);
if (v___x_464_ == 0)
{
lean_object* v___x_465_; 
v___x_465_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_465_, 0, v_b_446_);
return v___x_465_;
}
else
{
lean_object* v___x_467_; uint8_t v_isShared_468_; uint8_t v_isSharedCheck_494_; 
lean_inc(v_stop_463_);
lean_inc(v_start_462_);
lean_inc_ref(v_array_461_);
v_isSharedCheck_494_ = !lean_is_exclusive(v_b_446_);
if (v_isSharedCheck_494_ == 0)
{
lean_object* v_unused_495_; lean_object* v_unused_496_; lean_object* v_unused_497_; 
v_unused_495_ = lean_ctor_get(v_b_446_, 2);
lean_dec(v_unused_495_);
v_unused_496_ = lean_ctor_get(v_b_446_, 1);
lean_dec(v_unused_496_);
v_unused_497_ = lean_ctor_get(v_b_446_, 0);
lean_dec(v_unused_497_);
v___x_467_ = v_b_446_;
v_isShared_468_ = v_isSharedCheck_494_;
goto v_resetjp_466_;
}
else
{
lean_dec(v_b_446_);
v___x_467_ = lean_box(0);
v_isShared_468_ = v_isSharedCheck_494_;
goto v_resetjp_466_;
}
v_resetjp_466_:
{
lean_object* v_a_469_; lean_object* v___x_470_; lean_object* v___x_471_; lean_object* v___x_472_; lean_object* v___x_474_; 
v_a_469_ = lean_array_uget_borrowed(v_as_443_, v_i_445_);
v___x_470_ = lean_array_fget(v_array_461_, v_start_462_);
v___x_471_ = lean_unsigned_to_nat(1u);
v___x_472_ = lean_nat_add(v_start_462_, v___x_471_);
lean_dec(v_start_462_);
if (v_isShared_468_ == 0)
{
lean_ctor_set(v___x_467_, 1, v___x_472_);
v___x_474_ = v___x_467_;
goto v_reusejp_473_;
}
else
{
lean_object* v_reuseFailAlloc_493_; 
v_reuseFailAlloc_493_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_493_, 0, v_array_461_);
lean_ctor_set(v_reuseFailAlloc_493_, 1, v___x_472_);
lean_ctor_set(v_reuseFailAlloc_493_, 2, v_stop_463_);
v___x_474_ = v_reuseFailAlloc_493_;
goto v_reusejp_473_;
}
v_reusejp_473_:
{
lean_object* v___x_475_; lean_object* v___x_476_; uint8_t v___x_477_; 
v___x_475_ = lean_array_get_size(v_a_469_);
v___x_476_ = lean_unsigned_to_nat(0u);
v___x_477_ = lean_nat_dec_eq(v___x_475_, v___x_476_);
if (v___x_477_ == 0)
{
lean_dec(v___x_470_);
v_a_455_ = v___x_474_;
goto v___jp_454_;
}
else
{
lean_object* v_declName_478_; lean_object* v___x_479_; lean_object* v___x_480_; lean_object* v___x_481_; lean_object* v___x_482_; lean_object* v___x_483_; lean_object* v___x_484_; 
v_declName_478_ = lean_ctor_get(v___x_470_, 3);
lean_inc(v_declName_478_);
lean_dec(v___x_470_);
v___x_479_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__5___closed__1, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__5___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__5___closed__1);
v___x_480_ = l_Lean_MessageData_ofName(v_declName_478_);
v___x_481_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_481_, 0, v___x_479_);
lean_ctor_set(v___x_481_, 1, v___x_480_);
v___x_482_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__5___closed__3, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__5___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__5___closed__3);
v___x_483_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_483_, 0, v___x_481_);
lean_ctor_set(v___x_483_, 1, v___x_482_);
v___x_484_ = l_Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0___redArg(v___x_483_, v___y_447_, v___y_448_, v___y_449_, v___y_450_, v___y_451_, v___y_452_);
if (lean_obj_tag(v___x_484_) == 0)
{
lean_dec_ref_known(v___x_484_, 1);
v_a_455_ = v___x_474_;
goto v___jp_454_;
}
else
{
lean_object* v_a_485_; lean_object* v___x_487_; uint8_t v_isShared_488_; uint8_t v_isSharedCheck_492_; 
lean_dec_ref(v___x_474_);
v_a_485_ = lean_ctor_get(v___x_484_, 0);
v_isSharedCheck_492_ = !lean_is_exclusive(v___x_484_);
if (v_isSharedCheck_492_ == 0)
{
v___x_487_ = v___x_484_;
v_isShared_488_ = v_isSharedCheck_492_;
goto v_resetjp_486_;
}
else
{
lean_inc(v_a_485_);
lean_dec(v___x_484_);
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
}
}
}
}
v___jp_454_:
{
size_t v___x_456_; size_t v___x_457_; 
v___x_456_ = ((size_t)1ULL);
v___x_457_ = lean_usize_add(v_i_445_, v___x_456_);
v_i_445_ = v___x_457_;
v_b_446_ = v_a_455_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__5___boxed(lean_object* v_as_498_, lean_object* v_sz_499_, lean_object* v_i_500_, lean_object* v_b_501_, lean_object* v___y_502_, lean_object* v___y_503_, lean_object* v___y_504_, lean_object* v___y_505_, lean_object* v___y_506_, lean_object* v___y_507_, lean_object* v___y_508_){
_start:
{
size_t v_sz_boxed_509_; size_t v_i_boxed_510_; lean_object* v_res_511_; 
v_sz_boxed_509_ = lean_unbox_usize(v_sz_499_);
lean_dec(v_sz_499_);
v_i_boxed_510_ = lean_unbox_usize(v_i_500_);
lean_dec(v_i_500_);
v_res_511_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__5(v_as_498_, v_sz_boxed_509_, v_i_boxed_510_, v_b_501_, v___y_502_, v___y_503_, v___y_504_, v___y_505_, v___y_506_, v___y_507_);
lean_dec(v___y_507_);
lean_dec_ref(v___y_506_);
lean_dec(v___y_505_);
lean_dec_ref(v___y_504_);
lean_dec(v___y_503_);
lean_dec_ref(v___y_502_);
lean_dec_ref(v_as_498_);
return v_res_511_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__4___redArg(lean_object* v_a_512_, size_t v_sz_513_, size_t v_i_514_, lean_object* v_bs_515_, lean_object* v___y_516_, lean_object* v___y_517_, lean_object* v___y_518_, lean_object* v___y_519_){
_start:
{
uint8_t v___x_521_; 
v___x_521_ = lean_usize_dec_lt(v_i_514_, v_sz_513_);
if (v___x_521_ == 0)
{
lean_object* v___x_522_; lean_object* v___x_523_; 
lean_dec_ref(v_a_512_);
v___x_522_ = l_unsafeCast___redArg(v_bs_515_);
lean_dec_ref(v_bs_515_);
v___x_523_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_523_, 0, v___x_522_);
return v___x_523_;
}
else
{
lean_object* v_v_524_; lean_object* v___x_525_; lean_object* v_bs_x27_526_; lean_object* v___x_527_; lean_object* v___x_528_; lean_object* v___x_529_; 
v_v_524_ = lean_array_uget(v_bs_515_, v_i_514_);
v___x_525_ = lean_unsigned_to_nat(0u);
v_bs_x27_526_ = lean_array_uset(v_bs_515_, v_i_514_, v___x_525_);
v___x_527_ = lean_usize_to_nat(v_i_514_);
v___x_528_ = l_unsafeCast___redArg(v_v_524_);
lean_dec(v_v_524_);
lean_inc_ref(v_a_512_);
v___x_529_ = l_Lean_Elab_WF_varyingVarNames(v_a_512_, v___x_527_, v___x_528_, v___y_516_, v___y_517_, v___y_518_, v___y_519_);
if (lean_obj_tag(v___x_529_) == 0)
{
lean_object* v_a_530_; size_t v___x_531_; size_t v___x_532_; lean_object* v___x_533_; lean_object* v___x_534_; 
v_a_530_ = lean_ctor_get(v___x_529_, 0);
lean_inc(v_a_530_);
lean_dec_ref_known(v___x_529_, 1);
v___x_531_ = ((size_t)1ULL);
v___x_532_ = lean_usize_add(v_i_514_, v___x_531_);
v___x_533_ = l_unsafeCast___redArg(v_a_530_);
lean_dec(v_a_530_);
v___x_534_ = lean_array_uset(v_bs_x27_526_, v_i_514_, v___x_533_);
v_i_514_ = v___x_532_;
v_bs_515_ = v___x_534_;
goto _start;
}
else
{
lean_object* v_a_536_; lean_object* v___x_538_; uint8_t v_isShared_539_; uint8_t v_isSharedCheck_543_; 
lean_dec_ref(v_bs_x27_526_);
lean_dec_ref(v_a_512_);
v_a_536_ = lean_ctor_get(v___x_529_, 0);
v_isSharedCheck_543_ = !lean_is_exclusive(v___x_529_);
if (v_isSharedCheck_543_ == 0)
{
v___x_538_ = v___x_529_;
v_isShared_539_ = v_isSharedCheck_543_;
goto v_resetjp_537_;
}
else
{
lean_inc(v_a_536_);
lean_dec(v___x_529_);
v___x_538_ = lean_box(0);
v_isShared_539_ = v_isSharedCheck_543_;
goto v_resetjp_537_;
}
v_resetjp_537_:
{
lean_object* v___x_541_; 
if (v_isShared_539_ == 0)
{
v___x_541_ = v___x_538_;
goto v_reusejp_540_;
}
else
{
lean_object* v_reuseFailAlloc_542_; 
v_reuseFailAlloc_542_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_542_, 0, v_a_536_);
v___x_541_ = v_reuseFailAlloc_542_;
goto v_reusejp_540_;
}
v_reusejp_540_:
{
return v___x_541_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__4___redArg___boxed(lean_object* v_a_544_, lean_object* v_sz_545_, lean_object* v_i_546_, lean_object* v_bs_547_, lean_object* v___y_548_, lean_object* v___y_549_, lean_object* v___y_550_, lean_object* v___y_551_, lean_object* v___y_552_){
_start:
{
size_t v_sz_boxed_553_; size_t v_i_boxed_554_; lean_object* v_res_555_; 
v_sz_boxed_553_ = lean_unbox_usize(v_sz_545_);
lean_dec(v_sz_545_);
v_i_boxed_554_ = lean_unbox_usize(v_i_546_);
lean_dec(v_i_546_);
v_res_555_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__4___redArg(v_a_544_, v_sz_boxed_553_, v_i_boxed_554_, v_bs_547_, v___y_548_, v___y_549_, v___y_550_, v___y_551_);
lean_dec(v___y_551_);
lean_dec_ref(v___y_550_);
lean_dec(v___y_549_);
lean_dec_ref(v___y_548_);
return v_res_555_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__4(lean_object* v_a_556_, lean_object* v_as_557_, size_t v_sz_558_, size_t v_i_559_, lean_object* v_bs_560_, lean_object* v___y_561_, lean_object* v___y_562_, lean_object* v___y_563_, lean_object* v___y_564_, lean_object* v___y_565_, lean_object* v___y_566_){
_start:
{
lean_object* v___x_568_; 
v___x_568_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__4___redArg(v_a_556_, v_sz_558_, v_i_559_, v_bs_560_, v___y_563_, v___y_564_, v___y_565_, v___y_566_);
return v___x_568_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__4___boxed(lean_object* v_a_569_, lean_object* v_as_570_, lean_object* v_sz_571_, lean_object* v_i_572_, lean_object* v_bs_573_, lean_object* v___y_574_, lean_object* v___y_575_, lean_object* v___y_576_, lean_object* v___y_577_, lean_object* v___y_578_, lean_object* v___y_579_, lean_object* v___y_580_){
_start:
{
size_t v_sz_boxed_581_; size_t v_i_boxed_582_; lean_object* v_res_583_; 
v_sz_boxed_581_ = lean_unbox_usize(v_sz_571_);
lean_dec(v_sz_571_);
v_i_boxed_582_ = lean_unbox_usize(v_i_572_);
lean_dec(v_i_572_);
v_res_583_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__4(v_a_569_, v_as_570_, v_sz_boxed_581_, v_i_boxed_582_, v_bs_573_, v___y_574_, v___y_575_, v___y_576_, v___y_577_, v___y_578_, v___y_579_);
lean_dec(v___y_579_);
lean_dec_ref(v___y_578_);
lean_dec(v___y_577_);
lean_dec_ref(v___y_576_);
lean_dec(v___y_575_);
lean_dec_ref(v___y_574_);
lean_dec_ref(v_as_570_);
return v_res_583_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_wfRecursion___lam__0(lean_object* v_a_584_, size_t v_sz_585_, size_t v___x_586_, lean_object* v___x_587_, lean_object* v___x_588_, lean_object* v___y_589_, lean_object* v___y_590_, lean_object* v___y_591_, lean_object* v___y_592_, lean_object* v___y_593_, lean_object* v___y_594_){
_start:
{
lean_object* v___x_596_; 
v___x_596_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__3___redArg(v_a_584_, v_sz_585_, v___x_586_, v___x_587_, v___y_593_, v___y_594_);
if (lean_obj_tag(v___x_596_) == 0)
{
lean_object* v___x_597_; 
lean_dec_ref_known(v___x_596_, 1);
lean_inc_ref(v_a_584_);
v___x_597_ = l_Lean_Elab_getFixedParamPerms(v_a_584_, v___y_591_, v___y_592_, v___y_593_, v___y_594_);
if (lean_obj_tag(v___x_597_) == 0)
{
lean_object* v_a_598_; lean_object* v___x_599_; lean_object* v___x_600_; lean_object* v___x_601_; lean_object* v___x_602_; lean_object* v___x_43083__overap_603_; lean_object* v___x_604_; 
v_a_598_ = lean_ctor_get(v___x_597_, 0);
lean_inc_n(v_a_598_, 2);
lean_dec_ref_known(v___x_597_, 1);
v___x_599_ = l_unsafeCast___redArg(v_a_584_);
v___x_600_ = lean_box_usize(v_sz_585_);
v___x_601_ = lean_box_usize(v___x_586_);
lean_inc(v___x_599_);
lean_inc_ref(v_a_584_);
v___x_602_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__4___boxed), 12, 5);
lean_closure_set(v___x_602_, 0, v_a_598_);
lean_closure_set(v___x_602_, 1, v_a_584_);
lean_closure_set(v___x_602_, 2, v___x_600_);
lean_closure_set(v___x_602_, 3, v___x_601_);
lean_closure_set(v___x_602_, 4, v___x_599_);
v___x_43083__overap_603_ = l_unsafeCast___redArg(v___x_602_);
lean_dec_ref(v___x_602_);
lean_inc(v___y_594_);
lean_inc_ref(v___y_593_);
lean_inc(v___y_592_);
lean_inc_ref(v___y_591_);
lean_inc(v___y_590_);
lean_inc_ref(v___y_589_);
v___x_604_ = lean_apply_7(v___x_43083__overap_603_, v___y_589_, v___y_590_, v___y_591_, v___y_592_, v___y_593_, v___y_594_, lean_box(0));
if (lean_obj_tag(v___x_604_) == 0)
{
lean_object* v_a_605_; lean_object* v___x_606_; lean_object* v___x_607_; lean_object* v___x_608_; size_t v_sz_609_; lean_object* v___x_610_; 
v_a_605_ = lean_ctor_get(v___x_604_, 0);
lean_inc(v_a_605_);
lean_dec_ref_known(v___x_604_, 1);
v___x_606_ = lean_unsigned_to_nat(0u);
v___x_607_ = lean_array_get_size(v_a_584_);
lean_inc_ref(v_a_584_);
v___x_608_ = l_Array_toSubarray___redArg(v_a_584_, v___x_606_, v___x_607_);
v_sz_609_ = lean_array_size(v_a_605_);
v___x_610_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__5(v_a_605_, v_sz_609_, v___x_586_, v___x_608_, v___y_589_, v___y_590_, v___y_591_, v___y_592_, v___y_593_, v___y_594_);
if (lean_obj_tag(v___x_610_) == 0)
{
lean_object* v___x_611_; lean_object* v_numSectionVars_612_; lean_object* v___x_613_; lean_object* v___x_614_; lean_object* v___x_615_; lean_object* v___x_43094__overap_616_; lean_object* v___x_617_; 
lean_dec_ref_known(v___x_610_, 1);
v___x_611_ = lean_array_get_borrowed(v___x_588_, v_a_584_, v___x_606_);
v_numSectionVars_612_ = lean_ctor_get(v___x_611_, 5);
lean_inc(v_numSectionVars_612_);
v___x_613_ = lean_box_usize(v_sz_585_);
v___x_614_ = lean_box_usize(v___x_586_);
v___x_615_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__7___boxed), 12, 5);
lean_closure_set(v___x_615_, 0, v_a_584_);
lean_closure_set(v___x_615_, 1, v_numSectionVars_612_);
lean_closure_set(v___x_615_, 2, v___x_613_);
lean_closure_set(v___x_615_, 3, v___x_614_);
lean_closure_set(v___x_615_, 4, v___x_599_);
v___x_43094__overap_616_ = l_unsafeCast___redArg(v___x_615_);
lean_dec_ref(v___x_615_);
lean_inc(v___y_594_);
lean_inc_ref(v___y_593_);
lean_inc(v___y_592_);
lean_inc_ref(v___y_591_);
v___x_617_ = lean_apply_7(v___x_43094__overap_616_, v___y_589_, v___y_590_, v___y_591_, v___y_592_, v___y_593_, v___y_594_, lean_box(0));
if (lean_obj_tag(v___x_617_) == 0)
{
lean_object* v_a_618_; lean_object* v___x_619_; 
v_a_618_ = lean_ctor_get(v___x_617_, 0);
lean_inc(v_a_618_);
lean_dec_ref_known(v___x_617_, 1);
lean_inc(v_a_605_);
lean_inc(v_a_598_);
v___x_619_ = l_Lean_Elab_WF_packMutual(v_a_598_, v_a_605_, v_a_618_, v___y_591_, v___y_592_, v___y_593_, v___y_594_);
lean_dec(v___y_594_);
lean_dec_ref(v___y_593_);
lean_dec(v___y_592_);
lean_dec_ref(v___y_591_);
if (lean_obj_tag(v___x_619_) == 0)
{
lean_object* v_a_620_; lean_object* v___x_622_; uint8_t v_isShared_623_; uint8_t v_isSharedCheck_629_; 
v_a_620_ = lean_ctor_get(v___x_619_, 0);
v_isSharedCheck_629_ = !lean_is_exclusive(v___x_619_);
if (v_isSharedCheck_629_ == 0)
{
v___x_622_ = v___x_619_;
v_isShared_623_ = v_isSharedCheck_629_;
goto v_resetjp_621_;
}
else
{
lean_inc(v_a_620_);
lean_dec(v___x_619_);
v___x_622_ = lean_box(0);
v_isShared_623_ = v_isSharedCheck_629_;
goto v_resetjp_621_;
}
v_resetjp_621_:
{
lean_object* v___x_624_; lean_object* v___x_625_; lean_object* v___x_627_; 
v___x_624_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_624_, 0, v_a_605_);
lean_ctor_set(v___x_624_, 1, v_a_620_);
v___x_625_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_625_, 0, v_a_598_);
lean_ctor_set(v___x_625_, 1, v___x_624_);
if (v_isShared_623_ == 0)
{
lean_ctor_set(v___x_622_, 0, v___x_625_);
v___x_627_ = v___x_622_;
goto v_reusejp_626_;
}
else
{
lean_object* v_reuseFailAlloc_628_; 
v_reuseFailAlloc_628_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_628_, 0, v___x_625_);
v___x_627_ = v_reuseFailAlloc_628_;
goto v_reusejp_626_;
}
v_reusejp_626_:
{
return v___x_627_;
}
}
}
else
{
lean_object* v_a_630_; lean_object* v___x_632_; uint8_t v_isShared_633_; uint8_t v_isSharedCheck_637_; 
lean_dec(v_a_605_);
lean_dec(v_a_598_);
v_a_630_ = lean_ctor_get(v___x_619_, 0);
v_isSharedCheck_637_ = !lean_is_exclusive(v___x_619_);
if (v_isSharedCheck_637_ == 0)
{
v___x_632_ = v___x_619_;
v_isShared_633_ = v_isSharedCheck_637_;
goto v_resetjp_631_;
}
else
{
lean_inc(v_a_630_);
lean_dec(v___x_619_);
v___x_632_ = lean_box(0);
v_isShared_633_ = v_isSharedCheck_637_;
goto v_resetjp_631_;
}
v_resetjp_631_:
{
lean_object* v___x_635_; 
if (v_isShared_633_ == 0)
{
v___x_635_ = v___x_632_;
goto v_reusejp_634_;
}
else
{
lean_object* v_reuseFailAlloc_636_; 
v_reuseFailAlloc_636_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_636_, 0, v_a_630_);
v___x_635_ = v_reuseFailAlloc_636_;
goto v_reusejp_634_;
}
v_reusejp_634_:
{
return v___x_635_;
}
}
}
}
else
{
lean_object* v_a_638_; lean_object* v___x_640_; uint8_t v_isShared_641_; uint8_t v_isSharedCheck_645_; 
lean_dec(v_a_605_);
lean_dec(v_a_598_);
lean_dec(v___y_594_);
lean_dec_ref(v___y_593_);
lean_dec(v___y_592_);
lean_dec_ref(v___y_591_);
v_a_638_ = lean_ctor_get(v___x_617_, 0);
v_isSharedCheck_645_ = !lean_is_exclusive(v___x_617_);
if (v_isSharedCheck_645_ == 0)
{
v___x_640_ = v___x_617_;
v_isShared_641_ = v_isSharedCheck_645_;
goto v_resetjp_639_;
}
else
{
lean_inc(v_a_638_);
lean_dec(v___x_617_);
v___x_640_ = lean_box(0);
v_isShared_641_ = v_isSharedCheck_645_;
goto v_resetjp_639_;
}
v_resetjp_639_:
{
lean_object* v___x_643_; 
if (v_isShared_641_ == 0)
{
v___x_643_ = v___x_640_;
goto v_reusejp_642_;
}
else
{
lean_object* v_reuseFailAlloc_644_; 
v_reuseFailAlloc_644_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_644_, 0, v_a_638_);
v___x_643_ = v_reuseFailAlloc_644_;
goto v_reusejp_642_;
}
v_reusejp_642_:
{
return v___x_643_;
}
}
}
}
else
{
lean_object* v_a_646_; lean_object* v___x_648_; uint8_t v_isShared_649_; uint8_t v_isSharedCheck_653_; 
lean_dec(v_a_605_);
lean_dec(v___x_599_);
lean_dec(v_a_598_);
lean_dec(v___y_594_);
lean_dec_ref(v___y_593_);
lean_dec(v___y_592_);
lean_dec_ref(v___y_591_);
lean_dec(v___y_590_);
lean_dec_ref(v___y_589_);
lean_dec_ref(v_a_584_);
v_a_646_ = lean_ctor_get(v___x_610_, 0);
v_isSharedCheck_653_ = !lean_is_exclusive(v___x_610_);
if (v_isSharedCheck_653_ == 0)
{
v___x_648_ = v___x_610_;
v_isShared_649_ = v_isSharedCheck_653_;
goto v_resetjp_647_;
}
else
{
lean_inc(v_a_646_);
lean_dec(v___x_610_);
v___x_648_ = lean_box(0);
v_isShared_649_ = v_isSharedCheck_653_;
goto v_resetjp_647_;
}
v_resetjp_647_:
{
lean_object* v___x_651_; 
if (v_isShared_649_ == 0)
{
v___x_651_ = v___x_648_;
goto v_reusejp_650_;
}
else
{
lean_object* v_reuseFailAlloc_652_; 
v_reuseFailAlloc_652_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_652_, 0, v_a_646_);
v___x_651_ = v_reuseFailAlloc_652_;
goto v_reusejp_650_;
}
v_reusejp_650_:
{
return v___x_651_;
}
}
}
}
else
{
lean_object* v_a_654_; lean_object* v___x_656_; uint8_t v_isShared_657_; uint8_t v_isSharedCheck_661_; 
lean_dec(v___x_599_);
lean_dec(v_a_598_);
lean_dec(v___y_594_);
lean_dec_ref(v___y_593_);
lean_dec(v___y_592_);
lean_dec_ref(v___y_591_);
lean_dec(v___y_590_);
lean_dec_ref(v___y_589_);
lean_dec_ref(v_a_584_);
v_a_654_ = lean_ctor_get(v___x_604_, 0);
v_isSharedCheck_661_ = !lean_is_exclusive(v___x_604_);
if (v_isSharedCheck_661_ == 0)
{
v___x_656_ = v___x_604_;
v_isShared_657_ = v_isSharedCheck_661_;
goto v_resetjp_655_;
}
else
{
lean_inc(v_a_654_);
lean_dec(v___x_604_);
v___x_656_ = lean_box(0);
v_isShared_657_ = v_isSharedCheck_661_;
goto v_resetjp_655_;
}
v_resetjp_655_:
{
lean_object* v___x_659_; 
if (v_isShared_657_ == 0)
{
v___x_659_ = v___x_656_;
goto v_reusejp_658_;
}
else
{
lean_object* v_reuseFailAlloc_660_; 
v_reuseFailAlloc_660_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_660_, 0, v_a_654_);
v___x_659_ = v_reuseFailAlloc_660_;
goto v_reusejp_658_;
}
v_reusejp_658_:
{
return v___x_659_;
}
}
}
}
else
{
lean_object* v_a_662_; lean_object* v___x_664_; uint8_t v_isShared_665_; uint8_t v_isSharedCheck_669_; 
lean_dec(v___y_594_);
lean_dec_ref(v___y_593_);
lean_dec(v___y_592_);
lean_dec_ref(v___y_591_);
lean_dec(v___y_590_);
lean_dec_ref(v___y_589_);
lean_dec_ref(v_a_584_);
v_a_662_ = lean_ctor_get(v___x_597_, 0);
v_isSharedCheck_669_ = !lean_is_exclusive(v___x_597_);
if (v_isSharedCheck_669_ == 0)
{
v___x_664_ = v___x_597_;
v_isShared_665_ = v_isSharedCheck_669_;
goto v_resetjp_663_;
}
else
{
lean_inc(v_a_662_);
lean_dec(v___x_597_);
v___x_664_ = lean_box(0);
v_isShared_665_ = v_isSharedCheck_669_;
goto v_resetjp_663_;
}
v_resetjp_663_:
{
lean_object* v___x_667_; 
if (v_isShared_665_ == 0)
{
v___x_667_ = v___x_664_;
goto v_reusejp_666_;
}
else
{
lean_object* v_reuseFailAlloc_668_; 
v_reuseFailAlloc_668_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_668_, 0, v_a_662_);
v___x_667_ = v_reuseFailAlloc_668_;
goto v_reusejp_666_;
}
v_reusejp_666_:
{
return v___x_667_;
}
}
}
}
else
{
lean_object* v_a_670_; lean_object* v___x_672_; uint8_t v_isShared_673_; uint8_t v_isSharedCheck_677_; 
lean_dec(v___y_594_);
lean_dec_ref(v___y_593_);
lean_dec(v___y_592_);
lean_dec_ref(v___y_591_);
lean_dec(v___y_590_);
lean_dec_ref(v___y_589_);
lean_dec_ref(v_a_584_);
v_a_670_ = lean_ctor_get(v___x_596_, 0);
v_isSharedCheck_677_ = !lean_is_exclusive(v___x_596_);
if (v_isSharedCheck_677_ == 0)
{
v___x_672_ = v___x_596_;
v_isShared_673_ = v_isSharedCheck_677_;
goto v_resetjp_671_;
}
else
{
lean_inc(v_a_670_);
lean_dec(v___x_596_);
v___x_672_ = lean_box(0);
v_isShared_673_ = v_isSharedCheck_677_;
goto v_resetjp_671_;
}
v_resetjp_671_:
{
lean_object* v___x_675_; 
if (v_isShared_673_ == 0)
{
v___x_675_ = v___x_672_;
goto v_reusejp_674_;
}
else
{
lean_object* v_reuseFailAlloc_676_; 
v_reuseFailAlloc_676_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_676_, 0, v_a_670_);
v___x_675_ = v_reuseFailAlloc_676_;
goto v_reusejp_674_;
}
v_reusejp_674_:
{
return v___x_675_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_wfRecursion___lam__0___boxed(lean_object* v_a_678_, lean_object* v_sz_679_, lean_object* v___x_680_, lean_object* v___x_681_, lean_object* v___x_682_, lean_object* v___y_683_, lean_object* v___y_684_, lean_object* v___y_685_, lean_object* v___y_686_, lean_object* v___y_687_, lean_object* v___y_688_, lean_object* v___y_689_){
_start:
{
size_t v_sz_boxed_690_; size_t v___x_44201__boxed_691_; lean_object* v_res_692_; 
v_sz_boxed_690_ = lean_unbox_usize(v_sz_679_);
lean_dec(v_sz_679_);
v___x_44201__boxed_691_ = lean_unbox_usize(v___x_680_);
lean_dec(v___x_680_);
v_res_692_ = l_Lean_Elab_wfRecursion___lam__0(v_a_678_, v_sz_boxed_690_, v___x_44201__boxed_691_, v___x_681_, v___x_682_, v___y_683_, v___y_684_, v___y_685_, v___y_686_, v___y_687_, v___y_688_);
lean_dec_ref(v___x_682_);
return v_res_692_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_wfRecursion___lam__1(lean_object* v_snd_693_, lean_object* v___y_694_, lean_object* v___y_695_, lean_object* v___y_696_, lean_object* v___y_697_, lean_object* v___y_698_, lean_object* v___y_699_){
_start:
{
lean_object* v___x_701_; 
v___x_701_ = l_Lean_Elab_addAsAxiom___redArg(v_snd_693_, v___y_698_, v___y_699_);
if (lean_obj_tag(v___x_701_) == 0)
{
lean_object* v_ref_702_; uint8_t v_kind_703_; lean_object* v_levelParams_704_; lean_object* v_modifiers_705_; lean_object* v_declName_706_; lean_object* v_binders_707_; lean_object* v_numSectionVars_708_; lean_object* v_type_709_; lean_object* v_value_710_; lean_object* v_termination_711_; lean_object* v___x_713_; uint8_t v_isShared_714_; uint8_t v_isSharedCheck_737_; 
lean_dec_ref_known(v___x_701_, 1);
v_ref_702_ = lean_ctor_get(v_snd_693_, 0);
v_kind_703_ = lean_ctor_get_uint8(v_snd_693_, sizeof(void*)*9);
v_levelParams_704_ = lean_ctor_get(v_snd_693_, 1);
v_modifiers_705_ = lean_ctor_get(v_snd_693_, 2);
v_declName_706_ = lean_ctor_get(v_snd_693_, 3);
v_binders_707_ = lean_ctor_get(v_snd_693_, 4);
v_numSectionVars_708_ = lean_ctor_get(v_snd_693_, 5);
v_type_709_ = lean_ctor_get(v_snd_693_, 6);
v_value_710_ = lean_ctor_get(v_snd_693_, 7);
v_termination_711_ = lean_ctor_get(v_snd_693_, 8);
v_isSharedCheck_737_ = !lean_is_exclusive(v_snd_693_);
if (v_isSharedCheck_737_ == 0)
{
v___x_713_ = v_snd_693_;
v_isShared_714_ = v_isSharedCheck_737_;
goto v_resetjp_712_;
}
else
{
lean_inc(v_termination_711_);
lean_inc(v_value_710_);
lean_inc(v_type_709_);
lean_inc(v_numSectionVars_708_);
lean_inc(v_binders_707_);
lean_inc(v_declName_706_);
lean_inc(v_modifiers_705_);
lean_inc(v_levelParams_704_);
lean_inc(v_ref_702_);
lean_dec(v_snd_693_);
v___x_713_ = lean_box(0);
v_isShared_714_ = v_isSharedCheck_737_;
goto v_resetjp_712_;
}
v_resetjp_712_:
{
lean_object* v___x_715_; 
v___x_715_ = l_Lean_Elab_WF_preprocess(v_value_710_, v___y_696_, v___y_697_, v___y_698_, v___y_699_);
if (lean_obj_tag(v___x_715_) == 0)
{
lean_object* v_a_716_; lean_object* v___x_718_; uint8_t v_isShared_719_; uint8_t v_isSharedCheck_728_; 
v_a_716_ = lean_ctor_get(v___x_715_, 0);
v_isSharedCheck_728_ = !lean_is_exclusive(v___x_715_);
if (v_isSharedCheck_728_ == 0)
{
v___x_718_ = v___x_715_;
v_isShared_719_ = v_isSharedCheck_728_;
goto v_resetjp_717_;
}
else
{
lean_inc(v_a_716_);
lean_dec(v___x_715_);
v___x_718_ = lean_box(0);
v_isShared_719_ = v_isSharedCheck_728_;
goto v_resetjp_717_;
}
v_resetjp_717_:
{
lean_object* v_expr_720_; lean_object* v___x_722_; 
v_expr_720_ = lean_ctor_get(v_a_716_, 0);
lean_inc_ref(v_expr_720_);
if (v_isShared_714_ == 0)
{
lean_ctor_set(v___x_713_, 7, v_expr_720_);
v___x_722_ = v___x_713_;
goto v_reusejp_721_;
}
else
{
lean_object* v_reuseFailAlloc_727_; 
v_reuseFailAlloc_727_ = lean_alloc_ctor(0, 9, 1);
lean_ctor_set(v_reuseFailAlloc_727_, 0, v_ref_702_);
lean_ctor_set(v_reuseFailAlloc_727_, 1, v_levelParams_704_);
lean_ctor_set(v_reuseFailAlloc_727_, 2, v_modifiers_705_);
lean_ctor_set(v_reuseFailAlloc_727_, 3, v_declName_706_);
lean_ctor_set(v_reuseFailAlloc_727_, 4, v_binders_707_);
lean_ctor_set(v_reuseFailAlloc_727_, 5, v_numSectionVars_708_);
lean_ctor_set(v_reuseFailAlloc_727_, 6, v_type_709_);
lean_ctor_set(v_reuseFailAlloc_727_, 7, v_expr_720_);
lean_ctor_set(v_reuseFailAlloc_727_, 8, v_termination_711_);
lean_ctor_set_uint8(v_reuseFailAlloc_727_, sizeof(void*)*9, v_kind_703_);
v___x_722_ = v_reuseFailAlloc_727_;
goto v_reusejp_721_;
}
v_reusejp_721_:
{
lean_object* v___x_723_; lean_object* v___x_725_; 
v___x_723_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_723_, 0, v___x_722_);
lean_ctor_set(v___x_723_, 1, v_a_716_);
if (v_isShared_719_ == 0)
{
lean_ctor_set(v___x_718_, 0, v___x_723_);
v___x_725_ = v___x_718_;
goto v_reusejp_724_;
}
else
{
lean_object* v_reuseFailAlloc_726_; 
v_reuseFailAlloc_726_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_726_, 0, v___x_723_);
v___x_725_ = v_reuseFailAlloc_726_;
goto v_reusejp_724_;
}
v_reusejp_724_:
{
return v___x_725_;
}
}
}
}
else
{
lean_object* v_a_729_; lean_object* v___x_731_; uint8_t v_isShared_732_; uint8_t v_isSharedCheck_736_; 
lean_del_object(v___x_713_);
lean_dec_ref(v_termination_711_);
lean_dec_ref(v_type_709_);
lean_dec(v_numSectionVars_708_);
lean_dec(v_binders_707_);
lean_dec(v_declName_706_);
lean_dec_ref(v_modifiers_705_);
lean_dec(v_levelParams_704_);
lean_dec(v_ref_702_);
v_a_729_ = lean_ctor_get(v___x_715_, 0);
v_isSharedCheck_736_ = !lean_is_exclusive(v___x_715_);
if (v_isSharedCheck_736_ == 0)
{
v___x_731_ = v___x_715_;
v_isShared_732_ = v_isSharedCheck_736_;
goto v_resetjp_730_;
}
else
{
lean_inc(v_a_729_);
lean_dec(v___x_715_);
v___x_731_ = lean_box(0);
v_isShared_732_ = v_isSharedCheck_736_;
goto v_resetjp_730_;
}
v_resetjp_730_:
{
lean_object* v___x_734_; 
if (v_isShared_732_ == 0)
{
v___x_734_ = v___x_731_;
goto v_reusejp_733_;
}
else
{
lean_object* v_reuseFailAlloc_735_; 
v_reuseFailAlloc_735_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_735_, 0, v_a_729_);
v___x_734_ = v_reuseFailAlloc_735_;
goto v_reusejp_733_;
}
v_reusejp_733_:
{
return v___x_734_;
}
}
}
}
}
else
{
lean_object* v_a_738_; lean_object* v___x_740_; uint8_t v_isShared_741_; uint8_t v_isSharedCheck_745_; 
lean_dec_ref(v_snd_693_);
v_a_738_ = lean_ctor_get(v___x_701_, 0);
v_isSharedCheck_745_ = !lean_is_exclusive(v___x_701_);
if (v_isSharedCheck_745_ == 0)
{
v___x_740_ = v___x_701_;
v_isShared_741_ = v_isSharedCheck_745_;
goto v_resetjp_739_;
}
else
{
lean_inc(v_a_738_);
lean_dec(v___x_701_);
v___x_740_ = lean_box(0);
v_isShared_741_ = v_isSharedCheck_745_;
goto v_resetjp_739_;
}
v_resetjp_739_:
{
lean_object* v___x_743_; 
if (v_isShared_741_ == 0)
{
v___x_743_ = v___x_740_;
goto v_reusejp_742_;
}
else
{
lean_object* v_reuseFailAlloc_744_; 
v_reuseFailAlloc_744_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_744_, 0, v_a_738_);
v___x_743_ = v_reuseFailAlloc_744_;
goto v_reusejp_742_;
}
v_reusejp_742_:
{
return v___x_743_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_wfRecursion___lam__1___boxed(lean_object* v_snd_746_, lean_object* v___y_747_, lean_object* v___y_748_, lean_object* v___y_749_, lean_object* v___y_750_, lean_object* v___y_751_, lean_object* v___y_752_, lean_object* v___y_753_){
_start:
{
lean_object* v_res_754_; 
v_res_754_ = l_Lean_Elab_wfRecursion___lam__1(v_snd_746_, v___y_747_, v___y_748_, v___y_749_, v___y_750_, v___y_751_, v___y_752_);
lean_dec(v___y_752_);
lean_dec_ref(v___y_751_);
lean_dec(v___y_750_);
lean_dec_ref(v___y_749_);
lean_dec(v___y_748_);
lean_dec_ref(v___y_747_);
return v_res_754_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_wfRecursion___lam__2(lean_object* v___x_758_, lean_object* v___y_759_, lean_object* v___y_760_, lean_object* v___y_761_, lean_object* v___y_762_, lean_object* v___y_763_, lean_object* v___y_764_){
_start:
{
lean_object* v_toCold_766_; lean_object* v_options_767_; uint8_t v_hasTrace_768_; 
v_toCold_766_ = lean_ctor_get(v___y_763_, 0);
v_options_767_ = lean_ctor_get(v_toCold_766_, 2);
v_hasTrace_768_ = lean_ctor_get_uint8(v_options_767_, sizeof(void*)*1);
if (v_hasTrace_768_ == 0)
{
lean_object* v___x_769_; lean_object* v___x_770_; 
lean_dec(v___x_758_);
v___x_769_ = lean_box(v_hasTrace_768_);
v___x_770_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_770_, 0, v___x_769_);
return v___x_770_;
}
else
{
lean_object* v_inheritedTraceOptions_771_; lean_object* v___x_772_; lean_object* v___x_773_; uint8_t v___x_774_; lean_object* v___x_775_; lean_object* v___x_776_; 
v_inheritedTraceOptions_771_ = lean_ctor_get(v_toCold_766_, 11);
v___x_772_ = ((lean_object*)(l_Lean_Elab_wfRecursion___lam__2___closed__1));
v___x_773_ = l_Lean_Name_append(v___x_772_, v___x_758_);
v___x_774_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_771_, v_options_767_, v___x_773_);
lean_dec(v___x_773_);
v___x_775_ = lean_box(v___x_774_);
v___x_776_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_776_, 0, v___x_775_);
return v___x_776_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_wfRecursion___lam__2___boxed(lean_object* v___x_777_, lean_object* v___y_778_, lean_object* v___y_779_, lean_object* v___y_780_, lean_object* v___y_781_, lean_object* v___y_782_, lean_object* v___y_783_, lean_object* v___y_784_){
_start:
{
lean_object* v_res_785_; 
v_res_785_ = l_Lean_Elab_wfRecursion___lam__2(v___x_777_, v___y_778_, v___y_779_, v___y_780_, v___y_781_, v___y_782_, v___y_783_);
lean_dec(v___y_783_);
lean_dec_ref(v___y_782_);
lean_dec(v___y_781_);
lean_dec_ref(v___y_780_);
lean_dec(v___y_779_);
lean_dec_ref(v___y_778_);
return v_res_785_;
}
}
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg___lam__0(uint8_t v_suppressElabErrors_793_, uint8_t v___y_794_, lean_object* v_x_795_){
_start:
{
if (lean_obj_tag(v_x_795_) == 1)
{
lean_object* v_pre_796_; 
v_pre_796_ = lean_ctor_get(v_x_795_, 0);
switch(lean_obj_tag(v_pre_796_))
{
case 1:
{
lean_object* v_pre_797_; 
v_pre_797_ = lean_ctor_get(v_pre_796_, 0);
switch(lean_obj_tag(v_pre_797_))
{
case 0:
{
lean_object* v_str_798_; lean_object* v_str_799_; lean_object* v___x_800_; uint8_t v___x_801_; 
v_str_798_ = lean_ctor_get(v_x_795_, 1);
v_str_799_ = lean_ctor_get(v_pre_796_, 1);
v___x_800_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg___lam__0___closed__0));
v___x_801_ = lean_string_dec_eq(v_str_799_, v___x_800_);
if (v___x_801_ == 0)
{
lean_object* v___x_802_; uint8_t v___x_803_; 
v___x_802_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg___lam__0___closed__1));
v___x_803_ = lean_string_dec_eq(v_str_799_, v___x_802_);
if (v___x_803_ == 0)
{
return v___x_803_;
}
else
{
lean_object* v___x_804_; uint8_t v___x_805_; 
v___x_804_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg___lam__0___closed__2));
v___x_805_ = lean_string_dec_eq(v_str_798_, v___x_804_);
if (v___x_805_ == 0)
{
return v___x_805_;
}
else
{
return v_suppressElabErrors_793_;
}
}
}
else
{
lean_object* v___x_806_; uint8_t v___x_807_; 
v___x_806_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg___lam__0___closed__3));
v___x_807_ = lean_string_dec_eq(v_str_798_, v___x_806_);
if (v___x_807_ == 0)
{
return v___x_807_;
}
else
{
return v_suppressElabErrors_793_;
}
}
}
case 1:
{
lean_object* v_pre_808_; 
v_pre_808_ = lean_ctor_get(v_pre_797_, 0);
if (lean_obj_tag(v_pre_808_) == 0)
{
lean_object* v_str_809_; lean_object* v_str_810_; lean_object* v_str_811_; lean_object* v___x_812_; uint8_t v___x_813_; 
v_str_809_ = lean_ctor_get(v_x_795_, 1);
v_str_810_ = lean_ctor_get(v_pre_796_, 1);
v_str_811_ = lean_ctor_get(v_pre_797_, 1);
v___x_812_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg___lam__0___closed__4));
v___x_813_ = lean_string_dec_eq(v_str_811_, v___x_812_);
if (v___x_813_ == 0)
{
return v___x_813_;
}
else
{
lean_object* v___x_814_; uint8_t v___x_815_; 
v___x_814_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg___lam__0___closed__5));
v___x_815_ = lean_string_dec_eq(v_str_810_, v___x_814_);
if (v___x_815_ == 0)
{
return v___x_815_;
}
else
{
lean_object* v___x_816_; uint8_t v___x_817_; 
v___x_816_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg___lam__0___closed__6));
v___x_817_ = lean_string_dec_eq(v_str_809_, v___x_816_);
if (v___x_817_ == 0)
{
return v___x_817_;
}
else
{
return v_suppressElabErrors_793_;
}
}
}
}
else
{
return v___y_794_;
}
}
default: 
{
return v___y_794_;
}
}
}
case 0:
{
lean_object* v_str_818_; lean_object* v___x_819_; uint8_t v___x_820_; 
v_str_818_ = lean_ctor_get(v_x_795_, 1);
v___x_819_ = ((lean_object*)(l_Lean_Elab_wfRecursion___lam__2___closed__0));
v___x_820_ = lean_string_dec_eq(v_str_818_, v___x_819_);
if (v___x_820_ == 0)
{
return v___x_820_;
}
else
{
return v_suppressElabErrors_793_;
}
}
default: 
{
return v___y_794_;
}
}
}
else
{
return v___y_794_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg___lam__0___boxed(lean_object* v_suppressElabErrors_821_, lean_object* v___y_822_, lean_object* v_x_823_){
_start:
{
uint8_t v_suppressElabErrors_boxed_824_; uint8_t v___y_44545__boxed_825_; uint8_t v_res_826_; lean_object* v_r_827_; 
v_suppressElabErrors_boxed_824_ = lean_unbox(v_suppressElabErrors_821_);
v___y_44545__boxed_825_ = lean_unbox(v___y_822_);
v_res_826_ = l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg___lam__0(v_suppressElabErrors_boxed_824_, v___y_44545__boxed_825_, v_x_823_);
lean_dec(v_x_823_);
v_r_827_ = lean_box(v_res_826_);
return v_r_827_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg(lean_object* v_ref_829_, lean_object* v_msgData_830_, uint8_t v_severity_831_, uint8_t v_isSilent_832_, lean_object* v___y_833_, lean_object* v___y_834_, lean_object* v___y_835_, lean_object* v___y_836_){
_start:
{
lean_object* v___y_839_; lean_object* v___y_840_; uint8_t v___y_841_; lean_object* v___y_842_; lean_object* v___y_843_; lean_object* v___y_844_; uint8_t v___y_845_; lean_object* v_currNamespace_846_; lean_object* v_openDecls_847_; lean_object* v___y_848_; lean_object* v___y_874_; lean_object* v___y_875_; lean_object* v___y_876_; uint8_t v___y_877_; uint8_t v___y_878_; lean_object* v___y_879_; lean_object* v___y_880_; lean_object* v___y_881_; uint8_t v___y_882_; lean_object* v___y_883_; lean_object* v___y_901_; lean_object* v___y_902_; lean_object* v___y_903_; uint8_t v___y_904_; uint8_t v___y_905_; lean_object* v___y_906_; lean_object* v___y_907_; lean_object* v___y_908_; uint8_t v___y_909_; lean_object* v___y_910_; lean_object* v___y_914_; lean_object* v___y_915_; lean_object* v___y_916_; uint8_t v___y_917_; lean_object* v___y_918_; lean_object* v___y_919_; lean_object* v___y_920_; uint8_t v___y_921_; uint8_t v___y_922_; uint8_t v___x_927_; lean_object* v___y_929_; lean_object* v___y_930_; lean_object* v___y_931_; lean_object* v___y_932_; lean_object* v___y_933_; uint8_t v___y_934_; lean_object* v___y_935_; uint8_t v___y_936_; uint8_t v___y_937_; uint8_t v___y_939_; uint8_t v___x_957_; 
v___x_927_ = 2;
v___x_957_ = l_Lean_instBEqMessageSeverity_beq(v_severity_831_, v___x_927_);
if (v___x_957_ == 0)
{
v___y_939_ = v___x_957_;
goto v___jp_938_;
}
else
{
uint8_t v___x_958_; 
lean_inc_ref(v_msgData_830_);
v___x_958_ = l_Lean_MessageData_hasSyntheticSorry(v_msgData_830_);
v___y_939_ = v___x_958_;
goto v___jp_938_;
}
v___jp_838_:
{
lean_object* v___x_849_; lean_object* v___x_850_; lean_object* v___x_851_; lean_object* v___x_852_; lean_object* v_env_853_; lean_object* v_nextMacroScope_854_; lean_object* v_ngen_855_; lean_object* v_auxDeclNGen_856_; lean_object* v_traceState_857_; lean_object* v_cache_858_; lean_object* v_messages_859_; lean_object* v_infoState_860_; lean_object* v_snapshotTasks_861_; lean_object* v___x_863_; uint8_t v_isShared_864_; uint8_t v_isSharedCheck_872_; 
lean_inc(v_openDecls_847_);
lean_inc(v_currNamespace_846_);
v___x_849_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_849_, 0, v_currNamespace_846_);
lean_ctor_set(v___x_849_, 1, v_openDecls_847_);
v___x_850_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_850_, 0, v___x_849_);
lean_ctor_set(v___x_850_, 1, v___y_842_);
lean_inc_ref(v___y_839_);
lean_inc_ref(v___y_844_);
v___x_851_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_851_, 0, v___y_844_);
lean_ctor_set(v___x_851_, 1, v___y_840_);
lean_ctor_set(v___x_851_, 2, v___y_843_);
lean_ctor_set(v___x_851_, 3, v___y_839_);
lean_ctor_set(v___x_851_, 4, v___x_850_);
lean_ctor_set_uint8(v___x_851_, sizeof(void*)*5, v___y_845_);
lean_ctor_set_uint8(v___x_851_, sizeof(void*)*5 + 1, v___y_841_);
lean_ctor_set_uint8(v___x_851_, sizeof(void*)*5 + 2, v_isSilent_832_);
v___x_852_ = lean_st_ref_take(v___y_848_);
v_env_853_ = lean_ctor_get(v___x_852_, 0);
v_nextMacroScope_854_ = lean_ctor_get(v___x_852_, 1);
v_ngen_855_ = lean_ctor_get(v___x_852_, 2);
v_auxDeclNGen_856_ = lean_ctor_get(v___x_852_, 3);
v_traceState_857_ = lean_ctor_get(v___x_852_, 4);
v_cache_858_ = lean_ctor_get(v___x_852_, 5);
v_messages_859_ = lean_ctor_get(v___x_852_, 6);
v_infoState_860_ = lean_ctor_get(v___x_852_, 7);
v_snapshotTasks_861_ = lean_ctor_get(v___x_852_, 8);
v_isSharedCheck_872_ = !lean_is_exclusive(v___x_852_);
if (v_isSharedCheck_872_ == 0)
{
v___x_863_ = v___x_852_;
v_isShared_864_ = v_isSharedCheck_872_;
goto v_resetjp_862_;
}
else
{
lean_inc(v_snapshotTasks_861_);
lean_inc(v_infoState_860_);
lean_inc(v_messages_859_);
lean_inc(v_cache_858_);
lean_inc(v_traceState_857_);
lean_inc(v_auxDeclNGen_856_);
lean_inc(v_ngen_855_);
lean_inc(v_nextMacroScope_854_);
lean_inc(v_env_853_);
lean_dec(v___x_852_);
v___x_863_ = lean_box(0);
v_isShared_864_ = v_isSharedCheck_872_;
goto v_resetjp_862_;
}
v_resetjp_862_:
{
lean_object* v___x_865_; lean_object* v___x_866_; lean_object* v___x_868_; 
v___x_865_ = lean_box(0);
v___x_866_ = l_Lean_MessageLog_add(v___x_851_, v_messages_859_);
if (v_isShared_864_ == 0)
{
lean_ctor_set(v___x_863_, 6, v___x_866_);
v___x_868_ = v___x_863_;
goto v_reusejp_867_;
}
else
{
lean_object* v_reuseFailAlloc_871_; 
v_reuseFailAlloc_871_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_871_, 0, v_env_853_);
lean_ctor_set(v_reuseFailAlloc_871_, 1, v_nextMacroScope_854_);
lean_ctor_set(v_reuseFailAlloc_871_, 2, v_ngen_855_);
lean_ctor_set(v_reuseFailAlloc_871_, 3, v_auxDeclNGen_856_);
lean_ctor_set(v_reuseFailAlloc_871_, 4, v_traceState_857_);
lean_ctor_set(v_reuseFailAlloc_871_, 5, v_cache_858_);
lean_ctor_set(v_reuseFailAlloc_871_, 6, v___x_866_);
lean_ctor_set(v_reuseFailAlloc_871_, 7, v_infoState_860_);
lean_ctor_set(v_reuseFailAlloc_871_, 8, v_snapshotTasks_861_);
v___x_868_ = v_reuseFailAlloc_871_;
goto v_reusejp_867_;
}
v_reusejp_867_:
{
lean_object* v___x_869_; lean_object* v___x_870_; 
v___x_869_ = lean_st_ref_put(v___y_848_, v___x_868_);
v___x_870_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_870_, 0, v___x_865_);
return v___x_870_;
}
}
}
v___jp_873_:
{
lean_object* v___x_884_; lean_object* v___x_885_; lean_object* v_a_886_; lean_object* v___x_888_; uint8_t v_isShared_889_; uint8_t v_isSharedCheck_899_; 
v___x_884_ = l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(v_msgData_830_);
v___x_885_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__0(v___x_884_, v___y_833_, v___y_834_, v___y_835_, v___y_836_);
v_a_886_ = lean_ctor_get(v___x_885_, 0);
v_isSharedCheck_899_ = !lean_is_exclusive(v___x_885_);
if (v_isSharedCheck_899_ == 0)
{
v___x_888_ = v___x_885_;
v_isShared_889_ = v_isSharedCheck_899_;
goto v_resetjp_887_;
}
else
{
lean_inc(v_a_886_);
lean_dec(v___x_885_);
v___x_888_ = lean_box(0);
v_isShared_889_ = v_isSharedCheck_899_;
goto v_resetjp_887_;
}
v_resetjp_887_:
{
lean_object* v___x_890_; lean_object* v___x_891_; lean_object* v___x_892_; lean_object* v___x_893_; 
lean_inc_ref_n(v___y_881_, 2);
v___x_890_ = l_Lean_FileMap_toPosition(v___y_881_, v___y_879_);
lean_dec(v___y_879_);
v___x_891_ = l_Lean_FileMap_toPosition(v___y_881_, v___y_883_);
lean_dec(v___y_883_);
v___x_892_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_892_, 0, v___x_891_);
v___x_893_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg___closed__0));
if (v___y_877_ == 0)
{
lean_del_object(v___x_888_);
lean_dec_ref(v___y_874_);
v___y_839_ = v___x_893_;
v___y_840_ = v___x_890_;
v___y_841_ = v___y_878_;
v___y_842_ = v_a_886_;
v___y_843_ = v___x_892_;
v___y_844_ = v___y_880_;
v___y_845_ = v___y_882_;
v_currNamespace_846_ = v___y_875_;
v_openDecls_847_ = v___y_876_;
v___y_848_ = v___y_836_;
goto v___jp_838_;
}
else
{
uint8_t v___x_894_; 
lean_inc(v_a_886_);
v___x_894_ = l_Lean_MessageData_hasTag(v___y_874_, v_a_886_);
if (v___x_894_ == 0)
{
lean_object* v___x_895_; lean_object* v___x_897_; 
lean_dec_ref_known(v___x_892_, 1);
lean_dec_ref(v___x_890_);
lean_dec(v_a_886_);
v___x_895_ = lean_box(0);
if (v_isShared_889_ == 0)
{
lean_ctor_set(v___x_888_, 0, v___x_895_);
v___x_897_ = v___x_888_;
goto v_reusejp_896_;
}
else
{
lean_object* v_reuseFailAlloc_898_; 
v_reuseFailAlloc_898_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_898_, 0, v___x_895_);
v___x_897_ = v_reuseFailAlloc_898_;
goto v_reusejp_896_;
}
v_reusejp_896_:
{
return v___x_897_;
}
}
else
{
lean_del_object(v___x_888_);
v___y_839_ = v___x_893_;
v___y_840_ = v___x_890_;
v___y_841_ = v___y_878_;
v___y_842_ = v_a_886_;
v___y_843_ = v___x_892_;
v___y_844_ = v___y_880_;
v___y_845_ = v___y_882_;
v_currNamespace_846_ = v___y_875_;
v_openDecls_847_ = v___y_876_;
v___y_848_ = v___y_836_;
goto v___jp_838_;
}
}
}
}
v___jp_900_:
{
lean_object* v___x_911_; 
v___x_911_ = l_Lean_Syntax_getTailPos_x3f(v___y_906_, v___y_909_);
lean_dec(v___y_906_);
if (lean_obj_tag(v___x_911_) == 0)
{
lean_inc(v___y_910_);
v___y_874_ = v___y_902_;
v___y_875_ = v___y_901_;
v___y_876_ = v___y_903_;
v___y_877_ = v___y_905_;
v___y_878_ = v___y_904_;
v___y_879_ = v___y_910_;
v___y_880_ = v___y_907_;
v___y_881_ = v___y_908_;
v___y_882_ = v___y_909_;
v___y_883_ = v___y_910_;
goto v___jp_873_;
}
else
{
lean_object* v_val_912_; 
v_val_912_ = lean_ctor_get(v___x_911_, 0);
lean_inc(v_val_912_);
lean_dec_ref_known(v___x_911_, 1);
v___y_874_ = v___y_902_;
v___y_875_ = v___y_901_;
v___y_876_ = v___y_903_;
v___y_877_ = v___y_905_;
v___y_878_ = v___y_904_;
v___y_879_ = v___y_910_;
v___y_880_ = v___y_907_;
v___y_881_ = v___y_908_;
v___y_882_ = v___y_909_;
v___y_883_ = v_val_912_;
goto v___jp_873_;
}
}
v___jp_913_:
{
lean_object* v_ref_923_; lean_object* v___x_924_; 
v_ref_923_ = l_Lean_replaceRef(v_ref_829_, v___y_918_);
v___x_924_ = l_Lean_Syntax_getPos_x3f(v_ref_923_, v___y_921_);
if (lean_obj_tag(v___x_924_) == 0)
{
lean_object* v___x_925_; 
v___x_925_ = lean_unsigned_to_nat(0u);
v___y_901_ = v___y_915_;
v___y_902_ = v___y_914_;
v___y_903_ = v___y_916_;
v___y_904_ = v___y_922_;
v___y_905_ = v___y_917_;
v___y_906_ = v_ref_923_;
v___y_907_ = v___y_919_;
v___y_908_ = v___y_920_;
v___y_909_ = v___y_921_;
v___y_910_ = v___x_925_;
goto v___jp_900_;
}
else
{
lean_object* v_val_926_; 
v_val_926_ = lean_ctor_get(v___x_924_, 0);
lean_inc(v_val_926_);
lean_dec_ref_known(v___x_924_, 1);
v___y_901_ = v___y_915_;
v___y_902_ = v___y_914_;
v___y_903_ = v___y_916_;
v___y_904_ = v___y_922_;
v___y_905_ = v___y_917_;
v___y_906_ = v_ref_923_;
v___y_907_ = v___y_919_;
v___y_908_ = v___y_920_;
v___y_909_ = v___y_921_;
v___y_910_ = v_val_926_;
goto v___jp_900_;
}
}
v___jp_928_:
{
if (v___y_937_ == 0)
{
v___y_914_ = v___y_930_;
v___y_915_ = v___y_929_;
v___y_916_ = v___y_932_;
v___y_917_ = v___y_934_;
v___y_918_ = v___y_935_;
v___y_919_ = v___y_931_;
v___y_920_ = v___y_933_;
v___y_921_ = v___y_936_;
v___y_922_ = v_severity_831_;
goto v___jp_913_;
}
else
{
v___y_914_ = v___y_930_;
v___y_915_ = v___y_929_;
v___y_916_ = v___y_932_;
v___y_917_ = v___y_934_;
v___y_918_ = v___y_935_;
v___y_919_ = v___y_931_;
v___y_920_ = v___y_933_;
v___y_921_ = v___y_936_;
v___y_922_ = v___x_927_;
goto v___jp_913_;
}
}
v___jp_938_:
{
if (v___y_939_ == 0)
{
lean_object* v_toCold_940_; lean_object* v_ref_941_; uint8_t v_suppressElabErrors_942_; lean_object* v_fileName_943_; lean_object* v_fileMap_944_; lean_object* v_options_945_; lean_object* v_currNamespace_946_; lean_object* v_openDecls_947_; lean_object* v___x_948_; lean_object* v___x_949_; lean_object* v___f_950_; uint8_t v___x_951_; uint8_t v___x_952_; 
v_toCold_940_ = lean_ctor_get(v___y_835_, 0);
v_ref_941_ = lean_ctor_get(v___y_835_, 2);
v_suppressElabErrors_942_ = lean_ctor_get_uint8(v___y_835_, sizeof(void*)*3 + 1);
v_fileName_943_ = lean_ctor_get(v_toCold_940_, 0);
v_fileMap_944_ = lean_ctor_get(v_toCold_940_, 1);
v_options_945_ = lean_ctor_get(v_toCold_940_, 2);
v_currNamespace_946_ = lean_ctor_get(v_toCold_940_, 4);
v_openDecls_947_ = lean_ctor_get(v_toCold_940_, 5);
v___x_948_ = lean_box(v_suppressElabErrors_942_);
v___x_949_ = lean_box(v___y_939_);
v___f_950_ = lean_alloc_closure((void*)(l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg___lam__0___boxed), 3, 2);
lean_closure_set(v___f_950_, 0, v___x_948_);
lean_closure_set(v___f_950_, 1, v___x_949_);
v___x_951_ = 1;
v___x_952_ = l_Lean_instBEqMessageSeverity_beq(v_severity_831_, v___x_951_);
if (v___x_952_ == 0)
{
v___y_929_ = v_currNamespace_946_;
v___y_930_ = v___f_950_;
v___y_931_ = v_fileName_943_;
v___y_932_ = v_openDecls_947_;
v___y_933_ = v_fileMap_944_;
v___y_934_ = v_suppressElabErrors_942_;
v___y_935_ = v_ref_941_;
v___y_936_ = v___y_939_;
v___y_937_ = v___x_952_;
goto v___jp_928_;
}
else
{
lean_object* v___x_953_; uint8_t v___x_954_; 
v___x_953_ = l_Lean_warningAsError;
v___x_954_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1_spec__4(v_options_945_, v___x_953_);
v___y_929_ = v_currNamespace_946_;
v___y_930_ = v___f_950_;
v___y_931_ = v_fileName_943_;
v___y_932_ = v_openDecls_947_;
v___y_933_ = v_fileMap_944_;
v___y_934_ = v_suppressElabErrors_942_;
v___y_935_ = v_ref_941_;
v___y_936_ = v___y_939_;
v___y_937_ = v___x_954_;
goto v___jp_928_;
}
}
else
{
lean_object* v___x_955_; lean_object* v___x_956_; 
lean_dec_ref(v_msgData_830_);
v___x_955_ = lean_box(0);
v___x_956_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_956_, 0, v___x_955_);
return v___x_956_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg___boxed(lean_object* v_ref_959_, lean_object* v_msgData_960_, lean_object* v_severity_961_, lean_object* v_isSilent_962_, lean_object* v___y_963_, lean_object* v___y_964_, lean_object* v___y_965_, lean_object* v___y_966_, lean_object* v___y_967_){
_start:
{
uint8_t v_severity_boxed_968_; uint8_t v_isSilent_boxed_969_; lean_object* v_res_970_; 
v_severity_boxed_968_ = lean_unbox(v_severity_961_);
v_isSilent_boxed_969_ = lean_unbox(v_isSilent_962_);
v_res_970_ = l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg(v_ref_959_, v_msgData_960_, v_severity_boxed_968_, v_isSilent_boxed_969_, v___y_963_, v___y_964_, v___y_965_, v___y_966_);
lean_dec(v___y_966_);
lean_dec_ref(v___y_965_);
lean_dec(v___y_964_);
lean_dec_ref(v___y_963_);
lean_dec(v_ref_959_);
return v_res_970_;
}
}
LEAN_EXPORT lean_object* l_Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11(lean_object* v_ref_971_, lean_object* v_msgData_972_, lean_object* v___y_973_, lean_object* v___y_974_, lean_object* v___y_975_, lean_object* v___y_976_, lean_object* v___y_977_, lean_object* v___y_978_){
_start:
{
uint8_t v___x_980_; uint8_t v___x_981_; lean_object* v___x_982_; 
v___x_980_ = 1;
v___x_981_ = 0;
v___x_982_ = l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg(v_ref_971_, v_msgData_972_, v___x_980_, v___x_981_, v___y_975_, v___y_976_, v___y_977_, v___y_978_);
return v___x_982_;
}
}
LEAN_EXPORT lean_object* l_Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11___boxed(lean_object* v_ref_983_, lean_object* v_msgData_984_, lean_object* v___y_985_, lean_object* v___y_986_, lean_object* v___y_987_, lean_object* v___y_988_, lean_object* v___y_989_, lean_object* v___y_990_, lean_object* v___y_991_){
_start:
{
lean_object* v_res_992_; 
v_res_992_ = l_Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11(v_ref_983_, v_msgData_984_, v___y_985_, v___y_986_, v___y_987_, v___y_988_, v___y_989_, v___y_990_);
lean_dec(v___y_990_);
lean_dec_ref(v___y_989_);
lean_dec(v___y_988_);
lean_dec_ref(v___y_987_);
lean_dec(v___y_986_);
lean_dec_ref(v___y_985_);
lean_dec(v_ref_983_);
return v_res_992_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_wfRecursion_spec__12(lean_object* v___x_1001_, lean_object* v_as_1002_, size_t v_i_1003_, size_t v_stop_1004_, lean_object* v_b_1005_, lean_object* v___y_1006_, lean_object* v___y_1007_, lean_object* v___y_1008_, lean_object* v___y_1009_, lean_object* v___y_1010_, lean_object* v___y_1011_){
_start:
{
lean_object* v_a_1014_; uint8_t v___x_1018_; 
v___x_1018_ = lean_usize_dec_eq(v_i_1003_, v_stop_1004_);
if (v___x_1018_ == 0)
{
lean_object* v___x_1019_; lean_object* v_name_1020_; lean_object* v_stx_1021_; uint8_t v___y_1023_; lean_object* v___x_1033_; uint8_t v___x_1034_; 
v___x_1019_ = lean_array_uget_borrowed(v_as_1002_, v_i_1003_);
v_name_1020_ = lean_ctor_get(v___x_1019_, 0);
v_stx_1021_ = lean_ctor_get(v___x_1019_, 1);
v___x_1033_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_wfRecursion_spec__12___closed__3));
v___x_1034_ = lean_name_eq(v_name_1020_, v___x_1033_);
if (v___x_1034_ == 0)
{
lean_object* v___x_1035_; uint8_t v___x_1036_; 
v___x_1035_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_wfRecursion_spec__12___closed__5));
v___x_1036_ = lean_name_eq(v_name_1020_, v___x_1035_);
if (v___x_1036_ == 0)
{
lean_object* v___x_1037_; 
v___x_1037_ = lean_box(0);
v_a_1014_ = v___x_1037_;
goto v___jp_1013_;
}
else
{
v___y_1023_ = v___x_1036_;
goto v___jp_1022_;
}
}
else
{
lean_object* v___x_1038_; uint8_t v___x_1039_; 
v___x_1038_ = lean_unsigned_to_nat(0u);
v___x_1039_ = lean_nat_dec_lt(v___x_1038_, v___x_1001_);
v___y_1023_ = v___x_1039_;
goto v___jp_1022_;
}
v___jp_1022_:
{
lean_object* v___x_1024_; lean_object* v___x_1025_; lean_object* v___x_1026_; lean_object* v___x_1027_; lean_object* v___x_1028_; lean_object* v___x_1029_; lean_object* v___x_1030_; lean_object* v___x_1031_; 
v___x_1024_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_wfRecursion_spec__12___closed__0));
lean_inc(v_name_1020_);
v___x_1025_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_name_1020_, v___y_1023_);
v___x_1026_ = lean_string_append(v___x_1024_, v___x_1025_);
lean_dec_ref(v___x_1025_);
v___x_1027_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_wfRecursion_spec__12___closed__1));
v___x_1028_ = lean_string_append(v___x_1026_, v___x_1027_);
v___x_1029_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1029_, 0, v___x_1028_);
v___x_1030_ = l_Lean_MessageData_ofFormat(v___x_1029_);
v___x_1031_ = l_Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11(v_stx_1021_, v___x_1030_, v___y_1006_, v___y_1007_, v___y_1008_, v___y_1009_, v___y_1010_, v___y_1011_);
if (lean_obj_tag(v___x_1031_) == 0)
{
lean_object* v_a_1032_; 
v_a_1032_ = lean_ctor_get(v___x_1031_, 0);
lean_inc(v_a_1032_);
lean_dec_ref_known(v___x_1031_, 1);
v_a_1014_ = v_a_1032_;
goto v___jp_1013_;
}
else
{
return v___x_1031_;
}
}
}
else
{
lean_object* v___x_1040_; 
v___x_1040_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1040_, 0, v_b_1005_);
return v___x_1040_;
}
v___jp_1013_:
{
size_t v___x_1015_; size_t v___x_1016_; 
v___x_1015_ = ((size_t)1ULL);
v___x_1016_ = lean_usize_add(v_i_1003_, v___x_1015_);
v_i_1003_ = v___x_1016_;
v_b_1005_ = v_a_1014_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_wfRecursion_spec__12___boxed(lean_object* v___x_1041_, lean_object* v_as_1042_, lean_object* v_i_1043_, lean_object* v_stop_1044_, lean_object* v_b_1045_, lean_object* v___y_1046_, lean_object* v___y_1047_, lean_object* v___y_1048_, lean_object* v___y_1049_, lean_object* v___y_1050_, lean_object* v___y_1051_, lean_object* v___y_1052_){
_start:
{
size_t v_i_boxed_1053_; size_t v_stop_boxed_1054_; lean_object* v_res_1055_; 
v_i_boxed_1053_ = lean_unbox_usize(v_i_1043_);
lean_dec(v_i_1043_);
v_stop_boxed_1054_ = lean_unbox_usize(v_stop_1044_);
lean_dec(v_stop_1044_);
v_res_1055_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_wfRecursion_spec__12(v___x_1041_, v_as_1042_, v_i_boxed_1053_, v_stop_boxed_1054_, v_b_1045_, v___y_1046_, v___y_1047_, v___y_1048_, v___y_1049_, v___y_1050_, v___y_1051_);
lean_dec(v___y_1051_);
lean_dec_ref(v___y_1050_);
lean_dec(v___y_1049_);
lean_dec_ref(v___y_1048_);
lean_dec(v___y_1047_);
lean_dec_ref(v___y_1046_);
lean_dec_ref(v_as_1042_);
lean_dec(v___x_1041_);
return v_res_1055_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_wfRecursion_spec__13(lean_object* v___x_1056_, lean_object* v_as_1057_, size_t v_i_1058_, size_t v_stop_1059_, lean_object* v_b_1060_, lean_object* v___y_1061_, lean_object* v___y_1062_, lean_object* v___y_1063_, lean_object* v___y_1064_, lean_object* v___y_1065_, lean_object* v___y_1066_){
_start:
{
lean_object* v_a_1069_; lean_object* v___y_1074_; uint8_t v___x_1076_; 
v___x_1076_ = lean_usize_dec_eq(v_i_1058_, v_stop_1059_);
if (v___x_1076_ == 0)
{
lean_object* v___x_1077_; lean_object* v_modifiers_1078_; lean_object* v_attrs_1079_; lean_object* v___x_1080_; lean_object* v___x_1081_; lean_object* v___x_1082_; uint8_t v___x_1083_; 
v___x_1077_ = lean_array_uget_borrowed(v_as_1057_, v_i_1058_);
v_modifiers_1078_ = lean_ctor_get(v___x_1077_, 2);
v_attrs_1079_ = lean_ctor_get(v_modifiers_1078_, 2);
v___x_1080_ = lean_unsigned_to_nat(0u);
v___x_1081_ = lean_array_get_size(v_attrs_1079_);
v___x_1082_ = lean_box(0);
v___x_1083_ = lean_nat_dec_lt(v___x_1080_, v___x_1081_);
if (v___x_1083_ == 0)
{
v_a_1069_ = v___x_1082_;
goto v___jp_1068_;
}
else
{
uint8_t v___x_1084_; 
v___x_1084_ = lean_nat_dec_le(v___x_1081_, v___x_1081_);
if (v___x_1084_ == 0)
{
if (v___x_1083_ == 0)
{
v_a_1069_ = v___x_1082_;
goto v___jp_1068_;
}
else
{
size_t v___x_1085_; size_t v___x_1086_; lean_object* v___x_1087_; 
v___x_1085_ = ((size_t)0ULL);
v___x_1086_ = lean_usize_of_nat(v___x_1081_);
v___x_1087_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_wfRecursion_spec__12(v___x_1056_, v_attrs_1079_, v___x_1085_, v___x_1086_, v___x_1082_, v___y_1061_, v___y_1062_, v___y_1063_, v___y_1064_, v___y_1065_, v___y_1066_);
v___y_1074_ = v___x_1087_;
goto v___jp_1073_;
}
}
else
{
size_t v___x_1088_; size_t v___x_1089_; lean_object* v___x_1090_; 
v___x_1088_ = ((size_t)0ULL);
v___x_1089_ = lean_usize_of_nat(v___x_1081_);
v___x_1090_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_wfRecursion_spec__12(v___x_1056_, v_attrs_1079_, v___x_1088_, v___x_1089_, v___x_1082_, v___y_1061_, v___y_1062_, v___y_1063_, v___y_1064_, v___y_1065_, v___y_1066_);
v___y_1074_ = v___x_1090_;
goto v___jp_1073_;
}
}
}
else
{
lean_object* v___x_1091_; 
v___x_1091_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1091_, 0, v_b_1060_);
return v___x_1091_;
}
v___jp_1068_:
{
size_t v___x_1070_; size_t v___x_1071_; 
v___x_1070_ = ((size_t)1ULL);
v___x_1071_ = lean_usize_add(v_i_1058_, v___x_1070_);
v_i_1058_ = v___x_1071_;
v_b_1060_ = v_a_1069_;
goto _start;
}
v___jp_1073_:
{
if (lean_obj_tag(v___y_1074_) == 0)
{
lean_object* v_a_1075_; 
v_a_1075_ = lean_ctor_get(v___y_1074_, 0);
lean_inc(v_a_1075_);
lean_dec_ref_known(v___y_1074_, 1);
v_a_1069_ = v_a_1075_;
goto v___jp_1068_;
}
else
{
return v___y_1074_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_wfRecursion_spec__13___boxed(lean_object* v___x_1092_, lean_object* v_as_1093_, lean_object* v_i_1094_, lean_object* v_stop_1095_, lean_object* v_b_1096_, lean_object* v___y_1097_, lean_object* v___y_1098_, lean_object* v___y_1099_, lean_object* v___y_1100_, lean_object* v___y_1101_, lean_object* v___y_1102_, lean_object* v___y_1103_){
_start:
{
size_t v_i_boxed_1104_; size_t v_stop_boxed_1105_; lean_object* v_res_1106_; 
v_i_boxed_1104_ = lean_unbox_usize(v_i_1094_);
lean_dec(v_i_1094_);
v_stop_boxed_1105_ = lean_unbox_usize(v_stop_1095_);
lean_dec(v_stop_1095_);
v_res_1106_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_wfRecursion_spec__13(v___x_1092_, v_as_1093_, v_i_boxed_1104_, v_stop_boxed_1105_, v_b_1096_, v___y_1097_, v___y_1098_, v___y_1099_, v___y_1100_, v___y_1101_, v___y_1102_);
lean_dec(v___y_1102_);
lean_dec_ref(v___y_1101_);
lean_dec(v___y_1100_);
lean_dec_ref(v___y_1099_);
lean_dec(v___y_1098_);
lean_dec_ref(v___y_1097_);
lean_dec_ref(v_as_1093_);
lean_dec(v___x_1092_);
return v_res_1106_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__10(size_t v_sz_1107_, size_t v_i_1108_, lean_object* v_bs_1109_){
_start:
{
uint8_t v___x_1110_; 
v___x_1110_ = lean_usize_dec_lt(v_i_1108_, v_sz_1107_);
if (v___x_1110_ == 0)
{
lean_object* v___x_1111_; 
v___x_1111_ = l_unsafeCast___redArg(v_bs_1109_);
lean_dec_ref(v_bs_1109_);
return v___x_1111_;
}
else
{
lean_object* v_v_1112_; lean_object* v___x_1113_; lean_object* v_termination_1114_; lean_object* v_decreasingBy_x3f_1115_; lean_object* v___x_1116_; lean_object* v_bs_x27_1117_; size_t v___x_1118_; size_t v___x_1119_; lean_object* v___x_1120_; lean_object* v___x_1121_; 
v_v_1112_ = lean_array_uget_borrowed(v_bs_1109_, v_i_1108_);
v___x_1113_ = l_unsafeCast___redArg(v_v_1112_);
v_termination_1114_ = lean_ctor_get(v___x_1113_, 8);
lean_inc_ref(v_termination_1114_);
lean_dec(v___x_1113_);
v_decreasingBy_x3f_1115_ = lean_ctor_get(v_termination_1114_, 4);
lean_inc(v_decreasingBy_x3f_1115_);
lean_dec_ref(v_termination_1114_);
v___x_1116_ = lean_unsigned_to_nat(0u);
v_bs_x27_1117_ = lean_array_uset(v_bs_1109_, v_i_1108_, v___x_1116_);
v___x_1118_ = ((size_t)1ULL);
v___x_1119_ = lean_usize_add(v_i_1108_, v___x_1118_);
v___x_1120_ = l_unsafeCast___redArg(v_decreasingBy_x3f_1115_);
lean_dec(v_decreasingBy_x3f_1115_);
v___x_1121_ = lean_array_uset(v_bs_x27_1117_, v_i_1108_, v___x_1120_);
v_i_1108_ = v___x_1119_;
v_bs_1109_ = v___x_1121_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__10___boxed(lean_object* v_sz_1123_, lean_object* v_i_1124_, lean_object* v_bs_1125_){
_start:
{
size_t v_sz_boxed_1126_; size_t v_i_boxed_1127_; lean_object* v_res_1128_; 
v_sz_boxed_1126_ = lean_unbox_usize(v_sz_1123_);
lean_dec(v_sz_1123_);
v_i_boxed_1127_ = lean_unbox_usize(v_i_1124_);
lean_dec(v_i_1124_);
v_res_1128_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__10(v_sz_boxed_1126_, v_i_boxed_1127_, v_bs_1125_);
return v_res_1128_;
}
}
static double _init_l_Lean_addTrace___at___00Lean_Elab_wfRecursion_spec__14___redArg___closed__0(void){
_start:
{
lean_object* v___x_1129_; double v___x_1130_; 
v___x_1129_ = lean_unsigned_to_nat(0u);
v___x_1130_ = lean_float_of_nat(v___x_1129_);
return v___x_1130_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_wfRecursion_spec__14___redArg(lean_object* v_cls_1133_, lean_object* v_msg_1134_, lean_object* v___y_1135_, lean_object* v___y_1136_, lean_object* v___y_1137_, lean_object* v___y_1138_){
_start:
{
lean_object* v_ref_1140_; lean_object* v___x_1141_; lean_object* v_a_1142_; lean_object* v___x_1144_; uint8_t v_isShared_1145_; uint8_t v_isSharedCheck_1186_; 
v_ref_1140_ = lean_ctor_get(v___y_1137_, 2);
v___x_1141_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__0(v_msg_1134_, v___y_1135_, v___y_1136_, v___y_1137_, v___y_1138_);
v_a_1142_ = lean_ctor_get(v___x_1141_, 0);
v_isSharedCheck_1186_ = !lean_is_exclusive(v___x_1141_);
if (v_isSharedCheck_1186_ == 0)
{
v___x_1144_ = v___x_1141_;
v_isShared_1145_ = v_isSharedCheck_1186_;
goto v_resetjp_1143_;
}
else
{
lean_inc(v_a_1142_);
lean_dec(v___x_1141_);
v___x_1144_ = lean_box(0);
v_isShared_1145_ = v_isSharedCheck_1186_;
goto v_resetjp_1143_;
}
v_resetjp_1143_:
{
lean_object* v___x_1146_; lean_object* v_traceState_1147_; lean_object* v_env_1148_; lean_object* v_nextMacroScope_1149_; lean_object* v_ngen_1150_; lean_object* v_auxDeclNGen_1151_; lean_object* v_cache_1152_; lean_object* v_messages_1153_; lean_object* v_infoState_1154_; lean_object* v_snapshotTasks_1155_; lean_object* v___x_1157_; uint8_t v_isShared_1158_; uint8_t v_isSharedCheck_1185_; 
v___x_1146_ = lean_st_ref_take(v___y_1138_);
v_traceState_1147_ = lean_ctor_get(v___x_1146_, 4);
v_env_1148_ = lean_ctor_get(v___x_1146_, 0);
v_nextMacroScope_1149_ = lean_ctor_get(v___x_1146_, 1);
v_ngen_1150_ = lean_ctor_get(v___x_1146_, 2);
v_auxDeclNGen_1151_ = lean_ctor_get(v___x_1146_, 3);
v_cache_1152_ = lean_ctor_get(v___x_1146_, 5);
v_messages_1153_ = lean_ctor_get(v___x_1146_, 6);
v_infoState_1154_ = lean_ctor_get(v___x_1146_, 7);
v_snapshotTasks_1155_ = lean_ctor_get(v___x_1146_, 8);
v_isSharedCheck_1185_ = !lean_is_exclusive(v___x_1146_);
if (v_isSharedCheck_1185_ == 0)
{
v___x_1157_ = v___x_1146_;
v_isShared_1158_ = v_isSharedCheck_1185_;
goto v_resetjp_1156_;
}
else
{
lean_inc(v_snapshotTasks_1155_);
lean_inc(v_infoState_1154_);
lean_inc(v_messages_1153_);
lean_inc(v_cache_1152_);
lean_inc(v_traceState_1147_);
lean_inc(v_auxDeclNGen_1151_);
lean_inc(v_ngen_1150_);
lean_inc(v_nextMacroScope_1149_);
lean_inc(v_env_1148_);
lean_dec(v___x_1146_);
v___x_1157_ = lean_box(0);
v_isShared_1158_ = v_isSharedCheck_1185_;
goto v_resetjp_1156_;
}
v_resetjp_1156_:
{
uint64_t v_tid_1159_; lean_object* v_traces_1160_; lean_object* v___x_1162_; uint8_t v_isShared_1163_; uint8_t v_isSharedCheck_1184_; 
v_tid_1159_ = lean_ctor_get_uint64(v_traceState_1147_, sizeof(void*)*1);
v_traces_1160_ = lean_ctor_get(v_traceState_1147_, 0);
v_isSharedCheck_1184_ = !lean_is_exclusive(v_traceState_1147_);
if (v_isSharedCheck_1184_ == 0)
{
v___x_1162_ = v_traceState_1147_;
v_isShared_1163_ = v_isSharedCheck_1184_;
goto v_resetjp_1161_;
}
else
{
lean_inc(v_traces_1160_);
lean_dec(v_traceState_1147_);
v___x_1162_ = lean_box(0);
v_isShared_1163_ = v_isSharedCheck_1184_;
goto v_resetjp_1161_;
}
v_resetjp_1161_:
{
lean_object* v___x_1164_; lean_object* v___x_1165_; double v___x_1166_; uint8_t v___x_1167_; lean_object* v___x_1168_; lean_object* v___x_1169_; lean_object* v___x_1170_; lean_object* v___x_1171_; lean_object* v___x_1172_; lean_object* v___x_1173_; lean_object* v___x_1175_; 
v___x_1164_ = lean_box(0);
v___x_1165_ = lean_box(0);
v___x_1166_ = lean_float_once(&l_Lean_addTrace___at___00Lean_Elab_wfRecursion_spec__14___redArg___closed__0, &l_Lean_addTrace___at___00Lean_Elab_wfRecursion_spec__14___redArg___closed__0_once, _init_l_Lean_addTrace___at___00Lean_Elab_wfRecursion_spec__14___redArg___closed__0);
v___x_1167_ = 0;
v___x_1168_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg___closed__0));
v___x_1169_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_1169_, 0, v_cls_1133_);
lean_ctor_set(v___x_1169_, 1, v___x_1165_);
lean_ctor_set(v___x_1169_, 2, v___x_1168_);
lean_ctor_set_float(v___x_1169_, sizeof(void*)*3, v___x_1166_);
lean_ctor_set_float(v___x_1169_, sizeof(void*)*3 + 8, v___x_1166_);
lean_ctor_set_uint8(v___x_1169_, sizeof(void*)*3 + 16, v___x_1167_);
v___x_1170_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Elab_wfRecursion_spec__14___redArg___closed__1));
v___x_1171_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_1171_, 0, v___x_1169_);
lean_ctor_set(v___x_1171_, 1, v_a_1142_);
lean_ctor_set(v___x_1171_, 2, v___x_1170_);
lean_inc(v_ref_1140_);
v___x_1172_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1172_, 0, v_ref_1140_);
lean_ctor_set(v___x_1172_, 1, v___x_1171_);
v___x_1173_ = l_Lean_PersistentArray_push___redArg(v_traces_1160_, v___x_1172_);
if (v_isShared_1163_ == 0)
{
lean_ctor_set(v___x_1162_, 0, v___x_1173_);
v___x_1175_ = v___x_1162_;
goto v_reusejp_1174_;
}
else
{
lean_object* v_reuseFailAlloc_1183_; 
v_reuseFailAlloc_1183_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_1183_, 0, v___x_1173_);
lean_ctor_set_uint64(v_reuseFailAlloc_1183_, sizeof(void*)*1, v_tid_1159_);
v___x_1175_ = v_reuseFailAlloc_1183_;
goto v_reusejp_1174_;
}
v_reusejp_1174_:
{
lean_object* v___x_1177_; 
if (v_isShared_1158_ == 0)
{
lean_ctor_set(v___x_1157_, 4, v___x_1175_);
v___x_1177_ = v___x_1157_;
goto v_reusejp_1176_;
}
else
{
lean_object* v_reuseFailAlloc_1182_; 
v_reuseFailAlloc_1182_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_1182_, 0, v_env_1148_);
lean_ctor_set(v_reuseFailAlloc_1182_, 1, v_nextMacroScope_1149_);
lean_ctor_set(v_reuseFailAlloc_1182_, 2, v_ngen_1150_);
lean_ctor_set(v_reuseFailAlloc_1182_, 3, v_auxDeclNGen_1151_);
lean_ctor_set(v_reuseFailAlloc_1182_, 4, v___x_1175_);
lean_ctor_set(v_reuseFailAlloc_1182_, 5, v_cache_1152_);
lean_ctor_set(v_reuseFailAlloc_1182_, 6, v_messages_1153_);
lean_ctor_set(v_reuseFailAlloc_1182_, 7, v_infoState_1154_);
lean_ctor_set(v_reuseFailAlloc_1182_, 8, v_snapshotTasks_1155_);
v___x_1177_ = v_reuseFailAlloc_1182_;
goto v_reusejp_1176_;
}
v_reusejp_1176_:
{
lean_object* v___x_1178_; lean_object* v___x_1180_; 
v___x_1178_ = lean_st_ref_put(v___y_1138_, v___x_1177_);
if (v_isShared_1145_ == 0)
{
lean_ctor_set(v___x_1144_, 0, v___x_1164_);
v___x_1180_ = v___x_1144_;
goto v_reusejp_1179_;
}
else
{
lean_object* v_reuseFailAlloc_1181_; 
v_reuseFailAlloc_1181_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1181_, 0, v___x_1164_);
v___x_1180_ = v_reuseFailAlloc_1181_;
goto v_reusejp_1179_;
}
v_reusejp_1179_:
{
return v___x_1180_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_wfRecursion_spec__14___redArg___boxed(lean_object* v_cls_1187_, lean_object* v_msg_1188_, lean_object* v___y_1189_, lean_object* v___y_1190_, lean_object* v___y_1191_, lean_object* v___y_1192_, lean_object* v___y_1193_){
_start:
{
lean_object* v_res_1194_; 
v_res_1194_ = l_Lean_addTrace___at___00Lean_Elab_wfRecursion_spec__14___redArg(v_cls_1187_, v_msg_1188_, v___y_1189_, v___y_1190_, v___y_1191_, v___y_1192_);
lean_dec(v___y_1192_);
lean_dec_ref(v___y_1191_);
lean_dec(v___y_1190_);
lean_dec_ref(v___y_1189_);
return v_res_1194_;
}
}
static lean_object* _init_l_Lean_Elab_wfRecursion___lam__3___closed__1(void){
_start:
{
lean_object* v___x_1196_; lean_object* v___x_1197_; 
v___x_1196_ = ((lean_object*)(l_Lean_Elab_wfRecursion___lam__3___closed__0));
v___x_1197_ = l_Lean_stringToMessageData(v___x_1196_);
return v___x_1197_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_wfRecursion___lam__3(lean_object* v_fst_1198_, lean_object* v_snd_1199_, size_t v_sz_1200_, size_t v___x_1201_, lean_object* v___x_1202_, lean_object* v_fixedArgs_1203_, lean_object* v_fst_1204_, lean_object* v___x_1205_, lean_object* v_a_1206_, lean_object* v___x_1207_, lean_object* v___x_1208_, lean_object* v_wfRel_1209_, lean_object* v___y_1210_, lean_object* v___y_1211_, lean_object* v___y_1212_, lean_object* v___y_1213_, lean_object* v___y_1214_, lean_object* v___y_1215_){
_start:
{
lean_object* v___y_1218_; lean_object* v___y_1219_; lean_object* v___y_1220_; lean_object* v___y_1221_; lean_object* v___y_1222_; lean_object* v___y_1223_; lean_object* v___y_1224_; lean_object* v_a_1225_; lean_object* v___y_1236_; lean_object* v___y_1237_; lean_object* v___y_1238_; lean_object* v___y_1239_; lean_object* v___y_1240_; lean_object* v___y_1241_; lean_object* v___y_1242_; lean_object* v___y_1243_; lean_object* v___y_1319_; lean_object* v___y_1320_; lean_object* v___y_1321_; lean_object* v___y_1322_; lean_object* v___y_1323_; lean_object* v___y_1324_; lean_object* v___y_1335_; lean_object* v___y_1336_; lean_object* v___y_1337_; lean_object* v___y_1338_; lean_object* v___y_1339_; lean_object* v___y_1340_; lean_object* v___y_1341_; lean_object* v___y_1351_; lean_object* v___y_1352_; lean_object* v___y_1353_; lean_object* v___y_1354_; lean_object* v___y_1355_; lean_object* v___y_1356_; lean_object* v_toCold_1375_; lean_object* v_options_1376_; uint8_t v_hasTrace_1377_; 
v_toCold_1375_ = lean_ctor_get(v___y_1214_, 0);
v_options_1376_ = lean_ctor_get(v_toCold_1375_, 2);
v_hasTrace_1377_ = lean_ctor_get_uint8(v_options_1376_, sizeof(void*)*1);
if (v_hasTrace_1377_ == 0)
{
lean_dec(v___x_1208_);
v___y_1351_ = v___y_1210_;
v___y_1352_ = v___y_1211_;
v___y_1353_ = v___y_1212_;
v___y_1354_ = v___y_1213_;
v___y_1355_ = v___y_1214_;
v___y_1356_ = v___y_1215_;
goto v___jp_1350_;
}
else
{
lean_object* v_inheritedTraceOptions_1378_; lean_object* v___x_1379_; lean_object* v___x_1380_; uint8_t v___x_1381_; 
v_inheritedTraceOptions_1378_ = lean_ctor_get(v_toCold_1375_, 11);
v___x_1379_ = ((lean_object*)(l_Lean_Elab_wfRecursion___lam__2___closed__1));
lean_inc(v___x_1208_);
v___x_1380_ = l_Lean_Name_append(v___x_1379_, v___x_1208_);
v___x_1381_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_1378_, v_options_1376_, v___x_1380_);
lean_dec(v___x_1380_);
if (v___x_1381_ == 0)
{
lean_dec(v___x_1208_);
v___y_1351_ = v___y_1210_;
v___y_1352_ = v___y_1211_;
v___y_1353_ = v___y_1212_;
v___y_1354_ = v___y_1213_;
v___y_1355_ = v___y_1214_;
v___y_1356_ = v___y_1215_;
goto v___jp_1350_;
}
else
{
lean_object* v___x_1382_; lean_object* v___x_1383_; lean_object* v___x_1384_; lean_object* v___x_1385_; 
v___x_1382_ = lean_obj_once(&l_Lean_Elab_wfRecursion___lam__3___closed__1, &l_Lean_Elab_wfRecursion___lam__3___closed__1_once, _init_l_Lean_Elab_wfRecursion___lam__3___closed__1);
lean_inc_ref(v_wfRel_1209_);
v___x_1383_ = l_Lean_MessageData_ofExpr(v_wfRel_1209_);
v___x_1384_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1384_, 0, v___x_1382_);
lean_ctor_set(v___x_1384_, 1, v___x_1383_);
v___x_1385_ = l_Lean_addTrace___at___00Lean_Elab_wfRecursion_spec__14___redArg(v___x_1208_, v___x_1384_, v___y_1212_, v___y_1213_, v___y_1214_, v___y_1215_);
if (lean_obj_tag(v___x_1385_) == 0)
{
lean_dec_ref_known(v___x_1385_, 1);
v___y_1351_ = v___y_1210_;
v___y_1352_ = v___y_1211_;
v___y_1353_ = v___y_1212_;
v___y_1354_ = v___y_1213_;
v___y_1355_ = v___y_1214_;
v___y_1356_ = v___y_1215_;
goto v___jp_1350_;
}
else
{
lean_object* v_a_1386_; lean_object* v___x_1388_; uint8_t v_isShared_1389_; uint8_t v_isSharedCheck_1393_; 
lean_dec_ref(v_wfRel_1209_);
lean_dec(v___x_1205_);
lean_dec_ref(v_fst_1204_);
lean_dec_ref(v_fixedArgs_1203_);
lean_dec(v___x_1202_);
lean_dec_ref(v_fst_1198_);
v_a_1386_ = lean_ctor_get(v___x_1385_, 0);
v_isSharedCheck_1393_ = !lean_is_exclusive(v___x_1385_);
if (v_isSharedCheck_1393_ == 0)
{
v___x_1388_ = v___x_1385_;
v_isShared_1389_ = v_isSharedCheck_1393_;
goto v_resetjp_1387_;
}
else
{
lean_inc(v_a_1386_);
lean_dec(v___x_1385_);
v___x_1388_ = lean_box(0);
v_isShared_1389_ = v_isSharedCheck_1393_;
goto v_resetjp_1387_;
}
v_resetjp_1387_:
{
lean_object* v___x_1391_; 
if (v_isShared_1389_ == 0)
{
v___x_1391_ = v___x_1388_;
goto v_reusejp_1390_;
}
else
{
lean_object* v_reuseFailAlloc_1392_; 
v_reuseFailAlloc_1392_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1392_, 0, v_a_1386_);
v___x_1391_ = v_reuseFailAlloc_1392_;
goto v_reusejp_1390_;
}
v_reusejp_1390_:
{
return v___x_1391_;
}
}
}
}
}
v___jp_1217_:
{
lean_object* v___x_1226_; lean_object* v___x_1228_; uint8_t v_isShared_1229_; uint8_t v_isSharedCheck_1233_; 
v___x_1226_ = l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9___redArg(v___y_1219_, v___y_1218_, v___y_1223_);
v_isSharedCheck_1233_ = !lean_is_exclusive(v___x_1226_);
if (v_isSharedCheck_1233_ == 0)
{
lean_object* v_unused_1234_; 
v_unused_1234_ = lean_ctor_get(v___x_1226_, 0);
lean_dec(v_unused_1234_);
v___x_1228_ = v___x_1226_;
v_isShared_1229_ = v_isSharedCheck_1233_;
goto v_resetjp_1227_;
}
else
{
lean_dec(v___x_1226_);
v___x_1228_ = lean_box(0);
v_isShared_1229_ = v_isSharedCheck_1233_;
goto v_resetjp_1227_;
}
v_resetjp_1227_:
{
lean_object* v___x_1231_; 
if (v_isShared_1229_ == 0)
{
lean_ctor_set_tag(v___x_1228_, 1);
lean_ctor_set(v___x_1228_, 0, v_a_1225_);
v___x_1231_ = v___x_1228_;
goto v_reusejp_1230_;
}
else
{
lean_object* v_reuseFailAlloc_1232_; 
v_reuseFailAlloc_1232_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1232_, 0, v_a_1225_);
v___x_1231_ = v_reuseFailAlloc_1232_;
goto v_reusejp_1230_;
}
v_reusejp_1230_:
{
return v___x_1231_;
}
}
}
v___jp_1235_:
{
if (lean_obj_tag(v___y_1243_) == 0)
{
lean_object* v_a_1244_; lean_object* v___x_1245_; lean_object* v_env_1246_; lean_object* v___x_1247_; lean_object* v___x_1248_; 
v_a_1244_ = lean_ctor_get(v___y_1243_, 0);
lean_inc(v_a_1244_);
lean_dec_ref_known(v___y_1243_, 1);
v___x_1245_ = lean_st_ref_get(v___y_1241_);
v_env_1246_ = lean_ctor_get(v___x_1245_, 0);
lean_inc_ref_n(v_env_1246_, 2);
lean_dec(v___x_1245_);
v___x_1247_ = l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9___redArg(v___y_1237_, v___y_1236_, v___y_1241_);
lean_dec_ref(v___x_1247_);
v___x_1248_ = l_Lean_Meta_unfoldDeclsFrom(v_env_1246_, v_a_1244_, v___y_1238_, v___y_1241_);
if (lean_obj_tag(v___x_1248_) == 0)
{
lean_object* v_a_1249_; lean_object* v___x_1251_; uint8_t v_isShared_1252_; uint8_t v_isSharedCheck_1308_; 
v_a_1249_ = lean_ctor_get(v___x_1248_, 0);
v_isSharedCheck_1308_ = !lean_is_exclusive(v___x_1248_);
if (v_isSharedCheck_1308_ == 0)
{
v___x_1251_ = v___x_1248_;
v_isShared_1252_ = v_isSharedCheck_1308_;
goto v_resetjp_1250_;
}
else
{
lean_inc(v_a_1249_);
lean_dec(v___x_1248_);
v___x_1251_ = lean_box(0);
v_isShared_1252_ = v_isSharedCheck_1308_;
goto v_resetjp_1250_;
}
v_resetjp_1250_:
{
lean_object* v___x_1253_; lean_object* v_env_1254_; lean_object* v_nextMacroScope_1255_; lean_object* v_ngen_1256_; lean_object* v_auxDeclNGen_1257_; lean_object* v_traceState_1258_; lean_object* v_messages_1259_; lean_object* v_infoState_1260_; lean_object* v_snapshotTasks_1261_; lean_object* v___x_1263_; uint8_t v_isShared_1264_; uint8_t v_isSharedCheck_1306_; 
v___x_1253_ = lean_st_ref_take(v___y_1241_);
v_env_1254_ = lean_ctor_get(v___x_1253_, 0);
v_nextMacroScope_1255_ = lean_ctor_get(v___x_1253_, 1);
v_ngen_1256_ = lean_ctor_get(v___x_1253_, 2);
v_auxDeclNGen_1257_ = lean_ctor_get(v___x_1253_, 3);
v_traceState_1258_ = lean_ctor_get(v___x_1253_, 4);
v_messages_1259_ = lean_ctor_get(v___x_1253_, 6);
v_infoState_1260_ = lean_ctor_get(v___x_1253_, 7);
v_snapshotTasks_1261_ = lean_ctor_get(v___x_1253_, 8);
v_isSharedCheck_1306_ = !lean_is_exclusive(v___x_1253_);
if (v_isSharedCheck_1306_ == 0)
{
lean_object* v_unused_1307_; 
v_unused_1307_ = lean_ctor_get(v___x_1253_, 5);
lean_dec(v_unused_1307_);
v___x_1263_ = v___x_1253_;
v_isShared_1264_ = v_isSharedCheck_1306_;
goto v_resetjp_1262_;
}
else
{
lean_inc(v_snapshotTasks_1261_);
lean_inc(v_infoState_1260_);
lean_inc(v_messages_1259_);
lean_inc(v_traceState_1258_);
lean_inc(v_auxDeclNGen_1257_);
lean_inc(v_ngen_1256_);
lean_inc(v_nextMacroScope_1255_);
lean_inc(v_env_1254_);
lean_dec(v___x_1253_);
v___x_1263_ = lean_box(0);
v_isShared_1264_ = v_isSharedCheck_1306_;
goto v_resetjp_1262_;
}
v_resetjp_1262_:
{
lean_object* v___x_1265_; lean_object* v___x_1266_; lean_object* v___x_1268_; 
v___x_1265_ = l_Lean_copyExtraModUses(v_env_1246_, v_env_1254_);
v___x_1266_ = lean_obj_once(&l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9___redArg___closed__2, &l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9___redArg___closed__2_once, _init_l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9___redArg___closed__2);
if (v_isShared_1264_ == 0)
{
lean_ctor_set(v___x_1263_, 5, v___x_1266_);
lean_ctor_set(v___x_1263_, 0, v___x_1265_);
v___x_1268_ = v___x_1263_;
goto v_reusejp_1267_;
}
else
{
lean_object* v_reuseFailAlloc_1305_; 
v_reuseFailAlloc_1305_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_1305_, 0, v___x_1265_);
lean_ctor_set(v_reuseFailAlloc_1305_, 1, v_nextMacroScope_1255_);
lean_ctor_set(v_reuseFailAlloc_1305_, 2, v_ngen_1256_);
lean_ctor_set(v_reuseFailAlloc_1305_, 3, v_auxDeclNGen_1257_);
lean_ctor_set(v_reuseFailAlloc_1305_, 4, v_traceState_1258_);
lean_ctor_set(v_reuseFailAlloc_1305_, 5, v___x_1266_);
lean_ctor_set(v_reuseFailAlloc_1305_, 6, v_messages_1259_);
lean_ctor_set(v_reuseFailAlloc_1305_, 7, v_infoState_1260_);
lean_ctor_set(v_reuseFailAlloc_1305_, 8, v_snapshotTasks_1261_);
v___x_1268_ = v_reuseFailAlloc_1305_;
goto v_reusejp_1267_;
}
v_reusejp_1267_:
{
lean_object* v___x_1269_; lean_object* v___x_1270_; lean_object* v_mctx_1271_; lean_object* v_zetaDeltaFVarIds_1272_; lean_object* v_postponed_1273_; lean_object* v_diag_1274_; lean_object* v___x_1276_; uint8_t v_isShared_1277_; uint8_t v_isSharedCheck_1303_; 
v___x_1269_ = lean_st_ref_put(v___y_1241_, v___x_1268_);
v___x_1270_ = lean_st_ref_take(v___y_1236_);
v_mctx_1271_ = lean_ctor_get(v___x_1270_, 0);
v_zetaDeltaFVarIds_1272_ = lean_ctor_get(v___x_1270_, 2);
v_postponed_1273_ = lean_ctor_get(v___x_1270_, 3);
v_diag_1274_ = lean_ctor_get(v___x_1270_, 4);
v_isSharedCheck_1303_ = !lean_is_exclusive(v___x_1270_);
if (v_isSharedCheck_1303_ == 0)
{
lean_object* v_unused_1304_; 
v_unused_1304_ = lean_ctor_get(v___x_1270_, 1);
lean_dec(v_unused_1304_);
v___x_1276_ = v___x_1270_;
v_isShared_1277_ = v_isSharedCheck_1303_;
goto v_resetjp_1275_;
}
else
{
lean_inc(v_diag_1274_);
lean_inc(v_postponed_1273_);
lean_inc(v_zetaDeltaFVarIds_1272_);
lean_inc(v_mctx_1271_);
lean_dec(v___x_1270_);
v___x_1276_ = lean_box(0);
v_isShared_1277_ = v_isSharedCheck_1303_;
goto v_resetjp_1275_;
}
v_resetjp_1275_:
{
lean_object* v___x_1278_; lean_object* v___x_1280_; 
v___x_1278_ = lean_obj_once(&l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9___redArg___closed__3, &l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9___redArg___closed__3_once, _init_l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9___redArg___closed__3);
if (v_isShared_1277_ == 0)
{
lean_ctor_set(v___x_1276_, 1, v___x_1278_);
v___x_1280_ = v___x_1276_;
goto v_reusejp_1279_;
}
else
{
lean_object* v_reuseFailAlloc_1302_; 
v_reuseFailAlloc_1302_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1302_, 0, v_mctx_1271_);
lean_ctor_set(v_reuseFailAlloc_1302_, 1, v___x_1278_);
lean_ctor_set(v_reuseFailAlloc_1302_, 2, v_zetaDeltaFVarIds_1272_);
lean_ctor_set(v_reuseFailAlloc_1302_, 3, v_postponed_1273_);
lean_ctor_set(v_reuseFailAlloc_1302_, 4, v_diag_1274_);
v___x_1280_ = v_reuseFailAlloc_1302_;
goto v_reusejp_1279_;
}
v_reusejp_1279_:
{
lean_object* v___x_1281_; lean_object* v_ref_1282_; uint8_t v_kind_1283_; lean_object* v_levelParams_1284_; lean_object* v_modifiers_1285_; lean_object* v_declName_1286_; lean_object* v_binders_1287_; lean_object* v_numSectionVars_1288_; lean_object* v_type_1289_; lean_object* v_termination_1290_; lean_object* v___x_1292_; uint8_t v_isShared_1293_; uint8_t v_isSharedCheck_1300_; 
v___x_1281_ = lean_st_ref_put(v___y_1236_, v___x_1280_);
v_ref_1282_ = lean_ctor_get(v_fst_1198_, 0);
v_kind_1283_ = lean_ctor_get_uint8(v_fst_1198_, sizeof(void*)*9);
v_levelParams_1284_ = lean_ctor_get(v_fst_1198_, 1);
v_modifiers_1285_ = lean_ctor_get(v_fst_1198_, 2);
v_declName_1286_ = lean_ctor_get(v_fst_1198_, 3);
v_binders_1287_ = lean_ctor_get(v_fst_1198_, 4);
v_numSectionVars_1288_ = lean_ctor_get(v_fst_1198_, 5);
v_type_1289_ = lean_ctor_get(v_fst_1198_, 6);
v_termination_1290_ = lean_ctor_get(v_fst_1198_, 8);
v_isSharedCheck_1300_ = !lean_is_exclusive(v_fst_1198_);
if (v_isSharedCheck_1300_ == 0)
{
lean_object* v_unused_1301_; 
v_unused_1301_ = lean_ctor_get(v_fst_1198_, 7);
lean_dec(v_unused_1301_);
v___x_1292_ = v_fst_1198_;
v_isShared_1293_ = v_isSharedCheck_1300_;
goto v_resetjp_1291_;
}
else
{
lean_inc(v_termination_1290_);
lean_inc(v_type_1289_);
lean_inc(v_numSectionVars_1288_);
lean_inc(v_binders_1287_);
lean_inc(v_declName_1286_);
lean_inc(v_modifiers_1285_);
lean_inc(v_levelParams_1284_);
lean_inc(v_ref_1282_);
lean_dec(v_fst_1198_);
v___x_1292_ = lean_box(0);
v_isShared_1293_ = v_isSharedCheck_1300_;
goto v_resetjp_1291_;
}
v_resetjp_1291_:
{
lean_object* v___x_1295_; 
if (v_isShared_1293_ == 0)
{
lean_ctor_set(v___x_1292_, 7, v_a_1249_);
v___x_1295_ = v___x_1292_;
goto v_reusejp_1294_;
}
else
{
lean_object* v_reuseFailAlloc_1299_; 
v_reuseFailAlloc_1299_ = lean_alloc_ctor(0, 9, 1);
lean_ctor_set(v_reuseFailAlloc_1299_, 0, v_ref_1282_);
lean_ctor_set(v_reuseFailAlloc_1299_, 1, v_levelParams_1284_);
lean_ctor_set(v_reuseFailAlloc_1299_, 2, v_modifiers_1285_);
lean_ctor_set(v_reuseFailAlloc_1299_, 3, v_declName_1286_);
lean_ctor_set(v_reuseFailAlloc_1299_, 4, v_binders_1287_);
lean_ctor_set(v_reuseFailAlloc_1299_, 5, v_numSectionVars_1288_);
lean_ctor_set(v_reuseFailAlloc_1299_, 6, v_type_1289_);
lean_ctor_set(v_reuseFailAlloc_1299_, 7, v_a_1249_);
lean_ctor_set(v_reuseFailAlloc_1299_, 8, v_termination_1290_);
lean_ctor_set_uint8(v_reuseFailAlloc_1299_, sizeof(void*)*9, v_kind_1283_);
v___x_1295_ = v_reuseFailAlloc_1299_;
goto v_reusejp_1294_;
}
v_reusejp_1294_:
{
lean_object* v___x_1297_; 
if (v_isShared_1252_ == 0)
{
lean_ctor_set(v___x_1251_, 0, v___x_1295_);
v___x_1297_ = v___x_1251_;
goto v_reusejp_1296_;
}
else
{
lean_object* v_reuseFailAlloc_1298_; 
v_reuseFailAlloc_1298_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1298_, 0, v___x_1295_);
v___x_1297_ = v_reuseFailAlloc_1298_;
goto v_reusejp_1296_;
}
v_reusejp_1296_:
{
return v___x_1297_;
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
lean_object* v_a_1309_; lean_object* v___x_1311_; uint8_t v_isShared_1312_; uint8_t v_isSharedCheck_1316_; 
lean_dec_ref(v_env_1246_);
lean_dec_ref(v_fst_1198_);
v_a_1309_ = lean_ctor_get(v___x_1248_, 0);
v_isSharedCheck_1316_ = !lean_is_exclusive(v___x_1248_);
if (v_isSharedCheck_1316_ == 0)
{
v___x_1311_ = v___x_1248_;
v_isShared_1312_ = v_isSharedCheck_1316_;
goto v_resetjp_1310_;
}
else
{
lean_inc(v_a_1309_);
lean_dec(v___x_1248_);
v___x_1311_ = lean_box(0);
v_isShared_1312_ = v_isSharedCheck_1316_;
goto v_resetjp_1310_;
}
v_resetjp_1310_:
{
lean_object* v___x_1314_; 
if (v_isShared_1312_ == 0)
{
v___x_1314_ = v___x_1311_;
goto v_reusejp_1313_;
}
else
{
lean_object* v_reuseFailAlloc_1315_; 
v_reuseFailAlloc_1315_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1315_, 0, v_a_1309_);
v___x_1314_ = v_reuseFailAlloc_1315_;
goto v_reusejp_1313_;
}
v_reusejp_1313_:
{
return v___x_1314_;
}
}
}
}
else
{
lean_object* v_a_1317_; 
lean_dec_ref(v_fst_1198_);
v_a_1317_ = lean_ctor_get(v___y_1243_, 0);
lean_inc(v_a_1317_);
lean_dec_ref_known(v___y_1243_, 1);
v___y_1218_ = v___y_1236_;
v___y_1219_ = v___y_1237_;
v___y_1220_ = v___y_1238_;
v___y_1221_ = v___y_1239_;
v___y_1222_ = v___y_1240_;
v___y_1223_ = v___y_1241_;
v___y_1224_ = v___y_1242_;
v_a_1225_ = v_a_1317_;
goto v___jp_1217_;
}
}
v___jp_1318_:
{
lean_object* v___x_1325_; lean_object* v_env_1326_; lean_object* v___x_1327_; 
v___x_1325_ = lean_st_ref_get(v___y_1324_);
v_env_1326_ = lean_ctor_get(v___x_1325_, 0);
lean_inc_ref(v_env_1326_);
lean_dec(v___x_1325_);
v___x_1327_ = l_Lean_Elab_addAsAxiom___redArg(v_snd_1199_, v___y_1323_, v___y_1324_);
if (lean_obj_tag(v___x_1327_) == 0)
{
lean_object* v___x_1328_; lean_object* v___x_1329_; lean_object* v___x_1330_; 
lean_dec_ref_known(v___x_1327_, 1);
v___x_1328_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__10(v_sz_1200_, v___x_1201_, v___x_1202_);
v___x_1329_ = l_unsafeCast___redArg(v___x_1328_);
lean_dec_ref(v___x_1328_);
lean_inc_ref(v_fst_1198_);
v___x_1330_ = l_Lean_Elab_WF_mkFix(v_fst_1198_, v_fixedArgs_1203_, v_fst_1204_, v_wfRel_1209_, v___x_1205_, v___x_1329_, v___y_1319_, v___y_1320_, v___y_1321_, v___y_1322_, v___y_1323_, v___y_1324_);
if (lean_obj_tag(v___x_1330_) == 0)
{
lean_object* v_a_1331_; lean_object* v___x_1332_; 
v_a_1331_ = lean_ctor_get(v___x_1330_, 0);
lean_inc(v_a_1331_);
lean_dec_ref_known(v___x_1330_, 1);
v___x_1332_ = l_Lean_Elab_eraseRecAppSyntaxExpr(v_a_1331_, v___y_1323_, v___y_1324_);
v___y_1236_ = v___y_1322_;
v___y_1237_ = v_env_1326_;
v___y_1238_ = v___y_1323_;
v___y_1239_ = v___y_1319_;
v___y_1240_ = v___y_1321_;
v___y_1241_ = v___y_1324_;
v___y_1242_ = v___y_1320_;
v___y_1243_ = v___x_1332_;
goto v___jp_1235_;
}
else
{
v___y_1236_ = v___y_1322_;
v___y_1237_ = v_env_1326_;
v___y_1238_ = v___y_1323_;
v___y_1239_ = v___y_1319_;
v___y_1240_ = v___y_1321_;
v___y_1241_ = v___y_1324_;
v___y_1242_ = v___y_1320_;
v___y_1243_ = v___x_1330_;
goto v___jp_1235_;
}
}
else
{
lean_object* v_a_1333_; 
lean_dec_ref(v_wfRel_1209_);
lean_dec(v___x_1205_);
lean_dec_ref(v_fst_1204_);
lean_dec_ref(v_fixedArgs_1203_);
lean_dec(v___x_1202_);
lean_dec_ref(v_fst_1198_);
v_a_1333_ = lean_ctor_get(v___x_1327_, 0);
lean_inc(v_a_1333_);
lean_dec_ref_known(v___x_1327_, 1);
v___y_1218_ = v___y_1322_;
v___y_1219_ = v_env_1326_;
v___y_1220_ = v___y_1323_;
v___y_1221_ = v___y_1319_;
v___y_1222_ = v___y_1321_;
v___y_1223_ = v___y_1324_;
v___y_1224_ = v___y_1320_;
v_a_1225_ = v_a_1333_;
goto v___jp_1217_;
}
}
v___jp_1334_:
{
if (lean_obj_tag(v___y_1341_) == 0)
{
lean_dec_ref_known(v___y_1341_, 1);
v___y_1319_ = v___y_1335_;
v___y_1320_ = v___y_1338_;
v___y_1321_ = v___y_1339_;
v___y_1322_ = v___y_1340_;
v___y_1323_ = v___y_1337_;
v___y_1324_ = v___y_1336_;
goto v___jp_1318_;
}
else
{
lean_object* v_a_1342_; lean_object* v___x_1344_; uint8_t v_isShared_1345_; uint8_t v_isSharedCheck_1349_; 
lean_dec_ref(v_wfRel_1209_);
lean_dec(v___x_1205_);
lean_dec_ref(v_fst_1204_);
lean_dec_ref(v_fixedArgs_1203_);
lean_dec(v___x_1202_);
lean_dec_ref(v_fst_1198_);
v_a_1342_ = lean_ctor_get(v___y_1341_, 0);
v_isSharedCheck_1349_ = !lean_is_exclusive(v___y_1341_);
if (v_isSharedCheck_1349_ == 0)
{
v___x_1344_ = v___y_1341_;
v_isShared_1345_ = v_isSharedCheck_1349_;
goto v_resetjp_1343_;
}
else
{
lean_inc(v_a_1342_);
lean_dec(v___y_1341_);
v___x_1344_ = lean_box(0);
v_isShared_1345_ = v_isSharedCheck_1349_;
goto v_resetjp_1343_;
}
v_resetjp_1343_:
{
lean_object* v___x_1347_; 
if (v_isShared_1345_ == 0)
{
v___x_1347_ = v___x_1344_;
goto v_reusejp_1346_;
}
else
{
lean_object* v_reuseFailAlloc_1348_; 
v_reuseFailAlloc_1348_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1348_, 0, v_a_1342_);
v___x_1347_ = v_reuseFailAlloc_1348_;
goto v_reusejp_1346_;
}
v_reusejp_1346_:
{
return v___x_1347_;
}
}
}
}
v___jp_1350_:
{
lean_object* v___x_1357_; 
lean_inc_ref(v_wfRel_1209_);
v___x_1357_ = l_Lean_Elab_WF_isNatLtWF(v_wfRel_1209_, v___y_1353_, v___y_1354_, v___y_1355_, v___y_1356_);
if (lean_obj_tag(v___x_1357_) == 0)
{
lean_object* v_a_1358_; 
v_a_1358_ = lean_ctor_get(v___x_1357_, 0);
lean_inc(v_a_1358_);
lean_dec_ref_known(v___x_1357_, 1);
if (lean_obj_tag(v_a_1358_) == 0)
{
lean_object* v___x_1359_; lean_object* v___x_1360_; uint8_t v___x_1361_; 
v___x_1359_ = lean_unsigned_to_nat(0u);
v___x_1360_ = lean_array_get_size(v_a_1206_);
v___x_1361_ = lean_nat_dec_lt(v___x_1359_, v___x_1360_);
if (v___x_1361_ == 0)
{
v___y_1319_ = v___y_1351_;
v___y_1320_ = v___y_1352_;
v___y_1321_ = v___y_1353_;
v___y_1322_ = v___y_1354_;
v___y_1323_ = v___y_1355_;
v___y_1324_ = v___y_1356_;
goto v___jp_1318_;
}
else
{
uint8_t v___x_1362_; 
v___x_1362_ = lean_nat_dec_le(v___x_1360_, v___x_1360_);
if (v___x_1362_ == 0)
{
if (v___x_1361_ == 0)
{
v___y_1319_ = v___y_1351_;
v___y_1320_ = v___y_1352_;
v___y_1321_ = v___y_1353_;
v___y_1322_ = v___y_1354_;
v___y_1323_ = v___y_1355_;
v___y_1324_ = v___y_1356_;
goto v___jp_1318_;
}
else
{
size_t v___x_1363_; lean_object* v___x_1364_; 
v___x_1363_ = lean_usize_of_nat(v___x_1360_);
v___x_1364_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_wfRecursion_spec__13(v___x_1360_, v_a_1206_, v___x_1201_, v___x_1363_, v___x_1207_, v___y_1351_, v___y_1352_, v___y_1353_, v___y_1354_, v___y_1355_, v___y_1356_);
v___y_1335_ = v___y_1351_;
v___y_1336_ = v___y_1356_;
v___y_1337_ = v___y_1355_;
v___y_1338_ = v___y_1352_;
v___y_1339_ = v___y_1353_;
v___y_1340_ = v___y_1354_;
v___y_1341_ = v___x_1364_;
goto v___jp_1334_;
}
}
else
{
size_t v___x_1365_; lean_object* v___x_1366_; 
v___x_1365_ = lean_usize_of_nat(v___x_1360_);
v___x_1366_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_wfRecursion_spec__13(v___x_1360_, v_a_1206_, v___x_1201_, v___x_1365_, v___x_1207_, v___y_1351_, v___y_1352_, v___y_1353_, v___y_1354_, v___y_1355_, v___y_1356_);
v___y_1335_ = v___y_1351_;
v___y_1336_ = v___y_1356_;
v___y_1337_ = v___y_1355_;
v___y_1338_ = v___y_1352_;
v___y_1339_ = v___y_1353_;
v___y_1340_ = v___y_1354_;
v___y_1341_ = v___x_1366_;
goto v___jp_1334_;
}
}
}
else
{
lean_dec_ref_known(v_a_1358_, 1);
v___y_1319_ = v___y_1351_;
v___y_1320_ = v___y_1352_;
v___y_1321_ = v___y_1353_;
v___y_1322_ = v___y_1354_;
v___y_1323_ = v___y_1355_;
v___y_1324_ = v___y_1356_;
goto v___jp_1318_;
}
}
else
{
lean_object* v_a_1367_; lean_object* v___x_1369_; uint8_t v_isShared_1370_; uint8_t v_isSharedCheck_1374_; 
lean_dec_ref(v_wfRel_1209_);
lean_dec(v___x_1205_);
lean_dec_ref(v_fst_1204_);
lean_dec_ref(v_fixedArgs_1203_);
lean_dec(v___x_1202_);
lean_dec_ref(v_fst_1198_);
v_a_1367_ = lean_ctor_get(v___x_1357_, 0);
v_isSharedCheck_1374_ = !lean_is_exclusive(v___x_1357_);
if (v_isSharedCheck_1374_ == 0)
{
v___x_1369_ = v___x_1357_;
v_isShared_1370_ = v_isSharedCheck_1374_;
goto v_resetjp_1368_;
}
else
{
lean_inc(v_a_1367_);
lean_dec(v___x_1357_);
v___x_1369_ = lean_box(0);
v_isShared_1370_ = v_isSharedCheck_1374_;
goto v_resetjp_1368_;
}
v_resetjp_1368_:
{
lean_object* v___x_1372_; 
if (v_isShared_1370_ == 0)
{
v___x_1372_ = v___x_1369_;
goto v_reusejp_1371_;
}
else
{
lean_object* v_reuseFailAlloc_1373_; 
v_reuseFailAlloc_1373_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1373_, 0, v_a_1367_);
v___x_1372_ = v_reuseFailAlloc_1373_;
goto v_reusejp_1371_;
}
v_reusejp_1371_:
{
return v___x_1372_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_wfRecursion___lam__3___boxed(lean_object** _args){
lean_object* v_fst_1394_ = _args[0];
lean_object* v_snd_1395_ = _args[1];
lean_object* v_sz_1396_ = _args[2];
lean_object* v___x_1397_ = _args[3];
lean_object* v___x_1398_ = _args[4];
lean_object* v_fixedArgs_1399_ = _args[5];
lean_object* v_fst_1400_ = _args[6];
lean_object* v___x_1401_ = _args[7];
lean_object* v_a_1402_ = _args[8];
lean_object* v___x_1403_ = _args[9];
lean_object* v___x_1404_ = _args[10];
lean_object* v_wfRel_1405_ = _args[11];
lean_object* v___y_1406_ = _args[12];
lean_object* v___y_1407_ = _args[13];
lean_object* v___y_1408_ = _args[14];
lean_object* v___y_1409_ = _args[15];
lean_object* v___y_1410_ = _args[16];
lean_object* v___y_1411_ = _args[17];
lean_object* v___y_1412_ = _args[18];
_start:
{
size_t v_sz_boxed_1413_; size_t v___x_45181__boxed_1414_; lean_object* v_res_1415_; 
v_sz_boxed_1413_ = lean_unbox_usize(v_sz_1396_);
lean_dec(v_sz_1396_);
v___x_45181__boxed_1414_ = lean_unbox_usize(v___x_1397_);
lean_dec(v___x_1397_);
v_res_1415_ = l_Lean_Elab_wfRecursion___lam__3(v_fst_1394_, v_snd_1395_, v_sz_boxed_1413_, v___x_45181__boxed_1414_, v___x_1398_, v_fixedArgs_1399_, v_fst_1400_, v___x_1401_, v_a_1402_, v___x_1403_, v___x_1404_, v_wfRel_1405_, v___y_1406_, v___y_1407_, v___y_1408_, v___y_1409_, v___y_1410_, v___y_1411_);
lean_dec(v___y_1411_);
lean_dec_ref(v___y_1410_);
lean_dec(v___y_1409_);
lean_dec_ref(v___y_1408_);
lean_dec(v___y_1407_);
lean_dec_ref(v___y_1406_);
lean_dec_ref(v_a_1402_);
lean_dec_ref(v_snd_1395_);
return v_res_1415_;
}
}
static lean_object* _init_l_Lean_Elab_wfRecursion___lam__4___closed__1(void){
_start:
{
lean_object* v___x_1417_; lean_object* v___x_1418_; 
v___x_1417_ = ((lean_object*)(l_Lean_Elab_wfRecursion___lam__4___closed__0));
v___x_1418_ = l_Lean_stringToMessageData(v___x_1417_);
return v___x_1418_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_wfRecursion___lam__4(lean_object* v_a_1419_, size_t v_sz_1420_, size_t v___x_1421_, lean_object* v_fst_1422_, lean_object* v_snd_1423_, lean_object* v_fst_1424_, lean_object* v___x_1425_, lean_object* v___x_1426_, lean_object* v_declName_1427_, lean_object* v_fst_1428_, lean_object* v_wf_1429_, lean_object* v_fixedArgs_1430_, lean_object* v_type_1431_, lean_object* v___y_1432_, lean_object* v___y_1433_, lean_object* v___y_1434_, lean_object* v___y_1435_, lean_object* v___y_1436_, lean_object* v___y_1437_){
_start:
{
lean_object* v___x_1439_; 
v___x_1439_ = l_Lean_Meta_whnfForall(v_type_1431_, v___y_1434_, v___y_1435_, v___y_1436_, v___y_1437_);
if (lean_obj_tag(v___x_1439_) == 0)
{
lean_object* v_a_1440_; lean_object* v___y_1442_; lean_object* v___y_1443_; lean_object* v___y_1444_; lean_object* v___y_1445_; lean_object* v___y_1446_; lean_object* v___y_1447_; uint8_t v___x_1456_; 
v_a_1440_ = lean_ctor_get(v___x_1439_, 0);
lean_inc(v_a_1440_);
lean_dec_ref_known(v___x_1439_, 1);
v___x_1456_ = l_Lean_Expr_isForall(v_a_1440_);
if (v___x_1456_ == 0)
{
lean_object* v___x_1457_; lean_object* v___x_1458_; lean_object* v___x_1459_; lean_object* v___x_1460_; lean_object* v_a_1461_; lean_object* v___x_1463_; uint8_t v_isShared_1464_; uint8_t v_isSharedCheck_1468_; 
lean_dec_ref(v_fixedArgs_1430_);
lean_dec_ref(v_wf_1429_);
lean_dec_ref(v_fst_1428_);
lean_dec(v_declName_1427_);
lean_dec(v___x_1426_);
lean_dec_ref(v_fst_1424_);
lean_dec_ref(v_snd_1423_);
lean_dec_ref(v_fst_1422_);
lean_dec_ref(v_a_1419_);
v___x_1457_ = lean_obj_once(&l_Lean_Elab_wfRecursion___lam__4___closed__1, &l_Lean_Elab_wfRecursion___lam__4___closed__1_once, _init_l_Lean_Elab_wfRecursion___lam__4___closed__1);
v___x_1458_ = l_Lean_MessageData_ofExpr(v_a_1440_);
v___x_1459_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1459_, 0, v___x_1457_);
lean_ctor_set(v___x_1459_, 1, v___x_1458_);
v___x_1460_ = l_Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0___redArg(v___x_1459_, v___y_1432_, v___y_1433_, v___y_1434_, v___y_1435_, v___y_1436_, v___y_1437_);
v_a_1461_ = lean_ctor_get(v___x_1460_, 0);
v_isSharedCheck_1468_ = !lean_is_exclusive(v___x_1460_);
if (v_isSharedCheck_1468_ == 0)
{
v___x_1463_ = v___x_1460_;
v_isShared_1464_ = v_isSharedCheck_1468_;
goto v_resetjp_1462_;
}
else
{
lean_inc(v_a_1461_);
lean_dec(v___x_1460_);
v___x_1463_ = lean_box(0);
v_isShared_1464_ = v_isSharedCheck_1468_;
goto v_resetjp_1462_;
}
v_resetjp_1462_:
{
lean_object* v___x_1466_; 
if (v_isShared_1464_ == 0)
{
v___x_1466_ = v___x_1463_;
goto v_reusejp_1465_;
}
else
{
lean_object* v_reuseFailAlloc_1467_; 
v_reuseFailAlloc_1467_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1467_, 0, v_a_1461_);
v___x_1466_ = v_reuseFailAlloc_1467_;
goto v_reusejp_1465_;
}
v_reusejp_1465_:
{
return v___x_1466_;
}
}
}
else
{
v___y_1442_ = v___y_1432_;
v___y_1443_ = v___y_1433_;
v___y_1444_ = v___y_1434_;
v___y_1445_ = v___y_1435_;
v___y_1446_ = v___y_1436_;
v___y_1447_ = v___y_1437_;
goto v___jp_1441_;
}
v___jp_1441_:
{
lean_object* v___x_1448_; lean_object* v___x_1449_; lean_object* v___x_1450_; lean_object* v___x_1451_; lean_object* v___x_1452_; lean_object* v___x_1453_; lean_object* v___f_1454_; lean_object* v___x_1455_; 
v___x_1448_ = l_Lean_Expr_bindingDomain_x21(v_a_1440_);
lean_dec(v_a_1440_);
v___x_1449_ = l_unsafeCast___redArg(v_a_1419_);
lean_inc(v___x_1449_);
v___x_1450_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__6(v_sz_1420_, v___x_1421_, v___x_1449_);
v___x_1451_ = l_unsafeCast___redArg(v___x_1450_);
lean_dec_ref(v___x_1450_);
v___x_1452_ = lean_box_usize(v_sz_1420_);
v___x_1453_ = lean_box_usize(v___x_1421_);
lean_inc(v___x_1451_);
lean_inc_ref(v_fst_1424_);
lean_inc_ref(v_fixedArgs_1430_);
v___f_1454_ = lean_alloc_closure((void*)(l_Lean_Elab_wfRecursion___lam__3___boxed), 19, 11);
lean_closure_set(v___f_1454_, 0, v_fst_1422_);
lean_closure_set(v___f_1454_, 1, v_snd_1423_);
lean_closure_set(v___f_1454_, 2, v___x_1452_);
lean_closure_set(v___f_1454_, 3, v___x_1453_);
lean_closure_set(v___f_1454_, 4, v___x_1449_);
lean_closure_set(v___f_1454_, 5, v_fixedArgs_1430_);
lean_closure_set(v___f_1454_, 6, v_fst_1424_);
lean_closure_set(v___f_1454_, 7, v___x_1451_);
lean_closure_set(v___f_1454_, 8, v_a_1419_);
lean_closure_set(v___f_1454_, 9, v___x_1425_);
lean_closure_set(v___f_1454_, 10, v___x_1426_);
v___x_1455_ = l_Lean_Elab_WF_elabWFRel___redArg(v___x_1451_, v_declName_1427_, v_fst_1428_, v_fixedArgs_1430_, v_fst_1424_, v___x_1448_, v_wf_1429_, v___f_1454_, v___y_1442_, v___y_1443_, v___y_1444_, v___y_1445_, v___y_1446_, v___y_1447_);
return v___x_1455_;
}
}
else
{
lean_object* v_a_1469_; lean_object* v___x_1471_; uint8_t v_isShared_1472_; uint8_t v_isSharedCheck_1476_; 
lean_dec_ref(v_fixedArgs_1430_);
lean_dec_ref(v_wf_1429_);
lean_dec_ref(v_fst_1428_);
lean_dec(v_declName_1427_);
lean_dec(v___x_1426_);
lean_dec_ref(v_fst_1424_);
lean_dec_ref(v_snd_1423_);
lean_dec_ref(v_fst_1422_);
lean_dec_ref(v_a_1419_);
v_a_1469_ = lean_ctor_get(v___x_1439_, 0);
v_isSharedCheck_1476_ = !lean_is_exclusive(v___x_1439_);
if (v_isSharedCheck_1476_ == 0)
{
v___x_1471_ = v___x_1439_;
v_isShared_1472_ = v_isSharedCheck_1476_;
goto v_resetjp_1470_;
}
else
{
lean_inc(v_a_1469_);
lean_dec(v___x_1439_);
v___x_1471_ = lean_box(0);
v_isShared_1472_ = v_isSharedCheck_1476_;
goto v_resetjp_1470_;
}
v_resetjp_1470_:
{
lean_object* v___x_1474_; 
if (v_isShared_1472_ == 0)
{
v___x_1474_ = v___x_1471_;
goto v_reusejp_1473_;
}
else
{
lean_object* v_reuseFailAlloc_1475_; 
v_reuseFailAlloc_1475_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1475_, 0, v_a_1469_);
v___x_1474_ = v_reuseFailAlloc_1475_;
goto v_reusejp_1473_;
}
v_reusejp_1473_:
{
return v___x_1474_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_wfRecursion___lam__4___boxed(lean_object** _args){
lean_object* v_a_1477_ = _args[0];
lean_object* v_sz_1478_ = _args[1];
lean_object* v___x_1479_ = _args[2];
lean_object* v_fst_1480_ = _args[3];
lean_object* v_snd_1481_ = _args[4];
lean_object* v_fst_1482_ = _args[5];
lean_object* v___x_1483_ = _args[6];
lean_object* v___x_1484_ = _args[7];
lean_object* v_declName_1485_ = _args[8];
lean_object* v_fst_1486_ = _args[9];
lean_object* v_wf_1487_ = _args[10];
lean_object* v_fixedArgs_1488_ = _args[11];
lean_object* v_type_1489_ = _args[12];
lean_object* v___y_1490_ = _args[13];
lean_object* v___y_1491_ = _args[14];
lean_object* v___y_1492_ = _args[15];
lean_object* v___y_1493_ = _args[16];
lean_object* v___y_1494_ = _args[17];
lean_object* v___y_1495_ = _args[18];
lean_object* v___y_1496_ = _args[19];
_start:
{
size_t v_sz_boxed_1497_; size_t v___x_45546__boxed_1498_; lean_object* v_res_1499_; 
v_sz_boxed_1497_ = lean_unbox_usize(v_sz_1478_);
lean_dec(v_sz_1478_);
v___x_45546__boxed_1498_ = lean_unbox_usize(v___x_1479_);
lean_dec(v___x_1479_);
v_res_1499_ = l_Lean_Elab_wfRecursion___lam__4(v_a_1477_, v_sz_boxed_1497_, v___x_45546__boxed_1498_, v_fst_1480_, v_snd_1481_, v_fst_1482_, v___x_1483_, v___x_1484_, v_declName_1485_, v_fst_1486_, v_wf_1487_, v_fixedArgs_1488_, v_type_1489_, v___y_1490_, v___y_1491_, v___y_1492_, v___y_1493_, v___y_1494_, v___y_1495_);
lean_dec(v___y_1495_);
lean_dec_ref(v___y_1494_);
lean_dec(v___y_1493_);
lean_dec_ref(v___y_1492_);
lean_dec(v___y_1491_);
lean_dec_ref(v___y_1490_);
return v_res_1499_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_wfRecursion___lam__5(lean_object* v_a_1500_, lean_object* v_fst_1501_, lean_object* v_fst_1502_, lean_object* v_fst_1503_, lean_object* v___y_1504_, lean_object* v___y_1505_, lean_object* v___y_1506_, lean_object* v___y_1507_, lean_object* v___y_1508_, lean_object* v___y_1509_){
_start:
{
lean_object* v___x_1511_; 
v___x_1511_ = l_Lean_Elab_WF_guessLex(v_a_1500_, v_fst_1501_, v_fst_1502_, v_fst_1503_, v___y_1506_, v___y_1507_, v___y_1508_, v___y_1509_);
return v___x_1511_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_wfRecursion___lam__5___boxed(lean_object* v_a_1512_, lean_object* v_fst_1513_, lean_object* v_fst_1514_, lean_object* v_fst_1515_, lean_object* v___y_1516_, lean_object* v___y_1517_, lean_object* v___y_1518_, lean_object* v___y_1519_, lean_object* v___y_1520_, lean_object* v___y_1521_, lean_object* v___y_1522_){
_start:
{
lean_object* v_res_1523_; 
v_res_1523_ = l_Lean_Elab_wfRecursion___lam__5(v_a_1512_, v_fst_1513_, v_fst_1514_, v_fst_1515_, v___y_1516_, v___y_1517_, v___y_1518_, v___y_1519_, v___y_1520_, v___y_1521_);
lean_dec(v___y_1521_);
lean_dec_ref(v___y_1520_);
lean_dec(v___y_1519_);
lean_dec_ref(v___y_1518_);
lean_dec(v___y_1517_);
lean_dec_ref(v___y_1516_);
return v_res_1523_;
}
}
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00Lean_Elab_wfRecursion_spec__8___redArg(lean_object* v_env_1524_, lean_object* v_x_1525_, lean_object* v___y_1526_, lean_object* v___y_1527_, lean_object* v___y_1528_, lean_object* v___y_1529_, lean_object* v___y_1530_, lean_object* v___y_1531_){
_start:
{
lean_object* v___x_1533_; lean_object* v_env_1534_; lean_object* v_a_1536_; lean_object* v___x_1546_; lean_object* v___x_1547_; 
v___x_1533_ = lean_st_ref_get(v___y_1531_);
v_env_1534_ = lean_ctor_get(v___x_1533_, 0);
lean_inc_ref(v_env_1534_);
lean_dec(v___x_1533_);
v___x_1546_ = l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9___redArg(v_env_1524_, v___y_1529_, v___y_1531_);
lean_dec_ref(v___x_1546_);
lean_inc(v___y_1531_);
lean_inc_ref(v___y_1530_);
lean_inc(v___y_1529_);
lean_inc_ref(v___y_1528_);
lean_inc(v___y_1527_);
lean_inc_ref(v___y_1526_);
v___x_1547_ = lean_apply_7(v_x_1525_, v___y_1526_, v___y_1527_, v___y_1528_, v___y_1529_, v___y_1530_, v___y_1531_, lean_box(0));
if (lean_obj_tag(v___x_1547_) == 0)
{
lean_object* v_a_1548_; lean_object* v___x_1549_; lean_object* v___x_1551_; uint8_t v_isShared_1552_; uint8_t v_isSharedCheck_1556_; 
v_a_1548_ = lean_ctor_get(v___x_1547_, 0);
lean_inc(v_a_1548_);
lean_dec_ref_known(v___x_1547_, 1);
v___x_1549_ = l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9___redArg(v_env_1534_, v___y_1529_, v___y_1531_);
v_isSharedCheck_1556_ = !lean_is_exclusive(v___x_1549_);
if (v_isSharedCheck_1556_ == 0)
{
lean_object* v_unused_1557_; 
v_unused_1557_ = lean_ctor_get(v___x_1549_, 0);
lean_dec(v_unused_1557_);
v___x_1551_ = v___x_1549_;
v_isShared_1552_ = v_isSharedCheck_1556_;
goto v_resetjp_1550_;
}
else
{
lean_dec(v___x_1549_);
v___x_1551_ = lean_box(0);
v_isShared_1552_ = v_isSharedCheck_1556_;
goto v_resetjp_1550_;
}
v_resetjp_1550_:
{
lean_object* v___x_1554_; 
if (v_isShared_1552_ == 0)
{
lean_ctor_set(v___x_1551_, 0, v_a_1548_);
v___x_1554_ = v___x_1551_;
goto v_reusejp_1553_;
}
else
{
lean_object* v_reuseFailAlloc_1555_; 
v_reuseFailAlloc_1555_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1555_, 0, v_a_1548_);
v___x_1554_ = v_reuseFailAlloc_1555_;
goto v_reusejp_1553_;
}
v_reusejp_1553_:
{
return v___x_1554_;
}
}
}
else
{
lean_object* v_a_1558_; 
v_a_1558_ = lean_ctor_get(v___x_1547_, 0);
lean_inc(v_a_1558_);
lean_dec_ref_known(v___x_1547_, 1);
v_a_1536_ = v_a_1558_;
goto v___jp_1535_;
}
v___jp_1535_:
{
lean_object* v___x_1537_; lean_object* v___x_1539_; uint8_t v_isShared_1540_; uint8_t v_isSharedCheck_1544_; 
v___x_1537_ = l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9___redArg(v_env_1534_, v___y_1529_, v___y_1531_);
v_isSharedCheck_1544_ = !lean_is_exclusive(v___x_1537_);
if (v_isSharedCheck_1544_ == 0)
{
lean_object* v_unused_1545_; 
v_unused_1545_ = lean_ctor_get(v___x_1537_, 0);
lean_dec(v_unused_1545_);
v___x_1539_ = v___x_1537_;
v_isShared_1540_ = v_isSharedCheck_1544_;
goto v_resetjp_1538_;
}
else
{
lean_dec(v___x_1537_);
v___x_1539_ = lean_box(0);
v_isShared_1540_ = v_isSharedCheck_1544_;
goto v_resetjp_1538_;
}
v_resetjp_1538_:
{
lean_object* v___x_1542_; 
if (v_isShared_1540_ == 0)
{
lean_ctor_set_tag(v___x_1539_, 1);
lean_ctor_set(v___x_1539_, 0, v_a_1536_);
v___x_1542_ = v___x_1539_;
goto v_reusejp_1541_;
}
else
{
lean_object* v_reuseFailAlloc_1543_; 
v_reuseFailAlloc_1543_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1543_, 0, v_a_1536_);
v___x_1542_ = v_reuseFailAlloc_1543_;
goto v_reusejp_1541_;
}
v_reusejp_1541_:
{
return v___x_1542_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00Lean_Elab_wfRecursion_spec__8___redArg___boxed(lean_object* v_env_1559_, lean_object* v_x_1560_, lean_object* v___y_1561_, lean_object* v___y_1562_, lean_object* v___y_1563_, lean_object* v___y_1564_, lean_object* v___y_1565_, lean_object* v___y_1566_, lean_object* v___y_1567_){
_start:
{
lean_object* v_res_1568_; 
v_res_1568_ = l_Lean_withEnv___at___00Lean_Elab_wfRecursion_spec__8___redArg(v_env_1559_, v_x_1560_, v___y_1561_, v___y_1562_, v___y_1563_, v___y_1564_, v___y_1565_, v___y_1566_);
lean_dec(v___y_1566_);
lean_dec_ref(v___y_1565_);
lean_dec(v___y_1564_);
lean_dec_ref(v___y_1563_);
lean_dec(v___y_1562_);
lean_dec_ref(v___y_1561_);
return v_res_1568_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_wfRecursion_spec__18_spec__21___redArg___lam__0(lean_object* v___y_1569_, uint8_t v_isExporting_1570_, lean_object* v___x_1571_, lean_object* v___y_1572_, lean_object* v___x_1573_, lean_object* v_a_x3f_1574_){
_start:
{
lean_object* v___x_1576_; lean_object* v_env_1577_; lean_object* v_nextMacroScope_1578_; lean_object* v_ngen_1579_; lean_object* v_auxDeclNGen_1580_; lean_object* v_traceState_1581_; lean_object* v_messages_1582_; lean_object* v_infoState_1583_; lean_object* v_snapshotTasks_1584_; lean_object* v___x_1586_; uint8_t v_isShared_1587_; uint8_t v_isSharedCheck_1609_; 
v___x_1576_ = lean_st_ref_take(v___y_1569_);
v_env_1577_ = lean_ctor_get(v___x_1576_, 0);
v_nextMacroScope_1578_ = lean_ctor_get(v___x_1576_, 1);
v_ngen_1579_ = lean_ctor_get(v___x_1576_, 2);
v_auxDeclNGen_1580_ = lean_ctor_get(v___x_1576_, 3);
v_traceState_1581_ = lean_ctor_get(v___x_1576_, 4);
v_messages_1582_ = lean_ctor_get(v___x_1576_, 6);
v_infoState_1583_ = lean_ctor_get(v___x_1576_, 7);
v_snapshotTasks_1584_ = lean_ctor_get(v___x_1576_, 8);
v_isSharedCheck_1609_ = !lean_is_exclusive(v___x_1576_);
if (v_isSharedCheck_1609_ == 0)
{
lean_object* v_unused_1610_; 
v_unused_1610_ = lean_ctor_get(v___x_1576_, 5);
lean_dec(v_unused_1610_);
v___x_1586_ = v___x_1576_;
v_isShared_1587_ = v_isSharedCheck_1609_;
goto v_resetjp_1585_;
}
else
{
lean_inc(v_snapshotTasks_1584_);
lean_inc(v_infoState_1583_);
lean_inc(v_messages_1582_);
lean_inc(v_traceState_1581_);
lean_inc(v_auxDeclNGen_1580_);
lean_inc(v_ngen_1579_);
lean_inc(v_nextMacroScope_1578_);
lean_inc(v_env_1577_);
lean_dec(v___x_1576_);
v___x_1586_ = lean_box(0);
v_isShared_1587_ = v_isSharedCheck_1609_;
goto v_resetjp_1585_;
}
v_resetjp_1585_:
{
lean_object* v___x_1588_; lean_object* v___x_1590_; 
v___x_1588_ = l_Lean_Environment_setExporting(v_env_1577_, v_isExporting_1570_);
if (v_isShared_1587_ == 0)
{
lean_ctor_set(v___x_1586_, 5, v___x_1571_);
lean_ctor_set(v___x_1586_, 0, v___x_1588_);
v___x_1590_ = v___x_1586_;
goto v_reusejp_1589_;
}
else
{
lean_object* v_reuseFailAlloc_1608_; 
v_reuseFailAlloc_1608_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_1608_, 0, v___x_1588_);
lean_ctor_set(v_reuseFailAlloc_1608_, 1, v_nextMacroScope_1578_);
lean_ctor_set(v_reuseFailAlloc_1608_, 2, v_ngen_1579_);
lean_ctor_set(v_reuseFailAlloc_1608_, 3, v_auxDeclNGen_1580_);
lean_ctor_set(v_reuseFailAlloc_1608_, 4, v_traceState_1581_);
lean_ctor_set(v_reuseFailAlloc_1608_, 5, v___x_1571_);
lean_ctor_set(v_reuseFailAlloc_1608_, 6, v_messages_1582_);
lean_ctor_set(v_reuseFailAlloc_1608_, 7, v_infoState_1583_);
lean_ctor_set(v_reuseFailAlloc_1608_, 8, v_snapshotTasks_1584_);
v___x_1590_ = v_reuseFailAlloc_1608_;
goto v_reusejp_1589_;
}
v_reusejp_1589_:
{
lean_object* v___x_1591_; lean_object* v___x_1592_; lean_object* v_mctx_1593_; lean_object* v_zetaDeltaFVarIds_1594_; lean_object* v_postponed_1595_; lean_object* v_diag_1596_; lean_object* v___x_1598_; uint8_t v_isShared_1599_; uint8_t v_isSharedCheck_1606_; 
v___x_1591_ = lean_st_ref_put(v___y_1569_, v___x_1590_);
v___x_1592_ = lean_st_ref_take(v___y_1572_);
v_mctx_1593_ = lean_ctor_get(v___x_1592_, 0);
v_zetaDeltaFVarIds_1594_ = lean_ctor_get(v___x_1592_, 2);
v_postponed_1595_ = lean_ctor_get(v___x_1592_, 3);
v_diag_1596_ = lean_ctor_get(v___x_1592_, 4);
v_isSharedCheck_1606_ = !lean_is_exclusive(v___x_1592_);
if (v_isSharedCheck_1606_ == 0)
{
lean_object* v_unused_1607_; 
v_unused_1607_ = lean_ctor_get(v___x_1592_, 1);
lean_dec(v_unused_1607_);
v___x_1598_ = v___x_1592_;
v_isShared_1599_ = v_isSharedCheck_1606_;
goto v_resetjp_1597_;
}
else
{
lean_inc(v_diag_1596_);
lean_inc(v_postponed_1595_);
lean_inc(v_zetaDeltaFVarIds_1594_);
lean_inc(v_mctx_1593_);
lean_dec(v___x_1592_);
v___x_1598_ = lean_box(0);
v_isShared_1599_ = v_isSharedCheck_1606_;
goto v_resetjp_1597_;
}
v_resetjp_1597_:
{
lean_object* v___x_1600_; lean_object* v___x_1602_; 
v___x_1600_ = lean_box(0);
if (v_isShared_1599_ == 0)
{
lean_ctor_set(v___x_1598_, 1, v___x_1573_);
v___x_1602_ = v___x_1598_;
goto v_reusejp_1601_;
}
else
{
lean_object* v_reuseFailAlloc_1605_; 
v_reuseFailAlloc_1605_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1605_, 0, v_mctx_1593_);
lean_ctor_set(v_reuseFailAlloc_1605_, 1, v___x_1573_);
lean_ctor_set(v_reuseFailAlloc_1605_, 2, v_zetaDeltaFVarIds_1594_);
lean_ctor_set(v_reuseFailAlloc_1605_, 3, v_postponed_1595_);
lean_ctor_set(v_reuseFailAlloc_1605_, 4, v_diag_1596_);
v___x_1602_ = v_reuseFailAlloc_1605_;
goto v_reusejp_1601_;
}
v_reusejp_1601_:
{
lean_object* v___x_1603_; lean_object* v___x_1604_; 
v___x_1603_ = lean_st_ref_put(v___y_1572_, v___x_1602_);
v___x_1604_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1604_, 0, v___x_1600_);
return v___x_1604_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_wfRecursion_spec__18_spec__21___redArg___lam__0___boxed(lean_object* v___y_1611_, lean_object* v_isExporting_1612_, lean_object* v___x_1613_, lean_object* v___y_1614_, lean_object* v___x_1615_, lean_object* v_a_x3f_1616_, lean_object* v___y_1617_){
_start:
{
uint8_t v_isExporting_boxed_1618_; lean_object* v_res_1619_; 
v_isExporting_boxed_1618_ = lean_unbox(v_isExporting_1612_);
v_res_1619_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_wfRecursion_spec__18_spec__21___redArg___lam__0(v___y_1611_, v_isExporting_boxed_1618_, v___x_1613_, v___y_1614_, v___x_1615_, v_a_x3f_1616_);
lean_dec(v_a_x3f_1616_);
lean_dec(v___y_1614_);
lean_dec(v___y_1611_);
return v_res_1619_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_wfRecursion_spec__18_spec__21___redArg(lean_object* v_x_1620_, uint8_t v_isExporting_1621_, lean_object* v___y_1622_, lean_object* v___y_1623_, lean_object* v___y_1624_, lean_object* v___y_1625_, lean_object* v___y_1626_, lean_object* v___y_1627_){
_start:
{
lean_object* v___x_1629_; lean_object* v_env_1630_; lean_object* v___x_1631_; uint8_t v_isModule_1632_; 
v___x_1629_ = lean_st_ref_get(v___y_1627_);
v_env_1630_ = lean_ctor_get(v___x_1629_, 0);
lean_inc_ref(v_env_1630_);
lean_dec(v___x_1629_);
v___x_1631_ = l_Lean_Environment_header(v_env_1630_);
v_isModule_1632_ = lean_ctor_get_uint8(v___x_1631_, sizeof(void*)*7 + 4);
lean_dec_ref(v___x_1631_);
if (v_isModule_1632_ == 0)
{
lean_object* v___x_1633_; 
lean_dec_ref(v_env_1630_);
lean_inc(v___y_1627_);
lean_inc_ref(v___y_1626_);
lean_inc(v___y_1625_);
lean_inc_ref(v___y_1624_);
lean_inc(v___y_1623_);
lean_inc_ref(v___y_1622_);
v___x_1633_ = lean_apply_7(v_x_1620_, v___y_1622_, v___y_1623_, v___y_1624_, v___y_1625_, v___y_1626_, v___y_1627_, lean_box(0));
return v___x_1633_;
}
else
{
uint8_t v_isExporting_1634_; 
v_isExporting_1634_ = lean_ctor_get_uint8(v_env_1630_, sizeof(void*)*8);
lean_dec_ref(v_env_1630_);
if (v_isExporting_1621_ == 0)
{
if (v_isExporting_1634_ == 0)
{
lean_object* v___x_1700_; 
lean_inc(v___y_1627_);
lean_inc_ref(v___y_1626_);
lean_inc(v___y_1625_);
lean_inc_ref(v___y_1624_);
lean_inc(v___y_1623_);
lean_inc_ref(v___y_1622_);
v___x_1700_ = lean_apply_7(v_x_1620_, v___y_1622_, v___y_1623_, v___y_1624_, v___y_1625_, v___y_1626_, v___y_1627_, lean_box(0));
return v___x_1700_;
}
else
{
goto v___jp_1635_;
}
}
else
{
if (v_isExporting_1634_ == 0)
{
goto v___jp_1635_;
}
else
{
lean_object* v___x_1701_; 
lean_inc(v___y_1627_);
lean_inc_ref(v___y_1626_);
lean_inc(v___y_1625_);
lean_inc_ref(v___y_1624_);
lean_inc(v___y_1623_);
lean_inc_ref(v___y_1622_);
v___x_1701_ = lean_apply_7(v_x_1620_, v___y_1622_, v___y_1623_, v___y_1624_, v___y_1625_, v___y_1626_, v___y_1627_, lean_box(0));
return v___x_1701_;
}
}
v___jp_1635_:
{
lean_object* v___x_1636_; lean_object* v_env_1637_; lean_object* v_nextMacroScope_1638_; lean_object* v_ngen_1639_; lean_object* v_auxDeclNGen_1640_; lean_object* v_traceState_1641_; lean_object* v_messages_1642_; lean_object* v_infoState_1643_; lean_object* v_snapshotTasks_1644_; lean_object* v___x_1646_; uint8_t v_isShared_1647_; uint8_t v_isSharedCheck_1698_; 
v___x_1636_ = lean_st_ref_take(v___y_1627_);
v_env_1637_ = lean_ctor_get(v___x_1636_, 0);
v_nextMacroScope_1638_ = lean_ctor_get(v___x_1636_, 1);
v_ngen_1639_ = lean_ctor_get(v___x_1636_, 2);
v_auxDeclNGen_1640_ = lean_ctor_get(v___x_1636_, 3);
v_traceState_1641_ = lean_ctor_get(v___x_1636_, 4);
v_messages_1642_ = lean_ctor_get(v___x_1636_, 6);
v_infoState_1643_ = lean_ctor_get(v___x_1636_, 7);
v_snapshotTasks_1644_ = lean_ctor_get(v___x_1636_, 8);
v_isSharedCheck_1698_ = !lean_is_exclusive(v___x_1636_);
if (v_isSharedCheck_1698_ == 0)
{
lean_object* v_unused_1699_; 
v_unused_1699_ = lean_ctor_get(v___x_1636_, 5);
lean_dec(v_unused_1699_);
v___x_1646_ = v___x_1636_;
v_isShared_1647_ = v_isSharedCheck_1698_;
goto v_resetjp_1645_;
}
else
{
lean_inc(v_snapshotTasks_1644_);
lean_inc(v_infoState_1643_);
lean_inc(v_messages_1642_);
lean_inc(v_traceState_1641_);
lean_inc(v_auxDeclNGen_1640_);
lean_inc(v_ngen_1639_);
lean_inc(v_nextMacroScope_1638_);
lean_inc(v_env_1637_);
lean_dec(v___x_1636_);
v___x_1646_ = lean_box(0);
v_isShared_1647_ = v_isSharedCheck_1698_;
goto v_resetjp_1645_;
}
v_resetjp_1645_:
{
lean_object* v___x_1648_; lean_object* v___x_1649_; lean_object* v___x_1651_; 
v___x_1648_ = l_Lean_Environment_setExporting(v_env_1637_, v_isExporting_1621_);
v___x_1649_ = lean_obj_once(&l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9___redArg___closed__2, &l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9___redArg___closed__2_once, _init_l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9___redArg___closed__2);
if (v_isShared_1647_ == 0)
{
lean_ctor_set(v___x_1646_, 5, v___x_1649_);
lean_ctor_set(v___x_1646_, 0, v___x_1648_);
v___x_1651_ = v___x_1646_;
goto v_reusejp_1650_;
}
else
{
lean_object* v_reuseFailAlloc_1697_; 
v_reuseFailAlloc_1697_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_1697_, 0, v___x_1648_);
lean_ctor_set(v_reuseFailAlloc_1697_, 1, v_nextMacroScope_1638_);
lean_ctor_set(v_reuseFailAlloc_1697_, 2, v_ngen_1639_);
lean_ctor_set(v_reuseFailAlloc_1697_, 3, v_auxDeclNGen_1640_);
lean_ctor_set(v_reuseFailAlloc_1697_, 4, v_traceState_1641_);
lean_ctor_set(v_reuseFailAlloc_1697_, 5, v___x_1649_);
lean_ctor_set(v_reuseFailAlloc_1697_, 6, v_messages_1642_);
lean_ctor_set(v_reuseFailAlloc_1697_, 7, v_infoState_1643_);
lean_ctor_set(v_reuseFailAlloc_1697_, 8, v_snapshotTasks_1644_);
v___x_1651_ = v_reuseFailAlloc_1697_;
goto v_reusejp_1650_;
}
v_reusejp_1650_:
{
lean_object* v___x_1652_; lean_object* v___x_1653_; lean_object* v_mctx_1654_; lean_object* v_zetaDeltaFVarIds_1655_; lean_object* v_postponed_1656_; lean_object* v_diag_1657_; lean_object* v___x_1659_; uint8_t v_isShared_1660_; uint8_t v_isSharedCheck_1695_; 
v___x_1652_ = lean_st_ref_put(v___y_1627_, v___x_1651_);
v___x_1653_ = lean_st_ref_take(v___y_1625_);
v_mctx_1654_ = lean_ctor_get(v___x_1653_, 0);
v_zetaDeltaFVarIds_1655_ = lean_ctor_get(v___x_1653_, 2);
v_postponed_1656_ = lean_ctor_get(v___x_1653_, 3);
v_diag_1657_ = lean_ctor_get(v___x_1653_, 4);
v_isSharedCheck_1695_ = !lean_is_exclusive(v___x_1653_);
if (v_isSharedCheck_1695_ == 0)
{
lean_object* v_unused_1696_; 
v_unused_1696_ = lean_ctor_get(v___x_1653_, 1);
lean_dec(v_unused_1696_);
v___x_1659_ = v___x_1653_;
v_isShared_1660_ = v_isSharedCheck_1695_;
goto v_resetjp_1658_;
}
else
{
lean_inc(v_diag_1657_);
lean_inc(v_postponed_1656_);
lean_inc(v_zetaDeltaFVarIds_1655_);
lean_inc(v_mctx_1654_);
lean_dec(v___x_1653_);
v___x_1659_ = lean_box(0);
v_isShared_1660_ = v_isSharedCheck_1695_;
goto v_resetjp_1658_;
}
v_resetjp_1658_:
{
lean_object* v___x_1661_; lean_object* v___x_1663_; 
v___x_1661_ = lean_obj_once(&l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9___redArg___closed__3, &l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9___redArg___closed__3_once, _init_l_Lean_setEnv___at___00Lean_Elab_wfRecursion_spec__9___redArg___closed__3);
if (v_isShared_1660_ == 0)
{
lean_ctor_set(v___x_1659_, 1, v___x_1661_);
v___x_1663_ = v___x_1659_;
goto v_reusejp_1662_;
}
else
{
lean_object* v_reuseFailAlloc_1694_; 
v_reuseFailAlloc_1694_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1694_, 0, v_mctx_1654_);
lean_ctor_set(v_reuseFailAlloc_1694_, 1, v___x_1661_);
lean_ctor_set(v_reuseFailAlloc_1694_, 2, v_zetaDeltaFVarIds_1655_);
lean_ctor_set(v_reuseFailAlloc_1694_, 3, v_postponed_1656_);
lean_ctor_set(v_reuseFailAlloc_1694_, 4, v_diag_1657_);
v___x_1663_ = v_reuseFailAlloc_1694_;
goto v_reusejp_1662_;
}
v_reusejp_1662_:
{
lean_object* v___x_1664_; lean_object* v_r_1665_; 
v___x_1664_ = lean_st_ref_put(v___y_1625_, v___x_1663_);
lean_inc(v___y_1627_);
lean_inc_ref(v___y_1626_);
lean_inc(v___y_1625_);
lean_inc_ref(v___y_1624_);
lean_inc(v___y_1623_);
lean_inc_ref(v___y_1622_);
v_r_1665_ = lean_apply_7(v_x_1620_, v___y_1622_, v___y_1623_, v___y_1624_, v___y_1625_, v___y_1626_, v___y_1627_, lean_box(0));
if (lean_obj_tag(v_r_1665_) == 0)
{
lean_object* v_a_1666_; lean_object* v___x_1668_; uint8_t v_isShared_1669_; uint8_t v_isSharedCheck_1682_; 
v_a_1666_ = lean_ctor_get(v_r_1665_, 0);
v_isSharedCheck_1682_ = !lean_is_exclusive(v_r_1665_);
if (v_isSharedCheck_1682_ == 0)
{
v___x_1668_ = v_r_1665_;
v_isShared_1669_ = v_isSharedCheck_1682_;
goto v_resetjp_1667_;
}
else
{
lean_inc(v_a_1666_);
lean_dec(v_r_1665_);
v___x_1668_ = lean_box(0);
v_isShared_1669_ = v_isSharedCheck_1682_;
goto v_resetjp_1667_;
}
v_resetjp_1667_:
{
lean_object* v___x_1671_; 
lean_inc(v_a_1666_);
if (v_isShared_1669_ == 0)
{
lean_ctor_set_tag(v___x_1668_, 1);
v___x_1671_ = v___x_1668_;
goto v_reusejp_1670_;
}
else
{
lean_object* v_reuseFailAlloc_1681_; 
v_reuseFailAlloc_1681_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1681_, 0, v_a_1666_);
v___x_1671_ = v_reuseFailAlloc_1681_;
goto v_reusejp_1670_;
}
v_reusejp_1670_:
{
lean_object* v___x_1672_; lean_object* v___x_1674_; uint8_t v_isShared_1675_; uint8_t v_isSharedCheck_1679_; 
v___x_1672_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_wfRecursion_spec__18_spec__21___redArg___lam__0(v___y_1627_, v_isExporting_1634_, v___x_1649_, v___y_1625_, v___x_1661_, v___x_1671_);
lean_dec_ref(v___x_1671_);
v_isSharedCheck_1679_ = !lean_is_exclusive(v___x_1672_);
if (v_isSharedCheck_1679_ == 0)
{
lean_object* v_unused_1680_; 
v_unused_1680_ = lean_ctor_get(v___x_1672_, 0);
lean_dec(v_unused_1680_);
v___x_1674_ = v___x_1672_;
v_isShared_1675_ = v_isSharedCheck_1679_;
goto v_resetjp_1673_;
}
else
{
lean_dec(v___x_1672_);
v___x_1674_ = lean_box(0);
v_isShared_1675_ = v_isSharedCheck_1679_;
goto v_resetjp_1673_;
}
v_resetjp_1673_:
{
lean_object* v___x_1677_; 
if (v_isShared_1675_ == 0)
{
lean_ctor_set(v___x_1674_, 0, v_a_1666_);
v___x_1677_ = v___x_1674_;
goto v_reusejp_1676_;
}
else
{
lean_object* v_reuseFailAlloc_1678_; 
v_reuseFailAlloc_1678_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1678_, 0, v_a_1666_);
v___x_1677_ = v_reuseFailAlloc_1678_;
goto v_reusejp_1676_;
}
v_reusejp_1676_:
{
return v___x_1677_;
}
}
}
}
}
else
{
lean_object* v_a_1683_; lean_object* v___x_1684_; lean_object* v___x_1685_; lean_object* v___x_1687_; uint8_t v_isShared_1688_; uint8_t v_isSharedCheck_1692_; 
v_a_1683_ = lean_ctor_get(v_r_1665_, 0);
lean_inc(v_a_1683_);
lean_dec_ref_known(v_r_1665_, 1);
v___x_1684_ = lean_box(0);
v___x_1685_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_wfRecursion_spec__18_spec__21___redArg___lam__0(v___y_1627_, v_isExporting_1634_, v___x_1649_, v___y_1625_, v___x_1661_, v___x_1684_);
v_isSharedCheck_1692_ = !lean_is_exclusive(v___x_1685_);
if (v_isSharedCheck_1692_ == 0)
{
lean_object* v_unused_1693_; 
v_unused_1693_ = lean_ctor_get(v___x_1685_, 0);
lean_dec(v_unused_1693_);
v___x_1687_ = v___x_1685_;
v_isShared_1688_ = v_isSharedCheck_1692_;
goto v_resetjp_1686_;
}
else
{
lean_dec(v___x_1685_);
v___x_1687_ = lean_box(0);
v_isShared_1688_ = v_isSharedCheck_1692_;
goto v_resetjp_1686_;
}
v_resetjp_1686_:
{
lean_object* v___x_1690_; 
if (v_isShared_1688_ == 0)
{
lean_ctor_set_tag(v___x_1687_, 1);
lean_ctor_set(v___x_1687_, 0, v_a_1683_);
v___x_1690_ = v___x_1687_;
goto v_reusejp_1689_;
}
else
{
lean_object* v_reuseFailAlloc_1691_; 
v_reuseFailAlloc_1691_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1691_, 0, v_a_1683_);
v___x_1690_ = v_reuseFailAlloc_1691_;
goto v_reusejp_1689_;
}
v_reusejp_1689_:
{
return v___x_1690_;
}
}
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_wfRecursion_spec__18_spec__21___redArg___boxed(lean_object* v_x_1702_, lean_object* v_isExporting_1703_, lean_object* v___y_1704_, lean_object* v___y_1705_, lean_object* v___y_1706_, lean_object* v___y_1707_, lean_object* v___y_1708_, lean_object* v___y_1709_, lean_object* v___y_1710_){
_start:
{
uint8_t v_isExporting_boxed_1711_; lean_object* v_res_1712_; 
v_isExporting_boxed_1711_ = lean_unbox(v_isExporting_1703_);
v_res_1712_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_wfRecursion_spec__18_spec__21___redArg(v_x_1702_, v_isExporting_boxed_1711_, v___y_1704_, v___y_1705_, v___y_1706_, v___y_1707_, v___y_1708_, v___y_1709_);
lean_dec(v___y_1709_);
lean_dec_ref(v___y_1708_);
lean_dec(v___y_1707_);
lean_dec_ref(v___y_1706_);
lean_dec(v___y_1705_);
lean_dec_ref(v___y_1704_);
return v_res_1712_;
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Elab_wfRecursion_spec__18___redArg(lean_object* v_x_1713_, uint8_t v_when_1714_, lean_object* v___y_1715_, lean_object* v___y_1716_, lean_object* v___y_1717_, lean_object* v___y_1718_, lean_object* v___y_1719_, lean_object* v___y_1720_){
_start:
{
if (v_when_1714_ == 0)
{
lean_object* v___x_1722_; 
lean_inc(v___y_1720_);
lean_inc_ref(v___y_1719_);
lean_inc(v___y_1718_);
lean_inc_ref(v___y_1717_);
lean_inc(v___y_1716_);
lean_inc_ref(v___y_1715_);
v___x_1722_ = lean_apply_7(v_x_1713_, v___y_1715_, v___y_1716_, v___y_1717_, v___y_1718_, v___y_1719_, v___y_1720_, lean_box(0));
return v___x_1722_;
}
else
{
uint8_t v___x_1723_; lean_object* v___x_1724_; 
v___x_1723_ = 0;
v___x_1724_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_wfRecursion_spec__18_spec__21___redArg(v_x_1713_, v___x_1723_, v___y_1715_, v___y_1716_, v___y_1717_, v___y_1718_, v___y_1719_, v___y_1720_);
return v___x_1724_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Elab_wfRecursion_spec__18___redArg___boxed(lean_object* v_x_1725_, lean_object* v_when_1726_, lean_object* v___y_1727_, lean_object* v___y_1728_, lean_object* v___y_1729_, lean_object* v___y_1730_, lean_object* v___y_1731_, lean_object* v___y_1732_, lean_object* v___y_1733_){
_start:
{
uint8_t v_when_boxed_1734_; lean_object* v_res_1735_; 
v_when_boxed_1734_ = lean_unbox(v_when_1726_);
v_res_1735_ = l_Lean_withoutExporting___at___00Lean_Elab_wfRecursion_spec__18___redArg(v_x_1725_, v_when_boxed_1734_, v___y_1727_, v___y_1728_, v___y_1729_, v___y_1730_, v___y_1731_, v___y_1732_);
lean_dec(v___y_1732_);
lean_dec_ref(v___y_1731_);
lean_dec(v___y_1730_);
lean_dec_ref(v___y_1729_);
lean_dec(v___y_1728_);
lean_dec_ref(v___y_1727_);
return v_res_1735_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__16___redArg(size_t v_sz_1736_, size_t v_i_1737_, lean_object* v_bs_1738_, lean_object* v___y_1739_, lean_object* v___y_1740_, lean_object* v___y_1741_, lean_object* v___y_1742_){
_start:
{
uint8_t v___x_1744_; 
v___x_1744_ = lean_usize_dec_lt(v_i_1737_, v_sz_1736_);
if (v___x_1744_ == 0)
{
lean_object* v___x_1745_; lean_object* v___x_1746_; 
v___x_1745_ = l_unsafeCast___redArg(v_bs_1738_);
lean_dec_ref(v_bs_1738_);
v___x_1746_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1746_, 0, v___x_1745_);
return v___x_1746_;
}
else
{
uint8_t v___x_1747_; lean_object* v_v_1748_; lean_object* v___x_1749_; lean_object* v_bs_x27_1750_; lean_object* v___x_1751_; lean_object* v___x_1752_; 
v___x_1747_ = 0;
v_v_1748_ = lean_array_uget(v_bs_1738_, v_i_1737_);
v___x_1749_ = lean_unsigned_to_nat(0u);
v_bs_x27_1750_ = lean_array_uset(v_bs_1738_, v_i_1737_, v___x_1749_);
v___x_1751_ = l_unsafeCast___redArg(v_v_1748_);
lean_dec(v_v_1748_);
v___x_1752_ = l_Lean_Elab_Mutual_cleanPreDef(v___x_1751_, v___x_1747_, v___y_1739_, v___y_1740_, v___y_1741_, v___y_1742_);
if (lean_obj_tag(v___x_1752_) == 0)
{
lean_object* v_a_1753_; size_t v___x_1754_; size_t v___x_1755_; lean_object* v___x_1756_; lean_object* v___x_1757_; 
v_a_1753_ = lean_ctor_get(v___x_1752_, 0);
lean_inc(v_a_1753_);
lean_dec_ref_known(v___x_1752_, 1);
v___x_1754_ = ((size_t)1ULL);
v___x_1755_ = lean_usize_add(v_i_1737_, v___x_1754_);
v___x_1756_ = l_unsafeCast___redArg(v_a_1753_);
lean_dec(v_a_1753_);
v___x_1757_ = lean_array_uset(v_bs_x27_1750_, v_i_1737_, v___x_1756_);
v_i_1737_ = v___x_1755_;
v_bs_1738_ = v___x_1757_;
goto _start;
}
else
{
lean_object* v_a_1759_; lean_object* v___x_1761_; uint8_t v_isShared_1762_; uint8_t v_isSharedCheck_1766_; 
lean_dec_ref(v_bs_x27_1750_);
v_a_1759_ = lean_ctor_get(v___x_1752_, 0);
v_isSharedCheck_1766_ = !lean_is_exclusive(v___x_1752_);
if (v_isSharedCheck_1766_ == 0)
{
v___x_1761_ = v___x_1752_;
v_isShared_1762_ = v_isSharedCheck_1766_;
goto v_resetjp_1760_;
}
else
{
lean_inc(v_a_1759_);
lean_dec(v___x_1752_);
v___x_1761_ = lean_box(0);
v_isShared_1762_ = v_isSharedCheck_1766_;
goto v_resetjp_1760_;
}
v_resetjp_1760_:
{
lean_object* v___x_1764_; 
if (v_isShared_1762_ == 0)
{
v___x_1764_ = v___x_1761_;
goto v_reusejp_1763_;
}
else
{
lean_object* v_reuseFailAlloc_1765_; 
v_reuseFailAlloc_1765_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1765_, 0, v_a_1759_);
v___x_1764_ = v_reuseFailAlloc_1765_;
goto v_reusejp_1763_;
}
v_reusejp_1763_:
{
return v___x_1764_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__16___redArg___boxed(lean_object* v_sz_1767_, lean_object* v_i_1768_, lean_object* v_bs_1769_, lean_object* v___y_1770_, lean_object* v___y_1771_, lean_object* v___y_1772_, lean_object* v___y_1773_, lean_object* v___y_1774_){
_start:
{
size_t v_sz_boxed_1775_; size_t v_i_boxed_1776_; lean_object* v_res_1777_; 
v_sz_boxed_1775_ = lean_unbox_usize(v_sz_1767_);
lean_dec(v_sz_1767_);
v_i_boxed_1776_ = lean_unbox_usize(v_i_1768_);
lean_dec(v_i_1768_);
v_res_1777_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__16___redArg(v_sz_boxed_1775_, v_i_boxed_1776_, v_bs_1769_, v___y_1770_, v___y_1771_, v___y_1772_, v___y_1773_);
lean_dec(v___y_1773_);
lean_dec_ref(v___y_1772_);
lean_dec(v___y_1771_);
lean_dec_ref(v___y_1770_);
return v_res_1777_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__16(size_t v_sz_1778_, size_t v_i_1779_, lean_object* v_bs_1780_, lean_object* v___y_1781_, lean_object* v___y_1782_, lean_object* v___y_1783_, lean_object* v___y_1784_, lean_object* v___y_1785_, lean_object* v___y_1786_){
_start:
{
lean_object* v___x_1788_; 
v___x_1788_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__16___redArg(v_sz_1778_, v_i_1779_, v_bs_1780_, v___y_1783_, v___y_1784_, v___y_1785_, v___y_1786_);
return v___x_1788_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__16___boxed(lean_object* v_sz_1789_, lean_object* v_i_1790_, lean_object* v_bs_1791_, lean_object* v___y_1792_, lean_object* v___y_1793_, lean_object* v___y_1794_, lean_object* v___y_1795_, lean_object* v___y_1796_, lean_object* v___y_1797_, lean_object* v___y_1798_){
_start:
{
size_t v_sz_boxed_1799_; size_t v_i_boxed_1800_; lean_object* v_res_1801_; 
v_sz_boxed_1799_ = lean_unbox_usize(v_sz_1789_);
lean_dec(v_sz_1789_);
v_i_boxed_1800_ = lean_unbox_usize(v_i_1790_);
lean_dec(v_i_1790_);
v_res_1801_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__16(v_sz_boxed_1799_, v_i_boxed_1800_, v_bs_1791_, v___y_1792_, v___y_1793_, v___y_1794_, v___y_1795_, v___y_1796_, v___y_1797_);
lean_dec(v___y_1797_);
lean_dec_ref(v___y_1796_);
lean_dec(v___y_1795_);
lean_dec_ref(v___y_1794_);
lean_dec(v___y_1793_);
lean_dec_ref(v___y_1792_);
return v_res_1801_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__1(size_t v_sz_1802_, size_t v_i_1803_, lean_object* v_bs_1804_){
_start:
{
uint8_t v___x_1805_; 
v___x_1805_ = lean_usize_dec_lt(v_i_1803_, v_sz_1802_);
if (v___x_1805_ == 0)
{
lean_object* v___x_1806_; lean_object* v___x_1807_; 
v___x_1806_ = l_unsafeCast___redArg(v_bs_1804_);
lean_dec_ref(v_bs_1804_);
v___x_1807_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1807_, 0, v___x_1806_);
return v___x_1807_;
}
else
{
lean_object* v_v_1808_; lean_object* v___x_1809_; 
v_v_1808_ = lean_array_uget_borrowed(v_bs_1804_, v_i_1803_);
v___x_1809_ = l_unsafeCast___redArg(v_v_1808_);
if (lean_obj_tag(v___x_1809_) == 0)
{
lean_object* v___x_1810_; 
lean_dec_ref(v_bs_1804_);
v___x_1810_ = lean_box(0);
return v___x_1810_;
}
else
{
lean_object* v_val_1811_; lean_object* v___x_1812_; lean_object* v_bs_x27_1813_; size_t v___x_1814_; size_t v___x_1815_; lean_object* v___x_1816_; lean_object* v___x_1817_; 
v_val_1811_ = lean_ctor_get(v___x_1809_, 0);
lean_inc(v_val_1811_);
lean_dec_ref_known(v___x_1809_, 1);
v___x_1812_ = lean_unsigned_to_nat(0u);
v_bs_x27_1813_ = lean_array_uset(v_bs_1804_, v_i_1803_, v___x_1812_);
v___x_1814_ = ((size_t)1ULL);
v___x_1815_ = lean_usize_add(v_i_1803_, v___x_1814_);
v___x_1816_ = l_unsafeCast___redArg(v_val_1811_);
lean_dec(v_val_1811_);
v___x_1817_ = lean_array_uset(v_bs_x27_1813_, v_i_1803_, v___x_1816_);
v_i_1803_ = v___x_1815_;
v_bs_1804_ = v___x_1817_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__1___boxed(lean_object* v_sz_1819_, lean_object* v_i_1820_, lean_object* v_bs_1821_){
_start:
{
size_t v_sz_boxed_1822_; size_t v_i_boxed_1823_; lean_object* v_res_1824_; 
v_sz_boxed_1822_ = lean_unbox_usize(v_sz_1819_);
lean_dec(v_sz_1819_);
v_i_boxed_1823_ = lean_unbox_usize(v_i_1820_);
lean_dec(v_i_1820_);
v_res_1824_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__1(v_sz_boxed_1822_, v_i_boxed_1823_, v_bs_1821_);
return v_res_1824_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__17___redArg(lean_object* v___x_1825_, lean_object* v_as_1826_, size_t v_sz_1827_, size_t v_i_1828_, lean_object* v_b_1829_, lean_object* v___y_1830_, lean_object* v___y_1831_, lean_object* v___y_1832_, lean_object* v___y_1833_){
_start:
{
lean_object* v_a_1836_; uint8_t v___x_1840_; 
v___x_1840_ = lean_usize_dec_lt(v_i_1828_, v_sz_1827_);
if (v___x_1840_ == 0)
{
lean_object* v___x_1841_; 
lean_dec(v___x_1825_);
v___x_1841_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1841_, 0, v_b_1829_);
return v___x_1841_;
}
else
{
lean_object* v_a_1842_; uint8_t v_kind_1843_; lean_object* v_declName_1844_; lean_object* v_type_1845_; lean_object* v___x_1846_; uint8_t v___x_1847_; 
v_a_1842_ = lean_array_uget_borrowed(v_as_1826_, v_i_1828_);
v_kind_1843_ = lean_ctor_get_uint8(v_a_1842_, sizeof(void*)*9);
v_declName_1844_ = lean_ctor_get(v_a_1842_, 3);
v_type_1845_ = lean_ctor_get(v_a_1842_, 6);
v___x_1846_ = lean_box(0);
v___x_1847_ = lean_name_eq(v_declName_1844_, v___x_1825_);
if (v___x_1847_ == 0)
{
uint8_t v___x_1848_; 
v___x_1848_ = l_Lean_Elab_DefKind_isTheorem(v_kind_1843_);
if (v___x_1848_ == 0)
{
lean_object* v___x_1849_; 
lean_inc_ref(v_type_1845_);
v___x_1849_ = l_Lean_Meta_isProp(v_type_1845_, v___y_1830_, v___y_1831_, v___y_1832_, v___y_1833_);
if (lean_obj_tag(v___x_1849_) == 0)
{
lean_object* v_a_1850_; uint8_t v___x_1851_; 
v_a_1850_ = lean_ctor_get(v___x_1849_, 0);
lean_inc(v_a_1850_);
lean_dec_ref_known(v___x_1849_, 1);
v___x_1851_ = lean_unbox(v_a_1850_);
lean_dec(v_a_1850_);
if (v___x_1851_ == 0)
{
lean_object* v___x_1852_; 
lean_inc(v___x_1825_);
lean_inc(v_a_1842_);
v___x_1852_ = l_Lean_Elab_WF_mkBinaryUnfoldEq(v_a_1842_, v___x_1825_, v___y_1830_, v___y_1831_, v___y_1832_, v___y_1833_);
if (lean_obj_tag(v___x_1852_) == 0)
{
lean_dec_ref_known(v___x_1852_, 1);
v_a_1836_ = v___x_1846_;
goto v___jp_1835_;
}
else
{
lean_dec(v___x_1825_);
return v___x_1852_;
}
}
else
{
v_a_1836_ = v___x_1846_;
goto v___jp_1835_;
}
}
else
{
lean_object* v_a_1853_; lean_object* v___x_1855_; uint8_t v_isShared_1856_; uint8_t v_isSharedCheck_1860_; 
lean_dec(v___x_1825_);
v_a_1853_ = lean_ctor_get(v___x_1849_, 0);
v_isSharedCheck_1860_ = !lean_is_exclusive(v___x_1849_);
if (v_isSharedCheck_1860_ == 0)
{
v___x_1855_ = v___x_1849_;
v_isShared_1856_ = v_isSharedCheck_1860_;
goto v_resetjp_1854_;
}
else
{
lean_inc(v_a_1853_);
lean_dec(v___x_1849_);
v___x_1855_ = lean_box(0);
v_isShared_1856_ = v_isSharedCheck_1860_;
goto v_resetjp_1854_;
}
v_resetjp_1854_:
{
lean_object* v___x_1858_; 
if (v_isShared_1856_ == 0)
{
v___x_1858_ = v___x_1855_;
goto v_reusejp_1857_;
}
else
{
lean_object* v_reuseFailAlloc_1859_; 
v_reuseFailAlloc_1859_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1859_, 0, v_a_1853_);
v___x_1858_ = v_reuseFailAlloc_1859_;
goto v_reusejp_1857_;
}
v_reusejp_1857_:
{
return v___x_1858_;
}
}
}
}
else
{
v_a_1836_ = v___x_1846_;
goto v___jp_1835_;
}
}
else
{
v_a_1836_ = v___x_1846_;
goto v___jp_1835_;
}
}
v___jp_1835_:
{
size_t v___x_1837_; size_t v___x_1838_; 
v___x_1837_ = ((size_t)1ULL);
v___x_1838_ = lean_usize_add(v_i_1828_, v___x_1837_);
v_i_1828_ = v___x_1838_;
v_b_1829_ = v_a_1836_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__17___redArg___boxed(lean_object* v___x_1861_, lean_object* v_as_1862_, lean_object* v_sz_1863_, lean_object* v_i_1864_, lean_object* v_b_1865_, lean_object* v___y_1866_, lean_object* v___y_1867_, lean_object* v___y_1868_, lean_object* v___y_1869_, lean_object* v___y_1870_){
_start:
{
size_t v_sz_boxed_1871_; size_t v_i_boxed_1872_; lean_object* v_res_1873_; 
v_sz_boxed_1871_ = lean_unbox_usize(v_sz_1863_);
lean_dec(v_sz_1863_);
v_i_boxed_1872_ = lean_unbox_usize(v_i_1864_);
lean_dec(v_i_1864_);
v_res_1873_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__17___redArg(v___x_1861_, v_as_1862_, v_sz_boxed_1871_, v_i_boxed_1872_, v_b_1865_, v___y_1866_, v___y_1867_, v___y_1868_, v___y_1869_);
lean_dec(v___y_1869_);
lean_dec_ref(v___y_1868_);
lean_dec(v___y_1867_);
lean_dec_ref(v___y_1866_);
lean_dec_ref(v_as_1862_);
return v_res_1873_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__2___redArg(size_t v_sz_1874_, size_t v_i_1875_, lean_object* v_bs_1876_, lean_object* v___y_1877_, lean_object* v___y_1878_){
_start:
{
uint8_t v___x_1880_; 
v___x_1880_ = lean_usize_dec_lt(v_i_1875_, v_sz_1874_);
if (v___x_1880_ == 0)
{
lean_object* v___x_1881_; lean_object* v___x_1882_; 
v___x_1881_ = l_unsafeCast___redArg(v_bs_1876_);
lean_dec_ref(v_bs_1876_);
v___x_1882_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1882_, 0, v___x_1881_);
return v___x_1882_;
}
else
{
lean_object* v_v_1883_; lean_object* v___x_1884_; lean_object* v_ref_1885_; uint8_t v_kind_1886_; lean_object* v_levelParams_1887_; lean_object* v_modifiers_1888_; lean_object* v_declName_1889_; lean_object* v_binders_1890_; lean_object* v_numSectionVars_1891_; lean_object* v_type_1892_; lean_object* v_value_1893_; lean_object* v_termination_1894_; lean_object* v___x_1896_; uint8_t v_isShared_1897_; uint8_t v_isSharedCheck_1918_; 
v_v_1883_ = lean_array_uget_borrowed(v_bs_1876_, v_i_1875_);
v___x_1884_ = l_unsafeCast___redArg(v_v_1883_);
v_ref_1885_ = lean_ctor_get(v___x_1884_, 0);
v_kind_1886_ = lean_ctor_get_uint8(v___x_1884_, sizeof(void*)*9);
v_levelParams_1887_ = lean_ctor_get(v___x_1884_, 1);
v_modifiers_1888_ = lean_ctor_get(v___x_1884_, 2);
v_declName_1889_ = lean_ctor_get(v___x_1884_, 3);
v_binders_1890_ = lean_ctor_get(v___x_1884_, 4);
v_numSectionVars_1891_ = lean_ctor_get(v___x_1884_, 5);
v_type_1892_ = lean_ctor_get(v___x_1884_, 6);
v_value_1893_ = lean_ctor_get(v___x_1884_, 7);
v_termination_1894_ = lean_ctor_get(v___x_1884_, 8);
v_isSharedCheck_1918_ = !lean_is_exclusive(v___x_1884_);
if (v_isSharedCheck_1918_ == 0)
{
v___x_1896_ = v___x_1884_;
v_isShared_1897_ = v_isSharedCheck_1918_;
goto v_resetjp_1895_;
}
else
{
lean_inc(v_termination_1894_);
lean_inc(v_value_1893_);
lean_inc(v_type_1892_);
lean_inc(v_numSectionVars_1891_);
lean_inc(v_binders_1890_);
lean_inc(v_declName_1889_);
lean_inc(v_modifiers_1888_);
lean_inc(v_levelParams_1887_);
lean_inc(v_ref_1885_);
lean_dec(v___x_1884_);
v___x_1896_ = lean_box(0);
v_isShared_1897_ = v_isSharedCheck_1918_;
goto v_resetjp_1895_;
}
v_resetjp_1895_:
{
lean_object* v___x_1898_; lean_object* v_bs_x27_1899_; lean_object* v___x_1900_; 
v___x_1898_ = lean_unsigned_to_nat(0u);
v_bs_x27_1899_ = lean_array_uset(v_bs_1876_, v_i_1875_, v___x_1898_);
v___x_1900_ = l_Lean_Elab_WF_floatRecApp(v_value_1893_, v___y_1877_, v___y_1878_);
if (lean_obj_tag(v___x_1900_) == 0)
{
lean_object* v_a_1901_; lean_object* v___x_1903_; 
v_a_1901_ = lean_ctor_get(v___x_1900_, 0);
lean_inc(v_a_1901_);
lean_dec_ref_known(v___x_1900_, 1);
if (v_isShared_1897_ == 0)
{
lean_ctor_set(v___x_1896_, 7, v_a_1901_);
v___x_1903_ = v___x_1896_;
goto v_reusejp_1902_;
}
else
{
lean_object* v_reuseFailAlloc_1909_; 
v_reuseFailAlloc_1909_ = lean_alloc_ctor(0, 9, 1);
lean_ctor_set(v_reuseFailAlloc_1909_, 0, v_ref_1885_);
lean_ctor_set(v_reuseFailAlloc_1909_, 1, v_levelParams_1887_);
lean_ctor_set(v_reuseFailAlloc_1909_, 2, v_modifiers_1888_);
lean_ctor_set(v_reuseFailAlloc_1909_, 3, v_declName_1889_);
lean_ctor_set(v_reuseFailAlloc_1909_, 4, v_binders_1890_);
lean_ctor_set(v_reuseFailAlloc_1909_, 5, v_numSectionVars_1891_);
lean_ctor_set(v_reuseFailAlloc_1909_, 6, v_type_1892_);
lean_ctor_set(v_reuseFailAlloc_1909_, 7, v_a_1901_);
lean_ctor_set(v_reuseFailAlloc_1909_, 8, v_termination_1894_);
lean_ctor_set_uint8(v_reuseFailAlloc_1909_, sizeof(void*)*9, v_kind_1886_);
v___x_1903_ = v_reuseFailAlloc_1909_;
goto v_reusejp_1902_;
}
v_reusejp_1902_:
{
size_t v___x_1904_; size_t v___x_1905_; lean_object* v___x_1906_; lean_object* v___x_1907_; 
v___x_1904_ = ((size_t)1ULL);
v___x_1905_ = lean_usize_add(v_i_1875_, v___x_1904_);
v___x_1906_ = l_unsafeCast___redArg(v___x_1903_);
lean_dec_ref(v___x_1903_);
v___x_1907_ = lean_array_uset(v_bs_x27_1899_, v_i_1875_, v___x_1906_);
v_i_1875_ = v___x_1905_;
v_bs_1876_ = v___x_1907_;
goto _start;
}
}
else
{
lean_object* v_a_1910_; lean_object* v___x_1912_; uint8_t v_isShared_1913_; uint8_t v_isSharedCheck_1917_; 
lean_dec_ref(v_bs_x27_1899_);
lean_del_object(v___x_1896_);
lean_dec_ref(v_termination_1894_);
lean_dec_ref(v_type_1892_);
lean_dec(v_numSectionVars_1891_);
lean_dec(v_binders_1890_);
lean_dec(v_declName_1889_);
lean_dec_ref(v_modifiers_1888_);
lean_dec(v_levelParams_1887_);
lean_dec(v_ref_1885_);
v_a_1910_ = lean_ctor_get(v___x_1900_, 0);
v_isSharedCheck_1917_ = !lean_is_exclusive(v___x_1900_);
if (v_isSharedCheck_1917_ == 0)
{
v___x_1912_ = v___x_1900_;
v_isShared_1913_ = v_isSharedCheck_1917_;
goto v_resetjp_1911_;
}
else
{
lean_inc(v_a_1910_);
lean_dec(v___x_1900_);
v___x_1912_ = lean_box(0);
v_isShared_1913_ = v_isSharedCheck_1917_;
goto v_resetjp_1911_;
}
v_resetjp_1911_:
{
lean_object* v___x_1915_; 
if (v_isShared_1913_ == 0)
{
v___x_1915_ = v___x_1912_;
goto v_reusejp_1914_;
}
else
{
lean_object* v_reuseFailAlloc_1916_; 
v_reuseFailAlloc_1916_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1916_, 0, v_a_1910_);
v___x_1915_ = v_reuseFailAlloc_1916_;
goto v_reusejp_1914_;
}
v_reusejp_1914_:
{
return v___x_1915_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__2___redArg___boxed(lean_object* v_sz_1919_, lean_object* v_i_1920_, lean_object* v_bs_1921_, lean_object* v___y_1922_, lean_object* v___y_1923_, lean_object* v___y_1924_){
_start:
{
size_t v_sz_boxed_1925_; size_t v_i_boxed_1926_; lean_object* v_res_1927_; 
v_sz_boxed_1925_ = lean_unbox_usize(v_sz_1919_);
lean_dec(v_sz_1919_);
v_i_boxed_1926_ = lean_unbox_usize(v_i_1920_);
lean_dec(v_i_1920_);
v_res_1927_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__2___redArg(v_sz_boxed_1925_, v_i_boxed_1926_, v_bs_1921_, v___y_1922_, v___y_1923_);
lean_dec(v___y_1923_);
lean_dec_ref(v___y_1922_);
return v_res_1927_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__2(size_t v_sz_1928_, size_t v_i_1929_, lean_object* v_bs_1930_, lean_object* v___y_1931_, lean_object* v___y_1932_, lean_object* v___y_1933_, lean_object* v___y_1934_, lean_object* v___y_1935_, lean_object* v___y_1936_){
_start:
{
lean_object* v___x_1938_; 
v___x_1938_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__2___redArg(v_sz_1928_, v_i_1929_, v_bs_1930_, v___y_1935_, v___y_1936_);
return v___x_1938_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__2___boxed(lean_object* v_sz_1939_, lean_object* v_i_1940_, lean_object* v_bs_1941_, lean_object* v___y_1942_, lean_object* v___y_1943_, lean_object* v___y_1944_, lean_object* v___y_1945_, lean_object* v___y_1946_, lean_object* v___y_1947_, lean_object* v___y_1948_){
_start:
{
size_t v_sz_boxed_1949_; size_t v_i_boxed_1950_; lean_object* v_res_1951_; 
v_sz_boxed_1949_ = lean_unbox_usize(v_sz_1939_);
lean_dec(v_sz_1939_);
v_i_boxed_1950_ = lean_unbox_usize(v_i_1940_);
lean_dec(v_i_1940_);
v_res_1951_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__2(v_sz_boxed_1949_, v_i_boxed_1950_, v_bs_1941_, v___y_1942_, v___y_1943_, v___y_1944_, v___y_1945_, v___y_1946_, v___y_1947_);
lean_dec(v___y_1947_);
lean_dec_ref(v___y_1946_);
lean_dec(v___y_1945_);
lean_dec_ref(v___y_1944_);
lean_dec(v___y_1943_);
lean_dec_ref(v___y_1942_);
return v_res_1951_;
}
}
static lean_object* _init_l_Lean_Elab_wfRecursion___closed__4(void){
_start:
{
lean_object* v___x_1959_; lean_object* v___x_1960_; 
v___x_1959_ = ((lean_object*)(l_Lean_Elab_wfRecursion___closed__3));
v___x_1960_ = l_Lean_stringToMessageData(v___x_1959_);
return v___x_1960_;
}
}
static lean_object* _init_l_Lean_Elab_wfRecursion___closed__6(void){
_start:
{
lean_object* v___x_1962_; lean_object* v___x_1963_; 
v___x_1962_ = ((lean_object*)(l_Lean_Elab_wfRecursion___closed__5));
v___x_1963_ = l_Lean_stringToMessageData(v___x_1962_);
return v___x_1963_;
}
}
static lean_object* _init_l_Lean_Elab_wfRecursion___closed__8(void){
_start:
{
lean_object* v___x_1965_; lean_object* v___x_1966_; 
v___x_1965_ = ((lean_object*)(l_Lean_Elab_wfRecursion___closed__7));
v___x_1966_ = l_Lean_stringToMessageData(v___x_1965_);
return v___x_1966_;
}
}
static lean_object* _init_l_Lean_Elab_wfRecursion___closed__10(void){
_start:
{
lean_object* v___x_1968_; lean_object* v___x_1969_; 
v___x_1968_ = ((lean_object*)(l_Lean_Elab_wfRecursion___closed__9));
v___x_1969_ = l_Lean_stringToMessageData(v___x_1968_);
return v___x_1969_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_wfRecursion(lean_object* v_docCtx_1972_, lean_object* v_preDefs_1973_, lean_object* v_termMeasure_x3fs_1974_, lean_object* v_a_1975_, lean_object* v_a_1976_, lean_object* v_a_1977_, lean_object* v_a_1978_, lean_object* v_a_1979_, lean_object* v_a_1980_){
_start:
{
lean_object* v___x_1982_; size_t v_sz_1983_; size_t v___x_1984_; lean_object* v___x_1985_; lean_object* v___x_1986_; lean_object* v_termMeasures_x3f_1987_; size_t v_sz_1988_; lean_object* v___x_1989_; lean_object* v___x_1990_; lean_object* v___x_1991_; lean_object* v___x_1992_; lean_object* v___x_42718__overap_1993_; lean_object* v___x_1994_; 
v___x_1982_ = l_Lean_Elab_instInhabitedPreDefinition_default;
v_sz_1983_ = lean_array_size(v_termMeasure_x3fs_1974_);
v___x_1984_ = ((size_t)0ULL);
v___x_1985_ = l_unsafeCast___redArg(v_termMeasure_x3fs_1974_);
v___x_1986_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__1(v_sz_1983_, v___x_1984_, v___x_1985_);
v_termMeasures_x3f_1987_ = l_unsafeCast___redArg(v___x_1986_);
lean_dec(v___x_1986_);
v_sz_1988_ = lean_array_size(v_preDefs_1973_);
v___x_1989_ = l_unsafeCast___redArg(v_preDefs_1973_);
v___x_1990_ = lean_box_usize(v_sz_1988_);
v___x_1991_ = ((lean_object*)(l_Lean_Elab_wfRecursion___boxed__const__1));
v___x_1992_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__2___boxed), 10, 3);
lean_closure_set(v___x_1992_, 0, v___x_1990_);
lean_closure_set(v___x_1992_, 1, v___x_1991_);
lean_closure_set(v___x_1992_, 2, v___x_1989_);
v___x_42718__overap_1993_ = l_unsafeCast___redArg(v___x_1992_);
lean_dec_ref(v___x_1992_);
lean_inc(v_a_1980_);
lean_inc_ref(v_a_1979_);
lean_inc(v_a_1978_);
lean_inc_ref(v_a_1977_);
lean_inc(v_a_1976_);
lean_inc_ref(v_a_1975_);
v___x_1994_ = lean_apply_7(v___x_42718__overap_1993_, v_a_1975_, v_a_1976_, v_a_1977_, v_a_1978_, v_a_1979_, v_a_1980_, lean_box(0));
if (lean_obj_tag(v___x_1994_) == 0)
{
lean_object* v_a_1995_; lean_object* v___x_1996_; lean_object* v___y_1998_; lean_object* v___y_1999_; lean_object* v___y_2000_; lean_object* v___y_2001_; lean_object* v___y_2002_; lean_object* v___y_2003_; lean_object* v___y_2004_; lean_object* v___y_2005_; size_t v_sz_2010_; lean_object* v___x_2011_; lean_object* v___x_2012_; lean_object* v___f_2013_; lean_object* v___x_2014_; lean_object* v_env_2015_; lean_object* v___x_2016_; lean_object* v___x_2017_; 
v_a_1995_ = lean_ctor_get(v___x_1994_, 0);
lean_inc_n(v_a_1995_, 2);
lean_dec_ref_known(v___x_1994_, 1);
v___x_1996_ = lean_box(0);
v_sz_2010_ = lean_array_size(v_a_1995_);
v___x_2011_ = lean_box_usize(v_sz_2010_);
v___x_2012_ = ((lean_object*)(l_Lean_Elab_wfRecursion___boxed__const__1));
v___f_2013_ = lean_alloc_closure((void*)(l_Lean_Elab_wfRecursion___lam__0___boxed), 12, 5);
lean_closure_set(v___f_2013_, 0, v_a_1995_);
lean_closure_set(v___f_2013_, 1, v___x_2011_);
lean_closure_set(v___f_2013_, 2, v___x_2012_);
lean_closure_set(v___f_2013_, 3, v___x_1996_);
lean_closure_set(v___f_2013_, 4, v___x_1982_);
v___x_2014_ = lean_st_ref_get(v_a_1980_);
v_env_2015_ = lean_ctor_get(v___x_2014_, 0);
lean_inc_ref(v_env_2015_);
lean_dec(v___x_2014_);
v___x_2016_ = l_Lean_Environment_unlockAsync(v_env_2015_);
v___x_2017_ = l_Lean_withEnv___at___00Lean_Elab_wfRecursion_spec__8___redArg(v___x_2016_, v___f_2013_, v_a_1975_, v_a_1976_, v_a_1977_, v_a_1978_, v_a_1979_, v_a_1980_);
if (lean_obj_tag(v___x_2017_) == 0)
{
lean_object* v_a_2018_; lean_object* v_snd_2019_; lean_object* v_fst_2020_; lean_object* v___x_2022_; uint8_t v_isShared_2023_; uint8_t v_isSharedCheck_2210_; 
v_a_2018_ = lean_ctor_get(v___x_2017_, 0);
lean_inc(v_a_2018_);
lean_dec_ref_known(v___x_2017_, 1);
v_snd_2019_ = lean_ctor_get(v_a_2018_, 1);
v_fst_2020_ = lean_ctor_get(v_a_2018_, 0);
v_isSharedCheck_2210_ = !lean_is_exclusive(v_a_2018_);
if (v_isSharedCheck_2210_ == 0)
{
v___x_2022_ = v_a_2018_;
v_isShared_2023_ = v_isSharedCheck_2210_;
goto v_resetjp_2021_;
}
else
{
lean_inc(v_snd_2019_);
lean_inc(v_fst_2020_);
lean_dec(v_a_2018_);
v___x_2022_ = lean_box(0);
v_isShared_2023_ = v_isSharedCheck_2210_;
goto v_resetjp_2021_;
}
v_resetjp_2021_:
{
lean_object* v_fst_2024_; lean_object* v_snd_2025_; lean_object* v___x_2027_; uint8_t v_isShared_2028_; uint8_t v_isSharedCheck_2209_; 
v_fst_2024_ = lean_ctor_get(v_snd_2019_, 0);
v_snd_2025_ = lean_ctor_get(v_snd_2019_, 1);
v_isSharedCheck_2209_ = !lean_is_exclusive(v_snd_2019_);
if (v_isSharedCheck_2209_ == 0)
{
v___x_2027_ = v_snd_2019_;
v_isShared_2028_ = v_isSharedCheck_2209_;
goto v_resetjp_2026_;
}
else
{
lean_inc(v_snd_2025_);
lean_inc(v_fst_2024_);
lean_dec(v_snd_2019_);
v___x_2027_ = lean_box(0);
v_isShared_2028_ = v_isSharedCheck_2209_;
goto v_resetjp_2026_;
}
v_resetjp_2026_:
{
lean_object* v___y_2030_; uint8_t v___y_2031_; lean_object* v___y_2032_; lean_object* v___y_2033_; lean_object* v___y_2034_; lean_object* v___y_2035_; lean_object* v___y_2036_; lean_object* v___y_2037_; lean_object* v___y_2038_; lean_object* v___f_2093_; lean_object* v___x_2094_; lean_object* v___y_2096_; lean_object* v___y_2097_; lean_object* v_wf_2098_; lean_object* v___y_2099_; lean_object* v___y_2100_; lean_object* v___y_2101_; lean_object* v___y_2102_; lean_object* v___y_2103_; lean_object* v___y_2104_; lean_object* v___y_2141_; lean_object* v___y_2142_; lean_object* v___y_2143_; lean_object* v___y_2144_; lean_object* v___y_2145_; lean_object* v___y_2146_; lean_object* v___y_2147_; lean_object* v___y_2148_; lean_object* v___y_2149_; lean_object* v___y_2163_; lean_object* v___y_2164_; lean_object* v___y_2165_; lean_object* v___y_2166_; lean_object* v___y_2167_; lean_object* v___y_2168_; lean_object* v___x_2200_; lean_object* v_a_2201_; uint8_t v___x_2202_; 
lean_inc(v_snd_2025_);
v___f_2093_ = lean_alloc_closure((void*)(l_Lean_Elab_wfRecursion___lam__1___boxed), 8, 1);
lean_closure_set(v___f_2093_, 0, v_snd_2025_);
v___x_2094_ = ((lean_object*)(l_Lean_Elab_wfRecursion___closed__2));
v___x_2200_ = l_Lean_Elab_wfRecursion___lam__2(v___x_2094_, v_a_1975_, v_a_1976_, v_a_1977_, v_a_1978_, v_a_1979_, v_a_1980_);
v_a_2201_ = lean_ctor_get(v___x_2200_, 0);
lean_inc(v_a_2201_);
lean_dec_ref(v___x_2200_);
v___x_2202_ = lean_unbox(v_a_2201_);
lean_dec(v_a_2201_);
if (v___x_2202_ == 0)
{
v___y_2163_ = v_a_1975_;
v___y_2164_ = v_a_1976_;
v___y_2165_ = v_a_1977_;
v___y_2166_ = v_a_1978_;
v___y_2167_ = v_a_1979_;
v___y_2168_ = v_a_1980_;
goto v___jp_2162_;
}
else
{
lean_object* v_value_2203_; lean_object* v___x_2204_; lean_object* v___x_2205_; lean_object* v___x_2206_; lean_object* v___x_2207_; lean_object* v___x_2208_; 
v_value_2203_ = lean_ctor_get(v_snd_2025_, 7);
v___x_2204_ = lean_obj_once(&l_Lean_Elab_wfRecursion___closed__10, &l_Lean_Elab_wfRecursion___closed__10_once, _init_l_Lean_Elab_wfRecursion___closed__10);
lean_inc_ref(v_value_2203_);
v___x_2205_ = l_Lean_MessageData_ofExpr(v_value_2203_);
v___x_2206_ = l_Lean_indentD(v___x_2205_);
v___x_2207_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2207_, 0, v___x_2204_);
lean_ctor_set(v___x_2207_, 1, v___x_2206_);
v___x_2208_ = l_Lean_addTrace___at___00Lean_Elab_wfRecursion_spec__14___redArg(v___x_2094_, v___x_2207_, v_a_1977_, v_a_1978_, v_a_1979_, v_a_1980_);
if (lean_obj_tag(v___x_2208_) == 0)
{
lean_dec_ref_known(v___x_2208_, 1);
v___y_2163_ = v_a_1975_;
v___y_2164_ = v_a_1976_;
v___y_2165_ = v_a_1977_;
v___y_2166_ = v_a_1978_;
v___y_2167_ = v_a_1979_;
v___y_2168_ = v_a_1980_;
goto v___jp_2162_;
}
else
{
lean_dec_ref(v___f_2093_);
lean_del_object(v___x_2027_);
lean_dec(v_snd_2025_);
lean_dec(v_fst_2024_);
lean_del_object(v___x_2022_);
lean_dec(v_fst_2020_);
lean_dec(v_a_1995_);
lean_dec(v_termMeasures_x3f_1987_);
lean_dec_ref(v_docCtx_1972_);
return v___x_2208_;
}
}
v___jp_2029_:
{
lean_object* v___x_2039_; 
lean_inc_ref(v___y_2032_);
lean_inc(v_a_1995_);
lean_inc(v_fst_2024_);
lean_inc(v_fst_2020_);
v___x_2039_ = l_Lean_Elab_WF_preDefsFromUnaryNonRec(v_fst_2020_, v_fst_2024_, v_a_1995_, v___y_2032_, v___y_2035_, v___y_2036_, v___y_2037_, v___y_2038_);
if (lean_obj_tag(v___x_2039_) == 0)
{
lean_object* v_a_2040_; lean_object* v___x_2041_; 
v_a_2040_ = lean_ctor_get(v___x_2039_, 0);
lean_inc(v_a_2040_);
lean_dec_ref_known(v___x_2039_, 1);
lean_inc_ref(v___y_2032_);
lean_inc(v_a_1995_);
lean_inc_ref(v_docCtx_1972_);
v___x_2041_ = l_Lean_Elab_Mutual_addPreDefsFromUnary(v_docCtx_1972_, v_a_1995_, v_a_2040_, v___y_2032_, v___y_2031_, v___y_2033_, v___y_2034_, v___y_2035_, v___y_2036_, v___y_2037_, v___y_2038_);
lean_dec(v_a_2040_);
if (lean_obj_tag(v___x_2041_) == 0)
{
lean_object* v___x_2042_; 
lean_dec_ref_known(v___x_2041_, 1);
lean_inc(v_a_1995_);
v___x_2042_ = l_Lean_Elab_addAndCompilePartialRec(v_docCtx_1972_, v_a_1995_, v___y_2033_, v___y_2034_, v___y_2035_, v___y_2036_, v___y_2037_, v___y_2038_);
if (lean_obj_tag(v___x_2042_) == 0)
{
lean_object* v___x_2043_; 
lean_dec_ref_known(v___x_2042_, 1);
v___x_2043_ = l_Lean_Elab_Mutual_cleanPreDef(v_snd_2025_, v___y_2031_, v___y_2035_, v___y_2036_, v___y_2037_, v___y_2038_);
if (lean_obj_tag(v___x_2043_) == 0)
{
lean_object* v_a_2044_; lean_object* v___x_2045_; lean_object* v___x_2046_; lean_object* v___x_2047_; lean_object* v___x_2048_; lean_object* v___x_42748__overap_2049_; lean_object* v___x_2050_; 
v_a_2044_ = lean_ctor_get(v___x_2043_, 0);
lean_inc(v_a_2044_);
lean_dec_ref_known(v___x_2043_, 1);
v___x_2045_ = l_unsafeCast___redArg(v_a_1995_);
lean_dec(v_a_1995_);
v___x_2046_ = lean_box_usize(v_sz_2010_);
v___x_2047_ = ((lean_object*)(l_Lean_Elab_wfRecursion___boxed__const__1));
v___x_2048_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_wfRecursion_spec__16___boxed), 10, 3);
lean_closure_set(v___x_2048_, 0, v___x_2046_);
lean_closure_set(v___x_2048_, 1, v___x_2047_);
lean_closure_set(v___x_2048_, 2, v___x_2045_);
v___x_42748__overap_2049_ = l_unsafeCast___redArg(v___x_2048_);
lean_dec_ref(v___x_2048_);
lean_inc(v___y_2038_);
lean_inc_ref(v___y_2037_);
lean_inc(v___y_2036_);
lean_inc_ref(v___y_2035_);
lean_inc(v___y_2034_);
lean_inc_ref(v___y_2033_);
v___x_2050_ = lean_apply_7(v___x_42748__overap_2049_, v___y_2033_, v___y_2034_, v___y_2035_, v___y_2036_, v___y_2037_, v___y_2038_, lean_box(0));
if (lean_obj_tag(v___x_2050_) == 0)
{
lean_object* v_a_2051_; lean_object* v_declName_2052_; lean_object* v___x_2053_; 
v_a_2051_ = lean_ctor_get(v___x_2050_, 0);
lean_inc(v_a_2051_);
lean_dec_ref_known(v___x_2050_, 1);
v_declName_2052_ = lean_ctor_get(v___y_2032_, 3);
lean_inc_n(v_declName_2052_, 2);
lean_dec_ref(v___y_2032_);
v___x_2053_ = l_Lean_Elab_WF_registerEqnsInfo(v_a_2051_, v_declName_2052_, v_fst_2020_, v_fst_2024_, v___y_2035_, v___y_2036_, v___y_2037_, v___y_2038_);
if (lean_obj_tag(v___x_2053_) == 0)
{
lean_object* v_declName_2054_; lean_object* v_type_2055_; lean_object* v___x_2056_; 
lean_dec_ref_known(v___x_2053_, 1);
v_declName_2054_ = lean_ctor_get(v_a_2044_, 3);
v_type_2055_ = lean_ctor_get(v_a_2044_, 6);
lean_inc(v_declName_2054_);
v___x_2056_ = l_Lean_Meta_markAsRecursive___redArg(v_declName_2054_, v___y_2038_);
if (lean_obj_tag(v___x_2056_) == 0)
{
lean_object* v___x_2057_; 
lean_dec_ref_known(v___x_2056_, 1);
lean_inc_ref(v_type_2055_);
v___x_2057_ = l_Lean_Meta_isProp(v_type_2055_, v___y_2035_, v___y_2036_, v___y_2037_, v___y_2038_);
if (lean_obj_tag(v___x_2057_) == 0)
{
lean_object* v_a_2058_; uint8_t v___x_2059_; 
v_a_2058_ = lean_ctor_get(v___x_2057_, 0);
lean_inc(v_a_2058_);
lean_dec_ref_known(v___x_2057_, 1);
v___x_2059_ = lean_unbox(v_a_2058_);
lean_dec(v_a_2058_);
if (v___x_2059_ == 0)
{
lean_object* v___x_2060_; 
lean_inc(v_declName_2052_);
v___x_2060_ = l_Lean_Elab_WF_mkUnfoldEq(v_a_2044_, v_declName_2052_, v___y_2030_, v___y_2035_, v___y_2036_, v___y_2037_, v___y_2038_);
if (lean_obj_tag(v___x_2060_) == 0)
{
lean_dec_ref_known(v___x_2060_, 1);
v___y_1998_ = v_declName_2052_;
v___y_1999_ = v_a_2051_;
v___y_2000_ = v___y_2033_;
v___y_2001_ = v___y_2034_;
v___y_2002_ = v___y_2035_;
v___y_2003_ = v___y_2036_;
v___y_2004_ = v___y_2037_;
v___y_2005_ = v___y_2038_;
goto v___jp_1997_;
}
else
{
lean_dec(v_declName_2052_);
lean_dec(v_a_2051_);
return v___x_2060_;
}
}
else
{
lean_dec(v_a_2044_);
lean_dec_ref(v___y_2030_);
v___y_1998_ = v_declName_2052_;
v___y_1999_ = v_a_2051_;
v___y_2000_ = v___y_2033_;
v___y_2001_ = v___y_2034_;
v___y_2002_ = v___y_2035_;
v___y_2003_ = v___y_2036_;
v___y_2004_ = v___y_2037_;
v___y_2005_ = v___y_2038_;
goto v___jp_1997_;
}
}
else
{
lean_object* v_a_2061_; lean_object* v___x_2063_; uint8_t v_isShared_2064_; uint8_t v_isSharedCheck_2068_; 
lean_dec(v_declName_2052_);
lean_dec(v_a_2051_);
lean_dec(v_a_2044_);
lean_dec_ref(v___y_2030_);
v_a_2061_ = lean_ctor_get(v___x_2057_, 0);
v_isSharedCheck_2068_ = !lean_is_exclusive(v___x_2057_);
if (v_isSharedCheck_2068_ == 0)
{
v___x_2063_ = v___x_2057_;
v_isShared_2064_ = v_isSharedCheck_2068_;
goto v_resetjp_2062_;
}
else
{
lean_inc(v_a_2061_);
lean_dec(v___x_2057_);
v___x_2063_ = lean_box(0);
v_isShared_2064_ = v_isSharedCheck_2068_;
goto v_resetjp_2062_;
}
v_resetjp_2062_:
{
lean_object* v___x_2066_; 
if (v_isShared_2064_ == 0)
{
v___x_2066_ = v___x_2063_;
goto v_reusejp_2065_;
}
else
{
lean_object* v_reuseFailAlloc_2067_; 
v_reuseFailAlloc_2067_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2067_, 0, v_a_2061_);
v___x_2066_ = v_reuseFailAlloc_2067_;
goto v_reusejp_2065_;
}
v_reusejp_2065_:
{
return v___x_2066_;
}
}
}
}
else
{
lean_dec(v_declName_2052_);
lean_dec(v_a_2051_);
lean_dec(v_a_2044_);
lean_dec_ref(v___y_2030_);
return v___x_2056_;
}
}
else
{
lean_dec(v_declName_2052_);
lean_dec(v_a_2051_);
lean_dec(v_a_2044_);
lean_dec_ref(v___y_2030_);
return v___x_2053_;
}
}
else
{
lean_object* v_a_2069_; lean_object* v___x_2071_; uint8_t v_isShared_2072_; uint8_t v_isSharedCheck_2076_; 
lean_dec(v_a_2044_);
lean_dec_ref(v___y_2032_);
lean_dec_ref(v___y_2030_);
lean_dec(v_fst_2024_);
lean_dec(v_fst_2020_);
v_a_2069_ = lean_ctor_get(v___x_2050_, 0);
v_isSharedCheck_2076_ = !lean_is_exclusive(v___x_2050_);
if (v_isSharedCheck_2076_ == 0)
{
v___x_2071_ = v___x_2050_;
v_isShared_2072_ = v_isSharedCheck_2076_;
goto v_resetjp_2070_;
}
else
{
lean_inc(v_a_2069_);
lean_dec(v___x_2050_);
v___x_2071_ = lean_box(0);
v_isShared_2072_ = v_isSharedCheck_2076_;
goto v_resetjp_2070_;
}
v_resetjp_2070_:
{
lean_object* v___x_2074_; 
if (v_isShared_2072_ == 0)
{
v___x_2074_ = v___x_2071_;
goto v_reusejp_2073_;
}
else
{
lean_object* v_reuseFailAlloc_2075_; 
v_reuseFailAlloc_2075_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2075_, 0, v_a_2069_);
v___x_2074_ = v_reuseFailAlloc_2075_;
goto v_reusejp_2073_;
}
v_reusejp_2073_:
{
return v___x_2074_;
}
}
}
}
else
{
lean_object* v_a_2077_; lean_object* v___x_2079_; uint8_t v_isShared_2080_; uint8_t v_isSharedCheck_2084_; 
lean_dec_ref(v___y_2032_);
lean_dec_ref(v___y_2030_);
lean_dec(v_fst_2024_);
lean_dec(v_fst_2020_);
lean_dec(v_a_1995_);
v_a_2077_ = lean_ctor_get(v___x_2043_, 0);
v_isSharedCheck_2084_ = !lean_is_exclusive(v___x_2043_);
if (v_isSharedCheck_2084_ == 0)
{
v___x_2079_ = v___x_2043_;
v_isShared_2080_ = v_isSharedCheck_2084_;
goto v_resetjp_2078_;
}
else
{
lean_inc(v_a_2077_);
lean_dec(v___x_2043_);
v___x_2079_ = lean_box(0);
v_isShared_2080_ = v_isSharedCheck_2084_;
goto v_resetjp_2078_;
}
v_resetjp_2078_:
{
lean_object* v___x_2082_; 
if (v_isShared_2080_ == 0)
{
v___x_2082_ = v___x_2079_;
goto v_reusejp_2081_;
}
else
{
lean_object* v_reuseFailAlloc_2083_; 
v_reuseFailAlloc_2083_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2083_, 0, v_a_2077_);
v___x_2082_ = v_reuseFailAlloc_2083_;
goto v_reusejp_2081_;
}
v_reusejp_2081_:
{
return v___x_2082_;
}
}
}
}
else
{
lean_dec_ref(v___y_2032_);
lean_dec_ref(v___y_2030_);
lean_dec(v_snd_2025_);
lean_dec(v_fst_2024_);
lean_dec(v_fst_2020_);
lean_dec(v_a_1995_);
return v___x_2042_;
}
}
else
{
lean_dec_ref(v___y_2032_);
lean_dec_ref(v___y_2030_);
lean_dec(v_snd_2025_);
lean_dec(v_fst_2024_);
lean_dec(v_fst_2020_);
lean_dec(v_a_1995_);
lean_dec_ref(v_docCtx_1972_);
return v___x_2041_;
}
}
else
{
lean_object* v_a_2085_; lean_object* v___x_2087_; uint8_t v_isShared_2088_; uint8_t v_isSharedCheck_2092_; 
lean_dec_ref(v___y_2032_);
lean_dec_ref(v___y_2030_);
lean_dec(v_snd_2025_);
lean_dec(v_fst_2024_);
lean_dec(v_fst_2020_);
lean_dec(v_a_1995_);
lean_dec_ref(v_docCtx_1972_);
v_a_2085_ = lean_ctor_get(v___x_2039_, 0);
v_isSharedCheck_2092_ = !lean_is_exclusive(v___x_2039_);
if (v_isSharedCheck_2092_ == 0)
{
v___x_2087_ = v___x_2039_;
v_isShared_2088_ = v_isSharedCheck_2092_;
goto v_resetjp_2086_;
}
else
{
lean_inc(v_a_2085_);
lean_dec(v___x_2039_);
v___x_2087_ = lean_box(0);
v_isShared_2088_ = v_isSharedCheck_2092_;
goto v_resetjp_2086_;
}
v_resetjp_2086_:
{
lean_object* v___x_2090_; 
if (v_isShared_2088_ == 0)
{
v___x_2090_ = v___x_2087_;
goto v_reusejp_2089_;
}
else
{
lean_object* v_reuseFailAlloc_2091_; 
v_reuseFailAlloc_2091_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2091_, 0, v_a_2085_);
v___x_2090_ = v_reuseFailAlloc_2091_;
goto v_reusejp_2089_;
}
v_reusejp_2089_:
{
return v___x_2090_;
}
}
}
}
v___jp_2095_:
{
lean_object* v_declName_2105_; lean_object* v_type_2106_; lean_object* v_numFixed_2107_; lean_object* v___x_2108_; lean_object* v___x_2109_; lean_object* v___f_2110_; lean_object* v___x_2111_; uint8_t v___x_2112_; lean_object* v___x_2113_; 
v_declName_2105_ = lean_ctor_get(v_snd_2025_, 3);
v_type_2106_ = lean_ctor_get(v_snd_2025_, 6);
v_numFixed_2107_ = lean_ctor_get(v_fst_2020_, 0);
v___x_2108_ = lean_box_usize(v_sz_2010_);
v___x_2109_ = ((lean_object*)(l_Lean_Elab_wfRecursion___boxed__const__1));
lean_inc(v_fst_2020_);
lean_inc(v_declName_2105_);
lean_inc(v_fst_2024_);
lean_inc(v_snd_2025_);
lean_inc(v_a_1995_);
v___f_2110_ = lean_alloc_closure((void*)(l_Lean_Elab_wfRecursion___lam__4___boxed), 20, 11);
lean_closure_set(v___f_2110_, 0, v_a_1995_);
lean_closure_set(v___f_2110_, 1, v___x_2108_);
lean_closure_set(v___f_2110_, 2, v___x_2109_);
lean_closure_set(v___f_2110_, 3, v___y_2096_);
lean_closure_set(v___f_2110_, 4, v_snd_2025_);
lean_closure_set(v___f_2110_, 5, v_fst_2024_);
lean_closure_set(v___f_2110_, 6, v___x_1996_);
lean_closure_set(v___f_2110_, 7, v___x_2094_);
lean_closure_set(v___f_2110_, 8, v_declName_2105_);
lean_closure_set(v___f_2110_, 9, v_fst_2020_);
lean_closure_set(v___f_2110_, 10, v_wf_2098_);
lean_inc(v_numFixed_2107_);
v___x_2111_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2111_, 0, v_numFixed_2107_);
v___x_2112_ = 0;
lean_inc_ref(v_type_2106_);
v___x_2113_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_wfRecursion_spec__15___redArg(v_type_2106_, v___x_2111_, v___f_2110_, v___x_2112_, v___x_2112_, v___y_2099_, v___y_2100_, v___y_2101_, v___y_2102_, v___y_2103_, v___y_2104_);
if (lean_obj_tag(v___x_2113_) == 0)
{
lean_object* v_a_2114_; lean_object* v___x_2115_; lean_object* v_a_2116_; uint8_t v___x_2117_; 
v_a_2114_ = lean_ctor_get(v___x_2113_, 0);
lean_inc(v_a_2114_);
lean_dec_ref_known(v___x_2113_, 1);
v___x_2115_ = l_Lean_Elab_wfRecursion___lam__2(v___x_2094_, v___y_2099_, v___y_2100_, v___y_2101_, v___y_2102_, v___y_2103_, v___y_2104_);
v_a_2116_ = lean_ctor_get(v___x_2115_, 0);
lean_inc(v_a_2116_);
lean_dec_ref(v___x_2115_);
v___x_2117_ = lean_unbox(v_a_2116_);
lean_dec(v_a_2116_);
if (v___x_2117_ == 0)
{
lean_del_object(v___x_2027_);
lean_del_object(v___x_2022_);
v___y_2030_ = v___y_2097_;
v___y_2031_ = v___x_2112_;
v___y_2032_ = v_a_2114_;
v___y_2033_ = v___y_2099_;
v___y_2034_ = v___y_2100_;
v___y_2035_ = v___y_2101_;
v___y_2036_ = v___y_2102_;
v___y_2037_ = v___y_2103_;
v___y_2038_ = v___y_2104_;
goto v___jp_2029_;
}
else
{
lean_object* v_declName_2118_; lean_object* v_value_2119_; lean_object* v___x_2120_; lean_object* v___x_2121_; lean_object* v___x_2123_; 
v_declName_2118_ = lean_ctor_get(v_a_2114_, 3);
v_value_2119_ = lean_ctor_get(v_a_2114_, 7);
v___x_2120_ = lean_obj_once(&l_Lean_Elab_wfRecursion___closed__4, &l_Lean_Elab_wfRecursion___closed__4_once, _init_l_Lean_Elab_wfRecursion___closed__4);
lean_inc(v_declName_2118_);
v___x_2121_ = l_Lean_MessageData_ofName(v_declName_2118_);
if (v_isShared_2028_ == 0)
{
lean_ctor_set_tag(v___x_2027_, 7);
lean_ctor_set(v___x_2027_, 1, v___x_2121_);
lean_ctor_set(v___x_2027_, 0, v___x_2120_);
v___x_2123_ = v___x_2027_;
goto v_reusejp_2122_;
}
else
{
lean_object* v_reuseFailAlloc_2131_; 
v_reuseFailAlloc_2131_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2131_, 0, v___x_2120_);
lean_ctor_set(v_reuseFailAlloc_2131_, 1, v___x_2121_);
v___x_2123_ = v_reuseFailAlloc_2131_;
goto v_reusejp_2122_;
}
v_reusejp_2122_:
{
lean_object* v___x_2124_; lean_object* v___x_2126_; 
v___x_2124_ = lean_obj_once(&l_Lean_Elab_wfRecursion___closed__6, &l_Lean_Elab_wfRecursion___closed__6_once, _init_l_Lean_Elab_wfRecursion___closed__6);
if (v_isShared_2023_ == 0)
{
lean_ctor_set_tag(v___x_2022_, 7);
lean_ctor_set(v___x_2022_, 1, v___x_2124_);
lean_ctor_set(v___x_2022_, 0, v___x_2123_);
v___x_2126_ = v___x_2022_;
goto v_reusejp_2125_;
}
else
{
lean_object* v_reuseFailAlloc_2130_; 
v_reuseFailAlloc_2130_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2130_, 0, v___x_2123_);
lean_ctor_set(v_reuseFailAlloc_2130_, 1, v___x_2124_);
v___x_2126_ = v_reuseFailAlloc_2130_;
goto v_reusejp_2125_;
}
v_reusejp_2125_:
{
lean_object* v___x_2127_; lean_object* v___x_2128_; lean_object* v___x_2129_; 
lean_inc_ref(v_value_2119_);
v___x_2127_ = l_Lean_MessageData_ofExpr(v_value_2119_);
v___x_2128_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2128_, 0, v___x_2126_);
lean_ctor_set(v___x_2128_, 1, v___x_2127_);
v___x_2129_ = l_Lean_addTrace___at___00Lean_Elab_wfRecursion_spec__14___redArg(v___x_2094_, v___x_2128_, v___y_2101_, v___y_2102_, v___y_2103_, v___y_2104_);
if (lean_obj_tag(v___x_2129_) == 0)
{
lean_dec_ref_known(v___x_2129_, 1);
v___y_2030_ = v___y_2097_;
v___y_2031_ = v___x_2112_;
v___y_2032_ = v_a_2114_;
v___y_2033_ = v___y_2099_;
v___y_2034_ = v___y_2100_;
v___y_2035_ = v___y_2101_;
v___y_2036_ = v___y_2102_;
v___y_2037_ = v___y_2103_;
v___y_2038_ = v___y_2104_;
goto v___jp_2029_;
}
else
{
lean_dec(v_a_2114_);
lean_dec_ref(v___y_2097_);
lean_dec(v_snd_2025_);
lean_dec(v_fst_2024_);
lean_dec(v_fst_2020_);
lean_dec(v_a_1995_);
lean_dec_ref(v_docCtx_1972_);
return v___x_2129_;
}
}
}
}
}
else
{
lean_object* v_a_2132_; lean_object* v___x_2134_; uint8_t v_isShared_2135_; uint8_t v_isSharedCheck_2139_; 
lean_dec_ref(v___y_2097_);
lean_del_object(v___x_2027_);
lean_dec(v_snd_2025_);
lean_dec(v_fst_2024_);
lean_del_object(v___x_2022_);
lean_dec(v_fst_2020_);
lean_dec(v_a_1995_);
lean_dec_ref(v_docCtx_1972_);
v_a_2132_ = lean_ctor_get(v___x_2113_, 0);
v_isSharedCheck_2139_ = !lean_is_exclusive(v___x_2113_);
if (v_isSharedCheck_2139_ == 0)
{
v___x_2134_ = v___x_2113_;
v_isShared_2135_ = v_isSharedCheck_2139_;
goto v_resetjp_2133_;
}
else
{
lean_inc(v_a_2132_);
lean_dec(v___x_2113_);
v___x_2134_ = lean_box(0);
v_isShared_2135_ = v_isSharedCheck_2139_;
goto v_resetjp_2133_;
}
v_resetjp_2133_:
{
lean_object* v___x_2137_; 
if (v_isShared_2135_ == 0)
{
v___x_2137_ = v___x_2134_;
goto v_reusejp_2136_;
}
else
{
lean_object* v_reuseFailAlloc_2138_; 
v_reuseFailAlloc_2138_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2138_, 0, v_a_2132_);
v___x_2137_ = v_reuseFailAlloc_2138_;
goto v_reusejp_2136_;
}
v_reusejp_2136_:
{
return v___x_2137_;
}
}
}
}
v___jp_2140_:
{
if (lean_obj_tag(v_termMeasures_x3f_1987_) == 1)
{
lean_object* v_val_2150_; 
lean_dec_ref(v___y_2143_);
v_val_2150_ = lean_ctor_get(v_termMeasures_x3f_1987_, 0);
lean_inc(v_val_2150_);
lean_dec_ref_known(v_termMeasures_x3f_1987_, 1);
v___y_2096_ = v___y_2142_;
v___y_2097_ = v___y_2141_;
v_wf_2098_ = v_val_2150_;
v___y_2099_ = v___y_2144_;
v___y_2100_ = v___y_2145_;
v___y_2101_ = v___y_2146_;
v___y_2102_ = v___y_2147_;
v___y_2103_ = v___y_2148_;
v___y_2104_ = v___y_2149_;
goto v___jp_2095_;
}
else
{
uint8_t v___x_2151_; lean_object* v___x_2152_; 
lean_dec(v_termMeasures_x3f_1987_);
v___x_2151_ = 1;
v___x_2152_ = l_Lean_withoutExporting___at___00Lean_Elab_wfRecursion_spec__18___redArg(v___y_2143_, v___x_2151_, v___y_2144_, v___y_2145_, v___y_2146_, v___y_2147_, v___y_2148_, v___y_2149_);
if (lean_obj_tag(v___x_2152_) == 0)
{
lean_object* v_a_2153_; 
v_a_2153_ = lean_ctor_get(v___x_2152_, 0);
lean_inc(v_a_2153_);
lean_dec_ref_known(v___x_2152_, 1);
v___y_2096_ = v___y_2142_;
v___y_2097_ = v___y_2141_;
v_wf_2098_ = v_a_2153_;
v___y_2099_ = v___y_2144_;
v___y_2100_ = v___y_2145_;
v___y_2101_ = v___y_2146_;
v___y_2102_ = v___y_2147_;
v___y_2103_ = v___y_2148_;
v___y_2104_ = v___y_2149_;
goto v___jp_2095_;
}
else
{
lean_object* v_a_2154_; lean_object* v___x_2156_; uint8_t v_isShared_2157_; uint8_t v_isSharedCheck_2161_; 
lean_dec_ref(v___y_2142_);
lean_dec_ref(v___y_2141_);
lean_del_object(v___x_2027_);
lean_dec(v_snd_2025_);
lean_dec(v_fst_2024_);
lean_del_object(v___x_2022_);
lean_dec(v_fst_2020_);
lean_dec(v_a_1995_);
lean_dec_ref(v_docCtx_1972_);
v_a_2154_ = lean_ctor_get(v___x_2152_, 0);
v_isSharedCheck_2161_ = !lean_is_exclusive(v___x_2152_);
if (v_isSharedCheck_2161_ == 0)
{
v___x_2156_ = v___x_2152_;
v_isShared_2157_ = v_isSharedCheck_2161_;
goto v_resetjp_2155_;
}
else
{
lean_inc(v_a_2154_);
lean_dec(v___x_2152_);
v___x_2156_ = lean_box(0);
v_isShared_2157_ = v_isSharedCheck_2161_;
goto v_resetjp_2155_;
}
v_resetjp_2155_:
{
lean_object* v___x_2159_; 
if (v_isShared_2157_ == 0)
{
v___x_2159_ = v___x_2156_;
goto v_reusejp_2158_;
}
else
{
lean_object* v_reuseFailAlloc_2160_; 
v_reuseFailAlloc_2160_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2160_, 0, v_a_2154_);
v___x_2159_ = v_reuseFailAlloc_2160_;
goto v_reusejp_2158_;
}
v_reusejp_2158_:
{
return v___x_2159_;
}
}
}
}
}
v___jp_2162_:
{
lean_object* v___x_2169_; lean_object* v_env_2170_; lean_object* v___x_2171_; lean_object* v___x_2172_; 
v___x_2169_ = lean_st_ref_get(v___y_2168_);
v_env_2170_ = lean_ctor_get(v___x_2169_, 0);
lean_inc_ref(v_env_2170_);
lean_dec(v___x_2169_);
v___x_2171_ = l_Lean_Environment_unlockAsync(v_env_2170_);
v___x_2172_ = l_Lean_withEnv___at___00Lean_Elab_wfRecursion_spec__8___redArg(v___x_2171_, v___f_2093_, v___y_2163_, v___y_2164_, v___y_2165_, v___y_2166_, v___y_2167_, v___y_2168_);
if (lean_obj_tag(v___x_2172_) == 0)
{
lean_object* v_a_2173_; lean_object* v_fst_2174_; lean_object* v_snd_2175_; lean_object* v___x_2177_; uint8_t v_isShared_2178_; uint8_t v_isSharedCheck_2191_; 
v_a_2173_ = lean_ctor_get(v___x_2172_, 0);
lean_inc(v_a_2173_);
lean_dec_ref_known(v___x_2172_, 1);
v_fst_2174_ = lean_ctor_get(v_a_2173_, 0);
v_snd_2175_ = lean_ctor_get(v_a_2173_, 1);
v_isSharedCheck_2191_ = !lean_is_exclusive(v_a_2173_);
if (v_isSharedCheck_2191_ == 0)
{
v___x_2177_ = v_a_2173_;
v_isShared_2178_ = v_isSharedCheck_2191_;
goto v_resetjp_2176_;
}
else
{
lean_inc(v_snd_2175_);
lean_inc(v_fst_2174_);
lean_dec(v_a_2173_);
v___x_2177_ = lean_box(0);
v_isShared_2178_ = v_isSharedCheck_2191_;
goto v_resetjp_2176_;
}
v_resetjp_2176_:
{
lean_object* v___f_2179_; lean_object* v___x_2180_; lean_object* v_a_2181_; uint8_t v___x_2182_; 
lean_inc(v_fst_2024_);
lean_inc(v_fst_2020_);
lean_inc(v_fst_2174_);
lean_inc(v_a_1995_);
v___f_2179_ = lean_alloc_closure((void*)(l_Lean_Elab_wfRecursion___lam__5___boxed), 11, 4);
lean_closure_set(v___f_2179_, 0, v_a_1995_);
lean_closure_set(v___f_2179_, 1, v_fst_2174_);
lean_closure_set(v___f_2179_, 2, v_fst_2020_);
lean_closure_set(v___f_2179_, 3, v_fst_2024_);
v___x_2180_ = l_Lean_Elab_wfRecursion___lam__2(v___x_2094_, v___y_2163_, v___y_2164_, v___y_2165_, v___y_2166_, v___y_2167_, v___y_2168_);
v_a_2181_ = lean_ctor_get(v___x_2180_, 0);
lean_inc(v_a_2181_);
lean_dec_ref(v___x_2180_);
v___x_2182_ = lean_unbox(v_a_2181_);
lean_dec(v_a_2181_);
if (v___x_2182_ == 0)
{
lean_del_object(v___x_2177_);
v___y_2141_ = v_snd_2175_;
v___y_2142_ = v_fst_2174_;
v___y_2143_ = v___f_2179_;
v___y_2144_ = v___y_2163_;
v___y_2145_ = v___y_2164_;
v___y_2146_ = v___y_2165_;
v___y_2147_ = v___y_2166_;
v___y_2148_ = v___y_2167_;
v___y_2149_ = v___y_2168_;
goto v___jp_2140_;
}
else
{
lean_object* v_value_2183_; lean_object* v___x_2184_; lean_object* v___x_2185_; lean_object* v___x_2186_; lean_object* v___x_2188_; 
v_value_2183_ = lean_ctor_get(v_snd_2025_, 7);
v___x_2184_ = lean_obj_once(&l_Lean_Elab_wfRecursion___closed__8, &l_Lean_Elab_wfRecursion___closed__8_once, _init_l_Lean_Elab_wfRecursion___closed__8);
lean_inc_ref(v_value_2183_);
v___x_2185_ = l_Lean_MessageData_ofExpr(v_value_2183_);
v___x_2186_ = l_Lean_indentD(v___x_2185_);
if (v_isShared_2178_ == 0)
{
lean_ctor_set_tag(v___x_2177_, 7);
lean_ctor_set(v___x_2177_, 1, v___x_2186_);
lean_ctor_set(v___x_2177_, 0, v___x_2184_);
v___x_2188_ = v___x_2177_;
goto v_reusejp_2187_;
}
else
{
lean_object* v_reuseFailAlloc_2190_; 
v_reuseFailAlloc_2190_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2190_, 0, v___x_2184_);
lean_ctor_set(v_reuseFailAlloc_2190_, 1, v___x_2186_);
v___x_2188_ = v_reuseFailAlloc_2190_;
goto v_reusejp_2187_;
}
v_reusejp_2187_:
{
lean_object* v___x_2189_; 
v___x_2189_ = l_Lean_addTrace___at___00Lean_Elab_wfRecursion_spec__14___redArg(v___x_2094_, v___x_2188_, v___y_2165_, v___y_2166_, v___y_2167_, v___y_2168_);
if (lean_obj_tag(v___x_2189_) == 0)
{
lean_dec_ref_known(v___x_2189_, 1);
v___y_2141_ = v_snd_2175_;
v___y_2142_ = v_fst_2174_;
v___y_2143_ = v___f_2179_;
v___y_2144_ = v___y_2163_;
v___y_2145_ = v___y_2164_;
v___y_2146_ = v___y_2165_;
v___y_2147_ = v___y_2166_;
v___y_2148_ = v___y_2167_;
v___y_2149_ = v___y_2168_;
goto v___jp_2140_;
}
else
{
lean_dec_ref(v___f_2179_);
lean_dec(v_snd_2175_);
lean_dec(v_fst_2174_);
lean_del_object(v___x_2027_);
lean_dec(v_snd_2025_);
lean_dec(v_fst_2024_);
lean_del_object(v___x_2022_);
lean_dec(v_fst_2020_);
lean_dec(v_a_1995_);
lean_dec(v_termMeasures_x3f_1987_);
lean_dec_ref(v_docCtx_1972_);
return v___x_2189_;
}
}
}
}
}
else
{
lean_object* v_a_2192_; lean_object* v___x_2194_; uint8_t v_isShared_2195_; uint8_t v_isSharedCheck_2199_; 
lean_del_object(v___x_2027_);
lean_dec(v_snd_2025_);
lean_dec(v_fst_2024_);
lean_del_object(v___x_2022_);
lean_dec(v_fst_2020_);
lean_dec(v_a_1995_);
lean_dec(v_termMeasures_x3f_1987_);
lean_dec_ref(v_docCtx_1972_);
v_a_2192_ = lean_ctor_get(v___x_2172_, 0);
v_isSharedCheck_2199_ = !lean_is_exclusive(v___x_2172_);
if (v_isSharedCheck_2199_ == 0)
{
v___x_2194_ = v___x_2172_;
v_isShared_2195_ = v_isSharedCheck_2199_;
goto v_resetjp_2193_;
}
else
{
lean_inc(v_a_2192_);
lean_dec(v___x_2172_);
v___x_2194_ = lean_box(0);
v_isShared_2195_ = v_isSharedCheck_2199_;
goto v_resetjp_2193_;
}
v_resetjp_2193_:
{
lean_object* v___x_2197_; 
if (v_isShared_2195_ == 0)
{
v___x_2197_ = v___x_2194_;
goto v_reusejp_2196_;
}
else
{
lean_object* v_reuseFailAlloc_2198_; 
v_reuseFailAlloc_2198_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2198_, 0, v_a_2192_);
v___x_2197_ = v_reuseFailAlloc_2198_;
goto v_reusejp_2196_;
}
v_reusejp_2196_:
{
return v___x_2197_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_2211_; lean_object* v___x_2213_; uint8_t v_isShared_2214_; uint8_t v_isSharedCheck_2218_; 
lean_dec(v_a_1995_);
lean_dec(v_termMeasures_x3f_1987_);
lean_dec_ref(v_docCtx_1972_);
v_a_2211_ = lean_ctor_get(v___x_2017_, 0);
v_isSharedCheck_2218_ = !lean_is_exclusive(v___x_2017_);
if (v_isSharedCheck_2218_ == 0)
{
v___x_2213_ = v___x_2017_;
v_isShared_2214_ = v_isSharedCheck_2218_;
goto v_resetjp_2212_;
}
else
{
lean_inc(v_a_2211_);
lean_dec(v___x_2017_);
v___x_2213_ = lean_box(0);
v_isShared_2214_ = v_isSharedCheck_2218_;
goto v_resetjp_2212_;
}
v_resetjp_2212_:
{
lean_object* v___x_2216_; 
if (v_isShared_2214_ == 0)
{
v___x_2216_ = v___x_2213_;
goto v_reusejp_2215_;
}
else
{
lean_object* v_reuseFailAlloc_2217_; 
v_reuseFailAlloc_2217_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2217_, 0, v_a_2211_);
v___x_2216_ = v_reuseFailAlloc_2217_;
goto v_reusejp_2215_;
}
v_reusejp_2215_:
{
return v___x_2216_;
}
}
}
v___jp_1997_:
{
size_t v_sz_2006_; lean_object* v___x_2007_; 
v_sz_2006_ = lean_array_size(v___y_1999_);
lean_inc(v___y_1998_);
v___x_2007_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__17___redArg(v___y_1998_, v___y_1999_, v_sz_2006_, v___x_1984_, v___x_1996_, v___y_2002_, v___y_2003_, v___y_2004_, v___y_2005_);
if (lean_obj_tag(v___x_2007_) == 0)
{
lean_object* v___x_2008_; 
lean_dec_ref_known(v___x_2007_, 1);
v___x_2008_ = l_Lean_enableRealizationsForConst(v___y_1998_, v___y_2004_, v___y_2005_);
if (lean_obj_tag(v___x_2008_) == 0)
{
lean_object* v___x_2009_; 
lean_dec_ref_known(v___x_2008_, 1);
v___x_2009_ = l_Lean_Elab_Mutual_addPreDefAttributes(v___y_1999_, v___y_2000_, v___y_2001_, v___y_2002_, v___y_2003_, v___y_2004_, v___y_2005_);
return v___x_2009_;
}
else
{
lean_dec_ref(v___y_1999_);
return v___x_2008_;
}
}
else
{
lean_dec_ref(v___y_1999_);
lean_dec(v___y_1998_);
return v___x_2007_;
}
}
}
else
{
lean_object* v_a_2219_; lean_object* v___x_2221_; uint8_t v_isShared_2222_; uint8_t v_isSharedCheck_2226_; 
lean_dec(v_termMeasures_x3f_1987_);
lean_dec_ref(v_docCtx_1972_);
v_a_2219_ = lean_ctor_get(v___x_1994_, 0);
v_isSharedCheck_2226_ = !lean_is_exclusive(v___x_1994_);
if (v_isSharedCheck_2226_ == 0)
{
v___x_2221_ = v___x_1994_;
v_isShared_2222_ = v_isSharedCheck_2226_;
goto v_resetjp_2220_;
}
else
{
lean_inc(v_a_2219_);
lean_dec(v___x_1994_);
v___x_2221_ = lean_box(0);
v_isShared_2222_ = v_isSharedCheck_2226_;
goto v_resetjp_2220_;
}
v_resetjp_2220_:
{
lean_object* v___x_2224_; 
if (v_isShared_2222_ == 0)
{
v___x_2224_ = v___x_2221_;
goto v_reusejp_2223_;
}
else
{
lean_object* v_reuseFailAlloc_2225_; 
v_reuseFailAlloc_2225_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2225_, 0, v_a_2219_);
v___x_2224_ = v_reuseFailAlloc_2225_;
goto v_reusejp_2223_;
}
v_reusejp_2223_:
{
return v___x_2224_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_wfRecursion___boxed(lean_object* v_docCtx_2227_, lean_object* v_preDefs_2228_, lean_object* v_termMeasure_x3fs_2229_, lean_object* v_a_2230_, lean_object* v_a_2231_, lean_object* v_a_2232_, lean_object* v_a_2233_, lean_object* v_a_2234_, lean_object* v_a_2235_, lean_object* v_a_2236_){
_start:
{
lean_object* v_res_2237_; 
v_res_2237_ = l_Lean_Elab_wfRecursion(v_docCtx_2227_, v_preDefs_2228_, v_termMeasure_x3fs_2229_, v_a_2230_, v_a_2231_, v_a_2232_, v_a_2233_, v_a_2234_, v_a_2235_);
lean_dec(v_a_2235_);
lean_dec_ref(v_a_2234_);
lean_dec(v_a_2233_);
lean_dec_ref(v_a_2232_);
lean_dec(v_a_2231_);
lean_dec_ref(v_a_2230_);
lean_dec_ref(v_termMeasure_x3fs_2229_);
lean_dec_ref(v_preDefs_2228_);
return v_res_2237_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0(lean_object* v_00_u03b1_2238_, lean_object* v_msg_2239_, lean_object* v___y_2240_, lean_object* v___y_2241_, lean_object* v___y_2242_, lean_object* v___y_2243_, lean_object* v___y_2244_, lean_object* v___y_2245_){
_start:
{
lean_object* v___x_2247_; 
v___x_2247_ = l_Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0___redArg(v_msg_2239_, v___y_2240_, v___y_2241_, v___y_2242_, v___y_2243_, v___y_2244_, v___y_2245_);
return v___x_2247_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0___boxed(lean_object* v_00_u03b1_2248_, lean_object* v_msg_2249_, lean_object* v___y_2250_, lean_object* v___y_2251_, lean_object* v___y_2252_, lean_object* v___y_2253_, lean_object* v___y_2254_, lean_object* v___y_2255_, lean_object* v___y_2256_){
_start:
{
lean_object* v_res_2257_; 
v_res_2257_ = l_Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0(v_00_u03b1_2248_, v_msg_2249_, v___y_2250_, v___y_2251_, v___y_2252_, v___y_2253_, v___y_2254_, v___y_2255_);
lean_dec(v___y_2255_);
lean_dec_ref(v___y_2254_);
lean_dec(v___y_2253_);
lean_dec_ref(v___y_2252_);
lean_dec(v___y_2251_);
lean_dec_ref(v___y_2250_);
return v_res_2257_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__3(lean_object* v_as_2258_, size_t v_sz_2259_, size_t v_i_2260_, lean_object* v_b_2261_, lean_object* v___y_2262_, lean_object* v___y_2263_, lean_object* v___y_2264_, lean_object* v___y_2265_, lean_object* v___y_2266_, lean_object* v___y_2267_){
_start:
{
lean_object* v___x_2269_; 
v___x_2269_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__3___redArg(v_as_2258_, v_sz_2259_, v_i_2260_, v_b_2261_, v___y_2266_, v___y_2267_);
return v___x_2269_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__3___boxed(lean_object* v_as_2270_, lean_object* v_sz_2271_, lean_object* v_i_2272_, lean_object* v_b_2273_, lean_object* v___y_2274_, lean_object* v___y_2275_, lean_object* v___y_2276_, lean_object* v___y_2277_, lean_object* v___y_2278_, lean_object* v___y_2279_, lean_object* v___y_2280_){
_start:
{
size_t v_sz_boxed_2281_; size_t v_i_boxed_2282_; lean_object* v_res_2283_; 
v_sz_boxed_2281_ = lean_unbox_usize(v_sz_2271_);
lean_dec(v_sz_2271_);
v_i_boxed_2282_ = lean_unbox_usize(v_i_2272_);
lean_dec(v_i_2272_);
v_res_2283_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__3(v_as_2270_, v_sz_boxed_2281_, v_i_boxed_2282_, v_b_2273_, v___y_2274_, v___y_2275_, v___y_2276_, v___y_2277_, v___y_2278_, v___y_2279_);
lean_dec(v___y_2279_);
lean_dec_ref(v___y_2278_);
lean_dec(v___y_2277_);
lean_dec_ref(v___y_2276_);
lean_dec(v___y_2275_);
lean_dec_ref(v___y_2274_);
lean_dec_ref(v_as_2270_);
return v_res_2283_;
}
}
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00Lean_Elab_wfRecursion_spec__8(lean_object* v_00_u03b1_2284_, lean_object* v_env_2285_, lean_object* v_x_2286_, lean_object* v___y_2287_, lean_object* v___y_2288_, lean_object* v___y_2289_, lean_object* v___y_2290_, lean_object* v___y_2291_, lean_object* v___y_2292_){
_start:
{
lean_object* v___x_2294_; 
v___x_2294_ = l_Lean_withEnv___at___00Lean_Elab_wfRecursion_spec__8___redArg(v_env_2285_, v_x_2286_, v___y_2287_, v___y_2288_, v___y_2289_, v___y_2290_, v___y_2291_, v___y_2292_);
return v___x_2294_;
}
}
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00Lean_Elab_wfRecursion_spec__8___boxed(lean_object* v_00_u03b1_2295_, lean_object* v_env_2296_, lean_object* v_x_2297_, lean_object* v___y_2298_, lean_object* v___y_2299_, lean_object* v___y_2300_, lean_object* v___y_2301_, lean_object* v___y_2302_, lean_object* v___y_2303_, lean_object* v___y_2304_){
_start:
{
lean_object* v_res_2305_; 
v_res_2305_ = l_Lean_withEnv___at___00Lean_Elab_wfRecursion_spec__8(v_00_u03b1_2295_, v_env_2296_, v_x_2297_, v___y_2298_, v___y_2299_, v___y_2300_, v___y_2301_, v___y_2302_, v___y_2303_);
lean_dec(v___y_2303_);
lean_dec_ref(v___y_2302_);
lean_dec(v___y_2301_);
lean_dec_ref(v___y_2300_);
lean_dec(v___y_2299_);
lean_dec_ref(v___y_2298_);
return v_res_2305_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_wfRecursion_spec__14(lean_object* v_cls_2306_, lean_object* v_msg_2307_, lean_object* v___y_2308_, lean_object* v___y_2309_, lean_object* v___y_2310_, lean_object* v___y_2311_, lean_object* v___y_2312_, lean_object* v___y_2313_){
_start:
{
lean_object* v___x_2315_; 
v___x_2315_ = l_Lean_addTrace___at___00Lean_Elab_wfRecursion_spec__14___redArg(v_cls_2306_, v_msg_2307_, v___y_2310_, v___y_2311_, v___y_2312_, v___y_2313_);
return v___x_2315_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_wfRecursion_spec__14___boxed(lean_object* v_cls_2316_, lean_object* v_msg_2317_, lean_object* v___y_2318_, lean_object* v___y_2319_, lean_object* v___y_2320_, lean_object* v___y_2321_, lean_object* v___y_2322_, lean_object* v___y_2323_, lean_object* v___y_2324_){
_start:
{
lean_object* v_res_2325_; 
v_res_2325_ = l_Lean_addTrace___at___00Lean_Elab_wfRecursion_spec__14(v_cls_2316_, v_msg_2317_, v___y_2318_, v___y_2319_, v___y_2320_, v___y_2321_, v___y_2322_, v___y_2323_);
lean_dec(v___y_2323_);
lean_dec_ref(v___y_2322_);
lean_dec(v___y_2321_);
lean_dec_ref(v___y_2320_);
lean_dec(v___y_2319_);
lean_dec_ref(v___y_2318_);
return v_res_2325_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__17(lean_object* v___x_2326_, lean_object* v_as_2327_, size_t v_sz_2328_, size_t v_i_2329_, lean_object* v_b_2330_, lean_object* v___y_2331_, lean_object* v___y_2332_, lean_object* v___y_2333_, lean_object* v___y_2334_, lean_object* v___y_2335_, lean_object* v___y_2336_){
_start:
{
lean_object* v___x_2338_; 
v___x_2338_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__17___redArg(v___x_2326_, v_as_2327_, v_sz_2328_, v_i_2329_, v_b_2330_, v___y_2333_, v___y_2334_, v___y_2335_, v___y_2336_);
return v___x_2338_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__17___boxed(lean_object* v___x_2339_, lean_object* v_as_2340_, lean_object* v_sz_2341_, lean_object* v_i_2342_, lean_object* v_b_2343_, lean_object* v___y_2344_, lean_object* v___y_2345_, lean_object* v___y_2346_, lean_object* v___y_2347_, lean_object* v___y_2348_, lean_object* v___y_2349_, lean_object* v___y_2350_){
_start:
{
size_t v_sz_boxed_2351_; size_t v_i_boxed_2352_; lean_object* v_res_2353_; 
v_sz_boxed_2351_ = lean_unbox_usize(v_sz_2341_);
lean_dec(v_sz_2341_);
v_i_boxed_2352_ = lean_unbox_usize(v_i_2342_);
lean_dec(v_i_2342_);
v_res_2353_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_wfRecursion_spec__17(v___x_2339_, v_as_2340_, v_sz_boxed_2351_, v_i_boxed_2352_, v_b_2343_, v___y_2344_, v___y_2345_, v___y_2346_, v___y_2347_, v___y_2348_, v___y_2349_);
lean_dec(v___y_2349_);
lean_dec_ref(v___y_2348_);
lean_dec(v___y_2347_);
lean_dec_ref(v___y_2346_);
lean_dec(v___y_2345_);
lean_dec_ref(v___y_2344_);
lean_dec_ref(v_as_2340_);
return v_res_2353_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_wfRecursion_spec__18_spec__21(lean_object* v_00_u03b1_2354_, lean_object* v_x_2355_, uint8_t v_isExporting_2356_, lean_object* v___y_2357_, lean_object* v___y_2358_, lean_object* v___y_2359_, lean_object* v___y_2360_, lean_object* v___y_2361_, lean_object* v___y_2362_){
_start:
{
lean_object* v___x_2364_; 
v___x_2364_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_wfRecursion_spec__18_spec__21___redArg(v_x_2355_, v_isExporting_2356_, v___y_2357_, v___y_2358_, v___y_2359_, v___y_2360_, v___y_2361_, v___y_2362_);
return v___x_2364_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_wfRecursion_spec__18_spec__21___boxed(lean_object* v_00_u03b1_2365_, lean_object* v_x_2366_, lean_object* v_isExporting_2367_, lean_object* v___y_2368_, lean_object* v___y_2369_, lean_object* v___y_2370_, lean_object* v___y_2371_, lean_object* v___y_2372_, lean_object* v___y_2373_, lean_object* v___y_2374_){
_start:
{
uint8_t v_isExporting_boxed_2375_; lean_object* v_res_2376_; 
v_isExporting_boxed_2375_ = lean_unbox(v_isExporting_2367_);
v_res_2376_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_wfRecursion_spec__18_spec__21(v_00_u03b1_2365_, v_x_2366_, v_isExporting_boxed_2375_, v___y_2368_, v___y_2369_, v___y_2370_, v___y_2371_, v___y_2372_, v___y_2373_);
lean_dec(v___y_2373_);
lean_dec_ref(v___y_2372_);
lean_dec(v___y_2371_);
lean_dec_ref(v___y_2370_);
lean_dec(v___y_2369_);
lean_dec_ref(v___y_2368_);
return v_res_2376_;
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Elab_wfRecursion_spec__18(lean_object* v_00_u03b1_2377_, lean_object* v_x_2378_, uint8_t v_when_2379_, lean_object* v___y_2380_, lean_object* v___y_2381_, lean_object* v___y_2382_, lean_object* v___y_2383_, lean_object* v___y_2384_, lean_object* v___y_2385_){
_start:
{
lean_object* v___x_2387_; 
v___x_2387_ = l_Lean_withoutExporting___at___00Lean_Elab_wfRecursion_spec__18___redArg(v_x_2378_, v_when_2379_, v___y_2380_, v___y_2381_, v___y_2382_, v___y_2383_, v___y_2384_, v___y_2385_);
return v___x_2387_;
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Elab_wfRecursion_spec__18___boxed(lean_object* v_00_u03b1_2388_, lean_object* v_x_2389_, lean_object* v_when_2390_, lean_object* v___y_2391_, lean_object* v___y_2392_, lean_object* v___y_2393_, lean_object* v___y_2394_, lean_object* v___y_2395_, lean_object* v___y_2396_, lean_object* v___y_2397_){
_start:
{
uint8_t v_when_boxed_2398_; lean_object* v_res_2399_; 
v_when_boxed_2398_ = lean_unbox(v_when_2390_);
v_res_2399_ = l_Lean_withoutExporting___at___00Lean_Elab_wfRecursion_spec__18(v_00_u03b1_2388_, v_x_2389_, v_when_boxed_2398_, v___y_2391_, v___y_2392_, v___y_2393_, v___y_2394_, v___y_2395_, v___y_2396_);
lean_dec(v___y_2396_);
lean_dec_ref(v___y_2395_);
lean_dec(v___y_2394_);
lean_dec_ref(v___y_2393_);
lean_dec(v___y_2392_);
lean_dec_ref(v___y_2391_);
return v_res_2399_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1(lean_object* v_msgData_2400_, lean_object* v_macroStack_2401_, lean_object* v___y_2402_, lean_object* v___y_2403_, lean_object* v___y_2404_, lean_object* v___y_2405_, lean_object* v___y_2406_, lean_object* v___y_2407_){
_start:
{
lean_object* v___x_2409_; 
v___x_2409_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1___redArg(v_msgData_2400_, v_macroStack_2401_, v___y_2406_);
return v___x_2409_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1___boxed(lean_object* v_msgData_2410_, lean_object* v_macroStack_2411_, lean_object* v___y_2412_, lean_object* v___y_2413_, lean_object* v___y_2414_, lean_object* v___y_2415_, lean_object* v___y_2416_, lean_object* v___y_2417_, lean_object* v___y_2418_){
_start:
{
lean_object* v_res_2419_; 
v_res_2419_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_wfRecursion_spec__0_spec__1(v_msgData_2410_, v_macroStack_2411_, v___y_2412_, v___y_2413_, v___y_2414_, v___y_2415_, v___y_2416_, v___y_2417_);
lean_dec(v___y_2417_);
lean_dec_ref(v___y_2416_);
lean_dec(v___y_2415_);
lean_dec_ref(v___y_2414_);
lean_dec(v___y_2413_);
lean_dec_ref(v___y_2412_);
return v_res_2419_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13(lean_object* v_ref_2420_, lean_object* v_msgData_2421_, uint8_t v_severity_2422_, uint8_t v_isSilent_2423_, lean_object* v___y_2424_, lean_object* v___y_2425_, lean_object* v___y_2426_, lean_object* v___y_2427_, lean_object* v___y_2428_, lean_object* v___y_2429_){
_start:
{
lean_object* v___x_2431_; 
v___x_2431_ = l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg(v_ref_2420_, v_msgData_2421_, v_severity_2422_, v_isSilent_2423_, v___y_2426_, v___y_2427_, v___y_2428_, v___y_2429_);
return v___x_2431_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___boxed(lean_object* v_ref_2432_, lean_object* v_msgData_2433_, lean_object* v_severity_2434_, lean_object* v_isSilent_2435_, lean_object* v___y_2436_, lean_object* v___y_2437_, lean_object* v___y_2438_, lean_object* v___y_2439_, lean_object* v___y_2440_, lean_object* v___y_2441_, lean_object* v___y_2442_){
_start:
{
uint8_t v_severity_boxed_2443_; uint8_t v_isSilent_boxed_2444_; lean_object* v_res_2445_; 
v_severity_boxed_2443_ = lean_unbox(v_severity_2434_);
v_isSilent_boxed_2444_ = lean_unbox(v_isSilent_2435_);
v_res_2445_ = l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13(v_ref_2432_, v_msgData_2433_, v_severity_boxed_2443_, v_isSilent_boxed_2444_, v___y_2436_, v___y_2437_, v___y_2438_, v___y_2439_, v___y_2440_, v___y_2441_);
lean_dec(v___y_2441_);
lean_dec_ref(v___y_2440_);
lean_dec(v___y_2439_);
lean_dec_ref(v___y_2438_);
lean_dec(v___y_2437_);
lean_dec_ref(v___y_2436_);
lean_dec(v_ref_2432_);
return v_res_2445_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__0_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2446_; lean_object* v___x_2447_; 
v___x_2446_ = lean_box(0);
v___x_2447_ = l_unsafeCast___redArg(v___x_2446_);
return v___x_2447_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__2_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2449_; lean_object* v___x_2450_; lean_object* v___x_2451_; 
v___x_2449_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__1_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2_));
v___x_2450_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__0_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2_, &l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__0_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__0_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2_);
v___x_2451_ = l_Lean_Name_str___override(v___x_2450_, v___x_2449_);
return v___x_2451_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__4_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2453_; lean_object* v___x_2454_; lean_object* v___x_2455_; 
v___x_2453_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__3_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2_));
v___x_2454_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__2_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2_, &l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__2_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__2_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2_);
v___x_2455_ = l_Lean_Name_str___override(v___x_2454_, v___x_2453_);
return v___x_2455_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__5_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2456_; lean_object* v___x_2457_; lean_object* v___x_2458_; 
v___x_2456_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg___lam__0___closed__0));
v___x_2457_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__4_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2_, &l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__4_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__4_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2_);
v___x_2458_ = l_Lean_Name_str___override(v___x_2457_, v___x_2456_);
return v___x_2458_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__7_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2460_; lean_object* v___x_2461_; lean_object* v___x_2462_; 
v___x_2460_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__6_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2_));
v___x_2461_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__5_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2_, &l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__5_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__5_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2_);
v___x_2462_ = l_Lean_Name_str___override(v___x_2461_, v___x_2460_);
return v___x_2462_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__9_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2464_; lean_object* v___x_2465_; lean_object* v___x_2466_; 
v___x_2464_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__8_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2_));
v___x_2465_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__7_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2_, &l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__7_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__7_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2_);
v___x_2466_ = l_Lean_Name_str___override(v___x_2465_, v___x_2464_);
return v___x_2466_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__11_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2468_; lean_object* v___x_2469_; lean_object* v___x_2470_; 
v___x_2468_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__10_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2_));
v___x_2469_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__9_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2_, &l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__9_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__9_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2_);
v___x_2470_ = l_Lean_Name_str___override(v___x_2469_, v___x_2468_);
return v___x_2470_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__12_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2471_; lean_object* v___x_2472_; lean_object* v___x_2473_; 
v___x_2471_ = lean_unsigned_to_nat(0u);
v___x_2472_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__11_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2_, &l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__11_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__11_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2_);
v___x_2473_ = l_Lean_Name_num___override(v___x_2472_, v___x_2471_);
return v___x_2473_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__13_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2474_; lean_object* v___x_2475_; lean_object* v___x_2476_; 
v___x_2474_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__3_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2_));
v___x_2475_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__12_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2_, &l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__12_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__12_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2_);
v___x_2476_ = l_Lean_Name_str___override(v___x_2475_, v___x_2474_);
return v___x_2476_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__14_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2477_; lean_object* v___x_2478_; lean_object* v___x_2479_; 
v___x_2477_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg___lam__0___closed__0));
v___x_2478_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__13_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2_, &l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__13_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__13_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2_);
v___x_2479_ = l_Lean_Name_str___override(v___x_2478_, v___x_2477_);
return v___x_2479_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__16_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2481_; lean_object* v___x_2482_; lean_object* v___x_2483_; 
v___x_2481_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__15_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2_));
v___x_2482_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__14_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2_, &l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__14_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__14_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2_);
v___x_2483_ = l_Lean_Name_str___override(v___x_2482_, v___x_2481_);
return v___x_2483_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__18_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2485_; lean_object* v___x_2486_; lean_object* v___x_2487_; 
v___x_2485_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__17_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2_));
v___x_2486_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__16_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2_, &l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__16_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__16_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2_);
v___x_2487_ = l_Lean_Name_str___override(v___x_2486_, v___x_2485_);
return v___x_2487_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__19_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2488_; lean_object* v___x_2489_; lean_object* v___x_2490_; 
v___x_2488_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__3_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2_));
v___x_2489_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__18_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2_, &l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__18_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__18_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2_);
v___x_2490_ = l_Lean_Name_str___override(v___x_2489_, v___x_2488_);
return v___x_2490_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__20_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2491_; lean_object* v___x_2492_; lean_object* v___x_2493_; 
v___x_2491_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_wfRecursion_spec__11_spec__13___redArg___lam__0___closed__0));
v___x_2492_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__19_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2_, &l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__19_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__19_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2_);
v___x_2493_ = l_Lean_Name_str___override(v___x_2492_, v___x_2491_);
return v___x_2493_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__21_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2494_; lean_object* v___x_2495_; lean_object* v___x_2496_; 
v___x_2494_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__6_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2_));
v___x_2495_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__20_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2_, &l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__20_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__20_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2_);
v___x_2496_ = l_Lean_Name_str___override(v___x_2495_, v___x_2494_);
return v___x_2496_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__22_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2497_; lean_object* v___x_2498_; lean_object* v___x_2499_; 
v___x_2497_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__8_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2_));
v___x_2498_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__21_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2_, &l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__21_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__21_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2_);
v___x_2499_ = l_Lean_Name_str___override(v___x_2498_, v___x_2497_);
return v___x_2499_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__23_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2500_; lean_object* v___x_2501_; lean_object* v___x_2502_; 
v___x_2500_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__10_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2_));
v___x_2501_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__22_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2_, &l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__22_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__22_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2_);
v___x_2502_ = l_Lean_Name_str___override(v___x_2501_, v___x_2500_);
return v___x_2502_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__24_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2503_; lean_object* v___x_2504_; lean_object* v___x_2505_; 
v___x_2503_ = lean_unsigned_to_nat(1197449596u);
v___x_2504_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__23_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2_, &l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__23_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__23_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2_);
v___x_2505_ = l_Lean_Name_num___override(v___x_2504_, v___x_2503_);
return v___x_2505_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__26_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2507_; lean_object* v___x_2508_; lean_object* v___x_2509_; 
v___x_2507_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__25_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2_));
v___x_2508_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__24_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2_, &l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__24_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__24_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2_);
v___x_2509_ = l_Lean_Name_str___override(v___x_2508_, v___x_2507_);
return v___x_2509_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__28_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2511_; lean_object* v___x_2512_; lean_object* v___x_2513_; 
v___x_2511_ = ((lean_object*)(l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__27_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2_));
v___x_2512_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__26_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2_, &l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__26_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__26_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2_);
v___x_2513_ = l_Lean_Name_str___override(v___x_2512_, v___x_2511_);
return v___x_2513_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__29_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_2514_; lean_object* v___x_2515_; lean_object* v___x_2516_; 
v___x_2514_ = lean_unsigned_to_nat(2u);
v___x_2515_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__28_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2_, &l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__28_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__28_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2_);
v___x_2516_ = l_Lean_Name_num___override(v___x_2515_, v___x_2514_);
return v___x_2516_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_2518_; uint8_t v___x_2519_; lean_object* v___x_2520_; lean_object* v___x_2521_; 
v___x_2518_ = ((lean_object*)(l_Lean_Elab_wfRecursion___closed__2));
v___x_2519_ = 0;
v___x_2520_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__29_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2_, &l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__29_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn___closed__29_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2_);
v___x_2521_ = l_Lean_registerTraceClass(v___x_2518_, v___x_2519_, v___x_2520_);
return v___x_2521_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2____boxed(lean_object* v_a_2522_){
_start:
{
lean_object* v_res_2523_; 
v_res_2523_ = l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2_();
return v_res_2523_;
}
}
lean_object* runtime_initialize_Lean_Elab_PreDefinition_WF_PackMutual(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_PreDefinition_WF_FloatRecApp(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_PreDefinition_WF_Rel(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_PreDefinition_WF_Fix(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_PreDefinition_WF_Unfold(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_PreDefinition_WF_Preprocess(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_PreDefinition_WF_GuessLex(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_PreDefinition_WF_Main(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Elab_PreDefinition_WF_PackMutual(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_PreDefinition_WF_FloatRecApp(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_PreDefinition_WF_Rel(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_PreDefinition_WF_Fix(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_PreDefinition_WF_Unfold(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_PreDefinition_WF_Preprocess(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_PreDefinition_WF_GuessLex(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_PreDefinition_WF_Main_0__Lean_Elab_initFn_00___x40_Lean_Elab_PreDefinition_WF_Main_1197449596____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_PreDefinition_WF_Main(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Elab_PreDefinition_WF_PackMutual(uint8_t builtin);
lean_object* initialize_Lean_Elab_PreDefinition_WF_FloatRecApp(uint8_t builtin);
lean_object* initialize_Lean_Elab_PreDefinition_WF_Rel(uint8_t builtin);
lean_object* initialize_Lean_Elab_PreDefinition_WF_Fix(uint8_t builtin);
lean_object* initialize_Lean_Elab_PreDefinition_WF_Unfold(uint8_t builtin);
lean_object* initialize_Lean_Elab_PreDefinition_WF_Preprocess(uint8_t builtin);
lean_object* initialize_Lean_Elab_PreDefinition_WF_GuessLex(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_PreDefinition_WF_Main(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Elab_PreDefinition_WF_PackMutual(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_PreDefinition_WF_FloatRecApp(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_PreDefinition_WF_Rel(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_PreDefinition_WF_Fix(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_PreDefinition_WF_Unfold(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_PreDefinition_WF_Preprocess(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_PreDefinition_WF_GuessLex(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_PreDefinition_WF_Main(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_PreDefinition_WF_Main(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_PreDefinition_WF_Main(builtin);
}
#ifdef __cplusplus
}
#endif

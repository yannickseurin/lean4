// Lean compiler output
// Module: Lean.IdentifierSuggestion
// Imports: public import Lean.Elab.DeclModifiers import all Lean.Elab.ErrorUtils import Init.Omega
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
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
uint8_t lean_expr_eqv(lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MessageData_ofConstName(lean_object*, uint8_t);
extern lean_object* l_Lean_instInhabitedName;
lean_object* lean_st_ref_get(lean_object*);
uint8_t l_Lean_Name_isAnonymous(lean_object*);
lean_object* l_Lean_Environment_setExporting(lean_object*, uint8_t);
uint8_t l_Lean_Environment_contains(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
extern lean_object* l_Lean_Options_empty;
lean_object* l_Lean_Environment_getModuleIdxFor_x3f(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_note(lean_object*);
lean_object* l_Lean_Environment_header(lean_object*);
lean_object* l_Lean_EnvironmentHeader_moduleNames(lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_isPrivateName(lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
extern lean_object* l_Lean_unknownIdentifierMessageTag;
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Lean_Elab_getBetterRef(lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_pp_macroStack;
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_MessageData_ofSyntax(lean_object*);
lean_object* l_Lean_indentD(lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(lean_object*, uint8_t);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Lean_Name_replacePrefix(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ResolveName_resolveGlobalName(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_lengthTR___redArg(lean_object*);
lean_object* l_Lean_MessageData_hint(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
extern lean_object* l_Lean_MessageData_nil;
lean_object* l_Lean_instInhabitedPersistentEnvExtensionState___redArg(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fswap(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
uint8_t l_Lean_Name_quickLt(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_nat_shiftr(lean_object*, lean_object*);
uint8_t l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_balance___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
lean_object* l_Lean_NameSet_insert(lean_object*, lean_object*);
extern lean_object* l_Lean_NameSet_empty;
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_registerPersistentEnvExtensionUnsafe___redArg(lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Syntax_getId(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* l_Lean_PersistentEnvExtension_addEntry___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_instRepr_repr(lean_object*, lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
uint8_t l_Lean_instBEqAttributeKind_beq(uint8_t, uint8_t);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* l_Lean_registerBuiltinAttribute(lean_object*);
lean_object* l___private_Lean_Environment_0__Lean_EnvExtension_getStateUnsafe___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_eraseSuffix_x3f(lean_object*, lean_object*);
lean_object* l_id___boxed(lean_object*, lean_object*);
lean_object* l_Array_binSearchAux___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__2___boxed(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
uint8_t l_Lean_Expr_isFVar(lean_object*);
lean_object* l_Lean_Expr_fvarId_x21(lean_object*);
lean_object* l_Lean_FVarId_getUserName___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_hint_x27(lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Lean_MessageData_joinSep(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_IdentifierSuggestion_0__Lean_mkExistingToIncorrect_spec__4(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_IdentifierSuggestion_0__Lean_mkExistingToIncorrect_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_alter___at___00__private_Lean_IdentifierSuggestion_0__Lean_mkExistingToIncorrect_spec__5___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_alter___at___00__private_Lean_IdentifierSuggestion_0__Lean_mkExistingToIncorrect_spec__5___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_alter___at___00__private_Lean_IdentifierSuggestion_0__Lean_mkExistingToIncorrect_spec__5___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_alter___at___00__private_Lean_IdentifierSuggestion_0__Lean_mkExistingToIncorrect_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_IdentifierSuggestion_0__Lean_mkExistingToIncorrect___lam__0(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_IdentifierSuggestion_0__Lean_mkExistingToIncorrect_spec__3___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_IdentifierSuggestion_0__Lean_mkExistingToIncorrect_spec__3___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_IdentifierSuggestion_0__Lean_mkExistingToIncorrect_spec__3_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_IdentifierSuggestion_0__Lean_mkExistingToIncorrect_spec__3_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_IdentifierSuggestion_0__Lean_mkExistingToIncorrect_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_IdentifierSuggestion_0__Lean_mkExistingToIncorrect_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_IdentifierSuggestion_0__Lean_mkExistingToIncorrect_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_IdentifierSuggestion_0__Lean_mkExistingToIncorrect_spec__2(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_IdentifierSuggestion_0__Lean_mkExistingToIncorrect_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_IdentifierSuggestion_0__Lean_mkExistingToIncorrect_spec__1_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_IdentifierSuggestion_0__Lean_mkExistingToIncorrect_spec__1_spec__2___boxed(lean_object*, lean_object*);
static const lean_array_object l___private_Lean_IdentifierSuggestion_0__Lean_mkExistingToIncorrect___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_IdentifierSuggestion_0__Lean_mkExistingToIncorrect___lam__1___closed__0 = (const lean_object*)&l___private_Lean_IdentifierSuggestion_0__Lean_mkExistingToIncorrect___lam__1___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_IdentifierSuggestion_0__Lean_mkExistingToIncorrect___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_IdentifierSuggestion_0__Lean_mkExistingToIncorrect___lam__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_IdentifierSuggestion_0__Lean_mkExistingToIncorrect___lam__2(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_IdentifierSuggestion_0__Lean_mkExistingToIncorrect___lam__2___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_IdentifierSuggestion_0__Lean_mkExistingToIncorrect___lam__3(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_IdentifierSuggestion_0__Lean_mkExistingToIncorrect___lam__3___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_IdentifierSuggestion_0__Lean_mkExistingToIncorrect___lam__4(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_IdentifierSuggestion_0__Lean_mkExistingToIncorrect___lam__4___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_IdentifierSuggestion_0__Lean_mkExistingToIncorrect___lam__5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_IdentifierSuggestion_0__Lean_mkExistingToIncorrect___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_IdentifierSuggestion_0__Lean_mkExistingToIncorrect___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_IdentifierSuggestion_0__Lean_mkExistingToIncorrect___lam__0, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_IdentifierSuggestion_0__Lean_mkExistingToIncorrect___closed__0 = (const lean_object*)&l___private_Lean_IdentifierSuggestion_0__Lean_mkExistingToIncorrect___closed__0_value;
static const lean_closure_object l___private_Lean_IdentifierSuggestion_0__Lean_mkExistingToIncorrect___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_IdentifierSuggestion_0__Lean_mkExistingToIncorrect___lam__1___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_IdentifierSuggestion_0__Lean_mkExistingToIncorrect___closed__1 = (const lean_object*)&l___private_Lean_IdentifierSuggestion_0__Lean_mkExistingToIncorrect___closed__1_value;
static const lean_closure_object l___private_Lean_IdentifierSuggestion_0__Lean_mkExistingToIncorrect___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_IdentifierSuggestion_0__Lean_mkExistingToIncorrect___lam__2___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_IdentifierSuggestion_0__Lean_mkExistingToIncorrect___closed__2 = (const lean_object*)&l___private_Lean_IdentifierSuggestion_0__Lean_mkExistingToIncorrect___closed__2_value;
static const lean_closure_object l___private_Lean_IdentifierSuggestion_0__Lean_mkExistingToIncorrect___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_IdentifierSuggestion_0__Lean_mkExistingToIncorrect___lam__3___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_IdentifierSuggestion_0__Lean_mkExistingToIncorrect___closed__3 = (const lean_object*)&l___private_Lean_IdentifierSuggestion_0__Lean_mkExistingToIncorrect___closed__3_value;
static const lean_string_object l___private_Lean_IdentifierSuggestion_0__Lean_mkExistingToIncorrect___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_IdentifierSuggestion_0__Lean_mkExistingToIncorrect___closed__4 = (const lean_object*)&l___private_Lean_IdentifierSuggestion_0__Lean_mkExistingToIncorrect___closed__4_value;
static const lean_string_object l___private_Lean_IdentifierSuggestion_0__Lean_mkExistingToIncorrect___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "identifierSuggestForAttr"};
static const lean_object* l___private_Lean_IdentifierSuggestion_0__Lean_mkExistingToIncorrect___closed__5 = (const lean_object*)&l___private_Lean_IdentifierSuggestion_0__Lean_mkExistingToIncorrect___closed__5_value;
static const lean_string_object l___private_Lean_IdentifierSuggestion_0__Lean_mkExistingToIncorrect___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "existingToIncorrect"};
static const lean_object* l___private_Lean_IdentifierSuggestion_0__Lean_mkExistingToIncorrect___closed__6 = (const lean_object*)&l___private_Lean_IdentifierSuggestion_0__Lean_mkExistingToIncorrect___closed__6_value;
static const lean_ctor_object l___private_Lean_IdentifierSuggestion_0__Lean_mkExistingToIncorrect___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_IdentifierSuggestion_0__Lean_mkExistingToIncorrect___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_IdentifierSuggestion_0__Lean_mkExistingToIncorrect___closed__7_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_IdentifierSuggestion_0__Lean_mkExistingToIncorrect___closed__7_value_aux_0),((lean_object*)&l___private_Lean_IdentifierSuggestion_0__Lean_mkExistingToIncorrect___closed__5_value),LEAN_SCALAR_PTR_LITERAL(152, 194, 183, 202, 227, 26, 150, 37)}};
static const lean_ctor_object l___private_Lean_IdentifierSuggestion_0__Lean_mkExistingToIncorrect___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_IdentifierSuggestion_0__Lean_mkExistingToIncorrect___closed__7_value_aux_1),((lean_object*)&l___private_Lean_IdentifierSuggestion_0__Lean_mkExistingToIncorrect___closed__6_value),LEAN_SCALAR_PTR_LITERAL(133, 152, 34, 126, 5, 52, 99, 232)}};
static const lean_object* l___private_Lean_IdentifierSuggestion_0__Lean_mkExistingToIncorrect___closed__7 = (const lean_object*)&l___private_Lean_IdentifierSuggestion_0__Lean_mkExistingToIncorrect___closed__7_value;
static const lean_closure_object l___private_Lean_IdentifierSuggestion_0__Lean_mkExistingToIncorrect___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_IdentifierSuggestion_0__Lean_mkExistingToIncorrect___lam__4___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))} };
static const lean_object* l___private_Lean_IdentifierSuggestion_0__Lean_mkExistingToIncorrect___closed__8 = (const lean_object*)&l___private_Lean_IdentifierSuggestion_0__Lean_mkExistingToIncorrect___closed__8_value;
static const lean_closure_object l___private_Lean_IdentifierSuggestion_0__Lean_mkExistingToIncorrect___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_IdentifierSuggestion_0__Lean_mkExistingToIncorrect___lam__5___boxed, .m_arity = 4, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))} };
static const lean_object* l___private_Lean_IdentifierSuggestion_0__Lean_mkExistingToIncorrect___closed__9 = (const lean_object*)&l___private_Lean_IdentifierSuggestion_0__Lean_mkExistingToIncorrect___closed__9_value;
static const lean_ctor_object l___private_Lean_IdentifierSuggestion_0__Lean_mkExistingToIncorrect___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*8 + 0, .m_other = 8, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_IdentifierSuggestion_0__Lean_mkExistingToIncorrect___closed__7_value),((lean_object*)&l___private_Lean_IdentifierSuggestion_0__Lean_mkExistingToIncorrect___closed__8_value),((lean_object*)&l___private_Lean_IdentifierSuggestion_0__Lean_mkExistingToIncorrect___closed__9_value),((lean_object*)&l___private_Lean_IdentifierSuggestion_0__Lean_mkExistingToIncorrect___closed__0_value),((lean_object*)&l___private_Lean_IdentifierSuggestion_0__Lean_mkExistingToIncorrect___closed__1_value),((lean_object*)&l___private_Lean_IdentifierSuggestion_0__Lean_mkExistingToIncorrect___closed__2_value),((lean_object*)(((size_t)(2) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_IdentifierSuggestion_0__Lean_mkExistingToIncorrect___closed__10 = (const lean_object*)&l___private_Lean_IdentifierSuggestion_0__Lean_mkExistingToIncorrect___closed__10_value;
static const lean_ctor_object l___private_Lean_IdentifierSuggestion_0__Lean_mkExistingToIncorrect___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_IdentifierSuggestion_0__Lean_mkExistingToIncorrect___closed__10_value),((lean_object*)&l___private_Lean_IdentifierSuggestion_0__Lean_mkExistingToIncorrect___closed__3_value)}};
static const lean_object* l___private_Lean_IdentifierSuggestion_0__Lean_mkExistingToIncorrect___closed__11 = (const lean_object*)&l___private_Lean_IdentifierSuggestion_0__Lean_mkExistingToIncorrect___closed__11_value;
LEAN_EXPORT lean_object* l___private_Lean_IdentifierSuggestion_0__Lean_mkExistingToIncorrect();
LEAN_EXPORT lean_object* l___private_Lean_IdentifierSuggestion_0__Lean_mkExistingToIncorrect___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_IdentifierSuggestion_0__Lean_mkExistingToIncorrect_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_IdentifierSuggestion_0__Lean_mkExistingToIncorrect_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_IdentifierSuggestion_0__Lean_mkExistingToIncorrect_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_IdentifierSuggestion_0__Lean_mkExistingToIncorrect_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_IdentifierSuggestion_0__Lean_mkExistingToIncorrect_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_alter___at___00__private_Lean_IdentifierSuggestion_0__Lean_mkExistingToIncorrect_spec__5(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_alter___at___00__private_Lean_IdentifierSuggestion_0__Lean_mkExistingToIncorrect_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_IdentifierSuggestion_0__Lean_mkExistingToIncorrect_spec__3_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_IdentifierSuggestion_0__Lean_mkExistingToIncorrect_spec__3_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_alter___at___00__private_Lean_IdentifierSuggestion_0__Lean_mkIncorrectToExisting_spec__0___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_alter___at___00__private_Lean_IdentifierSuggestion_0__Lean_mkIncorrectToExisting_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_IdentifierSuggestion_0__Lean_mkIncorrectToExisting_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_IdentifierSuggestion_0__Lean_mkIncorrectToExisting_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_IdentifierSuggestion_0__Lean_mkIncorrectToExisting___lam__0(lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_IdentifierSuggestion_0__Lean_mkIncorrectToExisting___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_IdentifierSuggestion_0__Lean_mkIncorrectToExisting___lam__0, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_IdentifierSuggestion_0__Lean_mkIncorrectToExisting___closed__0 = (const lean_object*)&l___private_Lean_IdentifierSuggestion_0__Lean_mkIncorrectToExisting___closed__0_value;
static const lean_string_object l___private_Lean_IdentifierSuggestion_0__Lean_mkIncorrectToExisting___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "incorrectToExisting"};
static const lean_object* l___private_Lean_IdentifierSuggestion_0__Lean_mkIncorrectToExisting___closed__1 = (const lean_object*)&l___private_Lean_IdentifierSuggestion_0__Lean_mkIncorrectToExisting___closed__1_value;
static const lean_ctor_object l___private_Lean_IdentifierSuggestion_0__Lean_mkIncorrectToExisting___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_IdentifierSuggestion_0__Lean_mkExistingToIncorrect___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_IdentifierSuggestion_0__Lean_mkIncorrectToExisting___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_IdentifierSuggestion_0__Lean_mkIncorrectToExisting___closed__2_value_aux_0),((lean_object*)&l___private_Lean_IdentifierSuggestion_0__Lean_mkExistingToIncorrect___closed__5_value),LEAN_SCALAR_PTR_LITERAL(152, 194, 183, 202, 227, 26, 150, 37)}};
static const lean_ctor_object l___private_Lean_IdentifierSuggestion_0__Lean_mkIncorrectToExisting___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_IdentifierSuggestion_0__Lean_mkIncorrectToExisting___closed__2_value_aux_1),((lean_object*)&l___private_Lean_IdentifierSuggestion_0__Lean_mkIncorrectToExisting___closed__1_value),LEAN_SCALAR_PTR_LITERAL(77, 186, 146, 149, 115, 54, 93, 158)}};
static const lean_object* l___private_Lean_IdentifierSuggestion_0__Lean_mkIncorrectToExisting___closed__2 = (const lean_object*)&l___private_Lean_IdentifierSuggestion_0__Lean_mkIncorrectToExisting___closed__2_value;
static const lean_ctor_object l___private_Lean_IdentifierSuggestion_0__Lean_mkIncorrectToExisting___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*8 + 0, .m_other = 8, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_IdentifierSuggestion_0__Lean_mkIncorrectToExisting___closed__2_value),((lean_object*)&l___private_Lean_IdentifierSuggestion_0__Lean_mkExistingToIncorrect___closed__8_value),((lean_object*)&l___private_Lean_IdentifierSuggestion_0__Lean_mkExistingToIncorrect___closed__9_value),((lean_object*)&l___private_Lean_IdentifierSuggestion_0__Lean_mkIncorrectToExisting___closed__0_value),((lean_object*)&l___private_Lean_IdentifierSuggestion_0__Lean_mkExistingToIncorrect___closed__1_value),((lean_object*)&l___private_Lean_IdentifierSuggestion_0__Lean_mkExistingToIncorrect___closed__2_value),((lean_object*)(((size_t)(2) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_IdentifierSuggestion_0__Lean_mkIncorrectToExisting___closed__3 = (const lean_object*)&l___private_Lean_IdentifierSuggestion_0__Lean_mkIncorrectToExisting___closed__3_value;
static const lean_ctor_object l___private_Lean_IdentifierSuggestion_0__Lean_mkIncorrectToExisting___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_IdentifierSuggestion_0__Lean_mkIncorrectToExisting___closed__3_value),((lean_object*)&l___private_Lean_IdentifierSuggestion_0__Lean_mkExistingToIncorrect___closed__3_value)}};
static const lean_object* l___private_Lean_IdentifierSuggestion_0__Lean_mkIncorrectToExisting___closed__4 = (const lean_object*)&l___private_Lean_IdentifierSuggestion_0__Lean_mkIncorrectToExisting___closed__4_value;
LEAN_EXPORT lean_object* l___private_Lean_IdentifierSuggestion_0__Lean_mkIncorrectToExisting();
LEAN_EXPORT lean_object* l___private_Lean_IdentifierSuggestion_0__Lean_mkIncorrectToExisting___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_alter___at___00__private_Lean_IdentifierSuggestion_0__Lean_mkIncorrectToExisting_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_IdentifierSuggestion_0__Lean_initFn_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2__spec__0_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_IdentifierSuggestion_0__Lean_initFn_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2__spec__0_spec__0___closed__0;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_IdentifierSuggestion_0__Lean_initFn_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2__spec__0_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_IdentifierSuggestion_0__Lean_initFn_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2__spec__0_spec__0___closed__1;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_IdentifierSuggestion_0__Lean_initFn_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2__spec__0_spec__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_IdentifierSuggestion_0__Lean_initFn_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2__spec__0_spec__0___closed__2;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_IdentifierSuggestion_0__Lean_initFn_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2__spec__0_spec__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_IdentifierSuggestion_0__Lean_initFn_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2__spec__0_spec__0___closed__3;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_IdentifierSuggestion_0__Lean_initFn_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2__spec__0_spec__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_IdentifierSuggestion_0__Lean_initFn_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2__spec__0_spec__0___closed__4;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_IdentifierSuggestion_0__Lean_initFn_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2__spec__0_spec__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_IdentifierSuggestion_0__Lean_initFn_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2__spec__0_spec__0___closed__5;
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_IdentifierSuggestion_0__Lean_initFn_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2__spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_IdentifierSuggestion_0__Lean_initFn_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2__spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_IdentifierSuggestion_0__Lean_initFn_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2__spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_IdentifierSuggestion_0__Lean_initFn_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2__spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_IdentifierSuggestion_0__Lean_initFn_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2__spec__2___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 38, .m_capacity = 38, .m_length = 37, .m_data = "Invalid attribute scope: Attribute `["};
static const lean_object* l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_IdentifierSuggestion_0__Lean_initFn_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2__spec__2___redArg___closed__0 = (const lean_object*)&l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_IdentifierSuggestion_0__Lean_initFn_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2__spec__2___redArg___closed__0_value;
static lean_once_cell_t l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_IdentifierSuggestion_0__Lean_initFn_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2__spec__2___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_IdentifierSuggestion_0__Lean_initFn_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2__spec__2___redArg___closed__1;
static const lean_string_object l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_IdentifierSuggestion_0__Lean_initFn_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2__spec__2___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "]` must be global, not `"};
static const lean_object* l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_IdentifierSuggestion_0__Lean_initFn_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2__spec__2___redArg___closed__2 = (const lean_object*)&l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_IdentifierSuggestion_0__Lean_initFn_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2__spec__2___redArg___closed__2_value;
static lean_once_cell_t l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_IdentifierSuggestion_0__Lean_initFn_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2__spec__2___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_IdentifierSuggestion_0__Lean_initFn_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2__spec__2___redArg___closed__3;
static const lean_string_object l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_IdentifierSuggestion_0__Lean_initFn_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2__spec__2___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_IdentifierSuggestion_0__Lean_initFn_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2__spec__2___redArg___closed__4 = (const lean_object*)&l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_IdentifierSuggestion_0__Lean_initFn_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2__spec__2___redArg___closed__4_value;
static lean_once_cell_t l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_IdentifierSuggestion_0__Lean_initFn_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2__spec__2___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_IdentifierSuggestion_0__Lean_initFn_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2__spec__2___redArg___closed__5;
static const lean_string_object l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_IdentifierSuggestion_0__Lean_initFn_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2__spec__2___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "global"};
static const lean_object* l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_IdentifierSuggestion_0__Lean_initFn_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2__spec__2___redArg___closed__6 = (const lean_object*)&l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_IdentifierSuggestion_0__Lean_initFn_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2__spec__2___redArg___closed__6_value;
static const lean_string_object l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_IdentifierSuggestion_0__Lean_initFn_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2__spec__2___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "local"};
static const lean_object* l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_IdentifierSuggestion_0__Lean_initFn_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2__spec__2___redArg___closed__7 = (const lean_object*)&l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_IdentifierSuggestion_0__Lean_initFn_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2__spec__2___redArg___closed__7_value;
static const lean_string_object l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_IdentifierSuggestion_0__Lean_initFn_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2__spec__2___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "scoped"};
static const lean_object* l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_IdentifierSuggestion_0__Lean_initFn_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2__spec__2___redArg___closed__8 = (const lean_object*)&l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_IdentifierSuggestion_0__Lean_initFn_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2__spec__2___redArg___closed__8_value;
LEAN_EXPORT lean_object* l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_IdentifierSuggestion_0__Lean_initFn_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2__spec__2___redArg(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_IdentifierSuggestion_0__Lean_initFn_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2__spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_IdentifierSuggestion_0__Lean_initFn_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2__spec__1(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_IdentifierSuggestion_0__Lean_initFn_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2__spec__1___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_IdentifierSuggestion_0__Lean_initFn___lam__0___closed__0_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_IdentifierSuggestion_0__Lean_initFn___lam__0___closed__0_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_IdentifierSuggestion_0__Lean_initFn___lam__0___closed__1_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_IdentifierSuggestion_0__Lean_initFn___lam__0___closed__1_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_IdentifierSuggestion_0__Lean_initFn___lam__0___closed__2_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 42, .m_capacity = 42, .m_length = 41, .m_data = "Cannot make suggestions for private names"};
static const lean_object* l___private_Lean_IdentifierSuggestion_0__Lean_initFn___lam__0___closed__2_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_IdentifierSuggestion_0__Lean_initFn___lam__0___closed__2_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_IdentifierSuggestion_0__Lean_initFn___lam__0___closed__3_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_IdentifierSuggestion_0__Lean_initFn___lam__0___closed__3_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_IdentifierSuggestion_0__Lean_initFn___lam__0___closed__4_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 42, .m_capacity = 42, .m_length = 41, .m_data = "Invalid `[suggest_for]` attribute syntax "};
static const lean_object* l___private_Lean_IdentifierSuggestion_0__Lean_initFn___lam__0___closed__4_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_IdentifierSuggestion_0__Lean_initFn___lam__0___closed__4_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_IdentifierSuggestion_0__Lean_initFn___lam__0___closed__5_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_IdentifierSuggestion_0__Lean_initFn___lam__0___closed__5_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_IdentifierSuggestion_0__Lean_initFn___lam__0___closed__6_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* l___private_Lean_IdentifierSuggestion_0__Lean_initFn___lam__0___closed__6_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_IdentifierSuggestion_0__Lean_initFn___lam__0___closed__6_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_IdentifierSuggestion_0__Lean_initFn___lam__0___closed__7_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l___private_Lean_IdentifierSuggestion_0__Lean_initFn___lam__0___closed__7_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_IdentifierSuggestion_0__Lean_initFn___lam__0___closed__7_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_IdentifierSuggestion_0__Lean_initFn___lam__0___closed__8_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Attr"};
static const lean_object* l___private_Lean_IdentifierSuggestion_0__Lean_initFn___lam__0___closed__8_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_IdentifierSuggestion_0__Lean_initFn___lam__0___closed__8_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_IdentifierSuggestion_0__Lean_initFn___lam__0___closed__9_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "simple"};
static const lean_object* l___private_Lean_IdentifierSuggestion_0__Lean_initFn___lam__0___closed__9_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_IdentifierSuggestion_0__Lean_initFn___lam__0___closed__9_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_IdentifierSuggestion_0__Lean_initFn___lam__0_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2_(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_IdentifierSuggestion_0__Lean_initFn___lam__0_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_IdentifierSuggestion_0__Lean_initFn___lam__1___closed__0_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "Attribute `["};
static const lean_object* l___private_Lean_IdentifierSuggestion_0__Lean_initFn___lam__1___closed__0_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_IdentifierSuggestion_0__Lean_initFn___lam__1___closed__0_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_IdentifierSuggestion_0__Lean_initFn___lam__1___closed__1_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_IdentifierSuggestion_0__Lean_initFn___lam__1___closed__1_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_IdentifierSuggestion_0__Lean_initFn___lam__1___closed__2_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "]` cannot be erased"};
static const lean_object* l___private_Lean_IdentifierSuggestion_0__Lean_initFn___lam__1___closed__2_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_IdentifierSuggestion_0__Lean_initFn___lam__1___closed__2_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_IdentifierSuggestion_0__Lean_initFn___lam__1___closed__3_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_IdentifierSuggestion_0__Lean_initFn___lam__1___closed__3_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_IdentifierSuggestion_0__Lean_initFn___lam__1_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2_(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_IdentifierSuggestion_0__Lean_initFn___lam__1_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_IdentifierSuggestion_0__Lean_initFn___closed__0_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_IdentifierSuggestion_0__Lean_initFn___closed__0_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_IdentifierSuggestion_0__Lean_initFn___closed__1_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lean_IdentifierSuggestion_0__Lean_initFn___closed__1_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_IdentifierSuggestion_0__Lean_initFn___closed__1_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_IdentifierSuggestion_0__Lean_initFn___closed__2_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_IdentifierSuggestion_0__Lean_initFn___closed__2_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_IdentifierSuggestion_0__Lean_initFn___closed__3_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_IdentifierSuggestion_0__Lean_initFn___closed__3_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_IdentifierSuggestion_0__Lean_initFn___closed__4_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "IdentifierSuggestion"};
static const lean_object* l___private_Lean_IdentifierSuggestion_0__Lean_initFn___closed__4_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_IdentifierSuggestion_0__Lean_initFn___closed__4_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_IdentifierSuggestion_0__Lean_initFn___closed__5_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_IdentifierSuggestion_0__Lean_initFn___closed__5_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_IdentifierSuggestion_0__Lean_initFn___closed__6_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_IdentifierSuggestion_0__Lean_initFn___closed__6_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_IdentifierSuggestion_0__Lean_initFn___closed__7_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_IdentifierSuggestion_0__Lean_initFn___closed__7_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_IdentifierSuggestion_0__Lean_initFn___closed__8_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "identifierSuggestionsImpl"};
static const lean_object* l___private_Lean_IdentifierSuggestion_0__Lean_initFn___closed__8_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_IdentifierSuggestion_0__Lean_initFn___closed__8_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_IdentifierSuggestion_0__Lean_initFn___closed__9_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_IdentifierSuggestion_0__Lean_initFn___closed__9_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_IdentifierSuggestion_0__Lean_initFn___closed__10_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "suggest_for"};
static const lean_object* l___private_Lean_IdentifierSuggestion_0__Lean_initFn___closed__10_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_IdentifierSuggestion_0__Lean_initFn___closed__10_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_IdentifierSuggestion_0__Lean_initFn___closed__11_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_IdentifierSuggestion_0__Lean_initFn___closed__10_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(10, 123, 198, 36, 120, 51, 50, 116)}};
static const lean_object* l___private_Lean_IdentifierSuggestion_0__Lean_initFn___closed__11_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_IdentifierSuggestion_0__Lean_initFn___closed__11_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_IdentifierSuggestion_0__Lean_initFn___closed__12_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_IdentifierSuggestion_0__Lean_initFn___lam__1_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2____boxed, .m_arity = 5, .m_num_fixed = 1, .m_objs = {((lean_object*)&l___private_Lean_IdentifierSuggestion_0__Lean_initFn___closed__11_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2__value)} };
static const lean_object* l___private_Lean_IdentifierSuggestion_0__Lean_initFn___closed__12_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_IdentifierSuggestion_0__Lean_initFn___closed__12_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_IdentifierSuggestion_0__Lean_initFn___closed__13_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 115, .m_capacity = 115, .m_length = 114, .m_data = "suggest other (incorrect, not-existing) identifiers that someone might use when they actually want this definition"};
static const lean_object* l___private_Lean_IdentifierSuggestion_0__Lean_initFn___closed__13_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_IdentifierSuggestion_0__Lean_initFn___closed__13_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_IdentifierSuggestion_0__Lean_initFn___closed__14_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_IdentifierSuggestion_0__Lean_initFn___closed__14_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_IdentifierSuggestion_0__Lean_initFn_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_IdentifierSuggestion_0__Lean_initFn_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_IdentifierSuggestion_0__Lean_initFn_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2__spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_IdentifierSuggestion_0__Lean_initFn_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2__spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_IdentifierSuggestion_0__Lean_initFn_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2__spec__2(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_IdentifierSuggestion_0__Lean_initFn_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2__spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_IdentifierSuggestion_0__Lean_identifierSuggestionsImpl;
static const lean_array_object l_Lean_getSuggestions___redArg___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_getSuggestions___redArg___lam__1___closed__0 = (const lean_object*)&l_Lean_getSuggestions___redArg___lam__1___closed__0_value;
static const lean_closure_object l_Lean_getSuggestions___redArg___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_id___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_getSuggestions___redArg___lam__1___closed__1 = (const lean_object*)&l_Lean_getSuggestions___redArg___lam__1___closed__1_value;
static const lean_closure_object l_Lean_getSuggestions___redArg___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_getSuggestions___redArg___lam__1___closed__2 = (const lean_object*)&l_Lean_getSuggestions___redArg___lam__1___closed__2_value;
static const lean_closure_object l_Lean_getSuggestions___redArg___lam__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_getSuggestions___redArg___lam__1___closed__3 = (const lean_object*)&l_Lean_getSuggestions___redArg___lam__1___closed__3_value;
static const lean_closure_object l_Lean_getSuggestions___redArg___lam__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_getSuggestions___redArg___lam__1___closed__4 = (const lean_object*)&l_Lean_getSuggestions___redArg___lam__1___closed__4_value;
static const lean_closure_object l_Lean_getSuggestions___redArg___lam__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__3, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_getSuggestions___redArg___lam__1___closed__5 = (const lean_object*)&l_Lean_getSuggestions___redArg___lam__1___closed__5_value;
static const lean_closure_object l_Lean_getSuggestions___redArg___lam__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__4___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_getSuggestions___redArg___lam__1___closed__6 = (const lean_object*)&l_Lean_getSuggestions___redArg___lam__1___closed__6_value;
static const lean_closure_object l_Lean_getSuggestions___redArg___lam__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__5___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_getSuggestions___redArg___lam__1___closed__7 = (const lean_object*)&l_Lean_getSuggestions___redArg___lam__1___closed__7_value;
static const lean_closure_object l_Lean_getSuggestions___redArg___lam__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__6, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_getSuggestions___redArg___lam__1___closed__8 = (const lean_object*)&l_Lean_getSuggestions___redArg___lam__1___closed__8_value;
static const lean_ctor_object l_Lean_getSuggestions___redArg___lam__1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_getSuggestions___redArg___lam__1___closed__2_value),((lean_object*)&l_Lean_getSuggestions___redArg___lam__1___closed__3_value)}};
static const lean_object* l_Lean_getSuggestions___redArg___lam__1___closed__9 = (const lean_object*)&l_Lean_getSuggestions___redArg___lam__1___closed__9_value;
static const lean_ctor_object l_Lean_getSuggestions___redArg___lam__1___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_getSuggestions___redArg___lam__1___closed__9_value),((lean_object*)&l_Lean_getSuggestions___redArg___lam__1___closed__4_value),((lean_object*)&l_Lean_getSuggestions___redArg___lam__1___closed__5_value),((lean_object*)&l_Lean_getSuggestions___redArg___lam__1___closed__6_value),((lean_object*)&l_Lean_getSuggestions___redArg___lam__1___closed__7_value)}};
static const lean_object* l_Lean_getSuggestions___redArg___lam__1___closed__10 = (const lean_object*)&l_Lean_getSuggestions___redArg___lam__1___closed__10_value;
static const lean_ctor_object l_Lean_getSuggestions___redArg___lam__1___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_getSuggestions___redArg___lam__1___closed__10_value),((lean_object*)&l_Lean_getSuggestions___redArg___lam__1___closed__8_value)}};
static const lean_object* l_Lean_getSuggestions___redArg___lam__1___closed__11 = (const lean_object*)&l_Lean_getSuggestions___redArg___lam__1___closed__11_value;
LEAN_EXPORT lean_object* l_Lean_getSuggestions___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getSuggestions___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getSuggestions___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getSuggestions___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_getSuggestions___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_IdentifierSuggestion_0__Lean_mkExistingToIncorrect_spec__3___redArg___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_getSuggestions___redArg___closed__0 = (const lean_object*)&l_Lean_getSuggestions___redArg___closed__0_value;
static const lean_closure_object l_Lean_getSuggestions___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_NameSet_insert, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_getSuggestions___redArg___closed__1 = (const lean_object*)&l_Lean_getSuggestions___redArg___closed__1_value;
static lean_once_cell_t l_Lean_getSuggestions___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_getSuggestions___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_getSuggestions___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getSuggestions(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getStoredSuggestions___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getStoredSuggestions___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getStoredSuggestions___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getStoredSuggestions___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getStoredSuggestions___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getStoredSuggestions(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_getSuggestions___at___00Lean_throwUnknownNameWithSuggestions_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_getSuggestions___at___00Lean_throwUnknownNameWithSuggestions_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_getSuggestions___at___00Lean_throwUnknownNameWithSuggestions_spec__0_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_getSuggestions___at___00Lean_throwUnknownNameWithSuggestions_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getSuggestions___at___00Lean_throwUnknownNameWithSuggestions_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getSuggestions___at___00Lean_throwUnknownNameWithSuggestions_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_throwUnknownNameWithSuggestions_spec__2___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "Change to "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_throwUnknownNameWithSuggestions_spec__2___lam__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_throwUnknownNameWithSuggestions_spec__2___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_throwUnknownNameWithSuggestions_spec__2___lam__0(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_throwUnknownNameWithSuggestions_spec__2___lam__0___boxed(lean_object*);
static const lean_closure_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_throwUnknownNameWithSuggestions_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_throwUnknownNameWithSuggestions_spec__2___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_throwUnknownNameWithSuggestions_spec__2___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_throwUnknownNameWithSuggestions_spec__2___closed__0_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_throwUnknownNameWithSuggestions_spec__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_throwUnknownNameWithSuggestions_spec__2___closed__0_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_throwUnknownNameWithSuggestions_spec__2___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_throwUnknownNameWithSuggestions_spec__2___closed__1_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_throwUnknownNameWithSuggestions_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_throwUnknownNameWithSuggestions_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownNameWithSuggestions_spec__1_spec__4_spec__6_spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownNameWithSuggestions_spec__1_spec__4_spec__6_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownNameWithSuggestions_spec__1_spec__4_spec__6_spec__9_spec__11___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownNameWithSuggestions_spec__1_spec__4_spec__6_spec__9_spec__11___closed__0;
static const lean_string_object l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownNameWithSuggestions_spec__1_spec__4_spec__6_spec__9_spec__11___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "while expanding"};
static const lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownNameWithSuggestions_spec__1_spec__4_spec__6_spec__9_spec__11___closed__1 = (const lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownNameWithSuggestions_spec__1_spec__4_spec__6_spec__9_spec__11___closed__1_value;
static const lean_ctor_object l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownNameWithSuggestions_spec__1_spec__4_spec__6_spec__9_spec__11___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownNameWithSuggestions_spec__1_spec__4_spec__6_spec__9_spec__11___closed__1_value)}};
static const lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownNameWithSuggestions_spec__1_spec__4_spec__6_spec__9_spec__11___closed__2 = (const lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownNameWithSuggestions_spec__1_spec__4_spec__6_spec__9_spec__11___closed__2_value;
static lean_once_cell_t l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownNameWithSuggestions_spec__1_spec__4_spec__6_spec__9_spec__11___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownNameWithSuggestions_spec__1_spec__4_spec__6_spec__9_spec__11___closed__3;
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownNameWithSuggestions_spec__1_spec__4_spec__6_spec__9_spec__11(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownNameWithSuggestions_spec__1_spec__4_spec__6_spec__9_spec__10(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownNameWithSuggestions_spec__1_spec__4_spec__6_spec__9_spec__10___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownNameWithSuggestions_spec__1_spec__4_spec__6_spec__9___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "with resulting expansion"};
static const lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownNameWithSuggestions_spec__1_spec__4_spec__6_spec__9___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownNameWithSuggestions_spec__1_spec__4_spec__6_spec__9___redArg___closed__0_value;
static const lean_ctor_object l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownNameWithSuggestions_spec__1_spec__4_spec__6_spec__9___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownNameWithSuggestions_spec__1_spec__4_spec__6_spec__9___redArg___closed__0_value)}};
static const lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownNameWithSuggestions_spec__1_spec__4_spec__6_spec__9___redArg___closed__1 = (const lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownNameWithSuggestions_spec__1_spec__4_spec__6_spec__9___redArg___closed__1_value;
static lean_once_cell_t l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownNameWithSuggestions_spec__1_spec__4_spec__6_spec__9___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownNameWithSuggestions_spec__1_spec__4_spec__6_spec__9___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownNameWithSuggestions_spec__1_spec__4_spec__6_spec__9___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownNameWithSuggestions_spec__1_spec__4_spec__6_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownNameWithSuggestions_spec__1_spec__4_spec__6___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownNameWithSuggestions_spec__1_spec__4_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownNameWithSuggestions_spec__1_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownNameWithSuggestions_spec__1_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownNameWithSuggestions_spec__1_spec__3_spec__4___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "A private declaration `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownNameWithSuggestions_spec__1_spec__3_spec__4___redArg___closed__0 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownNameWithSuggestions_spec__1_spec__3_spec__4___redArg___closed__0_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownNameWithSuggestions_spec__1_spec__3_spec__4___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownNameWithSuggestions_spec__1_spec__3_spec__4___redArg___closed__1;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownNameWithSuggestions_spec__1_spec__3_spec__4___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 79, .m_capacity = 79, .m_length = 78, .m_data = "` (from the current module) exists but would need to be public to access here."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownNameWithSuggestions_spec__1_spec__3_spec__4___redArg___closed__2 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownNameWithSuggestions_spec__1_spec__3_spec__4___redArg___closed__2_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownNameWithSuggestions_spec__1_spec__3_spec__4___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownNameWithSuggestions_spec__1_spec__3_spec__4___redArg___closed__3;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownNameWithSuggestions_spec__1_spec__3_spec__4___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "A public declaration `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownNameWithSuggestions_spec__1_spec__3_spec__4___redArg___closed__4 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownNameWithSuggestions_spec__1_spec__3_spec__4___redArg___closed__4_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownNameWithSuggestions_spec__1_spec__3_spec__4___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownNameWithSuggestions_spec__1_spec__3_spec__4___redArg___closed__5;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownNameWithSuggestions_spec__1_spec__3_spec__4___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 68, .m_capacity = 68, .m_length = 67, .m_data = "` exists but is imported privately; consider adding `public import "};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownNameWithSuggestions_spec__1_spec__3_spec__4___redArg___closed__6 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownNameWithSuggestions_spec__1_spec__3_spec__4___redArg___closed__6_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownNameWithSuggestions_spec__1_spec__3_spec__4___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownNameWithSuggestions_spec__1_spec__3_spec__4___redArg___closed__7;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownNameWithSuggestions_spec__1_spec__3_spec__4___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "`."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownNameWithSuggestions_spec__1_spec__3_spec__4___redArg___closed__8 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownNameWithSuggestions_spec__1_spec__3_spec__4___redArg___closed__8_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownNameWithSuggestions_spec__1_spec__3_spec__4___redArg___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownNameWithSuggestions_spec__1_spec__3_spec__4___redArg___closed__9;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownNameWithSuggestions_spec__1_spec__3_spec__4___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "` (from `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownNameWithSuggestions_spec__1_spec__3_spec__4___redArg___closed__10 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownNameWithSuggestions_spec__1_spec__3_spec__4___redArg___closed__10_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownNameWithSuggestions_spec__1_spec__3_spec__4___redArg___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownNameWithSuggestions_spec__1_spec__3_spec__4___redArg___closed__11;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownNameWithSuggestions_spec__1_spec__3_spec__4___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "`) exists but would need to be public to access here."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownNameWithSuggestions_spec__1_spec__3_spec__4___redArg___closed__12 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownNameWithSuggestions_spec__1_spec__3_spec__4___redArg___closed__12_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownNameWithSuggestions_spec__1_spec__3_spec__4___redArg___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownNameWithSuggestions_spec__1_spec__3_spec__4___redArg___closed__13;
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownNameWithSuggestions_spec__1_spec__3_spec__4___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownNameWithSuggestions_spec__1_spec__3_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownNameWithSuggestions_spec__1_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownNameWithSuggestions_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownNameWithSuggestions_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownNameWithSuggestions_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_throwUnknownNameWithSuggestions___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Unknown "};
static const lean_object* l_Lean_throwUnknownNameWithSuggestions___redArg___closed__0 = (const lean_object*)&l_Lean_throwUnknownNameWithSuggestions___redArg___closed__0_value;
static lean_once_cell_t l_Lean_throwUnknownNameWithSuggestions___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwUnknownNameWithSuggestions___redArg___closed__1;
static const lean_string_object l_Lean_throwUnknownNameWithSuggestions___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " `"};
static const lean_object* l_Lean_throwUnknownNameWithSuggestions___redArg___closed__2 = (const lean_object*)&l_Lean_throwUnknownNameWithSuggestions___redArg___closed__2_value;
static lean_once_cell_t l_Lean_throwUnknownNameWithSuggestions___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwUnknownNameWithSuggestions___redArg___closed__3;
static const lean_string_object l_Lean_throwUnknownNameWithSuggestions___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Perhaps you meant "};
static const lean_object* l_Lean_throwUnknownNameWithSuggestions___redArg___closed__4 = (const lean_object*)&l_Lean_throwUnknownNameWithSuggestions___redArg___closed__4_value;
static lean_once_cell_t l_Lean_throwUnknownNameWithSuggestions___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwUnknownNameWithSuggestions___redArg___closed__5;
static const lean_string_object l_Lean_throwUnknownNameWithSuggestions___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ":"};
static const lean_object* l_Lean_throwUnknownNameWithSuggestions___redArg___closed__6 = (const lean_object*)&l_Lean_throwUnknownNameWithSuggestions___redArg___closed__6_value;
static lean_once_cell_t l_Lean_throwUnknownNameWithSuggestions___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwUnknownNameWithSuggestions___redArg___closed__7;
static const lean_string_object l_Lean_throwUnknownNameWithSuggestions___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = " in place of `"};
static const lean_object* l_Lean_throwUnknownNameWithSuggestions___redArg___closed__8 = (const lean_object*)&l_Lean_throwUnknownNameWithSuggestions___redArg___closed__8_value;
static lean_once_cell_t l_Lean_throwUnknownNameWithSuggestions___redArg___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwUnknownNameWithSuggestions___redArg___closed__9;
static const lean_string_object l_Lean_throwUnknownNameWithSuggestions___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "one of these"};
static const lean_object* l_Lean_throwUnknownNameWithSuggestions___redArg___closed__10 = (const lean_object*)&l_Lean_throwUnknownNameWithSuggestions___redArg___closed__10_value;
static lean_once_cell_t l_Lean_throwUnknownNameWithSuggestions___redArg___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwUnknownNameWithSuggestions___redArg___closed__11;
LEAN_EXPORT lean_object* l_Lean_throwUnknownNameWithSuggestions___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownNameWithSuggestions___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownNameWithSuggestions(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownNameWithSuggestions___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getSuggestions___at___00Lean_throwUnknownNameWithSuggestions_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getSuggestions___at___00Lean_throwUnknownNameWithSuggestions_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownNameWithSuggestions_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownNameWithSuggestions_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_getSuggestions___at___00Lean_throwUnknownNameWithSuggestions_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_getSuggestions___at___00Lean_throwUnknownNameWithSuggestions_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownNameWithSuggestions_spec__1_spec__3_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownNameWithSuggestions_spec__1_spec__3_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownNameWithSuggestions_spec__1_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownNameWithSuggestions_spec__1_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownNameWithSuggestions_spec__1_spec__4_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownNameWithSuggestions_spec__1_spec__4_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownNameWithSuggestions_spec__1_spec__4_spec__6_spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownNameWithSuggestions_spec__1_spec__4_spec__6_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyM___at___00Lean_Elab_Term_hintAutoImplicitFailure_spec__0_spec__1(lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyM___at___00Lean_Elab_Term_hintAutoImplicitFailure_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentArray_anyMAux___at___00Lean_PersistentArray_anyM___at___00Lean_Elab_Term_hintAutoImplicitFailure_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyMAux___at___00Lean_PersistentArray_anyM___at___00Lean_Elab_Term_hintAutoImplicitFailure_spec__0_spec__0_spec__1(lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyMAux___at___00Lean_PersistentArray_anyM___at___00Lean_Elab_Term_hintAutoImplicitFailure_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_anyMAux___at___00Lean_PersistentArray_anyM___at___00Lean_Elab_Term_hintAutoImplicitFailure_spec__0_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentArray_anyM___at___00Lean_Elab_Term_hintAutoImplicitFailure_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_anyM___at___00Lean_Elab_Term_hintAutoImplicitFailure_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldrM___at___00Lean_Elab_Term_hintAutoImplicitFailure_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldrM___at___00Lean_Elab_Term_hintAutoImplicitFailure_spec__1___boxed(lean_object*, lean_object*);
static const lean_string_object l_List_mapTR_loop___at___00Lean_Elab_Term_hintAutoImplicitFailure_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 3, .m_data = "• `"};
static const lean_object* l_List_mapTR_loop___at___00Lean_Elab_Term_hintAutoImplicitFailure_spec__2___closed__0 = (const lean_object*)&l_List_mapTR_loop___at___00Lean_Elab_Term_hintAutoImplicitFailure_spec__2___closed__0_value;
static lean_once_cell_t l_List_mapTR_loop___at___00Lean_Elab_Term_hintAutoImplicitFailure_spec__2___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_mapTR_loop___at___00Lean_Elab_Term_hintAutoImplicitFailure_spec__2___closed__1;
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Elab_Term_hintAutoImplicitFailure_spec__2(lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Term_hintAutoImplicitFailure___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "The identifier `"};
static const lean_object* l_Lean_Elab_Term_hintAutoImplicitFailure___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_Term_hintAutoImplicitFailure___redArg___closed__0_value;
static lean_once_cell_t l_Lean_Elab_Term_hintAutoImplicitFailure___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Term_hintAutoImplicitFailure___redArg___closed__1;
static const lean_string_object l_Lean_Elab_Term_hintAutoImplicitFailure___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 181, .m_capacity = 181, .m_length = 180, .m_data = "` is unknown, and Lean's `autoImplicit` option causes an unknown identifier to be treated as an implicitly bound variable with an unknown type. However, the unknown type cannot be "};
static const lean_object* l_Lean_Elab_Term_hintAutoImplicitFailure___redArg___closed__2 = (const lean_object*)&l_Lean_Elab_Term_hintAutoImplicitFailure___redArg___closed__2_value;
static lean_once_cell_t l_Lean_Elab_Term_hintAutoImplicitFailure___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Term_hintAutoImplicitFailure___redArg___closed__3;
static const lean_string_object l_Lean_Elab_Term_hintAutoImplicitFailure___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = ", and "};
static const lean_object* l_Lean_Elab_Term_hintAutoImplicitFailure___redArg___closed__4 = (const lean_object*)&l_Lean_Elab_Term_hintAutoImplicitFailure___redArg___closed__4_value;
static lean_once_cell_t l_Lean_Elab_Term_hintAutoImplicitFailure___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Term_hintAutoImplicitFailure___redArg___closed__5;
static const lean_string_object l_Lean_Elab_Term_hintAutoImplicitFailure___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 106, .m_capacity = 106, .m_length = 105, .m_data = " is what Lean expects here. This is often the result of a typo or a missing `import` or `open` statement."};
static const lean_object* l_Lean_Elab_Term_hintAutoImplicitFailure___redArg___closed__6 = (const lean_object*)&l_Lean_Elab_Term_hintAutoImplicitFailure___redArg___closed__6_value;
static lean_once_cell_t l_Lean_Elab_Term_hintAutoImplicitFailure___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Term_hintAutoImplicitFailure___redArg___closed__7;
static lean_once_cell_t l_Lean_Elab_Term_hintAutoImplicitFailure___redArg___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Term_hintAutoImplicitFailure___redArg___closed__8;
static const lean_string_object l_Lean_Elab_Term_hintAutoImplicitFailure___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "Perhaps you meant `"};
static const lean_object* l_Lean_Elab_Term_hintAutoImplicitFailure___redArg___closed__9 = (const lean_object*)&l_Lean_Elab_Term_hintAutoImplicitFailure___redArg___closed__9_value;
static lean_once_cell_t l_Lean_Elab_Term_hintAutoImplicitFailure___redArg___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Term_hintAutoImplicitFailure___redArg___closed__10;
static const lean_string_object l_Lean_Elab_Term_hintAutoImplicitFailure___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "` in place of `"};
static const lean_object* l_Lean_Elab_Term_hintAutoImplicitFailure___redArg___closed__11 = (const lean_object*)&l_Lean_Elab_Term_hintAutoImplicitFailure___redArg___closed__11_value;
static lean_once_cell_t l_Lean_Elab_Term_hintAutoImplicitFailure___redArg___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Term_hintAutoImplicitFailure___redArg___closed__12;
static const lean_string_object l_Lean_Elab_Term_hintAutoImplicitFailure___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "`\?"};
static const lean_object* l_Lean_Elab_Term_hintAutoImplicitFailure___redArg___closed__13 = (const lean_object*)&l_Lean_Elab_Term_hintAutoImplicitFailure___redArg___closed__13_value;
static lean_once_cell_t l_Lean_Elab_Term_hintAutoImplicitFailure___redArg___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Term_hintAutoImplicitFailure___redArg___closed__14;
static const lean_string_object l_Lean_Elab_Term_hintAutoImplicitFailure___redArg___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 45, .m_capacity = 45, .m_length = 44, .m_data = "Perhaps you meant one of these in place of `"};
static const lean_object* l_Lean_Elab_Term_hintAutoImplicitFailure___redArg___closed__15 = (const lean_object*)&l_Lean_Elab_Term_hintAutoImplicitFailure___redArg___closed__15_value;
static lean_once_cell_t l_Lean_Elab_Term_hintAutoImplicitFailure___redArg___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Term_hintAutoImplicitFailure___redArg___closed__16;
static const lean_string_object l_Lean_Elab_Term_hintAutoImplicitFailure___redArg___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "`:"};
static const lean_object* l_Lean_Elab_Term_hintAutoImplicitFailure___redArg___closed__17 = (const lean_object*)&l_Lean_Elab_Term_hintAutoImplicitFailure___redArg___closed__17_value;
static lean_once_cell_t l_Lean_Elab_Term_hintAutoImplicitFailure___redArg___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Term_hintAutoImplicitFailure___redArg___closed__18;
LEAN_EXPORT lean_object* l_Lean_Elab_Term_hintAutoImplicitFailure___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_hintAutoImplicitFailure___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_hintAutoImplicitFailure(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_hintAutoImplicitFailure___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_IdentifierSuggestion_0__Lean_mkExistingToIncorrect_spec__4(lean_object* v_as_1_, size_t v_i_2_, size_t v_stop_3_, lean_object* v_b_4_){
_start:
{
uint8_t v___x_5_; 
v___x_5_ = lean_usize_dec_eq(v_i_2_, v_stop_3_);
if (v___x_5_ == 0)
{
lean_object* v___x_6_; lean_object* v___x_7_; size_t v___x_8_; size_t v___x_9_; 
v___x_6_ = lean_array_uget_borrowed(v_as_1_, v_i_2_);
lean_inc(v___x_6_);
v___x_7_ = l_Lean_NameSet_insert(v_b_4_, v___x_6_);
v___x_8_ = ((size_t)1ULL);
v___x_9_ = lean_usize_add(v_i_2_, v___x_8_);
v_i_2_ = v___x_9_;
v_b_4_ = v___x_7_;
goto _start;
}
else
{
return v_b_4_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_IdentifierSuggestion_0__Lean_mkExistingToIncorrect_spec__4___boxed(lean_object* v_as_11_, lean_object* v_i_12_, lean_object* v_stop_13_, lean_object* v_b_14_){
_start:
{
size_t v_i_boxed_15_; size_t v_stop_boxed_16_; lean_object* v_res_17_; 
v_i_boxed_15_ = lean_unbox_usize(v_i_12_);
lean_dec(v_i_12_);
v_stop_boxed_16_ = lean_unbox_usize(v_stop_13_);
lean_dec(v_stop_13_);
v_res_17_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_IdentifierSuggestion_0__Lean_mkExistingToIncorrect_spec__4(v_as_11_, v_i_boxed_15_, v_stop_boxed_16_, v_b_14_);
lean_dec_ref(v_as_11_);
return v_res_17_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_alter___at___00__private_Lean_IdentifierSuggestion_0__Lean_mkExistingToIncorrect_spec__5___redArg___lam__0(lean_object* v_snd_18_, lean_object* v_old_19_){
_start:
{
lean_object* v___y_21_; 
if (lean_obj_tag(v_old_19_) == 0)
{
lean_object* v___x_36_; 
v___x_36_ = l_Lean_NameSet_empty;
v___y_21_ = v___x_36_;
goto v___jp_20_;
}
else
{
lean_object* v_val_37_; 
v_val_37_ = lean_ctor_get(v_old_19_, 0);
lean_inc(v_val_37_);
lean_dec_ref_known(v_old_19_, 1);
v___y_21_ = v_val_37_;
goto v___jp_20_;
}
v___jp_20_:
{
lean_object* v___x_22_; lean_object* v___x_23_; uint8_t v___x_24_; 
v___x_22_ = lean_unsigned_to_nat(0u);
v___x_23_ = lean_array_get_size(v_snd_18_);
v___x_24_ = lean_nat_dec_lt(v___x_22_, v___x_23_);
if (v___x_24_ == 0)
{
lean_object* v___x_25_; 
v___x_25_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_25_, 0, v___y_21_);
return v___x_25_;
}
else
{
uint8_t v___x_26_; 
v___x_26_ = lean_nat_dec_le(v___x_23_, v___x_23_);
if (v___x_26_ == 0)
{
if (v___x_24_ == 0)
{
lean_object* v___x_27_; 
v___x_27_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_27_, 0, v___y_21_);
return v___x_27_;
}
else
{
size_t v___x_28_; size_t v___x_29_; lean_object* v___x_30_; lean_object* v___x_31_; 
v___x_28_ = ((size_t)0ULL);
v___x_29_ = lean_usize_of_nat(v___x_23_);
v___x_30_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_IdentifierSuggestion_0__Lean_mkExistingToIncorrect_spec__4(v_snd_18_, v___x_28_, v___x_29_, v___y_21_);
v___x_31_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_31_, 0, v___x_30_);
return v___x_31_;
}
}
else
{
size_t v___x_32_; size_t v___x_33_; lean_object* v___x_34_; lean_object* v___x_35_; 
v___x_32_ = ((size_t)0ULL);
v___x_33_ = lean_usize_of_nat(v___x_23_);
v___x_34_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_IdentifierSuggestion_0__Lean_mkExistingToIncorrect_spec__4(v_snd_18_, v___x_32_, v___x_33_, v___y_21_);
v___x_35_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_35_, 0, v___x_34_);
return v___x_35_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_alter___at___00__private_Lean_IdentifierSuggestion_0__Lean_mkExistingToIncorrect_spec__5___redArg___lam__0___boxed(lean_object* v_snd_38_, lean_object* v_old_39_){
_start:
{
lean_object* v_res_40_; 
v_res_40_ = l_Std_DTreeMap_Internal_Impl_Const_alter___at___00__private_Lean_IdentifierSuggestion_0__Lean_mkExistingToIncorrect_spec__5___redArg___lam__0(v_snd_38_, v_old_39_);
lean_dec_ref(v_snd_38_);
return v_res_40_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_alter___at___00__private_Lean_IdentifierSuggestion_0__Lean_mkExistingToIncorrect_spec__5___redArg(lean_object* v_snd_41_, lean_object* v_k_42_, lean_object* v_t_43_){
_start:
{
if (lean_obj_tag(v_t_43_) == 0)
{
lean_object* v_size_44_; lean_object* v_k_45_; lean_object* v_v_46_; lean_object* v_l_47_; lean_object* v_r_48_; lean_object* v___x_50_; uint8_t v_isShared_51_; uint8_t v_isSharedCheck_63_; 
v_size_44_ = lean_ctor_get(v_t_43_, 0);
v_k_45_ = lean_ctor_get(v_t_43_, 1);
v_v_46_ = lean_ctor_get(v_t_43_, 2);
v_l_47_ = lean_ctor_get(v_t_43_, 3);
v_r_48_ = lean_ctor_get(v_t_43_, 4);
v_isSharedCheck_63_ = !lean_is_exclusive(v_t_43_);
if (v_isSharedCheck_63_ == 0)
{
v___x_50_ = v_t_43_;
v_isShared_51_ = v_isSharedCheck_63_;
goto v_resetjp_49_;
}
else
{
lean_inc(v_r_48_);
lean_inc(v_l_47_);
lean_inc(v_v_46_);
lean_inc(v_k_45_);
lean_inc(v_size_44_);
lean_dec(v_t_43_);
v___x_50_ = lean_box(0);
v_isShared_51_ = v_isSharedCheck_63_;
goto v_resetjp_49_;
}
v_resetjp_49_:
{
uint8_t v___x_52_; 
v___x_52_ = l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(v_k_42_, v_k_45_);
switch(v___x_52_)
{
case 0:
{
lean_object* v_impl_53_; lean_object* v___x_54_; 
lean_del_object(v___x_50_);
lean_dec(v_size_44_);
v_impl_53_ = l_Std_DTreeMap_Internal_Impl_Const_alter___at___00__private_Lean_IdentifierSuggestion_0__Lean_mkExistingToIncorrect_spec__5___redArg(v_snd_41_, v_k_42_, v_l_47_);
v___x_54_ = l_Std_DTreeMap_Internal_Impl_balance___redArg(v_k_45_, v_v_46_, v_impl_53_, v_r_48_);
return v___x_54_;
}
case 1:
{
lean_object* v___x_55_; lean_object* v___x_56_; lean_object* v_val_57_; lean_object* v___x_59_; 
lean_dec(v_k_45_);
v___x_55_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_55_, 0, v_v_46_);
v___x_56_ = l_Std_DTreeMap_Internal_Impl_Const_alter___at___00__private_Lean_IdentifierSuggestion_0__Lean_mkExistingToIncorrect_spec__5___redArg___lam__0(v_snd_41_, v___x_55_);
v_val_57_ = lean_ctor_get(v___x_56_, 0);
lean_inc(v_val_57_);
lean_dec(v___x_56_);
if (v_isShared_51_ == 0)
{
lean_ctor_set(v___x_50_, 2, v_val_57_);
lean_ctor_set(v___x_50_, 1, v_k_42_);
v___x_59_ = v___x_50_;
goto v_reusejp_58_;
}
else
{
lean_object* v_reuseFailAlloc_60_; 
v_reuseFailAlloc_60_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_60_, 0, v_size_44_);
lean_ctor_set(v_reuseFailAlloc_60_, 1, v_k_42_);
lean_ctor_set(v_reuseFailAlloc_60_, 2, v_val_57_);
lean_ctor_set(v_reuseFailAlloc_60_, 3, v_l_47_);
lean_ctor_set(v_reuseFailAlloc_60_, 4, v_r_48_);
v___x_59_ = v_reuseFailAlloc_60_;
goto v_reusejp_58_;
}
v_reusejp_58_:
{
return v___x_59_;
}
}
default: 
{
lean_object* v_impl_61_; lean_object* v___x_62_; 
lean_del_object(v___x_50_);
lean_dec(v_size_44_);
v_impl_61_ = l_Std_DTreeMap_Internal_Impl_Const_alter___at___00__private_Lean_IdentifierSuggestion_0__Lean_mkExistingToIncorrect_spec__5___redArg(v_snd_41_, v_k_42_, v_r_48_);
v___x_62_ = l_Std_DTreeMap_Internal_Impl_balance___redArg(v_k_45_, v_v_46_, v_l_47_, v_impl_61_);
return v___x_62_;
}
}
}
}
else
{
lean_object* v___x_64_; lean_object* v___x_65_; lean_object* v_val_66_; lean_object* v___x_67_; lean_object* v___x_68_; 
v___x_64_ = lean_box(0);
v___x_65_ = l_Std_DTreeMap_Internal_Impl_Const_alter___at___00__private_Lean_IdentifierSuggestion_0__Lean_mkExistingToIncorrect_spec__5___redArg___lam__0(v_snd_41_, v___x_64_);
v_val_66_ = lean_ctor_get(v___x_65_, 0);
lean_inc(v_val_66_);
lean_dec(v___x_65_);
v___x_67_ = lean_unsigned_to_nat(1u);
v___x_68_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_68_, 0, v___x_67_);
lean_ctor_set(v___x_68_, 1, v_k_42_);
lean_ctor_set(v___x_68_, 2, v_val_66_);
lean_ctor_set(v___x_68_, 3, v_t_43_);
lean_ctor_set(v___x_68_, 4, v_t_43_);
return v___x_68_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_alter___at___00__private_Lean_IdentifierSuggestion_0__Lean_mkExistingToIncorrect_spec__5___redArg___boxed(lean_object* v_snd_69_, lean_object* v_k_70_, lean_object* v_t_71_){
_start:
{
lean_object* v_res_72_; 
v_res_72_ = l_Std_DTreeMap_Internal_Impl_Const_alter___at___00__private_Lean_IdentifierSuggestion_0__Lean_mkExistingToIncorrect_spec__5___redArg(v_snd_69_, v_k_70_, v_t_71_);
lean_dec_ref(v_snd_69_);
return v_res_72_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_IdentifierSuggestion_0__Lean_mkExistingToIncorrect___lam__0(lean_object* v_table_73_, lean_object* v_x_74_){
_start:
{
lean_object* v_fst_75_; lean_object* v_snd_76_; lean_object* v___x_77_; 
v_fst_75_ = lean_ctor_get(v_x_74_, 0);
lean_inc(v_fst_75_);
v_snd_76_ = lean_ctor_get(v_x_74_, 1);
lean_inc(v_snd_76_);
lean_dec_ref(v_x_74_);
v___x_77_ = l_Std_DTreeMap_Internal_Impl_Const_alter___at___00__private_Lean_IdentifierSuggestion_0__Lean_mkExistingToIncorrect_spec__5___redArg(v_snd_76_, v_fst_75_, v_table_73_);
lean_dec(v_snd_76_);
return v___x_77_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_IdentifierSuggestion_0__Lean_mkExistingToIncorrect_spec__3___redArg___lam__0(lean_object* v_a_78_, lean_object* v_b_79_){
_start:
{
lean_object* v_fst_80_; lean_object* v_fst_81_; uint8_t v___x_82_; 
v_fst_80_ = lean_ctor_get(v_a_78_, 0);
v_fst_81_ = lean_ctor_get(v_b_79_, 0);
v___x_82_ = l_Lean_Name_quickLt(v_fst_80_, v_fst_81_);
return v___x_82_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_IdentifierSuggestion_0__Lean_mkExistingToIncorrect_spec__3___redArg___lam__0___boxed(lean_object* v_a_83_, lean_object* v_b_84_){
_start:
{
uint8_t v_res_85_; lean_object* v_r_86_; 
v_res_85_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_IdentifierSuggestion_0__Lean_mkExistingToIncorrect_spec__3___redArg___lam__0(v_a_83_, v_b_84_);
lean_dec_ref(v_b_84_);
lean_dec_ref(v_a_83_);
v_r_86_ = lean_box(v_res_85_);
return v_r_86_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_IdentifierSuggestion_0__Lean_mkExistingToIncorrect_spec__3_spec__5___redArg(lean_object* v_hi_87_, lean_object* v_pivot_88_, lean_object* v_as_89_, lean_object* v_i_90_, lean_object* v_k_91_){
_start:
{
uint8_t v___x_92_; 
v___x_92_ = lean_nat_dec_lt(v_k_91_, v_hi_87_);
if (v___x_92_ == 0)
{
lean_object* v___x_93_; lean_object* v___x_94_; 
lean_dec(v_k_91_);
v___x_93_ = lean_array_fswap(v_as_89_, v_i_90_, v_hi_87_);
v___x_94_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_94_, 0, v_i_90_);
lean_ctor_set(v___x_94_, 1, v___x_93_);
return v___x_94_;
}
else
{
lean_object* v___x_95_; lean_object* v_fst_96_; lean_object* v_fst_97_; uint8_t v___x_98_; 
v___x_95_ = lean_array_fget_borrowed(v_as_89_, v_k_91_);
v_fst_96_ = lean_ctor_get(v___x_95_, 0);
v_fst_97_ = lean_ctor_get(v_pivot_88_, 0);
v___x_98_ = l_Lean_Name_quickLt(v_fst_96_, v_fst_97_);
if (v___x_98_ == 0)
{
lean_object* v___x_99_; lean_object* v___x_100_; 
v___x_99_ = lean_unsigned_to_nat(1u);
v___x_100_ = lean_nat_add(v_k_91_, v___x_99_);
lean_dec(v_k_91_);
v_k_91_ = v___x_100_;
goto _start;
}
else
{
lean_object* v___x_102_; lean_object* v___x_103_; lean_object* v___x_104_; lean_object* v___x_105_; 
v___x_102_ = lean_array_fswap(v_as_89_, v_i_90_, v_k_91_);
v___x_103_ = lean_unsigned_to_nat(1u);
v___x_104_ = lean_nat_add(v_i_90_, v___x_103_);
lean_dec(v_i_90_);
v___x_105_ = lean_nat_add(v_k_91_, v___x_103_);
lean_dec(v_k_91_);
v_as_89_ = v___x_102_;
v_i_90_ = v___x_104_;
v_k_91_ = v___x_105_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_IdentifierSuggestion_0__Lean_mkExistingToIncorrect_spec__3_spec__5___redArg___boxed(lean_object* v_hi_107_, lean_object* v_pivot_108_, lean_object* v_as_109_, lean_object* v_i_110_, lean_object* v_k_111_){
_start:
{
lean_object* v_res_112_; 
v_res_112_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_IdentifierSuggestion_0__Lean_mkExistingToIncorrect_spec__3_spec__5___redArg(v_hi_107_, v_pivot_108_, v_as_109_, v_i_110_, v_k_111_);
lean_dec_ref(v_pivot_108_);
lean_dec(v_hi_107_);
return v_res_112_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_IdentifierSuggestion_0__Lean_mkExistingToIncorrect_spec__3___redArg(lean_object* v_n_113_, lean_object* v_as_114_, lean_object* v_lo_115_, lean_object* v_hi_116_){
_start:
{
lean_object* v___y_118_; uint8_t v___x_128_; 
v___x_128_ = lean_nat_dec_lt(v_lo_115_, v_hi_116_);
if (v___x_128_ == 0)
{
lean_dec(v_lo_115_);
return v_as_114_;
}
else
{
lean_object* v___x_129_; lean_object* v___x_130_; lean_object* v_mid_131_; lean_object* v___y_133_; lean_object* v___y_139_; lean_object* v___x_144_; lean_object* v___x_145_; uint8_t v___x_146_; 
v___x_129_ = lean_nat_add(v_lo_115_, v_hi_116_);
v___x_130_ = lean_unsigned_to_nat(1u);
v_mid_131_ = lean_nat_shiftr(v___x_129_, v___x_130_);
lean_dec(v___x_129_);
v___x_144_ = lean_array_fget_borrowed(v_as_114_, v_mid_131_);
v___x_145_ = lean_array_fget_borrowed(v_as_114_, v_lo_115_);
v___x_146_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_IdentifierSuggestion_0__Lean_mkExistingToIncorrect_spec__3___redArg___lam__0(v___x_144_, v___x_145_);
if (v___x_146_ == 0)
{
v___y_139_ = v_as_114_;
goto v___jp_138_;
}
else
{
lean_object* v___x_147_; 
v___x_147_ = lean_array_fswap(v_as_114_, v_lo_115_, v_mid_131_);
v___y_139_ = v___x_147_;
goto v___jp_138_;
}
v___jp_132_:
{
lean_object* v___x_134_; lean_object* v___x_135_; uint8_t v___x_136_; 
v___x_134_ = lean_array_fget_borrowed(v___y_133_, v_mid_131_);
v___x_135_ = lean_array_fget_borrowed(v___y_133_, v_hi_116_);
v___x_136_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_IdentifierSuggestion_0__Lean_mkExistingToIncorrect_spec__3___redArg___lam__0(v___x_134_, v___x_135_);
if (v___x_136_ == 0)
{
lean_dec(v_mid_131_);
v___y_118_ = v___y_133_;
goto v___jp_117_;
}
else
{
lean_object* v___x_137_; 
v___x_137_ = lean_array_fswap(v___y_133_, v_mid_131_, v_hi_116_);
lean_dec(v_mid_131_);
v___y_118_ = v___x_137_;
goto v___jp_117_;
}
}
v___jp_138_:
{
lean_object* v___x_140_; lean_object* v___x_141_; uint8_t v___x_142_; 
v___x_140_ = lean_array_fget_borrowed(v___y_139_, v_hi_116_);
v___x_141_ = lean_array_fget_borrowed(v___y_139_, v_lo_115_);
v___x_142_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_IdentifierSuggestion_0__Lean_mkExistingToIncorrect_spec__3___redArg___lam__0(v___x_140_, v___x_141_);
if (v___x_142_ == 0)
{
v___y_133_ = v___y_139_;
goto v___jp_132_;
}
else
{
lean_object* v___x_143_; 
v___x_143_ = lean_array_fswap(v___y_139_, v_lo_115_, v_hi_116_);
v___y_133_ = v___x_143_;
goto v___jp_132_;
}
}
}
v___jp_117_:
{
lean_object* v_pivot_119_; lean_object* v___x_120_; lean_object* v_fst_121_; lean_object* v_snd_122_; uint8_t v___x_123_; 
v_pivot_119_ = lean_array_fget(v___y_118_, v_hi_116_);
lean_inc_n(v_lo_115_, 2);
v___x_120_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_IdentifierSuggestion_0__Lean_mkExistingToIncorrect_spec__3_spec__5___redArg(v_hi_116_, v_pivot_119_, v___y_118_, v_lo_115_, v_lo_115_);
lean_dec(v_pivot_119_);
v_fst_121_ = lean_ctor_get(v___x_120_, 0);
lean_inc(v_fst_121_);
v_snd_122_ = lean_ctor_get(v___x_120_, 1);
lean_inc(v_snd_122_);
lean_dec_ref(v___x_120_);
v___x_123_ = lean_nat_dec_le(v_hi_116_, v_fst_121_);
if (v___x_123_ == 0)
{
lean_object* v___x_124_; lean_object* v___x_125_; lean_object* v___x_126_; 
v___x_124_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_IdentifierSuggestion_0__Lean_mkExistingToIncorrect_spec__3___redArg(v_n_113_, v_snd_122_, v_lo_115_, v_fst_121_);
v___x_125_ = lean_unsigned_to_nat(1u);
v___x_126_ = lean_nat_add(v_fst_121_, v___x_125_);
lean_dec(v_fst_121_);
v_as_114_ = v___x_124_;
v_lo_115_ = v___x_126_;
goto _start;
}
else
{
lean_dec(v_fst_121_);
lean_dec(v_lo_115_);
return v_snd_122_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_IdentifierSuggestion_0__Lean_mkExistingToIncorrect_spec__3___redArg___boxed(lean_object* v_n_148_, lean_object* v_as_149_, lean_object* v_lo_150_, lean_object* v_hi_151_){
_start:
{
lean_object* v_res_152_; 
v_res_152_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_IdentifierSuggestion_0__Lean_mkExistingToIncorrect_spec__3___redArg(v_n_148_, v_as_149_, v_lo_150_, v_hi_151_);
lean_dec(v_hi_151_);
lean_dec(v_n_148_);
return v_res_152_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_IdentifierSuggestion_0__Lean_mkExistingToIncorrect_spec__0_spec__0(lean_object* v_init_153_, lean_object* v_x_154_){
_start:
{
if (lean_obj_tag(v_x_154_) == 0)
{
lean_object* v_k_155_; lean_object* v_l_156_; lean_object* v_r_157_; lean_object* v___x_158_; lean_object* v___x_159_; 
v_k_155_ = lean_ctor_get(v_x_154_, 1);
lean_inc(v_k_155_);
v_l_156_ = lean_ctor_get(v_x_154_, 3);
lean_inc(v_l_156_);
v_r_157_ = lean_ctor_get(v_x_154_, 4);
lean_inc(v_r_157_);
lean_dec_ref_known(v_x_154_, 5);
v___x_158_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_IdentifierSuggestion_0__Lean_mkExistingToIncorrect_spec__0_spec__0(v_init_153_, v_l_156_);
v___x_159_ = lean_array_push(v___x_158_, v_k_155_);
v_init_153_ = v___x_159_;
v_x_154_ = v_r_157_;
goto _start;
}
else
{
return v_init_153_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_IdentifierSuggestion_0__Lean_mkExistingToIncorrect_spec__2(size_t v_sz_161_, size_t v_i_162_, lean_object* v_bs_163_){
_start:
{
uint8_t v___x_164_; 
v___x_164_ = lean_usize_dec_lt(v_i_162_, v_sz_161_);
if (v___x_164_ == 0)
{
lean_object* v___x_165_; 
v___x_165_ = l_unsafeCast___redArg(v_bs_163_);
lean_dec_ref(v_bs_163_);
return v___x_165_;
}
else
{
lean_object* v_v_166_; lean_object* v___x_167_; lean_object* v_fst_168_; lean_object* v_snd_169_; lean_object* v___x_171_; uint8_t v_isShared_172_; uint8_t v_isSharedCheck_188_; 
v_v_166_ = lean_array_uget_borrowed(v_bs_163_, v_i_162_);
v___x_167_ = l_unsafeCast___redArg(v_v_166_);
v_fst_168_ = lean_ctor_get(v___x_167_, 0);
v_snd_169_ = lean_ctor_get(v___x_167_, 1);
v_isSharedCheck_188_ = !lean_is_exclusive(v___x_167_);
if (v_isSharedCheck_188_ == 0)
{
v___x_171_ = v___x_167_;
v_isShared_172_ = v_isSharedCheck_188_;
goto v_resetjp_170_;
}
else
{
lean_inc(v_snd_169_);
lean_inc(v_fst_168_);
lean_dec(v___x_167_);
v___x_171_ = lean_box(0);
v_isShared_172_ = v_isSharedCheck_188_;
goto v_resetjp_170_;
}
v_resetjp_170_:
{
lean_object* v___x_173_; lean_object* v_bs_x27_174_; lean_object* v___y_176_; 
v___x_173_ = lean_unsigned_to_nat(0u);
v_bs_x27_174_ = lean_array_uset(v_bs_163_, v_i_162_, v___x_173_);
if (lean_obj_tag(v_snd_169_) == 0)
{
lean_object* v_size_187_; 
v_size_187_ = lean_ctor_get(v_snd_169_, 0);
lean_inc(v_size_187_);
v___y_176_ = v_size_187_;
goto v___jp_175_;
}
else
{
v___y_176_ = v___x_173_;
goto v___jp_175_;
}
v___jp_175_:
{
lean_object* v___x_177_; lean_object* v___x_178_; lean_object* v___x_180_; 
v___x_177_ = lean_mk_empty_array_with_capacity(v___y_176_);
lean_dec(v___y_176_);
v___x_178_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_IdentifierSuggestion_0__Lean_mkExistingToIncorrect_spec__0_spec__0(v___x_177_, v_snd_169_);
if (v_isShared_172_ == 0)
{
lean_ctor_set(v___x_171_, 1, v___x_178_);
v___x_180_ = v___x_171_;
goto v_reusejp_179_;
}
else
{
lean_object* v_reuseFailAlloc_186_; 
v_reuseFailAlloc_186_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_186_, 0, v_fst_168_);
lean_ctor_set(v_reuseFailAlloc_186_, 1, v___x_178_);
v___x_180_ = v_reuseFailAlloc_186_;
goto v_reusejp_179_;
}
v_reusejp_179_:
{
size_t v___x_181_; size_t v___x_182_; lean_object* v___x_183_; lean_object* v___x_184_; 
v___x_181_ = ((size_t)1ULL);
v___x_182_ = lean_usize_add(v_i_162_, v___x_181_);
v___x_183_ = l_unsafeCast___redArg(v___x_180_);
lean_dec_ref(v___x_180_);
v___x_184_ = lean_array_uset(v_bs_x27_174_, v_i_162_, v___x_183_);
v_i_162_ = v___x_182_;
v_bs_163_ = v___x_184_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_IdentifierSuggestion_0__Lean_mkExistingToIncorrect_spec__2___boxed(lean_object* v_sz_189_, lean_object* v_i_190_, lean_object* v_bs_191_){
_start:
{
size_t v_sz_boxed_192_; size_t v_i_boxed_193_; lean_object* v_res_194_; 
v_sz_boxed_192_ = lean_unbox_usize(v_sz_189_);
lean_dec(v_sz_189_);
v_i_boxed_193_ = lean_unbox_usize(v_i_190_);
lean_dec(v_i_190_);
v_res_194_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_IdentifierSuggestion_0__Lean_mkExistingToIncorrect_spec__2(v_sz_boxed_192_, v_i_boxed_193_, v_bs_191_);
return v_res_194_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_IdentifierSuggestion_0__Lean_mkExistingToIncorrect_spec__1_spec__2(lean_object* v_init_195_, lean_object* v_x_196_){
_start:
{
if (lean_obj_tag(v_x_196_) == 0)
{
lean_object* v_k_197_; lean_object* v_v_198_; lean_object* v_l_199_; lean_object* v_r_200_; lean_object* v___x_201_; lean_object* v___x_202_; lean_object* v___x_203_; 
v_k_197_ = lean_ctor_get(v_x_196_, 1);
v_v_198_ = lean_ctor_get(v_x_196_, 2);
v_l_199_ = lean_ctor_get(v_x_196_, 3);
v_r_200_ = lean_ctor_get(v_x_196_, 4);
v___x_201_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_IdentifierSuggestion_0__Lean_mkExistingToIncorrect_spec__1_spec__2(v_init_195_, v_l_199_);
lean_inc(v_v_198_);
lean_inc(v_k_197_);
v___x_202_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_202_, 0, v_k_197_);
lean_ctor_set(v___x_202_, 1, v_v_198_);
v___x_203_ = lean_array_push(v___x_201_, v___x_202_);
v_init_195_ = v___x_203_;
v_x_196_ = v_r_200_;
goto _start;
}
else
{
return v_init_195_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_IdentifierSuggestion_0__Lean_mkExistingToIncorrect_spec__1_spec__2___boxed(lean_object* v_init_205_, lean_object* v_x_206_){
_start:
{
lean_object* v_res_207_; 
v_res_207_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_IdentifierSuggestion_0__Lean_mkExistingToIncorrect_spec__1_spec__2(v_init_205_, v_x_206_);
lean_dec(v_x_206_);
return v_res_207_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_IdentifierSuggestion_0__Lean_mkExistingToIncorrect___lam__1(lean_object* v_x_210_, lean_object* v_s_211_){
_start:
{
lean_object* v___x_212_; lean_object* v___x_213_; lean_object* v___x_214_; size_t v_sz_215_; size_t v___x_216_; lean_object* v___x_217_; lean_object* v___x_218_; lean_object* v___x_219_; lean_object* v___x_220_; lean_object* v___y_222_; lean_object* v___y_223_; uint8_t v___x_226_; 
v___x_212_ = lean_unsigned_to_nat(0u);
v___x_213_ = ((lean_object*)(l___private_Lean_IdentifierSuggestion_0__Lean_mkExistingToIncorrect___lam__1___closed__0));
v___x_214_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_IdentifierSuggestion_0__Lean_mkExistingToIncorrect_spec__1_spec__2(v___x_213_, v_s_211_);
v_sz_215_ = lean_array_size(v___x_214_);
v___x_216_ = ((size_t)0ULL);
v___x_217_ = l_unsafeCast___redArg(v___x_214_);
lean_dec_ref(v___x_214_);
v___x_218_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_IdentifierSuggestion_0__Lean_mkExistingToIncorrect_spec__2(v_sz_215_, v___x_216_, v___x_217_);
v___x_219_ = l_unsafeCast___redArg(v___x_218_);
lean_dec_ref(v___x_218_);
v___x_220_ = lean_array_get_size(v___x_219_);
v___x_226_ = lean_nat_dec_eq(v___x_220_, v___x_212_);
if (v___x_226_ == 0)
{
lean_object* v___x_227_; lean_object* v___x_228_; lean_object* v___y_230_; uint8_t v___x_232_; 
v___x_227_ = lean_unsigned_to_nat(1u);
v___x_228_ = lean_nat_sub(v___x_220_, v___x_227_);
v___x_232_ = lean_nat_dec_le(v___x_212_, v___x_228_);
if (v___x_232_ == 0)
{
lean_inc(v___x_228_);
v___y_230_ = v___x_228_;
goto v___jp_229_;
}
else
{
v___y_230_ = v___x_212_;
goto v___jp_229_;
}
v___jp_229_:
{
uint8_t v___x_231_; 
v___x_231_ = lean_nat_dec_le(v___y_230_, v___x_228_);
if (v___x_231_ == 0)
{
lean_dec(v___x_228_);
lean_inc(v___y_230_);
v___y_222_ = v___y_230_;
v___y_223_ = v___y_230_;
goto v___jp_221_;
}
else
{
v___y_222_ = v___y_230_;
v___y_223_ = v___x_228_;
goto v___jp_221_;
}
}
}
else
{
lean_object* v___x_233_; 
lean_inc_n(v___x_219_, 2);
v___x_233_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_233_, 0, v___x_219_);
lean_ctor_set(v___x_233_, 1, v___x_219_);
lean_ctor_set(v___x_233_, 2, v___x_219_);
return v___x_233_;
}
v___jp_221_:
{
lean_object* v___x_224_; lean_object* v___x_225_; 
v___x_224_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_IdentifierSuggestion_0__Lean_mkExistingToIncorrect_spec__3___redArg(v___x_220_, v___x_219_, v___y_222_, v___y_223_);
lean_dec(v___y_223_);
lean_inc_ref_n(v___x_224_, 2);
v___x_225_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_225_, 0, v___x_224_);
lean_ctor_set(v___x_225_, 1, v___x_224_);
lean_ctor_set(v___x_225_, 2, v___x_224_);
return v___x_225_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_IdentifierSuggestion_0__Lean_mkExistingToIncorrect___lam__1___boxed(lean_object* v_x_234_, lean_object* v_s_235_){
_start:
{
lean_object* v_res_236_; 
v_res_236_ = l___private_Lean_IdentifierSuggestion_0__Lean_mkExistingToIncorrect___lam__1(v_x_234_, v_s_235_);
lean_dec(v_s_235_);
lean_dec_ref(v_x_234_);
return v_res_236_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_IdentifierSuggestion_0__Lean_mkExistingToIncorrect___lam__2(lean_object* v_x_237_){
_start:
{
lean_object* v___x_238_; 
v___x_238_ = lean_box(0);
return v___x_238_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_IdentifierSuggestion_0__Lean_mkExistingToIncorrect___lam__2___boxed(lean_object* v_x_239_){
_start:
{
lean_object* v_res_240_; 
v_res_240_ = l___private_Lean_IdentifierSuggestion_0__Lean_mkExistingToIncorrect___lam__2(v_x_239_);
lean_dec(v_x_239_);
return v_res_240_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_IdentifierSuggestion_0__Lean_mkExistingToIncorrect___lam__3(lean_object* v_table_241_){
_start:
{
lean_object* v___x_242_; lean_object* v___x_243_; lean_object* v___x_244_; size_t v_sz_245_; size_t v___x_246_; lean_object* v___x_247_; lean_object* v___x_248_; lean_object* v___x_249_; lean_object* v___x_250_; uint8_t v___x_251_; 
v___x_242_ = lean_unsigned_to_nat(0u);
v___x_243_ = ((lean_object*)(l___private_Lean_IdentifierSuggestion_0__Lean_mkExistingToIncorrect___lam__1___closed__0));
v___x_244_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_IdentifierSuggestion_0__Lean_mkExistingToIncorrect_spec__1_spec__2(v___x_243_, v_table_241_);
v_sz_245_ = lean_array_size(v___x_244_);
v___x_246_ = ((size_t)0ULL);
v___x_247_ = l_unsafeCast___redArg(v___x_244_);
lean_dec_ref(v___x_244_);
v___x_248_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_IdentifierSuggestion_0__Lean_mkExistingToIncorrect_spec__2(v_sz_245_, v___x_246_, v___x_247_);
v___x_249_ = l_unsafeCast___redArg(v___x_248_);
lean_dec_ref(v___x_248_);
v___x_250_ = lean_array_get_size(v___x_249_);
v___x_251_ = lean_nat_dec_eq(v___x_250_, v___x_242_);
if (v___x_251_ == 0)
{
lean_object* v___x_252_; lean_object* v___x_253_; lean_object* v___y_255_; uint8_t v___x_259_; 
v___x_252_ = lean_unsigned_to_nat(1u);
v___x_253_ = lean_nat_sub(v___x_250_, v___x_252_);
v___x_259_ = lean_nat_dec_le(v___x_242_, v___x_253_);
if (v___x_259_ == 0)
{
lean_inc(v___x_253_);
v___y_255_ = v___x_253_;
goto v___jp_254_;
}
else
{
v___y_255_ = v___x_242_;
goto v___jp_254_;
}
v___jp_254_:
{
uint8_t v___x_256_; 
v___x_256_ = lean_nat_dec_le(v___y_255_, v___x_253_);
if (v___x_256_ == 0)
{
lean_object* v___x_257_; 
lean_dec(v___x_253_);
lean_inc(v___y_255_);
v___x_257_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_IdentifierSuggestion_0__Lean_mkExistingToIncorrect_spec__3___redArg(v___x_250_, v___x_249_, v___y_255_, v___y_255_);
lean_dec(v___y_255_);
return v___x_257_;
}
else
{
lean_object* v___x_258_; 
v___x_258_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_IdentifierSuggestion_0__Lean_mkExistingToIncorrect_spec__3___redArg(v___x_250_, v___x_249_, v___y_255_, v___x_253_);
lean_dec(v___x_253_);
return v___x_258_;
}
}
}
else
{
return v___x_249_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_IdentifierSuggestion_0__Lean_mkExistingToIncorrect___lam__3___boxed(lean_object* v_table_260_){
_start:
{
lean_object* v_res_261_; 
v_res_261_ = l___private_Lean_IdentifierSuggestion_0__Lean_mkExistingToIncorrect___lam__3(v_table_260_);
lean_dec(v_table_260_);
return v_res_261_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_IdentifierSuggestion_0__Lean_mkExistingToIncorrect___lam__4(lean_object* v___x_262_){
_start:
{
lean_object* v___x_264_; 
v___x_264_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_264_, 0, v___x_262_);
return v___x_264_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_IdentifierSuggestion_0__Lean_mkExistingToIncorrect___lam__4___boxed(lean_object* v___x_265_, lean_object* v___y_266_){
_start:
{
lean_object* v_res_267_; 
v_res_267_ = l___private_Lean_IdentifierSuggestion_0__Lean_mkExistingToIncorrect___lam__4(v___x_265_);
return v_res_267_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_IdentifierSuggestion_0__Lean_mkExistingToIncorrect___lam__5(lean_object* v___x_268_, lean_object* v_x_269_, lean_object* v___y_270_){
_start:
{
lean_object* v___x_272_; 
v___x_272_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_272_, 0, v___x_268_);
return v___x_272_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_IdentifierSuggestion_0__Lean_mkExistingToIncorrect___lam__5___boxed(lean_object* v___x_273_, lean_object* v_x_274_, lean_object* v___y_275_, lean_object* v___y_276_){
_start:
{
lean_object* v_res_277_; 
v_res_277_ = l___private_Lean_IdentifierSuggestion_0__Lean_mkExistingToIncorrect___lam__5(v___x_273_, v_x_274_, v___y_275_);
lean_dec_ref(v___y_275_);
lean_dec_ref(v_x_274_);
return v_res_277_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_IdentifierSuggestion_0__Lean_mkExistingToIncorrect(){
_start:
{
lean_object* v___x_306_; lean_object* v___x_307_; 
v___x_306_ = ((lean_object*)(l___private_Lean_IdentifierSuggestion_0__Lean_mkExistingToIncorrect___closed__11));
v___x_307_ = l_Lean_registerPersistentEnvExtensionUnsafe___redArg(v___x_306_);
return v___x_307_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_IdentifierSuggestion_0__Lean_mkExistingToIncorrect___boxed(lean_object* v_a_308_){
_start:
{
lean_object* v_res_309_; 
v_res_309_ = l___private_Lean_IdentifierSuggestion_0__Lean_mkExistingToIncorrect();
return v_res_309_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_IdentifierSuggestion_0__Lean_mkExistingToIncorrect_spec__0(lean_object* v_init_310_, lean_object* v_t_311_){
_start:
{
lean_object* v___x_312_; 
v___x_312_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_IdentifierSuggestion_0__Lean_mkExistingToIncorrect_spec__0_spec__0(v_init_310_, v_t_311_);
return v___x_312_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_IdentifierSuggestion_0__Lean_mkExistingToIncorrect_spec__1(lean_object* v_init_313_, lean_object* v_t_314_){
_start:
{
lean_object* v___x_315_; 
v___x_315_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_IdentifierSuggestion_0__Lean_mkExistingToIncorrect_spec__1_spec__2(v_init_313_, v_t_314_);
return v___x_315_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_IdentifierSuggestion_0__Lean_mkExistingToIncorrect_spec__1___boxed(lean_object* v_init_316_, lean_object* v_t_317_){
_start:
{
lean_object* v_res_318_; 
v_res_318_ = l_Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_IdentifierSuggestion_0__Lean_mkExistingToIncorrect_spec__1(v_init_316_, v_t_317_);
lean_dec(v_t_317_);
return v_res_318_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_IdentifierSuggestion_0__Lean_mkExistingToIncorrect_spec__3(lean_object* v_n_319_, lean_object* v_as_320_, lean_object* v_lo_321_, lean_object* v_hi_322_, lean_object* v_w_323_, lean_object* v_hlo_324_, lean_object* v_hhi_325_){
_start:
{
lean_object* v___x_326_; 
v___x_326_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_IdentifierSuggestion_0__Lean_mkExistingToIncorrect_spec__3___redArg(v_n_319_, v_as_320_, v_lo_321_, v_hi_322_);
return v___x_326_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_IdentifierSuggestion_0__Lean_mkExistingToIncorrect_spec__3___boxed(lean_object* v_n_327_, lean_object* v_as_328_, lean_object* v_lo_329_, lean_object* v_hi_330_, lean_object* v_w_331_, lean_object* v_hlo_332_, lean_object* v_hhi_333_){
_start:
{
lean_object* v_res_334_; 
v_res_334_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_IdentifierSuggestion_0__Lean_mkExistingToIncorrect_spec__3(v_n_327_, v_as_328_, v_lo_329_, v_hi_330_, v_w_331_, v_hlo_332_, v_hhi_333_);
lean_dec(v_hi_330_);
lean_dec(v_n_327_);
return v_res_334_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_alter___at___00__private_Lean_IdentifierSuggestion_0__Lean_mkExistingToIncorrect_spec__5(lean_object* v_snd_335_, lean_object* v_k_336_, lean_object* v_t_337_, lean_object* v_hl_338_){
_start:
{
lean_object* v___x_339_; 
v___x_339_ = l_Std_DTreeMap_Internal_Impl_Const_alter___at___00__private_Lean_IdentifierSuggestion_0__Lean_mkExistingToIncorrect_spec__5___redArg(v_snd_335_, v_k_336_, v_t_337_);
return v___x_339_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_alter___at___00__private_Lean_IdentifierSuggestion_0__Lean_mkExistingToIncorrect_spec__5___boxed(lean_object* v_snd_340_, lean_object* v_k_341_, lean_object* v_t_342_, lean_object* v_hl_343_){
_start:
{
lean_object* v_res_344_; 
v_res_344_ = l_Std_DTreeMap_Internal_Impl_Const_alter___at___00__private_Lean_IdentifierSuggestion_0__Lean_mkExistingToIncorrect_spec__5(v_snd_340_, v_k_341_, v_t_342_, v_hl_343_);
lean_dec_ref(v_snd_340_);
return v_res_344_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_IdentifierSuggestion_0__Lean_mkExistingToIncorrect_spec__3_spec__5(lean_object* v_n_345_, lean_object* v_lo_346_, lean_object* v_hi_347_, lean_object* v_hhi_348_, lean_object* v_pivot_349_, lean_object* v_as_350_, lean_object* v_i_351_, lean_object* v_k_352_, lean_object* v_ilo_353_, lean_object* v_ik_354_, lean_object* v_w_355_){
_start:
{
lean_object* v___x_356_; 
v___x_356_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_IdentifierSuggestion_0__Lean_mkExistingToIncorrect_spec__3_spec__5___redArg(v_hi_347_, v_pivot_349_, v_as_350_, v_i_351_, v_k_352_);
return v___x_356_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_IdentifierSuggestion_0__Lean_mkExistingToIncorrect_spec__3_spec__5___boxed(lean_object* v_n_357_, lean_object* v_lo_358_, lean_object* v_hi_359_, lean_object* v_hhi_360_, lean_object* v_pivot_361_, lean_object* v_as_362_, lean_object* v_i_363_, lean_object* v_k_364_, lean_object* v_ilo_365_, lean_object* v_ik_366_, lean_object* v_w_367_){
_start:
{
lean_object* v_res_368_; 
v_res_368_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_IdentifierSuggestion_0__Lean_mkExistingToIncorrect_spec__3_spec__5(v_n_357_, v_lo_358_, v_hi_359_, v_hhi_360_, v_pivot_361_, v_as_362_, v_i_363_, v_k_364_, v_ilo_365_, v_ik_366_, v_w_367_);
lean_dec_ref(v_pivot_361_);
lean_dec(v_hi_359_);
lean_dec(v_lo_358_);
lean_dec(v_n_357_);
return v_res_368_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_alter___at___00__private_Lean_IdentifierSuggestion_0__Lean_mkIncorrectToExisting_spec__0___redArg___lam__0(lean_object* v_fst_369_, lean_object* v_old_370_){
_start:
{
lean_object* v___y_372_; 
if (lean_obj_tag(v_old_370_) == 0)
{
lean_object* v___x_375_; 
v___x_375_ = l_Lean_NameSet_empty;
v___y_372_ = v___x_375_;
goto v___jp_371_;
}
else
{
lean_object* v_val_376_; 
v_val_376_ = lean_ctor_get(v_old_370_, 0);
lean_inc(v_val_376_);
lean_dec_ref_known(v_old_370_, 1);
v___y_372_ = v_val_376_;
goto v___jp_371_;
}
v___jp_371_:
{
lean_object* v___x_373_; lean_object* v___x_374_; 
v___x_373_ = l_Lean_NameSet_insert(v___y_372_, v_fst_369_);
v___x_374_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_374_, 0, v___x_373_);
return v___x_374_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_alter___at___00__private_Lean_IdentifierSuggestion_0__Lean_mkIncorrectToExisting_spec__0___redArg(lean_object* v_fst_377_, lean_object* v_k_378_, lean_object* v_t_379_){
_start:
{
if (lean_obj_tag(v_t_379_) == 0)
{
lean_object* v_size_380_; lean_object* v_k_381_; lean_object* v_v_382_; lean_object* v_l_383_; lean_object* v_r_384_; lean_object* v___x_386_; uint8_t v_isShared_387_; uint8_t v_isSharedCheck_399_; 
v_size_380_ = lean_ctor_get(v_t_379_, 0);
v_k_381_ = lean_ctor_get(v_t_379_, 1);
v_v_382_ = lean_ctor_get(v_t_379_, 2);
v_l_383_ = lean_ctor_get(v_t_379_, 3);
v_r_384_ = lean_ctor_get(v_t_379_, 4);
v_isSharedCheck_399_ = !lean_is_exclusive(v_t_379_);
if (v_isSharedCheck_399_ == 0)
{
v___x_386_ = v_t_379_;
v_isShared_387_ = v_isSharedCheck_399_;
goto v_resetjp_385_;
}
else
{
lean_inc(v_r_384_);
lean_inc(v_l_383_);
lean_inc(v_v_382_);
lean_inc(v_k_381_);
lean_inc(v_size_380_);
lean_dec(v_t_379_);
v___x_386_ = lean_box(0);
v_isShared_387_ = v_isSharedCheck_399_;
goto v_resetjp_385_;
}
v_resetjp_385_:
{
uint8_t v___x_388_; 
v___x_388_ = l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(v_k_378_, v_k_381_);
switch(v___x_388_)
{
case 0:
{
lean_object* v_impl_389_; lean_object* v___x_390_; 
lean_del_object(v___x_386_);
lean_dec(v_size_380_);
v_impl_389_ = l_Std_DTreeMap_Internal_Impl_Const_alter___at___00__private_Lean_IdentifierSuggestion_0__Lean_mkIncorrectToExisting_spec__0___redArg(v_fst_377_, v_k_378_, v_l_383_);
v___x_390_ = l_Std_DTreeMap_Internal_Impl_balance___redArg(v_k_381_, v_v_382_, v_impl_389_, v_r_384_);
return v___x_390_;
}
case 1:
{
lean_object* v___x_391_; lean_object* v___x_392_; lean_object* v_val_393_; lean_object* v___x_395_; 
lean_dec(v_k_381_);
v___x_391_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_391_, 0, v_v_382_);
v___x_392_ = l_Std_DTreeMap_Internal_Impl_Const_alter___at___00__private_Lean_IdentifierSuggestion_0__Lean_mkIncorrectToExisting_spec__0___redArg___lam__0(v_fst_377_, v___x_391_);
v_val_393_ = lean_ctor_get(v___x_392_, 0);
lean_inc(v_val_393_);
lean_dec(v___x_392_);
if (v_isShared_387_ == 0)
{
lean_ctor_set(v___x_386_, 2, v_val_393_);
lean_ctor_set(v___x_386_, 1, v_k_378_);
v___x_395_ = v___x_386_;
goto v_reusejp_394_;
}
else
{
lean_object* v_reuseFailAlloc_396_; 
v_reuseFailAlloc_396_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_396_, 0, v_size_380_);
lean_ctor_set(v_reuseFailAlloc_396_, 1, v_k_378_);
lean_ctor_set(v_reuseFailAlloc_396_, 2, v_val_393_);
lean_ctor_set(v_reuseFailAlloc_396_, 3, v_l_383_);
lean_ctor_set(v_reuseFailAlloc_396_, 4, v_r_384_);
v___x_395_ = v_reuseFailAlloc_396_;
goto v_reusejp_394_;
}
v_reusejp_394_:
{
return v___x_395_;
}
}
default: 
{
lean_object* v_impl_397_; lean_object* v___x_398_; 
lean_del_object(v___x_386_);
lean_dec(v_size_380_);
v_impl_397_ = l_Std_DTreeMap_Internal_Impl_Const_alter___at___00__private_Lean_IdentifierSuggestion_0__Lean_mkIncorrectToExisting_spec__0___redArg(v_fst_377_, v_k_378_, v_r_384_);
v___x_398_ = l_Std_DTreeMap_Internal_Impl_balance___redArg(v_k_381_, v_v_382_, v_l_383_, v_impl_397_);
return v___x_398_;
}
}
}
}
else
{
lean_object* v___x_400_; lean_object* v___x_401_; lean_object* v_val_402_; lean_object* v___x_403_; lean_object* v___x_404_; 
v___x_400_ = lean_box(0);
v___x_401_ = l_Std_DTreeMap_Internal_Impl_Const_alter___at___00__private_Lean_IdentifierSuggestion_0__Lean_mkIncorrectToExisting_spec__0___redArg___lam__0(v_fst_377_, v___x_400_);
v_val_402_ = lean_ctor_get(v___x_401_, 0);
lean_inc(v_val_402_);
lean_dec(v___x_401_);
v___x_403_ = lean_unsigned_to_nat(1u);
v___x_404_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_404_, 0, v___x_403_);
lean_ctor_set(v___x_404_, 1, v_k_378_);
lean_ctor_set(v___x_404_, 2, v_val_402_);
lean_ctor_set(v___x_404_, 3, v_t_379_);
lean_ctor_set(v___x_404_, 4, v_t_379_);
return v___x_404_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_IdentifierSuggestion_0__Lean_mkIncorrectToExisting_spec__1(lean_object* v_fst_405_, lean_object* v_as_406_, size_t v_i_407_, size_t v_stop_408_, lean_object* v_b_409_){
_start:
{
uint8_t v___x_410_; 
v___x_410_ = lean_usize_dec_eq(v_i_407_, v_stop_408_);
if (v___x_410_ == 0)
{
lean_object* v___x_411_; lean_object* v___x_412_; size_t v___x_413_; size_t v___x_414_; 
v___x_411_ = lean_array_uget_borrowed(v_as_406_, v_i_407_);
lean_inc(v___x_411_);
lean_inc(v_fst_405_);
v___x_412_ = l_Std_DTreeMap_Internal_Impl_Const_alter___at___00__private_Lean_IdentifierSuggestion_0__Lean_mkIncorrectToExisting_spec__0___redArg(v_fst_405_, v___x_411_, v_b_409_);
v___x_413_ = ((size_t)1ULL);
v___x_414_ = lean_usize_add(v_i_407_, v___x_413_);
v_i_407_ = v___x_414_;
v_b_409_ = v___x_412_;
goto _start;
}
else
{
lean_dec(v_fst_405_);
return v_b_409_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_IdentifierSuggestion_0__Lean_mkIncorrectToExisting_spec__1___boxed(lean_object* v_fst_416_, lean_object* v_as_417_, lean_object* v_i_418_, lean_object* v_stop_419_, lean_object* v_b_420_){
_start:
{
size_t v_i_boxed_421_; size_t v_stop_boxed_422_; lean_object* v_res_423_; 
v_i_boxed_421_ = lean_unbox_usize(v_i_418_);
lean_dec(v_i_418_);
v_stop_boxed_422_ = lean_unbox_usize(v_stop_419_);
lean_dec(v_stop_419_);
v_res_423_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_IdentifierSuggestion_0__Lean_mkIncorrectToExisting_spec__1(v_fst_416_, v_as_417_, v_i_boxed_421_, v_stop_boxed_422_, v_b_420_);
lean_dec_ref(v_as_417_);
return v_res_423_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_IdentifierSuggestion_0__Lean_mkIncorrectToExisting___lam__0(lean_object* v_table_424_, lean_object* v_x_425_){
_start:
{
lean_object* v_fst_426_; lean_object* v_snd_427_; lean_object* v___x_428_; lean_object* v___x_429_; uint8_t v___x_430_; 
v_fst_426_ = lean_ctor_get(v_x_425_, 0);
lean_inc(v_fst_426_);
v_snd_427_ = lean_ctor_get(v_x_425_, 1);
lean_inc(v_snd_427_);
lean_dec_ref(v_x_425_);
v___x_428_ = lean_unsigned_to_nat(0u);
v___x_429_ = lean_array_get_size(v_snd_427_);
v___x_430_ = lean_nat_dec_lt(v___x_428_, v___x_429_);
if (v___x_430_ == 0)
{
lean_dec(v_snd_427_);
lean_dec(v_fst_426_);
return v_table_424_;
}
else
{
uint8_t v___x_431_; 
v___x_431_ = lean_nat_dec_le(v___x_429_, v___x_429_);
if (v___x_431_ == 0)
{
if (v___x_430_ == 0)
{
lean_dec(v_snd_427_);
lean_dec(v_fst_426_);
return v_table_424_;
}
else
{
size_t v___x_432_; size_t v___x_433_; lean_object* v___x_434_; 
v___x_432_ = ((size_t)0ULL);
v___x_433_ = lean_usize_of_nat(v___x_429_);
v___x_434_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_IdentifierSuggestion_0__Lean_mkIncorrectToExisting_spec__1(v_fst_426_, v_snd_427_, v___x_432_, v___x_433_, v_table_424_);
lean_dec(v_snd_427_);
return v___x_434_;
}
}
else
{
size_t v___x_435_; size_t v___x_436_; lean_object* v___x_437_; 
v___x_435_ = ((size_t)0ULL);
v___x_436_ = lean_usize_of_nat(v___x_429_);
v___x_437_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_IdentifierSuggestion_0__Lean_mkIncorrectToExisting_spec__1(v_fst_426_, v_snd_427_, v___x_435_, v___x_436_, v_table_424_);
lean_dec(v_snd_427_);
return v___x_437_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_IdentifierSuggestion_0__Lean_mkIncorrectToExisting(){
_start:
{
lean_object* v___x_457_; lean_object* v___x_458_; 
v___x_457_ = ((lean_object*)(l___private_Lean_IdentifierSuggestion_0__Lean_mkIncorrectToExisting___closed__4));
v___x_458_ = l_Lean_registerPersistentEnvExtensionUnsafe___redArg(v___x_457_);
return v___x_458_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_IdentifierSuggestion_0__Lean_mkIncorrectToExisting___boxed(lean_object* v_a_459_){
_start:
{
lean_object* v_res_460_; 
v_res_460_ = l___private_Lean_IdentifierSuggestion_0__Lean_mkIncorrectToExisting();
return v_res_460_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_alter___at___00__private_Lean_IdentifierSuggestion_0__Lean_mkIncorrectToExisting_spec__0(lean_object* v_fst_461_, lean_object* v_k_462_, lean_object* v_t_463_, lean_object* v_hl_464_){
_start:
{
lean_object* v___x_465_; 
v___x_465_ = l_Std_DTreeMap_Internal_Impl_Const_alter___at___00__private_Lean_IdentifierSuggestion_0__Lean_mkIncorrectToExisting_spec__0___redArg(v_fst_461_, v_k_462_, v_t_463_);
return v___x_465_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_IdentifierSuggestion_0__Lean_initFn_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2__spec__0_spec__0___closed__0(void){
_start:
{
lean_object* v___x_466_; 
v___x_466_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_466_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_IdentifierSuggestion_0__Lean_initFn_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2__spec__0_spec__0___closed__1(void){
_start:
{
lean_object* v___x_467_; lean_object* v___x_468_; 
v___x_467_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_IdentifierSuggestion_0__Lean_initFn_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2__spec__0_spec__0___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_IdentifierSuggestion_0__Lean_initFn_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2__spec__0_spec__0___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_IdentifierSuggestion_0__Lean_initFn_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2__spec__0_spec__0___closed__0);
v___x_468_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_468_, 0, v___x_467_);
return v___x_468_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_IdentifierSuggestion_0__Lean_initFn_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2__spec__0_spec__0___closed__2(void){
_start:
{
lean_object* v___x_469_; lean_object* v___x_470_; lean_object* v___x_471_; 
v___x_469_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_IdentifierSuggestion_0__Lean_initFn_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2__spec__0_spec__0___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_IdentifierSuggestion_0__Lean_initFn_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2__spec__0_spec__0___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_IdentifierSuggestion_0__Lean_initFn_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2__spec__0_spec__0___closed__1);
v___x_470_ = lean_unsigned_to_nat(0u);
v___x_471_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_471_, 0, v___x_470_);
lean_ctor_set(v___x_471_, 1, v___x_470_);
lean_ctor_set(v___x_471_, 2, v___x_470_);
lean_ctor_set(v___x_471_, 3, v___x_470_);
lean_ctor_set(v___x_471_, 4, v___x_469_);
lean_ctor_set(v___x_471_, 5, v___x_469_);
lean_ctor_set(v___x_471_, 6, v___x_469_);
lean_ctor_set(v___x_471_, 7, v___x_469_);
lean_ctor_set(v___x_471_, 8, v___x_469_);
lean_ctor_set(v___x_471_, 9, v___x_469_);
lean_ctor_set(v___x_471_, 10, v___x_469_);
return v___x_471_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_IdentifierSuggestion_0__Lean_initFn_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2__spec__0_spec__0___closed__3(void){
_start:
{
lean_object* v___x_472_; lean_object* v___x_473_; lean_object* v___x_474_; 
v___x_472_ = lean_unsigned_to_nat(32u);
v___x_473_ = lean_mk_empty_array_with_capacity(v___x_472_);
v___x_474_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_474_, 0, v___x_473_);
return v___x_474_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_IdentifierSuggestion_0__Lean_initFn_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2__spec__0_spec__0___closed__4(void){
_start:
{
size_t v___x_475_; lean_object* v___x_476_; lean_object* v___x_477_; lean_object* v___x_478_; lean_object* v___x_479_; lean_object* v___x_480_; 
v___x_475_ = ((size_t)5ULL);
v___x_476_ = lean_unsigned_to_nat(0u);
v___x_477_ = lean_unsigned_to_nat(32u);
v___x_478_ = lean_mk_empty_array_with_capacity(v___x_477_);
v___x_479_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_IdentifierSuggestion_0__Lean_initFn_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2__spec__0_spec__0___closed__3, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_IdentifierSuggestion_0__Lean_initFn_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2__spec__0_spec__0___closed__3_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_IdentifierSuggestion_0__Lean_initFn_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2__spec__0_spec__0___closed__3);
v___x_480_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_480_, 0, v___x_479_);
lean_ctor_set(v___x_480_, 1, v___x_478_);
lean_ctor_set(v___x_480_, 2, v___x_476_);
lean_ctor_set(v___x_480_, 3, v___x_476_);
lean_ctor_set_usize(v___x_480_, 4, v___x_475_);
return v___x_480_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_IdentifierSuggestion_0__Lean_initFn_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2__spec__0_spec__0___closed__5(void){
_start:
{
lean_object* v___x_481_; lean_object* v___x_482_; lean_object* v___x_483_; lean_object* v___x_484_; 
v___x_481_ = lean_box(1);
v___x_482_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_IdentifierSuggestion_0__Lean_initFn_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2__spec__0_spec__0___closed__4, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_IdentifierSuggestion_0__Lean_initFn_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2__spec__0_spec__0___closed__4_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_IdentifierSuggestion_0__Lean_initFn_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2__spec__0_spec__0___closed__4);
v___x_483_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_IdentifierSuggestion_0__Lean_initFn_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2__spec__0_spec__0___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_IdentifierSuggestion_0__Lean_initFn_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2__spec__0_spec__0___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_IdentifierSuggestion_0__Lean_initFn_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2__spec__0_spec__0___closed__1);
v___x_484_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_484_, 0, v___x_483_);
lean_ctor_set(v___x_484_, 1, v___x_482_);
lean_ctor_set(v___x_484_, 2, v___x_481_);
return v___x_484_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_IdentifierSuggestion_0__Lean_initFn_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2__spec__0_spec__0(lean_object* v_msgData_485_, lean_object* v___y_486_, lean_object* v___y_487_){
_start:
{
lean_object* v___x_489_; lean_object* v_toCold_490_; lean_object* v_env_491_; lean_object* v_options_492_; lean_object* v___x_493_; lean_object* v___x_494_; lean_object* v___x_495_; lean_object* v___x_496_; lean_object* v___x_497_; 
v___x_489_ = lean_st_ref_get(v___y_487_);
v_toCold_490_ = lean_ctor_get(v___y_486_, 0);
v_env_491_ = lean_ctor_get(v___x_489_, 0);
lean_inc_ref(v_env_491_);
lean_dec(v___x_489_);
v_options_492_ = lean_ctor_get(v_toCold_490_, 2);
v___x_493_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_IdentifierSuggestion_0__Lean_initFn_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2__spec__0_spec__0___closed__2, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_IdentifierSuggestion_0__Lean_initFn_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2__spec__0_spec__0___closed__2_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_IdentifierSuggestion_0__Lean_initFn_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2__spec__0_spec__0___closed__2);
v___x_494_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_IdentifierSuggestion_0__Lean_initFn_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2__spec__0_spec__0___closed__5, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_IdentifierSuggestion_0__Lean_initFn_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2__spec__0_spec__0___closed__5_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_IdentifierSuggestion_0__Lean_initFn_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2__spec__0_spec__0___closed__5);
lean_inc_ref(v_options_492_);
v___x_495_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_495_, 0, v_env_491_);
lean_ctor_set(v___x_495_, 1, v___x_493_);
lean_ctor_set(v___x_495_, 2, v___x_494_);
lean_ctor_set(v___x_495_, 3, v_options_492_);
v___x_496_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_496_, 0, v___x_495_);
lean_ctor_set(v___x_496_, 1, v_msgData_485_);
v___x_497_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_497_, 0, v___x_496_);
return v___x_497_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_IdentifierSuggestion_0__Lean_initFn_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2__spec__0_spec__0___boxed(lean_object* v_msgData_498_, lean_object* v___y_499_, lean_object* v___y_500_, lean_object* v___y_501_){
_start:
{
lean_object* v_res_502_; 
v_res_502_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_IdentifierSuggestion_0__Lean_initFn_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2__spec__0_spec__0(v_msgData_498_, v___y_499_, v___y_500_);
lean_dec(v___y_500_);
lean_dec_ref(v___y_499_);
return v_res_502_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_IdentifierSuggestion_0__Lean_initFn_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2__spec__0___redArg(lean_object* v_msg_503_, lean_object* v___y_504_, lean_object* v___y_505_){
_start:
{
lean_object* v_ref_507_; lean_object* v___x_508_; lean_object* v_a_509_; lean_object* v___x_511_; uint8_t v_isShared_512_; uint8_t v_isSharedCheck_517_; 
v_ref_507_ = lean_ctor_get(v___y_504_, 2);
v___x_508_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_IdentifierSuggestion_0__Lean_initFn_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2__spec__0_spec__0(v_msg_503_, v___y_504_, v___y_505_);
v_a_509_ = lean_ctor_get(v___x_508_, 0);
v_isSharedCheck_517_ = !lean_is_exclusive(v___x_508_);
if (v_isSharedCheck_517_ == 0)
{
v___x_511_ = v___x_508_;
v_isShared_512_ = v_isSharedCheck_517_;
goto v_resetjp_510_;
}
else
{
lean_inc(v_a_509_);
lean_dec(v___x_508_);
v___x_511_ = lean_box(0);
v_isShared_512_ = v_isSharedCheck_517_;
goto v_resetjp_510_;
}
v_resetjp_510_:
{
lean_object* v___x_513_; lean_object* v___x_515_; 
lean_inc(v_ref_507_);
v___x_513_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_513_, 0, v_ref_507_);
lean_ctor_set(v___x_513_, 1, v_a_509_);
if (v_isShared_512_ == 0)
{
lean_ctor_set_tag(v___x_511_, 1);
lean_ctor_set(v___x_511_, 0, v___x_513_);
v___x_515_ = v___x_511_;
goto v_reusejp_514_;
}
else
{
lean_object* v_reuseFailAlloc_516_; 
v_reuseFailAlloc_516_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_516_, 0, v___x_513_);
v___x_515_ = v_reuseFailAlloc_516_;
goto v_reusejp_514_;
}
v_reusejp_514_:
{
return v___x_515_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_IdentifierSuggestion_0__Lean_initFn_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2__spec__0___redArg___boxed(lean_object* v_msg_518_, lean_object* v___y_519_, lean_object* v___y_520_, lean_object* v___y_521_){
_start:
{
lean_object* v_res_522_; 
v_res_522_ = l_Lean_throwError___at___00__private_Lean_IdentifierSuggestion_0__Lean_initFn_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2__spec__0___redArg(v_msg_518_, v___y_519_, v___y_520_);
lean_dec(v___y_520_);
lean_dec_ref(v___y_519_);
return v_res_522_;
}
}
static lean_object* _init_l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_IdentifierSuggestion_0__Lean_initFn_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2__spec__2___redArg___closed__1(void){
_start:
{
lean_object* v___x_524_; lean_object* v___x_525_; 
v___x_524_ = ((lean_object*)(l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_IdentifierSuggestion_0__Lean_initFn_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2__spec__2___redArg___closed__0));
v___x_525_ = l_Lean_stringToMessageData(v___x_524_);
return v___x_525_;
}
}
static lean_object* _init_l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_IdentifierSuggestion_0__Lean_initFn_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2__spec__2___redArg___closed__3(void){
_start:
{
lean_object* v___x_527_; lean_object* v___x_528_; 
v___x_527_ = ((lean_object*)(l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_IdentifierSuggestion_0__Lean_initFn_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2__spec__2___redArg___closed__2));
v___x_528_ = l_Lean_stringToMessageData(v___x_527_);
return v___x_528_;
}
}
static lean_object* _init_l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_IdentifierSuggestion_0__Lean_initFn_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2__spec__2___redArg___closed__5(void){
_start:
{
lean_object* v___x_530_; lean_object* v___x_531_; 
v___x_530_ = ((lean_object*)(l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_IdentifierSuggestion_0__Lean_initFn_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2__spec__2___redArg___closed__4));
v___x_531_ = l_Lean_stringToMessageData(v___x_530_);
return v___x_531_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_IdentifierSuggestion_0__Lean_initFn_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2__spec__2___redArg(lean_object* v_name_535_, uint8_t v_kind_536_, lean_object* v___y_537_, lean_object* v___y_538_){
_start:
{
lean_object* v___x_540_; lean_object* v___x_541_; lean_object* v___x_542_; lean_object* v___x_543_; lean_object* v___x_544_; lean_object* v___y_546_; 
v___x_540_ = lean_obj_once(&l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_IdentifierSuggestion_0__Lean_initFn_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2__spec__2___redArg___closed__1, &l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_IdentifierSuggestion_0__Lean_initFn_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2__spec__2___redArg___closed__1_once, _init_l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_IdentifierSuggestion_0__Lean_initFn_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2__spec__2___redArg___closed__1);
v___x_541_ = l_Lean_MessageData_ofName(v_name_535_);
v___x_542_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_542_, 0, v___x_540_);
lean_ctor_set(v___x_542_, 1, v___x_541_);
v___x_543_ = lean_obj_once(&l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_IdentifierSuggestion_0__Lean_initFn_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2__spec__2___redArg___closed__3, &l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_IdentifierSuggestion_0__Lean_initFn_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2__spec__2___redArg___closed__3_once, _init_l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_IdentifierSuggestion_0__Lean_initFn_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2__spec__2___redArg___closed__3);
v___x_544_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_544_, 0, v___x_542_);
lean_ctor_set(v___x_544_, 1, v___x_543_);
switch(v_kind_536_)
{
case 0:
{
lean_object* v___x_553_; 
v___x_553_ = ((lean_object*)(l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_IdentifierSuggestion_0__Lean_initFn_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2__spec__2___redArg___closed__6));
v___y_546_ = v___x_553_;
goto v___jp_545_;
}
case 1:
{
lean_object* v___x_554_; 
v___x_554_ = ((lean_object*)(l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_IdentifierSuggestion_0__Lean_initFn_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2__spec__2___redArg___closed__7));
v___y_546_ = v___x_554_;
goto v___jp_545_;
}
default: 
{
lean_object* v___x_555_; 
v___x_555_ = ((lean_object*)(l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_IdentifierSuggestion_0__Lean_initFn_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2__spec__2___redArg___closed__8));
v___y_546_ = v___x_555_;
goto v___jp_545_;
}
}
v___jp_545_:
{
lean_object* v___x_547_; lean_object* v___x_548_; lean_object* v___x_549_; lean_object* v___x_550_; lean_object* v___x_551_; lean_object* v___x_552_; 
lean_inc_ref(v___y_546_);
v___x_547_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_547_, 0, v___y_546_);
v___x_548_ = l_Lean_MessageData_ofFormat(v___x_547_);
v___x_549_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_549_, 0, v___x_544_);
lean_ctor_set(v___x_549_, 1, v___x_548_);
v___x_550_ = lean_obj_once(&l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_IdentifierSuggestion_0__Lean_initFn_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2__spec__2___redArg___closed__5, &l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_IdentifierSuggestion_0__Lean_initFn_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2__spec__2___redArg___closed__5_once, _init_l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_IdentifierSuggestion_0__Lean_initFn_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2__spec__2___redArg___closed__5);
v___x_551_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_551_, 0, v___x_549_);
lean_ctor_set(v___x_551_, 1, v___x_550_);
v___x_552_ = l_Lean_throwError___at___00__private_Lean_IdentifierSuggestion_0__Lean_initFn_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2__spec__0___redArg(v___x_551_, v___y_537_, v___y_538_);
return v___x_552_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_IdentifierSuggestion_0__Lean_initFn_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2__spec__2___redArg___boxed(lean_object* v_name_556_, lean_object* v_kind_557_, lean_object* v___y_558_, lean_object* v___y_559_, lean_object* v___y_560_){
_start:
{
uint8_t v_kind_boxed_561_; lean_object* v_res_562_; 
v_kind_boxed_561_ = lean_unbox(v_kind_557_);
v_res_562_ = l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_IdentifierSuggestion_0__Lean_initFn_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2__spec__2___redArg(v_name_556_, v_kind_boxed_561_, v___y_558_, v___y_559_);
lean_dec(v___y_559_);
lean_dec_ref(v___y_558_);
return v_res_562_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_IdentifierSuggestion_0__Lean_initFn_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2__spec__1(size_t v_sz_563_, size_t v_i_564_, lean_object* v_bs_565_){
_start:
{
uint8_t v___x_566_; 
v___x_566_ = lean_usize_dec_lt(v_i_564_, v_sz_563_);
if (v___x_566_ == 0)
{
lean_object* v___x_567_; 
v___x_567_ = l_unsafeCast___redArg(v_bs_565_);
lean_dec_ref(v_bs_565_);
return v___x_567_;
}
else
{
lean_object* v_v_568_; lean_object* v___x_569_; lean_object* v_bs_x27_570_; lean_object* v___x_571_; lean_object* v___x_572_; size_t v___x_573_; size_t v___x_574_; lean_object* v___x_575_; lean_object* v___x_576_; 
v_v_568_ = lean_array_uget(v_bs_565_, v_i_564_);
v___x_569_ = lean_unsigned_to_nat(0u);
v_bs_x27_570_ = lean_array_uset(v_bs_565_, v_i_564_, v___x_569_);
v___x_571_ = l_unsafeCast___redArg(v_v_568_);
lean_dec(v_v_568_);
v___x_572_ = l_Lean_Syntax_getId(v___x_571_);
lean_dec(v___x_571_);
v___x_573_ = ((size_t)1ULL);
v___x_574_ = lean_usize_add(v_i_564_, v___x_573_);
v___x_575_ = l_unsafeCast___redArg(v___x_572_);
lean_dec(v___x_572_);
v___x_576_ = lean_array_uset(v_bs_x27_570_, v_i_564_, v___x_575_);
v_i_564_ = v___x_574_;
v_bs_565_ = v___x_576_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_IdentifierSuggestion_0__Lean_initFn_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2__spec__1___boxed(lean_object* v_sz_578_, lean_object* v_i_579_, lean_object* v_bs_580_){
_start:
{
size_t v_sz_boxed_581_; size_t v_i_boxed_582_; lean_object* v_res_583_; 
v_sz_boxed_581_ = lean_unbox_usize(v_sz_578_);
lean_dec(v_sz_578_);
v_i_boxed_582_ = lean_unbox_usize(v_i_579_);
lean_dec(v_i_579_);
v_res_583_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_IdentifierSuggestion_0__Lean_initFn_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2__spec__1(v_sz_boxed_581_, v_i_boxed_582_, v_bs_580_);
return v_res_583_;
}
}
static lean_object* _init_l___private_Lean_IdentifierSuggestion_0__Lean_initFn___lam__0___closed__0_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_584_; lean_object* v___x_585_; 
v___x_584_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_IdentifierSuggestion_0__Lean_initFn_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2__spec__0_spec__0___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_IdentifierSuggestion_0__Lean_initFn_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2__spec__0_spec__0___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_IdentifierSuggestion_0__Lean_initFn_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2__spec__0_spec__0___closed__0);
v___x_585_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_585_, 0, v___x_584_);
return v___x_585_;
}
}
static lean_object* _init_l___private_Lean_IdentifierSuggestion_0__Lean_initFn___lam__0___closed__1_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_586_; lean_object* v___x_587_; 
v___x_586_ = lean_obj_once(&l___private_Lean_IdentifierSuggestion_0__Lean_initFn___lam__0___closed__0_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2_, &l___private_Lean_IdentifierSuggestion_0__Lean_initFn___lam__0___closed__0_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2__once, _init_l___private_Lean_IdentifierSuggestion_0__Lean_initFn___lam__0___closed__0_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2_);
v___x_587_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_587_, 0, v___x_586_);
lean_ctor_set(v___x_587_, 1, v___x_586_);
return v___x_587_;
}
}
static lean_object* _init_l___private_Lean_IdentifierSuggestion_0__Lean_initFn___lam__0___closed__3_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_589_; lean_object* v___x_590_; 
v___x_589_ = ((lean_object*)(l___private_Lean_IdentifierSuggestion_0__Lean_initFn___lam__0___closed__2_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2_));
v___x_590_ = l_Lean_stringToMessageData(v___x_589_);
return v___x_590_;
}
}
static lean_object* _init_l___private_Lean_IdentifierSuggestion_0__Lean_initFn___lam__0___closed__5_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_592_; lean_object* v___x_593_; 
v___x_592_ = ((lean_object*)(l___private_Lean_IdentifierSuggestion_0__Lean_initFn___lam__0___closed__4_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2_));
v___x_593_ = l_Lean_stringToMessageData(v___x_592_);
return v___x_593_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_IdentifierSuggestion_0__Lean_initFn___lam__0_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2_(lean_object* v_a_598_, lean_object* v___x_599_, lean_object* v_a_600_, lean_object* v___x_601_, lean_object* v___x_602_, lean_object* v___x_603_, lean_object* v___x_604_, lean_object* v_decl_605_, lean_object* v_stx_606_, uint8_t v_kind_607_, lean_object* v___y_608_, lean_object* v___y_609_){
_start:
{
lean_object* v___y_612_; lean_object* v___y_613_; lean_object* v_altSyntaxIds_666_; lean_object* v___y_667_; lean_object* v___y_668_; lean_object* v___y_673_; lean_object* v___y_674_; uint8_t v___x_747_; uint8_t v___x_748_; 
v___x_747_ = 0;
v___x_748_ = l_Lean_instBEqAttributeKind_beq(v_kind_607_, v___x_747_);
if (v___x_748_ == 0)
{
lean_object* v___x_749_; 
lean_dec(v_stx_606_);
lean_dec(v_decl_605_);
lean_dec_ref(v_a_600_);
lean_dec(v___x_599_);
lean_dec_ref(v_a_598_);
v___x_749_ = l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_IdentifierSuggestion_0__Lean_initFn_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2__spec__2___redArg(v___x_604_, v_kind_607_, v___y_608_, v___y_609_);
return v___x_749_;
}
else
{
lean_dec(v___x_604_);
goto v___jp_688_;
}
v___jp_611_:
{
size_t v_sz_614_; size_t v___x_615_; lean_object* v___x_616_; lean_object* v___x_617_; lean_object* v___x_618_; lean_object* v___x_619_; lean_object* v_toEnvExtension_620_; lean_object* v_env_621_; lean_object* v_nextMacroScope_622_; lean_object* v_ngen_623_; lean_object* v_auxDeclNGen_624_; lean_object* v_traceState_625_; lean_object* v_messages_626_; lean_object* v_infoState_627_; lean_object* v_snapshotTasks_628_; lean_object* v___x_630_; uint8_t v_isShared_631_; uint8_t v_isSharedCheck_663_; 
v_sz_614_ = lean_array_size(v___y_612_);
v___x_615_ = ((size_t)0ULL);
v___x_616_ = l_unsafeCast___redArg(v___y_612_);
lean_dec_ref(v___y_612_);
v___x_617_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_IdentifierSuggestion_0__Lean_initFn_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2__spec__1(v_sz_614_, v___x_615_, v___x_616_);
v___x_618_ = l_unsafeCast___redArg(v___x_617_);
lean_dec_ref(v___x_617_);
v___x_619_ = lean_st_ref_take(v___y_613_);
v_toEnvExtension_620_ = lean_ctor_get(v_a_598_, 0);
v_env_621_ = lean_ctor_get(v___x_619_, 0);
v_nextMacroScope_622_ = lean_ctor_get(v___x_619_, 1);
v_ngen_623_ = lean_ctor_get(v___x_619_, 2);
v_auxDeclNGen_624_ = lean_ctor_get(v___x_619_, 3);
v_traceState_625_ = lean_ctor_get(v___x_619_, 4);
v_messages_626_ = lean_ctor_get(v___x_619_, 6);
v_infoState_627_ = lean_ctor_get(v___x_619_, 7);
v_snapshotTasks_628_ = lean_ctor_get(v___x_619_, 8);
v_isSharedCheck_663_ = !lean_is_exclusive(v___x_619_);
if (v_isSharedCheck_663_ == 0)
{
lean_object* v_unused_664_; 
v_unused_664_ = lean_ctor_get(v___x_619_, 5);
lean_dec(v_unused_664_);
v___x_630_ = v___x_619_;
v_isShared_631_ = v_isSharedCheck_663_;
goto v_resetjp_629_;
}
else
{
lean_inc(v_snapshotTasks_628_);
lean_inc(v_infoState_627_);
lean_inc(v_messages_626_);
lean_inc(v_traceState_625_);
lean_inc(v_auxDeclNGen_624_);
lean_inc(v_ngen_623_);
lean_inc(v_nextMacroScope_622_);
lean_inc(v_env_621_);
lean_dec(v___x_619_);
v___x_630_ = lean_box(0);
v_isShared_631_ = v_isSharedCheck_663_;
goto v_resetjp_629_;
}
v_resetjp_629_:
{
lean_object* v_asyncMode_632_; lean_object* v___x_633_; lean_object* v___x_634_; lean_object* v___x_635_; lean_object* v___x_637_; 
v_asyncMode_632_ = lean_ctor_get(v_toEnvExtension_620_, 2);
lean_inc(v_asyncMode_632_);
v___x_633_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_633_, 0, v_decl_605_);
lean_ctor_set(v___x_633_, 1, v___x_618_);
lean_inc(v___x_599_);
lean_inc_ref(v___x_633_);
v___x_634_ = l_Lean_PersistentEnvExtension_addEntry___redArg(v_a_598_, v_env_621_, v___x_633_, v_asyncMode_632_, v___x_599_);
lean_dec(v_asyncMode_632_);
v___x_635_ = lean_obj_once(&l___private_Lean_IdentifierSuggestion_0__Lean_initFn___lam__0___closed__1_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2_, &l___private_Lean_IdentifierSuggestion_0__Lean_initFn___lam__0___closed__1_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2__once, _init_l___private_Lean_IdentifierSuggestion_0__Lean_initFn___lam__0___closed__1_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2_);
if (v_isShared_631_ == 0)
{
lean_ctor_set(v___x_630_, 5, v___x_635_);
lean_ctor_set(v___x_630_, 0, v___x_634_);
v___x_637_ = v___x_630_;
goto v_reusejp_636_;
}
else
{
lean_object* v_reuseFailAlloc_662_; 
v_reuseFailAlloc_662_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_662_, 0, v___x_634_);
lean_ctor_set(v_reuseFailAlloc_662_, 1, v_nextMacroScope_622_);
lean_ctor_set(v_reuseFailAlloc_662_, 2, v_ngen_623_);
lean_ctor_set(v_reuseFailAlloc_662_, 3, v_auxDeclNGen_624_);
lean_ctor_set(v_reuseFailAlloc_662_, 4, v_traceState_625_);
lean_ctor_set(v_reuseFailAlloc_662_, 5, v___x_635_);
lean_ctor_set(v_reuseFailAlloc_662_, 6, v_messages_626_);
lean_ctor_set(v_reuseFailAlloc_662_, 7, v_infoState_627_);
lean_ctor_set(v_reuseFailAlloc_662_, 8, v_snapshotTasks_628_);
v___x_637_ = v_reuseFailAlloc_662_;
goto v_reusejp_636_;
}
v_reusejp_636_:
{
lean_object* v___x_638_; lean_object* v___x_639_; lean_object* v_toEnvExtension_640_; lean_object* v_env_641_; lean_object* v_nextMacroScope_642_; lean_object* v_ngen_643_; lean_object* v_auxDeclNGen_644_; lean_object* v_traceState_645_; lean_object* v_messages_646_; lean_object* v_infoState_647_; lean_object* v_snapshotTasks_648_; lean_object* v___x_650_; uint8_t v_isShared_651_; uint8_t v_isSharedCheck_660_; 
v___x_638_ = lean_st_ref_put(v___y_613_, v___x_637_);
v___x_639_ = lean_st_ref_take(v___y_613_);
v_toEnvExtension_640_ = lean_ctor_get(v_a_600_, 0);
v_env_641_ = lean_ctor_get(v___x_639_, 0);
v_nextMacroScope_642_ = lean_ctor_get(v___x_639_, 1);
v_ngen_643_ = lean_ctor_get(v___x_639_, 2);
v_auxDeclNGen_644_ = lean_ctor_get(v___x_639_, 3);
v_traceState_645_ = lean_ctor_get(v___x_639_, 4);
v_messages_646_ = lean_ctor_get(v___x_639_, 6);
v_infoState_647_ = lean_ctor_get(v___x_639_, 7);
v_snapshotTasks_648_ = lean_ctor_get(v___x_639_, 8);
v_isSharedCheck_660_ = !lean_is_exclusive(v___x_639_);
if (v_isSharedCheck_660_ == 0)
{
lean_object* v_unused_661_; 
v_unused_661_ = lean_ctor_get(v___x_639_, 5);
lean_dec(v_unused_661_);
v___x_650_ = v___x_639_;
v_isShared_651_ = v_isSharedCheck_660_;
goto v_resetjp_649_;
}
else
{
lean_inc(v_snapshotTasks_648_);
lean_inc(v_infoState_647_);
lean_inc(v_messages_646_);
lean_inc(v_traceState_645_);
lean_inc(v_auxDeclNGen_644_);
lean_inc(v_ngen_643_);
lean_inc(v_nextMacroScope_642_);
lean_inc(v_env_641_);
lean_dec(v___x_639_);
v___x_650_ = lean_box(0);
v_isShared_651_ = v_isSharedCheck_660_;
goto v_resetjp_649_;
}
v_resetjp_649_:
{
lean_object* v_asyncMode_652_; lean_object* v___x_653_; lean_object* v___x_654_; lean_object* v___x_656_; 
v_asyncMode_652_ = lean_ctor_get(v_toEnvExtension_640_, 2);
lean_inc(v_asyncMode_652_);
v___x_653_ = lean_box(0);
v___x_654_ = l_Lean_PersistentEnvExtension_addEntry___redArg(v_a_600_, v_env_641_, v___x_633_, v_asyncMode_652_, v___x_599_);
lean_dec(v_asyncMode_652_);
if (v_isShared_651_ == 0)
{
lean_ctor_set(v___x_650_, 5, v___x_635_);
lean_ctor_set(v___x_650_, 0, v___x_654_);
v___x_656_ = v___x_650_;
goto v_reusejp_655_;
}
else
{
lean_object* v_reuseFailAlloc_659_; 
v_reuseFailAlloc_659_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_659_, 0, v___x_654_);
lean_ctor_set(v_reuseFailAlloc_659_, 1, v_nextMacroScope_642_);
lean_ctor_set(v_reuseFailAlloc_659_, 2, v_ngen_643_);
lean_ctor_set(v_reuseFailAlloc_659_, 3, v_auxDeclNGen_644_);
lean_ctor_set(v_reuseFailAlloc_659_, 4, v_traceState_645_);
lean_ctor_set(v_reuseFailAlloc_659_, 5, v___x_635_);
lean_ctor_set(v_reuseFailAlloc_659_, 6, v_messages_646_);
lean_ctor_set(v_reuseFailAlloc_659_, 7, v_infoState_647_);
lean_ctor_set(v_reuseFailAlloc_659_, 8, v_snapshotTasks_648_);
v___x_656_ = v_reuseFailAlloc_659_;
goto v_reusejp_655_;
}
v_reusejp_655_:
{
lean_object* v___x_657_; lean_object* v___x_658_; 
v___x_657_ = lean_st_ref_put(v___y_613_, v___x_656_);
v___x_658_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_658_, 0, v___x_653_);
return v___x_658_;
}
}
}
}
}
v___jp_665_:
{
uint8_t v___x_669_; 
v___x_669_ = l_Lean_isPrivateName(v_decl_605_);
if (v___x_669_ == 0)
{
v___y_612_ = v_altSyntaxIds_666_;
v___y_613_ = v___y_668_;
goto v___jp_611_;
}
else
{
lean_object* v___x_670_; lean_object* v___x_671_; 
lean_dec_ref(v_altSyntaxIds_666_);
lean_dec(v_decl_605_);
lean_dec_ref(v_a_600_);
lean_dec(v___x_599_);
lean_dec_ref(v_a_598_);
v___x_670_ = lean_obj_once(&l___private_Lean_IdentifierSuggestion_0__Lean_initFn___lam__0___closed__3_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2_, &l___private_Lean_IdentifierSuggestion_0__Lean_initFn___lam__0___closed__3_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2__once, _init_l___private_Lean_IdentifierSuggestion_0__Lean_initFn___lam__0___closed__3_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2_);
v___x_671_ = l_Lean_throwError___at___00__private_Lean_IdentifierSuggestion_0__Lean_initFn_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2__spec__0___redArg(v___x_670_, v___y_667_, v___y_668_);
return v___x_671_;
}
}
v___jp_672_:
{
lean_object* v___x_675_; lean_object* v___x_676_; lean_object* v___x_677_; lean_object* v___x_678_; lean_object* v___x_679_; lean_object* v_a_680_; lean_object* v___x_682_; uint8_t v_isShared_683_; uint8_t v_isSharedCheck_687_; 
v___x_675_ = lean_obj_once(&l___private_Lean_IdentifierSuggestion_0__Lean_initFn___lam__0___closed__5_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2_, &l___private_Lean_IdentifierSuggestion_0__Lean_initFn___lam__0___closed__5_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2__once, _init_l___private_Lean_IdentifierSuggestion_0__Lean_initFn___lam__0___closed__5_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2_);
v___x_676_ = l_Lean_Syntax_instRepr_repr(v_stx_606_, v___x_601_);
v___x_677_ = l_Lean_MessageData_ofFormat(v___x_676_);
v___x_678_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_678_, 0, v___x_675_);
lean_ctor_set(v___x_678_, 1, v___x_677_);
v___x_679_ = l_Lean_throwError___at___00__private_Lean_IdentifierSuggestion_0__Lean_initFn_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2__spec__0___redArg(v___x_678_, v___y_673_, v___y_674_);
v_a_680_ = lean_ctor_get(v___x_679_, 0);
v_isSharedCheck_687_ = !lean_is_exclusive(v___x_679_);
if (v_isSharedCheck_687_ == 0)
{
v___x_682_ = v___x_679_;
v_isShared_683_ = v_isSharedCheck_687_;
goto v_resetjp_681_;
}
else
{
lean_inc(v_a_680_);
lean_dec(v___x_679_);
v___x_682_ = lean_box(0);
v_isShared_683_ = v_isSharedCheck_687_;
goto v_resetjp_681_;
}
v_resetjp_681_:
{
lean_object* v___x_685_; 
if (v_isShared_683_ == 0)
{
v___x_685_ = v___x_682_;
goto v_reusejp_684_;
}
else
{
lean_object* v_reuseFailAlloc_686_; 
v_reuseFailAlloc_686_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_686_, 0, v_a_680_);
v___x_685_ = v_reuseFailAlloc_686_;
goto v_reusejp_684_;
}
v_reusejp_684_:
{
return v___x_685_;
}
}
}
v___jp_688_:
{
if (lean_obj_tag(v_stx_606_) == 1)
{
lean_object* v_kind_689_; 
v_kind_689_ = lean_ctor_get(v_stx_606_, 1);
if (lean_obj_tag(v_kind_689_) == 1)
{
lean_object* v_pre_690_; 
v_pre_690_ = lean_ctor_get(v_kind_689_, 0);
if (lean_obj_tag(v_pre_690_) == 1)
{
lean_object* v_pre_691_; 
v_pre_691_ = lean_ctor_get(v_pre_690_, 0);
switch(lean_obj_tag(v_pre_691_))
{
case 0:
{
lean_object* v_args_692_; lean_object* v_str_693_; lean_object* v_str_694_; uint8_t v___x_695_; 
v_args_692_ = lean_ctor_get(v_stx_606_, 2);
v_str_693_ = lean_ctor_get(v_kind_689_, 1);
v_str_694_ = lean_ctor_get(v_pre_690_, 1);
v___x_695_ = lean_string_dec_eq(v_str_694_, v___x_602_);
if (v___x_695_ == 0)
{
lean_dec(v_decl_605_);
lean_dec_ref(v_a_600_);
lean_dec(v___x_599_);
lean_dec_ref(v_a_598_);
v___y_673_ = v___y_608_;
v___y_674_ = v___y_609_;
goto v___jp_672_;
}
else
{
uint8_t v___x_696_; 
v___x_696_ = lean_string_dec_eq(v_str_693_, v___x_603_);
if (v___x_696_ == 0)
{
lean_dec(v_decl_605_);
lean_dec_ref(v_a_600_);
lean_dec(v___x_599_);
lean_dec_ref(v_a_598_);
v___y_673_ = v___y_608_;
v___y_674_ = v___y_609_;
goto v___jp_672_;
}
else
{
lean_object* v___x_697_; lean_object* v___x_698_; uint8_t v___x_699_; 
v___x_697_ = lean_array_get_size(v_args_692_);
v___x_698_ = lean_unsigned_to_nat(2u);
v___x_699_ = lean_nat_dec_eq(v___x_697_, v___x_698_);
if (v___x_699_ == 0)
{
lean_dec(v_decl_605_);
lean_dec_ref(v_a_600_);
lean_dec(v___x_599_);
lean_dec_ref(v_a_598_);
v___y_673_ = v___y_608_;
v___y_674_ = v___y_609_;
goto v___jp_672_;
}
else
{
lean_object* v___x_700_; 
v___x_700_ = lean_array_fget_borrowed(v_args_692_, v___x_601_);
if (lean_obj_tag(v___x_700_) == 2)
{
lean_object* v_val_701_; uint8_t v___x_702_; 
v_val_701_ = lean_ctor_get(v___x_700_, 1);
v___x_702_ = lean_string_dec_eq(v_val_701_, v___x_603_);
if (v___x_702_ == 0)
{
lean_dec(v_decl_605_);
lean_dec_ref(v_a_600_);
lean_dec(v___x_599_);
lean_dec_ref(v_a_598_);
v___y_673_ = v___y_608_;
v___y_674_ = v___y_609_;
goto v___jp_672_;
}
else
{
lean_object* v___x_703_; lean_object* v___x_704_; 
v___x_703_ = lean_unsigned_to_nat(1u);
v___x_704_ = lean_array_fget_borrowed(v_args_692_, v___x_703_);
if (lean_obj_tag(v___x_704_) == 1)
{
lean_object* v_kind_705_; 
v_kind_705_ = lean_ctor_get(v___x_704_, 1);
if (lean_obj_tag(v_kind_705_) == 1)
{
lean_object* v_pre_706_; 
v_pre_706_ = lean_ctor_get(v_kind_705_, 0);
if (lean_obj_tag(v_pre_706_) == 0)
{
lean_object* v_args_707_; lean_object* v_str_708_; lean_object* v___x_709_; uint8_t v___x_710_; 
v_args_707_ = lean_ctor_get(v___x_704_, 2);
v_str_708_ = lean_ctor_get(v_kind_705_, 1);
v___x_709_ = ((lean_object*)(l___private_Lean_IdentifierSuggestion_0__Lean_initFn___lam__0___closed__6_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2_));
v___x_710_ = lean_string_dec_eq(v_str_708_, v___x_709_);
if (v___x_710_ == 0)
{
lean_dec(v_decl_605_);
lean_dec_ref(v_a_600_);
lean_dec(v___x_599_);
lean_dec_ref(v_a_598_);
v___y_673_ = v___y_608_;
v___y_674_ = v___y_609_;
goto v___jp_672_;
}
else
{
lean_inc_ref(v_args_707_);
lean_dec_ref_known(v_stx_606_, 3);
v_altSyntaxIds_666_ = v_args_707_;
v___y_667_ = v___y_608_;
v___y_668_ = v___y_609_;
goto v___jp_665_;
}
}
else
{
lean_dec(v_decl_605_);
lean_dec_ref(v_a_600_);
lean_dec(v___x_599_);
lean_dec_ref(v_a_598_);
v___y_673_ = v___y_608_;
v___y_674_ = v___y_609_;
goto v___jp_672_;
}
}
else
{
lean_dec(v_decl_605_);
lean_dec_ref(v_a_600_);
lean_dec(v___x_599_);
lean_dec_ref(v_a_598_);
v___y_673_ = v___y_608_;
v___y_674_ = v___y_609_;
goto v___jp_672_;
}
}
else
{
lean_dec(v_decl_605_);
lean_dec_ref(v_a_600_);
lean_dec(v___x_599_);
lean_dec_ref(v_a_598_);
v___y_673_ = v___y_608_;
v___y_674_ = v___y_609_;
goto v___jp_672_;
}
}
}
else
{
lean_dec(v_decl_605_);
lean_dec_ref(v_a_600_);
lean_dec(v___x_599_);
lean_dec_ref(v_a_598_);
v___y_673_ = v___y_608_;
v___y_674_ = v___y_609_;
goto v___jp_672_;
}
}
}
}
}
case 1:
{
lean_object* v_pre_711_; 
v_pre_711_ = lean_ctor_get(v_pre_691_, 0);
if (lean_obj_tag(v_pre_711_) == 1)
{
lean_object* v_pre_712_; 
v_pre_712_ = lean_ctor_get(v_pre_711_, 0);
if (lean_obj_tag(v_pre_712_) == 0)
{
lean_object* v_args_713_; lean_object* v_str_714_; lean_object* v_str_715_; lean_object* v_str_716_; lean_object* v_str_717_; uint8_t v___x_718_; 
v_args_713_ = lean_ctor_get(v_stx_606_, 2);
v_str_714_ = lean_ctor_get(v_kind_689_, 1);
v_str_715_ = lean_ctor_get(v_pre_690_, 1);
v_str_716_ = lean_ctor_get(v_pre_691_, 1);
v_str_717_ = lean_ctor_get(v_pre_711_, 1);
v___x_718_ = lean_string_dec_eq(v_str_717_, v___x_602_);
if (v___x_718_ == 0)
{
lean_dec(v_decl_605_);
lean_dec_ref(v_a_600_);
lean_dec(v___x_599_);
lean_dec_ref(v_a_598_);
v___y_673_ = v___y_608_;
v___y_674_ = v___y_609_;
goto v___jp_672_;
}
else
{
lean_object* v___x_719_; uint8_t v___x_720_; 
v___x_719_ = ((lean_object*)(l___private_Lean_IdentifierSuggestion_0__Lean_initFn___lam__0___closed__7_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2_));
v___x_720_ = lean_string_dec_eq(v_str_716_, v___x_719_);
if (v___x_720_ == 0)
{
lean_dec(v_decl_605_);
lean_dec_ref(v_a_600_);
lean_dec(v___x_599_);
lean_dec_ref(v_a_598_);
v___y_673_ = v___y_608_;
v___y_674_ = v___y_609_;
goto v___jp_672_;
}
else
{
lean_object* v___x_721_; uint8_t v___x_722_; 
v___x_721_ = ((lean_object*)(l___private_Lean_IdentifierSuggestion_0__Lean_initFn___lam__0___closed__8_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2_));
v___x_722_ = lean_string_dec_eq(v_str_715_, v___x_721_);
if (v___x_722_ == 0)
{
lean_dec(v_decl_605_);
lean_dec_ref(v_a_600_);
lean_dec(v___x_599_);
lean_dec_ref(v_a_598_);
v___y_673_ = v___y_608_;
v___y_674_ = v___y_609_;
goto v___jp_672_;
}
else
{
lean_object* v___x_723_; uint8_t v___x_724_; 
v___x_723_ = ((lean_object*)(l___private_Lean_IdentifierSuggestion_0__Lean_initFn___lam__0___closed__9_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2_));
v___x_724_ = lean_string_dec_eq(v_str_714_, v___x_723_);
if (v___x_724_ == 0)
{
lean_dec(v_decl_605_);
lean_dec_ref(v_a_600_);
lean_dec(v___x_599_);
lean_dec_ref(v_a_598_);
v___y_673_ = v___y_608_;
v___y_674_ = v___y_609_;
goto v___jp_672_;
}
else
{
lean_object* v___x_725_; lean_object* v___x_726_; uint8_t v___x_727_; 
v___x_725_ = lean_array_get_size(v_args_713_);
v___x_726_ = lean_unsigned_to_nat(2u);
v___x_727_ = lean_nat_dec_eq(v___x_725_, v___x_726_);
if (v___x_727_ == 0)
{
lean_dec(v_decl_605_);
lean_dec_ref(v_a_600_);
lean_dec(v___x_599_);
lean_dec_ref(v_a_598_);
v___y_673_ = v___y_608_;
v___y_674_ = v___y_609_;
goto v___jp_672_;
}
else
{
lean_object* v___x_728_; 
v___x_728_ = lean_array_fget_borrowed(v_args_713_, v___x_601_);
if (lean_obj_tag(v___x_728_) == 3)
{
lean_object* v_val_729_; 
v_val_729_ = lean_ctor_get(v___x_728_, 2);
if (lean_obj_tag(v_val_729_) == 1)
{
lean_object* v_pre_730_; 
v_pre_730_ = lean_ctor_get(v_val_729_, 0);
if (lean_obj_tag(v_pre_730_) == 0)
{
lean_object* v_preresolved_731_; lean_object* v_str_732_; uint8_t v___x_733_; 
v_preresolved_731_ = lean_ctor_get(v___x_728_, 3);
v_str_732_ = lean_ctor_get(v_val_729_, 1);
v___x_733_ = lean_string_dec_eq(v_str_732_, v___x_603_);
if (v___x_733_ == 0)
{
lean_dec(v_decl_605_);
lean_dec_ref(v_a_600_);
lean_dec(v___x_599_);
lean_dec_ref(v_a_598_);
v___y_673_ = v___y_608_;
v___y_674_ = v___y_609_;
goto v___jp_672_;
}
else
{
if (lean_obj_tag(v_preresolved_731_) == 0)
{
lean_object* v___x_734_; lean_object* v___x_735_; 
v___x_734_ = lean_unsigned_to_nat(1u);
v___x_735_ = lean_array_fget_borrowed(v_args_713_, v___x_734_);
if (lean_obj_tag(v___x_735_) == 1)
{
lean_object* v_kind_736_; 
v_kind_736_ = lean_ctor_get(v___x_735_, 1);
if (lean_obj_tag(v_kind_736_) == 1)
{
lean_object* v_pre_737_; 
v_pre_737_ = lean_ctor_get(v_kind_736_, 0);
if (lean_obj_tag(v_pre_737_) == 0)
{
lean_object* v_args_738_; lean_object* v_str_739_; lean_object* v___x_740_; uint8_t v___x_741_; 
v_args_738_ = lean_ctor_get(v___x_735_, 2);
v_str_739_ = lean_ctor_get(v_kind_736_, 1);
v___x_740_ = ((lean_object*)(l___private_Lean_IdentifierSuggestion_0__Lean_initFn___lam__0___closed__6_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2_));
v___x_741_ = lean_string_dec_eq(v_str_739_, v___x_740_);
if (v___x_741_ == 0)
{
lean_dec(v_decl_605_);
lean_dec_ref(v_a_600_);
lean_dec(v___x_599_);
lean_dec_ref(v_a_598_);
v___y_673_ = v___y_608_;
v___y_674_ = v___y_609_;
goto v___jp_672_;
}
else
{
lean_object* v___x_742_; uint8_t v___x_743_; 
v___x_742_ = lean_array_get_size(v_args_738_);
v___x_743_ = lean_nat_dec_eq(v___x_742_, v___x_734_);
if (v___x_743_ == 0)
{
lean_dec(v_decl_605_);
lean_dec_ref(v_a_600_);
lean_dec(v___x_599_);
lean_dec_ref(v_a_598_);
v___y_673_ = v___y_608_;
v___y_674_ = v___y_609_;
goto v___jp_672_;
}
else
{
lean_object* v___x_744_; lean_object* v___x_745_; lean_object* v___x_746_; 
lean_inc_ref(v_args_738_);
lean_dec_ref_known(v_stx_606_, 3);
v___x_744_ = lean_array_fget(v_args_738_, v___x_601_);
lean_dec_ref(v_args_738_);
v___x_745_ = lean_mk_empty_array_with_capacity(v___x_734_);
v___x_746_ = lean_array_push(v___x_745_, v___x_744_);
v_altSyntaxIds_666_ = v___x_746_;
v___y_667_ = v___y_608_;
v___y_668_ = v___y_609_;
goto v___jp_665_;
}
}
}
else
{
lean_dec(v_decl_605_);
lean_dec_ref(v_a_600_);
lean_dec(v___x_599_);
lean_dec_ref(v_a_598_);
v___y_673_ = v___y_608_;
v___y_674_ = v___y_609_;
goto v___jp_672_;
}
}
else
{
lean_dec(v_decl_605_);
lean_dec_ref(v_a_600_);
lean_dec(v___x_599_);
lean_dec_ref(v_a_598_);
v___y_673_ = v___y_608_;
v___y_674_ = v___y_609_;
goto v___jp_672_;
}
}
else
{
lean_dec(v_decl_605_);
lean_dec_ref(v_a_600_);
lean_dec(v___x_599_);
lean_dec_ref(v_a_598_);
v___y_673_ = v___y_608_;
v___y_674_ = v___y_609_;
goto v___jp_672_;
}
}
else
{
lean_dec(v_decl_605_);
lean_dec_ref(v_a_600_);
lean_dec(v___x_599_);
lean_dec_ref(v_a_598_);
v___y_673_ = v___y_608_;
v___y_674_ = v___y_609_;
goto v___jp_672_;
}
}
}
else
{
lean_dec(v_decl_605_);
lean_dec_ref(v_a_600_);
lean_dec(v___x_599_);
lean_dec_ref(v_a_598_);
v___y_673_ = v___y_608_;
v___y_674_ = v___y_609_;
goto v___jp_672_;
}
}
else
{
lean_dec(v_decl_605_);
lean_dec_ref(v_a_600_);
lean_dec(v___x_599_);
lean_dec_ref(v_a_598_);
v___y_673_ = v___y_608_;
v___y_674_ = v___y_609_;
goto v___jp_672_;
}
}
else
{
lean_dec(v_decl_605_);
lean_dec_ref(v_a_600_);
lean_dec(v___x_599_);
lean_dec_ref(v_a_598_);
v___y_673_ = v___y_608_;
v___y_674_ = v___y_609_;
goto v___jp_672_;
}
}
}
}
}
}
}
else
{
lean_dec(v_decl_605_);
lean_dec_ref(v_a_600_);
lean_dec(v___x_599_);
lean_dec_ref(v_a_598_);
v___y_673_ = v___y_608_;
v___y_674_ = v___y_609_;
goto v___jp_672_;
}
}
else
{
lean_dec(v_decl_605_);
lean_dec_ref(v_a_600_);
lean_dec(v___x_599_);
lean_dec_ref(v_a_598_);
v___y_673_ = v___y_608_;
v___y_674_ = v___y_609_;
goto v___jp_672_;
}
}
default: 
{
lean_dec(v_decl_605_);
lean_dec_ref(v_a_600_);
lean_dec(v___x_599_);
lean_dec_ref(v_a_598_);
v___y_673_ = v___y_608_;
v___y_674_ = v___y_609_;
goto v___jp_672_;
}
}
}
else
{
lean_dec(v_decl_605_);
lean_dec_ref(v_a_600_);
lean_dec(v___x_599_);
lean_dec_ref(v_a_598_);
v___y_673_ = v___y_608_;
v___y_674_ = v___y_609_;
goto v___jp_672_;
}
}
else
{
lean_dec(v_decl_605_);
lean_dec_ref(v_a_600_);
lean_dec(v___x_599_);
lean_dec_ref(v_a_598_);
v___y_673_ = v___y_608_;
v___y_674_ = v___y_609_;
goto v___jp_672_;
}
}
else
{
lean_dec(v_decl_605_);
lean_dec_ref(v_a_600_);
lean_dec(v___x_599_);
lean_dec_ref(v_a_598_);
v___y_673_ = v___y_608_;
v___y_674_ = v___y_609_;
goto v___jp_672_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_IdentifierSuggestion_0__Lean_initFn___lam__0_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2____boxed(lean_object* v_a_750_, lean_object* v___x_751_, lean_object* v_a_752_, lean_object* v___x_753_, lean_object* v___x_754_, lean_object* v___x_755_, lean_object* v___x_756_, lean_object* v_decl_757_, lean_object* v_stx_758_, lean_object* v_kind_759_, lean_object* v___y_760_, lean_object* v___y_761_, lean_object* v___y_762_){
_start:
{
uint8_t v_kind_boxed_763_; lean_object* v_res_764_; 
v_kind_boxed_763_ = lean_unbox(v_kind_759_);
v_res_764_ = l___private_Lean_IdentifierSuggestion_0__Lean_initFn___lam__0_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2_(v_a_750_, v___x_751_, v_a_752_, v___x_753_, v___x_754_, v___x_755_, v___x_756_, v_decl_757_, v_stx_758_, v_kind_boxed_763_, v___y_760_, v___y_761_);
lean_dec(v___y_761_);
lean_dec_ref(v___y_760_);
lean_dec_ref(v___x_755_);
lean_dec_ref(v___x_754_);
lean_dec(v___x_753_);
return v_res_764_;
}
}
static lean_object* _init_l___private_Lean_IdentifierSuggestion_0__Lean_initFn___lam__1___closed__1_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_766_; lean_object* v___x_767_; 
v___x_766_ = ((lean_object*)(l___private_Lean_IdentifierSuggestion_0__Lean_initFn___lam__1___closed__0_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2_));
v___x_767_ = l_Lean_stringToMessageData(v___x_766_);
return v___x_767_;
}
}
static lean_object* _init_l___private_Lean_IdentifierSuggestion_0__Lean_initFn___lam__1___closed__3_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_769_; lean_object* v___x_770_; 
v___x_769_ = ((lean_object*)(l___private_Lean_IdentifierSuggestion_0__Lean_initFn___lam__1___closed__2_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2_));
v___x_770_ = l_Lean_stringToMessageData(v___x_769_);
return v___x_770_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_IdentifierSuggestion_0__Lean_initFn___lam__1_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2_(lean_object* v___x_771_, lean_object* v_decl_772_, lean_object* v___y_773_, lean_object* v___y_774_){
_start:
{
lean_object* v___x_776_; lean_object* v___x_777_; lean_object* v___x_778_; lean_object* v___x_779_; lean_object* v___x_780_; lean_object* v___x_781_; 
v___x_776_ = lean_obj_once(&l___private_Lean_IdentifierSuggestion_0__Lean_initFn___lam__1___closed__1_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2_, &l___private_Lean_IdentifierSuggestion_0__Lean_initFn___lam__1___closed__1_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2__once, _init_l___private_Lean_IdentifierSuggestion_0__Lean_initFn___lam__1___closed__1_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2_);
v___x_777_ = l_Lean_MessageData_ofName(v___x_771_);
v___x_778_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_778_, 0, v___x_776_);
lean_ctor_set(v___x_778_, 1, v___x_777_);
v___x_779_ = lean_obj_once(&l___private_Lean_IdentifierSuggestion_0__Lean_initFn___lam__1___closed__3_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2_, &l___private_Lean_IdentifierSuggestion_0__Lean_initFn___lam__1___closed__3_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2__once, _init_l___private_Lean_IdentifierSuggestion_0__Lean_initFn___lam__1___closed__3_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2_);
v___x_780_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_780_, 0, v___x_778_);
lean_ctor_set(v___x_780_, 1, v___x_779_);
v___x_781_ = l_Lean_throwError___at___00__private_Lean_IdentifierSuggestion_0__Lean_initFn_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2__spec__0___redArg(v___x_780_, v___y_773_, v___y_774_);
return v___x_781_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_IdentifierSuggestion_0__Lean_initFn___lam__1_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2____boxed(lean_object* v___x_782_, lean_object* v_decl_783_, lean_object* v___y_784_, lean_object* v___y_785_, lean_object* v___y_786_){
_start:
{
lean_object* v_res_787_; 
v_res_787_ = l___private_Lean_IdentifierSuggestion_0__Lean_initFn___lam__1_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2_(v___x_782_, v_decl_783_, v___y_784_, v___y_785_);
lean_dec(v___y_785_);
lean_dec_ref(v___y_784_);
lean_dec(v_decl_783_);
return v_res_787_;
}
}
static lean_object* _init_l___private_Lean_IdentifierSuggestion_0__Lean_initFn___closed__0_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_788_; lean_object* v___x_789_; 
v___x_788_ = lean_box(0);
v___x_789_ = l_unsafeCast___redArg(v___x_788_);
return v___x_789_;
}
}
static lean_object* _init_l___private_Lean_IdentifierSuggestion_0__Lean_initFn___closed__2_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_791_; lean_object* v___x_792_; lean_object* v___x_793_; 
v___x_791_ = ((lean_object*)(l___private_Lean_IdentifierSuggestion_0__Lean_initFn___closed__1_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2_));
v___x_792_ = lean_obj_once(&l___private_Lean_IdentifierSuggestion_0__Lean_initFn___closed__0_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2_, &l___private_Lean_IdentifierSuggestion_0__Lean_initFn___closed__0_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2__once, _init_l___private_Lean_IdentifierSuggestion_0__Lean_initFn___closed__0_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2_);
v___x_793_ = l_Lean_Name_str___override(v___x_792_, v___x_791_);
return v___x_793_;
}
}
static lean_object* _init_l___private_Lean_IdentifierSuggestion_0__Lean_initFn___closed__3_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_794_; lean_object* v___x_795_; lean_object* v___x_796_; 
v___x_794_ = ((lean_object*)(l___private_Lean_IdentifierSuggestion_0__Lean_mkExistingToIncorrect___closed__4));
v___x_795_ = lean_obj_once(&l___private_Lean_IdentifierSuggestion_0__Lean_initFn___closed__2_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2_, &l___private_Lean_IdentifierSuggestion_0__Lean_initFn___closed__2_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2__once, _init_l___private_Lean_IdentifierSuggestion_0__Lean_initFn___closed__2_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2_);
v___x_796_ = l_Lean_Name_str___override(v___x_795_, v___x_794_);
return v___x_796_;
}
}
static lean_object* _init_l___private_Lean_IdentifierSuggestion_0__Lean_initFn___closed__5_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_798_; lean_object* v___x_799_; lean_object* v___x_800_; 
v___x_798_ = ((lean_object*)(l___private_Lean_IdentifierSuggestion_0__Lean_initFn___closed__4_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2_));
v___x_799_ = lean_obj_once(&l___private_Lean_IdentifierSuggestion_0__Lean_initFn___closed__3_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2_, &l___private_Lean_IdentifierSuggestion_0__Lean_initFn___closed__3_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2__once, _init_l___private_Lean_IdentifierSuggestion_0__Lean_initFn___closed__3_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2_);
v___x_800_ = l_Lean_Name_str___override(v___x_799_, v___x_798_);
return v___x_800_;
}
}
static lean_object* _init_l___private_Lean_IdentifierSuggestion_0__Lean_initFn___closed__6_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_801_; lean_object* v___x_802_; lean_object* v___x_803_; 
v___x_801_ = lean_unsigned_to_nat(0u);
v___x_802_ = lean_obj_once(&l___private_Lean_IdentifierSuggestion_0__Lean_initFn___closed__5_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2_, &l___private_Lean_IdentifierSuggestion_0__Lean_initFn___closed__5_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2__once, _init_l___private_Lean_IdentifierSuggestion_0__Lean_initFn___closed__5_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2_);
v___x_803_ = l_Lean_Name_num___override(v___x_802_, v___x_801_);
return v___x_803_;
}
}
static lean_object* _init_l___private_Lean_IdentifierSuggestion_0__Lean_initFn___closed__7_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_804_; lean_object* v___x_805_; lean_object* v___x_806_; 
v___x_804_ = ((lean_object*)(l___private_Lean_IdentifierSuggestion_0__Lean_mkExistingToIncorrect___closed__4));
v___x_805_ = lean_obj_once(&l___private_Lean_IdentifierSuggestion_0__Lean_initFn___closed__6_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2_, &l___private_Lean_IdentifierSuggestion_0__Lean_initFn___closed__6_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2__once, _init_l___private_Lean_IdentifierSuggestion_0__Lean_initFn___closed__6_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2_);
v___x_806_ = l_Lean_Name_str___override(v___x_805_, v___x_804_);
return v___x_806_;
}
}
static lean_object* _init_l___private_Lean_IdentifierSuggestion_0__Lean_initFn___closed__9_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_808_; lean_object* v___x_809_; lean_object* v___x_810_; 
v___x_808_ = ((lean_object*)(l___private_Lean_IdentifierSuggestion_0__Lean_initFn___closed__8_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2_));
v___x_809_ = lean_obj_once(&l___private_Lean_IdentifierSuggestion_0__Lean_initFn___closed__7_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2_, &l___private_Lean_IdentifierSuggestion_0__Lean_initFn___closed__7_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2__once, _init_l___private_Lean_IdentifierSuggestion_0__Lean_initFn___closed__7_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2_);
v___x_810_ = l_Lean_Name_str___override(v___x_809_, v___x_808_);
return v___x_810_;
}
}
static lean_object* _init_l___private_Lean_IdentifierSuggestion_0__Lean_initFn___closed__14_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2_(void){
_start:
{
uint8_t v___x_817_; lean_object* v___x_818_; lean_object* v___x_819_; lean_object* v___x_820_; lean_object* v___x_821_; 
v___x_817_ = 0;
v___x_818_ = ((lean_object*)(l___private_Lean_IdentifierSuggestion_0__Lean_initFn___closed__13_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2_));
v___x_819_ = ((lean_object*)(l___private_Lean_IdentifierSuggestion_0__Lean_initFn___closed__11_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2_));
v___x_820_ = lean_obj_once(&l___private_Lean_IdentifierSuggestion_0__Lean_initFn___closed__9_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2_, &l___private_Lean_IdentifierSuggestion_0__Lean_initFn___closed__9_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2__once, _init_l___private_Lean_IdentifierSuggestion_0__Lean_initFn___closed__9_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2_);
v___x_821_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_821_, 0, v___x_820_);
lean_ctor_set(v___x_821_, 1, v___x_819_);
lean_ctor_set(v___x_821_, 2, v___x_818_);
lean_ctor_set_uint8(v___x_821_, sizeof(void*)*3, v___x_817_);
return v___x_821_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_IdentifierSuggestion_0__Lean_initFn_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_823_; 
v___x_823_ = l___private_Lean_IdentifierSuggestion_0__Lean_mkExistingToIncorrect();
if (lean_obj_tag(v___x_823_) == 0)
{
lean_object* v_a_824_; lean_object* v___x_825_; 
v_a_824_ = lean_ctor_get(v___x_823_, 0);
lean_inc(v_a_824_);
lean_dec_ref_known(v___x_823_, 1);
v___x_825_ = l___private_Lean_IdentifierSuggestion_0__Lean_mkIncorrectToExisting();
if (lean_obj_tag(v___x_825_) == 0)
{
lean_object* v_a_826_; lean_object* v___x_827_; lean_object* v___x_828_; lean_object* v___x_829_; lean_object* v___x_830_; lean_object* v___x_831_; lean_object* v___f_832_; lean_object* v___f_833_; lean_object* v___x_834_; lean_object* v___x_835_; lean_object* v___x_836_; 
v_a_826_ = lean_ctor_get(v___x_825_, 0);
lean_inc_n(v_a_826_, 2);
lean_dec_ref_known(v___x_825_, 1);
v___x_827_ = lean_obj_once(&l___private_Lean_IdentifierSuggestion_0__Lean_initFn___closed__0_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2_, &l___private_Lean_IdentifierSuggestion_0__Lean_initFn___closed__0_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2__once, _init_l___private_Lean_IdentifierSuggestion_0__Lean_initFn___closed__0_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2_);
v___x_828_ = ((lean_object*)(l___private_Lean_IdentifierSuggestion_0__Lean_mkExistingToIncorrect___closed__4));
v___x_829_ = lean_unsigned_to_nat(0u);
v___x_830_ = ((lean_object*)(l___private_Lean_IdentifierSuggestion_0__Lean_initFn___closed__10_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2_));
v___x_831_ = ((lean_object*)(l___private_Lean_IdentifierSuggestion_0__Lean_initFn___closed__11_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2_));
lean_inc(v_a_824_);
v___f_832_ = lean_alloc_closure((void*)(l___private_Lean_IdentifierSuggestion_0__Lean_initFn___lam__0_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2____boxed), 13, 7);
lean_closure_set(v___f_832_, 0, v_a_824_);
lean_closure_set(v___f_832_, 1, v___x_827_);
lean_closure_set(v___f_832_, 2, v_a_826_);
lean_closure_set(v___f_832_, 3, v___x_829_);
lean_closure_set(v___f_832_, 4, v___x_828_);
lean_closure_set(v___f_832_, 5, v___x_830_);
lean_closure_set(v___f_832_, 6, v___x_831_);
v___f_833_ = ((lean_object*)(l___private_Lean_IdentifierSuggestion_0__Lean_initFn___closed__12_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2_));
v___x_834_ = lean_obj_once(&l___private_Lean_IdentifierSuggestion_0__Lean_initFn___closed__14_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2_, &l___private_Lean_IdentifierSuggestion_0__Lean_initFn___closed__14_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2__once, _init_l___private_Lean_IdentifierSuggestion_0__Lean_initFn___closed__14_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2_);
v___x_835_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_835_, 0, v___x_834_);
lean_ctor_set(v___x_835_, 1, v___f_832_);
lean_ctor_set(v___x_835_, 2, v___f_833_);
v___x_836_ = l_Lean_registerBuiltinAttribute(v___x_835_);
if (lean_obj_tag(v___x_836_) == 0)
{
lean_object* v___x_838_; uint8_t v_isShared_839_; uint8_t v_isSharedCheck_844_; 
v_isSharedCheck_844_ = !lean_is_exclusive(v___x_836_);
if (v_isSharedCheck_844_ == 0)
{
lean_object* v_unused_845_; 
v_unused_845_ = lean_ctor_get(v___x_836_, 0);
lean_dec(v_unused_845_);
v___x_838_ = v___x_836_;
v_isShared_839_ = v_isSharedCheck_844_;
goto v_resetjp_837_;
}
else
{
lean_dec(v___x_836_);
v___x_838_ = lean_box(0);
v_isShared_839_ = v_isSharedCheck_844_;
goto v_resetjp_837_;
}
v_resetjp_837_:
{
lean_object* v___x_840_; lean_object* v___x_842_; 
v___x_840_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_840_, 0, v_a_824_);
lean_ctor_set(v___x_840_, 1, v_a_826_);
if (v_isShared_839_ == 0)
{
lean_ctor_set(v___x_838_, 0, v___x_840_);
v___x_842_ = v___x_838_;
goto v_reusejp_841_;
}
else
{
lean_object* v_reuseFailAlloc_843_; 
v_reuseFailAlloc_843_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_843_, 0, v___x_840_);
v___x_842_ = v_reuseFailAlloc_843_;
goto v_reusejp_841_;
}
v_reusejp_841_:
{
return v___x_842_;
}
}
}
else
{
lean_object* v_a_846_; lean_object* v___x_848_; uint8_t v_isShared_849_; uint8_t v_isSharedCheck_853_; 
lean_dec(v_a_826_);
lean_dec(v_a_824_);
v_a_846_ = lean_ctor_get(v___x_836_, 0);
v_isSharedCheck_853_ = !lean_is_exclusive(v___x_836_);
if (v_isSharedCheck_853_ == 0)
{
v___x_848_ = v___x_836_;
v_isShared_849_ = v_isSharedCheck_853_;
goto v_resetjp_847_;
}
else
{
lean_inc(v_a_846_);
lean_dec(v___x_836_);
v___x_848_ = lean_box(0);
v_isShared_849_ = v_isSharedCheck_853_;
goto v_resetjp_847_;
}
v_resetjp_847_:
{
lean_object* v___x_851_; 
if (v_isShared_849_ == 0)
{
v___x_851_ = v___x_848_;
goto v_reusejp_850_;
}
else
{
lean_object* v_reuseFailAlloc_852_; 
v_reuseFailAlloc_852_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_852_, 0, v_a_846_);
v___x_851_ = v_reuseFailAlloc_852_;
goto v_reusejp_850_;
}
v_reusejp_850_:
{
return v___x_851_;
}
}
}
}
else
{
lean_object* v_a_854_; lean_object* v___x_856_; uint8_t v_isShared_857_; uint8_t v_isSharedCheck_861_; 
lean_dec(v_a_824_);
v_a_854_ = lean_ctor_get(v___x_825_, 0);
v_isSharedCheck_861_ = !lean_is_exclusive(v___x_825_);
if (v_isSharedCheck_861_ == 0)
{
v___x_856_ = v___x_825_;
v_isShared_857_ = v_isSharedCheck_861_;
goto v_resetjp_855_;
}
else
{
lean_inc(v_a_854_);
lean_dec(v___x_825_);
v___x_856_ = lean_box(0);
v_isShared_857_ = v_isSharedCheck_861_;
goto v_resetjp_855_;
}
v_resetjp_855_:
{
lean_object* v___x_859_; 
if (v_isShared_857_ == 0)
{
v___x_859_ = v___x_856_;
goto v_reusejp_858_;
}
else
{
lean_object* v_reuseFailAlloc_860_; 
v_reuseFailAlloc_860_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_860_, 0, v_a_854_);
v___x_859_ = v_reuseFailAlloc_860_;
goto v_reusejp_858_;
}
v_reusejp_858_:
{
return v___x_859_;
}
}
}
}
else
{
lean_object* v_a_862_; lean_object* v___x_864_; uint8_t v_isShared_865_; uint8_t v_isSharedCheck_869_; 
v_a_862_ = lean_ctor_get(v___x_823_, 0);
v_isSharedCheck_869_ = !lean_is_exclusive(v___x_823_);
if (v_isSharedCheck_869_ == 0)
{
v___x_864_ = v___x_823_;
v_isShared_865_ = v_isSharedCheck_869_;
goto v_resetjp_863_;
}
else
{
lean_inc(v_a_862_);
lean_dec(v___x_823_);
v___x_864_ = lean_box(0);
v_isShared_865_ = v_isSharedCheck_869_;
goto v_resetjp_863_;
}
v_resetjp_863_:
{
lean_object* v___x_867_; 
if (v_isShared_865_ == 0)
{
v___x_867_ = v___x_864_;
goto v_reusejp_866_;
}
else
{
lean_object* v_reuseFailAlloc_868_; 
v_reuseFailAlloc_868_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_868_, 0, v_a_862_);
v___x_867_ = v_reuseFailAlloc_868_;
goto v_reusejp_866_;
}
v_reusejp_866_:
{
return v___x_867_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_IdentifierSuggestion_0__Lean_initFn_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2____boxed(lean_object* v_a_870_){
_start:
{
lean_object* v_res_871_; 
v_res_871_ = l___private_Lean_IdentifierSuggestion_0__Lean_initFn_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2_();
return v_res_871_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_IdentifierSuggestion_0__Lean_initFn_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2__spec__0(lean_object* v_00_u03b1_872_, lean_object* v_msg_873_, lean_object* v___y_874_, lean_object* v___y_875_){
_start:
{
lean_object* v___x_877_; 
v___x_877_ = l_Lean_throwError___at___00__private_Lean_IdentifierSuggestion_0__Lean_initFn_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2__spec__0___redArg(v_msg_873_, v___y_874_, v___y_875_);
return v___x_877_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_IdentifierSuggestion_0__Lean_initFn_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2__spec__0___boxed(lean_object* v_00_u03b1_878_, lean_object* v_msg_879_, lean_object* v___y_880_, lean_object* v___y_881_, lean_object* v___y_882_){
_start:
{
lean_object* v_res_883_; 
v_res_883_ = l_Lean_throwError___at___00__private_Lean_IdentifierSuggestion_0__Lean_initFn_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2__spec__0(v_00_u03b1_878_, v_msg_879_, v___y_880_, v___y_881_);
lean_dec(v___y_881_);
lean_dec_ref(v___y_880_);
return v_res_883_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_IdentifierSuggestion_0__Lean_initFn_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2__spec__2(lean_object* v_00_u03b1_884_, lean_object* v_name_885_, uint8_t v_kind_886_, lean_object* v___y_887_, lean_object* v___y_888_){
_start:
{
lean_object* v___x_890_; 
v___x_890_ = l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_IdentifierSuggestion_0__Lean_initFn_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2__spec__2___redArg(v_name_885_, v_kind_886_, v___y_887_, v___y_888_);
return v___x_890_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_IdentifierSuggestion_0__Lean_initFn_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2__spec__2___boxed(lean_object* v_00_u03b1_891_, lean_object* v_name_892_, lean_object* v_kind_893_, lean_object* v___y_894_, lean_object* v___y_895_, lean_object* v___y_896_){
_start:
{
uint8_t v_kind_boxed_897_; lean_object* v_res_898_; 
v_kind_boxed_897_ = lean_unbox(v_kind_893_);
v_res_898_ = l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_IdentifierSuggestion_0__Lean_initFn_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2__spec__2(v_00_u03b1_891_, v_name_892_, v_kind_boxed_897_, v___y_894_, v___y_895_);
lean_dec(v___y_895_);
lean_dec_ref(v___y_894_);
return v_res_898_;
}
}
LEAN_EXPORT lean_object* l_Lean_getSuggestions___redArg___lam__1(lean_object* v_incorrectName_921_, lean_object* v___f_922_, lean_object* v___f_923_, lean_object* v_x1_924_, lean_object* v_x2_925_){
_start:
{
lean_object* v___x_926_; lean_object* v___x_927_; uint8_t v___x_928_; 
v___x_926_ = lean_unsigned_to_nat(0u);
v___x_927_ = lean_array_get_size(v_x2_925_);
v___x_928_ = lean_nat_dec_lt(v___x_926_, v___x_927_);
if (v___x_928_ == 0)
{
lean_dec_ref(v___f_923_);
lean_dec_ref(v___f_922_);
lean_dec(v_incorrectName_921_);
return v_x1_924_;
}
else
{
lean_object* v___x_929_; lean_object* v___x_930_; uint8_t v___x_931_; 
v___x_929_ = lean_unsigned_to_nat(1u);
v___x_930_ = lean_nat_sub(v___x_927_, v___x_929_);
v___x_931_ = lean_nat_dec_le(v___x_926_, v___x_930_);
if (v___x_931_ == 0)
{
lean_dec(v___x_930_);
lean_dec_ref(v___f_923_);
lean_dec_ref(v___f_922_);
lean_dec(v_incorrectName_921_);
return v_x1_924_;
}
else
{
lean_object* v___x_932_; lean_object* v___x_933_; lean_object* v___x_934_; lean_object* v___x_935_; 
v___x_932_ = ((lean_object*)(l_Lean_getSuggestions___redArg___lam__1___closed__0));
v___x_933_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_933_, 0, v_incorrectName_921_);
lean_ctor_set(v___x_933_, 1, v___x_932_);
v___x_934_ = ((lean_object*)(l_Lean_getSuggestions___redArg___lam__1___closed__1));
v___x_935_ = l_Array_binSearchAux___redArg(v___f_922_, v___x_934_, v_x2_925_, v___x_933_, v___x_926_, v___x_930_);
if (lean_obj_tag(v___x_935_) == 0)
{
lean_dec_ref(v___f_923_);
return v_x1_924_;
}
else
{
lean_object* v_val_936_; lean_object* v_snd_937_; lean_object* v___x_938_; lean_object* v___x_939_; uint8_t v___x_940_; 
v_val_936_ = lean_ctor_get(v___x_935_, 0);
lean_inc(v_val_936_);
lean_dec_ref_known(v___x_935_, 1);
v_snd_937_ = lean_ctor_get(v_val_936_, 1);
lean_inc(v_snd_937_);
lean_dec(v_val_936_);
v___x_938_ = lean_array_get_size(v_snd_937_);
v___x_939_ = ((lean_object*)(l_Lean_getSuggestions___redArg___lam__1___closed__11));
v___x_940_ = lean_nat_dec_lt(v___x_926_, v___x_938_);
if (v___x_940_ == 0)
{
lean_dec(v_snd_937_);
lean_dec_ref(v___f_923_);
return v_x1_924_;
}
else
{
uint8_t v___x_941_; 
v___x_941_ = lean_nat_dec_le(v___x_938_, v___x_938_);
if (v___x_941_ == 0)
{
if (v___x_940_ == 0)
{
lean_dec(v_snd_937_);
lean_dec_ref(v___f_923_);
return v_x1_924_;
}
else
{
size_t v___x_942_; size_t v___x_943_; lean_object* v___x_944_; 
v___x_942_ = ((size_t)0ULL);
v___x_943_ = lean_usize_of_nat(v___x_938_);
v___x_944_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_939_, v___f_923_, v_snd_937_, v___x_942_, v___x_943_, v_x1_924_);
return v___x_944_;
}
}
else
{
size_t v___x_945_; size_t v___x_946_; lean_object* v___x_947_; 
v___x_945_ = ((size_t)0ULL);
v___x_946_ = lean_usize_of_nat(v___x_938_);
v___x_947_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_939_, v___f_923_, v_snd_937_, v___x_945_, v___x_946_, v_x1_924_);
return v___x_947_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_getSuggestions___redArg___lam__1___boxed(lean_object* v_incorrectName_948_, lean_object* v___f_949_, lean_object* v___f_950_, lean_object* v_x1_951_, lean_object* v_x2_952_){
_start:
{
lean_object* v_res_953_; 
v_res_953_ = l_Lean_getSuggestions___redArg___lam__1(v_incorrectName_948_, v___f_949_, v___f_950_, v_x1_951_, v_x2_952_);
lean_dec_ref(v_x2_952_);
return v_res_953_;
}
}
LEAN_EXPORT lean_object* l_Lean_getSuggestions___redArg___lam__0(lean_object* v___x_954_, lean_object* v_toPure_955_, lean_object* v___f_956_, lean_object* v_incorrectName_957_, lean_object* v_env_958_){
_start:
{
lean_object* v___x_959_; lean_object* v_snd_960_; lean_object* v_toEnvExtension_961_; lean_object* v_asyncMode_962_; lean_object* v___x_963_; lean_object* v___x_964_; lean_object* v_importedEntries_965_; lean_object* v_state_966_; lean_object* v___y_968_; lean_object* v___x_984_; 
v___x_959_ = l___private_Lean_IdentifierSuggestion_0__Lean_identifierSuggestionsImpl;
v_snd_960_ = lean_ctor_get(v___x_959_, 1);
v_toEnvExtension_961_ = lean_ctor_get(v_snd_960_, 0);
v_asyncMode_962_ = lean_ctor_get(v_toEnvExtension_961_, 2);
v___x_963_ = lean_obj_once(&l___private_Lean_IdentifierSuggestion_0__Lean_initFn___closed__0_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2_, &l___private_Lean_IdentifierSuggestion_0__Lean_initFn___closed__0_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2__once, _init_l___private_Lean_IdentifierSuggestion_0__Lean_initFn___closed__0_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2_);
v___x_964_ = l___private_Lean_Environment_0__Lean_EnvExtension_getStateUnsafe___redArg(v___x_954_, v_toEnvExtension_961_, v_env_958_, v_asyncMode_962_, v___x_963_);
v_importedEntries_965_ = lean_ctor_get(v___x_964_, 0);
lean_inc_ref(v_importedEntries_965_);
v_state_966_ = lean_ctor_get(v___x_964_, 1);
lean_inc(v_state_966_);
lean_dec(v___x_964_);
v___x_984_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_state_966_, v_incorrectName_957_);
lean_dec(v_state_966_);
if (lean_obj_tag(v___x_984_) == 0)
{
lean_object* v___x_985_; 
v___x_985_ = l_Lean_NameSet_empty;
v___y_968_ = v___x_985_;
goto v___jp_967_;
}
else
{
lean_object* v_val_986_; 
v_val_986_ = lean_ctor_get(v___x_984_, 0);
lean_inc(v_val_986_);
lean_dec_ref_known(v___x_984_, 1);
v___y_968_ = v_val_986_;
goto v___jp_967_;
}
v___jp_967_:
{
lean_object* v___x_969_; lean_object* v___x_970_; lean_object* v___x_971_; uint8_t v___x_972_; 
v___x_969_ = lean_unsigned_to_nat(0u);
v___x_970_ = lean_array_get_size(v_importedEntries_965_);
v___x_971_ = ((lean_object*)(l_Lean_getSuggestions___redArg___lam__1___closed__11));
v___x_972_ = lean_nat_dec_lt(v___x_969_, v___x_970_);
if (v___x_972_ == 0)
{
lean_object* v___x_973_; 
lean_dec_ref(v_importedEntries_965_);
lean_dec_ref(v___f_956_);
v___x_973_ = lean_apply_2(v_toPure_955_, lean_box(0), v___y_968_);
return v___x_973_;
}
else
{
uint8_t v___x_974_; 
v___x_974_ = lean_nat_dec_le(v___x_970_, v___x_970_);
if (v___x_974_ == 0)
{
if (v___x_972_ == 0)
{
lean_object* v___x_975_; 
lean_dec_ref(v_importedEntries_965_);
lean_dec_ref(v___f_956_);
v___x_975_ = lean_apply_2(v_toPure_955_, lean_box(0), v___y_968_);
return v___x_975_;
}
else
{
size_t v___x_976_; size_t v___x_977_; lean_object* v___x_978_; lean_object* v___x_979_; 
v___x_976_ = ((size_t)0ULL);
v___x_977_ = lean_usize_of_nat(v___x_970_);
v___x_978_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_971_, v___f_956_, v_importedEntries_965_, v___x_976_, v___x_977_, v___y_968_);
v___x_979_ = lean_apply_2(v_toPure_955_, lean_box(0), v___x_978_);
return v___x_979_;
}
}
else
{
size_t v___x_980_; size_t v___x_981_; lean_object* v___x_982_; lean_object* v___x_983_; 
v___x_980_ = ((size_t)0ULL);
v___x_981_ = lean_usize_of_nat(v___x_970_);
v___x_982_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_971_, v___f_956_, v_importedEntries_965_, v___x_980_, v___x_981_, v___y_968_);
v___x_983_ = lean_apply_2(v_toPure_955_, lean_box(0), v___x_982_);
return v___x_983_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_getSuggestions___redArg___lam__0___boxed(lean_object* v___x_987_, lean_object* v_toPure_988_, lean_object* v___f_989_, lean_object* v_incorrectName_990_, lean_object* v_env_991_){
_start:
{
lean_object* v_res_992_; 
v_res_992_ = l_Lean_getSuggestions___redArg___lam__0(v___x_987_, v_toPure_988_, v___f_989_, v_incorrectName_990_, v_env_991_);
lean_dec(v_incorrectName_990_);
lean_dec_ref(v___x_987_);
return v_res_992_;
}
}
static lean_object* _init_l_Lean_getSuggestions___redArg___closed__2(void){
_start:
{
lean_object* v___x_995_; lean_object* v___x_996_; 
v___x_995_ = lean_box(1);
v___x_996_ = l_Lean_instInhabitedPersistentEnvExtensionState___redArg(v___x_995_);
return v___x_996_;
}
}
LEAN_EXPORT lean_object* l_Lean_getSuggestions___redArg(lean_object* v_inst_997_, lean_object* v_inst_998_, lean_object* v_incorrectName_999_){
_start:
{
lean_object* v_toApplicative_1000_; lean_object* v_toBind_1001_; lean_object* v_getEnv_1002_; lean_object* v_toPure_1003_; lean_object* v___f_1004_; lean_object* v___f_1005_; lean_object* v___f_1006_; lean_object* v___x_1007_; lean_object* v___f_1008_; lean_object* v___x_1009_; 
v_toApplicative_1000_ = lean_ctor_get(v_inst_997_, 0);
lean_inc_ref(v_toApplicative_1000_);
v_toBind_1001_ = lean_ctor_get(v_inst_997_, 1);
lean_inc(v_toBind_1001_);
lean_dec_ref(v_inst_997_);
v_getEnv_1002_ = lean_ctor_get(v_inst_998_, 0);
lean_inc(v_getEnv_1002_);
lean_dec_ref(v_inst_998_);
v_toPure_1003_ = lean_ctor_get(v_toApplicative_1000_, 1);
lean_inc(v_toPure_1003_);
lean_dec_ref(v_toApplicative_1000_);
v___f_1004_ = ((lean_object*)(l_Lean_getSuggestions___redArg___closed__0));
v___f_1005_ = ((lean_object*)(l_Lean_getSuggestions___redArg___closed__1));
lean_inc(v_incorrectName_999_);
v___f_1006_ = lean_alloc_closure((void*)(l_Lean_getSuggestions___redArg___lam__1___boxed), 5, 3);
lean_closure_set(v___f_1006_, 0, v_incorrectName_999_);
lean_closure_set(v___f_1006_, 1, v___f_1004_);
lean_closure_set(v___f_1006_, 2, v___f_1005_);
v___x_1007_ = lean_obj_once(&l_Lean_getSuggestions___redArg___closed__2, &l_Lean_getSuggestions___redArg___closed__2_once, _init_l_Lean_getSuggestions___redArg___closed__2);
v___f_1008_ = lean_alloc_closure((void*)(l_Lean_getSuggestions___redArg___lam__0___boxed), 5, 4);
lean_closure_set(v___f_1008_, 0, v___x_1007_);
lean_closure_set(v___f_1008_, 1, v_toPure_1003_);
lean_closure_set(v___f_1008_, 2, v___f_1006_);
lean_closure_set(v___f_1008_, 3, v_incorrectName_999_);
v___x_1009_ = lean_apply_4(v_toBind_1001_, lean_box(0), lean_box(0), v_getEnv_1002_, v___f_1008_);
return v___x_1009_;
}
}
LEAN_EXPORT lean_object* l_Lean_getSuggestions(lean_object* v_m_1010_, lean_object* v_inst_1011_, lean_object* v_inst_1012_, lean_object* v_incorrectName_1013_){
_start:
{
lean_object* v___x_1014_; 
v___x_1014_ = l_Lean_getSuggestions___redArg(v_inst_1011_, v_inst_1012_, v_incorrectName_1013_);
return v___x_1014_;
}
}
LEAN_EXPORT lean_object* l_Lean_getStoredSuggestions___redArg___lam__1(lean_object* v_trueName_1015_, lean_object* v___f_1016_, lean_object* v___f_1017_, lean_object* v_x1_1018_, lean_object* v_x2_1019_){
_start:
{
lean_object* v___x_1020_; lean_object* v___x_1021_; uint8_t v___x_1022_; 
v___x_1020_ = lean_unsigned_to_nat(0u);
v___x_1021_ = lean_array_get_size(v_x2_1019_);
v___x_1022_ = lean_nat_dec_lt(v___x_1020_, v___x_1021_);
if (v___x_1022_ == 0)
{
lean_dec_ref(v___f_1017_);
lean_dec_ref(v___f_1016_);
lean_dec(v_trueName_1015_);
return v_x1_1018_;
}
else
{
lean_object* v___x_1023_; lean_object* v___x_1024_; uint8_t v___x_1025_; 
v___x_1023_ = lean_unsigned_to_nat(1u);
v___x_1024_ = lean_nat_sub(v___x_1021_, v___x_1023_);
v___x_1025_ = lean_nat_dec_le(v___x_1020_, v___x_1024_);
if (v___x_1025_ == 0)
{
lean_dec(v___x_1024_);
lean_dec_ref(v___f_1017_);
lean_dec_ref(v___f_1016_);
lean_dec(v_trueName_1015_);
return v_x1_1018_;
}
else
{
lean_object* v___x_1026_; lean_object* v___x_1027_; lean_object* v___x_1028_; lean_object* v___x_1029_; 
v___x_1026_ = ((lean_object*)(l_Lean_getSuggestions___redArg___lam__1___closed__0));
v___x_1027_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1027_, 0, v_trueName_1015_);
lean_ctor_set(v___x_1027_, 1, v___x_1026_);
v___x_1028_ = ((lean_object*)(l_Lean_getSuggestions___redArg___lam__1___closed__1));
v___x_1029_ = l_Array_binSearchAux___redArg(v___f_1016_, v___x_1028_, v_x2_1019_, v___x_1027_, v___x_1020_, v___x_1024_);
if (lean_obj_tag(v___x_1029_) == 0)
{
lean_dec_ref(v___f_1017_);
return v_x1_1018_;
}
else
{
lean_object* v_val_1030_; lean_object* v_snd_1031_; lean_object* v___x_1032_; lean_object* v___x_1033_; uint8_t v___x_1034_; 
v_val_1030_ = lean_ctor_get(v___x_1029_, 0);
lean_inc(v_val_1030_);
lean_dec_ref_known(v___x_1029_, 1);
v_snd_1031_ = lean_ctor_get(v_val_1030_, 1);
lean_inc(v_snd_1031_);
lean_dec(v_val_1030_);
v___x_1032_ = lean_array_get_size(v_snd_1031_);
v___x_1033_ = ((lean_object*)(l_Lean_getSuggestions___redArg___lam__1___closed__11));
v___x_1034_ = lean_nat_dec_lt(v___x_1020_, v___x_1032_);
if (v___x_1034_ == 0)
{
lean_dec(v_snd_1031_);
lean_dec_ref(v___f_1017_);
return v_x1_1018_;
}
else
{
uint8_t v___x_1035_; 
v___x_1035_ = lean_nat_dec_le(v___x_1032_, v___x_1032_);
if (v___x_1035_ == 0)
{
if (v___x_1034_ == 0)
{
lean_dec(v_snd_1031_);
lean_dec_ref(v___f_1017_);
return v_x1_1018_;
}
else
{
size_t v___x_1036_; size_t v___x_1037_; lean_object* v___x_1038_; 
v___x_1036_ = ((size_t)0ULL);
v___x_1037_ = lean_usize_of_nat(v___x_1032_);
v___x_1038_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_1033_, v___f_1017_, v_snd_1031_, v___x_1036_, v___x_1037_, v_x1_1018_);
return v___x_1038_;
}
}
else
{
size_t v___x_1039_; size_t v___x_1040_; lean_object* v___x_1041_; 
v___x_1039_ = ((size_t)0ULL);
v___x_1040_ = lean_usize_of_nat(v___x_1032_);
v___x_1041_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_1033_, v___f_1017_, v_snd_1031_, v___x_1039_, v___x_1040_, v_x1_1018_);
return v___x_1041_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_getStoredSuggestions___redArg___lam__1___boxed(lean_object* v_trueName_1042_, lean_object* v___f_1043_, lean_object* v___f_1044_, lean_object* v_x1_1045_, lean_object* v_x2_1046_){
_start:
{
lean_object* v_res_1047_; 
v_res_1047_ = l_Lean_getStoredSuggestions___redArg___lam__1(v_trueName_1042_, v___f_1043_, v___f_1044_, v_x1_1045_, v_x2_1046_);
lean_dec_ref(v_x2_1046_);
return v_res_1047_;
}
}
LEAN_EXPORT lean_object* l_Lean_getStoredSuggestions___redArg___lam__0(lean_object* v___x_1048_, lean_object* v_toPure_1049_, lean_object* v___f_1050_, lean_object* v_trueName_1051_, lean_object* v_env_1052_){
_start:
{
lean_object* v___x_1053_; lean_object* v_fst_1054_; lean_object* v_toEnvExtension_1055_; lean_object* v_asyncMode_1056_; lean_object* v___x_1057_; lean_object* v___x_1058_; lean_object* v_importedEntries_1059_; lean_object* v_state_1060_; lean_object* v___y_1062_; lean_object* v___x_1078_; 
v___x_1053_ = l___private_Lean_IdentifierSuggestion_0__Lean_identifierSuggestionsImpl;
v_fst_1054_ = lean_ctor_get(v___x_1053_, 0);
v_toEnvExtension_1055_ = lean_ctor_get(v_fst_1054_, 0);
v_asyncMode_1056_ = lean_ctor_get(v_toEnvExtension_1055_, 2);
v___x_1057_ = lean_obj_once(&l___private_Lean_IdentifierSuggestion_0__Lean_initFn___closed__0_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2_, &l___private_Lean_IdentifierSuggestion_0__Lean_initFn___closed__0_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2__once, _init_l___private_Lean_IdentifierSuggestion_0__Lean_initFn___closed__0_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2_);
v___x_1058_ = l___private_Lean_Environment_0__Lean_EnvExtension_getStateUnsafe___redArg(v___x_1048_, v_toEnvExtension_1055_, v_env_1052_, v_asyncMode_1056_, v___x_1057_);
v_importedEntries_1059_ = lean_ctor_get(v___x_1058_, 0);
lean_inc_ref(v_importedEntries_1059_);
v_state_1060_ = lean_ctor_get(v___x_1058_, 1);
lean_inc(v_state_1060_);
lean_dec(v___x_1058_);
v___x_1078_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_state_1060_, v_trueName_1051_);
lean_dec(v_state_1060_);
if (lean_obj_tag(v___x_1078_) == 0)
{
lean_object* v___x_1079_; 
v___x_1079_ = l_Lean_NameSet_empty;
v___y_1062_ = v___x_1079_;
goto v___jp_1061_;
}
else
{
lean_object* v_val_1080_; 
v_val_1080_ = lean_ctor_get(v___x_1078_, 0);
lean_inc(v_val_1080_);
lean_dec_ref_known(v___x_1078_, 1);
v___y_1062_ = v_val_1080_;
goto v___jp_1061_;
}
v___jp_1061_:
{
lean_object* v___x_1063_; lean_object* v___x_1064_; lean_object* v___x_1065_; uint8_t v___x_1066_; 
v___x_1063_ = lean_unsigned_to_nat(0u);
v___x_1064_ = lean_array_get_size(v_importedEntries_1059_);
v___x_1065_ = ((lean_object*)(l_Lean_getSuggestions___redArg___lam__1___closed__11));
v___x_1066_ = lean_nat_dec_lt(v___x_1063_, v___x_1064_);
if (v___x_1066_ == 0)
{
lean_object* v___x_1067_; 
lean_dec_ref(v_importedEntries_1059_);
lean_dec_ref(v___f_1050_);
v___x_1067_ = lean_apply_2(v_toPure_1049_, lean_box(0), v___y_1062_);
return v___x_1067_;
}
else
{
uint8_t v___x_1068_; 
v___x_1068_ = lean_nat_dec_le(v___x_1064_, v___x_1064_);
if (v___x_1068_ == 0)
{
if (v___x_1066_ == 0)
{
lean_object* v___x_1069_; 
lean_dec_ref(v_importedEntries_1059_);
lean_dec_ref(v___f_1050_);
v___x_1069_ = lean_apply_2(v_toPure_1049_, lean_box(0), v___y_1062_);
return v___x_1069_;
}
else
{
size_t v___x_1070_; size_t v___x_1071_; lean_object* v___x_1072_; lean_object* v___x_1073_; 
v___x_1070_ = ((size_t)0ULL);
v___x_1071_ = lean_usize_of_nat(v___x_1064_);
v___x_1072_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_1065_, v___f_1050_, v_importedEntries_1059_, v___x_1070_, v___x_1071_, v___y_1062_);
v___x_1073_ = lean_apply_2(v_toPure_1049_, lean_box(0), v___x_1072_);
return v___x_1073_;
}
}
else
{
size_t v___x_1074_; size_t v___x_1075_; lean_object* v___x_1076_; lean_object* v___x_1077_; 
v___x_1074_ = ((size_t)0ULL);
v___x_1075_ = lean_usize_of_nat(v___x_1064_);
v___x_1076_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_1065_, v___f_1050_, v_importedEntries_1059_, v___x_1074_, v___x_1075_, v___y_1062_);
v___x_1077_ = lean_apply_2(v_toPure_1049_, lean_box(0), v___x_1076_);
return v___x_1077_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_getStoredSuggestions___redArg___lam__0___boxed(lean_object* v___x_1081_, lean_object* v_toPure_1082_, lean_object* v___f_1083_, lean_object* v_trueName_1084_, lean_object* v_env_1085_){
_start:
{
lean_object* v_res_1086_; 
v_res_1086_ = l_Lean_getStoredSuggestions___redArg___lam__0(v___x_1081_, v_toPure_1082_, v___f_1083_, v_trueName_1084_, v_env_1085_);
lean_dec(v_trueName_1084_);
lean_dec_ref(v___x_1081_);
return v_res_1086_;
}
}
LEAN_EXPORT lean_object* l_Lean_getStoredSuggestions___redArg(lean_object* v_inst_1087_, lean_object* v_inst_1088_, lean_object* v_trueName_1089_){
_start:
{
lean_object* v_toApplicative_1090_; lean_object* v_toBind_1091_; lean_object* v_getEnv_1092_; lean_object* v_toPure_1093_; lean_object* v___f_1094_; lean_object* v___f_1095_; lean_object* v___f_1096_; lean_object* v___x_1097_; lean_object* v___f_1098_; lean_object* v___x_1099_; 
v_toApplicative_1090_ = lean_ctor_get(v_inst_1087_, 0);
lean_inc_ref(v_toApplicative_1090_);
v_toBind_1091_ = lean_ctor_get(v_inst_1087_, 1);
lean_inc(v_toBind_1091_);
lean_dec_ref(v_inst_1087_);
v_getEnv_1092_ = lean_ctor_get(v_inst_1088_, 0);
lean_inc(v_getEnv_1092_);
lean_dec_ref(v_inst_1088_);
v_toPure_1093_ = lean_ctor_get(v_toApplicative_1090_, 1);
lean_inc(v_toPure_1093_);
lean_dec_ref(v_toApplicative_1090_);
v___f_1094_ = ((lean_object*)(l_Lean_getSuggestions___redArg___closed__0));
v___f_1095_ = ((lean_object*)(l_Lean_getSuggestions___redArg___closed__1));
lean_inc(v_trueName_1089_);
v___f_1096_ = lean_alloc_closure((void*)(l_Lean_getStoredSuggestions___redArg___lam__1___boxed), 5, 3);
lean_closure_set(v___f_1096_, 0, v_trueName_1089_);
lean_closure_set(v___f_1096_, 1, v___f_1094_);
lean_closure_set(v___f_1096_, 2, v___f_1095_);
v___x_1097_ = lean_obj_once(&l_Lean_getSuggestions___redArg___closed__2, &l_Lean_getSuggestions___redArg___closed__2_once, _init_l_Lean_getSuggestions___redArg___closed__2);
v___f_1098_ = lean_alloc_closure((void*)(l_Lean_getStoredSuggestions___redArg___lam__0___boxed), 5, 4);
lean_closure_set(v___f_1098_, 0, v___x_1097_);
lean_closure_set(v___f_1098_, 1, v_toPure_1093_);
lean_closure_set(v___f_1098_, 2, v___f_1096_);
lean_closure_set(v___f_1098_, 3, v_trueName_1089_);
v___x_1099_ = lean_apply_4(v_toBind_1091_, lean_box(0), lean_box(0), v_getEnv_1092_, v___f_1098_);
return v___x_1099_;
}
}
LEAN_EXPORT lean_object* l_Lean_getStoredSuggestions(lean_object* v_m_1100_, lean_object* v_inst_1101_, lean_object* v_inst_1102_, lean_object* v_trueName_1103_){
_start:
{
lean_object* v___x_1104_; 
v___x_1104_ = l_Lean_getStoredSuggestions___redArg(v_inst_1101_, v_inst_1102_, v_trueName_1103_);
return v___x_1104_;
}
}
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_getSuggestions___at___00Lean_throwUnknownNameWithSuggestions_spec__0_spec__0___redArg(lean_object* v_as_1105_, lean_object* v_k_1106_, lean_object* v_x_1107_, lean_object* v_x_1108_){
_start:
{
lean_object* v___x_1109_; lean_object* v___x_1110_; lean_object* v_m_1111_; lean_object* v_a_1112_; uint8_t v___x_1113_; 
v___x_1109_ = lean_nat_add(v_x_1107_, v_x_1108_);
v___x_1110_ = lean_unsigned_to_nat(1u);
v_m_1111_ = lean_nat_shiftr(v___x_1109_, v___x_1110_);
lean_dec(v___x_1109_);
v_a_1112_ = lean_array_fget_borrowed(v_as_1105_, v_m_1111_);
v___x_1113_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_IdentifierSuggestion_0__Lean_mkExistingToIncorrect_spec__3___redArg___lam__0(v_a_1112_, v_k_1106_);
if (v___x_1113_ == 0)
{
uint8_t v___x_1114_; 
lean_dec(v_x_1108_);
v___x_1114_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_IdentifierSuggestion_0__Lean_mkExistingToIncorrect_spec__3___redArg___lam__0(v_k_1106_, v_a_1112_);
if (v___x_1114_ == 0)
{
lean_object* v___x_1115_; 
lean_dec(v_m_1111_);
lean_dec(v_x_1107_);
lean_inc(v_a_1112_);
v___x_1115_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1115_, 0, v_a_1112_);
return v___x_1115_;
}
else
{
lean_object* v___x_1116_; uint8_t v___x_1117_; lean_object* v___x_1118_; uint8_t v___y_1120_; 
v___x_1116_ = lean_unsigned_to_nat(0u);
v___x_1117_ = lean_nat_dec_eq(v_m_1111_, v___x_1116_);
v___x_1118_ = lean_nat_sub(v_m_1111_, v___x_1110_);
lean_dec(v_m_1111_);
if (v___x_1117_ == 0)
{
uint8_t v___x_1123_; 
v___x_1123_ = lean_nat_dec_lt(v___x_1118_, v_x_1107_);
v___y_1120_ = v___x_1123_;
goto v___jp_1119_;
}
else
{
v___y_1120_ = v___x_1117_;
goto v___jp_1119_;
}
v___jp_1119_:
{
if (v___y_1120_ == 0)
{
v_x_1108_ = v___x_1118_;
goto _start;
}
else
{
lean_object* v___x_1122_; 
lean_dec(v___x_1118_);
lean_dec(v_x_1107_);
v___x_1122_ = lean_box(0);
return v___x_1122_;
}
}
}
}
else
{
lean_object* v___x_1124_; uint8_t v___x_1125_; 
lean_dec(v_x_1107_);
v___x_1124_ = lean_nat_add(v_m_1111_, v___x_1110_);
lean_dec(v_m_1111_);
v___x_1125_ = lean_nat_dec_le(v___x_1124_, v_x_1108_);
if (v___x_1125_ == 0)
{
lean_object* v___x_1126_; 
lean_dec(v___x_1124_);
lean_dec(v_x_1108_);
v___x_1126_ = lean_box(0);
return v___x_1126_;
}
else
{
v_x_1107_ = v___x_1124_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_getSuggestions___at___00Lean_throwUnknownNameWithSuggestions_spec__0_spec__0___redArg___boxed(lean_object* v_as_1128_, lean_object* v_k_1129_, lean_object* v_x_1130_, lean_object* v_x_1131_){
_start:
{
lean_object* v_res_1132_; 
v_res_1132_ = l_Array_binSearchAux___at___00Lean_getSuggestions___at___00Lean_throwUnknownNameWithSuggestions_spec__0_spec__0___redArg(v_as_1128_, v_k_1129_, v_x_1130_, v_x_1131_);
lean_dec_ref(v_k_1129_);
lean_dec_ref(v_as_1128_);
return v_res_1132_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_getSuggestions___at___00Lean_throwUnknownNameWithSuggestions_spec__0_spec__1(lean_object* v_incorrectName_1133_, lean_object* v_as_1134_, size_t v_i_1135_, size_t v_stop_1136_, lean_object* v_b_1137_){
_start:
{
lean_object* v___y_1139_; uint8_t v___x_1143_; 
v___x_1143_ = lean_usize_dec_eq(v_i_1135_, v_stop_1136_);
if (v___x_1143_ == 0)
{
lean_object* v___x_1144_; lean_object* v___x_1145_; lean_object* v___x_1146_; uint8_t v___x_1147_; 
v___x_1144_ = lean_array_uget_borrowed(v_as_1134_, v_i_1135_);
v___x_1145_ = lean_unsigned_to_nat(0u);
v___x_1146_ = lean_array_get_size(v___x_1144_);
v___x_1147_ = lean_nat_dec_lt(v___x_1145_, v___x_1146_);
if (v___x_1147_ == 0)
{
v___y_1139_ = v_b_1137_;
goto v___jp_1138_;
}
else
{
lean_object* v___x_1148_; lean_object* v___x_1149_; uint8_t v___x_1150_; 
v___x_1148_ = lean_unsigned_to_nat(1u);
v___x_1149_ = lean_nat_sub(v___x_1146_, v___x_1148_);
v___x_1150_ = lean_nat_dec_le(v___x_1145_, v___x_1149_);
if (v___x_1150_ == 0)
{
lean_dec(v___x_1149_);
v___y_1139_ = v_b_1137_;
goto v___jp_1138_;
}
else
{
lean_object* v___x_1151_; lean_object* v___x_1152_; lean_object* v___x_1153_; 
v___x_1151_ = ((lean_object*)(l_Lean_getSuggestions___redArg___lam__1___closed__0));
lean_inc(v_incorrectName_1133_);
v___x_1152_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1152_, 0, v_incorrectName_1133_);
lean_ctor_set(v___x_1152_, 1, v___x_1151_);
v___x_1153_ = l_Array_binSearchAux___at___00Lean_getSuggestions___at___00Lean_throwUnknownNameWithSuggestions_spec__0_spec__0___redArg(v___x_1144_, v___x_1152_, v___x_1145_, v___x_1149_);
lean_dec_ref_known(v___x_1152_, 2);
if (lean_obj_tag(v___x_1153_) == 0)
{
v___y_1139_ = v_b_1137_;
goto v___jp_1138_;
}
else
{
lean_object* v_val_1154_; lean_object* v_snd_1155_; lean_object* v___x_1156_; uint8_t v___x_1157_; 
v_val_1154_ = lean_ctor_get(v___x_1153_, 0);
lean_inc(v_val_1154_);
lean_dec_ref_known(v___x_1153_, 1);
v_snd_1155_ = lean_ctor_get(v_val_1154_, 1);
lean_inc(v_snd_1155_);
lean_dec(v_val_1154_);
v___x_1156_ = lean_array_get_size(v_snd_1155_);
v___x_1157_ = lean_nat_dec_lt(v___x_1145_, v___x_1156_);
if (v___x_1157_ == 0)
{
lean_dec(v_snd_1155_);
v___y_1139_ = v_b_1137_;
goto v___jp_1138_;
}
else
{
size_t v___x_1158_; size_t v___x_1159_; lean_object* v___x_1160_; 
v___x_1158_ = ((size_t)0ULL);
v___x_1159_ = lean_usize_of_nat(v___x_1156_);
v___x_1160_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_IdentifierSuggestion_0__Lean_mkExistingToIncorrect_spec__4(v_snd_1155_, v___x_1158_, v___x_1159_, v_b_1137_);
lean_dec(v_snd_1155_);
v___y_1139_ = v___x_1160_;
goto v___jp_1138_;
}
}
}
}
}
else
{
lean_dec(v_incorrectName_1133_);
return v_b_1137_;
}
v___jp_1138_:
{
size_t v___x_1140_; size_t v___x_1141_; 
v___x_1140_ = ((size_t)1ULL);
v___x_1141_ = lean_usize_add(v_i_1135_, v___x_1140_);
v_i_1135_ = v___x_1141_;
v_b_1137_ = v___y_1139_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_getSuggestions___at___00Lean_throwUnknownNameWithSuggestions_spec__0_spec__1___boxed(lean_object* v_incorrectName_1161_, lean_object* v_as_1162_, lean_object* v_i_1163_, lean_object* v_stop_1164_, lean_object* v_b_1165_){
_start:
{
size_t v_i_boxed_1166_; size_t v_stop_boxed_1167_; lean_object* v_res_1168_; 
v_i_boxed_1166_ = lean_unbox_usize(v_i_1163_);
lean_dec(v_i_1163_);
v_stop_boxed_1167_ = lean_unbox_usize(v_stop_1164_);
lean_dec(v_stop_1164_);
v_res_1168_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_getSuggestions___at___00Lean_throwUnknownNameWithSuggestions_spec__0_spec__1(v_incorrectName_1161_, v_as_1162_, v_i_boxed_1166_, v_stop_boxed_1167_, v_b_1165_);
lean_dec_ref(v_as_1162_);
return v_res_1168_;
}
}
LEAN_EXPORT lean_object* l_Lean_getSuggestions___at___00Lean_throwUnknownNameWithSuggestions_spec__0___redArg(lean_object* v_incorrectName_1169_, lean_object* v___y_1170_){
_start:
{
lean_object* v___x_1172_; lean_object* v___x_1173_; lean_object* v_env_1174_; lean_object* v___x_1175_; lean_object* v_snd_1176_; lean_object* v_toEnvExtension_1177_; lean_object* v_asyncMode_1178_; lean_object* v___x_1179_; lean_object* v___x_1180_; lean_object* v_importedEntries_1181_; lean_object* v_state_1182_; lean_object* v___y_1184_; lean_object* v___x_1193_; 
v___x_1172_ = lean_obj_once(&l_Lean_getSuggestions___redArg___closed__2, &l_Lean_getSuggestions___redArg___closed__2_once, _init_l_Lean_getSuggestions___redArg___closed__2);
v___x_1173_ = lean_st_ref_get(v___y_1170_);
v_env_1174_ = lean_ctor_get(v___x_1173_, 0);
lean_inc_ref(v_env_1174_);
lean_dec(v___x_1173_);
v___x_1175_ = l___private_Lean_IdentifierSuggestion_0__Lean_identifierSuggestionsImpl;
v_snd_1176_ = lean_ctor_get(v___x_1175_, 1);
v_toEnvExtension_1177_ = lean_ctor_get(v_snd_1176_, 0);
v_asyncMode_1178_ = lean_ctor_get(v_toEnvExtension_1177_, 2);
v___x_1179_ = lean_obj_once(&l___private_Lean_IdentifierSuggestion_0__Lean_initFn___closed__0_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2_, &l___private_Lean_IdentifierSuggestion_0__Lean_initFn___closed__0_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2__once, _init_l___private_Lean_IdentifierSuggestion_0__Lean_initFn___closed__0_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2_);
v___x_1180_ = l___private_Lean_Environment_0__Lean_EnvExtension_getStateUnsafe___redArg(v___x_1172_, v_toEnvExtension_1177_, v_env_1174_, v_asyncMode_1178_, v___x_1179_);
v_importedEntries_1181_ = lean_ctor_get(v___x_1180_, 0);
lean_inc_ref(v_importedEntries_1181_);
v_state_1182_ = lean_ctor_get(v___x_1180_, 1);
lean_inc(v_state_1182_);
lean_dec(v___x_1180_);
v___x_1193_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_state_1182_, v_incorrectName_1169_);
lean_dec(v_state_1182_);
if (lean_obj_tag(v___x_1193_) == 0)
{
lean_object* v___x_1194_; 
v___x_1194_ = l_Lean_NameSet_empty;
v___y_1184_ = v___x_1194_;
goto v___jp_1183_;
}
else
{
lean_object* v_val_1195_; 
v_val_1195_ = lean_ctor_get(v___x_1193_, 0);
lean_inc(v_val_1195_);
lean_dec_ref_known(v___x_1193_, 1);
v___y_1184_ = v_val_1195_;
goto v___jp_1183_;
}
v___jp_1183_:
{
lean_object* v___x_1185_; lean_object* v___x_1186_; uint8_t v___x_1187_; 
v___x_1185_ = lean_unsigned_to_nat(0u);
v___x_1186_ = lean_array_get_size(v_importedEntries_1181_);
v___x_1187_ = lean_nat_dec_lt(v___x_1185_, v___x_1186_);
if (v___x_1187_ == 0)
{
lean_object* v___x_1188_; 
lean_dec_ref(v_importedEntries_1181_);
lean_dec(v_incorrectName_1169_);
v___x_1188_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1188_, 0, v___y_1184_);
return v___x_1188_;
}
else
{
size_t v___x_1189_; size_t v___x_1190_; lean_object* v___x_1191_; lean_object* v___x_1192_; 
v___x_1189_ = ((size_t)0ULL);
v___x_1190_ = lean_usize_of_nat(v___x_1186_);
v___x_1191_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_getSuggestions___at___00Lean_throwUnknownNameWithSuggestions_spec__0_spec__1(v_incorrectName_1169_, v_importedEntries_1181_, v___x_1189_, v___x_1190_, v___y_1184_);
lean_dec_ref(v_importedEntries_1181_);
v___x_1192_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1192_, 0, v___x_1191_);
return v___x_1192_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_getSuggestions___at___00Lean_throwUnknownNameWithSuggestions_spec__0___redArg___boxed(lean_object* v_incorrectName_1196_, lean_object* v___y_1197_, lean_object* v___y_1198_){
_start:
{
lean_object* v_res_1199_; 
v_res_1199_ = l_Lean_getSuggestions___at___00Lean_throwUnknownNameWithSuggestions_spec__0___redArg(v_incorrectName_1196_, v___y_1197_);
lean_dec(v___y_1197_);
return v_res_1199_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_throwUnknownNameWithSuggestions_spec__2___lam__0(lean_object* v_x_1201_){
_start:
{
lean_object* v___x_1202_; lean_object* v___x_1203_; 
v___x_1202_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_throwUnknownNameWithSuggestions_spec__2___lam__0___closed__0));
v___x_1203_ = lean_string_append(v___x_1202_, v_x_1201_);
return v___x_1203_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_throwUnknownNameWithSuggestions_spec__2___lam__0___boxed(lean_object* v_x_1204_){
_start:
{
lean_object* v_res_1205_; 
v_res_1205_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_throwUnknownNameWithSuggestions_spec__2___lam__0(v_x_1204_);
lean_dec_ref(v_x_1204_);
return v_res_1205_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_throwUnknownNameWithSuggestions_spec__2(lean_object* v___x_1209_, lean_object* v___x_1210_, lean_object* v___x_1211_, lean_object* v___x_1212_, lean_object* v___x_1213_, size_t v_sz_1214_, size_t v_i_1215_, lean_object* v_bs_1216_){
_start:
{
uint8_t v___x_1217_; 
v___x_1217_ = lean_usize_dec_lt(v_i_1215_, v_sz_1214_);
if (v___x_1217_ == 0)
{
lean_object* v___x_1218_; 
lean_dec(v___x_1213_);
lean_dec(v___x_1212_);
lean_dec_ref(v___x_1211_);
v___x_1218_ = l_unsafeCast___redArg(v_bs_1216_);
lean_dec_ref(v_bs_1216_);
return v___x_1218_;
}
else
{
lean_object* v___x_1219_; uint8_t v___x_1220_; lean_object* v_v_1221_; lean_object* v_bs_x27_1222_; lean_object* v___x_1223_; lean_object* v___y_1225_; 
v___x_1219_ = lean_unsigned_to_nat(0u);
v___x_1220_ = lean_nat_dec_eq(v___x_1209_, v___x_1219_);
v_v_1221_ = lean_array_uget(v_bs_1216_, v_i_1215_);
v_bs_x27_1222_ = lean_array_uset(v_bs_1216_, v_i_1215_, v___x_1219_);
v___x_1223_ = l_unsafeCast___redArg(v_v_1221_);
lean_dec(v_v_1221_);
if (lean_obj_tag(v___x_1210_) == 0)
{
lean_inc(v___x_1223_);
v___y_1225_ = v___x_1223_;
goto v___jp_1224_;
}
else
{
lean_object* v_val_1243_; lean_object* v___x_1244_; lean_object* v___x_1245_; lean_object* v___x_1246_; lean_object* v___x_1247_; lean_object* v___x_1248_; lean_object* v___x_1249_; uint8_t v___x_1250_; 
v_val_1243_ = lean_ctor_get(v___x_1210_, 0);
v___x_1244_ = lean_obj_once(&l___private_Lean_IdentifierSuggestion_0__Lean_initFn___closed__0_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2_, &l___private_Lean_IdentifierSuggestion_0__Lean_initFn___closed__0_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2__once, _init_l___private_Lean_IdentifierSuggestion_0__Lean_initFn___closed__0_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2_);
lean_inc(v___x_1223_);
v___x_1245_ = l_Lean_Name_replacePrefix(v___x_1223_, v_val_1243_, v___x_1244_);
v___x_1246_ = l_Lean_Options_empty;
lean_inc(v___x_1245_);
lean_inc(v___x_1213_);
lean_inc(v___x_1212_);
lean_inc_ref(v___x_1211_);
v___x_1247_ = l_Lean_ResolveName_resolveGlobalName(v___x_1211_, v___x_1246_, v___x_1212_, v___x_1213_, v___x_1245_);
v___x_1248_ = l_List_lengthTR___redArg(v___x_1247_);
lean_dec(v___x_1247_);
v___x_1249_ = lean_unsigned_to_nat(1u);
v___x_1250_ = lean_nat_dec_eq(v___x_1248_, v___x_1249_);
lean_dec(v___x_1248_);
if (v___x_1250_ == 0)
{
lean_dec(v___x_1245_);
lean_inc(v___x_1223_);
v___y_1225_ = v___x_1223_;
goto v___jp_1224_;
}
else
{
v___y_1225_ = v___x_1245_;
goto v___jp_1224_;
}
}
v___jp_1224_:
{
lean_object* v___x_1226_; lean_object* v___x_1227_; lean_object* v___x_1228_; lean_object* v___x_1229_; lean_object* v___x_1230_; lean_object* v___x_1231_; lean_object* v___x_1232_; lean_object* v___x_1233_; lean_object* v___x_1234_; lean_object* v___x_1235_; uint8_t v___x_1236_; lean_object* v___x_1237_; size_t v___x_1238_; size_t v___x_1239_; lean_object* v___x_1240_; lean_object* v___x_1241_; 
v___x_1226_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___y_1225_, v___x_1217_);
v___x_1227_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1227_, 0, v___x_1226_);
v___x_1228_ = lean_box(0);
v___x_1229_ = lean_obj_once(&l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_IdentifierSuggestion_0__Lean_initFn_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2__spec__2___redArg___closed__5, &l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_IdentifierSuggestion_0__Lean_initFn_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2__spec__2___redArg___closed__5_once, _init_l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_IdentifierSuggestion_0__Lean_initFn_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2__spec__2___redArg___closed__5);
v___x_1230_ = l_Lean_MessageData_ofConstName(v___x_1223_, v___x_1220_);
v___x_1231_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1231_, 0, v___x_1229_);
lean_ctor_set(v___x_1231_, 1, v___x_1230_);
v___x_1232_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1232_, 0, v___x_1231_);
lean_ctor_set(v___x_1232_, 1, v___x_1229_);
v___x_1233_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1233_, 0, v___x_1232_);
v___x_1234_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_throwUnknownNameWithSuggestions_spec__2___closed__1));
v___x_1235_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_1235_, 0, v___x_1227_);
lean_ctor_set(v___x_1235_, 1, v___x_1228_);
lean_ctor_set(v___x_1235_, 2, v___x_1228_);
lean_ctor_set(v___x_1235_, 3, v___x_1228_);
lean_ctor_set(v___x_1235_, 4, v___x_1233_);
lean_ctor_set(v___x_1235_, 5, v___x_1234_);
v___x_1236_ = 0;
v___x_1237_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_1237_, 0, v___x_1235_);
lean_ctor_set(v___x_1237_, 1, v___x_1228_);
lean_ctor_set(v___x_1237_, 2, v___x_1228_);
lean_ctor_set_uint8(v___x_1237_, sizeof(void*)*3, v___x_1236_);
v___x_1238_ = ((size_t)1ULL);
v___x_1239_ = lean_usize_add(v_i_1215_, v___x_1238_);
v___x_1240_ = l_unsafeCast___redArg(v___x_1237_);
lean_dec_ref_known(v___x_1237_, 3);
v___x_1241_ = lean_array_uset(v_bs_x27_1222_, v_i_1215_, v___x_1240_);
v_i_1215_ = v___x_1239_;
v_bs_1216_ = v___x_1241_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_throwUnknownNameWithSuggestions_spec__2___boxed(lean_object* v___x_1251_, lean_object* v___x_1252_, lean_object* v___x_1253_, lean_object* v___x_1254_, lean_object* v___x_1255_, lean_object* v_sz_1256_, lean_object* v_i_1257_, lean_object* v_bs_1258_){
_start:
{
size_t v_sz_boxed_1259_; size_t v_i_boxed_1260_; lean_object* v_res_1261_; 
v_sz_boxed_1259_ = lean_unbox_usize(v_sz_1256_);
lean_dec(v_sz_1256_);
v_i_boxed_1260_ = lean_unbox_usize(v_i_1257_);
lean_dec(v_i_1257_);
v_res_1261_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_throwUnknownNameWithSuggestions_spec__2(v___x_1251_, v___x_1252_, v___x_1253_, v___x_1254_, v___x_1255_, v_sz_boxed_1259_, v_i_boxed_1260_, v_bs_1258_);
lean_dec(v___x_1252_);
lean_dec(v___x_1251_);
return v_res_1261_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownNameWithSuggestions_spec__1_spec__4_spec__6_spec__8(lean_object* v_msgData_1262_, lean_object* v___y_1263_, lean_object* v___y_1264_, lean_object* v___y_1265_, lean_object* v___y_1266_){
_start:
{
lean_object* v___x_1268_; lean_object* v_env_1269_; lean_object* v___x_1270_; lean_object* v_toCold_1271_; lean_object* v_mctx_1272_; lean_object* v_lctx_1273_; lean_object* v_options_1274_; lean_object* v___x_1275_; lean_object* v___x_1276_; lean_object* v___x_1277_; 
v___x_1268_ = lean_st_ref_get(v___y_1266_);
v_env_1269_ = lean_ctor_get(v___x_1268_, 0);
lean_inc_ref(v_env_1269_);
lean_dec(v___x_1268_);
v___x_1270_ = lean_st_ref_get(v___y_1264_);
v_toCold_1271_ = lean_ctor_get(v___y_1265_, 0);
v_mctx_1272_ = lean_ctor_get(v___x_1270_, 0);
lean_inc_ref(v_mctx_1272_);
lean_dec(v___x_1270_);
v_lctx_1273_ = lean_ctor_get(v___y_1263_, 2);
v_options_1274_ = lean_ctor_get(v_toCold_1271_, 2);
lean_inc_ref(v_options_1274_);
lean_inc_ref(v_lctx_1273_);
v___x_1275_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1275_, 0, v_env_1269_);
lean_ctor_set(v___x_1275_, 1, v_mctx_1272_);
lean_ctor_set(v___x_1275_, 2, v_lctx_1273_);
lean_ctor_set(v___x_1275_, 3, v_options_1274_);
v___x_1276_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_1276_, 0, v___x_1275_);
lean_ctor_set(v___x_1276_, 1, v_msgData_1262_);
v___x_1277_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1277_, 0, v___x_1276_);
return v___x_1277_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownNameWithSuggestions_spec__1_spec__4_spec__6_spec__8___boxed(lean_object* v_msgData_1278_, lean_object* v___y_1279_, lean_object* v___y_1280_, lean_object* v___y_1281_, lean_object* v___y_1282_, lean_object* v___y_1283_){
_start:
{
lean_object* v_res_1284_; 
v_res_1284_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownNameWithSuggestions_spec__1_spec__4_spec__6_spec__8(v_msgData_1278_, v___y_1279_, v___y_1280_, v___y_1281_, v___y_1282_);
lean_dec(v___y_1282_);
lean_dec_ref(v___y_1281_);
lean_dec(v___y_1280_);
lean_dec_ref(v___y_1279_);
return v_res_1284_;
}
}
static lean_object* _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownNameWithSuggestions_spec__1_spec__4_spec__6_spec__9_spec__11___closed__0(void){
_start:
{
lean_object* v___x_1285_; lean_object* v___x_1286_; 
v___x_1285_ = lean_box(1);
v___x_1286_ = l_Lean_MessageData_ofFormat(v___x_1285_);
return v___x_1286_;
}
}
static lean_object* _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownNameWithSuggestions_spec__1_spec__4_spec__6_spec__9_spec__11___closed__3(void){
_start:
{
lean_object* v___x_1290_; lean_object* v___x_1291_; 
v___x_1290_ = ((lean_object*)(l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownNameWithSuggestions_spec__1_spec__4_spec__6_spec__9_spec__11___closed__2));
v___x_1291_ = l_Lean_MessageData_ofFormat(v___x_1290_);
return v___x_1291_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownNameWithSuggestions_spec__1_spec__4_spec__6_spec__9_spec__11(lean_object* v_x_1292_, lean_object* v_x_1293_){
_start:
{
if (lean_obj_tag(v_x_1293_) == 0)
{
return v_x_1292_;
}
else
{
lean_object* v_head_1294_; lean_object* v_tail_1295_; lean_object* v___x_1297_; uint8_t v_isShared_1298_; uint8_t v_isSharedCheck_1317_; 
v_head_1294_ = lean_ctor_get(v_x_1293_, 0);
v_tail_1295_ = lean_ctor_get(v_x_1293_, 1);
v_isSharedCheck_1317_ = !lean_is_exclusive(v_x_1293_);
if (v_isSharedCheck_1317_ == 0)
{
v___x_1297_ = v_x_1293_;
v_isShared_1298_ = v_isSharedCheck_1317_;
goto v_resetjp_1296_;
}
else
{
lean_inc(v_tail_1295_);
lean_inc(v_head_1294_);
lean_dec(v_x_1293_);
v___x_1297_ = lean_box(0);
v_isShared_1298_ = v_isSharedCheck_1317_;
goto v_resetjp_1296_;
}
v_resetjp_1296_:
{
lean_object* v_before_1299_; lean_object* v___x_1301_; uint8_t v_isShared_1302_; uint8_t v_isSharedCheck_1315_; 
v_before_1299_ = lean_ctor_get(v_head_1294_, 0);
v_isSharedCheck_1315_ = !lean_is_exclusive(v_head_1294_);
if (v_isSharedCheck_1315_ == 0)
{
lean_object* v_unused_1316_; 
v_unused_1316_ = lean_ctor_get(v_head_1294_, 1);
lean_dec(v_unused_1316_);
v___x_1301_ = v_head_1294_;
v_isShared_1302_ = v_isSharedCheck_1315_;
goto v_resetjp_1300_;
}
else
{
lean_inc(v_before_1299_);
lean_dec(v_head_1294_);
v___x_1301_ = lean_box(0);
v_isShared_1302_ = v_isSharedCheck_1315_;
goto v_resetjp_1300_;
}
v_resetjp_1300_:
{
lean_object* v___x_1303_; lean_object* v___x_1305_; 
v___x_1303_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownNameWithSuggestions_spec__1_spec__4_spec__6_spec__9_spec__11___closed__0, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownNameWithSuggestions_spec__1_spec__4_spec__6_spec__9_spec__11___closed__0_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownNameWithSuggestions_spec__1_spec__4_spec__6_spec__9_spec__11___closed__0);
if (v_isShared_1302_ == 0)
{
lean_ctor_set_tag(v___x_1301_, 7);
lean_ctor_set(v___x_1301_, 1, v___x_1303_);
lean_ctor_set(v___x_1301_, 0, v_x_1292_);
v___x_1305_ = v___x_1301_;
goto v_reusejp_1304_;
}
else
{
lean_object* v_reuseFailAlloc_1314_; 
v_reuseFailAlloc_1314_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1314_, 0, v_x_1292_);
lean_ctor_set(v_reuseFailAlloc_1314_, 1, v___x_1303_);
v___x_1305_ = v_reuseFailAlloc_1314_;
goto v_reusejp_1304_;
}
v_reusejp_1304_:
{
lean_object* v___x_1306_; lean_object* v___x_1308_; 
v___x_1306_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownNameWithSuggestions_spec__1_spec__4_spec__6_spec__9_spec__11___closed__3, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownNameWithSuggestions_spec__1_spec__4_spec__6_spec__9_spec__11___closed__3_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownNameWithSuggestions_spec__1_spec__4_spec__6_spec__9_spec__11___closed__3);
if (v_isShared_1298_ == 0)
{
lean_ctor_set_tag(v___x_1297_, 7);
lean_ctor_set(v___x_1297_, 1, v___x_1306_);
lean_ctor_set(v___x_1297_, 0, v___x_1305_);
v___x_1308_ = v___x_1297_;
goto v_reusejp_1307_;
}
else
{
lean_object* v_reuseFailAlloc_1313_; 
v_reuseFailAlloc_1313_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1313_, 0, v___x_1305_);
lean_ctor_set(v_reuseFailAlloc_1313_, 1, v___x_1306_);
v___x_1308_ = v_reuseFailAlloc_1313_;
goto v_reusejp_1307_;
}
v_reusejp_1307_:
{
lean_object* v___x_1309_; lean_object* v___x_1310_; lean_object* v___x_1311_; 
v___x_1309_ = l_Lean_MessageData_ofSyntax(v_before_1299_);
v___x_1310_ = l_Lean_indentD(v___x_1309_);
v___x_1311_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1311_, 0, v___x_1308_);
lean_ctor_set(v___x_1311_, 1, v___x_1310_);
v_x_1292_ = v___x_1311_;
v_x_1293_ = v_tail_1295_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownNameWithSuggestions_spec__1_spec__4_spec__6_spec__9_spec__10(lean_object* v_opts_1318_, lean_object* v_opt_1319_){
_start:
{
lean_object* v_name_1320_; lean_object* v_defValue_1321_; lean_object* v_map_1322_; lean_object* v___x_1323_; 
v_name_1320_ = lean_ctor_get(v_opt_1319_, 0);
v_defValue_1321_ = lean_ctor_get(v_opt_1319_, 1);
v_map_1322_ = lean_ctor_get(v_opts_1318_, 0);
v___x_1323_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_1322_, v_name_1320_);
if (lean_obj_tag(v___x_1323_) == 0)
{
uint8_t v___x_1324_; 
v___x_1324_ = lean_unbox(v_defValue_1321_);
return v___x_1324_;
}
else
{
lean_object* v_val_1325_; 
v_val_1325_ = lean_ctor_get(v___x_1323_, 0);
lean_inc(v_val_1325_);
lean_dec_ref_known(v___x_1323_, 1);
if (lean_obj_tag(v_val_1325_) == 1)
{
uint8_t v_v_1326_; 
v_v_1326_ = lean_ctor_get_uint8(v_val_1325_, 0);
lean_dec_ref_known(v_val_1325_, 0);
return v_v_1326_;
}
else
{
uint8_t v___x_1327_; 
lean_dec(v_val_1325_);
v___x_1327_ = lean_unbox(v_defValue_1321_);
return v___x_1327_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownNameWithSuggestions_spec__1_spec__4_spec__6_spec__9_spec__10___boxed(lean_object* v_opts_1328_, lean_object* v_opt_1329_){
_start:
{
uint8_t v_res_1330_; lean_object* v_r_1331_; 
v_res_1330_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownNameWithSuggestions_spec__1_spec__4_spec__6_spec__9_spec__10(v_opts_1328_, v_opt_1329_);
lean_dec_ref(v_opt_1329_);
lean_dec_ref(v_opts_1328_);
v_r_1331_ = lean_box(v_res_1330_);
return v_r_1331_;
}
}
static lean_object* _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownNameWithSuggestions_spec__1_spec__4_spec__6_spec__9___redArg___closed__2(void){
_start:
{
lean_object* v___x_1335_; lean_object* v___x_1336_; 
v___x_1335_ = ((lean_object*)(l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownNameWithSuggestions_spec__1_spec__4_spec__6_spec__9___redArg___closed__1));
v___x_1336_ = l_Lean_MessageData_ofFormat(v___x_1335_);
return v___x_1336_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownNameWithSuggestions_spec__1_spec__4_spec__6_spec__9___redArg(lean_object* v_msgData_1337_, lean_object* v_macroStack_1338_, lean_object* v___y_1339_){
_start:
{
lean_object* v_toCold_1341_; lean_object* v_options_1342_; lean_object* v___x_1343_; uint8_t v___x_1344_; 
v_toCold_1341_ = lean_ctor_get(v___y_1339_, 0);
v_options_1342_ = lean_ctor_get(v_toCold_1341_, 2);
v___x_1343_ = l_Lean_Elab_pp_macroStack;
v___x_1344_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownNameWithSuggestions_spec__1_spec__4_spec__6_spec__9_spec__10(v_options_1342_, v___x_1343_);
if (v___x_1344_ == 0)
{
lean_object* v___x_1345_; 
lean_dec(v_macroStack_1338_);
v___x_1345_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1345_, 0, v_msgData_1337_);
return v___x_1345_;
}
else
{
if (lean_obj_tag(v_macroStack_1338_) == 0)
{
lean_object* v___x_1346_; 
v___x_1346_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1346_, 0, v_msgData_1337_);
return v___x_1346_;
}
else
{
lean_object* v_head_1347_; lean_object* v_after_1348_; lean_object* v___x_1350_; uint8_t v_isShared_1351_; uint8_t v_isSharedCheck_1363_; 
v_head_1347_ = lean_ctor_get(v_macroStack_1338_, 0);
lean_inc(v_head_1347_);
v_after_1348_ = lean_ctor_get(v_head_1347_, 1);
v_isSharedCheck_1363_ = !lean_is_exclusive(v_head_1347_);
if (v_isSharedCheck_1363_ == 0)
{
lean_object* v_unused_1364_; 
v_unused_1364_ = lean_ctor_get(v_head_1347_, 0);
lean_dec(v_unused_1364_);
v___x_1350_ = v_head_1347_;
v_isShared_1351_ = v_isSharedCheck_1363_;
goto v_resetjp_1349_;
}
else
{
lean_inc(v_after_1348_);
lean_dec(v_head_1347_);
v___x_1350_ = lean_box(0);
v_isShared_1351_ = v_isSharedCheck_1363_;
goto v_resetjp_1349_;
}
v_resetjp_1349_:
{
lean_object* v___x_1352_; lean_object* v___x_1354_; 
v___x_1352_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownNameWithSuggestions_spec__1_spec__4_spec__6_spec__9_spec__11___closed__0, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownNameWithSuggestions_spec__1_spec__4_spec__6_spec__9_spec__11___closed__0_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownNameWithSuggestions_spec__1_spec__4_spec__6_spec__9_spec__11___closed__0);
if (v_isShared_1351_ == 0)
{
lean_ctor_set_tag(v___x_1350_, 7);
lean_ctor_set(v___x_1350_, 1, v___x_1352_);
lean_ctor_set(v___x_1350_, 0, v_msgData_1337_);
v___x_1354_ = v___x_1350_;
goto v_reusejp_1353_;
}
else
{
lean_object* v_reuseFailAlloc_1362_; 
v_reuseFailAlloc_1362_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1362_, 0, v_msgData_1337_);
lean_ctor_set(v_reuseFailAlloc_1362_, 1, v___x_1352_);
v___x_1354_ = v_reuseFailAlloc_1362_;
goto v_reusejp_1353_;
}
v_reusejp_1353_:
{
lean_object* v___x_1355_; lean_object* v___x_1356_; lean_object* v___x_1357_; lean_object* v___x_1358_; lean_object* v_msgData_1359_; lean_object* v___x_1360_; lean_object* v___x_1361_; 
v___x_1355_ = lean_obj_once(&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownNameWithSuggestions_spec__1_spec__4_spec__6_spec__9___redArg___closed__2, &l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownNameWithSuggestions_spec__1_spec__4_spec__6_spec__9___redArg___closed__2_once, _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownNameWithSuggestions_spec__1_spec__4_spec__6_spec__9___redArg___closed__2);
v___x_1356_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1356_, 0, v___x_1354_);
lean_ctor_set(v___x_1356_, 1, v___x_1355_);
v___x_1357_ = l_Lean_MessageData_ofSyntax(v_after_1348_);
v___x_1358_ = l_Lean_indentD(v___x_1357_);
v_msgData_1359_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_msgData_1359_, 0, v___x_1356_);
lean_ctor_set(v_msgData_1359_, 1, v___x_1358_);
v___x_1360_ = l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownNameWithSuggestions_spec__1_spec__4_spec__6_spec__9_spec__11(v_msgData_1359_, v_macroStack_1338_);
v___x_1361_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1361_, 0, v___x_1360_);
return v___x_1361_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownNameWithSuggestions_spec__1_spec__4_spec__6_spec__9___redArg___boxed(lean_object* v_msgData_1365_, lean_object* v_macroStack_1366_, lean_object* v___y_1367_, lean_object* v___y_1368_){
_start:
{
lean_object* v_res_1369_; 
v_res_1369_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownNameWithSuggestions_spec__1_spec__4_spec__6_spec__9___redArg(v_msgData_1365_, v_macroStack_1366_, v___y_1367_);
lean_dec_ref(v___y_1367_);
return v_res_1369_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownNameWithSuggestions_spec__1_spec__4_spec__6___redArg(lean_object* v_msg_1370_, lean_object* v___y_1371_, lean_object* v___y_1372_, lean_object* v___y_1373_, lean_object* v___y_1374_, lean_object* v___y_1375_, lean_object* v___y_1376_){
_start:
{
lean_object* v_ref_1378_; lean_object* v_macroStack_1379_; lean_object* v___x_1380_; lean_object* v___x_1381_; lean_object* v_a_1382_; lean_object* v___x_1383_; lean_object* v_a_1384_; lean_object* v___x_1386_; uint8_t v_isShared_1387_; uint8_t v_isSharedCheck_1392_; 
v_ref_1378_ = lean_ctor_get(v___y_1375_, 2);
v_macroStack_1379_ = lean_ctor_get(v___y_1371_, 1);
v___x_1380_ = l_Lean_Elab_getBetterRef(v_ref_1378_, v_macroStack_1379_);
v___x_1381_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownNameWithSuggestions_spec__1_spec__4_spec__6_spec__8(v_msg_1370_, v___y_1373_, v___y_1374_, v___y_1375_, v___y_1376_);
v_a_1382_ = lean_ctor_get(v___x_1381_, 0);
lean_inc(v_a_1382_);
lean_dec_ref(v___x_1381_);
lean_inc(v_macroStack_1379_);
v___x_1383_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownNameWithSuggestions_spec__1_spec__4_spec__6_spec__9___redArg(v_a_1382_, v_macroStack_1379_, v___y_1375_);
v_a_1384_ = lean_ctor_get(v___x_1383_, 0);
v_isSharedCheck_1392_ = !lean_is_exclusive(v___x_1383_);
if (v_isSharedCheck_1392_ == 0)
{
v___x_1386_ = v___x_1383_;
v_isShared_1387_ = v_isSharedCheck_1392_;
goto v_resetjp_1385_;
}
else
{
lean_inc(v_a_1384_);
lean_dec(v___x_1383_);
v___x_1386_ = lean_box(0);
v_isShared_1387_ = v_isSharedCheck_1392_;
goto v_resetjp_1385_;
}
v_resetjp_1385_:
{
lean_object* v___x_1388_; lean_object* v___x_1390_; 
v___x_1388_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1388_, 0, v___x_1380_);
lean_ctor_set(v___x_1388_, 1, v_a_1384_);
if (v_isShared_1387_ == 0)
{
lean_ctor_set_tag(v___x_1386_, 1);
lean_ctor_set(v___x_1386_, 0, v___x_1388_);
v___x_1390_ = v___x_1386_;
goto v_reusejp_1389_;
}
else
{
lean_object* v_reuseFailAlloc_1391_; 
v_reuseFailAlloc_1391_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1391_, 0, v___x_1388_);
v___x_1390_ = v_reuseFailAlloc_1391_;
goto v_reusejp_1389_;
}
v_reusejp_1389_:
{
return v___x_1390_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownNameWithSuggestions_spec__1_spec__4_spec__6___redArg___boxed(lean_object* v_msg_1393_, lean_object* v___y_1394_, lean_object* v___y_1395_, lean_object* v___y_1396_, lean_object* v___y_1397_, lean_object* v___y_1398_, lean_object* v___y_1399_, lean_object* v___y_1400_){
_start:
{
lean_object* v_res_1401_; 
v_res_1401_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownNameWithSuggestions_spec__1_spec__4_spec__6___redArg(v_msg_1393_, v___y_1394_, v___y_1395_, v___y_1396_, v___y_1397_, v___y_1398_, v___y_1399_);
lean_dec(v___y_1399_);
lean_dec_ref(v___y_1398_);
lean_dec(v___y_1397_);
lean_dec_ref(v___y_1396_);
lean_dec(v___y_1395_);
lean_dec_ref(v___y_1394_);
return v_res_1401_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownNameWithSuggestions_spec__1_spec__4___redArg(lean_object* v_ref_1402_, lean_object* v_msg_1403_, lean_object* v___y_1404_, lean_object* v___y_1405_, lean_object* v___y_1406_, lean_object* v___y_1407_, lean_object* v___y_1408_, lean_object* v___y_1409_){
_start:
{
lean_object* v_toCold_1411_; lean_object* v_currRecDepth_1412_; lean_object* v_ref_1413_; uint8_t v_diag_1414_; uint8_t v_suppressElabErrors_1415_; lean_object* v_ref_1416_; lean_object* v___x_1417_; lean_object* v___x_1418_; 
v_toCold_1411_ = lean_ctor_get(v___y_1408_, 0);
v_currRecDepth_1412_ = lean_ctor_get(v___y_1408_, 1);
v_ref_1413_ = lean_ctor_get(v___y_1408_, 2);
v_diag_1414_ = lean_ctor_get_uint8(v___y_1408_, sizeof(void*)*3);
v_suppressElabErrors_1415_ = lean_ctor_get_uint8(v___y_1408_, sizeof(void*)*3 + 1);
v_ref_1416_ = l_Lean_replaceRef(v_ref_1402_, v_ref_1413_);
lean_inc(v_currRecDepth_1412_);
lean_inc_ref(v_toCold_1411_);
v___x_1417_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_1417_, 0, v_toCold_1411_);
lean_ctor_set(v___x_1417_, 1, v_currRecDepth_1412_);
lean_ctor_set(v___x_1417_, 2, v_ref_1416_);
lean_ctor_set_uint8(v___x_1417_, sizeof(void*)*3, v_diag_1414_);
lean_ctor_set_uint8(v___x_1417_, sizeof(void*)*3 + 1, v_suppressElabErrors_1415_);
v___x_1418_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownNameWithSuggestions_spec__1_spec__4_spec__6___redArg(v_msg_1403_, v___y_1404_, v___y_1405_, v___y_1406_, v___y_1407_, v___x_1417_, v___y_1409_);
lean_dec_ref_known(v___x_1417_, 3);
return v___x_1418_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownNameWithSuggestions_spec__1_spec__4___redArg___boxed(lean_object* v_ref_1419_, lean_object* v_msg_1420_, lean_object* v___y_1421_, lean_object* v___y_1422_, lean_object* v___y_1423_, lean_object* v___y_1424_, lean_object* v___y_1425_, lean_object* v___y_1426_, lean_object* v___y_1427_){
_start:
{
lean_object* v_res_1428_; 
v_res_1428_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownNameWithSuggestions_spec__1_spec__4___redArg(v_ref_1419_, v_msg_1420_, v___y_1421_, v___y_1422_, v___y_1423_, v___y_1424_, v___y_1425_, v___y_1426_);
lean_dec(v___y_1426_);
lean_dec_ref(v___y_1425_);
lean_dec(v___y_1424_);
lean_dec_ref(v___y_1423_);
lean_dec(v___y_1422_);
lean_dec_ref(v___y_1421_);
lean_dec(v_ref_1419_);
return v_res_1428_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownNameWithSuggestions_spec__1_spec__3_spec__4___redArg___closed__1(void){
_start:
{
lean_object* v___x_1430_; lean_object* v___x_1431_; 
v___x_1430_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownNameWithSuggestions_spec__1_spec__3_spec__4___redArg___closed__0));
v___x_1431_ = l_Lean_stringToMessageData(v___x_1430_);
return v___x_1431_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownNameWithSuggestions_spec__1_spec__3_spec__4___redArg___closed__3(void){
_start:
{
lean_object* v___x_1433_; lean_object* v___x_1434_; 
v___x_1433_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownNameWithSuggestions_spec__1_spec__3_spec__4___redArg___closed__2));
v___x_1434_ = l_Lean_stringToMessageData(v___x_1433_);
return v___x_1434_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownNameWithSuggestions_spec__1_spec__3_spec__4___redArg___closed__5(void){
_start:
{
lean_object* v___x_1436_; lean_object* v___x_1437_; 
v___x_1436_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownNameWithSuggestions_spec__1_spec__3_spec__4___redArg___closed__4));
v___x_1437_ = l_Lean_stringToMessageData(v___x_1436_);
return v___x_1437_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownNameWithSuggestions_spec__1_spec__3_spec__4___redArg___closed__7(void){
_start:
{
lean_object* v___x_1439_; lean_object* v___x_1440_; 
v___x_1439_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownNameWithSuggestions_spec__1_spec__3_spec__4___redArg___closed__6));
v___x_1440_ = l_Lean_stringToMessageData(v___x_1439_);
return v___x_1440_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownNameWithSuggestions_spec__1_spec__3_spec__4___redArg___closed__9(void){
_start:
{
lean_object* v___x_1442_; lean_object* v___x_1443_; 
v___x_1442_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownNameWithSuggestions_spec__1_spec__3_spec__4___redArg___closed__8));
v___x_1443_ = l_Lean_stringToMessageData(v___x_1442_);
return v___x_1443_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownNameWithSuggestions_spec__1_spec__3_spec__4___redArg___closed__11(void){
_start:
{
lean_object* v___x_1445_; lean_object* v___x_1446_; 
v___x_1445_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownNameWithSuggestions_spec__1_spec__3_spec__4___redArg___closed__10));
v___x_1446_ = l_Lean_stringToMessageData(v___x_1445_);
return v___x_1446_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownNameWithSuggestions_spec__1_spec__3_spec__4___redArg___closed__13(void){
_start:
{
lean_object* v___x_1448_; lean_object* v___x_1449_; 
v___x_1448_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownNameWithSuggestions_spec__1_spec__3_spec__4___redArg___closed__12));
v___x_1449_ = l_Lean_stringToMessageData(v___x_1448_);
return v___x_1449_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownNameWithSuggestions_spec__1_spec__3_spec__4___redArg(lean_object* v_msg_1450_, lean_object* v_declHint_1451_, lean_object* v___y_1452_){
_start:
{
lean_object* v___x_1454_; lean_object* v___x_1455_; lean_object* v_env_1456_; uint8_t v___x_1457_; 
v___x_1454_ = l_Lean_instInhabitedName;
v___x_1455_ = lean_st_ref_get(v___y_1452_);
v_env_1456_ = lean_ctor_get(v___x_1455_, 0);
lean_inc_ref(v_env_1456_);
lean_dec(v___x_1455_);
v___x_1457_ = l_Lean_Name_isAnonymous(v_declHint_1451_);
if (v___x_1457_ == 0)
{
uint8_t v_isExporting_1458_; 
v_isExporting_1458_ = lean_ctor_get_uint8(v_env_1456_, sizeof(void*)*8);
if (v_isExporting_1458_ == 0)
{
lean_object* v___x_1459_; 
lean_dec_ref(v_env_1456_);
lean_dec(v_declHint_1451_);
v___x_1459_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1459_, 0, v_msg_1450_);
return v___x_1459_;
}
else
{
lean_object* v___x_1460_; uint8_t v___x_1461_; 
lean_inc_ref(v_env_1456_);
v___x_1460_ = l_Lean_Environment_setExporting(v_env_1456_, v___x_1457_);
lean_inc(v_declHint_1451_);
lean_inc_ref(v___x_1460_);
v___x_1461_ = l_Lean_Environment_contains(v___x_1460_, v_declHint_1451_, v_isExporting_1458_);
if (v___x_1461_ == 0)
{
lean_object* v___x_1462_; 
lean_dec_ref(v___x_1460_);
lean_dec_ref(v_env_1456_);
lean_dec(v_declHint_1451_);
v___x_1462_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1462_, 0, v_msg_1450_);
return v___x_1462_;
}
else
{
lean_object* v___x_1463_; lean_object* v___x_1464_; lean_object* v___x_1465_; lean_object* v___x_1466_; lean_object* v___x_1467_; lean_object* v_c_1468_; lean_object* v___x_1469_; 
v___x_1463_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_IdentifierSuggestion_0__Lean_initFn_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2__spec__0_spec__0___closed__2, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_IdentifierSuggestion_0__Lean_initFn_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2__spec__0_spec__0___closed__2_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_IdentifierSuggestion_0__Lean_initFn_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2__spec__0_spec__0___closed__2);
v___x_1464_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_IdentifierSuggestion_0__Lean_initFn_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2__spec__0_spec__0___closed__5, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_IdentifierSuggestion_0__Lean_initFn_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2__spec__0_spec__0___closed__5_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_IdentifierSuggestion_0__Lean_initFn_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2__spec__0_spec__0___closed__5);
v___x_1465_ = l_Lean_Options_empty;
v___x_1466_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1466_, 0, v___x_1460_);
lean_ctor_set(v___x_1466_, 1, v___x_1463_);
lean_ctor_set(v___x_1466_, 2, v___x_1464_);
lean_ctor_set(v___x_1466_, 3, v___x_1465_);
lean_inc(v_declHint_1451_);
v___x_1467_ = l_Lean_MessageData_ofConstName(v_declHint_1451_, v___x_1457_);
v_c_1468_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_c_1468_, 0, v___x_1466_);
lean_ctor_set(v_c_1468_, 1, v___x_1467_);
v___x_1469_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_1456_, v_declHint_1451_);
if (lean_obj_tag(v___x_1469_) == 0)
{
lean_object* v___x_1470_; lean_object* v___x_1471_; lean_object* v___x_1472_; lean_object* v___x_1473_; lean_object* v___x_1474_; lean_object* v___x_1475_; lean_object* v___x_1476_; 
lean_dec_ref(v_env_1456_);
lean_dec(v_declHint_1451_);
v___x_1470_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownNameWithSuggestions_spec__1_spec__3_spec__4___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownNameWithSuggestions_spec__1_spec__3_spec__4___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownNameWithSuggestions_spec__1_spec__3_spec__4___redArg___closed__1);
v___x_1471_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1471_, 0, v___x_1470_);
lean_ctor_set(v___x_1471_, 1, v_c_1468_);
v___x_1472_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownNameWithSuggestions_spec__1_spec__3_spec__4___redArg___closed__3, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownNameWithSuggestions_spec__1_spec__3_spec__4___redArg___closed__3_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownNameWithSuggestions_spec__1_spec__3_spec__4___redArg___closed__3);
v___x_1473_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1473_, 0, v___x_1471_);
lean_ctor_set(v___x_1473_, 1, v___x_1472_);
v___x_1474_ = l_Lean_MessageData_note(v___x_1473_);
v___x_1475_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1475_, 0, v_msg_1450_);
lean_ctor_set(v___x_1475_, 1, v___x_1474_);
v___x_1476_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1476_, 0, v___x_1475_);
return v___x_1476_;
}
else
{
lean_object* v_val_1477_; lean_object* v___x_1479_; uint8_t v_isShared_1480_; uint8_t v_isSharedCheck_1511_; 
v_val_1477_ = lean_ctor_get(v___x_1469_, 0);
v_isSharedCheck_1511_ = !lean_is_exclusive(v___x_1469_);
if (v_isSharedCheck_1511_ == 0)
{
v___x_1479_ = v___x_1469_;
v_isShared_1480_ = v_isSharedCheck_1511_;
goto v_resetjp_1478_;
}
else
{
lean_inc(v_val_1477_);
lean_dec(v___x_1469_);
v___x_1479_ = lean_box(0);
v_isShared_1480_ = v_isSharedCheck_1511_;
goto v_resetjp_1478_;
}
v_resetjp_1478_:
{
lean_object* v___x_1481_; lean_object* v___x_1482_; lean_object* v_mod_1483_; uint8_t v___x_1484_; 
v___x_1481_ = l_Lean_Environment_header(v_env_1456_);
lean_dec_ref(v_env_1456_);
v___x_1482_ = l_Lean_EnvironmentHeader_moduleNames(v___x_1481_);
lean_dec_ref(v___x_1481_);
v_mod_1483_ = lean_array_get(v___x_1454_, v___x_1482_, v_val_1477_);
lean_dec(v_val_1477_);
lean_dec_ref(v___x_1482_);
v___x_1484_ = l_Lean_isPrivateName(v_declHint_1451_);
lean_dec(v_declHint_1451_);
if (v___x_1484_ == 0)
{
lean_object* v___x_1485_; lean_object* v___x_1486_; lean_object* v___x_1487_; lean_object* v___x_1488_; lean_object* v___x_1489_; lean_object* v___x_1490_; lean_object* v___x_1491_; lean_object* v___x_1492_; lean_object* v___x_1493_; lean_object* v___x_1494_; lean_object* v___x_1496_; 
v___x_1485_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownNameWithSuggestions_spec__1_spec__3_spec__4___redArg___closed__5, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownNameWithSuggestions_spec__1_spec__3_spec__4___redArg___closed__5_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownNameWithSuggestions_spec__1_spec__3_spec__4___redArg___closed__5);
v___x_1486_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1486_, 0, v___x_1485_);
lean_ctor_set(v___x_1486_, 1, v_c_1468_);
v___x_1487_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownNameWithSuggestions_spec__1_spec__3_spec__4___redArg___closed__7, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownNameWithSuggestions_spec__1_spec__3_spec__4___redArg___closed__7_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownNameWithSuggestions_spec__1_spec__3_spec__4___redArg___closed__7);
v___x_1488_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1488_, 0, v___x_1486_);
lean_ctor_set(v___x_1488_, 1, v___x_1487_);
v___x_1489_ = l_Lean_MessageData_ofName(v_mod_1483_);
v___x_1490_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1490_, 0, v___x_1488_);
lean_ctor_set(v___x_1490_, 1, v___x_1489_);
v___x_1491_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownNameWithSuggestions_spec__1_spec__3_spec__4___redArg___closed__9, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownNameWithSuggestions_spec__1_spec__3_spec__4___redArg___closed__9_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownNameWithSuggestions_spec__1_spec__3_spec__4___redArg___closed__9);
v___x_1492_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1492_, 0, v___x_1490_);
lean_ctor_set(v___x_1492_, 1, v___x_1491_);
v___x_1493_ = l_Lean_MessageData_note(v___x_1492_);
v___x_1494_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1494_, 0, v_msg_1450_);
lean_ctor_set(v___x_1494_, 1, v___x_1493_);
if (v_isShared_1480_ == 0)
{
lean_ctor_set_tag(v___x_1479_, 0);
lean_ctor_set(v___x_1479_, 0, v___x_1494_);
v___x_1496_ = v___x_1479_;
goto v_reusejp_1495_;
}
else
{
lean_object* v_reuseFailAlloc_1497_; 
v_reuseFailAlloc_1497_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1497_, 0, v___x_1494_);
v___x_1496_ = v_reuseFailAlloc_1497_;
goto v_reusejp_1495_;
}
v_reusejp_1495_:
{
return v___x_1496_;
}
}
else
{
lean_object* v___x_1498_; lean_object* v___x_1499_; lean_object* v___x_1500_; lean_object* v___x_1501_; lean_object* v___x_1502_; lean_object* v___x_1503_; lean_object* v___x_1504_; lean_object* v___x_1505_; lean_object* v___x_1506_; lean_object* v___x_1507_; lean_object* v___x_1509_; 
v___x_1498_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownNameWithSuggestions_spec__1_spec__3_spec__4___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownNameWithSuggestions_spec__1_spec__3_spec__4___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownNameWithSuggestions_spec__1_spec__3_spec__4___redArg___closed__1);
v___x_1499_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1499_, 0, v___x_1498_);
lean_ctor_set(v___x_1499_, 1, v_c_1468_);
v___x_1500_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownNameWithSuggestions_spec__1_spec__3_spec__4___redArg___closed__11, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownNameWithSuggestions_spec__1_spec__3_spec__4___redArg___closed__11_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownNameWithSuggestions_spec__1_spec__3_spec__4___redArg___closed__11);
v___x_1501_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1501_, 0, v___x_1499_);
lean_ctor_set(v___x_1501_, 1, v___x_1500_);
v___x_1502_ = l_Lean_MessageData_ofName(v_mod_1483_);
v___x_1503_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1503_, 0, v___x_1501_);
lean_ctor_set(v___x_1503_, 1, v___x_1502_);
v___x_1504_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownNameWithSuggestions_spec__1_spec__3_spec__4___redArg___closed__13, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownNameWithSuggestions_spec__1_spec__3_spec__4___redArg___closed__13_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownNameWithSuggestions_spec__1_spec__3_spec__4___redArg___closed__13);
v___x_1505_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1505_, 0, v___x_1503_);
lean_ctor_set(v___x_1505_, 1, v___x_1504_);
v___x_1506_ = l_Lean_MessageData_note(v___x_1505_);
v___x_1507_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1507_, 0, v_msg_1450_);
lean_ctor_set(v___x_1507_, 1, v___x_1506_);
if (v_isShared_1480_ == 0)
{
lean_ctor_set_tag(v___x_1479_, 0);
lean_ctor_set(v___x_1479_, 0, v___x_1507_);
v___x_1509_ = v___x_1479_;
goto v_reusejp_1508_;
}
else
{
lean_object* v_reuseFailAlloc_1510_; 
v_reuseFailAlloc_1510_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1510_, 0, v___x_1507_);
v___x_1509_ = v_reuseFailAlloc_1510_;
goto v_reusejp_1508_;
}
v_reusejp_1508_:
{
return v___x_1509_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_1512_; 
lean_dec_ref(v_env_1456_);
lean_dec(v_declHint_1451_);
v___x_1512_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1512_, 0, v_msg_1450_);
return v___x_1512_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownNameWithSuggestions_spec__1_spec__3_spec__4___redArg___boxed(lean_object* v_msg_1513_, lean_object* v_declHint_1514_, lean_object* v___y_1515_, lean_object* v___y_1516_){
_start:
{
lean_object* v_res_1517_; 
v_res_1517_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownNameWithSuggestions_spec__1_spec__3_spec__4___redArg(v_msg_1513_, v_declHint_1514_, v___y_1515_);
lean_dec(v___y_1515_);
return v_res_1517_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownNameWithSuggestions_spec__1_spec__3(lean_object* v_msg_1518_, lean_object* v_declHint_1519_, lean_object* v___y_1520_, lean_object* v___y_1521_, lean_object* v___y_1522_, lean_object* v___y_1523_, lean_object* v___y_1524_, lean_object* v___y_1525_){
_start:
{
lean_object* v___x_1527_; lean_object* v_a_1528_; lean_object* v___x_1530_; uint8_t v_isShared_1531_; uint8_t v_isSharedCheck_1537_; 
v___x_1527_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownNameWithSuggestions_spec__1_spec__3_spec__4___redArg(v_msg_1518_, v_declHint_1519_, v___y_1525_);
v_a_1528_ = lean_ctor_get(v___x_1527_, 0);
v_isSharedCheck_1537_ = !lean_is_exclusive(v___x_1527_);
if (v_isSharedCheck_1537_ == 0)
{
v___x_1530_ = v___x_1527_;
v_isShared_1531_ = v_isSharedCheck_1537_;
goto v_resetjp_1529_;
}
else
{
lean_inc(v_a_1528_);
lean_dec(v___x_1527_);
v___x_1530_ = lean_box(0);
v_isShared_1531_ = v_isSharedCheck_1537_;
goto v_resetjp_1529_;
}
v_resetjp_1529_:
{
lean_object* v___x_1532_; lean_object* v___x_1533_; lean_object* v___x_1535_; 
v___x_1532_ = l_Lean_unknownIdentifierMessageTag;
v___x_1533_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_1533_, 0, v___x_1532_);
lean_ctor_set(v___x_1533_, 1, v_a_1528_);
if (v_isShared_1531_ == 0)
{
lean_ctor_set(v___x_1530_, 0, v___x_1533_);
v___x_1535_ = v___x_1530_;
goto v_reusejp_1534_;
}
else
{
lean_object* v_reuseFailAlloc_1536_; 
v_reuseFailAlloc_1536_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1536_, 0, v___x_1533_);
v___x_1535_ = v_reuseFailAlloc_1536_;
goto v_reusejp_1534_;
}
v_reusejp_1534_:
{
return v___x_1535_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownNameWithSuggestions_spec__1_spec__3___boxed(lean_object* v_msg_1538_, lean_object* v_declHint_1539_, lean_object* v___y_1540_, lean_object* v___y_1541_, lean_object* v___y_1542_, lean_object* v___y_1543_, lean_object* v___y_1544_, lean_object* v___y_1545_, lean_object* v___y_1546_){
_start:
{
lean_object* v_res_1547_; 
v_res_1547_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownNameWithSuggestions_spec__1_spec__3(v_msg_1538_, v_declHint_1539_, v___y_1540_, v___y_1541_, v___y_1542_, v___y_1543_, v___y_1544_, v___y_1545_);
lean_dec(v___y_1545_);
lean_dec_ref(v___y_1544_);
lean_dec(v___y_1543_);
lean_dec_ref(v___y_1542_);
lean_dec(v___y_1541_);
lean_dec_ref(v___y_1540_);
return v_res_1547_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownNameWithSuggestions_spec__1___redArg(lean_object* v_ref_1548_, lean_object* v_msg_1549_, lean_object* v_declHint_1550_, lean_object* v___y_1551_, lean_object* v___y_1552_, lean_object* v___y_1553_, lean_object* v___y_1554_, lean_object* v___y_1555_, lean_object* v___y_1556_){
_start:
{
lean_object* v___x_1558_; lean_object* v_a_1559_; lean_object* v___x_1560_; 
v___x_1558_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownNameWithSuggestions_spec__1_spec__3(v_msg_1549_, v_declHint_1550_, v___y_1551_, v___y_1552_, v___y_1553_, v___y_1554_, v___y_1555_, v___y_1556_);
v_a_1559_ = lean_ctor_get(v___x_1558_, 0);
lean_inc(v_a_1559_);
lean_dec_ref(v___x_1558_);
v___x_1560_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownNameWithSuggestions_spec__1_spec__4___redArg(v_ref_1548_, v_a_1559_, v___y_1551_, v___y_1552_, v___y_1553_, v___y_1554_, v___y_1555_, v___y_1556_);
return v___x_1560_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownNameWithSuggestions_spec__1___redArg___boxed(lean_object* v_ref_1561_, lean_object* v_msg_1562_, lean_object* v_declHint_1563_, lean_object* v___y_1564_, lean_object* v___y_1565_, lean_object* v___y_1566_, lean_object* v___y_1567_, lean_object* v___y_1568_, lean_object* v___y_1569_, lean_object* v___y_1570_){
_start:
{
lean_object* v_res_1571_; 
v_res_1571_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownNameWithSuggestions_spec__1___redArg(v_ref_1561_, v_msg_1562_, v_declHint_1563_, v___y_1564_, v___y_1565_, v___y_1566_, v___y_1567_, v___y_1568_, v___y_1569_);
lean_dec(v___y_1569_);
lean_dec_ref(v___y_1568_);
lean_dec(v___y_1567_);
lean_dec_ref(v___y_1566_);
lean_dec(v___y_1565_);
lean_dec_ref(v___y_1564_);
lean_dec(v_ref_1561_);
return v_res_1571_;
}
}
static lean_object* _init_l_Lean_throwUnknownNameWithSuggestions___redArg___closed__1(void){
_start:
{
lean_object* v___x_1573_; lean_object* v___x_1574_; 
v___x_1573_ = ((lean_object*)(l_Lean_throwUnknownNameWithSuggestions___redArg___closed__0));
v___x_1574_ = l_Lean_stringToMessageData(v___x_1573_);
return v___x_1574_;
}
}
static lean_object* _init_l_Lean_throwUnknownNameWithSuggestions___redArg___closed__3(void){
_start:
{
lean_object* v___x_1576_; lean_object* v___x_1577_; 
v___x_1576_ = ((lean_object*)(l_Lean_throwUnknownNameWithSuggestions___redArg___closed__2));
v___x_1577_ = l_Lean_stringToMessageData(v___x_1576_);
return v___x_1577_;
}
}
static lean_object* _init_l_Lean_throwUnknownNameWithSuggestions___redArg___closed__5(void){
_start:
{
lean_object* v___x_1579_; lean_object* v___x_1580_; 
v___x_1579_ = ((lean_object*)(l_Lean_throwUnknownNameWithSuggestions___redArg___closed__4));
v___x_1580_ = l_Lean_stringToMessageData(v___x_1579_);
return v___x_1580_;
}
}
static lean_object* _init_l_Lean_throwUnknownNameWithSuggestions___redArg___closed__7(void){
_start:
{
lean_object* v___x_1582_; lean_object* v___x_1583_; 
v___x_1582_ = ((lean_object*)(l_Lean_throwUnknownNameWithSuggestions___redArg___closed__6));
v___x_1583_ = l_Lean_stringToMessageData(v___x_1582_);
return v___x_1583_;
}
}
static lean_object* _init_l_Lean_throwUnknownNameWithSuggestions___redArg___closed__9(void){
_start:
{
lean_object* v___x_1585_; lean_object* v___x_1586_; 
v___x_1585_ = ((lean_object*)(l_Lean_throwUnknownNameWithSuggestions___redArg___closed__8));
v___x_1586_ = l_Lean_stringToMessageData(v___x_1585_);
return v___x_1586_;
}
}
static lean_object* _init_l_Lean_throwUnknownNameWithSuggestions___redArg___closed__11(void){
_start:
{
lean_object* v___x_1588_; lean_object* v___x_1589_; 
v___x_1588_ = ((lean_object*)(l_Lean_throwUnknownNameWithSuggestions___redArg___closed__10));
v___x_1589_ = l_Lean_stringToMessageData(v___x_1588_);
return v___x_1589_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownNameWithSuggestions___redArg(lean_object* v_constName_1590_, lean_object* v_idOrConst_1591_, lean_object* v_declHint_1592_, lean_object* v_ref_x3f_1593_, lean_object* v_extraMsg_1594_, lean_object* v_a_1595_, lean_object* v_a_1596_, lean_object* v_a_1597_, lean_object* v_a_1598_, lean_object* v_a_1599_, lean_object* v_a_1600_){
_start:
{
lean_object* v___y_1603_; lean_object* v_hint_1604_; lean_object* v___y_1605_; lean_object* v___y_1606_; lean_object* v___y_1607_; lean_object* v___y_1608_; lean_object* v___y_1609_; lean_object* v___y_1610_; lean_object* v___y_1625_; lean_object* v___y_1626_; lean_object* v___y_1627_; uint8_t v___y_1628_; lean_object* v___y_1629_; lean_object* v___y_1630_; lean_object* v___y_1631_; lean_object* v___y_1632_; lean_object* v___y_1633_; lean_object* v___y_1634_; lean_object* v___y_1658_; lean_object* v___y_1659_; lean_object* v___y_1660_; uint8_t v___y_1661_; lean_object* v___y_1662_; lean_object* v___y_1663_; lean_object* v___y_1664_; lean_object* v___y_1665_; lean_object* v___y_1666_; lean_object* v___y_1667_; lean_object* v___x_1675_; lean_object* v_a_1676_; lean_object* v___y_1678_; lean_object* v___y_1679_; lean_object* v___y_1700_; 
lean_inc(v_constName_1590_);
v___x_1675_ = l_Lean_getSuggestions___at___00Lean_throwUnknownNameWithSuggestions_spec__0___redArg(v_constName_1590_, v_a_1600_);
v_a_1676_ = lean_ctor_get(v___x_1675_, 0);
lean_inc(v_a_1676_);
lean_dec_ref(v___x_1675_);
if (lean_obj_tag(v_a_1676_) == 0)
{
lean_object* v_size_1705_; 
v_size_1705_ = lean_ctor_get(v_a_1676_, 0);
lean_inc(v_size_1705_);
v___y_1700_ = v_size_1705_;
goto v___jp_1699_;
}
else
{
lean_object* v___x_1706_; 
v___x_1706_ = lean_unsigned_to_nat(0u);
v___y_1700_ = v___x_1706_;
goto v___jp_1699_;
}
v___jp_1602_:
{
lean_object* v___x_1611_; lean_object* v___x_1612_; lean_object* v___x_1613_; lean_object* v___x_1614_; lean_object* v___x_1615_; uint8_t v___x_1616_; lean_object* v___x_1617_; lean_object* v___x_1618_; lean_object* v___x_1619_; lean_object* v___x_1620_; lean_object* v___x_1621_; lean_object* v___x_1622_; lean_object* v___x_1623_; 
v___x_1611_ = lean_obj_once(&l_Lean_throwUnknownNameWithSuggestions___redArg___closed__1, &l_Lean_throwUnknownNameWithSuggestions___redArg___closed__1_once, _init_l_Lean_throwUnknownNameWithSuggestions___redArg___closed__1);
v___x_1612_ = l_Lean_stringToMessageData(v_idOrConst_1591_);
v___x_1613_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1613_, 0, v___x_1611_);
lean_ctor_set(v___x_1613_, 1, v___x_1612_);
v___x_1614_ = lean_obj_once(&l_Lean_throwUnknownNameWithSuggestions___redArg___closed__3, &l_Lean_throwUnknownNameWithSuggestions___redArg___closed__3_once, _init_l_Lean_throwUnknownNameWithSuggestions___redArg___closed__3);
v___x_1615_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1615_, 0, v___x_1613_);
lean_ctor_set(v___x_1615_, 1, v___x_1614_);
v___x_1616_ = 0;
v___x_1617_ = l_Lean_MessageData_ofConstName(v_constName_1590_, v___x_1616_);
v___x_1618_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1618_, 0, v___x_1615_);
lean_ctor_set(v___x_1618_, 1, v___x_1617_);
v___x_1619_ = lean_obj_once(&l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_IdentifierSuggestion_0__Lean_initFn_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2__spec__2___redArg___closed__5, &l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_IdentifierSuggestion_0__Lean_initFn_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2__spec__2___redArg___closed__5_once, _init_l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_IdentifierSuggestion_0__Lean_initFn_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2__spec__2___redArg___closed__5);
v___x_1620_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1620_, 0, v___x_1618_);
lean_ctor_set(v___x_1620_, 1, v___x_1619_);
v___x_1621_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1621_, 0, v___x_1620_);
lean_ctor_set(v___x_1621_, 1, v_extraMsg_1594_);
v___x_1622_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1622_, 0, v___x_1621_);
lean_ctor_set(v___x_1622_, 1, v_hint_1604_);
v___x_1623_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownNameWithSuggestions_spec__1___redArg(v___y_1603_, v___x_1622_, v_declHint_1592_, v___y_1605_, v___y_1606_, v___y_1607_, v___y_1608_, v___y_1609_, v___y_1610_);
lean_dec(v___y_1603_);
return v___x_1623_;
}
v___jp_1624_:
{
lean_object* v___x_1635_; lean_object* v___x_1636_; lean_object* v___x_1637_; lean_object* v___x_1638_; lean_object* v___x_1639_; size_t v_sz_1640_; size_t v___x_1641_; lean_object* v___x_1642_; lean_object* v___x_1643_; lean_object* v___x_1644_; lean_object* v___x_1645_; lean_object* v___x_1646_; lean_object* v___x_1647_; 
v___x_1635_ = lean_obj_once(&l_Lean_throwUnknownNameWithSuggestions___redArg___closed__5, &l_Lean_throwUnknownNameWithSuggestions___redArg___closed__5_once, _init_l_Lean_throwUnknownNameWithSuggestions___redArg___closed__5);
v___x_1636_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1636_, 0, v___x_1635_);
lean_ctor_set(v___x_1636_, 1, v___y_1631_);
v___x_1637_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1637_, 0, v___x_1636_);
lean_ctor_set(v___x_1637_, 1, v___y_1634_);
v___x_1638_ = lean_obj_once(&l_Lean_throwUnknownNameWithSuggestions___redArg___closed__7, &l_Lean_throwUnknownNameWithSuggestions___redArg___closed__7_once, _init_l_Lean_throwUnknownNameWithSuggestions___redArg___closed__7);
v___x_1639_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1639_, 0, v___x_1637_);
lean_ctor_set(v___x_1639_, 1, v___x_1638_);
v_sz_1640_ = lean_array_size(v___y_1633_);
v___x_1641_ = ((size_t)0ULL);
v___x_1642_ = l_unsafeCast___redArg(v___y_1633_);
lean_dec_ref(v___y_1633_);
lean_inc(v___y_1626_);
lean_inc(v___y_1627_);
v___x_1643_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_throwUnknownNameWithSuggestions_spec__2(v___y_1630_, v___y_1629_, v___y_1632_, v___y_1627_, v___y_1626_, v_sz_1640_, v___x_1641_, v___x_1642_);
lean_dec(v___y_1629_);
lean_dec(v___y_1630_);
v___x_1644_ = l_unsafeCast___redArg(v___x_1643_);
lean_dec_ref(v___x_1643_);
lean_inc(v___y_1625_);
v___x_1645_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1645_, 0, v___y_1625_);
v___x_1646_ = lean_box(0);
v___x_1647_ = l_Lean_MessageData_hint(v___x_1639_, v___x_1644_, v___x_1645_, v___x_1646_, v___y_1628_, v_a_1599_, v_a_1600_);
lean_dec(v___x_1644_);
if (lean_obj_tag(v___x_1647_) == 0)
{
lean_object* v_a_1648_; 
v_a_1648_ = lean_ctor_get(v___x_1647_, 0);
lean_inc(v_a_1648_);
lean_dec_ref_known(v___x_1647_, 1);
v___y_1603_ = v___y_1625_;
v_hint_1604_ = v_a_1648_;
v___y_1605_ = v_a_1595_;
v___y_1606_ = v_a_1596_;
v___y_1607_ = v_a_1597_;
v___y_1608_ = v_a_1598_;
v___y_1609_ = v_a_1599_;
v___y_1610_ = v_a_1600_;
goto v___jp_1602_;
}
else
{
lean_object* v_a_1649_; lean_object* v___x_1651_; uint8_t v_isShared_1652_; uint8_t v_isSharedCheck_1656_; 
lean_dec(v___y_1625_);
lean_dec_ref(v_extraMsg_1594_);
lean_dec(v_declHint_1592_);
lean_dec_ref(v_idOrConst_1591_);
lean_dec(v_constName_1590_);
v_a_1649_ = lean_ctor_get(v___x_1647_, 0);
v_isSharedCheck_1656_ = !lean_is_exclusive(v___x_1647_);
if (v_isSharedCheck_1656_ == 0)
{
v___x_1651_ = v___x_1647_;
v_isShared_1652_ = v_isSharedCheck_1656_;
goto v_resetjp_1650_;
}
else
{
lean_inc(v_a_1649_);
lean_dec(v___x_1647_);
v___x_1651_ = lean_box(0);
v_isShared_1652_ = v_isSharedCheck_1656_;
goto v_resetjp_1650_;
}
v_resetjp_1650_:
{
lean_object* v___x_1654_; 
if (v_isShared_1652_ == 0)
{
v___x_1654_ = v___x_1651_;
goto v_reusejp_1653_;
}
else
{
lean_object* v_reuseFailAlloc_1655_; 
v_reuseFailAlloc_1655_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1655_, 0, v_a_1649_);
v___x_1654_ = v_reuseFailAlloc_1655_;
goto v_reusejp_1653_;
}
v_reusejp_1653_:
{
return v___x_1654_;
}
}
}
}
v___jp_1657_:
{
uint8_t v___x_1668_; 
v___x_1668_ = l_Lean_Name_isAnonymous(v___y_1663_);
if (v___x_1668_ == 0)
{
lean_object* v___x_1669_; lean_object* v___x_1670_; lean_object* v___x_1671_; lean_object* v___x_1672_; lean_object* v___x_1673_; 
v___x_1669_ = lean_obj_once(&l_Lean_throwUnknownNameWithSuggestions___redArg___closed__9, &l_Lean_throwUnknownNameWithSuggestions___redArg___closed__9_once, _init_l_Lean_throwUnknownNameWithSuggestions___redArg___closed__9);
v___x_1670_ = l_Lean_MessageData_ofName(v___y_1663_);
v___x_1671_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1671_, 0, v___x_1669_);
lean_ctor_set(v___x_1671_, 1, v___x_1670_);
v___x_1672_ = lean_obj_once(&l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_IdentifierSuggestion_0__Lean_initFn_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2__spec__2___redArg___closed__5, &l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_IdentifierSuggestion_0__Lean_initFn_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2__spec__2___redArg___closed__5_once, _init_l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_IdentifierSuggestion_0__Lean_initFn_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2__spec__2___redArg___closed__5);
v___x_1673_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1673_, 0, v___x_1671_);
lean_ctor_set(v___x_1673_, 1, v___x_1672_);
v___y_1625_ = v___y_1659_;
v___y_1626_ = v___y_1658_;
v___y_1627_ = v___y_1660_;
v___y_1628_ = v___y_1661_;
v___y_1629_ = v___y_1662_;
v___y_1630_ = v___y_1664_;
v___y_1631_ = v___y_1667_;
v___y_1632_ = v___y_1665_;
v___y_1633_ = v___y_1666_;
v___y_1634_ = v___x_1673_;
goto v___jp_1624_;
}
else
{
lean_object* v___x_1674_; 
lean_dec(v___y_1663_);
v___x_1674_ = l_Lean_MessageData_nil;
v___y_1625_ = v___y_1659_;
v___y_1626_ = v___y_1658_;
v___y_1627_ = v___y_1660_;
v___y_1628_ = v___y_1661_;
v___y_1629_ = v___y_1662_;
v___y_1630_ = v___y_1664_;
v___y_1631_ = v___y_1667_;
v___y_1632_ = v___y_1665_;
v___y_1633_ = v___y_1666_;
v___y_1634_ = v___x_1674_;
goto v___jp_1624_;
}
}
v___jp_1677_:
{
lean_object* v___x_1680_; lean_object* v___x_1681_; uint8_t v___x_1682_; 
v___x_1680_ = lean_array_get_size(v___y_1678_);
v___x_1681_ = lean_unsigned_to_nat(0u);
v___x_1682_ = lean_nat_dec_eq(v___x_1680_, v___x_1681_);
if (v___x_1682_ == 0)
{
lean_object* v___x_1683_; lean_object* v___x_1684_; lean_object* v_toCold_1685_; lean_object* v_env_1686_; lean_object* v_currNamespace_1687_; lean_object* v_openDecls_1688_; lean_object* v___x_1689_; lean_object* v___x_1690_; uint8_t v___x_1691_; 
v___x_1683_ = l_Lean_Syntax_getId(v___y_1679_);
v___x_1684_ = lean_st_ref_get(v_a_1600_);
v_toCold_1685_ = lean_ctor_get(v_a_1599_, 0);
v_env_1686_ = lean_ctor_get(v___x_1684_, 0);
lean_inc_ref(v_env_1686_);
lean_dec(v___x_1684_);
v_currNamespace_1687_ = lean_ctor_get(v_toCold_1685_, 4);
v_openDecls_1688_ = lean_ctor_get(v_toCold_1685_, 5);
lean_inc(v_constName_1590_);
v___x_1689_ = l_Lean_Name_eraseSuffix_x3f(v_constName_1590_, v___x_1683_);
v___x_1690_ = lean_unsigned_to_nat(1u);
v___x_1691_ = lean_nat_dec_eq(v___x_1680_, v___x_1690_);
if (v___x_1691_ == 0)
{
lean_object* v___x_1692_; 
v___x_1692_ = lean_obj_once(&l_Lean_throwUnknownNameWithSuggestions___redArg___closed__11, &l_Lean_throwUnknownNameWithSuggestions___redArg___closed__11_once, _init_l_Lean_throwUnknownNameWithSuggestions___redArg___closed__11);
v___y_1658_ = v_openDecls_1688_;
v___y_1659_ = v___y_1679_;
v___y_1660_ = v_currNamespace_1687_;
v___y_1661_ = v___x_1682_;
v___y_1662_ = v___x_1689_;
v___y_1663_ = v___x_1683_;
v___y_1664_ = v___x_1680_;
v___y_1665_ = v_env_1686_;
v___y_1666_ = v___y_1678_;
v___y_1667_ = v___x_1692_;
goto v___jp_1657_;
}
else
{
lean_object* v___x_1693_; lean_object* v___x_1694_; lean_object* v___x_1695_; lean_object* v___x_1696_; lean_object* v___x_1697_; 
v___x_1693_ = lean_obj_once(&l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_IdentifierSuggestion_0__Lean_initFn_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2__spec__2___redArg___closed__5, &l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_IdentifierSuggestion_0__Lean_initFn_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2__spec__2___redArg___closed__5_once, _init_l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_IdentifierSuggestion_0__Lean_initFn_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2__spec__2___redArg___closed__5);
v___x_1694_ = lean_array_fget_borrowed(v___y_1678_, v___x_1681_);
lean_inc(v___x_1694_);
v___x_1695_ = l_Lean_MessageData_ofConstName(v___x_1694_, v___x_1682_);
v___x_1696_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1696_, 0, v___x_1693_);
lean_ctor_set(v___x_1696_, 1, v___x_1695_);
v___x_1697_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1697_, 0, v___x_1696_);
lean_ctor_set(v___x_1697_, 1, v___x_1693_);
v___y_1658_ = v_openDecls_1688_;
v___y_1659_ = v___y_1679_;
v___y_1660_ = v_currNamespace_1687_;
v___y_1661_ = v___x_1682_;
v___y_1662_ = v___x_1689_;
v___y_1663_ = v___x_1683_;
v___y_1664_ = v___x_1680_;
v___y_1665_ = v_env_1686_;
v___y_1666_ = v___y_1678_;
v___y_1667_ = v___x_1697_;
goto v___jp_1657_;
}
}
else
{
lean_object* v___x_1698_; 
lean_dec_ref(v___y_1678_);
v___x_1698_ = l_Lean_MessageData_nil;
v___y_1603_ = v___y_1679_;
v_hint_1604_ = v___x_1698_;
v___y_1605_ = v_a_1595_;
v___y_1606_ = v_a_1596_;
v___y_1607_ = v_a_1597_;
v___y_1608_ = v_a_1598_;
v___y_1609_ = v_a_1599_;
v___y_1610_ = v_a_1600_;
goto v___jp_1602_;
}
}
v___jp_1699_:
{
lean_object* v___x_1701_; lean_object* v___x_1702_; 
v___x_1701_ = lean_mk_empty_array_with_capacity(v___y_1700_);
lean_dec(v___y_1700_);
v___x_1702_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_IdentifierSuggestion_0__Lean_mkExistingToIncorrect_spec__0_spec__0(v___x_1701_, v_a_1676_);
if (lean_obj_tag(v_ref_x3f_1593_) == 0)
{
lean_object* v_ref_1703_; 
v_ref_1703_ = lean_ctor_get(v_a_1599_, 2);
lean_inc(v_ref_1703_);
v___y_1678_ = v___x_1702_;
v___y_1679_ = v_ref_1703_;
goto v___jp_1677_;
}
else
{
lean_object* v_val_1704_; 
v_val_1704_ = lean_ctor_get(v_ref_x3f_1593_, 0);
lean_inc(v_val_1704_);
lean_dec_ref_known(v_ref_x3f_1593_, 1);
v___y_1678_ = v___x_1702_;
v___y_1679_ = v_val_1704_;
goto v___jp_1677_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownNameWithSuggestions___redArg___boxed(lean_object* v_constName_1707_, lean_object* v_idOrConst_1708_, lean_object* v_declHint_1709_, lean_object* v_ref_x3f_1710_, lean_object* v_extraMsg_1711_, lean_object* v_a_1712_, lean_object* v_a_1713_, lean_object* v_a_1714_, lean_object* v_a_1715_, lean_object* v_a_1716_, lean_object* v_a_1717_, lean_object* v_a_1718_){
_start:
{
lean_object* v_res_1719_; 
v_res_1719_ = l_Lean_throwUnknownNameWithSuggestions___redArg(v_constName_1707_, v_idOrConst_1708_, v_declHint_1709_, v_ref_x3f_1710_, v_extraMsg_1711_, v_a_1712_, v_a_1713_, v_a_1714_, v_a_1715_, v_a_1716_, v_a_1717_);
lean_dec(v_a_1717_);
lean_dec_ref(v_a_1716_);
lean_dec(v_a_1715_);
lean_dec_ref(v_a_1714_);
lean_dec(v_a_1713_);
lean_dec_ref(v_a_1712_);
return v_res_1719_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownNameWithSuggestions(lean_object* v_00_u03b1_1720_, lean_object* v_constName_1721_, lean_object* v_idOrConst_1722_, lean_object* v_declHint_1723_, lean_object* v_ref_x3f_1724_, lean_object* v_extraMsg_1725_, lean_object* v_a_1726_, lean_object* v_a_1727_, lean_object* v_a_1728_, lean_object* v_a_1729_, lean_object* v_a_1730_, lean_object* v_a_1731_){
_start:
{
lean_object* v___x_1733_; 
v___x_1733_ = l_Lean_throwUnknownNameWithSuggestions___redArg(v_constName_1721_, v_idOrConst_1722_, v_declHint_1723_, v_ref_x3f_1724_, v_extraMsg_1725_, v_a_1726_, v_a_1727_, v_a_1728_, v_a_1729_, v_a_1730_, v_a_1731_);
return v___x_1733_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownNameWithSuggestions___boxed(lean_object* v_00_u03b1_1734_, lean_object* v_constName_1735_, lean_object* v_idOrConst_1736_, lean_object* v_declHint_1737_, lean_object* v_ref_x3f_1738_, lean_object* v_extraMsg_1739_, lean_object* v_a_1740_, lean_object* v_a_1741_, lean_object* v_a_1742_, lean_object* v_a_1743_, lean_object* v_a_1744_, lean_object* v_a_1745_, lean_object* v_a_1746_){
_start:
{
lean_object* v_res_1747_; 
v_res_1747_ = l_Lean_throwUnknownNameWithSuggestions(v_00_u03b1_1734_, v_constName_1735_, v_idOrConst_1736_, v_declHint_1737_, v_ref_x3f_1738_, v_extraMsg_1739_, v_a_1740_, v_a_1741_, v_a_1742_, v_a_1743_, v_a_1744_, v_a_1745_);
lean_dec(v_a_1745_);
lean_dec_ref(v_a_1744_);
lean_dec(v_a_1743_);
lean_dec_ref(v_a_1742_);
lean_dec(v_a_1741_);
lean_dec_ref(v_a_1740_);
return v_res_1747_;
}
}
LEAN_EXPORT lean_object* l_Lean_getSuggestions___at___00Lean_throwUnknownNameWithSuggestions_spec__0(lean_object* v_incorrectName_1748_, lean_object* v___y_1749_, lean_object* v___y_1750_, lean_object* v___y_1751_, lean_object* v___y_1752_, lean_object* v___y_1753_, lean_object* v___y_1754_){
_start:
{
lean_object* v___x_1756_; 
v___x_1756_ = l_Lean_getSuggestions___at___00Lean_throwUnknownNameWithSuggestions_spec__0___redArg(v_incorrectName_1748_, v___y_1754_);
return v___x_1756_;
}
}
LEAN_EXPORT lean_object* l_Lean_getSuggestions___at___00Lean_throwUnknownNameWithSuggestions_spec__0___boxed(lean_object* v_incorrectName_1757_, lean_object* v___y_1758_, lean_object* v___y_1759_, lean_object* v___y_1760_, lean_object* v___y_1761_, lean_object* v___y_1762_, lean_object* v___y_1763_, lean_object* v___y_1764_){
_start:
{
lean_object* v_res_1765_; 
v_res_1765_ = l_Lean_getSuggestions___at___00Lean_throwUnknownNameWithSuggestions_spec__0(v_incorrectName_1757_, v___y_1758_, v___y_1759_, v___y_1760_, v___y_1761_, v___y_1762_, v___y_1763_);
lean_dec(v___y_1763_);
lean_dec_ref(v___y_1762_);
lean_dec(v___y_1761_);
lean_dec_ref(v___y_1760_);
lean_dec(v___y_1759_);
lean_dec_ref(v___y_1758_);
return v_res_1765_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownNameWithSuggestions_spec__1(lean_object* v_00_u03b1_1766_, lean_object* v_ref_1767_, lean_object* v_msg_1768_, lean_object* v_declHint_1769_, lean_object* v___y_1770_, lean_object* v___y_1771_, lean_object* v___y_1772_, lean_object* v___y_1773_, lean_object* v___y_1774_, lean_object* v___y_1775_){
_start:
{
lean_object* v___x_1777_; 
v___x_1777_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownNameWithSuggestions_spec__1___redArg(v_ref_1767_, v_msg_1768_, v_declHint_1769_, v___y_1770_, v___y_1771_, v___y_1772_, v___y_1773_, v___y_1774_, v___y_1775_);
return v___x_1777_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownNameWithSuggestions_spec__1___boxed(lean_object* v_00_u03b1_1778_, lean_object* v_ref_1779_, lean_object* v_msg_1780_, lean_object* v_declHint_1781_, lean_object* v___y_1782_, lean_object* v___y_1783_, lean_object* v___y_1784_, lean_object* v___y_1785_, lean_object* v___y_1786_, lean_object* v___y_1787_, lean_object* v___y_1788_){
_start:
{
lean_object* v_res_1789_; 
v_res_1789_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownNameWithSuggestions_spec__1(v_00_u03b1_1778_, v_ref_1779_, v_msg_1780_, v_declHint_1781_, v___y_1782_, v___y_1783_, v___y_1784_, v___y_1785_, v___y_1786_, v___y_1787_);
lean_dec(v___y_1787_);
lean_dec_ref(v___y_1786_);
lean_dec(v___y_1785_);
lean_dec_ref(v___y_1784_);
lean_dec(v___y_1783_);
lean_dec_ref(v___y_1782_);
lean_dec(v_ref_1779_);
return v_res_1789_;
}
}
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_getSuggestions___at___00Lean_throwUnknownNameWithSuggestions_spec__0_spec__0(lean_object* v_as_1790_, lean_object* v_k_1791_, lean_object* v_x_1792_, lean_object* v_x_1793_, lean_object* v_x_1794_){
_start:
{
lean_object* v___x_1795_; 
v___x_1795_ = l_Array_binSearchAux___at___00Lean_getSuggestions___at___00Lean_throwUnknownNameWithSuggestions_spec__0_spec__0___redArg(v_as_1790_, v_k_1791_, v_x_1792_, v_x_1793_);
return v___x_1795_;
}
}
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_getSuggestions___at___00Lean_throwUnknownNameWithSuggestions_spec__0_spec__0___boxed(lean_object* v_as_1796_, lean_object* v_k_1797_, lean_object* v_x_1798_, lean_object* v_x_1799_, lean_object* v_x_1800_){
_start:
{
lean_object* v_res_1801_; 
v_res_1801_ = l_Array_binSearchAux___at___00Lean_getSuggestions___at___00Lean_throwUnknownNameWithSuggestions_spec__0_spec__0(v_as_1796_, v_k_1797_, v_x_1798_, v_x_1799_, v_x_1800_);
lean_dec_ref(v_k_1797_);
lean_dec_ref(v_as_1796_);
return v_res_1801_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownNameWithSuggestions_spec__1_spec__3_spec__4(lean_object* v_msg_1802_, lean_object* v_declHint_1803_, lean_object* v___y_1804_, lean_object* v___y_1805_, lean_object* v___y_1806_, lean_object* v___y_1807_, lean_object* v___y_1808_, lean_object* v___y_1809_){
_start:
{
lean_object* v___x_1811_; 
v___x_1811_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownNameWithSuggestions_spec__1_spec__3_spec__4___redArg(v_msg_1802_, v_declHint_1803_, v___y_1809_);
return v___x_1811_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownNameWithSuggestions_spec__1_spec__3_spec__4___boxed(lean_object* v_msg_1812_, lean_object* v_declHint_1813_, lean_object* v___y_1814_, lean_object* v___y_1815_, lean_object* v___y_1816_, lean_object* v___y_1817_, lean_object* v___y_1818_, lean_object* v___y_1819_, lean_object* v___y_1820_){
_start:
{
lean_object* v_res_1821_; 
v_res_1821_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownNameWithSuggestions_spec__1_spec__3_spec__4(v_msg_1812_, v_declHint_1813_, v___y_1814_, v___y_1815_, v___y_1816_, v___y_1817_, v___y_1818_, v___y_1819_);
lean_dec(v___y_1819_);
lean_dec_ref(v___y_1818_);
lean_dec(v___y_1817_);
lean_dec_ref(v___y_1816_);
lean_dec(v___y_1815_);
lean_dec_ref(v___y_1814_);
return v_res_1821_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownNameWithSuggestions_spec__1_spec__4(lean_object* v_00_u03b1_1822_, lean_object* v_ref_1823_, lean_object* v_msg_1824_, lean_object* v___y_1825_, lean_object* v___y_1826_, lean_object* v___y_1827_, lean_object* v___y_1828_, lean_object* v___y_1829_, lean_object* v___y_1830_){
_start:
{
lean_object* v___x_1832_; 
v___x_1832_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownNameWithSuggestions_spec__1_spec__4___redArg(v_ref_1823_, v_msg_1824_, v___y_1825_, v___y_1826_, v___y_1827_, v___y_1828_, v___y_1829_, v___y_1830_);
return v___x_1832_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownNameWithSuggestions_spec__1_spec__4___boxed(lean_object* v_00_u03b1_1833_, lean_object* v_ref_1834_, lean_object* v_msg_1835_, lean_object* v___y_1836_, lean_object* v___y_1837_, lean_object* v___y_1838_, lean_object* v___y_1839_, lean_object* v___y_1840_, lean_object* v___y_1841_, lean_object* v___y_1842_){
_start:
{
lean_object* v_res_1843_; 
v_res_1843_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownNameWithSuggestions_spec__1_spec__4(v_00_u03b1_1833_, v_ref_1834_, v_msg_1835_, v___y_1836_, v___y_1837_, v___y_1838_, v___y_1839_, v___y_1840_, v___y_1841_);
lean_dec(v___y_1841_);
lean_dec_ref(v___y_1840_);
lean_dec(v___y_1839_);
lean_dec_ref(v___y_1838_);
lean_dec(v___y_1837_);
lean_dec_ref(v___y_1836_);
lean_dec(v_ref_1834_);
return v_res_1843_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownNameWithSuggestions_spec__1_spec__4_spec__6(lean_object* v_00_u03b1_1844_, lean_object* v_msg_1845_, lean_object* v___y_1846_, lean_object* v___y_1847_, lean_object* v___y_1848_, lean_object* v___y_1849_, lean_object* v___y_1850_, lean_object* v___y_1851_){
_start:
{
lean_object* v___x_1853_; 
v___x_1853_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownNameWithSuggestions_spec__1_spec__4_spec__6___redArg(v_msg_1845_, v___y_1846_, v___y_1847_, v___y_1848_, v___y_1849_, v___y_1850_, v___y_1851_);
return v___x_1853_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownNameWithSuggestions_spec__1_spec__4_spec__6___boxed(lean_object* v_00_u03b1_1854_, lean_object* v_msg_1855_, lean_object* v___y_1856_, lean_object* v___y_1857_, lean_object* v___y_1858_, lean_object* v___y_1859_, lean_object* v___y_1860_, lean_object* v___y_1861_, lean_object* v___y_1862_){
_start:
{
lean_object* v_res_1863_; 
v_res_1863_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownNameWithSuggestions_spec__1_spec__4_spec__6(v_00_u03b1_1854_, v_msg_1855_, v___y_1856_, v___y_1857_, v___y_1858_, v___y_1859_, v___y_1860_, v___y_1861_);
lean_dec(v___y_1861_);
lean_dec_ref(v___y_1860_);
lean_dec(v___y_1859_);
lean_dec_ref(v___y_1858_);
lean_dec(v___y_1857_);
lean_dec_ref(v___y_1856_);
return v_res_1863_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownNameWithSuggestions_spec__1_spec__4_spec__6_spec__9(lean_object* v_msgData_1864_, lean_object* v_macroStack_1865_, lean_object* v___y_1866_, lean_object* v___y_1867_, lean_object* v___y_1868_, lean_object* v___y_1869_, lean_object* v___y_1870_, lean_object* v___y_1871_){
_start:
{
lean_object* v___x_1873_; 
v___x_1873_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownNameWithSuggestions_spec__1_spec__4_spec__6_spec__9___redArg(v_msgData_1864_, v_macroStack_1865_, v___y_1870_);
return v___x_1873_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownNameWithSuggestions_spec__1_spec__4_spec__6_spec__9___boxed(lean_object* v_msgData_1874_, lean_object* v_macroStack_1875_, lean_object* v___y_1876_, lean_object* v___y_1877_, lean_object* v___y_1878_, lean_object* v___y_1879_, lean_object* v___y_1880_, lean_object* v___y_1881_, lean_object* v___y_1882_){
_start:
{
lean_object* v_res_1883_; 
v_res_1883_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownNameWithSuggestions_spec__1_spec__4_spec__6_spec__9(v_msgData_1874_, v_macroStack_1875_, v___y_1876_, v___y_1877_, v___y_1878_, v___y_1879_, v___y_1880_, v___y_1881_);
lean_dec(v___y_1881_);
lean_dec_ref(v___y_1880_);
lean_dec(v___y_1879_);
lean_dec_ref(v___y_1878_);
lean_dec(v___y_1877_);
lean_dec_ref(v___y_1876_);
return v_res_1883_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyM___at___00Lean_Elab_Term_hintAutoImplicitFailure_spec__0_spec__1(lean_object* v_exp_1884_, lean_object* v_as_1885_, size_t v_i_1886_, size_t v_stop_1887_){
_start:
{
uint8_t v___x_1888_; 
v___x_1888_ = lean_usize_dec_eq(v_i_1886_, v_stop_1887_);
if (v___x_1888_ == 0)
{
lean_object* v___x_1889_; uint8_t v___x_1890_; 
v___x_1889_ = lean_array_uget_borrowed(v_as_1885_, v_i_1886_);
v___x_1890_ = lean_expr_eqv(v___x_1889_, v_exp_1884_);
if (v___x_1890_ == 0)
{
size_t v___x_1891_; size_t v___x_1892_; 
v___x_1891_ = ((size_t)1ULL);
v___x_1892_ = lean_usize_add(v_i_1886_, v___x_1891_);
v_i_1886_ = v___x_1892_;
goto _start;
}
else
{
return v___x_1890_;
}
}
else
{
uint8_t v___x_1894_; 
v___x_1894_ = 0;
return v___x_1894_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyM___at___00Lean_Elab_Term_hintAutoImplicitFailure_spec__0_spec__1___boxed(lean_object* v_exp_1895_, lean_object* v_as_1896_, lean_object* v_i_1897_, lean_object* v_stop_1898_){
_start:
{
size_t v_i_boxed_1899_; size_t v_stop_boxed_1900_; uint8_t v_res_1901_; lean_object* v_r_1902_; 
v_i_boxed_1899_ = lean_unbox_usize(v_i_1897_);
lean_dec(v_i_1897_);
v_stop_boxed_1900_ = lean_unbox_usize(v_stop_1898_);
lean_dec(v_stop_1898_);
v_res_1901_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyM___at___00Lean_Elab_Term_hintAutoImplicitFailure_spec__0_spec__1(v_exp_1895_, v_as_1896_, v_i_boxed_1899_, v_stop_boxed_1900_);
lean_dec_ref(v_as_1896_);
lean_dec_ref(v_exp_1895_);
v_r_1902_ = lean_box(v_res_1901_);
return v_r_1902_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentArray_anyMAux___at___00Lean_PersistentArray_anyM___at___00Lean_Elab_Term_hintAutoImplicitFailure_spec__0_spec__0(lean_object* v_exp_1903_, lean_object* v_x_1904_){
_start:
{
if (lean_obj_tag(v_x_1904_) == 0)
{
lean_object* v_cs_1905_; lean_object* v___x_1906_; lean_object* v___x_1907_; uint8_t v___x_1908_; 
v_cs_1905_ = lean_ctor_get(v_x_1904_, 0);
v___x_1906_ = lean_unsigned_to_nat(0u);
v___x_1907_ = lean_array_get_size(v_cs_1905_);
v___x_1908_ = lean_nat_dec_lt(v___x_1906_, v___x_1907_);
if (v___x_1908_ == 0)
{
return v___x_1908_;
}
else
{
if (v___x_1908_ == 0)
{
return v___x_1908_;
}
else
{
size_t v___x_1909_; size_t v___x_1910_; uint8_t v___x_1911_; 
v___x_1909_ = ((size_t)0ULL);
v___x_1910_ = lean_usize_of_nat(v___x_1907_);
v___x_1911_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyMAux___at___00Lean_PersistentArray_anyM___at___00Lean_Elab_Term_hintAutoImplicitFailure_spec__0_spec__0_spec__1(v_exp_1903_, v_cs_1905_, v___x_1909_, v___x_1910_);
return v___x_1911_;
}
}
}
else
{
lean_object* v_vs_1912_; lean_object* v___x_1913_; lean_object* v___x_1914_; uint8_t v___x_1915_; 
v_vs_1912_ = lean_ctor_get(v_x_1904_, 0);
v___x_1913_ = lean_unsigned_to_nat(0u);
v___x_1914_ = lean_array_get_size(v_vs_1912_);
v___x_1915_ = lean_nat_dec_lt(v___x_1913_, v___x_1914_);
if (v___x_1915_ == 0)
{
return v___x_1915_;
}
else
{
if (v___x_1915_ == 0)
{
return v___x_1915_;
}
else
{
size_t v___x_1916_; size_t v___x_1917_; uint8_t v___x_1918_; 
v___x_1916_ = ((size_t)0ULL);
v___x_1917_ = lean_usize_of_nat(v___x_1914_);
v___x_1918_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyM___at___00Lean_Elab_Term_hintAutoImplicitFailure_spec__0_spec__1(v_exp_1903_, v_vs_1912_, v___x_1916_, v___x_1917_);
return v___x_1918_;
}
}
}
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyMAux___at___00Lean_PersistentArray_anyM___at___00Lean_Elab_Term_hintAutoImplicitFailure_spec__0_spec__0_spec__1(lean_object* v_exp_1919_, lean_object* v_as_1920_, size_t v_i_1921_, size_t v_stop_1922_){
_start:
{
uint8_t v___x_1923_; 
v___x_1923_ = lean_usize_dec_eq(v_i_1921_, v_stop_1922_);
if (v___x_1923_ == 0)
{
lean_object* v___x_1924_; uint8_t v___x_1925_; 
v___x_1924_ = lean_array_uget_borrowed(v_as_1920_, v_i_1921_);
v___x_1925_ = l_Lean_PersistentArray_anyMAux___at___00Lean_PersistentArray_anyM___at___00Lean_Elab_Term_hintAutoImplicitFailure_spec__0_spec__0(v_exp_1919_, v___x_1924_);
if (v___x_1925_ == 0)
{
size_t v___x_1926_; size_t v___x_1927_; 
v___x_1926_ = ((size_t)1ULL);
v___x_1927_ = lean_usize_add(v_i_1921_, v___x_1926_);
v_i_1921_ = v___x_1927_;
goto _start;
}
else
{
return v___x_1925_;
}
}
else
{
uint8_t v___x_1929_; 
v___x_1929_ = 0;
return v___x_1929_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyMAux___at___00Lean_PersistentArray_anyM___at___00Lean_Elab_Term_hintAutoImplicitFailure_spec__0_spec__0_spec__1___boxed(lean_object* v_exp_1930_, lean_object* v_as_1931_, lean_object* v_i_1932_, lean_object* v_stop_1933_){
_start:
{
size_t v_i_boxed_1934_; size_t v_stop_boxed_1935_; uint8_t v_res_1936_; lean_object* v_r_1937_; 
v_i_boxed_1934_ = lean_unbox_usize(v_i_1932_);
lean_dec(v_i_1932_);
v_stop_boxed_1935_ = lean_unbox_usize(v_stop_1933_);
lean_dec(v_stop_1933_);
v_res_1936_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyMAux___at___00Lean_PersistentArray_anyM___at___00Lean_Elab_Term_hintAutoImplicitFailure_spec__0_spec__0_spec__1(v_exp_1930_, v_as_1931_, v_i_boxed_1934_, v_stop_boxed_1935_);
lean_dec_ref(v_as_1931_);
lean_dec_ref(v_exp_1930_);
v_r_1937_ = lean_box(v_res_1936_);
return v_r_1937_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_anyMAux___at___00Lean_PersistentArray_anyM___at___00Lean_Elab_Term_hintAutoImplicitFailure_spec__0_spec__0___boxed(lean_object* v_exp_1938_, lean_object* v_x_1939_){
_start:
{
uint8_t v_res_1940_; lean_object* v_r_1941_; 
v_res_1940_ = l_Lean_PersistentArray_anyMAux___at___00Lean_PersistentArray_anyM___at___00Lean_Elab_Term_hintAutoImplicitFailure_spec__0_spec__0(v_exp_1938_, v_x_1939_);
lean_dec_ref(v_x_1939_);
lean_dec_ref(v_exp_1938_);
v_r_1941_ = lean_box(v_res_1940_);
return v_r_1941_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentArray_anyM___at___00Lean_Elab_Term_hintAutoImplicitFailure_spec__0(lean_object* v_exp_1942_, lean_object* v_t_1943_){
_start:
{
lean_object* v_root_1944_; lean_object* v_tail_1945_; uint8_t v___x_1946_; 
v_root_1944_ = lean_ctor_get(v_t_1943_, 0);
v_tail_1945_ = lean_ctor_get(v_t_1943_, 1);
v___x_1946_ = l_Lean_PersistentArray_anyMAux___at___00Lean_PersistentArray_anyM___at___00Lean_Elab_Term_hintAutoImplicitFailure_spec__0_spec__0(v_exp_1942_, v_root_1944_);
if (v___x_1946_ == 0)
{
lean_object* v___x_1947_; lean_object* v___x_1948_; uint8_t v___x_1949_; 
v___x_1947_ = lean_unsigned_to_nat(0u);
v___x_1948_ = lean_array_get_size(v_tail_1945_);
v___x_1949_ = lean_nat_dec_lt(v___x_1947_, v___x_1948_);
if (v___x_1949_ == 0)
{
return v___x_1949_;
}
else
{
if (v___x_1949_ == 0)
{
return v___x_1949_;
}
else
{
size_t v___x_1950_; size_t v___x_1951_; uint8_t v___x_1952_; 
v___x_1950_ = ((size_t)0ULL);
v___x_1951_ = lean_usize_of_nat(v___x_1948_);
v___x_1952_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyM___at___00Lean_Elab_Term_hintAutoImplicitFailure_spec__0_spec__1(v_exp_1942_, v_tail_1945_, v___x_1950_, v___x_1951_);
return v___x_1952_;
}
}
}
else
{
return v___x_1946_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_anyM___at___00Lean_Elab_Term_hintAutoImplicitFailure_spec__0___boxed(lean_object* v_exp_1953_, lean_object* v_t_1954_){
_start:
{
uint8_t v_res_1955_; lean_object* v_r_1956_; 
v_res_1955_ = l_Lean_PersistentArray_anyM___at___00Lean_Elab_Term_hintAutoImplicitFailure_spec__0(v_exp_1953_, v_t_1954_);
lean_dec_ref(v_t_1954_);
lean_dec_ref(v_exp_1953_);
v_r_1956_ = lean_box(v_res_1955_);
return v_r_1956_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldrM___at___00Lean_Elab_Term_hintAutoImplicitFailure_spec__1(lean_object* v_init_1957_, lean_object* v_x_1958_){
_start:
{
if (lean_obj_tag(v_x_1958_) == 0)
{
lean_object* v_k_1959_; lean_object* v_l_1960_; lean_object* v_r_1961_; lean_object* v___x_1962_; lean_object* v___x_1963_; 
v_k_1959_ = lean_ctor_get(v_x_1958_, 1);
v_l_1960_ = lean_ctor_get(v_x_1958_, 3);
v_r_1961_ = lean_ctor_get(v_x_1958_, 4);
v___x_1962_ = l_Std_DTreeMap_Internal_Impl_foldrM___at___00Lean_Elab_Term_hintAutoImplicitFailure_spec__1(v_init_1957_, v_r_1961_);
lean_inc(v_k_1959_);
v___x_1963_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1963_, 0, v_k_1959_);
lean_ctor_set(v___x_1963_, 1, v___x_1962_);
v_init_1957_ = v___x_1963_;
v_x_1958_ = v_l_1960_;
goto _start;
}
else
{
return v_init_1957_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldrM___at___00Lean_Elab_Term_hintAutoImplicitFailure_spec__1___boxed(lean_object* v_init_1965_, lean_object* v_x_1966_){
_start:
{
lean_object* v_res_1967_; 
v_res_1967_ = l_Std_DTreeMap_Internal_Impl_foldrM___at___00Lean_Elab_Term_hintAutoImplicitFailure_spec__1(v_init_1965_, v_x_1966_);
lean_dec(v_x_1966_);
return v_res_1967_;
}
}
static lean_object* _init_l_List_mapTR_loop___at___00Lean_Elab_Term_hintAutoImplicitFailure_spec__2___closed__1(void){
_start:
{
lean_object* v___x_1969_; lean_object* v___x_1970_; 
v___x_1969_ = ((lean_object*)(l_List_mapTR_loop___at___00Lean_Elab_Term_hintAutoImplicitFailure_spec__2___closed__0));
v___x_1970_ = l_Lean_stringToMessageData(v___x_1969_);
return v___x_1970_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Elab_Term_hintAutoImplicitFailure_spec__2(lean_object* v_a_1971_, lean_object* v_a_1972_){
_start:
{
if (lean_obj_tag(v_a_1971_) == 0)
{
lean_object* v___x_1973_; 
v___x_1973_ = l_List_reverse___redArg(v_a_1972_);
return v___x_1973_;
}
else
{
lean_object* v_head_1974_; lean_object* v_tail_1975_; lean_object* v___x_1977_; uint8_t v_isShared_1978_; uint8_t v_isSharedCheck_1990_; 
v_head_1974_ = lean_ctor_get(v_a_1971_, 0);
v_tail_1975_ = lean_ctor_get(v_a_1971_, 1);
v_isSharedCheck_1990_ = !lean_is_exclusive(v_a_1971_);
if (v_isSharedCheck_1990_ == 0)
{
v___x_1977_ = v_a_1971_;
v_isShared_1978_ = v_isSharedCheck_1990_;
goto v_resetjp_1976_;
}
else
{
lean_inc(v_tail_1975_);
lean_inc(v_head_1974_);
lean_dec(v_a_1971_);
v___x_1977_ = lean_box(0);
v_isShared_1978_ = v_isSharedCheck_1990_;
goto v_resetjp_1976_;
}
v_resetjp_1976_:
{
lean_object* v___x_1979_; uint8_t v___x_1980_; lean_object* v___x_1981_; lean_object* v___x_1982_; lean_object* v___x_1983_; lean_object* v___x_1984_; lean_object* v___x_1985_; lean_object* v___x_1987_; 
v___x_1979_ = lean_obj_once(&l_List_mapTR_loop___at___00Lean_Elab_Term_hintAutoImplicitFailure_spec__2___closed__1, &l_List_mapTR_loop___at___00Lean_Elab_Term_hintAutoImplicitFailure_spec__2___closed__1_once, _init_l_List_mapTR_loop___at___00Lean_Elab_Term_hintAutoImplicitFailure_spec__2___closed__1);
v___x_1980_ = 0;
v___x_1981_ = l_Lean_MessageData_ofConstName(v_head_1974_, v___x_1980_);
v___x_1982_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1982_, 0, v___x_1979_);
lean_ctor_set(v___x_1982_, 1, v___x_1981_);
v___x_1983_ = lean_obj_once(&l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_IdentifierSuggestion_0__Lean_initFn_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2__spec__2___redArg___closed__5, &l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_IdentifierSuggestion_0__Lean_initFn_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2__spec__2___redArg___closed__5_once, _init_l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_IdentifierSuggestion_0__Lean_initFn_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2__spec__2___redArg___closed__5);
v___x_1984_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1984_, 0, v___x_1982_);
lean_ctor_set(v___x_1984_, 1, v___x_1983_);
v___x_1985_ = l_Lean_indentD(v___x_1984_);
if (v_isShared_1978_ == 0)
{
lean_ctor_set(v___x_1977_, 1, v_a_1972_);
lean_ctor_set(v___x_1977_, 0, v___x_1985_);
v___x_1987_ = v___x_1977_;
goto v_reusejp_1986_;
}
else
{
lean_object* v_reuseFailAlloc_1989_; 
v_reuseFailAlloc_1989_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1989_, 0, v___x_1985_);
lean_ctor_set(v_reuseFailAlloc_1989_, 1, v_a_1972_);
v___x_1987_ = v_reuseFailAlloc_1989_;
goto v_reusejp_1986_;
}
v_reusejp_1986_:
{
v_a_1971_ = v_tail_1975_;
v_a_1972_ = v___x_1987_;
goto _start;
}
}
}
}
}
static lean_object* _init_l_Lean_Elab_Term_hintAutoImplicitFailure___redArg___closed__1(void){
_start:
{
lean_object* v___x_1992_; lean_object* v___x_1993_; 
v___x_1992_ = ((lean_object*)(l_Lean_Elab_Term_hintAutoImplicitFailure___redArg___closed__0));
v___x_1993_ = l_Lean_stringToMessageData(v___x_1992_);
return v___x_1993_;
}
}
static lean_object* _init_l_Lean_Elab_Term_hintAutoImplicitFailure___redArg___closed__3(void){
_start:
{
lean_object* v___x_1995_; lean_object* v___x_1996_; 
v___x_1995_ = ((lean_object*)(l_Lean_Elab_Term_hintAutoImplicitFailure___redArg___closed__2));
v___x_1996_ = l_Lean_stringToMessageData(v___x_1995_);
return v___x_1996_;
}
}
static lean_object* _init_l_Lean_Elab_Term_hintAutoImplicitFailure___redArg___closed__5(void){
_start:
{
lean_object* v___x_1998_; lean_object* v___x_1999_; 
v___x_1998_ = ((lean_object*)(l_Lean_Elab_Term_hintAutoImplicitFailure___redArg___closed__4));
v___x_1999_ = l_Lean_stringToMessageData(v___x_1998_);
return v___x_1999_;
}
}
static lean_object* _init_l_Lean_Elab_Term_hintAutoImplicitFailure___redArg___closed__7(void){
_start:
{
lean_object* v___x_2001_; lean_object* v___x_2002_; 
v___x_2001_ = ((lean_object*)(l_Lean_Elab_Term_hintAutoImplicitFailure___redArg___closed__6));
v___x_2002_ = l_Lean_stringToMessageData(v___x_2001_);
return v___x_2002_;
}
}
static lean_object* _init_l_Lean_Elab_Term_hintAutoImplicitFailure___redArg___closed__8(void){
_start:
{
lean_object* v___x_2003_; lean_object* v___x_2004_; 
v___x_2003_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownNameWithSuggestions_spec__1_spec__4_spec__6_spec__9_spec__11___closed__0, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownNameWithSuggestions_spec__1_spec__4_spec__6_spec__9_spec__11___closed__0_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownNameWithSuggestions_spec__1_spec__4_spec__6_spec__9_spec__11___closed__0);
v___x_2004_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2004_, 0, v___x_2003_);
lean_ctor_set(v___x_2004_, 1, v___x_2003_);
return v___x_2004_;
}
}
static lean_object* _init_l_Lean_Elab_Term_hintAutoImplicitFailure___redArg___closed__10(void){
_start:
{
lean_object* v___x_2006_; lean_object* v___x_2007_; 
v___x_2006_ = ((lean_object*)(l_Lean_Elab_Term_hintAutoImplicitFailure___redArg___closed__9));
v___x_2007_ = l_Lean_stringToMessageData(v___x_2006_);
return v___x_2007_;
}
}
static lean_object* _init_l_Lean_Elab_Term_hintAutoImplicitFailure___redArg___closed__12(void){
_start:
{
lean_object* v___x_2009_; lean_object* v___x_2010_; 
v___x_2009_ = ((lean_object*)(l_Lean_Elab_Term_hintAutoImplicitFailure___redArg___closed__11));
v___x_2010_ = l_Lean_stringToMessageData(v___x_2009_);
return v___x_2010_;
}
}
static lean_object* _init_l_Lean_Elab_Term_hintAutoImplicitFailure___redArg___closed__14(void){
_start:
{
lean_object* v___x_2012_; lean_object* v___x_2013_; 
v___x_2012_ = ((lean_object*)(l_Lean_Elab_Term_hintAutoImplicitFailure___redArg___closed__13));
v___x_2013_ = l_Lean_stringToMessageData(v___x_2012_);
return v___x_2013_;
}
}
static lean_object* _init_l_Lean_Elab_Term_hintAutoImplicitFailure___redArg___closed__16(void){
_start:
{
lean_object* v___x_2015_; lean_object* v___x_2016_; 
v___x_2015_ = ((lean_object*)(l_Lean_Elab_Term_hintAutoImplicitFailure___redArg___closed__15));
v___x_2016_ = l_Lean_stringToMessageData(v___x_2015_);
return v___x_2016_;
}
}
static lean_object* _init_l_Lean_Elab_Term_hintAutoImplicitFailure___redArg___closed__18(void){
_start:
{
lean_object* v___x_2018_; lean_object* v___x_2019_; 
v___x_2018_ = ((lean_object*)(l_Lean_Elab_Term_hintAutoImplicitFailure___redArg___closed__17));
v___x_2019_ = l_Lean_stringToMessageData(v___x_2018_);
return v___x_2019_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_hintAutoImplicitFailure___redArg(lean_object* v_exp_2020_, lean_object* v_expected_2021_, lean_object* v_a_2022_, lean_object* v_a_2023_, lean_object* v_a_2024_, lean_object* v_a_2025_){
_start:
{
lean_object* v_autoBoundImplicitContext_2030_; 
v_autoBoundImplicitContext_2030_ = lean_ctor_get(v_a_2022_, 2);
if (lean_obj_tag(v_autoBoundImplicitContext_2030_) == 0)
{
lean_dec_ref(v_expected_2021_);
goto v___jp_2027_;
}
else
{
lean_object* v_val_2031_; uint8_t v___x_2032_; 
v_val_2031_ = lean_ctor_get(v_autoBoundImplicitContext_2030_, 0);
v___x_2032_ = l_Lean_Expr_isFVar(v_exp_2020_);
if (v___x_2032_ == 0)
{
lean_dec_ref(v_expected_2021_);
goto v___jp_2027_;
}
else
{
lean_object* v_boundVariables_2033_; uint8_t v___x_2034_; 
v_boundVariables_2033_ = lean_ctor_get(v_val_2031_, 0);
v___x_2034_ = l_Lean_PersistentArray_anyM___at___00Lean_Elab_Term_hintAutoImplicitFailure_spec__0(v_exp_2020_, v_boundVariables_2033_);
if (v___x_2034_ == 0)
{
lean_dec_ref(v_expected_2021_);
goto v___jp_2027_;
}
else
{
lean_object* v___x_2035_; lean_object* v___x_2036_; 
v___x_2035_ = l_Lean_Expr_fvarId_x21(v_exp_2020_);
v___x_2036_ = l_Lean_FVarId_getUserName___redArg(v___x_2035_, v_a_2023_, v_a_2024_, v_a_2025_);
if (lean_obj_tag(v___x_2036_) == 0)
{
lean_object* v_a_2037_; lean_object* v___x_2038_; lean_object* v___x_2039_; lean_object* v___x_2040_; lean_object* v___x_2041_; lean_object* v___x_2042_; lean_object* v___x_2043_; lean_object* v___x_2044_; lean_object* v___x_2045_; lean_object* v___x_2046_; lean_object* v___x_2047_; lean_object* v___x_2048_; lean_object* v___x_2049_; lean_object* v___x_2050_; lean_object* v_a_2051_; lean_object* v___x_2053_; uint8_t v_isShared_2054_; uint8_t v_isSharedCheck_2095_; 
v_a_2037_ = lean_ctor_get(v___x_2036_, 0);
lean_inc_n(v_a_2037_, 2);
lean_dec_ref_known(v___x_2036_, 1);
v___x_2038_ = lean_obj_once(&l_Lean_Elab_Term_hintAutoImplicitFailure___redArg___closed__1, &l_Lean_Elab_Term_hintAutoImplicitFailure___redArg___closed__1_once, _init_l_Lean_Elab_Term_hintAutoImplicitFailure___redArg___closed__1);
v___x_2039_ = l_Lean_MessageData_ofName(v_a_2037_);
lean_inc_ref(v___x_2039_);
v___x_2040_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2040_, 0, v___x_2038_);
lean_ctor_set(v___x_2040_, 1, v___x_2039_);
v___x_2041_ = lean_obj_once(&l_Lean_Elab_Term_hintAutoImplicitFailure___redArg___closed__3, &l_Lean_Elab_Term_hintAutoImplicitFailure___redArg___closed__3_once, _init_l_Lean_Elab_Term_hintAutoImplicitFailure___redArg___closed__3);
v___x_2042_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2042_, 0, v___x_2040_);
lean_ctor_set(v___x_2042_, 1, v___x_2041_);
v___x_2043_ = l_Lean_stringToMessageData(v_expected_2021_);
lean_inc_ref(v___x_2043_);
v___x_2044_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2044_, 0, v___x_2042_);
lean_ctor_set(v___x_2044_, 1, v___x_2043_);
v___x_2045_ = lean_obj_once(&l_Lean_Elab_Term_hintAutoImplicitFailure___redArg___closed__5, &l_Lean_Elab_Term_hintAutoImplicitFailure___redArg___closed__5_once, _init_l_Lean_Elab_Term_hintAutoImplicitFailure___redArg___closed__5);
v___x_2046_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2046_, 0, v___x_2044_);
lean_ctor_set(v___x_2046_, 1, v___x_2045_);
v___x_2047_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2047_, 0, v___x_2046_);
lean_ctor_set(v___x_2047_, 1, v___x_2043_);
v___x_2048_ = lean_obj_once(&l_Lean_Elab_Term_hintAutoImplicitFailure___redArg___closed__7, &l_Lean_Elab_Term_hintAutoImplicitFailure___redArg___closed__7_once, _init_l_Lean_Elab_Term_hintAutoImplicitFailure___redArg___closed__7);
v___x_2049_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2049_, 0, v___x_2047_);
lean_ctor_set(v___x_2049_, 1, v___x_2048_);
v___x_2050_ = l_Lean_getSuggestions___at___00Lean_throwUnknownNameWithSuggestions_spec__0___redArg(v_a_2037_, v_a_2025_);
v_a_2051_ = lean_ctor_get(v___x_2050_, 0);
v_isSharedCheck_2095_ = !lean_is_exclusive(v___x_2050_);
if (v_isSharedCheck_2095_ == 0)
{
v___x_2053_ = v___x_2050_;
v_isShared_2054_ = v_isSharedCheck_2095_;
goto v_resetjp_2052_;
}
else
{
lean_inc(v_a_2051_);
lean_dec(v___x_2050_);
v___x_2053_ = lean_box(0);
v_isShared_2054_ = v_isSharedCheck_2095_;
goto v_resetjp_2052_;
}
v_resetjp_2052_:
{
lean_object* v___y_2056_; lean_object* v___x_2062_; lean_object* v___x_2063_; 
v___x_2062_ = lean_box(0);
v___x_2063_ = l_Std_DTreeMap_Internal_Impl_foldrM___at___00Lean_Elab_Term_hintAutoImplicitFailure_spec__1(v___x_2062_, v_a_2051_);
lean_dec(v_a_2051_);
if (lean_obj_tag(v___x_2063_) == 0)
{
lean_object* v___x_2064_; 
lean_dec_ref(v___x_2039_);
v___x_2064_ = l_Lean_MessageData_nil;
v___y_2056_ = v___x_2064_;
goto v___jp_2055_;
}
else
{
lean_object* v_tail_2065_; 
v_tail_2065_ = lean_ctor_get(v___x_2063_, 1);
lean_inc(v_tail_2065_);
if (lean_obj_tag(v_tail_2065_) == 0)
{
lean_object* v_head_2066_; lean_object* v___x_2068_; uint8_t v_isShared_2069_; uint8_t v_isSharedCheck_2083_; 
v_head_2066_ = lean_ctor_get(v___x_2063_, 0);
v_isSharedCheck_2083_ = !lean_is_exclusive(v___x_2063_);
if (v_isSharedCheck_2083_ == 0)
{
lean_object* v_unused_2084_; 
v_unused_2084_ = lean_ctor_get(v___x_2063_, 1);
lean_dec(v_unused_2084_);
v___x_2068_ = v___x_2063_;
v_isShared_2069_ = v_isSharedCheck_2083_;
goto v_resetjp_2067_;
}
else
{
lean_inc(v_head_2066_);
lean_dec(v___x_2063_);
v___x_2068_ = lean_box(0);
v_isShared_2069_ = v_isSharedCheck_2083_;
goto v_resetjp_2067_;
}
v_resetjp_2067_:
{
lean_object* v___x_2070_; lean_object* v___x_2071_; uint8_t v___x_2072_; lean_object* v___x_2073_; lean_object* v___x_2075_; 
v___x_2070_ = lean_obj_once(&l_Lean_Elab_Term_hintAutoImplicitFailure___redArg___closed__8, &l_Lean_Elab_Term_hintAutoImplicitFailure___redArg___closed__8_once, _init_l_Lean_Elab_Term_hintAutoImplicitFailure___redArg___closed__8);
v___x_2071_ = lean_obj_once(&l_Lean_Elab_Term_hintAutoImplicitFailure___redArg___closed__10, &l_Lean_Elab_Term_hintAutoImplicitFailure___redArg___closed__10_once, _init_l_Lean_Elab_Term_hintAutoImplicitFailure___redArg___closed__10);
v___x_2072_ = 0;
v___x_2073_ = l_Lean_MessageData_ofConstName(v_head_2066_, v___x_2072_);
if (v_isShared_2069_ == 0)
{
lean_ctor_set_tag(v___x_2068_, 7);
lean_ctor_set(v___x_2068_, 1, v___x_2073_);
lean_ctor_set(v___x_2068_, 0, v___x_2071_);
v___x_2075_ = v___x_2068_;
goto v_reusejp_2074_;
}
else
{
lean_object* v_reuseFailAlloc_2082_; 
v_reuseFailAlloc_2082_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2082_, 0, v___x_2071_);
lean_ctor_set(v_reuseFailAlloc_2082_, 1, v___x_2073_);
v___x_2075_ = v_reuseFailAlloc_2082_;
goto v_reusejp_2074_;
}
v_reusejp_2074_:
{
lean_object* v___x_2076_; lean_object* v___x_2077_; lean_object* v___x_2078_; lean_object* v___x_2079_; lean_object* v___x_2080_; lean_object* v___x_2081_; 
v___x_2076_ = lean_obj_once(&l_Lean_Elab_Term_hintAutoImplicitFailure___redArg___closed__12, &l_Lean_Elab_Term_hintAutoImplicitFailure___redArg___closed__12_once, _init_l_Lean_Elab_Term_hintAutoImplicitFailure___redArg___closed__12);
v___x_2077_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2077_, 0, v___x_2075_);
lean_ctor_set(v___x_2077_, 1, v___x_2076_);
v___x_2078_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2078_, 0, v___x_2077_);
lean_ctor_set(v___x_2078_, 1, v___x_2039_);
v___x_2079_ = lean_obj_once(&l_Lean_Elab_Term_hintAutoImplicitFailure___redArg___closed__14, &l_Lean_Elab_Term_hintAutoImplicitFailure___redArg___closed__14_once, _init_l_Lean_Elab_Term_hintAutoImplicitFailure___redArg___closed__14);
v___x_2080_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2080_, 0, v___x_2078_);
lean_ctor_set(v___x_2080_, 1, v___x_2079_);
v___x_2081_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2081_, 0, v___x_2070_);
lean_ctor_set(v___x_2081_, 1, v___x_2080_);
v___y_2056_ = v___x_2081_;
goto v___jp_2055_;
}
}
}
else
{
lean_object* v___x_2085_; lean_object* v___x_2086_; lean_object* v___x_2087_; lean_object* v___x_2088_; lean_object* v___x_2089_; lean_object* v___x_2090_; lean_object* v___x_2091_; lean_object* v___x_2092_; lean_object* v___x_2093_; lean_object* v___x_2094_; 
lean_dec(v_tail_2065_);
v___x_2085_ = lean_obj_once(&l_Lean_Elab_Term_hintAutoImplicitFailure___redArg___closed__8, &l_Lean_Elab_Term_hintAutoImplicitFailure___redArg___closed__8_once, _init_l_Lean_Elab_Term_hintAutoImplicitFailure___redArg___closed__8);
v___x_2086_ = lean_obj_once(&l_Lean_Elab_Term_hintAutoImplicitFailure___redArg___closed__16, &l_Lean_Elab_Term_hintAutoImplicitFailure___redArg___closed__16_once, _init_l_Lean_Elab_Term_hintAutoImplicitFailure___redArg___closed__16);
v___x_2087_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2087_, 0, v___x_2086_);
lean_ctor_set(v___x_2087_, 1, v___x_2039_);
v___x_2088_ = lean_obj_once(&l_Lean_Elab_Term_hintAutoImplicitFailure___redArg___closed__18, &l_Lean_Elab_Term_hintAutoImplicitFailure___redArg___closed__18_once, _init_l_Lean_Elab_Term_hintAutoImplicitFailure___redArg___closed__18);
v___x_2089_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2089_, 0, v___x_2087_);
lean_ctor_set(v___x_2089_, 1, v___x_2088_);
v___x_2090_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2090_, 0, v___x_2085_);
lean_ctor_set(v___x_2090_, 1, v___x_2089_);
v___x_2091_ = l_List_mapTR_loop___at___00Lean_Elab_Term_hintAutoImplicitFailure_spec__2(v___x_2063_, v___x_2062_);
v___x_2092_ = l_Lean_MessageData_nil;
v___x_2093_ = l_Lean_MessageData_joinSep(v___x_2091_, v___x_2092_);
v___x_2094_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2094_, 0, v___x_2090_);
lean_ctor_set(v___x_2094_, 1, v___x_2093_);
v___y_2056_ = v___x_2094_;
goto v___jp_2055_;
}
}
v___jp_2055_:
{
lean_object* v___x_2057_; lean_object* v___x_2058_; lean_object* v___x_2060_; 
v___x_2057_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2057_, 0, v___x_2049_);
lean_ctor_set(v___x_2057_, 1, v___y_2056_);
v___x_2058_ = l_Lean_MessageData_hint_x27(v___x_2057_);
if (v_isShared_2054_ == 0)
{
lean_ctor_set(v___x_2053_, 0, v___x_2058_);
v___x_2060_ = v___x_2053_;
goto v_reusejp_2059_;
}
else
{
lean_object* v_reuseFailAlloc_2061_; 
v_reuseFailAlloc_2061_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2061_, 0, v___x_2058_);
v___x_2060_ = v_reuseFailAlloc_2061_;
goto v_reusejp_2059_;
}
v_reusejp_2059_:
{
return v___x_2060_;
}
}
}
}
else
{
lean_object* v_a_2096_; lean_object* v___x_2098_; uint8_t v_isShared_2099_; uint8_t v_isSharedCheck_2103_; 
lean_dec_ref(v_expected_2021_);
v_a_2096_ = lean_ctor_get(v___x_2036_, 0);
v_isSharedCheck_2103_ = !lean_is_exclusive(v___x_2036_);
if (v_isSharedCheck_2103_ == 0)
{
v___x_2098_ = v___x_2036_;
v_isShared_2099_ = v_isSharedCheck_2103_;
goto v_resetjp_2097_;
}
else
{
lean_inc(v_a_2096_);
lean_dec(v___x_2036_);
v___x_2098_ = lean_box(0);
v_isShared_2099_ = v_isSharedCheck_2103_;
goto v_resetjp_2097_;
}
v_resetjp_2097_:
{
lean_object* v___x_2101_; 
if (v_isShared_2099_ == 0)
{
v___x_2101_ = v___x_2098_;
goto v_reusejp_2100_;
}
else
{
lean_object* v_reuseFailAlloc_2102_; 
v_reuseFailAlloc_2102_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2102_, 0, v_a_2096_);
v___x_2101_ = v_reuseFailAlloc_2102_;
goto v_reusejp_2100_;
}
v_reusejp_2100_:
{
return v___x_2101_;
}
}
}
}
}
}
v___jp_2027_:
{
lean_object* v___x_2028_; lean_object* v___x_2029_; 
v___x_2028_ = l_Lean_MessageData_nil;
v___x_2029_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2029_, 0, v___x_2028_);
return v___x_2029_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_hintAutoImplicitFailure___redArg___boxed(lean_object* v_exp_2104_, lean_object* v_expected_2105_, lean_object* v_a_2106_, lean_object* v_a_2107_, lean_object* v_a_2108_, lean_object* v_a_2109_, lean_object* v_a_2110_){
_start:
{
lean_object* v_res_2111_; 
v_res_2111_ = l_Lean_Elab_Term_hintAutoImplicitFailure___redArg(v_exp_2104_, v_expected_2105_, v_a_2106_, v_a_2107_, v_a_2108_, v_a_2109_);
lean_dec(v_a_2109_);
lean_dec_ref(v_a_2108_);
lean_dec_ref(v_a_2107_);
lean_dec_ref(v_a_2106_);
lean_dec_ref(v_exp_2104_);
return v_res_2111_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_hintAutoImplicitFailure(lean_object* v_exp_2112_, lean_object* v_expected_2113_, lean_object* v_a_2114_, lean_object* v_a_2115_, lean_object* v_a_2116_, lean_object* v_a_2117_, lean_object* v_a_2118_, lean_object* v_a_2119_){
_start:
{
lean_object* v___x_2121_; 
v___x_2121_ = l_Lean_Elab_Term_hintAutoImplicitFailure___redArg(v_exp_2112_, v_expected_2113_, v_a_2114_, v_a_2116_, v_a_2118_, v_a_2119_);
return v___x_2121_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_hintAutoImplicitFailure___boxed(lean_object* v_exp_2122_, lean_object* v_expected_2123_, lean_object* v_a_2124_, lean_object* v_a_2125_, lean_object* v_a_2126_, lean_object* v_a_2127_, lean_object* v_a_2128_, lean_object* v_a_2129_, lean_object* v_a_2130_){
_start:
{
lean_object* v_res_2131_; 
v_res_2131_ = l_Lean_Elab_Term_hintAutoImplicitFailure(v_exp_2122_, v_expected_2123_, v_a_2124_, v_a_2125_, v_a_2126_, v_a_2127_, v_a_2128_, v_a_2129_);
lean_dec(v_a_2129_);
lean_dec_ref(v_a_2128_);
lean_dec(v_a_2127_);
lean_dec_ref(v_a_2126_);
lean_dec(v_a_2125_);
lean_dec_ref(v_a_2124_);
lean_dec_ref(v_exp_2122_);
return v_res_2131_;
}
}
lean_object* runtime_initialize_Lean_Elab_DeclModifiers(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_ErrorUtils(uint8_t builtin);
lean_object* runtime_initialize_Init_Omega(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_IdentifierSuggestion(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Elab_DeclModifiers(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_ErrorUtils(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_IdentifierSuggestion_0__Lean_initFn_00___x40_Lean_IdentifierSuggestion_3030853032____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l___private_Lean_IdentifierSuggestion_0__Lean_identifierSuggestionsImpl = lean_io_result_get_value(res);
lean_mark_persistent(l___private_Lean_IdentifierSuggestion_0__Lean_identifierSuggestionsImpl);
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_IdentifierSuggestion(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Elab_DeclModifiers(uint8_t builtin);
lean_object* initialize_Lean_Elab_ErrorUtils(uint8_t builtin);
lean_object* initialize_Init_Omega(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_IdentifierSuggestion(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Elab_DeclModifiers(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_ErrorUtils(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_IdentifierSuggestion(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_IdentifierSuggestion(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_IdentifierSuggestion(builtin);
}
#ifdef __cplusplus
}
#endif

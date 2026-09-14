// Lean compiler output
// Module: Lean.Util.CollectAxioms
// Imports: public import Lean.MonadEnv
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
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_task_get_own(lean_object*);
lean_object* l_Lean_Environment_setExporting(lean_object*, uint8_t);
lean_object* l_Lean_Environment_find_x3f(lean_object*, lean_object*, uint8_t);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_add(size_t, size_t);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* l_Lean_Environment_getModuleIdxFor_x3f(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_nat_shiftr(lean_object*, lean_object*);
uint8_t l_Lean_Name_quickLt(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_NameSet_insert(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fswap(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Name_lt(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
extern lean_object* l_Lean_NameSet_empty;
lean_object* lean_environment_find(lean_object*, lean_object*);
lean_object* l_Lean_Expr_getUsedConstants(lean_object*);
lean_object* l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(lean_object*, uint8_t);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__2___boxed(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_instMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_instMonad___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_instMonad___redArg___lam__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_instMonad___redArg___lam__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_pure(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_bind(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_instInhabited___redArg();
lean_object* l_instInhabitedOfMonad___redArg(lean_object*, lean_object*);
lean_object* l_instInhabitedForall___redArg___lam__0___boxed(lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* l_Lean_registerPersistentEnvExtensionUnsafe___redArg(lean_object*);
lean_object* l_Lean_PersistentEnvExtension_getState___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_runM___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_runM___redArg___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_runM___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_runM(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_insertArray_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_insertArray_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_insertArray(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_insertArray___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collect_spec__1_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collect_spec__2_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collect_spec__2_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collect_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collect_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collect___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collect___closed__0 = (const lean_object*)&l___private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collect___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collect_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collect___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collect(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forM___at___00__private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collect_spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forM___at___00__private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collect_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collect_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collect___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collect___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collect_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collect_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collect_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collect_spec__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collect_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_panic___at___00__private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collectAndGet_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collectAndGet_spec__0___closed__0 = (const lean_object*)&l_panic___at___00__private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collectAndGet_spec__0___closed__0_value;
static const lean_closure_object l_panic___at___00__private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collectAndGet_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collectAndGet_spec__0___closed__1 = (const lean_object*)&l_panic___at___00__private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collectAndGet_spec__0___closed__1_value;
static const lean_closure_object l_panic___at___00__private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collectAndGet_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collectAndGet_spec__0___closed__2 = (const lean_object*)&l_panic___at___00__private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collectAndGet_spec__0___closed__2_value;
static const lean_closure_object l_panic___at___00__private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collectAndGet_spec__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__3, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collectAndGet_spec__0___closed__3 = (const lean_object*)&l_panic___at___00__private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collectAndGet_spec__0___closed__3_value;
static const lean_closure_object l_panic___at___00__private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collectAndGet_spec__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__4___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collectAndGet_spec__0___closed__4 = (const lean_object*)&l_panic___at___00__private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collectAndGet_spec__0___closed__4_value;
static const lean_closure_object l_panic___at___00__private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collectAndGet_spec__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__5___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collectAndGet_spec__0___closed__5 = (const lean_object*)&l_panic___at___00__private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collectAndGet_spec__0___closed__5_value;
static const lean_closure_object l_panic___at___00__private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collectAndGet_spec__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__6, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collectAndGet_spec__0___closed__6 = (const lean_object*)&l_panic___at___00__private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collectAndGet_spec__0___closed__6_value;
static lean_once_cell_t l_panic___at___00__private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collectAndGet_spec__0___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00__private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collectAndGet_spec__0___closed__7;
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collectAndGet_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collectAndGet_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collectAndGet___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "Lean.Util.CollectAxioms"};
static const lean_object* l___private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collectAndGet___closed__0 = (const lean_object*)&l___private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collectAndGet___closed__0_value;
static const lean_string_object l___private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collectAndGet___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 68, .m_capacity = 68, .m_length = 67, .m_data = "_private.Lean.Util.CollectAxioms.0.Lean.CollectAxioms.collectAndGet"};
static const lean_object* l___private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collectAndGet___closed__1 = (const lean_object*)&l___private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collectAndGet___closed__1_value;
static const lean_string_object l___private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collectAndGet___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "collectAndGet: '"};
static const lean_object* l___private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collectAndGet___closed__2 = (const lean_object*)&l___private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collectAndGet___closed__2_value;
static const lean_string_object l___private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collectAndGet___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "' not in seen after collect"};
static const lean_object* l___private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collectAndGet___closed__3 = (const lean_object*)&l___private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collectAndGet___closed__3_value;
LEAN_EXPORT lean_object* l___private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collectAndGet(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collectAndGet___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Util_CollectAxioms_0__Lean_instInhabitedExportedAxiomsState___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Util_CollectAxioms_0__Lean_instInhabitedExportedAxiomsState___closed__0 = (const lean_object*)&l___private_Lean_Util_CollectAxioms_0__Lean_instInhabitedExportedAxiomsState___closed__0_value;
LEAN_EXPORT const lean_object* l___private_Lean_Util_CollectAxioms_0__Lean_instInhabitedExportedAxiomsState = (const lean_object*)&l___private_Lean_Util_CollectAxioms_0__Lean_instInhabitedExportedAxiomsState___closed__0_value;
LEAN_EXPORT uint8_t l_Array_binSearchAux___at___00__private_Lean_Util_CollectAxioms_0__Lean_ExportedAxiomsState_find_x3f_spec__0___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00__private_Lean_Util_CollectAxioms_0__Lean_ExportedAxiomsState_find_x3f_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00__private_Lean_Util_CollectAxioms_0__Lean_ExportedAxiomsState_find_x3f_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00__private_Lean_Util_CollectAxioms_0__Lean_ExportedAxiomsState_find_x3f_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_CollectAxioms_0__Lean_ExportedAxiomsState_find_x3f(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_CollectAxioms_0__Lean_ExportedAxiomsState_find_x3f___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00__private_Lean_Util_CollectAxioms_0__Lean_ExportedAxiomsState_find_x3f_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00__private_Lean_Util_CollectAxioms_0__Lean_ExportedAxiomsState_find_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Util_CollectAxioms_0__Lean_initFn___lam__0___closed__0_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Util_CollectAxioms_0__Lean_initFn___lam__0___closed__0_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Util_CollectAxioms_0__Lean_initFn___lam__0___closed__0_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Util_CollectAxioms_0__Lean_initFn___lam__0_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2_(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_CollectAxioms_0__Lean_initFn___lam__0_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_CollectAxioms_0__Lean_initFn___lam__1_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2_(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_CollectAxioms_0__Lean_initFn___lam__1_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_CollectAxioms_0__Lean_initFn___lam__2_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2_(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_CollectAxioms_0__Lean_initFn___lam__2_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2____boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_CollectAxioms_0__Lean_initFn___lam__3_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2_(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_CollectAxioms_0__Lean_initFn___lam__3_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_CollectAxioms_0__Lean_initFn___lam__4_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2_(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_CollectAxioms_0__Lean_initFn___lam__4_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_CollectAxioms_0__Lean_initFn_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_CollectAxioms_0__Lean_initFn_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Util_CollectAxioms_0__Lean_initFn_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Util_CollectAxioms_0__Lean_initFn_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Util_CollectAxioms_0__Lean_initFn_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__4___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Util_CollectAxioms_0__Lean_initFn_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Util_CollectAxioms_0__Lean_initFn_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Util_CollectAxioms_0__Lean_initFn_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00__private_Lean_Util_CollectAxioms_0__Lean_initFn_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00__private_Lean_Util_CollectAxioms_0__Lean_initFn_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00__private_Lean_Util_CollectAxioms_0__Lean_initFn_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Util_CollectAxioms_0__Lean_initFn_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__spec__2_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Util_CollectAxioms_0__Lean_initFn_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__spec__2_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Util_CollectAxioms_0__Lean_initFn_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Util_CollectAxioms_0__Lean_initFn_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Util_CollectAxioms_0__Lean_initFn___lam__5___boxed__const__1_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + sizeof(size_t)*1, .m_other = 0, .m_tag = 0}, .m_objs = {(lean_object*)(size_t)(0ULL)}};
LEAN_EXPORT const lean_object* l___private_Lean_Util_CollectAxioms_0__Lean_initFn___lam__5___boxed__const__1_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Util_CollectAxioms_0__Lean_initFn___lam__5___boxed__const__1_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Util_CollectAxioms_0__Lean_initFn___lam__5_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2_(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_CollectAxioms_0__Lean_initFn___lam__6_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2_(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_CollectAxioms_0__Lean_initFn___lam__6_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2____boxed(lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Util_CollectAxioms_0__Lean_initFn___closed__0_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Util_CollectAxioms_0__Lean_initFn___lam__0_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2____boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Util_CollectAxioms_0__Lean_initFn___closed__0_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Util_CollectAxioms_0__Lean_initFn___closed__0_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Util_CollectAxioms_0__Lean_initFn___closed__1_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Util_CollectAxioms_0__Lean_initFn___lam__1_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2____boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Util_CollectAxioms_0__Lean_initFn___closed__1_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Util_CollectAxioms_0__Lean_initFn___closed__1_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Util_CollectAxioms_0__Lean_initFn___closed__2_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Util_CollectAxioms_0__Lean_initFn___lam__2_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2____boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Util_CollectAxioms_0__Lean_initFn___closed__2_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Util_CollectAxioms_0__Lean_initFn___closed__2_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Util_CollectAxioms_0__Lean_initFn___closed__3_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Util_CollectAxioms_0__Lean_initFn___lam__3_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2____boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Util_CollectAxioms_0__Lean_initFn___closed__3_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Util_CollectAxioms_0__Lean_initFn___closed__3_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Util_CollectAxioms_0__Lean_initFn___closed__4_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_CollectAxioms_0__Lean_initFn___closed__4_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Util_CollectAxioms_0__Lean_initFn___closed__5_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lean_Util_CollectAxioms_0__Lean_initFn___closed__5_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Util_CollectAxioms_0__Lean_initFn___closed__5_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Util_CollectAxioms_0__Lean_initFn___closed__6_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_CollectAxioms_0__Lean_initFn___closed__6_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Util_CollectAxioms_0__Lean_initFn___closed__7_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Util_CollectAxioms_0__Lean_initFn___closed__7_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Util_CollectAxioms_0__Lean_initFn___closed__7_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Util_CollectAxioms_0__Lean_initFn___closed__8_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_CollectAxioms_0__Lean_initFn___closed__8_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Util_CollectAxioms_0__Lean_initFn___closed__9_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Util"};
static const lean_object* l___private_Lean_Util_CollectAxioms_0__Lean_initFn___closed__9_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Util_CollectAxioms_0__Lean_initFn___closed__9_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Util_CollectAxioms_0__Lean_initFn___closed__10_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_CollectAxioms_0__Lean_initFn___closed__10_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Util_CollectAxioms_0__Lean_initFn___closed__11_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "CollectAxioms"};
static const lean_object* l___private_Lean_Util_CollectAxioms_0__Lean_initFn___closed__11_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Util_CollectAxioms_0__Lean_initFn___closed__11_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Util_CollectAxioms_0__Lean_initFn___closed__12_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_CollectAxioms_0__Lean_initFn___closed__12_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2_;
static const lean_closure_object l___private_Lean_Util_CollectAxioms_0__Lean_initFn___closed__13_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Util_CollectAxioms_0__Lean_initFn___lam__5_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2_, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l___private_Lean_Util_CollectAxioms_0__Lean_initFn___closed__13_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Util_CollectAxioms_0__Lean_initFn___closed__13_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Util_CollectAxioms_0__Lean_initFn___closed__14_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_CollectAxioms_0__Lean_initFn___closed__14_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Util_CollectAxioms_0__Lean_initFn___closed__15_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_CollectAxioms_0__Lean_initFn___closed__15_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Util_CollectAxioms_0__Lean_initFn___closed__16_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "exportedAxiomsExt"};
static const lean_object* l___private_Lean_Util_CollectAxioms_0__Lean_initFn___closed__16_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Util_CollectAxioms_0__Lean_initFn___closed__16_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Util_CollectAxioms_0__Lean_initFn___closed__17_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_CollectAxioms_0__Lean_initFn___closed__17_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2_;
static const lean_closure_object l___private_Lean_Util_CollectAxioms_0__Lean_initFn___closed__18_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Util_CollectAxioms_0__Lean_initFn___lam__6_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2____boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l___private_Lean_Util_CollectAxioms_0__Lean_instInhabitedExportedAxiomsState___closed__0_value)} };
static const lean_object* l___private_Lean_Util_CollectAxioms_0__Lean_initFn___closed__18_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Util_CollectAxioms_0__Lean_initFn___closed__18_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Util_CollectAxioms_0__Lean_initFn___closed__19_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_CollectAxioms_0__Lean_initFn___closed__19_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Util_CollectAxioms_0__Lean_initFn___closed__20_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_CollectAxioms_0__Lean_initFn___closed__20_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Util_CollectAxioms_0__Lean_initFn_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Util_CollectAxioms_0__Lean_initFn_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00__private_Lean_Util_CollectAxioms_0__Lean_initFn_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00__private_Lean_Util_CollectAxioms_0__Lean_initFn_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Util_CollectAxioms_0__Lean_initFn_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Util_CollectAxioms_0__Lean_initFn_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Util_CollectAxioms_0__Lean_initFn_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Util_CollectAxioms_0__Lean_initFn_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Util_CollectAxioms_0__Lean_initFn_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Util_CollectAxioms_0__Lean_initFn_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Util_CollectAxioms_0__Lean_initFn_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__spec__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Util_CollectAxioms_0__Lean_initFn_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Util_CollectAxioms_0__Lean_initFn_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Util_CollectAxioms_0__Lean_initFn_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Util_CollectAxioms_0__Lean_initFn_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Util_CollectAxioms_0__Lean_initFn_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Util_CollectAxioms_0__Lean_initFn_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Util_CollectAxioms_0__Lean_initFn_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_CollectAxioms_0__Lean_exportedAxiomsExt;
LEAN_EXPORT lean_object* l_Lean_collectAxioms___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_collectAxioms___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_collectAxioms(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* _init_l___private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_runM___redArg___closed__0(void){
_start:
{
lean_object* v___x_1_; lean_object* v___x_2_; lean_object* v___x_3_; 
v___x_1_ = l_Lean_NameSet_empty;
v___x_2_ = lean_box(1);
v___x_3_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3_, 0, v___x_2_);
lean_ctor_set(v___x_3_, 1, v___x_1_);
return v___x_3_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_runM___redArg(lean_object* v_env_4_, lean_object* v_x_5_){
_start:
{
lean_object* v___x_6_; lean_object* v___x_7_; lean_object* v_fst_8_; 
v___x_6_ = lean_obj_once(&l___private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_runM___redArg___closed__0, &l___private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_runM___redArg___closed__0_once, _init_l___private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_runM___redArg___closed__0);
v___x_7_ = lean_apply_2(v_x_5_, v_env_4_, v___x_6_);
v_fst_8_ = lean_ctor_get(v___x_7_, 0);
lean_inc(v_fst_8_);
lean_dec_ref(v___x_7_);
return v_fst_8_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_runM(lean_object* v_00_u03b1_9_, lean_object* v_env_10_, lean_object* v_x_11_){
_start:
{
lean_object* v___x_12_; 
v___x_12_ = l___private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_runM___redArg(v_env_10_, v_x_11_);
return v___x_12_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_insertArray_spec__0(lean_object* v_as_13_, size_t v_i_14_, size_t v_stop_15_, lean_object* v_b_16_){
_start:
{
uint8_t v___x_17_; 
v___x_17_ = lean_usize_dec_eq(v_i_14_, v_stop_15_);
if (v___x_17_ == 0)
{
lean_object* v___x_18_; lean_object* v___x_19_; size_t v___x_20_; size_t v___x_21_; 
v___x_18_ = lean_array_uget_borrowed(v_as_13_, v_i_14_);
lean_inc(v___x_18_);
v___x_19_ = l_Lean_NameSet_insert(v_b_16_, v___x_18_);
v___x_20_ = ((size_t)1ULL);
v___x_21_ = lean_usize_add(v_i_14_, v___x_20_);
v_i_14_ = v___x_21_;
v_b_16_ = v___x_19_;
goto _start;
}
else
{
return v_b_16_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_insertArray_spec__0___boxed(lean_object* v_as_23_, lean_object* v_i_24_, lean_object* v_stop_25_, lean_object* v_b_26_){
_start:
{
size_t v_i_boxed_27_; size_t v_stop_boxed_28_; lean_object* v_res_29_; 
v_i_boxed_27_ = lean_unbox_usize(v_i_24_);
lean_dec(v_i_24_);
v_stop_boxed_28_ = lean_unbox_usize(v_stop_25_);
lean_dec(v_stop_25_);
v_res_29_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_insertArray_spec__0(v_as_23_, v_i_boxed_27_, v_stop_boxed_28_, v_b_26_);
lean_dec_ref(v_as_23_);
return v_res_29_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_insertArray(lean_object* v_s_30_, lean_object* v_axs_31_){
_start:
{
lean_object* v___x_32_; lean_object* v___x_33_; uint8_t v___x_34_; 
v___x_32_ = lean_unsigned_to_nat(0u);
v___x_33_ = lean_array_get_size(v_axs_31_);
v___x_34_ = lean_nat_dec_lt(v___x_32_, v___x_33_);
if (v___x_34_ == 0)
{
return v_s_30_;
}
else
{
uint8_t v___x_35_; 
v___x_35_ = lean_nat_dec_le(v___x_33_, v___x_33_);
if (v___x_35_ == 0)
{
if (v___x_34_ == 0)
{
return v_s_30_;
}
else
{
size_t v___x_36_; size_t v___x_37_; lean_object* v___x_38_; 
v___x_36_ = ((size_t)0ULL);
v___x_37_ = lean_usize_of_nat(v___x_33_);
v___x_38_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_insertArray_spec__0(v_axs_31_, v___x_36_, v___x_37_, v_s_30_);
return v___x_38_;
}
}
else
{
size_t v___x_39_; size_t v___x_40_; lean_object* v___x_41_; 
v___x_39_ = ((size_t)0ULL);
v___x_40_ = lean_usize_of_nat(v___x_33_);
v___x_41_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_insertArray_spec__0(v_axs_31_, v___x_39_, v___x_40_, v_s_30_);
return v___x_41_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_insertArray___boxed(lean_object* v_s_42_, lean_object* v_axs_43_){
_start:
{
lean_object* v_res_44_; 
v_res_44_ = l___private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_insertArray(v_s_42_, v_axs_43_);
lean_dec_ref(v_axs_43_);
return v_res_44_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collect_spec__1_spec__1(lean_object* v_init_45_, lean_object* v_x_46_){
_start:
{
if (lean_obj_tag(v_x_46_) == 0)
{
lean_object* v_k_47_; lean_object* v_l_48_; lean_object* v_r_49_; lean_object* v___x_50_; lean_object* v___x_51_; 
v_k_47_ = lean_ctor_get(v_x_46_, 1);
lean_inc(v_k_47_);
v_l_48_ = lean_ctor_get(v_x_46_, 3);
lean_inc(v_l_48_);
v_r_49_ = lean_ctor_get(v_x_46_, 4);
lean_inc(v_r_49_);
lean_dec_ref_known(v_x_46_, 5);
v___x_50_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collect_spec__1_spec__1(v_init_45_, v_l_48_);
v___x_51_ = lean_array_push(v___x_50_, v_k_47_);
v_init_45_ = v___x_51_;
v_x_46_ = v_r_49_;
goto _start;
}
else
{
return v_init_45_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collect_spec__2_spec__3___redArg(lean_object* v_hi_53_, lean_object* v_pivot_54_, lean_object* v_as_55_, lean_object* v_i_56_, lean_object* v_k_57_){
_start:
{
uint8_t v___x_58_; 
v___x_58_ = lean_nat_dec_lt(v_k_57_, v_hi_53_);
if (v___x_58_ == 0)
{
lean_object* v___x_59_; lean_object* v___x_60_; 
lean_dec(v_k_57_);
v___x_59_ = lean_array_fswap(v_as_55_, v_i_56_, v_hi_53_);
v___x_60_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_60_, 0, v_i_56_);
lean_ctor_set(v___x_60_, 1, v___x_59_);
return v___x_60_;
}
else
{
lean_object* v___x_61_; uint8_t v___x_62_; 
v___x_61_ = lean_array_fget_borrowed(v_as_55_, v_k_57_);
v___x_62_ = l_Lean_Name_lt(v___x_61_, v_pivot_54_);
if (v___x_62_ == 0)
{
lean_object* v___x_63_; lean_object* v___x_64_; 
v___x_63_ = lean_unsigned_to_nat(1u);
v___x_64_ = lean_nat_add(v_k_57_, v___x_63_);
lean_dec(v_k_57_);
v_k_57_ = v___x_64_;
goto _start;
}
else
{
lean_object* v___x_66_; lean_object* v___x_67_; lean_object* v___x_68_; lean_object* v___x_69_; 
v___x_66_ = lean_array_fswap(v_as_55_, v_i_56_, v_k_57_);
v___x_67_ = lean_unsigned_to_nat(1u);
v___x_68_ = lean_nat_add(v_i_56_, v___x_67_);
lean_dec(v_i_56_);
v___x_69_ = lean_nat_add(v_k_57_, v___x_67_);
lean_dec(v_k_57_);
v_as_55_ = v___x_66_;
v_i_56_ = v___x_68_;
v_k_57_ = v___x_69_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collect_spec__2_spec__3___redArg___boxed(lean_object* v_hi_71_, lean_object* v_pivot_72_, lean_object* v_as_73_, lean_object* v_i_74_, lean_object* v_k_75_){
_start:
{
lean_object* v_res_76_; 
v_res_76_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collect_spec__2_spec__3___redArg(v_hi_71_, v_pivot_72_, v_as_73_, v_i_74_, v_k_75_);
lean_dec(v_pivot_72_);
lean_dec(v_hi_71_);
return v_res_76_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collect_spec__2___redArg(lean_object* v_n_77_, lean_object* v_as_78_, lean_object* v_lo_79_, lean_object* v_hi_80_){
_start:
{
lean_object* v___y_82_; uint8_t v___x_92_; 
v___x_92_ = lean_nat_dec_lt(v_lo_79_, v_hi_80_);
if (v___x_92_ == 0)
{
lean_dec(v_lo_79_);
return v_as_78_;
}
else
{
lean_object* v___x_93_; lean_object* v___x_94_; lean_object* v_mid_95_; lean_object* v___y_97_; lean_object* v___y_103_; lean_object* v___x_108_; lean_object* v___x_109_; uint8_t v___x_110_; 
v___x_93_ = lean_nat_add(v_lo_79_, v_hi_80_);
v___x_94_ = lean_unsigned_to_nat(1u);
v_mid_95_ = lean_nat_shiftr(v___x_93_, v___x_94_);
lean_dec(v___x_93_);
v___x_108_ = lean_array_fget_borrowed(v_as_78_, v_mid_95_);
v___x_109_ = lean_array_fget_borrowed(v_as_78_, v_lo_79_);
v___x_110_ = l_Lean_Name_lt(v___x_108_, v___x_109_);
if (v___x_110_ == 0)
{
v___y_103_ = v_as_78_;
goto v___jp_102_;
}
else
{
lean_object* v___x_111_; 
v___x_111_ = lean_array_fswap(v_as_78_, v_lo_79_, v_mid_95_);
v___y_103_ = v___x_111_;
goto v___jp_102_;
}
v___jp_96_:
{
lean_object* v___x_98_; lean_object* v___x_99_; uint8_t v___x_100_; 
v___x_98_ = lean_array_fget_borrowed(v___y_97_, v_mid_95_);
v___x_99_ = lean_array_fget_borrowed(v___y_97_, v_hi_80_);
v___x_100_ = l_Lean_Name_lt(v___x_98_, v___x_99_);
if (v___x_100_ == 0)
{
lean_dec(v_mid_95_);
v___y_82_ = v___y_97_;
goto v___jp_81_;
}
else
{
lean_object* v___x_101_; 
v___x_101_ = lean_array_fswap(v___y_97_, v_mid_95_, v_hi_80_);
lean_dec(v_mid_95_);
v___y_82_ = v___x_101_;
goto v___jp_81_;
}
}
v___jp_102_:
{
lean_object* v___x_104_; lean_object* v___x_105_; uint8_t v___x_106_; 
v___x_104_ = lean_array_fget_borrowed(v___y_103_, v_hi_80_);
v___x_105_ = lean_array_fget_borrowed(v___y_103_, v_lo_79_);
v___x_106_ = l_Lean_Name_lt(v___x_104_, v___x_105_);
if (v___x_106_ == 0)
{
v___y_97_ = v___y_103_;
goto v___jp_96_;
}
else
{
lean_object* v___x_107_; 
v___x_107_ = lean_array_fswap(v___y_103_, v_lo_79_, v_hi_80_);
v___y_97_ = v___x_107_;
goto v___jp_96_;
}
}
}
v___jp_81_:
{
lean_object* v_pivot_83_; lean_object* v___x_84_; lean_object* v_fst_85_; lean_object* v_snd_86_; uint8_t v___x_87_; 
v_pivot_83_ = lean_array_fget(v___y_82_, v_hi_80_);
lean_inc_n(v_lo_79_, 2);
v___x_84_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collect_spec__2_spec__3___redArg(v_hi_80_, v_pivot_83_, v___y_82_, v_lo_79_, v_lo_79_);
lean_dec(v_pivot_83_);
v_fst_85_ = lean_ctor_get(v___x_84_, 0);
lean_inc(v_fst_85_);
v_snd_86_ = lean_ctor_get(v___x_84_, 1);
lean_inc(v_snd_86_);
lean_dec_ref(v___x_84_);
v___x_87_ = lean_nat_dec_le(v_hi_80_, v_fst_85_);
if (v___x_87_ == 0)
{
lean_object* v___x_88_; lean_object* v___x_89_; lean_object* v___x_90_; 
v___x_88_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collect_spec__2___redArg(v_n_77_, v_snd_86_, v_lo_79_, v_fst_85_);
v___x_89_ = lean_unsigned_to_nat(1u);
v___x_90_ = lean_nat_add(v_fst_85_, v___x_89_);
lean_dec(v_fst_85_);
v_as_78_ = v___x_88_;
v_lo_79_ = v___x_90_;
goto _start;
}
else
{
lean_dec(v_fst_85_);
lean_dec(v_lo_79_);
return v_snd_86_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collect_spec__2___redArg___boxed(lean_object* v_n_112_, lean_object* v_as_113_, lean_object* v_lo_114_, lean_object* v_hi_115_){
_start:
{
lean_object* v_res_116_; 
v_res_116_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collect_spec__2___redArg(v_n_112_, v_as_113_, v_lo_114_, v_hi_115_);
lean_dec(v_hi_115_);
lean_dec(v_n_112_);
return v_res_116_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collect_spec__0(lean_object* v_extFind_x3f_119_, lean_object* v_as_120_, size_t v_i_121_, size_t v_stop_122_, lean_object* v_b_123_, lean_object* v___y_124_, lean_object* v___y_125_){
_start:
{
uint8_t v___x_126_; 
v___x_126_ = lean_usize_dec_eq(v_i_121_, v_stop_122_);
if (v___x_126_ == 0)
{
lean_object* v___x_127_; lean_object* v___x_128_; lean_object* v_fst_129_; lean_object* v_snd_130_; size_t v___x_131_; size_t v___x_132_; 
v___x_127_ = lean_array_uget_borrowed(v_as_120_, v_i_121_);
lean_inc(v___x_127_);
lean_inc_ref(v_extFind_x3f_119_);
v___x_128_ = l___private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collect(v_extFind_x3f_119_, v___x_127_, v___y_124_, v___y_125_);
v_fst_129_ = lean_ctor_get(v___x_128_, 0);
lean_inc(v_fst_129_);
v_snd_130_ = lean_ctor_get(v___x_128_, 1);
lean_inc(v_snd_130_);
lean_dec_ref(v___x_128_);
v___x_131_ = ((size_t)1ULL);
v___x_132_ = lean_usize_add(v_i_121_, v___x_131_);
v_i_121_ = v___x_132_;
v_b_123_ = v_fst_129_;
v___y_125_ = v_snd_130_;
goto _start;
}
else
{
lean_object* v___x_134_; 
lean_dec_ref(v_extFind_x3f_119_);
v___x_134_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_134_, 0, v_b_123_);
lean_ctor_set(v___x_134_, 1, v___y_125_);
return v___x_134_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collect___lam__0(lean_object* v_extFind_x3f_135_, lean_object* v_e_136_, lean_object* v___y_137_, lean_object* v___y_138_){
_start:
{
lean_object* v___x_139_; lean_object* v___x_140_; lean_object* v___x_141_; lean_object* v___x_142_; uint8_t v___x_143_; 
v___x_139_ = l_Lean_Expr_getUsedConstants(v_e_136_);
v___x_140_ = lean_unsigned_to_nat(0u);
v___x_141_ = lean_array_get_size(v___x_139_);
v___x_142_ = lean_box(0);
v___x_143_ = lean_nat_dec_lt(v___x_140_, v___x_141_);
if (v___x_143_ == 0)
{
lean_object* v___x_144_; 
lean_dec_ref(v___x_139_);
lean_dec_ref(v_extFind_x3f_135_);
v___x_144_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_144_, 0, v___x_142_);
lean_ctor_set(v___x_144_, 1, v___y_138_);
return v___x_144_;
}
else
{
uint8_t v___x_145_; 
v___x_145_ = lean_nat_dec_le(v___x_141_, v___x_141_);
if (v___x_145_ == 0)
{
if (v___x_143_ == 0)
{
lean_object* v___x_146_; 
lean_dec_ref(v___x_139_);
lean_dec_ref(v_extFind_x3f_135_);
v___x_146_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_146_, 0, v___x_142_);
lean_ctor_set(v___x_146_, 1, v___y_138_);
return v___x_146_;
}
else
{
size_t v___x_147_; size_t v___x_148_; lean_object* v___x_149_; 
v___x_147_ = ((size_t)0ULL);
v___x_148_ = lean_usize_of_nat(v___x_141_);
v___x_149_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collect_spec__0(v_extFind_x3f_135_, v___x_139_, v___x_147_, v___x_148_, v___x_142_, v___y_137_, v___y_138_);
lean_dec_ref(v___x_139_);
return v___x_149_;
}
}
else
{
size_t v___x_150_; size_t v___x_151_; lean_object* v___x_152_; 
v___x_150_ = ((size_t)0ULL);
v___x_151_ = lean_usize_of_nat(v___x_141_);
v___x_152_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collect_spec__0(v_extFind_x3f_135_, v___x_139_, v___x_150_, v___x_151_, v___x_142_, v___y_137_, v___y_138_);
lean_dec_ref(v___x_139_);
return v___x_152_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collect(lean_object* v_extFind_x3f_153_, lean_object* v_c_154_, lean_object* v_a_155_, lean_object* v_a_156_){
_start:
{
lean_object* v___x_157_; 
lean_inc_ref(v_extFind_x3f_153_);
lean_inc(v_c_154_);
lean_inc_ref(v_a_155_);
v___x_157_ = lean_apply_2(v_extFind_x3f_153_, v_a_155_, v_c_154_);
if (lean_obj_tag(v___x_157_) == 1)
{
lean_object* v_val_158_; lean_object* v_seen_159_; lean_object* v_axioms_160_; lean_object* v___x_162_; uint8_t v_isShared_163_; uint8_t v_isSharedCheck_171_; 
lean_dec_ref(v_extFind_x3f_153_);
v_val_158_ = lean_ctor_get(v___x_157_, 0);
lean_inc(v_val_158_);
lean_dec_ref_known(v___x_157_, 1);
v_seen_159_ = lean_ctor_get(v_a_156_, 0);
v_axioms_160_ = lean_ctor_get(v_a_156_, 1);
v_isSharedCheck_171_ = !lean_is_exclusive(v_a_156_);
if (v_isSharedCheck_171_ == 0)
{
v___x_162_ = v_a_156_;
v_isShared_163_ = v_isSharedCheck_171_;
goto v_resetjp_161_;
}
else
{
lean_inc(v_axioms_160_);
lean_inc(v_seen_159_);
lean_dec(v_a_156_);
v___x_162_ = lean_box(0);
v_isShared_163_ = v_isSharedCheck_171_;
goto v_resetjp_161_;
}
v_resetjp_161_:
{
lean_object* v___x_164_; lean_object* v___x_165_; lean_object* v___x_167_; 
lean_inc(v_val_158_);
v___x_164_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_c_154_, v_val_158_, v_seen_159_);
v___x_165_ = l___private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_insertArray(v_axioms_160_, v_val_158_);
lean_dec(v_val_158_);
if (v_isShared_163_ == 0)
{
lean_ctor_set(v___x_162_, 1, v___x_165_);
lean_ctor_set(v___x_162_, 0, v___x_164_);
v___x_167_ = v___x_162_;
goto v_reusejp_166_;
}
else
{
lean_object* v_reuseFailAlloc_170_; 
v_reuseFailAlloc_170_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_170_, 0, v___x_164_);
lean_ctor_set(v_reuseFailAlloc_170_, 1, v___x_165_);
v___x_167_ = v_reuseFailAlloc_170_;
goto v_reusejp_166_;
}
v_reusejp_166_:
{
lean_object* v___x_168_; lean_object* v___x_169_; 
v___x_168_ = lean_box(0);
v___x_169_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_169_, 0, v___x_168_);
lean_ctor_set(v___x_169_, 1, v___x_167_);
return v___x_169_;
}
}
}
else
{
lean_object* v_seen_172_; lean_object* v_axioms_173_; lean_object* v___x_175_; uint8_t v_isShared_176_; uint8_t v_isSharedCheck_278_; 
lean_dec(v___x_157_);
v_seen_172_ = lean_ctor_get(v_a_156_, 0);
v_axioms_173_ = lean_ctor_get(v_a_156_, 1);
v_isSharedCheck_278_ = !lean_is_exclusive(v_a_156_);
if (v_isSharedCheck_278_ == 0)
{
v___x_175_ = v_a_156_;
v_isShared_176_ = v_isSharedCheck_278_;
goto v_resetjp_174_;
}
else
{
lean_inc(v_axioms_173_);
lean_inc(v_seen_172_);
lean_dec(v_a_156_);
v___x_175_ = lean_box(0);
v_isShared_176_ = v_isSharedCheck_278_;
goto v_resetjp_174_;
}
v_resetjp_174_:
{
lean_object* v___y_178_; lean_object* v___y_179_; lean_object* v___y_194_; lean_object* v___y_195_; lean_object* v___y_196_; lean_object* v___y_197_; lean_object* v___y_198_; lean_object* v___y_201_; lean_object* v___y_202_; lean_object* v___y_203_; lean_object* v___y_204_; lean_object* v___y_205_; lean_object* v___y_208_; lean_object* v___y_209_; lean_object* v___y_210_; lean_object* v___y_220_; lean_object* v_axioms_221_; lean_object* v___y_225_; lean_object* v___x_227_; 
v___x_227_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_seen_172_, v_c_154_);
if (lean_obj_tag(v___x_227_) == 1)
{
lean_object* v_val_228_; lean_object* v___x_229_; lean_object* v___x_231_; 
lean_dec(v_c_154_);
lean_dec_ref(v_extFind_x3f_153_);
v_val_228_ = lean_ctor_get(v___x_227_, 0);
lean_inc(v_val_228_);
lean_dec_ref_known(v___x_227_, 1);
v___x_229_ = l___private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_insertArray(v_axioms_173_, v_val_228_);
lean_dec(v_val_228_);
if (v_isShared_176_ == 0)
{
lean_ctor_set(v___x_175_, 1, v___x_229_);
v___x_231_ = v___x_175_;
goto v_reusejp_230_;
}
else
{
lean_object* v_reuseFailAlloc_234_; 
v_reuseFailAlloc_234_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_234_, 0, v_seen_172_);
lean_ctor_set(v_reuseFailAlloc_234_, 1, v___x_229_);
v___x_231_ = v_reuseFailAlloc_234_;
goto v_reusejp_230_;
}
v_reusejp_230_:
{
lean_object* v___x_232_; lean_object* v___x_233_; 
v___x_232_ = lean_box(0);
v___x_233_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_233_, 0, v___x_232_);
lean_ctor_set(v___x_233_, 1, v___x_231_);
return v___x_233_;
}
}
else
{
lean_object* v_checked_235_; lean_object* v___x_236_; lean_object* v___x_237_; lean_object* v___x_238_; lean_object* v___x_240_; 
lean_dec(v___x_227_);
v_checked_235_ = lean_ctor_get(v_a_155_, 2);
v___x_236_ = ((lean_object*)(l___private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collect___closed__0));
lean_inc(v_c_154_);
v___x_237_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_c_154_, v___x_236_, v_seen_172_);
v___x_238_ = l_Lean_NameSet_empty;
lean_inc(v___x_237_);
if (v_isShared_176_ == 0)
{
lean_ctor_set(v___x_175_, 1, v___x_238_);
lean_ctor_set(v___x_175_, 0, v___x_237_);
v___x_240_ = v___x_175_;
goto v_reusejp_239_;
}
else
{
lean_object* v_reuseFailAlloc_277_; 
v_reuseFailAlloc_277_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_277_, 0, v___x_237_);
lean_ctor_set(v_reuseFailAlloc_277_, 1, v___x_238_);
v___x_240_ = v_reuseFailAlloc_277_;
goto v_reusejp_239_;
}
v_reusejp_239_:
{
lean_object* v___x_241_; lean_object* v___x_242_; 
lean_inc_ref(v_checked_235_);
v___x_241_ = lean_task_get_own(v_checked_235_);
lean_inc(v_c_154_);
v___x_242_ = lean_environment_find(v___x_241_, v_c_154_);
if (lean_obj_tag(v___x_242_) == 0)
{
lean_dec(v___x_237_);
lean_dec_ref(v_extFind_x3f_153_);
v___y_220_ = v___x_240_;
v_axioms_221_ = v___x_238_;
goto v___jp_219_;
}
else
{
lean_object* v_val_243_; 
v_val_243_ = lean_ctor_get(v___x_242_, 0);
lean_inc(v_val_243_);
lean_dec_ref_known(v___x_242_, 1);
switch(lean_obj_tag(v_val_243_))
{
case 0:
{
lean_object* v_val_244_; lean_object* v_toConstantVal_245_; lean_object* v_type_246_; lean_object* v___x_247_; lean_object* v___x_248_; lean_object* v___x_249_; lean_object* v_snd_250_; 
lean_dec_ref(v___x_240_);
v_val_244_ = lean_ctor_get(v_val_243_, 0);
lean_inc_ref(v_val_244_);
lean_dec_ref_known(v_val_243_, 1);
v_toConstantVal_245_ = lean_ctor_get(v_val_244_, 0);
lean_inc_ref(v_toConstantVal_245_);
lean_dec_ref(v_val_244_);
v_type_246_ = lean_ctor_get(v_toConstantVal_245_, 2);
lean_inc_ref(v_type_246_);
lean_dec_ref(v_toConstantVal_245_);
lean_inc(v_c_154_);
v___x_247_ = l_Lean_NameSet_insert(v___x_238_, v_c_154_);
v___x_248_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_248_, 0, v___x_237_);
lean_ctor_set(v___x_248_, 1, v___x_247_);
v___x_249_ = l___private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collect___lam__0(v_extFind_x3f_153_, v_type_246_, v_a_155_, v___x_248_);
v_snd_250_ = lean_ctor_get(v___x_249_, 1);
lean_inc(v_snd_250_);
lean_dec_ref(v___x_249_);
v___y_225_ = v_snd_250_;
goto v___jp_224_;
}
case 4:
{
lean_dec_ref_known(v_val_243_, 1);
lean_dec(v___x_237_);
lean_dec_ref(v_extFind_x3f_153_);
v___y_220_ = v___x_240_;
v_axioms_221_ = v___x_238_;
goto v___jp_219_;
}
case 5:
{
lean_object* v_val_251_; lean_object* v_toConstantVal_252_; lean_object* v_ctors_253_; lean_object* v_type_254_; lean_object* v___x_255_; lean_object* v_snd_256_; lean_object* v___x_257_; lean_object* v_snd_258_; 
lean_dec(v___x_237_);
v_val_251_ = lean_ctor_get(v_val_243_, 0);
lean_inc_ref(v_val_251_);
lean_dec_ref_known(v_val_243_, 1);
v_toConstantVal_252_ = lean_ctor_get(v_val_251_, 0);
lean_inc_ref(v_toConstantVal_252_);
v_ctors_253_ = lean_ctor_get(v_val_251_, 4);
lean_inc(v_ctors_253_);
lean_dec_ref(v_val_251_);
v_type_254_ = lean_ctor_get(v_toConstantVal_252_, 2);
lean_inc_ref(v_type_254_);
lean_dec_ref(v_toConstantVal_252_);
lean_inc_ref(v_extFind_x3f_153_);
v___x_255_ = l___private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collect___lam__0(v_extFind_x3f_153_, v_type_254_, v_a_155_, v___x_240_);
v_snd_256_ = lean_ctor_get(v___x_255_, 1);
lean_inc(v_snd_256_);
lean_dec_ref(v___x_255_);
v___x_257_ = l_List_forM___at___00__private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collect_spec__3(v_extFind_x3f_153_, v_ctors_253_, v_a_155_, v_snd_256_);
v_snd_258_ = lean_ctor_get(v___x_257_, 1);
lean_inc(v_snd_258_);
lean_dec_ref(v___x_257_);
v___y_225_ = v_snd_258_;
goto v___jp_224_;
}
case 6:
{
lean_object* v_val_259_; lean_object* v_toConstantVal_260_; lean_object* v_type_261_; lean_object* v___x_262_; lean_object* v_snd_263_; 
lean_dec(v___x_237_);
v_val_259_ = lean_ctor_get(v_val_243_, 0);
lean_inc_ref(v_val_259_);
lean_dec_ref_known(v_val_243_, 1);
v_toConstantVal_260_ = lean_ctor_get(v_val_259_, 0);
lean_inc_ref(v_toConstantVal_260_);
lean_dec_ref(v_val_259_);
v_type_261_ = lean_ctor_get(v_toConstantVal_260_, 2);
lean_inc_ref(v_type_261_);
lean_dec_ref(v_toConstantVal_260_);
v___x_262_ = l___private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collect___lam__0(v_extFind_x3f_153_, v_type_261_, v_a_155_, v___x_240_);
v_snd_263_ = lean_ctor_get(v___x_262_, 1);
lean_inc(v_snd_263_);
lean_dec_ref(v___x_262_);
v___y_225_ = v_snd_263_;
goto v___jp_224_;
}
case 7:
{
lean_object* v_val_264_; lean_object* v_toConstantVal_265_; lean_object* v_type_266_; lean_object* v___x_267_; lean_object* v_snd_268_; 
lean_dec(v___x_237_);
v_val_264_ = lean_ctor_get(v_val_243_, 0);
lean_inc_ref(v_val_264_);
lean_dec_ref_known(v_val_243_, 1);
v_toConstantVal_265_ = lean_ctor_get(v_val_264_, 0);
lean_inc_ref(v_toConstantVal_265_);
lean_dec_ref(v_val_264_);
v_type_266_ = lean_ctor_get(v_toConstantVal_265_, 2);
lean_inc_ref(v_type_266_);
lean_dec_ref(v_toConstantVal_265_);
v___x_267_ = l___private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collect___lam__0(v_extFind_x3f_153_, v_type_266_, v_a_155_, v___x_240_);
v_snd_268_ = lean_ctor_get(v___x_267_, 1);
lean_inc(v_snd_268_);
lean_dec_ref(v___x_267_);
v___y_225_ = v_snd_268_;
goto v___jp_224_;
}
default: 
{
lean_object* v_val_269_; lean_object* v_toConstantVal_270_; lean_object* v_value_271_; lean_object* v_type_272_; lean_object* v___x_273_; lean_object* v_snd_274_; lean_object* v___x_275_; lean_object* v_snd_276_; 
lean_dec(v___x_237_);
v_val_269_ = lean_ctor_get(v_val_243_, 0);
lean_inc_ref(v_val_269_);
lean_dec(v_val_243_);
v_toConstantVal_270_ = lean_ctor_get(v_val_269_, 0);
lean_inc_ref(v_toConstantVal_270_);
v_value_271_ = lean_ctor_get(v_val_269_, 1);
lean_inc_ref(v_value_271_);
lean_dec_ref(v_val_269_);
v_type_272_ = lean_ctor_get(v_toConstantVal_270_, 2);
lean_inc_ref(v_type_272_);
lean_dec_ref(v_toConstantVal_270_);
lean_inc_ref(v_extFind_x3f_153_);
v___x_273_ = l___private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collect___lam__0(v_extFind_x3f_153_, v_type_272_, v_a_155_, v___x_240_);
v_snd_274_ = lean_ctor_get(v___x_273_, 1);
lean_inc(v_snd_274_);
lean_dec_ref(v___x_273_);
v___x_275_ = l___private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collect___lam__0(v_extFind_x3f_153_, v_value_271_, v_a_155_, v_snd_274_);
v_snd_276_ = lean_ctor_get(v___x_275_, 1);
lean_inc(v_snd_276_);
lean_dec_ref(v___x_275_);
v___y_225_ = v_snd_276_;
goto v___jp_224_;
}
}
}
}
}
v___jp_177_:
{
lean_object* v_seen_180_; lean_object* v___x_182_; uint8_t v_isShared_183_; uint8_t v_isSharedCheck_191_; 
v_seen_180_ = lean_ctor_get(v___y_178_, 0);
v_isSharedCheck_191_ = !lean_is_exclusive(v___y_178_);
if (v_isSharedCheck_191_ == 0)
{
lean_object* v_unused_192_; 
v_unused_192_ = lean_ctor_get(v___y_178_, 1);
lean_dec(v_unused_192_);
v___x_182_ = v___y_178_;
v_isShared_183_ = v_isSharedCheck_191_;
goto v_resetjp_181_;
}
else
{
lean_inc(v_seen_180_);
lean_dec(v___y_178_);
v___x_182_ = lean_box(0);
v_isShared_183_ = v_isSharedCheck_191_;
goto v_resetjp_181_;
}
v_resetjp_181_:
{
lean_object* v___x_184_; lean_object* v___x_185_; lean_object* v___x_186_; lean_object* v___x_188_; 
v___x_184_ = lean_box(0);
lean_inc_ref(v___y_179_);
v___x_185_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_c_154_, v___y_179_, v_seen_180_);
v___x_186_ = l___private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_insertArray(v_axioms_173_, v___y_179_);
lean_dec_ref(v___y_179_);
if (v_isShared_183_ == 0)
{
lean_ctor_set(v___x_182_, 1, v___x_186_);
lean_ctor_set(v___x_182_, 0, v___x_185_);
v___x_188_ = v___x_182_;
goto v_reusejp_187_;
}
else
{
lean_object* v_reuseFailAlloc_190_; 
v_reuseFailAlloc_190_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_190_, 0, v___x_185_);
lean_ctor_set(v_reuseFailAlloc_190_, 1, v___x_186_);
v___x_188_ = v_reuseFailAlloc_190_;
goto v_reusejp_187_;
}
v_reusejp_187_:
{
lean_object* v___x_189_; 
v___x_189_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_189_, 0, v___x_184_);
lean_ctor_set(v___x_189_, 1, v___x_188_);
return v___x_189_;
}
}
}
v___jp_193_:
{
lean_object* v___x_199_; 
v___x_199_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collect_spec__2___redArg(v___y_196_, v___y_194_, v___y_197_, v___y_198_);
lean_dec(v___y_198_);
lean_dec(v___y_196_);
v___y_178_ = v___y_195_;
v___y_179_ = v___x_199_;
goto v___jp_177_;
}
v___jp_200_:
{
uint8_t v___x_206_; 
v___x_206_ = lean_nat_dec_le(v___y_205_, v___y_202_);
if (v___x_206_ == 0)
{
lean_dec(v___y_202_);
lean_inc(v___y_205_);
v___y_194_ = v___y_201_;
v___y_195_ = v___y_204_;
v___y_196_ = v___y_203_;
v___y_197_ = v___y_205_;
v___y_198_ = v___y_205_;
goto v___jp_193_;
}
else
{
v___y_194_ = v___y_201_;
v___y_195_ = v___y_204_;
v___y_196_ = v___y_203_;
v___y_197_ = v___y_205_;
v___y_198_ = v___y_202_;
goto v___jp_193_;
}
}
v___jp_207_:
{
lean_object* v___x_211_; lean_object* v___x_212_; lean_object* v___x_213_; lean_object* v___x_214_; uint8_t v___x_215_; 
v___x_211_ = lean_mk_empty_array_with_capacity(v___y_210_);
lean_dec(v___y_210_);
v___x_212_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collect_spec__1_spec__1(v___x_211_, v___y_209_);
v___x_213_ = lean_array_get_size(v___x_212_);
v___x_214_ = lean_unsigned_to_nat(0u);
v___x_215_ = lean_nat_dec_eq(v___x_213_, v___x_214_);
if (v___x_215_ == 0)
{
lean_object* v___x_216_; lean_object* v___x_217_; uint8_t v___x_218_; 
v___x_216_ = lean_unsigned_to_nat(1u);
v___x_217_ = lean_nat_sub(v___x_213_, v___x_216_);
v___x_218_ = lean_nat_dec_le(v___x_214_, v___x_217_);
if (v___x_218_ == 0)
{
lean_inc(v___x_217_);
v___y_201_ = v___x_212_;
v___y_202_ = v___x_217_;
v___y_203_ = v___x_213_;
v___y_204_ = v___y_208_;
v___y_205_ = v___x_217_;
goto v___jp_200_;
}
else
{
v___y_201_ = v___x_212_;
v___y_202_ = v___x_217_;
v___y_203_ = v___x_213_;
v___y_204_ = v___y_208_;
v___y_205_ = v___x_214_;
goto v___jp_200_;
}
}
else
{
v___y_178_ = v___y_208_;
v___y_179_ = v___x_212_;
goto v___jp_177_;
}
}
v___jp_219_:
{
if (lean_obj_tag(v_axioms_221_) == 0)
{
lean_object* v_size_222_; 
v_size_222_ = lean_ctor_get(v_axioms_221_, 0);
lean_inc(v_size_222_);
v___y_208_ = v___y_220_;
v___y_209_ = v_axioms_221_;
v___y_210_ = v_size_222_;
goto v___jp_207_;
}
else
{
lean_object* v___x_223_; 
v___x_223_ = lean_unsigned_to_nat(0u);
v___y_208_ = v___y_220_;
v___y_209_ = v_axioms_221_;
v___y_210_ = v___x_223_;
goto v___jp_207_;
}
}
v___jp_224_:
{
lean_object* v_axioms_226_; 
v_axioms_226_ = lean_ctor_get(v___y_225_, 1);
lean_inc(v_axioms_226_);
v___y_220_ = v___y_225_;
v_axioms_221_ = v_axioms_226_;
goto v___jp_219_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forM___at___00__private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collect_spec__3(lean_object* v_extFind_x3f_279_, lean_object* v_as_280_, lean_object* v___y_281_, lean_object* v___y_282_){
_start:
{
if (lean_obj_tag(v_as_280_) == 0)
{
lean_object* v___x_283_; lean_object* v___x_284_; 
lean_dec_ref(v_extFind_x3f_279_);
v___x_283_ = lean_box(0);
v___x_284_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_284_, 0, v___x_283_);
lean_ctor_set(v___x_284_, 1, v___y_282_);
return v___x_284_;
}
else
{
lean_object* v_head_285_; lean_object* v_tail_286_; lean_object* v___x_287_; lean_object* v_snd_288_; 
v_head_285_ = lean_ctor_get(v_as_280_, 0);
lean_inc(v_head_285_);
v_tail_286_ = lean_ctor_get(v_as_280_, 1);
lean_inc(v_tail_286_);
lean_dec_ref_known(v_as_280_, 2);
lean_inc_ref(v_extFind_x3f_279_);
v___x_287_ = l___private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collect(v_extFind_x3f_279_, v_head_285_, v___y_281_, v___y_282_);
v_snd_288_ = lean_ctor_get(v___x_287_, 1);
lean_inc(v_snd_288_);
lean_dec_ref(v___x_287_);
v_as_280_ = v_tail_286_;
v___y_282_ = v_snd_288_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_List_forM___at___00__private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collect_spec__3___boxed(lean_object* v_extFind_x3f_290_, lean_object* v_as_291_, lean_object* v___y_292_, lean_object* v___y_293_){
_start:
{
lean_object* v_res_294_; 
v_res_294_ = l_List_forM___at___00__private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collect_spec__3(v_extFind_x3f_290_, v_as_291_, v___y_292_, v___y_293_);
lean_dec_ref(v___y_292_);
return v_res_294_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collect_spec__0___boxed(lean_object* v_extFind_x3f_295_, lean_object* v_as_296_, lean_object* v_i_297_, lean_object* v_stop_298_, lean_object* v_b_299_, lean_object* v___y_300_, lean_object* v___y_301_){
_start:
{
size_t v_i_boxed_302_; size_t v_stop_boxed_303_; lean_object* v_res_304_; 
v_i_boxed_302_ = lean_unbox_usize(v_i_297_);
lean_dec(v_i_297_);
v_stop_boxed_303_ = lean_unbox_usize(v_stop_298_);
lean_dec(v_stop_298_);
v_res_304_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collect_spec__0(v_extFind_x3f_295_, v_as_296_, v_i_boxed_302_, v_stop_boxed_303_, v_b_299_, v___y_300_, v___y_301_);
lean_dec_ref(v___y_300_);
lean_dec_ref(v_as_296_);
return v_res_304_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collect___lam__0___boxed(lean_object* v_extFind_x3f_305_, lean_object* v_e_306_, lean_object* v___y_307_, lean_object* v___y_308_){
_start:
{
lean_object* v_res_309_; 
v_res_309_ = l___private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collect___lam__0(v_extFind_x3f_305_, v_e_306_, v___y_307_, v___y_308_);
lean_dec_ref(v___y_307_);
return v_res_309_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collect___boxed(lean_object* v_extFind_x3f_310_, lean_object* v_c_311_, lean_object* v_a_312_, lean_object* v_a_313_){
_start:
{
lean_object* v_res_314_; 
v_res_314_ = l___private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collect(v_extFind_x3f_310_, v_c_311_, v_a_312_, v_a_313_);
lean_dec_ref(v_a_312_);
return v_res_314_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collect_spec__1(lean_object* v_init_315_, lean_object* v_t_316_){
_start:
{
lean_object* v___x_317_; 
v___x_317_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00__private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collect_spec__1_spec__1(v_init_315_, v_t_316_);
return v___x_317_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collect_spec__2(lean_object* v_n_318_, lean_object* v_as_319_, lean_object* v_lo_320_, lean_object* v_hi_321_, lean_object* v_w_322_, lean_object* v_hlo_323_, lean_object* v_hhi_324_){
_start:
{
lean_object* v___x_325_; 
v___x_325_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collect_spec__2___redArg(v_n_318_, v_as_319_, v_lo_320_, v_hi_321_);
return v___x_325_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collect_spec__2___boxed(lean_object* v_n_326_, lean_object* v_as_327_, lean_object* v_lo_328_, lean_object* v_hi_329_, lean_object* v_w_330_, lean_object* v_hlo_331_, lean_object* v_hhi_332_){
_start:
{
lean_object* v_res_333_; 
v_res_333_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collect_spec__2(v_n_326_, v_as_327_, v_lo_328_, v_hi_329_, v_w_330_, v_hlo_331_, v_hhi_332_);
lean_dec(v_hi_329_);
lean_dec(v_n_326_);
return v_res_333_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collect_spec__2_spec__3(lean_object* v_n_334_, lean_object* v_lo_335_, lean_object* v_hi_336_, lean_object* v_hhi_337_, lean_object* v_pivot_338_, lean_object* v_as_339_, lean_object* v_i_340_, lean_object* v_k_341_, lean_object* v_ilo_342_, lean_object* v_ik_343_, lean_object* v_w_344_){
_start:
{
lean_object* v___x_345_; 
v___x_345_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collect_spec__2_spec__3___redArg(v_hi_336_, v_pivot_338_, v_as_339_, v_i_340_, v_k_341_);
return v___x_345_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collect_spec__2_spec__3___boxed(lean_object* v_n_346_, lean_object* v_lo_347_, lean_object* v_hi_348_, lean_object* v_hhi_349_, lean_object* v_pivot_350_, lean_object* v_as_351_, lean_object* v_i_352_, lean_object* v_k_353_, lean_object* v_ilo_354_, lean_object* v_ik_355_, lean_object* v_w_356_){
_start:
{
lean_object* v_res_357_; 
v_res_357_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collect_spec__2_spec__3(v_n_346_, v_lo_347_, v_hi_348_, v_hhi_349_, v_pivot_350_, v_as_351_, v_i_352_, v_k_353_, v_ilo_354_, v_ik_355_, v_w_356_);
lean_dec(v_pivot_350_);
lean_dec(v_hi_348_);
lean_dec(v_lo_347_);
lean_dec(v_n_346_);
return v_res_357_;
}
}
static lean_object* _init_l_panic___at___00__private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collectAndGet_spec__0___closed__7(void){
_start:
{
lean_object* v___x_365_; 
v___x_365_ = l_Array_instInhabited___redArg();
return v___x_365_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collectAndGet_spec__0(lean_object* v_msg_366_, lean_object* v___y_367_, lean_object* v___y_368_){
_start:
{
lean_object* v___f_369_; lean_object* v___f_370_; lean_object* v___f_371_; lean_object* v___f_372_; lean_object* v___f_373_; lean_object* v___f_374_; lean_object* v___f_375_; lean_object* v___x_376_; lean_object* v___x_377_; lean_object* v___x_378_; lean_object* v___f_379_; lean_object* v___f_380_; lean_object* v___f_381_; lean_object* v___f_382_; lean_object* v___x_383_; lean_object* v___x_384_; lean_object* v___x_385_; lean_object* v___x_386_; lean_object* v___x_387_; lean_object* v___x_388_; lean_object* v___x_389_; lean_object* v___x_390_; lean_object* v___f_391_; lean_object* v___x_981__overap_392_; lean_object* v___x_393_; 
v___f_369_ = ((lean_object*)(l_panic___at___00__private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collectAndGet_spec__0___closed__0));
v___f_370_ = ((lean_object*)(l_panic___at___00__private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collectAndGet_spec__0___closed__1));
v___f_371_ = ((lean_object*)(l_panic___at___00__private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collectAndGet_spec__0___closed__2));
v___f_372_ = ((lean_object*)(l_panic___at___00__private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collectAndGet_spec__0___closed__3));
v___f_373_ = ((lean_object*)(l_panic___at___00__private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collectAndGet_spec__0___closed__4));
v___f_374_ = ((lean_object*)(l_panic___at___00__private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collectAndGet_spec__0___closed__5));
v___f_375_ = ((lean_object*)(l_panic___at___00__private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collectAndGet_spec__0___closed__6));
v___x_376_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_376_, 0, v___f_369_);
lean_ctor_set(v___x_376_, 1, v___f_370_);
v___x_377_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_377_, 0, v___x_376_);
lean_ctor_set(v___x_377_, 1, v___f_371_);
lean_ctor_set(v___x_377_, 2, v___f_372_);
lean_ctor_set(v___x_377_, 3, v___f_373_);
lean_ctor_set(v___x_377_, 4, v___f_374_);
v___x_378_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_378_, 0, v___x_377_);
lean_ctor_set(v___x_378_, 1, v___f_375_);
lean_inc_ref_n(v___x_378_, 6);
v___f_379_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_379_, 0, v___x_378_);
v___f_380_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_380_, 0, v___x_378_);
v___f_381_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__7), 6, 1);
lean_closure_set(v___f_381_, 0, v___x_378_);
v___f_382_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__9), 6, 1);
lean_closure_set(v___f_382_, 0, v___x_378_);
v___x_383_ = lean_alloc_closure((void*)(l_StateT_map), 8, 3);
lean_closure_set(v___x_383_, 0, lean_box(0));
lean_closure_set(v___x_383_, 1, lean_box(0));
lean_closure_set(v___x_383_, 2, v___x_378_);
v___x_384_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_384_, 0, v___x_383_);
lean_ctor_set(v___x_384_, 1, v___f_379_);
v___x_385_ = lean_alloc_closure((void*)(l_StateT_pure), 6, 3);
lean_closure_set(v___x_385_, 0, lean_box(0));
lean_closure_set(v___x_385_, 1, lean_box(0));
lean_closure_set(v___x_385_, 2, v___x_378_);
v___x_386_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_386_, 0, v___x_384_);
lean_ctor_set(v___x_386_, 1, v___x_385_);
lean_ctor_set(v___x_386_, 2, v___f_380_);
lean_ctor_set(v___x_386_, 3, v___f_381_);
lean_ctor_set(v___x_386_, 4, v___f_382_);
v___x_387_ = lean_alloc_closure((void*)(l_StateT_bind), 8, 3);
lean_closure_set(v___x_387_, 0, lean_box(0));
lean_closure_set(v___x_387_, 1, lean_box(0));
lean_closure_set(v___x_387_, 2, v___x_378_);
v___x_388_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_388_, 0, v___x_386_);
lean_ctor_set(v___x_388_, 1, v___x_387_);
v___x_389_ = lean_obj_once(&l_panic___at___00__private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collectAndGet_spec__0___closed__7, &l_panic___at___00__private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collectAndGet_spec__0___closed__7_once, _init_l_panic___at___00__private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collectAndGet_spec__0___closed__7);
v___x_390_ = l_instInhabitedOfMonad___redArg(v___x_388_, v___x_389_);
v___f_391_ = lean_alloc_closure((void*)(l_instInhabitedForall___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_391_, 0, v___x_390_);
v___x_981__overap_392_ = lean_panic_fn_borrowed(v___f_391_, v_msg_366_);
lean_dec_ref(v___f_391_);
lean_inc_ref(v___y_367_);
v___x_393_ = lean_apply_2(v___x_981__overap_392_, v___y_367_, v___y_368_);
return v___x_393_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collectAndGet_spec__0___boxed(lean_object* v_msg_394_, lean_object* v___y_395_, lean_object* v___y_396_){
_start:
{
lean_object* v_res_397_; 
v_res_397_ = l_panic___at___00__private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collectAndGet_spec__0(v_msg_394_, v___y_395_, v___y_396_);
lean_dec_ref(v___y_395_);
return v_res_397_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collectAndGet(lean_object* v_extFind_x3f_402_, lean_object* v_c_403_, lean_object* v_a_404_, lean_object* v_a_405_){
_start:
{
lean_object* v___x_406_; lean_object* v_snd_407_; lean_object* v___x_409_; uint8_t v_isShared_410_; uint8_t v_isSharedCheck_429_; 
lean_inc(v_c_403_);
v___x_406_ = l___private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collect(v_extFind_x3f_402_, v_c_403_, v_a_404_, v_a_405_);
v_snd_407_ = lean_ctor_get(v___x_406_, 1);
v_isSharedCheck_429_ = !lean_is_exclusive(v___x_406_);
if (v_isSharedCheck_429_ == 0)
{
lean_object* v_unused_430_; 
v_unused_430_ = lean_ctor_get(v___x_406_, 0);
lean_dec(v_unused_430_);
v___x_409_ = v___x_406_;
v_isShared_410_ = v_isSharedCheck_429_;
goto v_resetjp_408_;
}
else
{
lean_inc(v_snd_407_);
lean_dec(v___x_406_);
v___x_409_ = lean_box(0);
v_isShared_410_ = v_isSharedCheck_429_;
goto v_resetjp_408_;
}
v_resetjp_408_:
{
lean_object* v_seen_411_; lean_object* v___x_412_; 
v_seen_411_ = lean_ctor_get(v_snd_407_, 0);
v___x_412_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_seen_411_, v_c_403_);
if (lean_obj_tag(v___x_412_) == 1)
{
lean_object* v_val_413_; lean_object* v___x_415_; 
lean_dec(v_c_403_);
v_val_413_ = lean_ctor_get(v___x_412_, 0);
lean_inc(v_val_413_);
lean_dec_ref_known(v___x_412_, 1);
if (v_isShared_410_ == 0)
{
lean_ctor_set(v___x_409_, 0, v_val_413_);
v___x_415_ = v___x_409_;
goto v_reusejp_414_;
}
else
{
lean_object* v_reuseFailAlloc_416_; 
v_reuseFailAlloc_416_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_416_, 0, v_val_413_);
lean_ctor_set(v_reuseFailAlloc_416_, 1, v_snd_407_);
v___x_415_ = v_reuseFailAlloc_416_;
goto v_reusejp_414_;
}
v_reusejp_414_:
{
return v___x_415_;
}
}
else
{
lean_object* v___x_417_; lean_object* v___x_418_; lean_object* v___x_419_; lean_object* v___x_420_; lean_object* v___x_421_; uint8_t v___x_422_; lean_object* v___x_423_; lean_object* v___x_424_; lean_object* v___x_425_; lean_object* v___x_426_; lean_object* v___x_427_; lean_object* v___x_428_; 
lean_dec(v___x_412_);
lean_del_object(v___x_409_);
v___x_417_ = ((lean_object*)(l___private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collectAndGet___closed__0));
v___x_418_ = ((lean_object*)(l___private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collectAndGet___closed__1));
v___x_419_ = lean_unsigned_to_nat(81u);
v___x_420_ = lean_unsigned_to_nat(41u);
v___x_421_ = ((lean_object*)(l___private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collectAndGet___closed__2));
v___x_422_ = 1;
v___x_423_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_c_403_, v___x_422_);
v___x_424_ = lean_string_append(v___x_421_, v___x_423_);
lean_dec_ref(v___x_423_);
v___x_425_ = ((lean_object*)(l___private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collectAndGet___closed__3));
v___x_426_ = lean_string_append(v___x_424_, v___x_425_);
v___x_427_ = l_mkPanicMessageWithDecl(v___x_417_, v___x_418_, v___x_419_, v___x_420_, v___x_426_);
lean_dec_ref(v___x_426_);
v___x_428_ = l_panic___at___00__private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collectAndGet_spec__0(v___x_427_, v_a_404_, v_snd_407_);
return v___x_428_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collectAndGet___boxed(lean_object* v_extFind_x3f_431_, lean_object* v_c_432_, lean_object* v_a_433_, lean_object* v_a_434_){
_start:
{
lean_object* v_res_435_; 
v_res_435_ = l___private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collectAndGet(v_extFind_x3f_431_, v_c_432_, v_a_433_, v_a_434_);
lean_dec_ref(v_a_433_);
return v_res_435_;
}
}
LEAN_EXPORT uint8_t l_Array_binSearchAux___at___00__private_Lean_Util_CollectAxioms_0__Lean_ExportedAxiomsState_find_x3f_spec__0___redArg___lam__0(lean_object* v_a_439_, lean_object* v_b_440_){
_start:
{
lean_object* v_fst_441_; lean_object* v_fst_442_; uint8_t v___x_443_; 
v_fst_441_ = lean_ctor_get(v_a_439_, 0);
v_fst_442_ = lean_ctor_get(v_b_440_, 0);
v___x_443_ = l_Lean_Name_quickLt(v_fst_441_, v_fst_442_);
return v___x_443_;
}
}
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00__private_Lean_Util_CollectAxioms_0__Lean_ExportedAxiomsState_find_x3f_spec__0___redArg___lam__0___boxed(lean_object* v_a_444_, lean_object* v_b_445_){
_start:
{
uint8_t v_res_446_; lean_object* v_r_447_; 
v_res_446_ = l_Array_binSearchAux___at___00__private_Lean_Util_CollectAxioms_0__Lean_ExportedAxiomsState_find_x3f_spec__0___redArg___lam__0(v_a_444_, v_b_445_);
lean_dec_ref(v_b_445_);
lean_dec_ref(v_a_444_);
v_r_447_ = lean_box(v_res_446_);
return v_r_447_;
}
}
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00__private_Lean_Util_CollectAxioms_0__Lean_ExportedAxiomsState_find_x3f_spec__0___redArg(lean_object* v_as_448_, lean_object* v_k_449_, lean_object* v_x_450_, lean_object* v_x_451_){
_start:
{
lean_object* v___x_452_; lean_object* v___x_453_; lean_object* v_m_454_; lean_object* v_a_455_; uint8_t v___x_456_; 
v___x_452_ = lean_nat_add(v_x_450_, v_x_451_);
v___x_453_ = lean_unsigned_to_nat(1u);
v_m_454_ = lean_nat_shiftr(v___x_452_, v___x_453_);
lean_dec(v___x_452_);
v_a_455_ = lean_array_fget_borrowed(v_as_448_, v_m_454_);
v___x_456_ = l_Array_binSearchAux___at___00__private_Lean_Util_CollectAxioms_0__Lean_ExportedAxiomsState_find_x3f_spec__0___redArg___lam__0(v_a_455_, v_k_449_);
if (v___x_456_ == 0)
{
uint8_t v___x_457_; 
lean_dec(v_x_451_);
v___x_457_ = l_Array_binSearchAux___at___00__private_Lean_Util_CollectAxioms_0__Lean_ExportedAxiomsState_find_x3f_spec__0___redArg___lam__0(v_k_449_, v_a_455_);
if (v___x_457_ == 0)
{
lean_object* v___x_458_; 
lean_dec(v_m_454_);
lean_dec(v_x_450_);
lean_inc(v_a_455_);
v___x_458_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_458_, 0, v_a_455_);
return v___x_458_;
}
else
{
lean_object* v___x_459_; uint8_t v___x_460_; lean_object* v___x_461_; uint8_t v___y_463_; 
v___x_459_ = lean_unsigned_to_nat(0u);
v___x_460_ = lean_nat_dec_eq(v_m_454_, v___x_459_);
v___x_461_ = lean_nat_sub(v_m_454_, v___x_453_);
lean_dec(v_m_454_);
if (v___x_460_ == 0)
{
uint8_t v___x_466_; 
v___x_466_ = lean_nat_dec_lt(v___x_461_, v_x_450_);
v___y_463_ = v___x_466_;
goto v___jp_462_;
}
else
{
v___y_463_ = v___x_460_;
goto v___jp_462_;
}
v___jp_462_:
{
if (v___y_463_ == 0)
{
v_x_451_ = v___x_461_;
goto _start;
}
else
{
lean_object* v___x_465_; 
lean_dec(v___x_461_);
lean_dec(v_x_450_);
v___x_465_ = lean_box(0);
return v___x_465_;
}
}
}
}
else
{
lean_object* v___x_467_; uint8_t v___x_468_; 
lean_dec(v_x_450_);
v___x_467_ = lean_nat_add(v_m_454_, v___x_453_);
lean_dec(v_m_454_);
v___x_468_ = lean_nat_dec_le(v___x_467_, v_x_451_);
if (v___x_468_ == 0)
{
lean_object* v___x_469_; 
lean_dec(v___x_467_);
lean_dec(v_x_451_);
v___x_469_ = lean_box(0);
return v___x_469_;
}
else
{
v_x_450_ = v___x_467_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00__private_Lean_Util_CollectAxioms_0__Lean_ExportedAxiomsState_find_x3f_spec__0___redArg___boxed(lean_object* v_as_471_, lean_object* v_k_472_, lean_object* v_x_473_, lean_object* v_x_474_){
_start:
{
lean_object* v_res_475_; 
v_res_475_ = l_Array_binSearchAux___at___00__private_Lean_Util_CollectAxioms_0__Lean_ExportedAxiomsState_find_x3f_spec__0___redArg(v_as_471_, v_k_472_, v_x_473_, v_x_474_);
lean_dec_ref(v_k_472_);
lean_dec_ref(v_as_471_);
return v_res_475_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_CollectAxioms_0__Lean_ExportedAxiomsState_find_x3f(lean_object* v_s_476_, lean_object* v_env_477_, lean_object* v_c_478_){
_start:
{
lean_object* v___x_479_; 
v___x_479_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_477_, v_c_478_);
if (lean_obj_tag(v___x_479_) == 0)
{
lean_object* v___x_480_; 
lean_dec(v_c_478_);
v___x_480_ = lean_box(0);
return v___x_480_;
}
else
{
lean_object* v_val_481_; lean_object* v___x_482_; uint8_t v___x_483_; 
v_val_481_ = lean_ctor_get(v___x_479_, 0);
lean_inc(v_val_481_);
lean_dec_ref_known(v___x_479_, 1);
v___x_482_ = lean_array_get_size(v_s_476_);
v___x_483_ = lean_nat_dec_lt(v_val_481_, v___x_482_);
if (v___x_483_ == 0)
{
lean_object* v___x_484_; 
lean_dec(v_val_481_);
lean_dec(v_c_478_);
v___x_484_ = lean_box(0);
return v___x_484_;
}
else
{
lean_object* v___x_485_; lean_object* v___x_486_; lean_object* v___x_487_; uint8_t v___x_488_; 
v___x_485_ = lean_array_fget_borrowed(v_s_476_, v_val_481_);
lean_dec(v_val_481_);
v___x_486_ = lean_unsigned_to_nat(0u);
v___x_487_ = lean_array_get_size(v___x_485_);
v___x_488_ = lean_nat_dec_lt(v___x_486_, v___x_487_);
if (v___x_488_ == 0)
{
lean_object* v___x_489_; 
lean_dec(v_c_478_);
v___x_489_ = lean_box(0);
return v___x_489_;
}
else
{
lean_object* v___x_490_; lean_object* v___x_491_; uint8_t v___x_492_; 
v___x_490_ = lean_unsigned_to_nat(1u);
v___x_491_ = lean_nat_sub(v___x_487_, v___x_490_);
v___x_492_ = lean_nat_dec_le(v___x_486_, v___x_491_);
if (v___x_492_ == 0)
{
lean_object* v___x_493_; 
lean_dec(v___x_491_);
lean_dec(v_c_478_);
v___x_493_ = lean_box(0);
return v___x_493_;
}
else
{
lean_object* v___x_494_; lean_object* v___x_495_; lean_object* v___x_496_; 
v___x_494_ = ((lean_object*)(l___private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collect___closed__0));
v___x_495_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_495_, 0, v_c_478_);
lean_ctor_set(v___x_495_, 1, v___x_494_);
v___x_496_ = l_Array_binSearchAux___at___00__private_Lean_Util_CollectAxioms_0__Lean_ExportedAxiomsState_find_x3f_spec__0___redArg(v___x_485_, v___x_495_, v___x_486_, v___x_491_);
lean_dec_ref_known(v___x_495_, 2);
if (lean_obj_tag(v___x_496_) == 0)
{
lean_object* v___x_497_; 
v___x_497_ = lean_box(0);
return v___x_497_;
}
else
{
lean_object* v_val_498_; lean_object* v___x_500_; uint8_t v_isShared_501_; uint8_t v_isSharedCheck_506_; 
v_val_498_ = lean_ctor_get(v___x_496_, 0);
v_isSharedCheck_506_ = !lean_is_exclusive(v___x_496_);
if (v_isSharedCheck_506_ == 0)
{
v___x_500_ = v___x_496_;
v_isShared_501_ = v_isSharedCheck_506_;
goto v_resetjp_499_;
}
else
{
lean_inc(v_val_498_);
lean_dec(v___x_496_);
v___x_500_ = lean_box(0);
v_isShared_501_ = v_isSharedCheck_506_;
goto v_resetjp_499_;
}
v_resetjp_499_:
{
lean_object* v_snd_502_; lean_object* v___x_504_; 
v_snd_502_ = lean_ctor_get(v_val_498_, 1);
lean_inc(v_snd_502_);
lean_dec(v_val_498_);
if (v_isShared_501_ == 0)
{
lean_ctor_set(v___x_500_, 0, v_snd_502_);
v___x_504_ = v___x_500_;
goto v_reusejp_503_;
}
else
{
lean_object* v_reuseFailAlloc_505_; 
v_reuseFailAlloc_505_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_505_, 0, v_snd_502_);
v___x_504_ = v_reuseFailAlloc_505_;
goto v_reusejp_503_;
}
v_reusejp_503_:
{
return v___x_504_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_CollectAxioms_0__Lean_ExportedAxiomsState_find_x3f___boxed(lean_object* v_s_507_, lean_object* v_env_508_, lean_object* v_c_509_){
_start:
{
lean_object* v_res_510_; 
v_res_510_ = l___private_Lean_Util_CollectAxioms_0__Lean_ExportedAxiomsState_find_x3f(v_s_507_, v_env_508_, v_c_509_);
lean_dec_ref(v_env_508_);
lean_dec_ref(v_s_507_);
return v_res_510_;
}
}
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00__private_Lean_Util_CollectAxioms_0__Lean_ExportedAxiomsState_find_x3f_spec__0(lean_object* v_as_511_, lean_object* v_k_512_, lean_object* v_x_513_, lean_object* v_x_514_, lean_object* v_x_515_){
_start:
{
lean_object* v___x_516_; 
v___x_516_ = l_Array_binSearchAux___at___00__private_Lean_Util_CollectAxioms_0__Lean_ExportedAxiomsState_find_x3f_spec__0___redArg(v_as_511_, v_k_512_, v_x_513_, v_x_514_);
return v___x_516_;
}
}
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00__private_Lean_Util_CollectAxioms_0__Lean_ExportedAxiomsState_find_x3f_spec__0___boxed(lean_object* v_as_517_, lean_object* v_k_518_, lean_object* v_x_519_, lean_object* v_x_520_, lean_object* v_x_521_){
_start:
{
lean_object* v_res_522_; 
v_res_522_ = l_Array_binSearchAux___at___00__private_Lean_Util_CollectAxioms_0__Lean_ExportedAxiomsState_find_x3f_spec__0(v_as_517_, v_k_518_, v_x_519_, v_x_520_, v_x_521_);
lean_dec_ref(v_k_518_);
lean_dec_ref(v_as_517_);
return v_res_522_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_CollectAxioms_0__Lean_initFn___lam__0_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2_(lean_object* v_x_525_){
_start:
{
lean_object* v___x_526_; 
v___x_526_ = ((lean_object*)(l___private_Lean_Util_CollectAxioms_0__Lean_initFn___lam__0___closed__0_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2_));
return v___x_526_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_CollectAxioms_0__Lean_initFn___lam__0_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2____boxed(lean_object* v_x_527_){
_start:
{
lean_object* v_res_528_; 
v_res_528_ = l___private_Lean_Util_CollectAxioms_0__Lean_initFn___lam__0_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2_(v_x_527_);
lean_dec_ref(v_x_527_);
return v_res_528_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_CollectAxioms_0__Lean_initFn___lam__1_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2_(lean_object* v_x_529_){
_start:
{
lean_object* v___x_530_; 
v___x_530_ = lean_box(0);
return v___x_530_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_CollectAxioms_0__Lean_initFn___lam__1_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2____boxed(lean_object* v_x_531_){
_start:
{
lean_object* v_res_532_; 
v_res_532_ = l___private_Lean_Util_CollectAxioms_0__Lean_initFn___lam__1_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2_(v_x_531_);
lean_dec_ref(v_x_531_);
return v_res_532_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_CollectAxioms_0__Lean_initFn___lam__2_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2_(lean_object* v_s_533_, lean_object* v_x_534_){
_start:
{
lean_inc_ref(v_s_533_);
return v_s_533_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_CollectAxioms_0__Lean_initFn___lam__2_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2____boxed(lean_object* v_s_535_, lean_object* v_x_536_){
_start:
{
lean_object* v_res_537_; 
v_res_537_ = l___private_Lean_Util_CollectAxioms_0__Lean_initFn___lam__2_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2_(v_s_535_, v_x_536_);
lean_dec_ref(v_x_536_);
lean_dec_ref(v_s_535_);
return v_res_537_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_CollectAxioms_0__Lean_initFn___lam__3_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2_(lean_object* v_importedEntries_538_, lean_object* v___y_539_){
_start:
{
lean_object* v___x_541_; 
v___x_541_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_541_, 0, v_importedEntries_538_);
return v___x_541_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_CollectAxioms_0__Lean_initFn___lam__3_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2____boxed(lean_object* v_importedEntries_542_, lean_object* v___y_543_, lean_object* v___y_544_){
_start:
{
lean_object* v_res_545_; 
v_res_545_ = l___private_Lean_Util_CollectAxioms_0__Lean_initFn___lam__3_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2_(v_importedEntries_542_, v___y_543_);
lean_dec_ref(v___y_543_);
return v_res_545_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_CollectAxioms_0__Lean_initFn___lam__4_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2_(lean_object* v_exportedEnv_546_, uint8_t v___x_547_, lean_object* v_names_548_, lean_object* v_name_549_, lean_object* v_x_550_){
_start:
{
lean_object* v___x_551_; 
lean_inc(v_name_549_);
v___x_551_ = l_Lean_Environment_find_x3f(v_exportedEnv_546_, v_name_549_, v___x_547_);
if (lean_obj_tag(v___x_551_) == 0)
{
lean_dec(v_name_549_);
return v_names_548_;
}
else
{
lean_object* v___x_552_; 
lean_dec_ref_known(v___x_551_, 1);
v___x_552_ = lean_array_push(v_names_548_, v_name_549_);
return v___x_552_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_CollectAxioms_0__Lean_initFn___lam__4_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2____boxed(lean_object* v_exportedEnv_553_, lean_object* v___x_554_, lean_object* v_names_555_, lean_object* v_name_556_, lean_object* v_x_557_){
_start:
{
uint8_t v___x_1727__boxed_558_; lean_object* v_res_559_; 
v___x_1727__boxed_558_ = lean_unbox(v___x_554_);
v_res_559_ = l___private_Lean_Util_CollectAxioms_0__Lean_initFn___lam__4_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2_(v_exportedEnv_553_, v___x_1727__boxed_558_, v_names_555_, v_name_556_, v_x_557_);
lean_dec_ref(v_x_557_);
return v_res_559_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_CollectAxioms_0__Lean_initFn_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__spec__1(lean_object* v_s_560_, size_t v_sz_561_, size_t v_i_562_, lean_object* v_bs_563_, lean_object* v___y_564_, lean_object* v___y_565_){
_start:
{
uint8_t v___x_566_; 
v___x_566_ = lean_usize_dec_lt(v_i_562_, v_sz_561_);
if (v___x_566_ == 0)
{
lean_object* v___x_567_; lean_object* v___x_568_; 
lean_dec_ref(v_s_560_);
v___x_567_ = l_unsafeCast___redArg(v_bs_563_);
lean_dec_ref(v_bs_563_);
v___x_568_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_568_, 0, v___x_567_);
lean_ctor_set(v___x_568_, 1, v___y_565_);
return v___x_568_;
}
else
{
lean_object* v_v_569_; lean_object* v___x_570_; lean_object* v___x_571_; lean_object* v___x_572_; lean_object* v_fst_573_; lean_object* v_snd_574_; lean_object* v___x_576_; uint8_t v_isShared_577_; uint8_t v_isSharedCheck_588_; 
v_v_569_ = lean_array_uget_borrowed(v_bs_563_, v_i_562_);
v___x_570_ = l_unsafeCast___redArg(v_v_569_);
lean_inc_ref(v_s_560_);
v___x_571_ = lean_alloc_closure((void*)(l___private_Lean_Util_CollectAxioms_0__Lean_ExportedAxiomsState_find_x3f___boxed), 3, 1);
lean_closure_set(v___x_571_, 0, v_s_560_);
lean_inc(v___x_570_);
v___x_572_ = l___private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collectAndGet(v___x_571_, v___x_570_, v___y_564_, v___y_565_);
v_fst_573_ = lean_ctor_get(v___x_572_, 0);
v_snd_574_ = lean_ctor_get(v___x_572_, 1);
v_isSharedCheck_588_ = !lean_is_exclusive(v___x_572_);
if (v_isSharedCheck_588_ == 0)
{
v___x_576_ = v___x_572_;
v_isShared_577_ = v_isSharedCheck_588_;
goto v_resetjp_575_;
}
else
{
lean_inc(v_snd_574_);
lean_inc(v_fst_573_);
lean_dec(v___x_572_);
v___x_576_ = lean_box(0);
v_isShared_577_ = v_isSharedCheck_588_;
goto v_resetjp_575_;
}
v_resetjp_575_:
{
lean_object* v___x_578_; lean_object* v_bs_x27_579_; lean_object* v___x_581_; 
v___x_578_ = lean_unsigned_to_nat(0u);
v_bs_x27_579_ = lean_array_uset(v_bs_563_, v_i_562_, v___x_578_);
if (v_isShared_577_ == 0)
{
lean_ctor_set(v___x_576_, 1, v_fst_573_);
lean_ctor_set(v___x_576_, 0, v___x_570_);
v___x_581_ = v___x_576_;
goto v_reusejp_580_;
}
else
{
lean_object* v_reuseFailAlloc_587_; 
v_reuseFailAlloc_587_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_587_, 0, v___x_570_);
lean_ctor_set(v_reuseFailAlloc_587_, 1, v_fst_573_);
v___x_581_ = v_reuseFailAlloc_587_;
goto v_reusejp_580_;
}
v_reusejp_580_:
{
size_t v___x_582_; size_t v___x_583_; lean_object* v___x_584_; lean_object* v___x_585_; 
v___x_582_ = ((size_t)1ULL);
v___x_583_ = lean_usize_add(v_i_562_, v___x_582_);
v___x_584_ = l_unsafeCast___redArg(v___x_581_);
lean_dec_ref(v___x_581_);
v___x_585_ = lean_array_uset(v_bs_x27_579_, v_i_562_, v___x_584_);
v_i_562_ = v___x_583_;
v_bs_563_ = v___x_585_;
v___y_565_ = v_snd_574_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_CollectAxioms_0__Lean_initFn_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__spec__1___boxed(lean_object* v_s_589_, lean_object* v_sz_590_, lean_object* v_i_591_, lean_object* v_bs_592_, lean_object* v___y_593_, lean_object* v___y_594_){
_start:
{
size_t v_sz_boxed_595_; size_t v_i_boxed_596_; lean_object* v_res_597_; 
v_sz_boxed_595_ = lean_unbox_usize(v_sz_590_);
lean_dec(v_sz_590_);
v_i_boxed_596_ = lean_unbox_usize(v_i_591_);
lean_dec(v_i_591_);
v_res_597_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_CollectAxioms_0__Lean_initFn_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__spec__1(v_s_589_, v_sz_boxed_595_, v_i_boxed_596_, v_bs_592_, v___y_593_, v___y_594_);
lean_dec_ref(v___y_593_);
return v_res_597_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Util_CollectAxioms_0__Lean_initFn_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__5___redArg(lean_object* v_f_598_, lean_object* v_keys_599_, lean_object* v_vals_600_, lean_object* v_i_601_, lean_object* v_acc_602_){
_start:
{
lean_object* v___x_603_; uint8_t v___x_604_; 
v___x_603_ = lean_array_get_size(v_keys_599_);
v___x_604_ = lean_nat_dec_lt(v_i_601_, v___x_603_);
if (v___x_604_ == 0)
{
lean_dec(v_i_601_);
lean_dec(v_f_598_);
return v_acc_602_;
}
else
{
lean_object* v_k_605_; lean_object* v_v_606_; lean_object* v___x_607_; lean_object* v___x_608_; lean_object* v___x_609_; 
v_k_605_ = lean_array_fget_borrowed(v_keys_599_, v_i_601_);
v_v_606_ = lean_array_fget_borrowed(v_vals_600_, v_i_601_);
lean_inc(v_f_598_);
lean_inc(v_v_606_);
lean_inc(v_k_605_);
v___x_607_ = lean_apply_3(v_f_598_, v_acc_602_, v_k_605_, v_v_606_);
v___x_608_ = lean_unsigned_to_nat(1u);
v___x_609_ = lean_nat_add(v_i_601_, v___x_608_);
lean_dec(v_i_601_);
v_i_601_ = v___x_609_;
v_acc_602_ = v___x_607_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Util_CollectAxioms_0__Lean_initFn_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__5___redArg___boxed(lean_object* v_f_611_, lean_object* v_keys_612_, lean_object* v_vals_613_, lean_object* v_i_614_, lean_object* v_acc_615_){
_start:
{
lean_object* v_res_616_; 
v_res_616_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Util_CollectAxioms_0__Lean_initFn_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__5___redArg(v_f_611_, v_keys_612_, v_vals_613_, v_i_614_, v_acc_615_);
lean_dec_ref(v_vals_613_);
lean_dec_ref(v_keys_612_);
return v_res_616_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Util_CollectAxioms_0__Lean_initFn_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__4___redArg(lean_object* v_f_617_, lean_object* v_as_618_, size_t v_i_619_, size_t v_stop_620_, lean_object* v_b_621_){
_start:
{
lean_object* v___y_623_; uint8_t v___x_627_; 
v___x_627_ = lean_usize_dec_eq(v_i_619_, v_stop_620_);
if (v___x_627_ == 0)
{
lean_object* v___x_628_; 
v___x_628_ = lean_array_uget_borrowed(v_as_618_, v_i_619_);
switch(lean_obj_tag(v___x_628_))
{
case 0:
{
lean_object* v_key_629_; lean_object* v_val_630_; lean_object* v___x_631_; 
v_key_629_ = lean_ctor_get(v___x_628_, 0);
v_val_630_ = lean_ctor_get(v___x_628_, 1);
lean_inc(v_f_617_);
lean_inc(v_val_630_);
lean_inc(v_key_629_);
v___x_631_ = lean_apply_3(v_f_617_, v_b_621_, v_key_629_, v_val_630_);
v___y_623_ = v___x_631_;
goto v___jp_622_;
}
case 1:
{
lean_object* v_node_632_; lean_object* v___x_633_; 
v_node_632_ = lean_ctor_get(v___x_628_, 0);
lean_inc(v_f_617_);
v___x_633_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Util_CollectAxioms_0__Lean_initFn_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__spec__0_spec__0_spec__1___redArg(v_f_617_, v_node_632_, v_b_621_);
v___y_623_ = v___x_633_;
goto v___jp_622_;
}
default: 
{
v___y_623_ = v_b_621_;
goto v___jp_622_;
}
}
}
else
{
lean_dec(v_f_617_);
return v_b_621_;
}
v___jp_622_:
{
size_t v___x_624_; size_t v___x_625_; 
v___x_624_ = ((size_t)1ULL);
v___x_625_ = lean_usize_add(v_i_619_, v___x_624_);
v_i_619_ = v___x_625_;
v_b_621_ = v___y_623_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Util_CollectAxioms_0__Lean_initFn_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__spec__0_spec__0_spec__1___redArg(lean_object* v_f_634_, lean_object* v_x_635_, lean_object* v_x_636_){
_start:
{
if (lean_obj_tag(v_x_635_) == 0)
{
lean_object* v_es_637_; lean_object* v___x_638_; lean_object* v___x_639_; uint8_t v___x_640_; 
v_es_637_ = lean_ctor_get(v_x_635_, 0);
v___x_638_ = lean_unsigned_to_nat(0u);
v___x_639_ = lean_array_get_size(v_es_637_);
v___x_640_ = lean_nat_dec_lt(v___x_638_, v___x_639_);
if (v___x_640_ == 0)
{
lean_dec(v_f_634_);
return v_x_636_;
}
else
{
size_t v___x_641_; size_t v___x_642_; lean_object* v___x_643_; 
v___x_641_ = ((size_t)0ULL);
v___x_642_ = lean_usize_of_nat(v___x_639_);
v___x_643_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Util_CollectAxioms_0__Lean_initFn_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__4___redArg(v_f_634_, v_es_637_, v___x_641_, v___x_642_, v_x_636_);
return v___x_643_;
}
}
else
{
lean_object* v_ks_644_; lean_object* v_vs_645_; lean_object* v___x_646_; lean_object* v___x_647_; 
v_ks_644_ = lean_ctor_get(v_x_635_, 0);
v_vs_645_ = lean_ctor_get(v_x_635_, 1);
v___x_646_ = lean_unsigned_to_nat(0u);
v___x_647_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Util_CollectAxioms_0__Lean_initFn_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__5___redArg(v_f_634_, v_ks_644_, v_vs_645_, v___x_646_, v_x_636_);
return v___x_647_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Util_CollectAxioms_0__Lean_initFn_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_f_648_, lean_object* v_x_649_, lean_object* v_x_650_){
_start:
{
lean_object* v_res_651_; 
v_res_651_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Util_CollectAxioms_0__Lean_initFn_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__spec__0_spec__0_spec__1___redArg(v_f_648_, v_x_649_, v_x_650_);
lean_dec_ref(v_x_649_);
return v_res_651_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Util_CollectAxioms_0__Lean_initFn_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__4___redArg___boxed(lean_object* v_f_652_, lean_object* v_as_653_, lean_object* v_i_654_, lean_object* v_stop_655_, lean_object* v_b_656_){
_start:
{
size_t v_i_boxed_657_; size_t v_stop_boxed_658_; lean_object* v_res_659_; 
v_i_boxed_657_ = lean_unbox_usize(v_i_654_);
lean_dec(v_i_654_);
v_stop_boxed_658_ = lean_unbox_usize(v_stop_655_);
lean_dec(v_stop_655_);
v_res_659_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Util_CollectAxioms_0__Lean_initFn_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__4___redArg(v_f_652_, v_as_653_, v_i_boxed_657_, v_stop_boxed_658_, v_b_656_);
lean_dec_ref(v_as_653_);
return v_res_659_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00__private_Lean_Util_CollectAxioms_0__Lean_initFn_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__spec__0___redArg___lam__0(lean_object* v_f_660_, lean_object* v_x1_661_, lean_object* v_x2_662_, lean_object* v_x3_663_){
_start:
{
lean_object* v___x_664_; 
v___x_664_ = lean_apply_3(v_f_660_, v_x1_661_, v_x2_662_, v_x3_663_);
return v___x_664_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00__private_Lean_Util_CollectAxioms_0__Lean_initFn_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__spec__0___redArg(lean_object* v_map_665_, lean_object* v_f_666_, lean_object* v_init_667_){
_start:
{
lean_object* v___f_668_; lean_object* v___x_669_; 
v___f_668_ = lean_alloc_closure((void*)(l_Lean_PersistentHashMap_foldl___at___00__private_Lean_Util_CollectAxioms_0__Lean_initFn_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__spec__0___redArg___lam__0), 4, 1);
lean_closure_set(v___f_668_, 0, v_f_666_);
v___x_669_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Util_CollectAxioms_0__Lean_initFn_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__spec__0_spec__0_spec__1___redArg(v___f_668_, v_map_665_, v_init_667_);
return v___x_669_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00__private_Lean_Util_CollectAxioms_0__Lean_initFn_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__spec__0___redArg___boxed(lean_object* v_map_670_, lean_object* v_f_671_, lean_object* v_init_672_){
_start:
{
lean_object* v_res_673_; 
v_res_673_ = l_Lean_PersistentHashMap_foldl___at___00__private_Lean_Util_CollectAxioms_0__Lean_initFn_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__spec__0___redArg(v_map_670_, v_f_671_, v_init_672_);
lean_dec_ref(v_map_670_);
return v_res_673_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Util_CollectAxioms_0__Lean_initFn_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__spec__2_spec__3___redArg(lean_object* v_hi_674_, lean_object* v_pivot_675_, lean_object* v_as_676_, lean_object* v_i_677_, lean_object* v_k_678_){
_start:
{
uint8_t v___x_679_; 
v___x_679_ = lean_nat_dec_lt(v_k_678_, v_hi_674_);
if (v___x_679_ == 0)
{
lean_object* v___x_680_; lean_object* v___x_681_; 
lean_dec(v_k_678_);
v___x_680_ = lean_array_fswap(v_as_676_, v_i_677_, v_hi_674_);
v___x_681_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_681_, 0, v_i_677_);
lean_ctor_set(v___x_681_, 1, v___x_680_);
return v___x_681_;
}
else
{
lean_object* v___x_682_; lean_object* v_fst_683_; lean_object* v_fst_684_; uint8_t v___x_685_; 
v___x_682_ = lean_array_fget_borrowed(v_as_676_, v_k_678_);
v_fst_683_ = lean_ctor_get(v___x_682_, 0);
v_fst_684_ = lean_ctor_get(v_pivot_675_, 0);
v___x_685_ = l_Lean_Name_quickLt(v_fst_683_, v_fst_684_);
if (v___x_685_ == 0)
{
lean_object* v___x_686_; lean_object* v___x_687_; 
v___x_686_ = lean_unsigned_to_nat(1u);
v___x_687_ = lean_nat_add(v_k_678_, v___x_686_);
lean_dec(v_k_678_);
v_k_678_ = v___x_687_;
goto _start;
}
else
{
lean_object* v___x_689_; lean_object* v___x_690_; lean_object* v___x_691_; lean_object* v___x_692_; 
v___x_689_ = lean_array_fswap(v_as_676_, v_i_677_, v_k_678_);
v___x_690_ = lean_unsigned_to_nat(1u);
v___x_691_ = lean_nat_add(v_i_677_, v___x_690_);
lean_dec(v_i_677_);
v___x_692_ = lean_nat_add(v_k_678_, v___x_690_);
lean_dec(v_k_678_);
v_as_676_ = v___x_689_;
v_i_677_ = v___x_691_;
v_k_678_ = v___x_692_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Util_CollectAxioms_0__Lean_initFn_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__spec__2_spec__3___redArg___boxed(lean_object* v_hi_694_, lean_object* v_pivot_695_, lean_object* v_as_696_, lean_object* v_i_697_, lean_object* v_k_698_){
_start:
{
lean_object* v_res_699_; 
v_res_699_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Util_CollectAxioms_0__Lean_initFn_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__spec__2_spec__3___redArg(v_hi_694_, v_pivot_695_, v_as_696_, v_i_697_, v_k_698_);
lean_dec_ref(v_pivot_695_);
lean_dec(v_hi_694_);
return v_res_699_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Util_CollectAxioms_0__Lean_initFn_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__spec__2___redArg(lean_object* v_n_700_, lean_object* v_as_701_, lean_object* v_lo_702_, lean_object* v_hi_703_){
_start:
{
lean_object* v___y_705_; uint8_t v___x_715_; 
v___x_715_ = lean_nat_dec_lt(v_lo_702_, v_hi_703_);
if (v___x_715_ == 0)
{
lean_dec(v_lo_702_);
return v_as_701_;
}
else
{
lean_object* v___x_716_; lean_object* v___x_717_; lean_object* v_mid_718_; lean_object* v___y_720_; lean_object* v___y_726_; lean_object* v___x_731_; lean_object* v___x_732_; uint8_t v___x_733_; 
v___x_716_ = lean_nat_add(v_lo_702_, v_hi_703_);
v___x_717_ = lean_unsigned_to_nat(1u);
v_mid_718_ = lean_nat_shiftr(v___x_716_, v___x_717_);
lean_dec(v___x_716_);
v___x_731_ = lean_array_fget_borrowed(v_as_701_, v_mid_718_);
v___x_732_ = lean_array_fget_borrowed(v_as_701_, v_lo_702_);
v___x_733_ = l_Array_binSearchAux___at___00__private_Lean_Util_CollectAxioms_0__Lean_ExportedAxiomsState_find_x3f_spec__0___redArg___lam__0(v___x_731_, v___x_732_);
if (v___x_733_ == 0)
{
v___y_726_ = v_as_701_;
goto v___jp_725_;
}
else
{
lean_object* v___x_734_; 
v___x_734_ = lean_array_fswap(v_as_701_, v_lo_702_, v_mid_718_);
v___y_726_ = v___x_734_;
goto v___jp_725_;
}
v___jp_719_:
{
lean_object* v___x_721_; lean_object* v___x_722_; uint8_t v___x_723_; 
v___x_721_ = lean_array_fget_borrowed(v___y_720_, v_mid_718_);
v___x_722_ = lean_array_fget_borrowed(v___y_720_, v_hi_703_);
v___x_723_ = l_Array_binSearchAux___at___00__private_Lean_Util_CollectAxioms_0__Lean_ExportedAxiomsState_find_x3f_spec__0___redArg___lam__0(v___x_721_, v___x_722_);
if (v___x_723_ == 0)
{
lean_dec(v_mid_718_);
v___y_705_ = v___y_720_;
goto v___jp_704_;
}
else
{
lean_object* v___x_724_; 
v___x_724_ = lean_array_fswap(v___y_720_, v_mid_718_, v_hi_703_);
lean_dec(v_mid_718_);
v___y_705_ = v___x_724_;
goto v___jp_704_;
}
}
v___jp_725_:
{
lean_object* v___x_727_; lean_object* v___x_728_; uint8_t v___x_729_; 
v___x_727_ = lean_array_fget_borrowed(v___y_726_, v_hi_703_);
v___x_728_ = lean_array_fget_borrowed(v___y_726_, v_lo_702_);
v___x_729_ = l_Array_binSearchAux___at___00__private_Lean_Util_CollectAxioms_0__Lean_ExportedAxiomsState_find_x3f_spec__0___redArg___lam__0(v___x_727_, v___x_728_);
if (v___x_729_ == 0)
{
v___y_720_ = v___y_726_;
goto v___jp_719_;
}
else
{
lean_object* v___x_730_; 
v___x_730_ = lean_array_fswap(v___y_726_, v_lo_702_, v_hi_703_);
v___y_720_ = v___x_730_;
goto v___jp_719_;
}
}
}
v___jp_704_:
{
lean_object* v_pivot_706_; lean_object* v___x_707_; lean_object* v_fst_708_; lean_object* v_snd_709_; uint8_t v___x_710_; 
v_pivot_706_ = lean_array_fget(v___y_705_, v_hi_703_);
lean_inc_n(v_lo_702_, 2);
v___x_707_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Util_CollectAxioms_0__Lean_initFn_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__spec__2_spec__3___redArg(v_hi_703_, v_pivot_706_, v___y_705_, v_lo_702_, v_lo_702_);
lean_dec(v_pivot_706_);
v_fst_708_ = lean_ctor_get(v___x_707_, 0);
lean_inc(v_fst_708_);
v_snd_709_ = lean_ctor_get(v___x_707_, 1);
lean_inc(v_snd_709_);
lean_dec_ref(v___x_707_);
v___x_710_ = lean_nat_dec_le(v_hi_703_, v_fst_708_);
if (v___x_710_ == 0)
{
lean_object* v___x_711_; lean_object* v___x_712_; lean_object* v___x_713_; 
v___x_711_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Util_CollectAxioms_0__Lean_initFn_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__spec__2___redArg(v_n_700_, v_snd_709_, v_lo_702_, v_fst_708_);
v___x_712_ = lean_unsigned_to_nat(1u);
v___x_713_ = lean_nat_add(v_fst_708_, v___x_712_);
lean_dec(v_fst_708_);
v_as_701_ = v___x_711_;
v_lo_702_ = v___x_713_;
goto _start;
}
else
{
lean_dec(v_fst_708_);
lean_dec(v_lo_702_);
return v_snd_709_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Util_CollectAxioms_0__Lean_initFn_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__spec__2___redArg___boxed(lean_object* v_n_735_, lean_object* v_as_736_, lean_object* v_lo_737_, lean_object* v_hi_738_){
_start:
{
lean_object* v_res_739_; 
v_res_739_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Util_CollectAxioms_0__Lean_initFn_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__spec__2___redArg(v_n_735_, v_as_736_, v_lo_737_, v_hi_738_);
lean_dec(v_hi_738_);
lean_dec(v_n_735_);
return v_res_739_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_CollectAxioms_0__Lean_initFn___lam__5_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2_(lean_object* v___x_742_, lean_object* v_env_743_, lean_object* v_s_744_){
_start:
{
lean_object* v_checked_745_; lean_object* v___x_746_; lean_object* v_constants_747_; lean_object* v_map_u2082_748_; uint8_t v___x_749_; lean_object* v_exportedEnv_750_; uint8_t v___x_751_; lean_object* v___x_752_; lean_object* v___f_753_; lean_object* v_privateEnv_754_; lean_object* v___x_755_; lean_object* v_allNames_756_; size_t v_sz_757_; lean_object* v___x_758_; lean_object* v___x_759_; lean_object* v___x_760_; lean_object* v___x_761_; lean_object* v___x_762_; lean_object* v_entries_763_; lean_object* v___x_764_; lean_object* v___y_766_; lean_object* v___y_767_; uint8_t v___x_770_; 
v_checked_745_ = lean_ctor_get(v_env_743_, 2);
lean_inc_ref(v_checked_745_);
v___x_746_ = lean_task_get_own(v_checked_745_);
v_constants_747_ = lean_ctor_get(v___x_746_, 0);
lean_inc_ref(v_constants_747_);
lean_dec(v___x_746_);
v_map_u2082_748_ = lean_ctor_get(v_constants_747_, 1);
lean_inc_ref(v_map_u2082_748_);
lean_dec_ref(v_constants_747_);
v___x_749_ = 1;
lean_inc_ref(v_env_743_);
v_exportedEnv_750_ = l_Lean_Environment_setExporting(v_env_743_, v___x_749_);
v___x_751_ = 0;
v___x_752_ = lean_box(v___x_751_);
v___f_753_ = lean_alloc_closure((void*)(l___private_Lean_Util_CollectAxioms_0__Lean_initFn___lam__4_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2____boxed), 5, 2);
lean_closure_set(v___f_753_, 0, v_exportedEnv_750_);
lean_closure_set(v___f_753_, 1, v___x_752_);
v_privateEnv_754_ = l_Lean_Environment_setExporting(v_env_743_, v___x_751_);
v___x_755_ = lean_mk_empty_array_with_capacity(v___x_742_);
v_allNames_756_ = l_Lean_PersistentHashMap_foldl___at___00__private_Lean_Util_CollectAxioms_0__Lean_initFn_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__spec__0___redArg(v_map_u2082_748_, v___f_753_, v___x_755_);
lean_dec_ref(v_map_u2082_748_);
v_sz_757_ = lean_array_size(v_allNames_756_);
v___x_758_ = l_unsafeCast___redArg(v_allNames_756_);
lean_dec(v_allNames_756_);
v___x_759_ = lean_box_usize(v_sz_757_);
v___x_760_ = ((lean_object*)(l___private_Lean_Util_CollectAxioms_0__Lean_initFn___lam__5___boxed__const__1_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2_));
v___x_761_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_CollectAxioms_0__Lean_initFn_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__spec__1___boxed), 6, 4);
lean_closure_set(v___x_761_, 0, v_s_744_);
lean_closure_set(v___x_761_, 1, v___x_759_);
lean_closure_set(v___x_761_, 2, v___x_760_);
lean_closure_set(v___x_761_, 3, v___x_758_);
v___x_762_ = l_unsafeCast___redArg(v___x_761_);
lean_dec_ref(v___x_761_);
v_entries_763_ = l___private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_runM___redArg(v_privateEnv_754_, v___x_762_);
v___x_764_ = lean_array_get_size(v_entries_763_);
v___x_770_ = lean_nat_dec_eq(v___x_764_, v___x_742_);
if (v___x_770_ == 0)
{
lean_object* v___x_771_; lean_object* v___x_772_; lean_object* v___y_774_; uint8_t v___x_776_; 
v___x_771_ = lean_unsigned_to_nat(1u);
v___x_772_ = lean_nat_sub(v___x_764_, v___x_771_);
v___x_776_ = lean_nat_dec_le(v___x_742_, v___x_772_);
if (v___x_776_ == 0)
{
lean_dec(v___x_742_);
lean_inc(v___x_772_);
v___y_774_ = v___x_772_;
goto v___jp_773_;
}
else
{
v___y_774_ = v___x_742_;
goto v___jp_773_;
}
v___jp_773_:
{
uint8_t v___x_775_; 
v___x_775_ = lean_nat_dec_le(v___y_774_, v___x_772_);
if (v___x_775_ == 0)
{
lean_dec(v___x_772_);
lean_inc(v___y_774_);
v___y_766_ = v___y_774_;
v___y_767_ = v___y_774_;
goto v___jp_765_;
}
else
{
v___y_766_ = v___y_774_;
v___y_767_ = v___x_772_;
goto v___jp_765_;
}
}
}
else
{
lean_object* v___x_777_; 
lean_dec(v___x_742_);
lean_inc_n(v_entries_763_, 2);
v___x_777_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_777_, 0, v_entries_763_);
lean_ctor_set(v___x_777_, 1, v_entries_763_);
lean_ctor_set(v___x_777_, 2, v_entries_763_);
return v___x_777_;
}
v___jp_765_:
{
lean_object* v___x_768_; lean_object* v___x_769_; 
v___x_768_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Util_CollectAxioms_0__Lean_initFn_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__spec__2___redArg(v___x_764_, v_entries_763_, v___y_766_, v___y_767_);
lean_dec(v___y_767_);
lean_inc_ref_n(v___x_768_, 2);
v___x_769_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_769_, 0, v___x_768_);
lean_ctor_set(v___x_769_, 1, v___x_768_);
lean_ctor_set(v___x_769_, 2, v___x_768_);
return v___x_769_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_CollectAxioms_0__Lean_initFn___lam__6_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2_(lean_object* v___x_778_){
_start:
{
lean_object* v___x_780_; 
v___x_780_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_780_, 0, v___x_778_);
return v___x_780_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_CollectAxioms_0__Lean_initFn___lam__6_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2____boxed(lean_object* v___x_781_, lean_object* v___y_782_){
_start:
{
lean_object* v_res_783_; 
v_res_783_ = l___private_Lean_Util_CollectAxioms_0__Lean_initFn___lam__6_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2_(v___x_781_);
return v_res_783_;
}
}
static lean_object* _init_l___private_Lean_Util_CollectAxioms_0__Lean_initFn___closed__4_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_788_; lean_object* v___x_789_; 
v___x_788_ = lean_box(0);
v___x_789_ = l_unsafeCast___redArg(v___x_788_);
return v___x_789_;
}
}
static lean_object* _init_l___private_Lean_Util_CollectAxioms_0__Lean_initFn___closed__6_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_791_; lean_object* v___x_792_; lean_object* v___x_793_; 
v___x_791_ = ((lean_object*)(l___private_Lean_Util_CollectAxioms_0__Lean_initFn___closed__5_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2_));
v___x_792_ = lean_obj_once(&l___private_Lean_Util_CollectAxioms_0__Lean_initFn___closed__4_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2_, &l___private_Lean_Util_CollectAxioms_0__Lean_initFn___closed__4_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__once, _init_l___private_Lean_Util_CollectAxioms_0__Lean_initFn___closed__4_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2_);
v___x_793_ = l_Lean_Name_str___override(v___x_792_, v___x_791_);
return v___x_793_;
}
}
static lean_object* _init_l___private_Lean_Util_CollectAxioms_0__Lean_initFn___closed__8_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_795_; lean_object* v___x_796_; lean_object* v___x_797_; 
v___x_795_ = ((lean_object*)(l___private_Lean_Util_CollectAxioms_0__Lean_initFn___closed__7_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2_));
v___x_796_ = lean_obj_once(&l___private_Lean_Util_CollectAxioms_0__Lean_initFn___closed__6_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2_, &l___private_Lean_Util_CollectAxioms_0__Lean_initFn___closed__6_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__once, _init_l___private_Lean_Util_CollectAxioms_0__Lean_initFn___closed__6_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2_);
v___x_797_ = l_Lean_Name_str___override(v___x_796_, v___x_795_);
return v___x_797_;
}
}
static lean_object* _init_l___private_Lean_Util_CollectAxioms_0__Lean_initFn___closed__10_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_799_; lean_object* v___x_800_; lean_object* v___x_801_; 
v___x_799_ = ((lean_object*)(l___private_Lean_Util_CollectAxioms_0__Lean_initFn___closed__9_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2_));
v___x_800_ = lean_obj_once(&l___private_Lean_Util_CollectAxioms_0__Lean_initFn___closed__8_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2_, &l___private_Lean_Util_CollectAxioms_0__Lean_initFn___closed__8_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__once, _init_l___private_Lean_Util_CollectAxioms_0__Lean_initFn___closed__8_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2_);
v___x_801_ = l_Lean_Name_str___override(v___x_800_, v___x_799_);
return v___x_801_;
}
}
static lean_object* _init_l___private_Lean_Util_CollectAxioms_0__Lean_initFn___closed__12_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_803_; lean_object* v___x_804_; lean_object* v___x_805_; 
v___x_803_ = ((lean_object*)(l___private_Lean_Util_CollectAxioms_0__Lean_initFn___closed__11_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2_));
v___x_804_ = lean_obj_once(&l___private_Lean_Util_CollectAxioms_0__Lean_initFn___closed__10_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2_, &l___private_Lean_Util_CollectAxioms_0__Lean_initFn___closed__10_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__once, _init_l___private_Lean_Util_CollectAxioms_0__Lean_initFn___closed__10_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2_);
v___x_805_ = l_Lean_Name_str___override(v___x_804_, v___x_803_);
return v___x_805_;
}
}
static lean_object* _init_l___private_Lean_Util_CollectAxioms_0__Lean_initFn___closed__14_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_808_; lean_object* v___x_809_; lean_object* v___x_810_; 
v___x_808_ = lean_unsigned_to_nat(0u);
v___x_809_ = lean_obj_once(&l___private_Lean_Util_CollectAxioms_0__Lean_initFn___closed__12_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2_, &l___private_Lean_Util_CollectAxioms_0__Lean_initFn___closed__12_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__once, _init_l___private_Lean_Util_CollectAxioms_0__Lean_initFn___closed__12_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2_);
v___x_810_ = l_Lean_Name_num___override(v___x_809_, v___x_808_);
return v___x_810_;
}
}
static lean_object* _init_l___private_Lean_Util_CollectAxioms_0__Lean_initFn___closed__15_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_811_; lean_object* v___x_812_; lean_object* v___x_813_; 
v___x_811_ = ((lean_object*)(l___private_Lean_Util_CollectAxioms_0__Lean_initFn___closed__7_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2_));
v___x_812_ = lean_obj_once(&l___private_Lean_Util_CollectAxioms_0__Lean_initFn___closed__14_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2_, &l___private_Lean_Util_CollectAxioms_0__Lean_initFn___closed__14_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__once, _init_l___private_Lean_Util_CollectAxioms_0__Lean_initFn___closed__14_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2_);
v___x_813_ = l_Lean_Name_str___override(v___x_812_, v___x_811_);
return v___x_813_;
}
}
static lean_object* _init_l___private_Lean_Util_CollectAxioms_0__Lean_initFn___closed__17_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_815_; lean_object* v___x_816_; lean_object* v___x_817_; 
v___x_815_ = ((lean_object*)(l___private_Lean_Util_CollectAxioms_0__Lean_initFn___closed__16_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2_));
v___x_816_ = lean_obj_once(&l___private_Lean_Util_CollectAxioms_0__Lean_initFn___closed__15_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2_, &l___private_Lean_Util_CollectAxioms_0__Lean_initFn___closed__15_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__once, _init_l___private_Lean_Util_CollectAxioms_0__Lean_initFn___closed__15_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2_);
v___x_817_ = l_Lean_Name_str___override(v___x_816_, v___x_815_);
return v___x_817_;
}
}
static lean_object* _init_l___private_Lean_Util_CollectAxioms_0__Lean_initFn___closed__19_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_820_; lean_object* v___x_821_; lean_object* v___f_822_; lean_object* v___f_823_; lean_object* v___f_824_; lean_object* v___f_825_; lean_object* v___f_826_; lean_object* v___x_827_; lean_object* v___x_828_; 
v___x_820_ = lean_box(0);
v___x_821_ = lean_box(2);
v___f_822_ = ((lean_object*)(l___private_Lean_Util_CollectAxioms_0__Lean_initFn___closed__1_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2_));
v___f_823_ = ((lean_object*)(l___private_Lean_Util_CollectAxioms_0__Lean_initFn___closed__13_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2_));
v___f_824_ = ((lean_object*)(l___private_Lean_Util_CollectAxioms_0__Lean_initFn___closed__2_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2_));
v___f_825_ = ((lean_object*)(l___private_Lean_Util_CollectAxioms_0__Lean_initFn___closed__3_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2_));
v___f_826_ = ((lean_object*)(l___private_Lean_Util_CollectAxioms_0__Lean_initFn___closed__18_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2_));
v___x_827_ = lean_obj_once(&l___private_Lean_Util_CollectAxioms_0__Lean_initFn___closed__17_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2_, &l___private_Lean_Util_CollectAxioms_0__Lean_initFn___closed__17_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__once, _init_l___private_Lean_Util_CollectAxioms_0__Lean_initFn___closed__17_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2_);
v___x_828_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_828_, 0, v___x_827_);
lean_ctor_set(v___x_828_, 1, v___f_826_);
lean_ctor_set(v___x_828_, 2, v___f_825_);
lean_ctor_set(v___x_828_, 3, v___f_824_);
lean_ctor_set(v___x_828_, 4, v___f_823_);
lean_ctor_set(v___x_828_, 5, v___f_822_);
lean_ctor_set(v___x_828_, 6, v___x_821_);
lean_ctor_set(v___x_828_, 7, v___x_820_);
return v___x_828_;
}
}
static lean_object* _init_l___private_Lean_Util_CollectAxioms_0__Lean_initFn___closed__20_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___f_829_; lean_object* v___x_830_; lean_object* v___x_831_; 
v___f_829_ = ((lean_object*)(l___private_Lean_Util_CollectAxioms_0__Lean_initFn___closed__0_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2_));
v___x_830_ = lean_obj_once(&l___private_Lean_Util_CollectAxioms_0__Lean_initFn___closed__19_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2_, &l___private_Lean_Util_CollectAxioms_0__Lean_initFn___closed__19_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__once, _init_l___private_Lean_Util_CollectAxioms_0__Lean_initFn___closed__19_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2_);
v___x_831_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_831_, 0, v___x_830_);
lean_ctor_set(v___x_831_, 1, v___f_829_);
return v___x_831_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_CollectAxioms_0__Lean_initFn_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_833_; lean_object* v___x_834_; 
v___x_833_ = lean_obj_once(&l___private_Lean_Util_CollectAxioms_0__Lean_initFn___closed__20_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2_, &l___private_Lean_Util_CollectAxioms_0__Lean_initFn___closed__20_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__once, _init_l___private_Lean_Util_CollectAxioms_0__Lean_initFn___closed__20_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2_);
v___x_834_ = l_Lean_registerPersistentEnvExtensionUnsafe___redArg(v___x_833_);
return v___x_834_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_CollectAxioms_0__Lean_initFn_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2____boxed(lean_object* v_a_835_){
_start:
{
lean_object* v_res_836_; 
v_res_836_ = l___private_Lean_Util_CollectAxioms_0__Lean_initFn_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2_();
return v_res_836_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00__private_Lean_Util_CollectAxioms_0__Lean_initFn_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__spec__0(lean_object* v_00_u03c3_837_, lean_object* v_00_u03b2_838_, lean_object* v_map_839_, lean_object* v_f_840_, lean_object* v_init_841_){
_start:
{
lean_object* v___x_842_; 
v___x_842_ = l_Lean_PersistentHashMap_foldl___at___00__private_Lean_Util_CollectAxioms_0__Lean_initFn_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__spec__0___redArg(v_map_839_, v_f_840_, v_init_841_);
return v___x_842_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00__private_Lean_Util_CollectAxioms_0__Lean_initFn_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__spec__0___boxed(lean_object* v_00_u03c3_843_, lean_object* v_00_u03b2_844_, lean_object* v_map_845_, lean_object* v_f_846_, lean_object* v_init_847_){
_start:
{
lean_object* v_res_848_; 
v_res_848_ = l_Lean_PersistentHashMap_foldl___at___00__private_Lean_Util_CollectAxioms_0__Lean_initFn_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__spec__0(v_00_u03c3_843_, v_00_u03b2_844_, v_map_845_, v_f_846_, v_init_847_);
lean_dec_ref(v_map_845_);
return v_res_848_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Util_CollectAxioms_0__Lean_initFn_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__spec__2(lean_object* v_n_849_, lean_object* v_as_850_, lean_object* v_lo_851_, lean_object* v_hi_852_, lean_object* v_w_853_, lean_object* v_hlo_854_, lean_object* v_hhi_855_){
_start:
{
lean_object* v___x_856_; 
v___x_856_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Util_CollectAxioms_0__Lean_initFn_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__spec__2___redArg(v_n_849_, v_as_850_, v_lo_851_, v_hi_852_);
return v___x_856_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Util_CollectAxioms_0__Lean_initFn_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__spec__2___boxed(lean_object* v_n_857_, lean_object* v_as_858_, lean_object* v_lo_859_, lean_object* v_hi_860_, lean_object* v_w_861_, lean_object* v_hlo_862_, lean_object* v_hhi_863_){
_start:
{
lean_object* v_res_864_; 
v_res_864_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Util_CollectAxioms_0__Lean_initFn_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__spec__2(v_n_857_, v_as_858_, v_lo_859_, v_hi_860_, v_w_861_, v_hlo_862_, v_hhi_863_);
lean_dec(v_hi_860_);
lean_dec(v_n_857_);
return v_res_864_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Util_CollectAxioms_0__Lean_initFn_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__spec__0_spec__0___redArg(lean_object* v_map_865_, lean_object* v_f_866_, lean_object* v_init_867_){
_start:
{
lean_object* v___x_868_; 
v___x_868_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Util_CollectAxioms_0__Lean_initFn_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__spec__0_spec__0_spec__1___redArg(v_f_866_, v_map_865_, v_init_867_);
return v___x_868_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Util_CollectAxioms_0__Lean_initFn_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__spec__0_spec__0___redArg___boxed(lean_object* v_map_869_, lean_object* v_f_870_, lean_object* v_init_871_){
_start:
{
lean_object* v_res_872_; 
v_res_872_ = l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Util_CollectAxioms_0__Lean_initFn_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__spec__0_spec__0___redArg(v_map_869_, v_f_870_, v_init_871_);
lean_dec_ref(v_map_869_);
return v_res_872_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Util_CollectAxioms_0__Lean_initFn_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__spec__0_spec__0(lean_object* v_00_u03c3_873_, lean_object* v_00_u03b2_874_, lean_object* v_map_875_, lean_object* v_f_876_, lean_object* v_init_877_){
_start:
{
lean_object* v___x_878_; 
v___x_878_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Util_CollectAxioms_0__Lean_initFn_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__spec__0_spec__0_spec__1___redArg(v_f_876_, v_map_875_, v_init_877_);
return v___x_878_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Util_CollectAxioms_0__Lean_initFn_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__spec__0_spec__0___boxed(lean_object* v_00_u03c3_879_, lean_object* v_00_u03b2_880_, lean_object* v_map_881_, lean_object* v_f_882_, lean_object* v_init_883_){
_start:
{
lean_object* v_res_884_; 
v_res_884_ = l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Util_CollectAxioms_0__Lean_initFn_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__spec__0_spec__0(v_00_u03c3_879_, v_00_u03b2_880_, v_map_881_, v_f_882_, v_init_883_);
lean_dec_ref(v_map_881_);
return v_res_884_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Util_CollectAxioms_0__Lean_initFn_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__spec__2_spec__3(lean_object* v_n_885_, lean_object* v_lo_886_, lean_object* v_hi_887_, lean_object* v_hhi_888_, lean_object* v_pivot_889_, lean_object* v_as_890_, lean_object* v_i_891_, lean_object* v_k_892_, lean_object* v_ilo_893_, lean_object* v_ik_894_, lean_object* v_w_895_){
_start:
{
lean_object* v___x_896_; 
v___x_896_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Util_CollectAxioms_0__Lean_initFn_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__spec__2_spec__3___redArg(v_hi_887_, v_pivot_889_, v_as_890_, v_i_891_, v_k_892_);
return v___x_896_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Util_CollectAxioms_0__Lean_initFn_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__spec__2_spec__3___boxed(lean_object* v_n_897_, lean_object* v_lo_898_, lean_object* v_hi_899_, lean_object* v_hhi_900_, lean_object* v_pivot_901_, lean_object* v_as_902_, lean_object* v_i_903_, lean_object* v_k_904_, lean_object* v_ilo_905_, lean_object* v_ik_906_, lean_object* v_w_907_){
_start:
{
lean_object* v_res_908_; 
v_res_908_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Util_CollectAxioms_0__Lean_initFn_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__spec__2_spec__3(v_n_897_, v_lo_898_, v_hi_899_, v_hhi_900_, v_pivot_901_, v_as_902_, v_i_903_, v_k_904_, v_ilo_905_, v_ik_906_, v_w_907_);
lean_dec_ref(v_pivot_901_);
lean_dec(v_hi_899_);
lean_dec(v_lo_898_);
lean_dec(v_n_897_);
return v_res_908_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Util_CollectAxioms_0__Lean_initFn_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__spec__0_spec__0_spec__1(lean_object* v_00_u03c3_909_, lean_object* v_00_u03b1_910_, lean_object* v_00_u03b2_911_, lean_object* v_f_912_, lean_object* v_x_913_, lean_object* v_x_914_){
_start:
{
lean_object* v___x_915_; 
v___x_915_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Util_CollectAxioms_0__Lean_initFn_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__spec__0_spec__0_spec__1___redArg(v_f_912_, v_x_913_, v_x_914_);
return v___x_915_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Util_CollectAxioms_0__Lean_initFn_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03c3_916_, lean_object* v_00_u03b1_917_, lean_object* v_00_u03b2_918_, lean_object* v_f_919_, lean_object* v_x_920_, lean_object* v_x_921_){
_start:
{
lean_object* v_res_922_; 
v_res_922_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Util_CollectAxioms_0__Lean_initFn_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__spec__0_spec__0_spec__1(v_00_u03c3_916_, v_00_u03b1_917_, v_00_u03b2_918_, v_f_919_, v_x_920_, v_x_921_);
lean_dec_ref(v_x_920_);
return v_res_922_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Util_CollectAxioms_0__Lean_initFn_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__4(lean_object* v_00_u03b1_923_, lean_object* v_00_u03b2_924_, lean_object* v_00_u03c3_925_, lean_object* v_f_926_, lean_object* v_as_927_, size_t v_i_928_, size_t v_stop_929_, lean_object* v_b_930_){
_start:
{
lean_object* v___x_931_; 
v___x_931_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Util_CollectAxioms_0__Lean_initFn_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__4___redArg(v_f_926_, v_as_927_, v_i_928_, v_stop_929_, v_b_930_);
return v___x_931_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Util_CollectAxioms_0__Lean_initFn_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__4___boxed(lean_object* v_00_u03b1_932_, lean_object* v_00_u03b2_933_, lean_object* v_00_u03c3_934_, lean_object* v_f_935_, lean_object* v_as_936_, lean_object* v_i_937_, lean_object* v_stop_938_, lean_object* v_b_939_){
_start:
{
size_t v_i_boxed_940_; size_t v_stop_boxed_941_; lean_object* v_res_942_; 
v_i_boxed_940_ = lean_unbox_usize(v_i_937_);
lean_dec(v_i_937_);
v_stop_boxed_941_ = lean_unbox_usize(v_stop_938_);
lean_dec(v_stop_938_);
v_res_942_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Util_CollectAxioms_0__Lean_initFn_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__4(v_00_u03b1_932_, v_00_u03b2_933_, v_00_u03c3_934_, v_f_935_, v_as_936_, v_i_boxed_940_, v_stop_boxed_941_, v_b_939_);
lean_dec_ref(v_as_936_);
return v_res_942_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Util_CollectAxioms_0__Lean_initFn_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__5(lean_object* v_00_u03c3_943_, lean_object* v_00_u03b1_944_, lean_object* v_00_u03b2_945_, lean_object* v_f_946_, lean_object* v_keys_947_, lean_object* v_vals_948_, lean_object* v_heq_949_, lean_object* v_i_950_, lean_object* v_acc_951_){
_start:
{
lean_object* v___x_952_; 
v___x_952_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Util_CollectAxioms_0__Lean_initFn_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__5___redArg(v_f_946_, v_keys_947_, v_vals_948_, v_i_950_, v_acc_951_);
return v___x_952_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Util_CollectAxioms_0__Lean_initFn_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__5___boxed(lean_object* v_00_u03c3_953_, lean_object* v_00_u03b1_954_, lean_object* v_00_u03b2_955_, lean_object* v_f_956_, lean_object* v_keys_957_, lean_object* v_vals_958_, lean_object* v_heq_959_, lean_object* v_i_960_, lean_object* v_acc_961_){
_start:
{
lean_object* v_res_962_; 
v_res_962_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Util_CollectAxioms_0__Lean_initFn_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__5(v_00_u03c3_953_, v_00_u03b1_954_, v_00_u03b2_955_, v_f_956_, v_keys_957_, v_vals_958_, v_heq_959_, v_i_960_, v_acc_961_);
lean_dec_ref(v_vals_958_);
lean_dec_ref(v_keys_957_);
return v_res_962_;
}
}
LEAN_EXPORT lean_object* l_Lean_collectAxioms___redArg___lam__0(lean_object* v___x_963_, lean_object* v_constName_964_, lean_object* v_toPure_965_, lean_object* v_env_966_){
_start:
{
uint8_t v___x_967_; lean_object* v_privateEnv_968_; lean_object* v___x_969_; lean_object* v___x_970_; lean_object* v___x_971_; lean_object* v_s_972_; lean_object* v___x_973_; lean_object* v___x_974_; lean_object* v___x_975_; lean_object* v___x_976_; 
v___x_967_ = 0;
lean_inc_ref(v_env_966_);
v_privateEnv_968_ = l_Lean_Environment_setExporting(v_env_966_, v___x_967_);
v___x_969_ = l___private_Lean_Util_CollectAxioms_0__Lean_exportedAxiomsExt;
v___x_970_ = lean_box(2);
v___x_971_ = lean_obj_once(&l___private_Lean_Util_CollectAxioms_0__Lean_initFn___closed__4_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2_, &l___private_Lean_Util_CollectAxioms_0__Lean_initFn___closed__4_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__once, _init_l___private_Lean_Util_CollectAxioms_0__Lean_initFn___closed__4_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2_);
v_s_972_ = l_Lean_PersistentEnvExtension_getState___redArg(v___x_963_, v___x_969_, v_env_966_, v___x_970_, v___x_971_);
v___x_973_ = lean_alloc_closure((void*)(l___private_Lean_Util_CollectAxioms_0__Lean_ExportedAxiomsState_find_x3f___boxed), 3, 1);
lean_closure_set(v___x_973_, 0, v_s_972_);
v___x_974_ = lean_alloc_closure((void*)(l___private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collectAndGet___boxed), 4, 2);
lean_closure_set(v___x_974_, 0, v___x_973_);
lean_closure_set(v___x_974_, 1, v_constName_964_);
v___x_975_ = l___private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_runM___redArg(v_privateEnv_968_, v___x_974_);
v___x_976_ = lean_apply_2(v_toPure_965_, lean_box(0), v___x_975_);
return v___x_976_;
}
}
LEAN_EXPORT lean_object* l_Lean_collectAxioms___redArg(lean_object* v_inst_977_, lean_object* v_inst_978_, lean_object* v_constName_979_){
_start:
{
lean_object* v_toApplicative_980_; lean_object* v_toBind_981_; lean_object* v_getEnv_982_; lean_object* v_toPure_983_; lean_object* v___x_984_; lean_object* v___f_985_; lean_object* v___x_986_; 
v_toApplicative_980_ = lean_ctor_get(v_inst_977_, 0);
lean_inc_ref(v_toApplicative_980_);
v_toBind_981_ = lean_ctor_get(v_inst_977_, 1);
lean_inc(v_toBind_981_);
lean_dec_ref(v_inst_977_);
v_getEnv_982_ = lean_ctor_get(v_inst_978_, 0);
lean_inc(v_getEnv_982_);
lean_dec_ref(v_inst_978_);
v_toPure_983_ = lean_ctor_get(v_toApplicative_980_, 1);
lean_inc(v_toPure_983_);
lean_dec_ref(v_toApplicative_980_);
v___x_984_ = ((lean_object*)(l___private_Lean_Util_CollectAxioms_0__Lean_instInhabitedExportedAxiomsState));
v___f_985_ = lean_alloc_closure((void*)(l_Lean_collectAxioms___redArg___lam__0), 4, 3);
lean_closure_set(v___f_985_, 0, v___x_984_);
lean_closure_set(v___f_985_, 1, v_constName_979_);
lean_closure_set(v___f_985_, 2, v_toPure_983_);
v___x_986_ = lean_apply_4(v_toBind_981_, lean_box(0), lean_box(0), v_getEnv_982_, v___f_985_);
return v___x_986_;
}
}
LEAN_EXPORT lean_object* l_Lean_collectAxioms(lean_object* v_m_987_, lean_object* v_inst_988_, lean_object* v_inst_989_, lean_object* v_constName_990_){
_start:
{
lean_object* v___x_991_; 
v___x_991_ = l_Lean_collectAxioms___redArg(v_inst_988_, v_inst_989_, v_constName_990_);
return v___x_991_;
}
}
lean_object* runtime_initialize_Lean_MonadEnv(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Util_CollectAxioms(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_MonadEnv(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Util_CollectAxioms_0__Lean_initFn_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l___private_Lean_Util_CollectAxioms_0__Lean_exportedAxiomsExt = lean_io_result_get_value(res);
lean_mark_persistent(l___private_Lean_Util_CollectAxioms_0__Lean_exportedAxiomsExt);
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Util_CollectAxioms(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_MonadEnv(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Util_CollectAxioms(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_MonadEnv(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Util_CollectAxioms(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Util_CollectAxioms(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Util_CollectAxioms(builtin);
}
#ifdef __cplusplus
}
#endif

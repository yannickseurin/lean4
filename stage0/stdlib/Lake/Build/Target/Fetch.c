// Lean compiler output
// Module: Lake.Build.Target.Fetch
// Imports: import Lake.Build.Infos public import Lake.Build.Job.Monad import Lake.Config.Monad import all Lake.Build.Key
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
extern lean_object* l_Lake_instDataKindModule;
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* l_Lake_Workspace_findModule_x3f(lean_object*, lean_object*);
lean_object* l_Lake_BuildTrace_nil(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_task_pure(lean_object*);
lean_object* l_Lake_BuildKey_toString(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(lean_object*, uint8_t);
lean_object* lean_array_get_size(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
uint8_t l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(lean_object*, lean_object*);
extern lean_object* l_Lake_instDataKindPackage;
lean_object* l_Lake_Package_findTargetModule_x3f(lean_object*, lean_object*);
lean_object* l_Lean_Name_toString(lean_object*, uint8_t);
uint8_t l_Lean_Name_isAnonymous(lean_object*);
lean_object* l_Lake_FacetConfigMap_get_x3f(lean_object*, lean_object*);
lean_object* l_Lake_Job_bindM___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_instMonadBaseIO;
lean_object* l_Lake_PartialBuildKey_toString(lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lake_Package_findTargetDecl_x3f(lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lake_EStateT_instMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lake_EStateT_instMonad___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lake_EStateT_instMonad___redArg___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lake_EStateT_instMonad___redArg___lam__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lake_EStateT_instFunctor___redArg(lean_object*);
lean_object* l_Lake_EStateT_instPure___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instMonad___redArg(lean_object*);
lean_object* l_StateRefT_x27_instMonad___redArg(lean_object*);
lean_object* l_Lake_EquipT_instMonad___redArg(lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lake_Job_collectArray___redArg(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__2___boxed(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl___boxed(lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_get_x3f___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lake_Job_toOpaque___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "invalid target '"};
static const lean_object* l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__0 = (const lean_object*)&l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__0_value;
static const lean_string_object l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "': package '"};
static const lean_object* l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__1 = (const lean_object*)&l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__1_value;
static const lean_string_object l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "' not found in workspace"};
static const lean_object* l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__2 = (const lean_object*)&l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__2_value;
static const lean_closure_object l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__3 = (const lean_object*)&l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__3_value;
static const lean_closure_object l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__4 = (const lean_object*)&l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__4_value;
static const lean_closure_object l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__5 = (const lean_object*)&l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__5_value;
static const lean_closure_object l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__6 = (const lean_object*)&l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__6_value;
static const lean_closure_object l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__3, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__7 = (const lean_object*)&l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__7_value;
static const lean_closure_object l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__4___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__8 = (const lean_object*)&l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__8_value;
static const lean_closure_object l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__5___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__9 = (const lean_object*)&l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__9_value;
static const lean_closure_object l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__6, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__10 = (const lean_object*)&l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__10_value;
static const lean_ctor_object l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__4_value),((lean_object*)&l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__5_value)}};
static const lean_object* l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__11 = (const lean_object*)&l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__11_value;
static const lean_ctor_object l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__11_value),((lean_object*)&l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__6_value),((lean_object*)&l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__7_value),((lean_object*)&l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__8_value),((lean_object*)&l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__9_value)}};
static const lean_object* l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__12 = (const lean_object*)&l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__12_value;
static const lean_ctor_object l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__12_value),((lean_object*)&l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__10_value)}};
static const lean_object* l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__13 = (const lean_object*)&l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__13_value;
static const lean_ctor_object l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__14 = (const lean_object*)&l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__14_value;
LEAN_EXPORT lean_object* l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_get_x3f___at___00__private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_get_x3f___at___00__private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux___closed__0 = (const lean_object*)&l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux___closed__0_value;
static const lean_string_object l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux___closed__1 = (const lean_object*)&l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux___closed__1_value;
static const lean_string_object l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "<nil>"};
static const lean_object* l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux___closed__2 = (const lean_object*)&l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux___closed__2_value;
static lean_once_cell_t l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux___closed__3;
static lean_once_cell_t l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux___closed__4;
static const lean_string_object l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "': module '"};
static const lean_object* l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux___closed__5 = (const lean_object*)&l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux___closed__5_value;
static const lean_string_object l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "': module target '"};
static const lean_object* l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux___closed__6 = (const lean_object*)&l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux___closed__6_value;
static const lean_string_object l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "' not found in package '"};
static const lean_object* l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux___closed__7 = (const lean_object*)&l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux___closed__7_value;
static const lean_string_object l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "'"};
static const lean_object* l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux___closed__8 = (const lean_object*)&l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux___closed__8_value;
static const lean_string_object l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "default"};
static const lean_object* l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux___closed__9 = (const lean_object*)&l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux___closed__9_value;
static const lean_string_object l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "': target not found in package '"};
static const lean_object* l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux___closed__10 = (const lean_object*)&l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux___closed__10_value;
static const lean_string_object l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "': unknown facet '"};
static const lean_object* l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux___closed__11 = (const lean_object*)&l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux___closed__11_value;
static const lean_ctor_object l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux___closed__9_value),LEAN_SCALAR_PTR_LITERAL(29, 214, 131, 210, 10, 90, 37, 134)}};
static const lean_object* l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux___closed__12 = (const lean_object*)&l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux___closed__12_value;
static const lean_string_object l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "': targets of opaque data kinds do not support facets"};
static const lean_object* l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux___closed__13 = (const lean_object*)&l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux___closed__13_value;
LEAN_EXPORT lean_object* l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_get_x3f___at___00__private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_get_x3f___at___00__private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_PartialBuildKey_fetchInCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_PartialBuildKey_fetchInCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_PartialBuildKey_fetchIn(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_PartialBuildKey_fetchIn___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Target_Fetch_0__Lake_BuildKey_fetchCore___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Target_Fetch_0__Lake_BuildKey_fetchCore___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Target_Fetch_0__Lake_BuildKey_fetchCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Target_Fetch_0__Lake_BuildKey_fetchCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuildKey_fetch___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuildKey_fetch___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuildKey_fetch(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuildKey_fetch___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lake_Target_fetchIn___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "type mismatch in target '"};
static const lean_object* l_Lake_Target_fetchIn___redArg___closed__0 = (const lean_object*)&l_Lake_Target_fetchIn___redArg___closed__0_value;
static const lean_string_object l_Lake_Target_fetchIn___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "': expected '"};
static const lean_object* l_Lake_Target_fetchIn___redArg___closed__1 = (const lean_object*)&l_Lake_Target_fetchIn___redArg___closed__1_value;
static const lean_string_object l_Lake_Target_fetchIn___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "', got "};
static const lean_object* l_Lake_Target_fetchIn___redArg___closed__2 = (const lean_object*)&l_Lake_Target_fetchIn___redArg___closed__2_value;
static const lean_string_object l_Lake_Target_fetchIn___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "unknown"};
static const lean_object* l_Lake_Target_fetchIn___redArg___closed__3 = (const lean_object*)&l_Lake_Target_fetchIn___redArg___closed__3_value;
LEAN_EXPORT lean_object* l_Lake_Target_fetchIn___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Target_fetchIn___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Target_fetchIn(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Target_fetchIn___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_TargetArray_fetchIn___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_TargetArray_fetchIn___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_TargetArray_fetchIn___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_TargetArray_fetchIn___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_TargetArray_fetchIn(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_TargetArray_fetchIn___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___lam__0(lean_object* v_name_1_, lean_object* v___x_2_, lean_object* v___x_3_, lean_object* v_a_4_, lean_object* v_x_5_, lean_object* v___y_6_){
_start:
{
lean_object* v_baseName_7_; uint8_t v___x_8_; 
v_baseName_7_ = lean_ctor_get(v_a_4_, 1);
v___x_8_ = lean_name_eq(v_baseName_7_, v_name_1_);
if (v___x_8_ == 0)
{
lean_object* v___x_9_; 
lean_dec_ref(v_a_4_);
v___x_9_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_9_, 0, v___x_2_);
return v___x_9_;
}
else
{
lean_object* v___x_10_; lean_object* v___x_11_; lean_object* v___x_12_; lean_object* v___x_13_; 
lean_dec_ref(v___x_2_);
v___x_10_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_10_, 0, v_a_4_);
v___x_11_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_11_, 0, v___x_10_);
v___x_12_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_12_, 0, v___x_11_);
lean_ctor_set(v___x_12_, 1, v___x_3_);
v___x_13_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_13_, 0, v___x_12_);
return v___x_13_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___lam__0___boxed(lean_object* v_name_14_, lean_object* v___x_15_, lean_object* v___x_16_, lean_object* v_a_17_, lean_object* v_x_18_, lean_object* v___y_19_){
_start:
{
lean_object* v_res_20_; 
v_res_20_ = l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___lam__0(v_name_14_, v___x_15_, v___x_16_, v_a_17_, v_x_18_, v___y_19_);
lean_dec_ref(v___y_19_);
lean_dec(v_name_14_);
return v_res_20_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg(lean_object* v_defaultPkg_47_, lean_object* v_root_48_, lean_object* v_name_49_, lean_object* v_a_50_, lean_object* v_a_51_){
_start:
{
lean_object* v_a_54_; 
switch(lean_obj_tag(v_name_49_))
{
case 0:
{
lean_object* v___x_70_; 
lean_dec_ref(v_root_48_);
v___x_70_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_70_, 0, v_defaultPkg_47_);
lean_ctor_set(v___x_70_, 1, v_a_51_);
return v___x_70_;
}
case 2:
{
lean_object* v_toContext_71_; lean_object* v___x_72_; lean_object* v___x_73_; lean_object* v___x_74_; lean_object* v___x_75_; lean_object* v___x_76_; lean_object* v___x_77_; lean_object* v___x_78_; lean_object* v___x_79_; lean_object* v___x_80_; lean_object* v___x_81_; lean_object* v___x_82_; lean_object* v___x_83_; lean_object* v___x_84_; lean_object* v___x_85_; lean_object* v___x_86_; lean_object* v_packageMap_87_; lean_object* v___x_88_; lean_object* v___x_89_; 
lean_dec_ref(v_defaultPkg_47_);
v_toContext_71_ = lean_ctor_get(v_a_50_, 1);
v___x_72_ = l_unsafeCast___redArg(v_toContext_71_);
v___x_73_ = l_unsafeCast___redArg(v___x_72_);
lean_dec(v___x_72_);
v___x_74_ = l_unsafeCast___redArg(v___x_73_);
lean_dec(v___x_73_);
v___x_75_ = l_unsafeCast___redArg(v___x_74_);
lean_dec(v___x_74_);
v___x_76_ = l_unsafeCast___redArg(v___x_75_);
lean_dec(v___x_75_);
v___x_77_ = l_unsafeCast___redArg(v___x_76_);
lean_dec(v___x_76_);
v___x_78_ = l_unsafeCast___redArg(v___x_77_);
lean_dec(v___x_77_);
v___x_79_ = l_unsafeCast___redArg(v___x_78_);
lean_dec(v___x_78_);
v___x_80_ = l_unsafeCast___redArg(v___x_79_);
lean_dec(v___x_79_);
v___x_81_ = l_unsafeCast___redArg(v___x_80_);
lean_dec(v___x_80_);
v___x_82_ = l_unsafeCast___redArg(v___x_81_);
lean_dec(v___x_81_);
v___x_83_ = l_unsafeCast___redArg(v___x_82_);
lean_dec(v___x_82_);
v___x_84_ = l_unsafeCast___redArg(v___x_83_);
lean_dec(v___x_83_);
v___x_85_ = l_unsafeCast___redArg(v___x_84_);
lean_dec(v___x_84_);
v___x_86_ = l_unsafeCast___redArg(v___x_85_);
lean_dec(v___x_85_);
v_packageMap_87_ = lean_ctor_get(v___x_86_, 5);
lean_inc(v_packageMap_87_);
lean_dec(v___x_86_);
v___x_88_ = ((lean_object*)(l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__3));
lean_inc_ref(v_name_49_);
v___x_89_ = l_Std_DTreeMap_Internal_Impl_get_x3f___redArg(v___x_88_, v_packageMap_87_, v_name_49_);
if (lean_obj_tag(v___x_89_) == 1)
{
lean_object* v_val_90_; lean_object* v___x_91_; 
lean_dec_ref_known(v_name_49_, 2);
lean_dec_ref(v_root_48_);
v_val_90_ = lean_ctor_get(v___x_89_, 0);
lean_inc(v_val_90_);
lean_dec_ref_known(v___x_89_, 1);
v___x_91_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_91_, 0, v_val_90_);
lean_ctor_set(v___x_91_, 1, v_a_51_);
return v___x_91_;
}
else
{
lean_object* v___x_92_; lean_object* v___x_93_; lean_object* v___x_94_; lean_object* v___x_95_; lean_object* v___x_96_; uint8_t v___x_97_; lean_object* v___x_98_; lean_object* v___x_99_; lean_object* v___x_100_; lean_object* v___x_101_; uint8_t v___x_102_; lean_object* v___x_103_; lean_object* v___x_104_; lean_object* v___x_105_; lean_object* v___x_106_; 
lean_dec(v___x_89_);
v___x_92_ = ((lean_object*)(l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__0));
v___x_93_ = l_Lake_PartialBuildKey_toString(v_root_48_);
v___x_94_ = lean_string_append(v___x_92_, v___x_93_);
lean_dec_ref(v___x_93_);
v___x_95_ = ((lean_object*)(l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__1));
v___x_96_ = lean_string_append(v___x_94_, v___x_95_);
v___x_97_ = 1;
v___x_98_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_name_49_, v___x_97_);
v___x_99_ = lean_string_append(v___x_96_, v___x_98_);
lean_dec_ref(v___x_98_);
v___x_100_ = ((lean_object*)(l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__2));
v___x_101_ = lean_string_append(v___x_99_, v___x_100_);
v___x_102_ = 3;
v___x_103_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_103_, 0, v___x_101_);
lean_ctor_set_uint8(v___x_103_, sizeof(void*)*1, v___x_102_);
v___x_104_ = lean_array_get_size(v_a_51_);
v___x_105_ = lean_array_push(v_a_51_, v___x_103_);
v___x_106_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_106_, 0, v___x_104_);
lean_ctor_set(v___x_106_, 1, v___x_105_);
return v___x_106_;
}
}
default: 
{
lean_object* v_toContext_107_; lean_object* v___x_108_; lean_object* v___x_109_; lean_object* v___x_110_; lean_object* v___x_111_; lean_object* v___x_112_; lean_object* v___x_113_; lean_object* v___x_114_; lean_object* v___x_115_; lean_object* v___x_116_; lean_object* v___x_117_; lean_object* v___x_118_; lean_object* v___x_119_; lean_object* v___x_120_; lean_object* v___x_121_; lean_object* v___x_122_; lean_object* v_packages_123_; lean_object* v___x_124_; lean_object* v___x_125_; lean_object* v___x_126_; lean_object* v___f_127_; size_t v_sz_128_; size_t v___x_129_; lean_object* v___x_130_; lean_object* v_fst_131_; lean_object* v___x_133_; uint8_t v_isShared_134_; uint8_t v_isSharedCheck_140_; 
lean_dec_ref(v_defaultPkg_47_);
v_toContext_107_ = lean_ctor_get(v_a_50_, 1);
v___x_108_ = l_unsafeCast___redArg(v_toContext_107_);
v___x_109_ = l_unsafeCast___redArg(v___x_108_);
lean_dec(v___x_108_);
v___x_110_ = l_unsafeCast___redArg(v___x_109_);
lean_dec(v___x_109_);
v___x_111_ = l_unsafeCast___redArg(v___x_110_);
lean_dec(v___x_110_);
v___x_112_ = l_unsafeCast___redArg(v___x_111_);
lean_dec(v___x_111_);
v___x_113_ = l_unsafeCast___redArg(v___x_112_);
lean_dec(v___x_112_);
v___x_114_ = l_unsafeCast___redArg(v___x_113_);
lean_dec(v___x_113_);
v___x_115_ = l_unsafeCast___redArg(v___x_114_);
lean_dec(v___x_114_);
v___x_116_ = l_unsafeCast___redArg(v___x_115_);
lean_dec(v___x_115_);
v___x_117_ = l_unsafeCast___redArg(v___x_116_);
lean_dec(v___x_116_);
v___x_118_ = l_unsafeCast___redArg(v___x_117_);
lean_dec(v___x_117_);
v___x_119_ = l_unsafeCast___redArg(v___x_118_);
lean_dec(v___x_118_);
v___x_120_ = l_unsafeCast___redArg(v___x_119_);
lean_dec(v___x_119_);
v___x_121_ = l_unsafeCast___redArg(v___x_120_);
lean_dec(v___x_120_);
v___x_122_ = l_unsafeCast___redArg(v___x_121_);
lean_dec(v___x_121_);
v_packages_123_ = lean_ctor_get(v___x_122_, 4);
lean_inc_ref(v_packages_123_);
lean_dec(v___x_122_);
v___x_124_ = ((lean_object*)(l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__13));
v___x_125_ = lean_box(0);
v___x_126_ = ((lean_object*)(l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__14));
lean_inc(v_name_49_);
v___f_127_ = lean_alloc_closure((void*)(l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___lam__0___boxed), 6, 3);
lean_closure_set(v___f_127_, 0, v_name_49_);
lean_closure_set(v___f_127_, 1, v___x_126_);
lean_closure_set(v___f_127_, 2, v___x_125_);
v_sz_128_ = lean_array_size(v_packages_123_);
v___x_129_ = ((size_t)0ULL);
v___x_130_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_box(0), lean_box(0), lean_box(0), v___x_124_, v_packages_123_, v___f_127_, v_sz_128_, v___x_129_, v___x_126_);
v_fst_131_ = lean_ctor_get(v___x_130_, 0);
v_isSharedCheck_140_ = !lean_is_exclusive(v___x_130_);
if (v_isSharedCheck_140_ == 0)
{
lean_object* v_unused_141_; 
v_unused_141_ = lean_ctor_get(v___x_130_, 1);
lean_dec(v_unused_141_);
v___x_133_ = v___x_130_;
v_isShared_134_ = v_isSharedCheck_140_;
goto v_resetjp_132_;
}
else
{
lean_inc(v_fst_131_);
lean_dec(v___x_130_);
v___x_133_ = lean_box(0);
v_isShared_134_ = v_isSharedCheck_140_;
goto v_resetjp_132_;
}
v_resetjp_132_:
{
if (lean_obj_tag(v_fst_131_) == 0)
{
lean_del_object(v___x_133_);
v_a_54_ = v_a_51_;
goto v___jp_53_;
}
else
{
lean_object* v_val_135_; 
v_val_135_ = lean_ctor_get(v_fst_131_, 0);
lean_inc(v_val_135_);
lean_dec_ref_known(v_fst_131_, 1);
if (lean_obj_tag(v_val_135_) == 1)
{
lean_object* v_val_136_; lean_object* v___x_138_; 
lean_dec(v_name_49_);
lean_dec_ref(v_root_48_);
v_val_136_ = lean_ctor_get(v_val_135_, 0);
lean_inc(v_val_136_);
lean_dec_ref_known(v_val_135_, 1);
if (v_isShared_134_ == 0)
{
lean_ctor_set(v___x_133_, 1, v_a_51_);
lean_ctor_set(v___x_133_, 0, v_val_136_);
v___x_138_ = v___x_133_;
goto v_reusejp_137_;
}
else
{
lean_object* v_reuseFailAlloc_139_; 
v_reuseFailAlloc_139_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_139_, 0, v_val_136_);
lean_ctor_set(v_reuseFailAlloc_139_, 1, v_a_51_);
v___x_138_ = v_reuseFailAlloc_139_;
goto v_reusejp_137_;
}
v_reusejp_137_:
{
return v___x_138_;
}
}
else
{
lean_dec(v_val_135_);
lean_del_object(v___x_133_);
v_a_54_ = v_a_51_;
goto v___jp_53_;
}
}
}
}
}
v___jp_53_:
{
lean_object* v___x_55_; lean_object* v___x_56_; lean_object* v___x_57_; lean_object* v___x_58_; lean_object* v___x_59_; uint8_t v___x_60_; lean_object* v___x_61_; lean_object* v___x_62_; lean_object* v___x_63_; lean_object* v___x_64_; uint8_t v___x_65_; lean_object* v___x_66_; lean_object* v___x_67_; lean_object* v___x_68_; lean_object* v___x_69_; 
v___x_55_ = ((lean_object*)(l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__0));
v___x_56_ = l_Lake_PartialBuildKey_toString(v_root_48_);
v___x_57_ = lean_string_append(v___x_55_, v___x_56_);
lean_dec_ref(v___x_56_);
v___x_58_ = ((lean_object*)(l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__1));
v___x_59_ = lean_string_append(v___x_57_, v___x_58_);
v___x_60_ = 1;
v___x_61_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_name_49_, v___x_60_);
v___x_62_ = lean_string_append(v___x_59_, v___x_61_);
lean_dec_ref(v___x_61_);
v___x_63_ = ((lean_object*)(l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__2));
v___x_64_ = lean_string_append(v___x_62_, v___x_63_);
v___x_65_ = 3;
v___x_66_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_66_, 0, v___x_64_);
lean_ctor_set_uint8(v___x_66_, sizeof(void*)*1, v___x_65_);
v___x_67_ = lean_array_get_size(v_a_54_);
v___x_68_ = lean_array_push(v_a_54_, v___x_66_);
v___x_69_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_69_, 0, v___x_67_);
lean_ctor_set(v___x_69_, 1, v___x_68_);
return v___x_69_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___boxed(lean_object* v_defaultPkg_142_, lean_object* v_root_143_, lean_object* v_name_144_, lean_object* v_a_145_, lean_object* v_a_146_, lean_object* v_a_147_){
_start:
{
lean_object* v_res_148_; 
v_res_148_ = l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg(v_defaultPkg_142_, v_root_143_, v_name_144_, v_a_145_, v_a_146_);
lean_dec_ref(v_a_145_);
return v_res_148_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD(lean_object* v_defaultPkg_149_, lean_object* v_root_150_, lean_object* v_name_151_, lean_object* v_a_152_, lean_object* v_a_153_, lean_object* v_a_154_, lean_object* v_a_155_, lean_object* v_a_156_, lean_object* v_a_157_){
_start:
{
lean_object* v_a_160_; 
switch(lean_obj_tag(v_name_151_))
{
case 0:
{
lean_object* v___x_176_; 
lean_dec_ref(v_root_150_);
v___x_176_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_176_, 0, v_defaultPkg_149_);
lean_ctor_set(v___x_176_, 1, v_a_157_);
return v___x_176_;
}
case 2:
{
lean_object* v_toContext_177_; lean_object* v___x_178_; lean_object* v___x_179_; lean_object* v___x_180_; lean_object* v___x_181_; lean_object* v___x_182_; lean_object* v___x_183_; lean_object* v___x_184_; lean_object* v___x_185_; lean_object* v___x_186_; lean_object* v___x_187_; lean_object* v___x_188_; lean_object* v___x_189_; lean_object* v___x_190_; lean_object* v___x_191_; lean_object* v___x_192_; lean_object* v_packageMap_193_; lean_object* v___x_194_; lean_object* v___x_195_; 
lean_dec_ref(v_defaultPkg_149_);
v_toContext_177_ = lean_ctor_get(v_a_156_, 1);
v___x_178_ = l_unsafeCast___redArg(v_toContext_177_);
v___x_179_ = l_unsafeCast___redArg(v___x_178_);
lean_dec(v___x_178_);
v___x_180_ = l_unsafeCast___redArg(v___x_179_);
lean_dec(v___x_179_);
v___x_181_ = l_unsafeCast___redArg(v___x_180_);
lean_dec(v___x_180_);
v___x_182_ = l_unsafeCast___redArg(v___x_181_);
lean_dec(v___x_181_);
v___x_183_ = l_unsafeCast___redArg(v___x_182_);
lean_dec(v___x_182_);
v___x_184_ = l_unsafeCast___redArg(v___x_183_);
lean_dec(v___x_183_);
v___x_185_ = l_unsafeCast___redArg(v___x_184_);
lean_dec(v___x_184_);
v___x_186_ = l_unsafeCast___redArg(v___x_185_);
lean_dec(v___x_185_);
v___x_187_ = l_unsafeCast___redArg(v___x_186_);
lean_dec(v___x_186_);
v___x_188_ = l_unsafeCast___redArg(v___x_187_);
lean_dec(v___x_187_);
v___x_189_ = l_unsafeCast___redArg(v___x_188_);
lean_dec(v___x_188_);
v___x_190_ = l_unsafeCast___redArg(v___x_189_);
lean_dec(v___x_189_);
v___x_191_ = l_unsafeCast___redArg(v___x_190_);
lean_dec(v___x_190_);
v___x_192_ = l_unsafeCast___redArg(v___x_191_);
lean_dec(v___x_191_);
v_packageMap_193_ = lean_ctor_get(v___x_192_, 5);
lean_inc(v_packageMap_193_);
lean_dec(v___x_192_);
v___x_194_ = ((lean_object*)(l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__3));
lean_inc_ref(v_name_151_);
v___x_195_ = l_Std_DTreeMap_Internal_Impl_get_x3f___redArg(v___x_194_, v_packageMap_193_, v_name_151_);
if (lean_obj_tag(v___x_195_) == 1)
{
lean_object* v_val_196_; lean_object* v___x_197_; 
lean_dec_ref_known(v_name_151_, 2);
lean_dec_ref(v_root_150_);
v_val_196_ = lean_ctor_get(v___x_195_, 0);
lean_inc(v_val_196_);
lean_dec_ref_known(v___x_195_, 1);
v___x_197_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_197_, 0, v_val_196_);
lean_ctor_set(v___x_197_, 1, v_a_157_);
return v___x_197_;
}
else
{
lean_object* v___x_198_; lean_object* v___x_199_; lean_object* v___x_200_; lean_object* v___x_201_; lean_object* v___x_202_; uint8_t v___x_203_; lean_object* v___x_204_; lean_object* v___x_205_; lean_object* v___x_206_; lean_object* v___x_207_; uint8_t v___x_208_; lean_object* v___x_209_; lean_object* v___x_210_; lean_object* v___x_211_; lean_object* v___x_212_; 
lean_dec(v___x_195_);
v___x_198_ = ((lean_object*)(l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__0));
v___x_199_ = l_Lake_PartialBuildKey_toString(v_root_150_);
v___x_200_ = lean_string_append(v___x_198_, v___x_199_);
lean_dec_ref(v___x_199_);
v___x_201_ = ((lean_object*)(l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__1));
v___x_202_ = lean_string_append(v___x_200_, v___x_201_);
v___x_203_ = 1;
v___x_204_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_name_151_, v___x_203_);
v___x_205_ = lean_string_append(v___x_202_, v___x_204_);
lean_dec_ref(v___x_204_);
v___x_206_ = ((lean_object*)(l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__2));
v___x_207_ = lean_string_append(v___x_205_, v___x_206_);
v___x_208_ = 3;
v___x_209_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_209_, 0, v___x_207_);
lean_ctor_set_uint8(v___x_209_, sizeof(void*)*1, v___x_208_);
v___x_210_ = lean_array_get_size(v_a_157_);
v___x_211_ = lean_array_push(v_a_157_, v___x_209_);
v___x_212_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_212_, 0, v___x_210_);
lean_ctor_set(v___x_212_, 1, v___x_211_);
return v___x_212_;
}
}
default: 
{
lean_object* v_toContext_213_; lean_object* v___x_214_; lean_object* v___x_215_; lean_object* v___x_216_; lean_object* v___x_217_; lean_object* v___x_218_; lean_object* v___x_219_; lean_object* v___x_220_; lean_object* v___x_221_; lean_object* v___x_222_; lean_object* v___x_223_; lean_object* v___x_224_; lean_object* v___x_225_; lean_object* v___x_226_; lean_object* v___x_227_; lean_object* v___x_228_; lean_object* v_packages_229_; lean_object* v___x_230_; lean_object* v___x_231_; lean_object* v___x_232_; lean_object* v___f_233_; size_t v_sz_234_; size_t v___x_235_; lean_object* v___x_236_; lean_object* v_fst_237_; lean_object* v___x_239_; uint8_t v_isShared_240_; uint8_t v_isSharedCheck_246_; 
lean_dec_ref(v_defaultPkg_149_);
v_toContext_213_ = lean_ctor_get(v_a_156_, 1);
v___x_214_ = l_unsafeCast___redArg(v_toContext_213_);
v___x_215_ = l_unsafeCast___redArg(v___x_214_);
lean_dec(v___x_214_);
v___x_216_ = l_unsafeCast___redArg(v___x_215_);
lean_dec(v___x_215_);
v___x_217_ = l_unsafeCast___redArg(v___x_216_);
lean_dec(v___x_216_);
v___x_218_ = l_unsafeCast___redArg(v___x_217_);
lean_dec(v___x_217_);
v___x_219_ = l_unsafeCast___redArg(v___x_218_);
lean_dec(v___x_218_);
v___x_220_ = l_unsafeCast___redArg(v___x_219_);
lean_dec(v___x_219_);
v___x_221_ = l_unsafeCast___redArg(v___x_220_);
lean_dec(v___x_220_);
v___x_222_ = l_unsafeCast___redArg(v___x_221_);
lean_dec(v___x_221_);
v___x_223_ = l_unsafeCast___redArg(v___x_222_);
lean_dec(v___x_222_);
v___x_224_ = l_unsafeCast___redArg(v___x_223_);
lean_dec(v___x_223_);
v___x_225_ = l_unsafeCast___redArg(v___x_224_);
lean_dec(v___x_224_);
v___x_226_ = l_unsafeCast___redArg(v___x_225_);
lean_dec(v___x_225_);
v___x_227_ = l_unsafeCast___redArg(v___x_226_);
lean_dec(v___x_226_);
v___x_228_ = l_unsafeCast___redArg(v___x_227_);
lean_dec(v___x_227_);
v_packages_229_ = lean_ctor_get(v___x_228_, 4);
lean_inc_ref(v_packages_229_);
lean_dec(v___x_228_);
v___x_230_ = ((lean_object*)(l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__13));
v___x_231_ = lean_box(0);
v___x_232_ = ((lean_object*)(l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__14));
lean_inc(v_name_151_);
v___f_233_ = lean_alloc_closure((void*)(l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___lam__0___boxed), 6, 3);
lean_closure_set(v___f_233_, 0, v_name_151_);
lean_closure_set(v___f_233_, 1, v___x_232_);
lean_closure_set(v___f_233_, 2, v___x_231_);
v_sz_234_ = lean_array_size(v_packages_229_);
v___x_235_ = ((size_t)0ULL);
v___x_236_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_box(0), lean_box(0), lean_box(0), v___x_230_, v_packages_229_, v___f_233_, v_sz_234_, v___x_235_, v___x_232_);
v_fst_237_ = lean_ctor_get(v___x_236_, 0);
v_isSharedCheck_246_ = !lean_is_exclusive(v___x_236_);
if (v_isSharedCheck_246_ == 0)
{
lean_object* v_unused_247_; 
v_unused_247_ = lean_ctor_get(v___x_236_, 1);
lean_dec(v_unused_247_);
v___x_239_ = v___x_236_;
v_isShared_240_ = v_isSharedCheck_246_;
goto v_resetjp_238_;
}
else
{
lean_inc(v_fst_237_);
lean_dec(v___x_236_);
v___x_239_ = lean_box(0);
v_isShared_240_ = v_isSharedCheck_246_;
goto v_resetjp_238_;
}
v_resetjp_238_:
{
if (lean_obj_tag(v_fst_237_) == 0)
{
lean_del_object(v___x_239_);
v_a_160_ = v_a_157_;
goto v___jp_159_;
}
else
{
lean_object* v_val_241_; 
v_val_241_ = lean_ctor_get(v_fst_237_, 0);
lean_inc(v_val_241_);
lean_dec_ref_known(v_fst_237_, 1);
if (lean_obj_tag(v_val_241_) == 1)
{
lean_object* v_val_242_; lean_object* v___x_244_; 
lean_dec(v_name_151_);
lean_dec_ref(v_root_150_);
v_val_242_ = lean_ctor_get(v_val_241_, 0);
lean_inc(v_val_242_);
lean_dec_ref_known(v_val_241_, 1);
if (v_isShared_240_ == 0)
{
lean_ctor_set(v___x_239_, 1, v_a_157_);
lean_ctor_set(v___x_239_, 0, v_val_242_);
v___x_244_ = v___x_239_;
goto v_reusejp_243_;
}
else
{
lean_object* v_reuseFailAlloc_245_; 
v_reuseFailAlloc_245_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_245_, 0, v_val_242_);
lean_ctor_set(v_reuseFailAlloc_245_, 1, v_a_157_);
v___x_244_ = v_reuseFailAlloc_245_;
goto v_reusejp_243_;
}
v_reusejp_243_:
{
return v___x_244_;
}
}
else
{
lean_dec(v_val_241_);
lean_del_object(v___x_239_);
v_a_160_ = v_a_157_;
goto v___jp_159_;
}
}
}
}
}
v___jp_159_:
{
lean_object* v___x_161_; lean_object* v___x_162_; lean_object* v___x_163_; lean_object* v___x_164_; lean_object* v___x_165_; uint8_t v___x_166_; lean_object* v___x_167_; lean_object* v___x_168_; lean_object* v___x_169_; lean_object* v___x_170_; uint8_t v___x_171_; lean_object* v___x_172_; lean_object* v___x_173_; lean_object* v___x_174_; lean_object* v___x_175_; 
v___x_161_ = ((lean_object*)(l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__0));
v___x_162_ = l_Lake_PartialBuildKey_toString(v_root_150_);
v___x_163_ = lean_string_append(v___x_161_, v___x_162_);
lean_dec_ref(v___x_162_);
v___x_164_ = ((lean_object*)(l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__1));
v___x_165_ = lean_string_append(v___x_163_, v___x_164_);
v___x_166_ = 1;
v___x_167_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_name_151_, v___x_166_);
v___x_168_ = lean_string_append(v___x_165_, v___x_167_);
lean_dec_ref(v___x_167_);
v___x_169_ = ((lean_object*)(l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__2));
v___x_170_ = lean_string_append(v___x_168_, v___x_169_);
v___x_171_ = 3;
v___x_172_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_172_, 0, v___x_170_);
lean_ctor_set_uint8(v___x_172_, sizeof(void*)*1, v___x_171_);
v___x_173_ = lean_array_get_size(v_a_160_);
v___x_174_ = lean_array_push(v_a_160_, v___x_172_);
v___x_175_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_175_, 0, v___x_173_);
lean_ctor_set(v___x_175_, 1, v___x_174_);
return v___x_175_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___boxed(lean_object* v_defaultPkg_248_, lean_object* v_root_249_, lean_object* v_name_250_, lean_object* v_a_251_, lean_object* v_a_252_, lean_object* v_a_253_, lean_object* v_a_254_, lean_object* v_a_255_, lean_object* v_a_256_, lean_object* v_a_257_){
_start:
{
lean_object* v_res_258_; 
v_res_258_ = l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD(v_defaultPkg_248_, v_root_249_, v_name_250_, v_a_251_, v_a_252_, v_a_253_, v_a_254_, v_a_255_, v_a_256_);
lean_dec_ref(v_a_255_);
lean_dec(v_a_254_);
lean_dec(v_a_253_);
lean_dec(v_a_252_);
lean_dec_ref(v_a_251_);
return v_res_258_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux___lam__0(lean_object* v_target_259_, lean_object* v_kind_260_, lean_object* v___x_261_, lean_object* v_data_262_, lean_object* v___y_263_, lean_object* v___y_264_, lean_object* v___y_265_, lean_object* v___y_266_, lean_object* v___y_267_, lean_object* v___y_268_){
_start:
{
lean_object* v_log_270_; uint8_t v_action_271_; uint8_t v_wantsRebuild_272_; lean_object* v_trace_273_; lean_object* v_buildTime_274_; lean_object* v___x_276_; uint8_t v_isShared_277_; uint8_t v_isSharedCheck_304_; 
v_log_270_ = lean_ctor_get(v___y_268_, 0);
v_action_271_ = lean_ctor_get_uint8(v___y_268_, sizeof(void*)*3);
v_wantsRebuild_272_ = lean_ctor_get_uint8(v___y_268_, sizeof(void*)*3 + 1);
v_trace_273_ = lean_ctor_get(v___y_268_, 1);
v_buildTime_274_ = lean_ctor_get(v___y_268_, 2);
v_isSharedCheck_304_ = !lean_is_exclusive(v___y_268_);
if (v_isSharedCheck_304_ == 0)
{
v___x_276_ = v___y_268_;
v_isShared_277_ = v_isSharedCheck_304_;
goto v_resetjp_275_;
}
else
{
lean_inc(v_buildTime_274_);
lean_inc(v_trace_273_);
lean_inc(v_log_270_);
lean_dec(v___y_268_);
v___x_276_ = lean_box(0);
v_isShared_277_ = v_isSharedCheck_304_;
goto v_resetjp_275_;
}
v_resetjp_275_:
{
lean_object* v___x_278_; lean_object* v___x_279_; 
v___x_278_ = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(v___x_278_, 0, v_target_259_);
lean_ctor_set(v___x_278_, 1, v_kind_260_);
lean_ctor_set(v___x_278_, 2, v_data_262_);
lean_ctor_set(v___x_278_, 3, v___x_261_);
lean_inc_ref(v___y_267_);
lean_inc(v___y_266_);
lean_inc(v___y_265_);
lean_inc(v___y_264_);
v___x_279_ = lean_apply_7(v___y_263_, v___x_278_, v___y_264_, v___y_265_, v___y_266_, v___y_267_, v_log_270_, lean_box(0));
if (lean_obj_tag(v___x_279_) == 0)
{
lean_object* v_a_280_; lean_object* v_a_281_; lean_object* v___x_283_; uint8_t v_isShared_284_; uint8_t v_isSharedCheck_291_; 
v_a_280_ = lean_ctor_get(v___x_279_, 0);
v_a_281_ = lean_ctor_get(v___x_279_, 1);
v_isSharedCheck_291_ = !lean_is_exclusive(v___x_279_);
if (v_isSharedCheck_291_ == 0)
{
v___x_283_ = v___x_279_;
v_isShared_284_ = v_isSharedCheck_291_;
goto v_resetjp_282_;
}
else
{
lean_inc(v_a_281_);
lean_inc(v_a_280_);
lean_dec(v___x_279_);
v___x_283_ = lean_box(0);
v_isShared_284_ = v_isSharedCheck_291_;
goto v_resetjp_282_;
}
v_resetjp_282_:
{
lean_object* v___x_286_; 
if (v_isShared_277_ == 0)
{
lean_ctor_set(v___x_276_, 0, v_a_281_);
v___x_286_ = v___x_276_;
goto v_reusejp_285_;
}
else
{
lean_object* v_reuseFailAlloc_290_; 
v_reuseFailAlloc_290_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_290_, 0, v_a_281_);
lean_ctor_set(v_reuseFailAlloc_290_, 1, v_trace_273_);
lean_ctor_set(v_reuseFailAlloc_290_, 2, v_buildTime_274_);
lean_ctor_set_uint8(v_reuseFailAlloc_290_, sizeof(void*)*3, v_action_271_);
lean_ctor_set_uint8(v_reuseFailAlloc_290_, sizeof(void*)*3 + 1, v_wantsRebuild_272_);
v___x_286_ = v_reuseFailAlloc_290_;
goto v_reusejp_285_;
}
v_reusejp_285_:
{
lean_object* v___x_288_; 
if (v_isShared_284_ == 0)
{
lean_ctor_set(v___x_283_, 1, v___x_286_);
v___x_288_ = v___x_283_;
goto v_reusejp_287_;
}
else
{
lean_object* v_reuseFailAlloc_289_; 
v_reuseFailAlloc_289_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_289_, 0, v_a_280_);
lean_ctor_set(v_reuseFailAlloc_289_, 1, v___x_286_);
v___x_288_ = v_reuseFailAlloc_289_;
goto v_reusejp_287_;
}
v_reusejp_287_:
{
return v___x_288_;
}
}
}
}
else
{
lean_object* v_a_292_; lean_object* v_a_293_; lean_object* v___x_295_; uint8_t v_isShared_296_; uint8_t v_isSharedCheck_303_; 
v_a_292_ = lean_ctor_get(v___x_279_, 0);
v_a_293_ = lean_ctor_get(v___x_279_, 1);
v_isSharedCheck_303_ = !lean_is_exclusive(v___x_279_);
if (v_isSharedCheck_303_ == 0)
{
v___x_295_ = v___x_279_;
v_isShared_296_ = v_isSharedCheck_303_;
goto v_resetjp_294_;
}
else
{
lean_inc(v_a_293_);
lean_inc(v_a_292_);
lean_dec(v___x_279_);
v___x_295_ = lean_box(0);
v_isShared_296_ = v_isSharedCheck_303_;
goto v_resetjp_294_;
}
v_resetjp_294_:
{
lean_object* v___x_298_; 
if (v_isShared_277_ == 0)
{
lean_ctor_set(v___x_276_, 0, v_a_293_);
v___x_298_ = v___x_276_;
goto v_reusejp_297_;
}
else
{
lean_object* v_reuseFailAlloc_302_; 
v_reuseFailAlloc_302_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_302_, 0, v_a_293_);
lean_ctor_set(v_reuseFailAlloc_302_, 1, v_trace_273_);
lean_ctor_set(v_reuseFailAlloc_302_, 2, v_buildTime_274_);
lean_ctor_set_uint8(v_reuseFailAlloc_302_, sizeof(void*)*3, v_action_271_);
lean_ctor_set_uint8(v_reuseFailAlloc_302_, sizeof(void*)*3 + 1, v_wantsRebuild_272_);
v___x_298_ = v_reuseFailAlloc_302_;
goto v_reusejp_297_;
}
v_reusejp_297_:
{
lean_object* v___x_300_; 
if (v_isShared_296_ == 0)
{
lean_ctor_set(v___x_295_, 1, v___x_298_);
v___x_300_ = v___x_295_;
goto v_reusejp_299_;
}
else
{
lean_object* v_reuseFailAlloc_301_; 
v_reuseFailAlloc_301_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_301_, 0, v_a_292_);
lean_ctor_set(v_reuseFailAlloc_301_, 1, v___x_298_);
v___x_300_ = v_reuseFailAlloc_301_;
goto v_reusejp_299_;
}
v_reusejp_299_:
{
return v___x_300_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux___lam__0___boxed(lean_object* v_target_305_, lean_object* v_kind_306_, lean_object* v___x_307_, lean_object* v_data_308_, lean_object* v___y_309_, lean_object* v___y_310_, lean_object* v___y_311_, lean_object* v___y_312_, lean_object* v___y_313_, lean_object* v___y_314_, lean_object* v___y_315_){
_start:
{
lean_object* v_res_316_; 
v_res_316_ = l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux___lam__0(v_target_305_, v_kind_306_, v___x_307_, v_data_308_, v___y_309_, v___y_310_, v___y_311_, v___y_312_, v___y_313_, v___y_314_);
lean_dec_ref(v___y_313_);
lean_dec(v___y_312_);
lean_dec(v___y_311_);
lean_dec(v___y_310_);
return v_res_316_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_get_x3f___at___00__private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_spec__0___redArg(lean_object* v_t_317_, lean_object* v_k_318_){
_start:
{
if (lean_obj_tag(v_t_317_) == 0)
{
lean_object* v_k_319_; lean_object* v_v_320_; lean_object* v_l_321_; lean_object* v_r_322_; uint8_t v___x_323_; 
v_k_319_ = lean_ctor_get(v_t_317_, 1);
v_v_320_ = lean_ctor_get(v_t_317_, 2);
v_l_321_ = lean_ctor_get(v_t_317_, 3);
v_r_322_ = lean_ctor_get(v_t_317_, 4);
v___x_323_ = l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(v_k_318_, v_k_319_);
switch(v___x_323_)
{
case 0:
{
v_t_317_ = v_l_321_;
goto _start;
}
case 1:
{
lean_object* v___x_325_; 
lean_inc(v_v_320_);
v___x_325_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_325_, 0, v_v_320_);
return v___x_325_;
}
default: 
{
v_t_317_ = v_r_322_;
goto _start;
}
}
}
else
{
lean_object* v___x_327_; 
v___x_327_ = lean_box(0);
return v___x_327_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_get_x3f___at___00__private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_spec__0___redArg___boxed(lean_object* v_t_328_, lean_object* v_k_329_){
_start:
{
lean_object* v_res_330_; 
v_res_330_ = l_Std_DTreeMap_Internal_Impl_get_x3f___at___00__private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_spec__0___redArg(v_t_328_, v_k_329_);
lean_dec(v_k_329_);
lean_dec(v_t_328_);
return v_res_330_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_spec__1(lean_object* v_package_331_, lean_object* v_as_332_, size_t v_sz_333_, size_t v_i_334_, lean_object* v_b_335_){
_start:
{
uint8_t v___x_336_; 
v___x_336_ = lean_usize_dec_lt(v_i_334_, v_sz_333_);
if (v___x_336_ == 0)
{
lean_inc_ref(v_b_335_);
return v_b_335_;
}
else
{
lean_object* v_a_337_; lean_object* v_baseName_338_; lean_object* v___x_339_; uint8_t v___x_340_; 
v_a_337_ = lean_array_uget_borrowed(v_as_332_, v_i_334_);
v_baseName_338_ = lean_ctor_get(v_a_337_, 1);
v___x_339_ = lean_box(0);
v___x_340_ = lean_name_eq(v_baseName_338_, v_package_331_);
if (v___x_340_ == 0)
{
lean_object* v___x_341_; size_t v___x_342_; size_t v___x_343_; 
v___x_341_ = ((lean_object*)(l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__14));
v___x_342_ = ((size_t)1ULL);
v___x_343_ = lean_usize_add(v_i_334_, v___x_342_);
v_i_334_ = v___x_343_;
v_b_335_ = v___x_341_;
goto _start;
}
else
{
lean_object* v___x_345_; lean_object* v___x_346_; lean_object* v___x_347_; 
lean_inc(v_a_337_);
v___x_345_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_345_, 0, v_a_337_);
v___x_346_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_346_, 0, v___x_345_);
v___x_347_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_347_, 0, v___x_346_);
lean_ctor_set(v___x_347_, 1, v___x_339_);
return v___x_347_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_spec__1___boxed(lean_object* v_package_348_, lean_object* v_as_349_, lean_object* v_sz_350_, lean_object* v_i_351_, lean_object* v_b_352_){
_start:
{
size_t v_sz_boxed_353_; size_t v_i_boxed_354_; lean_object* v_res_355_; 
v_sz_boxed_353_ = lean_unbox_usize(v_sz_350_);
lean_dec(v_sz_350_);
v_i_boxed_354_ = lean_unbox_usize(v_i_351_);
lean_dec(v_i_351_);
v_res_355_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_spec__1(v_package_348_, v_as_349_, v_sz_boxed_353_, v_i_boxed_354_, v_b_352_);
lean_dec_ref(v_b_352_);
lean_dec_ref(v_as_349_);
lean_dec(v_package_348_);
return v_res_355_;
}
}
static lean_object* _init_l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux___closed__3(void){
_start:
{
lean_object* v___x_360_; lean_object* v___x_361_; 
v___x_360_ = ((lean_object*)(l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux___closed__2));
v___x_361_ = l_Lake_BuildTrace_nil(v___x_360_);
return v___x_361_;
}
}
static lean_object* _init_l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux___closed__4(void){
_start:
{
lean_object* v___x_362_; lean_object* v___x_363_; uint8_t v___x_364_; uint8_t v___x_365_; lean_object* v___x_366_; lean_object* v___x_367_; 
v___x_362_ = lean_unsigned_to_nat(0u);
v___x_363_ = lean_obj_once(&l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux___closed__3, &l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux___closed__3_once, _init_l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux___closed__3);
v___x_364_ = 0;
v___x_365_ = 0;
v___x_366_ = ((lean_object*)(l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux___closed__0));
v___x_367_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_367_, 0, v___x_366_);
lean_ctor_set(v___x_367_, 1, v___x_363_);
lean_ctor_set(v___x_367_, 2, v___x_362_);
lean_ctor_set_uint8(v___x_367_, sizeof(void*)*3, v___x_365_);
lean_ctor_set_uint8(v___x_367_, sizeof(void*)*3 + 1, v___x_364_);
return v___x_367_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux(lean_object* v_defaultPkg_378_, lean_object* v_root_379_, lean_object* v_self_380_, uint8_t v_facetless_381_, lean_object* v_a_382_, lean_object* v_a_383_, lean_object* v_a_384_, lean_object* v_a_385_, lean_object* v_a_386_, lean_object* v_a_387_){
_start:
{
lean_object* v_a_390_; lean_object* v_a_391_; lean_object* v_a_394_; lean_object* v_a_395_; lean_object* v_a_398_; lean_object* v_a_399_; lean_object* v___x_401_; 
v___x_401_ = l_Lake_instDataKindModule;
switch(lean_obj_tag(v_self_380_))
{
case 0:
{
lean_object* v_module_402_; lean_object* v_toContext_403_; lean_object* v___x_404_; lean_object* v___x_405_; lean_object* v___x_406_; lean_object* v___x_407_; lean_object* v___x_408_; lean_object* v___x_409_; lean_object* v___x_410_; lean_object* v___x_411_; lean_object* v___x_412_; lean_object* v___x_413_; lean_object* v___x_414_; lean_object* v___x_415_; lean_object* v___x_416_; lean_object* v___x_417_; lean_object* v___x_418_; lean_object* v___x_419_; 
lean_dec_ref(v_a_382_);
lean_dec_ref(v_defaultPkg_378_);
v_module_402_ = lean_ctor_get(v_self_380_, 0);
lean_inc_n(v_module_402_, 2);
lean_dec_ref_known(v_self_380_, 1);
v_toContext_403_ = lean_ctor_get(v_a_386_, 1);
v___x_404_ = l_unsafeCast___redArg(v_toContext_403_);
v___x_405_ = l_unsafeCast___redArg(v___x_404_);
lean_dec(v___x_404_);
v___x_406_ = l_unsafeCast___redArg(v___x_405_);
lean_dec(v___x_405_);
v___x_407_ = l_unsafeCast___redArg(v___x_406_);
lean_dec(v___x_406_);
v___x_408_ = l_unsafeCast___redArg(v___x_407_);
lean_dec(v___x_407_);
v___x_409_ = l_unsafeCast___redArg(v___x_408_);
lean_dec(v___x_408_);
v___x_410_ = l_unsafeCast___redArg(v___x_409_);
lean_dec(v___x_409_);
v___x_411_ = l_unsafeCast___redArg(v___x_410_);
lean_dec(v___x_410_);
v___x_412_ = l_unsafeCast___redArg(v___x_411_);
lean_dec(v___x_411_);
v___x_413_ = l_unsafeCast___redArg(v___x_412_);
lean_dec(v___x_412_);
v___x_414_ = l_unsafeCast___redArg(v___x_413_);
lean_dec(v___x_413_);
v___x_415_ = l_unsafeCast___redArg(v___x_414_);
lean_dec(v___x_414_);
v___x_416_ = l_unsafeCast___redArg(v___x_415_);
lean_dec(v___x_415_);
v___x_417_ = l_unsafeCast___redArg(v___x_416_);
lean_dec(v___x_416_);
v___x_418_ = l_unsafeCast___redArg(v___x_417_);
lean_dec(v___x_417_);
v___x_419_ = l_Lake_Workspace_findModule_x3f(v_module_402_, v___x_418_);
lean_dec(v___x_418_);
if (lean_obj_tag(v___x_419_) == 1)
{
lean_object* v_val_420_; lean_object* v_lib_421_; lean_object* v_pkg_422_; lean_object* v_keyName_423_; lean_object* v___x_424_; lean_object* v___x_425_; uint8_t v___x_426_; lean_object* v___x_427_; lean_object* v___x_428_; lean_object* v___x_429_; lean_object* v___x_430_; lean_object* v___x_431_; lean_object* v___x_432_; 
lean_dec_ref(v_root_379_);
v_val_420_ = lean_ctor_get(v___x_419_, 0);
lean_inc(v_val_420_);
lean_dec_ref_known(v___x_419_, 1);
v_lib_421_ = lean_ctor_get(v_val_420_, 0);
v_pkg_422_ = lean_ctor_get(v_lib_421_, 0);
v_keyName_423_ = lean_ctor_get(v_pkg_422_, 2);
lean_inc(v_keyName_423_);
v___x_424_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_424_, 0, v_keyName_423_);
lean_ctor_set(v___x_424_, 1, v_module_402_);
v___x_425_ = ((lean_object*)(l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux___closed__1));
v___x_426_ = 0;
v___x_427_ = lean_obj_once(&l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux___closed__4, &l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux___closed__4_once, _init_l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux___closed__4);
v___x_428_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_428_, 0, v_val_420_);
lean_ctor_set(v___x_428_, 1, v___x_427_);
v___x_429_ = lean_task_pure(v___x_428_);
v___x_430_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_430_, 0, v___x_429_);
lean_ctor_set(v___x_430_, 1, v___x_401_);
lean_ctor_set(v___x_430_, 2, v___x_425_);
lean_ctor_set_uint8(v___x_430_, sizeof(void*)*3, v___x_426_);
v___x_431_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_431_, 0, v___x_424_);
lean_ctor_set(v___x_431_, 1, v___x_430_);
v___x_432_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_432_, 0, v___x_431_);
lean_ctor_set(v___x_432_, 1, v_a_387_);
return v___x_432_;
}
else
{
lean_object* v___x_433_; lean_object* v___x_434_; lean_object* v___x_435_; lean_object* v___x_436_; lean_object* v___x_437_; uint8_t v___x_438_; lean_object* v___x_439_; lean_object* v___x_440_; lean_object* v___x_441_; lean_object* v___x_442_; uint8_t v___x_443_; lean_object* v___x_444_; lean_object* v___x_445_; lean_object* v___x_446_; lean_object* v___x_447_; 
lean_dec(v___x_419_);
v___x_433_ = ((lean_object*)(l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__0));
v___x_434_ = l_Lake_PartialBuildKey_toString(v_root_379_);
v___x_435_ = lean_string_append(v___x_433_, v___x_434_);
lean_dec_ref(v___x_434_);
v___x_436_ = ((lean_object*)(l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux___closed__5));
v___x_437_ = lean_string_append(v___x_435_, v___x_436_);
v___x_438_ = 1;
v___x_439_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_module_402_, v___x_438_);
v___x_440_ = lean_string_append(v___x_437_, v___x_439_);
lean_dec_ref(v___x_439_);
v___x_441_ = ((lean_object*)(l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__2));
v___x_442_ = lean_string_append(v___x_440_, v___x_441_);
v___x_443_ = 3;
v___x_444_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_444_, 0, v___x_442_);
lean_ctor_set_uint8(v___x_444_, sizeof(void*)*1, v___x_443_);
v___x_445_ = lean_array_get_size(v_a_387_);
v___x_446_ = lean_array_push(v_a_387_, v___x_444_);
v___x_447_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_447_, 0, v___x_445_);
lean_ctor_set(v___x_447_, 1, v___x_446_);
return v___x_447_;
}
}
case 1:
{
lean_object* v_package_448_; lean_object* v___x_450_; uint8_t v_isShared_451_; uint8_t v_isSharedCheck_541_; 
lean_dec_ref(v_a_382_);
v_package_448_ = lean_ctor_get(v_self_380_, 0);
v_isSharedCheck_541_ = !lean_is_exclusive(v_self_380_);
if (v_isSharedCheck_541_ == 0)
{
v___x_450_ = v_self_380_;
v_isShared_451_ = v_isSharedCheck_541_;
goto v_resetjp_449_;
}
else
{
lean_inc(v_package_448_);
lean_dec(v_self_380_);
v___x_450_ = lean_box(0);
v_isShared_451_ = v_isSharedCheck_541_;
goto v_resetjp_449_;
}
v_resetjp_449_:
{
lean_object* v_a_453_; lean_object* v___x_468_; lean_object* v_a_470_; lean_object* v_a_471_; 
v___x_468_ = l_Lake_instDataKindPackage;
switch(lean_obj_tag(v_package_448_))
{
case 0:
{
lean_dec_ref(v_root_379_);
v_a_470_ = v_defaultPkg_378_;
v_a_471_ = v_a_387_;
goto v___jp_469_;
}
case 2:
{
lean_object* v_toContext_484_; lean_object* v___x_485_; lean_object* v___x_486_; lean_object* v___x_487_; lean_object* v___x_488_; lean_object* v___x_489_; lean_object* v___x_490_; lean_object* v___x_491_; lean_object* v___x_492_; lean_object* v___x_493_; lean_object* v___x_494_; lean_object* v___x_495_; lean_object* v___x_496_; lean_object* v___x_497_; lean_object* v___x_498_; lean_object* v___x_499_; lean_object* v_packageMap_500_; lean_object* v___x_501_; 
lean_dec_ref(v_defaultPkg_378_);
v_toContext_484_ = lean_ctor_get(v_a_386_, 1);
v___x_485_ = l_unsafeCast___redArg(v_toContext_484_);
v___x_486_ = l_unsafeCast___redArg(v___x_485_);
lean_dec(v___x_485_);
v___x_487_ = l_unsafeCast___redArg(v___x_486_);
lean_dec(v___x_486_);
v___x_488_ = l_unsafeCast___redArg(v___x_487_);
lean_dec(v___x_487_);
v___x_489_ = l_unsafeCast___redArg(v___x_488_);
lean_dec(v___x_488_);
v___x_490_ = l_unsafeCast___redArg(v___x_489_);
lean_dec(v___x_489_);
v___x_491_ = l_unsafeCast___redArg(v___x_490_);
lean_dec(v___x_490_);
v___x_492_ = l_unsafeCast___redArg(v___x_491_);
lean_dec(v___x_491_);
v___x_493_ = l_unsafeCast___redArg(v___x_492_);
lean_dec(v___x_492_);
v___x_494_ = l_unsafeCast___redArg(v___x_493_);
lean_dec(v___x_493_);
v___x_495_ = l_unsafeCast___redArg(v___x_494_);
lean_dec(v___x_494_);
v___x_496_ = l_unsafeCast___redArg(v___x_495_);
lean_dec(v___x_495_);
v___x_497_ = l_unsafeCast___redArg(v___x_496_);
lean_dec(v___x_496_);
v___x_498_ = l_unsafeCast___redArg(v___x_497_);
lean_dec(v___x_497_);
v___x_499_ = l_unsafeCast___redArg(v___x_498_);
lean_dec(v___x_498_);
v_packageMap_500_ = lean_ctor_get(v___x_499_, 5);
lean_inc(v_packageMap_500_);
lean_dec(v___x_499_);
v___x_501_ = l_Std_DTreeMap_Internal_Impl_get_x3f___at___00__private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_spec__0___redArg(v_packageMap_500_, v_package_448_);
lean_dec(v_packageMap_500_);
if (lean_obj_tag(v___x_501_) == 1)
{
lean_object* v_val_502_; 
lean_dec_ref_known(v_package_448_, 2);
lean_dec_ref(v_root_379_);
v_val_502_ = lean_ctor_get(v___x_501_, 0);
lean_inc(v_val_502_);
lean_dec_ref_known(v___x_501_, 1);
v_a_470_ = v_val_502_;
v_a_471_ = v_a_387_;
goto v___jp_469_;
}
else
{
lean_object* v___x_503_; lean_object* v___x_504_; lean_object* v___x_505_; lean_object* v___x_506_; lean_object* v___x_507_; uint8_t v___x_508_; lean_object* v___x_509_; lean_object* v___x_510_; lean_object* v___x_511_; lean_object* v___x_512_; uint8_t v___x_513_; lean_object* v___x_514_; lean_object* v___x_515_; lean_object* v___x_516_; 
lean_dec(v___x_501_);
lean_del_object(v___x_450_);
v___x_503_ = ((lean_object*)(l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__0));
v___x_504_ = l_Lake_PartialBuildKey_toString(v_root_379_);
v___x_505_ = lean_string_append(v___x_503_, v___x_504_);
lean_dec_ref(v___x_504_);
v___x_506_ = ((lean_object*)(l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__1));
v___x_507_ = lean_string_append(v___x_505_, v___x_506_);
v___x_508_ = 1;
v___x_509_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_package_448_, v___x_508_);
v___x_510_ = lean_string_append(v___x_507_, v___x_509_);
lean_dec_ref(v___x_509_);
v___x_511_ = ((lean_object*)(l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__2));
v___x_512_ = lean_string_append(v___x_510_, v___x_511_);
v___x_513_ = 3;
v___x_514_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_514_, 0, v___x_512_);
lean_ctor_set_uint8(v___x_514_, sizeof(void*)*1, v___x_513_);
v___x_515_ = lean_array_get_size(v_a_387_);
v___x_516_ = lean_array_push(v_a_387_, v___x_514_);
v_a_398_ = v___x_515_;
v_a_399_ = v___x_516_;
goto v___jp_397_;
}
}
default: 
{
lean_object* v_toContext_517_; lean_object* v___x_518_; lean_object* v___x_519_; lean_object* v___x_520_; lean_object* v___x_521_; lean_object* v___x_522_; lean_object* v___x_523_; lean_object* v___x_524_; lean_object* v___x_525_; lean_object* v___x_526_; lean_object* v___x_527_; lean_object* v___x_528_; lean_object* v___x_529_; lean_object* v___x_530_; lean_object* v___x_531_; lean_object* v___x_532_; lean_object* v_packages_533_; lean_object* v___x_534_; size_t v_sz_535_; size_t v___x_536_; lean_object* v___x_537_; lean_object* v_fst_538_; 
lean_dec_ref(v_defaultPkg_378_);
v_toContext_517_ = lean_ctor_get(v_a_386_, 1);
v___x_518_ = l_unsafeCast___redArg(v_toContext_517_);
v___x_519_ = l_unsafeCast___redArg(v___x_518_);
lean_dec(v___x_518_);
v___x_520_ = l_unsafeCast___redArg(v___x_519_);
lean_dec(v___x_519_);
v___x_521_ = l_unsafeCast___redArg(v___x_520_);
lean_dec(v___x_520_);
v___x_522_ = l_unsafeCast___redArg(v___x_521_);
lean_dec(v___x_521_);
v___x_523_ = l_unsafeCast___redArg(v___x_522_);
lean_dec(v___x_522_);
v___x_524_ = l_unsafeCast___redArg(v___x_523_);
lean_dec(v___x_523_);
v___x_525_ = l_unsafeCast___redArg(v___x_524_);
lean_dec(v___x_524_);
v___x_526_ = l_unsafeCast___redArg(v___x_525_);
lean_dec(v___x_525_);
v___x_527_ = l_unsafeCast___redArg(v___x_526_);
lean_dec(v___x_526_);
v___x_528_ = l_unsafeCast___redArg(v___x_527_);
lean_dec(v___x_527_);
v___x_529_ = l_unsafeCast___redArg(v___x_528_);
lean_dec(v___x_528_);
v___x_530_ = l_unsafeCast___redArg(v___x_529_);
lean_dec(v___x_529_);
v___x_531_ = l_unsafeCast___redArg(v___x_530_);
lean_dec(v___x_530_);
v___x_532_ = l_unsafeCast___redArg(v___x_531_);
lean_dec(v___x_531_);
v_packages_533_ = lean_ctor_get(v___x_532_, 4);
lean_inc_ref(v_packages_533_);
lean_dec(v___x_532_);
v___x_534_ = ((lean_object*)(l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__14));
v_sz_535_ = lean_array_size(v_packages_533_);
v___x_536_ = ((size_t)0ULL);
v___x_537_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_spec__1(v_package_448_, v_packages_533_, v_sz_535_, v___x_536_, v___x_534_);
lean_dec_ref(v_packages_533_);
v_fst_538_ = lean_ctor_get(v___x_537_, 0);
lean_inc(v_fst_538_);
lean_dec_ref(v___x_537_);
if (lean_obj_tag(v_fst_538_) == 0)
{
lean_del_object(v___x_450_);
v_a_453_ = v_a_387_;
goto v___jp_452_;
}
else
{
lean_object* v_val_539_; 
v_val_539_ = lean_ctor_get(v_fst_538_, 0);
lean_inc(v_val_539_);
lean_dec_ref_known(v_fst_538_, 1);
if (lean_obj_tag(v_val_539_) == 1)
{
lean_object* v_val_540_; 
lean_dec(v_package_448_);
lean_dec_ref(v_root_379_);
v_val_540_ = lean_ctor_get(v_val_539_, 0);
lean_inc(v_val_540_);
lean_dec_ref_known(v_val_539_, 1);
v_a_470_ = v_val_540_;
v_a_471_ = v_a_387_;
goto v___jp_469_;
}
else
{
lean_dec(v_val_539_);
lean_del_object(v___x_450_);
v_a_453_ = v_a_387_;
goto v___jp_452_;
}
}
}
}
v___jp_452_:
{
lean_object* v___x_454_; lean_object* v___x_455_; lean_object* v___x_456_; lean_object* v___x_457_; lean_object* v___x_458_; uint8_t v___x_459_; lean_object* v___x_460_; lean_object* v___x_461_; lean_object* v___x_462_; lean_object* v___x_463_; uint8_t v___x_464_; lean_object* v___x_465_; lean_object* v___x_466_; lean_object* v___x_467_; 
v___x_454_ = ((lean_object*)(l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__0));
v___x_455_ = l_Lake_PartialBuildKey_toString(v_root_379_);
v___x_456_ = lean_string_append(v___x_454_, v___x_455_);
lean_dec_ref(v___x_455_);
v___x_457_ = ((lean_object*)(l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__1));
v___x_458_ = lean_string_append(v___x_456_, v___x_457_);
v___x_459_ = 1;
v___x_460_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_package_448_, v___x_459_);
v___x_461_ = lean_string_append(v___x_458_, v___x_460_);
lean_dec_ref(v___x_460_);
v___x_462_ = ((lean_object*)(l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__2));
v___x_463_ = lean_string_append(v___x_461_, v___x_462_);
v___x_464_ = 3;
v___x_465_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_465_, 0, v___x_463_);
lean_ctor_set_uint8(v___x_465_, sizeof(void*)*1, v___x_464_);
v___x_466_ = lean_array_get_size(v_a_453_);
v___x_467_ = lean_array_push(v_a_453_, v___x_465_);
v_a_398_ = v___x_466_;
v_a_399_ = v___x_467_;
goto v___jp_397_;
}
v___jp_469_:
{
lean_object* v_keyName_472_; lean_object* v___x_474_; 
v_keyName_472_ = lean_ctor_get(v_a_470_, 2);
lean_inc(v_keyName_472_);
if (v_isShared_451_ == 0)
{
lean_ctor_set(v___x_450_, 0, v_keyName_472_);
v___x_474_ = v___x_450_;
goto v_reusejp_473_;
}
else
{
lean_object* v_reuseFailAlloc_483_; 
v_reuseFailAlloc_483_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_483_, 0, v_keyName_472_);
v___x_474_ = v_reuseFailAlloc_483_;
goto v_reusejp_473_;
}
v_reusejp_473_:
{
lean_object* v___x_475_; uint8_t v___x_476_; lean_object* v___x_477_; lean_object* v___x_478_; lean_object* v___x_479_; lean_object* v___x_480_; lean_object* v___x_481_; lean_object* v___x_482_; 
v___x_475_ = ((lean_object*)(l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux___closed__1));
v___x_476_ = 0;
v___x_477_ = lean_obj_once(&l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux___closed__4, &l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux___closed__4_once, _init_l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux___closed__4);
v___x_478_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_478_, 0, v_a_470_);
lean_ctor_set(v___x_478_, 1, v___x_477_);
v___x_479_ = lean_task_pure(v___x_478_);
v___x_480_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_480_, 0, v___x_479_);
lean_ctor_set(v___x_480_, 1, v___x_468_);
lean_ctor_set(v___x_480_, 2, v___x_475_);
lean_ctor_set_uint8(v___x_480_, sizeof(void*)*3, v___x_476_);
v___x_481_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_481_, 0, v___x_474_);
lean_ctor_set(v___x_481_, 1, v___x_480_);
v___x_482_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_482_, 0, v___x_481_);
lean_ctor_set(v___x_482_, 1, v_a_471_);
return v___x_482_;
}
}
}
}
case 2:
{
lean_object* v_package_542_; lean_object* v_module_543_; lean_object* v___x_545_; uint8_t v_isShared_546_; uint8_t v_isSharedCheck_658_; 
lean_dec_ref(v_a_382_);
v_package_542_ = lean_ctor_get(v_self_380_, 0);
v_module_543_ = lean_ctor_get(v_self_380_, 1);
v_isSharedCheck_658_ = !lean_is_exclusive(v_self_380_);
if (v_isSharedCheck_658_ == 0)
{
v___x_545_ = v_self_380_;
v_isShared_546_ = v_isSharedCheck_658_;
goto v_resetjp_544_;
}
else
{
lean_inc(v_module_543_);
lean_inc(v_package_542_);
lean_dec(v_self_380_);
v___x_545_ = lean_box(0);
v_isShared_546_ = v_isSharedCheck_658_;
goto v_resetjp_544_;
}
v_resetjp_544_:
{
lean_object* v_a_548_; lean_object* v_a_549_; lean_object* v_a_586_; 
switch(lean_obj_tag(v_package_542_))
{
case 0:
{
v_a_548_ = v_defaultPkg_378_;
v_a_549_ = v_a_387_;
goto v___jp_547_;
}
case 2:
{
lean_object* v_toContext_601_; lean_object* v___x_602_; lean_object* v___x_603_; lean_object* v___x_604_; lean_object* v___x_605_; lean_object* v___x_606_; lean_object* v___x_607_; lean_object* v___x_608_; lean_object* v___x_609_; lean_object* v___x_610_; lean_object* v___x_611_; lean_object* v___x_612_; lean_object* v___x_613_; lean_object* v___x_614_; lean_object* v___x_615_; lean_object* v___x_616_; lean_object* v_packageMap_617_; lean_object* v___x_618_; 
lean_dec_ref(v_defaultPkg_378_);
v_toContext_601_ = lean_ctor_get(v_a_386_, 1);
v___x_602_ = l_unsafeCast___redArg(v_toContext_601_);
v___x_603_ = l_unsafeCast___redArg(v___x_602_);
lean_dec(v___x_602_);
v___x_604_ = l_unsafeCast___redArg(v___x_603_);
lean_dec(v___x_603_);
v___x_605_ = l_unsafeCast___redArg(v___x_604_);
lean_dec(v___x_604_);
v___x_606_ = l_unsafeCast___redArg(v___x_605_);
lean_dec(v___x_605_);
v___x_607_ = l_unsafeCast___redArg(v___x_606_);
lean_dec(v___x_606_);
v___x_608_ = l_unsafeCast___redArg(v___x_607_);
lean_dec(v___x_607_);
v___x_609_ = l_unsafeCast___redArg(v___x_608_);
lean_dec(v___x_608_);
v___x_610_ = l_unsafeCast___redArg(v___x_609_);
lean_dec(v___x_609_);
v___x_611_ = l_unsafeCast___redArg(v___x_610_);
lean_dec(v___x_610_);
v___x_612_ = l_unsafeCast___redArg(v___x_611_);
lean_dec(v___x_611_);
v___x_613_ = l_unsafeCast___redArg(v___x_612_);
lean_dec(v___x_612_);
v___x_614_ = l_unsafeCast___redArg(v___x_613_);
lean_dec(v___x_613_);
v___x_615_ = l_unsafeCast___redArg(v___x_614_);
lean_dec(v___x_614_);
v___x_616_ = l_unsafeCast___redArg(v___x_615_);
lean_dec(v___x_615_);
v_packageMap_617_ = lean_ctor_get(v___x_616_, 5);
lean_inc(v_packageMap_617_);
lean_dec(v___x_616_);
v___x_618_ = l_Std_DTreeMap_Internal_Impl_get_x3f___at___00__private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_spec__0___redArg(v_packageMap_617_, v_package_542_);
lean_dec(v_packageMap_617_);
if (lean_obj_tag(v___x_618_) == 1)
{
lean_object* v_val_619_; 
lean_dec_ref_known(v_package_542_, 2);
v_val_619_ = lean_ctor_get(v___x_618_, 0);
lean_inc(v_val_619_);
lean_dec_ref_known(v___x_618_, 1);
v_a_548_ = v_val_619_;
v_a_549_ = v_a_387_;
goto v___jp_547_;
}
else
{
lean_object* v___x_620_; lean_object* v___x_621_; lean_object* v___x_622_; lean_object* v___x_623_; lean_object* v___x_624_; uint8_t v___x_625_; lean_object* v___x_626_; lean_object* v___x_627_; lean_object* v___x_628_; lean_object* v___x_629_; uint8_t v___x_630_; lean_object* v___x_631_; lean_object* v___x_632_; lean_object* v___x_633_; 
lean_dec(v___x_618_);
lean_del_object(v___x_545_);
lean_dec(v_module_543_);
v___x_620_ = ((lean_object*)(l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__0));
v___x_621_ = l_Lake_PartialBuildKey_toString(v_root_379_);
v___x_622_ = lean_string_append(v___x_620_, v___x_621_);
lean_dec_ref(v___x_621_);
v___x_623_ = ((lean_object*)(l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__1));
v___x_624_ = lean_string_append(v___x_622_, v___x_623_);
v___x_625_ = 1;
v___x_626_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_package_542_, v___x_625_);
v___x_627_ = lean_string_append(v___x_624_, v___x_626_);
lean_dec_ref(v___x_626_);
v___x_628_ = ((lean_object*)(l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__2));
v___x_629_ = lean_string_append(v___x_627_, v___x_628_);
v___x_630_ = 3;
v___x_631_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_631_, 0, v___x_629_);
lean_ctor_set_uint8(v___x_631_, sizeof(void*)*1, v___x_630_);
v___x_632_ = lean_array_get_size(v_a_387_);
v___x_633_ = lean_array_push(v_a_387_, v___x_631_);
v_a_394_ = v___x_632_;
v_a_395_ = v___x_633_;
goto v___jp_393_;
}
}
default: 
{
lean_object* v_toContext_634_; lean_object* v___x_635_; lean_object* v___x_636_; lean_object* v___x_637_; lean_object* v___x_638_; lean_object* v___x_639_; lean_object* v___x_640_; lean_object* v___x_641_; lean_object* v___x_642_; lean_object* v___x_643_; lean_object* v___x_644_; lean_object* v___x_645_; lean_object* v___x_646_; lean_object* v___x_647_; lean_object* v___x_648_; lean_object* v___x_649_; lean_object* v_packages_650_; lean_object* v___x_651_; size_t v_sz_652_; size_t v___x_653_; lean_object* v___x_654_; lean_object* v_fst_655_; 
lean_dec_ref(v_defaultPkg_378_);
v_toContext_634_ = lean_ctor_get(v_a_386_, 1);
v___x_635_ = l_unsafeCast___redArg(v_toContext_634_);
v___x_636_ = l_unsafeCast___redArg(v___x_635_);
lean_dec(v___x_635_);
v___x_637_ = l_unsafeCast___redArg(v___x_636_);
lean_dec(v___x_636_);
v___x_638_ = l_unsafeCast___redArg(v___x_637_);
lean_dec(v___x_637_);
v___x_639_ = l_unsafeCast___redArg(v___x_638_);
lean_dec(v___x_638_);
v___x_640_ = l_unsafeCast___redArg(v___x_639_);
lean_dec(v___x_639_);
v___x_641_ = l_unsafeCast___redArg(v___x_640_);
lean_dec(v___x_640_);
v___x_642_ = l_unsafeCast___redArg(v___x_641_);
lean_dec(v___x_641_);
v___x_643_ = l_unsafeCast___redArg(v___x_642_);
lean_dec(v___x_642_);
v___x_644_ = l_unsafeCast___redArg(v___x_643_);
lean_dec(v___x_643_);
v___x_645_ = l_unsafeCast___redArg(v___x_644_);
lean_dec(v___x_644_);
v___x_646_ = l_unsafeCast___redArg(v___x_645_);
lean_dec(v___x_645_);
v___x_647_ = l_unsafeCast___redArg(v___x_646_);
lean_dec(v___x_646_);
v___x_648_ = l_unsafeCast___redArg(v___x_647_);
lean_dec(v___x_647_);
v___x_649_ = l_unsafeCast___redArg(v___x_648_);
lean_dec(v___x_648_);
v_packages_650_ = lean_ctor_get(v___x_649_, 4);
lean_inc_ref(v_packages_650_);
lean_dec(v___x_649_);
v___x_651_ = ((lean_object*)(l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__14));
v_sz_652_ = lean_array_size(v_packages_650_);
v___x_653_ = ((size_t)0ULL);
v___x_654_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_spec__1(v_package_542_, v_packages_650_, v_sz_652_, v___x_653_, v___x_651_);
lean_dec_ref(v_packages_650_);
v_fst_655_ = lean_ctor_get(v___x_654_, 0);
lean_inc(v_fst_655_);
lean_dec_ref(v___x_654_);
if (lean_obj_tag(v_fst_655_) == 0)
{
lean_del_object(v___x_545_);
lean_dec(v_module_543_);
v_a_586_ = v_a_387_;
goto v___jp_585_;
}
else
{
lean_object* v_val_656_; 
v_val_656_ = lean_ctor_get(v_fst_655_, 0);
lean_inc(v_val_656_);
lean_dec_ref_known(v_fst_655_, 1);
if (lean_obj_tag(v_val_656_) == 1)
{
lean_object* v_val_657_; 
lean_dec(v_package_542_);
v_val_657_ = lean_ctor_get(v_val_656_, 0);
lean_inc(v_val_657_);
lean_dec_ref_known(v_val_656_, 1);
v_a_548_ = v_val_657_;
v_a_549_ = v_a_387_;
goto v___jp_547_;
}
else
{
lean_dec(v_val_656_);
lean_del_object(v___x_545_);
lean_dec(v_module_543_);
v_a_586_ = v_a_387_;
goto v___jp_585_;
}
}
}
}
v___jp_547_:
{
lean_object* v___x_550_; 
lean_inc_ref(v_a_548_);
lean_inc(v_module_543_);
v___x_550_ = l_Lake_Package_findTargetModule_x3f(v_module_543_, v_a_548_);
if (lean_obj_tag(v___x_550_) == 1)
{
lean_object* v_val_551_; lean_object* v_keyName_552_; lean_object* v___x_554_; 
lean_dec_ref(v_root_379_);
v_val_551_ = lean_ctor_get(v___x_550_, 0);
lean_inc(v_val_551_);
lean_dec_ref_known(v___x_550_, 1);
v_keyName_552_ = lean_ctor_get(v_a_548_, 2);
lean_inc(v_keyName_552_);
lean_dec_ref(v_a_548_);
if (v_isShared_546_ == 0)
{
lean_ctor_set(v___x_545_, 0, v_keyName_552_);
v___x_554_ = v___x_545_;
goto v_reusejp_553_;
}
else
{
lean_object* v_reuseFailAlloc_563_; 
v_reuseFailAlloc_563_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_563_, 0, v_keyName_552_);
lean_ctor_set(v_reuseFailAlloc_563_, 1, v_module_543_);
v___x_554_ = v_reuseFailAlloc_563_;
goto v_reusejp_553_;
}
v_reusejp_553_:
{
lean_object* v___x_555_; uint8_t v___x_556_; lean_object* v___x_557_; lean_object* v___x_558_; lean_object* v___x_559_; lean_object* v___x_560_; lean_object* v___x_561_; lean_object* v___x_562_; 
v___x_555_ = ((lean_object*)(l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux___closed__1));
v___x_556_ = 0;
v___x_557_ = lean_obj_once(&l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux___closed__4, &l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux___closed__4_once, _init_l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux___closed__4);
v___x_558_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_558_, 0, v_val_551_);
lean_ctor_set(v___x_558_, 1, v___x_557_);
v___x_559_ = lean_task_pure(v___x_558_);
v___x_560_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_560_, 0, v___x_559_);
lean_ctor_set(v___x_560_, 1, v___x_401_);
lean_ctor_set(v___x_560_, 2, v___x_555_);
lean_ctor_set_uint8(v___x_560_, sizeof(void*)*3, v___x_556_);
v___x_561_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_561_, 0, v___x_554_);
lean_ctor_set(v___x_561_, 1, v___x_560_);
v___x_562_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_562_, 0, v___x_561_);
lean_ctor_set(v___x_562_, 1, v_a_549_);
return v___x_562_;
}
}
else
{
lean_object* v_baseName_564_; lean_object* v___x_565_; lean_object* v___x_566_; lean_object* v___x_567_; lean_object* v___x_568_; lean_object* v___x_569_; uint8_t v___x_570_; lean_object* v___x_571_; lean_object* v___x_572_; lean_object* v___x_573_; lean_object* v___x_574_; uint8_t v___x_575_; lean_object* v___x_576_; lean_object* v___x_577_; lean_object* v___x_578_; lean_object* v___x_579_; uint8_t v___x_580_; lean_object* v___x_581_; lean_object* v___x_582_; lean_object* v___x_583_; lean_object* v___x_584_; 
lean_dec(v___x_550_);
lean_del_object(v___x_545_);
v_baseName_564_ = lean_ctor_get(v_a_548_, 1);
lean_inc(v_baseName_564_);
lean_dec_ref(v_a_548_);
v___x_565_ = ((lean_object*)(l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__0));
v___x_566_ = l_Lake_PartialBuildKey_toString(v_root_379_);
v___x_567_ = lean_string_append(v___x_565_, v___x_566_);
lean_dec_ref(v___x_566_);
v___x_568_ = ((lean_object*)(l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux___closed__6));
v___x_569_ = lean_string_append(v___x_567_, v___x_568_);
v___x_570_ = 1;
v___x_571_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_module_543_, v___x_570_);
v___x_572_ = lean_string_append(v___x_569_, v___x_571_);
lean_dec_ref(v___x_571_);
v___x_573_ = ((lean_object*)(l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux___closed__7));
v___x_574_ = lean_string_append(v___x_572_, v___x_573_);
v___x_575_ = 0;
v___x_576_ = l_Lean_Name_toString(v_baseName_564_, v___x_575_);
v___x_577_ = lean_string_append(v___x_574_, v___x_576_);
lean_dec_ref(v___x_576_);
v___x_578_ = ((lean_object*)(l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux___closed__8));
v___x_579_ = lean_string_append(v___x_577_, v___x_578_);
v___x_580_ = 3;
v___x_581_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_581_, 0, v___x_579_);
lean_ctor_set_uint8(v___x_581_, sizeof(void*)*1, v___x_580_);
v___x_582_ = lean_array_get_size(v_a_549_);
v___x_583_ = lean_array_push(v_a_549_, v___x_581_);
v___x_584_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_584_, 0, v___x_582_);
lean_ctor_set(v___x_584_, 1, v___x_583_);
return v___x_584_;
}
}
v___jp_585_:
{
lean_object* v___x_587_; lean_object* v___x_588_; lean_object* v___x_589_; lean_object* v___x_590_; lean_object* v___x_591_; uint8_t v___x_592_; lean_object* v___x_593_; lean_object* v___x_594_; lean_object* v___x_595_; lean_object* v___x_596_; uint8_t v___x_597_; lean_object* v___x_598_; lean_object* v___x_599_; lean_object* v___x_600_; 
v___x_587_ = ((lean_object*)(l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__0));
v___x_588_ = l_Lake_PartialBuildKey_toString(v_root_379_);
v___x_589_ = lean_string_append(v___x_587_, v___x_588_);
lean_dec_ref(v___x_588_);
v___x_590_ = ((lean_object*)(l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__1));
v___x_591_ = lean_string_append(v___x_589_, v___x_590_);
v___x_592_ = 1;
v___x_593_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_package_542_, v___x_592_);
v___x_594_ = lean_string_append(v___x_591_, v___x_593_);
lean_dec_ref(v___x_593_);
v___x_595_ = ((lean_object*)(l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__2));
v___x_596_ = lean_string_append(v___x_594_, v___x_595_);
v___x_597_ = 3;
v___x_598_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_598_, 0, v___x_596_);
lean_ctor_set_uint8(v___x_598_, sizeof(void*)*1, v___x_597_);
v___x_599_ = lean_array_get_size(v_a_586_);
v___x_600_ = lean_array_push(v_a_586_, v___x_598_);
v_a_394_ = v___x_599_;
v_a_395_ = v___x_600_;
goto v___jp_393_;
}
}
}
case 3:
{
lean_object* v_package_659_; lean_object* v_target_660_; lean_object* v___x_662_; uint8_t v_isShared_663_; uint8_t v_isSharedCheck_840_; 
v_package_659_ = lean_ctor_get(v_self_380_, 0);
v_target_660_ = lean_ctor_get(v_self_380_, 1);
v_isSharedCheck_840_ = !lean_is_exclusive(v_self_380_);
if (v_isSharedCheck_840_ == 0)
{
v___x_662_ = v_self_380_;
v_isShared_663_ = v_isSharedCheck_840_;
goto v_resetjp_661_;
}
else
{
lean_inc(v_target_660_);
lean_inc(v_package_659_);
lean_dec(v_self_380_);
v___x_662_ = lean_box(0);
v_isShared_663_ = v_isSharedCheck_840_;
goto v_resetjp_661_;
}
v_resetjp_661_:
{
lean_object* v_a_665_; lean_object* v_a_666_; lean_object* v_a_768_; 
switch(lean_obj_tag(v_package_659_))
{
case 0:
{
v_a_665_ = v_defaultPkg_378_;
v_a_666_ = v_a_387_;
goto v___jp_664_;
}
case 2:
{
lean_object* v_toContext_783_; lean_object* v___x_784_; lean_object* v___x_785_; lean_object* v___x_786_; lean_object* v___x_787_; lean_object* v___x_788_; lean_object* v___x_789_; lean_object* v___x_790_; lean_object* v___x_791_; lean_object* v___x_792_; lean_object* v___x_793_; lean_object* v___x_794_; lean_object* v___x_795_; lean_object* v___x_796_; lean_object* v___x_797_; lean_object* v___x_798_; lean_object* v_packageMap_799_; lean_object* v___x_800_; 
lean_dec_ref(v_defaultPkg_378_);
v_toContext_783_ = lean_ctor_get(v_a_386_, 1);
v___x_784_ = l_unsafeCast___redArg(v_toContext_783_);
v___x_785_ = l_unsafeCast___redArg(v___x_784_);
lean_dec(v___x_784_);
v___x_786_ = l_unsafeCast___redArg(v___x_785_);
lean_dec(v___x_785_);
v___x_787_ = l_unsafeCast___redArg(v___x_786_);
lean_dec(v___x_786_);
v___x_788_ = l_unsafeCast___redArg(v___x_787_);
lean_dec(v___x_787_);
v___x_789_ = l_unsafeCast___redArg(v___x_788_);
lean_dec(v___x_788_);
v___x_790_ = l_unsafeCast___redArg(v___x_789_);
lean_dec(v___x_789_);
v___x_791_ = l_unsafeCast___redArg(v___x_790_);
lean_dec(v___x_790_);
v___x_792_ = l_unsafeCast___redArg(v___x_791_);
lean_dec(v___x_791_);
v___x_793_ = l_unsafeCast___redArg(v___x_792_);
lean_dec(v___x_792_);
v___x_794_ = l_unsafeCast___redArg(v___x_793_);
lean_dec(v___x_793_);
v___x_795_ = l_unsafeCast___redArg(v___x_794_);
lean_dec(v___x_794_);
v___x_796_ = l_unsafeCast___redArg(v___x_795_);
lean_dec(v___x_795_);
v___x_797_ = l_unsafeCast___redArg(v___x_796_);
lean_dec(v___x_796_);
v___x_798_ = l_unsafeCast___redArg(v___x_797_);
lean_dec(v___x_797_);
v_packageMap_799_ = lean_ctor_get(v___x_798_, 5);
lean_inc(v_packageMap_799_);
lean_dec(v___x_798_);
v___x_800_ = l_Std_DTreeMap_Internal_Impl_get_x3f___at___00__private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_spec__0___redArg(v_packageMap_799_, v_package_659_);
lean_dec(v_packageMap_799_);
if (lean_obj_tag(v___x_800_) == 1)
{
lean_object* v_val_801_; 
lean_dec_ref_known(v_package_659_, 2);
v_val_801_ = lean_ctor_get(v___x_800_, 0);
lean_inc(v_val_801_);
lean_dec_ref_known(v___x_800_, 1);
v_a_665_ = v_val_801_;
v_a_666_ = v_a_387_;
goto v___jp_664_;
}
else
{
lean_object* v___x_802_; lean_object* v___x_803_; lean_object* v___x_804_; lean_object* v___x_805_; lean_object* v___x_806_; uint8_t v___x_807_; lean_object* v___x_808_; lean_object* v___x_809_; lean_object* v___x_810_; lean_object* v___x_811_; uint8_t v___x_812_; lean_object* v___x_813_; lean_object* v___x_814_; lean_object* v___x_815_; 
lean_dec(v___x_800_);
lean_del_object(v___x_662_);
lean_dec(v_target_660_);
lean_dec_ref(v_a_382_);
v___x_802_ = ((lean_object*)(l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__0));
v___x_803_ = l_Lake_PartialBuildKey_toString(v_root_379_);
v___x_804_ = lean_string_append(v___x_802_, v___x_803_);
lean_dec_ref(v___x_803_);
v___x_805_ = ((lean_object*)(l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__1));
v___x_806_ = lean_string_append(v___x_804_, v___x_805_);
v___x_807_ = 1;
v___x_808_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_package_659_, v___x_807_);
v___x_809_ = lean_string_append(v___x_806_, v___x_808_);
lean_dec_ref(v___x_808_);
v___x_810_ = ((lean_object*)(l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__2));
v___x_811_ = lean_string_append(v___x_809_, v___x_810_);
v___x_812_ = 3;
v___x_813_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_813_, 0, v___x_811_);
lean_ctor_set_uint8(v___x_813_, sizeof(void*)*1, v___x_812_);
v___x_814_ = lean_array_get_size(v_a_387_);
v___x_815_ = lean_array_push(v_a_387_, v___x_813_);
v_a_390_ = v___x_814_;
v_a_391_ = v___x_815_;
goto v___jp_389_;
}
}
default: 
{
lean_object* v_toContext_816_; lean_object* v___x_817_; lean_object* v___x_818_; lean_object* v___x_819_; lean_object* v___x_820_; lean_object* v___x_821_; lean_object* v___x_822_; lean_object* v___x_823_; lean_object* v___x_824_; lean_object* v___x_825_; lean_object* v___x_826_; lean_object* v___x_827_; lean_object* v___x_828_; lean_object* v___x_829_; lean_object* v___x_830_; lean_object* v___x_831_; lean_object* v_packages_832_; lean_object* v___x_833_; size_t v_sz_834_; size_t v___x_835_; lean_object* v___x_836_; lean_object* v_fst_837_; 
lean_dec_ref(v_defaultPkg_378_);
v_toContext_816_ = lean_ctor_get(v_a_386_, 1);
v___x_817_ = l_unsafeCast___redArg(v_toContext_816_);
v___x_818_ = l_unsafeCast___redArg(v___x_817_);
lean_dec(v___x_817_);
v___x_819_ = l_unsafeCast___redArg(v___x_818_);
lean_dec(v___x_818_);
v___x_820_ = l_unsafeCast___redArg(v___x_819_);
lean_dec(v___x_819_);
v___x_821_ = l_unsafeCast___redArg(v___x_820_);
lean_dec(v___x_820_);
v___x_822_ = l_unsafeCast___redArg(v___x_821_);
lean_dec(v___x_821_);
v___x_823_ = l_unsafeCast___redArg(v___x_822_);
lean_dec(v___x_822_);
v___x_824_ = l_unsafeCast___redArg(v___x_823_);
lean_dec(v___x_823_);
v___x_825_ = l_unsafeCast___redArg(v___x_824_);
lean_dec(v___x_824_);
v___x_826_ = l_unsafeCast___redArg(v___x_825_);
lean_dec(v___x_825_);
v___x_827_ = l_unsafeCast___redArg(v___x_826_);
lean_dec(v___x_826_);
v___x_828_ = l_unsafeCast___redArg(v___x_827_);
lean_dec(v___x_827_);
v___x_829_ = l_unsafeCast___redArg(v___x_828_);
lean_dec(v___x_828_);
v___x_830_ = l_unsafeCast___redArg(v___x_829_);
lean_dec(v___x_829_);
v___x_831_ = l_unsafeCast___redArg(v___x_830_);
lean_dec(v___x_830_);
v_packages_832_ = lean_ctor_get(v___x_831_, 4);
lean_inc_ref(v_packages_832_);
lean_dec(v___x_831_);
v___x_833_ = ((lean_object*)(l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__14));
v_sz_834_ = lean_array_size(v_packages_832_);
v___x_835_ = ((size_t)0ULL);
v___x_836_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_spec__1(v_package_659_, v_packages_832_, v_sz_834_, v___x_835_, v___x_833_);
lean_dec_ref(v_packages_832_);
v_fst_837_ = lean_ctor_get(v___x_836_, 0);
lean_inc(v_fst_837_);
lean_dec_ref(v___x_836_);
if (lean_obj_tag(v_fst_837_) == 0)
{
lean_del_object(v___x_662_);
lean_dec(v_target_660_);
lean_dec_ref(v_a_382_);
v_a_768_ = v_a_387_;
goto v___jp_767_;
}
else
{
lean_object* v_val_838_; 
v_val_838_ = lean_ctor_get(v_fst_837_, 0);
lean_inc(v_val_838_);
lean_dec_ref_known(v_fst_837_, 1);
if (lean_obj_tag(v_val_838_) == 1)
{
lean_object* v_val_839_; 
lean_dec(v_package_659_);
v_val_839_ = lean_ctor_get(v_val_838_, 0);
lean_inc(v_val_839_);
lean_dec_ref_known(v_val_838_, 1);
v_a_665_ = v_val_839_;
v_a_666_ = v_a_387_;
goto v___jp_664_;
}
else
{
lean_dec(v_val_838_);
lean_del_object(v___x_662_);
lean_dec(v_target_660_);
lean_dec_ref(v_a_382_);
v_a_768_ = v_a_387_;
goto v___jp_767_;
}
}
}
}
v___jp_664_:
{
lean_object* v_baseName_667_; lean_object* v_keyName_668_; lean_object* v___x_670_; 
v_baseName_667_ = lean_ctor_get(v_a_665_, 1);
v_keyName_668_ = lean_ctor_get(v_a_665_, 2);
lean_inc(v_target_660_);
lean_inc(v_keyName_668_);
if (v_isShared_663_ == 0)
{
lean_ctor_set(v___x_662_, 0, v_keyName_668_);
v___x_670_ = v___x_662_;
goto v_reusejp_669_;
}
else
{
lean_object* v_reuseFailAlloc_766_; 
v_reuseFailAlloc_766_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_reuseFailAlloc_766_, 0, v_keyName_668_);
lean_ctor_set(v_reuseFailAlloc_766_, 1, v_target_660_);
v___x_670_ = v_reuseFailAlloc_766_;
goto v_reusejp_669_;
}
v_reusejp_669_:
{
if (v_facetless_381_ == 0)
{
lean_object* v___x_671_; lean_object* v___x_672_; 
lean_dec_ref(v_root_379_);
v___x_671_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_671_, 0, v_a_665_);
lean_ctor_set(v___x_671_, 1, v_target_660_);
lean_inc_ref(v_a_386_);
lean_inc(v_a_385_);
lean_inc(v_a_384_);
lean_inc(v_a_383_);
v___x_672_ = lean_apply_7(v_a_382_, v___x_671_, v_a_383_, v_a_384_, v_a_385_, v_a_386_, v_a_666_, lean_box(0));
if (lean_obj_tag(v___x_672_) == 0)
{
lean_object* v_a_673_; lean_object* v_a_674_; lean_object* v___x_676_; uint8_t v_isShared_677_; uint8_t v_isSharedCheck_682_; 
v_a_673_ = lean_ctor_get(v___x_672_, 0);
v_a_674_ = lean_ctor_get(v___x_672_, 1);
v_isSharedCheck_682_ = !lean_is_exclusive(v___x_672_);
if (v_isSharedCheck_682_ == 0)
{
v___x_676_ = v___x_672_;
v_isShared_677_ = v_isSharedCheck_682_;
goto v_resetjp_675_;
}
else
{
lean_inc(v_a_674_);
lean_inc(v_a_673_);
lean_dec(v___x_672_);
v___x_676_ = lean_box(0);
v_isShared_677_ = v_isSharedCheck_682_;
goto v_resetjp_675_;
}
v_resetjp_675_:
{
lean_object* v___x_678_; lean_object* v___x_680_; 
v___x_678_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_678_, 0, v___x_670_);
lean_ctor_set(v___x_678_, 1, v_a_673_);
if (v_isShared_677_ == 0)
{
lean_ctor_set(v___x_676_, 0, v___x_678_);
v___x_680_ = v___x_676_;
goto v_reusejp_679_;
}
else
{
lean_object* v_reuseFailAlloc_681_; 
v_reuseFailAlloc_681_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_681_, 0, v___x_678_);
lean_ctor_set(v_reuseFailAlloc_681_, 1, v_a_674_);
v___x_680_ = v_reuseFailAlloc_681_;
goto v_reusejp_679_;
}
v_reusejp_679_:
{
return v___x_680_;
}
}
}
else
{
lean_object* v_a_683_; lean_object* v_a_684_; lean_object* v___x_686_; uint8_t v_isShared_687_; uint8_t v_isSharedCheck_691_; 
lean_dec_ref(v___x_670_);
v_a_683_ = lean_ctor_get(v___x_672_, 0);
v_a_684_ = lean_ctor_get(v___x_672_, 1);
v_isSharedCheck_691_ = !lean_is_exclusive(v___x_672_);
if (v_isSharedCheck_691_ == 0)
{
v___x_686_ = v___x_672_;
v_isShared_687_ = v_isSharedCheck_691_;
goto v_resetjp_685_;
}
else
{
lean_inc(v_a_684_);
lean_inc(v_a_683_);
lean_dec(v___x_672_);
v___x_686_ = lean_box(0);
v_isShared_687_ = v_isSharedCheck_691_;
goto v_resetjp_685_;
}
v_resetjp_685_:
{
lean_object* v___x_689_; 
if (v_isShared_687_ == 0)
{
v___x_689_ = v___x_686_;
goto v_reusejp_688_;
}
else
{
lean_object* v_reuseFailAlloc_690_; 
v_reuseFailAlloc_690_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_690_, 0, v_a_683_);
lean_ctor_set(v_reuseFailAlloc_690_, 1, v_a_684_);
v___x_689_ = v_reuseFailAlloc_690_;
goto v_reusejp_688_;
}
v_reusejp_688_:
{
return v___x_689_;
}
}
}
}
else
{
lean_object* v___x_692_; 
v___x_692_ = l_Lake_Package_findTargetDecl_x3f(v_target_660_, v_a_665_);
if (lean_obj_tag(v___x_692_) == 1)
{
lean_object* v_val_693_; lean_object* v_name_694_; lean_object* v_kind_695_; lean_object* v_config_696_; lean_object* v___x_698_; uint8_t v_isShared_699_; uint8_t v_isSharedCheck_749_; 
lean_dec_ref(v_root_379_);
v_val_693_ = lean_ctor_get(v___x_692_, 0);
lean_inc(v_val_693_);
lean_dec_ref_known(v___x_692_, 1);
v_name_694_ = lean_ctor_get(v_val_693_, 1);
v_kind_695_ = lean_ctor_get(v_val_693_, 2);
v_config_696_ = lean_ctor_get(v_val_693_, 3);
v_isSharedCheck_749_ = !lean_is_exclusive(v_val_693_);
if (v_isSharedCheck_749_ == 0)
{
lean_object* v_unused_750_; 
v_unused_750_ = lean_ctor_get(v_val_693_, 0);
lean_dec(v_unused_750_);
v___x_698_ = v_val_693_;
v_isShared_699_ = v_isSharedCheck_749_;
goto v_resetjp_697_;
}
else
{
lean_inc(v_config_696_);
lean_inc(v_kind_695_);
lean_inc(v_name_694_);
lean_dec(v_val_693_);
v___x_698_ = lean_box(0);
v_isShared_699_ = v_isSharedCheck_749_;
goto v_resetjp_697_;
}
v_resetjp_697_:
{
uint8_t v___x_700_; 
v___x_700_ = l_Lean_Name_isAnonymous(v_kind_695_);
if (v___x_700_ == 0)
{
lean_object* v___x_701_; lean_object* v___x_702_; lean_object* v___x_703_; lean_object* v___x_705_; 
lean_dec(v_target_660_);
v___x_701_ = ((lean_object*)(l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux___closed__9));
lean_inc(v_kind_695_);
v___x_702_ = l_Lean_Name_str___override(v_kind_695_, v___x_701_);
v___x_703_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_703_, 0, v_a_665_);
lean_ctor_set(v___x_703_, 1, v_name_694_);
lean_ctor_set(v___x_703_, 2, v_config_696_);
lean_inc(v___x_702_);
lean_inc_ref(v___x_670_);
if (v_isShared_699_ == 0)
{
lean_ctor_set_tag(v___x_698_, 1);
lean_ctor_set(v___x_698_, 3, v___x_702_);
lean_ctor_set(v___x_698_, 2, v___x_703_);
lean_ctor_set(v___x_698_, 1, v_kind_695_);
lean_ctor_set(v___x_698_, 0, v___x_670_);
v___x_705_ = v___x_698_;
goto v_reusejp_704_;
}
else
{
lean_object* v_reuseFailAlloc_727_; 
v_reuseFailAlloc_727_ = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(v_reuseFailAlloc_727_, 0, v___x_670_);
lean_ctor_set(v_reuseFailAlloc_727_, 1, v_kind_695_);
lean_ctor_set(v_reuseFailAlloc_727_, 2, v___x_703_);
lean_ctor_set(v_reuseFailAlloc_727_, 3, v___x_702_);
v___x_705_ = v_reuseFailAlloc_727_;
goto v_reusejp_704_;
}
v_reusejp_704_:
{
lean_object* v___x_706_; 
lean_inc_ref(v_a_386_);
lean_inc(v_a_385_);
lean_inc(v_a_384_);
lean_inc(v_a_383_);
v___x_706_ = lean_apply_7(v_a_382_, v___x_705_, v_a_383_, v_a_384_, v_a_385_, v_a_386_, v_a_666_, lean_box(0));
if (lean_obj_tag(v___x_706_) == 0)
{
lean_object* v_a_707_; lean_object* v_a_708_; lean_object* v___x_710_; uint8_t v_isShared_711_; uint8_t v_isSharedCheck_717_; 
v_a_707_ = lean_ctor_get(v___x_706_, 0);
v_a_708_ = lean_ctor_get(v___x_706_, 1);
v_isSharedCheck_717_ = !lean_is_exclusive(v___x_706_);
if (v_isSharedCheck_717_ == 0)
{
v___x_710_ = v___x_706_;
v_isShared_711_ = v_isSharedCheck_717_;
goto v_resetjp_709_;
}
else
{
lean_inc(v_a_708_);
lean_inc(v_a_707_);
lean_dec(v___x_706_);
v___x_710_ = lean_box(0);
v_isShared_711_ = v_isSharedCheck_717_;
goto v_resetjp_709_;
}
v_resetjp_709_:
{
lean_object* v___x_712_; lean_object* v___x_713_; lean_object* v___x_715_; 
v___x_712_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_712_, 0, v___x_670_);
lean_ctor_set(v___x_712_, 1, v___x_702_);
v___x_713_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_713_, 0, v___x_712_);
lean_ctor_set(v___x_713_, 1, v_a_707_);
if (v_isShared_711_ == 0)
{
lean_ctor_set(v___x_710_, 0, v___x_713_);
v___x_715_ = v___x_710_;
goto v_reusejp_714_;
}
else
{
lean_object* v_reuseFailAlloc_716_; 
v_reuseFailAlloc_716_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_716_, 0, v___x_713_);
lean_ctor_set(v_reuseFailAlloc_716_, 1, v_a_708_);
v___x_715_ = v_reuseFailAlloc_716_;
goto v_reusejp_714_;
}
v_reusejp_714_:
{
return v___x_715_;
}
}
}
else
{
lean_object* v_a_718_; lean_object* v_a_719_; lean_object* v___x_721_; uint8_t v_isShared_722_; uint8_t v_isSharedCheck_726_; 
lean_dec(v___x_702_);
lean_dec_ref(v___x_670_);
v_a_718_ = lean_ctor_get(v___x_706_, 0);
v_a_719_ = lean_ctor_get(v___x_706_, 1);
v_isSharedCheck_726_ = !lean_is_exclusive(v___x_706_);
if (v_isSharedCheck_726_ == 0)
{
v___x_721_ = v___x_706_;
v_isShared_722_ = v_isSharedCheck_726_;
goto v_resetjp_720_;
}
else
{
lean_inc(v_a_719_);
lean_inc(v_a_718_);
lean_dec(v___x_706_);
v___x_721_ = lean_box(0);
v_isShared_722_ = v_isSharedCheck_726_;
goto v_resetjp_720_;
}
v_resetjp_720_:
{
lean_object* v___x_724_; 
if (v_isShared_722_ == 0)
{
v___x_724_ = v___x_721_;
goto v_reusejp_723_;
}
else
{
lean_object* v_reuseFailAlloc_725_; 
v_reuseFailAlloc_725_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_725_, 0, v_a_718_);
lean_ctor_set(v_reuseFailAlloc_725_, 1, v_a_719_);
v___x_724_ = v_reuseFailAlloc_725_;
goto v_reusejp_723_;
}
v_reusejp_723_:
{
return v___x_724_;
}
}
}
}
}
else
{
lean_object* v___x_728_; lean_object* v___x_729_; 
lean_del_object(v___x_698_);
lean_dec(v_config_696_);
lean_dec(v_kind_695_);
lean_dec(v_name_694_);
v___x_728_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_728_, 0, v_a_665_);
lean_ctor_set(v___x_728_, 1, v_target_660_);
lean_inc_ref(v_a_386_);
lean_inc(v_a_385_);
lean_inc(v_a_384_);
lean_inc(v_a_383_);
v___x_729_ = lean_apply_7(v_a_382_, v___x_728_, v_a_383_, v_a_384_, v_a_385_, v_a_386_, v_a_666_, lean_box(0));
if (lean_obj_tag(v___x_729_) == 0)
{
lean_object* v_a_730_; lean_object* v_a_731_; lean_object* v___x_733_; uint8_t v_isShared_734_; uint8_t v_isSharedCheck_739_; 
v_a_730_ = lean_ctor_get(v___x_729_, 0);
v_a_731_ = lean_ctor_get(v___x_729_, 1);
v_isSharedCheck_739_ = !lean_is_exclusive(v___x_729_);
if (v_isSharedCheck_739_ == 0)
{
v___x_733_ = v___x_729_;
v_isShared_734_ = v_isSharedCheck_739_;
goto v_resetjp_732_;
}
else
{
lean_inc(v_a_731_);
lean_inc(v_a_730_);
lean_dec(v___x_729_);
v___x_733_ = lean_box(0);
v_isShared_734_ = v_isSharedCheck_739_;
goto v_resetjp_732_;
}
v_resetjp_732_:
{
lean_object* v___x_735_; lean_object* v___x_737_; 
v___x_735_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_735_, 0, v___x_670_);
lean_ctor_set(v___x_735_, 1, v_a_730_);
if (v_isShared_734_ == 0)
{
lean_ctor_set(v___x_733_, 0, v___x_735_);
v___x_737_ = v___x_733_;
goto v_reusejp_736_;
}
else
{
lean_object* v_reuseFailAlloc_738_; 
v_reuseFailAlloc_738_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_738_, 0, v___x_735_);
lean_ctor_set(v_reuseFailAlloc_738_, 1, v_a_731_);
v___x_737_ = v_reuseFailAlloc_738_;
goto v_reusejp_736_;
}
v_reusejp_736_:
{
return v___x_737_;
}
}
}
else
{
lean_object* v_a_740_; lean_object* v_a_741_; lean_object* v___x_743_; uint8_t v_isShared_744_; uint8_t v_isSharedCheck_748_; 
lean_dec_ref(v___x_670_);
v_a_740_ = lean_ctor_get(v___x_729_, 0);
v_a_741_ = lean_ctor_get(v___x_729_, 1);
v_isSharedCheck_748_ = !lean_is_exclusive(v___x_729_);
if (v_isSharedCheck_748_ == 0)
{
v___x_743_ = v___x_729_;
v_isShared_744_ = v_isSharedCheck_748_;
goto v_resetjp_742_;
}
else
{
lean_inc(v_a_741_);
lean_inc(v_a_740_);
lean_dec(v___x_729_);
v___x_743_ = lean_box(0);
v_isShared_744_ = v_isSharedCheck_748_;
goto v_resetjp_742_;
}
v_resetjp_742_:
{
lean_object* v___x_746_; 
if (v_isShared_744_ == 0)
{
v___x_746_ = v___x_743_;
goto v_reusejp_745_;
}
else
{
lean_object* v_reuseFailAlloc_747_; 
v_reuseFailAlloc_747_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_747_, 0, v_a_740_);
lean_ctor_set(v_reuseFailAlloc_747_, 1, v_a_741_);
v___x_746_ = v_reuseFailAlloc_747_;
goto v_reusejp_745_;
}
v_reusejp_745_:
{
return v___x_746_;
}
}
}
}
}
}
else
{
lean_object* v___x_751_; lean_object* v___x_752_; lean_object* v___x_753_; lean_object* v___x_754_; lean_object* v___x_755_; uint8_t v___x_756_; lean_object* v___x_757_; lean_object* v___x_758_; lean_object* v___x_759_; lean_object* v___x_760_; uint8_t v___x_761_; lean_object* v___x_762_; lean_object* v___x_763_; lean_object* v___x_764_; lean_object* v___x_765_; 
lean_inc(v_baseName_667_);
lean_dec(v___x_692_);
lean_dec_ref(v___x_670_);
lean_dec_ref(v_a_665_);
lean_dec(v_target_660_);
lean_dec_ref(v_a_382_);
v___x_751_ = ((lean_object*)(l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__0));
v___x_752_ = l_Lake_PartialBuildKey_toString(v_root_379_);
v___x_753_ = lean_string_append(v___x_751_, v___x_752_);
lean_dec_ref(v___x_752_);
v___x_754_ = ((lean_object*)(l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux___closed__10));
v___x_755_ = lean_string_append(v___x_753_, v___x_754_);
v___x_756_ = 0;
v___x_757_ = l_Lean_Name_toString(v_baseName_667_, v___x_756_);
v___x_758_ = lean_string_append(v___x_755_, v___x_757_);
lean_dec_ref(v___x_757_);
v___x_759_ = ((lean_object*)(l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux___closed__8));
v___x_760_ = lean_string_append(v___x_758_, v___x_759_);
v___x_761_ = 3;
v___x_762_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_762_, 0, v___x_760_);
lean_ctor_set_uint8(v___x_762_, sizeof(void*)*1, v___x_761_);
v___x_763_ = lean_array_get_size(v_a_666_);
v___x_764_ = lean_array_push(v_a_666_, v___x_762_);
v___x_765_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_765_, 0, v___x_763_);
lean_ctor_set(v___x_765_, 1, v___x_764_);
return v___x_765_;
}
}
}
}
v___jp_767_:
{
lean_object* v___x_769_; lean_object* v___x_770_; lean_object* v___x_771_; lean_object* v___x_772_; lean_object* v___x_773_; uint8_t v___x_774_; lean_object* v___x_775_; lean_object* v___x_776_; lean_object* v___x_777_; lean_object* v___x_778_; uint8_t v___x_779_; lean_object* v___x_780_; lean_object* v___x_781_; lean_object* v___x_782_; 
v___x_769_ = ((lean_object*)(l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__0));
v___x_770_ = l_Lake_PartialBuildKey_toString(v_root_379_);
v___x_771_ = lean_string_append(v___x_769_, v___x_770_);
lean_dec_ref(v___x_770_);
v___x_772_ = ((lean_object*)(l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__1));
v___x_773_ = lean_string_append(v___x_771_, v___x_772_);
v___x_774_ = 1;
v___x_775_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_package_659_, v___x_774_);
v___x_776_ = lean_string_append(v___x_773_, v___x_775_);
lean_dec_ref(v___x_775_);
v___x_777_ = ((lean_object*)(l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__2));
v___x_778_ = lean_string_append(v___x_776_, v___x_777_);
v___x_779_ = 3;
v___x_780_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_780_, 0, v___x_778_);
lean_ctor_set_uint8(v___x_780_, sizeof(void*)*1, v___x_779_);
v___x_781_ = lean_array_get_size(v_a_768_);
v___x_782_ = lean_array_push(v_a_768_, v___x_780_);
v_a_390_ = v___x_781_;
v_a_391_ = v___x_782_;
goto v___jp_389_;
}
}
}
default: 
{
lean_object* v_target_841_; lean_object* v_facet_842_; lean_object* v___x_844_; uint8_t v_isShared_845_; uint8_t v_isSharedCheck_928_; 
v_target_841_ = lean_ctor_get(v_self_380_, 0);
v_facet_842_ = lean_ctor_get(v_self_380_, 1);
v_isSharedCheck_928_ = !lean_is_exclusive(v_self_380_);
if (v_isSharedCheck_928_ == 0)
{
v___x_844_ = v_self_380_;
v_isShared_845_ = v_isSharedCheck_928_;
goto v_resetjp_843_;
}
else
{
lean_inc(v_facet_842_);
lean_inc(v_target_841_);
lean_dec(v_self_380_);
v___x_844_ = lean_box(0);
v_isShared_845_ = v_isSharedCheck_928_;
goto v_resetjp_843_;
}
v_resetjp_843_:
{
uint8_t v___x_846_; lean_object* v___x_847_; 
v___x_846_ = 0;
lean_inc_ref(v_a_382_);
lean_inc_ref(v_target_841_);
lean_inc_ref(v_root_379_);
v___x_847_ = l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux(v_defaultPkg_378_, v_root_379_, v_target_841_, v___x_846_, v_a_382_, v_a_383_, v_a_384_, v_a_385_, v_a_386_, v_a_387_);
if (lean_obj_tag(v___x_847_) == 0)
{
lean_object* v_a_848_; lean_object* v_snd_849_; lean_object* v___x_851_; uint8_t v_isShared_852_; uint8_t v_isSharedCheck_926_; 
v_a_848_ = lean_ctor_get(v___x_847_, 0);
lean_inc(v_a_848_);
v_snd_849_ = lean_ctor_get(v_a_848_, 1);
v_isSharedCheck_926_ = !lean_is_exclusive(v_a_848_);
if (v_isSharedCheck_926_ == 0)
{
lean_object* v_unused_927_; 
v_unused_927_ = lean_ctor_get(v_a_848_, 0);
lean_dec(v_unused_927_);
v___x_851_ = v_a_848_;
v_isShared_852_ = v_isSharedCheck_926_;
goto v_resetjp_850_;
}
else
{
lean_inc(v_snd_849_);
lean_dec(v_a_848_);
v___x_851_ = lean_box(0);
v_isShared_852_ = v_isSharedCheck_926_;
goto v_resetjp_850_;
}
v_resetjp_850_:
{
lean_object* v_a_853_; lean_object* v___x_855_; uint8_t v_isShared_856_; uint8_t v_isSharedCheck_924_; 
v_a_853_ = lean_ctor_get(v___x_847_, 1);
v_isSharedCheck_924_ = !lean_is_exclusive(v___x_847_);
if (v_isSharedCheck_924_ == 0)
{
lean_object* v_unused_925_; 
v_unused_925_ = lean_ctor_get(v___x_847_, 0);
lean_dec(v_unused_925_);
v___x_855_ = v___x_847_;
v_isShared_856_ = v_isSharedCheck_924_;
goto v_resetjp_854_;
}
else
{
lean_inc(v_a_853_);
lean_dec(v___x_847_);
v___x_855_ = lean_box(0);
v_isShared_856_ = v_isSharedCheck_924_;
goto v_resetjp_854_;
}
v_resetjp_854_:
{
lean_object* v_kind_857_; lean_object* v___y_859_; uint8_t v___x_911_; 
v_kind_857_ = lean_ctor_get(v_snd_849_, 1);
v___x_911_ = l_Lean_Name_isAnonymous(v_kind_857_);
if (v___x_911_ == 0)
{
uint8_t v___x_912_; 
v___x_912_ = l_Lean_Name_isAnonymous(v_facet_842_);
if (v___x_912_ == 0)
{
v___y_859_ = v_facet_842_;
goto v___jp_858_;
}
else
{
lean_object* v___x_913_; 
lean_dec(v_facet_842_);
v___x_913_ = ((lean_object*)(l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux___closed__12));
v___y_859_ = v___x_913_;
goto v___jp_858_;
}
}
else
{
lean_object* v___x_914_; lean_object* v___x_915_; lean_object* v___x_916_; lean_object* v___x_917_; lean_object* v___x_918_; uint8_t v___x_919_; lean_object* v___x_920_; lean_object* v___x_921_; lean_object* v___x_922_; lean_object* v___x_923_; 
lean_del_object(v___x_855_);
lean_del_object(v___x_851_);
lean_dec(v_snd_849_);
lean_del_object(v___x_844_);
lean_dec(v_facet_842_);
lean_dec_ref(v_target_841_);
lean_dec_ref(v_a_382_);
v___x_914_ = ((lean_object*)(l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__0));
v___x_915_ = l_Lake_PartialBuildKey_toString(v_root_379_);
v___x_916_ = lean_string_append(v___x_914_, v___x_915_);
lean_dec_ref(v___x_915_);
v___x_917_ = ((lean_object*)(l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux___closed__13));
v___x_918_ = lean_string_append(v___x_916_, v___x_917_);
v___x_919_ = 3;
v___x_920_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_920_, 0, v___x_918_);
lean_ctor_set_uint8(v___x_920_, sizeof(void*)*1, v___x_919_);
v___x_921_ = lean_array_get_size(v_a_853_);
v___x_922_ = lean_array_push(v_a_853_, v___x_920_);
v___x_923_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_923_, 0, v___x_921_);
lean_ctor_set(v___x_923_, 1, v___x_922_);
return v___x_923_;
}
v___jp_858_:
{
lean_object* v_toContext_860_; lean_object* v___x_861_; lean_object* v___x_862_; lean_object* v___x_863_; lean_object* v___x_864_; lean_object* v___x_865_; lean_object* v___x_866_; lean_object* v___x_867_; lean_object* v___x_868_; lean_object* v___x_869_; lean_object* v___x_870_; lean_object* v___x_871_; lean_object* v___x_872_; lean_object* v___x_873_; lean_object* v___x_874_; lean_object* v___x_875_; lean_object* v_facetConfigs_876_; lean_object* v___x_877_; lean_object* v___x_878_; 
v_toContext_860_ = lean_ctor_get(v_a_386_, 1);
v___x_861_ = l_unsafeCast___redArg(v_toContext_860_);
v___x_862_ = l_unsafeCast___redArg(v___x_861_);
lean_dec(v___x_861_);
v___x_863_ = l_unsafeCast___redArg(v___x_862_);
lean_dec(v___x_862_);
v___x_864_ = l_unsafeCast___redArg(v___x_863_);
lean_dec(v___x_863_);
v___x_865_ = l_unsafeCast___redArg(v___x_864_);
lean_dec(v___x_864_);
v___x_866_ = l_unsafeCast___redArg(v___x_865_);
lean_dec(v___x_865_);
v___x_867_ = l_unsafeCast___redArg(v___x_866_);
lean_dec(v___x_866_);
v___x_868_ = l_unsafeCast___redArg(v___x_867_);
lean_dec(v___x_867_);
v___x_869_ = l_unsafeCast___redArg(v___x_868_);
lean_dec(v___x_868_);
v___x_870_ = l_unsafeCast___redArg(v___x_869_);
lean_dec(v___x_869_);
v___x_871_ = l_unsafeCast___redArg(v___x_870_);
lean_dec(v___x_870_);
v___x_872_ = l_unsafeCast___redArg(v___x_871_);
lean_dec(v___x_871_);
v___x_873_ = l_unsafeCast___redArg(v___x_872_);
lean_dec(v___x_872_);
v___x_874_ = l_unsafeCast___redArg(v___x_873_);
lean_dec(v___x_873_);
v___x_875_ = l_unsafeCast___redArg(v___x_874_);
lean_dec(v___x_874_);
v_facetConfigs_876_ = lean_ctor_get(v___x_875_, 6);
lean_inc(v_facetConfigs_876_);
lean_dec(v___x_875_);
lean_inc(v_kind_857_);
v___x_877_ = l_Lean_Name_append(v_kind_857_, v___y_859_);
v___x_878_ = l_Lake_FacetConfigMap_get_x3f(v___x_877_, v_facetConfigs_876_);
lean_dec(v_facetConfigs_876_);
if (lean_obj_tag(v___x_878_) == 1)
{
lean_object* v_val_879_; lean_object* v_outKind_880_; lean_object* v___f_881_; lean_object* v___x_882_; lean_object* v___x_883_; lean_object* v___x_884_; lean_object* v___x_886_; 
lean_dec_ref(v_root_379_);
v_val_879_ = lean_ctor_get(v___x_878_, 0);
lean_inc(v_val_879_);
lean_dec_ref_known(v___x_878_, 1);
v_outKind_880_ = lean_ctor_get(v_val_879_, 2);
lean_inc(v_outKind_880_);
lean_dec(v_val_879_);
lean_inc(v___x_877_);
lean_inc(v_kind_857_);
lean_inc_ref(v_target_841_);
v___f_881_ = lean_alloc_closure((void*)(l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux___lam__0___boxed), 11, 3);
lean_closure_set(v___f_881_, 0, v_target_841_);
lean_closure_set(v___f_881_, 1, v_kind_857_);
lean_closure_set(v___f_881_, 2, v___x_877_);
v___x_882_ = lean_unsigned_to_nat(0u);
v___x_883_ = lean_obj_once(&l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux___closed__3, &l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux___closed__3_once, _init_l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux___closed__3);
v___x_884_ = l_Lake_Job_bindM___redArg(v_outKind_880_, v_snd_849_, v___f_881_, v___x_882_, v___x_846_, v_a_382_, v_a_383_, v_a_384_, v_a_385_, v_a_386_, v___x_883_);
if (v_isShared_845_ == 0)
{
lean_ctor_set(v___x_844_, 1, v___x_877_);
v___x_886_ = v___x_844_;
goto v_reusejp_885_;
}
else
{
lean_object* v_reuseFailAlloc_893_; 
v_reuseFailAlloc_893_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v_reuseFailAlloc_893_, 0, v_target_841_);
lean_ctor_set(v_reuseFailAlloc_893_, 1, v___x_877_);
v___x_886_ = v_reuseFailAlloc_893_;
goto v_reusejp_885_;
}
v_reusejp_885_:
{
lean_object* v___x_888_; 
if (v_isShared_852_ == 0)
{
lean_ctor_set(v___x_851_, 1, v___x_884_);
lean_ctor_set(v___x_851_, 0, v___x_886_);
v___x_888_ = v___x_851_;
goto v_reusejp_887_;
}
else
{
lean_object* v_reuseFailAlloc_892_; 
v_reuseFailAlloc_892_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_892_, 0, v___x_886_);
lean_ctor_set(v_reuseFailAlloc_892_, 1, v___x_884_);
v___x_888_ = v_reuseFailAlloc_892_;
goto v_reusejp_887_;
}
v_reusejp_887_:
{
lean_object* v___x_890_; 
if (v_isShared_856_ == 0)
{
lean_ctor_set(v___x_855_, 0, v___x_888_);
v___x_890_ = v___x_855_;
goto v_reusejp_889_;
}
else
{
lean_object* v_reuseFailAlloc_891_; 
v_reuseFailAlloc_891_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_891_, 0, v___x_888_);
lean_ctor_set(v_reuseFailAlloc_891_, 1, v_a_853_);
v___x_890_ = v_reuseFailAlloc_891_;
goto v_reusejp_889_;
}
v_reusejp_889_:
{
return v___x_890_;
}
}
}
}
else
{
lean_object* v___x_894_; lean_object* v___x_895_; lean_object* v___x_896_; lean_object* v___x_897_; lean_object* v___x_898_; uint8_t v___x_899_; lean_object* v___x_900_; lean_object* v___x_901_; lean_object* v___x_902_; lean_object* v___x_903_; uint8_t v___x_904_; lean_object* v___x_905_; lean_object* v___x_906_; lean_object* v___x_907_; lean_object* v___x_909_; 
lean_dec(v___x_878_);
lean_del_object(v___x_851_);
lean_dec(v_snd_849_);
lean_del_object(v___x_844_);
lean_dec_ref(v_target_841_);
lean_dec_ref(v_a_382_);
v___x_894_ = ((lean_object*)(l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__0));
v___x_895_ = l_Lake_PartialBuildKey_toString(v_root_379_);
v___x_896_ = lean_string_append(v___x_894_, v___x_895_);
lean_dec_ref(v___x_895_);
v___x_897_ = ((lean_object*)(l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux___closed__11));
v___x_898_ = lean_string_append(v___x_896_, v___x_897_);
v___x_899_ = 1;
v___x_900_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_877_, v___x_899_);
v___x_901_ = lean_string_append(v___x_898_, v___x_900_);
lean_dec_ref(v___x_900_);
v___x_902_ = ((lean_object*)(l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux___closed__8));
v___x_903_ = lean_string_append(v___x_901_, v___x_902_);
v___x_904_ = 3;
v___x_905_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_905_, 0, v___x_903_);
lean_ctor_set_uint8(v___x_905_, sizeof(void*)*1, v___x_904_);
v___x_906_ = lean_array_get_size(v_a_853_);
v___x_907_ = lean_array_push(v_a_853_, v___x_905_);
if (v_isShared_856_ == 0)
{
lean_ctor_set_tag(v___x_855_, 1);
lean_ctor_set(v___x_855_, 1, v___x_907_);
lean_ctor_set(v___x_855_, 0, v___x_906_);
v___x_909_ = v___x_855_;
goto v_reusejp_908_;
}
else
{
lean_object* v_reuseFailAlloc_910_; 
v_reuseFailAlloc_910_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_910_, 0, v___x_906_);
lean_ctor_set(v_reuseFailAlloc_910_, 1, v___x_907_);
v___x_909_ = v_reuseFailAlloc_910_;
goto v_reusejp_908_;
}
v_reusejp_908_:
{
return v___x_909_;
}
}
}
}
}
}
else
{
lean_del_object(v___x_844_);
lean_dec(v_facet_842_);
lean_dec_ref(v_target_841_);
lean_dec_ref(v_a_382_);
lean_dec_ref(v_root_379_);
return v___x_847_;
}
}
}
}
v___jp_389_:
{
lean_object* v___x_392_; 
v___x_392_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_392_, 0, v_a_390_);
lean_ctor_set(v___x_392_, 1, v_a_391_);
return v___x_392_;
}
v___jp_393_:
{
lean_object* v___x_396_; 
v___x_396_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_396_, 0, v_a_394_);
lean_ctor_set(v___x_396_, 1, v_a_395_);
return v___x_396_;
}
v___jp_397_:
{
lean_object* v___x_400_; 
v___x_400_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_400_, 0, v_a_398_);
lean_ctor_set(v___x_400_, 1, v_a_399_);
return v___x_400_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux___boxed(lean_object* v_defaultPkg_929_, lean_object* v_root_930_, lean_object* v_self_931_, lean_object* v_facetless_932_, lean_object* v_a_933_, lean_object* v_a_934_, lean_object* v_a_935_, lean_object* v_a_936_, lean_object* v_a_937_, lean_object* v_a_938_, lean_object* v_a_939_){
_start:
{
uint8_t v_facetless_boxed_940_; lean_object* v_res_941_; 
v_facetless_boxed_940_ = lean_unbox(v_facetless_932_);
v_res_941_ = l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux(v_defaultPkg_929_, v_root_930_, v_self_931_, v_facetless_boxed_940_, v_a_933_, v_a_934_, v_a_935_, v_a_936_, v_a_937_, v_a_938_);
lean_dec_ref(v_a_937_);
lean_dec(v_a_936_);
lean_dec(v_a_935_);
lean_dec(v_a_934_);
return v_res_941_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_get_x3f___at___00__private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_spec__0(lean_object* v_00_u03b2_942_, lean_object* v_inst_943_, lean_object* v_t_944_, lean_object* v_k_945_){
_start:
{
lean_object* v___x_946_; 
v___x_946_ = l_Std_DTreeMap_Internal_Impl_get_x3f___at___00__private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_spec__0___redArg(v_t_944_, v_k_945_);
return v___x_946_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_get_x3f___at___00__private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_spec__0___boxed(lean_object* v_00_u03b2_947_, lean_object* v_inst_948_, lean_object* v_t_949_, lean_object* v_k_950_){
_start:
{
lean_object* v_res_951_; 
v_res_951_ = l_Std_DTreeMap_Internal_Impl_get_x3f___at___00__private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_spec__0(v_00_u03b2_947_, v_inst_948_, v_t_949_, v_k_950_);
lean_dec(v_k_950_);
lean_dec(v_t_949_);
return v_res_951_;
}
}
LEAN_EXPORT lean_object* l_Lake_PartialBuildKey_fetchInCore(lean_object* v_defaultPkg_952_, lean_object* v_self_953_, lean_object* v_a_954_, lean_object* v_a_955_, lean_object* v_a_956_, lean_object* v_a_957_, lean_object* v_a_958_, lean_object* v_a_959_){
_start:
{
uint8_t v___x_961_; lean_object* v___x_962_; 
v___x_961_ = 1;
lean_inc_ref(v_self_953_);
v___x_962_ = l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux(v_defaultPkg_952_, v_self_953_, v_self_953_, v___x_961_, v_a_954_, v_a_955_, v_a_956_, v_a_957_, v_a_958_, v_a_959_);
return v___x_962_;
}
}
LEAN_EXPORT lean_object* l_Lake_PartialBuildKey_fetchInCore___boxed(lean_object* v_defaultPkg_963_, lean_object* v_self_964_, lean_object* v_a_965_, lean_object* v_a_966_, lean_object* v_a_967_, lean_object* v_a_968_, lean_object* v_a_969_, lean_object* v_a_970_, lean_object* v_a_971_){
_start:
{
lean_object* v_res_972_; 
v_res_972_ = l_Lake_PartialBuildKey_fetchInCore(v_defaultPkg_963_, v_self_964_, v_a_965_, v_a_966_, v_a_967_, v_a_968_, v_a_969_, v_a_970_);
lean_dec_ref(v_a_969_);
lean_dec(v_a_968_);
lean_dec(v_a_967_);
lean_dec(v_a_966_);
return v_res_972_;
}
}
LEAN_EXPORT lean_object* l_Lake_PartialBuildKey_fetchIn(lean_object* v_defaultPkg_973_, lean_object* v_self_974_, lean_object* v_a_975_, lean_object* v_a_976_, lean_object* v_a_977_, lean_object* v_a_978_, lean_object* v_a_979_, lean_object* v_a_980_){
_start:
{
uint8_t v___x_982_; lean_object* v___x_983_; 
v___x_982_ = 1;
lean_inc_ref(v_self_974_);
v___x_983_ = l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux(v_defaultPkg_973_, v_self_974_, v_self_974_, v___x_982_, v_a_975_, v_a_976_, v_a_977_, v_a_978_, v_a_979_, v_a_980_);
if (lean_obj_tag(v___x_983_) == 0)
{
lean_object* v_a_984_; lean_object* v_a_985_; lean_object* v___x_987_; uint8_t v_isShared_988_; uint8_t v_isSharedCheck_994_; 
v_a_984_ = lean_ctor_get(v___x_983_, 0);
v_a_985_ = lean_ctor_get(v___x_983_, 1);
v_isSharedCheck_994_ = !lean_is_exclusive(v___x_983_);
if (v_isSharedCheck_994_ == 0)
{
v___x_987_ = v___x_983_;
v_isShared_988_ = v_isSharedCheck_994_;
goto v_resetjp_986_;
}
else
{
lean_inc(v_a_985_);
lean_inc(v_a_984_);
lean_dec(v___x_983_);
v___x_987_ = lean_box(0);
v_isShared_988_ = v_isSharedCheck_994_;
goto v_resetjp_986_;
}
v_resetjp_986_:
{
lean_object* v_snd_989_; lean_object* v___x_990_; lean_object* v___x_992_; 
v_snd_989_ = lean_ctor_get(v_a_984_, 1);
lean_inc(v_snd_989_);
lean_dec(v_a_984_);
v___x_990_ = l_Lake_Job_toOpaque___redArg(v_snd_989_);
if (v_isShared_988_ == 0)
{
lean_ctor_set(v___x_987_, 0, v___x_990_);
v___x_992_ = v___x_987_;
goto v_reusejp_991_;
}
else
{
lean_object* v_reuseFailAlloc_993_; 
v_reuseFailAlloc_993_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_993_, 0, v___x_990_);
lean_ctor_set(v_reuseFailAlloc_993_, 1, v_a_985_);
v___x_992_ = v_reuseFailAlloc_993_;
goto v_reusejp_991_;
}
v_reusejp_991_:
{
return v___x_992_;
}
}
}
else
{
lean_object* v_a_995_; lean_object* v_a_996_; lean_object* v___x_998_; uint8_t v_isShared_999_; uint8_t v_isSharedCheck_1003_; 
v_a_995_ = lean_ctor_get(v___x_983_, 0);
v_a_996_ = lean_ctor_get(v___x_983_, 1);
v_isSharedCheck_1003_ = !lean_is_exclusive(v___x_983_);
if (v_isSharedCheck_1003_ == 0)
{
v___x_998_ = v___x_983_;
v_isShared_999_ = v_isSharedCheck_1003_;
goto v_resetjp_997_;
}
else
{
lean_inc(v_a_996_);
lean_inc(v_a_995_);
lean_dec(v___x_983_);
v___x_998_ = lean_box(0);
v_isShared_999_ = v_isSharedCheck_1003_;
goto v_resetjp_997_;
}
v_resetjp_997_:
{
lean_object* v___x_1001_; 
if (v_isShared_999_ == 0)
{
v___x_1001_ = v___x_998_;
goto v_reusejp_1000_;
}
else
{
lean_object* v_reuseFailAlloc_1002_; 
v_reuseFailAlloc_1002_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1002_, 0, v_a_995_);
lean_ctor_set(v_reuseFailAlloc_1002_, 1, v_a_996_);
v___x_1001_ = v_reuseFailAlloc_1002_;
goto v_reusejp_1000_;
}
v_reusejp_1000_:
{
return v___x_1001_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_PartialBuildKey_fetchIn___boxed(lean_object* v_defaultPkg_1004_, lean_object* v_self_1005_, lean_object* v_a_1006_, lean_object* v_a_1007_, lean_object* v_a_1008_, lean_object* v_a_1009_, lean_object* v_a_1010_, lean_object* v_a_1011_, lean_object* v_a_1012_){
_start:
{
lean_object* v_res_1013_; 
v_res_1013_ = l_Lake_PartialBuildKey_fetchIn(v_defaultPkg_1004_, v_self_1005_, v_a_1006_, v_a_1007_, v_a_1008_, v_a_1009_, v_a_1010_, v_a_1011_);
lean_dec_ref(v_a_1010_);
lean_dec(v_a_1009_);
lean_dec(v_a_1008_);
lean_dec(v_a_1007_);
return v_res_1013_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Target_Fetch_0__Lake_BuildKey_fetchCore___lam__0(lean_object* v_target_1014_, lean_object* v_kind_1015_, lean_object* v_facet_1016_, lean_object* v_data_1017_, lean_object* v___y_1018_, lean_object* v___y_1019_, lean_object* v___y_1020_, lean_object* v___y_1021_, lean_object* v___y_1022_, lean_object* v___y_1023_){
_start:
{
lean_object* v_log_1025_; uint8_t v_action_1026_; uint8_t v_wantsRebuild_1027_; lean_object* v_trace_1028_; lean_object* v_buildTime_1029_; lean_object* v___x_1031_; uint8_t v_isShared_1032_; uint8_t v_isSharedCheck_1059_; 
v_log_1025_ = lean_ctor_get(v___y_1023_, 0);
v_action_1026_ = lean_ctor_get_uint8(v___y_1023_, sizeof(void*)*3);
v_wantsRebuild_1027_ = lean_ctor_get_uint8(v___y_1023_, sizeof(void*)*3 + 1);
v_trace_1028_ = lean_ctor_get(v___y_1023_, 1);
v_buildTime_1029_ = lean_ctor_get(v___y_1023_, 2);
v_isSharedCheck_1059_ = !lean_is_exclusive(v___y_1023_);
if (v_isSharedCheck_1059_ == 0)
{
v___x_1031_ = v___y_1023_;
v_isShared_1032_ = v_isSharedCheck_1059_;
goto v_resetjp_1030_;
}
else
{
lean_inc(v_buildTime_1029_);
lean_inc(v_trace_1028_);
lean_inc(v_log_1025_);
lean_dec(v___y_1023_);
v___x_1031_ = lean_box(0);
v_isShared_1032_ = v_isSharedCheck_1059_;
goto v_resetjp_1030_;
}
v_resetjp_1030_:
{
lean_object* v___x_1033_; lean_object* v___x_1034_; 
v___x_1033_ = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(v___x_1033_, 0, v_target_1014_);
lean_ctor_set(v___x_1033_, 1, v_kind_1015_);
lean_ctor_set(v___x_1033_, 2, v_data_1017_);
lean_ctor_set(v___x_1033_, 3, v_facet_1016_);
lean_inc_ref(v___y_1022_);
lean_inc(v___y_1021_);
lean_inc(v___y_1020_);
lean_inc(v___y_1019_);
v___x_1034_ = lean_apply_7(v___y_1018_, v___x_1033_, v___y_1019_, v___y_1020_, v___y_1021_, v___y_1022_, v_log_1025_, lean_box(0));
if (lean_obj_tag(v___x_1034_) == 0)
{
lean_object* v_a_1035_; lean_object* v_a_1036_; lean_object* v___x_1038_; uint8_t v_isShared_1039_; uint8_t v_isSharedCheck_1046_; 
v_a_1035_ = lean_ctor_get(v___x_1034_, 0);
v_a_1036_ = lean_ctor_get(v___x_1034_, 1);
v_isSharedCheck_1046_ = !lean_is_exclusive(v___x_1034_);
if (v_isSharedCheck_1046_ == 0)
{
v___x_1038_ = v___x_1034_;
v_isShared_1039_ = v_isSharedCheck_1046_;
goto v_resetjp_1037_;
}
else
{
lean_inc(v_a_1036_);
lean_inc(v_a_1035_);
lean_dec(v___x_1034_);
v___x_1038_ = lean_box(0);
v_isShared_1039_ = v_isSharedCheck_1046_;
goto v_resetjp_1037_;
}
v_resetjp_1037_:
{
lean_object* v___x_1041_; 
if (v_isShared_1032_ == 0)
{
lean_ctor_set(v___x_1031_, 0, v_a_1036_);
v___x_1041_ = v___x_1031_;
goto v_reusejp_1040_;
}
else
{
lean_object* v_reuseFailAlloc_1045_; 
v_reuseFailAlloc_1045_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_1045_, 0, v_a_1036_);
lean_ctor_set(v_reuseFailAlloc_1045_, 1, v_trace_1028_);
lean_ctor_set(v_reuseFailAlloc_1045_, 2, v_buildTime_1029_);
lean_ctor_set_uint8(v_reuseFailAlloc_1045_, sizeof(void*)*3, v_action_1026_);
lean_ctor_set_uint8(v_reuseFailAlloc_1045_, sizeof(void*)*3 + 1, v_wantsRebuild_1027_);
v___x_1041_ = v_reuseFailAlloc_1045_;
goto v_reusejp_1040_;
}
v_reusejp_1040_:
{
lean_object* v___x_1043_; 
if (v_isShared_1039_ == 0)
{
lean_ctor_set(v___x_1038_, 1, v___x_1041_);
v___x_1043_ = v___x_1038_;
goto v_reusejp_1042_;
}
else
{
lean_object* v_reuseFailAlloc_1044_; 
v_reuseFailAlloc_1044_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1044_, 0, v_a_1035_);
lean_ctor_set(v_reuseFailAlloc_1044_, 1, v___x_1041_);
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
lean_object* v_a_1047_; lean_object* v_a_1048_; lean_object* v___x_1050_; uint8_t v_isShared_1051_; uint8_t v_isSharedCheck_1058_; 
v_a_1047_ = lean_ctor_get(v___x_1034_, 0);
v_a_1048_ = lean_ctor_get(v___x_1034_, 1);
v_isSharedCheck_1058_ = !lean_is_exclusive(v___x_1034_);
if (v_isSharedCheck_1058_ == 0)
{
v___x_1050_ = v___x_1034_;
v_isShared_1051_ = v_isSharedCheck_1058_;
goto v_resetjp_1049_;
}
else
{
lean_inc(v_a_1048_);
lean_inc(v_a_1047_);
lean_dec(v___x_1034_);
v___x_1050_ = lean_box(0);
v_isShared_1051_ = v_isSharedCheck_1058_;
goto v_resetjp_1049_;
}
v_resetjp_1049_:
{
lean_object* v___x_1053_; 
if (v_isShared_1032_ == 0)
{
lean_ctor_set(v___x_1031_, 0, v_a_1048_);
v___x_1053_ = v___x_1031_;
goto v_reusejp_1052_;
}
else
{
lean_object* v_reuseFailAlloc_1057_; 
v_reuseFailAlloc_1057_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_1057_, 0, v_a_1048_);
lean_ctor_set(v_reuseFailAlloc_1057_, 1, v_trace_1028_);
lean_ctor_set(v_reuseFailAlloc_1057_, 2, v_buildTime_1029_);
lean_ctor_set_uint8(v_reuseFailAlloc_1057_, sizeof(void*)*3, v_action_1026_);
lean_ctor_set_uint8(v_reuseFailAlloc_1057_, sizeof(void*)*3 + 1, v_wantsRebuild_1027_);
v___x_1053_ = v_reuseFailAlloc_1057_;
goto v_reusejp_1052_;
}
v_reusejp_1052_:
{
lean_object* v___x_1055_; 
if (v_isShared_1051_ == 0)
{
lean_ctor_set(v___x_1050_, 1, v___x_1053_);
v___x_1055_ = v___x_1050_;
goto v_reusejp_1054_;
}
else
{
lean_object* v_reuseFailAlloc_1056_; 
v_reuseFailAlloc_1056_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1056_, 0, v_a_1047_);
lean_ctor_set(v_reuseFailAlloc_1056_, 1, v___x_1053_);
v___x_1055_ = v_reuseFailAlloc_1056_;
goto v_reusejp_1054_;
}
v_reusejp_1054_:
{
return v___x_1055_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Target_Fetch_0__Lake_BuildKey_fetchCore___lam__0___boxed(lean_object* v_target_1060_, lean_object* v_kind_1061_, lean_object* v_facet_1062_, lean_object* v_data_1063_, lean_object* v___y_1064_, lean_object* v___y_1065_, lean_object* v___y_1066_, lean_object* v___y_1067_, lean_object* v___y_1068_, lean_object* v___y_1069_, lean_object* v___y_1070_){
_start:
{
lean_object* v_res_1071_; 
v_res_1071_ = l___private_Lake_Build_Target_Fetch_0__Lake_BuildKey_fetchCore___lam__0(v_target_1060_, v_kind_1061_, v_facet_1062_, v_data_1063_, v___y_1064_, v___y_1065_, v___y_1066_, v___y_1067_, v___y_1068_, v___y_1069_);
lean_dec_ref(v___y_1068_);
lean_dec(v___y_1067_);
lean_dec(v___y_1066_);
lean_dec(v___y_1065_);
return v_res_1071_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Target_Fetch_0__Lake_BuildKey_fetchCore(lean_object* v_root_1072_, lean_object* v_self_1073_, lean_object* v_a_1074_, lean_object* v_a_1075_, lean_object* v_a_1076_, lean_object* v_a_1077_, lean_object* v_a_1078_, lean_object* v_a_1079_){
_start:
{
lean_object* v___x_1081_; 
v___x_1081_ = l_Lake_instDataKindModule;
switch(lean_obj_tag(v_self_1073_))
{
case 0:
{
lean_object* v_module_1082_; lean_object* v_toContext_1083_; lean_object* v___x_1084_; lean_object* v___x_1085_; lean_object* v___x_1086_; lean_object* v___x_1087_; lean_object* v___x_1088_; lean_object* v___x_1089_; lean_object* v___x_1090_; lean_object* v___x_1091_; lean_object* v___x_1092_; lean_object* v___x_1093_; lean_object* v___x_1094_; lean_object* v___x_1095_; lean_object* v___x_1096_; lean_object* v___x_1097_; lean_object* v___x_1098_; lean_object* v___x_1099_; 
lean_dec_ref(v_a_1074_);
v_module_1082_ = lean_ctor_get(v_self_1073_, 0);
lean_inc_n(v_module_1082_, 2);
lean_dec_ref_known(v_self_1073_, 1);
v_toContext_1083_ = lean_ctor_get(v_a_1078_, 1);
v___x_1084_ = l_unsafeCast___redArg(v_toContext_1083_);
v___x_1085_ = l_unsafeCast___redArg(v___x_1084_);
lean_dec(v___x_1084_);
v___x_1086_ = l_unsafeCast___redArg(v___x_1085_);
lean_dec(v___x_1085_);
v___x_1087_ = l_unsafeCast___redArg(v___x_1086_);
lean_dec(v___x_1086_);
v___x_1088_ = l_unsafeCast___redArg(v___x_1087_);
lean_dec(v___x_1087_);
v___x_1089_ = l_unsafeCast___redArg(v___x_1088_);
lean_dec(v___x_1088_);
v___x_1090_ = l_unsafeCast___redArg(v___x_1089_);
lean_dec(v___x_1089_);
v___x_1091_ = l_unsafeCast___redArg(v___x_1090_);
lean_dec(v___x_1090_);
v___x_1092_ = l_unsafeCast___redArg(v___x_1091_);
lean_dec(v___x_1091_);
v___x_1093_ = l_unsafeCast___redArg(v___x_1092_);
lean_dec(v___x_1092_);
v___x_1094_ = l_unsafeCast___redArg(v___x_1093_);
lean_dec(v___x_1093_);
v___x_1095_ = l_unsafeCast___redArg(v___x_1094_);
lean_dec(v___x_1094_);
v___x_1096_ = l_unsafeCast___redArg(v___x_1095_);
lean_dec(v___x_1095_);
v___x_1097_ = l_unsafeCast___redArg(v___x_1096_);
lean_dec(v___x_1096_);
v___x_1098_ = l_unsafeCast___redArg(v___x_1097_);
lean_dec(v___x_1097_);
v___x_1099_ = l_Lake_Workspace_findModule_x3f(v_module_1082_, v___x_1098_);
lean_dec(v___x_1098_);
if (lean_obj_tag(v___x_1099_) == 1)
{
lean_object* v_val_1100_; lean_object* v___x_1101_; uint8_t v___x_1102_; lean_object* v___x_1103_; lean_object* v___x_1104_; lean_object* v___x_1105_; lean_object* v___x_1106_; lean_object* v___x_1107_; 
lean_dec(v_module_1082_);
lean_dec_ref(v_root_1072_);
v_val_1100_ = lean_ctor_get(v___x_1099_, 0);
lean_inc(v_val_1100_);
lean_dec_ref_known(v___x_1099_, 1);
v___x_1101_ = ((lean_object*)(l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux___closed__1));
v___x_1102_ = 0;
v___x_1103_ = lean_obj_once(&l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux___closed__4, &l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux___closed__4_once, _init_l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux___closed__4);
v___x_1104_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1104_, 0, v_val_1100_);
lean_ctor_set(v___x_1104_, 1, v___x_1103_);
v___x_1105_ = lean_task_pure(v___x_1104_);
v___x_1106_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_1106_, 0, v___x_1105_);
lean_ctor_set(v___x_1106_, 1, v___x_1081_);
lean_ctor_set(v___x_1106_, 2, v___x_1101_);
lean_ctor_set_uint8(v___x_1106_, sizeof(void*)*3, v___x_1102_);
v___x_1107_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1107_, 0, v___x_1106_);
lean_ctor_set(v___x_1107_, 1, v_a_1079_);
return v___x_1107_;
}
else
{
lean_object* v___x_1108_; lean_object* v___x_1109_; lean_object* v___x_1110_; lean_object* v___x_1111_; lean_object* v___x_1112_; uint8_t v___x_1113_; lean_object* v___x_1114_; lean_object* v___x_1115_; lean_object* v___x_1116_; lean_object* v___x_1117_; uint8_t v___x_1118_; lean_object* v___x_1119_; lean_object* v___x_1120_; lean_object* v___x_1121_; lean_object* v___x_1122_; 
lean_dec(v___x_1099_);
v___x_1108_ = ((lean_object*)(l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__0));
v___x_1109_ = l_Lake_BuildKey_toString(v_root_1072_);
v___x_1110_ = lean_string_append(v___x_1108_, v___x_1109_);
lean_dec_ref(v___x_1109_);
v___x_1111_ = ((lean_object*)(l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux___closed__5));
v___x_1112_ = lean_string_append(v___x_1110_, v___x_1111_);
v___x_1113_ = 1;
v___x_1114_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_module_1082_, v___x_1113_);
v___x_1115_ = lean_string_append(v___x_1112_, v___x_1114_);
lean_dec_ref(v___x_1114_);
v___x_1116_ = ((lean_object*)(l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__2));
v___x_1117_ = lean_string_append(v___x_1115_, v___x_1116_);
v___x_1118_ = 3;
v___x_1119_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1119_, 0, v___x_1117_);
lean_ctor_set_uint8(v___x_1119_, sizeof(void*)*1, v___x_1118_);
v___x_1120_ = lean_array_get_size(v_a_1079_);
v___x_1121_ = lean_array_push(v_a_1079_, v___x_1119_);
v___x_1122_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1122_, 0, v___x_1120_);
lean_ctor_set(v___x_1122_, 1, v___x_1121_);
return v___x_1122_;
}
}
case 1:
{
lean_object* v_package_1123_; lean_object* v_toContext_1124_; lean_object* v___x_1125_; lean_object* v___x_1126_; lean_object* v___x_1127_; lean_object* v___x_1128_; lean_object* v___x_1129_; lean_object* v___x_1130_; lean_object* v___x_1131_; lean_object* v___x_1132_; lean_object* v___x_1133_; lean_object* v___x_1134_; lean_object* v___x_1135_; lean_object* v___x_1136_; lean_object* v___x_1137_; lean_object* v___x_1138_; lean_object* v___x_1139_; lean_object* v_packageMap_1140_; lean_object* v___x_1141_; 
lean_dec_ref(v_a_1074_);
v_package_1123_ = lean_ctor_get(v_self_1073_, 0);
lean_inc(v_package_1123_);
lean_dec_ref_known(v_self_1073_, 1);
v_toContext_1124_ = lean_ctor_get(v_a_1078_, 1);
v___x_1125_ = l_unsafeCast___redArg(v_toContext_1124_);
v___x_1126_ = l_unsafeCast___redArg(v___x_1125_);
lean_dec(v___x_1125_);
v___x_1127_ = l_unsafeCast___redArg(v___x_1126_);
lean_dec(v___x_1126_);
v___x_1128_ = l_unsafeCast___redArg(v___x_1127_);
lean_dec(v___x_1127_);
v___x_1129_ = l_unsafeCast___redArg(v___x_1128_);
lean_dec(v___x_1128_);
v___x_1130_ = l_unsafeCast___redArg(v___x_1129_);
lean_dec(v___x_1129_);
v___x_1131_ = l_unsafeCast___redArg(v___x_1130_);
lean_dec(v___x_1130_);
v___x_1132_ = l_unsafeCast___redArg(v___x_1131_);
lean_dec(v___x_1131_);
v___x_1133_ = l_unsafeCast___redArg(v___x_1132_);
lean_dec(v___x_1132_);
v___x_1134_ = l_unsafeCast___redArg(v___x_1133_);
lean_dec(v___x_1133_);
v___x_1135_ = l_unsafeCast___redArg(v___x_1134_);
lean_dec(v___x_1134_);
v___x_1136_ = l_unsafeCast___redArg(v___x_1135_);
lean_dec(v___x_1135_);
v___x_1137_ = l_unsafeCast___redArg(v___x_1136_);
lean_dec(v___x_1136_);
v___x_1138_ = l_unsafeCast___redArg(v___x_1137_);
lean_dec(v___x_1137_);
v___x_1139_ = l_unsafeCast___redArg(v___x_1138_);
lean_dec(v___x_1138_);
v_packageMap_1140_ = lean_ctor_get(v___x_1139_, 5);
lean_inc(v_packageMap_1140_);
lean_dec(v___x_1139_);
v___x_1141_ = l_Std_DTreeMap_Internal_Impl_get_x3f___at___00__private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_spec__0___redArg(v_packageMap_1140_, v_package_1123_);
lean_dec(v_packageMap_1140_);
if (lean_obj_tag(v___x_1141_) == 1)
{
lean_object* v_val_1142_; lean_object* v___x_1143_; lean_object* v___x_1144_; uint8_t v___x_1145_; lean_object* v___x_1146_; lean_object* v___x_1147_; lean_object* v___x_1148_; lean_object* v___x_1149_; lean_object* v___x_1150_; 
lean_dec(v_package_1123_);
lean_dec_ref(v_root_1072_);
v_val_1142_ = lean_ctor_get(v___x_1141_, 0);
lean_inc(v_val_1142_);
lean_dec_ref_known(v___x_1141_, 1);
v___x_1143_ = l_Lake_instDataKindPackage;
v___x_1144_ = ((lean_object*)(l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux___closed__1));
v___x_1145_ = 0;
v___x_1146_ = lean_obj_once(&l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux___closed__4, &l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux___closed__4_once, _init_l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux___closed__4);
v___x_1147_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1147_, 0, v_val_1142_);
lean_ctor_set(v___x_1147_, 1, v___x_1146_);
v___x_1148_ = lean_task_pure(v___x_1147_);
v___x_1149_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_1149_, 0, v___x_1148_);
lean_ctor_set(v___x_1149_, 1, v___x_1143_);
lean_ctor_set(v___x_1149_, 2, v___x_1144_);
lean_ctor_set_uint8(v___x_1149_, sizeof(void*)*3, v___x_1145_);
v___x_1150_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1150_, 0, v___x_1149_);
lean_ctor_set(v___x_1150_, 1, v_a_1079_);
return v___x_1150_;
}
else
{
lean_object* v___x_1151_; lean_object* v___x_1152_; lean_object* v___x_1153_; lean_object* v___x_1154_; lean_object* v___x_1155_; uint8_t v___x_1156_; lean_object* v___x_1157_; lean_object* v___x_1158_; lean_object* v___x_1159_; lean_object* v___x_1160_; uint8_t v___x_1161_; lean_object* v___x_1162_; lean_object* v___x_1163_; lean_object* v___x_1164_; lean_object* v___x_1165_; 
lean_dec(v___x_1141_);
v___x_1151_ = ((lean_object*)(l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__0));
v___x_1152_ = l_Lake_BuildKey_toString(v_root_1072_);
v___x_1153_ = lean_string_append(v___x_1151_, v___x_1152_);
lean_dec_ref(v___x_1152_);
v___x_1154_ = ((lean_object*)(l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__1));
v___x_1155_ = lean_string_append(v___x_1153_, v___x_1154_);
v___x_1156_ = 1;
v___x_1157_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_package_1123_, v___x_1156_);
v___x_1158_ = lean_string_append(v___x_1155_, v___x_1157_);
lean_dec_ref(v___x_1157_);
v___x_1159_ = ((lean_object*)(l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__2));
v___x_1160_ = lean_string_append(v___x_1158_, v___x_1159_);
v___x_1161_ = 3;
v___x_1162_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1162_, 0, v___x_1160_);
lean_ctor_set_uint8(v___x_1162_, sizeof(void*)*1, v___x_1161_);
v___x_1163_ = lean_array_get_size(v_a_1079_);
v___x_1164_ = lean_array_push(v_a_1079_, v___x_1162_);
v___x_1165_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1165_, 0, v___x_1163_);
lean_ctor_set(v___x_1165_, 1, v___x_1164_);
return v___x_1165_;
}
}
case 2:
{
lean_object* v_package_1166_; lean_object* v_module_1167_; lean_object* v___x_1169_; uint8_t v_isShared_1170_; uint8_t v_isSharedCheck_1241_; 
lean_dec_ref(v_a_1074_);
v_package_1166_ = lean_ctor_get(v_self_1073_, 0);
v_module_1167_ = lean_ctor_get(v_self_1073_, 1);
v_isSharedCheck_1241_ = !lean_is_exclusive(v_self_1073_);
if (v_isSharedCheck_1241_ == 0)
{
v___x_1169_ = v_self_1073_;
v_isShared_1170_ = v_isSharedCheck_1241_;
goto v_resetjp_1168_;
}
else
{
lean_inc(v_module_1167_);
lean_inc(v_package_1166_);
lean_dec(v_self_1073_);
v___x_1169_ = lean_box(0);
v_isShared_1170_ = v_isSharedCheck_1241_;
goto v_resetjp_1168_;
}
v_resetjp_1168_:
{
lean_object* v_toContext_1171_; lean_object* v___x_1172_; lean_object* v___x_1173_; lean_object* v___x_1174_; lean_object* v___x_1175_; lean_object* v___x_1176_; lean_object* v___x_1177_; lean_object* v___x_1178_; lean_object* v___x_1179_; lean_object* v___x_1180_; lean_object* v___x_1181_; lean_object* v___x_1182_; lean_object* v___x_1183_; lean_object* v___x_1184_; lean_object* v___x_1185_; lean_object* v___x_1186_; lean_object* v_packageMap_1187_; lean_object* v___x_1188_; 
v_toContext_1171_ = lean_ctor_get(v_a_1078_, 1);
v___x_1172_ = l_unsafeCast___redArg(v_toContext_1171_);
v___x_1173_ = l_unsafeCast___redArg(v___x_1172_);
lean_dec(v___x_1172_);
v___x_1174_ = l_unsafeCast___redArg(v___x_1173_);
lean_dec(v___x_1173_);
v___x_1175_ = l_unsafeCast___redArg(v___x_1174_);
lean_dec(v___x_1174_);
v___x_1176_ = l_unsafeCast___redArg(v___x_1175_);
lean_dec(v___x_1175_);
v___x_1177_ = l_unsafeCast___redArg(v___x_1176_);
lean_dec(v___x_1176_);
v___x_1178_ = l_unsafeCast___redArg(v___x_1177_);
lean_dec(v___x_1177_);
v___x_1179_ = l_unsafeCast___redArg(v___x_1178_);
lean_dec(v___x_1178_);
v___x_1180_ = l_unsafeCast___redArg(v___x_1179_);
lean_dec(v___x_1179_);
v___x_1181_ = l_unsafeCast___redArg(v___x_1180_);
lean_dec(v___x_1180_);
v___x_1182_ = l_unsafeCast___redArg(v___x_1181_);
lean_dec(v___x_1181_);
v___x_1183_ = l_unsafeCast___redArg(v___x_1182_);
lean_dec(v___x_1182_);
v___x_1184_ = l_unsafeCast___redArg(v___x_1183_);
lean_dec(v___x_1183_);
v___x_1185_ = l_unsafeCast___redArg(v___x_1184_);
lean_dec(v___x_1184_);
v___x_1186_ = l_unsafeCast___redArg(v___x_1185_);
lean_dec(v___x_1185_);
v_packageMap_1187_ = lean_ctor_get(v___x_1186_, 5);
lean_inc(v_packageMap_1187_);
lean_dec(v___x_1186_);
v___x_1188_ = l_Std_DTreeMap_Internal_Impl_get_x3f___at___00__private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_spec__0___redArg(v_packageMap_1187_, v_package_1166_);
lean_dec(v_packageMap_1187_);
if (lean_obj_tag(v___x_1188_) == 1)
{
lean_object* v_val_1189_; lean_object* v___x_1190_; 
lean_dec(v_package_1166_);
v_val_1189_ = lean_ctor_get(v___x_1188_, 0);
lean_inc_n(v_val_1189_, 2);
lean_dec_ref_known(v___x_1188_, 1);
lean_inc(v_module_1167_);
v___x_1190_ = l_Lake_Package_findTargetModule_x3f(v_module_1167_, v_val_1189_);
if (lean_obj_tag(v___x_1190_) == 1)
{
lean_object* v_val_1191_; lean_object* v___x_1192_; uint8_t v___x_1193_; lean_object* v___x_1194_; lean_object* v___x_1196_; 
lean_dec(v_val_1189_);
lean_dec(v_module_1167_);
lean_dec_ref(v_root_1072_);
v_val_1191_ = lean_ctor_get(v___x_1190_, 0);
lean_inc(v_val_1191_);
lean_dec_ref_known(v___x_1190_, 1);
v___x_1192_ = ((lean_object*)(l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux___closed__1));
v___x_1193_ = 0;
v___x_1194_ = lean_obj_once(&l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux___closed__4, &l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux___closed__4_once, _init_l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux___closed__4);
if (v_isShared_1170_ == 0)
{
lean_ctor_set_tag(v___x_1169_, 0);
lean_ctor_set(v___x_1169_, 1, v___x_1194_);
lean_ctor_set(v___x_1169_, 0, v_val_1191_);
v___x_1196_ = v___x_1169_;
goto v_reusejp_1195_;
}
else
{
lean_object* v_reuseFailAlloc_1200_; 
v_reuseFailAlloc_1200_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1200_, 0, v_val_1191_);
lean_ctor_set(v_reuseFailAlloc_1200_, 1, v___x_1194_);
v___x_1196_ = v_reuseFailAlloc_1200_;
goto v_reusejp_1195_;
}
v_reusejp_1195_:
{
lean_object* v___x_1197_; lean_object* v___x_1198_; lean_object* v___x_1199_; 
v___x_1197_ = lean_task_pure(v___x_1196_);
v___x_1198_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_1198_, 0, v___x_1197_);
lean_ctor_set(v___x_1198_, 1, v___x_1081_);
lean_ctor_set(v___x_1198_, 2, v___x_1192_);
lean_ctor_set_uint8(v___x_1198_, sizeof(void*)*3, v___x_1193_);
v___x_1199_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1199_, 0, v___x_1198_);
lean_ctor_set(v___x_1199_, 1, v_a_1079_);
return v___x_1199_;
}
}
else
{
lean_object* v_baseName_1201_; lean_object* v___x_1202_; lean_object* v___x_1203_; lean_object* v___x_1204_; lean_object* v___x_1205_; lean_object* v___x_1206_; uint8_t v___x_1207_; lean_object* v___x_1208_; lean_object* v___x_1209_; lean_object* v___x_1210_; lean_object* v___x_1211_; uint8_t v___x_1212_; lean_object* v___x_1213_; lean_object* v___x_1214_; lean_object* v___x_1215_; lean_object* v___x_1216_; uint8_t v___x_1217_; lean_object* v___x_1218_; lean_object* v___x_1219_; lean_object* v___x_1220_; lean_object* v___x_1222_; 
lean_dec(v___x_1190_);
v_baseName_1201_ = lean_ctor_get(v_val_1189_, 1);
lean_inc(v_baseName_1201_);
lean_dec(v_val_1189_);
v___x_1202_ = ((lean_object*)(l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__0));
v___x_1203_ = l_Lake_BuildKey_toString(v_root_1072_);
v___x_1204_ = lean_string_append(v___x_1202_, v___x_1203_);
lean_dec_ref(v___x_1203_);
v___x_1205_ = ((lean_object*)(l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux___closed__5));
v___x_1206_ = lean_string_append(v___x_1204_, v___x_1205_);
v___x_1207_ = 1;
v___x_1208_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_module_1167_, v___x_1207_);
v___x_1209_ = lean_string_append(v___x_1206_, v___x_1208_);
lean_dec_ref(v___x_1208_);
v___x_1210_ = ((lean_object*)(l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux___closed__7));
v___x_1211_ = lean_string_append(v___x_1209_, v___x_1210_);
v___x_1212_ = 0;
v___x_1213_ = l_Lean_Name_toString(v_baseName_1201_, v___x_1212_);
v___x_1214_ = lean_string_append(v___x_1211_, v___x_1213_);
lean_dec_ref(v___x_1213_);
v___x_1215_ = ((lean_object*)(l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux___closed__8));
v___x_1216_ = lean_string_append(v___x_1214_, v___x_1215_);
v___x_1217_ = 3;
v___x_1218_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1218_, 0, v___x_1216_);
lean_ctor_set_uint8(v___x_1218_, sizeof(void*)*1, v___x_1217_);
v___x_1219_ = lean_array_get_size(v_a_1079_);
v___x_1220_ = lean_array_push(v_a_1079_, v___x_1218_);
if (v_isShared_1170_ == 0)
{
lean_ctor_set_tag(v___x_1169_, 1);
lean_ctor_set(v___x_1169_, 1, v___x_1220_);
lean_ctor_set(v___x_1169_, 0, v___x_1219_);
v___x_1222_ = v___x_1169_;
goto v_reusejp_1221_;
}
else
{
lean_object* v_reuseFailAlloc_1223_; 
v_reuseFailAlloc_1223_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1223_, 0, v___x_1219_);
lean_ctor_set(v_reuseFailAlloc_1223_, 1, v___x_1220_);
v___x_1222_ = v_reuseFailAlloc_1223_;
goto v_reusejp_1221_;
}
v_reusejp_1221_:
{
return v___x_1222_;
}
}
}
else
{
lean_object* v___x_1224_; lean_object* v___x_1225_; lean_object* v___x_1226_; lean_object* v___x_1227_; lean_object* v___x_1228_; uint8_t v___x_1229_; lean_object* v___x_1230_; lean_object* v___x_1231_; lean_object* v___x_1232_; lean_object* v___x_1233_; uint8_t v___x_1234_; lean_object* v___x_1235_; lean_object* v___x_1236_; lean_object* v___x_1237_; lean_object* v___x_1239_; 
lean_dec(v___x_1188_);
lean_dec(v_module_1167_);
v___x_1224_ = ((lean_object*)(l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__0));
v___x_1225_ = l_Lake_BuildKey_toString(v_root_1072_);
v___x_1226_ = lean_string_append(v___x_1224_, v___x_1225_);
lean_dec_ref(v___x_1225_);
v___x_1227_ = ((lean_object*)(l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__1));
v___x_1228_ = lean_string_append(v___x_1226_, v___x_1227_);
v___x_1229_ = 1;
v___x_1230_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_package_1166_, v___x_1229_);
v___x_1231_ = lean_string_append(v___x_1228_, v___x_1230_);
lean_dec_ref(v___x_1230_);
v___x_1232_ = ((lean_object*)(l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__2));
v___x_1233_ = lean_string_append(v___x_1231_, v___x_1232_);
v___x_1234_ = 3;
v___x_1235_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1235_, 0, v___x_1233_);
lean_ctor_set_uint8(v___x_1235_, sizeof(void*)*1, v___x_1234_);
v___x_1236_ = lean_array_get_size(v_a_1079_);
v___x_1237_ = lean_array_push(v_a_1079_, v___x_1235_);
if (v_isShared_1170_ == 0)
{
lean_ctor_set_tag(v___x_1169_, 1);
lean_ctor_set(v___x_1169_, 1, v___x_1237_);
lean_ctor_set(v___x_1169_, 0, v___x_1236_);
v___x_1239_ = v___x_1169_;
goto v_reusejp_1238_;
}
else
{
lean_object* v_reuseFailAlloc_1240_; 
v_reuseFailAlloc_1240_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1240_, 0, v___x_1236_);
lean_ctor_set(v_reuseFailAlloc_1240_, 1, v___x_1237_);
v___x_1239_ = v_reuseFailAlloc_1240_;
goto v_reusejp_1238_;
}
v_reusejp_1238_:
{
return v___x_1239_;
}
}
}
}
case 3:
{
lean_object* v_package_1242_; lean_object* v_target_1243_; lean_object* v___x_1245_; uint8_t v_isShared_1246_; uint8_t v_isSharedCheck_1287_; 
v_package_1242_ = lean_ctor_get(v_self_1073_, 0);
v_target_1243_ = lean_ctor_get(v_self_1073_, 1);
v_isSharedCheck_1287_ = !lean_is_exclusive(v_self_1073_);
if (v_isSharedCheck_1287_ == 0)
{
v___x_1245_ = v_self_1073_;
v_isShared_1246_ = v_isSharedCheck_1287_;
goto v_resetjp_1244_;
}
else
{
lean_inc(v_target_1243_);
lean_inc(v_package_1242_);
lean_dec(v_self_1073_);
v___x_1245_ = lean_box(0);
v_isShared_1246_ = v_isSharedCheck_1287_;
goto v_resetjp_1244_;
}
v_resetjp_1244_:
{
lean_object* v_toContext_1247_; lean_object* v___x_1248_; lean_object* v___x_1249_; lean_object* v___x_1250_; lean_object* v___x_1251_; lean_object* v___x_1252_; lean_object* v___x_1253_; lean_object* v___x_1254_; lean_object* v___x_1255_; lean_object* v___x_1256_; lean_object* v___x_1257_; lean_object* v___x_1258_; lean_object* v___x_1259_; lean_object* v___x_1260_; lean_object* v___x_1261_; lean_object* v___x_1262_; lean_object* v_packageMap_1263_; lean_object* v___x_1264_; 
v_toContext_1247_ = lean_ctor_get(v_a_1078_, 1);
v___x_1248_ = l_unsafeCast___redArg(v_toContext_1247_);
v___x_1249_ = l_unsafeCast___redArg(v___x_1248_);
lean_dec(v___x_1248_);
v___x_1250_ = l_unsafeCast___redArg(v___x_1249_);
lean_dec(v___x_1249_);
v___x_1251_ = l_unsafeCast___redArg(v___x_1250_);
lean_dec(v___x_1250_);
v___x_1252_ = l_unsafeCast___redArg(v___x_1251_);
lean_dec(v___x_1251_);
v___x_1253_ = l_unsafeCast___redArg(v___x_1252_);
lean_dec(v___x_1252_);
v___x_1254_ = l_unsafeCast___redArg(v___x_1253_);
lean_dec(v___x_1253_);
v___x_1255_ = l_unsafeCast___redArg(v___x_1254_);
lean_dec(v___x_1254_);
v___x_1256_ = l_unsafeCast___redArg(v___x_1255_);
lean_dec(v___x_1255_);
v___x_1257_ = l_unsafeCast___redArg(v___x_1256_);
lean_dec(v___x_1256_);
v___x_1258_ = l_unsafeCast___redArg(v___x_1257_);
lean_dec(v___x_1257_);
v___x_1259_ = l_unsafeCast___redArg(v___x_1258_);
lean_dec(v___x_1258_);
v___x_1260_ = l_unsafeCast___redArg(v___x_1259_);
lean_dec(v___x_1259_);
v___x_1261_ = l_unsafeCast___redArg(v___x_1260_);
lean_dec(v___x_1260_);
v___x_1262_ = l_unsafeCast___redArg(v___x_1261_);
lean_dec(v___x_1261_);
v_packageMap_1263_ = lean_ctor_get(v___x_1262_, 5);
lean_inc(v_packageMap_1263_);
lean_dec(v___x_1262_);
v___x_1264_ = l_Std_DTreeMap_Internal_Impl_get_x3f___at___00__private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_spec__0___redArg(v_packageMap_1263_, v_package_1242_);
lean_dec(v_packageMap_1263_);
if (lean_obj_tag(v___x_1264_) == 1)
{
lean_object* v_val_1265_; lean_object* v___x_1267_; 
lean_dec(v_package_1242_);
lean_dec_ref(v_root_1072_);
v_val_1265_ = lean_ctor_get(v___x_1264_, 0);
lean_inc(v_val_1265_);
lean_dec_ref_known(v___x_1264_, 1);
if (v_isShared_1246_ == 0)
{
lean_ctor_set_tag(v___x_1245_, 0);
lean_ctor_set(v___x_1245_, 0, v_val_1265_);
v___x_1267_ = v___x_1245_;
goto v_reusejp_1266_;
}
else
{
lean_object* v_reuseFailAlloc_1269_; 
v_reuseFailAlloc_1269_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1269_, 0, v_val_1265_);
lean_ctor_set(v_reuseFailAlloc_1269_, 1, v_target_1243_);
v___x_1267_ = v_reuseFailAlloc_1269_;
goto v_reusejp_1266_;
}
v_reusejp_1266_:
{
lean_object* v___x_1268_; 
lean_inc_ref(v_a_1078_);
lean_inc(v_a_1077_);
lean_inc(v_a_1076_);
lean_inc(v_a_1075_);
v___x_1268_ = lean_apply_7(v_a_1074_, v___x_1267_, v_a_1075_, v_a_1076_, v_a_1077_, v_a_1078_, v_a_1079_, lean_box(0));
return v___x_1268_;
}
}
else
{
lean_object* v___x_1270_; lean_object* v___x_1271_; lean_object* v___x_1272_; lean_object* v___x_1273_; lean_object* v___x_1274_; uint8_t v___x_1275_; lean_object* v___x_1276_; lean_object* v___x_1277_; lean_object* v___x_1278_; lean_object* v___x_1279_; uint8_t v___x_1280_; lean_object* v___x_1281_; lean_object* v___x_1282_; lean_object* v___x_1283_; lean_object* v___x_1285_; 
lean_dec(v___x_1264_);
lean_dec(v_target_1243_);
lean_dec_ref(v_a_1074_);
v___x_1270_ = ((lean_object*)(l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__0));
v___x_1271_ = l_Lake_BuildKey_toString(v_root_1072_);
v___x_1272_ = lean_string_append(v___x_1270_, v___x_1271_);
lean_dec_ref(v___x_1271_);
v___x_1273_ = ((lean_object*)(l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__1));
v___x_1274_ = lean_string_append(v___x_1272_, v___x_1273_);
v___x_1275_ = 1;
v___x_1276_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_package_1242_, v___x_1275_);
v___x_1277_ = lean_string_append(v___x_1274_, v___x_1276_);
lean_dec_ref(v___x_1276_);
v___x_1278_ = ((lean_object*)(l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__2));
v___x_1279_ = lean_string_append(v___x_1277_, v___x_1278_);
v___x_1280_ = 3;
v___x_1281_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1281_, 0, v___x_1279_);
lean_ctor_set_uint8(v___x_1281_, sizeof(void*)*1, v___x_1280_);
v___x_1282_ = lean_array_get_size(v_a_1079_);
v___x_1283_ = lean_array_push(v_a_1079_, v___x_1281_);
if (v_isShared_1246_ == 0)
{
lean_ctor_set_tag(v___x_1245_, 1);
lean_ctor_set(v___x_1245_, 1, v___x_1283_);
lean_ctor_set(v___x_1245_, 0, v___x_1282_);
v___x_1285_ = v___x_1245_;
goto v_reusejp_1284_;
}
else
{
lean_object* v_reuseFailAlloc_1286_; 
v_reuseFailAlloc_1286_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1286_, 0, v___x_1282_);
lean_ctor_set(v_reuseFailAlloc_1286_, 1, v___x_1283_);
v___x_1285_ = v_reuseFailAlloc_1286_;
goto v_reusejp_1284_;
}
v_reusejp_1284_:
{
return v___x_1285_;
}
}
}
}
default: 
{
lean_object* v_target_1288_; lean_object* v_facet_1289_; lean_object* v___x_1290_; 
v_target_1288_ = lean_ctor_get(v_self_1073_, 0);
v_facet_1289_ = lean_ctor_get(v_self_1073_, 1);
lean_inc_ref(v_a_1074_);
lean_inc_ref(v_target_1288_);
lean_inc_ref(v_root_1072_);
v___x_1290_ = l___private_Lake_Build_Target_Fetch_0__Lake_BuildKey_fetchCore(v_root_1072_, v_target_1288_, v_a_1074_, v_a_1075_, v_a_1076_, v_a_1077_, v_a_1078_, v_a_1079_);
if (lean_obj_tag(v___x_1290_) == 0)
{
lean_object* v_a_1291_; lean_object* v_a_1292_; lean_object* v___x_1294_; uint8_t v_isShared_1295_; uint8_t v_isSharedCheck_1354_; 
v_a_1291_ = lean_ctor_get(v___x_1290_, 0);
v_a_1292_ = lean_ctor_get(v___x_1290_, 1);
v_isSharedCheck_1354_ = !lean_is_exclusive(v___x_1290_);
if (v_isSharedCheck_1354_ == 0)
{
v___x_1294_ = v___x_1290_;
v_isShared_1295_ = v_isSharedCheck_1354_;
goto v_resetjp_1293_;
}
else
{
lean_inc(v_a_1292_);
lean_inc(v_a_1291_);
lean_dec(v___x_1290_);
v___x_1294_ = lean_box(0);
v_isShared_1295_ = v_isSharedCheck_1354_;
goto v_resetjp_1293_;
}
v_resetjp_1293_:
{
lean_object* v_kind_1296_; uint8_t v___x_1297_; 
v_kind_1296_ = lean_ctor_get(v_a_1291_, 1);
v___x_1297_ = l_Lean_Name_isAnonymous(v_kind_1296_);
if (v___x_1297_ == 0)
{
lean_object* v_toContext_1298_; lean_object* v___x_1299_; lean_object* v___x_1300_; lean_object* v___x_1301_; lean_object* v___x_1302_; lean_object* v___x_1303_; lean_object* v___x_1304_; lean_object* v___x_1305_; lean_object* v___x_1306_; lean_object* v___x_1307_; lean_object* v___x_1308_; lean_object* v___x_1309_; lean_object* v___x_1310_; lean_object* v___x_1311_; lean_object* v___x_1312_; lean_object* v___x_1313_; lean_object* v_facetConfigs_1314_; lean_object* v___x_1315_; 
lean_inc(v_facet_1289_);
lean_inc_ref(v_target_1288_);
lean_dec_ref_known(v_self_1073_, 2);
v_toContext_1298_ = lean_ctor_get(v_a_1078_, 1);
v___x_1299_ = l_unsafeCast___redArg(v_toContext_1298_);
v___x_1300_ = l_unsafeCast___redArg(v___x_1299_);
lean_dec(v___x_1299_);
v___x_1301_ = l_unsafeCast___redArg(v___x_1300_);
lean_dec(v___x_1300_);
v___x_1302_ = l_unsafeCast___redArg(v___x_1301_);
lean_dec(v___x_1301_);
v___x_1303_ = l_unsafeCast___redArg(v___x_1302_);
lean_dec(v___x_1302_);
v___x_1304_ = l_unsafeCast___redArg(v___x_1303_);
lean_dec(v___x_1303_);
v___x_1305_ = l_unsafeCast___redArg(v___x_1304_);
lean_dec(v___x_1304_);
v___x_1306_ = l_unsafeCast___redArg(v___x_1305_);
lean_dec(v___x_1305_);
v___x_1307_ = l_unsafeCast___redArg(v___x_1306_);
lean_dec(v___x_1306_);
v___x_1308_ = l_unsafeCast___redArg(v___x_1307_);
lean_dec(v___x_1307_);
v___x_1309_ = l_unsafeCast___redArg(v___x_1308_);
lean_dec(v___x_1308_);
v___x_1310_ = l_unsafeCast___redArg(v___x_1309_);
lean_dec(v___x_1309_);
v___x_1311_ = l_unsafeCast___redArg(v___x_1310_);
lean_dec(v___x_1310_);
v___x_1312_ = l_unsafeCast___redArg(v___x_1311_);
lean_dec(v___x_1311_);
v___x_1313_ = l_unsafeCast___redArg(v___x_1312_);
lean_dec(v___x_1312_);
v_facetConfigs_1314_ = lean_ctor_get(v___x_1313_, 6);
lean_inc(v_facetConfigs_1314_);
lean_dec(v___x_1313_);
v___x_1315_ = l_Lake_FacetConfigMap_get_x3f(v_facet_1289_, v_facetConfigs_1314_);
lean_dec(v_facetConfigs_1314_);
if (lean_obj_tag(v___x_1315_) == 1)
{
lean_object* v_val_1316_; lean_object* v_outKind_1317_; lean_object* v___f_1318_; lean_object* v___x_1319_; lean_object* v___x_1320_; lean_object* v___x_1321_; lean_object* v___x_1323_; 
lean_dec_ref(v_root_1072_);
v_val_1316_ = lean_ctor_get(v___x_1315_, 0);
lean_inc(v_val_1316_);
lean_dec_ref_known(v___x_1315_, 1);
v_outKind_1317_ = lean_ctor_get(v_val_1316_, 2);
lean_inc(v_outKind_1317_);
lean_dec(v_val_1316_);
lean_inc(v_kind_1296_);
v___f_1318_ = lean_alloc_closure((void*)(l___private_Lake_Build_Target_Fetch_0__Lake_BuildKey_fetchCore___lam__0___boxed), 11, 3);
lean_closure_set(v___f_1318_, 0, v_target_1288_);
lean_closure_set(v___f_1318_, 1, v_kind_1296_);
lean_closure_set(v___f_1318_, 2, v_facet_1289_);
v___x_1319_ = lean_unsigned_to_nat(0u);
v___x_1320_ = lean_obj_once(&l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux___closed__3, &l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux___closed__3_once, _init_l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux___closed__3);
v___x_1321_ = l_Lake_Job_bindM___redArg(v_outKind_1317_, v_a_1291_, v___f_1318_, v___x_1319_, v___x_1297_, v_a_1074_, v_a_1075_, v_a_1076_, v_a_1077_, v_a_1078_, v___x_1320_);
if (v_isShared_1295_ == 0)
{
lean_ctor_set(v___x_1294_, 0, v___x_1321_);
v___x_1323_ = v___x_1294_;
goto v_reusejp_1322_;
}
else
{
lean_object* v_reuseFailAlloc_1324_; 
v_reuseFailAlloc_1324_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1324_, 0, v___x_1321_);
lean_ctor_set(v_reuseFailAlloc_1324_, 1, v_a_1292_);
v___x_1323_ = v_reuseFailAlloc_1324_;
goto v_reusejp_1322_;
}
v_reusejp_1322_:
{
return v___x_1323_;
}
}
else
{
lean_object* v___x_1325_; lean_object* v___x_1326_; lean_object* v___x_1327_; lean_object* v___x_1328_; lean_object* v___x_1329_; uint8_t v___x_1330_; lean_object* v___x_1331_; lean_object* v___x_1332_; lean_object* v___x_1333_; lean_object* v___x_1334_; uint8_t v___x_1335_; lean_object* v___x_1336_; lean_object* v___x_1337_; lean_object* v___x_1338_; lean_object* v___x_1340_; 
lean_dec(v___x_1315_);
lean_dec(v_a_1291_);
lean_dec_ref(v_target_1288_);
lean_dec_ref(v_a_1074_);
v___x_1325_ = ((lean_object*)(l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__0));
v___x_1326_ = l_Lake_BuildKey_toString(v_root_1072_);
v___x_1327_ = lean_string_append(v___x_1325_, v___x_1326_);
lean_dec_ref(v___x_1326_);
v___x_1328_ = ((lean_object*)(l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux___closed__11));
v___x_1329_ = lean_string_append(v___x_1327_, v___x_1328_);
v___x_1330_ = 1;
v___x_1331_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_facet_1289_, v___x_1330_);
v___x_1332_ = lean_string_append(v___x_1329_, v___x_1331_);
lean_dec_ref(v___x_1331_);
v___x_1333_ = ((lean_object*)(l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux___closed__8));
v___x_1334_ = lean_string_append(v___x_1332_, v___x_1333_);
v___x_1335_ = 3;
v___x_1336_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1336_, 0, v___x_1334_);
lean_ctor_set_uint8(v___x_1336_, sizeof(void*)*1, v___x_1335_);
v___x_1337_ = lean_array_get_size(v_a_1292_);
v___x_1338_ = lean_array_push(v_a_1292_, v___x_1336_);
if (v_isShared_1295_ == 0)
{
lean_ctor_set_tag(v___x_1294_, 1);
lean_ctor_set(v___x_1294_, 1, v___x_1338_);
lean_ctor_set(v___x_1294_, 0, v___x_1337_);
v___x_1340_ = v___x_1294_;
goto v_reusejp_1339_;
}
else
{
lean_object* v_reuseFailAlloc_1341_; 
v_reuseFailAlloc_1341_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1341_, 0, v___x_1337_);
lean_ctor_set(v_reuseFailAlloc_1341_, 1, v___x_1338_);
v___x_1340_ = v_reuseFailAlloc_1341_;
goto v_reusejp_1339_;
}
v_reusejp_1339_:
{
return v___x_1340_;
}
}
}
else
{
lean_object* v___x_1342_; lean_object* v___x_1343_; lean_object* v___x_1344_; lean_object* v___x_1345_; lean_object* v___x_1346_; uint8_t v___x_1347_; lean_object* v___x_1348_; lean_object* v___x_1349_; lean_object* v___x_1350_; lean_object* v___x_1352_; 
lean_dec(v_a_1291_);
lean_dec_ref(v_a_1074_);
lean_dec_ref(v_root_1072_);
v___x_1342_ = ((lean_object*)(l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__0));
v___x_1343_ = l_Lake_BuildKey_toString(v_self_1073_);
v___x_1344_ = lean_string_append(v___x_1342_, v___x_1343_);
lean_dec_ref(v___x_1343_);
v___x_1345_ = ((lean_object*)(l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux___closed__13));
v___x_1346_ = lean_string_append(v___x_1344_, v___x_1345_);
v___x_1347_ = 3;
v___x_1348_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1348_, 0, v___x_1346_);
lean_ctor_set_uint8(v___x_1348_, sizeof(void*)*1, v___x_1347_);
v___x_1349_ = lean_array_get_size(v_a_1292_);
v___x_1350_ = lean_array_push(v_a_1292_, v___x_1348_);
if (v_isShared_1295_ == 0)
{
lean_ctor_set_tag(v___x_1294_, 1);
lean_ctor_set(v___x_1294_, 1, v___x_1350_);
lean_ctor_set(v___x_1294_, 0, v___x_1349_);
v___x_1352_ = v___x_1294_;
goto v_reusejp_1351_;
}
else
{
lean_object* v_reuseFailAlloc_1353_; 
v_reuseFailAlloc_1353_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1353_, 0, v___x_1349_);
lean_ctor_set(v_reuseFailAlloc_1353_, 1, v___x_1350_);
v___x_1352_ = v_reuseFailAlloc_1353_;
goto v_reusejp_1351_;
}
v_reusejp_1351_:
{
return v___x_1352_;
}
}
}
}
else
{
lean_dec_ref_known(v_self_1073_, 2);
lean_dec_ref(v_a_1074_);
lean_dec_ref(v_root_1072_);
return v___x_1290_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Target_Fetch_0__Lake_BuildKey_fetchCore___boxed(lean_object* v_root_1355_, lean_object* v_self_1356_, lean_object* v_a_1357_, lean_object* v_a_1358_, lean_object* v_a_1359_, lean_object* v_a_1360_, lean_object* v_a_1361_, lean_object* v_a_1362_, lean_object* v_a_1363_){
_start:
{
lean_object* v_res_1364_; 
v_res_1364_ = l___private_Lake_Build_Target_Fetch_0__Lake_BuildKey_fetchCore(v_root_1355_, v_self_1356_, v_a_1357_, v_a_1358_, v_a_1359_, v_a_1360_, v_a_1361_, v_a_1362_);
lean_dec_ref(v_a_1361_);
lean_dec(v_a_1360_);
lean_dec(v_a_1359_);
lean_dec(v_a_1358_);
return v_res_1364_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuildKey_fetch___redArg(lean_object* v_self_1365_, lean_object* v_a_1366_, lean_object* v_a_1367_, lean_object* v_a_1368_, lean_object* v_a_1369_, lean_object* v_a_1370_, lean_object* v_a_1371_){
_start:
{
lean_object* v___x_1373_; 
lean_inc_ref(v_self_1365_);
v___x_1373_ = l___private_Lake_Build_Target_Fetch_0__Lake_BuildKey_fetchCore(v_self_1365_, v_self_1365_, v_a_1366_, v_a_1367_, v_a_1368_, v_a_1369_, v_a_1370_, v_a_1371_);
return v___x_1373_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuildKey_fetch___redArg___boxed(lean_object* v_self_1374_, lean_object* v_a_1375_, lean_object* v_a_1376_, lean_object* v_a_1377_, lean_object* v_a_1378_, lean_object* v_a_1379_, lean_object* v_a_1380_, lean_object* v_a_1381_){
_start:
{
lean_object* v_res_1382_; 
v_res_1382_ = l_Lake_BuildKey_fetch___redArg(v_self_1374_, v_a_1375_, v_a_1376_, v_a_1377_, v_a_1378_, v_a_1379_, v_a_1380_);
lean_dec_ref(v_a_1379_);
lean_dec(v_a_1378_);
lean_dec(v_a_1377_);
lean_dec(v_a_1376_);
return v_res_1382_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuildKey_fetch(lean_object* v_00_u03b1_1383_, lean_object* v_self_1384_, lean_object* v_inst_1385_, lean_object* v_a_1386_, lean_object* v_a_1387_, lean_object* v_a_1388_, lean_object* v_a_1389_, lean_object* v_a_1390_, lean_object* v_a_1391_){
_start:
{
lean_object* v___x_1393_; 
lean_inc_ref(v_self_1384_);
v___x_1393_ = l___private_Lake_Build_Target_Fetch_0__Lake_BuildKey_fetchCore(v_self_1384_, v_self_1384_, v_a_1386_, v_a_1387_, v_a_1388_, v_a_1389_, v_a_1390_, v_a_1391_);
return v___x_1393_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuildKey_fetch___boxed(lean_object* v_00_u03b1_1394_, lean_object* v_self_1395_, lean_object* v_inst_1396_, lean_object* v_a_1397_, lean_object* v_a_1398_, lean_object* v_a_1399_, lean_object* v_a_1400_, lean_object* v_a_1401_, lean_object* v_a_1402_, lean_object* v_a_1403_){
_start:
{
lean_object* v_res_1404_; 
v_res_1404_ = l_Lake_BuildKey_fetch(v_00_u03b1_1394_, v_self_1395_, v_inst_1396_, v_a_1397_, v_a_1398_, v_a_1399_, v_a_1400_, v_a_1401_, v_a_1402_);
lean_dec_ref(v_a_1401_);
lean_dec(v_a_1400_);
lean_dec(v_a_1399_);
lean_dec(v_a_1398_);
return v_res_1404_;
}
}
LEAN_EXPORT lean_object* l_Lake_Target_fetchIn___redArg(lean_object* v_inst_1409_, lean_object* v_defaultPkg_1410_, lean_object* v_self_1411_, lean_object* v_a_1412_, lean_object* v_a_1413_, lean_object* v_a_1414_, lean_object* v_a_1415_, lean_object* v_a_1416_, lean_object* v_a_1417_){
_start:
{
uint8_t v___x_1419_; lean_object* v___x_1420_; 
v___x_1419_ = 1;
lean_inc_ref_n(v_self_1411_, 2);
v___x_1420_ = l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux(v_defaultPkg_1410_, v_self_1411_, v_self_1411_, v___x_1419_, v_a_1412_, v_a_1413_, v_a_1414_, v_a_1415_, v_a_1416_, v_a_1417_);
if (lean_obj_tag(v___x_1420_) == 0)
{
lean_object* v_a_1421_; lean_object* v_a_1422_; lean_object* v___x_1424_; uint8_t v_isShared_1425_; uint8_t v_isSharedCheck_1462_; 
v_a_1421_ = lean_ctor_get(v___x_1420_, 0);
v_a_1422_ = lean_ctor_get(v___x_1420_, 1);
v_isSharedCheck_1462_ = !lean_is_exclusive(v___x_1420_);
if (v_isSharedCheck_1462_ == 0)
{
v___x_1424_ = v___x_1420_;
v_isShared_1425_ = v_isSharedCheck_1462_;
goto v_resetjp_1423_;
}
else
{
lean_inc(v_a_1422_);
lean_inc(v_a_1421_);
lean_dec(v___x_1420_);
v___x_1424_ = lean_box(0);
v_isShared_1425_ = v_isSharedCheck_1462_;
goto v_resetjp_1423_;
}
v_resetjp_1423_:
{
lean_object* v___y_1427_; lean_object* v_snd_1445_; lean_object* v___x_1447_; uint8_t v_isShared_1448_; uint8_t v_isSharedCheck_1460_; 
v_snd_1445_ = lean_ctor_get(v_a_1421_, 1);
v_isSharedCheck_1460_ = !lean_is_exclusive(v_a_1421_);
if (v_isSharedCheck_1460_ == 0)
{
lean_object* v_unused_1461_; 
v_unused_1461_ = lean_ctor_get(v_a_1421_, 0);
lean_dec(v_unused_1461_);
v___x_1447_ = v_a_1421_;
v_isShared_1448_ = v_isSharedCheck_1460_;
goto v_resetjp_1446_;
}
else
{
lean_inc(v_snd_1445_);
lean_dec(v_a_1421_);
v___x_1447_ = lean_box(0);
v_isShared_1448_ = v_isSharedCheck_1460_;
goto v_resetjp_1446_;
}
v___jp_1426_:
{
lean_object* v___x_1428_; lean_object* v___x_1429_; lean_object* v___x_1430_; lean_object* v___x_1431_; lean_object* v___x_1432_; lean_object* v___x_1433_; lean_object* v___x_1434_; lean_object* v___x_1435_; lean_object* v___x_1436_; lean_object* v___x_1437_; uint8_t v___x_1438_; lean_object* v___x_1439_; lean_object* v___x_1440_; lean_object* v___x_1441_; lean_object* v___x_1443_; 
v___x_1428_ = ((lean_object*)(l_Lake_Target_fetchIn___redArg___closed__0));
v___x_1429_ = l_Lake_PartialBuildKey_toString(v_self_1411_);
v___x_1430_ = lean_string_append(v___x_1428_, v___x_1429_);
lean_dec_ref(v___x_1429_);
v___x_1431_ = ((lean_object*)(l_Lake_Target_fetchIn___redArg___closed__1));
v___x_1432_ = lean_string_append(v___x_1430_, v___x_1431_);
v___x_1433_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_inst_1409_, v___x_1419_);
v___x_1434_ = lean_string_append(v___x_1432_, v___x_1433_);
lean_dec_ref(v___x_1433_);
v___x_1435_ = ((lean_object*)(l_Lake_Target_fetchIn___redArg___closed__2));
v___x_1436_ = lean_string_append(v___x_1434_, v___x_1435_);
v___x_1437_ = lean_string_append(v___x_1436_, v___y_1427_);
lean_dec_ref(v___y_1427_);
v___x_1438_ = 3;
v___x_1439_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1439_, 0, v___x_1437_);
lean_ctor_set_uint8(v___x_1439_, sizeof(void*)*1, v___x_1438_);
v___x_1440_ = lean_array_get_size(v_a_1422_);
v___x_1441_ = lean_array_push(v_a_1422_, v___x_1439_);
if (v_isShared_1425_ == 0)
{
lean_ctor_set_tag(v___x_1424_, 1);
lean_ctor_set(v___x_1424_, 1, v___x_1441_);
lean_ctor_set(v___x_1424_, 0, v___x_1440_);
v___x_1443_ = v___x_1424_;
goto v_reusejp_1442_;
}
else
{
lean_object* v_reuseFailAlloc_1444_; 
v_reuseFailAlloc_1444_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1444_, 0, v___x_1440_);
lean_ctor_set(v_reuseFailAlloc_1444_, 1, v___x_1441_);
v___x_1443_ = v_reuseFailAlloc_1444_;
goto v_reusejp_1442_;
}
v_reusejp_1442_:
{
return v___x_1443_;
}
}
v_resetjp_1446_:
{
lean_object* v_kind_1449_; uint8_t v___x_1450_; 
v_kind_1449_ = lean_ctor_get(v_snd_1445_, 1);
v___x_1450_ = lean_name_eq(v_kind_1449_, v_inst_1409_);
if (v___x_1450_ == 0)
{
uint8_t v___x_1451_; 
lean_inc(v_kind_1449_);
lean_del_object(v___x_1447_);
lean_dec(v_snd_1445_);
v___x_1451_ = l_Lean_Name_isAnonymous(v_kind_1449_);
if (v___x_1451_ == 0)
{
lean_object* v___x_1452_; lean_object* v___x_1453_; lean_object* v___x_1454_; lean_object* v___x_1455_; 
v___x_1452_ = ((lean_object*)(l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux___closed__8));
v___x_1453_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_kind_1449_, v___x_1419_);
v___x_1454_ = lean_string_append(v___x_1452_, v___x_1453_);
lean_dec_ref(v___x_1453_);
v___x_1455_ = lean_string_append(v___x_1454_, v___x_1452_);
v___y_1427_ = v___x_1455_;
goto v___jp_1426_;
}
else
{
lean_object* v___x_1456_; 
lean_dec(v_kind_1449_);
v___x_1456_ = ((lean_object*)(l_Lake_Target_fetchIn___redArg___closed__3));
v___y_1427_ = v___x_1456_;
goto v___jp_1426_;
}
}
else
{
lean_object* v___x_1458_; 
lean_del_object(v___x_1424_);
lean_dec_ref(v_self_1411_);
lean_dec(v_inst_1409_);
if (v_isShared_1448_ == 0)
{
lean_ctor_set(v___x_1447_, 1, v_a_1422_);
lean_ctor_set(v___x_1447_, 0, v_snd_1445_);
v___x_1458_ = v___x_1447_;
goto v_reusejp_1457_;
}
else
{
lean_object* v_reuseFailAlloc_1459_; 
v_reuseFailAlloc_1459_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1459_, 0, v_snd_1445_);
lean_ctor_set(v_reuseFailAlloc_1459_, 1, v_a_1422_);
v___x_1458_ = v_reuseFailAlloc_1459_;
goto v_reusejp_1457_;
}
v_reusejp_1457_:
{
return v___x_1458_;
}
}
}
}
}
else
{
lean_object* v_a_1463_; lean_object* v_a_1464_; lean_object* v___x_1466_; uint8_t v_isShared_1467_; uint8_t v_isSharedCheck_1471_; 
lean_dec_ref(v_self_1411_);
lean_dec(v_inst_1409_);
v_a_1463_ = lean_ctor_get(v___x_1420_, 0);
v_a_1464_ = lean_ctor_get(v___x_1420_, 1);
v_isSharedCheck_1471_ = !lean_is_exclusive(v___x_1420_);
if (v_isSharedCheck_1471_ == 0)
{
v___x_1466_ = v___x_1420_;
v_isShared_1467_ = v_isSharedCheck_1471_;
goto v_resetjp_1465_;
}
else
{
lean_inc(v_a_1464_);
lean_inc(v_a_1463_);
lean_dec(v___x_1420_);
v___x_1466_ = lean_box(0);
v_isShared_1467_ = v_isSharedCheck_1471_;
goto v_resetjp_1465_;
}
v_resetjp_1465_:
{
lean_object* v___x_1469_; 
if (v_isShared_1467_ == 0)
{
v___x_1469_ = v___x_1466_;
goto v_reusejp_1468_;
}
else
{
lean_object* v_reuseFailAlloc_1470_; 
v_reuseFailAlloc_1470_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1470_, 0, v_a_1463_);
lean_ctor_set(v_reuseFailAlloc_1470_, 1, v_a_1464_);
v___x_1469_ = v_reuseFailAlloc_1470_;
goto v_reusejp_1468_;
}
v_reusejp_1468_:
{
return v___x_1469_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Target_fetchIn___redArg___boxed(lean_object* v_inst_1472_, lean_object* v_defaultPkg_1473_, lean_object* v_self_1474_, lean_object* v_a_1475_, lean_object* v_a_1476_, lean_object* v_a_1477_, lean_object* v_a_1478_, lean_object* v_a_1479_, lean_object* v_a_1480_, lean_object* v_a_1481_){
_start:
{
lean_object* v_res_1482_; 
v_res_1482_ = l_Lake_Target_fetchIn___redArg(v_inst_1472_, v_defaultPkg_1473_, v_self_1474_, v_a_1475_, v_a_1476_, v_a_1477_, v_a_1478_, v_a_1479_, v_a_1480_);
lean_dec_ref(v_a_1479_);
lean_dec(v_a_1478_);
lean_dec(v_a_1477_);
lean_dec(v_a_1476_);
return v_res_1482_;
}
}
LEAN_EXPORT lean_object* l_Lake_Target_fetchIn(lean_object* v_00_u03b1_1483_, lean_object* v_inst_1484_, lean_object* v_defaultPkg_1485_, lean_object* v_self_1486_, lean_object* v_a_1487_, lean_object* v_a_1488_, lean_object* v_a_1489_, lean_object* v_a_1490_, lean_object* v_a_1491_, lean_object* v_a_1492_){
_start:
{
lean_object* v___x_1494_; 
v___x_1494_ = l_Lake_Target_fetchIn___redArg(v_inst_1484_, v_defaultPkg_1485_, v_self_1486_, v_a_1487_, v_a_1488_, v_a_1489_, v_a_1490_, v_a_1491_, v_a_1492_);
return v___x_1494_;
}
}
LEAN_EXPORT lean_object* l_Lake_Target_fetchIn___boxed(lean_object* v_00_u03b1_1495_, lean_object* v_inst_1496_, lean_object* v_defaultPkg_1497_, lean_object* v_self_1498_, lean_object* v_a_1499_, lean_object* v_a_1500_, lean_object* v_a_1501_, lean_object* v_a_1502_, lean_object* v_a_1503_, lean_object* v_a_1504_, lean_object* v_a_1505_){
_start:
{
lean_object* v_res_1506_; 
v_res_1506_ = l_Lake_Target_fetchIn(v_00_u03b1_1495_, v_inst_1496_, v_defaultPkg_1497_, v_self_1498_, v_a_1499_, v_a_1500_, v_a_1501_, v_a_1502_, v_a_1503_, v_a_1504_);
lean_dec_ref(v_a_1503_);
lean_dec(v_a_1502_);
lean_dec(v_a_1501_);
lean_dec(v_a_1500_);
return v_res_1506_;
}
}
LEAN_EXPORT lean_object* l_Lake_TargetArray_fetchIn___redArg___lam__0(lean_object* v_inst_1507_, lean_object* v_defaultPkg_1508_, lean_object* v_x_1509_, lean_object* v___y_1510_, lean_object* v___y_1511_, lean_object* v___y_1512_, lean_object* v___y_1513_, lean_object* v___y_1514_, lean_object* v___y_1515_){
_start:
{
lean_object* v___x_1517_; 
v___x_1517_ = l_Lake_Target_fetchIn___redArg(v_inst_1507_, v_defaultPkg_1508_, v_x_1509_, v___y_1510_, v___y_1511_, v___y_1512_, v___y_1513_, v___y_1514_, v___y_1515_);
return v___x_1517_;
}
}
LEAN_EXPORT lean_object* l_Lake_TargetArray_fetchIn___redArg___lam__0___boxed(lean_object* v_inst_1518_, lean_object* v_defaultPkg_1519_, lean_object* v_x_1520_, lean_object* v___y_1521_, lean_object* v___y_1522_, lean_object* v___y_1523_, lean_object* v___y_1524_, lean_object* v___y_1525_, lean_object* v___y_1526_, lean_object* v___y_1527_){
_start:
{
lean_object* v_res_1528_; 
v_res_1528_ = l_Lake_TargetArray_fetchIn___redArg___lam__0(v_inst_1518_, v_defaultPkg_1519_, v_x_1520_, v___y_1521_, v___y_1522_, v___y_1523_, v___y_1524_, v___y_1525_, v___y_1526_);
lean_dec_ref(v___y_1525_);
lean_dec(v___y_1524_);
lean_dec(v___y_1523_);
lean_dec(v___y_1522_);
return v_res_1528_;
}
}
LEAN_EXPORT lean_object* l_Lake_TargetArray_fetchIn___redArg(lean_object* v_inst_1529_, lean_object* v_defaultPkg_1530_, lean_object* v_self_1531_, lean_object* v_traceCaption_1532_, lean_object* v_a_1533_, lean_object* v_a_1534_, lean_object* v_a_1535_, lean_object* v_a_1536_, lean_object* v_a_1537_, lean_object* v_a_1538_){
_start:
{
lean_object* v___x_1540_; lean_object* v_toApplicative_1541_; lean_object* v_toBind_1542_; lean_object* v_toFunctor_1543_; lean_object* v_toPure_1544_; lean_object* v___f_1545_; lean_object* v___f_1546_; lean_object* v___f_1547_; lean_object* v___f_1548_; lean_object* v___f_1549_; lean_object* v___x_1550_; lean_object* v___f_1551_; lean_object* v___x_1552_; lean_object* v___x_1553_; lean_object* v___x_1554_; lean_object* v___x_1555_; lean_object* v___x_1556_; lean_object* v___x_1557_; lean_object* v___x_1558_; size_t v_sz_1559_; size_t v___x_1560_; lean_object* v___x_1561_; lean_object* v___x_1562_; lean_object* v___x_540__overap_1563_; lean_object* v___x_1564_; 
v___x_1540_ = l_instMonadBaseIO;
v_toApplicative_1541_ = lean_ctor_get(v___x_1540_, 0);
v_toBind_1542_ = lean_ctor_get(v___x_1540_, 1);
v_toFunctor_1543_ = lean_ctor_get(v_toApplicative_1541_, 0);
v_toPure_1544_ = lean_ctor_get(v_toApplicative_1541_, 1);
v___f_1545_ = lean_alloc_closure((void*)(l_Lake_TargetArray_fetchIn___redArg___lam__0___boxed), 10, 2);
lean_closure_set(v___f_1545_, 0, v_inst_1529_);
lean_closure_set(v___f_1545_, 1, v_defaultPkg_1530_);
lean_inc_n(v_toBind_1542_, 3);
lean_inc_n(v_toPure_1544_, 5);
v___f_1546_ = lean_alloc_closure((void*)(l_Lake_EStateT_instMonad___redArg___lam__1), 7, 2);
lean_closure_set(v___f_1546_, 0, v_toPure_1544_);
lean_closure_set(v___f_1546_, 1, v_toBind_1542_);
v___f_1547_ = lean_alloc_closure((void*)(l_Lake_EStateT_instMonad___redArg___lam__3), 7, 2);
lean_closure_set(v___f_1547_, 0, v_toPure_1544_);
lean_closure_set(v___f_1547_, 1, v_toBind_1542_);
lean_inc_ref(v___f_1546_);
v___f_1548_ = lean_alloc_closure((void*)(l_Lake_EStateT_instMonad___redArg___lam__5), 7, 2);
lean_closure_set(v___f_1548_, 0, v_toPure_1544_);
lean_closure_set(v___f_1548_, 1, v___f_1546_);
lean_inc_ref_n(v_toFunctor_1543_, 2);
v___f_1549_ = lean_alloc_closure((void*)(l_Lake_EStateT_instMonad___redArg___lam__9), 8, 3);
lean_closure_set(v___f_1549_, 0, v_toFunctor_1543_);
lean_closure_set(v___f_1549_, 1, v_toPure_1544_);
lean_closure_set(v___f_1549_, 2, v_toBind_1542_);
v___x_1550_ = l_Lake_EStateT_instFunctor___redArg(v_toFunctor_1543_);
v___f_1551_ = lean_alloc_closure((void*)(l_Lake_EStateT_instPure___redArg___lam__0), 4, 1);
lean_closure_set(v___f_1551_, 0, v_toPure_1544_);
v___x_1552_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1552_, 0, v___x_1550_);
lean_ctor_set(v___x_1552_, 1, v___f_1551_);
lean_ctor_set(v___x_1552_, 2, v___f_1549_);
lean_ctor_set(v___x_1552_, 3, v___f_1548_);
lean_ctor_set(v___x_1552_, 4, v___f_1547_);
v___x_1553_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1553_, 0, v___x_1552_);
lean_ctor_set(v___x_1553_, 1, v___f_1546_);
v___x_1554_ = l_ReaderT_instMonad___redArg(v___x_1553_);
v___x_1555_ = l_StateRefT_x27_instMonad___redArg(v___x_1554_);
v___x_1556_ = l_ReaderT_instMonad___redArg(v___x_1555_);
v___x_1557_ = l_ReaderT_instMonad___redArg(v___x_1556_);
v___x_1558_ = l_Lake_EquipT_instMonad___redArg(v___x_1557_);
v_sz_1559_ = lean_array_size(v_self_1531_);
v___x_1560_ = ((size_t)0ULL);
v___x_1561_ = l_unsafeCast___redArg(v_self_1531_);
v___x_1562_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_1558_, v___f_1545_, v_sz_1559_, v___x_1560_, v___x_1561_);
v___x_540__overap_1563_ = l_unsafeCast___redArg(v___x_1562_);
lean_dec(v___x_1562_);
lean_inc_ref(v_a_1537_);
lean_inc(v_a_1536_);
lean_inc(v_a_1535_);
lean_inc(v_a_1534_);
v___x_1564_ = lean_apply_7(v___x_540__overap_1563_, v_a_1533_, v_a_1534_, v_a_1535_, v_a_1536_, v_a_1537_, v_a_1538_, lean_box(0));
if (lean_obj_tag(v___x_1564_) == 0)
{
lean_object* v_a_1565_; lean_object* v_a_1566_; lean_object* v___x_1568_; uint8_t v_isShared_1569_; uint8_t v_isSharedCheck_1574_; 
v_a_1565_ = lean_ctor_get(v___x_1564_, 0);
v_a_1566_ = lean_ctor_get(v___x_1564_, 1);
v_isSharedCheck_1574_ = !lean_is_exclusive(v___x_1564_);
if (v_isSharedCheck_1574_ == 0)
{
v___x_1568_ = v___x_1564_;
v_isShared_1569_ = v_isSharedCheck_1574_;
goto v_resetjp_1567_;
}
else
{
lean_inc(v_a_1566_);
lean_inc(v_a_1565_);
lean_dec(v___x_1564_);
v___x_1568_ = lean_box(0);
v_isShared_1569_ = v_isSharedCheck_1574_;
goto v_resetjp_1567_;
}
v_resetjp_1567_:
{
lean_object* v___x_1570_; lean_object* v___x_1572_; 
v___x_1570_ = l_Lake_Job_collectArray___redArg(v_a_1565_, v_traceCaption_1532_);
lean_dec(v_a_1565_);
if (v_isShared_1569_ == 0)
{
lean_ctor_set(v___x_1568_, 0, v___x_1570_);
v___x_1572_ = v___x_1568_;
goto v_reusejp_1571_;
}
else
{
lean_object* v_reuseFailAlloc_1573_; 
v_reuseFailAlloc_1573_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1573_, 0, v___x_1570_);
lean_ctor_set(v_reuseFailAlloc_1573_, 1, v_a_1566_);
v___x_1572_ = v_reuseFailAlloc_1573_;
goto v_reusejp_1571_;
}
v_reusejp_1571_:
{
return v___x_1572_;
}
}
}
else
{
lean_object* v_a_1575_; lean_object* v_a_1576_; lean_object* v___x_1578_; uint8_t v_isShared_1579_; uint8_t v_isSharedCheck_1583_; 
lean_dec_ref(v_traceCaption_1532_);
v_a_1575_ = lean_ctor_get(v___x_1564_, 0);
v_a_1576_ = lean_ctor_get(v___x_1564_, 1);
v_isSharedCheck_1583_ = !lean_is_exclusive(v___x_1564_);
if (v_isSharedCheck_1583_ == 0)
{
v___x_1578_ = v___x_1564_;
v_isShared_1579_ = v_isSharedCheck_1583_;
goto v_resetjp_1577_;
}
else
{
lean_inc(v_a_1576_);
lean_inc(v_a_1575_);
lean_dec(v___x_1564_);
v___x_1578_ = lean_box(0);
v_isShared_1579_ = v_isSharedCheck_1583_;
goto v_resetjp_1577_;
}
v_resetjp_1577_:
{
lean_object* v___x_1581_; 
if (v_isShared_1579_ == 0)
{
v___x_1581_ = v___x_1578_;
goto v_reusejp_1580_;
}
else
{
lean_object* v_reuseFailAlloc_1582_; 
v_reuseFailAlloc_1582_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1582_, 0, v_a_1575_);
lean_ctor_set(v_reuseFailAlloc_1582_, 1, v_a_1576_);
v___x_1581_ = v_reuseFailAlloc_1582_;
goto v_reusejp_1580_;
}
v_reusejp_1580_:
{
return v___x_1581_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_TargetArray_fetchIn___redArg___boxed(lean_object* v_inst_1584_, lean_object* v_defaultPkg_1585_, lean_object* v_self_1586_, lean_object* v_traceCaption_1587_, lean_object* v_a_1588_, lean_object* v_a_1589_, lean_object* v_a_1590_, lean_object* v_a_1591_, lean_object* v_a_1592_, lean_object* v_a_1593_, lean_object* v_a_1594_){
_start:
{
lean_object* v_res_1595_; 
v_res_1595_ = l_Lake_TargetArray_fetchIn___redArg(v_inst_1584_, v_defaultPkg_1585_, v_self_1586_, v_traceCaption_1587_, v_a_1588_, v_a_1589_, v_a_1590_, v_a_1591_, v_a_1592_, v_a_1593_);
lean_dec_ref(v_a_1592_);
lean_dec(v_a_1591_);
lean_dec(v_a_1590_);
lean_dec(v_a_1589_);
lean_dec_ref(v_self_1586_);
return v_res_1595_;
}
}
LEAN_EXPORT lean_object* l_Lake_TargetArray_fetchIn(lean_object* v_00_u03b1_1596_, lean_object* v_inst_1597_, lean_object* v_defaultPkg_1598_, lean_object* v_self_1599_, lean_object* v_traceCaption_1600_, lean_object* v_a_1601_, lean_object* v_a_1602_, lean_object* v_a_1603_, lean_object* v_a_1604_, lean_object* v_a_1605_, lean_object* v_a_1606_){
_start:
{
lean_object* v___x_1608_; 
v___x_1608_ = l_Lake_TargetArray_fetchIn___redArg(v_inst_1597_, v_defaultPkg_1598_, v_self_1599_, v_traceCaption_1600_, v_a_1601_, v_a_1602_, v_a_1603_, v_a_1604_, v_a_1605_, v_a_1606_);
return v___x_1608_;
}
}
LEAN_EXPORT lean_object* l_Lake_TargetArray_fetchIn___boxed(lean_object* v_00_u03b1_1609_, lean_object* v_inst_1610_, lean_object* v_defaultPkg_1611_, lean_object* v_self_1612_, lean_object* v_traceCaption_1613_, lean_object* v_a_1614_, lean_object* v_a_1615_, lean_object* v_a_1616_, lean_object* v_a_1617_, lean_object* v_a_1618_, lean_object* v_a_1619_, lean_object* v_a_1620_){
_start:
{
lean_object* v_res_1621_; 
v_res_1621_ = l_Lake_TargetArray_fetchIn(v_00_u03b1_1609_, v_inst_1610_, v_defaultPkg_1611_, v_self_1612_, v_traceCaption_1613_, v_a_1614_, v_a_1615_, v_a_1616_, v_a_1617_, v_a_1618_, v_a_1619_);
lean_dec_ref(v_a_1618_);
lean_dec(v_a_1617_);
lean_dec(v_a_1616_);
lean_dec(v_a_1615_);
lean_dec_ref(v_self_1612_);
return v_res_1621_;
}
}
lean_object* runtime_initialize_Lake_Build_Infos(uint8_t builtin);
lean_object* runtime_initialize_Lake_Build_Job_Monad(uint8_t builtin);
lean_object* runtime_initialize_Lake_Config_Monad(uint8_t builtin);
lean_object* runtime_initialize_Lake_Build_Key(uint8_t builtin);
void lean_initialize();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lake_Build_Target_Fetch(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize();
res = runtime_initialize_Lake_Build_Infos(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Build_Job_Monad(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Config_Monad(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Build_Key(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lake_Build_Target_Fetch(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lake_Build_Infos(uint8_t builtin);
lean_object* initialize_Lake_Build_Job_Monad(uint8_t builtin);
lean_object* initialize_Lake_Config_Monad(uint8_t builtin);
lean_object* initialize_Lake_Build_Key(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lake_Build_Target_Fetch(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lake_Build_Infos(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Build_Job_Monad(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Config_Monad(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Build_Key(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Build_Target_Fetch(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lake_Build_Target_Fetch(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lake_Build_Target_Fetch(builtin);
}
#ifdef __cplusplus
}
#endif

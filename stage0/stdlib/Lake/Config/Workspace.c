// Lean compiler output
// Module: Lake.Config.Workspace
// Imports: public import Lake.Config.Env public import Lake.Config.LeanExe public import Lake.Config.ExternLib public import Lake.Config.FacetConfig public import Lake.Config.TargetConfig public import Lake.Config.LakeConfig meta import Lake.Util.OpaqueType import Lean.DocString.Syntax import Init.Data.Range.Polymorphic.Iterators import Init.Data.Range.Polymorphic.Lemmas
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
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Lake_Package_findModuleBySrc_x3f(lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lake_Package_findTargetDecl_x3f(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l_Lake_Package_findModule_x3f(lean_object*, lean_object*);
lean_object* l_Lake_Package_findTargetConfig_x3f(lean_object*, lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_Lake_Package_clean(lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_sub(size_t, size_t);
lean_object* l_System_FilePath_normalize(lean_object*);
lean_object* l_Lake_joinRelative(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
extern lean_object* l_Lake_defaultLakeDir;
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* l_Id_instMonad___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__2___boxed(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lake_Package_findTargetModule_x3f(lean_object*, lean_object*);
lean_object* l_Lake_FacetConfigMap_insert(lean_object*, lean_object*, lean_object*);
uint8_t l_Lake_Package_isLocalModule(lean_object*, lean_object*);
lean_object* l_Lean_LeanOptions_ofArray(lean_object*);
lean_object* l_Lean_LeanOptions_appendArray(lean_object*, lean_object*);
lean_object* l_Lake_FacetConfigMap_get_x3f(lean_object*, lean_object*);
extern lean_object* l_Lake_Module_keyword;
lean_object* l_Lake_FacetConfig_toKind_x3f___redArg(lean_object*, lean_object*);
extern lean_object* l_Lake_LeanExe_keyword;
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
uint8_t l_Lake_Package_isBuildableModule(lean_object*, lean_object*);
lean_object* l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl___boxed(lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_get_x3f___redArg(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lake_Package_keyword;
lean_object* l_Id_instMonad___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
extern lean_object* l_Lake_ExternLib_keyword;
lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lake_Env_leanPath(lean_object*);
lean_object* l_List_appendTR___redArg(lean_object*, lean_object*);
lean_object* l_Lake_Env_leanSrcPath(lean_object*);
extern uint8_t l_System_Platform_isWindows;
lean_object* l_Lake_Env_path(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* l_Lake_LeanInstall_sharedLibPath(lean_object*);
lean_object* l_Lake_Env_baseVars(lean_object*);
lean_object* l_System_SearchPath_toString(lean_object*);
extern lean_object* l_Lake_sharedLibPathEnvVar;
lean_object* l_Lake_Env_leanGithash(lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_insert___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lake_computeLakeCache___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "cache"};
static const lean_object* l_Lake_computeLakeCache___closed__0 = (const lean_object*)&l_Lake_computeLakeCache___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_computeLakeCache(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_computeLakeCache___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Workspace_0__Lake_OpaqueWorkspace_unsafeMk(lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Workspace_0__Lake_OpaqueWorkspace_unsafeMk___boxed(lean_object*);
static const lean_closure_object l_Lake_OpaqueWorkspace_instCoeMk___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lake_Config_Workspace_0__Lake_OpaqueWorkspace_unsafeMk___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_OpaqueWorkspace_instCoeMk___closed__0 = (const lean_object*)&l_Lake_OpaqueWorkspace_instCoeMk___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_OpaqueWorkspace_instCoeMk = (const lean_object*)&l_Lake_OpaqueWorkspace_instCoeMk___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lake_Config_Workspace_0__Lake_OpaqueWorkspace_unsafeGet(lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Workspace_0__Lake_OpaqueWorkspace_unsafeGet___boxed(lean_object*);
static const lean_closure_object l_Lake_OpaqueWorkspace_instCoeGet___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lake_Config_Workspace_0__Lake_OpaqueWorkspace_unsafeGet___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_OpaqueWorkspace_instCoeGet___closed__0 = (const lean_object*)&l_Lake_OpaqueWorkspace_instCoeGet___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_OpaqueWorkspace_instCoeGet = (const lean_object*)&l_Lake_OpaqueWorkspace_instCoeGet___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_OpaqueWorkspace_instInhabitedOfWorkspace(lean_object*);
LEAN_EXPORT lean_object* l_Lake_OpaqueWorkspace_instInhabitedOfWorkspace___boxed(lean_object*);
static const lean_array_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Package_defaultTargetRoots_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Package_defaultTargetRoots_spec__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Package_defaultTargetRoots_spec__0___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Package_defaultTargetRoots_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "lean_lib"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Package_defaultTargetRoots_spec__0___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Package_defaultTargetRoots_spec__0___closed__1_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Package_defaultTargetRoots_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Package_defaultTargetRoots_spec__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(99, 123, 8, 14, 20, 41, 164, 170)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Package_defaultTargetRoots_spec__0___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Package_defaultTargetRoots_spec__0___closed__2_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Package_defaultTargetRoots_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Package_defaultTargetRoots_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lake_Package_defaultTargetRoots___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lake_Package_defaultTargetRoots___closed__0 = (const lean_object*)&l_Lake_Package_defaultTargetRoots___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_Package_defaultTargetRoots(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Package_defaultTargetRoots___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Workspace_root(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Workspace_root___boxed(lean_object*);
LEAN_EXPORT uint8_t l___private_Lake_Config_Workspace_0__Lake_Workspace_bootstrap(lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Config_Workspace_0__Lake_Workspace_bootstrap___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Workspace_dir(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Workspace_dir___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Workspace_config(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Workspace_config___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Workspace_relLakeDir___redArg();
LEAN_EXPORT lean_object* l_Lake_Workspace_relLakeDir___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Workspace_relLakeDir(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Workspace_relLakeDir___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Workspace_lakeDir(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Workspace_lakeDir___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Workspace_enableArtifactCache_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Workspace_enableArtifactCache_x3f___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lake_Workspace_enableArtifactCache(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Workspace_enableArtifactCache___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lake_Workspace_isRootArtifactCacheWritable(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Workspace_isRootArtifactCacheWritable___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lake_Workspace_isRootArtifactCacheEnabled(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Workspace_isRootArtifactCacheEnabled___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Workspace_restoreAllArtifacts_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Workspace_restoreAllArtifacts_x3f___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Workspace_cacheToolchain(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Workspace_cacheToolchain___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Workspace_defaultCacheService(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Workspace_defaultCacheService___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Workspace_defaultCacheUploadService_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Workspace_defaultCacheUploadService_x3f___boxed(lean_object*);
static lean_once_cell_t l_Lake_Workspace_findCacheService_x3f___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Workspace_findCacheService_x3f___closed__0;
LEAN_EXPORT lean_object* l_Lake_Workspace_findCacheService_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Workspace_findCacheService_x3f___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Workspace_relPkgsDir(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Workspace_relPkgsDir___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Workspace_pkgsDir(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Workspace_pkgsDir___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Workspace_leanArgs(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Workspace_leanArgs___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Workspace_leanOptions(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Workspace_leanOptions___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Workspace_serverOptions(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Workspace_serverOptions___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Workspace_defaultTargetRoots(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Workspace_defaultTargetRoots___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Workspace_manifestFile(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Workspace_manifestFile___boxed(lean_object*);
static const lean_string_object l_Lake_Workspace_packageOverridesFile___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "package-overrides.json"};
static const lean_object* l_Lake_Workspace_packageOverridesFile___closed__0 = (const lean_object*)&l_Lake_Workspace_packageOverridesFile___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_Workspace_packageOverridesFile(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Workspace_packageOverridesFile___boxed(lean_object*);
static const lean_closure_object l_Lake_Workspace_addPackage_x27___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_Workspace_addPackage_x27___redArg___closed__0 = (const lean_object*)&l_Lake_Workspace_addPackage_x27___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_Workspace_addPackage_x27___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Workspace_addPackage_x27(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lake_Workspace_addPackage___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lake_Workspace_addPackage___closed__0 = (const lean_object*)&l_Lake_Workspace_addPackage___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_Workspace_addPackage(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Workspace_findPackageByKey_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Workspace_findPackageByName_x3f___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Workspace_findPackageByName_x3f___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lake_Workspace_findPackageByName_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_Workspace_findPackageByName_x3f___closed__0 = (const lean_object*)&l_Lake_Workspace_findPackageByName_x3f___closed__0_value;
static const lean_closure_object l_Lake_Workspace_findPackageByName_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_Workspace_findPackageByName_x3f___closed__1 = (const lean_object*)&l_Lake_Workspace_findPackageByName_x3f___closed__1_value;
static const lean_closure_object l_Lake_Workspace_findPackageByName_x3f___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_Workspace_findPackageByName_x3f___closed__2 = (const lean_object*)&l_Lake_Workspace_findPackageByName_x3f___closed__2_value;
static const lean_closure_object l_Lake_Workspace_findPackageByName_x3f___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__3, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_Workspace_findPackageByName_x3f___closed__3 = (const lean_object*)&l_Lake_Workspace_findPackageByName_x3f___closed__3_value;
static const lean_closure_object l_Lake_Workspace_findPackageByName_x3f___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__4___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_Workspace_findPackageByName_x3f___closed__4 = (const lean_object*)&l_Lake_Workspace_findPackageByName_x3f___closed__4_value;
static const lean_closure_object l_Lake_Workspace_findPackageByName_x3f___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__5___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_Workspace_findPackageByName_x3f___closed__5 = (const lean_object*)&l_Lake_Workspace_findPackageByName_x3f___closed__5_value;
static const lean_closure_object l_Lake_Workspace_findPackageByName_x3f___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__6, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_Workspace_findPackageByName_x3f___closed__6 = (const lean_object*)&l_Lake_Workspace_findPackageByName_x3f___closed__6_value;
static const lean_ctor_object l_Lake_Workspace_findPackageByName_x3f___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_Workspace_findPackageByName_x3f___closed__0_value),((lean_object*)&l_Lake_Workspace_findPackageByName_x3f___closed__1_value)}};
static const lean_object* l_Lake_Workspace_findPackageByName_x3f___closed__7 = (const lean_object*)&l_Lake_Workspace_findPackageByName_x3f___closed__7_value;
static const lean_ctor_object l_Lake_Workspace_findPackageByName_x3f___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_Workspace_findPackageByName_x3f___closed__7_value),((lean_object*)&l_Lake_Workspace_findPackageByName_x3f___closed__2_value),((lean_object*)&l_Lake_Workspace_findPackageByName_x3f___closed__3_value),((lean_object*)&l_Lake_Workspace_findPackageByName_x3f___closed__4_value),((lean_object*)&l_Lake_Workspace_findPackageByName_x3f___closed__5_value)}};
static const lean_object* l_Lake_Workspace_findPackageByName_x3f___closed__8 = (const lean_object*)&l_Lake_Workspace_findPackageByName_x3f___closed__8_value;
static const lean_ctor_object l_Lake_Workspace_findPackageByName_x3f___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_Workspace_findPackageByName_x3f___closed__8_value),((lean_object*)&l_Lake_Workspace_findPackageByName_x3f___closed__6_value)}};
static const lean_object* l_Lake_Workspace_findPackageByName_x3f___closed__9 = (const lean_object*)&l_Lake_Workspace_findPackageByName_x3f___closed__9_value;
static const lean_ctor_object l_Lake_Workspace_findPackageByName_x3f___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lake_Workspace_findPackageByName_x3f___closed__10 = (const lean_object*)&l_Lake_Workspace_findPackageByName_x3f___closed__10_value;
LEAN_EXPORT lean_object* l_Lake_Workspace_findPackageByName_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Workspace_findPackage_x3f(lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Workspace_findScript_x3f_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Workspace_findScript_x3f_spec__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Workspace_findScript_x3f_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Workspace_findScript_x3f_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Workspace_findScript_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Workspace_findScript_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Workspace_findScript_x3f___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lake_Workspace_isLocalModule_spec__0(lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lake_Workspace_isLocalModule_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lake_Workspace_isLocalModule(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Workspace_isLocalModule___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lake_Workspace_isBuildableModule_spec__0(lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lake_Workspace_isBuildableModule_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lake_Workspace_isBuildableModule(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Workspace_isBuildableModule___boxed(lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Workspace_findModule_x3f_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Workspace_findModule_x3f_spec__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Workspace_findModule_x3f_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Workspace_findModule_x3f_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Workspace_findModule_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Workspace_findModule_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Workspace_findModule_x3f___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lake_Workspace_findModules_spec__0_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lake_Workspace_findModules_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Array_filterMapM___at___00Lake_Workspace_findModules_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Array_filterMapM___at___00Lake_Workspace_findModules_spec__0___closed__0 = (const lean_object*)&l_Array_filterMapM___at___00Lake_Workspace_findModules_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Lake_Workspace_findModules_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Lake_Workspace_findModules_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Workspace_findModules(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Workspace_findModules___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Workspace_findTargetModule_x3f_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Workspace_findTargetModule_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Workspace_findTargetModule_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Workspace_findTargetModule_x3f___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Workspace_findModuleBySrc_x3f_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Workspace_findModuleBySrc_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Workspace_findModuleBySrc_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Workspace_findModuleBySrc_x3f___boxed(lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Workspace_findLeanLib_x3f_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Workspace_findLeanLib_x3f_spec__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Workspace_findLeanLib_x3f_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Workspace_findLeanLib_x3f_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Workspace_findLeanLib_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Workspace_findLeanLib_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Workspace_findLeanLib_x3f___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Workspace_findLeanExe_x3f_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Workspace_findLeanExe_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Workspace_findLeanExe_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Workspace_findLeanExe_x3f___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Workspace_findExternLib_x3f_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Workspace_findExternLib_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Workspace_findExternLib_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Workspace_findExternLib_x3f___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Functor_mapRev___at___00Lake_Workspace_findTargetConfig_x3f_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Functor_mapRev___at___00Lake_Workspace_findTargetConfig_x3f_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Workspace_findTargetConfig_x3f_spec__1___lam__0(lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Workspace_findTargetConfig_x3f_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Workspace_findTargetConfig_x3f_spec__1___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Workspace_findTargetConfig_x3f_spec__1___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Workspace_findTargetConfig_x3f_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Workspace_findTargetConfig_x3f_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Workspace_findTargetConfig_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Workspace_findTargetConfig_x3f___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Workspace_findTargetDecl_x3f_spec__0___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Workspace_findTargetDecl_x3f_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Workspace_findTargetDecl_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Workspace_findTargetDecl_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Workspace_findTargetDecl_x3f___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Workspace_addFacetConfig(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Workspace_findFacetConfig_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Workspace_findFacetConfig_x3f___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Workspace_addModuleFacetConfig(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Workspace_findModuleFacetConfig_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Workspace_findModuleFacetConfig_x3f___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Workspace_addPackageFacetConfig(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Workspace_findPackageFacetConfig_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Workspace_findPackageFacetConfig_x3f___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Workspace_addLibraryFacetConfig(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Workspace_findLibraryFacetConfig_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Workspace_findLibraryFacetConfig_x3f___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Workspace_binPath_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Workspace_binPath_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Workspace_binPath(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Workspace_binPath___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Workspace_leanPath_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Workspace_leanPath_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Workspace_leanPath(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Workspace_leanPath___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lake_Workspace_leanSrcPath_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lake_Workspace_leanSrcPath_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Workspace_leanSrcPath_spec__1(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Workspace_leanSrcPath_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Workspace_leanSrcPath(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Workspace_leanSrcPath___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lake_Workspace_sharedLibPath_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lake_Workspace_sharedLibPath_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Workspace_sharedLibPath(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Workspace_sharedLibPath___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Workspace_augmentedPath(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Workspace_augmentedPath___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Workspace_augmentedLeanPath(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Workspace_augmentedLeanPath___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Workspace_augmentedLeanSrcPath(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Workspace_augmentedLeanSrcPath___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Workspace_augmentedSharedLibPath(lean_object*);
static const lean_string_object l_Lake_Workspace_augmentedEnvVars___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lake_Workspace_augmentedEnvVars___lam__0___closed__0 = (const lean_object*)&l_Lake_Workspace_augmentedEnvVars___lam__0___closed__0_value;
static const lean_ctor_object l_Lake_Workspace_augmentedEnvVars___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_Workspace_augmentedEnvVars___lam__0___closed__0_value)}};
static const lean_object* l_Lake_Workspace_augmentedEnvVars___lam__0___closed__1 = (const lean_object*)&l_Lake_Workspace_augmentedEnvVars___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lake_Workspace_augmentedEnvVars___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Workspace_augmentedEnvVars___lam__0___boxed(lean_object*);
static const lean_string_object l_Lake_Workspace_augmentedEnvVars___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "false"};
static const lean_object* l_Lake_Workspace_augmentedEnvVars___lam__1___closed__0 = (const lean_object*)&l_Lake_Workspace_augmentedEnvVars___lam__1___closed__0_value;
static const lean_ctor_object l_Lake_Workspace_augmentedEnvVars___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_Workspace_augmentedEnvVars___lam__1___closed__0_value)}};
static const lean_object* l_Lake_Workspace_augmentedEnvVars___lam__1___closed__1 = (const lean_object*)&l_Lake_Workspace_augmentedEnvVars___lam__1___closed__1_value;
static const lean_string_object l_Lake_Workspace_augmentedEnvVars___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "true"};
static const lean_object* l_Lake_Workspace_augmentedEnvVars___lam__1___closed__2 = (const lean_object*)&l_Lake_Workspace_augmentedEnvVars___lam__1___closed__2_value;
static const lean_ctor_object l_Lake_Workspace_augmentedEnvVars___lam__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_Workspace_augmentedEnvVars___lam__1___closed__2_value)}};
static const lean_object* l_Lake_Workspace_augmentedEnvVars___lam__1___closed__3 = (const lean_object*)&l_Lake_Workspace_augmentedEnvVars___lam__1___closed__3_value;
LEAN_EXPORT lean_object* l_Lake_Workspace_augmentedEnvVars___lam__1(uint8_t);
LEAN_EXPORT lean_object* l_Lake_Workspace_augmentedEnvVars___lam__1___boxed(lean_object*);
static const lean_string_object l_Lake_Workspace_augmentedEnvVars___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "LAKE_CACHE_DIR"};
static const lean_object* l_Lake_Workspace_augmentedEnvVars___closed__0 = (const lean_object*)&l_Lake_Workspace_augmentedEnvVars___closed__0_value;
static const lean_string_object l_Lake_Workspace_augmentedEnvVars___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "PATH"};
static const lean_object* l_Lake_Workspace_augmentedEnvVars___closed__1 = (const lean_object*)&l_Lake_Workspace_augmentedEnvVars___closed__1_value;
static const lean_string_object l_Lake_Workspace_augmentedEnvVars___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "LEAN_PATH"};
static const lean_object* l_Lake_Workspace_augmentedEnvVars___closed__2 = (const lean_object*)&l_Lake_Workspace_augmentedEnvVars___closed__2_value;
static const lean_string_object l_Lake_Workspace_augmentedEnvVars___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "LEAN_SRC_PATH"};
static const lean_object* l_Lake_Workspace_augmentedEnvVars___closed__3 = (const lean_object*)&l_Lake_Workspace_augmentedEnvVars___closed__3_value;
static const lean_string_object l_Lake_Workspace_augmentedEnvVars___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "LEAN_GITHASH"};
static const lean_object* l_Lake_Workspace_augmentedEnvVars___closed__4 = (const lean_object*)&l_Lake_Workspace_augmentedEnvVars___closed__4_value;
static const lean_string_object l_Lake_Workspace_augmentedEnvVars___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "LAKE_ARTIFACT_CACHE"};
static const lean_object* l_Lake_Workspace_augmentedEnvVars___closed__5 = (const lean_object*)&l_Lake_Workspace_augmentedEnvVars___closed__5_value;
static const lean_string_object l_Lake_Workspace_augmentedEnvVars___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "LAKE_RESTORE_ARTIFACTS"};
static const lean_object* l_Lake_Workspace_augmentedEnvVars___closed__6 = (const lean_object*)&l_Lake_Workspace_augmentedEnvVars___closed__6_value;
LEAN_EXPORT lean_object* l_Lake_Workspace_augmentedEnvVars(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Workspace_clean_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Workspace_clean_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Workspace_clean(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Workspace_clean___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_computeLakeCache(lean_object* v_pkg_2_, lean_object* v_lakeEnv_3_){
_start:
{
lean_object* v_config_4_; uint8_t v_bootstrap_5_; 
v_config_4_ = lean_ctor_get(v_pkg_2_, 6);
v_bootstrap_5_ = lean_ctor_get_uint8(v_config_4_, sizeof(void*)*28);
if (v_bootstrap_5_ == 0)
{
lean_object* v_lakeCache_x3f_6_; 
v_lakeCache_x3f_6_ = lean_ctor_get(v_lakeEnv_3_, 8);
if (lean_obj_tag(v_lakeCache_x3f_6_) == 0)
{
lean_object* v_dir_7_; lean_object* v___x_8_; lean_object* v___x_9_; lean_object* v___x_10_; lean_object* v___x_11_; 
v_dir_7_ = lean_ctor_get(v_pkg_2_, 4);
lean_inc_ref(v_dir_7_);
lean_dec_ref(v_pkg_2_);
v___x_8_ = l_Lake_defaultLakeDir;
v___x_9_ = l_Lake_joinRelative(v_dir_7_, v___x_8_);
v___x_10_ = ((lean_object*)(l_Lake_computeLakeCache___closed__0));
v___x_11_ = l_Lake_joinRelative(v___x_9_, v___x_10_);
return v___x_11_;
}
else
{
lean_object* v_val_12_; 
lean_dec_ref(v_pkg_2_);
v_val_12_ = lean_ctor_get(v_lakeCache_x3f_6_, 0);
lean_inc(v_val_12_);
return v_val_12_;
}
}
else
{
lean_object* v_lakeSystemCache_x3f_13_; 
v_lakeSystemCache_x3f_13_ = lean_ctor_get(v_lakeEnv_3_, 9);
if (lean_obj_tag(v_lakeSystemCache_x3f_13_) == 0)
{
lean_object* v_dir_14_; lean_object* v___x_15_; lean_object* v___x_16_; lean_object* v___x_17_; lean_object* v___x_18_; 
v_dir_14_ = lean_ctor_get(v_pkg_2_, 4);
lean_inc_ref(v_dir_14_);
lean_dec_ref(v_pkg_2_);
v___x_15_ = l_Lake_defaultLakeDir;
v___x_16_ = l_Lake_joinRelative(v_dir_14_, v___x_15_);
v___x_17_ = ((lean_object*)(l_Lake_computeLakeCache___closed__0));
v___x_18_ = l_Lake_joinRelative(v___x_16_, v___x_17_);
return v___x_18_;
}
else
{
lean_object* v_val_19_; 
lean_dec_ref(v_pkg_2_);
v_val_19_ = lean_ctor_get(v_lakeSystemCache_x3f_13_, 0);
lean_inc(v_val_19_);
return v_val_19_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_computeLakeCache___boxed(lean_object* v_pkg_20_, lean_object* v_lakeEnv_21_){
_start:
{
lean_object* v_res_22_; 
v_res_22_ = l_Lake_computeLakeCache(v_pkg_20_, v_lakeEnv_21_);
lean_dec_ref(v_lakeEnv_21_);
return v_res_22_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Workspace_0__Lake_OpaqueWorkspace_unsafeMk(lean_object* v_a_23_){
_start:
{
lean_object* v___x_24_; 
v___x_24_ = l_unsafeCast___redArg(v_a_23_);
return v___x_24_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Workspace_0__Lake_OpaqueWorkspace_unsafeMk___boxed(lean_object* v_a_25_){
_start:
{
lean_object* v_res_26_; 
v_res_26_ = l___private_Lake_Config_Workspace_0__Lake_OpaqueWorkspace_unsafeMk(v_a_25_);
lean_dec_ref(v_a_25_);
return v_res_26_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Workspace_0__Lake_OpaqueWorkspace_unsafeGet(lean_object* v_a_29_){
_start:
{
lean_object* v___x_30_; 
v___x_30_ = l_unsafeCast___redArg(v_a_29_);
return v___x_30_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Workspace_0__Lake_OpaqueWorkspace_unsafeGet___boxed(lean_object* v_a_31_){
_start:
{
lean_object* v_res_32_; 
v_res_32_ = l___private_Lake_Config_Workspace_0__Lake_OpaqueWorkspace_unsafeGet(v_a_31_);
lean_dec(v_a_31_);
return v_res_32_;
}
}
LEAN_EXPORT lean_object* l_Lake_OpaqueWorkspace_instInhabitedOfWorkspace(lean_object* v_inst_35_){
_start:
{
lean_object* v___x_36_; 
v___x_36_ = l_unsafeCast___redArg(v_inst_35_);
return v___x_36_;
}
}
LEAN_EXPORT lean_object* l_Lake_OpaqueWorkspace_instInhabitedOfWorkspace___boxed(lean_object* v_inst_37_){
_start:
{
lean_object* v_res_38_; 
v_res_38_ = l_Lake_OpaqueWorkspace_instInhabitedOfWorkspace(v_inst_37_);
lean_dec_ref(v_inst_37_);
return v_res_38_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Package_defaultTargetRoots_spec__0(lean_object* v_self_44_, lean_object* v_as_45_, size_t v_i_46_, size_t v_stop_47_, lean_object* v_b_48_){
_start:
{
lean_object* v___y_50_; uint8_t v___x_57_; 
v___x_57_ = lean_usize_dec_eq(v_i_46_, v_stop_47_);
if (v___x_57_ == 0)
{
lean_object* v___x_58_; lean_object* v___x_71_; 
v___x_58_ = lean_array_uget_borrowed(v_as_45_, v_i_46_);
v___x_71_ = l_Lake_Package_findTargetDecl_x3f(v___x_58_, v_self_44_);
if (lean_obj_tag(v___x_71_) == 0)
{
goto v___jp_59_;
}
else
{
lean_object* v_val_72_; lean_object* v_kind_73_; lean_object* v_config_74_; lean_object* v___x_75_; uint8_t v___x_76_; 
v_val_72_ = lean_ctor_get(v___x_71_, 0);
lean_inc(v_val_72_);
lean_dec_ref_known(v___x_71_, 1);
v_kind_73_ = lean_ctor_get(v_val_72_, 2);
lean_inc(v_kind_73_);
v_config_74_ = lean_ctor_get(v_val_72_, 3);
lean_inc(v_config_74_);
lean_dec(v_val_72_);
v___x_75_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Package_defaultTargetRoots_spec__0___closed__2));
v___x_76_ = lean_name_eq(v_kind_73_, v___x_75_);
lean_dec(v_kind_73_);
if (v___x_76_ == 0)
{
lean_dec(v_config_74_);
goto v___jp_59_;
}
else
{
lean_object* v_roots_77_; lean_object* v___x_78_; 
v_roots_77_ = lean_ctor_get(v_config_74_, 2);
lean_inc_ref(v_roots_77_);
lean_dec(v_config_74_);
v___x_78_ = l_Array_append___redArg(v_b_48_, v_roots_77_);
lean_dec_ref(v_roots_77_);
v___y_50_ = v___x_78_;
goto v___jp_49_;
}
}
v___jp_59_:
{
lean_object* v___x_60_; 
v___x_60_ = l_Lake_Package_findTargetDecl_x3f(v___x_58_, v_self_44_);
if (lean_obj_tag(v___x_60_) == 0)
{
goto v___jp_54_;
}
else
{
lean_object* v_val_61_; lean_object* v_kind_62_; lean_object* v_config_63_; lean_object* v___x_64_; uint8_t v___x_65_; 
v_val_61_ = lean_ctor_get(v___x_60_, 0);
lean_inc(v_val_61_);
lean_dec_ref_known(v___x_60_, 1);
v_kind_62_ = lean_ctor_get(v_val_61_, 2);
lean_inc(v_kind_62_);
v_config_63_ = lean_ctor_get(v_val_61_, 3);
lean_inc(v_config_63_);
lean_dec(v_val_61_);
v___x_64_ = l_Lake_LeanExe_keyword;
v___x_65_ = lean_name_eq(v_kind_62_, v___x_64_);
lean_dec(v_kind_62_);
if (v___x_65_ == 0)
{
lean_dec(v_config_63_);
goto v___jp_54_;
}
else
{
lean_object* v_root_66_; lean_object* v___x_67_; lean_object* v___x_68_; lean_object* v___x_69_; lean_object* v___x_70_; 
v_root_66_ = lean_ctor_get(v_config_63_, 2);
lean_inc(v_root_66_);
lean_dec(v_config_63_);
v___x_67_ = lean_unsigned_to_nat(1u);
v___x_68_ = lean_mk_empty_array_with_capacity(v___x_67_);
v___x_69_ = lean_array_push(v___x_68_, v_root_66_);
v___x_70_ = l_Array_append___redArg(v_b_48_, v___x_69_);
lean_dec_ref(v___x_69_);
v___y_50_ = v___x_70_;
goto v___jp_49_;
}
}
}
}
else
{
return v_b_48_;
}
v___jp_49_:
{
size_t v___x_51_; size_t v___x_52_; 
v___x_51_ = ((size_t)1ULL);
v___x_52_ = lean_usize_add(v_i_46_, v___x_51_);
v_i_46_ = v___x_52_;
v_b_48_ = v___y_50_;
goto _start;
}
v___jp_54_:
{
lean_object* v___x_55_; lean_object* v___x_56_; 
v___x_55_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Package_defaultTargetRoots_spec__0___closed__0));
v___x_56_ = l_Array_append___redArg(v_b_48_, v___x_55_);
v___y_50_ = v___x_56_;
goto v___jp_49_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Package_defaultTargetRoots_spec__0___boxed(lean_object* v_self_79_, lean_object* v_as_80_, lean_object* v_i_81_, lean_object* v_stop_82_, lean_object* v_b_83_){
_start:
{
size_t v_i_boxed_84_; size_t v_stop_boxed_85_; lean_object* v_res_86_; 
v_i_boxed_84_ = lean_unbox_usize(v_i_81_);
lean_dec(v_i_81_);
v_stop_boxed_85_ = lean_unbox_usize(v_stop_82_);
lean_dec(v_stop_82_);
v_res_86_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Package_defaultTargetRoots_spec__0(v_self_79_, v_as_80_, v_i_boxed_84_, v_stop_boxed_85_, v_b_83_);
lean_dec_ref(v_as_80_);
lean_dec_ref(v_self_79_);
return v_res_86_;
}
}
LEAN_EXPORT lean_object* l_Lake_Package_defaultTargetRoots(lean_object* v_self_89_){
_start:
{
lean_object* v_defaultTargets_90_; lean_object* v___x_91_; lean_object* v___x_92_; lean_object* v___x_93_; uint8_t v___x_94_; 
v_defaultTargets_90_ = lean_ctor_get(v_self_89_, 17);
v___x_91_ = lean_unsigned_to_nat(0u);
v___x_92_ = ((lean_object*)(l_Lake_Package_defaultTargetRoots___closed__0));
v___x_93_ = lean_array_get_size(v_defaultTargets_90_);
v___x_94_ = lean_nat_dec_lt(v___x_91_, v___x_93_);
if (v___x_94_ == 0)
{
return v___x_92_;
}
else
{
size_t v___x_95_; size_t v___x_96_; lean_object* v___x_97_; 
v___x_95_ = ((size_t)0ULL);
v___x_96_ = lean_usize_of_nat(v___x_93_);
v___x_97_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Package_defaultTargetRoots_spec__0(v_self_89_, v_defaultTargets_90_, v___x_95_, v___x_96_, v___x_92_);
return v___x_97_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_Package_defaultTargetRoots___boxed(lean_object* v_self_98_){
_start:
{
lean_object* v_res_99_; 
v_res_99_ = l_Lake_Package_defaultTargetRoots(v_self_98_);
lean_dec_ref(v_self_98_);
return v_res_99_;
}
}
LEAN_EXPORT lean_object* l_Lake_Workspace_root(lean_object* v_self_100_){
_start:
{
lean_object* v_packages_101_; lean_object* v___x_102_; lean_object* v___x_103_; 
v_packages_101_ = lean_ctor_get(v_self_100_, 4);
v___x_102_ = lean_unsigned_to_nat(0u);
v___x_103_ = lean_array_fget_borrowed(v_packages_101_, v___x_102_);
lean_inc(v___x_103_);
return v___x_103_;
}
}
LEAN_EXPORT lean_object* l_Lake_Workspace_root___boxed(lean_object* v_self_104_){
_start:
{
lean_object* v_res_105_; 
v_res_105_ = l_Lake_Workspace_root(v_self_104_);
lean_dec_ref(v_self_104_);
return v_res_105_;
}
}
LEAN_EXPORT uint8_t l___private_Lake_Config_Workspace_0__Lake_Workspace_bootstrap(lean_object* v_self_106_){
_start:
{
lean_object* v_packages_107_; lean_object* v___x_108_; lean_object* v___x_109_; lean_object* v_config_110_; uint8_t v_bootstrap_111_; 
v_packages_107_ = lean_ctor_get(v_self_106_, 4);
v___x_108_ = lean_unsigned_to_nat(0u);
v___x_109_ = lean_array_fget_borrowed(v_packages_107_, v___x_108_);
v_config_110_ = lean_ctor_get(v___x_109_, 6);
v_bootstrap_111_ = lean_ctor_get_uint8(v_config_110_, sizeof(void*)*28);
return v_bootstrap_111_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Config_Workspace_0__Lake_Workspace_bootstrap___boxed(lean_object* v_self_112_){
_start:
{
uint8_t v_res_113_; lean_object* v_r_114_; 
v_res_113_ = l___private_Lake_Config_Workspace_0__Lake_Workspace_bootstrap(v_self_112_);
lean_dec_ref(v_self_112_);
v_r_114_ = lean_box(v_res_113_);
return v_r_114_;
}
}
LEAN_EXPORT lean_object* l_Lake_Workspace_dir(lean_object* v_self_115_){
_start:
{
lean_object* v_packages_116_; lean_object* v___x_117_; lean_object* v___x_118_; lean_object* v_dir_119_; 
v_packages_116_ = lean_ctor_get(v_self_115_, 4);
v___x_117_ = lean_unsigned_to_nat(0u);
v___x_118_ = lean_array_fget_borrowed(v_packages_116_, v___x_117_);
v_dir_119_ = lean_ctor_get(v___x_118_, 4);
lean_inc_ref(v_dir_119_);
return v_dir_119_;
}
}
LEAN_EXPORT lean_object* l_Lake_Workspace_dir___boxed(lean_object* v_self_120_){
_start:
{
lean_object* v_res_121_; 
v_res_121_ = l_Lake_Workspace_dir(v_self_120_);
lean_dec_ref(v_self_120_);
return v_res_121_;
}
}
LEAN_EXPORT lean_object* l_Lake_Workspace_config(lean_object* v_self_122_){
_start:
{
lean_object* v_packages_123_; lean_object* v___x_124_; lean_object* v___x_125_; lean_object* v_config_126_; lean_object* v_toWorkspaceConfig_127_; 
v_packages_123_ = lean_ctor_get(v_self_122_, 4);
v___x_124_ = lean_unsigned_to_nat(0u);
v___x_125_ = lean_array_fget_borrowed(v_packages_123_, v___x_124_);
v_config_126_ = lean_ctor_get(v___x_125_, 6);
v_toWorkspaceConfig_127_ = lean_ctor_get(v_config_126_, 0);
lean_inc_ref(v_toWorkspaceConfig_127_);
return v_toWorkspaceConfig_127_;
}
}
LEAN_EXPORT lean_object* l_Lake_Workspace_config___boxed(lean_object* v_self_128_){
_start:
{
lean_object* v_res_129_; 
v_res_129_ = l_Lake_Workspace_config(v_self_128_);
lean_dec_ref(v_self_128_);
return v_res_129_;
}
}
LEAN_EXPORT lean_object* l_Lake_Workspace_relLakeDir___redArg(){
_start:
{
lean_object* v___x_131_; 
v___x_131_ = l_Lake_defaultLakeDir;
return v___x_131_;
}
}
LEAN_EXPORT lean_object* l_Lake_Workspace_relLakeDir___redArg___boxed(lean_object* v___dummy_132_){
_start:
{
lean_object* v_res_133_; 
v_res_133_ = l_Lake_Workspace_relLakeDir___redArg();
return v_res_133_;
}
}
LEAN_EXPORT lean_object* l_Lake_Workspace_relLakeDir(lean_object* v_self_134_){
_start:
{
lean_object* v___x_135_; 
v___x_135_ = l_Lake_defaultLakeDir;
return v___x_135_;
}
}
LEAN_EXPORT lean_object* l_Lake_Workspace_relLakeDir___boxed(lean_object* v_self_136_){
_start:
{
lean_object* v_res_137_; 
v_res_137_ = l_Lake_Workspace_relLakeDir(v_self_136_);
lean_dec_ref(v_self_136_);
return v_res_137_;
}
}
LEAN_EXPORT lean_object* l_Lake_Workspace_lakeDir(lean_object* v_self_138_){
_start:
{
lean_object* v_packages_139_; lean_object* v___x_140_; lean_object* v___x_141_; lean_object* v_dir_142_; lean_object* v___x_143_; lean_object* v___x_144_; 
v_packages_139_ = lean_ctor_get(v_self_138_, 4);
v___x_140_ = lean_unsigned_to_nat(0u);
v___x_141_ = lean_array_fget_borrowed(v_packages_139_, v___x_140_);
v_dir_142_ = lean_ctor_get(v___x_141_, 4);
v___x_143_ = l_Lake_defaultLakeDir;
lean_inc_ref(v_dir_142_);
v___x_144_ = l_Lake_joinRelative(v_dir_142_, v___x_143_);
return v___x_144_;
}
}
LEAN_EXPORT lean_object* l_Lake_Workspace_lakeDir___boxed(lean_object* v_self_145_){
_start:
{
lean_object* v_res_146_; 
v_res_146_ = l_Lake_Workspace_lakeDir(v_self_145_);
lean_dec_ref(v_self_145_);
return v_res_146_;
}
}
LEAN_EXPORT lean_object* l_Lake_Workspace_enableArtifactCache_x3f(lean_object* v_ws_147_){
_start:
{
lean_object* v_lakeEnv_148_; lean_object* v_enableArtifactCache_x3f_149_; 
v_lakeEnv_148_ = lean_ctor_get(v_ws_147_, 0);
v_enableArtifactCache_x3f_149_ = lean_ctor_get(v_lakeEnv_148_, 6);
if (lean_obj_tag(v_enableArtifactCache_x3f_149_) == 0)
{
lean_object* v_packages_150_; lean_object* v___x_151_; lean_object* v___x_152_; lean_object* v_config_153_; lean_object* v_enableArtifactCache_x3f_154_; 
v_packages_150_ = lean_ctor_get(v_ws_147_, 4);
v___x_151_ = lean_unsigned_to_nat(0u);
v___x_152_ = lean_array_fget_borrowed(v_packages_150_, v___x_151_);
v_config_153_ = lean_ctor_get(v___x_152_, 6);
v_enableArtifactCache_x3f_154_ = lean_ctor_get(v_config_153_, 24);
lean_inc(v_enableArtifactCache_x3f_154_);
return v_enableArtifactCache_x3f_154_;
}
else
{
lean_inc_ref(v_enableArtifactCache_x3f_149_);
return v_enableArtifactCache_x3f_149_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_Workspace_enableArtifactCache_x3f___boxed(lean_object* v_ws_155_){
_start:
{
lean_object* v_res_156_; 
v_res_156_ = l_Lake_Workspace_enableArtifactCache_x3f(v_ws_155_);
lean_dec_ref(v_ws_155_);
return v_res_156_;
}
}
LEAN_EXPORT uint8_t l_Lake_Workspace_enableArtifactCache(lean_object* v_ws_157_){
_start:
{
lean_object* v_lakeEnv_158_; lean_object* v_enableArtifactCache_x3f_159_; 
v_lakeEnv_158_ = lean_ctor_get(v_ws_157_, 0);
v_enableArtifactCache_x3f_159_ = lean_ctor_get(v_lakeEnv_158_, 6);
if (lean_obj_tag(v_enableArtifactCache_x3f_159_) == 0)
{
lean_object* v_packages_160_; lean_object* v___x_161_; lean_object* v___x_162_; lean_object* v_config_163_; lean_object* v_enableArtifactCache_x3f_164_; 
v_packages_160_ = lean_ctor_get(v_ws_157_, 4);
v___x_161_ = lean_unsigned_to_nat(0u);
v___x_162_ = lean_array_fget_borrowed(v_packages_160_, v___x_161_);
v_config_163_ = lean_ctor_get(v___x_162_, 6);
v_enableArtifactCache_x3f_164_ = lean_ctor_get(v_config_163_, 24);
if (lean_obj_tag(v_enableArtifactCache_x3f_164_) == 0)
{
uint8_t v___x_165_; 
v___x_165_ = 0;
return v___x_165_;
}
else
{
lean_object* v_val_166_; uint8_t v___x_167_; 
v_val_166_ = lean_ctor_get(v_enableArtifactCache_x3f_164_, 0);
v___x_167_ = lean_unbox(v_val_166_);
return v___x_167_;
}
}
else
{
lean_object* v_val_168_; uint8_t v___x_169_; 
v_val_168_ = lean_ctor_get(v_enableArtifactCache_x3f_159_, 0);
v___x_169_ = lean_unbox(v_val_168_);
return v___x_169_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_Workspace_enableArtifactCache___boxed(lean_object* v_ws_170_){
_start:
{
uint8_t v_res_171_; lean_object* v_r_172_; 
v_res_171_ = l_Lake_Workspace_enableArtifactCache(v_ws_170_);
lean_dec_ref(v_ws_170_);
v_r_172_ = lean_box(v_res_171_);
return v_r_172_;
}
}
LEAN_EXPORT uint8_t l_Lake_Workspace_isRootArtifactCacheWritable(lean_object* v_ws_173_){
_start:
{
lean_object* v_lakeEnv_174_; lean_object* v_enableArtifactCache_x3f_175_; 
v_lakeEnv_174_ = lean_ctor_get(v_ws_173_, 0);
v_enableArtifactCache_x3f_175_ = lean_ctor_get(v_lakeEnv_174_, 6);
if (lean_obj_tag(v_enableArtifactCache_x3f_175_) == 0)
{
lean_object* v_packages_176_; lean_object* v___x_177_; lean_object* v___x_178_; lean_object* v_config_179_; lean_object* v_enableArtifactCache_x3f_180_; 
v_packages_176_ = lean_ctor_get(v_ws_173_, 4);
v___x_177_ = lean_unsigned_to_nat(0u);
v___x_178_ = lean_array_fget_borrowed(v_packages_176_, v___x_177_);
v_config_179_ = lean_ctor_get(v___x_178_, 6);
v_enableArtifactCache_x3f_180_ = lean_ctor_get(v_config_179_, 24);
if (lean_obj_tag(v_enableArtifactCache_x3f_180_) == 0)
{
uint8_t v___x_181_; 
v___x_181_ = 0;
return v___x_181_;
}
else
{
lean_object* v_val_182_; uint8_t v___x_183_; 
v_val_182_ = lean_ctor_get(v_enableArtifactCache_x3f_180_, 0);
v___x_183_ = lean_unbox(v_val_182_);
return v___x_183_;
}
}
else
{
lean_object* v_val_184_; uint8_t v___x_185_; 
v_val_184_ = lean_ctor_get(v_enableArtifactCache_x3f_175_, 0);
v___x_185_ = lean_unbox(v_val_184_);
return v___x_185_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_Workspace_isRootArtifactCacheWritable___boxed(lean_object* v_ws_186_){
_start:
{
uint8_t v_res_187_; lean_object* v_r_188_; 
v_res_187_ = l_Lake_Workspace_isRootArtifactCacheWritable(v_ws_186_);
lean_dec_ref(v_ws_186_);
v_r_188_ = lean_box(v_res_187_);
return v_r_188_;
}
}
LEAN_EXPORT uint8_t l_Lake_Workspace_isRootArtifactCacheEnabled(lean_object* v_ws_189_){
_start:
{
uint8_t v___x_190_; 
v___x_190_ = l_Lake_Workspace_isRootArtifactCacheWritable(v_ws_189_);
return v___x_190_;
}
}
LEAN_EXPORT lean_object* l_Lake_Workspace_isRootArtifactCacheEnabled___boxed(lean_object* v_ws_191_){
_start:
{
uint8_t v_res_192_; lean_object* v_r_193_; 
v_res_192_ = l_Lake_Workspace_isRootArtifactCacheEnabled(v_ws_191_);
lean_dec_ref(v_ws_191_);
v_r_193_ = lean_box(v_res_192_);
return v_r_193_;
}
}
LEAN_EXPORT lean_object* l_Lake_Workspace_restoreAllArtifacts_x3f(lean_object* v_ws_194_){
_start:
{
lean_object* v_lakeEnv_195_; lean_object* v_restoreAllArtifacts_x3f_196_; 
v_lakeEnv_195_ = lean_ctor_get(v_ws_194_, 0);
v_restoreAllArtifacts_x3f_196_ = lean_ctor_get(v_lakeEnv_195_, 7);
if (lean_obj_tag(v_restoreAllArtifacts_x3f_196_) == 0)
{
lean_object* v_packages_197_; lean_object* v___x_198_; lean_object* v___x_199_; lean_object* v_config_200_; lean_object* v_restoreAllArtifacts_x3f_201_; 
v_packages_197_ = lean_ctor_get(v_ws_194_, 4);
v___x_198_ = lean_unsigned_to_nat(0u);
v___x_199_ = lean_array_fget_borrowed(v_packages_197_, v___x_198_);
v_config_200_ = lean_ctor_get(v___x_199_, 6);
v_restoreAllArtifacts_x3f_201_ = lean_ctor_get(v_config_200_, 25);
lean_inc(v_restoreAllArtifacts_x3f_201_);
return v_restoreAllArtifacts_x3f_201_;
}
else
{
lean_inc_ref(v_restoreAllArtifacts_x3f_196_);
return v_restoreAllArtifacts_x3f_196_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_Workspace_restoreAllArtifacts_x3f___boxed(lean_object* v_ws_202_){
_start:
{
lean_object* v_res_203_; 
v_res_203_ = l_Lake_Workspace_restoreAllArtifacts_x3f(v_ws_202_);
lean_dec_ref(v_ws_202_);
return v_res_203_;
}
}
LEAN_EXPORT lean_object* l_Lake_Workspace_cacheToolchain(lean_object* v_ws_204_){
_start:
{
lean_object* v_lakeEnv_205_; lean_object* v_toolchain_206_; 
v_lakeEnv_205_ = lean_ctor_get(v_ws_204_, 0);
v_toolchain_206_ = lean_ctor_get(v_lakeEnv_205_, 19);
lean_inc_ref(v_toolchain_206_);
return v_toolchain_206_;
}
}
LEAN_EXPORT lean_object* l_Lake_Workspace_cacheToolchain___boxed(lean_object* v_ws_207_){
_start:
{
lean_object* v_res_208_; 
v_res_208_ = l_Lake_Workspace_cacheToolchain(v_ws_207_);
lean_dec_ref(v_ws_207_);
return v_res_208_;
}
}
LEAN_EXPORT lean_object* l_Lake_Workspace_defaultCacheService(lean_object* v_ws_209_){
_start:
{
lean_object* v_lakeConfig_210_; lean_object* v_defaultCacheService_211_; 
v_lakeConfig_210_ = lean_ctor_get(v_ws_209_, 1);
v_defaultCacheService_211_ = lean_ctor_get(v_lakeConfig_210_, 1);
lean_inc_ref(v_defaultCacheService_211_);
return v_defaultCacheService_211_;
}
}
LEAN_EXPORT lean_object* l_Lake_Workspace_defaultCacheService___boxed(lean_object* v_ws_212_){
_start:
{
lean_object* v_res_213_; 
v_res_213_ = l_Lake_Workspace_defaultCacheService(v_ws_212_);
lean_dec_ref(v_ws_212_);
return v_res_213_;
}
}
LEAN_EXPORT lean_object* l_Lake_Workspace_defaultCacheUploadService_x3f(lean_object* v_ws_214_){
_start:
{
lean_object* v_lakeConfig_215_; lean_object* v_defaultCacheUploadService_x3f_216_; 
v_lakeConfig_215_ = lean_ctor_get(v_ws_214_, 1);
v_defaultCacheUploadService_x3f_216_ = lean_ctor_get(v_lakeConfig_215_, 2);
lean_inc(v_defaultCacheUploadService_x3f_216_);
return v_defaultCacheUploadService_x3f_216_;
}
}
LEAN_EXPORT lean_object* l_Lake_Workspace_defaultCacheUploadService_x3f___boxed(lean_object* v_ws_217_){
_start:
{
lean_object* v_res_218_; 
v_res_218_ = l_Lake_Workspace_defaultCacheUploadService_x3f(v_ws_217_);
lean_dec_ref(v_ws_217_);
return v_res_218_;
}
}
static lean_object* _init_l_Lake_Workspace_findCacheService_x3f___closed__0(void){
_start:
{
lean_object* v___x_219_; lean_object* v___x_220_; 
v___x_219_ = lean_box(0);
v___x_220_ = l_unsafeCast___redArg(v___x_219_);
return v___x_220_;
}
}
LEAN_EXPORT lean_object* l_Lake_Workspace_findCacheService_x3f(lean_object* v_ws_221_, lean_object* v_service_222_){
_start:
{
lean_object* v_lakeConfig_223_; lean_object* v_cacheServices_224_; lean_object* v___x_225_; lean_object* v___x_226_; lean_object* v___x_227_; 
v_lakeConfig_223_ = lean_ctor_get(v_ws_221_, 1);
v_cacheServices_224_ = lean_ctor_get(v_lakeConfig_223_, 3);
v___x_225_ = lean_obj_once(&l_Lake_Workspace_findCacheService_x3f___closed__0, &l_Lake_Workspace_findCacheService_x3f___closed__0_once, _init_l_Lake_Workspace_findCacheService_x3f___closed__0);
v___x_226_ = l_Lean_Name_str___override(v___x_225_, v_service_222_);
v___x_227_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_cacheServices_224_, v___x_226_);
lean_dec(v___x_226_);
return v___x_227_;
}
}
LEAN_EXPORT lean_object* l_Lake_Workspace_findCacheService_x3f___boxed(lean_object* v_ws_228_, lean_object* v_service_229_){
_start:
{
lean_object* v_res_230_; 
v_res_230_ = l_Lake_Workspace_findCacheService_x3f(v_ws_228_, v_service_229_);
lean_dec_ref(v_ws_228_);
return v_res_230_;
}
}
LEAN_EXPORT lean_object* l_Lake_Workspace_relPkgsDir(lean_object* v_self_231_){
_start:
{
lean_object* v_packages_232_; lean_object* v___x_233_; lean_object* v___x_234_; lean_object* v_config_235_; lean_object* v_toWorkspaceConfig_236_; lean_object* v___x_237_; 
v_packages_232_ = lean_ctor_get(v_self_231_, 4);
v___x_233_ = lean_unsigned_to_nat(0u);
v___x_234_ = lean_array_fget_borrowed(v_packages_232_, v___x_233_);
v_config_235_ = lean_ctor_get(v___x_234_, 6);
v_toWorkspaceConfig_236_ = lean_ctor_get(v_config_235_, 0);
lean_inc_ref(v_toWorkspaceConfig_236_);
v___x_237_ = l_System_FilePath_normalize(v_toWorkspaceConfig_236_);
return v___x_237_;
}
}
LEAN_EXPORT lean_object* l_Lake_Workspace_relPkgsDir___boxed(lean_object* v_self_238_){
_start:
{
lean_object* v_res_239_; 
v_res_239_ = l_Lake_Workspace_relPkgsDir(v_self_238_);
lean_dec_ref(v_self_238_);
return v_res_239_;
}
}
LEAN_EXPORT lean_object* l_Lake_Workspace_pkgsDir(lean_object* v_self_240_){
_start:
{
lean_object* v_packages_241_; lean_object* v___x_242_; lean_object* v___x_243_; lean_object* v_config_244_; lean_object* v_dir_245_; lean_object* v_toWorkspaceConfig_246_; lean_object* v___x_247_; lean_object* v___x_248_; 
v_packages_241_ = lean_ctor_get(v_self_240_, 4);
v___x_242_ = lean_unsigned_to_nat(0u);
v___x_243_ = lean_array_fget_borrowed(v_packages_241_, v___x_242_);
v_config_244_ = lean_ctor_get(v___x_243_, 6);
v_dir_245_ = lean_ctor_get(v___x_243_, 4);
v_toWorkspaceConfig_246_ = lean_ctor_get(v_config_244_, 0);
lean_inc_ref(v_toWorkspaceConfig_246_);
v___x_247_ = l_System_FilePath_normalize(v_toWorkspaceConfig_246_);
lean_inc_ref(v_dir_245_);
v___x_248_ = l_Lake_joinRelative(v_dir_245_, v___x_247_);
return v___x_248_;
}
}
LEAN_EXPORT lean_object* l_Lake_Workspace_pkgsDir___boxed(lean_object* v_self_249_){
_start:
{
lean_object* v_res_250_; 
v_res_250_ = l_Lake_Workspace_pkgsDir(v_self_249_);
lean_dec_ref(v_self_249_);
return v_res_250_;
}
}
LEAN_EXPORT lean_object* l_Lake_Workspace_leanArgs(lean_object* v_self_251_){
_start:
{
lean_object* v_packages_252_; lean_object* v___x_253_; lean_object* v___x_254_; lean_object* v_config_255_; lean_object* v_toLeanConfig_256_; lean_object* v_moreLeanArgs_257_; 
v_packages_252_ = lean_ctor_get(v_self_251_, 4);
v___x_253_ = lean_unsigned_to_nat(0u);
v___x_254_ = lean_array_fget_borrowed(v_packages_252_, v___x_253_);
v_config_255_ = lean_ctor_get(v___x_254_, 6);
v_toLeanConfig_256_ = lean_ctor_get(v_config_255_, 1);
v_moreLeanArgs_257_ = lean_ctor_get(v_toLeanConfig_256_, 1);
lean_inc_ref(v_moreLeanArgs_257_);
return v_moreLeanArgs_257_;
}
}
LEAN_EXPORT lean_object* l_Lake_Workspace_leanArgs___boxed(lean_object* v_self_258_){
_start:
{
lean_object* v_res_259_; 
v_res_259_ = l_Lake_Workspace_leanArgs(v_self_258_);
lean_dec_ref(v_self_258_);
return v_res_259_;
}
}
LEAN_EXPORT lean_object* l_Lake_Workspace_leanOptions(lean_object* v_self_260_){
_start:
{
lean_object* v_packages_261_; lean_object* v___x_262_; lean_object* v___x_263_; lean_object* v_config_264_; lean_object* v_toLeanConfig_265_; lean_object* v_leanOptions_266_; lean_object* v___x_267_; 
v_packages_261_ = lean_ctor_get(v_self_260_, 4);
v___x_262_ = lean_unsigned_to_nat(0u);
v___x_263_ = lean_array_fget_borrowed(v_packages_261_, v___x_262_);
v_config_264_ = lean_ctor_get(v___x_263_, 6);
v_toLeanConfig_265_ = lean_ctor_get(v_config_264_, 1);
v_leanOptions_266_ = lean_ctor_get(v_toLeanConfig_265_, 0);
v___x_267_ = l_Lean_LeanOptions_ofArray(v_leanOptions_266_);
return v___x_267_;
}
}
LEAN_EXPORT lean_object* l_Lake_Workspace_leanOptions___boxed(lean_object* v_self_268_){
_start:
{
lean_object* v_res_269_; 
v_res_269_ = l_Lake_Workspace_leanOptions(v_self_268_);
lean_dec_ref(v_self_268_);
return v_res_269_;
}
}
LEAN_EXPORT lean_object* l_Lake_Workspace_serverOptions(lean_object* v_self_270_){
_start:
{
lean_object* v_packages_271_; lean_object* v___x_272_; lean_object* v___x_273_; lean_object* v_config_274_; lean_object* v_toLeanConfig_275_; lean_object* v_leanOptions_276_; lean_object* v_moreServerOptions_277_; lean_object* v___x_278_; lean_object* v___x_279_; 
v_packages_271_ = lean_ctor_get(v_self_270_, 4);
v___x_272_ = lean_unsigned_to_nat(0u);
v___x_273_ = lean_array_fget_borrowed(v_packages_271_, v___x_272_);
v_config_274_ = lean_ctor_get(v___x_273_, 6);
v_toLeanConfig_275_ = lean_ctor_get(v_config_274_, 1);
v_leanOptions_276_ = lean_ctor_get(v_toLeanConfig_275_, 0);
v_moreServerOptions_277_ = lean_ctor_get(v_toLeanConfig_275_, 4);
v___x_278_ = l_Lean_LeanOptions_ofArray(v_leanOptions_276_);
v___x_279_ = l_Lean_LeanOptions_appendArray(v___x_278_, v_moreServerOptions_277_);
return v___x_279_;
}
}
LEAN_EXPORT lean_object* l_Lake_Workspace_serverOptions___boxed(lean_object* v_self_280_){
_start:
{
lean_object* v_res_281_; 
v_res_281_ = l_Lake_Workspace_serverOptions(v_self_280_);
lean_dec_ref(v_self_280_);
return v_res_281_;
}
}
LEAN_EXPORT lean_object* l_Lake_Workspace_defaultTargetRoots(lean_object* v_self_282_){
_start:
{
lean_object* v_packages_283_; lean_object* v___x_284_; lean_object* v___x_285_; lean_object* v___x_286_; 
v_packages_283_ = lean_ctor_get(v_self_282_, 4);
v___x_284_ = lean_unsigned_to_nat(0u);
v___x_285_ = lean_array_fget_borrowed(v_packages_283_, v___x_284_);
v___x_286_ = l_Lake_Package_defaultTargetRoots(v___x_285_);
return v___x_286_;
}
}
LEAN_EXPORT lean_object* l_Lake_Workspace_defaultTargetRoots___boxed(lean_object* v_self_287_){
_start:
{
lean_object* v_res_288_; 
v_res_288_ = l_Lake_Workspace_defaultTargetRoots(v_self_287_);
lean_dec_ref(v_self_287_);
return v_res_288_;
}
}
LEAN_EXPORT lean_object* l_Lake_Workspace_manifestFile(lean_object* v_self_289_){
_start:
{
lean_object* v_packages_290_; lean_object* v___x_291_; lean_object* v___x_292_; lean_object* v_dir_293_; lean_object* v_relManifestFile_294_; lean_object* v___x_295_; 
v_packages_290_ = lean_ctor_get(v_self_289_, 4);
v___x_291_ = lean_unsigned_to_nat(0u);
v___x_292_ = lean_array_fget_borrowed(v_packages_290_, v___x_291_);
v_dir_293_ = lean_ctor_get(v___x_292_, 4);
v_relManifestFile_294_ = lean_ctor_get(v___x_292_, 9);
lean_inc_ref(v_relManifestFile_294_);
lean_inc_ref(v_dir_293_);
v___x_295_ = l_Lake_joinRelative(v_dir_293_, v_relManifestFile_294_);
return v___x_295_;
}
}
LEAN_EXPORT lean_object* l_Lake_Workspace_manifestFile___boxed(lean_object* v_self_296_){
_start:
{
lean_object* v_res_297_; 
v_res_297_ = l_Lake_Workspace_manifestFile(v_self_296_);
lean_dec_ref(v_self_296_);
return v_res_297_;
}
}
LEAN_EXPORT lean_object* l_Lake_Workspace_packageOverridesFile(lean_object* v_self_299_){
_start:
{
lean_object* v_packages_300_; lean_object* v___x_301_; lean_object* v___x_302_; lean_object* v_dir_303_; lean_object* v___x_304_; lean_object* v___x_305_; lean_object* v___x_306_; lean_object* v___x_307_; 
v_packages_300_ = lean_ctor_get(v_self_299_, 4);
v___x_301_ = lean_unsigned_to_nat(0u);
v___x_302_ = lean_array_fget_borrowed(v_packages_300_, v___x_301_);
v_dir_303_ = lean_ctor_get(v___x_302_, 4);
v___x_304_ = l_Lake_defaultLakeDir;
lean_inc_ref(v_dir_303_);
v___x_305_ = l_Lake_joinRelative(v_dir_303_, v___x_304_);
v___x_306_ = ((lean_object*)(l_Lake_Workspace_packageOverridesFile___closed__0));
v___x_307_ = l_Lake_joinRelative(v___x_305_, v___x_306_);
return v___x_307_;
}
}
LEAN_EXPORT lean_object* l_Lake_Workspace_packageOverridesFile___boxed(lean_object* v_self_308_){
_start:
{
lean_object* v_res_309_; 
v_res_309_ = l_Lake_Workspace_packageOverridesFile(v_self_308_);
lean_dec_ref(v_self_308_);
return v_res_309_;
}
}
LEAN_EXPORT lean_object* l_Lake_Workspace_addPackage_x27___redArg(lean_object* v_pkg_311_, lean_object* v_self_312_){
_start:
{
lean_object* v_lakeEnv_313_; lean_object* v_lakeConfig_314_; lean_object* v_lakeCache_315_; lean_object* v_lakeArgs_x3f_316_; lean_object* v_packages_317_; lean_object* v_packageMap_318_; lean_object* v_facetConfigs_319_; lean_object* v___x_321_; uint8_t v_isShared_322_; uint8_t v_isSharedCheck_330_; 
v_lakeEnv_313_ = lean_ctor_get(v_self_312_, 0);
v_lakeConfig_314_ = lean_ctor_get(v_self_312_, 1);
v_lakeCache_315_ = lean_ctor_get(v_self_312_, 2);
v_lakeArgs_x3f_316_ = lean_ctor_get(v_self_312_, 3);
v_packages_317_ = lean_ctor_get(v_self_312_, 4);
v_packageMap_318_ = lean_ctor_get(v_self_312_, 5);
v_facetConfigs_319_ = lean_ctor_get(v_self_312_, 6);
v_isSharedCheck_330_ = !lean_is_exclusive(v_self_312_);
if (v_isSharedCheck_330_ == 0)
{
v___x_321_ = v_self_312_;
v_isShared_322_ = v_isSharedCheck_330_;
goto v_resetjp_320_;
}
else
{
lean_inc(v_facetConfigs_319_);
lean_inc(v_packageMap_318_);
lean_inc(v_packages_317_);
lean_inc(v_lakeArgs_x3f_316_);
lean_inc(v_lakeCache_315_);
lean_inc(v_lakeConfig_314_);
lean_inc(v_lakeEnv_313_);
lean_dec(v_self_312_);
v___x_321_ = lean_box(0);
v_isShared_322_ = v_isSharedCheck_330_;
goto v_resetjp_320_;
}
v_resetjp_320_:
{
lean_object* v_keyName_323_; lean_object* v___x_324_; lean_object* v___x_325_; lean_object* v___x_326_; lean_object* v___x_328_; 
v_keyName_323_ = lean_ctor_get(v_pkg_311_, 2);
lean_inc(v_keyName_323_);
lean_inc_ref(v_pkg_311_);
v___x_324_ = lean_array_push(v_packages_317_, v_pkg_311_);
v___x_325_ = ((lean_object*)(l_Lake_Workspace_addPackage_x27___redArg___closed__0));
v___x_326_ = l_Std_DTreeMap_Internal_Impl_insert___redArg(v___x_325_, v_keyName_323_, v_pkg_311_, v_packageMap_318_);
if (v_isShared_322_ == 0)
{
lean_ctor_set(v___x_321_, 5, v___x_326_);
lean_ctor_set(v___x_321_, 4, v___x_324_);
v___x_328_ = v___x_321_;
goto v_reusejp_327_;
}
else
{
lean_object* v_reuseFailAlloc_329_; 
v_reuseFailAlloc_329_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v_reuseFailAlloc_329_, 0, v_lakeEnv_313_);
lean_ctor_set(v_reuseFailAlloc_329_, 1, v_lakeConfig_314_);
lean_ctor_set(v_reuseFailAlloc_329_, 2, v_lakeCache_315_);
lean_ctor_set(v_reuseFailAlloc_329_, 3, v_lakeArgs_x3f_316_);
lean_ctor_set(v_reuseFailAlloc_329_, 4, v___x_324_);
lean_ctor_set(v_reuseFailAlloc_329_, 5, v___x_326_);
lean_ctor_set(v_reuseFailAlloc_329_, 6, v_facetConfigs_319_);
v___x_328_ = v_reuseFailAlloc_329_;
goto v_reusejp_327_;
}
v_reusejp_327_:
{
return v___x_328_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Workspace_addPackage_x27(lean_object* v_pkg_331_, lean_object* v_self_332_, lean_object* v_h__wsIdx_333_, lean_object* v_h__depIdxs_334_){
_start:
{
lean_object* v_lakeEnv_335_; lean_object* v_lakeConfig_336_; lean_object* v_lakeCache_337_; lean_object* v_lakeArgs_x3f_338_; lean_object* v_packages_339_; lean_object* v_packageMap_340_; lean_object* v_facetConfigs_341_; lean_object* v___x_343_; uint8_t v_isShared_344_; uint8_t v_isSharedCheck_352_; 
v_lakeEnv_335_ = lean_ctor_get(v_self_332_, 0);
v_lakeConfig_336_ = lean_ctor_get(v_self_332_, 1);
v_lakeCache_337_ = lean_ctor_get(v_self_332_, 2);
v_lakeArgs_x3f_338_ = lean_ctor_get(v_self_332_, 3);
v_packages_339_ = lean_ctor_get(v_self_332_, 4);
v_packageMap_340_ = lean_ctor_get(v_self_332_, 5);
v_facetConfigs_341_ = lean_ctor_get(v_self_332_, 6);
v_isSharedCheck_352_ = !lean_is_exclusive(v_self_332_);
if (v_isSharedCheck_352_ == 0)
{
v___x_343_ = v_self_332_;
v_isShared_344_ = v_isSharedCheck_352_;
goto v_resetjp_342_;
}
else
{
lean_inc(v_facetConfigs_341_);
lean_inc(v_packageMap_340_);
lean_inc(v_packages_339_);
lean_inc(v_lakeArgs_x3f_338_);
lean_inc(v_lakeCache_337_);
lean_inc(v_lakeConfig_336_);
lean_inc(v_lakeEnv_335_);
lean_dec(v_self_332_);
v___x_343_ = lean_box(0);
v_isShared_344_ = v_isSharedCheck_352_;
goto v_resetjp_342_;
}
v_resetjp_342_:
{
lean_object* v_keyName_345_; lean_object* v___x_346_; lean_object* v___x_347_; lean_object* v___x_348_; lean_object* v___x_350_; 
v_keyName_345_ = lean_ctor_get(v_pkg_331_, 2);
lean_inc(v_keyName_345_);
lean_inc_ref(v_pkg_331_);
v___x_346_ = lean_array_push(v_packages_339_, v_pkg_331_);
v___x_347_ = ((lean_object*)(l_Lake_Workspace_addPackage_x27___redArg___closed__0));
v___x_348_ = l_Std_DTreeMap_Internal_Impl_insert___redArg(v___x_347_, v_keyName_345_, v_pkg_331_, v_packageMap_340_);
if (v_isShared_344_ == 0)
{
lean_ctor_set(v___x_343_, 5, v___x_348_);
lean_ctor_set(v___x_343_, 4, v___x_346_);
v___x_350_ = v___x_343_;
goto v_reusejp_349_;
}
else
{
lean_object* v_reuseFailAlloc_351_; 
v_reuseFailAlloc_351_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v_reuseFailAlloc_351_, 0, v_lakeEnv_335_);
lean_ctor_set(v_reuseFailAlloc_351_, 1, v_lakeConfig_336_);
lean_ctor_set(v_reuseFailAlloc_351_, 2, v_lakeCache_337_);
lean_ctor_set(v_reuseFailAlloc_351_, 3, v_lakeArgs_x3f_338_);
lean_ctor_set(v_reuseFailAlloc_351_, 4, v___x_346_);
lean_ctor_set(v_reuseFailAlloc_351_, 5, v___x_348_);
lean_ctor_set(v_reuseFailAlloc_351_, 6, v_facetConfigs_341_);
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
LEAN_EXPORT lean_object* l_Lake_Workspace_addPackage(lean_object* v_pkg_355_, lean_object* v_self_356_){
_start:
{
lean_object* v_lakeEnv_357_; lean_object* v_lakeConfig_358_; lean_object* v_lakeCache_359_; lean_object* v_lakeArgs_x3f_360_; lean_object* v_packages_361_; lean_object* v_packageMap_362_; lean_object* v_facetConfigs_363_; lean_object* v___x_365_; uint8_t v_isShared_366_; uint8_t v_isSharedCheck_406_; 
v_lakeEnv_357_ = lean_ctor_get(v_self_356_, 0);
v_lakeConfig_358_ = lean_ctor_get(v_self_356_, 1);
v_lakeCache_359_ = lean_ctor_get(v_self_356_, 2);
v_lakeArgs_x3f_360_ = lean_ctor_get(v_self_356_, 3);
v_packages_361_ = lean_ctor_get(v_self_356_, 4);
v_packageMap_362_ = lean_ctor_get(v_self_356_, 5);
v_facetConfigs_363_ = lean_ctor_get(v_self_356_, 6);
v_isSharedCheck_406_ = !lean_is_exclusive(v_self_356_);
if (v_isSharedCheck_406_ == 0)
{
v___x_365_ = v_self_356_;
v_isShared_366_ = v_isSharedCheck_406_;
goto v_resetjp_364_;
}
else
{
lean_inc(v_facetConfigs_363_);
lean_inc(v_packageMap_362_);
lean_inc(v_packages_361_);
lean_inc(v_lakeArgs_x3f_360_);
lean_inc(v_lakeCache_359_);
lean_inc(v_lakeConfig_358_);
lean_inc(v_lakeEnv_357_);
lean_dec(v_self_356_);
v___x_365_ = lean_box(0);
v_isShared_366_ = v_isSharedCheck_406_;
goto v_resetjp_364_;
}
v_resetjp_364_:
{
lean_object* v_baseName_367_; lean_object* v_keyName_368_; lean_object* v_origName_369_; lean_object* v_dir_370_; lean_object* v_relDir_371_; lean_object* v_config_372_; lean_object* v_configFile_373_; lean_object* v_relConfigFile_374_; lean_object* v_relManifestFile_375_; lean_object* v_scope_376_; lean_object* v_remoteUrl_377_; lean_object* v_depConfigs_378_; lean_object* v_depPkgs_379_; lean_object* v_targetDecls_380_; lean_object* v_targetDeclMap_381_; lean_object* v_defaultTargets_382_; lean_object* v_scripts_383_; lean_object* v_defaultScripts_384_; lean_object* v_postUpdateHooks_385_; lean_object* v_buildArchive_386_; lean_object* v_testDriver_387_; lean_object* v_lintDriver_388_; lean_object* v___x_390_; uint8_t v_isShared_391_; uint8_t v_isSharedCheck_403_; 
v_baseName_367_ = lean_ctor_get(v_pkg_355_, 1);
v_keyName_368_ = lean_ctor_get(v_pkg_355_, 2);
v_origName_369_ = lean_ctor_get(v_pkg_355_, 3);
v_dir_370_ = lean_ctor_get(v_pkg_355_, 4);
v_relDir_371_ = lean_ctor_get(v_pkg_355_, 5);
v_config_372_ = lean_ctor_get(v_pkg_355_, 6);
v_configFile_373_ = lean_ctor_get(v_pkg_355_, 7);
v_relConfigFile_374_ = lean_ctor_get(v_pkg_355_, 8);
v_relManifestFile_375_ = lean_ctor_get(v_pkg_355_, 9);
v_scope_376_ = lean_ctor_get(v_pkg_355_, 10);
v_remoteUrl_377_ = lean_ctor_get(v_pkg_355_, 11);
v_depConfigs_378_ = lean_ctor_get(v_pkg_355_, 12);
v_depPkgs_379_ = lean_ctor_get(v_pkg_355_, 14);
v_targetDecls_380_ = lean_ctor_get(v_pkg_355_, 15);
v_targetDeclMap_381_ = lean_ctor_get(v_pkg_355_, 16);
v_defaultTargets_382_ = lean_ctor_get(v_pkg_355_, 17);
v_scripts_383_ = lean_ctor_get(v_pkg_355_, 18);
v_defaultScripts_384_ = lean_ctor_get(v_pkg_355_, 19);
v_postUpdateHooks_385_ = lean_ctor_get(v_pkg_355_, 20);
v_buildArchive_386_ = lean_ctor_get(v_pkg_355_, 21);
v_testDriver_387_ = lean_ctor_get(v_pkg_355_, 22);
v_lintDriver_388_ = lean_ctor_get(v_pkg_355_, 23);
v_isSharedCheck_403_ = !lean_is_exclusive(v_pkg_355_);
if (v_isSharedCheck_403_ == 0)
{
lean_object* v_unused_404_; lean_object* v_unused_405_; 
v_unused_404_ = lean_ctor_get(v_pkg_355_, 13);
lean_dec(v_unused_404_);
v_unused_405_ = lean_ctor_get(v_pkg_355_, 0);
lean_dec(v_unused_405_);
v___x_390_ = v_pkg_355_;
v_isShared_391_ = v_isSharedCheck_403_;
goto v_resetjp_389_;
}
else
{
lean_inc(v_lintDriver_388_);
lean_inc(v_testDriver_387_);
lean_inc(v_buildArchive_386_);
lean_inc(v_postUpdateHooks_385_);
lean_inc(v_defaultScripts_384_);
lean_inc(v_scripts_383_);
lean_inc(v_defaultTargets_382_);
lean_inc(v_targetDeclMap_381_);
lean_inc(v_targetDecls_380_);
lean_inc(v_depPkgs_379_);
lean_inc(v_depConfigs_378_);
lean_inc(v_remoteUrl_377_);
lean_inc(v_scope_376_);
lean_inc(v_relManifestFile_375_);
lean_inc(v_relConfigFile_374_);
lean_inc(v_configFile_373_);
lean_inc(v_config_372_);
lean_inc(v_relDir_371_);
lean_inc(v_dir_370_);
lean_inc(v_origName_369_);
lean_inc(v_keyName_368_);
lean_inc(v_baseName_367_);
lean_dec(v_pkg_355_);
v___x_390_ = lean_box(0);
v_isShared_391_ = v_isSharedCheck_403_;
goto v_resetjp_389_;
}
v_resetjp_389_:
{
lean_object* v___x_392_; lean_object* v___x_393_; lean_object* v___x_395_; 
v___x_392_ = lean_array_get_size(v_packages_361_);
v___x_393_ = ((lean_object*)(l_Lake_Workspace_addPackage___closed__0));
lean_inc(v_keyName_368_);
if (v_isShared_391_ == 0)
{
lean_ctor_set(v___x_390_, 13, v___x_393_);
lean_ctor_set(v___x_390_, 0, v___x_392_);
v___x_395_ = v___x_390_;
goto v_reusejp_394_;
}
else
{
lean_object* v_reuseFailAlloc_402_; 
v_reuseFailAlloc_402_ = lean_alloc_ctor(0, 24, 0);
lean_ctor_set(v_reuseFailAlloc_402_, 0, v___x_392_);
lean_ctor_set(v_reuseFailAlloc_402_, 1, v_baseName_367_);
lean_ctor_set(v_reuseFailAlloc_402_, 2, v_keyName_368_);
lean_ctor_set(v_reuseFailAlloc_402_, 3, v_origName_369_);
lean_ctor_set(v_reuseFailAlloc_402_, 4, v_dir_370_);
lean_ctor_set(v_reuseFailAlloc_402_, 5, v_relDir_371_);
lean_ctor_set(v_reuseFailAlloc_402_, 6, v_config_372_);
lean_ctor_set(v_reuseFailAlloc_402_, 7, v_configFile_373_);
lean_ctor_set(v_reuseFailAlloc_402_, 8, v_relConfigFile_374_);
lean_ctor_set(v_reuseFailAlloc_402_, 9, v_relManifestFile_375_);
lean_ctor_set(v_reuseFailAlloc_402_, 10, v_scope_376_);
lean_ctor_set(v_reuseFailAlloc_402_, 11, v_remoteUrl_377_);
lean_ctor_set(v_reuseFailAlloc_402_, 12, v_depConfigs_378_);
lean_ctor_set(v_reuseFailAlloc_402_, 13, v___x_393_);
lean_ctor_set(v_reuseFailAlloc_402_, 14, v_depPkgs_379_);
lean_ctor_set(v_reuseFailAlloc_402_, 15, v_targetDecls_380_);
lean_ctor_set(v_reuseFailAlloc_402_, 16, v_targetDeclMap_381_);
lean_ctor_set(v_reuseFailAlloc_402_, 17, v_defaultTargets_382_);
lean_ctor_set(v_reuseFailAlloc_402_, 18, v_scripts_383_);
lean_ctor_set(v_reuseFailAlloc_402_, 19, v_defaultScripts_384_);
lean_ctor_set(v_reuseFailAlloc_402_, 20, v_postUpdateHooks_385_);
lean_ctor_set(v_reuseFailAlloc_402_, 21, v_buildArchive_386_);
lean_ctor_set(v_reuseFailAlloc_402_, 22, v_testDriver_387_);
lean_ctor_set(v_reuseFailAlloc_402_, 23, v_lintDriver_388_);
v___x_395_ = v_reuseFailAlloc_402_;
goto v_reusejp_394_;
}
v_reusejp_394_:
{
lean_object* v___x_396_; lean_object* v___x_397_; lean_object* v___x_398_; lean_object* v___x_400_; 
lean_inc_ref(v___x_395_);
v___x_396_ = lean_array_push(v_packages_361_, v___x_395_);
v___x_397_ = ((lean_object*)(l_Lake_Workspace_addPackage_x27___redArg___closed__0));
v___x_398_ = l_Std_DTreeMap_Internal_Impl_insert___redArg(v___x_397_, v_keyName_368_, v___x_395_, v_packageMap_362_);
if (v_isShared_366_ == 0)
{
lean_ctor_set(v___x_365_, 5, v___x_398_);
lean_ctor_set(v___x_365_, 4, v___x_396_);
v___x_400_ = v___x_365_;
goto v_reusejp_399_;
}
else
{
lean_object* v_reuseFailAlloc_401_; 
v_reuseFailAlloc_401_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v_reuseFailAlloc_401_, 0, v_lakeEnv_357_);
lean_ctor_set(v_reuseFailAlloc_401_, 1, v_lakeConfig_358_);
lean_ctor_set(v_reuseFailAlloc_401_, 2, v_lakeCache_359_);
lean_ctor_set(v_reuseFailAlloc_401_, 3, v_lakeArgs_x3f_360_);
lean_ctor_set(v_reuseFailAlloc_401_, 4, v___x_396_);
lean_ctor_set(v_reuseFailAlloc_401_, 5, v___x_398_);
lean_ctor_set(v_reuseFailAlloc_401_, 6, v_facetConfigs_363_);
v___x_400_ = v_reuseFailAlloc_401_;
goto v_reusejp_399_;
}
v_reusejp_399_:
{
return v___x_400_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Workspace_findPackageByKey_x3f(lean_object* v_keyName_407_, lean_object* v_self_408_){
_start:
{
lean_object* v_packageMap_409_; lean_object* v___x_410_; lean_object* v___x_411_; 
v_packageMap_409_ = lean_ctor_get(v_self_408_, 5);
lean_inc(v_packageMap_409_);
lean_dec_ref(v_self_408_);
v___x_410_ = ((lean_object*)(l_Lake_Workspace_addPackage_x27___redArg___closed__0));
v___x_411_ = l_Std_DTreeMap_Internal_Impl_get_x3f___redArg(v___x_410_, v_packageMap_409_, v_keyName_407_);
return v___x_411_;
}
}
LEAN_EXPORT lean_object* l_Lake_Workspace_findPackageByName_x3f___lam__0(lean_object* v_name_412_, lean_object* v___x_413_, lean_object* v___x_414_, lean_object* v_a_415_, lean_object* v_x_416_, lean_object* v___y_417_){
_start:
{
lean_object* v_baseName_418_; uint8_t v___x_419_; 
v_baseName_418_ = lean_ctor_get(v_a_415_, 1);
v___x_419_ = lean_name_eq(v_baseName_418_, v_name_412_);
if (v___x_419_ == 0)
{
lean_object* v___x_420_; 
lean_dec_ref(v_a_415_);
v___x_420_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_420_, 0, v___x_413_);
return v___x_420_;
}
else
{
lean_object* v___x_421_; lean_object* v___x_422_; lean_object* v___x_423_; lean_object* v___x_424_; 
lean_dec_ref(v___x_413_);
v___x_421_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_421_, 0, v_a_415_);
v___x_422_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_422_, 0, v___x_421_);
v___x_423_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_423_, 0, v___x_422_);
lean_ctor_set(v___x_423_, 1, v___x_414_);
v___x_424_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_424_, 0, v___x_423_);
return v___x_424_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_Workspace_findPackageByName_x3f___lam__0___boxed(lean_object* v_name_425_, lean_object* v___x_426_, lean_object* v___x_427_, lean_object* v_a_428_, lean_object* v_x_429_, lean_object* v___y_430_){
_start:
{
lean_object* v_res_431_; 
v_res_431_ = l_Lake_Workspace_findPackageByName_x3f___lam__0(v_name_425_, v___x_426_, v___x_427_, v_a_428_, v_x_429_, v___y_430_);
lean_dec_ref(v___y_430_);
lean_dec(v_name_425_);
return v_res_431_;
}
}
LEAN_EXPORT lean_object* l_Lake_Workspace_findPackageByName_x3f(lean_object* v_name_454_, lean_object* v_self_455_){
_start:
{
lean_object* v_packages_456_; lean_object* v___x_457_; lean_object* v___x_458_; lean_object* v___x_459_; lean_object* v___x_460_; lean_object* v___f_461_; size_t v_sz_462_; size_t v___x_463_; lean_object* v___x_464_; lean_object* v_fst_465_; 
v_packages_456_ = lean_ctor_get(v_self_455_, 4);
lean_inc_ref(v_packages_456_);
lean_dec_ref(v_self_455_);
v___x_457_ = ((lean_object*)(l_Lake_Workspace_findPackageByName_x3f___closed__9));
v___x_458_ = lean_box(0);
v___x_459_ = lean_box(0);
v___x_460_ = ((lean_object*)(l_Lake_Workspace_findPackageByName_x3f___closed__10));
v___f_461_ = lean_alloc_closure((void*)(l_Lake_Workspace_findPackageByName_x3f___lam__0___boxed), 6, 3);
lean_closure_set(v___f_461_, 0, v_name_454_);
lean_closure_set(v___f_461_, 1, v___x_460_);
lean_closure_set(v___f_461_, 2, v___x_459_);
v_sz_462_ = lean_array_size(v_packages_456_);
v___x_463_ = ((size_t)0ULL);
v___x_464_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_box(0), lean_box(0), lean_box(0), v___x_457_, v_packages_456_, v___f_461_, v_sz_462_, v___x_463_, v___x_460_);
v_fst_465_ = lean_ctor_get(v___x_464_, 0);
lean_inc(v_fst_465_);
lean_dec(v___x_464_);
if (lean_obj_tag(v_fst_465_) == 0)
{
return v___x_458_;
}
else
{
lean_object* v_val_466_; 
v_val_466_ = lean_ctor_get(v_fst_465_, 0);
lean_inc(v_val_466_);
lean_dec_ref_known(v_fst_465_, 1);
return v_val_466_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_Workspace_findPackage_x3f(lean_object* v_name_467_, lean_object* v_self_468_){
_start:
{
lean_object* v_packageMap_469_; lean_object* v___x_470_; lean_object* v___x_471_; 
v_packageMap_469_ = lean_ctor_get(v_self_468_, 5);
lean_inc(v_packageMap_469_);
lean_dec_ref(v_self_468_);
v___x_470_ = ((lean_object*)(l_Lake_Workspace_addPackage_x27___redArg___closed__0));
v___x_471_ = l_Std_DTreeMap_Internal_Impl_get_x3f___redArg(v___x_470_, v_packageMap_469_, v_name_467_);
return v___x_471_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Workspace_findScript_x3f_spec__0(lean_object* v_script_475_, lean_object* v_as_476_, size_t v_sz_477_, size_t v_i_478_, lean_object* v_b_479_){
_start:
{
uint8_t v___x_480_; 
v___x_480_ = lean_usize_dec_lt(v_i_478_, v_sz_477_);
if (v___x_480_ == 0)
{
lean_inc_ref(v_b_479_);
return v_b_479_;
}
else
{
lean_object* v_a_481_; lean_object* v_scripts_482_; lean_object* v___x_483_; lean_object* v___x_484_; 
v_a_481_ = lean_array_uget_borrowed(v_as_476_, v_i_478_);
v_scripts_482_ = lean_ctor_get(v_a_481_, 18);
v___x_483_ = lean_box(0);
v___x_484_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_scripts_482_, v_script_475_);
if (lean_obj_tag(v___x_484_) == 1)
{
lean_object* v___x_485_; lean_object* v___x_486_; 
v___x_485_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_485_, 0, v___x_484_);
v___x_486_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_486_, 0, v___x_485_);
lean_ctor_set(v___x_486_, 1, v___x_483_);
return v___x_486_;
}
else
{
lean_object* v___x_487_; size_t v___x_488_; size_t v___x_489_; 
lean_dec(v___x_484_);
v___x_487_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Workspace_findScript_x3f_spec__0___closed__0));
v___x_488_ = ((size_t)1ULL);
v___x_489_ = lean_usize_add(v_i_478_, v___x_488_);
v_i_478_ = v___x_489_;
v_b_479_ = v___x_487_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Workspace_findScript_x3f_spec__0___boxed(lean_object* v_script_491_, lean_object* v_as_492_, lean_object* v_sz_493_, lean_object* v_i_494_, lean_object* v_b_495_){
_start:
{
size_t v_sz_boxed_496_; size_t v_i_boxed_497_; lean_object* v_res_498_; 
v_sz_boxed_496_ = lean_unbox_usize(v_sz_493_);
lean_dec(v_sz_493_);
v_i_boxed_497_ = lean_unbox_usize(v_i_494_);
lean_dec(v_i_494_);
v_res_498_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Workspace_findScript_x3f_spec__0(v_script_491_, v_as_492_, v_sz_boxed_496_, v_i_boxed_497_, v_b_495_);
lean_dec_ref(v_b_495_);
lean_dec_ref(v_as_492_);
lean_dec(v_script_491_);
return v_res_498_;
}
}
LEAN_EXPORT lean_object* l_Lake_Workspace_findScript_x3f(lean_object* v_script_499_, lean_object* v_self_500_){
_start:
{
lean_object* v_packages_501_; lean_object* v___x_502_; lean_object* v___x_503_; size_t v_sz_504_; size_t v___x_505_; lean_object* v___x_506_; lean_object* v_fst_507_; 
v_packages_501_ = lean_ctor_get(v_self_500_, 4);
v___x_502_ = lean_box(0);
v___x_503_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Workspace_findScript_x3f_spec__0___closed__0));
v_sz_504_ = lean_array_size(v_packages_501_);
v___x_505_ = ((size_t)0ULL);
v___x_506_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Workspace_findScript_x3f_spec__0(v_script_499_, v_packages_501_, v_sz_504_, v___x_505_, v___x_503_);
v_fst_507_ = lean_ctor_get(v___x_506_, 0);
lean_inc(v_fst_507_);
lean_dec_ref(v___x_506_);
if (lean_obj_tag(v_fst_507_) == 0)
{
return v___x_502_;
}
else
{
lean_object* v_val_508_; 
v_val_508_ = lean_ctor_get(v_fst_507_, 0);
lean_inc(v_val_508_);
lean_dec_ref_known(v_fst_507_, 1);
return v_val_508_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_Workspace_findScript_x3f___boxed(lean_object* v_script_509_, lean_object* v_self_510_){
_start:
{
lean_object* v_res_511_; 
v_res_511_ = l_Lake_Workspace_findScript_x3f(v_script_509_, v_self_510_);
lean_dec_ref(v_self_510_);
lean_dec(v_script_509_);
return v_res_511_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lake_Workspace_isLocalModule_spec__0(lean_object* v_mod_512_, lean_object* v_as_513_, size_t v_i_514_, size_t v_stop_515_){
_start:
{
uint8_t v___x_516_; 
v___x_516_ = lean_usize_dec_eq(v_i_514_, v_stop_515_);
if (v___x_516_ == 0)
{
lean_object* v___x_517_; uint8_t v___x_518_; 
v___x_517_ = lean_array_uget_borrowed(v_as_513_, v_i_514_);
v___x_518_ = l_Lake_Package_isLocalModule(v_mod_512_, v___x_517_);
if (v___x_518_ == 0)
{
size_t v___x_519_; size_t v___x_520_; 
v___x_519_ = ((size_t)1ULL);
v___x_520_ = lean_usize_add(v_i_514_, v___x_519_);
v_i_514_ = v___x_520_;
goto _start;
}
else
{
return v___x_518_;
}
}
else
{
uint8_t v___x_522_; 
v___x_522_ = 0;
return v___x_522_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lake_Workspace_isLocalModule_spec__0___boxed(lean_object* v_mod_523_, lean_object* v_as_524_, lean_object* v_i_525_, lean_object* v_stop_526_){
_start:
{
size_t v_i_boxed_527_; size_t v_stop_boxed_528_; uint8_t v_res_529_; lean_object* v_r_530_; 
v_i_boxed_527_ = lean_unbox_usize(v_i_525_);
lean_dec(v_i_525_);
v_stop_boxed_528_ = lean_unbox_usize(v_stop_526_);
lean_dec(v_stop_526_);
v_res_529_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lake_Workspace_isLocalModule_spec__0(v_mod_523_, v_as_524_, v_i_boxed_527_, v_stop_boxed_528_);
lean_dec_ref(v_as_524_);
lean_dec(v_mod_523_);
v_r_530_ = lean_box(v_res_529_);
return v_r_530_;
}
}
LEAN_EXPORT uint8_t l_Lake_Workspace_isLocalModule(lean_object* v_mod_531_, lean_object* v_self_532_){
_start:
{
lean_object* v_packages_533_; lean_object* v___x_534_; lean_object* v___x_535_; uint8_t v___x_536_; 
v_packages_533_ = lean_ctor_get(v_self_532_, 4);
v___x_534_ = lean_unsigned_to_nat(0u);
v___x_535_ = lean_array_get_size(v_packages_533_);
v___x_536_ = lean_nat_dec_lt(v___x_534_, v___x_535_);
if (v___x_536_ == 0)
{
return v___x_536_;
}
else
{
if (v___x_536_ == 0)
{
return v___x_536_;
}
else
{
size_t v___x_537_; size_t v___x_538_; uint8_t v___x_539_; 
v___x_537_ = ((size_t)0ULL);
v___x_538_ = lean_usize_of_nat(v___x_535_);
v___x_539_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lake_Workspace_isLocalModule_spec__0(v_mod_531_, v_packages_533_, v___x_537_, v___x_538_);
return v___x_539_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Workspace_isLocalModule___boxed(lean_object* v_mod_540_, lean_object* v_self_541_){
_start:
{
uint8_t v_res_542_; lean_object* v_r_543_; 
v_res_542_ = l_Lake_Workspace_isLocalModule(v_mod_540_, v_self_541_);
lean_dec_ref(v_self_541_);
lean_dec(v_mod_540_);
v_r_543_ = lean_box(v_res_542_);
return v_r_543_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lake_Workspace_isBuildableModule_spec__0(lean_object* v_mod_544_, lean_object* v_as_545_, size_t v_i_546_, size_t v_stop_547_){
_start:
{
uint8_t v___x_548_; 
v___x_548_ = lean_usize_dec_eq(v_i_546_, v_stop_547_);
if (v___x_548_ == 0)
{
lean_object* v___x_549_; uint8_t v___x_550_; 
v___x_549_ = lean_array_uget_borrowed(v_as_545_, v_i_546_);
v___x_550_ = l_Lake_Package_isBuildableModule(v_mod_544_, v___x_549_);
if (v___x_550_ == 0)
{
size_t v___x_551_; size_t v___x_552_; 
v___x_551_ = ((size_t)1ULL);
v___x_552_ = lean_usize_add(v_i_546_, v___x_551_);
v_i_546_ = v___x_552_;
goto _start;
}
else
{
return v___x_550_;
}
}
else
{
uint8_t v___x_554_; 
v___x_554_ = 0;
return v___x_554_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lake_Workspace_isBuildableModule_spec__0___boxed(lean_object* v_mod_555_, lean_object* v_as_556_, lean_object* v_i_557_, lean_object* v_stop_558_){
_start:
{
size_t v_i_boxed_559_; size_t v_stop_boxed_560_; uint8_t v_res_561_; lean_object* v_r_562_; 
v_i_boxed_559_ = lean_unbox_usize(v_i_557_);
lean_dec(v_i_557_);
v_stop_boxed_560_ = lean_unbox_usize(v_stop_558_);
lean_dec(v_stop_558_);
v_res_561_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lake_Workspace_isBuildableModule_spec__0(v_mod_555_, v_as_556_, v_i_boxed_559_, v_stop_boxed_560_);
lean_dec_ref(v_as_556_);
lean_dec(v_mod_555_);
v_r_562_ = lean_box(v_res_561_);
return v_r_562_;
}
}
LEAN_EXPORT uint8_t l_Lake_Workspace_isBuildableModule(lean_object* v_mod_563_, lean_object* v_self_564_){
_start:
{
lean_object* v_packages_565_; lean_object* v___x_566_; lean_object* v___x_567_; uint8_t v___x_568_; 
v_packages_565_ = lean_ctor_get(v_self_564_, 4);
v___x_566_ = lean_unsigned_to_nat(0u);
v___x_567_ = lean_array_get_size(v_packages_565_);
v___x_568_ = lean_nat_dec_lt(v___x_566_, v___x_567_);
if (v___x_568_ == 0)
{
return v___x_568_;
}
else
{
if (v___x_568_ == 0)
{
return v___x_568_;
}
else
{
size_t v___x_569_; size_t v___x_570_; uint8_t v___x_571_; 
v___x_569_ = ((size_t)0ULL);
v___x_570_ = lean_usize_of_nat(v___x_567_);
v___x_571_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lake_Workspace_isBuildableModule_spec__0(v_mod_563_, v_packages_565_, v___x_569_, v___x_570_);
return v___x_571_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Workspace_isBuildableModule___boxed(lean_object* v_mod_572_, lean_object* v_self_573_){
_start:
{
uint8_t v_res_574_; lean_object* v_r_575_; 
v_res_574_ = l_Lake_Workspace_isBuildableModule(v_mod_572_, v_self_573_);
lean_dec_ref(v_self_573_);
lean_dec(v_mod_572_);
v_r_575_ = lean_box(v_res_574_);
return v_r_575_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Workspace_findModule_x3f_spec__0(lean_object* v_mod_579_, lean_object* v_as_580_, size_t v_sz_581_, size_t v_i_582_, lean_object* v_b_583_){
_start:
{
uint8_t v___x_584_; 
v___x_584_ = lean_usize_dec_lt(v_i_582_, v_sz_581_);
if (v___x_584_ == 0)
{
lean_dec(v_mod_579_);
lean_inc_ref(v_b_583_);
return v_b_583_;
}
else
{
lean_object* v___x_585_; lean_object* v_a_586_; lean_object* v___x_587_; 
v___x_585_ = lean_box(0);
v_a_586_ = lean_array_uget_borrowed(v_as_580_, v_i_582_);
lean_inc(v_a_586_);
lean_inc(v_mod_579_);
v___x_587_ = l_Lake_Package_findModule_x3f(v_mod_579_, v_a_586_);
if (lean_obj_tag(v___x_587_) == 1)
{
lean_object* v___x_588_; lean_object* v___x_589_; 
lean_dec(v_mod_579_);
v___x_588_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_588_, 0, v___x_587_);
v___x_589_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_589_, 0, v___x_588_);
lean_ctor_set(v___x_589_, 1, v___x_585_);
return v___x_589_;
}
else
{
lean_object* v___x_590_; size_t v___x_591_; size_t v___x_592_; 
lean_dec(v___x_587_);
v___x_590_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Workspace_findModule_x3f_spec__0___closed__0));
v___x_591_ = ((size_t)1ULL);
v___x_592_ = lean_usize_add(v_i_582_, v___x_591_);
v_i_582_ = v___x_592_;
v_b_583_ = v___x_590_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Workspace_findModule_x3f_spec__0___boxed(lean_object* v_mod_594_, lean_object* v_as_595_, lean_object* v_sz_596_, lean_object* v_i_597_, lean_object* v_b_598_){
_start:
{
size_t v_sz_boxed_599_; size_t v_i_boxed_600_; lean_object* v_res_601_; 
v_sz_boxed_599_ = lean_unbox_usize(v_sz_596_);
lean_dec(v_sz_596_);
v_i_boxed_600_ = lean_unbox_usize(v_i_597_);
lean_dec(v_i_597_);
v_res_601_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Workspace_findModule_x3f_spec__0(v_mod_594_, v_as_595_, v_sz_boxed_599_, v_i_boxed_600_, v_b_598_);
lean_dec_ref(v_b_598_);
lean_dec_ref(v_as_595_);
return v_res_601_;
}
}
LEAN_EXPORT lean_object* l_Lake_Workspace_findModule_x3f(lean_object* v_mod_602_, lean_object* v_self_603_){
_start:
{
lean_object* v_packages_604_; lean_object* v___x_605_; lean_object* v___x_606_; size_t v_sz_607_; size_t v___x_608_; lean_object* v___x_609_; lean_object* v_fst_610_; 
v_packages_604_ = lean_ctor_get(v_self_603_, 4);
v___x_605_ = lean_box(0);
v___x_606_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Workspace_findModule_x3f_spec__0___closed__0));
v_sz_607_ = lean_array_size(v_packages_604_);
v___x_608_ = ((size_t)0ULL);
v___x_609_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Workspace_findModule_x3f_spec__0(v_mod_602_, v_packages_604_, v_sz_607_, v___x_608_, v___x_606_);
v_fst_610_ = lean_ctor_get(v___x_609_, 0);
lean_inc(v_fst_610_);
lean_dec_ref(v___x_609_);
if (lean_obj_tag(v_fst_610_) == 0)
{
return v___x_605_;
}
else
{
lean_object* v_val_611_; 
v_val_611_ = lean_ctor_get(v_fst_610_, 0);
lean_inc(v_val_611_);
lean_dec_ref_known(v_fst_610_, 1);
return v_val_611_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_Workspace_findModule_x3f___boxed(lean_object* v_mod_612_, lean_object* v_self_613_){
_start:
{
lean_object* v_res_614_; 
v_res_614_ = l_Lake_Workspace_findModule_x3f(v_mod_612_, v_self_613_);
lean_dec_ref(v_self_613_);
return v_res_614_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lake_Workspace_findModules_spec__0_spec__0(lean_object* v_mod_615_, lean_object* v_as_616_, size_t v_i_617_, size_t v_stop_618_, lean_object* v_b_619_){
_start:
{
lean_object* v___y_621_; uint8_t v___x_625_; 
v___x_625_ = lean_usize_dec_eq(v_i_617_, v_stop_618_);
if (v___x_625_ == 0)
{
lean_object* v___x_626_; lean_object* v___x_627_; 
v___x_626_ = lean_array_uget_borrowed(v_as_616_, v_i_617_);
lean_inc(v___x_626_);
lean_inc(v_mod_615_);
v___x_627_ = l_Lake_Package_findModule_x3f(v_mod_615_, v___x_626_);
if (lean_obj_tag(v___x_627_) == 0)
{
v___y_621_ = v_b_619_;
goto v___jp_620_;
}
else
{
lean_object* v_val_628_; lean_object* v___x_629_; 
v_val_628_ = lean_ctor_get(v___x_627_, 0);
lean_inc(v_val_628_);
lean_dec_ref_known(v___x_627_, 1);
v___x_629_ = lean_array_push(v_b_619_, v_val_628_);
v___y_621_ = v___x_629_;
goto v___jp_620_;
}
}
else
{
lean_dec(v_mod_615_);
return v_b_619_;
}
v___jp_620_:
{
size_t v___x_622_; size_t v___x_623_; 
v___x_622_ = ((size_t)1ULL);
v___x_623_ = lean_usize_add(v_i_617_, v___x_622_);
v_i_617_ = v___x_623_;
v_b_619_ = v___y_621_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lake_Workspace_findModules_spec__0_spec__0___boxed(lean_object* v_mod_630_, lean_object* v_as_631_, lean_object* v_i_632_, lean_object* v_stop_633_, lean_object* v_b_634_){
_start:
{
size_t v_i_boxed_635_; size_t v_stop_boxed_636_; lean_object* v_res_637_; 
v_i_boxed_635_ = lean_unbox_usize(v_i_632_);
lean_dec(v_i_632_);
v_stop_boxed_636_ = lean_unbox_usize(v_stop_633_);
lean_dec(v_stop_633_);
v_res_637_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lake_Workspace_findModules_spec__0_spec__0(v_mod_630_, v_as_631_, v_i_boxed_635_, v_stop_boxed_636_, v_b_634_);
lean_dec_ref(v_as_631_);
return v_res_637_;
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Lake_Workspace_findModules_spec__0(lean_object* v_mod_640_, lean_object* v_as_641_, lean_object* v_start_642_, lean_object* v_stop_643_){
_start:
{
lean_object* v___x_644_; uint8_t v___x_645_; 
v___x_644_ = ((lean_object*)(l_Array_filterMapM___at___00Lake_Workspace_findModules_spec__0___closed__0));
v___x_645_ = lean_nat_dec_lt(v_start_642_, v_stop_643_);
if (v___x_645_ == 0)
{
lean_dec(v_mod_640_);
return v___x_644_;
}
else
{
lean_object* v___x_646_; uint8_t v___x_647_; 
v___x_646_ = lean_array_get_size(v_as_641_);
v___x_647_ = lean_nat_dec_le(v_stop_643_, v___x_646_);
if (v___x_647_ == 0)
{
uint8_t v___x_648_; 
v___x_648_ = lean_nat_dec_lt(v_start_642_, v___x_646_);
if (v___x_648_ == 0)
{
lean_dec(v_mod_640_);
return v___x_644_;
}
else
{
size_t v___x_649_; size_t v___x_650_; lean_object* v___x_651_; 
v___x_649_ = lean_usize_of_nat(v_start_642_);
v___x_650_ = lean_usize_of_nat(v___x_646_);
v___x_651_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lake_Workspace_findModules_spec__0_spec__0(v_mod_640_, v_as_641_, v___x_649_, v___x_650_, v___x_644_);
return v___x_651_;
}
}
else
{
size_t v___x_652_; size_t v___x_653_; lean_object* v___x_654_; 
v___x_652_ = lean_usize_of_nat(v_start_642_);
v___x_653_ = lean_usize_of_nat(v_stop_643_);
v___x_654_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lake_Workspace_findModules_spec__0_spec__0(v_mod_640_, v_as_641_, v___x_652_, v___x_653_, v___x_644_);
return v___x_654_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Lake_Workspace_findModules_spec__0___boxed(lean_object* v_mod_655_, lean_object* v_as_656_, lean_object* v_start_657_, lean_object* v_stop_658_){
_start:
{
lean_object* v_res_659_; 
v_res_659_ = l_Array_filterMapM___at___00Lake_Workspace_findModules_spec__0(v_mod_655_, v_as_656_, v_start_657_, v_stop_658_);
lean_dec(v_stop_658_);
lean_dec(v_start_657_);
lean_dec_ref(v_as_656_);
return v_res_659_;
}
}
LEAN_EXPORT lean_object* l_Lake_Workspace_findModules(lean_object* v_mod_660_, lean_object* v_self_661_){
_start:
{
lean_object* v_packages_662_; lean_object* v___x_663_; lean_object* v___x_664_; lean_object* v___x_665_; 
v_packages_662_ = lean_ctor_get(v_self_661_, 4);
v___x_663_ = lean_unsigned_to_nat(0u);
v___x_664_ = lean_array_get_size(v_packages_662_);
v___x_665_ = l_Array_filterMapM___at___00Lake_Workspace_findModules_spec__0(v_mod_660_, v_packages_662_, v___x_663_, v___x_664_);
return v___x_665_;
}
}
LEAN_EXPORT lean_object* l_Lake_Workspace_findModules___boxed(lean_object* v_mod_666_, lean_object* v_self_667_){
_start:
{
lean_object* v_res_668_; 
v_res_668_ = l_Lake_Workspace_findModules(v_mod_666_, v_self_667_);
lean_dec_ref(v_self_667_);
return v_res_668_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Workspace_findTargetModule_x3f_spec__0(lean_object* v_mod_669_, lean_object* v_as_670_, size_t v_sz_671_, size_t v_i_672_, lean_object* v_b_673_){
_start:
{
uint8_t v___x_674_; 
v___x_674_ = lean_usize_dec_lt(v_i_672_, v_sz_671_);
if (v___x_674_ == 0)
{
lean_dec(v_mod_669_);
lean_inc_ref(v_b_673_);
return v_b_673_;
}
else
{
lean_object* v___x_675_; lean_object* v_a_676_; lean_object* v___x_677_; 
v___x_675_ = lean_box(0);
v_a_676_ = lean_array_uget_borrowed(v_as_670_, v_i_672_);
lean_inc(v_a_676_);
lean_inc(v_mod_669_);
v___x_677_ = l_Lake_Package_findTargetModule_x3f(v_mod_669_, v_a_676_);
if (lean_obj_tag(v___x_677_) == 1)
{
lean_object* v___x_678_; lean_object* v___x_679_; 
lean_dec(v_mod_669_);
v___x_678_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_678_, 0, v___x_677_);
v___x_679_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_679_, 0, v___x_678_);
lean_ctor_set(v___x_679_, 1, v___x_675_);
return v___x_679_;
}
else
{
lean_object* v___x_680_; size_t v___x_681_; size_t v___x_682_; 
lean_dec(v___x_677_);
v___x_680_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Workspace_findModule_x3f_spec__0___closed__0));
v___x_681_ = ((size_t)1ULL);
v___x_682_ = lean_usize_add(v_i_672_, v___x_681_);
v_i_672_ = v___x_682_;
v_b_673_ = v___x_680_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Workspace_findTargetModule_x3f_spec__0___boxed(lean_object* v_mod_684_, lean_object* v_as_685_, lean_object* v_sz_686_, lean_object* v_i_687_, lean_object* v_b_688_){
_start:
{
size_t v_sz_boxed_689_; size_t v_i_boxed_690_; lean_object* v_res_691_; 
v_sz_boxed_689_ = lean_unbox_usize(v_sz_686_);
lean_dec(v_sz_686_);
v_i_boxed_690_ = lean_unbox_usize(v_i_687_);
lean_dec(v_i_687_);
v_res_691_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Workspace_findTargetModule_x3f_spec__0(v_mod_684_, v_as_685_, v_sz_boxed_689_, v_i_boxed_690_, v_b_688_);
lean_dec_ref(v_b_688_);
lean_dec_ref(v_as_685_);
return v_res_691_;
}
}
LEAN_EXPORT lean_object* l_Lake_Workspace_findTargetModule_x3f(lean_object* v_mod_692_, lean_object* v_self_693_){
_start:
{
lean_object* v_packages_694_; lean_object* v___x_695_; lean_object* v___x_696_; size_t v_sz_697_; size_t v___x_698_; lean_object* v___x_699_; lean_object* v_fst_700_; 
v_packages_694_ = lean_ctor_get(v_self_693_, 4);
v___x_695_ = lean_box(0);
v___x_696_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Workspace_findModule_x3f_spec__0___closed__0));
v_sz_697_ = lean_array_size(v_packages_694_);
v___x_698_ = ((size_t)0ULL);
v___x_699_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Workspace_findTargetModule_x3f_spec__0(v_mod_692_, v_packages_694_, v_sz_697_, v___x_698_, v___x_696_);
v_fst_700_ = lean_ctor_get(v___x_699_, 0);
lean_inc(v_fst_700_);
lean_dec_ref(v___x_699_);
if (lean_obj_tag(v_fst_700_) == 0)
{
return v___x_695_;
}
else
{
lean_object* v_val_701_; 
v_val_701_ = lean_ctor_get(v_fst_700_, 0);
lean_inc(v_val_701_);
lean_dec_ref_known(v_fst_700_, 1);
return v_val_701_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_Workspace_findTargetModule_x3f___boxed(lean_object* v_mod_702_, lean_object* v_self_703_){
_start:
{
lean_object* v_res_704_; 
v_res_704_ = l_Lake_Workspace_findTargetModule_x3f(v_mod_702_, v_self_703_);
lean_dec_ref(v_self_703_);
return v_res_704_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Workspace_findModuleBySrc_x3f_spec__0(lean_object* v_path_705_, lean_object* v_as_706_, size_t v_sz_707_, size_t v_i_708_, lean_object* v_b_709_){
_start:
{
uint8_t v___x_710_; 
v___x_710_ = lean_usize_dec_lt(v_i_708_, v_sz_707_);
if (v___x_710_ == 0)
{
lean_dec_ref(v_path_705_);
lean_inc_ref(v_b_709_);
return v_b_709_;
}
else
{
lean_object* v___x_711_; lean_object* v_a_712_; lean_object* v___x_713_; 
v___x_711_ = lean_box(0);
v_a_712_ = lean_array_uget_borrowed(v_as_706_, v_i_708_);
lean_inc(v_a_712_);
lean_inc_ref(v_path_705_);
v___x_713_ = l_Lake_Package_findModuleBySrc_x3f(v_path_705_, v_a_712_);
if (lean_obj_tag(v___x_713_) == 1)
{
lean_object* v___x_714_; lean_object* v___x_715_; 
lean_dec_ref(v_path_705_);
v___x_714_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_714_, 0, v___x_713_);
v___x_715_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_715_, 0, v___x_714_);
lean_ctor_set(v___x_715_, 1, v___x_711_);
return v___x_715_;
}
else
{
lean_object* v___x_716_; size_t v___x_717_; size_t v___x_718_; 
lean_dec(v___x_713_);
v___x_716_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Workspace_findModule_x3f_spec__0___closed__0));
v___x_717_ = ((size_t)1ULL);
v___x_718_ = lean_usize_add(v_i_708_, v___x_717_);
v_i_708_ = v___x_718_;
v_b_709_ = v___x_716_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Workspace_findModuleBySrc_x3f_spec__0___boxed(lean_object* v_path_720_, lean_object* v_as_721_, lean_object* v_sz_722_, lean_object* v_i_723_, lean_object* v_b_724_){
_start:
{
size_t v_sz_boxed_725_; size_t v_i_boxed_726_; lean_object* v_res_727_; 
v_sz_boxed_725_ = lean_unbox_usize(v_sz_722_);
lean_dec(v_sz_722_);
v_i_boxed_726_ = lean_unbox_usize(v_i_723_);
lean_dec(v_i_723_);
v_res_727_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Workspace_findModuleBySrc_x3f_spec__0(v_path_720_, v_as_721_, v_sz_boxed_725_, v_i_boxed_726_, v_b_724_);
lean_dec_ref(v_b_724_);
lean_dec_ref(v_as_721_);
return v_res_727_;
}
}
LEAN_EXPORT lean_object* l_Lake_Workspace_findModuleBySrc_x3f(lean_object* v_path_728_, lean_object* v_self_729_){
_start:
{
lean_object* v_packages_730_; lean_object* v___x_731_; lean_object* v___x_732_; size_t v_sz_733_; size_t v___x_734_; lean_object* v___x_735_; lean_object* v_fst_736_; 
v_packages_730_ = lean_ctor_get(v_self_729_, 4);
v___x_731_ = lean_box(0);
v___x_732_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Workspace_findModule_x3f_spec__0___closed__0));
v_sz_733_ = lean_array_size(v_packages_730_);
v___x_734_ = ((size_t)0ULL);
v___x_735_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Workspace_findModuleBySrc_x3f_spec__0(v_path_728_, v_packages_730_, v_sz_733_, v___x_734_, v___x_732_);
v_fst_736_ = lean_ctor_get(v___x_735_, 0);
lean_inc(v_fst_736_);
lean_dec_ref(v___x_735_);
if (lean_obj_tag(v_fst_736_) == 0)
{
return v___x_731_;
}
else
{
lean_object* v_val_737_; 
v_val_737_ = lean_ctor_get(v_fst_736_, 0);
lean_inc(v_val_737_);
lean_dec_ref_known(v_fst_736_, 1);
return v_val_737_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_Workspace_findModuleBySrc_x3f___boxed(lean_object* v_path_738_, lean_object* v_self_739_){
_start:
{
lean_object* v_res_740_; 
v_res_740_ = l_Lake_Workspace_findModuleBySrc_x3f(v_path_738_, v_self_739_);
lean_dec_ref(v_self_739_);
return v_res_740_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Workspace_findLeanLib_x3f_spec__0(lean_object* v_name_744_, lean_object* v_as_745_, size_t v_sz_746_, size_t v_i_747_, lean_object* v_b_748_){
_start:
{
lean_object* v_a_750_; uint8_t v___x_754_; 
v___x_754_ = lean_usize_dec_lt(v_i_747_, v_sz_746_);
if (v___x_754_ == 0)
{
lean_inc_ref(v_b_748_);
return v_b_748_;
}
else
{
lean_object* v___x_755_; lean_object* v___x_756_; lean_object* v_a_757_; lean_object* v___x_758_; 
v___x_755_ = lean_box(0);
v___x_756_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Workspace_findLeanLib_x3f_spec__0___closed__0));
v_a_757_ = lean_array_uget_borrowed(v_as_745_, v_i_747_);
v___x_758_ = l_Lake_Package_findTargetDecl_x3f(v_name_744_, v_a_757_);
if (lean_obj_tag(v___x_758_) == 0)
{
v_a_750_ = v___x_756_;
goto v___jp_749_;
}
else
{
lean_object* v_val_759_; lean_object* v___x_761_; uint8_t v_isShared_762_; uint8_t v_isSharedCheck_774_; 
v_val_759_ = lean_ctor_get(v___x_758_, 0);
v_isSharedCheck_774_ = !lean_is_exclusive(v___x_758_);
if (v_isSharedCheck_774_ == 0)
{
v___x_761_ = v___x_758_;
v_isShared_762_ = v_isSharedCheck_774_;
goto v_resetjp_760_;
}
else
{
lean_inc(v_val_759_);
lean_dec(v___x_758_);
v___x_761_ = lean_box(0);
v_isShared_762_ = v_isSharedCheck_774_;
goto v_resetjp_760_;
}
v_resetjp_760_:
{
lean_object* v_name_763_; lean_object* v_kind_764_; lean_object* v_config_765_; lean_object* v___x_766_; uint8_t v___x_767_; 
v_name_763_ = lean_ctor_get(v_val_759_, 1);
lean_inc(v_name_763_);
v_kind_764_ = lean_ctor_get(v_val_759_, 2);
lean_inc(v_kind_764_);
v_config_765_ = lean_ctor_get(v_val_759_, 3);
lean_inc(v_config_765_);
lean_dec(v_val_759_);
v___x_766_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Package_defaultTargetRoots_spec__0___closed__2));
v___x_767_ = lean_name_eq(v_kind_764_, v___x_766_);
lean_dec(v_kind_764_);
if (v___x_767_ == 0)
{
lean_dec(v_config_765_);
lean_dec(v_name_763_);
lean_del_object(v___x_761_);
v_a_750_ = v___x_756_;
goto v___jp_749_;
}
else
{
lean_object* v___x_768_; lean_object* v___x_770_; 
lean_inc(v_a_757_);
v___x_768_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_768_, 0, v_a_757_);
lean_ctor_set(v___x_768_, 1, v_name_763_);
lean_ctor_set(v___x_768_, 2, v_config_765_);
if (v_isShared_762_ == 0)
{
lean_ctor_set(v___x_761_, 0, v___x_768_);
v___x_770_ = v___x_761_;
goto v_reusejp_769_;
}
else
{
lean_object* v_reuseFailAlloc_773_; 
v_reuseFailAlloc_773_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_773_, 0, v___x_768_);
v___x_770_ = v_reuseFailAlloc_773_;
goto v_reusejp_769_;
}
v_reusejp_769_:
{
lean_object* v___x_771_; lean_object* v___x_772_; 
v___x_771_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_771_, 0, v___x_770_);
v___x_772_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_772_, 0, v___x_771_);
lean_ctor_set(v___x_772_, 1, v___x_755_);
return v___x_772_;
}
}
}
}
}
v___jp_749_:
{
size_t v___x_751_; size_t v___x_752_; 
v___x_751_ = ((size_t)1ULL);
v___x_752_ = lean_usize_add(v_i_747_, v___x_751_);
v_i_747_ = v___x_752_;
v_b_748_ = v_a_750_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Workspace_findLeanLib_x3f_spec__0___boxed(lean_object* v_name_775_, lean_object* v_as_776_, lean_object* v_sz_777_, lean_object* v_i_778_, lean_object* v_b_779_){
_start:
{
size_t v_sz_boxed_780_; size_t v_i_boxed_781_; lean_object* v_res_782_; 
v_sz_boxed_780_ = lean_unbox_usize(v_sz_777_);
lean_dec(v_sz_777_);
v_i_boxed_781_ = lean_unbox_usize(v_i_778_);
lean_dec(v_i_778_);
v_res_782_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Workspace_findLeanLib_x3f_spec__0(v_name_775_, v_as_776_, v_sz_boxed_780_, v_i_boxed_781_, v_b_779_);
lean_dec_ref(v_b_779_);
lean_dec_ref(v_as_776_);
lean_dec(v_name_775_);
return v_res_782_;
}
}
LEAN_EXPORT lean_object* l_Lake_Workspace_findLeanLib_x3f(lean_object* v_name_783_, lean_object* v_self_784_){
_start:
{
lean_object* v_packages_785_; lean_object* v___x_786_; lean_object* v___x_787_; size_t v_sz_788_; size_t v___x_789_; lean_object* v___x_790_; lean_object* v_fst_791_; 
v_packages_785_ = lean_ctor_get(v_self_784_, 4);
v___x_786_ = lean_box(0);
v___x_787_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Workspace_findLeanLib_x3f_spec__0___closed__0));
v_sz_788_ = lean_array_size(v_packages_785_);
v___x_789_ = ((size_t)0ULL);
v___x_790_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Workspace_findLeanLib_x3f_spec__0(v_name_783_, v_packages_785_, v_sz_788_, v___x_789_, v___x_787_);
v_fst_791_ = lean_ctor_get(v___x_790_, 0);
lean_inc(v_fst_791_);
lean_dec_ref(v___x_790_);
if (lean_obj_tag(v_fst_791_) == 0)
{
return v___x_786_;
}
else
{
lean_object* v_val_792_; 
v_val_792_ = lean_ctor_get(v_fst_791_, 0);
lean_inc(v_val_792_);
lean_dec_ref_known(v_fst_791_, 1);
return v_val_792_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_Workspace_findLeanLib_x3f___boxed(lean_object* v_name_793_, lean_object* v_self_794_){
_start:
{
lean_object* v_res_795_; 
v_res_795_ = l_Lake_Workspace_findLeanLib_x3f(v_name_793_, v_self_794_);
lean_dec_ref(v_self_794_);
lean_dec(v_name_793_);
return v_res_795_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Workspace_findLeanExe_x3f_spec__0(lean_object* v_name_796_, lean_object* v_as_797_, size_t v_sz_798_, size_t v_i_799_, lean_object* v_b_800_){
_start:
{
lean_object* v_a_802_; uint8_t v___x_806_; 
v___x_806_ = lean_usize_dec_lt(v_i_799_, v_sz_798_);
if (v___x_806_ == 0)
{
lean_inc_ref(v_b_800_);
return v_b_800_;
}
else
{
lean_object* v___x_807_; lean_object* v___x_808_; lean_object* v_a_809_; lean_object* v___x_810_; 
v___x_807_ = lean_box(0);
v___x_808_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Workspace_findLeanLib_x3f_spec__0___closed__0));
v_a_809_ = lean_array_uget_borrowed(v_as_797_, v_i_799_);
v___x_810_ = l_Lake_Package_findTargetDecl_x3f(v_name_796_, v_a_809_);
if (lean_obj_tag(v___x_810_) == 0)
{
v_a_802_ = v___x_808_;
goto v___jp_801_;
}
else
{
lean_object* v_val_811_; lean_object* v___x_813_; uint8_t v_isShared_814_; uint8_t v_isSharedCheck_826_; 
v_val_811_ = lean_ctor_get(v___x_810_, 0);
v_isSharedCheck_826_ = !lean_is_exclusive(v___x_810_);
if (v_isSharedCheck_826_ == 0)
{
v___x_813_ = v___x_810_;
v_isShared_814_ = v_isSharedCheck_826_;
goto v_resetjp_812_;
}
else
{
lean_inc(v_val_811_);
lean_dec(v___x_810_);
v___x_813_ = lean_box(0);
v_isShared_814_ = v_isSharedCheck_826_;
goto v_resetjp_812_;
}
v_resetjp_812_:
{
lean_object* v_name_815_; lean_object* v_kind_816_; lean_object* v_config_817_; lean_object* v___x_818_; uint8_t v___x_819_; 
v_name_815_ = lean_ctor_get(v_val_811_, 1);
lean_inc(v_name_815_);
v_kind_816_ = lean_ctor_get(v_val_811_, 2);
lean_inc(v_kind_816_);
v_config_817_ = lean_ctor_get(v_val_811_, 3);
lean_inc(v_config_817_);
lean_dec(v_val_811_);
v___x_818_ = l_Lake_LeanExe_keyword;
v___x_819_ = lean_name_eq(v_kind_816_, v___x_818_);
lean_dec(v_kind_816_);
if (v___x_819_ == 0)
{
lean_dec(v_config_817_);
lean_dec(v_name_815_);
lean_del_object(v___x_813_);
v_a_802_ = v___x_808_;
goto v___jp_801_;
}
else
{
lean_object* v___x_820_; lean_object* v___x_822_; 
lean_inc(v_a_809_);
v___x_820_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_820_, 0, v_a_809_);
lean_ctor_set(v___x_820_, 1, v_name_815_);
lean_ctor_set(v___x_820_, 2, v_config_817_);
if (v_isShared_814_ == 0)
{
lean_ctor_set(v___x_813_, 0, v___x_820_);
v___x_822_ = v___x_813_;
goto v_reusejp_821_;
}
else
{
lean_object* v_reuseFailAlloc_825_; 
v_reuseFailAlloc_825_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_825_, 0, v___x_820_);
v___x_822_ = v_reuseFailAlloc_825_;
goto v_reusejp_821_;
}
v_reusejp_821_:
{
lean_object* v___x_823_; lean_object* v___x_824_; 
v___x_823_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_823_, 0, v___x_822_);
v___x_824_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_824_, 0, v___x_823_);
lean_ctor_set(v___x_824_, 1, v___x_807_);
return v___x_824_;
}
}
}
}
}
v___jp_801_:
{
size_t v___x_803_; size_t v___x_804_; 
v___x_803_ = ((size_t)1ULL);
v___x_804_ = lean_usize_add(v_i_799_, v___x_803_);
v_i_799_ = v___x_804_;
v_b_800_ = v_a_802_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Workspace_findLeanExe_x3f_spec__0___boxed(lean_object* v_name_827_, lean_object* v_as_828_, lean_object* v_sz_829_, lean_object* v_i_830_, lean_object* v_b_831_){
_start:
{
size_t v_sz_boxed_832_; size_t v_i_boxed_833_; lean_object* v_res_834_; 
v_sz_boxed_832_ = lean_unbox_usize(v_sz_829_);
lean_dec(v_sz_829_);
v_i_boxed_833_ = lean_unbox_usize(v_i_830_);
lean_dec(v_i_830_);
v_res_834_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Workspace_findLeanExe_x3f_spec__0(v_name_827_, v_as_828_, v_sz_boxed_832_, v_i_boxed_833_, v_b_831_);
lean_dec_ref(v_b_831_);
lean_dec_ref(v_as_828_);
lean_dec(v_name_827_);
return v_res_834_;
}
}
LEAN_EXPORT lean_object* l_Lake_Workspace_findLeanExe_x3f(lean_object* v_name_835_, lean_object* v_self_836_){
_start:
{
lean_object* v_packages_837_; lean_object* v___x_838_; lean_object* v___x_839_; size_t v_sz_840_; size_t v___x_841_; lean_object* v___x_842_; lean_object* v_fst_843_; 
v_packages_837_ = lean_ctor_get(v_self_836_, 4);
v___x_838_ = lean_box(0);
v___x_839_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Workspace_findLeanLib_x3f_spec__0___closed__0));
v_sz_840_ = lean_array_size(v_packages_837_);
v___x_841_ = ((size_t)0ULL);
v___x_842_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Workspace_findLeanExe_x3f_spec__0(v_name_835_, v_packages_837_, v_sz_840_, v___x_841_, v___x_839_);
v_fst_843_ = lean_ctor_get(v___x_842_, 0);
lean_inc(v_fst_843_);
lean_dec_ref(v___x_842_);
if (lean_obj_tag(v_fst_843_) == 0)
{
return v___x_838_;
}
else
{
lean_object* v_val_844_; 
v_val_844_ = lean_ctor_get(v_fst_843_, 0);
lean_inc(v_val_844_);
lean_dec_ref_known(v_fst_843_, 1);
return v_val_844_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_Workspace_findLeanExe_x3f___boxed(lean_object* v_name_845_, lean_object* v_self_846_){
_start:
{
lean_object* v_res_847_; 
v_res_847_ = l_Lake_Workspace_findLeanExe_x3f(v_name_845_, v_self_846_);
lean_dec_ref(v_self_846_);
lean_dec(v_name_845_);
return v_res_847_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Workspace_findExternLib_x3f_spec__0(lean_object* v_name_848_, lean_object* v_as_849_, size_t v_sz_850_, size_t v_i_851_, lean_object* v_b_852_){
_start:
{
lean_object* v_a_854_; uint8_t v___x_858_; 
v___x_858_ = lean_usize_dec_lt(v_i_851_, v_sz_850_);
if (v___x_858_ == 0)
{
lean_inc_ref(v_b_852_);
return v_b_852_;
}
else
{
lean_object* v___x_859_; lean_object* v___x_860_; lean_object* v_a_861_; lean_object* v___x_862_; 
v___x_859_ = lean_box(0);
v___x_860_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Workspace_findLeanLib_x3f_spec__0___closed__0));
v_a_861_ = lean_array_uget_borrowed(v_as_849_, v_i_851_);
v___x_862_ = l_Lake_Package_findTargetDecl_x3f(v_name_848_, v_a_861_);
if (lean_obj_tag(v___x_862_) == 0)
{
v_a_854_ = v___x_860_;
goto v___jp_853_;
}
else
{
lean_object* v_val_863_; lean_object* v___x_865_; uint8_t v_isShared_866_; uint8_t v_isSharedCheck_878_; 
v_val_863_ = lean_ctor_get(v___x_862_, 0);
v_isSharedCheck_878_ = !lean_is_exclusive(v___x_862_);
if (v_isSharedCheck_878_ == 0)
{
v___x_865_ = v___x_862_;
v_isShared_866_ = v_isSharedCheck_878_;
goto v_resetjp_864_;
}
else
{
lean_inc(v_val_863_);
lean_dec(v___x_862_);
v___x_865_ = lean_box(0);
v_isShared_866_ = v_isSharedCheck_878_;
goto v_resetjp_864_;
}
v_resetjp_864_:
{
lean_object* v_name_867_; lean_object* v_kind_868_; lean_object* v_config_869_; lean_object* v___x_870_; uint8_t v___x_871_; 
v_name_867_ = lean_ctor_get(v_val_863_, 1);
lean_inc(v_name_867_);
v_kind_868_ = lean_ctor_get(v_val_863_, 2);
lean_inc(v_kind_868_);
v_config_869_ = lean_ctor_get(v_val_863_, 3);
lean_inc(v_config_869_);
lean_dec(v_val_863_);
v___x_870_ = l_Lake_ExternLib_keyword;
v___x_871_ = lean_name_eq(v_kind_868_, v___x_870_);
lean_dec(v_kind_868_);
if (v___x_871_ == 0)
{
lean_dec(v_config_869_);
lean_dec(v_name_867_);
lean_del_object(v___x_865_);
v_a_854_ = v___x_860_;
goto v___jp_853_;
}
else
{
lean_object* v___x_872_; lean_object* v___x_874_; 
lean_inc(v_a_861_);
v___x_872_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_872_, 0, v_a_861_);
lean_ctor_set(v___x_872_, 1, v_name_867_);
lean_ctor_set(v___x_872_, 2, v_config_869_);
if (v_isShared_866_ == 0)
{
lean_ctor_set(v___x_865_, 0, v___x_872_);
v___x_874_ = v___x_865_;
goto v_reusejp_873_;
}
else
{
lean_object* v_reuseFailAlloc_877_; 
v_reuseFailAlloc_877_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_877_, 0, v___x_872_);
v___x_874_ = v_reuseFailAlloc_877_;
goto v_reusejp_873_;
}
v_reusejp_873_:
{
lean_object* v___x_875_; lean_object* v___x_876_; 
v___x_875_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_875_, 0, v___x_874_);
v___x_876_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_876_, 0, v___x_875_);
lean_ctor_set(v___x_876_, 1, v___x_859_);
return v___x_876_;
}
}
}
}
}
v___jp_853_:
{
size_t v___x_855_; size_t v___x_856_; 
v___x_855_ = ((size_t)1ULL);
v___x_856_ = lean_usize_add(v_i_851_, v___x_855_);
v_i_851_ = v___x_856_;
v_b_852_ = v_a_854_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Workspace_findExternLib_x3f_spec__0___boxed(lean_object* v_name_879_, lean_object* v_as_880_, lean_object* v_sz_881_, lean_object* v_i_882_, lean_object* v_b_883_){
_start:
{
size_t v_sz_boxed_884_; size_t v_i_boxed_885_; lean_object* v_res_886_; 
v_sz_boxed_884_ = lean_unbox_usize(v_sz_881_);
lean_dec(v_sz_881_);
v_i_boxed_885_ = lean_unbox_usize(v_i_882_);
lean_dec(v_i_882_);
v_res_886_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Workspace_findExternLib_x3f_spec__0(v_name_879_, v_as_880_, v_sz_boxed_884_, v_i_boxed_885_, v_b_883_);
lean_dec_ref(v_b_883_);
lean_dec_ref(v_as_880_);
lean_dec(v_name_879_);
return v_res_886_;
}
}
LEAN_EXPORT lean_object* l_Lake_Workspace_findExternLib_x3f(lean_object* v_name_887_, lean_object* v_self_888_){
_start:
{
lean_object* v_packages_889_; lean_object* v___x_890_; lean_object* v___x_891_; size_t v_sz_892_; size_t v___x_893_; lean_object* v___x_894_; lean_object* v_fst_895_; 
v_packages_889_ = lean_ctor_get(v_self_888_, 4);
v___x_890_ = lean_box(0);
v___x_891_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Workspace_findLeanLib_x3f_spec__0___closed__0));
v_sz_892_ = lean_array_size(v_packages_889_);
v___x_893_ = ((size_t)0ULL);
v___x_894_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Workspace_findExternLib_x3f_spec__0(v_name_887_, v_packages_889_, v_sz_892_, v___x_893_, v___x_891_);
v_fst_895_ = lean_ctor_get(v___x_894_, 0);
lean_inc(v_fst_895_);
lean_dec_ref(v___x_894_);
if (lean_obj_tag(v_fst_895_) == 0)
{
return v___x_890_;
}
else
{
lean_object* v_val_896_; 
v_val_896_ = lean_ctor_get(v_fst_895_, 0);
lean_inc(v_val_896_);
lean_dec_ref_known(v_fst_895_, 1);
return v_val_896_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_Workspace_findExternLib_x3f___boxed(lean_object* v_name_897_, lean_object* v_self_898_){
_start:
{
lean_object* v_res_899_; 
v_res_899_ = l_Lake_Workspace_findExternLib_x3f(v_name_897_, v_self_898_);
lean_dec_ref(v_self_898_);
lean_dec(v_name_897_);
return v_res_899_;
}
}
LEAN_EXPORT lean_object* l_Functor_mapRev___at___00Lake_Workspace_findTargetConfig_x3f_spec__0___redArg(lean_object* v_a_900_, lean_object* v_f_901_){
_start:
{
if (lean_obj_tag(v_a_900_) == 0)
{
lean_object* v___x_902_; 
lean_dec(v_f_901_);
v___x_902_ = lean_box(0);
return v___x_902_;
}
else
{
lean_object* v_val_903_; lean_object* v___x_905_; uint8_t v_isShared_906_; uint8_t v_isSharedCheck_911_; 
v_val_903_ = lean_ctor_get(v_a_900_, 0);
v_isSharedCheck_911_ = !lean_is_exclusive(v_a_900_);
if (v_isSharedCheck_911_ == 0)
{
v___x_905_ = v_a_900_;
v_isShared_906_ = v_isSharedCheck_911_;
goto v_resetjp_904_;
}
else
{
lean_inc(v_val_903_);
lean_dec(v_a_900_);
v___x_905_ = lean_box(0);
v_isShared_906_ = v_isSharedCheck_911_;
goto v_resetjp_904_;
}
v_resetjp_904_:
{
lean_object* v___x_907_; lean_object* v___x_909_; 
v___x_907_ = lean_apply_1(v_f_901_, v_val_903_);
if (v_isShared_906_ == 0)
{
lean_ctor_set(v___x_905_, 0, v___x_907_);
v___x_909_ = v___x_905_;
goto v_reusejp_908_;
}
else
{
lean_object* v_reuseFailAlloc_910_; 
v_reuseFailAlloc_910_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_910_, 0, v___x_907_);
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
LEAN_EXPORT lean_object* l_Functor_mapRev___at___00Lake_Workspace_findTargetConfig_x3f_spec__0(lean_object* v_00_u03b1_912_, lean_object* v_00_u03b2_913_, lean_object* v_a_914_, lean_object* v_f_915_){
_start:
{
lean_object* v___x_916_; 
v___x_916_ = l_Functor_mapRev___at___00Lake_Workspace_findTargetConfig_x3f_spec__0___redArg(v_a_914_, v_f_915_);
return v___x_916_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Workspace_findTargetConfig_x3f_spec__1___lam__0(lean_object* v_a_917_, lean_object* v_x_918_){
_start:
{
lean_object* v___x_919_; 
v___x_919_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_919_, 0, v_a_917_);
lean_ctor_set(v___x_919_, 1, v_x_918_);
return v___x_919_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Workspace_findTargetConfig_x3f_spec__1(lean_object* v_name_923_, lean_object* v_as_924_, size_t v_sz_925_, size_t v_i_926_, lean_object* v_b_927_){
_start:
{
uint8_t v___x_928_; 
v___x_928_ = lean_usize_dec_lt(v_i_926_, v_sz_925_);
if (v___x_928_ == 0)
{
lean_inc_ref(v_b_927_);
return v_b_927_;
}
else
{
lean_object* v___x_929_; lean_object* v_a_930_; lean_object* v___f_931_; lean_object* v___x_932_; lean_object* v___x_933_; 
v___x_929_ = lean_box(0);
v_a_930_ = lean_array_uget_borrowed(v_as_924_, v_i_926_);
lean_inc(v_a_930_);
v___f_931_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Workspace_findTargetConfig_x3f_spec__1___lam__0), 2, 1);
lean_closure_set(v___f_931_, 0, v_a_930_);
v___x_932_ = l_Lake_Package_findTargetConfig_x3f(v_name_923_, v_a_930_);
v___x_933_ = l_Functor_mapRev___at___00Lake_Workspace_findTargetConfig_x3f_spec__0___redArg(v___x_932_, v___f_931_);
if (lean_obj_tag(v___x_933_) == 1)
{
lean_object* v___x_934_; lean_object* v___x_935_; 
v___x_934_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_934_, 0, v___x_933_);
v___x_935_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_935_, 0, v___x_934_);
lean_ctor_set(v___x_935_, 1, v___x_929_);
return v___x_935_;
}
else
{
lean_object* v___x_936_; size_t v___x_937_; size_t v___x_938_; 
lean_dec(v___x_933_);
v___x_936_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Workspace_findTargetConfig_x3f_spec__1___closed__0));
v___x_937_ = ((size_t)1ULL);
v___x_938_ = lean_usize_add(v_i_926_, v___x_937_);
v_i_926_ = v___x_938_;
v_b_927_ = v___x_936_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Workspace_findTargetConfig_x3f_spec__1___boxed(lean_object* v_name_940_, lean_object* v_as_941_, lean_object* v_sz_942_, lean_object* v_i_943_, lean_object* v_b_944_){
_start:
{
size_t v_sz_boxed_945_; size_t v_i_boxed_946_; lean_object* v_res_947_; 
v_sz_boxed_945_ = lean_unbox_usize(v_sz_942_);
lean_dec(v_sz_942_);
v_i_boxed_946_ = lean_unbox_usize(v_i_943_);
lean_dec(v_i_943_);
v_res_947_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Workspace_findTargetConfig_x3f_spec__1(v_name_940_, v_as_941_, v_sz_boxed_945_, v_i_boxed_946_, v_b_944_);
lean_dec_ref(v_b_944_);
lean_dec_ref(v_as_941_);
lean_dec(v_name_940_);
return v_res_947_;
}
}
LEAN_EXPORT lean_object* l_Lake_Workspace_findTargetConfig_x3f(lean_object* v_name_948_, lean_object* v_self_949_){
_start:
{
lean_object* v_packages_950_; lean_object* v___x_951_; lean_object* v___x_952_; size_t v_sz_953_; size_t v___x_954_; lean_object* v___x_955_; lean_object* v_fst_956_; 
v_packages_950_ = lean_ctor_get(v_self_949_, 4);
v___x_951_ = lean_box(0);
v___x_952_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Workspace_findTargetConfig_x3f_spec__1___closed__0));
v_sz_953_ = lean_array_size(v_packages_950_);
v___x_954_ = ((size_t)0ULL);
v___x_955_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Workspace_findTargetConfig_x3f_spec__1(v_name_948_, v_packages_950_, v_sz_953_, v___x_954_, v___x_952_);
v_fst_956_ = lean_ctor_get(v___x_955_, 0);
lean_inc(v_fst_956_);
lean_dec_ref(v___x_955_);
if (lean_obj_tag(v_fst_956_) == 0)
{
return v___x_951_;
}
else
{
lean_object* v_val_957_; 
v_val_957_ = lean_ctor_get(v_fst_956_, 0);
lean_inc(v_val_957_);
lean_dec_ref_known(v_fst_956_, 1);
return v_val_957_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_Workspace_findTargetConfig_x3f___boxed(lean_object* v_name_958_, lean_object* v_self_959_){
_start:
{
lean_object* v_res_960_; 
v_res_960_ = l_Lake_Workspace_findTargetConfig_x3f(v_name_958_, v_self_959_);
lean_dec_ref(v_self_959_);
lean_dec(v_name_958_);
return v_res_960_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Workspace_findTargetDecl_x3f_spec__0___lam__0(lean_object* v_a_961_, lean_object* v_x_962_){
_start:
{
lean_object* v___x_963_; 
v___x_963_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_963_, 0, v_a_961_);
lean_ctor_set(v___x_963_, 1, v_x_962_);
return v___x_963_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Workspace_findTargetDecl_x3f_spec__0(lean_object* v_name_964_, lean_object* v_as_965_, size_t v_sz_966_, size_t v_i_967_, lean_object* v_b_968_){
_start:
{
uint8_t v___x_969_; 
v___x_969_ = lean_usize_dec_lt(v_i_967_, v_sz_966_);
if (v___x_969_ == 0)
{
lean_inc_ref(v_b_968_);
return v_b_968_;
}
else
{
lean_object* v___x_970_; lean_object* v_a_971_; lean_object* v___f_972_; lean_object* v___x_973_; lean_object* v___x_974_; 
v___x_970_ = lean_box(0);
v_a_971_ = lean_array_uget_borrowed(v_as_965_, v_i_967_);
lean_inc(v_a_971_);
v___f_972_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Workspace_findTargetDecl_x3f_spec__0___lam__0), 2, 1);
lean_closure_set(v___f_972_, 0, v_a_971_);
v___x_973_ = l_Lake_Package_findTargetDecl_x3f(v_name_964_, v_a_971_);
v___x_974_ = l_Functor_mapRev___at___00Lake_Workspace_findTargetConfig_x3f_spec__0___redArg(v___x_973_, v___f_972_);
if (lean_obj_tag(v___x_974_) == 1)
{
lean_object* v___x_975_; lean_object* v___x_976_; 
v___x_975_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_975_, 0, v___x_974_);
v___x_976_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_976_, 0, v___x_975_);
lean_ctor_set(v___x_976_, 1, v___x_970_);
return v___x_976_;
}
else
{
lean_object* v___x_977_; size_t v___x_978_; size_t v___x_979_; 
lean_dec(v___x_974_);
v___x_977_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Workspace_findTargetConfig_x3f_spec__1___closed__0));
v___x_978_ = ((size_t)1ULL);
v___x_979_ = lean_usize_add(v_i_967_, v___x_978_);
v_i_967_ = v___x_979_;
v_b_968_ = v___x_977_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Workspace_findTargetDecl_x3f_spec__0___boxed(lean_object* v_name_981_, lean_object* v_as_982_, lean_object* v_sz_983_, lean_object* v_i_984_, lean_object* v_b_985_){
_start:
{
size_t v_sz_boxed_986_; size_t v_i_boxed_987_; lean_object* v_res_988_; 
v_sz_boxed_986_ = lean_unbox_usize(v_sz_983_);
lean_dec(v_sz_983_);
v_i_boxed_987_ = lean_unbox_usize(v_i_984_);
lean_dec(v_i_984_);
v_res_988_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Workspace_findTargetDecl_x3f_spec__0(v_name_981_, v_as_982_, v_sz_boxed_986_, v_i_boxed_987_, v_b_985_);
lean_dec_ref(v_b_985_);
lean_dec_ref(v_as_982_);
lean_dec(v_name_981_);
return v_res_988_;
}
}
LEAN_EXPORT lean_object* l_Lake_Workspace_findTargetDecl_x3f(lean_object* v_name_989_, lean_object* v_self_990_){
_start:
{
lean_object* v_packages_991_; lean_object* v___x_992_; lean_object* v___x_993_; size_t v_sz_994_; size_t v___x_995_; lean_object* v___x_996_; lean_object* v_fst_997_; 
v_packages_991_ = lean_ctor_get(v_self_990_, 4);
v___x_992_ = lean_box(0);
v___x_993_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Workspace_findTargetConfig_x3f_spec__1___closed__0));
v_sz_994_ = lean_array_size(v_packages_991_);
v___x_995_ = ((size_t)0ULL);
v___x_996_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Workspace_findTargetDecl_x3f_spec__0(v_name_989_, v_packages_991_, v_sz_994_, v___x_995_, v___x_993_);
v_fst_997_ = lean_ctor_get(v___x_996_, 0);
lean_inc(v_fst_997_);
lean_dec_ref(v___x_996_);
if (lean_obj_tag(v_fst_997_) == 0)
{
return v___x_992_;
}
else
{
lean_object* v_val_998_; 
v_val_998_ = lean_ctor_get(v_fst_997_, 0);
lean_inc(v_val_998_);
lean_dec_ref_known(v_fst_997_, 1);
return v_val_998_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_Workspace_findTargetDecl_x3f___boxed(lean_object* v_name_999_, lean_object* v_self_1000_){
_start:
{
lean_object* v_res_1001_; 
v_res_1001_ = l_Lake_Workspace_findTargetDecl_x3f(v_name_999_, v_self_1000_);
lean_dec_ref(v_self_1000_);
lean_dec(v_name_999_);
return v_res_1001_;
}
}
LEAN_EXPORT lean_object* l_Lake_Workspace_addFacetConfig(lean_object* v_name_1002_, lean_object* v_cfg_1003_, lean_object* v_self_1004_){
_start:
{
lean_object* v_lakeEnv_1005_; lean_object* v_lakeConfig_1006_; lean_object* v_lakeCache_1007_; lean_object* v_lakeArgs_x3f_1008_; lean_object* v_packages_1009_; lean_object* v_packageMap_1010_; lean_object* v_facetConfigs_1011_; lean_object* v___x_1013_; uint8_t v_isShared_1014_; uint8_t v_isSharedCheck_1019_; 
v_lakeEnv_1005_ = lean_ctor_get(v_self_1004_, 0);
v_lakeConfig_1006_ = lean_ctor_get(v_self_1004_, 1);
v_lakeCache_1007_ = lean_ctor_get(v_self_1004_, 2);
v_lakeArgs_x3f_1008_ = lean_ctor_get(v_self_1004_, 3);
v_packages_1009_ = lean_ctor_get(v_self_1004_, 4);
v_packageMap_1010_ = lean_ctor_get(v_self_1004_, 5);
v_facetConfigs_1011_ = lean_ctor_get(v_self_1004_, 6);
v_isSharedCheck_1019_ = !lean_is_exclusive(v_self_1004_);
if (v_isSharedCheck_1019_ == 0)
{
v___x_1013_ = v_self_1004_;
v_isShared_1014_ = v_isSharedCheck_1019_;
goto v_resetjp_1012_;
}
else
{
lean_inc(v_facetConfigs_1011_);
lean_inc(v_packageMap_1010_);
lean_inc(v_packages_1009_);
lean_inc(v_lakeArgs_x3f_1008_);
lean_inc(v_lakeCache_1007_);
lean_inc(v_lakeConfig_1006_);
lean_inc(v_lakeEnv_1005_);
lean_dec(v_self_1004_);
v___x_1013_ = lean_box(0);
v_isShared_1014_ = v_isSharedCheck_1019_;
goto v_resetjp_1012_;
}
v_resetjp_1012_:
{
lean_object* v___x_1015_; lean_object* v___x_1017_; 
v___x_1015_ = l_Lake_FacetConfigMap_insert(v_name_1002_, v_cfg_1003_, v_facetConfigs_1011_);
if (v_isShared_1014_ == 0)
{
lean_ctor_set(v___x_1013_, 6, v___x_1015_);
v___x_1017_ = v___x_1013_;
goto v_reusejp_1016_;
}
else
{
lean_object* v_reuseFailAlloc_1018_; 
v_reuseFailAlloc_1018_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v_reuseFailAlloc_1018_, 0, v_lakeEnv_1005_);
lean_ctor_set(v_reuseFailAlloc_1018_, 1, v_lakeConfig_1006_);
lean_ctor_set(v_reuseFailAlloc_1018_, 2, v_lakeCache_1007_);
lean_ctor_set(v_reuseFailAlloc_1018_, 3, v_lakeArgs_x3f_1008_);
lean_ctor_set(v_reuseFailAlloc_1018_, 4, v_packages_1009_);
lean_ctor_set(v_reuseFailAlloc_1018_, 5, v_packageMap_1010_);
lean_ctor_set(v_reuseFailAlloc_1018_, 6, v___x_1015_);
v___x_1017_ = v_reuseFailAlloc_1018_;
goto v_reusejp_1016_;
}
v_reusejp_1016_:
{
return v___x_1017_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Workspace_findFacetConfig_x3f(lean_object* v_name_1020_, lean_object* v_self_1021_){
_start:
{
lean_object* v_facetConfigs_1022_; lean_object* v___x_1023_; 
v_facetConfigs_1022_ = lean_ctor_get(v_self_1021_, 6);
v___x_1023_ = l_Lake_FacetConfigMap_get_x3f(v_name_1020_, v_facetConfigs_1022_);
return v___x_1023_;
}
}
LEAN_EXPORT lean_object* l_Lake_Workspace_findFacetConfig_x3f___boxed(lean_object* v_name_1024_, lean_object* v_self_1025_){
_start:
{
lean_object* v_res_1026_; 
v_res_1026_ = l_Lake_Workspace_findFacetConfig_x3f(v_name_1024_, v_self_1025_);
lean_dec_ref(v_self_1025_);
lean_dec(v_name_1024_);
return v_res_1026_;
}
}
LEAN_EXPORT lean_object* l_Lake_Workspace_addModuleFacetConfig(lean_object* v_name_1027_, lean_object* v_cfg_1028_, lean_object* v_self_1029_){
_start:
{
lean_object* v_lakeEnv_1030_; lean_object* v_lakeConfig_1031_; lean_object* v_lakeCache_1032_; lean_object* v_lakeArgs_x3f_1033_; lean_object* v_packages_1034_; lean_object* v_packageMap_1035_; lean_object* v_facetConfigs_1036_; lean_object* v___x_1038_; uint8_t v_isShared_1039_; uint8_t v_isSharedCheck_1044_; 
v_lakeEnv_1030_ = lean_ctor_get(v_self_1029_, 0);
v_lakeConfig_1031_ = lean_ctor_get(v_self_1029_, 1);
v_lakeCache_1032_ = lean_ctor_get(v_self_1029_, 2);
v_lakeArgs_x3f_1033_ = lean_ctor_get(v_self_1029_, 3);
v_packages_1034_ = lean_ctor_get(v_self_1029_, 4);
v_packageMap_1035_ = lean_ctor_get(v_self_1029_, 5);
v_facetConfigs_1036_ = lean_ctor_get(v_self_1029_, 6);
v_isSharedCheck_1044_ = !lean_is_exclusive(v_self_1029_);
if (v_isSharedCheck_1044_ == 0)
{
v___x_1038_ = v_self_1029_;
v_isShared_1039_ = v_isSharedCheck_1044_;
goto v_resetjp_1037_;
}
else
{
lean_inc(v_facetConfigs_1036_);
lean_inc(v_packageMap_1035_);
lean_inc(v_packages_1034_);
lean_inc(v_lakeArgs_x3f_1033_);
lean_inc(v_lakeCache_1032_);
lean_inc(v_lakeConfig_1031_);
lean_inc(v_lakeEnv_1030_);
lean_dec(v_self_1029_);
v___x_1038_ = lean_box(0);
v_isShared_1039_ = v_isSharedCheck_1044_;
goto v_resetjp_1037_;
}
v_resetjp_1037_:
{
lean_object* v___x_1040_; lean_object* v___x_1042_; 
v___x_1040_ = l_Lake_FacetConfigMap_insert(v_name_1027_, v_cfg_1028_, v_facetConfigs_1036_);
if (v_isShared_1039_ == 0)
{
lean_ctor_set(v___x_1038_, 6, v___x_1040_);
v___x_1042_ = v___x_1038_;
goto v_reusejp_1041_;
}
else
{
lean_object* v_reuseFailAlloc_1043_; 
v_reuseFailAlloc_1043_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v_reuseFailAlloc_1043_, 0, v_lakeEnv_1030_);
lean_ctor_set(v_reuseFailAlloc_1043_, 1, v_lakeConfig_1031_);
lean_ctor_set(v_reuseFailAlloc_1043_, 2, v_lakeCache_1032_);
lean_ctor_set(v_reuseFailAlloc_1043_, 3, v_lakeArgs_x3f_1033_);
lean_ctor_set(v_reuseFailAlloc_1043_, 4, v_packages_1034_);
lean_ctor_set(v_reuseFailAlloc_1043_, 5, v_packageMap_1035_);
lean_ctor_set(v_reuseFailAlloc_1043_, 6, v___x_1040_);
v___x_1042_ = v_reuseFailAlloc_1043_;
goto v_reusejp_1041_;
}
v_reusejp_1041_:
{
return v___x_1042_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Workspace_findModuleFacetConfig_x3f(lean_object* v_name_1045_, lean_object* v_self_1046_){
_start:
{
lean_object* v_facetConfigs_1047_; lean_object* v___x_1048_; 
v_facetConfigs_1047_ = lean_ctor_get(v_self_1046_, 6);
v___x_1048_ = l_Lake_FacetConfigMap_get_x3f(v_name_1045_, v_facetConfigs_1047_);
if (lean_obj_tag(v___x_1048_) == 0)
{
lean_object* v___x_1049_; 
v___x_1049_ = lean_box(0);
return v___x_1049_;
}
else
{
lean_object* v_val_1050_; lean_object* v___x_1051_; lean_object* v___x_1052_; 
v_val_1050_ = lean_ctor_get(v___x_1048_, 0);
lean_inc(v_val_1050_);
lean_dec_ref_known(v___x_1048_, 1);
v___x_1051_ = l_Lake_Module_keyword;
v___x_1052_ = l_Lake_FacetConfig_toKind_x3f___redArg(v___x_1051_, v_val_1050_);
return v___x_1052_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_Workspace_findModuleFacetConfig_x3f___boxed(lean_object* v_name_1053_, lean_object* v_self_1054_){
_start:
{
lean_object* v_res_1055_; 
v_res_1055_ = l_Lake_Workspace_findModuleFacetConfig_x3f(v_name_1053_, v_self_1054_);
lean_dec_ref(v_self_1054_);
lean_dec(v_name_1053_);
return v_res_1055_;
}
}
LEAN_EXPORT lean_object* l_Lake_Workspace_addPackageFacetConfig(lean_object* v_name_1056_, lean_object* v_cfg_1057_, lean_object* v_self_1058_){
_start:
{
lean_object* v_lakeEnv_1059_; lean_object* v_lakeConfig_1060_; lean_object* v_lakeCache_1061_; lean_object* v_lakeArgs_x3f_1062_; lean_object* v_packages_1063_; lean_object* v_packageMap_1064_; lean_object* v_facetConfigs_1065_; lean_object* v___x_1067_; uint8_t v_isShared_1068_; uint8_t v_isSharedCheck_1073_; 
v_lakeEnv_1059_ = lean_ctor_get(v_self_1058_, 0);
v_lakeConfig_1060_ = lean_ctor_get(v_self_1058_, 1);
v_lakeCache_1061_ = lean_ctor_get(v_self_1058_, 2);
v_lakeArgs_x3f_1062_ = lean_ctor_get(v_self_1058_, 3);
v_packages_1063_ = lean_ctor_get(v_self_1058_, 4);
v_packageMap_1064_ = lean_ctor_get(v_self_1058_, 5);
v_facetConfigs_1065_ = lean_ctor_get(v_self_1058_, 6);
v_isSharedCheck_1073_ = !lean_is_exclusive(v_self_1058_);
if (v_isSharedCheck_1073_ == 0)
{
v___x_1067_ = v_self_1058_;
v_isShared_1068_ = v_isSharedCheck_1073_;
goto v_resetjp_1066_;
}
else
{
lean_inc(v_facetConfigs_1065_);
lean_inc(v_packageMap_1064_);
lean_inc(v_packages_1063_);
lean_inc(v_lakeArgs_x3f_1062_);
lean_inc(v_lakeCache_1061_);
lean_inc(v_lakeConfig_1060_);
lean_inc(v_lakeEnv_1059_);
lean_dec(v_self_1058_);
v___x_1067_ = lean_box(0);
v_isShared_1068_ = v_isSharedCheck_1073_;
goto v_resetjp_1066_;
}
v_resetjp_1066_:
{
lean_object* v___x_1069_; lean_object* v___x_1071_; 
v___x_1069_ = l_Lake_FacetConfigMap_insert(v_name_1056_, v_cfg_1057_, v_facetConfigs_1065_);
if (v_isShared_1068_ == 0)
{
lean_ctor_set(v___x_1067_, 6, v___x_1069_);
v___x_1071_ = v___x_1067_;
goto v_reusejp_1070_;
}
else
{
lean_object* v_reuseFailAlloc_1072_; 
v_reuseFailAlloc_1072_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v_reuseFailAlloc_1072_, 0, v_lakeEnv_1059_);
lean_ctor_set(v_reuseFailAlloc_1072_, 1, v_lakeConfig_1060_);
lean_ctor_set(v_reuseFailAlloc_1072_, 2, v_lakeCache_1061_);
lean_ctor_set(v_reuseFailAlloc_1072_, 3, v_lakeArgs_x3f_1062_);
lean_ctor_set(v_reuseFailAlloc_1072_, 4, v_packages_1063_);
lean_ctor_set(v_reuseFailAlloc_1072_, 5, v_packageMap_1064_);
lean_ctor_set(v_reuseFailAlloc_1072_, 6, v___x_1069_);
v___x_1071_ = v_reuseFailAlloc_1072_;
goto v_reusejp_1070_;
}
v_reusejp_1070_:
{
return v___x_1071_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Workspace_findPackageFacetConfig_x3f(lean_object* v_name_1074_, lean_object* v_self_1075_){
_start:
{
lean_object* v_facetConfigs_1076_; lean_object* v___x_1077_; 
v_facetConfigs_1076_ = lean_ctor_get(v_self_1075_, 6);
v___x_1077_ = l_Lake_FacetConfigMap_get_x3f(v_name_1074_, v_facetConfigs_1076_);
if (lean_obj_tag(v___x_1077_) == 0)
{
lean_object* v___x_1078_; 
v___x_1078_ = lean_box(0);
return v___x_1078_;
}
else
{
lean_object* v_val_1079_; lean_object* v___x_1080_; lean_object* v___x_1081_; 
v_val_1079_ = lean_ctor_get(v___x_1077_, 0);
lean_inc(v_val_1079_);
lean_dec_ref_known(v___x_1077_, 1);
v___x_1080_ = l_Lake_Package_keyword;
v___x_1081_ = l_Lake_FacetConfig_toKind_x3f___redArg(v___x_1080_, v_val_1079_);
return v___x_1081_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_Workspace_findPackageFacetConfig_x3f___boxed(lean_object* v_name_1082_, lean_object* v_self_1083_){
_start:
{
lean_object* v_res_1084_; 
v_res_1084_ = l_Lake_Workspace_findPackageFacetConfig_x3f(v_name_1082_, v_self_1083_);
lean_dec_ref(v_self_1083_);
lean_dec(v_name_1082_);
return v_res_1084_;
}
}
LEAN_EXPORT lean_object* l_Lake_Workspace_addLibraryFacetConfig(lean_object* v_name_1085_, lean_object* v_cfg_1086_, lean_object* v_self_1087_){
_start:
{
lean_object* v_lakeEnv_1088_; lean_object* v_lakeConfig_1089_; lean_object* v_lakeCache_1090_; lean_object* v_lakeArgs_x3f_1091_; lean_object* v_packages_1092_; lean_object* v_packageMap_1093_; lean_object* v_facetConfigs_1094_; lean_object* v___x_1096_; uint8_t v_isShared_1097_; uint8_t v_isSharedCheck_1102_; 
v_lakeEnv_1088_ = lean_ctor_get(v_self_1087_, 0);
v_lakeConfig_1089_ = lean_ctor_get(v_self_1087_, 1);
v_lakeCache_1090_ = lean_ctor_get(v_self_1087_, 2);
v_lakeArgs_x3f_1091_ = lean_ctor_get(v_self_1087_, 3);
v_packages_1092_ = lean_ctor_get(v_self_1087_, 4);
v_packageMap_1093_ = lean_ctor_get(v_self_1087_, 5);
v_facetConfigs_1094_ = lean_ctor_get(v_self_1087_, 6);
v_isSharedCheck_1102_ = !lean_is_exclusive(v_self_1087_);
if (v_isSharedCheck_1102_ == 0)
{
v___x_1096_ = v_self_1087_;
v_isShared_1097_ = v_isSharedCheck_1102_;
goto v_resetjp_1095_;
}
else
{
lean_inc(v_facetConfigs_1094_);
lean_inc(v_packageMap_1093_);
lean_inc(v_packages_1092_);
lean_inc(v_lakeArgs_x3f_1091_);
lean_inc(v_lakeCache_1090_);
lean_inc(v_lakeConfig_1089_);
lean_inc(v_lakeEnv_1088_);
lean_dec(v_self_1087_);
v___x_1096_ = lean_box(0);
v_isShared_1097_ = v_isSharedCheck_1102_;
goto v_resetjp_1095_;
}
v_resetjp_1095_:
{
lean_object* v___x_1098_; lean_object* v___x_1100_; 
v___x_1098_ = l_Lake_FacetConfigMap_insert(v_name_1085_, v_cfg_1086_, v_facetConfigs_1094_);
if (v_isShared_1097_ == 0)
{
lean_ctor_set(v___x_1096_, 6, v___x_1098_);
v___x_1100_ = v___x_1096_;
goto v_reusejp_1099_;
}
else
{
lean_object* v_reuseFailAlloc_1101_; 
v_reuseFailAlloc_1101_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v_reuseFailAlloc_1101_, 0, v_lakeEnv_1088_);
lean_ctor_set(v_reuseFailAlloc_1101_, 1, v_lakeConfig_1089_);
lean_ctor_set(v_reuseFailAlloc_1101_, 2, v_lakeCache_1090_);
lean_ctor_set(v_reuseFailAlloc_1101_, 3, v_lakeArgs_x3f_1091_);
lean_ctor_set(v_reuseFailAlloc_1101_, 4, v_packages_1092_);
lean_ctor_set(v_reuseFailAlloc_1101_, 5, v_packageMap_1093_);
lean_ctor_set(v_reuseFailAlloc_1101_, 6, v___x_1098_);
v___x_1100_ = v_reuseFailAlloc_1101_;
goto v_reusejp_1099_;
}
v_reusejp_1099_:
{
return v___x_1100_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Workspace_findLibraryFacetConfig_x3f(lean_object* v_name_1103_, lean_object* v_self_1104_){
_start:
{
lean_object* v_facetConfigs_1105_; lean_object* v___x_1106_; 
v_facetConfigs_1105_ = lean_ctor_get(v_self_1104_, 6);
v___x_1106_ = l_Lake_FacetConfigMap_get_x3f(v_name_1103_, v_facetConfigs_1105_);
if (lean_obj_tag(v___x_1106_) == 0)
{
lean_object* v___x_1107_; 
v___x_1107_ = lean_box(0);
return v___x_1107_;
}
else
{
lean_object* v_val_1108_; lean_object* v___x_1109_; lean_object* v___x_1110_; 
v_val_1108_ = lean_ctor_get(v___x_1106_, 0);
lean_inc(v_val_1108_);
lean_dec_ref_known(v___x_1106_, 1);
v___x_1109_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Package_defaultTargetRoots_spec__0___closed__2));
v___x_1110_ = l_Lake_FacetConfig_toKind_x3f___redArg(v___x_1109_, v_val_1108_);
return v___x_1110_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_Workspace_findLibraryFacetConfig_x3f___boxed(lean_object* v_name_1111_, lean_object* v_self_1112_){
_start:
{
lean_object* v_res_1113_; 
v_res_1113_ = l_Lake_Workspace_findLibraryFacetConfig_x3f(v_name_1111_, v_self_1112_);
lean_dec_ref(v_self_1112_);
lean_dec(v_name_1111_);
return v_res_1113_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Workspace_binPath_spec__0(lean_object* v_as_1114_, size_t v_i_1115_, size_t v_stop_1116_, lean_object* v_b_1117_){
_start:
{
uint8_t v___x_1118_; 
v___x_1118_ = lean_usize_dec_eq(v_i_1115_, v_stop_1116_);
if (v___x_1118_ == 0)
{
lean_object* v___x_1119_; lean_object* v_config_1120_; lean_object* v_dir_1121_; lean_object* v_buildDir_1122_; lean_object* v_binDir_1123_; lean_object* v___x_1124_; lean_object* v___x_1125_; lean_object* v___x_1126_; lean_object* v___x_1127_; lean_object* v___x_1128_; size_t v___x_1129_; size_t v___x_1130_; 
v___x_1119_ = lean_array_uget_borrowed(v_as_1114_, v_i_1115_);
v_config_1120_ = lean_ctor_get(v___x_1119_, 6);
v_dir_1121_ = lean_ctor_get(v___x_1119_, 4);
v_buildDir_1122_ = lean_ctor_get(v_config_1120_, 5);
v_binDir_1123_ = lean_ctor_get(v_config_1120_, 8);
lean_inc_ref(v_buildDir_1122_);
v___x_1124_ = l_System_FilePath_normalize(v_buildDir_1122_);
lean_inc_ref(v_dir_1121_);
v___x_1125_ = l_Lake_joinRelative(v_dir_1121_, v___x_1124_);
lean_inc_ref(v_binDir_1123_);
v___x_1126_ = l_System_FilePath_normalize(v_binDir_1123_);
v___x_1127_ = l_Lake_joinRelative(v___x_1125_, v___x_1126_);
v___x_1128_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1128_, 0, v___x_1127_);
lean_ctor_set(v___x_1128_, 1, v_b_1117_);
v___x_1129_ = ((size_t)1ULL);
v___x_1130_ = lean_usize_add(v_i_1115_, v___x_1129_);
v_i_1115_ = v___x_1130_;
v_b_1117_ = v___x_1128_;
goto _start;
}
else
{
return v_b_1117_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Workspace_binPath_spec__0___boxed(lean_object* v_as_1132_, lean_object* v_i_1133_, lean_object* v_stop_1134_, lean_object* v_b_1135_){
_start:
{
size_t v_i_boxed_1136_; size_t v_stop_boxed_1137_; lean_object* v_res_1138_; 
v_i_boxed_1136_ = lean_unbox_usize(v_i_1133_);
lean_dec(v_i_1133_);
v_stop_boxed_1137_ = lean_unbox_usize(v_stop_1134_);
lean_dec(v_stop_1134_);
v_res_1138_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Workspace_binPath_spec__0(v_as_1132_, v_i_boxed_1136_, v_stop_boxed_1137_, v_b_1135_);
lean_dec_ref(v_as_1132_);
return v_res_1138_;
}
}
LEAN_EXPORT lean_object* l_Lake_Workspace_binPath(lean_object* v_self_1139_){
_start:
{
lean_object* v_packages_1140_; lean_object* v___x_1141_; lean_object* v___x_1142_; lean_object* v___x_1143_; uint8_t v___x_1144_; 
v_packages_1140_ = lean_ctor_get(v_self_1139_, 4);
v___x_1141_ = lean_box(0);
v___x_1142_ = lean_unsigned_to_nat(0u);
v___x_1143_ = lean_array_get_size(v_packages_1140_);
v___x_1144_ = lean_nat_dec_lt(v___x_1142_, v___x_1143_);
if (v___x_1144_ == 0)
{
return v___x_1141_;
}
else
{
uint8_t v___x_1145_; 
v___x_1145_ = lean_nat_dec_le(v___x_1143_, v___x_1143_);
if (v___x_1145_ == 0)
{
if (v___x_1144_ == 0)
{
return v___x_1141_;
}
else
{
size_t v___x_1146_; size_t v___x_1147_; lean_object* v___x_1148_; 
v___x_1146_ = ((size_t)0ULL);
v___x_1147_ = lean_usize_of_nat(v___x_1143_);
v___x_1148_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Workspace_binPath_spec__0(v_packages_1140_, v___x_1146_, v___x_1147_, v___x_1141_);
return v___x_1148_;
}
}
else
{
size_t v___x_1149_; size_t v___x_1150_; lean_object* v___x_1151_; 
v___x_1149_ = ((size_t)0ULL);
v___x_1150_ = lean_usize_of_nat(v___x_1143_);
v___x_1151_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Workspace_binPath_spec__0(v_packages_1140_, v___x_1149_, v___x_1150_, v___x_1141_);
return v___x_1151_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Workspace_binPath___boxed(lean_object* v_self_1152_){
_start:
{
lean_object* v_res_1153_; 
v_res_1153_ = l_Lake_Workspace_binPath(v_self_1152_);
lean_dec_ref(v_self_1152_);
return v_res_1153_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Workspace_leanPath_spec__0(lean_object* v_as_1154_, size_t v_i_1155_, size_t v_stop_1156_, lean_object* v_b_1157_){
_start:
{
uint8_t v___x_1158_; 
v___x_1158_ = lean_usize_dec_eq(v_i_1155_, v_stop_1156_);
if (v___x_1158_ == 0)
{
lean_object* v___x_1159_; lean_object* v_config_1160_; lean_object* v_dir_1161_; lean_object* v_buildDir_1162_; lean_object* v_leanLibDir_1163_; lean_object* v___x_1164_; lean_object* v___x_1165_; lean_object* v___x_1166_; lean_object* v___x_1167_; lean_object* v___x_1168_; size_t v___x_1169_; size_t v___x_1170_; 
v___x_1159_ = lean_array_uget_borrowed(v_as_1154_, v_i_1155_);
v_config_1160_ = lean_ctor_get(v___x_1159_, 6);
v_dir_1161_ = lean_ctor_get(v___x_1159_, 4);
v_buildDir_1162_ = lean_ctor_get(v_config_1160_, 5);
v_leanLibDir_1163_ = lean_ctor_get(v_config_1160_, 6);
lean_inc_ref(v_buildDir_1162_);
v___x_1164_ = l_System_FilePath_normalize(v_buildDir_1162_);
lean_inc_ref(v_dir_1161_);
v___x_1165_ = l_Lake_joinRelative(v_dir_1161_, v___x_1164_);
lean_inc_ref(v_leanLibDir_1163_);
v___x_1166_ = l_System_FilePath_normalize(v_leanLibDir_1163_);
v___x_1167_ = l_Lake_joinRelative(v___x_1165_, v___x_1166_);
v___x_1168_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1168_, 0, v___x_1167_);
lean_ctor_set(v___x_1168_, 1, v_b_1157_);
v___x_1169_ = ((size_t)1ULL);
v___x_1170_ = lean_usize_add(v_i_1155_, v___x_1169_);
v_i_1155_ = v___x_1170_;
v_b_1157_ = v___x_1168_;
goto _start;
}
else
{
return v_b_1157_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Workspace_leanPath_spec__0___boxed(lean_object* v_as_1172_, lean_object* v_i_1173_, lean_object* v_stop_1174_, lean_object* v_b_1175_){
_start:
{
size_t v_i_boxed_1176_; size_t v_stop_boxed_1177_; lean_object* v_res_1178_; 
v_i_boxed_1176_ = lean_unbox_usize(v_i_1173_);
lean_dec(v_i_1173_);
v_stop_boxed_1177_ = lean_unbox_usize(v_stop_1174_);
lean_dec(v_stop_1174_);
v_res_1178_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Workspace_leanPath_spec__0(v_as_1172_, v_i_boxed_1176_, v_stop_boxed_1177_, v_b_1175_);
lean_dec_ref(v_as_1172_);
return v_res_1178_;
}
}
LEAN_EXPORT lean_object* l_Lake_Workspace_leanPath(lean_object* v_self_1179_){
_start:
{
lean_object* v_packages_1180_; lean_object* v___x_1181_; lean_object* v___x_1182_; lean_object* v___x_1183_; uint8_t v___x_1184_; 
v_packages_1180_ = lean_ctor_get(v_self_1179_, 4);
v___x_1181_ = lean_box(0);
v___x_1182_ = lean_unsigned_to_nat(0u);
v___x_1183_ = lean_array_get_size(v_packages_1180_);
v___x_1184_ = lean_nat_dec_lt(v___x_1182_, v___x_1183_);
if (v___x_1184_ == 0)
{
return v___x_1181_;
}
else
{
uint8_t v___x_1185_; 
v___x_1185_ = lean_nat_dec_le(v___x_1183_, v___x_1183_);
if (v___x_1185_ == 0)
{
if (v___x_1184_ == 0)
{
return v___x_1181_;
}
else
{
size_t v___x_1186_; size_t v___x_1187_; lean_object* v___x_1188_; 
v___x_1186_ = ((size_t)0ULL);
v___x_1187_ = lean_usize_of_nat(v___x_1183_);
v___x_1188_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Workspace_leanPath_spec__0(v_packages_1180_, v___x_1186_, v___x_1187_, v___x_1181_);
return v___x_1188_;
}
}
else
{
size_t v___x_1189_; size_t v___x_1190_; lean_object* v___x_1191_; 
v___x_1189_ = ((size_t)0ULL);
v___x_1190_ = lean_usize_of_nat(v___x_1183_);
v___x_1191_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Workspace_leanPath_spec__0(v_packages_1180_, v___x_1189_, v___x_1190_, v___x_1181_);
return v___x_1191_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Workspace_leanPath___boxed(lean_object* v_self_1192_){
_start:
{
lean_object* v_res_1193_; 
v_res_1193_ = l_Lake_Workspace_leanPath(v_self_1192_);
lean_dec_ref(v_self_1192_);
return v_res_1193_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lake_Workspace_leanSrcPath_spec__0(lean_object* v_x2_1194_, lean_object* v_as_1195_, size_t v_i_1196_, size_t v_stop_1197_, lean_object* v_b_1198_){
_start:
{
uint8_t v___x_1199_; 
v___x_1199_ = lean_usize_dec_eq(v_i_1196_, v_stop_1197_);
if (v___x_1199_ == 0)
{
size_t v___x_1200_; size_t v___x_1201_; lean_object* v___x_1202_; lean_object* v_kind_1203_; lean_object* v_config_1204_; lean_object* v___x_1205_; uint8_t v___x_1206_; 
v___x_1200_ = ((size_t)1ULL);
v___x_1201_ = lean_usize_sub(v_i_1196_, v___x_1200_);
v___x_1202_ = lean_array_uget_borrowed(v_as_1195_, v___x_1201_);
v_kind_1203_ = lean_ctor_get(v___x_1202_, 2);
v_config_1204_ = lean_ctor_get(v___x_1202_, 3);
v___x_1205_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Package_defaultTargetRoots_spec__0___closed__2));
v___x_1206_ = lean_name_eq(v_kind_1203_, v___x_1205_);
if (v___x_1206_ == 0)
{
v_i_1196_ = v___x_1201_;
goto _start;
}
else
{
lean_object* v_config_1208_; lean_object* v_dir_1209_; lean_object* v_srcDir_1210_; lean_object* v_srcDir_1211_; lean_object* v___x_1212_; lean_object* v___x_1213_; lean_object* v___x_1214_; lean_object* v___x_1215_; 
v_config_1208_ = lean_ctor_get(v_x2_1194_, 6);
v_dir_1209_ = lean_ctor_get(v_x2_1194_, 4);
v_srcDir_1210_ = lean_ctor_get(v_config_1208_, 4);
v_srcDir_1211_ = lean_ctor_get(v_config_1204_, 1);
lean_inc_ref(v_srcDir_1210_);
v___x_1212_ = l_System_FilePath_normalize(v_srcDir_1210_);
lean_inc_ref(v_dir_1209_);
v___x_1213_ = l_Lake_joinRelative(v_dir_1209_, v___x_1212_);
lean_inc_ref(v_srcDir_1211_);
v___x_1214_ = l_Lake_joinRelative(v___x_1213_, v_srcDir_1211_);
v___x_1215_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1215_, 0, v___x_1214_);
lean_ctor_set(v___x_1215_, 1, v_b_1198_);
v_i_1196_ = v___x_1201_;
v_b_1198_ = v___x_1215_;
goto _start;
}
}
else
{
lean_dec_ref(v_x2_1194_);
return v_b_1198_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lake_Workspace_leanSrcPath_spec__0___boxed(lean_object* v_x2_1217_, lean_object* v_as_1218_, lean_object* v_i_1219_, lean_object* v_stop_1220_, lean_object* v_b_1221_){
_start:
{
size_t v_i_boxed_1222_; size_t v_stop_boxed_1223_; lean_object* v_res_1224_; 
v_i_boxed_1222_ = lean_unbox_usize(v_i_1219_);
lean_dec(v_i_1219_);
v_stop_boxed_1223_ = lean_unbox_usize(v_stop_1220_);
lean_dec(v_stop_1220_);
v_res_1224_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lake_Workspace_leanSrcPath_spec__0(v_x2_1217_, v_as_1218_, v_i_boxed_1222_, v_stop_boxed_1223_, v_b_1221_);
lean_dec_ref(v_as_1218_);
return v_res_1224_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Workspace_leanSrcPath_spec__1(lean_object* v_as_1225_, size_t v_i_1226_, size_t v_stop_1227_, lean_object* v_b_1228_){
_start:
{
lean_object* v___y_1230_; uint8_t v___x_1234_; 
v___x_1234_ = lean_usize_dec_eq(v_i_1226_, v_stop_1227_);
if (v___x_1234_ == 0)
{
lean_object* v___x_1235_; lean_object* v_targetDecls_1236_; lean_object* v___x_1237_; lean_object* v___x_1238_; uint8_t v___x_1239_; 
v___x_1235_ = lean_array_uget_borrowed(v_as_1225_, v_i_1226_);
v_targetDecls_1236_ = lean_ctor_get(v___x_1235_, 15);
v___x_1237_ = lean_array_get_size(v_targetDecls_1236_);
v___x_1238_ = lean_unsigned_to_nat(0u);
v___x_1239_ = lean_nat_dec_lt(v___x_1238_, v___x_1237_);
if (v___x_1239_ == 0)
{
v___y_1230_ = v_b_1228_;
goto v___jp_1229_;
}
else
{
size_t v___x_1240_; size_t v___x_1241_; lean_object* v___x_1242_; 
v___x_1240_ = lean_usize_of_nat(v___x_1237_);
v___x_1241_ = ((size_t)0ULL);
lean_inc(v___x_1235_);
v___x_1242_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lake_Workspace_leanSrcPath_spec__0(v___x_1235_, v_targetDecls_1236_, v___x_1240_, v___x_1241_, v_b_1228_);
v___y_1230_ = v___x_1242_;
goto v___jp_1229_;
}
}
else
{
return v_b_1228_;
}
v___jp_1229_:
{
size_t v___x_1231_; size_t v___x_1232_; 
v___x_1231_ = ((size_t)1ULL);
v___x_1232_ = lean_usize_add(v_i_1226_, v___x_1231_);
v_i_1226_ = v___x_1232_;
v_b_1228_ = v___y_1230_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Workspace_leanSrcPath_spec__1___boxed(lean_object* v_as_1243_, lean_object* v_i_1244_, lean_object* v_stop_1245_, lean_object* v_b_1246_){
_start:
{
size_t v_i_boxed_1247_; size_t v_stop_boxed_1248_; lean_object* v_res_1249_; 
v_i_boxed_1247_ = lean_unbox_usize(v_i_1244_);
lean_dec(v_i_1244_);
v_stop_boxed_1248_ = lean_unbox_usize(v_stop_1245_);
lean_dec(v_stop_1245_);
v_res_1249_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Workspace_leanSrcPath_spec__1(v_as_1243_, v_i_boxed_1247_, v_stop_boxed_1248_, v_b_1246_);
lean_dec_ref(v_as_1243_);
return v_res_1249_;
}
}
LEAN_EXPORT lean_object* l_Lake_Workspace_leanSrcPath(lean_object* v_self_1250_){
_start:
{
lean_object* v_packages_1251_; lean_object* v___x_1252_; lean_object* v___x_1253_; lean_object* v___x_1254_; uint8_t v___x_1255_; 
v_packages_1251_ = lean_ctor_get(v_self_1250_, 4);
v___x_1252_ = lean_box(0);
v___x_1253_ = lean_unsigned_to_nat(0u);
v___x_1254_ = lean_array_get_size(v_packages_1251_);
v___x_1255_ = lean_nat_dec_lt(v___x_1253_, v___x_1254_);
if (v___x_1255_ == 0)
{
return v___x_1252_;
}
else
{
uint8_t v___x_1256_; 
v___x_1256_ = lean_nat_dec_le(v___x_1254_, v___x_1254_);
if (v___x_1256_ == 0)
{
if (v___x_1255_ == 0)
{
return v___x_1252_;
}
else
{
size_t v___x_1257_; size_t v___x_1258_; lean_object* v___x_1259_; 
v___x_1257_ = ((size_t)0ULL);
v___x_1258_ = lean_usize_of_nat(v___x_1254_);
v___x_1259_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Workspace_leanSrcPath_spec__1(v_packages_1251_, v___x_1257_, v___x_1258_, v___x_1252_);
return v___x_1259_;
}
}
else
{
size_t v___x_1260_; size_t v___x_1261_; lean_object* v___x_1262_; 
v___x_1260_ = ((size_t)0ULL);
v___x_1261_ = lean_usize_of_nat(v___x_1254_);
v___x_1262_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Workspace_leanSrcPath_spec__1(v_packages_1251_, v___x_1260_, v___x_1261_, v___x_1252_);
return v___x_1262_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Workspace_leanSrcPath___boxed(lean_object* v_self_1263_){
_start:
{
lean_object* v_res_1264_; 
v_res_1264_ = l_Lake_Workspace_leanSrcPath(v_self_1263_);
lean_dec_ref(v_self_1263_);
return v_res_1264_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lake_Workspace_sharedLibPath_spec__0(lean_object* v_as_1265_, size_t v_i_1266_, size_t v_stop_1267_, lean_object* v_b_1268_){
_start:
{
uint8_t v___x_1269_; 
v___x_1269_ = lean_usize_dec_eq(v_i_1266_, v_stop_1267_);
if (v___x_1269_ == 0)
{
size_t v___x_1270_; size_t v___x_1271_; lean_object* v___x_1272_; lean_object* v_config_1273_; lean_object* v_dir_1274_; lean_object* v_buildDir_1275_; lean_object* v_nativeLibDir_1276_; lean_object* v___x_1277_; lean_object* v___x_1278_; lean_object* v___x_1279_; lean_object* v___x_1280_; lean_object* v___x_1281_; 
v___x_1270_ = ((size_t)1ULL);
v___x_1271_ = lean_usize_sub(v_i_1266_, v___x_1270_);
v___x_1272_ = lean_array_uget_borrowed(v_as_1265_, v___x_1271_);
v_config_1273_ = lean_ctor_get(v___x_1272_, 6);
v_dir_1274_ = lean_ctor_get(v___x_1272_, 4);
v_buildDir_1275_ = lean_ctor_get(v_config_1273_, 5);
v_nativeLibDir_1276_ = lean_ctor_get(v_config_1273_, 7);
lean_inc_ref(v_buildDir_1275_);
v___x_1277_ = l_System_FilePath_normalize(v_buildDir_1275_);
lean_inc_ref(v_dir_1274_);
v___x_1278_ = l_Lake_joinRelative(v_dir_1274_, v___x_1277_);
lean_inc_ref(v_nativeLibDir_1276_);
v___x_1279_ = l_System_FilePath_normalize(v_nativeLibDir_1276_);
v___x_1280_ = l_Lake_joinRelative(v___x_1278_, v___x_1279_);
v___x_1281_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1281_, 0, v___x_1280_);
lean_ctor_set(v___x_1281_, 1, v_b_1268_);
v_i_1266_ = v___x_1271_;
v_b_1268_ = v___x_1281_;
goto _start;
}
else
{
return v_b_1268_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lake_Workspace_sharedLibPath_spec__0___boxed(lean_object* v_as_1283_, lean_object* v_i_1284_, lean_object* v_stop_1285_, lean_object* v_b_1286_){
_start:
{
size_t v_i_boxed_1287_; size_t v_stop_boxed_1288_; lean_object* v_res_1289_; 
v_i_boxed_1287_ = lean_unbox_usize(v_i_1284_);
lean_dec(v_i_1284_);
v_stop_boxed_1288_ = lean_unbox_usize(v_stop_1285_);
lean_dec(v_stop_1285_);
v_res_1289_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lake_Workspace_sharedLibPath_spec__0(v_as_1283_, v_i_boxed_1287_, v_stop_boxed_1288_, v_b_1286_);
lean_dec_ref(v_as_1283_);
return v_res_1289_;
}
}
LEAN_EXPORT lean_object* l_Lake_Workspace_sharedLibPath(lean_object* v_self_1290_){
_start:
{
lean_object* v_packages_1291_; lean_object* v___x_1292_; lean_object* v___x_1293_; lean_object* v___x_1294_; uint8_t v___x_1295_; 
v_packages_1291_ = lean_ctor_get(v_self_1290_, 4);
v___x_1292_ = lean_box(0);
v___x_1293_ = lean_array_get_size(v_packages_1291_);
v___x_1294_ = lean_unsigned_to_nat(0u);
v___x_1295_ = lean_nat_dec_lt(v___x_1294_, v___x_1293_);
if (v___x_1295_ == 0)
{
return v___x_1292_;
}
else
{
size_t v___x_1296_; size_t v___x_1297_; lean_object* v___x_1298_; 
v___x_1296_ = lean_usize_of_nat(v___x_1293_);
v___x_1297_ = ((size_t)0ULL);
v___x_1298_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lake_Workspace_sharedLibPath_spec__0(v_packages_1291_, v___x_1296_, v___x_1297_, v___x_1292_);
return v___x_1298_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_Workspace_sharedLibPath___boxed(lean_object* v_self_1299_){
_start:
{
lean_object* v_res_1300_; 
v_res_1300_ = l_Lake_Workspace_sharedLibPath(v_self_1299_);
lean_dec_ref(v_self_1299_);
return v_res_1300_;
}
}
LEAN_EXPORT lean_object* l_Lake_Workspace_augmentedPath(lean_object* v_self_1301_){
_start:
{
uint8_t v___x_1302_; 
v___x_1302_ = l_System_Platform_isWindows;
if (v___x_1302_ == 0)
{
lean_object* v_lakeEnv_1303_; lean_object* v___x_1304_; lean_object* v___x_1305_; lean_object* v___x_1306_; 
v_lakeEnv_1303_ = lean_ctor_get(v_self_1301_, 0);
v___x_1304_ = l_Lake_Workspace_binPath(v_self_1301_);
v___x_1305_ = l_Lake_Env_path(v_lakeEnv_1303_);
v___x_1306_ = l_List_appendTR___redArg(v___x_1304_, v___x_1305_);
return v___x_1306_;
}
else
{
lean_object* v_lakeEnv_1307_; lean_object* v___x_1308_; lean_object* v___x_1309_; lean_object* v___x_1310_; lean_object* v___x_1311_; lean_object* v___x_1312_; 
v_lakeEnv_1307_ = lean_ctor_get(v_self_1301_, 0);
v___x_1308_ = l_Lake_Workspace_binPath(v_self_1301_);
v___x_1309_ = l_Lake_Workspace_sharedLibPath(v_self_1301_);
v___x_1310_ = l_List_appendTR___redArg(v___x_1308_, v___x_1309_);
v___x_1311_ = l_Lake_Env_path(v_lakeEnv_1307_);
v___x_1312_ = l_List_appendTR___redArg(v___x_1310_, v___x_1311_);
return v___x_1312_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_Workspace_augmentedPath___boxed(lean_object* v_self_1313_){
_start:
{
lean_object* v_res_1314_; 
v_res_1314_ = l_Lake_Workspace_augmentedPath(v_self_1313_);
lean_dec_ref(v_self_1313_);
return v_res_1314_;
}
}
LEAN_EXPORT lean_object* l_Lake_Workspace_augmentedLeanPath(lean_object* v_self_1315_){
_start:
{
lean_object* v_lakeEnv_1316_; lean_object* v___x_1317_; lean_object* v___x_1318_; lean_object* v___x_1319_; 
v_lakeEnv_1316_ = lean_ctor_get(v_self_1315_, 0);
v___x_1317_ = l_Lake_Workspace_leanPath(v_self_1315_);
v___x_1318_ = l_Lake_Env_leanPath(v_lakeEnv_1316_);
v___x_1319_ = l_List_appendTR___redArg(v___x_1317_, v___x_1318_);
return v___x_1319_;
}
}
LEAN_EXPORT lean_object* l_Lake_Workspace_augmentedLeanPath___boxed(lean_object* v_self_1320_){
_start:
{
lean_object* v_res_1321_; 
v_res_1321_ = l_Lake_Workspace_augmentedLeanPath(v_self_1320_);
lean_dec_ref(v_self_1320_);
return v_res_1321_;
}
}
LEAN_EXPORT lean_object* l_Lake_Workspace_augmentedLeanSrcPath(lean_object* v_self_1322_){
_start:
{
lean_object* v_lakeEnv_1323_; lean_object* v___x_1324_; lean_object* v___x_1325_; lean_object* v___x_1326_; 
v_lakeEnv_1323_ = lean_ctor_get(v_self_1322_, 0);
v___x_1324_ = l_Lake_Workspace_leanSrcPath(v_self_1322_);
v___x_1325_ = l_Lake_Env_leanSrcPath(v_lakeEnv_1323_);
v___x_1326_ = l_List_appendTR___redArg(v___x_1324_, v___x_1325_);
return v___x_1326_;
}
}
LEAN_EXPORT lean_object* l_Lake_Workspace_augmentedLeanSrcPath___boxed(lean_object* v_self_1327_){
_start:
{
lean_object* v_res_1328_; 
v_res_1328_ = l_Lake_Workspace_augmentedLeanSrcPath(v_self_1327_);
lean_dec_ref(v_self_1327_);
return v_res_1328_;
}
}
LEAN_EXPORT lean_object* l_Lake_Workspace_augmentedSharedLibPath(lean_object* v_self_1329_){
_start:
{
lean_object* v_lakeEnv_1330_; lean_object* v_lean_1331_; lean_object* v_initSharedLibPath_1332_; lean_object* v___x_1333_; lean_object* v___x_1334_; lean_object* v___x_1335_; lean_object* v___x_1336_; 
v_lakeEnv_1330_ = lean_ctor_get(v_self_1329_, 0);
v_lean_1331_ = lean_ctor_get(v_lakeEnv_1330_, 1);
v_initSharedLibPath_1332_ = lean_ctor_get(v_lakeEnv_1330_, 17);
lean_inc(v_initSharedLibPath_1332_);
v___x_1333_ = l_Lake_LeanInstall_sharedLibPath(v_lean_1331_);
v___x_1334_ = l_Lake_Workspace_sharedLibPath(v_self_1329_);
lean_dec_ref(v_self_1329_);
v___x_1335_ = l_List_appendTR___redArg(v___x_1333_, v___x_1334_);
v___x_1336_ = l_List_appendTR___redArg(v___x_1335_, v_initSharedLibPath_1332_);
return v___x_1336_;
}
}
LEAN_EXPORT lean_object* l_Lake_Workspace_augmentedEnvVars___lam__0(lean_object* v_x_1340_){
_start:
{
lean_object* v___x_1341_; 
v___x_1341_ = ((lean_object*)(l_Lake_Workspace_augmentedEnvVars___lam__0___closed__1));
return v___x_1341_;
}
}
LEAN_EXPORT lean_object* l_Lake_Workspace_augmentedEnvVars___lam__0___boxed(lean_object* v_x_1342_){
_start:
{
lean_object* v_res_1343_; 
v_res_1343_ = l_Lake_Workspace_augmentedEnvVars___lam__0(v_x_1342_);
lean_dec(v_x_1342_);
return v_res_1343_;
}
}
LEAN_EXPORT lean_object* l_Lake_Workspace_augmentedEnvVars___lam__1(uint8_t v_b_1350_){
_start:
{
if (v_b_1350_ == 0)
{
lean_object* v___x_1351_; 
v___x_1351_ = ((lean_object*)(l_Lake_Workspace_augmentedEnvVars___lam__1___closed__1));
return v___x_1351_;
}
else
{
lean_object* v___x_1352_; 
v___x_1352_ = ((lean_object*)(l_Lake_Workspace_augmentedEnvVars___lam__1___closed__3));
return v___x_1352_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_Workspace_augmentedEnvVars___lam__1___boxed(lean_object* v_b_1353_){
_start:
{
uint8_t v_b_boxed_1354_; lean_object* v_res_1355_; 
v_b_boxed_1354_ = lean_unbox(v_b_1353_);
v_res_1355_ = l_Lake_Workspace_augmentedEnvVars___lam__1(v_b_boxed_1354_);
return v_res_1355_;
}
}
LEAN_EXPORT lean_object* l_Lake_Workspace_augmentedEnvVars(lean_object* v_self_1363_){
_start:
{
lean_object* v_lakeEnv_1364_; lean_object* v_lakeCache_1365_; lean_object* v_packages_1366_; lean_object* v_enableArtifactCache_x3f_1367_; lean_object* v_restoreAllArtifacts_x3f_1368_; lean_object* v___x_1369_; lean_object* v___x_1370_; lean_object* v___x_1371_; lean_object* v___x_1372_; lean_object* v___y_1374_; lean_object* v___y_1375_; lean_object* v___y_1376_; lean_object* v___y_1377_; lean_object* v___y_1378_; lean_object* v___y_1379_; lean_object* v___y_1404_; lean_object* v___y_1405_; lean_object* v___y_1406_; lean_object* v___y_1427_; lean_object* v___y_1428_; uint8_t v_val_1429_; lean_object* v___x_1431_; lean_object* v___y_1433_; uint8_t v_val_1446_; 
v_lakeEnv_1364_ = lean_ctor_get(v_self_1363_, 0);
v_lakeCache_1365_ = lean_ctor_get(v_self_1363_, 2);
v_packages_1366_ = lean_ctor_get(v_self_1363_, 4);
v_enableArtifactCache_x3f_1367_ = lean_ctor_get(v_lakeEnv_1364_, 6);
v_restoreAllArtifacts_x3f_1368_ = lean_ctor_get(v_lakeEnv_1364_, 7);
lean_inc_ref(v_lakeEnv_1364_);
v___x_1369_ = l_Lake_Env_baseVars(v_lakeEnv_1364_);
v___x_1370_ = ((lean_object*)(l_Lake_Workspace_augmentedEnvVars___closed__0));
lean_inc_ref(v_lakeCache_1365_);
v___x_1371_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1371_, 0, v_lakeCache_1365_);
v___x_1372_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1372_, 0, v___x_1370_);
lean_ctor_set(v___x_1372_, 1, v___x_1371_);
v___x_1431_ = ((lean_object*)(l_Lake_Workspace_augmentedEnvVars___closed__5));
if (lean_obj_tag(v_enableArtifactCache_x3f_1367_) == 0)
{
lean_object* v___x_1448_; lean_object* v___x_1449_; lean_object* v_config_1450_; lean_object* v_enableArtifactCache_x3f_1451_; 
v___x_1448_ = lean_unsigned_to_nat(0u);
v___x_1449_ = lean_array_fget_borrowed(v_packages_1366_, v___x_1448_);
v_config_1450_ = lean_ctor_get(v___x_1449_, 6);
v_enableArtifactCache_x3f_1451_ = lean_ctor_get(v_config_1450_, 24);
if (lean_obj_tag(v_enableArtifactCache_x3f_1451_) == 1)
{
lean_object* v_val_1452_; uint8_t v___x_1453_; 
v_val_1452_ = lean_ctor_get(v_enableArtifactCache_x3f_1451_, 0);
v___x_1453_ = lean_unbox(v_val_1452_);
v_val_1446_ = v___x_1453_;
goto v___jp_1445_;
}
else
{
lean_object* v___x_1454_; 
v___x_1454_ = l_Lake_Workspace_augmentedEnvVars___lam__0(v_enableArtifactCache_x3f_1451_);
v___y_1433_ = v___x_1454_;
goto v___jp_1432_;
}
}
else
{
lean_object* v_val_1455_; uint8_t v___x_1456_; 
v_val_1455_ = lean_ctor_get(v_enableArtifactCache_x3f_1367_, 0);
v___x_1456_ = lean_unbox(v_val_1455_);
v_val_1446_ = v___x_1456_;
goto v___jp_1445_;
}
v___jp_1373_:
{
lean_object* v___x_1380_; lean_object* v___x_1381_; lean_object* v___x_1382_; lean_object* v___x_1383_; lean_object* v___x_1384_; lean_object* v___x_1385_; lean_object* v___x_1386_; lean_object* v___x_1387_; lean_object* v___x_1388_; lean_object* v___x_1389_; lean_object* v___x_1390_; lean_object* v___x_1391_; lean_object* v___x_1392_; lean_object* v___x_1393_; lean_object* v___x_1394_; lean_object* v_vars_1395_; uint8_t v___x_1396_; 
lean_inc_ref(v___y_1376_);
v___x_1380_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1380_, 0, v___y_1376_);
lean_ctor_set(v___x_1380_, 1, v___y_1379_);
v___x_1381_ = ((lean_object*)(l_Lake_Workspace_augmentedEnvVars___closed__1));
v___x_1382_ = l_Lake_Workspace_augmentedPath(v_self_1363_);
v___x_1383_ = l_System_SearchPath_toString(v___x_1382_);
v___x_1384_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1384_, 0, v___x_1383_);
v___x_1385_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1385_, 0, v___x_1381_);
lean_ctor_set(v___x_1385_, 1, v___x_1384_);
v___x_1386_ = lean_unsigned_to_nat(7u);
v___x_1387_ = lean_mk_empty_array_with_capacity(v___x_1386_);
v___x_1388_ = lean_array_push(v___x_1387_, v___x_1372_);
v___x_1389_ = lean_array_push(v___x_1388_, v___y_1377_);
v___x_1390_ = lean_array_push(v___x_1389_, v___y_1378_);
v___x_1391_ = lean_array_push(v___x_1390_, v___y_1374_);
v___x_1392_ = lean_array_push(v___x_1391_, v___y_1375_);
v___x_1393_ = lean_array_push(v___x_1392_, v___x_1380_);
v___x_1394_ = lean_array_push(v___x_1393_, v___x_1385_);
v_vars_1395_ = l_Array_append___redArg(v___x_1369_, v___x_1394_);
lean_dec_ref(v___x_1394_);
v___x_1396_ = l_System_Platform_isWindows;
if (v___x_1396_ == 0)
{
lean_object* v___x_1397_; lean_object* v___x_1398_; lean_object* v___x_1399_; lean_object* v___x_1400_; lean_object* v___x_1401_; lean_object* v___x_1402_; 
v___x_1397_ = l_Lake_sharedLibPathEnvVar;
v___x_1398_ = l_Lake_Workspace_augmentedSharedLibPath(v_self_1363_);
v___x_1399_ = l_System_SearchPath_toString(v___x_1398_);
v___x_1400_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1400_, 0, v___x_1399_);
v___x_1401_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1401_, 0, v___x_1397_);
lean_ctor_set(v___x_1401_, 1, v___x_1400_);
v___x_1402_ = lean_array_push(v_vars_1395_, v___x_1401_);
return v___x_1402_;
}
else
{
lean_dec_ref(v_self_1363_);
return v_vars_1395_;
}
}
v___jp_1403_:
{
lean_object* v___x_1407_; lean_object* v___x_1408_; lean_object* v_config_1409_; uint8_t v_bootstrap_1410_; lean_object* v___x_1411_; lean_object* v___x_1412_; lean_object* v___x_1413_; lean_object* v___x_1414_; lean_object* v___x_1415_; lean_object* v___x_1416_; lean_object* v___x_1417_; lean_object* v___x_1418_; lean_object* v___x_1419_; lean_object* v___x_1420_; lean_object* v___x_1421_; lean_object* v___x_1422_; 
v___x_1407_ = lean_unsigned_to_nat(0u);
v___x_1408_ = lean_array_fget_borrowed(v_packages_1366_, v___x_1407_);
v_config_1409_ = lean_ctor_get(v___x_1408_, 6);
v_bootstrap_1410_ = lean_ctor_get_uint8(v_config_1409_, sizeof(void*)*28);
lean_inc_ref(v___y_1405_);
v___x_1411_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1411_, 0, v___y_1405_);
lean_ctor_set(v___x_1411_, 1, v___y_1406_);
v___x_1412_ = ((lean_object*)(l_Lake_Workspace_augmentedEnvVars___closed__2));
v___x_1413_ = l_Lake_Workspace_augmentedLeanPath(v_self_1363_);
v___x_1414_ = l_System_SearchPath_toString(v___x_1413_);
v___x_1415_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1415_, 0, v___x_1414_);
v___x_1416_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1416_, 0, v___x_1412_);
lean_ctor_set(v___x_1416_, 1, v___x_1415_);
v___x_1417_ = ((lean_object*)(l_Lake_Workspace_augmentedEnvVars___closed__3));
v___x_1418_ = l_Lake_Workspace_augmentedLeanSrcPath(v_self_1363_);
v___x_1419_ = l_System_SearchPath_toString(v___x_1418_);
v___x_1420_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1420_, 0, v___x_1419_);
v___x_1421_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1421_, 0, v___x_1417_);
lean_ctor_set(v___x_1421_, 1, v___x_1420_);
v___x_1422_ = ((lean_object*)(l_Lake_Workspace_augmentedEnvVars___closed__4));
if (v_bootstrap_1410_ == 0)
{
lean_object* v___x_1423_; lean_object* v___x_1424_; 
v___x_1423_ = l_Lake_Env_leanGithash(v_lakeEnv_1364_);
v___x_1424_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1424_, 0, v___x_1423_);
v___y_1374_ = v___x_1416_;
v___y_1375_ = v___x_1421_;
v___y_1376_ = v___x_1422_;
v___y_1377_ = v___y_1404_;
v___y_1378_ = v___x_1411_;
v___y_1379_ = v___x_1424_;
goto v___jp_1373_;
}
else
{
lean_object* v___x_1425_; 
v___x_1425_ = lean_box(0);
v___y_1374_ = v___x_1416_;
v___y_1375_ = v___x_1421_;
v___y_1376_ = v___x_1422_;
v___y_1377_ = v___y_1404_;
v___y_1378_ = v___x_1411_;
v___y_1379_ = v___x_1425_;
goto v___jp_1373_;
}
}
v___jp_1426_:
{
lean_object* v___x_1430_; 
v___x_1430_ = l_Lake_Workspace_augmentedEnvVars___lam__1(v_val_1429_);
v___y_1404_ = v___y_1427_;
v___y_1405_ = v___y_1428_;
v___y_1406_ = v___x_1430_;
goto v___jp_1403_;
}
v___jp_1432_:
{
lean_object* v___x_1434_; lean_object* v___x_1435_; 
v___x_1434_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1434_, 0, v___x_1431_);
lean_ctor_set(v___x_1434_, 1, v___y_1433_);
v___x_1435_ = ((lean_object*)(l_Lake_Workspace_augmentedEnvVars___closed__6));
if (lean_obj_tag(v_restoreAllArtifacts_x3f_1368_) == 0)
{
lean_object* v___x_1436_; lean_object* v___x_1437_; lean_object* v_config_1438_; lean_object* v_restoreAllArtifacts_x3f_1439_; 
v___x_1436_ = lean_unsigned_to_nat(0u);
v___x_1437_ = lean_array_fget_borrowed(v_packages_1366_, v___x_1436_);
v_config_1438_ = lean_ctor_get(v___x_1437_, 6);
v_restoreAllArtifacts_x3f_1439_ = lean_ctor_get(v_config_1438_, 25);
if (lean_obj_tag(v_restoreAllArtifacts_x3f_1439_) == 1)
{
lean_object* v_val_1440_; uint8_t v___x_1441_; 
v_val_1440_ = lean_ctor_get(v_restoreAllArtifacts_x3f_1439_, 0);
v___x_1441_ = lean_unbox(v_val_1440_);
v___y_1427_ = v___x_1434_;
v___y_1428_ = v___x_1435_;
v_val_1429_ = v___x_1441_;
goto v___jp_1426_;
}
else
{
lean_object* v___x_1442_; 
v___x_1442_ = l_Lake_Workspace_augmentedEnvVars___lam__0(v_restoreAllArtifacts_x3f_1439_);
v___y_1404_ = v___x_1434_;
v___y_1405_ = v___x_1435_;
v___y_1406_ = v___x_1442_;
goto v___jp_1403_;
}
}
else
{
lean_object* v_val_1443_; uint8_t v___x_1444_; 
v_val_1443_ = lean_ctor_get(v_restoreAllArtifacts_x3f_1368_, 0);
v___x_1444_ = lean_unbox(v_val_1443_);
v___y_1427_ = v___x_1434_;
v___y_1428_ = v___x_1435_;
v_val_1429_ = v___x_1444_;
goto v___jp_1426_;
}
}
v___jp_1445_:
{
lean_object* v___x_1447_; 
v___x_1447_ = l_Lake_Workspace_augmentedEnvVars___lam__1(v_val_1446_);
v___y_1433_ = v___x_1447_;
goto v___jp_1432_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Workspace_clean_spec__0(lean_object* v_as_1457_, size_t v_i_1458_, size_t v_stop_1459_, lean_object* v_b_1460_){
_start:
{
uint8_t v___x_1462_; 
v___x_1462_ = lean_usize_dec_eq(v_i_1458_, v_stop_1459_);
if (v___x_1462_ == 0)
{
lean_object* v___x_1463_; lean_object* v___x_1464_; 
v___x_1463_ = lean_array_uget_borrowed(v_as_1457_, v_i_1458_);
lean_inc(v___x_1463_);
v___x_1464_ = l_Lake_Package_clean(v___x_1463_);
if (lean_obj_tag(v___x_1464_) == 0)
{
lean_object* v_a_1465_; size_t v___x_1466_; size_t v___x_1467_; 
v_a_1465_ = lean_ctor_get(v___x_1464_, 0);
lean_inc(v_a_1465_);
lean_dec_ref_known(v___x_1464_, 1);
v___x_1466_ = ((size_t)1ULL);
v___x_1467_ = lean_usize_add(v_i_1458_, v___x_1466_);
v_i_1458_ = v___x_1467_;
v_b_1460_ = v_a_1465_;
goto _start;
}
else
{
return v___x_1464_;
}
}
else
{
lean_object* v___x_1469_; 
v___x_1469_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1469_, 0, v_b_1460_);
return v___x_1469_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Workspace_clean_spec__0___boxed(lean_object* v_as_1470_, lean_object* v_i_1471_, lean_object* v_stop_1472_, lean_object* v_b_1473_, lean_object* v___y_1474_){
_start:
{
size_t v_i_boxed_1475_; size_t v_stop_boxed_1476_; lean_object* v_res_1477_; 
v_i_boxed_1475_ = lean_unbox_usize(v_i_1471_);
lean_dec(v_i_1471_);
v_stop_boxed_1476_ = lean_unbox_usize(v_stop_1472_);
lean_dec(v_stop_1472_);
v_res_1477_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Workspace_clean_spec__0(v_as_1470_, v_i_boxed_1475_, v_stop_boxed_1476_, v_b_1473_);
lean_dec_ref(v_as_1470_);
return v_res_1477_;
}
}
LEAN_EXPORT lean_object* l_Lake_Workspace_clean(lean_object* v_self_1478_){
_start:
{
lean_object* v_packages_1480_; lean_object* v___x_1481_; lean_object* v___x_1482_; lean_object* v___x_1483_; uint8_t v___x_1484_; 
v_packages_1480_ = lean_ctor_get(v_self_1478_, 4);
v___x_1481_ = lean_unsigned_to_nat(0u);
v___x_1482_ = lean_array_get_size(v_packages_1480_);
v___x_1483_ = lean_box(0);
v___x_1484_ = lean_nat_dec_lt(v___x_1481_, v___x_1482_);
if (v___x_1484_ == 0)
{
lean_object* v___x_1485_; 
v___x_1485_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1485_, 0, v___x_1483_);
return v___x_1485_;
}
else
{
uint8_t v___x_1486_; 
v___x_1486_ = lean_nat_dec_le(v___x_1482_, v___x_1482_);
if (v___x_1486_ == 0)
{
if (v___x_1484_ == 0)
{
lean_object* v___x_1487_; 
v___x_1487_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1487_, 0, v___x_1483_);
return v___x_1487_;
}
else
{
size_t v___x_1488_; size_t v___x_1489_; lean_object* v___x_1490_; 
v___x_1488_ = ((size_t)0ULL);
v___x_1489_ = lean_usize_of_nat(v___x_1482_);
v___x_1490_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Workspace_clean_spec__0(v_packages_1480_, v___x_1488_, v___x_1489_, v___x_1483_);
return v___x_1490_;
}
}
else
{
size_t v___x_1491_; size_t v___x_1492_; lean_object* v___x_1493_; 
v___x_1491_ = ((size_t)0ULL);
v___x_1492_ = lean_usize_of_nat(v___x_1482_);
v___x_1493_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Workspace_clean_spec__0(v_packages_1480_, v___x_1491_, v___x_1492_, v___x_1483_);
return v___x_1493_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Workspace_clean___boxed(lean_object* v_self_1494_, lean_object* v_a_1495_){
_start:
{
lean_object* v_res_1496_; 
v_res_1496_ = l_Lake_Workspace_clean(v_self_1494_);
lean_dec_ref(v_self_1494_);
return v_res_1496_;
}
}
lean_object* runtime_initialize_Lake_Config_Env(uint8_t builtin);
lean_object* runtime_initialize_Lake_Config_LeanExe(uint8_t builtin);
lean_object* runtime_initialize_Lake_Config_ExternLib(uint8_t builtin);
lean_object* runtime_initialize_Lake_Config_FacetConfig(uint8_t builtin);
lean_object* runtime_initialize_Lake_Config_TargetConfig(uint8_t builtin);
lean_object* runtime_initialize_Lake_Config_LakeConfig(uint8_t builtin);
lean_object* runtime_initialize_Lean_DocString_Syntax(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Range_Polymorphic_Iterators(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Range_Polymorphic_Lemmas(uint8_t builtin);
void lean_initialize();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lake_Config_Workspace(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize();
res = runtime_initialize_Lake_Config_Env(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Config_LeanExe(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Config_ExternLib(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Config_FacetConfig(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Config_TargetConfig(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Config_LakeConfig(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_DocString_Syntax(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Range_Polymorphic_Iterators(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Range_Polymorphic_Lemmas(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* runtime_initialize_Lake_Util_OpaqueType(uint8_t builtin);
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lake_Config_Workspace(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
res = runtime_initialize_Lake_Util_OpaqueType(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lake_Config_Env(uint8_t builtin);
lean_object* initialize_Lake_Config_LeanExe(uint8_t builtin);
lean_object* initialize_Lake_Config_ExternLib(uint8_t builtin);
lean_object* initialize_Lake_Config_FacetConfig(uint8_t builtin);
lean_object* initialize_Lake_Config_TargetConfig(uint8_t builtin);
lean_object* initialize_Lake_Config_LakeConfig(uint8_t builtin);
lean_object* initialize_Lake_Util_OpaqueType(uint8_t builtin);
lean_object* initialize_Lean_DocString_Syntax(uint8_t builtin);
lean_object* initialize_Init_Data_Range_Polymorphic_Iterators(uint8_t builtin);
lean_object* initialize_Init_Data_Range_Polymorphic_Lemmas(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lake_Config_Workspace(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lake_Config_Env(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Config_LeanExe(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Config_ExternLib(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Config_FacetConfig(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Config_TargetConfig(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Config_LakeConfig(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Util_OpaqueType(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_DocString_Syntax(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Range_Polymorphic_Iterators(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Range_Polymorphic_Lemmas(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Config_Workspace(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lake_Config_Workspace(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lake_Config_Workspace(builtin);
}
#ifdef __cplusplus
}
#endif

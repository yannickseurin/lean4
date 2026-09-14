// Lean compiler output
// Module: Lake.Config.Monad
// Imports: public import Lake.Config.Workspace
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
lean_object* l_Lake_Workspace_findLeanLib_x3f(lean_object*, lean_object*);
lean_object* l_Lake_Workspace_findModuleBySrc_x3f(lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Lake_Workspace_findExternLib_x3f(lean_object*, lean_object*);
lean_object* l_Lake_Workspace_findLeanExe_x3f(lean_object*, lean_object*);
lean_object* l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl___boxed(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* l_Lean_LeanOptions_ofArray(lean_object*);
lean_object* l_Id_instMonad___lam__2___boxed(lean_object*, lean_object*);
lean_object* l_Lean_LeanOptions_appendArray(lean_object*, lean_object*);
lean_object* l_Lake_Workspace_findModule_x3f(lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_get_x3f___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lake_Workspace_leanSrcPath___boxed(lean_object*);
lean_object* l_Lake_LeanInstall_leanCc_x3f___boxed(lean_object*);
lean_object* l_Id_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lake_Workspace_augmentedSharedLibPath(lean_object*);
lean_object* l_Id_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lake_Workspace_augmentedEnvVars(lean_object*);
lean_object* l_Lake_Env_sharedLibPath(lean_object*);
lean_object* l_unsafeCast___redArg___boxed(lean_object*);
lean_object* l_Lake_Cache_getArtifact_x3f___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lake_Workspace_augmentedLeanPath___boxed(lean_object*);
lean_object* l_Lake_Env_leanSrcPath___boxed(lean_object*);
lean_object* l_Lake_Env_leanPath___boxed(lean_object*);
lean_object* l_Lake_Workspace_findModules(lean_object*, lean_object*);
lean_object* l_Lake_Workspace_sharedLibPath___boxed(lean_object*);
lean_object* l_Lake_Workspace_augmentedLeanSrcPath___boxed(lean_object*);
lean_object* l_Id_instMonad___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lake_Workspace_leanPath___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_LakeEnvT_run___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LakeEnvT_run(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instMonadWorkspaceOfMonadReaderOfWorkspace___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_instMonadWorkspaceOfMonadReaderOfWorkspace___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_instMonadWorkspaceOfMonadReaderOfWorkspace(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instMonadWorkspaceOfMonadReaderOfWorkspace___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instMonadWorkspaceOfMonadStateOfWorkspace___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_instMonadWorkspaceOfMonadStateOfWorkspace___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_instMonadWorkspaceOfMonadStateOfWorkspace(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instMonadWorkspaceOfMonadStateOfWorkspace___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_mkLakeContext(lean_object*);
LEAN_EXPORT lean_object* l_Lake_mkLakeContext___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Workspace_runLakeT___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Workspace_runLakeT___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Workspace_runLakeT(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Workspace_runLakeT___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lake_instMonadLakeOfMonadWorkspaceOfFunctor___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_unsafeCast___redArg___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_instMonadLakeOfMonadWorkspaceOfFunctor___redArg___closed__0 = (const lean_object*)&l_Lake_instMonadLakeOfMonadWorkspaceOfFunctor___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_instMonadLakeOfMonadWorkspaceOfFunctor___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instMonadLakeOfMonadWorkspaceOfFunctor(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Context_workspace(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Context_workspace___boxed(lean_object*);
static const lean_closure_object l_Lake_instMonadWorkspaceOfMonadLakeOfFunctor___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_unsafeCast___redArg___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_instMonadWorkspaceOfMonadLakeOfFunctor___redArg___closed__0 = (const lean_object*)&l_Lake_instMonadWorkspaceOfMonadLakeOfFunctor___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_instMonadWorkspaceOfMonadLakeOfFunctor___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instMonadWorkspaceOfMonadLakeOfFunctor(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instMonadLakeEnvOfMonadWorkspaceOfFunctor___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lake_instMonadLakeEnvOfMonadWorkspaceOfFunctor___redArg___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lake_instMonadLakeEnvOfMonadWorkspaceOfFunctor___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_instMonadLakeEnvOfMonadWorkspaceOfFunctor___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_instMonadLakeEnvOfMonadWorkspaceOfFunctor___redArg___closed__0 = (const lean_object*)&l_Lake_instMonadLakeEnvOfMonadWorkspaceOfFunctor___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_instMonadLakeEnvOfMonadWorkspaceOfFunctor___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instMonadLakeEnvOfMonadWorkspaceOfFunctor(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_getRootPackage___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lake_getRootPackage___redArg___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lake_getRootPackage___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_getRootPackage___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_getRootPackage___redArg___closed__0 = (const lean_object*)&l_Lake_getRootPackage___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_getRootPackage___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_getRootPackage(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lake_findPackageByKey_x3f___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_findPackageByKey_x3f___redArg___lam__0___closed__0 = (const lean_object*)&l_Lake_findPackageByKey_x3f___redArg___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_findPackageByKey_x3f___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_findPackageByKey_x3f___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_findPackageByKey_x3f(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_findPackageByName_x3f___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_findPackageByName_x3f___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lake_findPackageByName_x3f___redArg___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_findPackageByName_x3f___redArg___lam__1___closed__0 = (const lean_object*)&l_Lake_findPackageByName_x3f___redArg___lam__1___closed__0_value;
static const lean_closure_object l_Lake_findPackageByName_x3f___redArg___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_findPackageByName_x3f___redArg___lam__1___closed__1 = (const lean_object*)&l_Lake_findPackageByName_x3f___redArg___lam__1___closed__1_value;
static const lean_closure_object l_Lake_findPackageByName_x3f___redArg___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_findPackageByName_x3f___redArg___lam__1___closed__2 = (const lean_object*)&l_Lake_findPackageByName_x3f___redArg___lam__1___closed__2_value;
static const lean_closure_object l_Lake_findPackageByName_x3f___redArg___lam__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__3, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_findPackageByName_x3f___redArg___lam__1___closed__3 = (const lean_object*)&l_Lake_findPackageByName_x3f___redArg___lam__1___closed__3_value;
static const lean_closure_object l_Lake_findPackageByName_x3f___redArg___lam__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__4___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_findPackageByName_x3f___redArg___lam__1___closed__4 = (const lean_object*)&l_Lake_findPackageByName_x3f___redArg___lam__1___closed__4_value;
static const lean_closure_object l_Lake_findPackageByName_x3f___redArg___lam__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__5___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_findPackageByName_x3f___redArg___lam__1___closed__5 = (const lean_object*)&l_Lake_findPackageByName_x3f___redArg___lam__1___closed__5_value;
static const lean_closure_object l_Lake_findPackageByName_x3f___redArg___lam__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__6, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_findPackageByName_x3f___redArg___lam__1___closed__6 = (const lean_object*)&l_Lake_findPackageByName_x3f___redArg___lam__1___closed__6_value;
static const lean_ctor_object l_Lake_findPackageByName_x3f___redArg___lam__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_findPackageByName_x3f___redArg___lam__1___closed__0_value),((lean_object*)&l_Lake_findPackageByName_x3f___redArg___lam__1___closed__1_value)}};
static const lean_object* l_Lake_findPackageByName_x3f___redArg___lam__1___closed__7 = (const lean_object*)&l_Lake_findPackageByName_x3f___redArg___lam__1___closed__7_value;
static const lean_ctor_object l_Lake_findPackageByName_x3f___redArg___lam__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_findPackageByName_x3f___redArg___lam__1___closed__7_value),((lean_object*)&l_Lake_findPackageByName_x3f___redArg___lam__1___closed__2_value),((lean_object*)&l_Lake_findPackageByName_x3f___redArg___lam__1___closed__3_value),((lean_object*)&l_Lake_findPackageByName_x3f___redArg___lam__1___closed__4_value),((lean_object*)&l_Lake_findPackageByName_x3f___redArg___lam__1___closed__5_value)}};
static const lean_object* l_Lake_findPackageByName_x3f___redArg___lam__1___closed__8 = (const lean_object*)&l_Lake_findPackageByName_x3f___redArg___lam__1___closed__8_value;
static const lean_ctor_object l_Lake_findPackageByName_x3f___redArg___lam__1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_findPackageByName_x3f___redArg___lam__1___closed__8_value),((lean_object*)&l_Lake_findPackageByName_x3f___redArg___lam__1___closed__6_value)}};
static const lean_object* l_Lake_findPackageByName_x3f___redArg___lam__1___closed__9 = (const lean_object*)&l_Lake_findPackageByName_x3f___redArg___lam__1___closed__9_value;
static const lean_ctor_object l_Lake_findPackageByName_x3f___redArg___lam__1___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lake_findPackageByName_x3f___redArg___lam__1___closed__10 = (const lean_object*)&l_Lake_findPackageByName_x3f___redArg___lam__1___closed__10_value;
LEAN_EXPORT lean_object* l_Lake_findPackageByName_x3f___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_findPackageByName_x3f___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_findPackageByName_x3f(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_findPackage_x3f___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_findPackage_x3f___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_findPackage_x3f(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_findModule_x3f___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_findModule_x3f___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_findModule_x3f___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_findModule_x3f(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_findModules___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_findModules___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_findModules___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_findModules(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_findModuleBySrc_x3f___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_findModuleBySrc_x3f___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_findModuleBySrc_x3f___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_findModuleBySrc_x3f(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_findLeanExe_x3f___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_findLeanExe_x3f___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_findLeanExe_x3f___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_findLeanExe_x3f(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_findLeanLib_x3f___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_findLeanLib_x3f___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_findLeanLib_x3f___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_findLeanLib_x3f(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_findExternLib_x3f___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_findExternLib_x3f___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_findExternLib_x3f___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_findExternLib_x3f(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_getServerOptions___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lake_getServerOptions___redArg___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lake_getServerOptions___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_getServerOptions___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_getServerOptions___redArg___closed__0 = (const lean_object*)&l_Lake_getServerOptions___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_getServerOptions___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_getServerOptions(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_getLeanOptions___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lake_getLeanOptions___redArg___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lake_getLeanOptions___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_getLeanOptions___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_getLeanOptions___redArg___closed__0 = (const lean_object*)&l_Lake_getLeanOptions___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_getLeanOptions___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_getLeanOptions(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_getLeanArgs___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lake_getLeanArgs___redArg___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lake_getLeanArgs___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_getLeanArgs___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_getLeanArgs___redArg___closed__0 = (const lean_object*)&l_Lake_getLeanArgs___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_getLeanArgs___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_getLeanArgs(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lake_getLeanPath___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_Workspace_leanPath___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_getLeanPath___redArg___closed__0 = (const lean_object*)&l_Lake_getLeanPath___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_getLeanPath___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_getLeanPath(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lake_getLeanSrcPath___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_Workspace_leanSrcPath___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_getLeanSrcPath___redArg___closed__0 = (const lean_object*)&l_Lake_getLeanSrcPath___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_getLeanSrcPath___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_getLeanSrcPath(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lake_getSharedLibPath___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_Workspace_sharedLibPath___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_getSharedLibPath___redArg___closed__0 = (const lean_object*)&l_Lake_getSharedLibPath___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_getSharedLibPath___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_getSharedLibPath(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lake_getAugmentedLeanPath___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_Workspace_augmentedLeanPath___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_getAugmentedLeanPath___redArg___closed__0 = (const lean_object*)&l_Lake_getAugmentedLeanPath___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_getAugmentedLeanPath___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_getAugmentedLeanPath(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lake_getAugmentedLeanSrcPath___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_Workspace_augmentedLeanSrcPath___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_getAugmentedLeanSrcPath___redArg___closed__0 = (const lean_object*)&l_Lake_getAugmentedLeanSrcPath___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_getAugmentedLeanSrcPath___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_getAugmentedLeanSrcPath(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lake_getAugmentedSharedLibPath___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_Workspace_augmentedSharedLibPath, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_getAugmentedSharedLibPath___redArg___closed__0 = (const lean_object*)&l_Lake_getAugmentedSharedLibPath___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_getAugmentedSharedLibPath___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_getAugmentedSharedLibPath(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lake_getAugmentedEnv___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_Workspace_augmentedEnvVars, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_getAugmentedEnv___redArg___closed__0 = (const lean_object*)&l_Lake_getAugmentedEnv___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_getAugmentedEnv___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_getAugmentedEnv(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_getLakeCache___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lake_getLakeCache___redArg___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lake_getLakeCache___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_getLakeCache___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_getLakeCache___redArg___closed__0 = (const lean_object*)&l_Lake_getLakeCache___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_getLakeCache___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_getLakeCache(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_getArtifact_x3f___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_getArtifact_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_getArtifact_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lake_Package_restoreAllArtifacts___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Package_restoreAllArtifacts___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Package_restoreAllArtifacts___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Package_restoreAllArtifacts(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lake_Package_isArtifactCacheReadable___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Package_isArtifactCacheReadable___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Package_isArtifactCacheReadable___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Package_isArtifactCacheReadable(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lake_Package_isArtifactCacheWritable___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Package_isArtifactCacheWritable___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Package_isArtifactCacheWritable___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Package_isArtifactCacheWritable(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Package_isArtifactCacheEnabled___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Package_isArtifactCacheEnabled(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_getLakeEnv___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_getLakeEnv___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_getLakeEnv(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_getLakeEnv___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lake_getNoCache___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lake_getNoCache___redArg___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lake_getNoCache___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_getNoCache___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_getNoCache___redArg___closed__0 = (const lean_object*)&l_Lake_getNoCache___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_getNoCache___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_getNoCache(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_getNoCache___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lake_getTryCache___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lake_getTryCache___redArg___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lake_getTryCache___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_getTryCache___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_getTryCache___redArg___closed__0 = (const lean_object*)&l_Lake_getTryCache___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_getTryCache___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_getTryCache(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_getTryCache___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_getPkgUrlMap___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lake_getPkgUrlMap___redArg___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lake_getPkgUrlMap___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_getPkgUrlMap___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_getPkgUrlMap___redArg___closed__0 = (const lean_object*)&l_Lake_getPkgUrlMap___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_getPkgUrlMap___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_getPkgUrlMap(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_getElanToolchain___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lake_getElanToolchain___redArg___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lake_getElanToolchain___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_getElanToolchain___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_getElanToolchain___redArg___closed__0 = (const lean_object*)&l_Lake_getElanToolchain___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_getElanToolchain___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_getElanToolchain(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lake_getEnvLeanPath___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_Env_leanPath___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_getEnvLeanPath___redArg___closed__0 = (const lean_object*)&l_Lake_getEnvLeanPath___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_getEnvLeanPath___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_getEnvLeanPath(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lake_getEnvLeanSrcPath___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_Env_leanSrcPath___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_getEnvLeanSrcPath___redArg___closed__0 = (const lean_object*)&l_Lake_getEnvLeanSrcPath___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_getEnvLeanSrcPath___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_getEnvLeanSrcPath(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lake_getEnvSharedLibPath___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_Env_sharedLibPath, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_getEnvSharedLibPath___redArg___closed__0 = (const lean_object*)&l_Lake_getEnvSharedLibPath___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_getEnvSharedLibPath___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_getEnvSharedLibPath(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_getElanInstall_x3f___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lake_getElanInstall_x3f___redArg___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lake_getElanInstall_x3f___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_getElanInstall_x3f___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_getElanInstall_x3f___redArg___closed__0 = (const lean_object*)&l_Lake_getElanInstall_x3f___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_getElanInstall_x3f___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_getElanInstall_x3f(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_getElanHome_x3f___redArg___lam__0(lean_object*);
static const lean_closure_object l_Lake_getElanHome_x3f___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_getElanHome_x3f___redArg___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_getElanHome_x3f___redArg___closed__0 = (const lean_object*)&l_Lake_getElanHome_x3f___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_getElanHome_x3f___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_getElanHome_x3f(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_getElan_x3f___redArg___lam__0(lean_object*);
static const lean_closure_object l_Lake_getElan_x3f___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_getElan_x3f___redArg___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_getElan_x3f___redArg___closed__0 = (const lean_object*)&l_Lake_getElan_x3f___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_getElan_x3f___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_getElan_x3f(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_getLeanInstall___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lake_getLeanInstall___redArg___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lake_getLeanInstall___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_getLeanInstall___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_getLeanInstall___redArg___closed__0 = (const lean_object*)&l_Lake_getLeanInstall___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_getLeanInstall___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_getLeanInstall(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_getLeanSysroot___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lake_getLeanSysroot___redArg___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lake_getLeanSysroot___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_getLeanSysroot___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_getLeanSysroot___redArg___closed__0 = (const lean_object*)&l_Lake_getLeanSysroot___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_getLeanSysroot___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_getLeanSysroot(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_getLeanSrcDir___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lake_getLeanSrcDir___redArg___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lake_getLeanSrcDir___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_getLeanSrcDir___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_getLeanSrcDir___redArg___closed__0 = (const lean_object*)&l_Lake_getLeanSrcDir___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_getLeanSrcDir___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_getLeanSrcDir(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_getLeanLibDir___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lake_getLeanLibDir___redArg___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lake_getLeanLibDir___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_getLeanLibDir___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_getLeanLibDir___redArg___closed__0 = (const lean_object*)&l_Lake_getLeanLibDir___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_getLeanLibDir___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_getLeanLibDir(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_getLeanIncludeDir___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lake_getLeanIncludeDir___redArg___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lake_getLeanIncludeDir___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_getLeanIncludeDir___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_getLeanIncludeDir___redArg___closed__0 = (const lean_object*)&l_Lake_getLeanIncludeDir___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_getLeanIncludeDir___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_getLeanIncludeDir(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_getLeanSystemLibDir___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lake_getLeanSystemLibDir___redArg___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lake_getLeanSystemLibDir___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_getLeanSystemLibDir___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_getLeanSystemLibDir___redArg___closed__0 = (const lean_object*)&l_Lake_getLeanSystemLibDir___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_getLeanSystemLibDir___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_getLeanSystemLibDir(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_getLean___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lake_getLean___redArg___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lake_getLean___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_getLean___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_getLean___redArg___closed__0 = (const lean_object*)&l_Lake_getLean___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_getLean___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_getLean(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_getLeanir___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lake_getLeanir___redArg___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lake_getLeanir___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_getLeanir___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_getLeanir___redArg___closed__0 = (const lean_object*)&l_Lake_getLeanir___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_getLeanir___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_getLeanir(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_getLeanc___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lake_getLeanc___redArg___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lake_getLeanc___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_getLeanc___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_getLeanc___redArg___closed__0 = (const lean_object*)&l_Lake_getLeanc___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_getLeanc___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_getLeanc(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_getLeantar___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lake_getLeantar___redArg___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lake_getLeantar___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_getLeantar___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_getLeantar___redArg___closed__0 = (const lean_object*)&l_Lake_getLeantar___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_getLeantar___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_getLeantar(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_getLeanSharedDynlib___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lake_getLeanSharedDynlib___redArg___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lake_getLeanSharedDynlib___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_getLeanSharedDynlib___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_getLeanSharedDynlib___redArg___closed__0 = (const lean_object*)&l_Lake_getLeanSharedDynlib___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_getLeanSharedDynlib___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_getLeanSharedDynlib(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_getLeanSharedDynlibs___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lake_getLeanSharedDynlibs___redArg___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lake_getLeanSharedDynlibs___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_getLeanSharedDynlibs___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_getLeanSharedDynlibs___redArg___closed__0 = (const lean_object*)&l_Lake_getLeanSharedDynlibs___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_getLeanSharedDynlibs___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_getLeanSharedDynlibs(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_getLeanSharedLib___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lake_getLeanSharedLib___redArg___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lake_getLeanSharedLib___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_getLeanSharedLib___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_getLeanSharedLib___redArg___closed__0 = (const lean_object*)&l_Lake_getLeanSharedLib___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_getLeanSharedLib___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_getLeanSharedLib(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_getLeanAr___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lake_getLeanAr___redArg___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lake_getLeanAr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_getLeanAr___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_getLeanAr___redArg___closed__0 = (const lean_object*)&l_Lake_getLeanAr___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_getLeanAr___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_getLeanAr(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_getLeanCc___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lake_getLeanCc___redArg___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lake_getLeanCc___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_getLeanCc___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_getLeanCc___redArg___closed__0 = (const lean_object*)&l_Lake_getLeanCc___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_getLeanCc___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_getLeanCc(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lake_getLeanCc_x3f___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_LeanInstall_leanCc_x3f___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_getLeanCc_x3f___redArg___closed__0 = (const lean_object*)&l_Lake_getLeanCc_x3f___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_getLeanCc_x3f___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_getLeanCc_x3f(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_getLeanLinkSharedFlags___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lake_getLeanLinkSharedFlags___redArg___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lake_getLeanLinkSharedFlags___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_getLeanLinkSharedFlags___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_getLeanLinkSharedFlags___redArg___closed__0 = (const lean_object*)&l_Lake_getLeanLinkSharedFlags___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_getLeanLinkSharedFlags___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_getLeanLinkSharedFlags(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_getLakeInstall___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lake_getLakeInstall___redArg___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lake_getLakeInstall___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_getLakeInstall___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_getLakeInstall___redArg___closed__0 = (const lean_object*)&l_Lake_getLakeInstall___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_getLakeInstall___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_getLakeInstall(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_getLakeHome___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lake_getLakeHome___redArg___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lake_getLakeHome___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_getLakeHome___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_getLakeHome___redArg___closed__0 = (const lean_object*)&l_Lake_getLakeHome___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_getLakeHome___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_getLakeHome(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_getLakeSrcDir___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lake_getLakeSrcDir___redArg___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lake_getLakeSrcDir___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_getLakeSrcDir___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_getLakeSrcDir___redArg___closed__0 = (const lean_object*)&l_Lake_getLakeSrcDir___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_getLakeSrcDir___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_getLakeSrcDir(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_getLakeLibDir___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lake_getLakeLibDir___redArg___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lake_getLakeLibDir___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_getLakeLibDir___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_getLakeLibDir___redArg___closed__0 = (const lean_object*)&l_Lake_getLakeLibDir___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_getLakeLibDir___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_getLakeLibDir(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_getLake___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lake_getLake___redArg___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lake_getLake___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_getLake___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_getLake___redArg___closed__0 = (const lean_object*)&l_Lake_getLake___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_getLake___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_getLake(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_getLakeSharedDynlib___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lake_getLakeSharedDynlib___redArg___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lake_getLakeSharedDynlib___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_getLakeSharedDynlib___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_getLakeSharedDynlib___redArg___closed__0 = (const lean_object*)&l_Lake_getLakeSharedDynlib___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_getLakeSharedDynlib___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_getLakeSharedDynlib(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LakeEnvT_run___redArg(lean_object* v_env_1_, lean_object* v_self_2_){
_start:
{
lean_object* v___x_3_; 
v___x_3_ = lean_apply_1(v_self_2_, v_env_1_);
return v___x_3_;
}
}
LEAN_EXPORT lean_object* l_Lake_LakeEnvT_run(lean_object* v_m_4_, lean_object* v_00_u03b1_5_, lean_object* v_env_6_, lean_object* v_self_7_){
_start:
{
lean_object* v___x_8_; 
v___x_8_ = lean_apply_1(v_self_7_, v_env_6_);
return v___x_8_;
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadWorkspaceOfMonadReaderOfWorkspace___redArg(lean_object* v_inst_9_){
_start:
{
lean_inc(v_inst_9_);
return v_inst_9_;
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadWorkspaceOfMonadReaderOfWorkspace___redArg___boxed(lean_object* v_inst_10_){
_start:
{
lean_object* v_res_11_; 
v_res_11_ = l_Lake_instMonadWorkspaceOfMonadReaderOfWorkspace___redArg(v_inst_10_);
lean_dec(v_inst_10_);
return v_res_11_;
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadWorkspaceOfMonadReaderOfWorkspace(lean_object* v_m_12_, lean_object* v_inst_13_){
_start:
{
lean_inc(v_inst_13_);
return v_inst_13_;
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadWorkspaceOfMonadReaderOfWorkspace___boxed(lean_object* v_m_14_, lean_object* v_inst_15_){
_start:
{
lean_object* v_res_16_; 
v_res_16_ = l_Lake_instMonadWorkspaceOfMonadReaderOfWorkspace(v_m_14_, v_inst_15_);
lean_dec(v_inst_15_);
return v_res_16_;
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadWorkspaceOfMonadStateOfWorkspace___redArg(lean_object* v_inst_17_){
_start:
{
lean_object* v_get_18_; 
v_get_18_ = lean_ctor_get(v_inst_17_, 0);
lean_inc(v_get_18_);
return v_get_18_;
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadWorkspaceOfMonadStateOfWorkspace___redArg___boxed(lean_object* v_inst_19_){
_start:
{
lean_object* v_res_20_; 
v_res_20_ = l_Lake_instMonadWorkspaceOfMonadStateOfWorkspace___redArg(v_inst_19_);
lean_dec_ref(v_inst_19_);
return v_res_20_;
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadWorkspaceOfMonadStateOfWorkspace(lean_object* v_m_21_, lean_object* v_inst_22_){
_start:
{
lean_object* v_get_23_; 
v_get_23_ = lean_ctor_get(v_inst_22_, 0);
lean_inc(v_get_23_);
return v_get_23_;
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadWorkspaceOfMonadStateOfWorkspace___boxed(lean_object* v_m_24_, lean_object* v_inst_25_){
_start:
{
lean_object* v_res_26_; 
v_res_26_ = l_Lake_instMonadWorkspaceOfMonadStateOfWorkspace(v_m_24_, v_inst_25_);
lean_dec_ref(v_inst_25_);
return v_res_26_;
}
}
LEAN_EXPORT lean_object* l_Lake_mkLakeContext(lean_object* v_ws_27_){
_start:
{
lean_object* v___x_28_; 
v___x_28_ = l_unsafeCast___redArg(v_ws_27_);
return v___x_28_;
}
}
LEAN_EXPORT lean_object* l_Lake_mkLakeContext___boxed(lean_object* v_ws_29_){
_start:
{
lean_object* v_res_30_; 
v_res_30_ = l_Lake_mkLakeContext(v_ws_29_);
lean_dec_ref(v_ws_29_);
return v_res_30_;
}
}
LEAN_EXPORT lean_object* l_Lake_Workspace_runLakeT___redArg(lean_object* v_ws_31_, lean_object* v_x_32_){
_start:
{
lean_object* v___x_33_; lean_object* v___x_34_; 
v___x_33_ = l_unsafeCast___redArg(v_ws_31_);
v___x_34_ = lean_apply_1(v_x_32_, v___x_33_);
return v___x_34_;
}
}
LEAN_EXPORT lean_object* l_Lake_Workspace_runLakeT___redArg___boxed(lean_object* v_ws_35_, lean_object* v_x_36_){
_start:
{
lean_object* v_res_37_; 
v_res_37_ = l_Lake_Workspace_runLakeT___redArg(v_ws_35_, v_x_36_);
lean_dec_ref(v_ws_35_);
return v_res_37_;
}
}
LEAN_EXPORT lean_object* l_Lake_Workspace_runLakeT(lean_object* v_m_38_, lean_object* v_00_u03b1_39_, lean_object* v_ws_40_, lean_object* v_x_41_){
_start:
{
lean_object* v___x_42_; lean_object* v___x_43_; 
v___x_42_ = l_unsafeCast___redArg(v_ws_40_);
v___x_43_ = lean_apply_1(v_x_41_, v___x_42_);
return v___x_43_;
}
}
LEAN_EXPORT lean_object* l_Lake_Workspace_runLakeT___boxed(lean_object* v_m_44_, lean_object* v_00_u03b1_45_, lean_object* v_ws_46_, lean_object* v_x_47_){
_start:
{
lean_object* v_res_48_; 
v_res_48_ = l_Lake_Workspace_runLakeT(v_m_44_, v_00_u03b1_45_, v_ws_46_, v_x_47_);
lean_dec_ref(v_ws_46_);
return v_res_48_;
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadLakeOfMonadWorkspaceOfFunctor___redArg(lean_object* v_inst_50_, lean_object* v_inst_51_){
_start:
{
lean_object* v_map_52_; lean_object* v___f_53_; lean_object* v___x_54_; 
v_map_52_ = lean_ctor_get(v_inst_51_, 0);
lean_inc(v_map_52_);
lean_dec_ref(v_inst_51_);
v___f_53_ = ((lean_object*)(l_Lake_instMonadLakeOfMonadWorkspaceOfFunctor___redArg___closed__0));
v___x_54_ = lean_apply_4(v_map_52_, lean_box(0), lean_box(0), v___f_53_, v_inst_50_);
return v___x_54_;
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadLakeOfMonadWorkspaceOfFunctor(lean_object* v_m_55_, lean_object* v_inst_56_, lean_object* v_inst_57_){
_start:
{
lean_object* v___x_58_; 
v___x_58_ = l_Lake_instMonadLakeOfMonadWorkspaceOfFunctor___redArg(v_inst_56_, v_inst_57_);
return v___x_58_;
}
}
LEAN_EXPORT lean_object* l_Lake_Context_workspace(lean_object* v_self_59_){
_start:
{
lean_object* v___x_60_; 
v___x_60_ = l_unsafeCast___redArg(v_self_59_);
return v___x_60_;
}
}
LEAN_EXPORT lean_object* l_Lake_Context_workspace___boxed(lean_object* v_self_61_){
_start:
{
lean_object* v_res_62_; 
v_res_62_ = l_Lake_Context_workspace(v_self_61_);
lean_dec(v_self_61_);
return v_res_62_;
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadWorkspaceOfMonadLakeOfFunctor___redArg(lean_object* v_inst_64_, lean_object* v_inst_65_){
_start:
{
lean_object* v_map_66_; lean_object* v___f_67_; lean_object* v___x_68_; 
v_map_66_ = lean_ctor_get(v_inst_65_, 0);
lean_inc(v_map_66_);
lean_dec_ref(v_inst_65_);
v___f_67_ = ((lean_object*)(l_Lake_instMonadWorkspaceOfMonadLakeOfFunctor___redArg___closed__0));
v___x_68_ = lean_apply_4(v_map_66_, lean_box(0), lean_box(0), v___f_67_, v_inst_64_);
return v___x_68_;
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadWorkspaceOfMonadLakeOfFunctor(lean_object* v_m_69_, lean_object* v_inst_70_, lean_object* v_inst_71_){
_start:
{
lean_object* v___x_72_; 
v___x_72_ = l_Lake_instMonadWorkspaceOfMonadLakeOfFunctor___redArg(v_inst_70_, v_inst_71_);
return v___x_72_;
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadLakeEnvOfMonadWorkspaceOfFunctor___redArg___lam__0(lean_object* v_x_73_){
_start:
{
lean_object* v_lakeEnv_74_; 
v_lakeEnv_74_ = lean_ctor_get(v_x_73_, 0);
lean_inc_ref(v_lakeEnv_74_);
return v_lakeEnv_74_;
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadLakeEnvOfMonadWorkspaceOfFunctor___redArg___lam__0___boxed(lean_object* v_x_75_){
_start:
{
lean_object* v_res_76_; 
v_res_76_ = l_Lake_instMonadLakeEnvOfMonadWorkspaceOfFunctor___redArg___lam__0(v_x_75_);
lean_dec_ref(v_x_75_);
return v_res_76_;
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadLakeEnvOfMonadWorkspaceOfFunctor___redArg(lean_object* v_inst_78_, lean_object* v_inst_79_){
_start:
{
lean_object* v_map_80_; lean_object* v___f_81_; lean_object* v___x_82_; 
v_map_80_ = lean_ctor_get(v_inst_79_, 0);
lean_inc(v_map_80_);
lean_dec_ref(v_inst_79_);
v___f_81_ = ((lean_object*)(l_Lake_instMonadLakeEnvOfMonadWorkspaceOfFunctor___redArg___closed__0));
v___x_82_ = lean_apply_4(v_map_80_, lean_box(0), lean_box(0), v___f_81_, v_inst_78_);
return v___x_82_;
}
}
LEAN_EXPORT lean_object* l_Lake_instMonadLakeEnvOfMonadWorkspaceOfFunctor(lean_object* v_m_83_, lean_object* v_inst_84_, lean_object* v_inst_85_){
_start:
{
lean_object* v___x_86_; 
v___x_86_ = l_Lake_instMonadLakeEnvOfMonadWorkspaceOfFunctor___redArg(v_inst_84_, v_inst_85_);
return v___x_86_;
}
}
LEAN_EXPORT lean_object* l_Lake_getRootPackage___redArg___lam__0(lean_object* v_x_87_){
_start:
{
lean_object* v_packages_88_; lean_object* v___x_89_; lean_object* v___x_90_; 
v_packages_88_ = lean_ctor_get(v_x_87_, 4);
v___x_89_ = lean_unsigned_to_nat(0u);
v___x_90_ = lean_array_fget_borrowed(v_packages_88_, v___x_89_);
lean_inc(v___x_90_);
return v___x_90_;
}
}
LEAN_EXPORT lean_object* l_Lake_getRootPackage___redArg___lam__0___boxed(lean_object* v_x_91_){
_start:
{
lean_object* v_res_92_; 
v_res_92_ = l_Lake_getRootPackage___redArg___lam__0(v_x_91_);
lean_dec_ref(v_x_91_);
return v_res_92_;
}
}
LEAN_EXPORT lean_object* l_Lake_getRootPackage___redArg(lean_object* v_inst_94_, lean_object* v_inst_95_){
_start:
{
lean_object* v_map_96_; lean_object* v___f_97_; lean_object* v___x_98_; 
v_map_96_ = lean_ctor_get(v_inst_95_, 0);
lean_inc(v_map_96_);
lean_dec_ref(v_inst_95_);
v___f_97_ = ((lean_object*)(l_Lake_getRootPackage___redArg___closed__0));
v___x_98_ = lean_apply_4(v_map_96_, lean_box(0), lean_box(0), v___f_97_, v_inst_94_);
return v___x_98_;
}
}
LEAN_EXPORT lean_object* l_Lake_getRootPackage(lean_object* v_m_99_, lean_object* v_inst_100_, lean_object* v_inst_101_){
_start:
{
lean_object* v_map_102_; lean_object* v___f_103_; lean_object* v___x_104_; 
v_map_102_ = lean_ctor_get(v_inst_101_, 0);
lean_inc(v_map_102_);
lean_dec_ref(v_inst_101_);
v___f_103_ = ((lean_object*)(l_Lake_getRootPackage___redArg___closed__0));
v___x_104_ = lean_apply_4(v_map_102_, lean_box(0), lean_box(0), v___f_103_, v_inst_100_);
return v___x_104_;
}
}
LEAN_EXPORT lean_object* l_Lake_findPackageByKey_x3f___redArg___lam__0(lean_object* v_keyName_106_, lean_object* v_x_107_){
_start:
{
lean_object* v_packageMap_108_; lean_object* v___x_109_; lean_object* v___x_110_; 
v_packageMap_108_ = lean_ctor_get(v_x_107_, 5);
lean_inc(v_packageMap_108_);
lean_dec_ref(v_x_107_);
v___x_109_ = ((lean_object*)(l_Lake_findPackageByKey_x3f___redArg___lam__0___closed__0));
v___x_110_ = l_Std_DTreeMap_Internal_Impl_get_x3f___redArg(v___x_109_, v_packageMap_108_, v_keyName_106_);
return v___x_110_;
}
}
LEAN_EXPORT lean_object* l_Lake_findPackageByKey_x3f___redArg(lean_object* v_inst_111_, lean_object* v_inst_112_, lean_object* v_keyName_113_){
_start:
{
lean_object* v_map_114_; lean_object* v___f_115_; lean_object* v___x_116_; 
v_map_114_ = lean_ctor_get(v_inst_112_, 0);
lean_inc(v_map_114_);
lean_dec_ref(v_inst_112_);
v___f_115_ = lean_alloc_closure((void*)(l_Lake_findPackageByKey_x3f___redArg___lam__0), 2, 1);
lean_closure_set(v___f_115_, 0, v_keyName_113_);
v___x_116_ = lean_apply_4(v_map_114_, lean_box(0), lean_box(0), v___f_115_, v_inst_111_);
return v___x_116_;
}
}
LEAN_EXPORT lean_object* l_Lake_findPackageByKey_x3f(lean_object* v_m_117_, lean_object* v_inst_118_, lean_object* v_inst_119_, lean_object* v_keyName_120_){
_start:
{
lean_object* v_map_121_; lean_object* v___f_122_; lean_object* v___x_123_; 
v_map_121_ = lean_ctor_get(v_inst_119_, 0);
lean_inc(v_map_121_);
lean_dec_ref(v_inst_119_);
v___f_122_ = lean_alloc_closure((void*)(l_Lake_findPackageByKey_x3f___redArg___lam__0), 2, 1);
lean_closure_set(v___f_122_, 0, v_keyName_120_);
v___x_123_ = lean_apply_4(v_map_121_, lean_box(0), lean_box(0), v___f_122_, v_inst_118_);
return v___x_123_;
}
}
LEAN_EXPORT lean_object* l_Lake_findPackageByName_x3f___redArg___lam__0(lean_object* v_name_124_, lean_object* v___x_125_, lean_object* v___x_126_, lean_object* v_a_127_, lean_object* v_x_128_, lean_object* v___y_129_){
_start:
{
lean_object* v_baseName_130_; uint8_t v___x_131_; 
v_baseName_130_ = lean_ctor_get(v_a_127_, 1);
v___x_131_ = lean_name_eq(v_baseName_130_, v_name_124_);
if (v___x_131_ == 0)
{
lean_object* v___x_132_; 
lean_dec_ref(v_a_127_);
v___x_132_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_132_, 0, v___x_125_);
return v___x_132_;
}
else
{
lean_object* v___x_133_; lean_object* v___x_134_; lean_object* v___x_135_; lean_object* v___x_136_; 
lean_dec_ref(v___x_125_);
v___x_133_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_133_, 0, v_a_127_);
v___x_134_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_134_, 0, v___x_133_);
v___x_135_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_135_, 0, v___x_134_);
lean_ctor_set(v___x_135_, 1, v___x_126_);
v___x_136_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_136_, 0, v___x_135_);
return v___x_136_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_findPackageByName_x3f___redArg___lam__0___boxed(lean_object* v_name_137_, lean_object* v___x_138_, lean_object* v___x_139_, lean_object* v_a_140_, lean_object* v_x_141_, lean_object* v___y_142_){
_start:
{
lean_object* v_res_143_; 
v_res_143_ = l_Lake_findPackageByName_x3f___redArg___lam__0(v_name_137_, v___x_138_, v___x_139_, v_a_140_, v_x_141_, v___y_142_);
lean_dec_ref(v___y_142_);
lean_dec(v_name_137_);
return v_res_143_;
}
}
LEAN_EXPORT lean_object* l_Lake_findPackageByName_x3f___redArg___lam__1(lean_object* v_name_166_, lean_object* v_x_167_){
_start:
{
lean_object* v_packages_168_; lean_object* v___x_169_; lean_object* v___x_170_; lean_object* v___x_171_; lean_object* v___x_172_; lean_object* v___f_173_; size_t v_sz_174_; size_t v___x_175_; lean_object* v___x_176_; lean_object* v_fst_177_; 
v_packages_168_ = lean_ctor_get(v_x_167_, 4);
lean_inc_ref(v_packages_168_);
lean_dec_ref(v_x_167_);
v___x_169_ = ((lean_object*)(l_Lake_findPackageByName_x3f___redArg___lam__1___closed__9));
v___x_170_ = lean_box(0);
v___x_171_ = lean_box(0);
v___x_172_ = ((lean_object*)(l_Lake_findPackageByName_x3f___redArg___lam__1___closed__10));
v___f_173_ = lean_alloc_closure((void*)(l_Lake_findPackageByName_x3f___redArg___lam__0___boxed), 6, 3);
lean_closure_set(v___f_173_, 0, v_name_166_);
lean_closure_set(v___f_173_, 1, v___x_172_);
lean_closure_set(v___f_173_, 2, v___x_171_);
v_sz_174_ = lean_array_size(v_packages_168_);
v___x_175_ = ((size_t)0ULL);
v___x_176_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_box(0), lean_box(0), lean_box(0), v___x_169_, v_packages_168_, v___f_173_, v_sz_174_, v___x_175_, v___x_172_);
v_fst_177_ = lean_ctor_get(v___x_176_, 0);
lean_inc(v_fst_177_);
lean_dec(v___x_176_);
if (lean_obj_tag(v_fst_177_) == 0)
{
return v___x_170_;
}
else
{
lean_object* v_val_178_; 
v_val_178_ = lean_ctor_get(v_fst_177_, 0);
lean_inc(v_val_178_);
lean_dec_ref_known(v_fst_177_, 1);
return v_val_178_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_findPackageByName_x3f___redArg(lean_object* v_inst_179_, lean_object* v_inst_180_, lean_object* v_name_181_){
_start:
{
lean_object* v_map_182_; lean_object* v___f_183_; lean_object* v___x_184_; 
v_map_182_ = lean_ctor_get(v_inst_180_, 0);
lean_inc(v_map_182_);
lean_dec_ref(v_inst_180_);
v___f_183_ = lean_alloc_closure((void*)(l_Lake_findPackageByName_x3f___redArg___lam__1), 2, 1);
lean_closure_set(v___f_183_, 0, v_name_181_);
v___x_184_ = lean_apply_4(v_map_182_, lean_box(0), lean_box(0), v___f_183_, v_inst_179_);
return v___x_184_;
}
}
LEAN_EXPORT lean_object* l_Lake_findPackageByName_x3f(lean_object* v_m_185_, lean_object* v_inst_186_, lean_object* v_inst_187_, lean_object* v_name_188_){
_start:
{
lean_object* v_map_189_; lean_object* v___f_190_; lean_object* v___x_191_; 
v_map_189_ = lean_ctor_get(v_inst_187_, 0);
lean_inc(v_map_189_);
lean_dec_ref(v_inst_187_);
v___f_190_ = lean_alloc_closure((void*)(l_Lake_findPackageByName_x3f___redArg___lam__1), 2, 1);
lean_closure_set(v___f_190_, 0, v_name_188_);
v___x_191_ = lean_apply_4(v_map_189_, lean_box(0), lean_box(0), v___f_190_, v_inst_186_);
return v___x_191_;
}
}
LEAN_EXPORT lean_object* l_Lake_findPackage_x3f___redArg___lam__0(lean_object* v_name_192_, lean_object* v_x_193_){
_start:
{
lean_object* v_packageMap_194_; lean_object* v___x_195_; lean_object* v___x_196_; 
v_packageMap_194_ = lean_ctor_get(v_x_193_, 5);
lean_inc(v_packageMap_194_);
lean_dec_ref(v_x_193_);
v___x_195_ = ((lean_object*)(l_Lake_findPackageByKey_x3f___redArg___lam__0___closed__0));
v___x_196_ = l_Std_DTreeMap_Internal_Impl_get_x3f___redArg(v___x_195_, v_packageMap_194_, v_name_192_);
return v___x_196_;
}
}
LEAN_EXPORT lean_object* l_Lake_findPackage_x3f___redArg(lean_object* v_inst_197_, lean_object* v_inst_198_, lean_object* v_name_199_){
_start:
{
lean_object* v_map_200_; lean_object* v___f_201_; lean_object* v___x_202_; 
v_map_200_ = lean_ctor_get(v_inst_198_, 0);
lean_inc(v_map_200_);
lean_dec_ref(v_inst_198_);
v___f_201_ = lean_alloc_closure((void*)(l_Lake_findPackage_x3f___redArg___lam__0), 2, 1);
lean_closure_set(v___f_201_, 0, v_name_199_);
v___x_202_ = lean_apply_4(v_map_200_, lean_box(0), lean_box(0), v___f_201_, v_inst_197_);
return v___x_202_;
}
}
LEAN_EXPORT lean_object* l_Lake_findPackage_x3f(lean_object* v_m_203_, lean_object* v_inst_204_, lean_object* v_inst_205_, lean_object* v_name_206_){
_start:
{
lean_object* v_map_207_; lean_object* v___f_208_; lean_object* v___x_209_; 
v_map_207_ = lean_ctor_get(v_inst_205_, 0);
lean_inc(v_map_207_);
lean_dec_ref(v_inst_205_);
v___f_208_ = lean_alloc_closure((void*)(l_Lake_findPackage_x3f___redArg___lam__0), 2, 1);
lean_closure_set(v___f_208_, 0, v_name_206_);
v___x_209_ = lean_apply_4(v_map_207_, lean_box(0), lean_box(0), v___f_208_, v_inst_204_);
return v___x_209_;
}
}
LEAN_EXPORT lean_object* l_Lake_findModule_x3f___redArg___lam__0(lean_object* v_name_210_, lean_object* v_x_211_){
_start:
{
lean_object* v___x_212_; 
v___x_212_ = l_Lake_Workspace_findModule_x3f(v_name_210_, v_x_211_);
return v___x_212_;
}
}
LEAN_EXPORT lean_object* l_Lake_findModule_x3f___redArg___lam__0___boxed(lean_object* v_name_213_, lean_object* v_x_214_){
_start:
{
lean_object* v_res_215_; 
v_res_215_ = l_Lake_findModule_x3f___redArg___lam__0(v_name_213_, v_x_214_);
lean_dec_ref(v_x_214_);
return v_res_215_;
}
}
LEAN_EXPORT lean_object* l_Lake_findModule_x3f___redArg(lean_object* v_inst_216_, lean_object* v_inst_217_, lean_object* v_name_218_){
_start:
{
lean_object* v_map_219_; lean_object* v___f_220_; lean_object* v___x_221_; 
v_map_219_ = lean_ctor_get(v_inst_217_, 0);
lean_inc(v_map_219_);
lean_dec_ref(v_inst_217_);
v___f_220_ = lean_alloc_closure((void*)(l_Lake_findModule_x3f___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_220_, 0, v_name_218_);
v___x_221_ = lean_apply_4(v_map_219_, lean_box(0), lean_box(0), v___f_220_, v_inst_216_);
return v___x_221_;
}
}
LEAN_EXPORT lean_object* l_Lake_findModule_x3f(lean_object* v_m_222_, lean_object* v_inst_223_, lean_object* v_inst_224_, lean_object* v_name_225_){
_start:
{
lean_object* v_map_226_; lean_object* v___f_227_; lean_object* v___x_228_; 
v_map_226_ = lean_ctor_get(v_inst_224_, 0);
lean_inc(v_map_226_);
lean_dec_ref(v_inst_224_);
v___f_227_ = lean_alloc_closure((void*)(l_Lake_findModule_x3f___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_227_, 0, v_name_225_);
v___x_228_ = lean_apply_4(v_map_226_, lean_box(0), lean_box(0), v___f_227_, v_inst_223_);
return v___x_228_;
}
}
LEAN_EXPORT lean_object* l_Lake_findModules___redArg___lam__0(lean_object* v_name_229_, lean_object* v_x_230_){
_start:
{
lean_object* v___x_231_; 
v___x_231_ = l_Lake_Workspace_findModules(v_name_229_, v_x_230_);
return v___x_231_;
}
}
LEAN_EXPORT lean_object* l_Lake_findModules___redArg___lam__0___boxed(lean_object* v_name_232_, lean_object* v_x_233_){
_start:
{
lean_object* v_res_234_; 
v_res_234_ = l_Lake_findModules___redArg___lam__0(v_name_232_, v_x_233_);
lean_dec_ref(v_x_233_);
return v_res_234_;
}
}
LEAN_EXPORT lean_object* l_Lake_findModules___redArg(lean_object* v_inst_235_, lean_object* v_inst_236_, lean_object* v_name_237_){
_start:
{
lean_object* v_map_238_; lean_object* v___f_239_; lean_object* v___x_240_; 
v_map_238_ = lean_ctor_get(v_inst_236_, 0);
lean_inc(v_map_238_);
lean_dec_ref(v_inst_236_);
v___f_239_ = lean_alloc_closure((void*)(l_Lake_findModules___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_239_, 0, v_name_237_);
v___x_240_ = lean_apply_4(v_map_238_, lean_box(0), lean_box(0), v___f_239_, v_inst_235_);
return v___x_240_;
}
}
LEAN_EXPORT lean_object* l_Lake_findModules(lean_object* v_m_241_, lean_object* v_inst_242_, lean_object* v_inst_243_, lean_object* v_name_244_){
_start:
{
lean_object* v_map_245_; lean_object* v___f_246_; lean_object* v___x_247_; 
v_map_245_ = lean_ctor_get(v_inst_243_, 0);
lean_inc(v_map_245_);
lean_dec_ref(v_inst_243_);
v___f_246_ = lean_alloc_closure((void*)(l_Lake_findModules___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_246_, 0, v_name_244_);
v___x_247_ = lean_apply_4(v_map_245_, lean_box(0), lean_box(0), v___f_246_, v_inst_242_);
return v___x_247_;
}
}
LEAN_EXPORT lean_object* l_Lake_findModuleBySrc_x3f___redArg___lam__0(lean_object* v_path_248_, lean_object* v_x_249_){
_start:
{
lean_object* v___x_250_; 
v___x_250_ = l_Lake_Workspace_findModuleBySrc_x3f(v_path_248_, v_x_249_);
return v___x_250_;
}
}
LEAN_EXPORT lean_object* l_Lake_findModuleBySrc_x3f___redArg___lam__0___boxed(lean_object* v_path_251_, lean_object* v_x_252_){
_start:
{
lean_object* v_res_253_; 
v_res_253_ = l_Lake_findModuleBySrc_x3f___redArg___lam__0(v_path_251_, v_x_252_);
lean_dec_ref(v_x_252_);
return v_res_253_;
}
}
LEAN_EXPORT lean_object* l_Lake_findModuleBySrc_x3f___redArg(lean_object* v_inst_254_, lean_object* v_inst_255_, lean_object* v_path_256_){
_start:
{
lean_object* v_map_257_; lean_object* v___f_258_; lean_object* v___x_259_; 
v_map_257_ = lean_ctor_get(v_inst_255_, 0);
lean_inc(v_map_257_);
lean_dec_ref(v_inst_255_);
v___f_258_ = lean_alloc_closure((void*)(l_Lake_findModuleBySrc_x3f___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_258_, 0, v_path_256_);
v___x_259_ = lean_apply_4(v_map_257_, lean_box(0), lean_box(0), v___f_258_, v_inst_254_);
return v___x_259_;
}
}
LEAN_EXPORT lean_object* l_Lake_findModuleBySrc_x3f(lean_object* v_m_260_, lean_object* v_inst_261_, lean_object* v_inst_262_, lean_object* v_path_263_){
_start:
{
lean_object* v_map_264_; lean_object* v___f_265_; lean_object* v___x_266_; 
v_map_264_ = lean_ctor_get(v_inst_262_, 0);
lean_inc(v_map_264_);
lean_dec_ref(v_inst_262_);
v___f_265_ = lean_alloc_closure((void*)(l_Lake_findModuleBySrc_x3f___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_265_, 0, v_path_263_);
v___x_266_ = lean_apply_4(v_map_264_, lean_box(0), lean_box(0), v___f_265_, v_inst_261_);
return v___x_266_;
}
}
LEAN_EXPORT lean_object* l_Lake_findLeanExe_x3f___redArg___lam__0(lean_object* v_name_267_, lean_object* v_x_268_){
_start:
{
lean_object* v___x_269_; 
v___x_269_ = l_Lake_Workspace_findLeanExe_x3f(v_name_267_, v_x_268_);
return v___x_269_;
}
}
LEAN_EXPORT lean_object* l_Lake_findLeanExe_x3f___redArg___lam__0___boxed(lean_object* v_name_270_, lean_object* v_x_271_){
_start:
{
lean_object* v_res_272_; 
v_res_272_ = l_Lake_findLeanExe_x3f___redArg___lam__0(v_name_270_, v_x_271_);
lean_dec_ref(v_x_271_);
lean_dec(v_name_270_);
return v_res_272_;
}
}
LEAN_EXPORT lean_object* l_Lake_findLeanExe_x3f___redArg(lean_object* v_inst_273_, lean_object* v_inst_274_, lean_object* v_name_275_){
_start:
{
lean_object* v_map_276_; lean_object* v___f_277_; lean_object* v___x_278_; 
v_map_276_ = lean_ctor_get(v_inst_274_, 0);
lean_inc(v_map_276_);
lean_dec_ref(v_inst_274_);
v___f_277_ = lean_alloc_closure((void*)(l_Lake_findLeanExe_x3f___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_277_, 0, v_name_275_);
v___x_278_ = lean_apply_4(v_map_276_, lean_box(0), lean_box(0), v___f_277_, v_inst_273_);
return v___x_278_;
}
}
LEAN_EXPORT lean_object* l_Lake_findLeanExe_x3f(lean_object* v_m_279_, lean_object* v_inst_280_, lean_object* v_inst_281_, lean_object* v_name_282_){
_start:
{
lean_object* v_map_283_; lean_object* v___f_284_; lean_object* v___x_285_; 
v_map_283_ = lean_ctor_get(v_inst_281_, 0);
lean_inc(v_map_283_);
lean_dec_ref(v_inst_281_);
v___f_284_ = lean_alloc_closure((void*)(l_Lake_findLeanExe_x3f___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_284_, 0, v_name_282_);
v___x_285_ = lean_apply_4(v_map_283_, lean_box(0), lean_box(0), v___f_284_, v_inst_280_);
return v___x_285_;
}
}
LEAN_EXPORT lean_object* l_Lake_findLeanLib_x3f___redArg___lam__0(lean_object* v_name_286_, lean_object* v_x_287_){
_start:
{
lean_object* v___x_288_; 
v___x_288_ = l_Lake_Workspace_findLeanLib_x3f(v_name_286_, v_x_287_);
return v___x_288_;
}
}
LEAN_EXPORT lean_object* l_Lake_findLeanLib_x3f___redArg___lam__0___boxed(lean_object* v_name_289_, lean_object* v_x_290_){
_start:
{
lean_object* v_res_291_; 
v_res_291_ = l_Lake_findLeanLib_x3f___redArg___lam__0(v_name_289_, v_x_290_);
lean_dec_ref(v_x_290_);
lean_dec(v_name_289_);
return v_res_291_;
}
}
LEAN_EXPORT lean_object* l_Lake_findLeanLib_x3f___redArg(lean_object* v_inst_292_, lean_object* v_inst_293_, lean_object* v_name_294_){
_start:
{
lean_object* v_map_295_; lean_object* v___f_296_; lean_object* v___x_297_; 
v_map_295_ = lean_ctor_get(v_inst_293_, 0);
lean_inc(v_map_295_);
lean_dec_ref(v_inst_293_);
v___f_296_ = lean_alloc_closure((void*)(l_Lake_findLeanLib_x3f___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_296_, 0, v_name_294_);
v___x_297_ = lean_apply_4(v_map_295_, lean_box(0), lean_box(0), v___f_296_, v_inst_292_);
return v___x_297_;
}
}
LEAN_EXPORT lean_object* l_Lake_findLeanLib_x3f(lean_object* v_m_298_, lean_object* v_inst_299_, lean_object* v_inst_300_, lean_object* v_name_301_){
_start:
{
lean_object* v_map_302_; lean_object* v___f_303_; lean_object* v___x_304_; 
v_map_302_ = lean_ctor_get(v_inst_300_, 0);
lean_inc(v_map_302_);
lean_dec_ref(v_inst_300_);
v___f_303_ = lean_alloc_closure((void*)(l_Lake_findLeanLib_x3f___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_303_, 0, v_name_301_);
v___x_304_ = lean_apply_4(v_map_302_, lean_box(0), lean_box(0), v___f_303_, v_inst_299_);
return v___x_304_;
}
}
LEAN_EXPORT lean_object* l_Lake_findExternLib_x3f___redArg___lam__0(lean_object* v_name_305_, lean_object* v_x_306_){
_start:
{
lean_object* v___x_307_; 
v___x_307_ = l_Lake_Workspace_findExternLib_x3f(v_name_305_, v_x_306_);
return v___x_307_;
}
}
LEAN_EXPORT lean_object* l_Lake_findExternLib_x3f___redArg___lam__0___boxed(lean_object* v_name_308_, lean_object* v_x_309_){
_start:
{
lean_object* v_res_310_; 
v_res_310_ = l_Lake_findExternLib_x3f___redArg___lam__0(v_name_308_, v_x_309_);
lean_dec_ref(v_x_309_);
lean_dec(v_name_308_);
return v_res_310_;
}
}
LEAN_EXPORT lean_object* l_Lake_findExternLib_x3f___redArg(lean_object* v_inst_311_, lean_object* v_inst_312_, lean_object* v_name_313_){
_start:
{
lean_object* v_map_314_; lean_object* v___f_315_; lean_object* v___x_316_; 
v_map_314_ = lean_ctor_get(v_inst_312_, 0);
lean_inc(v_map_314_);
lean_dec_ref(v_inst_312_);
v___f_315_ = lean_alloc_closure((void*)(l_Lake_findExternLib_x3f___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_315_, 0, v_name_313_);
v___x_316_ = lean_apply_4(v_map_314_, lean_box(0), lean_box(0), v___f_315_, v_inst_311_);
return v___x_316_;
}
}
LEAN_EXPORT lean_object* l_Lake_findExternLib_x3f(lean_object* v_m_317_, lean_object* v_inst_318_, lean_object* v_inst_319_, lean_object* v_name_320_){
_start:
{
lean_object* v_map_321_; lean_object* v___f_322_; lean_object* v___x_323_; 
v_map_321_ = lean_ctor_get(v_inst_319_, 0);
lean_inc(v_map_321_);
lean_dec_ref(v_inst_319_);
v___f_322_ = lean_alloc_closure((void*)(l_Lake_findExternLib_x3f___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_322_, 0, v_name_320_);
v___x_323_ = lean_apply_4(v_map_321_, lean_box(0), lean_box(0), v___f_322_, v_inst_318_);
return v___x_323_;
}
}
LEAN_EXPORT lean_object* l_Lake_getServerOptions___redArg___lam__0(lean_object* v_x_324_){
_start:
{
lean_object* v_packages_325_; lean_object* v___x_326_; lean_object* v___x_327_; lean_object* v_config_328_; lean_object* v_toLeanConfig_329_; lean_object* v_leanOptions_330_; lean_object* v_moreServerOptions_331_; lean_object* v___x_332_; lean_object* v___x_333_; 
v_packages_325_ = lean_ctor_get(v_x_324_, 4);
v___x_326_ = lean_unsigned_to_nat(0u);
v___x_327_ = lean_array_fget_borrowed(v_packages_325_, v___x_326_);
v_config_328_ = lean_ctor_get(v___x_327_, 6);
v_toLeanConfig_329_ = lean_ctor_get(v_config_328_, 1);
v_leanOptions_330_ = lean_ctor_get(v_toLeanConfig_329_, 0);
v_moreServerOptions_331_ = lean_ctor_get(v_toLeanConfig_329_, 4);
v___x_332_ = l_Lean_LeanOptions_ofArray(v_leanOptions_330_);
v___x_333_ = l_Lean_LeanOptions_appendArray(v___x_332_, v_moreServerOptions_331_);
return v___x_333_;
}
}
LEAN_EXPORT lean_object* l_Lake_getServerOptions___redArg___lam__0___boxed(lean_object* v_x_334_){
_start:
{
lean_object* v_res_335_; 
v_res_335_ = l_Lake_getServerOptions___redArg___lam__0(v_x_334_);
lean_dec_ref(v_x_334_);
return v_res_335_;
}
}
LEAN_EXPORT lean_object* l_Lake_getServerOptions___redArg(lean_object* v_inst_337_, lean_object* v_inst_338_){
_start:
{
lean_object* v_map_339_; lean_object* v___f_340_; lean_object* v___x_341_; 
v_map_339_ = lean_ctor_get(v_inst_338_, 0);
lean_inc(v_map_339_);
lean_dec_ref(v_inst_338_);
v___f_340_ = ((lean_object*)(l_Lake_getServerOptions___redArg___closed__0));
v___x_341_ = lean_apply_4(v_map_339_, lean_box(0), lean_box(0), v___f_340_, v_inst_337_);
return v___x_341_;
}
}
LEAN_EXPORT lean_object* l_Lake_getServerOptions(lean_object* v_m_342_, lean_object* v_inst_343_, lean_object* v_inst_344_){
_start:
{
lean_object* v_map_345_; lean_object* v___f_346_; lean_object* v___x_347_; 
v_map_345_ = lean_ctor_get(v_inst_344_, 0);
lean_inc(v_map_345_);
lean_dec_ref(v_inst_344_);
v___f_346_ = ((lean_object*)(l_Lake_getServerOptions___redArg___closed__0));
v___x_347_ = lean_apply_4(v_map_345_, lean_box(0), lean_box(0), v___f_346_, v_inst_343_);
return v___x_347_;
}
}
LEAN_EXPORT lean_object* l_Lake_getLeanOptions___redArg___lam__0(lean_object* v_x_348_){
_start:
{
lean_object* v_packages_349_; lean_object* v___x_350_; lean_object* v___x_351_; lean_object* v_config_352_; lean_object* v_toLeanConfig_353_; lean_object* v_leanOptions_354_; lean_object* v___x_355_; 
v_packages_349_ = lean_ctor_get(v_x_348_, 4);
v___x_350_ = lean_unsigned_to_nat(0u);
v___x_351_ = lean_array_fget_borrowed(v_packages_349_, v___x_350_);
v_config_352_ = lean_ctor_get(v___x_351_, 6);
v_toLeanConfig_353_ = lean_ctor_get(v_config_352_, 1);
v_leanOptions_354_ = lean_ctor_get(v_toLeanConfig_353_, 0);
v___x_355_ = l_Lean_LeanOptions_ofArray(v_leanOptions_354_);
return v___x_355_;
}
}
LEAN_EXPORT lean_object* l_Lake_getLeanOptions___redArg___lam__0___boxed(lean_object* v_x_356_){
_start:
{
lean_object* v_res_357_; 
v_res_357_ = l_Lake_getLeanOptions___redArg___lam__0(v_x_356_);
lean_dec_ref(v_x_356_);
return v_res_357_;
}
}
LEAN_EXPORT lean_object* l_Lake_getLeanOptions___redArg(lean_object* v_inst_359_, lean_object* v_inst_360_){
_start:
{
lean_object* v_map_361_; lean_object* v___f_362_; lean_object* v___x_363_; 
v_map_361_ = lean_ctor_get(v_inst_360_, 0);
lean_inc(v_map_361_);
lean_dec_ref(v_inst_360_);
v___f_362_ = ((lean_object*)(l_Lake_getLeanOptions___redArg___closed__0));
v___x_363_ = lean_apply_4(v_map_361_, lean_box(0), lean_box(0), v___f_362_, v_inst_359_);
return v___x_363_;
}
}
LEAN_EXPORT lean_object* l_Lake_getLeanOptions(lean_object* v_m_364_, lean_object* v_inst_365_, lean_object* v_inst_366_){
_start:
{
lean_object* v_map_367_; lean_object* v___f_368_; lean_object* v___x_369_; 
v_map_367_ = lean_ctor_get(v_inst_366_, 0);
lean_inc(v_map_367_);
lean_dec_ref(v_inst_366_);
v___f_368_ = ((lean_object*)(l_Lake_getLeanOptions___redArg___closed__0));
v___x_369_ = lean_apply_4(v_map_367_, lean_box(0), lean_box(0), v___f_368_, v_inst_365_);
return v___x_369_;
}
}
LEAN_EXPORT lean_object* l_Lake_getLeanArgs___redArg___lam__0(lean_object* v_x_370_){
_start:
{
lean_object* v_packages_371_; lean_object* v___x_372_; lean_object* v___x_373_; lean_object* v_config_374_; lean_object* v_toLeanConfig_375_; lean_object* v_moreLeanArgs_376_; 
v_packages_371_ = lean_ctor_get(v_x_370_, 4);
v___x_372_ = lean_unsigned_to_nat(0u);
v___x_373_ = lean_array_fget_borrowed(v_packages_371_, v___x_372_);
v_config_374_ = lean_ctor_get(v___x_373_, 6);
v_toLeanConfig_375_ = lean_ctor_get(v_config_374_, 1);
v_moreLeanArgs_376_ = lean_ctor_get(v_toLeanConfig_375_, 1);
lean_inc_ref(v_moreLeanArgs_376_);
return v_moreLeanArgs_376_;
}
}
LEAN_EXPORT lean_object* l_Lake_getLeanArgs___redArg___lam__0___boxed(lean_object* v_x_377_){
_start:
{
lean_object* v_res_378_; 
v_res_378_ = l_Lake_getLeanArgs___redArg___lam__0(v_x_377_);
lean_dec_ref(v_x_377_);
return v_res_378_;
}
}
LEAN_EXPORT lean_object* l_Lake_getLeanArgs___redArg(lean_object* v_inst_380_, lean_object* v_inst_381_){
_start:
{
lean_object* v_map_382_; lean_object* v___f_383_; lean_object* v___x_384_; 
v_map_382_ = lean_ctor_get(v_inst_381_, 0);
lean_inc(v_map_382_);
lean_dec_ref(v_inst_381_);
v___f_383_ = ((lean_object*)(l_Lake_getLeanArgs___redArg___closed__0));
v___x_384_ = lean_apply_4(v_map_382_, lean_box(0), lean_box(0), v___f_383_, v_inst_380_);
return v___x_384_;
}
}
LEAN_EXPORT lean_object* l_Lake_getLeanArgs(lean_object* v_m_385_, lean_object* v_inst_386_, lean_object* v_inst_387_){
_start:
{
lean_object* v_map_388_; lean_object* v___f_389_; lean_object* v___x_390_; 
v_map_388_ = lean_ctor_get(v_inst_387_, 0);
lean_inc(v_map_388_);
lean_dec_ref(v_inst_387_);
v___f_389_ = ((lean_object*)(l_Lake_getLeanArgs___redArg___closed__0));
v___x_390_ = lean_apply_4(v_map_388_, lean_box(0), lean_box(0), v___f_389_, v_inst_386_);
return v___x_390_;
}
}
LEAN_EXPORT lean_object* l_Lake_getLeanPath___redArg(lean_object* v_inst_392_, lean_object* v_inst_393_){
_start:
{
lean_object* v_map_394_; lean_object* v___f_395_; lean_object* v___x_396_; 
v_map_394_ = lean_ctor_get(v_inst_393_, 0);
lean_inc(v_map_394_);
lean_dec_ref(v_inst_393_);
v___f_395_ = ((lean_object*)(l_Lake_getLeanPath___redArg___closed__0));
v___x_396_ = lean_apply_4(v_map_394_, lean_box(0), lean_box(0), v___f_395_, v_inst_392_);
return v___x_396_;
}
}
LEAN_EXPORT lean_object* l_Lake_getLeanPath(lean_object* v_m_397_, lean_object* v_inst_398_, lean_object* v_inst_399_){
_start:
{
lean_object* v_map_400_; lean_object* v___f_401_; lean_object* v___x_402_; 
v_map_400_ = lean_ctor_get(v_inst_399_, 0);
lean_inc(v_map_400_);
lean_dec_ref(v_inst_399_);
v___f_401_ = ((lean_object*)(l_Lake_getLeanPath___redArg___closed__0));
v___x_402_ = lean_apply_4(v_map_400_, lean_box(0), lean_box(0), v___f_401_, v_inst_398_);
return v___x_402_;
}
}
LEAN_EXPORT lean_object* l_Lake_getLeanSrcPath___redArg(lean_object* v_inst_404_, lean_object* v_inst_405_){
_start:
{
lean_object* v_map_406_; lean_object* v___f_407_; lean_object* v___x_408_; 
v_map_406_ = lean_ctor_get(v_inst_405_, 0);
lean_inc(v_map_406_);
lean_dec_ref(v_inst_405_);
v___f_407_ = ((lean_object*)(l_Lake_getLeanSrcPath___redArg___closed__0));
v___x_408_ = lean_apply_4(v_map_406_, lean_box(0), lean_box(0), v___f_407_, v_inst_404_);
return v___x_408_;
}
}
LEAN_EXPORT lean_object* l_Lake_getLeanSrcPath(lean_object* v_m_409_, lean_object* v_inst_410_, lean_object* v_inst_411_){
_start:
{
lean_object* v_map_412_; lean_object* v___f_413_; lean_object* v___x_414_; 
v_map_412_ = lean_ctor_get(v_inst_411_, 0);
lean_inc(v_map_412_);
lean_dec_ref(v_inst_411_);
v___f_413_ = ((lean_object*)(l_Lake_getLeanSrcPath___redArg___closed__0));
v___x_414_ = lean_apply_4(v_map_412_, lean_box(0), lean_box(0), v___f_413_, v_inst_410_);
return v___x_414_;
}
}
LEAN_EXPORT lean_object* l_Lake_getSharedLibPath___redArg(lean_object* v_inst_416_, lean_object* v_inst_417_){
_start:
{
lean_object* v_map_418_; lean_object* v___f_419_; lean_object* v___x_420_; 
v_map_418_ = lean_ctor_get(v_inst_417_, 0);
lean_inc(v_map_418_);
lean_dec_ref(v_inst_417_);
v___f_419_ = ((lean_object*)(l_Lake_getSharedLibPath___redArg___closed__0));
v___x_420_ = lean_apply_4(v_map_418_, lean_box(0), lean_box(0), v___f_419_, v_inst_416_);
return v___x_420_;
}
}
LEAN_EXPORT lean_object* l_Lake_getSharedLibPath(lean_object* v_m_421_, lean_object* v_inst_422_, lean_object* v_inst_423_){
_start:
{
lean_object* v_map_424_; lean_object* v___f_425_; lean_object* v___x_426_; 
v_map_424_ = lean_ctor_get(v_inst_423_, 0);
lean_inc(v_map_424_);
lean_dec_ref(v_inst_423_);
v___f_425_ = ((lean_object*)(l_Lake_getSharedLibPath___redArg___closed__0));
v___x_426_ = lean_apply_4(v_map_424_, lean_box(0), lean_box(0), v___f_425_, v_inst_422_);
return v___x_426_;
}
}
LEAN_EXPORT lean_object* l_Lake_getAugmentedLeanPath___redArg(lean_object* v_inst_428_, lean_object* v_inst_429_){
_start:
{
lean_object* v_map_430_; lean_object* v___f_431_; lean_object* v___x_432_; 
v_map_430_ = lean_ctor_get(v_inst_429_, 0);
lean_inc(v_map_430_);
lean_dec_ref(v_inst_429_);
v___f_431_ = ((lean_object*)(l_Lake_getAugmentedLeanPath___redArg___closed__0));
v___x_432_ = lean_apply_4(v_map_430_, lean_box(0), lean_box(0), v___f_431_, v_inst_428_);
return v___x_432_;
}
}
LEAN_EXPORT lean_object* l_Lake_getAugmentedLeanPath(lean_object* v_m_433_, lean_object* v_inst_434_, lean_object* v_inst_435_){
_start:
{
lean_object* v_map_436_; lean_object* v___f_437_; lean_object* v___x_438_; 
v_map_436_ = lean_ctor_get(v_inst_435_, 0);
lean_inc(v_map_436_);
lean_dec_ref(v_inst_435_);
v___f_437_ = ((lean_object*)(l_Lake_getAugmentedLeanPath___redArg___closed__0));
v___x_438_ = lean_apply_4(v_map_436_, lean_box(0), lean_box(0), v___f_437_, v_inst_434_);
return v___x_438_;
}
}
LEAN_EXPORT lean_object* l_Lake_getAugmentedLeanSrcPath___redArg(lean_object* v_inst_440_, lean_object* v_inst_441_){
_start:
{
lean_object* v_map_442_; lean_object* v___f_443_; lean_object* v___x_444_; 
v_map_442_ = lean_ctor_get(v_inst_441_, 0);
lean_inc(v_map_442_);
lean_dec_ref(v_inst_441_);
v___f_443_ = ((lean_object*)(l_Lake_getAugmentedLeanSrcPath___redArg___closed__0));
v___x_444_ = lean_apply_4(v_map_442_, lean_box(0), lean_box(0), v___f_443_, v_inst_440_);
return v___x_444_;
}
}
LEAN_EXPORT lean_object* l_Lake_getAugmentedLeanSrcPath(lean_object* v_m_445_, lean_object* v_inst_446_, lean_object* v_inst_447_){
_start:
{
lean_object* v_map_448_; lean_object* v___f_449_; lean_object* v___x_450_; 
v_map_448_ = lean_ctor_get(v_inst_447_, 0);
lean_inc(v_map_448_);
lean_dec_ref(v_inst_447_);
v___f_449_ = ((lean_object*)(l_Lake_getAugmentedLeanSrcPath___redArg___closed__0));
v___x_450_ = lean_apply_4(v_map_448_, lean_box(0), lean_box(0), v___f_449_, v_inst_446_);
return v___x_450_;
}
}
LEAN_EXPORT lean_object* l_Lake_getAugmentedSharedLibPath___redArg(lean_object* v_inst_452_, lean_object* v_inst_453_){
_start:
{
lean_object* v_map_454_; lean_object* v___f_455_; lean_object* v___x_456_; 
v_map_454_ = lean_ctor_get(v_inst_453_, 0);
lean_inc(v_map_454_);
lean_dec_ref(v_inst_453_);
v___f_455_ = ((lean_object*)(l_Lake_getAugmentedSharedLibPath___redArg___closed__0));
v___x_456_ = lean_apply_4(v_map_454_, lean_box(0), lean_box(0), v___f_455_, v_inst_452_);
return v___x_456_;
}
}
LEAN_EXPORT lean_object* l_Lake_getAugmentedSharedLibPath(lean_object* v_m_457_, lean_object* v_inst_458_, lean_object* v_inst_459_){
_start:
{
lean_object* v_map_460_; lean_object* v___f_461_; lean_object* v___x_462_; 
v_map_460_ = lean_ctor_get(v_inst_459_, 0);
lean_inc(v_map_460_);
lean_dec_ref(v_inst_459_);
v___f_461_ = ((lean_object*)(l_Lake_getAugmentedSharedLibPath___redArg___closed__0));
v___x_462_ = lean_apply_4(v_map_460_, lean_box(0), lean_box(0), v___f_461_, v_inst_458_);
return v___x_462_;
}
}
LEAN_EXPORT lean_object* l_Lake_getAugmentedEnv___redArg(lean_object* v_inst_464_, lean_object* v_inst_465_){
_start:
{
lean_object* v_map_466_; lean_object* v___f_467_; lean_object* v___x_468_; 
v_map_466_ = lean_ctor_get(v_inst_465_, 0);
lean_inc(v_map_466_);
lean_dec_ref(v_inst_465_);
v___f_467_ = ((lean_object*)(l_Lake_getAugmentedEnv___redArg___closed__0));
v___x_468_ = lean_apply_4(v_map_466_, lean_box(0), lean_box(0), v___f_467_, v_inst_464_);
return v___x_468_;
}
}
LEAN_EXPORT lean_object* l_Lake_getAugmentedEnv(lean_object* v_m_469_, lean_object* v_inst_470_, lean_object* v_inst_471_){
_start:
{
lean_object* v_map_472_; lean_object* v___f_473_; lean_object* v___x_474_; 
v_map_472_ = lean_ctor_get(v_inst_471_, 0);
lean_inc(v_map_472_);
lean_dec_ref(v_inst_471_);
v___f_473_ = ((lean_object*)(l_Lake_getAugmentedEnv___redArg___closed__0));
v___x_474_ = lean_apply_4(v_map_472_, lean_box(0), lean_box(0), v___f_473_, v_inst_470_);
return v___x_474_;
}
}
LEAN_EXPORT lean_object* l_Lake_getLakeCache___redArg___lam__0(lean_object* v_x_475_){
_start:
{
lean_object* v_lakeCache_476_; 
v_lakeCache_476_ = lean_ctor_get(v_x_475_, 2);
lean_inc_ref(v_lakeCache_476_);
return v_lakeCache_476_;
}
}
LEAN_EXPORT lean_object* l_Lake_getLakeCache___redArg___lam__0___boxed(lean_object* v_x_477_){
_start:
{
lean_object* v_res_478_; 
v_res_478_ = l_Lake_getLakeCache___redArg___lam__0(v_x_477_);
lean_dec_ref(v_x_477_);
return v_res_478_;
}
}
LEAN_EXPORT lean_object* l_Lake_getLakeCache___redArg(lean_object* v_inst_480_, lean_object* v_inst_481_){
_start:
{
lean_object* v_map_482_; lean_object* v___f_483_; lean_object* v___x_484_; 
v_map_482_ = lean_ctor_get(v_inst_481_, 0);
lean_inc(v_map_482_);
lean_dec_ref(v_inst_481_);
v___f_483_ = ((lean_object*)(l_Lake_getLakeCache___redArg___closed__0));
v___x_484_ = lean_apply_4(v_map_482_, lean_box(0), lean_box(0), v___f_483_, v_inst_480_);
return v___x_484_;
}
}
LEAN_EXPORT lean_object* l_Lake_getLakeCache(lean_object* v_m_485_, lean_object* v_inst_486_, lean_object* v_inst_487_){
_start:
{
lean_object* v_map_488_; lean_object* v___f_489_; lean_object* v___x_490_; 
v_map_488_ = lean_ctor_get(v_inst_487_, 0);
lean_inc(v_map_488_);
lean_dec_ref(v_inst_487_);
v___f_489_ = ((lean_object*)(l_Lake_getLakeCache___redArg___closed__0));
v___x_490_ = lean_apply_4(v_map_488_, lean_box(0), lean_box(0), v___f_489_, v_inst_486_);
return v___x_490_;
}
}
LEAN_EXPORT lean_object* l_Lake_getArtifact_x3f___redArg___lam__1(lean_object* v_descr_491_, lean_object* v_inst_492_, lean_object* v_x_493_){
_start:
{
lean_object* v___x_494_; lean_object* v___x_495_; 
v___x_494_ = lean_alloc_closure((void*)(l_Lake_Cache_getArtifact_x3f___boxed), 3, 2);
lean_closure_set(v___x_494_, 0, v_x_493_);
lean_closure_set(v___x_494_, 1, v_descr_491_);
v___x_495_ = lean_apply_2(v_inst_492_, lean_box(0), v___x_494_);
return v___x_495_;
}
}
LEAN_EXPORT lean_object* l_Lake_getArtifact_x3f___redArg(lean_object* v_inst_496_, lean_object* v_inst_497_, lean_object* v_inst_498_, lean_object* v_inst_499_, lean_object* v_descr_500_){
_start:
{
lean_object* v_map_501_; lean_object* v___f_502_; lean_object* v___f_503_; lean_object* v___x_504_; lean_object* v___x_505_; 
v_map_501_ = lean_ctor_get(v_inst_497_, 0);
lean_inc(v_map_501_);
lean_dec_ref(v_inst_497_);
v___f_502_ = ((lean_object*)(l_Lake_getLakeCache___redArg___closed__0));
v___f_503_ = lean_alloc_closure((void*)(l_Lake_getArtifact_x3f___redArg___lam__1), 3, 2);
lean_closure_set(v___f_503_, 0, v_descr_500_);
lean_closure_set(v___f_503_, 1, v_inst_499_);
v___x_504_ = lean_apply_4(v_map_501_, lean_box(0), lean_box(0), v___f_502_, v_inst_496_);
v___x_505_ = lean_apply_4(v_inst_498_, lean_box(0), lean_box(0), v___x_504_, v___f_503_);
return v___x_505_;
}
}
LEAN_EXPORT lean_object* l_Lake_getArtifact_x3f(lean_object* v_m_506_, lean_object* v_inst_507_, lean_object* v_inst_508_, lean_object* v_inst_509_, lean_object* v_inst_510_, lean_object* v_descr_511_){
_start:
{
lean_object* v_map_512_; lean_object* v___f_513_; lean_object* v___f_514_; lean_object* v___x_515_; lean_object* v___x_516_; 
v_map_512_ = lean_ctor_get(v_inst_508_, 0);
lean_inc(v_map_512_);
lean_dec_ref(v_inst_508_);
v___f_513_ = ((lean_object*)(l_Lake_getLakeCache___redArg___closed__0));
v___f_514_ = lean_alloc_closure((void*)(l_Lake_getArtifact_x3f___redArg___lam__1), 3, 2);
lean_closure_set(v___f_514_, 0, v_descr_511_);
lean_closure_set(v___f_514_, 1, v_inst_510_);
v___x_515_ = lean_apply_4(v_map_512_, lean_box(0), lean_box(0), v___f_513_, v_inst_507_);
v___x_516_ = lean_apply_4(v_inst_509_, lean_box(0), lean_box(0), v___x_515_, v___f_514_);
return v___x_516_;
}
}
LEAN_EXPORT uint8_t l_Lake_Package_restoreAllArtifacts___redArg___lam__0(lean_object* v_self_517_, lean_object* v_x_518_){
_start:
{
lean_object* v_config_519_; lean_object* v_restoreAllArtifacts_x3f_520_; 
v_config_519_ = lean_ctor_get(v_self_517_, 6);
v_restoreAllArtifacts_x3f_520_ = lean_ctor_get(v_config_519_, 25);
if (lean_obj_tag(v_restoreAllArtifacts_x3f_520_) == 0)
{
lean_object* v_lakeEnv_521_; lean_object* v_restoreAllArtifacts_x3f_522_; 
v_lakeEnv_521_ = lean_ctor_get(v_x_518_, 0);
v_restoreAllArtifacts_x3f_522_ = lean_ctor_get(v_lakeEnv_521_, 7);
if (lean_obj_tag(v_restoreAllArtifacts_x3f_522_) == 0)
{
lean_object* v_packages_523_; lean_object* v___x_524_; lean_object* v___x_525_; lean_object* v_config_526_; lean_object* v_restoreAllArtifacts_x3f_527_; 
v_packages_523_ = lean_ctor_get(v_x_518_, 4);
v___x_524_ = lean_unsigned_to_nat(0u);
v___x_525_ = lean_array_fget_borrowed(v_packages_523_, v___x_524_);
v_config_526_ = lean_ctor_get(v___x_525_, 6);
v_restoreAllArtifacts_x3f_527_ = lean_ctor_get(v_config_526_, 25);
if (lean_obj_tag(v_restoreAllArtifacts_x3f_527_) == 0)
{
uint8_t v___x_528_; 
v___x_528_ = 0;
return v___x_528_;
}
else
{
lean_object* v_val_529_; uint8_t v___x_530_; 
v_val_529_ = lean_ctor_get(v_restoreAllArtifacts_x3f_527_, 0);
v___x_530_ = lean_unbox(v_val_529_);
return v___x_530_;
}
}
else
{
lean_object* v_val_531_; uint8_t v___x_532_; 
v_val_531_ = lean_ctor_get(v_restoreAllArtifacts_x3f_522_, 0);
v___x_532_ = lean_unbox(v_val_531_);
return v___x_532_;
}
}
else
{
lean_object* v_val_533_; uint8_t v___x_534_; 
v_val_533_ = lean_ctor_get(v_restoreAllArtifacts_x3f_520_, 0);
v___x_534_ = lean_unbox(v_val_533_);
return v___x_534_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_Package_restoreAllArtifacts___redArg___lam__0___boxed(lean_object* v_self_535_, lean_object* v_x_536_){
_start:
{
uint8_t v_res_537_; lean_object* v_r_538_; 
v_res_537_ = l_Lake_Package_restoreAllArtifacts___redArg___lam__0(v_self_535_, v_x_536_);
lean_dec_ref(v_x_536_);
lean_dec_ref(v_self_535_);
v_r_538_ = lean_box(v_res_537_);
return v_r_538_;
}
}
LEAN_EXPORT lean_object* l_Lake_Package_restoreAllArtifacts___redArg(lean_object* v_inst_539_, lean_object* v_inst_540_, lean_object* v_self_541_){
_start:
{
lean_object* v_map_542_; lean_object* v___f_543_; lean_object* v___x_544_; 
v_map_542_ = lean_ctor_get(v_inst_539_, 0);
lean_inc(v_map_542_);
lean_dec_ref(v_inst_539_);
v___f_543_ = lean_alloc_closure((void*)(l_Lake_Package_restoreAllArtifacts___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_543_, 0, v_self_541_);
v___x_544_ = lean_apply_4(v_map_542_, lean_box(0), lean_box(0), v___f_543_, v_inst_540_);
return v___x_544_;
}
}
LEAN_EXPORT lean_object* l_Lake_Package_restoreAllArtifacts(lean_object* v_m_545_, lean_object* v_inst_546_, lean_object* v_inst_547_, lean_object* v_self_548_){
_start:
{
lean_object* v_map_549_; lean_object* v___f_550_; lean_object* v___x_551_; 
v_map_549_ = lean_ctor_get(v_inst_546_, 0);
lean_inc(v_map_549_);
lean_dec_ref(v_inst_546_);
v___f_550_ = lean_alloc_closure((void*)(l_Lake_Package_restoreAllArtifacts___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_550_, 0, v_self_548_);
v___x_551_ = lean_apply_4(v_map_549_, lean_box(0), lean_box(0), v___f_550_, v_inst_547_);
return v___x_551_;
}
}
LEAN_EXPORT uint8_t l_Lake_Package_isArtifactCacheReadable___redArg___lam__0(lean_object* v_self_552_, lean_object* v_x_553_){
_start:
{
lean_object* v_config_554_; lean_object* v_enableArtifactCache_x3f_555_; 
v_config_554_ = lean_ctor_get(v_self_552_, 6);
v_enableArtifactCache_x3f_555_ = lean_ctor_get(v_config_554_, 24);
if (lean_obj_tag(v_enableArtifactCache_x3f_555_) == 0)
{
lean_object* v_lakeEnv_556_; lean_object* v_enableArtifactCache_x3f_557_; 
v_lakeEnv_556_ = lean_ctor_get(v_x_553_, 0);
v_enableArtifactCache_x3f_557_ = lean_ctor_get(v_lakeEnv_556_, 6);
if (lean_obj_tag(v_enableArtifactCache_x3f_557_) == 0)
{
lean_object* v_packages_558_; lean_object* v___x_559_; lean_object* v___x_560_; lean_object* v_config_561_; lean_object* v_enableArtifactCache_x3f_562_; 
v_packages_558_ = lean_ctor_get(v_x_553_, 4);
v___x_559_ = lean_unsigned_to_nat(0u);
v___x_560_ = lean_array_fget_borrowed(v_packages_558_, v___x_559_);
v_config_561_ = lean_ctor_get(v___x_560_, 6);
v_enableArtifactCache_x3f_562_ = lean_ctor_get(v_config_561_, 24);
if (lean_obj_tag(v_enableArtifactCache_x3f_562_) == 0)
{
uint8_t v___x_563_; 
v___x_563_ = 1;
return v___x_563_;
}
else
{
lean_object* v_val_564_; uint8_t v___x_565_; 
v_val_564_ = lean_ctor_get(v_enableArtifactCache_x3f_562_, 0);
v___x_565_ = lean_unbox(v_val_564_);
return v___x_565_;
}
}
else
{
lean_object* v_val_566_; uint8_t v___x_567_; 
v_val_566_ = lean_ctor_get(v_enableArtifactCache_x3f_557_, 0);
v___x_567_ = lean_unbox(v_val_566_);
return v___x_567_;
}
}
else
{
lean_object* v_val_568_; uint8_t v___x_569_; 
v_val_568_ = lean_ctor_get(v_enableArtifactCache_x3f_555_, 0);
v___x_569_ = lean_unbox(v_val_568_);
return v___x_569_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_Package_isArtifactCacheReadable___redArg___lam__0___boxed(lean_object* v_self_570_, lean_object* v_x_571_){
_start:
{
uint8_t v_res_572_; lean_object* v_r_573_; 
v_res_572_ = l_Lake_Package_isArtifactCacheReadable___redArg___lam__0(v_self_570_, v_x_571_);
lean_dec_ref(v_x_571_);
lean_dec_ref(v_self_570_);
v_r_573_ = lean_box(v_res_572_);
return v_r_573_;
}
}
LEAN_EXPORT lean_object* l_Lake_Package_isArtifactCacheReadable___redArg(lean_object* v_inst_574_, lean_object* v_inst_575_, lean_object* v_self_576_){
_start:
{
lean_object* v_map_577_; lean_object* v___f_578_; lean_object* v___x_579_; 
v_map_577_ = lean_ctor_get(v_inst_574_, 0);
lean_inc(v_map_577_);
lean_dec_ref(v_inst_574_);
v___f_578_ = lean_alloc_closure((void*)(l_Lake_Package_isArtifactCacheReadable___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_578_, 0, v_self_576_);
v___x_579_ = lean_apply_4(v_map_577_, lean_box(0), lean_box(0), v___f_578_, v_inst_575_);
return v___x_579_;
}
}
LEAN_EXPORT lean_object* l_Lake_Package_isArtifactCacheReadable(lean_object* v_m_580_, lean_object* v_inst_581_, lean_object* v_inst_582_, lean_object* v_self_583_){
_start:
{
lean_object* v_map_584_; lean_object* v___f_585_; lean_object* v___x_586_; 
v_map_584_ = lean_ctor_get(v_inst_581_, 0);
lean_inc(v_map_584_);
lean_dec_ref(v_inst_581_);
v___f_585_ = lean_alloc_closure((void*)(l_Lake_Package_isArtifactCacheReadable___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_585_, 0, v_self_583_);
v___x_586_ = lean_apply_4(v_map_584_, lean_box(0), lean_box(0), v___f_585_, v_inst_582_);
return v___x_586_;
}
}
LEAN_EXPORT uint8_t l_Lake_Package_isArtifactCacheWritable___redArg___lam__0(lean_object* v_self_587_, lean_object* v_x_588_){
_start:
{
lean_object* v_config_589_; lean_object* v_enableArtifactCache_x3f_590_; 
v_config_589_ = lean_ctor_get(v_self_587_, 6);
v_enableArtifactCache_x3f_590_ = lean_ctor_get(v_config_589_, 24);
if (lean_obj_tag(v_enableArtifactCache_x3f_590_) == 0)
{
lean_object* v_lakeEnv_591_; lean_object* v_enableArtifactCache_x3f_592_; 
v_lakeEnv_591_ = lean_ctor_get(v_x_588_, 0);
v_enableArtifactCache_x3f_592_ = lean_ctor_get(v_lakeEnv_591_, 6);
if (lean_obj_tag(v_enableArtifactCache_x3f_592_) == 0)
{
lean_object* v_packages_593_; lean_object* v___x_594_; lean_object* v___x_595_; lean_object* v_config_596_; lean_object* v_enableArtifactCache_x3f_597_; 
v_packages_593_ = lean_ctor_get(v_x_588_, 4);
v___x_594_ = lean_unsigned_to_nat(0u);
v___x_595_ = lean_array_fget_borrowed(v_packages_593_, v___x_594_);
v_config_596_ = lean_ctor_get(v___x_595_, 6);
v_enableArtifactCache_x3f_597_ = lean_ctor_get(v_config_596_, 24);
if (lean_obj_tag(v_enableArtifactCache_x3f_597_) == 0)
{
uint8_t v___x_598_; 
v___x_598_ = 0;
return v___x_598_;
}
else
{
lean_object* v_val_599_; uint8_t v___x_600_; 
v_val_599_ = lean_ctor_get(v_enableArtifactCache_x3f_597_, 0);
v___x_600_ = lean_unbox(v_val_599_);
return v___x_600_;
}
}
else
{
lean_object* v_val_601_; uint8_t v___x_602_; 
v_val_601_ = lean_ctor_get(v_enableArtifactCache_x3f_592_, 0);
v___x_602_ = lean_unbox(v_val_601_);
return v___x_602_;
}
}
else
{
lean_object* v_val_603_; uint8_t v___x_604_; 
v_val_603_ = lean_ctor_get(v_enableArtifactCache_x3f_590_, 0);
v___x_604_ = lean_unbox(v_val_603_);
return v___x_604_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_Package_isArtifactCacheWritable___redArg___lam__0___boxed(lean_object* v_self_605_, lean_object* v_x_606_){
_start:
{
uint8_t v_res_607_; lean_object* v_r_608_; 
v_res_607_ = l_Lake_Package_isArtifactCacheWritable___redArg___lam__0(v_self_605_, v_x_606_);
lean_dec_ref(v_x_606_);
lean_dec_ref(v_self_605_);
v_r_608_ = lean_box(v_res_607_);
return v_r_608_;
}
}
LEAN_EXPORT lean_object* l_Lake_Package_isArtifactCacheWritable___redArg(lean_object* v_inst_609_, lean_object* v_inst_610_, lean_object* v_self_611_){
_start:
{
lean_object* v_map_612_; lean_object* v___f_613_; lean_object* v___x_614_; 
v_map_612_ = lean_ctor_get(v_inst_609_, 0);
lean_inc(v_map_612_);
lean_dec_ref(v_inst_609_);
v___f_613_ = lean_alloc_closure((void*)(l_Lake_Package_isArtifactCacheWritable___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_613_, 0, v_self_611_);
v___x_614_ = lean_apply_4(v_map_612_, lean_box(0), lean_box(0), v___f_613_, v_inst_610_);
return v___x_614_;
}
}
LEAN_EXPORT lean_object* l_Lake_Package_isArtifactCacheWritable(lean_object* v_m_615_, lean_object* v_inst_616_, lean_object* v_inst_617_, lean_object* v_self_618_){
_start:
{
lean_object* v_map_619_; lean_object* v___f_620_; lean_object* v___x_621_; 
v_map_619_ = lean_ctor_get(v_inst_616_, 0);
lean_inc(v_map_619_);
lean_dec_ref(v_inst_616_);
v___f_620_ = lean_alloc_closure((void*)(l_Lake_Package_isArtifactCacheWritable___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_620_, 0, v_self_618_);
v___x_621_ = lean_apply_4(v_map_619_, lean_box(0), lean_box(0), v___f_620_, v_inst_617_);
return v___x_621_;
}
}
LEAN_EXPORT lean_object* l_Lake_Package_isArtifactCacheEnabled___redArg(lean_object* v_inst_622_, lean_object* v_inst_623_, lean_object* v_self_624_){
_start:
{
lean_object* v_map_625_; lean_object* v___f_626_; lean_object* v___x_627_; 
v_map_625_ = lean_ctor_get(v_inst_622_, 0);
lean_inc(v_map_625_);
lean_dec_ref(v_inst_622_);
v___f_626_ = lean_alloc_closure((void*)(l_Lake_Package_isArtifactCacheWritable___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_626_, 0, v_self_624_);
v___x_627_ = lean_apply_4(v_map_625_, lean_box(0), lean_box(0), v___f_626_, v_inst_623_);
return v___x_627_;
}
}
LEAN_EXPORT lean_object* l_Lake_Package_isArtifactCacheEnabled(lean_object* v_m_628_, lean_object* v_inst_629_, lean_object* v_inst_630_, lean_object* v_self_631_){
_start:
{
lean_object* v_map_632_; lean_object* v___f_633_; lean_object* v___x_634_; 
v_map_632_ = lean_ctor_get(v_inst_629_, 0);
lean_inc(v_map_632_);
lean_dec_ref(v_inst_629_);
v___f_633_ = lean_alloc_closure((void*)(l_Lake_Package_isArtifactCacheWritable___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_633_, 0, v_self_631_);
v___x_634_ = lean_apply_4(v_map_632_, lean_box(0), lean_box(0), v___f_633_, v_inst_630_);
return v___x_634_;
}
}
LEAN_EXPORT lean_object* l_Lake_getLakeEnv___redArg(lean_object* v_inst_635_){
_start:
{
lean_inc(v_inst_635_);
return v_inst_635_;
}
}
LEAN_EXPORT lean_object* l_Lake_getLakeEnv___redArg___boxed(lean_object* v_inst_636_){
_start:
{
lean_object* v_res_637_; 
v_res_637_ = l_Lake_getLakeEnv___redArg(v_inst_636_);
lean_dec(v_inst_636_);
return v_res_637_;
}
}
LEAN_EXPORT lean_object* l_Lake_getLakeEnv(lean_object* v_m_638_, lean_object* v_inst_639_){
_start:
{
lean_inc(v_inst_639_);
return v_inst_639_;
}
}
LEAN_EXPORT lean_object* l_Lake_getLakeEnv___boxed(lean_object* v_m_640_, lean_object* v_inst_641_){
_start:
{
lean_object* v_res_642_; 
v_res_642_ = l_Lake_getLakeEnv(v_m_640_, v_inst_641_);
lean_dec(v_inst_641_);
return v_res_642_;
}
}
LEAN_EXPORT uint8_t l_Lake_getNoCache___redArg___lam__0(lean_object* v_x_643_){
_start:
{
uint8_t v_noCache_644_; 
v_noCache_644_ = lean_ctor_get_uint8(v_x_643_, sizeof(void*)*20);
return v_noCache_644_;
}
}
LEAN_EXPORT lean_object* l_Lake_getNoCache___redArg___lam__0___boxed(lean_object* v_x_645_){
_start:
{
uint8_t v_res_646_; lean_object* v_r_647_; 
v_res_646_ = l_Lake_getNoCache___redArg___lam__0(v_x_645_);
lean_dec_ref(v_x_645_);
v_r_647_ = lean_box(v_res_646_);
return v_r_647_;
}
}
LEAN_EXPORT lean_object* l_Lake_getNoCache___redArg(lean_object* v_inst_649_, lean_object* v_inst_650_){
_start:
{
lean_object* v_map_651_; lean_object* v___f_652_; lean_object* v___x_653_; 
v_map_651_ = lean_ctor_get(v_inst_650_, 0);
lean_inc(v_map_651_);
lean_dec_ref(v_inst_650_);
v___f_652_ = ((lean_object*)(l_Lake_getNoCache___redArg___closed__0));
v___x_653_ = lean_apply_4(v_map_651_, lean_box(0), lean_box(0), v___f_652_, v_inst_649_);
return v___x_653_;
}
}
LEAN_EXPORT lean_object* l_Lake_getNoCache(lean_object* v_m_654_, lean_object* v_inst_655_, lean_object* v_inst_656_, lean_object* v_inst_657_){
_start:
{
lean_object* v_map_658_; lean_object* v___f_659_; lean_object* v___x_660_; 
v_map_658_ = lean_ctor_get(v_inst_656_, 0);
lean_inc(v_map_658_);
lean_dec_ref(v_inst_656_);
v___f_659_ = ((lean_object*)(l_Lake_getNoCache___redArg___closed__0));
v___x_660_ = lean_apply_4(v_map_658_, lean_box(0), lean_box(0), v___f_659_, v_inst_655_);
return v___x_660_;
}
}
LEAN_EXPORT lean_object* l_Lake_getNoCache___boxed(lean_object* v_m_661_, lean_object* v_inst_662_, lean_object* v_inst_663_, lean_object* v_inst_664_){
_start:
{
lean_object* v_res_665_; 
v_res_665_ = l_Lake_getNoCache(v_m_661_, v_inst_662_, v_inst_663_, v_inst_664_);
lean_dec(v_inst_664_);
return v_res_665_;
}
}
LEAN_EXPORT uint8_t l_Lake_getTryCache___redArg___lam__0(lean_object* v_x_666_){
_start:
{
uint8_t v_noCache_667_; 
v_noCache_667_ = lean_ctor_get_uint8(v_x_666_, sizeof(void*)*20);
if (v_noCache_667_ == 0)
{
uint8_t v___x_668_; 
v___x_668_ = 1;
return v___x_668_;
}
else
{
uint8_t v___x_669_; 
v___x_669_ = 0;
return v___x_669_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_getTryCache___redArg___lam__0___boxed(lean_object* v_x_670_){
_start:
{
uint8_t v_res_671_; lean_object* v_r_672_; 
v_res_671_ = l_Lake_getTryCache___redArg___lam__0(v_x_670_);
lean_dec_ref(v_x_670_);
v_r_672_ = lean_box(v_res_671_);
return v_r_672_;
}
}
LEAN_EXPORT lean_object* l_Lake_getTryCache___redArg(lean_object* v_inst_674_, lean_object* v_inst_675_){
_start:
{
lean_object* v_map_676_; lean_object* v___f_677_; lean_object* v___x_678_; 
v_map_676_ = lean_ctor_get(v_inst_675_, 0);
lean_inc(v_map_676_);
lean_dec_ref(v_inst_675_);
v___f_677_ = ((lean_object*)(l_Lake_getTryCache___redArg___closed__0));
v___x_678_ = lean_apply_4(v_map_676_, lean_box(0), lean_box(0), v___f_677_, v_inst_674_);
return v___x_678_;
}
}
LEAN_EXPORT lean_object* l_Lake_getTryCache(lean_object* v_m_679_, lean_object* v_inst_680_, lean_object* v_inst_681_, lean_object* v_inst_682_){
_start:
{
lean_object* v_map_683_; lean_object* v___f_684_; lean_object* v___x_685_; 
v_map_683_ = lean_ctor_get(v_inst_681_, 0);
lean_inc(v_map_683_);
lean_dec_ref(v_inst_681_);
v___f_684_ = ((lean_object*)(l_Lake_getTryCache___redArg___closed__0));
v___x_685_ = lean_apply_4(v_map_683_, lean_box(0), lean_box(0), v___f_684_, v_inst_680_);
return v___x_685_;
}
}
LEAN_EXPORT lean_object* l_Lake_getTryCache___boxed(lean_object* v_m_686_, lean_object* v_inst_687_, lean_object* v_inst_688_, lean_object* v_inst_689_){
_start:
{
lean_object* v_res_690_; 
v_res_690_ = l_Lake_getTryCache(v_m_686_, v_inst_687_, v_inst_688_, v_inst_689_);
lean_dec(v_inst_689_);
return v_res_690_;
}
}
LEAN_EXPORT lean_object* l_Lake_getPkgUrlMap___redArg___lam__0(lean_object* v_x_691_){
_start:
{
lean_object* v_pkgUrlMap_692_; 
v_pkgUrlMap_692_ = lean_ctor_get(v_x_691_, 5);
lean_inc(v_pkgUrlMap_692_);
return v_pkgUrlMap_692_;
}
}
LEAN_EXPORT lean_object* l_Lake_getPkgUrlMap___redArg___lam__0___boxed(lean_object* v_x_693_){
_start:
{
lean_object* v_res_694_; 
v_res_694_ = l_Lake_getPkgUrlMap___redArg___lam__0(v_x_693_);
lean_dec_ref(v_x_693_);
return v_res_694_;
}
}
LEAN_EXPORT lean_object* l_Lake_getPkgUrlMap___redArg(lean_object* v_inst_696_, lean_object* v_inst_697_){
_start:
{
lean_object* v_map_698_; lean_object* v___f_699_; lean_object* v___x_700_; 
v_map_698_ = lean_ctor_get(v_inst_697_, 0);
lean_inc(v_map_698_);
lean_dec_ref(v_inst_697_);
v___f_699_ = ((lean_object*)(l_Lake_getPkgUrlMap___redArg___closed__0));
v___x_700_ = lean_apply_4(v_map_698_, lean_box(0), lean_box(0), v___f_699_, v_inst_696_);
return v___x_700_;
}
}
LEAN_EXPORT lean_object* l_Lake_getPkgUrlMap(lean_object* v_m_701_, lean_object* v_inst_702_, lean_object* v_inst_703_){
_start:
{
lean_object* v_map_704_; lean_object* v___f_705_; lean_object* v___x_706_; 
v_map_704_ = lean_ctor_get(v_inst_703_, 0);
lean_inc(v_map_704_);
lean_dec_ref(v_inst_703_);
v___f_705_ = ((lean_object*)(l_Lake_getPkgUrlMap___redArg___closed__0));
v___x_706_ = lean_apply_4(v_map_704_, lean_box(0), lean_box(0), v___f_705_, v_inst_702_);
return v___x_706_;
}
}
LEAN_EXPORT lean_object* l_Lake_getElanToolchain___redArg___lam__0(lean_object* v_x_707_){
_start:
{
lean_object* v_toolchain_708_; 
v_toolchain_708_ = lean_ctor_get(v_x_707_, 19);
lean_inc_ref(v_toolchain_708_);
return v_toolchain_708_;
}
}
LEAN_EXPORT lean_object* l_Lake_getElanToolchain___redArg___lam__0___boxed(lean_object* v_x_709_){
_start:
{
lean_object* v_res_710_; 
v_res_710_ = l_Lake_getElanToolchain___redArg___lam__0(v_x_709_);
lean_dec_ref(v_x_709_);
return v_res_710_;
}
}
LEAN_EXPORT lean_object* l_Lake_getElanToolchain___redArg(lean_object* v_inst_712_, lean_object* v_inst_713_){
_start:
{
lean_object* v_map_714_; lean_object* v___f_715_; lean_object* v___x_716_; 
v_map_714_ = lean_ctor_get(v_inst_713_, 0);
lean_inc(v_map_714_);
lean_dec_ref(v_inst_713_);
v___f_715_ = ((lean_object*)(l_Lake_getElanToolchain___redArg___closed__0));
v___x_716_ = lean_apply_4(v_map_714_, lean_box(0), lean_box(0), v___f_715_, v_inst_712_);
return v___x_716_;
}
}
LEAN_EXPORT lean_object* l_Lake_getElanToolchain(lean_object* v_m_717_, lean_object* v_inst_718_, lean_object* v_inst_719_){
_start:
{
lean_object* v_map_720_; lean_object* v___f_721_; lean_object* v___x_722_; 
v_map_720_ = lean_ctor_get(v_inst_719_, 0);
lean_inc(v_map_720_);
lean_dec_ref(v_inst_719_);
v___f_721_ = ((lean_object*)(l_Lake_getElanToolchain___redArg___closed__0));
v___x_722_ = lean_apply_4(v_map_720_, lean_box(0), lean_box(0), v___f_721_, v_inst_718_);
return v___x_722_;
}
}
LEAN_EXPORT lean_object* l_Lake_getEnvLeanPath___redArg(lean_object* v_inst_724_, lean_object* v_inst_725_){
_start:
{
lean_object* v_map_726_; lean_object* v___f_727_; lean_object* v___x_728_; 
v_map_726_ = lean_ctor_get(v_inst_725_, 0);
lean_inc(v_map_726_);
lean_dec_ref(v_inst_725_);
v___f_727_ = ((lean_object*)(l_Lake_getEnvLeanPath___redArg___closed__0));
v___x_728_ = lean_apply_4(v_map_726_, lean_box(0), lean_box(0), v___f_727_, v_inst_724_);
return v___x_728_;
}
}
LEAN_EXPORT lean_object* l_Lake_getEnvLeanPath(lean_object* v_m_729_, lean_object* v_inst_730_, lean_object* v_inst_731_){
_start:
{
lean_object* v_map_732_; lean_object* v___f_733_; lean_object* v___x_734_; 
v_map_732_ = lean_ctor_get(v_inst_731_, 0);
lean_inc(v_map_732_);
lean_dec_ref(v_inst_731_);
v___f_733_ = ((lean_object*)(l_Lake_getEnvLeanPath___redArg___closed__0));
v___x_734_ = lean_apply_4(v_map_732_, lean_box(0), lean_box(0), v___f_733_, v_inst_730_);
return v___x_734_;
}
}
LEAN_EXPORT lean_object* l_Lake_getEnvLeanSrcPath___redArg(lean_object* v_inst_736_, lean_object* v_inst_737_){
_start:
{
lean_object* v_map_738_; lean_object* v___f_739_; lean_object* v___x_740_; 
v_map_738_ = lean_ctor_get(v_inst_737_, 0);
lean_inc(v_map_738_);
lean_dec_ref(v_inst_737_);
v___f_739_ = ((lean_object*)(l_Lake_getEnvLeanSrcPath___redArg___closed__0));
v___x_740_ = lean_apply_4(v_map_738_, lean_box(0), lean_box(0), v___f_739_, v_inst_736_);
return v___x_740_;
}
}
LEAN_EXPORT lean_object* l_Lake_getEnvLeanSrcPath(lean_object* v_m_741_, lean_object* v_inst_742_, lean_object* v_inst_743_){
_start:
{
lean_object* v_map_744_; lean_object* v___f_745_; lean_object* v___x_746_; 
v_map_744_ = lean_ctor_get(v_inst_743_, 0);
lean_inc(v_map_744_);
lean_dec_ref(v_inst_743_);
v___f_745_ = ((lean_object*)(l_Lake_getEnvLeanSrcPath___redArg___closed__0));
v___x_746_ = lean_apply_4(v_map_744_, lean_box(0), lean_box(0), v___f_745_, v_inst_742_);
return v___x_746_;
}
}
LEAN_EXPORT lean_object* l_Lake_getEnvSharedLibPath___redArg(lean_object* v_inst_748_, lean_object* v_inst_749_){
_start:
{
lean_object* v_map_750_; lean_object* v___f_751_; lean_object* v___x_752_; 
v_map_750_ = lean_ctor_get(v_inst_749_, 0);
lean_inc(v_map_750_);
lean_dec_ref(v_inst_749_);
v___f_751_ = ((lean_object*)(l_Lake_getEnvSharedLibPath___redArg___closed__0));
v___x_752_ = lean_apply_4(v_map_750_, lean_box(0), lean_box(0), v___f_751_, v_inst_748_);
return v___x_752_;
}
}
LEAN_EXPORT lean_object* l_Lake_getEnvSharedLibPath(lean_object* v_m_753_, lean_object* v_inst_754_, lean_object* v_inst_755_){
_start:
{
lean_object* v_map_756_; lean_object* v___f_757_; lean_object* v___x_758_; 
v_map_756_ = lean_ctor_get(v_inst_755_, 0);
lean_inc(v_map_756_);
lean_dec_ref(v_inst_755_);
v___f_757_ = ((lean_object*)(l_Lake_getEnvSharedLibPath___redArg___closed__0));
v___x_758_ = lean_apply_4(v_map_756_, lean_box(0), lean_box(0), v___f_757_, v_inst_754_);
return v___x_758_;
}
}
LEAN_EXPORT lean_object* l_Lake_getElanInstall_x3f___redArg___lam__0(lean_object* v_x_759_){
_start:
{
lean_object* v_elan_x3f_760_; 
v_elan_x3f_760_ = lean_ctor_get(v_x_759_, 2);
lean_inc(v_elan_x3f_760_);
return v_elan_x3f_760_;
}
}
LEAN_EXPORT lean_object* l_Lake_getElanInstall_x3f___redArg___lam__0___boxed(lean_object* v_x_761_){
_start:
{
lean_object* v_res_762_; 
v_res_762_ = l_Lake_getElanInstall_x3f___redArg___lam__0(v_x_761_);
lean_dec_ref(v_x_761_);
return v_res_762_;
}
}
LEAN_EXPORT lean_object* l_Lake_getElanInstall_x3f___redArg(lean_object* v_inst_764_, lean_object* v_inst_765_){
_start:
{
lean_object* v_map_766_; lean_object* v___f_767_; lean_object* v___x_768_; 
v_map_766_ = lean_ctor_get(v_inst_765_, 0);
lean_inc(v_map_766_);
lean_dec_ref(v_inst_765_);
v___f_767_ = ((lean_object*)(l_Lake_getElanInstall_x3f___redArg___closed__0));
v___x_768_ = lean_apply_4(v_map_766_, lean_box(0), lean_box(0), v___f_767_, v_inst_764_);
return v___x_768_;
}
}
LEAN_EXPORT lean_object* l_Lake_getElanInstall_x3f(lean_object* v_m_769_, lean_object* v_inst_770_, lean_object* v_inst_771_){
_start:
{
lean_object* v_map_772_; lean_object* v___f_773_; lean_object* v___x_774_; 
v_map_772_ = lean_ctor_get(v_inst_771_, 0);
lean_inc(v_map_772_);
lean_dec_ref(v_inst_771_);
v___f_773_ = ((lean_object*)(l_Lake_getElanInstall_x3f___redArg___closed__0));
v___x_774_ = lean_apply_4(v_map_772_, lean_box(0), lean_box(0), v___f_773_, v_inst_770_);
return v___x_774_;
}
}
LEAN_EXPORT lean_object* l_Lake_getElanHome_x3f___redArg___lam__0(lean_object* v_x_775_){
_start:
{
if (lean_obj_tag(v_x_775_) == 0)
{
lean_object* v___x_776_; 
v___x_776_ = lean_box(0);
return v___x_776_;
}
else
{
lean_object* v_val_777_; lean_object* v___x_779_; uint8_t v_isShared_780_; uint8_t v_isSharedCheck_785_; 
v_val_777_ = lean_ctor_get(v_x_775_, 0);
v_isSharedCheck_785_ = !lean_is_exclusive(v_x_775_);
if (v_isSharedCheck_785_ == 0)
{
v___x_779_ = v_x_775_;
v_isShared_780_ = v_isSharedCheck_785_;
goto v_resetjp_778_;
}
else
{
lean_inc(v_val_777_);
lean_dec(v_x_775_);
v___x_779_ = lean_box(0);
v_isShared_780_ = v_isSharedCheck_785_;
goto v_resetjp_778_;
}
v_resetjp_778_:
{
lean_object* v_home_781_; lean_object* v___x_783_; 
v_home_781_ = lean_ctor_get(v_val_777_, 0);
lean_inc_ref(v_home_781_);
lean_dec(v_val_777_);
if (v_isShared_780_ == 0)
{
lean_ctor_set(v___x_779_, 0, v_home_781_);
v___x_783_ = v___x_779_;
goto v_reusejp_782_;
}
else
{
lean_object* v_reuseFailAlloc_784_; 
v_reuseFailAlloc_784_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_784_, 0, v_home_781_);
v___x_783_ = v_reuseFailAlloc_784_;
goto v_reusejp_782_;
}
v_reusejp_782_:
{
return v___x_783_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_getElanHome_x3f___redArg(lean_object* v_inst_787_, lean_object* v_inst_788_){
_start:
{
lean_object* v_map_789_; lean_object* v___f_790_; lean_object* v___f_791_; lean_object* v___x_792_; lean_object* v___x_793_; 
v_map_789_ = lean_ctor_get(v_inst_788_, 0);
lean_inc_n(v_map_789_, 2);
lean_dec_ref(v_inst_788_);
v___f_790_ = ((lean_object*)(l_Lake_getElanHome_x3f___redArg___closed__0));
v___f_791_ = ((lean_object*)(l_Lake_getElanInstall_x3f___redArg___closed__0));
v___x_792_ = lean_apply_4(v_map_789_, lean_box(0), lean_box(0), v___f_791_, v_inst_787_);
v___x_793_ = lean_apply_4(v_map_789_, lean_box(0), lean_box(0), v___f_790_, v___x_792_);
return v___x_793_;
}
}
LEAN_EXPORT lean_object* l_Lake_getElanHome_x3f(lean_object* v_m_794_, lean_object* v_inst_795_, lean_object* v_inst_796_){
_start:
{
lean_object* v_map_797_; lean_object* v___f_798_; lean_object* v___f_799_; lean_object* v___x_800_; lean_object* v___x_801_; 
v_map_797_ = lean_ctor_get(v_inst_796_, 0);
lean_inc_n(v_map_797_, 2);
lean_dec_ref(v_inst_796_);
v___f_798_ = ((lean_object*)(l_Lake_getElanHome_x3f___redArg___closed__0));
v___f_799_ = ((lean_object*)(l_Lake_getElanInstall_x3f___redArg___closed__0));
v___x_800_ = lean_apply_4(v_map_797_, lean_box(0), lean_box(0), v___f_799_, v_inst_795_);
v___x_801_ = lean_apply_4(v_map_797_, lean_box(0), lean_box(0), v___f_798_, v___x_800_);
return v___x_801_;
}
}
LEAN_EXPORT lean_object* l_Lake_getElan_x3f___redArg___lam__0(lean_object* v_x_802_){
_start:
{
if (lean_obj_tag(v_x_802_) == 0)
{
lean_object* v___x_803_; 
v___x_803_ = lean_box(0);
return v___x_803_;
}
else
{
lean_object* v_val_804_; lean_object* v___x_806_; uint8_t v_isShared_807_; uint8_t v_isSharedCheck_812_; 
v_val_804_ = lean_ctor_get(v_x_802_, 0);
v_isSharedCheck_812_ = !lean_is_exclusive(v_x_802_);
if (v_isSharedCheck_812_ == 0)
{
v___x_806_ = v_x_802_;
v_isShared_807_ = v_isSharedCheck_812_;
goto v_resetjp_805_;
}
else
{
lean_inc(v_val_804_);
lean_dec(v_x_802_);
v___x_806_ = lean_box(0);
v_isShared_807_ = v_isSharedCheck_812_;
goto v_resetjp_805_;
}
v_resetjp_805_:
{
lean_object* v_elan_808_; lean_object* v___x_810_; 
v_elan_808_ = lean_ctor_get(v_val_804_, 1);
lean_inc_ref(v_elan_808_);
lean_dec(v_val_804_);
if (v_isShared_807_ == 0)
{
lean_ctor_set(v___x_806_, 0, v_elan_808_);
v___x_810_ = v___x_806_;
goto v_reusejp_809_;
}
else
{
lean_object* v_reuseFailAlloc_811_; 
v_reuseFailAlloc_811_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_811_, 0, v_elan_808_);
v___x_810_ = v_reuseFailAlloc_811_;
goto v_reusejp_809_;
}
v_reusejp_809_:
{
return v___x_810_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_getElan_x3f___redArg(lean_object* v_inst_814_, lean_object* v_inst_815_){
_start:
{
lean_object* v_map_816_; lean_object* v___f_817_; lean_object* v___f_818_; lean_object* v___x_819_; lean_object* v___x_820_; 
v_map_816_ = lean_ctor_get(v_inst_815_, 0);
lean_inc_n(v_map_816_, 2);
lean_dec_ref(v_inst_815_);
v___f_817_ = ((lean_object*)(l_Lake_getElan_x3f___redArg___closed__0));
v___f_818_ = ((lean_object*)(l_Lake_getElanInstall_x3f___redArg___closed__0));
v___x_819_ = lean_apply_4(v_map_816_, lean_box(0), lean_box(0), v___f_818_, v_inst_814_);
v___x_820_ = lean_apply_4(v_map_816_, lean_box(0), lean_box(0), v___f_817_, v___x_819_);
return v___x_820_;
}
}
LEAN_EXPORT lean_object* l_Lake_getElan_x3f(lean_object* v_m_821_, lean_object* v_inst_822_, lean_object* v_inst_823_){
_start:
{
lean_object* v_map_824_; lean_object* v___f_825_; lean_object* v___f_826_; lean_object* v___x_827_; lean_object* v___x_828_; 
v_map_824_ = lean_ctor_get(v_inst_823_, 0);
lean_inc_n(v_map_824_, 2);
lean_dec_ref(v_inst_823_);
v___f_825_ = ((lean_object*)(l_Lake_getElan_x3f___redArg___closed__0));
v___f_826_ = ((lean_object*)(l_Lake_getElanInstall_x3f___redArg___closed__0));
v___x_827_ = lean_apply_4(v_map_824_, lean_box(0), lean_box(0), v___f_826_, v_inst_822_);
v___x_828_ = lean_apply_4(v_map_824_, lean_box(0), lean_box(0), v___f_825_, v___x_827_);
return v___x_828_;
}
}
LEAN_EXPORT lean_object* l_Lake_getLeanInstall___redArg___lam__0(lean_object* v_x_829_){
_start:
{
lean_object* v_lean_830_; 
v_lean_830_ = lean_ctor_get(v_x_829_, 1);
lean_inc_ref(v_lean_830_);
return v_lean_830_;
}
}
LEAN_EXPORT lean_object* l_Lake_getLeanInstall___redArg___lam__0___boxed(lean_object* v_x_831_){
_start:
{
lean_object* v_res_832_; 
v_res_832_ = l_Lake_getLeanInstall___redArg___lam__0(v_x_831_);
lean_dec_ref(v_x_831_);
return v_res_832_;
}
}
LEAN_EXPORT lean_object* l_Lake_getLeanInstall___redArg(lean_object* v_inst_834_, lean_object* v_inst_835_){
_start:
{
lean_object* v_map_836_; lean_object* v___f_837_; lean_object* v___x_838_; 
v_map_836_ = lean_ctor_get(v_inst_835_, 0);
lean_inc(v_map_836_);
lean_dec_ref(v_inst_835_);
v___f_837_ = ((lean_object*)(l_Lake_getLeanInstall___redArg___closed__0));
v___x_838_ = lean_apply_4(v_map_836_, lean_box(0), lean_box(0), v___f_837_, v_inst_834_);
return v___x_838_;
}
}
LEAN_EXPORT lean_object* l_Lake_getLeanInstall(lean_object* v_m_839_, lean_object* v_inst_840_, lean_object* v_inst_841_){
_start:
{
lean_object* v_map_842_; lean_object* v___f_843_; lean_object* v___x_844_; 
v_map_842_ = lean_ctor_get(v_inst_841_, 0);
lean_inc(v_map_842_);
lean_dec_ref(v_inst_841_);
v___f_843_ = ((lean_object*)(l_Lake_getLeanInstall___redArg___closed__0));
v___x_844_ = lean_apply_4(v_map_842_, lean_box(0), lean_box(0), v___f_843_, v_inst_840_);
return v___x_844_;
}
}
LEAN_EXPORT lean_object* l_Lake_getLeanSysroot___redArg___lam__0(lean_object* v_x_845_){
_start:
{
lean_object* v_sysroot_846_; 
v_sysroot_846_ = lean_ctor_get(v_x_845_, 0);
lean_inc_ref(v_sysroot_846_);
return v_sysroot_846_;
}
}
LEAN_EXPORT lean_object* l_Lake_getLeanSysroot___redArg___lam__0___boxed(lean_object* v_x_847_){
_start:
{
lean_object* v_res_848_; 
v_res_848_ = l_Lake_getLeanSysroot___redArg___lam__0(v_x_847_);
lean_dec_ref(v_x_847_);
return v_res_848_;
}
}
LEAN_EXPORT lean_object* l_Lake_getLeanSysroot___redArg(lean_object* v_inst_850_, lean_object* v_inst_851_){
_start:
{
lean_object* v_map_852_; lean_object* v___f_853_; lean_object* v___f_854_; lean_object* v___x_855_; lean_object* v___x_856_; 
v_map_852_ = lean_ctor_get(v_inst_851_, 0);
lean_inc_n(v_map_852_, 2);
lean_dec_ref(v_inst_851_);
v___f_853_ = ((lean_object*)(l_Lake_getLeanSysroot___redArg___closed__0));
v___f_854_ = ((lean_object*)(l_Lake_getLeanInstall___redArg___closed__0));
v___x_855_ = lean_apply_4(v_map_852_, lean_box(0), lean_box(0), v___f_854_, v_inst_850_);
v___x_856_ = lean_apply_4(v_map_852_, lean_box(0), lean_box(0), v___f_853_, v___x_855_);
return v___x_856_;
}
}
LEAN_EXPORT lean_object* l_Lake_getLeanSysroot(lean_object* v_m_857_, lean_object* v_inst_858_, lean_object* v_inst_859_){
_start:
{
lean_object* v_map_860_; lean_object* v___f_861_; lean_object* v___f_862_; lean_object* v___x_863_; lean_object* v___x_864_; 
v_map_860_ = lean_ctor_get(v_inst_859_, 0);
lean_inc_n(v_map_860_, 2);
lean_dec_ref(v_inst_859_);
v___f_861_ = ((lean_object*)(l_Lake_getLeanSysroot___redArg___closed__0));
v___f_862_ = ((lean_object*)(l_Lake_getLeanInstall___redArg___closed__0));
v___x_863_ = lean_apply_4(v_map_860_, lean_box(0), lean_box(0), v___f_862_, v_inst_858_);
v___x_864_ = lean_apply_4(v_map_860_, lean_box(0), lean_box(0), v___f_861_, v___x_863_);
return v___x_864_;
}
}
LEAN_EXPORT lean_object* l_Lake_getLeanSrcDir___redArg___lam__0(lean_object* v_x_865_){
_start:
{
lean_object* v_srcDir_866_; 
v_srcDir_866_ = lean_ctor_get(v_x_865_, 2);
lean_inc_ref(v_srcDir_866_);
return v_srcDir_866_;
}
}
LEAN_EXPORT lean_object* l_Lake_getLeanSrcDir___redArg___lam__0___boxed(lean_object* v_x_867_){
_start:
{
lean_object* v_res_868_; 
v_res_868_ = l_Lake_getLeanSrcDir___redArg___lam__0(v_x_867_);
lean_dec_ref(v_x_867_);
return v_res_868_;
}
}
LEAN_EXPORT lean_object* l_Lake_getLeanSrcDir___redArg(lean_object* v_inst_870_, lean_object* v_inst_871_){
_start:
{
lean_object* v_map_872_; lean_object* v___f_873_; lean_object* v___f_874_; lean_object* v___x_875_; lean_object* v___x_876_; 
v_map_872_ = lean_ctor_get(v_inst_871_, 0);
lean_inc_n(v_map_872_, 2);
lean_dec_ref(v_inst_871_);
v___f_873_ = ((lean_object*)(l_Lake_getLeanSrcDir___redArg___closed__0));
v___f_874_ = ((lean_object*)(l_Lake_getLeanInstall___redArg___closed__0));
v___x_875_ = lean_apply_4(v_map_872_, lean_box(0), lean_box(0), v___f_874_, v_inst_870_);
v___x_876_ = lean_apply_4(v_map_872_, lean_box(0), lean_box(0), v___f_873_, v___x_875_);
return v___x_876_;
}
}
LEAN_EXPORT lean_object* l_Lake_getLeanSrcDir(lean_object* v_m_877_, lean_object* v_inst_878_, lean_object* v_inst_879_){
_start:
{
lean_object* v_map_880_; lean_object* v___f_881_; lean_object* v___f_882_; lean_object* v___x_883_; lean_object* v___x_884_; 
v_map_880_ = lean_ctor_get(v_inst_879_, 0);
lean_inc_n(v_map_880_, 2);
lean_dec_ref(v_inst_879_);
v___f_881_ = ((lean_object*)(l_Lake_getLeanSrcDir___redArg___closed__0));
v___f_882_ = ((lean_object*)(l_Lake_getLeanInstall___redArg___closed__0));
v___x_883_ = lean_apply_4(v_map_880_, lean_box(0), lean_box(0), v___f_882_, v_inst_878_);
v___x_884_ = lean_apply_4(v_map_880_, lean_box(0), lean_box(0), v___f_881_, v___x_883_);
return v___x_884_;
}
}
LEAN_EXPORT lean_object* l_Lake_getLeanLibDir___redArg___lam__0(lean_object* v_x_885_){
_start:
{
lean_object* v_leanLibDir_886_; 
v_leanLibDir_886_ = lean_ctor_get(v_x_885_, 3);
lean_inc_ref(v_leanLibDir_886_);
return v_leanLibDir_886_;
}
}
LEAN_EXPORT lean_object* l_Lake_getLeanLibDir___redArg___lam__0___boxed(lean_object* v_x_887_){
_start:
{
lean_object* v_res_888_; 
v_res_888_ = l_Lake_getLeanLibDir___redArg___lam__0(v_x_887_);
lean_dec_ref(v_x_887_);
return v_res_888_;
}
}
LEAN_EXPORT lean_object* l_Lake_getLeanLibDir___redArg(lean_object* v_inst_890_, lean_object* v_inst_891_){
_start:
{
lean_object* v_map_892_; lean_object* v___f_893_; lean_object* v___f_894_; lean_object* v___x_895_; lean_object* v___x_896_; 
v_map_892_ = lean_ctor_get(v_inst_891_, 0);
lean_inc_n(v_map_892_, 2);
lean_dec_ref(v_inst_891_);
v___f_893_ = ((lean_object*)(l_Lake_getLeanLibDir___redArg___closed__0));
v___f_894_ = ((lean_object*)(l_Lake_getLeanInstall___redArg___closed__0));
v___x_895_ = lean_apply_4(v_map_892_, lean_box(0), lean_box(0), v___f_894_, v_inst_890_);
v___x_896_ = lean_apply_4(v_map_892_, lean_box(0), lean_box(0), v___f_893_, v___x_895_);
return v___x_896_;
}
}
LEAN_EXPORT lean_object* l_Lake_getLeanLibDir(lean_object* v_m_897_, lean_object* v_inst_898_, lean_object* v_inst_899_){
_start:
{
lean_object* v_map_900_; lean_object* v___f_901_; lean_object* v___f_902_; lean_object* v___x_903_; lean_object* v___x_904_; 
v_map_900_ = lean_ctor_get(v_inst_899_, 0);
lean_inc_n(v_map_900_, 2);
lean_dec_ref(v_inst_899_);
v___f_901_ = ((lean_object*)(l_Lake_getLeanLibDir___redArg___closed__0));
v___f_902_ = ((lean_object*)(l_Lake_getLeanInstall___redArg___closed__0));
v___x_903_ = lean_apply_4(v_map_900_, lean_box(0), lean_box(0), v___f_902_, v_inst_898_);
v___x_904_ = lean_apply_4(v_map_900_, lean_box(0), lean_box(0), v___f_901_, v___x_903_);
return v___x_904_;
}
}
LEAN_EXPORT lean_object* l_Lake_getLeanIncludeDir___redArg___lam__0(lean_object* v_x_905_){
_start:
{
lean_object* v_includeDir_906_; 
v_includeDir_906_ = lean_ctor_get(v_x_905_, 4);
lean_inc_ref(v_includeDir_906_);
return v_includeDir_906_;
}
}
LEAN_EXPORT lean_object* l_Lake_getLeanIncludeDir___redArg___lam__0___boxed(lean_object* v_x_907_){
_start:
{
lean_object* v_res_908_; 
v_res_908_ = l_Lake_getLeanIncludeDir___redArg___lam__0(v_x_907_);
lean_dec_ref(v_x_907_);
return v_res_908_;
}
}
LEAN_EXPORT lean_object* l_Lake_getLeanIncludeDir___redArg(lean_object* v_inst_910_, lean_object* v_inst_911_){
_start:
{
lean_object* v_map_912_; lean_object* v___f_913_; lean_object* v___f_914_; lean_object* v___x_915_; lean_object* v___x_916_; 
v_map_912_ = lean_ctor_get(v_inst_911_, 0);
lean_inc_n(v_map_912_, 2);
lean_dec_ref(v_inst_911_);
v___f_913_ = ((lean_object*)(l_Lake_getLeanIncludeDir___redArg___closed__0));
v___f_914_ = ((lean_object*)(l_Lake_getLeanInstall___redArg___closed__0));
v___x_915_ = lean_apply_4(v_map_912_, lean_box(0), lean_box(0), v___f_914_, v_inst_910_);
v___x_916_ = lean_apply_4(v_map_912_, lean_box(0), lean_box(0), v___f_913_, v___x_915_);
return v___x_916_;
}
}
LEAN_EXPORT lean_object* l_Lake_getLeanIncludeDir(lean_object* v_m_917_, lean_object* v_inst_918_, lean_object* v_inst_919_){
_start:
{
lean_object* v_map_920_; lean_object* v___f_921_; lean_object* v___f_922_; lean_object* v___x_923_; lean_object* v___x_924_; 
v_map_920_ = lean_ctor_get(v_inst_919_, 0);
lean_inc_n(v_map_920_, 2);
lean_dec_ref(v_inst_919_);
v___f_921_ = ((lean_object*)(l_Lake_getLeanIncludeDir___redArg___closed__0));
v___f_922_ = ((lean_object*)(l_Lake_getLeanInstall___redArg___closed__0));
v___x_923_ = lean_apply_4(v_map_920_, lean_box(0), lean_box(0), v___f_922_, v_inst_918_);
v___x_924_ = lean_apply_4(v_map_920_, lean_box(0), lean_box(0), v___f_921_, v___x_923_);
return v___x_924_;
}
}
LEAN_EXPORT lean_object* l_Lake_getLeanSystemLibDir___redArg___lam__0(lean_object* v_x_925_){
_start:
{
lean_object* v_systemLibDir_926_; 
v_systemLibDir_926_ = lean_ctor_get(v_x_925_, 5);
lean_inc_ref(v_systemLibDir_926_);
return v_systemLibDir_926_;
}
}
LEAN_EXPORT lean_object* l_Lake_getLeanSystemLibDir___redArg___lam__0___boxed(lean_object* v_x_927_){
_start:
{
lean_object* v_res_928_; 
v_res_928_ = l_Lake_getLeanSystemLibDir___redArg___lam__0(v_x_927_);
lean_dec_ref(v_x_927_);
return v_res_928_;
}
}
LEAN_EXPORT lean_object* l_Lake_getLeanSystemLibDir___redArg(lean_object* v_inst_930_, lean_object* v_inst_931_){
_start:
{
lean_object* v_map_932_; lean_object* v___f_933_; lean_object* v___f_934_; lean_object* v___x_935_; lean_object* v___x_936_; 
v_map_932_ = lean_ctor_get(v_inst_931_, 0);
lean_inc_n(v_map_932_, 2);
lean_dec_ref(v_inst_931_);
v___f_933_ = ((lean_object*)(l_Lake_getLeanSystemLibDir___redArg___closed__0));
v___f_934_ = ((lean_object*)(l_Lake_getLeanInstall___redArg___closed__0));
v___x_935_ = lean_apply_4(v_map_932_, lean_box(0), lean_box(0), v___f_934_, v_inst_930_);
v___x_936_ = lean_apply_4(v_map_932_, lean_box(0), lean_box(0), v___f_933_, v___x_935_);
return v___x_936_;
}
}
LEAN_EXPORT lean_object* l_Lake_getLeanSystemLibDir(lean_object* v_m_937_, lean_object* v_inst_938_, lean_object* v_inst_939_){
_start:
{
lean_object* v_map_940_; lean_object* v___f_941_; lean_object* v___f_942_; lean_object* v___x_943_; lean_object* v___x_944_; 
v_map_940_ = lean_ctor_get(v_inst_939_, 0);
lean_inc_n(v_map_940_, 2);
lean_dec_ref(v_inst_939_);
v___f_941_ = ((lean_object*)(l_Lake_getLeanSystemLibDir___redArg___closed__0));
v___f_942_ = ((lean_object*)(l_Lake_getLeanInstall___redArg___closed__0));
v___x_943_ = lean_apply_4(v_map_940_, lean_box(0), lean_box(0), v___f_942_, v_inst_938_);
v___x_944_ = lean_apply_4(v_map_940_, lean_box(0), lean_box(0), v___f_941_, v___x_943_);
return v___x_944_;
}
}
LEAN_EXPORT lean_object* l_Lake_getLean___redArg___lam__0(lean_object* v_x_945_){
_start:
{
lean_object* v_lean_946_; 
v_lean_946_ = lean_ctor_get(v_x_945_, 7);
lean_inc_ref(v_lean_946_);
return v_lean_946_;
}
}
LEAN_EXPORT lean_object* l_Lake_getLean___redArg___lam__0___boxed(lean_object* v_x_947_){
_start:
{
lean_object* v_res_948_; 
v_res_948_ = l_Lake_getLean___redArg___lam__0(v_x_947_);
lean_dec_ref(v_x_947_);
return v_res_948_;
}
}
LEAN_EXPORT lean_object* l_Lake_getLean___redArg(lean_object* v_inst_950_, lean_object* v_inst_951_){
_start:
{
lean_object* v_map_952_; lean_object* v___f_953_; lean_object* v___f_954_; lean_object* v___x_955_; lean_object* v___x_956_; 
v_map_952_ = lean_ctor_get(v_inst_951_, 0);
lean_inc_n(v_map_952_, 2);
lean_dec_ref(v_inst_951_);
v___f_953_ = ((lean_object*)(l_Lake_getLean___redArg___closed__0));
v___f_954_ = ((lean_object*)(l_Lake_getLeanInstall___redArg___closed__0));
v___x_955_ = lean_apply_4(v_map_952_, lean_box(0), lean_box(0), v___f_954_, v_inst_950_);
v___x_956_ = lean_apply_4(v_map_952_, lean_box(0), lean_box(0), v___f_953_, v___x_955_);
return v___x_956_;
}
}
LEAN_EXPORT lean_object* l_Lake_getLean(lean_object* v_m_957_, lean_object* v_inst_958_, lean_object* v_inst_959_){
_start:
{
lean_object* v_map_960_; lean_object* v___f_961_; lean_object* v___f_962_; lean_object* v___x_963_; lean_object* v___x_964_; 
v_map_960_ = lean_ctor_get(v_inst_959_, 0);
lean_inc_n(v_map_960_, 2);
lean_dec_ref(v_inst_959_);
v___f_961_ = ((lean_object*)(l_Lake_getLean___redArg___closed__0));
v___f_962_ = ((lean_object*)(l_Lake_getLeanInstall___redArg___closed__0));
v___x_963_ = lean_apply_4(v_map_960_, lean_box(0), lean_box(0), v___f_962_, v_inst_958_);
v___x_964_ = lean_apply_4(v_map_960_, lean_box(0), lean_box(0), v___f_961_, v___x_963_);
return v___x_964_;
}
}
LEAN_EXPORT lean_object* l_Lake_getLeanir___redArg___lam__0(lean_object* v_x_965_){
_start:
{
lean_object* v_leanir_966_; 
v_leanir_966_ = lean_ctor_get(v_x_965_, 8);
lean_inc_ref(v_leanir_966_);
return v_leanir_966_;
}
}
LEAN_EXPORT lean_object* l_Lake_getLeanir___redArg___lam__0___boxed(lean_object* v_x_967_){
_start:
{
lean_object* v_res_968_; 
v_res_968_ = l_Lake_getLeanir___redArg___lam__0(v_x_967_);
lean_dec_ref(v_x_967_);
return v_res_968_;
}
}
LEAN_EXPORT lean_object* l_Lake_getLeanir___redArg(lean_object* v_inst_970_, lean_object* v_inst_971_){
_start:
{
lean_object* v_map_972_; lean_object* v___f_973_; lean_object* v___f_974_; lean_object* v___x_975_; lean_object* v___x_976_; 
v_map_972_ = lean_ctor_get(v_inst_971_, 0);
lean_inc_n(v_map_972_, 2);
lean_dec_ref(v_inst_971_);
v___f_973_ = ((lean_object*)(l_Lake_getLeanir___redArg___closed__0));
v___f_974_ = ((lean_object*)(l_Lake_getLeanInstall___redArg___closed__0));
v___x_975_ = lean_apply_4(v_map_972_, lean_box(0), lean_box(0), v___f_974_, v_inst_970_);
v___x_976_ = lean_apply_4(v_map_972_, lean_box(0), lean_box(0), v___f_973_, v___x_975_);
return v___x_976_;
}
}
LEAN_EXPORT lean_object* l_Lake_getLeanir(lean_object* v_m_977_, lean_object* v_inst_978_, lean_object* v_inst_979_){
_start:
{
lean_object* v_map_980_; lean_object* v___f_981_; lean_object* v___f_982_; lean_object* v___x_983_; lean_object* v___x_984_; 
v_map_980_ = lean_ctor_get(v_inst_979_, 0);
lean_inc_n(v_map_980_, 2);
lean_dec_ref(v_inst_979_);
v___f_981_ = ((lean_object*)(l_Lake_getLeanir___redArg___closed__0));
v___f_982_ = ((lean_object*)(l_Lake_getLeanInstall___redArg___closed__0));
v___x_983_ = lean_apply_4(v_map_980_, lean_box(0), lean_box(0), v___f_982_, v_inst_978_);
v___x_984_ = lean_apply_4(v_map_980_, lean_box(0), lean_box(0), v___f_981_, v___x_983_);
return v___x_984_;
}
}
LEAN_EXPORT lean_object* l_Lake_getLeanc___redArg___lam__0(lean_object* v_x_985_){
_start:
{
lean_object* v_leanc_986_; 
v_leanc_986_ = lean_ctor_get(v_x_985_, 9);
lean_inc_ref(v_leanc_986_);
return v_leanc_986_;
}
}
LEAN_EXPORT lean_object* l_Lake_getLeanc___redArg___lam__0___boxed(lean_object* v_x_987_){
_start:
{
lean_object* v_res_988_; 
v_res_988_ = l_Lake_getLeanc___redArg___lam__0(v_x_987_);
lean_dec_ref(v_x_987_);
return v_res_988_;
}
}
LEAN_EXPORT lean_object* l_Lake_getLeanc___redArg(lean_object* v_inst_990_, lean_object* v_inst_991_){
_start:
{
lean_object* v_map_992_; lean_object* v___f_993_; lean_object* v___f_994_; lean_object* v___x_995_; lean_object* v___x_996_; 
v_map_992_ = lean_ctor_get(v_inst_991_, 0);
lean_inc_n(v_map_992_, 2);
lean_dec_ref(v_inst_991_);
v___f_993_ = ((lean_object*)(l_Lake_getLeanc___redArg___closed__0));
v___f_994_ = ((lean_object*)(l_Lake_getLeanInstall___redArg___closed__0));
v___x_995_ = lean_apply_4(v_map_992_, lean_box(0), lean_box(0), v___f_994_, v_inst_990_);
v___x_996_ = lean_apply_4(v_map_992_, lean_box(0), lean_box(0), v___f_993_, v___x_995_);
return v___x_996_;
}
}
LEAN_EXPORT lean_object* l_Lake_getLeanc(lean_object* v_m_997_, lean_object* v_inst_998_, lean_object* v_inst_999_){
_start:
{
lean_object* v_map_1000_; lean_object* v___f_1001_; lean_object* v___f_1002_; lean_object* v___x_1003_; lean_object* v___x_1004_; 
v_map_1000_ = lean_ctor_get(v_inst_999_, 0);
lean_inc_n(v_map_1000_, 2);
lean_dec_ref(v_inst_999_);
v___f_1001_ = ((lean_object*)(l_Lake_getLeanc___redArg___closed__0));
v___f_1002_ = ((lean_object*)(l_Lake_getLeanInstall___redArg___closed__0));
v___x_1003_ = lean_apply_4(v_map_1000_, lean_box(0), lean_box(0), v___f_1002_, v_inst_998_);
v___x_1004_ = lean_apply_4(v_map_1000_, lean_box(0), lean_box(0), v___f_1001_, v___x_1003_);
return v___x_1004_;
}
}
LEAN_EXPORT lean_object* l_Lake_getLeantar___redArg___lam__0(lean_object* v_x_1005_){
_start:
{
lean_object* v_leantar_1006_; 
v_leantar_1006_ = lean_ctor_get(v_x_1005_, 10);
lean_inc_ref(v_leantar_1006_);
return v_leantar_1006_;
}
}
LEAN_EXPORT lean_object* l_Lake_getLeantar___redArg___lam__0___boxed(lean_object* v_x_1007_){
_start:
{
lean_object* v_res_1008_; 
v_res_1008_ = l_Lake_getLeantar___redArg___lam__0(v_x_1007_);
lean_dec_ref(v_x_1007_);
return v_res_1008_;
}
}
LEAN_EXPORT lean_object* l_Lake_getLeantar___redArg(lean_object* v_inst_1010_, lean_object* v_inst_1011_){
_start:
{
lean_object* v_map_1012_; lean_object* v___f_1013_; lean_object* v___f_1014_; lean_object* v___x_1015_; lean_object* v___x_1016_; 
v_map_1012_ = lean_ctor_get(v_inst_1011_, 0);
lean_inc_n(v_map_1012_, 2);
lean_dec_ref(v_inst_1011_);
v___f_1013_ = ((lean_object*)(l_Lake_getLeantar___redArg___closed__0));
v___f_1014_ = ((lean_object*)(l_Lake_getLeanInstall___redArg___closed__0));
v___x_1015_ = lean_apply_4(v_map_1012_, lean_box(0), lean_box(0), v___f_1014_, v_inst_1010_);
v___x_1016_ = lean_apply_4(v_map_1012_, lean_box(0), lean_box(0), v___f_1013_, v___x_1015_);
return v___x_1016_;
}
}
LEAN_EXPORT lean_object* l_Lake_getLeantar(lean_object* v_m_1017_, lean_object* v_inst_1018_, lean_object* v_inst_1019_){
_start:
{
lean_object* v_map_1020_; lean_object* v___f_1021_; lean_object* v___f_1022_; lean_object* v___x_1023_; lean_object* v___x_1024_; 
v_map_1020_ = lean_ctor_get(v_inst_1019_, 0);
lean_inc_n(v_map_1020_, 2);
lean_dec_ref(v_inst_1019_);
v___f_1021_ = ((lean_object*)(l_Lake_getLeantar___redArg___closed__0));
v___f_1022_ = ((lean_object*)(l_Lake_getLeanInstall___redArg___closed__0));
v___x_1023_ = lean_apply_4(v_map_1020_, lean_box(0), lean_box(0), v___f_1022_, v_inst_1018_);
v___x_1024_ = lean_apply_4(v_map_1020_, lean_box(0), lean_box(0), v___f_1021_, v___x_1023_);
return v___x_1024_;
}
}
LEAN_EXPORT lean_object* l_Lake_getLeanSharedDynlib___redArg___lam__0(lean_object* v_x_1025_){
_start:
{
lean_object* v_sharedDynlib_1026_; 
v_sharedDynlib_1026_ = lean_ctor_get(v_x_1025_, 12);
lean_inc_ref(v_sharedDynlib_1026_);
return v_sharedDynlib_1026_;
}
}
LEAN_EXPORT lean_object* l_Lake_getLeanSharedDynlib___redArg___lam__0___boxed(lean_object* v_x_1027_){
_start:
{
lean_object* v_res_1028_; 
v_res_1028_ = l_Lake_getLeanSharedDynlib___redArg___lam__0(v_x_1027_);
lean_dec_ref(v_x_1027_);
return v_res_1028_;
}
}
LEAN_EXPORT lean_object* l_Lake_getLeanSharedDynlib___redArg(lean_object* v_inst_1030_, lean_object* v_inst_1031_){
_start:
{
lean_object* v_map_1032_; lean_object* v___f_1033_; lean_object* v___f_1034_; lean_object* v___x_1035_; lean_object* v___x_1036_; 
v_map_1032_ = lean_ctor_get(v_inst_1031_, 0);
lean_inc_n(v_map_1032_, 2);
lean_dec_ref(v_inst_1031_);
v___f_1033_ = ((lean_object*)(l_Lake_getLeanSharedDynlib___redArg___closed__0));
v___f_1034_ = ((lean_object*)(l_Lake_getLeanInstall___redArg___closed__0));
v___x_1035_ = lean_apply_4(v_map_1032_, lean_box(0), lean_box(0), v___f_1034_, v_inst_1030_);
v___x_1036_ = lean_apply_4(v_map_1032_, lean_box(0), lean_box(0), v___f_1033_, v___x_1035_);
return v___x_1036_;
}
}
LEAN_EXPORT lean_object* l_Lake_getLeanSharedDynlib(lean_object* v_m_1037_, lean_object* v_inst_1038_, lean_object* v_inst_1039_){
_start:
{
lean_object* v_map_1040_; lean_object* v___f_1041_; lean_object* v___f_1042_; lean_object* v___x_1043_; lean_object* v___x_1044_; 
v_map_1040_ = lean_ctor_get(v_inst_1039_, 0);
lean_inc_n(v_map_1040_, 2);
lean_dec_ref(v_inst_1039_);
v___f_1041_ = ((lean_object*)(l_Lake_getLeanSharedDynlib___redArg___closed__0));
v___f_1042_ = ((lean_object*)(l_Lake_getLeanInstall___redArg___closed__0));
v___x_1043_ = lean_apply_4(v_map_1040_, lean_box(0), lean_box(0), v___f_1042_, v_inst_1038_);
v___x_1044_ = lean_apply_4(v_map_1040_, lean_box(0), lean_box(0), v___f_1041_, v___x_1043_);
return v___x_1044_;
}
}
LEAN_EXPORT lean_object* l_Lake_getLeanSharedDynlibs___redArg___lam__0(lean_object* v_x_1045_){
_start:
{
lean_object* v_sharedDynlibs_1046_; 
v_sharedDynlibs_1046_ = lean_ctor_get(v_x_1045_, 11);
lean_inc_ref(v_sharedDynlibs_1046_);
return v_sharedDynlibs_1046_;
}
}
LEAN_EXPORT lean_object* l_Lake_getLeanSharedDynlibs___redArg___lam__0___boxed(lean_object* v_x_1047_){
_start:
{
lean_object* v_res_1048_; 
v_res_1048_ = l_Lake_getLeanSharedDynlibs___redArg___lam__0(v_x_1047_);
lean_dec_ref(v_x_1047_);
return v_res_1048_;
}
}
LEAN_EXPORT lean_object* l_Lake_getLeanSharedDynlibs___redArg(lean_object* v_inst_1050_, lean_object* v_inst_1051_){
_start:
{
lean_object* v_map_1052_; lean_object* v___f_1053_; lean_object* v___f_1054_; lean_object* v___x_1055_; lean_object* v___x_1056_; 
v_map_1052_ = lean_ctor_get(v_inst_1051_, 0);
lean_inc_n(v_map_1052_, 2);
lean_dec_ref(v_inst_1051_);
v___f_1053_ = ((lean_object*)(l_Lake_getLeanSharedDynlibs___redArg___closed__0));
v___f_1054_ = ((lean_object*)(l_Lake_getLeanInstall___redArg___closed__0));
v___x_1055_ = lean_apply_4(v_map_1052_, lean_box(0), lean_box(0), v___f_1054_, v_inst_1050_);
v___x_1056_ = lean_apply_4(v_map_1052_, lean_box(0), lean_box(0), v___f_1053_, v___x_1055_);
return v___x_1056_;
}
}
LEAN_EXPORT lean_object* l_Lake_getLeanSharedDynlibs(lean_object* v_m_1057_, lean_object* v_inst_1058_, lean_object* v_inst_1059_){
_start:
{
lean_object* v_map_1060_; lean_object* v___f_1061_; lean_object* v___f_1062_; lean_object* v___x_1063_; lean_object* v___x_1064_; 
v_map_1060_ = lean_ctor_get(v_inst_1059_, 0);
lean_inc_n(v_map_1060_, 2);
lean_dec_ref(v_inst_1059_);
v___f_1061_ = ((lean_object*)(l_Lake_getLeanSharedDynlibs___redArg___closed__0));
v___f_1062_ = ((lean_object*)(l_Lake_getLeanInstall___redArg___closed__0));
v___x_1063_ = lean_apply_4(v_map_1060_, lean_box(0), lean_box(0), v___f_1062_, v_inst_1058_);
v___x_1064_ = lean_apply_4(v_map_1060_, lean_box(0), lean_box(0), v___f_1061_, v___x_1063_);
return v___x_1064_;
}
}
LEAN_EXPORT lean_object* l_Lake_getLeanSharedLib___redArg___lam__0(lean_object* v_x_1065_){
_start:
{
lean_object* v_sharedDynlib_1066_; lean_object* v_path_1067_; 
v_sharedDynlib_1066_ = lean_ctor_get(v_x_1065_, 12);
v_path_1067_ = lean_ctor_get(v_sharedDynlib_1066_, 0);
lean_inc_ref(v_path_1067_);
return v_path_1067_;
}
}
LEAN_EXPORT lean_object* l_Lake_getLeanSharedLib___redArg___lam__0___boxed(lean_object* v_x_1068_){
_start:
{
lean_object* v_res_1069_; 
v_res_1069_ = l_Lake_getLeanSharedLib___redArg___lam__0(v_x_1068_);
lean_dec_ref(v_x_1068_);
return v_res_1069_;
}
}
LEAN_EXPORT lean_object* l_Lake_getLeanSharedLib___redArg(lean_object* v_inst_1071_, lean_object* v_inst_1072_){
_start:
{
lean_object* v_map_1073_; lean_object* v___f_1074_; lean_object* v___f_1075_; lean_object* v___x_1076_; lean_object* v___x_1077_; 
v_map_1073_ = lean_ctor_get(v_inst_1072_, 0);
lean_inc_n(v_map_1073_, 2);
lean_dec_ref(v_inst_1072_);
v___f_1074_ = ((lean_object*)(l_Lake_getLeanSharedLib___redArg___closed__0));
v___f_1075_ = ((lean_object*)(l_Lake_getLeanInstall___redArg___closed__0));
v___x_1076_ = lean_apply_4(v_map_1073_, lean_box(0), lean_box(0), v___f_1075_, v_inst_1071_);
v___x_1077_ = lean_apply_4(v_map_1073_, lean_box(0), lean_box(0), v___f_1074_, v___x_1076_);
return v___x_1077_;
}
}
LEAN_EXPORT lean_object* l_Lake_getLeanSharedLib(lean_object* v_m_1078_, lean_object* v_inst_1079_, lean_object* v_inst_1080_){
_start:
{
lean_object* v_map_1081_; lean_object* v___f_1082_; lean_object* v___f_1083_; lean_object* v___x_1084_; lean_object* v___x_1085_; 
v_map_1081_ = lean_ctor_get(v_inst_1080_, 0);
lean_inc_n(v_map_1081_, 2);
lean_dec_ref(v_inst_1080_);
v___f_1082_ = ((lean_object*)(l_Lake_getLeanSharedLib___redArg___closed__0));
v___f_1083_ = ((lean_object*)(l_Lake_getLeanInstall___redArg___closed__0));
v___x_1084_ = lean_apply_4(v_map_1081_, lean_box(0), lean_box(0), v___f_1083_, v_inst_1079_);
v___x_1085_ = lean_apply_4(v_map_1081_, lean_box(0), lean_box(0), v___f_1082_, v___x_1084_);
return v___x_1085_;
}
}
LEAN_EXPORT lean_object* l_Lake_getLeanAr___redArg___lam__0(lean_object* v_x_1086_){
_start:
{
lean_object* v_ar_1087_; 
v_ar_1087_ = lean_ctor_get(v_x_1086_, 13);
lean_inc_ref(v_ar_1087_);
return v_ar_1087_;
}
}
LEAN_EXPORT lean_object* l_Lake_getLeanAr___redArg___lam__0___boxed(lean_object* v_x_1088_){
_start:
{
lean_object* v_res_1089_; 
v_res_1089_ = l_Lake_getLeanAr___redArg___lam__0(v_x_1088_);
lean_dec_ref(v_x_1088_);
return v_res_1089_;
}
}
LEAN_EXPORT lean_object* l_Lake_getLeanAr___redArg(lean_object* v_inst_1091_, lean_object* v_inst_1092_){
_start:
{
lean_object* v_map_1093_; lean_object* v___f_1094_; lean_object* v___f_1095_; lean_object* v___x_1096_; lean_object* v___x_1097_; 
v_map_1093_ = lean_ctor_get(v_inst_1092_, 0);
lean_inc_n(v_map_1093_, 2);
lean_dec_ref(v_inst_1092_);
v___f_1094_ = ((lean_object*)(l_Lake_getLeanAr___redArg___closed__0));
v___f_1095_ = ((lean_object*)(l_Lake_getLeanInstall___redArg___closed__0));
v___x_1096_ = lean_apply_4(v_map_1093_, lean_box(0), lean_box(0), v___f_1095_, v_inst_1091_);
v___x_1097_ = lean_apply_4(v_map_1093_, lean_box(0), lean_box(0), v___f_1094_, v___x_1096_);
return v___x_1097_;
}
}
LEAN_EXPORT lean_object* l_Lake_getLeanAr(lean_object* v_m_1098_, lean_object* v_inst_1099_, lean_object* v_inst_1100_){
_start:
{
lean_object* v_map_1101_; lean_object* v___f_1102_; lean_object* v___f_1103_; lean_object* v___x_1104_; lean_object* v___x_1105_; 
v_map_1101_ = lean_ctor_get(v_inst_1100_, 0);
lean_inc_n(v_map_1101_, 2);
lean_dec_ref(v_inst_1100_);
v___f_1102_ = ((lean_object*)(l_Lake_getLeanAr___redArg___closed__0));
v___f_1103_ = ((lean_object*)(l_Lake_getLeanInstall___redArg___closed__0));
v___x_1104_ = lean_apply_4(v_map_1101_, lean_box(0), lean_box(0), v___f_1103_, v_inst_1099_);
v___x_1105_ = lean_apply_4(v_map_1101_, lean_box(0), lean_box(0), v___f_1102_, v___x_1104_);
return v___x_1105_;
}
}
LEAN_EXPORT lean_object* l_Lake_getLeanCc___redArg___lam__0(lean_object* v_x_1106_){
_start:
{
lean_object* v_cc_1107_; 
v_cc_1107_ = lean_ctor_get(v_x_1106_, 14);
lean_inc_ref(v_cc_1107_);
return v_cc_1107_;
}
}
LEAN_EXPORT lean_object* l_Lake_getLeanCc___redArg___lam__0___boxed(lean_object* v_x_1108_){
_start:
{
lean_object* v_res_1109_; 
v_res_1109_ = l_Lake_getLeanCc___redArg___lam__0(v_x_1108_);
lean_dec_ref(v_x_1108_);
return v_res_1109_;
}
}
LEAN_EXPORT lean_object* l_Lake_getLeanCc___redArg(lean_object* v_inst_1111_, lean_object* v_inst_1112_){
_start:
{
lean_object* v_map_1113_; lean_object* v___f_1114_; lean_object* v___f_1115_; lean_object* v___x_1116_; lean_object* v___x_1117_; 
v_map_1113_ = lean_ctor_get(v_inst_1112_, 0);
lean_inc_n(v_map_1113_, 2);
lean_dec_ref(v_inst_1112_);
v___f_1114_ = ((lean_object*)(l_Lake_getLeanCc___redArg___closed__0));
v___f_1115_ = ((lean_object*)(l_Lake_getLeanInstall___redArg___closed__0));
v___x_1116_ = lean_apply_4(v_map_1113_, lean_box(0), lean_box(0), v___f_1115_, v_inst_1111_);
v___x_1117_ = lean_apply_4(v_map_1113_, lean_box(0), lean_box(0), v___f_1114_, v___x_1116_);
return v___x_1117_;
}
}
LEAN_EXPORT lean_object* l_Lake_getLeanCc(lean_object* v_m_1118_, lean_object* v_inst_1119_, lean_object* v_inst_1120_){
_start:
{
lean_object* v_map_1121_; lean_object* v___f_1122_; lean_object* v___f_1123_; lean_object* v___x_1124_; lean_object* v___x_1125_; 
v_map_1121_ = lean_ctor_get(v_inst_1120_, 0);
lean_inc_n(v_map_1121_, 2);
lean_dec_ref(v_inst_1120_);
v___f_1122_ = ((lean_object*)(l_Lake_getLeanCc___redArg___closed__0));
v___f_1123_ = ((lean_object*)(l_Lake_getLeanInstall___redArg___closed__0));
v___x_1124_ = lean_apply_4(v_map_1121_, lean_box(0), lean_box(0), v___f_1123_, v_inst_1119_);
v___x_1125_ = lean_apply_4(v_map_1121_, lean_box(0), lean_box(0), v___f_1122_, v___x_1124_);
return v___x_1125_;
}
}
LEAN_EXPORT lean_object* l_Lake_getLeanCc_x3f___redArg(lean_object* v_inst_1127_, lean_object* v_inst_1128_){
_start:
{
lean_object* v_map_1129_; lean_object* v___f_1130_; lean_object* v___f_1131_; lean_object* v___x_1132_; lean_object* v___x_1133_; 
v_map_1129_ = lean_ctor_get(v_inst_1128_, 0);
lean_inc_n(v_map_1129_, 2);
lean_dec_ref(v_inst_1128_);
v___f_1130_ = ((lean_object*)(l_Lake_getLeanCc_x3f___redArg___closed__0));
v___f_1131_ = ((lean_object*)(l_Lake_getLeanInstall___redArg___closed__0));
v___x_1132_ = lean_apply_4(v_map_1129_, lean_box(0), lean_box(0), v___f_1131_, v_inst_1127_);
v___x_1133_ = lean_apply_4(v_map_1129_, lean_box(0), lean_box(0), v___f_1130_, v___x_1132_);
return v___x_1133_;
}
}
LEAN_EXPORT lean_object* l_Lake_getLeanCc_x3f(lean_object* v_m_1134_, lean_object* v_inst_1135_, lean_object* v_inst_1136_){
_start:
{
lean_object* v_map_1137_; lean_object* v___f_1138_; lean_object* v___f_1139_; lean_object* v___x_1140_; lean_object* v___x_1141_; 
v_map_1137_ = lean_ctor_get(v_inst_1136_, 0);
lean_inc_n(v_map_1137_, 2);
lean_dec_ref(v_inst_1136_);
v___f_1138_ = ((lean_object*)(l_Lake_getLeanCc_x3f___redArg___closed__0));
v___f_1139_ = ((lean_object*)(l_Lake_getLeanInstall___redArg___closed__0));
v___x_1140_ = lean_apply_4(v_map_1137_, lean_box(0), lean_box(0), v___f_1139_, v_inst_1135_);
v___x_1141_ = lean_apply_4(v_map_1137_, lean_box(0), lean_box(0), v___f_1138_, v___x_1140_);
return v___x_1141_;
}
}
LEAN_EXPORT lean_object* l_Lake_getLeanLinkSharedFlags___redArg___lam__0(lean_object* v_x_1142_){
_start:
{
lean_object* v_ccLinkSharedFlags_1143_; 
v_ccLinkSharedFlags_1143_ = lean_ctor_get(v_x_1142_, 20);
lean_inc_ref(v_ccLinkSharedFlags_1143_);
return v_ccLinkSharedFlags_1143_;
}
}
LEAN_EXPORT lean_object* l_Lake_getLeanLinkSharedFlags___redArg___lam__0___boxed(lean_object* v_x_1144_){
_start:
{
lean_object* v_res_1145_; 
v_res_1145_ = l_Lake_getLeanLinkSharedFlags___redArg___lam__0(v_x_1144_);
lean_dec_ref(v_x_1144_);
return v_res_1145_;
}
}
LEAN_EXPORT lean_object* l_Lake_getLeanLinkSharedFlags___redArg(lean_object* v_inst_1147_, lean_object* v_inst_1148_){
_start:
{
lean_object* v_map_1149_; lean_object* v___f_1150_; lean_object* v___f_1151_; lean_object* v___x_1152_; lean_object* v___x_1153_; 
v_map_1149_ = lean_ctor_get(v_inst_1148_, 0);
lean_inc_n(v_map_1149_, 2);
lean_dec_ref(v_inst_1148_);
v___f_1150_ = ((lean_object*)(l_Lake_getLeanLinkSharedFlags___redArg___closed__0));
v___f_1151_ = ((lean_object*)(l_Lake_getLeanInstall___redArg___closed__0));
v___x_1152_ = lean_apply_4(v_map_1149_, lean_box(0), lean_box(0), v___f_1151_, v_inst_1147_);
v___x_1153_ = lean_apply_4(v_map_1149_, lean_box(0), lean_box(0), v___f_1150_, v___x_1152_);
return v___x_1153_;
}
}
LEAN_EXPORT lean_object* l_Lake_getLeanLinkSharedFlags(lean_object* v_m_1154_, lean_object* v_inst_1155_, lean_object* v_inst_1156_){
_start:
{
lean_object* v_map_1157_; lean_object* v___f_1158_; lean_object* v___f_1159_; lean_object* v___x_1160_; lean_object* v___x_1161_; 
v_map_1157_ = lean_ctor_get(v_inst_1156_, 0);
lean_inc_n(v_map_1157_, 2);
lean_dec_ref(v_inst_1156_);
v___f_1158_ = ((lean_object*)(l_Lake_getLeanLinkSharedFlags___redArg___closed__0));
v___f_1159_ = ((lean_object*)(l_Lake_getLeanInstall___redArg___closed__0));
v___x_1160_ = lean_apply_4(v_map_1157_, lean_box(0), lean_box(0), v___f_1159_, v_inst_1155_);
v___x_1161_ = lean_apply_4(v_map_1157_, lean_box(0), lean_box(0), v___f_1158_, v___x_1160_);
return v___x_1161_;
}
}
LEAN_EXPORT lean_object* l_Lake_getLakeInstall___redArg___lam__0(lean_object* v_x_1162_){
_start:
{
lean_object* v_lake_1163_; 
v_lake_1163_ = lean_ctor_get(v_x_1162_, 0);
lean_inc_ref(v_lake_1163_);
return v_lake_1163_;
}
}
LEAN_EXPORT lean_object* l_Lake_getLakeInstall___redArg___lam__0___boxed(lean_object* v_x_1164_){
_start:
{
lean_object* v_res_1165_; 
v_res_1165_ = l_Lake_getLakeInstall___redArg___lam__0(v_x_1164_);
lean_dec_ref(v_x_1164_);
return v_res_1165_;
}
}
LEAN_EXPORT lean_object* l_Lake_getLakeInstall___redArg(lean_object* v_inst_1167_, lean_object* v_inst_1168_){
_start:
{
lean_object* v_map_1169_; lean_object* v___f_1170_; lean_object* v___x_1171_; 
v_map_1169_ = lean_ctor_get(v_inst_1168_, 0);
lean_inc(v_map_1169_);
lean_dec_ref(v_inst_1168_);
v___f_1170_ = ((lean_object*)(l_Lake_getLakeInstall___redArg___closed__0));
v___x_1171_ = lean_apply_4(v_map_1169_, lean_box(0), lean_box(0), v___f_1170_, v_inst_1167_);
return v___x_1171_;
}
}
LEAN_EXPORT lean_object* l_Lake_getLakeInstall(lean_object* v_m_1172_, lean_object* v_inst_1173_, lean_object* v_inst_1174_){
_start:
{
lean_object* v_map_1175_; lean_object* v___f_1176_; lean_object* v___x_1177_; 
v_map_1175_ = lean_ctor_get(v_inst_1174_, 0);
lean_inc(v_map_1175_);
lean_dec_ref(v_inst_1174_);
v___f_1176_ = ((lean_object*)(l_Lake_getLakeInstall___redArg___closed__0));
v___x_1177_ = lean_apply_4(v_map_1175_, lean_box(0), lean_box(0), v___f_1176_, v_inst_1173_);
return v___x_1177_;
}
}
LEAN_EXPORT lean_object* l_Lake_getLakeHome___redArg___lam__0(lean_object* v_x_1178_){
_start:
{
lean_object* v_home_1179_; 
v_home_1179_ = lean_ctor_get(v_x_1178_, 0);
lean_inc_ref(v_home_1179_);
return v_home_1179_;
}
}
LEAN_EXPORT lean_object* l_Lake_getLakeHome___redArg___lam__0___boxed(lean_object* v_x_1180_){
_start:
{
lean_object* v_res_1181_; 
v_res_1181_ = l_Lake_getLakeHome___redArg___lam__0(v_x_1180_);
lean_dec_ref(v_x_1180_);
return v_res_1181_;
}
}
LEAN_EXPORT lean_object* l_Lake_getLakeHome___redArg(lean_object* v_inst_1183_, lean_object* v_inst_1184_){
_start:
{
lean_object* v_map_1185_; lean_object* v___f_1186_; lean_object* v___f_1187_; lean_object* v___x_1188_; lean_object* v___x_1189_; 
v_map_1185_ = lean_ctor_get(v_inst_1184_, 0);
lean_inc_n(v_map_1185_, 2);
lean_dec_ref(v_inst_1184_);
v___f_1186_ = ((lean_object*)(l_Lake_getLakeHome___redArg___closed__0));
v___f_1187_ = ((lean_object*)(l_Lake_getLakeInstall___redArg___closed__0));
v___x_1188_ = lean_apply_4(v_map_1185_, lean_box(0), lean_box(0), v___f_1187_, v_inst_1183_);
v___x_1189_ = lean_apply_4(v_map_1185_, lean_box(0), lean_box(0), v___f_1186_, v___x_1188_);
return v___x_1189_;
}
}
LEAN_EXPORT lean_object* l_Lake_getLakeHome(lean_object* v_m_1190_, lean_object* v_inst_1191_, lean_object* v_inst_1192_){
_start:
{
lean_object* v_map_1193_; lean_object* v___f_1194_; lean_object* v___f_1195_; lean_object* v___x_1196_; lean_object* v___x_1197_; 
v_map_1193_ = lean_ctor_get(v_inst_1192_, 0);
lean_inc_n(v_map_1193_, 2);
lean_dec_ref(v_inst_1192_);
v___f_1194_ = ((lean_object*)(l_Lake_getLakeHome___redArg___closed__0));
v___f_1195_ = ((lean_object*)(l_Lake_getLakeInstall___redArg___closed__0));
v___x_1196_ = lean_apply_4(v_map_1193_, lean_box(0), lean_box(0), v___f_1195_, v_inst_1191_);
v___x_1197_ = lean_apply_4(v_map_1193_, lean_box(0), lean_box(0), v___f_1194_, v___x_1196_);
return v___x_1197_;
}
}
LEAN_EXPORT lean_object* l_Lake_getLakeSrcDir___redArg___lam__0(lean_object* v_x_1198_){
_start:
{
lean_object* v_srcDir_1199_; 
v_srcDir_1199_ = lean_ctor_get(v_x_1198_, 1);
lean_inc_ref(v_srcDir_1199_);
return v_srcDir_1199_;
}
}
LEAN_EXPORT lean_object* l_Lake_getLakeSrcDir___redArg___lam__0___boxed(lean_object* v_x_1200_){
_start:
{
lean_object* v_res_1201_; 
v_res_1201_ = l_Lake_getLakeSrcDir___redArg___lam__0(v_x_1200_);
lean_dec_ref(v_x_1200_);
return v_res_1201_;
}
}
LEAN_EXPORT lean_object* l_Lake_getLakeSrcDir___redArg(lean_object* v_inst_1203_, lean_object* v_inst_1204_){
_start:
{
lean_object* v_map_1205_; lean_object* v___f_1206_; lean_object* v___f_1207_; lean_object* v___x_1208_; lean_object* v___x_1209_; 
v_map_1205_ = lean_ctor_get(v_inst_1204_, 0);
lean_inc_n(v_map_1205_, 2);
lean_dec_ref(v_inst_1204_);
v___f_1206_ = ((lean_object*)(l_Lake_getLakeSrcDir___redArg___closed__0));
v___f_1207_ = ((lean_object*)(l_Lake_getLakeInstall___redArg___closed__0));
v___x_1208_ = lean_apply_4(v_map_1205_, lean_box(0), lean_box(0), v___f_1207_, v_inst_1203_);
v___x_1209_ = lean_apply_4(v_map_1205_, lean_box(0), lean_box(0), v___f_1206_, v___x_1208_);
return v___x_1209_;
}
}
LEAN_EXPORT lean_object* l_Lake_getLakeSrcDir(lean_object* v_m_1210_, lean_object* v_inst_1211_, lean_object* v_inst_1212_){
_start:
{
lean_object* v_map_1213_; lean_object* v___f_1214_; lean_object* v___f_1215_; lean_object* v___x_1216_; lean_object* v___x_1217_; 
v_map_1213_ = lean_ctor_get(v_inst_1212_, 0);
lean_inc_n(v_map_1213_, 2);
lean_dec_ref(v_inst_1212_);
v___f_1214_ = ((lean_object*)(l_Lake_getLakeSrcDir___redArg___closed__0));
v___f_1215_ = ((lean_object*)(l_Lake_getLakeInstall___redArg___closed__0));
v___x_1216_ = lean_apply_4(v_map_1213_, lean_box(0), lean_box(0), v___f_1215_, v_inst_1211_);
v___x_1217_ = lean_apply_4(v_map_1213_, lean_box(0), lean_box(0), v___f_1214_, v___x_1216_);
return v___x_1217_;
}
}
LEAN_EXPORT lean_object* l_Lake_getLakeLibDir___redArg___lam__0(lean_object* v_x_1218_){
_start:
{
lean_object* v_libDir_1219_; 
v_libDir_1219_ = lean_ctor_get(v_x_1218_, 3);
lean_inc_ref(v_libDir_1219_);
return v_libDir_1219_;
}
}
LEAN_EXPORT lean_object* l_Lake_getLakeLibDir___redArg___lam__0___boxed(lean_object* v_x_1220_){
_start:
{
lean_object* v_res_1221_; 
v_res_1221_ = l_Lake_getLakeLibDir___redArg___lam__0(v_x_1220_);
lean_dec_ref(v_x_1220_);
return v_res_1221_;
}
}
LEAN_EXPORT lean_object* l_Lake_getLakeLibDir___redArg(lean_object* v_inst_1223_, lean_object* v_inst_1224_){
_start:
{
lean_object* v_map_1225_; lean_object* v___f_1226_; lean_object* v___f_1227_; lean_object* v___x_1228_; lean_object* v___x_1229_; 
v_map_1225_ = lean_ctor_get(v_inst_1224_, 0);
lean_inc_n(v_map_1225_, 2);
lean_dec_ref(v_inst_1224_);
v___f_1226_ = ((lean_object*)(l_Lake_getLakeLibDir___redArg___closed__0));
v___f_1227_ = ((lean_object*)(l_Lake_getLakeInstall___redArg___closed__0));
v___x_1228_ = lean_apply_4(v_map_1225_, lean_box(0), lean_box(0), v___f_1227_, v_inst_1223_);
v___x_1229_ = lean_apply_4(v_map_1225_, lean_box(0), lean_box(0), v___f_1226_, v___x_1228_);
return v___x_1229_;
}
}
LEAN_EXPORT lean_object* l_Lake_getLakeLibDir(lean_object* v_m_1230_, lean_object* v_inst_1231_, lean_object* v_inst_1232_){
_start:
{
lean_object* v_map_1233_; lean_object* v___f_1234_; lean_object* v___f_1235_; lean_object* v___x_1236_; lean_object* v___x_1237_; 
v_map_1233_ = lean_ctor_get(v_inst_1232_, 0);
lean_inc_n(v_map_1233_, 2);
lean_dec_ref(v_inst_1232_);
v___f_1234_ = ((lean_object*)(l_Lake_getLakeLibDir___redArg___closed__0));
v___f_1235_ = ((lean_object*)(l_Lake_getLakeInstall___redArg___closed__0));
v___x_1236_ = lean_apply_4(v_map_1233_, lean_box(0), lean_box(0), v___f_1235_, v_inst_1231_);
v___x_1237_ = lean_apply_4(v_map_1233_, lean_box(0), lean_box(0), v___f_1234_, v___x_1236_);
return v___x_1237_;
}
}
LEAN_EXPORT lean_object* l_Lake_getLake___redArg___lam__0(lean_object* v_x_1238_){
_start:
{
lean_object* v_lake_1239_; 
v_lake_1239_ = lean_ctor_get(v_x_1238_, 5);
lean_inc_ref(v_lake_1239_);
return v_lake_1239_;
}
}
LEAN_EXPORT lean_object* l_Lake_getLake___redArg___lam__0___boxed(lean_object* v_x_1240_){
_start:
{
lean_object* v_res_1241_; 
v_res_1241_ = l_Lake_getLake___redArg___lam__0(v_x_1240_);
lean_dec_ref(v_x_1240_);
return v_res_1241_;
}
}
LEAN_EXPORT lean_object* l_Lake_getLake___redArg(lean_object* v_inst_1243_, lean_object* v_inst_1244_){
_start:
{
lean_object* v_map_1245_; lean_object* v___f_1246_; lean_object* v___f_1247_; lean_object* v___x_1248_; lean_object* v___x_1249_; 
v_map_1245_ = lean_ctor_get(v_inst_1244_, 0);
lean_inc_n(v_map_1245_, 2);
lean_dec_ref(v_inst_1244_);
v___f_1246_ = ((lean_object*)(l_Lake_getLake___redArg___closed__0));
v___f_1247_ = ((lean_object*)(l_Lake_getLakeInstall___redArg___closed__0));
v___x_1248_ = lean_apply_4(v_map_1245_, lean_box(0), lean_box(0), v___f_1247_, v_inst_1243_);
v___x_1249_ = lean_apply_4(v_map_1245_, lean_box(0), lean_box(0), v___f_1246_, v___x_1248_);
return v___x_1249_;
}
}
LEAN_EXPORT lean_object* l_Lake_getLake(lean_object* v_m_1250_, lean_object* v_inst_1251_, lean_object* v_inst_1252_){
_start:
{
lean_object* v_map_1253_; lean_object* v___f_1254_; lean_object* v___f_1255_; lean_object* v___x_1256_; lean_object* v___x_1257_; 
v_map_1253_ = lean_ctor_get(v_inst_1252_, 0);
lean_inc_n(v_map_1253_, 2);
lean_dec_ref(v_inst_1252_);
v___f_1254_ = ((lean_object*)(l_Lake_getLake___redArg___closed__0));
v___f_1255_ = ((lean_object*)(l_Lake_getLakeInstall___redArg___closed__0));
v___x_1256_ = lean_apply_4(v_map_1253_, lean_box(0), lean_box(0), v___f_1255_, v_inst_1251_);
v___x_1257_ = lean_apply_4(v_map_1253_, lean_box(0), lean_box(0), v___f_1254_, v___x_1256_);
return v___x_1257_;
}
}
LEAN_EXPORT lean_object* l_Lake_getLakeSharedDynlib___redArg___lam__0(lean_object* v_x_1258_){
_start:
{
lean_object* v_sharedDynlib_1259_; 
v_sharedDynlib_1259_ = lean_ctor_get(v_x_1258_, 4);
lean_inc_ref(v_sharedDynlib_1259_);
return v_sharedDynlib_1259_;
}
}
LEAN_EXPORT lean_object* l_Lake_getLakeSharedDynlib___redArg___lam__0___boxed(lean_object* v_x_1260_){
_start:
{
lean_object* v_res_1261_; 
v_res_1261_ = l_Lake_getLakeSharedDynlib___redArg___lam__0(v_x_1260_);
lean_dec_ref(v_x_1260_);
return v_res_1261_;
}
}
LEAN_EXPORT lean_object* l_Lake_getLakeSharedDynlib___redArg(lean_object* v_inst_1263_, lean_object* v_inst_1264_){
_start:
{
lean_object* v_map_1265_; lean_object* v___f_1266_; lean_object* v___f_1267_; lean_object* v___x_1268_; lean_object* v___x_1269_; 
v_map_1265_ = lean_ctor_get(v_inst_1264_, 0);
lean_inc_n(v_map_1265_, 2);
lean_dec_ref(v_inst_1264_);
v___f_1266_ = ((lean_object*)(l_Lake_getLakeSharedDynlib___redArg___closed__0));
v___f_1267_ = ((lean_object*)(l_Lake_getLakeInstall___redArg___closed__0));
v___x_1268_ = lean_apply_4(v_map_1265_, lean_box(0), lean_box(0), v___f_1267_, v_inst_1263_);
v___x_1269_ = lean_apply_4(v_map_1265_, lean_box(0), lean_box(0), v___f_1266_, v___x_1268_);
return v___x_1269_;
}
}
LEAN_EXPORT lean_object* l_Lake_getLakeSharedDynlib(lean_object* v_m_1270_, lean_object* v_inst_1271_, lean_object* v_inst_1272_){
_start:
{
lean_object* v_map_1273_; lean_object* v___f_1274_; lean_object* v___f_1275_; lean_object* v___x_1276_; lean_object* v___x_1277_; 
v_map_1273_ = lean_ctor_get(v_inst_1272_, 0);
lean_inc_n(v_map_1273_, 2);
lean_dec_ref(v_inst_1272_);
v___f_1274_ = ((lean_object*)(l_Lake_getLakeSharedDynlib___redArg___closed__0));
v___f_1275_ = ((lean_object*)(l_Lake_getLakeInstall___redArg___closed__0));
v___x_1276_ = lean_apply_4(v_map_1273_, lean_box(0), lean_box(0), v___f_1275_, v_inst_1271_);
v___x_1277_ = lean_apply_4(v_map_1273_, lean_box(0), lean_box(0), v___f_1274_, v___x_1276_);
return v___x_1277_;
}
}
lean_object* runtime_initialize_Lake_Config_Workspace(uint8_t builtin);
void lean_initialize();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lake_Config_Monad(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize();
res = runtime_initialize_Lake_Config_Workspace(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lake_Config_Monad(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lake_Config_Workspace(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lake_Config_Monad(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lake_Config_Workspace(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Config_Monad(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lake_Config_Monad(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lake_Config_Monad(builtin);
}
#ifdef __cplusplus
}
#endif

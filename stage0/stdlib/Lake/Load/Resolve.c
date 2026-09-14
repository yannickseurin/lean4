// Lean compiler output
// Module: Lake.Load.Resolve
// Imports: public import Lake.Config.Workspace public import Lake.Load.Manifest import Lake.Util.IO import Lake.Util.StoreInsts import Lake.Config.Monad import Lake.Load.Materialize import Lake.Load.Lean.Eval import Lake.Load.Package import Init.Data.Vector.Lemmas import Init.Data.Range.Polymorphic.Iterators import Init.Data.Range.Polymorphic.Lemmas import Init.TacticsExtra import Lean.Runtime
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
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* l_System_FilePath_normalize(lean_object*);
lean_object* l_Lake_Dependency_materialize(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lake_PackageEntry_materialize(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l_Lake_joinRelative(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Name_toString(lean_object*, uint8_t);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* lean_io_error_to_string(lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_add(size_t, size_t);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_NameMap_contains_spec__0___redArg(lean_object*, lean_object*);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lake_Manifest_load(lean_object*);
extern lean_object* l_Lake_defaultManifestFile;
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
uint8_t l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
size_t lean_usize_sub(size_t, size_t);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_findFinIdx_x3f_loop(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* l_Lake_resolveConfigFile(lean_object*, lean_object*, lean_object*);
lean_object* l_Lake_loadConfigFile___redArg(lean_object*, lean_object*);
lean_object* l_Lake_mkPackage(lean_object*, lean_object*, lean_object*);
lean_object* l_Lake_FacetConfigMap_insert(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(lean_object*, uint8_t);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_instDecidableEqString___boxed(lean_object*, lean_object*);
uint8_t l_Option_instDecidableEq___redArg(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lake_defaultLakeDir;
lean_object* l_Lake_Manifest_tryLoadEntries(lean_object*);
lean_object* l_Lake_mkRelPathString(lean_object*);
uint8_t l_Lean_NameSet_contains(lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_NameSet_insert(lean_object*, lean_object*);
extern lean_object* l_Lean_NameSet_empty;
lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
uint8_t lean_string_compare(lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l_Lake_createParentDirs(lean_object*);
lean_object* lean_io_rename(lean_object*, lean_object*);
uint8_t l_System_FilePath_pathExists(lean_object*);
lean_object* l_Lean_Json_pretty(lean_object*, lean_object*);
lean_object* l_Array_reverse___redArg(lean_object*);
lean_object* l_Lake_ToolchainVer_toString___override(lean_object*);
extern lean_object* l_Lake_toolchainFileName;
lean_object* l_IO_FS_writeFile(lean_object*, lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* l_Lake_Env_noToolchainVars(lean_object*);
lean_object* lean_io_process_spawn(lean_object*);
lean_object* lean_io_process_child_wait(lean_object*, lean_object*);
uint8_t lean_uint32_to_uint8(uint32_t);
lean_object* lean_io_exit(uint8_t);
lean_object* l_System_FilePath_join(lean_object*, lean_object*);
lean_object* l_Lake_ToolchainVer_ofFile_x3f(lean_object*);
uint8_t l_Lake_instDecidableEqToolchainVer_decEq(lean_object*, lean_object*);
uint8_t l_Lake_MaterializedDep_fixedToolchain(lean_object*);
uint8_t l_Lake_ToolchainVer_blt(lean_object*, lean_object*);
uint8_t l_Lake_ToolchainVer_ble(lean_object*, lean_object*);
lean_object* l_Lake_Manifest_save(lean_object*, lean_object*);
static const lean_array_object l___private_Lake_Load_Resolve_0__Lake_mkDepLoadConfig___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lake_Load_Resolve_0__Lake_mkDepLoadConfig___closed__0 = (const lean_object*)&l___private_Lake_Load_Resolve_0__Lake_mkDepLoadConfig___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_mkDepLoadConfig(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_mkDepLoadConfig___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_addFacetDecls_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_addFacetDecls_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_addFacetDecls(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_addFacetDecls___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_addDepPackage_x27_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_addDepPackage_x27(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_addDepPackage_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_addDepPackage_x27_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_setDepIdxs___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_setDepIdxs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateDepPkgs_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateDepPkgs_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_foldRev___at___00Nat_foldRev___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateDepPkgs_spec__1_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_foldRev___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateDepPkgs_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_foldRev___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateDepPkgs_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateDepPkgs_spec__2(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateDepPkgs_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_updateDepPkgs(lean_object*);
LEAN_EXPORT lean_object* l_Nat_foldRev___at___00Nat_foldRev___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateDepPkgs_spec__1_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_foldRev___at___00Nat_foldRev___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateDepPkgs_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_ResolveState_init(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_ResolveState_init___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_ResolveState_reuseDep___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_ResolveState_reuseDep(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_ResolveState_reuseDep___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_ResolveState_newDep___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_ResolveState_newDep___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_ResolveState_newDep(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_ResolveState_newDep___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_guardBySizeImpl___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_guardBySizeImpl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_guardBySizeImpl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__5(lean_object*, lean_object*);
static const lean_string_object l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__6___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 60, .m_capacity = 60, .m_length = 59, .m_data = ": package requires itself (or a package with the same name)"};
static const lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__6___closed__0 = (const lean_object*)&l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__6___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__6(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go_match__1_splitter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go_match__6_splitter___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go_match__6_splitter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go_match__6_splitter___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go_match__4_splitter___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go_match__4_splitter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go_match__4_splitter___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lake_Load_Resolve_0__Lake_Workspace_updateDepPkgs, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore___redArg___closed__0 = (const lean_object*)&l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore___redArg___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_UpdateT_run___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_UpdateT_run(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__2(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__0___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "unknown package `"};
static const lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__1___closed__0 = (const lean_object*)&l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__1___closed__0_value;
static const lean_string_object l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__1___closed__1 = (const lean_object*)&l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__1___closed__1_value;
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_reuseManifest___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_reuseManifest___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__3(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__4___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 48, .m_capacity = 48, .m_length = 47, .m_data = "could not rename workspace packages directory: "};
static const lean_object* l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__0 = (const lean_object*)&l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__0_value;
static const lean_string_object l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 49, .m_capacity = 49, .m_length = 48, .m_data = "workspace packages directory changed; renaming '"};
static const lean_object* l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__1 = (const lean_object*)&l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__1_value;
static const lean_string_object l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "' to '"};
static const lean_object* l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__2 = (const lean_object*)&l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__2_value;
static const lean_string_object l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "'"};
static const lean_object* l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__3 = (const lean_object*)&l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__3_value;
static const lean_array_object l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__4 = (const lean_object*)&l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__4_value;
static lean_once_cell_t l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__5;
static lean_once_cell_t l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__6;
static lean_once_cell_t l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__7;
static const lean_string_object l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 50, .m_capacity = 50, .m_length = 49, .m_data = ": no previous manifest, creating one from scratch"};
static const lean_object* l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__8 = (const lean_object*)&l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__8_value;
static const lean_string_object l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 57, .m_capacity = 57, .m_length = 56, .m_data = ": ignoring previous manifest because it failed to load: "};
static const lean_object* l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__9 = (const lean_object*)&l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__9_value;
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_reuseManifest(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_reuseManifest___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__4(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_addDependencyEntries_spec__0___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_addDependencyEntries_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lake_Load_Resolve_0__Lake_addDependencyEntries___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = ": ignoring missing manifest:\n  "};
static const lean_object* l___private_Lake_Load_Resolve_0__Lake_addDependencyEntries___closed__0 = (const lean_object*)&l___private_Lake_Load_Resolve_0__Lake_addDependencyEntries___closed__0_value;
static const lean_string_object l___private_Lake_Load_Resolve_0__Lake_addDependencyEntries___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 48, .m_capacity = 48, .m_length = 47, .m_data = ": ignoring manifest because it failed to load: "};
static const lean_object* l___private_Lake_Load_Resolve_0__Lake_addDependencyEntries___closed__1 = (const lean_object*)&l___private_Lake_Load_Resolve_0__Lake_addDependencyEntries___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_addDependencyEntries(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_addDependencyEntries___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_addDependencyEntries_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_addDependencyEntries_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lake_Load_Resolve_0__Lake_updateAndMaterializeDep___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "."};
static const lean_object* l___private_Lake_Load_Resolve_0__Lake_updateAndMaterializeDep___closed__0 = (const lean_object*)&l___private_Lake_Load_Resolve_0__Lake_updateAndMaterializeDep___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_updateAndMaterializeDep(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_updateAndMaterializeDep___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint32_t l___private_Lake_Load_Resolve_0__Lake_restartCode;
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_ToolchainState_replace(lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_ToolchainState_replace___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_ToolchainState_addClash(lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_ToolchainState_addClash___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "\n  "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain_spec__0_spec__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain_spec__0_spec__0___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain_spec__0_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "\n    from "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain_spec__0_spec__0___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain_spec__0_spec__0___closed__1_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain_spec__0_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain_spec__0_spec__0___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain_spec__0_spec__0___closed__2_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain_spec__0_spec__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = " (fixed toolchain)"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain_spec__0_spec__0___closed__3 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain_spec__0_spec__0___closed__3_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain_spec__0_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 57, .m_capacity = 57, .m_length = 56, .m_data = "toolchain not updated; multiple toolchain candidates:\n  "};
static const lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__0 = (const lean_object*)&l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__0_value;
static const lean_string_object l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "updating toolchain to '"};
static const lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__1 = (const lean_object*)&l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__1_value;
static const lean_string_object l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "restarting Lake via Elan"};
static const lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__2 = (const lean_object*)&l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__2_value;
static const lean_ctor_object l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__2_value),LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__3 = (const lean_object*)&l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__3_value;
static const lean_ctor_object l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(1, 1, 1, 0, 0, 0, 0, 0)}};
static const lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__4 = (const lean_object*)&l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__4_value;
static const lean_string_object l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "run"};
static const lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__5 = (const lean_object*)&l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__5_value;
static const lean_string_object l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "--install"};
static const lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__6 = (const lean_object*)&l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__6_value;
static const lean_string_object l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "lake"};
static const lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__7 = (const lean_object*)&l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__7_value;
static lean_once_cell_t l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__8;
static lean_once_cell_t l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__9;
static const lean_string_object l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 57, .m_capacity = 57, .m_length = 56, .m_data = "no Elan detected; you will need to manually restart Lake"};
static const lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__10 = (const lean_object*)&l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__10_value;
static const lean_ctor_object l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__10_value),LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__11 = (const lean_object*)&l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__11_value;
static lean_once_cell_t l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__12;
static const lean_string_object l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 60, .m_capacity = 60, .m_length = 59, .m_data = "cannot auto-restart; you will need to manually restart Lake"};
static const lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__13 = (const lean_object*)&l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__13_value;
static const lean_ctor_object l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__13_value),LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__14 = (const lean_object*)&l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__14_value;
static const lean_string_object l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 42, .m_capacity = 42, .m_length = 41, .m_data = "toolchain not updated; already up-to-date"};
static const lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__15 = (const lean_object*)&l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__15_value;
static const lean_ctor_object l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__15_value),LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__16 = (const lean_object*)&l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__16_value;
static const lean_string_object l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "toolchain not updated; no toolchain information found"};
static const lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__17 = (const lean_object*)&l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__17_value;
static const lean_ctor_object l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__17_value),LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__18 = (const lean_object*)&l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__18_value;
static const lean_string_object l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "toolchain not updated; multiple toolchain candidates:"};
static const lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__19 = (const lean_object*)&l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__19_value;
static const lean_array_object l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__20 = (const lean_object*)&l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__20_value;
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_updateAndAddDep(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_updateAndAddDep___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_updateAndMaterializeDep___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore___elam__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_updateAndMaterializeDep___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore___elam__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_addDependencyEntries___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore___elam__0_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_addDependencyEntries___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore___elam__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore___elam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore___elam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_reuseManifest___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__3___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_reuseManifest___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__3___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_reuseManifest___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_reuseManifest___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__7(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5_spec__6_spec__8___redArg(lean_object*);
static const lean_string_object l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5_spec__6___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "Std.Data.DTreeMap.Internal.Balancing"};
static const lean_object* l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5_spec__6___redArg___closed__0 = (const lean_object*)&l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5_spec__6___redArg___closed__0_value;
static const lean_string_object l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5_spec__6___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "Std.DTreeMap.Internal.Impl.balanceL!"};
static const lean_object* l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5_spec__6___redArg___closed__1 = (const lean_object*)&l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5_spec__6___redArg___closed__1_value;
static const lean_string_object l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5_spec__6___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "balanceL! input was not balanced"};
static const lean_object* l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5_spec__6___redArg___closed__2 = (const lean_object*)&l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5_spec__6___redArg___closed__2_value;
static lean_once_cell_t l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5_spec__6___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5_spec__6___redArg___closed__3;
static lean_once_cell_t l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5_spec__6___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5_spec__6___redArg___closed__4;
static const lean_string_object l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5_spec__6___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "Std.DTreeMap.Internal.Impl.balanceR!"};
static const lean_object* l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5_spec__6___redArg___closed__5 = (const lean_object*)&l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5_spec__6___redArg___closed__5_value;
static const lean_string_object l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5_spec__6___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "balanceR! input was not balanced"};
static const lean_object* l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5_spec__6___redArg___closed__6 = (const lean_object*)&l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5_spec__6___redArg___closed__6_value;
static lean_once_cell_t l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5_spec__6___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5_spec__6___redArg___closed__7;
static lean_once_cell_t l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5_spec__6___redArg___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5_spec__6___redArg___closed__8;
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5_spec__6___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5_spec__7_spec__10(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5(lean_object*);
static const lean_string_object l___private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = ": updating '"};
static const lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore___lam__0___closed__0 = (const lean_object*)&l___private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore___lam__0___closed__0_value;
static const lean_string_object l___private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "' with "};
static const lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore___lam__0___closed__1 = (const lean_object*)&l___private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore___lam__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__8___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Vector_Basic_0__Vector_mapM_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__6___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Vector_Basic_0__Vector_mapM_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__9___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4_spec__4___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4_spec__4___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4_spec__4___redArg(lean_object*, lean_object*, uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore___closed__0 = (const lean_object*)&l___private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Vector_Basic_0__Vector_mapM_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Vector_Basic_0__Vector_mapM_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__8(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4_spec__4(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5_spec__6_spec__8(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5_spec__6(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5_spec__7(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_writeManifest_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_writeManifest_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_writeManifest(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_writeManifest___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Package_runPostUpdateHooks_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Package_runPostUpdateHooks_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lake_Load_Resolve_0__Lake_Package_runPostUpdateHooks___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = ": running post-update hooks"};
static const lean_object* l___private_Lake_Load_Resolve_0__Lake_Package_runPostUpdateHooks___closed__0 = (const lean_object*)&l___private_Lake_Load_Resolve_0__Lake_Package_runPostUpdateHooks___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Package_runPostUpdateHooks(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Package_runPostUpdateHooks___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore___at___00Lake_Workspace_updateAndMaterialize_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore___at___00Lake_Workspace_updateAndMaterialize_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Workspace_updateAndMaterialize_spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Workspace_updateAndMaterialize_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Workspace_updateAndMaterialize(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Workspace_updateAndMaterialize___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_validateManifest_spec__0___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "manifest out of date: "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_validateManifest_spec__0___lam__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_validateManifest_spec__0___lam__0___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_validateManifest_spec__0___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = " of dependency '"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_validateManifest_spec__0___lam__0___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_validateManifest_spec__0___lam__0___closed__1_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_validateManifest_spec__0___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "' changed; use `lake update "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_validateManifest_spec__0___lam__0___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_validateManifest_spec__0___lam__0___closed__2_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_validateManifest_spec__0___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "` to update it"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_validateManifest_spec__0___lam__0___closed__3 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_validateManifest_spec__0___lam__0___closed__3_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_validateManifest_spec__0___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_validateManifest_spec__0___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_validateManifest_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "git revision"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_validateManifest_spec__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_validateManifest_spec__0___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_validateManifest_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "source kind (git/path)"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_validateManifest_spec__0___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_validateManifest_spec__0___closed__1_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_validateManifest_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "git url"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_validateManifest_spec__0___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_validateManifest_spec__0___closed__2_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_validateManifest_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_validateManifest_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_validateManifest(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_validateManifest___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Option_instBEq_beq___at___00Lake_Workspace_materializeDeps_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Option_instBEq_beq___at___00Lake_Workspace_materializeDeps_spec__2___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0_spec__0_spec__2___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "dependency '"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0_spec__0_spec__2___redArg___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0_spec__0_spec__2___redArg___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0_spec__0_spec__2___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "' of '"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0_spec__0_spec__2___redArg___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0_spec__0_spec__2___redArg___closed__1_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0_spec__0_spec__2___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 169, .m_capacity = 169, .m_length = 168, .m_data = "' not in manifest; this suggests that the manifest is corrupt; use `lake update` to generate a new, complete file (warning: this will update ALL workspace dependencies)"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0_spec__0_spec__2___redArg___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0_spec__0_spec__2___redArg___closed__2_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0_spec__0_spec__2___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "' not in manifest; use `lake update "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0_spec__0_spec__2___redArg___closed__3 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0_spec__0_spec__2___redArg___closed__3_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0_spec__0_spec__2___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "` to add it"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0_spec__0_spec__2___redArg___closed__4 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0_spec__0_spec__2___redArg___closed__4_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0_spec__0_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0_spec__0_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0___redArg(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Workspace_materializeDeps_spec__1_spec__2(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Workspace_materializeDeps_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Workspace_materializeDeps_spec__1(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Workspace_materializeDeps_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lake_Workspace_materializeDeps___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 52, .m_capacity = 52, .m_length = 51, .m_data = "missing manifest; use `lake update` to generate one"};
static const lean_object* l_Lake_Workspace_materializeDeps___closed__0 = (const lean_object*)&l_Lake_Workspace_materializeDeps___closed__0_value;
static const lean_ctor_object l_Lake_Workspace_materializeDeps___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_Workspace_materializeDeps___closed__0_value),LEAN_SCALAR_PTR_LITERAL(3, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lake_Workspace_materializeDeps___closed__1 = (const lean_object*)&l_Lake_Workspace_materializeDeps___closed__1_value;
static const lean_string_object l_Lake_Workspace_materializeDeps___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "package-overrides.json"};
static const lean_object* l_Lake_Workspace_materializeDeps___closed__2 = (const lean_object*)&l_Lake_Workspace_materializeDeps___closed__2_value;
static const lean_string_object l_Lake_Workspace_materializeDeps___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 147, .m_capacity = 147, .m_length = 146, .m_data = "manifest out of date: packages directory changed; use `lake update` to rebuild the manifest (warning: this will update ALL workspace dependencies)"};
static const lean_object* l_Lake_Workspace_materializeDeps___closed__3 = (const lean_object*)&l_Lake_Workspace_materializeDeps___closed__3_value;
static const lean_ctor_object l_Lake_Workspace_materializeDeps___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_Workspace_materializeDeps___closed__3_value),LEAN_SCALAR_PTR_LITERAL(2, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lake_Workspace_materializeDeps___closed__4 = (const lean_object*)&l_Lake_Workspace_materializeDeps___closed__4_value;
LEAN_EXPORT lean_object* l_Lake_Workspace_materializeDeps(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Workspace_materializeDeps___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0_spec__0_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_mkDepLoadConfig(lean_object* v_ws_3_, lean_object* v_dep_4_, lean_object* v_lakeOpts_5_, lean_object* v_leanOpts_6_, uint8_t v_reconfigure_7_){
_start:
{
lean_object* v_lakeEnv_8_; lean_object* v_packages_9_; lean_object* v___x_10_; lean_object* v___x_11_; lean_object* v_manifestEntry_12_; lean_object* v_dir_13_; lean_object* v_pkgDir_14_; lean_object* v_relPkgDir_15_; lean_object* v_remoteUrl_16_; lean_object* v_name_17_; lean_object* v_scope_18_; lean_object* v_configFile_19_; lean_object* v_manifestFile_x3f_20_; lean_object* v___x_21_; lean_object* v___x_22_; lean_object* v___x_23_; lean_object* v___y_25_; 
v_lakeEnv_8_ = lean_ctor_get(v_ws_3_, 0);
v_packages_9_ = lean_ctor_get(v_ws_3_, 4);
v___x_10_ = lean_unsigned_to_nat(0u);
v___x_11_ = lean_array_fget_borrowed(v_packages_9_, v___x_10_);
v_manifestEntry_12_ = lean_ctor_get(v_dep_4_, 4);
lean_inc_ref(v_manifestEntry_12_);
v_dir_13_ = lean_ctor_get(v___x_11_, 4);
v_pkgDir_14_ = lean_ctor_get(v_dep_4_, 0);
lean_inc_ref_n(v_pkgDir_14_, 2);
v_relPkgDir_15_ = lean_ctor_get(v_dep_4_, 1);
lean_inc_ref(v_relPkgDir_15_);
v_remoteUrl_16_ = lean_ctor_get(v_dep_4_, 2);
lean_inc_ref(v_remoteUrl_16_);
lean_dec_ref(v_dep_4_);
v_name_17_ = lean_ctor_get(v_manifestEntry_12_, 0);
lean_inc(v_name_17_);
v_scope_18_ = lean_ctor_get(v_manifestEntry_12_, 1);
lean_inc_ref(v_scope_18_);
v_configFile_19_ = lean_ctor_get(v_manifestEntry_12_, 2);
lean_inc_ref_n(v_configFile_19_, 2);
v_manifestFile_x3f_20_ = lean_ctor_get(v_manifestEntry_12_, 3);
lean_inc(v_manifestFile_x3f_20_);
lean_dec_ref(v_manifestEntry_12_);
v___x_21_ = lean_box(0);
v___x_22_ = lean_array_get_size(v_packages_9_);
v___x_23_ = l_Lake_joinRelative(v_pkgDir_14_, v_configFile_19_);
if (lean_obj_tag(v_manifestFile_x3f_20_) == 0)
{
lean_object* v___x_30_; 
v___x_30_ = l_Lake_defaultManifestFile;
v___y_25_ = v___x_30_;
goto v___jp_24_;
}
else
{
lean_object* v_val_31_; 
v_val_31_ = lean_ctor_get(v_manifestFile_x3f_20_, 0);
lean_inc(v_val_31_);
lean_dec_ref_known(v_manifestFile_x3f_20_, 1);
v___y_25_ = v_val_31_;
goto v___jp_24_;
}
v___jp_24_:
{
lean_object* v___x_26_; uint8_t v___x_27_; uint8_t v___x_28_; lean_object* v___x_29_; 
v___x_26_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_mkDepLoadConfig___closed__0));
v___x_27_ = 0;
v___x_28_ = 1;
lean_inc_ref(v_dir_13_);
lean_inc_ref(v_lakeEnv_8_);
v___x_29_ = lean_alloc_ctor(0, 16, 3);
lean_ctor_set(v___x_29_, 0, v_lakeEnv_8_);
lean_ctor_set(v___x_29_, 1, v___x_21_);
lean_ctor_set(v___x_29_, 2, v_dir_13_);
lean_ctor_set(v___x_29_, 3, v___x_22_);
lean_ctor_set(v___x_29_, 4, v_name_17_);
lean_ctor_set(v___x_29_, 5, v_relPkgDir_15_);
lean_ctor_set(v___x_29_, 6, v_pkgDir_14_);
lean_ctor_set(v___x_29_, 7, v_configFile_19_);
lean_ctor_set(v___x_29_, 8, v___x_23_);
lean_ctor_set(v___x_29_, 9, v___x_21_);
lean_ctor_set(v___x_29_, 10, v___y_25_);
lean_ctor_set(v___x_29_, 11, v___x_26_);
lean_ctor_set(v___x_29_, 12, v_lakeOpts_5_);
lean_ctor_set(v___x_29_, 13, v_leanOpts_6_);
lean_ctor_set(v___x_29_, 14, v_scope_18_);
lean_ctor_set(v___x_29_, 15, v_remoteUrl_16_);
lean_ctor_set_uint8(v___x_29_, sizeof(void*)*16, v_reconfigure_7_);
lean_ctor_set_uint8(v___x_29_, sizeof(void*)*16 + 1, v___x_27_);
lean_ctor_set_uint8(v___x_29_, sizeof(void*)*16 + 2, v___x_28_);
return v___x_29_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_mkDepLoadConfig___boxed(lean_object* v_ws_32_, lean_object* v_dep_33_, lean_object* v_lakeOpts_34_, lean_object* v_leanOpts_35_, lean_object* v_reconfigure_36_){
_start:
{
uint8_t v_reconfigure_boxed_37_; lean_object* v_res_38_; 
v_reconfigure_boxed_37_ = lean_unbox(v_reconfigure_36_);
v_res_38_ = l___private_Lake_Load_Resolve_0__Lake_mkDepLoadConfig(v_ws_32_, v_dep_33_, v_lakeOpts_34_, v_leanOpts_35_, v_reconfigure_boxed_37_);
lean_dec_ref(v_ws_32_);
return v_res_38_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_addFacetDecls_spec__0(lean_object* v_as_39_, size_t v_i_40_, size_t v_stop_41_, lean_object* v_b_42_){
_start:
{
uint8_t v___x_43_; 
v___x_43_ = lean_usize_dec_eq(v_i_40_, v_stop_41_);
if (v___x_43_ == 0)
{
lean_object* v___x_44_; lean_object* v_name_45_; lean_object* v_config_46_; lean_object* v_lakeEnv_47_; lean_object* v_lakeConfig_48_; lean_object* v_lakeCache_49_; lean_object* v_lakeArgs_x3f_50_; lean_object* v_packages_51_; lean_object* v_packageMap_52_; lean_object* v_facetConfigs_53_; lean_object* v___x_55_; uint8_t v_isShared_56_; uint8_t v_isSharedCheck_64_; 
v___x_44_ = lean_array_uget_borrowed(v_as_39_, v_i_40_);
v_name_45_ = lean_ctor_get(v___x_44_, 0);
v_config_46_ = lean_ctor_get(v___x_44_, 1);
v_lakeEnv_47_ = lean_ctor_get(v_b_42_, 0);
v_lakeConfig_48_ = lean_ctor_get(v_b_42_, 1);
v_lakeCache_49_ = lean_ctor_get(v_b_42_, 2);
v_lakeArgs_x3f_50_ = lean_ctor_get(v_b_42_, 3);
v_packages_51_ = lean_ctor_get(v_b_42_, 4);
v_packageMap_52_ = lean_ctor_get(v_b_42_, 5);
v_facetConfigs_53_ = lean_ctor_get(v_b_42_, 6);
v_isSharedCheck_64_ = !lean_is_exclusive(v_b_42_);
if (v_isSharedCheck_64_ == 0)
{
v___x_55_ = v_b_42_;
v_isShared_56_ = v_isSharedCheck_64_;
goto v_resetjp_54_;
}
else
{
lean_inc(v_facetConfigs_53_);
lean_inc(v_packageMap_52_);
lean_inc(v_packages_51_);
lean_inc(v_lakeArgs_x3f_50_);
lean_inc(v_lakeCache_49_);
lean_inc(v_lakeConfig_48_);
lean_inc(v_lakeEnv_47_);
lean_dec(v_b_42_);
v___x_55_ = lean_box(0);
v_isShared_56_ = v_isSharedCheck_64_;
goto v_resetjp_54_;
}
v_resetjp_54_:
{
lean_object* v___x_57_; lean_object* v___x_59_; 
lean_inc(v_config_46_);
lean_inc(v_name_45_);
v___x_57_ = l_Lake_FacetConfigMap_insert(v_name_45_, v_config_46_, v_facetConfigs_53_);
if (v_isShared_56_ == 0)
{
lean_ctor_set(v___x_55_, 6, v___x_57_);
v___x_59_ = v___x_55_;
goto v_reusejp_58_;
}
else
{
lean_object* v_reuseFailAlloc_63_; 
v_reuseFailAlloc_63_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v_reuseFailAlloc_63_, 0, v_lakeEnv_47_);
lean_ctor_set(v_reuseFailAlloc_63_, 1, v_lakeConfig_48_);
lean_ctor_set(v_reuseFailAlloc_63_, 2, v_lakeCache_49_);
lean_ctor_set(v_reuseFailAlloc_63_, 3, v_lakeArgs_x3f_50_);
lean_ctor_set(v_reuseFailAlloc_63_, 4, v_packages_51_);
lean_ctor_set(v_reuseFailAlloc_63_, 5, v_packageMap_52_);
lean_ctor_set(v_reuseFailAlloc_63_, 6, v___x_57_);
v___x_59_ = v_reuseFailAlloc_63_;
goto v_reusejp_58_;
}
v_reusejp_58_:
{
size_t v___x_60_; size_t v___x_61_; 
v___x_60_ = ((size_t)1ULL);
v___x_61_ = lean_usize_add(v_i_40_, v___x_60_);
v_i_40_ = v___x_61_;
v_b_42_ = v___x_59_;
goto _start;
}
}
}
else
{
return v_b_42_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_addFacetDecls_spec__0___boxed(lean_object* v_as_65_, lean_object* v_i_66_, lean_object* v_stop_67_, lean_object* v_b_68_){
_start:
{
size_t v_i_boxed_69_; size_t v_stop_boxed_70_; lean_object* v_res_71_; 
v_i_boxed_69_ = lean_unbox_usize(v_i_66_);
lean_dec(v_i_66_);
v_stop_boxed_70_ = lean_unbox_usize(v_stop_67_);
lean_dec(v_stop_67_);
v_res_71_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_addFacetDecls_spec__0(v_as_65_, v_i_boxed_69_, v_stop_boxed_70_, v_b_68_);
lean_dec_ref(v_as_65_);
return v_res_71_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_addFacetDecls(lean_object* v_decls_72_, lean_object* v_self_73_){
_start:
{
lean_object* v___x_74_; lean_object* v___x_75_; uint8_t v___x_76_; 
v___x_74_ = lean_unsigned_to_nat(0u);
v___x_75_ = lean_array_get_size(v_decls_72_);
v___x_76_ = lean_nat_dec_lt(v___x_74_, v___x_75_);
if (v___x_76_ == 0)
{
return v_self_73_;
}
else
{
uint8_t v___x_77_; 
v___x_77_ = lean_nat_dec_le(v___x_75_, v___x_75_);
if (v___x_77_ == 0)
{
if (v___x_76_ == 0)
{
return v_self_73_;
}
else
{
size_t v___x_78_; size_t v___x_79_; lean_object* v___x_80_; 
v___x_78_ = ((size_t)0ULL);
v___x_79_ = lean_usize_of_nat(v___x_75_);
v___x_80_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_addFacetDecls_spec__0(v_decls_72_, v___x_78_, v___x_79_, v_self_73_);
return v___x_80_;
}
}
else
{
size_t v___x_81_; size_t v___x_82_; lean_object* v___x_83_; 
v___x_81_ = ((size_t)0ULL);
v___x_82_ = lean_usize_of_nat(v___x_75_);
v___x_83_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_addFacetDecls_spec__0(v_decls_72_, v___x_81_, v___x_82_, v_self_73_);
return v___x_83_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_addFacetDecls___boxed(lean_object* v_decls_84_, lean_object* v_self_85_){
_start:
{
lean_object* v_res_86_; 
v_res_86_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_addFacetDecls(v_decls_84_, v_self_85_);
lean_dec_ref(v_decls_84_);
return v_res_86_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_addDepPackage_x27_spec__0___redArg(lean_object* v_k_87_, lean_object* v_v_88_, lean_object* v_t_89_){
_start:
{
if (lean_obj_tag(v_t_89_) == 0)
{
lean_object* v_size_90_; lean_object* v_k_91_; lean_object* v_v_92_; lean_object* v_l_93_; lean_object* v_r_94_; lean_object* v___x_96_; uint8_t v_isShared_97_; uint8_t v_isSharedCheck_374_; 
v_size_90_ = lean_ctor_get(v_t_89_, 0);
v_k_91_ = lean_ctor_get(v_t_89_, 1);
v_v_92_ = lean_ctor_get(v_t_89_, 2);
v_l_93_ = lean_ctor_get(v_t_89_, 3);
v_r_94_ = lean_ctor_get(v_t_89_, 4);
v_isSharedCheck_374_ = !lean_is_exclusive(v_t_89_);
if (v_isSharedCheck_374_ == 0)
{
v___x_96_ = v_t_89_;
v_isShared_97_ = v_isSharedCheck_374_;
goto v_resetjp_95_;
}
else
{
lean_inc(v_r_94_);
lean_inc(v_l_93_);
lean_inc(v_v_92_);
lean_inc(v_k_91_);
lean_inc(v_size_90_);
lean_dec(v_t_89_);
v___x_96_ = lean_box(0);
v_isShared_97_ = v_isSharedCheck_374_;
goto v_resetjp_95_;
}
v_resetjp_95_:
{
uint8_t v___x_98_; 
v___x_98_ = l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(v_k_87_, v_k_91_);
switch(v___x_98_)
{
case 0:
{
lean_object* v_impl_99_; lean_object* v___x_100_; 
lean_dec(v_size_90_);
v_impl_99_ = l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_addDepPackage_x27_spec__0___redArg(v_k_87_, v_v_88_, v_l_93_);
v___x_100_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_r_94_) == 0)
{
lean_object* v_size_101_; lean_object* v_size_102_; lean_object* v_k_103_; lean_object* v_v_104_; lean_object* v_l_105_; lean_object* v_r_106_; lean_object* v___x_107_; lean_object* v___x_108_; uint8_t v___x_109_; 
v_size_101_ = lean_ctor_get(v_r_94_, 0);
v_size_102_ = lean_ctor_get(v_impl_99_, 0);
lean_inc(v_size_102_);
v_k_103_ = lean_ctor_get(v_impl_99_, 1);
lean_inc(v_k_103_);
v_v_104_ = lean_ctor_get(v_impl_99_, 2);
lean_inc(v_v_104_);
v_l_105_ = lean_ctor_get(v_impl_99_, 3);
lean_inc(v_l_105_);
v_r_106_ = lean_ctor_get(v_impl_99_, 4);
lean_inc(v_r_106_);
v___x_107_ = lean_unsigned_to_nat(3u);
v___x_108_ = lean_nat_mul(v___x_107_, v_size_101_);
v___x_109_ = lean_nat_dec_lt(v___x_108_, v_size_102_);
lean_dec(v___x_108_);
if (v___x_109_ == 0)
{
lean_object* v___x_110_; lean_object* v___x_111_; lean_object* v___x_113_; 
lean_dec(v_r_106_);
lean_dec(v_l_105_);
lean_dec(v_v_104_);
lean_dec(v_k_103_);
v___x_110_ = lean_nat_add(v___x_100_, v_size_102_);
lean_dec(v_size_102_);
v___x_111_ = lean_nat_add(v___x_110_, v_size_101_);
lean_dec(v___x_110_);
if (v_isShared_97_ == 0)
{
lean_ctor_set(v___x_96_, 3, v_impl_99_);
lean_ctor_set(v___x_96_, 0, v___x_111_);
v___x_113_ = v___x_96_;
goto v_reusejp_112_;
}
else
{
lean_object* v_reuseFailAlloc_114_; 
v_reuseFailAlloc_114_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_114_, 0, v___x_111_);
lean_ctor_set(v_reuseFailAlloc_114_, 1, v_k_91_);
lean_ctor_set(v_reuseFailAlloc_114_, 2, v_v_92_);
lean_ctor_set(v_reuseFailAlloc_114_, 3, v_impl_99_);
lean_ctor_set(v_reuseFailAlloc_114_, 4, v_r_94_);
v___x_113_ = v_reuseFailAlloc_114_;
goto v_reusejp_112_;
}
v_reusejp_112_:
{
return v___x_113_;
}
}
else
{
lean_object* v___x_116_; uint8_t v_isShared_117_; uint8_t v_isSharedCheck_180_; 
v_isSharedCheck_180_ = !lean_is_exclusive(v_impl_99_);
if (v_isSharedCheck_180_ == 0)
{
lean_object* v_unused_181_; lean_object* v_unused_182_; lean_object* v_unused_183_; lean_object* v_unused_184_; lean_object* v_unused_185_; 
v_unused_181_ = lean_ctor_get(v_impl_99_, 4);
lean_dec(v_unused_181_);
v_unused_182_ = lean_ctor_get(v_impl_99_, 3);
lean_dec(v_unused_182_);
v_unused_183_ = lean_ctor_get(v_impl_99_, 2);
lean_dec(v_unused_183_);
v_unused_184_ = lean_ctor_get(v_impl_99_, 1);
lean_dec(v_unused_184_);
v_unused_185_ = lean_ctor_get(v_impl_99_, 0);
lean_dec(v_unused_185_);
v___x_116_ = v_impl_99_;
v_isShared_117_ = v_isSharedCheck_180_;
goto v_resetjp_115_;
}
else
{
lean_dec(v_impl_99_);
v___x_116_ = lean_box(0);
v_isShared_117_ = v_isSharedCheck_180_;
goto v_resetjp_115_;
}
v_resetjp_115_:
{
lean_object* v_size_118_; lean_object* v_size_119_; lean_object* v_k_120_; lean_object* v_v_121_; lean_object* v_l_122_; lean_object* v_r_123_; lean_object* v___x_124_; lean_object* v___x_125_; uint8_t v___x_126_; 
v_size_118_ = lean_ctor_get(v_l_105_, 0);
v_size_119_ = lean_ctor_get(v_r_106_, 0);
v_k_120_ = lean_ctor_get(v_r_106_, 1);
v_v_121_ = lean_ctor_get(v_r_106_, 2);
v_l_122_ = lean_ctor_get(v_r_106_, 3);
v_r_123_ = lean_ctor_get(v_r_106_, 4);
v___x_124_ = lean_unsigned_to_nat(2u);
v___x_125_ = lean_nat_mul(v___x_124_, v_size_118_);
v___x_126_ = lean_nat_dec_lt(v_size_119_, v___x_125_);
lean_dec(v___x_125_);
if (v___x_126_ == 0)
{
lean_object* v___x_128_; uint8_t v_isShared_129_; uint8_t v_isSharedCheck_155_; 
lean_inc(v_r_123_);
lean_inc(v_l_122_);
lean_inc(v_v_121_);
lean_inc(v_k_120_);
v_isSharedCheck_155_ = !lean_is_exclusive(v_r_106_);
if (v_isSharedCheck_155_ == 0)
{
lean_object* v_unused_156_; lean_object* v_unused_157_; lean_object* v_unused_158_; lean_object* v_unused_159_; lean_object* v_unused_160_; 
v_unused_156_ = lean_ctor_get(v_r_106_, 4);
lean_dec(v_unused_156_);
v_unused_157_ = lean_ctor_get(v_r_106_, 3);
lean_dec(v_unused_157_);
v_unused_158_ = lean_ctor_get(v_r_106_, 2);
lean_dec(v_unused_158_);
v_unused_159_ = lean_ctor_get(v_r_106_, 1);
lean_dec(v_unused_159_);
v_unused_160_ = lean_ctor_get(v_r_106_, 0);
lean_dec(v_unused_160_);
v___x_128_ = v_r_106_;
v_isShared_129_ = v_isSharedCheck_155_;
goto v_resetjp_127_;
}
else
{
lean_dec(v_r_106_);
v___x_128_ = lean_box(0);
v_isShared_129_ = v_isSharedCheck_155_;
goto v_resetjp_127_;
}
v_resetjp_127_:
{
lean_object* v___x_130_; lean_object* v___x_131_; lean_object* v___y_133_; lean_object* v___y_134_; lean_object* v___y_135_; lean_object* v___x_143_; lean_object* v___y_145_; 
v___x_130_ = lean_nat_add(v___x_100_, v_size_102_);
lean_dec(v_size_102_);
v___x_131_ = lean_nat_add(v___x_130_, v_size_101_);
lean_dec(v___x_130_);
v___x_143_ = lean_nat_add(v___x_100_, v_size_118_);
if (lean_obj_tag(v_l_122_) == 0)
{
lean_object* v_size_153_; 
v_size_153_ = lean_ctor_get(v_l_122_, 0);
lean_inc(v_size_153_);
v___y_145_ = v_size_153_;
goto v___jp_144_;
}
else
{
lean_object* v___x_154_; 
v___x_154_ = lean_unsigned_to_nat(0u);
v___y_145_ = v___x_154_;
goto v___jp_144_;
}
v___jp_132_:
{
lean_object* v___x_136_; lean_object* v___x_138_; 
v___x_136_ = lean_nat_add(v___y_134_, v___y_135_);
lean_dec(v___y_135_);
lean_dec(v___y_134_);
if (v_isShared_129_ == 0)
{
lean_ctor_set(v___x_128_, 4, v_r_94_);
lean_ctor_set(v___x_128_, 3, v_r_123_);
lean_ctor_set(v___x_128_, 2, v_v_92_);
lean_ctor_set(v___x_128_, 1, v_k_91_);
lean_ctor_set(v___x_128_, 0, v___x_136_);
v___x_138_ = v___x_128_;
goto v_reusejp_137_;
}
else
{
lean_object* v_reuseFailAlloc_142_; 
v_reuseFailAlloc_142_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_142_, 0, v___x_136_);
lean_ctor_set(v_reuseFailAlloc_142_, 1, v_k_91_);
lean_ctor_set(v_reuseFailAlloc_142_, 2, v_v_92_);
lean_ctor_set(v_reuseFailAlloc_142_, 3, v_r_123_);
lean_ctor_set(v_reuseFailAlloc_142_, 4, v_r_94_);
v___x_138_ = v_reuseFailAlloc_142_;
goto v_reusejp_137_;
}
v_reusejp_137_:
{
lean_object* v___x_140_; 
if (v_isShared_117_ == 0)
{
lean_ctor_set(v___x_116_, 4, v___x_138_);
lean_ctor_set(v___x_116_, 3, v___y_133_);
lean_ctor_set(v___x_116_, 2, v_v_121_);
lean_ctor_set(v___x_116_, 1, v_k_120_);
lean_ctor_set(v___x_116_, 0, v___x_131_);
v___x_140_ = v___x_116_;
goto v_reusejp_139_;
}
else
{
lean_object* v_reuseFailAlloc_141_; 
v_reuseFailAlloc_141_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_141_, 0, v___x_131_);
lean_ctor_set(v_reuseFailAlloc_141_, 1, v_k_120_);
lean_ctor_set(v_reuseFailAlloc_141_, 2, v_v_121_);
lean_ctor_set(v_reuseFailAlloc_141_, 3, v___y_133_);
lean_ctor_set(v_reuseFailAlloc_141_, 4, v___x_138_);
v___x_140_ = v_reuseFailAlloc_141_;
goto v_reusejp_139_;
}
v_reusejp_139_:
{
return v___x_140_;
}
}
}
v___jp_144_:
{
lean_object* v___x_146_; lean_object* v___x_148_; 
v___x_146_ = lean_nat_add(v___x_143_, v___y_145_);
lean_dec(v___y_145_);
lean_dec(v___x_143_);
if (v_isShared_97_ == 0)
{
lean_ctor_set(v___x_96_, 4, v_l_122_);
lean_ctor_set(v___x_96_, 3, v_l_105_);
lean_ctor_set(v___x_96_, 2, v_v_104_);
lean_ctor_set(v___x_96_, 1, v_k_103_);
lean_ctor_set(v___x_96_, 0, v___x_146_);
v___x_148_ = v___x_96_;
goto v_reusejp_147_;
}
else
{
lean_object* v_reuseFailAlloc_152_; 
v_reuseFailAlloc_152_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_152_, 0, v___x_146_);
lean_ctor_set(v_reuseFailAlloc_152_, 1, v_k_103_);
lean_ctor_set(v_reuseFailAlloc_152_, 2, v_v_104_);
lean_ctor_set(v_reuseFailAlloc_152_, 3, v_l_105_);
lean_ctor_set(v_reuseFailAlloc_152_, 4, v_l_122_);
v___x_148_ = v_reuseFailAlloc_152_;
goto v_reusejp_147_;
}
v_reusejp_147_:
{
lean_object* v___x_149_; 
v___x_149_ = lean_nat_add(v___x_100_, v_size_101_);
if (lean_obj_tag(v_r_123_) == 0)
{
lean_object* v_size_150_; 
v_size_150_ = lean_ctor_get(v_r_123_, 0);
lean_inc(v_size_150_);
v___y_133_ = v___x_148_;
v___y_134_ = v___x_149_;
v___y_135_ = v_size_150_;
goto v___jp_132_;
}
else
{
lean_object* v___x_151_; 
v___x_151_ = lean_unsigned_to_nat(0u);
v___y_133_ = v___x_148_;
v___y_134_ = v___x_149_;
v___y_135_ = v___x_151_;
goto v___jp_132_;
}
}
}
}
}
else
{
lean_object* v___x_161_; lean_object* v___x_162_; lean_object* v___x_163_; lean_object* v___x_164_; lean_object* v___x_166_; 
lean_del_object(v___x_96_);
v___x_161_ = lean_nat_add(v___x_100_, v_size_102_);
lean_dec(v_size_102_);
v___x_162_ = lean_nat_add(v___x_161_, v_size_101_);
lean_dec(v___x_161_);
v___x_163_ = lean_nat_add(v___x_100_, v_size_101_);
v___x_164_ = lean_nat_add(v___x_163_, v_size_119_);
lean_dec(v___x_163_);
lean_inc_ref(v_r_94_);
if (v_isShared_117_ == 0)
{
lean_ctor_set(v___x_116_, 4, v_r_94_);
lean_ctor_set(v___x_116_, 3, v_r_106_);
lean_ctor_set(v___x_116_, 2, v_v_92_);
lean_ctor_set(v___x_116_, 1, v_k_91_);
lean_ctor_set(v___x_116_, 0, v___x_164_);
v___x_166_ = v___x_116_;
goto v_reusejp_165_;
}
else
{
lean_object* v_reuseFailAlloc_179_; 
v_reuseFailAlloc_179_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_179_, 0, v___x_164_);
lean_ctor_set(v_reuseFailAlloc_179_, 1, v_k_91_);
lean_ctor_set(v_reuseFailAlloc_179_, 2, v_v_92_);
lean_ctor_set(v_reuseFailAlloc_179_, 3, v_r_106_);
lean_ctor_set(v_reuseFailAlloc_179_, 4, v_r_94_);
v___x_166_ = v_reuseFailAlloc_179_;
goto v_reusejp_165_;
}
v_reusejp_165_:
{
lean_object* v___x_168_; uint8_t v_isShared_169_; uint8_t v_isSharedCheck_173_; 
v_isSharedCheck_173_ = !lean_is_exclusive(v_r_94_);
if (v_isSharedCheck_173_ == 0)
{
lean_object* v_unused_174_; lean_object* v_unused_175_; lean_object* v_unused_176_; lean_object* v_unused_177_; lean_object* v_unused_178_; 
v_unused_174_ = lean_ctor_get(v_r_94_, 4);
lean_dec(v_unused_174_);
v_unused_175_ = lean_ctor_get(v_r_94_, 3);
lean_dec(v_unused_175_);
v_unused_176_ = lean_ctor_get(v_r_94_, 2);
lean_dec(v_unused_176_);
v_unused_177_ = lean_ctor_get(v_r_94_, 1);
lean_dec(v_unused_177_);
v_unused_178_ = lean_ctor_get(v_r_94_, 0);
lean_dec(v_unused_178_);
v___x_168_ = v_r_94_;
v_isShared_169_ = v_isSharedCheck_173_;
goto v_resetjp_167_;
}
else
{
lean_dec(v_r_94_);
v___x_168_ = lean_box(0);
v_isShared_169_ = v_isSharedCheck_173_;
goto v_resetjp_167_;
}
v_resetjp_167_:
{
lean_object* v___x_171_; 
if (v_isShared_169_ == 0)
{
lean_ctor_set(v___x_168_, 4, v___x_166_);
lean_ctor_set(v___x_168_, 3, v_l_105_);
lean_ctor_set(v___x_168_, 2, v_v_104_);
lean_ctor_set(v___x_168_, 1, v_k_103_);
lean_ctor_set(v___x_168_, 0, v___x_162_);
v___x_171_ = v___x_168_;
goto v_reusejp_170_;
}
else
{
lean_object* v_reuseFailAlloc_172_; 
v_reuseFailAlloc_172_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_172_, 0, v___x_162_);
lean_ctor_set(v_reuseFailAlloc_172_, 1, v_k_103_);
lean_ctor_set(v_reuseFailAlloc_172_, 2, v_v_104_);
lean_ctor_set(v_reuseFailAlloc_172_, 3, v_l_105_);
lean_ctor_set(v_reuseFailAlloc_172_, 4, v___x_166_);
v___x_171_ = v_reuseFailAlloc_172_;
goto v_reusejp_170_;
}
v_reusejp_170_:
{
return v___x_171_;
}
}
}
}
}
}
}
else
{
lean_object* v_l_186_; 
v_l_186_ = lean_ctor_get(v_impl_99_, 3);
lean_inc(v_l_186_);
if (lean_obj_tag(v_l_186_) == 0)
{
lean_object* v_r_187_; lean_object* v_k_188_; lean_object* v_v_189_; lean_object* v___x_191_; uint8_t v_isShared_192_; uint8_t v_isSharedCheck_200_; 
v_r_187_ = lean_ctor_get(v_impl_99_, 4);
v_k_188_ = lean_ctor_get(v_impl_99_, 1);
v_v_189_ = lean_ctor_get(v_impl_99_, 2);
v_isSharedCheck_200_ = !lean_is_exclusive(v_impl_99_);
if (v_isSharedCheck_200_ == 0)
{
lean_object* v_unused_201_; lean_object* v_unused_202_; 
v_unused_201_ = lean_ctor_get(v_impl_99_, 3);
lean_dec(v_unused_201_);
v_unused_202_ = lean_ctor_get(v_impl_99_, 0);
lean_dec(v_unused_202_);
v___x_191_ = v_impl_99_;
v_isShared_192_ = v_isSharedCheck_200_;
goto v_resetjp_190_;
}
else
{
lean_inc(v_r_187_);
lean_inc(v_v_189_);
lean_inc(v_k_188_);
lean_dec(v_impl_99_);
v___x_191_ = lean_box(0);
v_isShared_192_ = v_isSharedCheck_200_;
goto v_resetjp_190_;
}
v_resetjp_190_:
{
lean_object* v___x_193_; lean_object* v___x_195_; 
v___x_193_ = lean_unsigned_to_nat(3u);
lean_inc(v_r_187_);
if (v_isShared_192_ == 0)
{
lean_ctor_set(v___x_191_, 3, v_r_187_);
lean_ctor_set(v___x_191_, 2, v_v_92_);
lean_ctor_set(v___x_191_, 1, v_k_91_);
lean_ctor_set(v___x_191_, 0, v___x_100_);
v___x_195_ = v___x_191_;
goto v_reusejp_194_;
}
else
{
lean_object* v_reuseFailAlloc_199_; 
v_reuseFailAlloc_199_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_199_, 0, v___x_100_);
lean_ctor_set(v_reuseFailAlloc_199_, 1, v_k_91_);
lean_ctor_set(v_reuseFailAlloc_199_, 2, v_v_92_);
lean_ctor_set(v_reuseFailAlloc_199_, 3, v_r_187_);
lean_ctor_set(v_reuseFailAlloc_199_, 4, v_r_187_);
v___x_195_ = v_reuseFailAlloc_199_;
goto v_reusejp_194_;
}
v_reusejp_194_:
{
lean_object* v___x_197_; 
if (v_isShared_97_ == 0)
{
lean_ctor_set(v___x_96_, 4, v___x_195_);
lean_ctor_set(v___x_96_, 3, v_l_186_);
lean_ctor_set(v___x_96_, 2, v_v_189_);
lean_ctor_set(v___x_96_, 1, v_k_188_);
lean_ctor_set(v___x_96_, 0, v___x_193_);
v___x_197_ = v___x_96_;
goto v_reusejp_196_;
}
else
{
lean_object* v_reuseFailAlloc_198_; 
v_reuseFailAlloc_198_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_198_, 0, v___x_193_);
lean_ctor_set(v_reuseFailAlloc_198_, 1, v_k_188_);
lean_ctor_set(v_reuseFailAlloc_198_, 2, v_v_189_);
lean_ctor_set(v_reuseFailAlloc_198_, 3, v_l_186_);
lean_ctor_set(v_reuseFailAlloc_198_, 4, v___x_195_);
v___x_197_ = v_reuseFailAlloc_198_;
goto v_reusejp_196_;
}
v_reusejp_196_:
{
return v___x_197_;
}
}
}
}
else
{
lean_object* v_r_203_; 
v_r_203_ = lean_ctor_get(v_impl_99_, 4);
lean_inc(v_r_203_);
if (lean_obj_tag(v_r_203_) == 0)
{
lean_object* v_k_204_; lean_object* v_v_205_; lean_object* v___x_207_; uint8_t v_isShared_208_; uint8_t v_isSharedCheck_228_; 
v_k_204_ = lean_ctor_get(v_impl_99_, 1);
v_v_205_ = lean_ctor_get(v_impl_99_, 2);
v_isSharedCheck_228_ = !lean_is_exclusive(v_impl_99_);
if (v_isSharedCheck_228_ == 0)
{
lean_object* v_unused_229_; lean_object* v_unused_230_; lean_object* v_unused_231_; 
v_unused_229_ = lean_ctor_get(v_impl_99_, 4);
lean_dec(v_unused_229_);
v_unused_230_ = lean_ctor_get(v_impl_99_, 3);
lean_dec(v_unused_230_);
v_unused_231_ = lean_ctor_get(v_impl_99_, 0);
lean_dec(v_unused_231_);
v___x_207_ = v_impl_99_;
v_isShared_208_ = v_isSharedCheck_228_;
goto v_resetjp_206_;
}
else
{
lean_inc(v_v_205_);
lean_inc(v_k_204_);
lean_dec(v_impl_99_);
v___x_207_ = lean_box(0);
v_isShared_208_ = v_isSharedCheck_228_;
goto v_resetjp_206_;
}
v_resetjp_206_:
{
lean_object* v_k_209_; lean_object* v_v_210_; lean_object* v___x_212_; uint8_t v_isShared_213_; uint8_t v_isSharedCheck_224_; 
v_k_209_ = lean_ctor_get(v_r_203_, 1);
v_v_210_ = lean_ctor_get(v_r_203_, 2);
v_isSharedCheck_224_ = !lean_is_exclusive(v_r_203_);
if (v_isSharedCheck_224_ == 0)
{
lean_object* v_unused_225_; lean_object* v_unused_226_; lean_object* v_unused_227_; 
v_unused_225_ = lean_ctor_get(v_r_203_, 4);
lean_dec(v_unused_225_);
v_unused_226_ = lean_ctor_get(v_r_203_, 3);
lean_dec(v_unused_226_);
v_unused_227_ = lean_ctor_get(v_r_203_, 0);
lean_dec(v_unused_227_);
v___x_212_ = v_r_203_;
v_isShared_213_ = v_isSharedCheck_224_;
goto v_resetjp_211_;
}
else
{
lean_inc(v_v_210_);
lean_inc(v_k_209_);
lean_dec(v_r_203_);
v___x_212_ = lean_box(0);
v_isShared_213_ = v_isSharedCheck_224_;
goto v_resetjp_211_;
}
v_resetjp_211_:
{
lean_object* v___x_214_; lean_object* v___x_216_; 
v___x_214_ = lean_unsigned_to_nat(3u);
if (v_isShared_213_ == 0)
{
lean_ctor_set(v___x_212_, 4, v_l_186_);
lean_ctor_set(v___x_212_, 3, v_l_186_);
lean_ctor_set(v___x_212_, 2, v_v_205_);
lean_ctor_set(v___x_212_, 1, v_k_204_);
lean_ctor_set(v___x_212_, 0, v___x_100_);
v___x_216_ = v___x_212_;
goto v_reusejp_215_;
}
else
{
lean_object* v_reuseFailAlloc_223_; 
v_reuseFailAlloc_223_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_223_, 0, v___x_100_);
lean_ctor_set(v_reuseFailAlloc_223_, 1, v_k_204_);
lean_ctor_set(v_reuseFailAlloc_223_, 2, v_v_205_);
lean_ctor_set(v_reuseFailAlloc_223_, 3, v_l_186_);
lean_ctor_set(v_reuseFailAlloc_223_, 4, v_l_186_);
v___x_216_ = v_reuseFailAlloc_223_;
goto v_reusejp_215_;
}
v_reusejp_215_:
{
lean_object* v___x_218_; 
if (v_isShared_208_ == 0)
{
lean_ctor_set(v___x_207_, 4, v_l_186_);
lean_ctor_set(v___x_207_, 2, v_v_92_);
lean_ctor_set(v___x_207_, 1, v_k_91_);
lean_ctor_set(v___x_207_, 0, v___x_100_);
v___x_218_ = v___x_207_;
goto v_reusejp_217_;
}
else
{
lean_object* v_reuseFailAlloc_222_; 
v_reuseFailAlloc_222_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_222_, 0, v___x_100_);
lean_ctor_set(v_reuseFailAlloc_222_, 1, v_k_91_);
lean_ctor_set(v_reuseFailAlloc_222_, 2, v_v_92_);
lean_ctor_set(v_reuseFailAlloc_222_, 3, v_l_186_);
lean_ctor_set(v_reuseFailAlloc_222_, 4, v_l_186_);
v___x_218_ = v_reuseFailAlloc_222_;
goto v_reusejp_217_;
}
v_reusejp_217_:
{
lean_object* v___x_220_; 
if (v_isShared_97_ == 0)
{
lean_ctor_set(v___x_96_, 4, v___x_218_);
lean_ctor_set(v___x_96_, 3, v___x_216_);
lean_ctor_set(v___x_96_, 2, v_v_210_);
lean_ctor_set(v___x_96_, 1, v_k_209_);
lean_ctor_set(v___x_96_, 0, v___x_214_);
v___x_220_ = v___x_96_;
goto v_reusejp_219_;
}
else
{
lean_object* v_reuseFailAlloc_221_; 
v_reuseFailAlloc_221_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_221_, 0, v___x_214_);
lean_ctor_set(v_reuseFailAlloc_221_, 1, v_k_209_);
lean_ctor_set(v_reuseFailAlloc_221_, 2, v_v_210_);
lean_ctor_set(v_reuseFailAlloc_221_, 3, v___x_216_);
lean_ctor_set(v_reuseFailAlloc_221_, 4, v___x_218_);
v___x_220_ = v_reuseFailAlloc_221_;
goto v_reusejp_219_;
}
v_reusejp_219_:
{
return v___x_220_;
}
}
}
}
}
}
else
{
lean_object* v___x_232_; lean_object* v___x_234_; 
v___x_232_ = lean_unsigned_to_nat(2u);
if (v_isShared_97_ == 0)
{
lean_ctor_set(v___x_96_, 4, v_r_203_);
lean_ctor_set(v___x_96_, 3, v_impl_99_);
lean_ctor_set(v___x_96_, 0, v___x_232_);
v___x_234_ = v___x_96_;
goto v_reusejp_233_;
}
else
{
lean_object* v_reuseFailAlloc_235_; 
v_reuseFailAlloc_235_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_235_, 0, v___x_232_);
lean_ctor_set(v_reuseFailAlloc_235_, 1, v_k_91_);
lean_ctor_set(v_reuseFailAlloc_235_, 2, v_v_92_);
lean_ctor_set(v_reuseFailAlloc_235_, 3, v_impl_99_);
lean_ctor_set(v_reuseFailAlloc_235_, 4, v_r_203_);
v___x_234_ = v_reuseFailAlloc_235_;
goto v_reusejp_233_;
}
v_reusejp_233_:
{
return v___x_234_;
}
}
}
}
}
case 1:
{
lean_object* v___x_237_; 
lean_dec(v_v_92_);
lean_dec(v_k_91_);
if (v_isShared_97_ == 0)
{
lean_ctor_set(v___x_96_, 2, v_v_88_);
lean_ctor_set(v___x_96_, 1, v_k_87_);
v___x_237_ = v___x_96_;
goto v_reusejp_236_;
}
else
{
lean_object* v_reuseFailAlloc_238_; 
v_reuseFailAlloc_238_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_238_, 0, v_size_90_);
lean_ctor_set(v_reuseFailAlloc_238_, 1, v_k_87_);
lean_ctor_set(v_reuseFailAlloc_238_, 2, v_v_88_);
lean_ctor_set(v_reuseFailAlloc_238_, 3, v_l_93_);
lean_ctor_set(v_reuseFailAlloc_238_, 4, v_r_94_);
v___x_237_ = v_reuseFailAlloc_238_;
goto v_reusejp_236_;
}
v_reusejp_236_:
{
return v___x_237_;
}
}
default: 
{
lean_object* v_impl_239_; lean_object* v___x_240_; 
lean_dec(v_size_90_);
v_impl_239_ = l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_addDepPackage_x27_spec__0___redArg(v_k_87_, v_v_88_, v_r_94_);
v___x_240_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_l_93_) == 0)
{
lean_object* v_size_241_; lean_object* v_size_242_; lean_object* v_k_243_; lean_object* v_v_244_; lean_object* v_l_245_; lean_object* v_r_246_; lean_object* v___x_247_; lean_object* v___x_248_; uint8_t v___x_249_; 
v_size_241_ = lean_ctor_get(v_l_93_, 0);
v_size_242_ = lean_ctor_get(v_impl_239_, 0);
lean_inc(v_size_242_);
v_k_243_ = lean_ctor_get(v_impl_239_, 1);
lean_inc(v_k_243_);
v_v_244_ = lean_ctor_get(v_impl_239_, 2);
lean_inc(v_v_244_);
v_l_245_ = lean_ctor_get(v_impl_239_, 3);
lean_inc(v_l_245_);
v_r_246_ = lean_ctor_get(v_impl_239_, 4);
lean_inc(v_r_246_);
v___x_247_ = lean_unsigned_to_nat(3u);
v___x_248_ = lean_nat_mul(v___x_247_, v_size_241_);
v___x_249_ = lean_nat_dec_lt(v___x_248_, v_size_242_);
lean_dec(v___x_248_);
if (v___x_249_ == 0)
{
lean_object* v___x_250_; lean_object* v___x_251_; lean_object* v___x_253_; 
lean_dec(v_r_246_);
lean_dec(v_l_245_);
lean_dec(v_v_244_);
lean_dec(v_k_243_);
v___x_250_ = lean_nat_add(v___x_240_, v_size_241_);
v___x_251_ = lean_nat_add(v___x_250_, v_size_242_);
lean_dec(v_size_242_);
lean_dec(v___x_250_);
if (v_isShared_97_ == 0)
{
lean_ctor_set(v___x_96_, 4, v_impl_239_);
lean_ctor_set(v___x_96_, 0, v___x_251_);
v___x_253_ = v___x_96_;
goto v_reusejp_252_;
}
else
{
lean_object* v_reuseFailAlloc_254_; 
v_reuseFailAlloc_254_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_254_, 0, v___x_251_);
lean_ctor_set(v_reuseFailAlloc_254_, 1, v_k_91_);
lean_ctor_set(v_reuseFailAlloc_254_, 2, v_v_92_);
lean_ctor_set(v_reuseFailAlloc_254_, 3, v_l_93_);
lean_ctor_set(v_reuseFailAlloc_254_, 4, v_impl_239_);
v___x_253_ = v_reuseFailAlloc_254_;
goto v_reusejp_252_;
}
v_reusejp_252_:
{
return v___x_253_;
}
}
else
{
lean_object* v___x_256_; uint8_t v_isShared_257_; uint8_t v_isSharedCheck_318_; 
v_isSharedCheck_318_ = !lean_is_exclusive(v_impl_239_);
if (v_isSharedCheck_318_ == 0)
{
lean_object* v_unused_319_; lean_object* v_unused_320_; lean_object* v_unused_321_; lean_object* v_unused_322_; lean_object* v_unused_323_; 
v_unused_319_ = lean_ctor_get(v_impl_239_, 4);
lean_dec(v_unused_319_);
v_unused_320_ = lean_ctor_get(v_impl_239_, 3);
lean_dec(v_unused_320_);
v_unused_321_ = lean_ctor_get(v_impl_239_, 2);
lean_dec(v_unused_321_);
v_unused_322_ = lean_ctor_get(v_impl_239_, 1);
lean_dec(v_unused_322_);
v_unused_323_ = lean_ctor_get(v_impl_239_, 0);
lean_dec(v_unused_323_);
v___x_256_ = v_impl_239_;
v_isShared_257_ = v_isSharedCheck_318_;
goto v_resetjp_255_;
}
else
{
lean_dec(v_impl_239_);
v___x_256_ = lean_box(0);
v_isShared_257_ = v_isSharedCheck_318_;
goto v_resetjp_255_;
}
v_resetjp_255_:
{
lean_object* v_size_258_; lean_object* v_k_259_; lean_object* v_v_260_; lean_object* v_l_261_; lean_object* v_r_262_; lean_object* v_size_263_; lean_object* v___x_264_; lean_object* v___x_265_; uint8_t v___x_266_; 
v_size_258_ = lean_ctor_get(v_l_245_, 0);
v_k_259_ = lean_ctor_get(v_l_245_, 1);
v_v_260_ = lean_ctor_get(v_l_245_, 2);
v_l_261_ = lean_ctor_get(v_l_245_, 3);
v_r_262_ = lean_ctor_get(v_l_245_, 4);
v_size_263_ = lean_ctor_get(v_r_246_, 0);
v___x_264_ = lean_unsigned_to_nat(2u);
v___x_265_ = lean_nat_mul(v___x_264_, v_size_263_);
v___x_266_ = lean_nat_dec_lt(v_size_258_, v___x_265_);
lean_dec(v___x_265_);
if (v___x_266_ == 0)
{
lean_object* v___x_268_; uint8_t v_isShared_269_; uint8_t v_isSharedCheck_294_; 
lean_inc(v_r_262_);
lean_inc(v_l_261_);
lean_inc(v_v_260_);
lean_inc(v_k_259_);
v_isSharedCheck_294_ = !lean_is_exclusive(v_l_245_);
if (v_isSharedCheck_294_ == 0)
{
lean_object* v_unused_295_; lean_object* v_unused_296_; lean_object* v_unused_297_; lean_object* v_unused_298_; lean_object* v_unused_299_; 
v_unused_295_ = lean_ctor_get(v_l_245_, 4);
lean_dec(v_unused_295_);
v_unused_296_ = lean_ctor_get(v_l_245_, 3);
lean_dec(v_unused_296_);
v_unused_297_ = lean_ctor_get(v_l_245_, 2);
lean_dec(v_unused_297_);
v_unused_298_ = lean_ctor_get(v_l_245_, 1);
lean_dec(v_unused_298_);
v_unused_299_ = lean_ctor_get(v_l_245_, 0);
lean_dec(v_unused_299_);
v___x_268_ = v_l_245_;
v_isShared_269_ = v_isSharedCheck_294_;
goto v_resetjp_267_;
}
else
{
lean_dec(v_l_245_);
v___x_268_ = lean_box(0);
v_isShared_269_ = v_isSharedCheck_294_;
goto v_resetjp_267_;
}
v_resetjp_267_:
{
lean_object* v___x_270_; lean_object* v___x_271_; lean_object* v___y_273_; lean_object* v___y_274_; lean_object* v___y_275_; lean_object* v___y_284_; 
v___x_270_ = lean_nat_add(v___x_240_, v_size_241_);
v___x_271_ = lean_nat_add(v___x_270_, v_size_242_);
lean_dec(v_size_242_);
if (lean_obj_tag(v_l_261_) == 0)
{
lean_object* v_size_292_; 
v_size_292_ = lean_ctor_get(v_l_261_, 0);
lean_inc(v_size_292_);
v___y_284_ = v_size_292_;
goto v___jp_283_;
}
else
{
lean_object* v___x_293_; 
v___x_293_ = lean_unsigned_to_nat(0u);
v___y_284_ = v___x_293_;
goto v___jp_283_;
}
v___jp_272_:
{
lean_object* v___x_276_; lean_object* v___x_278_; 
v___x_276_ = lean_nat_add(v___y_274_, v___y_275_);
lean_dec(v___y_275_);
lean_dec(v___y_274_);
if (v_isShared_269_ == 0)
{
lean_ctor_set(v___x_268_, 4, v_r_246_);
lean_ctor_set(v___x_268_, 3, v_r_262_);
lean_ctor_set(v___x_268_, 2, v_v_244_);
lean_ctor_set(v___x_268_, 1, v_k_243_);
lean_ctor_set(v___x_268_, 0, v___x_276_);
v___x_278_ = v___x_268_;
goto v_reusejp_277_;
}
else
{
lean_object* v_reuseFailAlloc_282_; 
v_reuseFailAlloc_282_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_282_, 0, v___x_276_);
lean_ctor_set(v_reuseFailAlloc_282_, 1, v_k_243_);
lean_ctor_set(v_reuseFailAlloc_282_, 2, v_v_244_);
lean_ctor_set(v_reuseFailAlloc_282_, 3, v_r_262_);
lean_ctor_set(v_reuseFailAlloc_282_, 4, v_r_246_);
v___x_278_ = v_reuseFailAlloc_282_;
goto v_reusejp_277_;
}
v_reusejp_277_:
{
lean_object* v___x_280_; 
if (v_isShared_257_ == 0)
{
lean_ctor_set(v___x_256_, 4, v___x_278_);
lean_ctor_set(v___x_256_, 3, v___y_273_);
lean_ctor_set(v___x_256_, 2, v_v_260_);
lean_ctor_set(v___x_256_, 1, v_k_259_);
lean_ctor_set(v___x_256_, 0, v___x_271_);
v___x_280_ = v___x_256_;
goto v_reusejp_279_;
}
else
{
lean_object* v_reuseFailAlloc_281_; 
v_reuseFailAlloc_281_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_281_, 0, v___x_271_);
lean_ctor_set(v_reuseFailAlloc_281_, 1, v_k_259_);
lean_ctor_set(v_reuseFailAlloc_281_, 2, v_v_260_);
lean_ctor_set(v_reuseFailAlloc_281_, 3, v___y_273_);
lean_ctor_set(v_reuseFailAlloc_281_, 4, v___x_278_);
v___x_280_ = v_reuseFailAlloc_281_;
goto v_reusejp_279_;
}
v_reusejp_279_:
{
return v___x_280_;
}
}
}
v___jp_283_:
{
lean_object* v___x_285_; lean_object* v___x_287_; 
v___x_285_ = lean_nat_add(v___x_270_, v___y_284_);
lean_dec(v___y_284_);
lean_dec(v___x_270_);
if (v_isShared_97_ == 0)
{
lean_ctor_set(v___x_96_, 4, v_l_261_);
lean_ctor_set(v___x_96_, 0, v___x_285_);
v___x_287_ = v___x_96_;
goto v_reusejp_286_;
}
else
{
lean_object* v_reuseFailAlloc_291_; 
v_reuseFailAlloc_291_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_291_, 0, v___x_285_);
lean_ctor_set(v_reuseFailAlloc_291_, 1, v_k_91_);
lean_ctor_set(v_reuseFailAlloc_291_, 2, v_v_92_);
lean_ctor_set(v_reuseFailAlloc_291_, 3, v_l_93_);
lean_ctor_set(v_reuseFailAlloc_291_, 4, v_l_261_);
v___x_287_ = v_reuseFailAlloc_291_;
goto v_reusejp_286_;
}
v_reusejp_286_:
{
lean_object* v___x_288_; 
v___x_288_ = lean_nat_add(v___x_240_, v_size_263_);
if (lean_obj_tag(v_r_262_) == 0)
{
lean_object* v_size_289_; 
v_size_289_ = lean_ctor_get(v_r_262_, 0);
lean_inc(v_size_289_);
v___y_273_ = v___x_287_;
v___y_274_ = v___x_288_;
v___y_275_ = v_size_289_;
goto v___jp_272_;
}
else
{
lean_object* v___x_290_; 
v___x_290_ = lean_unsigned_to_nat(0u);
v___y_273_ = v___x_287_;
v___y_274_ = v___x_288_;
v___y_275_ = v___x_290_;
goto v___jp_272_;
}
}
}
}
}
else
{
lean_object* v___x_300_; lean_object* v___x_301_; lean_object* v___x_302_; lean_object* v___x_304_; 
lean_del_object(v___x_96_);
v___x_300_ = lean_nat_add(v___x_240_, v_size_241_);
v___x_301_ = lean_nat_add(v___x_300_, v_size_242_);
lean_dec(v_size_242_);
v___x_302_ = lean_nat_add(v___x_300_, v_size_258_);
lean_dec(v___x_300_);
lean_inc_ref(v_l_93_);
if (v_isShared_257_ == 0)
{
lean_ctor_set(v___x_256_, 4, v_l_245_);
lean_ctor_set(v___x_256_, 3, v_l_93_);
lean_ctor_set(v___x_256_, 2, v_v_92_);
lean_ctor_set(v___x_256_, 1, v_k_91_);
lean_ctor_set(v___x_256_, 0, v___x_302_);
v___x_304_ = v___x_256_;
goto v_reusejp_303_;
}
else
{
lean_object* v_reuseFailAlloc_317_; 
v_reuseFailAlloc_317_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_317_, 0, v___x_302_);
lean_ctor_set(v_reuseFailAlloc_317_, 1, v_k_91_);
lean_ctor_set(v_reuseFailAlloc_317_, 2, v_v_92_);
lean_ctor_set(v_reuseFailAlloc_317_, 3, v_l_93_);
lean_ctor_set(v_reuseFailAlloc_317_, 4, v_l_245_);
v___x_304_ = v_reuseFailAlloc_317_;
goto v_reusejp_303_;
}
v_reusejp_303_:
{
lean_object* v___x_306_; uint8_t v_isShared_307_; uint8_t v_isSharedCheck_311_; 
v_isSharedCheck_311_ = !lean_is_exclusive(v_l_93_);
if (v_isSharedCheck_311_ == 0)
{
lean_object* v_unused_312_; lean_object* v_unused_313_; lean_object* v_unused_314_; lean_object* v_unused_315_; lean_object* v_unused_316_; 
v_unused_312_ = lean_ctor_get(v_l_93_, 4);
lean_dec(v_unused_312_);
v_unused_313_ = lean_ctor_get(v_l_93_, 3);
lean_dec(v_unused_313_);
v_unused_314_ = lean_ctor_get(v_l_93_, 2);
lean_dec(v_unused_314_);
v_unused_315_ = lean_ctor_get(v_l_93_, 1);
lean_dec(v_unused_315_);
v_unused_316_ = lean_ctor_get(v_l_93_, 0);
lean_dec(v_unused_316_);
v___x_306_ = v_l_93_;
v_isShared_307_ = v_isSharedCheck_311_;
goto v_resetjp_305_;
}
else
{
lean_dec(v_l_93_);
v___x_306_ = lean_box(0);
v_isShared_307_ = v_isSharedCheck_311_;
goto v_resetjp_305_;
}
v_resetjp_305_:
{
lean_object* v___x_309_; 
if (v_isShared_307_ == 0)
{
lean_ctor_set(v___x_306_, 4, v_r_246_);
lean_ctor_set(v___x_306_, 3, v___x_304_);
lean_ctor_set(v___x_306_, 2, v_v_244_);
lean_ctor_set(v___x_306_, 1, v_k_243_);
lean_ctor_set(v___x_306_, 0, v___x_301_);
v___x_309_ = v___x_306_;
goto v_reusejp_308_;
}
else
{
lean_object* v_reuseFailAlloc_310_; 
v_reuseFailAlloc_310_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_310_, 0, v___x_301_);
lean_ctor_set(v_reuseFailAlloc_310_, 1, v_k_243_);
lean_ctor_set(v_reuseFailAlloc_310_, 2, v_v_244_);
lean_ctor_set(v_reuseFailAlloc_310_, 3, v___x_304_);
lean_ctor_set(v_reuseFailAlloc_310_, 4, v_r_246_);
v___x_309_ = v_reuseFailAlloc_310_;
goto v_reusejp_308_;
}
v_reusejp_308_:
{
return v___x_309_;
}
}
}
}
}
}
}
else
{
lean_object* v_l_324_; 
v_l_324_ = lean_ctor_get(v_impl_239_, 3);
lean_inc(v_l_324_);
if (lean_obj_tag(v_l_324_) == 0)
{
lean_object* v_r_325_; lean_object* v_k_326_; lean_object* v_v_327_; lean_object* v___x_329_; uint8_t v_isShared_330_; uint8_t v_isSharedCheck_350_; 
v_r_325_ = lean_ctor_get(v_impl_239_, 4);
v_k_326_ = lean_ctor_get(v_impl_239_, 1);
v_v_327_ = lean_ctor_get(v_impl_239_, 2);
v_isSharedCheck_350_ = !lean_is_exclusive(v_impl_239_);
if (v_isSharedCheck_350_ == 0)
{
lean_object* v_unused_351_; lean_object* v_unused_352_; 
v_unused_351_ = lean_ctor_get(v_impl_239_, 3);
lean_dec(v_unused_351_);
v_unused_352_ = lean_ctor_get(v_impl_239_, 0);
lean_dec(v_unused_352_);
v___x_329_ = v_impl_239_;
v_isShared_330_ = v_isSharedCheck_350_;
goto v_resetjp_328_;
}
else
{
lean_inc(v_r_325_);
lean_inc(v_v_327_);
lean_inc(v_k_326_);
lean_dec(v_impl_239_);
v___x_329_ = lean_box(0);
v_isShared_330_ = v_isSharedCheck_350_;
goto v_resetjp_328_;
}
v_resetjp_328_:
{
lean_object* v_k_331_; lean_object* v_v_332_; lean_object* v___x_334_; uint8_t v_isShared_335_; uint8_t v_isSharedCheck_346_; 
v_k_331_ = lean_ctor_get(v_l_324_, 1);
v_v_332_ = lean_ctor_get(v_l_324_, 2);
v_isSharedCheck_346_ = !lean_is_exclusive(v_l_324_);
if (v_isSharedCheck_346_ == 0)
{
lean_object* v_unused_347_; lean_object* v_unused_348_; lean_object* v_unused_349_; 
v_unused_347_ = lean_ctor_get(v_l_324_, 4);
lean_dec(v_unused_347_);
v_unused_348_ = lean_ctor_get(v_l_324_, 3);
lean_dec(v_unused_348_);
v_unused_349_ = lean_ctor_get(v_l_324_, 0);
lean_dec(v_unused_349_);
v___x_334_ = v_l_324_;
v_isShared_335_ = v_isSharedCheck_346_;
goto v_resetjp_333_;
}
else
{
lean_inc(v_v_332_);
lean_inc(v_k_331_);
lean_dec(v_l_324_);
v___x_334_ = lean_box(0);
v_isShared_335_ = v_isSharedCheck_346_;
goto v_resetjp_333_;
}
v_resetjp_333_:
{
lean_object* v___x_336_; lean_object* v___x_338_; 
v___x_336_ = lean_unsigned_to_nat(3u);
lean_inc_n(v_r_325_, 2);
if (v_isShared_335_ == 0)
{
lean_ctor_set(v___x_334_, 4, v_r_325_);
lean_ctor_set(v___x_334_, 3, v_r_325_);
lean_ctor_set(v___x_334_, 2, v_v_92_);
lean_ctor_set(v___x_334_, 1, v_k_91_);
lean_ctor_set(v___x_334_, 0, v___x_240_);
v___x_338_ = v___x_334_;
goto v_reusejp_337_;
}
else
{
lean_object* v_reuseFailAlloc_345_; 
v_reuseFailAlloc_345_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_345_, 0, v___x_240_);
lean_ctor_set(v_reuseFailAlloc_345_, 1, v_k_91_);
lean_ctor_set(v_reuseFailAlloc_345_, 2, v_v_92_);
lean_ctor_set(v_reuseFailAlloc_345_, 3, v_r_325_);
lean_ctor_set(v_reuseFailAlloc_345_, 4, v_r_325_);
v___x_338_ = v_reuseFailAlloc_345_;
goto v_reusejp_337_;
}
v_reusejp_337_:
{
lean_object* v___x_340_; 
lean_inc(v_r_325_);
if (v_isShared_330_ == 0)
{
lean_ctor_set(v___x_329_, 3, v_r_325_);
lean_ctor_set(v___x_329_, 0, v___x_240_);
v___x_340_ = v___x_329_;
goto v_reusejp_339_;
}
else
{
lean_object* v_reuseFailAlloc_344_; 
v_reuseFailAlloc_344_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_344_, 0, v___x_240_);
lean_ctor_set(v_reuseFailAlloc_344_, 1, v_k_326_);
lean_ctor_set(v_reuseFailAlloc_344_, 2, v_v_327_);
lean_ctor_set(v_reuseFailAlloc_344_, 3, v_r_325_);
lean_ctor_set(v_reuseFailAlloc_344_, 4, v_r_325_);
v___x_340_ = v_reuseFailAlloc_344_;
goto v_reusejp_339_;
}
v_reusejp_339_:
{
lean_object* v___x_342_; 
if (v_isShared_97_ == 0)
{
lean_ctor_set(v___x_96_, 4, v___x_340_);
lean_ctor_set(v___x_96_, 3, v___x_338_);
lean_ctor_set(v___x_96_, 2, v_v_332_);
lean_ctor_set(v___x_96_, 1, v_k_331_);
lean_ctor_set(v___x_96_, 0, v___x_336_);
v___x_342_ = v___x_96_;
goto v_reusejp_341_;
}
else
{
lean_object* v_reuseFailAlloc_343_; 
v_reuseFailAlloc_343_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_343_, 0, v___x_336_);
lean_ctor_set(v_reuseFailAlloc_343_, 1, v_k_331_);
lean_ctor_set(v_reuseFailAlloc_343_, 2, v_v_332_);
lean_ctor_set(v_reuseFailAlloc_343_, 3, v___x_338_);
lean_ctor_set(v_reuseFailAlloc_343_, 4, v___x_340_);
v___x_342_ = v_reuseFailAlloc_343_;
goto v_reusejp_341_;
}
v_reusejp_341_:
{
return v___x_342_;
}
}
}
}
}
}
else
{
lean_object* v_r_353_; 
v_r_353_ = lean_ctor_get(v_impl_239_, 4);
lean_inc(v_r_353_);
if (lean_obj_tag(v_r_353_) == 0)
{
lean_object* v_k_354_; lean_object* v_v_355_; lean_object* v___x_357_; uint8_t v_isShared_358_; uint8_t v_isSharedCheck_366_; 
v_k_354_ = lean_ctor_get(v_impl_239_, 1);
v_v_355_ = lean_ctor_get(v_impl_239_, 2);
v_isSharedCheck_366_ = !lean_is_exclusive(v_impl_239_);
if (v_isSharedCheck_366_ == 0)
{
lean_object* v_unused_367_; lean_object* v_unused_368_; lean_object* v_unused_369_; 
v_unused_367_ = lean_ctor_get(v_impl_239_, 4);
lean_dec(v_unused_367_);
v_unused_368_ = lean_ctor_get(v_impl_239_, 3);
lean_dec(v_unused_368_);
v_unused_369_ = lean_ctor_get(v_impl_239_, 0);
lean_dec(v_unused_369_);
v___x_357_ = v_impl_239_;
v_isShared_358_ = v_isSharedCheck_366_;
goto v_resetjp_356_;
}
else
{
lean_inc(v_v_355_);
lean_inc(v_k_354_);
lean_dec(v_impl_239_);
v___x_357_ = lean_box(0);
v_isShared_358_ = v_isSharedCheck_366_;
goto v_resetjp_356_;
}
v_resetjp_356_:
{
lean_object* v___x_359_; lean_object* v___x_361_; 
v___x_359_ = lean_unsigned_to_nat(3u);
if (v_isShared_358_ == 0)
{
lean_ctor_set(v___x_357_, 4, v_l_324_);
lean_ctor_set(v___x_357_, 2, v_v_92_);
lean_ctor_set(v___x_357_, 1, v_k_91_);
lean_ctor_set(v___x_357_, 0, v___x_240_);
v___x_361_ = v___x_357_;
goto v_reusejp_360_;
}
else
{
lean_object* v_reuseFailAlloc_365_; 
v_reuseFailAlloc_365_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_365_, 0, v___x_240_);
lean_ctor_set(v_reuseFailAlloc_365_, 1, v_k_91_);
lean_ctor_set(v_reuseFailAlloc_365_, 2, v_v_92_);
lean_ctor_set(v_reuseFailAlloc_365_, 3, v_l_324_);
lean_ctor_set(v_reuseFailAlloc_365_, 4, v_l_324_);
v___x_361_ = v_reuseFailAlloc_365_;
goto v_reusejp_360_;
}
v_reusejp_360_:
{
lean_object* v___x_363_; 
if (v_isShared_97_ == 0)
{
lean_ctor_set(v___x_96_, 4, v_r_353_);
lean_ctor_set(v___x_96_, 3, v___x_361_);
lean_ctor_set(v___x_96_, 2, v_v_355_);
lean_ctor_set(v___x_96_, 1, v_k_354_);
lean_ctor_set(v___x_96_, 0, v___x_359_);
v___x_363_ = v___x_96_;
goto v_reusejp_362_;
}
else
{
lean_object* v_reuseFailAlloc_364_; 
v_reuseFailAlloc_364_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_364_, 0, v___x_359_);
lean_ctor_set(v_reuseFailAlloc_364_, 1, v_k_354_);
lean_ctor_set(v_reuseFailAlloc_364_, 2, v_v_355_);
lean_ctor_set(v_reuseFailAlloc_364_, 3, v___x_361_);
lean_ctor_set(v_reuseFailAlloc_364_, 4, v_r_353_);
v___x_363_ = v_reuseFailAlloc_364_;
goto v_reusejp_362_;
}
v_reusejp_362_:
{
return v___x_363_;
}
}
}
}
else
{
lean_object* v___x_370_; lean_object* v___x_372_; 
v___x_370_ = lean_unsigned_to_nat(2u);
if (v_isShared_97_ == 0)
{
lean_ctor_set(v___x_96_, 4, v_impl_239_);
lean_ctor_set(v___x_96_, 3, v_r_353_);
lean_ctor_set(v___x_96_, 0, v___x_370_);
v___x_372_ = v___x_96_;
goto v_reusejp_371_;
}
else
{
lean_object* v_reuseFailAlloc_373_; 
v_reuseFailAlloc_373_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_373_, 0, v___x_370_);
lean_ctor_set(v_reuseFailAlloc_373_, 1, v_k_91_);
lean_ctor_set(v_reuseFailAlloc_373_, 2, v_v_92_);
lean_ctor_set(v_reuseFailAlloc_373_, 3, v_r_353_);
lean_ctor_set(v_reuseFailAlloc_373_, 4, v_impl_239_);
v___x_372_ = v_reuseFailAlloc_373_;
goto v_reusejp_371_;
}
v_reusejp_371_:
{
return v___x_372_;
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
lean_object* v___x_375_; lean_object* v___x_376_; 
v___x_375_ = lean_unsigned_to_nat(1u);
v___x_376_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_376_, 0, v___x_375_);
lean_ctor_set(v___x_376_, 1, v_k_87_);
lean_ctor_set(v___x_376_, 2, v_v_88_);
lean_ctor_set(v___x_376_, 3, v_t_89_);
lean_ctor_set(v___x_376_, 4, v_t_89_);
return v___x_376_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_addDepPackage_x27(lean_object* v_ws_377_, lean_object* v_dep_378_, lean_object* v_lakeOpts_379_, lean_object* v_leanOpts_380_, uint8_t v_reconfigure_381_, lean_object* v_a_382_){
_start:
{
lean_object* v_lakeEnv_384_; lean_object* v_lakeConfig_385_; lean_object* v_lakeCache_386_; lean_object* v_lakeArgs_x3f_387_; lean_object* v_packages_388_; lean_object* v_packageMap_389_; lean_object* v_facetConfigs_390_; lean_object* v___x_392_; uint8_t v_isShared_393_; uint8_t v_isSharedCheck_457_; 
v_lakeEnv_384_ = lean_ctor_get(v_ws_377_, 0);
v_lakeConfig_385_ = lean_ctor_get(v_ws_377_, 1);
v_lakeCache_386_ = lean_ctor_get(v_ws_377_, 2);
v_lakeArgs_x3f_387_ = lean_ctor_get(v_ws_377_, 3);
v_packages_388_ = lean_ctor_get(v_ws_377_, 4);
v_packageMap_389_ = lean_ctor_get(v_ws_377_, 5);
v_facetConfigs_390_ = lean_ctor_get(v_ws_377_, 6);
v_isSharedCheck_457_ = !lean_is_exclusive(v_ws_377_);
if (v_isSharedCheck_457_ == 0)
{
v___x_392_ = v_ws_377_;
v_isShared_393_ = v_isSharedCheck_457_;
goto v_resetjp_391_;
}
else
{
lean_inc(v_facetConfigs_390_);
lean_inc(v_packageMap_389_);
lean_inc(v_packages_388_);
lean_inc(v_lakeArgs_x3f_387_);
lean_inc(v_lakeCache_386_);
lean_inc(v_lakeConfig_385_);
lean_inc(v_lakeEnv_384_);
lean_dec(v_ws_377_);
v___x_392_ = lean_box(0);
v_isShared_393_ = v_isSharedCheck_457_;
goto v_resetjp_391_;
}
v_resetjp_391_:
{
lean_object* v___x_394_; lean_object* v___x_395_; lean_object* v_manifestEntry_396_; lean_object* v_dir_397_; lean_object* v_pkgDir_398_; lean_object* v_relPkgDir_399_; lean_object* v_remoteUrl_400_; lean_object* v_name_401_; lean_object* v_scope_402_; lean_object* v_configFile_403_; lean_object* v_manifestFile_x3f_404_; lean_object* v_wsIdx_405_; lean_object* v___x_406_; lean_object* v___x_407_; lean_object* v___y_409_; 
v___x_394_ = lean_unsigned_to_nat(0u);
v___x_395_ = lean_array_fget_borrowed(v_packages_388_, v___x_394_);
v_manifestEntry_396_ = lean_ctor_get(v_dep_378_, 4);
lean_inc_ref(v_manifestEntry_396_);
v_dir_397_ = lean_ctor_get(v___x_395_, 4);
v_pkgDir_398_ = lean_ctor_get(v_dep_378_, 0);
lean_inc_ref_n(v_pkgDir_398_, 2);
v_relPkgDir_399_ = lean_ctor_get(v_dep_378_, 1);
lean_inc_ref(v_relPkgDir_399_);
v_remoteUrl_400_ = lean_ctor_get(v_dep_378_, 2);
lean_inc_ref(v_remoteUrl_400_);
lean_dec_ref(v_dep_378_);
v_name_401_ = lean_ctor_get(v_manifestEntry_396_, 0);
lean_inc(v_name_401_);
v_scope_402_ = lean_ctor_get(v_manifestEntry_396_, 1);
lean_inc_ref(v_scope_402_);
v_configFile_403_ = lean_ctor_get(v_manifestEntry_396_, 2);
lean_inc_ref_n(v_configFile_403_, 2);
v_manifestFile_x3f_404_ = lean_ctor_get(v_manifestEntry_396_, 3);
lean_inc(v_manifestFile_x3f_404_);
lean_dec_ref(v_manifestEntry_396_);
v_wsIdx_405_ = lean_array_get_size(v_packages_388_);
v___x_406_ = lean_box(0);
v___x_407_ = l_Lake_joinRelative(v_pkgDir_398_, v_configFile_403_);
if (lean_obj_tag(v_manifestFile_x3f_404_) == 0)
{
lean_object* v___x_455_; 
v___x_455_ = l_Lake_defaultManifestFile;
v___y_409_ = v___x_455_;
goto v___jp_408_;
}
else
{
lean_object* v_val_456_; 
v_val_456_ = lean_ctor_get(v_manifestFile_x3f_404_, 0);
lean_inc(v_val_456_);
lean_dec_ref_known(v_manifestFile_x3f_404_, 1);
v___y_409_ = v_val_456_;
goto v___jp_408_;
}
v___jp_408_:
{
lean_object* v___x_410_; uint8_t v___x_411_; uint8_t v___x_412_; lean_object* v___x_413_; lean_object* v___x_414_; lean_object* v___x_415_; 
v___x_410_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_mkDepLoadConfig___closed__0));
v___x_411_ = 0;
v___x_412_ = 1;
lean_inc(v_name_401_);
lean_inc_ref(v_dir_397_);
lean_inc_ref(v_lakeEnv_384_);
v___x_413_ = lean_alloc_ctor(0, 16, 3);
lean_ctor_set(v___x_413_, 0, v_lakeEnv_384_);
lean_ctor_set(v___x_413_, 1, v___x_406_);
lean_ctor_set(v___x_413_, 2, v_dir_397_);
lean_ctor_set(v___x_413_, 3, v_wsIdx_405_);
lean_ctor_set(v___x_413_, 4, v_name_401_);
lean_ctor_set(v___x_413_, 5, v_relPkgDir_399_);
lean_ctor_set(v___x_413_, 6, v_pkgDir_398_);
lean_ctor_set(v___x_413_, 7, v_configFile_403_);
lean_ctor_set(v___x_413_, 8, v___x_407_);
lean_ctor_set(v___x_413_, 9, v___x_406_);
lean_ctor_set(v___x_413_, 10, v___y_409_);
lean_ctor_set(v___x_413_, 11, v___x_410_);
lean_ctor_set(v___x_413_, 12, v_lakeOpts_379_);
lean_ctor_set(v___x_413_, 13, v_leanOpts_380_);
lean_ctor_set(v___x_413_, 14, v_scope_402_);
lean_ctor_set(v___x_413_, 15, v_remoteUrl_400_);
lean_ctor_set_uint8(v___x_413_, sizeof(void*)*16, v_reconfigure_381_);
lean_ctor_set_uint8(v___x_413_, sizeof(void*)*16 + 1, v___x_411_);
lean_ctor_set_uint8(v___x_413_, sizeof(void*)*16 + 2, v___x_412_);
v___x_414_ = l_Lean_Name_toString(v_name_401_, v___x_411_);
v___x_415_ = l_Lake_resolveConfigFile(v___x_414_, v___x_413_, v_a_382_);
if (lean_obj_tag(v___x_415_) == 0)
{
lean_object* v_a_416_; lean_object* v_a_417_; lean_object* v___x_418_; 
v_a_416_ = lean_ctor_get(v___x_415_, 0);
lean_inc_n(v_a_416_, 2);
v_a_417_ = lean_ctor_get(v___x_415_, 1);
lean_inc(v_a_417_);
lean_dec_ref_known(v___x_415_, 2);
v___x_418_ = l_Lake_loadConfigFile___redArg(v_a_416_, v_a_417_);
if (lean_obj_tag(v___x_418_) == 0)
{
lean_object* v_a_419_; lean_object* v_a_420_; lean_object* v___x_422_; uint8_t v_isShared_423_; uint8_t v_isSharedCheck_436_; 
v_a_419_ = lean_ctor_get(v___x_418_, 0);
v_a_420_ = lean_ctor_get(v___x_418_, 1);
v_isSharedCheck_436_ = !lean_is_exclusive(v___x_418_);
if (v_isSharedCheck_436_ == 0)
{
v___x_422_ = v___x_418_;
v_isShared_423_ = v_isSharedCheck_436_;
goto v_resetjp_421_;
}
else
{
lean_inc(v_a_420_);
lean_inc(v_a_419_);
lean_dec(v___x_418_);
v___x_422_ = lean_box(0);
v_isShared_423_ = v_isSharedCheck_436_;
goto v_resetjp_421_;
}
v_resetjp_421_:
{
lean_object* v_facetDecls_424_; lean_object* v___x_425_; lean_object* v_keyName_426_; lean_object* v___x_427_; lean_object* v___x_428_; lean_object* v___x_430_; 
v_facetDecls_424_ = lean_ctor_get(v_a_419_, 2);
lean_inc_ref(v_facetDecls_424_);
v___x_425_ = l_Lake_mkPackage(v_a_416_, v_a_419_, v_wsIdx_405_);
lean_dec(v_a_416_);
v_keyName_426_ = lean_ctor_get(v___x_425_, 2);
lean_inc(v_keyName_426_);
lean_inc_ref(v___x_425_);
v___x_427_ = lean_array_push(v_packages_388_, v___x_425_);
v___x_428_ = l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_addDepPackage_x27_spec__0___redArg(v_keyName_426_, v___x_425_, v_packageMap_389_);
if (v_isShared_393_ == 0)
{
lean_ctor_set(v___x_392_, 5, v___x_428_);
lean_ctor_set(v___x_392_, 4, v___x_427_);
v___x_430_ = v___x_392_;
goto v_reusejp_429_;
}
else
{
lean_object* v_reuseFailAlloc_435_; 
v_reuseFailAlloc_435_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v_reuseFailAlloc_435_, 0, v_lakeEnv_384_);
lean_ctor_set(v_reuseFailAlloc_435_, 1, v_lakeConfig_385_);
lean_ctor_set(v_reuseFailAlloc_435_, 2, v_lakeCache_386_);
lean_ctor_set(v_reuseFailAlloc_435_, 3, v_lakeArgs_x3f_387_);
lean_ctor_set(v_reuseFailAlloc_435_, 4, v___x_427_);
lean_ctor_set(v_reuseFailAlloc_435_, 5, v___x_428_);
lean_ctor_set(v_reuseFailAlloc_435_, 6, v_facetConfigs_390_);
v___x_430_ = v_reuseFailAlloc_435_;
goto v_reusejp_429_;
}
v_reusejp_429_:
{
lean_object* v___x_431_; lean_object* v___x_433_; 
v___x_431_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_addFacetDecls(v_facetDecls_424_, v___x_430_);
lean_dec_ref(v_facetDecls_424_);
if (v_isShared_423_ == 0)
{
lean_ctor_set(v___x_422_, 0, v___x_431_);
v___x_433_ = v___x_422_;
goto v_reusejp_432_;
}
else
{
lean_object* v_reuseFailAlloc_434_; 
v_reuseFailAlloc_434_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_434_, 0, v___x_431_);
lean_ctor_set(v_reuseFailAlloc_434_, 1, v_a_420_);
v___x_433_ = v_reuseFailAlloc_434_;
goto v_reusejp_432_;
}
v_reusejp_432_:
{
return v___x_433_;
}
}
}
}
else
{
lean_object* v_a_437_; lean_object* v_a_438_; lean_object* v___x_440_; uint8_t v_isShared_441_; uint8_t v_isSharedCheck_445_; 
lean_dec(v_a_416_);
lean_del_object(v___x_392_);
lean_dec(v_facetConfigs_390_);
lean_dec(v_packageMap_389_);
lean_dec_ref(v_packages_388_);
lean_dec(v_lakeArgs_x3f_387_);
lean_dec_ref(v_lakeCache_386_);
lean_dec_ref(v_lakeConfig_385_);
lean_dec_ref(v_lakeEnv_384_);
v_a_437_ = lean_ctor_get(v___x_418_, 0);
v_a_438_ = lean_ctor_get(v___x_418_, 1);
v_isSharedCheck_445_ = !lean_is_exclusive(v___x_418_);
if (v_isSharedCheck_445_ == 0)
{
v___x_440_ = v___x_418_;
v_isShared_441_ = v_isSharedCheck_445_;
goto v_resetjp_439_;
}
else
{
lean_inc(v_a_438_);
lean_inc(v_a_437_);
lean_dec(v___x_418_);
v___x_440_ = lean_box(0);
v_isShared_441_ = v_isSharedCheck_445_;
goto v_resetjp_439_;
}
v_resetjp_439_:
{
lean_object* v___x_443_; 
if (v_isShared_441_ == 0)
{
v___x_443_ = v___x_440_;
goto v_reusejp_442_;
}
else
{
lean_object* v_reuseFailAlloc_444_; 
v_reuseFailAlloc_444_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_444_, 0, v_a_437_);
lean_ctor_set(v_reuseFailAlloc_444_, 1, v_a_438_);
v___x_443_ = v_reuseFailAlloc_444_;
goto v_reusejp_442_;
}
v_reusejp_442_:
{
return v___x_443_;
}
}
}
}
else
{
lean_object* v_a_446_; lean_object* v_a_447_; lean_object* v___x_449_; uint8_t v_isShared_450_; uint8_t v_isSharedCheck_454_; 
lean_del_object(v___x_392_);
lean_dec(v_facetConfigs_390_);
lean_dec(v_packageMap_389_);
lean_dec_ref(v_packages_388_);
lean_dec(v_lakeArgs_x3f_387_);
lean_dec_ref(v_lakeCache_386_);
lean_dec_ref(v_lakeConfig_385_);
lean_dec_ref(v_lakeEnv_384_);
v_a_446_ = lean_ctor_get(v___x_415_, 0);
v_a_447_ = lean_ctor_get(v___x_415_, 1);
v_isSharedCheck_454_ = !lean_is_exclusive(v___x_415_);
if (v_isSharedCheck_454_ == 0)
{
v___x_449_ = v___x_415_;
v_isShared_450_ = v_isSharedCheck_454_;
goto v_resetjp_448_;
}
else
{
lean_inc(v_a_447_);
lean_inc(v_a_446_);
lean_dec(v___x_415_);
v___x_449_ = lean_box(0);
v_isShared_450_ = v_isSharedCheck_454_;
goto v_resetjp_448_;
}
v_resetjp_448_:
{
lean_object* v___x_452_; 
if (v_isShared_450_ == 0)
{
v___x_452_ = v___x_449_;
goto v_reusejp_451_;
}
else
{
lean_object* v_reuseFailAlloc_453_; 
v_reuseFailAlloc_453_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_453_, 0, v_a_446_);
lean_ctor_set(v_reuseFailAlloc_453_, 1, v_a_447_);
v___x_452_ = v_reuseFailAlloc_453_;
goto v_reusejp_451_;
}
v_reusejp_451_:
{
return v___x_452_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_addDepPackage_x27___boxed(lean_object* v_ws_458_, lean_object* v_dep_459_, lean_object* v_lakeOpts_460_, lean_object* v_leanOpts_461_, lean_object* v_reconfigure_462_, lean_object* v_a_463_, lean_object* v_a_464_){
_start:
{
uint8_t v_reconfigure_boxed_465_; lean_object* v_res_466_; 
v_reconfigure_boxed_465_ = lean_unbox(v_reconfigure_462_);
v_res_466_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_addDepPackage_x27(v_ws_458_, v_dep_459_, v_lakeOpts_460_, v_leanOpts_461_, v_reconfigure_boxed_465_, v_a_463_);
return v_res_466_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_addDepPackage_x27_spec__0(lean_object* v_00_u03b2_467_, lean_object* v_k_468_, lean_object* v_v_469_, lean_object* v_t_470_, lean_object* v_hl_471_){
_start:
{
lean_object* v___x_472_; 
v___x_472_ = l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_addDepPackage_x27_spec__0___redArg(v_k_468_, v_v_469_, v_t_470_);
return v___x_472_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_setDepIdxs___redArg(lean_object* v_self_473_, lean_object* v_pkg_474_, lean_object* v_depIdxs_475_){
_start:
{
lean_object* v_wsIdx_476_; lean_object* v_baseName_477_; lean_object* v_keyName_478_; lean_object* v_origName_479_; lean_object* v_dir_480_; lean_object* v_relDir_481_; lean_object* v_config_482_; lean_object* v_configFile_483_; lean_object* v_relConfigFile_484_; lean_object* v_relManifestFile_485_; lean_object* v_scope_486_; lean_object* v_remoteUrl_487_; lean_object* v_depConfigs_488_; lean_object* v_depPkgs_489_; lean_object* v_targetDecls_490_; lean_object* v_targetDeclMap_491_; lean_object* v_defaultTargets_492_; lean_object* v_scripts_493_; lean_object* v_defaultScripts_494_; lean_object* v_postUpdateHooks_495_; lean_object* v_buildArchive_496_; lean_object* v_testDriver_497_; lean_object* v_lintDriver_498_; lean_object* v___x_500_; uint8_t v_isShared_501_; uint8_t v_isSharedCheck_521_; 
v_wsIdx_476_ = lean_ctor_get(v_pkg_474_, 0);
v_baseName_477_ = lean_ctor_get(v_pkg_474_, 1);
v_keyName_478_ = lean_ctor_get(v_pkg_474_, 2);
v_origName_479_ = lean_ctor_get(v_pkg_474_, 3);
v_dir_480_ = lean_ctor_get(v_pkg_474_, 4);
v_relDir_481_ = lean_ctor_get(v_pkg_474_, 5);
v_config_482_ = lean_ctor_get(v_pkg_474_, 6);
v_configFile_483_ = lean_ctor_get(v_pkg_474_, 7);
v_relConfigFile_484_ = lean_ctor_get(v_pkg_474_, 8);
v_relManifestFile_485_ = lean_ctor_get(v_pkg_474_, 9);
v_scope_486_ = lean_ctor_get(v_pkg_474_, 10);
v_remoteUrl_487_ = lean_ctor_get(v_pkg_474_, 11);
v_depConfigs_488_ = lean_ctor_get(v_pkg_474_, 12);
v_depPkgs_489_ = lean_ctor_get(v_pkg_474_, 14);
v_targetDecls_490_ = lean_ctor_get(v_pkg_474_, 15);
v_targetDeclMap_491_ = lean_ctor_get(v_pkg_474_, 16);
v_defaultTargets_492_ = lean_ctor_get(v_pkg_474_, 17);
v_scripts_493_ = lean_ctor_get(v_pkg_474_, 18);
v_defaultScripts_494_ = lean_ctor_get(v_pkg_474_, 19);
v_postUpdateHooks_495_ = lean_ctor_get(v_pkg_474_, 20);
v_buildArchive_496_ = lean_ctor_get(v_pkg_474_, 21);
v_testDriver_497_ = lean_ctor_get(v_pkg_474_, 22);
v_lintDriver_498_ = lean_ctor_get(v_pkg_474_, 23);
v_isSharedCheck_521_ = !lean_is_exclusive(v_pkg_474_);
if (v_isSharedCheck_521_ == 0)
{
lean_object* v_unused_522_; 
v_unused_522_ = lean_ctor_get(v_pkg_474_, 13);
lean_dec(v_unused_522_);
v___x_500_ = v_pkg_474_;
v_isShared_501_ = v_isSharedCheck_521_;
goto v_resetjp_499_;
}
else
{
lean_inc(v_lintDriver_498_);
lean_inc(v_testDriver_497_);
lean_inc(v_buildArchive_496_);
lean_inc(v_postUpdateHooks_495_);
lean_inc(v_defaultScripts_494_);
lean_inc(v_scripts_493_);
lean_inc(v_defaultTargets_492_);
lean_inc(v_targetDeclMap_491_);
lean_inc(v_targetDecls_490_);
lean_inc(v_depPkgs_489_);
lean_inc(v_depConfigs_488_);
lean_inc(v_remoteUrl_487_);
lean_inc(v_scope_486_);
lean_inc(v_relManifestFile_485_);
lean_inc(v_relConfigFile_484_);
lean_inc(v_configFile_483_);
lean_inc(v_config_482_);
lean_inc(v_relDir_481_);
lean_inc(v_dir_480_);
lean_inc(v_origName_479_);
lean_inc(v_keyName_478_);
lean_inc(v_baseName_477_);
lean_inc(v_wsIdx_476_);
lean_dec(v_pkg_474_);
v___x_500_ = lean_box(0);
v_isShared_501_ = v_isSharedCheck_521_;
goto v_resetjp_499_;
}
v_resetjp_499_:
{
lean_object* v_lakeEnv_502_; lean_object* v_lakeConfig_503_; lean_object* v_lakeCache_504_; lean_object* v_lakeArgs_x3f_505_; lean_object* v_packages_506_; lean_object* v_packageMap_507_; lean_object* v_facetConfigs_508_; lean_object* v___x_510_; uint8_t v_isShared_511_; uint8_t v_isSharedCheck_520_; 
v_lakeEnv_502_ = lean_ctor_get(v_self_473_, 0);
v_lakeConfig_503_ = lean_ctor_get(v_self_473_, 1);
v_lakeCache_504_ = lean_ctor_get(v_self_473_, 2);
v_lakeArgs_x3f_505_ = lean_ctor_get(v_self_473_, 3);
v_packages_506_ = lean_ctor_get(v_self_473_, 4);
v_packageMap_507_ = lean_ctor_get(v_self_473_, 5);
v_facetConfigs_508_ = lean_ctor_get(v_self_473_, 6);
v_isSharedCheck_520_ = !lean_is_exclusive(v_self_473_);
if (v_isSharedCheck_520_ == 0)
{
v___x_510_ = v_self_473_;
v_isShared_511_ = v_isSharedCheck_520_;
goto v_resetjp_509_;
}
else
{
lean_inc(v_facetConfigs_508_);
lean_inc(v_packageMap_507_);
lean_inc(v_packages_506_);
lean_inc(v_lakeArgs_x3f_505_);
lean_inc(v_lakeCache_504_);
lean_inc(v_lakeConfig_503_);
lean_inc(v_lakeEnv_502_);
lean_dec(v_self_473_);
v___x_510_ = lean_box(0);
v_isShared_511_ = v_isSharedCheck_520_;
goto v_resetjp_509_;
}
v_resetjp_509_:
{
lean_object* v_pkg_513_; 
lean_inc(v_keyName_478_);
lean_inc(v_wsIdx_476_);
if (v_isShared_501_ == 0)
{
lean_ctor_set(v___x_500_, 13, v_depIdxs_475_);
v_pkg_513_ = v___x_500_;
goto v_reusejp_512_;
}
else
{
lean_object* v_reuseFailAlloc_519_; 
v_reuseFailAlloc_519_ = lean_alloc_ctor(0, 24, 0);
lean_ctor_set(v_reuseFailAlloc_519_, 0, v_wsIdx_476_);
lean_ctor_set(v_reuseFailAlloc_519_, 1, v_baseName_477_);
lean_ctor_set(v_reuseFailAlloc_519_, 2, v_keyName_478_);
lean_ctor_set(v_reuseFailAlloc_519_, 3, v_origName_479_);
lean_ctor_set(v_reuseFailAlloc_519_, 4, v_dir_480_);
lean_ctor_set(v_reuseFailAlloc_519_, 5, v_relDir_481_);
lean_ctor_set(v_reuseFailAlloc_519_, 6, v_config_482_);
lean_ctor_set(v_reuseFailAlloc_519_, 7, v_configFile_483_);
lean_ctor_set(v_reuseFailAlloc_519_, 8, v_relConfigFile_484_);
lean_ctor_set(v_reuseFailAlloc_519_, 9, v_relManifestFile_485_);
lean_ctor_set(v_reuseFailAlloc_519_, 10, v_scope_486_);
lean_ctor_set(v_reuseFailAlloc_519_, 11, v_remoteUrl_487_);
lean_ctor_set(v_reuseFailAlloc_519_, 12, v_depConfigs_488_);
lean_ctor_set(v_reuseFailAlloc_519_, 13, v_depIdxs_475_);
lean_ctor_set(v_reuseFailAlloc_519_, 14, v_depPkgs_489_);
lean_ctor_set(v_reuseFailAlloc_519_, 15, v_targetDecls_490_);
lean_ctor_set(v_reuseFailAlloc_519_, 16, v_targetDeclMap_491_);
lean_ctor_set(v_reuseFailAlloc_519_, 17, v_defaultTargets_492_);
lean_ctor_set(v_reuseFailAlloc_519_, 18, v_scripts_493_);
lean_ctor_set(v_reuseFailAlloc_519_, 19, v_defaultScripts_494_);
lean_ctor_set(v_reuseFailAlloc_519_, 20, v_postUpdateHooks_495_);
lean_ctor_set(v_reuseFailAlloc_519_, 21, v_buildArchive_496_);
lean_ctor_set(v_reuseFailAlloc_519_, 22, v_testDriver_497_);
lean_ctor_set(v_reuseFailAlloc_519_, 23, v_lintDriver_498_);
v_pkg_513_ = v_reuseFailAlloc_519_;
goto v_reusejp_512_;
}
v_reusejp_512_:
{
lean_object* v___x_514_; lean_object* v___x_515_; lean_object* v___x_517_; 
lean_inc_ref(v_pkg_513_);
v___x_514_ = lean_array_fset(v_packages_506_, v_wsIdx_476_, v_pkg_513_);
lean_dec(v_wsIdx_476_);
v___x_515_ = l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_addDepPackage_x27_spec__0___redArg(v_keyName_478_, v_pkg_513_, v_packageMap_507_);
if (v_isShared_511_ == 0)
{
lean_ctor_set(v___x_510_, 5, v___x_515_);
lean_ctor_set(v___x_510_, 4, v___x_514_);
v___x_517_ = v___x_510_;
goto v_reusejp_516_;
}
else
{
lean_object* v_reuseFailAlloc_518_; 
v_reuseFailAlloc_518_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v_reuseFailAlloc_518_, 0, v_lakeEnv_502_);
lean_ctor_set(v_reuseFailAlloc_518_, 1, v_lakeConfig_503_);
lean_ctor_set(v_reuseFailAlloc_518_, 2, v_lakeCache_504_);
lean_ctor_set(v_reuseFailAlloc_518_, 3, v_lakeArgs_x3f_505_);
lean_ctor_set(v_reuseFailAlloc_518_, 4, v___x_514_);
lean_ctor_set(v_reuseFailAlloc_518_, 5, v___x_515_);
lean_ctor_set(v_reuseFailAlloc_518_, 6, v_facetConfigs_508_);
v___x_517_ = v_reuseFailAlloc_518_;
goto v_reusejp_516_;
}
v_reusejp_516_:
{
return v___x_517_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_setDepIdxs(lean_object* v_self_523_, lean_object* v_pkg_524_, lean_object* v_depIdxs_525_, lean_object* v_h__wsIdx_526_, lean_object* v_h__depIdxs_527_){
_start:
{
lean_object* v___x_528_; 
v___x_528_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_setDepIdxs___redArg(v_self_523_, v_pkg_524_, v_depIdxs_525_);
return v___x_528_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateDepPkgs_spec__0(lean_object* v_val_529_, size_t v_sz_530_, size_t v_i_531_, lean_object* v_bs_532_){
_start:
{
uint8_t v___x_533_; 
v___x_533_ = lean_usize_dec_lt(v_i_531_, v_sz_530_);
if (v___x_533_ == 0)
{
lean_object* v___x_534_; 
v___x_534_ = l_unsafeCast___redArg(v_bs_532_);
lean_dec_ref(v_bs_532_);
return v___x_534_;
}
else
{
lean_object* v_v_535_; lean_object* v___x_536_; lean_object* v_bs_x27_537_; lean_object* v_val_538_; lean_object* v___x_539_; size_t v___x_540_; size_t v___x_541_; lean_object* v___x_542_; lean_object* v___x_543_; 
v_v_535_ = lean_array_uget(v_bs_532_, v_i_531_);
v___x_536_ = lean_unsigned_to_nat(0u);
v_bs_x27_537_ = lean_array_uset(v_bs_532_, v_i_531_, v___x_536_);
v_val_538_ = l_unsafeCast___redArg(v_v_535_);
lean_dec(v_v_535_);
v___x_539_ = lean_array_fget_borrowed(v_val_529_, v_val_538_);
lean_dec(v_val_538_);
v___x_540_ = ((size_t)1ULL);
v___x_541_ = lean_usize_add(v_i_531_, v___x_540_);
v___x_542_ = l_unsafeCast___redArg(v___x_539_);
v___x_543_ = lean_array_uset(v_bs_x27_537_, v_i_531_, v___x_542_);
v_i_531_ = v___x_541_;
v_bs_532_ = v___x_543_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateDepPkgs_spec__0___boxed(lean_object* v_val_545_, lean_object* v_sz_546_, lean_object* v_i_547_, lean_object* v_bs_548_){
_start:
{
size_t v_sz_boxed_549_; size_t v_i_boxed_550_; lean_object* v_res_551_; 
v_sz_boxed_549_ = lean_unbox_usize(v_sz_546_);
lean_dec(v_sz_546_);
v_i_boxed_550_ = lean_unbox_usize(v_i_547_);
lean_dec(v_i_547_);
v_res_551_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateDepPkgs_spec__0(v_val_545_, v_sz_boxed_549_, v_i_boxed_550_, v_bs_548_);
lean_dec_ref(v_val_545_);
return v_res_551_;
}
}
LEAN_EXPORT lean_object* l_Nat_foldRev___at___00Nat_foldRev___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateDepPkgs_spec__1_spec__1___redArg(lean_object* v_x_552_, lean_object* v_x_553_){
_start:
{
lean_object* v_zero_554_; uint8_t v_isZero_555_; 
v_zero_554_ = lean_unsigned_to_nat(0u);
v_isZero_555_ = lean_nat_dec_eq(v_x_552_, v_zero_554_);
if (v_isZero_555_ == 1)
{
lean_dec(v_x_552_);
return v_x_553_;
}
else
{
lean_object* v_one_556_; lean_object* v_n_557_; lean_object* v_pkg_558_; lean_object* v_wsIdx_559_; lean_object* v_baseName_560_; lean_object* v_keyName_561_; lean_object* v_origName_562_; lean_object* v_dir_563_; lean_object* v_relDir_564_; lean_object* v_config_565_; lean_object* v_configFile_566_; lean_object* v_relConfigFile_567_; lean_object* v_relManifestFile_568_; lean_object* v_scope_569_; lean_object* v_remoteUrl_570_; lean_object* v_depConfigs_571_; lean_object* v_depIdxs_572_; lean_object* v_targetDecls_573_; lean_object* v_targetDeclMap_574_; lean_object* v_defaultTargets_575_; lean_object* v_scripts_576_; lean_object* v_defaultScripts_577_; lean_object* v_postUpdateHooks_578_; lean_object* v_buildArchive_579_; lean_object* v_testDriver_580_; lean_object* v_lintDriver_581_; lean_object* v___x_583_; uint8_t v_isShared_584_; uint8_t v_isSharedCheck_596_; 
v_one_556_ = lean_unsigned_to_nat(1u);
v_n_557_ = lean_nat_sub(v_x_552_, v_one_556_);
lean_dec(v_x_552_);
v_pkg_558_ = lean_array_fget(v_x_553_, v_n_557_);
v_wsIdx_559_ = lean_ctor_get(v_pkg_558_, 0);
v_baseName_560_ = lean_ctor_get(v_pkg_558_, 1);
v_keyName_561_ = lean_ctor_get(v_pkg_558_, 2);
v_origName_562_ = lean_ctor_get(v_pkg_558_, 3);
v_dir_563_ = lean_ctor_get(v_pkg_558_, 4);
v_relDir_564_ = lean_ctor_get(v_pkg_558_, 5);
v_config_565_ = lean_ctor_get(v_pkg_558_, 6);
v_configFile_566_ = lean_ctor_get(v_pkg_558_, 7);
v_relConfigFile_567_ = lean_ctor_get(v_pkg_558_, 8);
v_relManifestFile_568_ = lean_ctor_get(v_pkg_558_, 9);
v_scope_569_ = lean_ctor_get(v_pkg_558_, 10);
v_remoteUrl_570_ = lean_ctor_get(v_pkg_558_, 11);
v_depConfigs_571_ = lean_ctor_get(v_pkg_558_, 12);
v_depIdxs_572_ = lean_ctor_get(v_pkg_558_, 13);
v_targetDecls_573_ = lean_ctor_get(v_pkg_558_, 15);
v_targetDeclMap_574_ = lean_ctor_get(v_pkg_558_, 16);
v_defaultTargets_575_ = lean_ctor_get(v_pkg_558_, 17);
v_scripts_576_ = lean_ctor_get(v_pkg_558_, 18);
v_defaultScripts_577_ = lean_ctor_get(v_pkg_558_, 19);
v_postUpdateHooks_578_ = lean_ctor_get(v_pkg_558_, 20);
v_buildArchive_579_ = lean_ctor_get(v_pkg_558_, 21);
v_testDriver_580_ = lean_ctor_get(v_pkg_558_, 22);
v_lintDriver_581_ = lean_ctor_get(v_pkg_558_, 23);
v_isSharedCheck_596_ = !lean_is_exclusive(v_pkg_558_);
if (v_isSharedCheck_596_ == 0)
{
lean_object* v_unused_597_; 
v_unused_597_ = lean_ctor_get(v_pkg_558_, 14);
lean_dec(v_unused_597_);
v___x_583_ = v_pkg_558_;
v_isShared_584_ = v_isSharedCheck_596_;
goto v_resetjp_582_;
}
else
{
lean_inc(v_lintDriver_581_);
lean_inc(v_testDriver_580_);
lean_inc(v_buildArchive_579_);
lean_inc(v_postUpdateHooks_578_);
lean_inc(v_defaultScripts_577_);
lean_inc(v_scripts_576_);
lean_inc(v_defaultTargets_575_);
lean_inc(v_targetDeclMap_574_);
lean_inc(v_targetDecls_573_);
lean_inc(v_depIdxs_572_);
lean_inc(v_depConfigs_571_);
lean_inc(v_remoteUrl_570_);
lean_inc(v_scope_569_);
lean_inc(v_relManifestFile_568_);
lean_inc(v_relConfigFile_567_);
lean_inc(v_configFile_566_);
lean_inc(v_config_565_);
lean_inc(v_relDir_564_);
lean_inc(v_dir_563_);
lean_inc(v_origName_562_);
lean_inc(v_keyName_561_);
lean_inc(v_baseName_560_);
lean_inc(v_wsIdx_559_);
lean_dec(v_pkg_558_);
v___x_583_ = lean_box(0);
v_isShared_584_ = v_isSharedCheck_596_;
goto v_resetjp_582_;
}
v_resetjp_582_:
{
lean_object* v___x_585_; size_t v_sz_586_; size_t v___x_587_; lean_object* v___x_588_; lean_object* v___x_589_; lean_object* v_depPkgs_590_; lean_object* v___x_592_; 
v___x_585_ = l_unsafeCast___redArg(v_depIdxs_572_);
v_sz_586_ = lean_array_size(v___x_585_);
v___x_587_ = ((size_t)0ULL);
v___x_588_ = l_unsafeCast___redArg(v___x_585_);
lean_dec(v___x_585_);
v___x_589_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateDepPkgs_spec__0(v_x_553_, v_sz_586_, v___x_587_, v___x_588_);
v_depPkgs_590_ = l_unsafeCast___redArg(v___x_589_);
lean_dec_ref(v___x_589_);
if (v_isShared_584_ == 0)
{
lean_ctor_set(v___x_583_, 14, v_depPkgs_590_);
v___x_592_ = v___x_583_;
goto v_reusejp_591_;
}
else
{
lean_object* v_reuseFailAlloc_595_; 
v_reuseFailAlloc_595_ = lean_alloc_ctor(0, 24, 0);
lean_ctor_set(v_reuseFailAlloc_595_, 0, v_wsIdx_559_);
lean_ctor_set(v_reuseFailAlloc_595_, 1, v_baseName_560_);
lean_ctor_set(v_reuseFailAlloc_595_, 2, v_keyName_561_);
lean_ctor_set(v_reuseFailAlloc_595_, 3, v_origName_562_);
lean_ctor_set(v_reuseFailAlloc_595_, 4, v_dir_563_);
lean_ctor_set(v_reuseFailAlloc_595_, 5, v_relDir_564_);
lean_ctor_set(v_reuseFailAlloc_595_, 6, v_config_565_);
lean_ctor_set(v_reuseFailAlloc_595_, 7, v_configFile_566_);
lean_ctor_set(v_reuseFailAlloc_595_, 8, v_relConfigFile_567_);
lean_ctor_set(v_reuseFailAlloc_595_, 9, v_relManifestFile_568_);
lean_ctor_set(v_reuseFailAlloc_595_, 10, v_scope_569_);
lean_ctor_set(v_reuseFailAlloc_595_, 11, v_remoteUrl_570_);
lean_ctor_set(v_reuseFailAlloc_595_, 12, v_depConfigs_571_);
lean_ctor_set(v_reuseFailAlloc_595_, 13, v_depIdxs_572_);
lean_ctor_set(v_reuseFailAlloc_595_, 14, v_depPkgs_590_);
lean_ctor_set(v_reuseFailAlloc_595_, 15, v_targetDecls_573_);
lean_ctor_set(v_reuseFailAlloc_595_, 16, v_targetDeclMap_574_);
lean_ctor_set(v_reuseFailAlloc_595_, 17, v_defaultTargets_575_);
lean_ctor_set(v_reuseFailAlloc_595_, 18, v_scripts_576_);
lean_ctor_set(v_reuseFailAlloc_595_, 19, v_defaultScripts_577_);
lean_ctor_set(v_reuseFailAlloc_595_, 20, v_postUpdateHooks_578_);
lean_ctor_set(v_reuseFailAlloc_595_, 21, v_buildArchive_579_);
lean_ctor_set(v_reuseFailAlloc_595_, 22, v_testDriver_580_);
lean_ctor_set(v_reuseFailAlloc_595_, 23, v_lintDriver_581_);
v___x_592_ = v_reuseFailAlloc_595_;
goto v_reusejp_591_;
}
v_reusejp_591_:
{
lean_object* v_pkgs_x27_593_; 
v_pkgs_x27_593_ = lean_array_fset(v_x_553_, v_n_557_, v___x_592_);
v_x_552_ = v_n_557_;
v_x_553_ = v_pkgs_x27_593_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Nat_foldRev___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateDepPkgs_spec__1(lean_object* v___x_598_, lean_object* v_x_599_, lean_object* v_x_600_){
_start:
{
lean_object* v_zero_601_; uint8_t v_isZero_602_; 
v_zero_601_ = lean_unsigned_to_nat(0u);
v_isZero_602_ = lean_nat_dec_eq(v_x_599_, v_zero_601_);
if (v_isZero_602_ == 1)
{
return v_x_600_;
}
else
{
lean_object* v_one_603_; lean_object* v_n_604_; lean_object* v_pkg_605_; lean_object* v_wsIdx_606_; lean_object* v_baseName_607_; lean_object* v_keyName_608_; lean_object* v_origName_609_; lean_object* v_dir_610_; lean_object* v_relDir_611_; lean_object* v_config_612_; lean_object* v_configFile_613_; lean_object* v_relConfigFile_614_; lean_object* v_relManifestFile_615_; lean_object* v_scope_616_; lean_object* v_remoteUrl_617_; lean_object* v_depConfigs_618_; lean_object* v_depIdxs_619_; lean_object* v_targetDecls_620_; lean_object* v_targetDeclMap_621_; lean_object* v_defaultTargets_622_; lean_object* v_scripts_623_; lean_object* v_defaultScripts_624_; lean_object* v_postUpdateHooks_625_; lean_object* v_buildArchive_626_; lean_object* v_testDriver_627_; lean_object* v_lintDriver_628_; lean_object* v___x_630_; uint8_t v_isShared_631_; uint8_t v_isSharedCheck_643_; 
v_one_603_ = lean_unsigned_to_nat(1u);
v_n_604_ = lean_nat_sub(v_x_599_, v_one_603_);
v_pkg_605_ = lean_array_fget(v_x_600_, v_n_604_);
v_wsIdx_606_ = lean_ctor_get(v_pkg_605_, 0);
v_baseName_607_ = lean_ctor_get(v_pkg_605_, 1);
v_keyName_608_ = lean_ctor_get(v_pkg_605_, 2);
v_origName_609_ = lean_ctor_get(v_pkg_605_, 3);
v_dir_610_ = lean_ctor_get(v_pkg_605_, 4);
v_relDir_611_ = lean_ctor_get(v_pkg_605_, 5);
v_config_612_ = lean_ctor_get(v_pkg_605_, 6);
v_configFile_613_ = lean_ctor_get(v_pkg_605_, 7);
v_relConfigFile_614_ = lean_ctor_get(v_pkg_605_, 8);
v_relManifestFile_615_ = lean_ctor_get(v_pkg_605_, 9);
v_scope_616_ = lean_ctor_get(v_pkg_605_, 10);
v_remoteUrl_617_ = lean_ctor_get(v_pkg_605_, 11);
v_depConfigs_618_ = lean_ctor_get(v_pkg_605_, 12);
v_depIdxs_619_ = lean_ctor_get(v_pkg_605_, 13);
v_targetDecls_620_ = lean_ctor_get(v_pkg_605_, 15);
v_targetDeclMap_621_ = lean_ctor_get(v_pkg_605_, 16);
v_defaultTargets_622_ = lean_ctor_get(v_pkg_605_, 17);
v_scripts_623_ = lean_ctor_get(v_pkg_605_, 18);
v_defaultScripts_624_ = lean_ctor_get(v_pkg_605_, 19);
v_postUpdateHooks_625_ = lean_ctor_get(v_pkg_605_, 20);
v_buildArchive_626_ = lean_ctor_get(v_pkg_605_, 21);
v_testDriver_627_ = lean_ctor_get(v_pkg_605_, 22);
v_lintDriver_628_ = lean_ctor_get(v_pkg_605_, 23);
v_isSharedCheck_643_ = !lean_is_exclusive(v_pkg_605_);
if (v_isSharedCheck_643_ == 0)
{
lean_object* v_unused_644_; 
v_unused_644_ = lean_ctor_get(v_pkg_605_, 14);
lean_dec(v_unused_644_);
v___x_630_ = v_pkg_605_;
v_isShared_631_ = v_isSharedCheck_643_;
goto v_resetjp_629_;
}
else
{
lean_inc(v_lintDriver_628_);
lean_inc(v_testDriver_627_);
lean_inc(v_buildArchive_626_);
lean_inc(v_postUpdateHooks_625_);
lean_inc(v_defaultScripts_624_);
lean_inc(v_scripts_623_);
lean_inc(v_defaultTargets_622_);
lean_inc(v_targetDeclMap_621_);
lean_inc(v_targetDecls_620_);
lean_inc(v_depIdxs_619_);
lean_inc(v_depConfigs_618_);
lean_inc(v_remoteUrl_617_);
lean_inc(v_scope_616_);
lean_inc(v_relManifestFile_615_);
lean_inc(v_relConfigFile_614_);
lean_inc(v_configFile_613_);
lean_inc(v_config_612_);
lean_inc(v_relDir_611_);
lean_inc(v_dir_610_);
lean_inc(v_origName_609_);
lean_inc(v_keyName_608_);
lean_inc(v_baseName_607_);
lean_inc(v_wsIdx_606_);
lean_dec(v_pkg_605_);
v___x_630_ = lean_box(0);
v_isShared_631_ = v_isSharedCheck_643_;
goto v_resetjp_629_;
}
v_resetjp_629_:
{
lean_object* v___x_632_; size_t v_sz_633_; size_t v___x_634_; lean_object* v___x_635_; lean_object* v___x_636_; lean_object* v_depPkgs_637_; lean_object* v___x_639_; 
v___x_632_ = l_unsafeCast___redArg(v_depIdxs_619_);
v_sz_633_ = lean_array_size(v___x_632_);
v___x_634_ = ((size_t)0ULL);
v___x_635_ = l_unsafeCast___redArg(v___x_632_);
lean_dec(v___x_632_);
v___x_636_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateDepPkgs_spec__0(v_x_600_, v_sz_633_, v___x_634_, v___x_635_);
v_depPkgs_637_ = l_unsafeCast___redArg(v___x_636_);
lean_dec_ref(v___x_636_);
if (v_isShared_631_ == 0)
{
lean_ctor_set(v___x_630_, 14, v_depPkgs_637_);
v___x_639_ = v___x_630_;
goto v_reusejp_638_;
}
else
{
lean_object* v_reuseFailAlloc_642_; 
v_reuseFailAlloc_642_ = lean_alloc_ctor(0, 24, 0);
lean_ctor_set(v_reuseFailAlloc_642_, 0, v_wsIdx_606_);
lean_ctor_set(v_reuseFailAlloc_642_, 1, v_baseName_607_);
lean_ctor_set(v_reuseFailAlloc_642_, 2, v_keyName_608_);
lean_ctor_set(v_reuseFailAlloc_642_, 3, v_origName_609_);
lean_ctor_set(v_reuseFailAlloc_642_, 4, v_dir_610_);
lean_ctor_set(v_reuseFailAlloc_642_, 5, v_relDir_611_);
lean_ctor_set(v_reuseFailAlloc_642_, 6, v_config_612_);
lean_ctor_set(v_reuseFailAlloc_642_, 7, v_configFile_613_);
lean_ctor_set(v_reuseFailAlloc_642_, 8, v_relConfigFile_614_);
lean_ctor_set(v_reuseFailAlloc_642_, 9, v_relManifestFile_615_);
lean_ctor_set(v_reuseFailAlloc_642_, 10, v_scope_616_);
lean_ctor_set(v_reuseFailAlloc_642_, 11, v_remoteUrl_617_);
lean_ctor_set(v_reuseFailAlloc_642_, 12, v_depConfigs_618_);
lean_ctor_set(v_reuseFailAlloc_642_, 13, v_depIdxs_619_);
lean_ctor_set(v_reuseFailAlloc_642_, 14, v_depPkgs_637_);
lean_ctor_set(v_reuseFailAlloc_642_, 15, v_targetDecls_620_);
lean_ctor_set(v_reuseFailAlloc_642_, 16, v_targetDeclMap_621_);
lean_ctor_set(v_reuseFailAlloc_642_, 17, v_defaultTargets_622_);
lean_ctor_set(v_reuseFailAlloc_642_, 18, v_scripts_623_);
lean_ctor_set(v_reuseFailAlloc_642_, 19, v_defaultScripts_624_);
lean_ctor_set(v_reuseFailAlloc_642_, 20, v_postUpdateHooks_625_);
lean_ctor_set(v_reuseFailAlloc_642_, 21, v_buildArchive_626_);
lean_ctor_set(v_reuseFailAlloc_642_, 22, v_testDriver_627_);
lean_ctor_set(v_reuseFailAlloc_642_, 23, v_lintDriver_628_);
v___x_639_ = v_reuseFailAlloc_642_;
goto v_reusejp_638_;
}
v_reusejp_638_:
{
lean_object* v_pkgs_x27_640_; lean_object* v___x_641_; 
v_pkgs_x27_640_ = lean_array_fset(v_x_600_, v_n_604_, v___x_639_);
v___x_641_ = l_Nat_foldRev___at___00Nat_foldRev___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateDepPkgs_spec__1_spec__1___redArg(v_n_604_, v_pkgs_x27_640_);
return v___x_641_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Nat_foldRev___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateDepPkgs_spec__1___boxed(lean_object* v___x_645_, lean_object* v_x_646_, lean_object* v_x_647_){
_start:
{
lean_object* v_res_648_; 
v_res_648_ = l_Nat_foldRev___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateDepPkgs_spec__1(v___x_645_, v_x_646_, v_x_647_);
lean_dec(v_x_646_);
lean_dec(v___x_645_);
return v_res_648_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateDepPkgs_spec__2(lean_object* v_as_649_, size_t v_i_650_, size_t v_stop_651_, lean_object* v_b_652_){
_start:
{
uint8_t v___x_653_; 
v___x_653_ = lean_usize_dec_eq(v_i_650_, v_stop_651_);
if (v___x_653_ == 0)
{
lean_object* v___x_654_; lean_object* v_keyName_655_; lean_object* v___x_656_; size_t v___x_657_; size_t v___x_658_; 
v___x_654_ = lean_array_uget_borrowed(v_as_649_, v_i_650_);
v_keyName_655_ = lean_ctor_get(v___x_654_, 2);
lean_inc(v___x_654_);
lean_inc(v_keyName_655_);
v___x_656_ = l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_addDepPackage_x27_spec__0___redArg(v_keyName_655_, v___x_654_, v_b_652_);
v___x_657_ = ((size_t)1ULL);
v___x_658_ = lean_usize_add(v_i_650_, v___x_657_);
v_i_650_ = v___x_658_;
v_b_652_ = v___x_656_;
goto _start;
}
else
{
return v_b_652_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateDepPkgs_spec__2___boxed(lean_object* v_as_660_, lean_object* v_i_661_, lean_object* v_stop_662_, lean_object* v_b_663_){
_start:
{
size_t v_i_boxed_664_; size_t v_stop_boxed_665_; lean_object* v_res_666_; 
v_i_boxed_664_ = lean_unbox_usize(v_i_661_);
lean_dec(v_i_661_);
v_stop_boxed_665_ = lean_unbox_usize(v_stop_662_);
lean_dec(v_stop_662_);
v_res_666_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateDepPkgs_spec__2(v_as_660_, v_i_boxed_664_, v_stop_boxed_665_, v_b_663_);
lean_dec_ref(v_as_660_);
return v_res_666_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_updateDepPkgs(lean_object* v_self_667_){
_start:
{
lean_object* v_lakeEnv_668_; lean_object* v_lakeConfig_669_; lean_object* v_lakeCache_670_; lean_object* v_lakeArgs_x3f_671_; lean_object* v_packages_672_; lean_object* v_facetConfigs_673_; lean_object* v___x_675_; uint8_t v_isShared_676_; uint8_t v_isSharedCheck_692_; 
v_lakeEnv_668_ = lean_ctor_get(v_self_667_, 0);
v_lakeConfig_669_ = lean_ctor_get(v_self_667_, 1);
v_lakeCache_670_ = lean_ctor_get(v_self_667_, 2);
v_lakeArgs_x3f_671_ = lean_ctor_get(v_self_667_, 3);
v_packages_672_ = lean_ctor_get(v_self_667_, 4);
v_facetConfigs_673_ = lean_ctor_get(v_self_667_, 6);
v_isSharedCheck_692_ = !lean_is_exclusive(v_self_667_);
if (v_isSharedCheck_692_ == 0)
{
lean_object* v_unused_693_; 
v_unused_693_ = lean_ctor_get(v_self_667_, 5);
lean_dec(v_unused_693_);
v___x_675_ = v_self_667_;
v_isShared_676_ = v_isSharedCheck_692_;
goto v_resetjp_674_;
}
else
{
lean_inc(v_facetConfigs_673_);
lean_inc(v_packages_672_);
lean_inc(v_lakeArgs_x3f_671_);
lean_inc(v_lakeCache_670_);
lean_inc(v_lakeConfig_669_);
lean_inc(v_lakeEnv_668_);
lean_dec(v_self_667_);
v___x_675_ = lean_box(0);
v_isShared_676_ = v_isSharedCheck_692_;
goto v_resetjp_674_;
}
v_resetjp_674_:
{
lean_object* v___x_677_; lean_object* v_val_678_; lean_object* v___x_679_; lean_object* v___x_680_; lean_object* v___x_681_; uint8_t v___x_682_; 
v___x_677_ = lean_array_get_size(v_packages_672_);
v_val_678_ = l_Nat_foldRev___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateDepPkgs_spec__1(v___x_677_, v___x_677_, v_packages_672_);
v___x_679_ = lean_box(1);
v___x_680_ = lean_unsigned_to_nat(0u);
v___x_681_ = lean_array_get_size(v_val_678_);
v___x_682_ = lean_nat_dec_lt(v___x_680_, v___x_681_);
if (v___x_682_ == 0)
{
lean_object* v___x_684_; 
if (v_isShared_676_ == 0)
{
lean_ctor_set(v___x_675_, 5, v___x_679_);
lean_ctor_set(v___x_675_, 4, v_val_678_);
v___x_684_ = v___x_675_;
goto v_reusejp_683_;
}
else
{
lean_object* v_reuseFailAlloc_685_; 
v_reuseFailAlloc_685_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v_reuseFailAlloc_685_, 0, v_lakeEnv_668_);
lean_ctor_set(v_reuseFailAlloc_685_, 1, v_lakeConfig_669_);
lean_ctor_set(v_reuseFailAlloc_685_, 2, v_lakeCache_670_);
lean_ctor_set(v_reuseFailAlloc_685_, 3, v_lakeArgs_x3f_671_);
lean_ctor_set(v_reuseFailAlloc_685_, 4, v_val_678_);
lean_ctor_set(v_reuseFailAlloc_685_, 5, v___x_679_);
lean_ctor_set(v_reuseFailAlloc_685_, 6, v_facetConfigs_673_);
v___x_684_ = v_reuseFailAlloc_685_;
goto v_reusejp_683_;
}
v_reusejp_683_:
{
return v___x_684_;
}
}
else
{
size_t v___x_686_; size_t v___x_687_; lean_object* v___x_688_; lean_object* v___x_690_; 
v___x_686_ = ((size_t)0ULL);
v___x_687_ = lean_usize_of_nat(v___x_681_);
v___x_688_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateDepPkgs_spec__2(v_val_678_, v___x_686_, v___x_687_, v___x_679_);
if (v_isShared_676_ == 0)
{
lean_ctor_set(v___x_675_, 5, v___x_688_);
lean_ctor_set(v___x_675_, 4, v_val_678_);
v___x_690_ = v___x_675_;
goto v_reusejp_689_;
}
else
{
lean_object* v_reuseFailAlloc_691_; 
v_reuseFailAlloc_691_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v_reuseFailAlloc_691_, 0, v_lakeEnv_668_);
lean_ctor_set(v_reuseFailAlloc_691_, 1, v_lakeConfig_669_);
lean_ctor_set(v_reuseFailAlloc_691_, 2, v_lakeCache_670_);
lean_ctor_set(v_reuseFailAlloc_691_, 3, v_lakeArgs_x3f_671_);
lean_ctor_set(v_reuseFailAlloc_691_, 4, v_val_678_);
lean_ctor_set(v_reuseFailAlloc_691_, 5, v___x_688_);
lean_ctor_set(v_reuseFailAlloc_691_, 6, v_facetConfigs_673_);
v___x_690_ = v_reuseFailAlloc_691_;
goto v_reusejp_689_;
}
v_reusejp_689_:
{
return v___x_690_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Nat_foldRev___at___00Nat_foldRev___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateDepPkgs_spec__1_spec__1(lean_object* v___x_694_, lean_object* v_x_695_, lean_object* v_x_696_){
_start:
{
lean_object* v___x_697_; 
v___x_697_ = l_Nat_foldRev___at___00Nat_foldRev___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateDepPkgs_spec__1_spec__1___redArg(v_x_695_, v_x_696_);
return v___x_697_;
}
}
LEAN_EXPORT lean_object* l_Nat_foldRev___at___00Nat_foldRev___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateDepPkgs_spec__1_spec__1___boxed(lean_object* v___x_698_, lean_object* v_x_699_, lean_object* v_x_700_){
_start:
{
lean_object* v_res_701_; 
v_res_701_ = l_Nat_foldRev___at___00Nat_foldRev___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateDepPkgs_spec__1_spec__1(v___x_698_, v_x_699_, v_x_700_);
lean_dec(v___x_698_);
return v_res_701_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_ResolveState_init(lean_object* v_ws_702_, lean_object* v_size_703_){
_start:
{
lean_object* v___x_704_; lean_object* v___x_705_; 
v___x_704_ = lean_mk_empty_array_with_capacity(v_size_703_);
v___x_705_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_705_, 0, v_ws_702_);
lean_ctor_set(v___x_705_, 1, v___x_704_);
return v___x_705_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_ResolveState_init___boxed(lean_object* v_ws_706_, lean_object* v_size_707_){
_start:
{
lean_object* v_res_708_; 
v_res_708_ = l___private_Lake_Load_Resolve_0__Lake_ResolveState_init(v_ws_706_, v_size_707_);
lean_dec(v_size_707_);
return v_res_708_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_ResolveState_reuseDep___redArg(lean_object* v_s_709_, lean_object* v_wsIdx_710_){
_start:
{
lean_object* v_ws_711_; lean_object* v_depIdxs_712_; lean_object* v___x_714_; uint8_t v_isShared_715_; uint8_t v_isSharedCheck_720_; 
v_ws_711_ = lean_ctor_get(v_s_709_, 0);
v_depIdxs_712_ = lean_ctor_get(v_s_709_, 1);
v_isSharedCheck_720_ = !lean_is_exclusive(v_s_709_);
if (v_isSharedCheck_720_ == 0)
{
v___x_714_ = v_s_709_;
v_isShared_715_ = v_isSharedCheck_720_;
goto v_resetjp_713_;
}
else
{
lean_inc(v_depIdxs_712_);
lean_inc(v_ws_711_);
lean_dec(v_s_709_);
v___x_714_ = lean_box(0);
v_isShared_715_ = v_isSharedCheck_720_;
goto v_resetjp_713_;
}
v_resetjp_713_:
{
lean_object* v___x_716_; lean_object* v___x_718_; 
v___x_716_ = lean_array_push(v_depIdxs_712_, v_wsIdx_710_);
if (v_isShared_715_ == 0)
{
lean_ctor_set(v___x_714_, 1, v___x_716_);
v___x_718_ = v___x_714_;
goto v_reusejp_717_;
}
else
{
lean_object* v_reuseFailAlloc_719_; 
v_reuseFailAlloc_719_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_719_, 0, v_ws_711_);
lean_ctor_set(v_reuseFailAlloc_719_, 1, v___x_716_);
v___x_718_ = v_reuseFailAlloc_719_;
goto v_reusejp_717_;
}
v_reusejp_717_:
{
return v___x_718_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_ResolveState_reuseDep(lean_object* v_n_721_, lean_object* v_s_722_, lean_object* v_wsIdx_723_){
_start:
{
lean_object* v_ws_724_; lean_object* v_depIdxs_725_; lean_object* v___x_727_; uint8_t v_isShared_728_; uint8_t v_isSharedCheck_733_; 
v_ws_724_ = lean_ctor_get(v_s_722_, 0);
v_depIdxs_725_ = lean_ctor_get(v_s_722_, 1);
v_isSharedCheck_733_ = !lean_is_exclusive(v_s_722_);
if (v_isSharedCheck_733_ == 0)
{
v___x_727_ = v_s_722_;
v_isShared_728_ = v_isSharedCheck_733_;
goto v_resetjp_726_;
}
else
{
lean_inc(v_depIdxs_725_);
lean_inc(v_ws_724_);
lean_dec(v_s_722_);
v___x_727_ = lean_box(0);
v_isShared_728_ = v_isSharedCheck_733_;
goto v_resetjp_726_;
}
v_resetjp_726_:
{
lean_object* v___x_729_; lean_object* v___x_731_; 
v___x_729_ = lean_array_push(v_depIdxs_725_, v_wsIdx_723_);
if (v_isShared_728_ == 0)
{
lean_ctor_set(v___x_727_, 1, v___x_729_);
v___x_731_ = v___x_727_;
goto v_reusejp_730_;
}
else
{
lean_object* v_reuseFailAlloc_732_; 
v_reuseFailAlloc_732_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_732_, 0, v_ws_724_);
lean_ctor_set(v_reuseFailAlloc_732_, 1, v___x_729_);
v___x_731_ = v_reuseFailAlloc_732_;
goto v_reusejp_730_;
}
v_reusejp_730_:
{
return v___x_731_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_ResolveState_reuseDep___boxed(lean_object* v_n_734_, lean_object* v_s_735_, lean_object* v_wsIdx_736_){
_start:
{
lean_object* v_res_737_; 
v_res_737_ = l___private_Lake_Load_Resolve_0__Lake_ResolveState_reuseDep(v_n_734_, v_s_735_, v_wsIdx_736_);
lean_dec(v_n_734_);
return v_res_737_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_ResolveState_newDep___redArg(lean_object* v_s_738_, lean_object* v_dep_739_, lean_object* v_lakeOpts_740_, lean_object* v_leanOpts_741_, uint8_t v_reconfigure_742_, lean_object* v_a_743_){
_start:
{
lean_object* v_ws_745_; lean_object* v_depIdxs_746_; lean_object* v___x_748_; uint8_t v_isShared_749_; uint8_t v_isSharedCheck_775_; 
v_ws_745_ = lean_ctor_get(v_s_738_, 0);
v_depIdxs_746_ = lean_ctor_get(v_s_738_, 1);
v_isSharedCheck_775_ = !lean_is_exclusive(v_s_738_);
if (v_isSharedCheck_775_ == 0)
{
v___x_748_ = v_s_738_;
v_isShared_749_ = v_isSharedCheck_775_;
goto v_resetjp_747_;
}
else
{
lean_inc(v_depIdxs_746_);
lean_inc(v_ws_745_);
lean_dec(v_s_738_);
v___x_748_ = lean_box(0);
v_isShared_749_ = v_isSharedCheck_775_;
goto v_resetjp_747_;
}
v_resetjp_747_:
{
lean_object* v_packages_750_; lean_object* v_wsIdx_751_; lean_object* v___x_752_; 
v_packages_750_ = lean_ctor_get(v_ws_745_, 4);
v_wsIdx_751_ = lean_array_get_size(v_packages_750_);
v___x_752_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_addDepPackage_x27(v_ws_745_, v_dep_739_, v_lakeOpts_740_, v_leanOpts_741_, v_reconfigure_742_, v_a_743_);
if (lean_obj_tag(v___x_752_) == 0)
{
lean_object* v_a_753_; lean_object* v_a_754_; lean_object* v___x_756_; uint8_t v_isShared_757_; uint8_t v_isSharedCheck_765_; 
v_a_753_ = lean_ctor_get(v___x_752_, 0);
v_a_754_ = lean_ctor_get(v___x_752_, 1);
v_isSharedCheck_765_ = !lean_is_exclusive(v___x_752_);
if (v_isSharedCheck_765_ == 0)
{
v___x_756_ = v___x_752_;
v_isShared_757_ = v_isSharedCheck_765_;
goto v_resetjp_755_;
}
else
{
lean_inc(v_a_754_);
lean_inc(v_a_753_);
lean_dec(v___x_752_);
v___x_756_ = lean_box(0);
v_isShared_757_ = v_isSharedCheck_765_;
goto v_resetjp_755_;
}
v_resetjp_755_:
{
lean_object* v___x_758_; lean_object* v___x_760_; 
v___x_758_ = lean_array_push(v_depIdxs_746_, v_wsIdx_751_);
if (v_isShared_749_ == 0)
{
lean_ctor_set(v___x_748_, 1, v___x_758_);
lean_ctor_set(v___x_748_, 0, v_a_753_);
v___x_760_ = v___x_748_;
goto v_reusejp_759_;
}
else
{
lean_object* v_reuseFailAlloc_764_; 
v_reuseFailAlloc_764_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_764_, 0, v_a_753_);
lean_ctor_set(v_reuseFailAlloc_764_, 1, v___x_758_);
v___x_760_ = v_reuseFailAlloc_764_;
goto v_reusejp_759_;
}
v_reusejp_759_:
{
lean_object* v___x_762_; 
if (v_isShared_757_ == 0)
{
lean_ctor_set(v___x_756_, 0, v___x_760_);
v___x_762_ = v___x_756_;
goto v_reusejp_761_;
}
else
{
lean_object* v_reuseFailAlloc_763_; 
v_reuseFailAlloc_763_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_763_, 0, v___x_760_);
lean_ctor_set(v_reuseFailAlloc_763_, 1, v_a_754_);
v___x_762_ = v_reuseFailAlloc_763_;
goto v_reusejp_761_;
}
v_reusejp_761_:
{
return v___x_762_;
}
}
}
}
else
{
lean_object* v_a_766_; lean_object* v_a_767_; lean_object* v___x_769_; uint8_t v_isShared_770_; uint8_t v_isSharedCheck_774_; 
lean_del_object(v___x_748_);
lean_dec_ref(v_depIdxs_746_);
v_a_766_ = lean_ctor_get(v___x_752_, 0);
v_a_767_ = lean_ctor_get(v___x_752_, 1);
v_isSharedCheck_774_ = !lean_is_exclusive(v___x_752_);
if (v_isSharedCheck_774_ == 0)
{
v___x_769_ = v___x_752_;
v_isShared_770_ = v_isSharedCheck_774_;
goto v_resetjp_768_;
}
else
{
lean_inc(v_a_767_);
lean_inc(v_a_766_);
lean_dec(v___x_752_);
v___x_769_ = lean_box(0);
v_isShared_770_ = v_isSharedCheck_774_;
goto v_resetjp_768_;
}
v_resetjp_768_:
{
lean_object* v___x_772_; 
if (v_isShared_770_ == 0)
{
v___x_772_ = v___x_769_;
goto v_reusejp_771_;
}
else
{
lean_object* v_reuseFailAlloc_773_; 
v_reuseFailAlloc_773_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_773_, 0, v_a_766_);
lean_ctor_set(v_reuseFailAlloc_773_, 1, v_a_767_);
v___x_772_ = v_reuseFailAlloc_773_;
goto v_reusejp_771_;
}
v_reusejp_771_:
{
return v___x_772_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_ResolveState_newDep___redArg___boxed(lean_object* v_s_776_, lean_object* v_dep_777_, lean_object* v_lakeOpts_778_, lean_object* v_leanOpts_779_, lean_object* v_reconfigure_780_, lean_object* v_a_781_, lean_object* v_a_782_){
_start:
{
uint8_t v_reconfigure_boxed_783_; lean_object* v_res_784_; 
v_reconfigure_boxed_783_ = lean_unbox(v_reconfigure_780_);
v_res_784_ = l___private_Lake_Load_Resolve_0__Lake_ResolveState_newDep___redArg(v_s_776_, v_dep_777_, v_lakeOpts_778_, v_leanOpts_779_, v_reconfigure_boxed_783_, v_a_781_);
return v_res_784_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_ResolveState_newDep(lean_object* v_n_785_, lean_object* v_s_786_, lean_object* v_dep_787_, lean_object* v_lakeOpts_788_, lean_object* v_leanOpts_789_, uint8_t v_reconfigure_790_, lean_object* v_a_791_){
_start:
{
lean_object* v_ws_793_; lean_object* v_depIdxs_794_; lean_object* v___x_796_; uint8_t v_isShared_797_; uint8_t v_isSharedCheck_823_; 
v_ws_793_ = lean_ctor_get(v_s_786_, 0);
v_depIdxs_794_ = lean_ctor_get(v_s_786_, 1);
v_isSharedCheck_823_ = !lean_is_exclusive(v_s_786_);
if (v_isSharedCheck_823_ == 0)
{
v___x_796_ = v_s_786_;
v_isShared_797_ = v_isSharedCheck_823_;
goto v_resetjp_795_;
}
else
{
lean_inc(v_depIdxs_794_);
lean_inc(v_ws_793_);
lean_dec(v_s_786_);
v___x_796_ = lean_box(0);
v_isShared_797_ = v_isSharedCheck_823_;
goto v_resetjp_795_;
}
v_resetjp_795_:
{
lean_object* v_packages_798_; lean_object* v_wsIdx_799_; lean_object* v___x_800_; 
v_packages_798_ = lean_ctor_get(v_ws_793_, 4);
v_wsIdx_799_ = lean_array_get_size(v_packages_798_);
v___x_800_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_addDepPackage_x27(v_ws_793_, v_dep_787_, v_lakeOpts_788_, v_leanOpts_789_, v_reconfigure_790_, v_a_791_);
if (lean_obj_tag(v___x_800_) == 0)
{
lean_object* v_a_801_; lean_object* v_a_802_; lean_object* v___x_804_; uint8_t v_isShared_805_; uint8_t v_isSharedCheck_813_; 
v_a_801_ = lean_ctor_get(v___x_800_, 0);
v_a_802_ = lean_ctor_get(v___x_800_, 1);
v_isSharedCheck_813_ = !lean_is_exclusive(v___x_800_);
if (v_isSharedCheck_813_ == 0)
{
v___x_804_ = v___x_800_;
v_isShared_805_ = v_isSharedCheck_813_;
goto v_resetjp_803_;
}
else
{
lean_inc(v_a_802_);
lean_inc(v_a_801_);
lean_dec(v___x_800_);
v___x_804_ = lean_box(0);
v_isShared_805_ = v_isSharedCheck_813_;
goto v_resetjp_803_;
}
v_resetjp_803_:
{
lean_object* v___x_806_; lean_object* v___x_808_; 
v___x_806_ = lean_array_push(v_depIdxs_794_, v_wsIdx_799_);
if (v_isShared_797_ == 0)
{
lean_ctor_set(v___x_796_, 1, v___x_806_);
lean_ctor_set(v___x_796_, 0, v_a_801_);
v___x_808_ = v___x_796_;
goto v_reusejp_807_;
}
else
{
lean_object* v_reuseFailAlloc_812_; 
v_reuseFailAlloc_812_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_812_, 0, v_a_801_);
lean_ctor_set(v_reuseFailAlloc_812_, 1, v___x_806_);
v___x_808_ = v_reuseFailAlloc_812_;
goto v_reusejp_807_;
}
v_reusejp_807_:
{
lean_object* v___x_810_; 
if (v_isShared_805_ == 0)
{
lean_ctor_set(v___x_804_, 0, v___x_808_);
v___x_810_ = v___x_804_;
goto v_reusejp_809_;
}
else
{
lean_object* v_reuseFailAlloc_811_; 
v_reuseFailAlloc_811_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_811_, 0, v___x_808_);
lean_ctor_set(v_reuseFailAlloc_811_, 1, v_a_802_);
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
else
{
lean_object* v_a_814_; lean_object* v_a_815_; lean_object* v___x_817_; uint8_t v_isShared_818_; uint8_t v_isSharedCheck_822_; 
lean_del_object(v___x_796_);
lean_dec_ref(v_depIdxs_794_);
v_a_814_ = lean_ctor_get(v___x_800_, 0);
v_a_815_ = lean_ctor_get(v___x_800_, 1);
v_isSharedCheck_822_ = !lean_is_exclusive(v___x_800_);
if (v_isSharedCheck_822_ == 0)
{
v___x_817_ = v___x_800_;
v_isShared_818_ = v_isSharedCheck_822_;
goto v_resetjp_816_;
}
else
{
lean_inc(v_a_815_);
lean_inc(v_a_814_);
lean_dec(v___x_800_);
v___x_817_ = lean_box(0);
v_isShared_818_ = v_isSharedCheck_822_;
goto v_resetjp_816_;
}
v_resetjp_816_:
{
lean_object* v___x_820_; 
if (v_isShared_818_ == 0)
{
v___x_820_ = v___x_817_;
goto v_reusejp_819_;
}
else
{
lean_object* v_reuseFailAlloc_821_; 
v_reuseFailAlloc_821_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_821_, 0, v_a_814_);
lean_ctor_set(v_reuseFailAlloc_821_, 1, v_a_815_);
v___x_820_ = v_reuseFailAlloc_821_;
goto v_reusejp_819_;
}
v_reusejp_819_:
{
return v___x_820_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_ResolveState_newDep___boxed(lean_object* v_n_824_, lean_object* v_s_825_, lean_object* v_dep_826_, lean_object* v_lakeOpts_827_, lean_object* v_leanOpts_828_, lean_object* v_reconfigure_829_, lean_object* v_a_830_, lean_object* v_a_831_){
_start:
{
uint8_t v_reconfigure_boxed_832_; lean_object* v_res_833_; 
v_reconfigure_boxed_832_ = lean_unbox(v_reconfigure_829_);
v_res_833_ = l___private_Lake_Load_Resolve_0__Lake_ResolveState_newDep(v_n_824_, v_s_825_, v_dep_826_, v_lakeOpts_827_, v_leanOpts_828_, v_reconfigure_boxed_832_, v_a_830_);
lean_dec(v_n_824_);
return v_res_833_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_guardBySizeImpl___redArg(lean_object* v_inst_834_){
_start:
{
lean_object* v___x_835_; 
v___x_835_ = lean_apply_2(v_inst_834_, lean_box(0), lean_box(0));
return v___x_835_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_guardBySizeImpl(lean_object* v_m_836_, lean_object* v_00_u03b1_837_, lean_object* v_inst_838_, lean_object* v_inst_839_, lean_object* v_as_840_){
_start:
{
lean_object* v___x_841_; 
v___x_841_ = lean_apply_2(v_inst_838_, lean_box(0), lean_box(0));
return v___x_841_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_guardBySizeImpl___boxed(lean_object* v_m_842_, lean_object* v_00_u03b1_843_, lean_object* v_inst_844_, lean_object* v_inst_845_, lean_object* v_as_846_){
_start:
{
lean_object* v_res_847_; 
v_res_847_ = l___private_Lake_Load_Resolve_0__Lake_guardBySizeImpl(v_m_842_, v_00_u03b1_843_, v_inst_844_, v_inst_845_, v_as_846_);
lean_dec_ref(v_as_846_);
lean_dec(v_inst_845_);
return v_res_847_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__4(lean_object* v_resolve_848_, lean_object* v_pkg_849_, lean_object* v_dep_850_, lean_object* v_ws_851_, lean_object* v_toBind_852_, lean_object* v___f_853_, lean_object* v_____r_854_){
_start:
{
lean_object* v___x_855_; lean_object* v___x_856_; 
v___x_855_ = lean_apply_3(v_resolve_848_, v_pkg_849_, v_dep_850_, v_ws_851_);
v___x_856_ = lean_apply_4(v_toBind_852_, lean_box(0), lean_box(0), v___x_855_, v___f_853_);
return v___x_856_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__3(lean_object* v_start_857_, lean_object* v_s_858_, lean_object* v_opts_859_, lean_object* v_leanOpts_860_, uint8_t v_reconfigure_861_, lean_object* v_inst_862_, lean_object* v_matDep_863_){
_start:
{
lean_object* v___x_864_; lean_object* v___x_865_; lean_object* v___x_866_; 
v___x_864_ = lean_box(v_reconfigure_861_);
v___x_865_ = lean_alloc_closure((void*)(l___private_Lake_Load_Resolve_0__Lake_ResolveState_newDep___boxed), 8, 6);
lean_closure_set(v___x_865_, 0, v_start_857_);
lean_closure_set(v___x_865_, 1, v_s_858_);
lean_closure_set(v___x_865_, 2, v_matDep_863_);
lean_closure_set(v___x_865_, 3, v_opts_859_);
lean_closure_set(v___x_865_, 4, v_leanOpts_860_);
lean_closure_set(v___x_865_, 5, v___x_864_);
v___x_866_ = lean_apply_2(v_inst_862_, lean_box(0), v___x_865_);
return v___x_866_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__3___boxed(lean_object* v_start_867_, lean_object* v_s_868_, lean_object* v_opts_869_, lean_object* v_leanOpts_870_, lean_object* v_reconfigure_871_, lean_object* v_inst_872_, lean_object* v_matDep_873_){
_start:
{
uint8_t v_reconfigure_boxed_874_; lean_object* v_res_875_; 
v_reconfigure_boxed_874_ = lean_unbox(v_reconfigure_871_);
v_res_875_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__3(v_start_867_, v_s_868_, v_opts_869_, v_leanOpts_870_, v_reconfigure_boxed_874_, v_inst_872_, v_matDep_873_);
return v_res_875_;
}
}
LEAN_EXPORT uint8_t l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__2(lean_object* v_dep_876_, lean_object* v_x_877_){
_start:
{
lean_object* v_baseName_878_; lean_object* v_name_879_; uint8_t v___x_880_; 
v_baseName_878_ = lean_ctor_get(v_x_877_, 1);
v_name_879_ = lean_ctor_get(v_dep_876_, 0);
v___x_880_ = lean_name_eq(v_baseName_878_, v_name_879_);
return v___x_880_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__2___boxed(lean_object* v_dep_881_, lean_object* v_x_882_){
_start:
{
uint8_t v_res_883_; lean_object* v_r_884_; 
v_res_883_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__2(v_dep_881_, v_x_882_);
lean_dec_ref(v_x_882_);
lean_dec_ref(v_dep_881_);
v_r_884_ = lean_box(v_res_883_);
return v_r_884_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__5(lean_object* v___f_885_, lean_object* v_____r_886_){
_start:
{
lean_object* v___x_887_; 
v___x_887_ = lean_apply_1(v___f_885_, v_____r_886_);
return v___x_887_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__6(lean_object* v_toPure_889_, lean_object* v_start_890_, lean_object* v_leanOpts_891_, uint8_t v_reconfigure_892_, lean_object* v_inst_893_, lean_object* v_resolve_894_, lean_object* v_pkg_895_, lean_object* v_toBind_896_, lean_object* v_baseName_897_, lean_object* v_inst_898_, lean_object* v_dep_899_, lean_object* v_s_900_){
_start:
{
lean_object* v_ws_901_; lean_object* v_depIdxs_902_; lean_object* v_packages_903_; lean_object* v___f_904_; lean_object* v___x_905_; lean_object* v___x_906_; 
v_ws_901_ = lean_ctor_get(v_s_900_, 0);
lean_inc_ref(v_ws_901_);
v_depIdxs_902_ = lean_ctor_get(v_s_900_, 1);
v_packages_903_ = lean_ctor_get(v_ws_901_, 4);
lean_inc_ref(v_dep_899_);
v___f_904_ = lean_alloc_closure((void*)(l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__2___boxed), 2, 1);
lean_closure_set(v___f_904_, 0, v_dep_899_);
v___x_905_ = lean_unsigned_to_nat(0u);
v___x_906_ = l___private_Init_Data_Array_Basic_0__Array_findFinIdx_x3f_loop(lean_box(0), v___f_904_, v_packages_903_, v___x_905_);
if (lean_obj_tag(v___x_906_) == 1)
{
lean_object* v___x_908_; uint8_t v_isShared_909_; uint8_t v_isSharedCheck_916_; 
lean_inc_ref(v_depIdxs_902_);
lean_dec_ref(v_dep_899_);
lean_dec(v_inst_898_);
lean_dec(v_baseName_897_);
lean_dec(v_toBind_896_);
lean_dec_ref(v_pkg_895_);
lean_dec(v_resolve_894_);
lean_dec(v_inst_893_);
lean_dec_ref(v_leanOpts_891_);
lean_dec(v_start_890_);
v_isSharedCheck_916_ = !lean_is_exclusive(v_s_900_);
if (v_isSharedCheck_916_ == 0)
{
lean_object* v_unused_917_; lean_object* v_unused_918_; 
v_unused_917_ = lean_ctor_get(v_s_900_, 1);
lean_dec(v_unused_917_);
v_unused_918_ = lean_ctor_get(v_s_900_, 0);
lean_dec(v_unused_918_);
v___x_908_ = v_s_900_;
v_isShared_909_ = v_isSharedCheck_916_;
goto v_resetjp_907_;
}
else
{
lean_dec(v_s_900_);
v___x_908_ = lean_box(0);
v_isShared_909_ = v_isSharedCheck_916_;
goto v_resetjp_907_;
}
v_resetjp_907_:
{
lean_object* v_val_910_; lean_object* v___x_911_; lean_object* v___x_913_; 
v_val_910_ = lean_ctor_get(v___x_906_, 0);
lean_inc(v_val_910_);
lean_dec_ref_known(v___x_906_, 1);
v___x_911_ = lean_array_push(v_depIdxs_902_, v_val_910_);
if (v_isShared_909_ == 0)
{
lean_ctor_set(v___x_908_, 1, v___x_911_);
v___x_913_ = v___x_908_;
goto v_reusejp_912_;
}
else
{
lean_object* v_reuseFailAlloc_915_; 
v_reuseFailAlloc_915_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_915_, 0, v_ws_901_);
lean_ctor_set(v_reuseFailAlloc_915_, 1, v___x_911_);
v___x_913_ = v_reuseFailAlloc_915_;
goto v_reusejp_912_;
}
v_reusejp_912_:
{
lean_object* v___x_914_; 
v___x_914_ = lean_apply_2(v_toPure_889_, lean_box(0), v___x_913_);
return v___x_914_;
}
}
}
else
{
lean_object* v_name_919_; lean_object* v_opts_920_; lean_object* v___x_921_; lean_object* v___f_922_; lean_object* v___f_923_; uint8_t v___x_924_; 
lean_dec(v___x_906_);
lean_dec(v_toPure_889_);
v_name_919_ = lean_ctor_get(v_dep_899_, 0);
v_opts_920_ = lean_ctor_get(v_dep_899_, 4);
v___x_921_ = lean_box(v_reconfigure_892_);
lean_inc(v_opts_920_);
v___f_922_ = lean_alloc_closure((void*)(l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__3___boxed), 7, 6);
lean_closure_set(v___f_922_, 0, v_start_890_);
lean_closure_set(v___f_922_, 1, v_s_900_);
lean_closure_set(v___f_922_, 2, v_opts_920_);
lean_closure_set(v___f_922_, 3, v_leanOpts_891_);
lean_closure_set(v___f_922_, 4, v___x_921_);
lean_closure_set(v___f_922_, 5, v_inst_893_);
lean_inc_ref(v___f_922_);
lean_inc(v_toBind_896_);
lean_inc_ref(v_ws_901_);
lean_inc_ref(v_dep_899_);
lean_inc_ref(v_pkg_895_);
lean_inc(v_resolve_894_);
v___f_923_ = lean_alloc_closure((void*)(l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__4), 7, 6);
lean_closure_set(v___f_923_, 0, v_resolve_894_);
lean_closure_set(v___f_923_, 1, v_pkg_895_);
lean_closure_set(v___f_923_, 2, v_dep_899_);
lean_closure_set(v___f_923_, 3, v_ws_901_);
lean_closure_set(v___f_923_, 4, v_toBind_896_);
lean_closure_set(v___f_923_, 5, v___f_922_);
v___x_924_ = lean_name_eq(v_baseName_897_, v_name_919_);
if (v___x_924_ == 0)
{
lean_object* v___x_925_; lean_object* v___x_926_; 
lean_dec_ref(v___f_923_);
lean_dec(v_inst_898_);
lean_dec(v_baseName_897_);
v___x_925_ = lean_box(0);
v___x_926_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__4(v_resolve_894_, v_pkg_895_, v_dep_899_, v_ws_901_, v_toBind_896_, v___f_922_, v___x_925_);
return v___x_926_;
}
else
{
lean_object* v___f_927_; uint8_t v___x_928_; lean_object* v___x_929_; lean_object* v___x_930_; lean_object* v___x_931_; lean_object* v___x_932_; lean_object* v___x_933_; 
lean_dec_ref(v___f_922_);
lean_dec_ref(v_ws_901_);
lean_dec_ref(v_dep_899_);
lean_dec_ref(v_pkg_895_);
lean_dec(v_resolve_894_);
v___f_927_ = lean_alloc_closure((void*)(l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__5), 2, 1);
lean_closure_set(v___f_927_, 0, v___f_923_);
v___x_928_ = 0;
v___x_929_ = l_Lean_Name_toString(v_baseName_897_, v___x_928_);
v___x_930_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__6___closed__0));
v___x_931_ = lean_string_append(v___x_929_, v___x_930_);
v___x_932_ = lean_apply_2(v_inst_898_, lean_box(0), v___x_931_);
v___x_933_ = lean_apply_4(v_toBind_896_, lean_box(0), lean_box(0), v___x_932_, v___f_927_);
return v___x_933_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__6___boxed(lean_object* v_toPure_934_, lean_object* v_start_935_, lean_object* v_leanOpts_936_, lean_object* v_reconfigure_937_, lean_object* v_inst_938_, lean_object* v_resolve_939_, lean_object* v_pkg_940_, lean_object* v_toBind_941_, lean_object* v_baseName_942_, lean_object* v_inst_943_, lean_object* v_dep_944_, lean_object* v_s_945_){
_start:
{
uint8_t v_reconfigure_boxed_946_; lean_object* v_res_947_; 
v_reconfigure_boxed_946_ = lean_unbox(v_reconfigure_937_);
v_res_947_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__6(v_toPure_934_, v_start_935_, v_leanOpts_936_, v_reconfigure_boxed_946_, v_inst_938_, v_resolve_939_, v_pkg_940_, v_toBind_941_, v_baseName_942_, v_inst_943_, v_dep_944_, v_s_945_);
return v_res_947_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__0___boxed(lean_object* v_next_948_, lean_object* v_inst_949_, lean_object* v_inst_950_, lean_object* v_inst_951_, lean_object* v_resolve_952_, lean_object* v_leanOpts_953_, lean_object* v_reconfigure_954_, lean_object* v_ws_955_, lean_object* v_____x_956_){
_start:
{
uint8_t v_reconfigure_boxed_957_; lean_object* v_res_958_; 
v_reconfigure_boxed_957_ = lean_unbox(v_reconfigure_954_);
v_res_958_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__0(v_next_948_, v_inst_949_, v_inst_950_, v_inst_951_, v_resolve_952_, v_leanOpts_953_, v_reconfigure_boxed_957_, v_ws_955_, v_____x_956_);
lean_dec(v_next_948_);
return v_res_958_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__1(lean_object* v_pkg_959_, lean_object* v_next_960_, lean_object* v_toPure_961_, lean_object* v_inst_962_, lean_object* v_inst_963_, lean_object* v_inst_964_, lean_object* v_resolve_965_, lean_object* v_leanOpts_966_, uint8_t v_reconfigure_967_, lean_object* v_toBind_968_, lean_object* v_____x_969_){
_start:
{
lean_object* v_ws_970_; lean_object* v_depIdxs_971_; lean_object* v_ws_972_; lean_object* v_packages_973_; lean_object* v___x_974_; uint8_t v___x_975_; 
v_ws_970_ = lean_ctor_get(v_____x_969_, 0);
lean_inc_ref(v_ws_970_);
v_depIdxs_971_ = lean_ctor_get(v_____x_969_, 1);
lean_inc_ref(v_depIdxs_971_);
lean_dec_ref(v_____x_969_);
v_ws_972_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_setDepIdxs___redArg(v_ws_970_, v_pkg_959_, v_depIdxs_971_);
v_packages_973_ = lean_ctor_get(v_ws_972_, 4);
lean_inc_ref(v_packages_973_);
v___x_974_ = lean_array_get_size(v_packages_973_);
lean_dec_ref(v_packages_973_);
v___x_975_ = lean_nat_dec_lt(v_next_960_, v___x_974_);
if (v___x_975_ == 0)
{
lean_object* v___x_976_; 
lean_dec(v_toBind_968_);
lean_dec_ref(v_leanOpts_966_);
lean_dec(v_resolve_965_);
lean_dec(v_inst_964_);
lean_dec(v_inst_963_);
lean_dec_ref(v_inst_962_);
lean_dec(v_next_960_);
v___x_976_ = lean_apply_2(v_toPure_961_, lean_box(0), v_ws_972_);
return v___x_976_;
}
else
{
lean_object* v___x_977_; lean_object* v___f_978_; lean_object* v___x_979_; lean_object* v___x_980_; 
v___x_977_ = lean_box(v_reconfigure_967_);
v___f_978_ = lean_alloc_closure((void*)(l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__0___boxed), 9, 8);
lean_closure_set(v___f_978_, 0, v_next_960_);
lean_closure_set(v___f_978_, 1, v_inst_962_);
lean_closure_set(v___f_978_, 2, v_inst_963_);
lean_closure_set(v___f_978_, 3, v_inst_964_);
lean_closure_set(v___f_978_, 4, v_resolve_965_);
lean_closure_set(v___f_978_, 5, v_leanOpts_966_);
lean_closure_set(v___f_978_, 6, v___x_977_);
lean_closure_set(v___f_978_, 7, v_ws_972_);
v___x_979_ = lean_apply_2(v_toPure_961_, lean_box(0), lean_box(0));
v___x_980_ = lean_apply_4(v_toBind_968_, lean_box(0), lean_box(0), v___x_979_, v___f_978_);
return v___x_980_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__1___boxed(lean_object* v_pkg_981_, lean_object* v_next_982_, lean_object* v_toPure_983_, lean_object* v_inst_984_, lean_object* v_inst_985_, lean_object* v_inst_986_, lean_object* v_resolve_987_, lean_object* v_leanOpts_988_, lean_object* v_reconfigure_989_, lean_object* v_toBind_990_, lean_object* v_____x_991_){
_start:
{
uint8_t v_reconfigure_boxed_992_; lean_object* v_res_993_; 
v_reconfigure_boxed_992_ = lean_unbox(v_reconfigure_989_);
v_res_993_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__1(v_pkg_981_, v_next_982_, v_toPure_983_, v_inst_984_, v_inst_985_, v_inst_986_, v_resolve_987_, v_leanOpts_988_, v_reconfigure_boxed_992_, v_toBind_990_, v_____x_991_);
return v_res_993_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg(lean_object* v_inst_994_, lean_object* v_inst_995_, lean_object* v_inst_996_, lean_object* v_resolve_997_, lean_object* v_leanOpts_998_, uint8_t v_reconfigure_999_, lean_object* v_ws_1000_, lean_object* v_i_1001_, lean_object* v_next_1002_){
_start:
{
lean_object* v_packages_1003_; lean_object* v_pkg_1004_; lean_object* v_toApplicative_1005_; lean_object* v_baseName_1006_; lean_object* v_depConfigs_1007_; lean_object* v_toBind_1008_; lean_object* v_toPure_1009_; lean_object* v___x_1010_; lean_object* v___x_1011_; lean_object* v_s_1012_; lean_object* v___x_1013_; lean_object* v___f_1014_; lean_object* v___x_1015_; uint8_t v___x_1016_; 
v_packages_1003_ = lean_ctor_get(v_ws_1000_, 4);
lean_inc_ref(v_packages_1003_);
v_pkg_1004_ = lean_array_fget(v_packages_1003_, v_i_1001_);
v_toApplicative_1005_ = lean_ctor_get(v_inst_994_, 0);
v_baseName_1006_ = lean_ctor_get(v_pkg_1004_, 1);
lean_inc(v_baseName_1006_);
v_depConfigs_1007_ = lean_ctor_get(v_pkg_1004_, 12);
lean_inc_ref(v_depConfigs_1007_);
v_toBind_1008_ = lean_ctor_get(v_inst_994_, 1);
lean_inc_n(v_toBind_1008_, 2);
v_toPure_1009_ = lean_ctor_get(v_toApplicative_1005_, 1);
v___x_1010_ = lean_array_get_size(v_depConfigs_1007_);
v___x_1011_ = lean_mk_empty_array_with_capacity(v___x_1010_);
v_s_1012_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_s_1012_, 0, v_ws_1000_);
lean_ctor_set(v_s_1012_, 1, v___x_1011_);
v___x_1013_ = lean_box(v_reconfigure_999_);
lean_inc_ref(v_leanOpts_998_);
lean_inc(v_resolve_997_);
lean_inc(v_inst_996_);
lean_inc(v_inst_995_);
lean_inc_ref(v_inst_994_);
lean_inc(v_toPure_1009_);
lean_inc(v_pkg_1004_);
v___f_1014_ = lean_alloc_closure((void*)(l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__1___boxed), 11, 10);
lean_closure_set(v___f_1014_, 0, v_pkg_1004_);
lean_closure_set(v___f_1014_, 1, v_next_1002_);
lean_closure_set(v___f_1014_, 2, v_toPure_1009_);
lean_closure_set(v___f_1014_, 3, v_inst_994_);
lean_closure_set(v___f_1014_, 4, v_inst_995_);
lean_closure_set(v___f_1014_, 5, v_inst_996_);
lean_closure_set(v___f_1014_, 6, v_resolve_997_);
lean_closure_set(v___f_1014_, 7, v_leanOpts_998_);
lean_closure_set(v___f_1014_, 8, v___x_1013_);
lean_closure_set(v___f_1014_, 9, v_toBind_1008_);
v___x_1015_ = lean_unsigned_to_nat(0u);
v___x_1016_ = lean_nat_dec_lt(v___x_1015_, v___x_1010_);
if (v___x_1016_ == 0)
{
lean_object* v___x_1017_; lean_object* v___x_1018_; 
lean_inc(v_toPure_1009_);
lean_dec_ref(v_depConfigs_1007_);
lean_dec(v_baseName_1006_);
lean_dec(v_pkg_1004_);
lean_dec_ref(v_packages_1003_);
lean_dec_ref(v_leanOpts_998_);
lean_dec(v_resolve_997_);
lean_dec(v_inst_996_);
lean_dec(v_inst_995_);
lean_dec_ref(v_inst_994_);
v___x_1017_ = lean_apply_2(v_toPure_1009_, lean_box(0), v_s_1012_);
v___x_1018_ = lean_apply_4(v_toBind_1008_, lean_box(0), lean_box(0), v___x_1017_, v___f_1014_);
return v___x_1018_;
}
else
{
lean_object* v_start_1019_; lean_object* v___x_1020_; lean_object* v___f_1021_; size_t v___x_1022_; size_t v___x_1023_; lean_object* v___x_1024_; lean_object* v___x_1025_; 
v_start_1019_ = lean_array_get_size(v_packages_1003_);
lean_dec_ref(v_packages_1003_);
v___x_1020_ = lean_box(v_reconfigure_999_);
lean_inc(v_toBind_1008_);
lean_inc(v_toPure_1009_);
v___f_1021_ = lean_alloc_closure((void*)(l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__6___boxed), 12, 10);
lean_closure_set(v___f_1021_, 0, v_toPure_1009_);
lean_closure_set(v___f_1021_, 1, v_start_1019_);
lean_closure_set(v___f_1021_, 2, v_leanOpts_998_);
lean_closure_set(v___f_1021_, 3, v___x_1020_);
lean_closure_set(v___f_1021_, 4, v_inst_996_);
lean_closure_set(v___f_1021_, 5, v_resolve_997_);
lean_closure_set(v___f_1021_, 6, v_pkg_1004_);
lean_closure_set(v___f_1021_, 7, v_toBind_1008_);
lean_closure_set(v___f_1021_, 8, v_baseName_1006_);
lean_closure_set(v___f_1021_, 9, v_inst_995_);
v___x_1022_ = lean_usize_of_nat(v___x_1010_);
v___x_1023_ = ((size_t)0ULL);
v___x_1024_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v_inst_994_, v___f_1021_, v_depConfigs_1007_, v___x_1022_, v___x_1023_, v_s_1012_);
v___x_1025_ = lean_apply_4(v_toBind_1008_, lean_box(0), lean_box(0), v___x_1024_, v___f_1014_);
return v___x_1025_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__0(lean_object* v_next_1026_, lean_object* v_inst_1027_, lean_object* v_inst_1028_, lean_object* v_inst_1029_, lean_object* v_resolve_1030_, lean_object* v_leanOpts_1031_, uint8_t v_reconfigure_1032_, lean_object* v_ws_1033_, lean_object* v_____x_1034_){
_start:
{
lean_object* v___x_1035_; lean_object* v___x_1036_; lean_object* v___x_1037_; 
v___x_1035_ = lean_unsigned_to_nat(1u);
v___x_1036_ = lean_nat_add(v_next_1026_, v___x_1035_);
v___x_1037_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg(v_inst_1027_, v_inst_1028_, v_inst_1029_, v_resolve_1030_, v_leanOpts_1031_, v_reconfigure_1032_, v_ws_1033_, v_next_1026_, v___x_1036_);
return v___x_1037_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___boxed(lean_object* v_inst_1038_, lean_object* v_inst_1039_, lean_object* v_inst_1040_, lean_object* v_resolve_1041_, lean_object* v_leanOpts_1042_, lean_object* v_reconfigure_1043_, lean_object* v_ws_1044_, lean_object* v_i_1045_, lean_object* v_next_1046_){
_start:
{
uint8_t v_reconfigure_boxed_1047_; lean_object* v_res_1048_; 
v_reconfigure_boxed_1047_ = lean_unbox(v_reconfigure_1043_);
v_res_1048_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg(v_inst_1038_, v_inst_1039_, v_inst_1040_, v_resolve_1041_, v_leanOpts_1042_, v_reconfigure_boxed_1047_, v_ws_1044_, v_i_1045_, v_next_1046_);
lean_dec(v_i_1045_);
return v_res_1048_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go(lean_object* v_m_1049_, lean_object* v_inst_1050_, lean_object* v_inst_1051_, lean_object* v_inst_1052_, lean_object* v_resolve_1053_, lean_object* v_leanOpts_1054_, uint8_t v_reconfigure_1055_, lean_object* v_ws_1056_, lean_object* v_i_1057_, lean_object* v_i__lt_1058_, lean_object* v_next_1059_, lean_object* v_lt__next_1060_){
_start:
{
lean_object* v___x_1061_; 
v___x_1061_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg(v_inst_1050_, v_inst_1051_, v_inst_1052_, v_resolve_1053_, v_leanOpts_1054_, v_reconfigure_1055_, v_ws_1056_, v_i_1057_, v_next_1059_);
return v___x_1061_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___boxed(lean_object* v_m_1062_, lean_object* v_inst_1063_, lean_object* v_inst_1064_, lean_object* v_inst_1065_, lean_object* v_resolve_1066_, lean_object* v_leanOpts_1067_, lean_object* v_reconfigure_1068_, lean_object* v_ws_1069_, lean_object* v_i_1070_, lean_object* v_i__lt_1071_, lean_object* v_next_1072_, lean_object* v_lt__next_1073_){
_start:
{
uint8_t v_reconfigure_boxed_1074_; lean_object* v_res_1075_; 
v_reconfigure_boxed_1074_ = lean_unbox(v_reconfigure_1068_);
v_res_1075_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go(v_m_1062_, v_inst_1063_, v_inst_1064_, v_inst_1065_, v_resolve_1066_, v_leanOpts_1067_, v_reconfigure_boxed_1074_, v_ws_1069_, v_i_1070_, v_i__lt_1071_, v_next_1072_, v_lt__next_1073_);
lean_dec(v_i_1070_);
return v_res_1075_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go_match__1_splitter___redArg(lean_object* v_x_1076_, lean_object* v_h__1_1077_, lean_object* v_h__2_1078_){
_start:
{
if (lean_obj_tag(v_x_1076_) == 1)
{
lean_object* v_val_1079_; lean_object* v___x_1080_; 
lean_dec(v_h__2_1078_);
v_val_1079_ = lean_ctor_get(v_x_1076_, 0);
lean_inc(v_val_1079_);
lean_dec_ref_known(v_x_1076_, 1);
v___x_1080_ = lean_apply_1(v_h__1_1077_, v_val_1079_);
return v___x_1080_;
}
else
{
lean_object* v___x_1081_; 
lean_dec(v_h__1_1077_);
v___x_1081_ = lean_apply_2(v_h__2_1078_, v_x_1076_, lean_box(0));
return v___x_1081_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go_match__1_splitter(lean_object* v_ws_1082_, lean_object* v_s_1083_, lean_object* v_motive_1084_, lean_object* v_x_1085_, lean_object* v_h__1_1086_, lean_object* v_h__2_1087_){
_start:
{
if (lean_obj_tag(v_x_1085_) == 1)
{
lean_object* v_val_1088_; lean_object* v___x_1089_; 
lean_dec(v_h__2_1087_);
v_val_1088_ = lean_ctor_get(v_x_1085_, 0);
lean_inc(v_val_1088_);
lean_dec_ref_known(v_x_1085_, 1);
v___x_1089_ = lean_apply_1(v_h__1_1086_, v_val_1088_);
return v___x_1089_;
}
else
{
lean_object* v___x_1090_; 
lean_dec(v_h__1_1086_);
v___x_1090_ = lean_apply_2(v_h__2_1087_, v_x_1085_, lean_box(0));
return v___x_1090_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go_match__1_splitter___boxed(lean_object* v_ws_1091_, lean_object* v_s_1092_, lean_object* v_motive_1093_, lean_object* v_x_1094_, lean_object* v_h__1_1095_, lean_object* v_h__2_1096_){
_start:
{
lean_object* v_res_1097_; 
v_res_1097_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go_match__1_splitter(v_ws_1091_, v_s_1092_, v_motive_1093_, v_x_1094_, v_h__1_1095_, v_h__2_1096_);
lean_dec_ref(v_s_1092_);
lean_dec_ref(v_ws_1091_);
return v_res_1097_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go_match__6_splitter___redArg(lean_object* v_x_1098_, lean_object* v_h__1_1099_){
_start:
{
lean_object* v_ws_1100_; lean_object* v_depIdxs_1101_; lean_object* v___x_1102_; 
v_ws_1100_ = lean_ctor_get(v_x_1098_, 0);
lean_inc_ref(v_ws_1100_);
v_depIdxs_1101_ = lean_ctor_get(v_x_1098_, 1);
lean_inc_ref(v_depIdxs_1101_);
lean_dec_ref(v_x_1098_);
v___x_1102_ = lean_apply_4(v_h__1_1099_, v_ws_1100_, v_depIdxs_1101_, lean_box(0), lean_box(0));
return v___x_1102_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go_match__6_splitter(lean_object* v_ws_1103_, lean_object* v_motive_1104_, lean_object* v_x_1105_, lean_object* v_h__1_1106_){
_start:
{
lean_object* v_ws_1107_; lean_object* v_depIdxs_1108_; lean_object* v___x_1109_; 
v_ws_1107_ = lean_ctor_get(v_x_1105_, 0);
lean_inc_ref(v_ws_1107_);
v_depIdxs_1108_ = lean_ctor_get(v_x_1105_, 1);
lean_inc_ref(v_depIdxs_1108_);
lean_dec_ref(v_x_1105_);
v___x_1109_ = lean_apply_4(v_h__1_1106_, v_ws_1107_, v_depIdxs_1108_, lean_box(0), lean_box(0));
return v___x_1109_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go_match__6_splitter___boxed(lean_object* v_ws_1110_, lean_object* v_motive_1111_, lean_object* v_x_1112_, lean_object* v_h__1_1113_){
_start:
{
lean_object* v_res_1114_; 
v_res_1114_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go_match__6_splitter(v_ws_1110_, v_motive_1111_, v_x_1112_, v_h__1_1113_);
lean_dec_ref(v_ws_1110_);
return v_res_1114_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go_match__4_splitter___redArg(lean_object* v_h__1_1115_){
_start:
{
lean_object* v___x_1116_; 
v___x_1116_ = lean_apply_1(v_h__1_1115_, lean_box(0));
return v___x_1116_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go_match__4_splitter(lean_object* v_ws_1117_, lean_object* v_motive_1118_, lean_object* v_x_1119_, lean_object* v_h__1_1120_){
_start:
{
lean_object* v___x_1121_; 
v___x_1121_ = lean_apply_1(v_h__1_1120_, lean_box(0));
return v___x_1121_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go_match__4_splitter___boxed(lean_object* v_ws_1122_, lean_object* v_motive_1123_, lean_object* v_x_1124_, lean_object* v_h__1_1125_){
_start:
{
lean_object* v_res_1126_; 
v_res_1126_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go_match__4_splitter(v_ws_1122_, v_motive_1123_, v_x_1124_, v_h__1_1125_);
lean_dec_ref(v_ws_1122_);
return v_res_1126_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore___redArg(lean_object* v_inst_1128_, lean_object* v_inst_1129_, lean_object* v_inst_1130_, lean_object* v_ws_1131_, lean_object* v_resolve_1132_, lean_object* v_root_1133_, lean_object* v_next_1134_, lean_object* v_leanOpts_1135_, uint8_t v_reconfigure_1136_){
_start:
{
lean_object* v_toApplicative_1137_; lean_object* v_toFunctor_1138_; lean_object* v_map_1139_; lean_object* v___f_1140_; lean_object* v___x_1141_; lean_object* v___x_1142_; 
v_toApplicative_1137_ = lean_ctor_get(v_inst_1128_, 0);
v_toFunctor_1138_ = lean_ctor_get(v_toApplicative_1137_, 0);
v_map_1139_ = lean_ctor_get(v_toFunctor_1138_, 0);
lean_inc(v_map_1139_);
v___f_1140_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore___redArg___closed__0));
v___x_1141_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg(v_inst_1128_, v_inst_1129_, v_inst_1130_, v_resolve_1132_, v_leanOpts_1135_, v_reconfigure_1136_, v_ws_1131_, v_root_1133_, v_next_1134_);
v___x_1142_ = lean_apply_4(v_map_1139_, lean_box(0), lean_box(0), v___f_1140_, v___x_1141_);
return v___x_1142_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore___redArg___boxed(lean_object* v_inst_1143_, lean_object* v_inst_1144_, lean_object* v_inst_1145_, lean_object* v_ws_1146_, lean_object* v_resolve_1147_, lean_object* v_root_1148_, lean_object* v_next_1149_, lean_object* v_leanOpts_1150_, lean_object* v_reconfigure_1151_){
_start:
{
uint8_t v_reconfigure_boxed_1152_; lean_object* v_res_1153_; 
v_reconfigure_boxed_1152_ = lean_unbox(v_reconfigure_1151_);
v_res_1153_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore___redArg(v_inst_1143_, v_inst_1144_, v_inst_1145_, v_ws_1146_, v_resolve_1147_, v_root_1148_, v_next_1149_, v_leanOpts_1150_, v_reconfigure_boxed_1152_);
lean_dec(v_root_1148_);
return v_res_1153_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore(lean_object* v_m_1154_, lean_object* v_inst_1155_, lean_object* v_inst_1156_, lean_object* v_inst_1157_, lean_object* v_ws_1158_, lean_object* v_resolve_1159_, lean_object* v_root_1160_, lean_object* v_root__lt_1161_, lean_object* v_next_1162_, lean_object* v_next__lt_1163_, lean_object* v_leanOpts_1164_, uint8_t v_reconfigure_1165_){
_start:
{
lean_object* v_toApplicative_1166_; lean_object* v_toFunctor_1167_; lean_object* v_map_1168_; lean_object* v___f_1169_; lean_object* v___x_1170_; lean_object* v___x_1171_; 
v_toApplicative_1166_ = lean_ctor_get(v_inst_1155_, 0);
v_toFunctor_1167_ = lean_ctor_get(v_toApplicative_1166_, 0);
v_map_1168_ = lean_ctor_get(v_toFunctor_1167_, 0);
lean_inc(v_map_1168_);
v___f_1169_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore___redArg___closed__0));
v___x_1170_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg(v_inst_1155_, v_inst_1156_, v_inst_1157_, v_resolve_1159_, v_leanOpts_1164_, v_reconfigure_1165_, v_ws_1158_, v_root_1160_, v_next_1162_);
v___x_1171_ = lean_apply_4(v_map_1168_, lean_box(0), lean_box(0), v___f_1169_, v___x_1170_);
return v___x_1171_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore___boxed(lean_object* v_m_1172_, lean_object* v_inst_1173_, lean_object* v_inst_1174_, lean_object* v_inst_1175_, lean_object* v_ws_1176_, lean_object* v_resolve_1177_, lean_object* v_root_1178_, lean_object* v_root__lt_1179_, lean_object* v_next_1180_, lean_object* v_next__lt_1181_, lean_object* v_leanOpts_1182_, lean_object* v_reconfigure_1183_){
_start:
{
uint8_t v_reconfigure_boxed_1184_; lean_object* v_res_1185_; 
v_reconfigure_boxed_1184_ = lean_unbox(v_reconfigure_1183_);
v_res_1185_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore(v_m_1172_, v_inst_1173_, v_inst_1174_, v_inst_1175_, v_ws_1176_, v_resolve_1177_, v_root_1178_, v_root__lt_1179_, v_next_1180_, v_next__lt_1181_, v_leanOpts_1182_, v_reconfigure_boxed_1184_);
lean_dec(v_root_1178_);
return v_res_1185_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_UpdateT_run___redArg(lean_object* v_x_1186_, lean_object* v_init_1187_){
_start:
{
lean_object* v___x_1188_; 
v___x_1188_ = lean_apply_1(v_x_1186_, v_init_1187_);
return v___x_1188_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_UpdateT_run(lean_object* v_m_1189_, lean_object* v_00_u03b1_1190_, lean_object* v_x_1191_, lean_object* v_init_1192_){
_start:
{
lean_object* v___x_1193_; 
v___x_1193_ = lean_apply_1(v_x_1191_, v_init_1192_);
return v___x_1193_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__2(lean_object* v_as_1194_, size_t v_i_1195_, size_t v_stop_1196_, lean_object* v_b_1197_){
_start:
{
uint8_t v___x_1198_; 
v___x_1198_ = lean_usize_dec_eq(v_i_1195_, v_stop_1196_);
if (v___x_1198_ == 0)
{
lean_object* v___x_1199_; lean_object* v_name_1200_; lean_object* v___x_1201_; size_t v___x_1202_; size_t v___x_1203_; 
v___x_1199_ = lean_array_uget_borrowed(v_as_1194_, v_i_1195_);
v_name_1200_ = lean_ctor_get(v___x_1199_, 0);
lean_inc(v_name_1200_);
v___x_1201_ = l_Lean_NameSet_insert(v_b_1197_, v_name_1200_);
v___x_1202_ = ((size_t)1ULL);
v___x_1203_ = lean_usize_add(v_i_1195_, v___x_1202_);
v_i_1195_ = v___x_1203_;
v_b_1197_ = v___x_1201_;
goto _start;
}
else
{
return v_b_1197_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__2___boxed(lean_object* v_as_1205_, lean_object* v_i_1206_, lean_object* v_stop_1207_, lean_object* v_b_1208_){
_start:
{
size_t v_i_boxed_1209_; size_t v_stop_boxed_1210_; lean_object* v_res_1211_; 
v_i_boxed_1209_ = lean_unbox_usize(v_i_1206_);
lean_dec(v_i_1206_);
v_stop_boxed_1210_ = lean_unbox_usize(v_stop_1207_);
lean_dec(v_stop_1207_);
v_res_1211_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__2(v_as_1205_, v_i_boxed_1209_, v_stop_boxed_1210_, v_b_1208_);
lean_dec_ref(v_as_1205_);
return v_res_1211_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__0___redArg(lean_object* v_as_1212_, size_t v_sz_1213_, size_t v_i_1214_, lean_object* v_b_1215_, lean_object* v___y_1216_){
_start:
{
uint8_t v___x_1218_; 
v___x_1218_ = lean_usize_dec_lt(v_i_1214_, v_sz_1213_);
if (v___x_1218_ == 0)
{
lean_object* v___x_1219_; lean_object* v___x_1220_; 
v___x_1219_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1219_, 0, v_b_1215_);
lean_ctor_set(v___x_1219_, 1, v___y_1216_);
v___x_1220_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1220_, 0, v___x_1219_);
return v___x_1220_;
}
else
{
lean_object* v_a_1221_; lean_object* v_name_1222_; lean_object* v___x_1223_; size_t v___x_1224_; size_t v___x_1225_; 
v_a_1221_ = lean_array_uget_borrowed(v_as_1212_, v_i_1214_);
v_name_1222_ = lean_ctor_get(v_a_1221_, 0);
lean_inc(v_name_1222_);
v___x_1223_ = l_Lean_NameSet_insert(v_b_1215_, v_name_1222_);
v___x_1224_ = ((size_t)1ULL);
v___x_1225_ = lean_usize_add(v_i_1214_, v___x_1224_);
v_i_1214_ = v___x_1225_;
v_b_1215_ = v___x_1223_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__0___redArg___boxed(lean_object* v_as_1227_, lean_object* v_sz_1228_, lean_object* v_i_1229_, lean_object* v_b_1230_, lean_object* v___y_1231_, lean_object* v___y_1232_){
_start:
{
size_t v_sz_boxed_1233_; size_t v_i_boxed_1234_; lean_object* v_res_1235_; 
v_sz_boxed_1233_ = lean_unbox_usize(v_sz_1228_);
lean_dec(v_sz_1228_);
v_i_boxed_1234_ = lean_unbox_usize(v_i_1229_);
lean_dec(v_i_1229_);
v_res_1235_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__0___redArg(v_as_1227_, v_sz_boxed_1233_, v_i_boxed_1234_, v_b_1230_, v___y_1231_);
lean_dec_ref(v_as_1227_);
return v_res_1235_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__1(lean_object* v_fst_1238_, lean_object* v_init_1239_, lean_object* v_x_1240_, lean_object* v___y_1241_, lean_object* v___y_1242_){
_start:
{
if (lean_obj_tag(v_x_1240_) == 0)
{
lean_object* v_k_1244_; lean_object* v_l_1245_; lean_object* v_r_1246_; lean_object* v___x_1247_; lean_object* v___x_1248_; 
v_k_1244_ = lean_ctor_get(v_x_1240_, 1);
lean_inc(v_k_1244_);
v_l_1245_ = lean_ctor_get(v_x_1240_, 3);
lean_inc(v_l_1245_);
v_r_1246_ = lean_ctor_get(v_x_1240_, 4);
lean_inc(v_r_1246_);
lean_dec_ref_known(v_x_1240_, 5);
v___x_1247_ = lean_box(0);
v___x_1248_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__1(v_fst_1238_, v_init_1239_, v_l_1245_, v___y_1241_, v___y_1242_);
if (lean_obj_tag(v___x_1248_) == 0)
{
lean_object* v_a_1249_; lean_object* v___x_1251_; uint8_t v_isShared_1252_; uint8_t v_isSharedCheck_1267_; 
v_a_1249_ = lean_ctor_get(v___x_1248_, 0);
v_isSharedCheck_1267_ = !lean_is_exclusive(v___x_1248_);
if (v_isSharedCheck_1267_ == 0)
{
v___x_1251_ = v___x_1248_;
v_isShared_1252_ = v_isSharedCheck_1267_;
goto v_resetjp_1250_;
}
else
{
lean_inc(v_a_1249_);
lean_dec(v___x_1248_);
v___x_1251_ = lean_box(0);
v_isShared_1252_ = v_isSharedCheck_1267_;
goto v_resetjp_1250_;
}
v_resetjp_1250_:
{
lean_object* v_snd_1253_; uint8_t v___x_1254_; 
v_snd_1253_ = lean_ctor_get(v_a_1249_, 1);
lean_inc(v_snd_1253_);
lean_dec(v_a_1249_);
v___x_1254_ = l_Lean_NameSet_contains(v_fst_1238_, v_k_1244_);
if (v___x_1254_ == 0)
{
lean_object* v___x_1255_; lean_object* v___x_1256_; lean_object* v___x_1257_; lean_object* v___x_1258_; lean_object* v___x_1259_; uint8_t v___x_1260_; lean_object* v___x_1261_; lean_object* v___x_1262_; lean_object* v___x_1264_; 
lean_dec(v_snd_1253_);
lean_dec(v_r_1246_);
v___x_1255_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__1___closed__0));
v___x_1256_ = l_Lean_Name_toString(v_k_1244_, v___x_1254_);
v___x_1257_ = lean_string_append(v___x_1255_, v___x_1256_);
lean_dec_ref(v___x_1256_);
v___x_1258_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__1___closed__1));
v___x_1259_ = lean_string_append(v___x_1257_, v___x_1258_);
v___x_1260_ = 3;
v___x_1261_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1261_, 0, v___x_1259_);
lean_ctor_set_uint8(v___x_1261_, sizeof(void*)*1, v___x_1260_);
lean_inc_ref(v___y_1242_);
v___x_1262_ = lean_apply_2(v___y_1242_, v___x_1261_, lean_box(0));
if (v_isShared_1252_ == 0)
{
lean_ctor_set_tag(v___x_1251_, 1);
lean_ctor_set(v___x_1251_, 0, v___x_1247_);
v___x_1264_ = v___x_1251_;
goto v_reusejp_1263_;
}
else
{
lean_object* v_reuseFailAlloc_1265_; 
v_reuseFailAlloc_1265_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1265_, 0, v___x_1247_);
v___x_1264_ = v_reuseFailAlloc_1265_;
goto v_reusejp_1263_;
}
v_reusejp_1263_:
{
return v___x_1264_;
}
}
else
{
lean_del_object(v___x_1251_);
lean_dec(v_k_1244_);
v_init_1239_ = v___x_1247_;
v_x_1240_ = v_r_1246_;
v___y_1241_ = v_snd_1253_;
goto _start;
}
}
}
else
{
lean_dec(v_r_1246_);
lean_dec(v_k_1244_);
return v___x_1248_;
}
}
else
{
lean_object* v___x_1268_; lean_object* v___x_1269_; lean_object* v___x_1270_; 
v___x_1268_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1268_, 0, v_init_1239_);
v___x_1269_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1269_, 0, v___x_1268_);
lean_ctor_set(v___x_1269_, 1, v___y_1241_);
v___x_1270_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1270_, 0, v___x_1269_);
return v___x_1270_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__1___boxed(lean_object* v_fst_1271_, lean_object* v_init_1272_, lean_object* v_x_1273_, lean_object* v___y_1274_, lean_object* v___y_1275_, lean_object* v___y_1276_){
_start:
{
lean_object* v_res_1277_; 
v_res_1277_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__1(v_fst_1271_, v_init_1272_, v_x_1273_, v___y_1274_, v___y_1275_);
lean_dec_ref(v___y_1275_);
lean_dec(v_fst_1271_);
return v_res_1277_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_reuseManifest___lam__0(lean_object* v_toUpdate_1278_, lean_object* v___x_1279_, lean_object* v___x_1280_, lean_object* v_entries_1281_, lean_object* v___y_1282_, lean_object* v___y_1283_){
_start:
{
lean_object* v___y_1286_; 
if (lean_obj_tag(v_toUpdate_1278_) == 0)
{
lean_object* v_depConfigs_1328_; lean_object* v___x_1329_; lean_object* v___x_1330_; uint8_t v___x_1331_; 
v_depConfigs_1328_ = lean_ctor_get(v___x_1279_, 12);
v___x_1329_ = l_Lean_NameSet_empty;
v___x_1330_ = lean_array_get_size(v_depConfigs_1328_);
v___x_1331_ = lean_nat_dec_lt(v___x_1280_, v___x_1330_);
if (v___x_1331_ == 0)
{
v___y_1286_ = v___x_1329_;
goto v___jp_1285_;
}
else
{
uint8_t v___x_1332_; 
v___x_1332_ = lean_nat_dec_le(v___x_1330_, v___x_1330_);
if (v___x_1332_ == 0)
{
if (v___x_1331_ == 0)
{
v___y_1286_ = v___x_1329_;
goto v___jp_1285_;
}
else
{
size_t v___x_1333_; size_t v___x_1334_; lean_object* v___x_1335_; 
v___x_1333_ = ((size_t)0ULL);
v___x_1334_ = lean_usize_of_nat(v___x_1330_);
v___x_1335_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__2(v_depConfigs_1328_, v___x_1333_, v___x_1334_, v___x_1329_);
v___y_1286_ = v___x_1335_;
goto v___jp_1285_;
}
}
else
{
size_t v___x_1336_; size_t v___x_1337_; lean_object* v___x_1338_; 
v___x_1336_ = ((size_t)0ULL);
v___x_1337_ = lean_usize_of_nat(v___x_1330_);
v___x_1338_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__2(v_depConfigs_1328_, v___x_1336_, v___x_1337_, v___x_1329_);
v___y_1286_ = v___x_1338_;
goto v___jp_1285_;
}
}
}
else
{
lean_object* v___x_1339_; lean_object* v___x_1340_; lean_object* v___x_1341_; 
v___x_1339_ = lean_box(0);
v___x_1340_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1340_, 0, v___x_1339_);
lean_ctor_set(v___x_1340_, 1, v___y_1282_);
v___x_1341_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1341_, 0, v___x_1340_);
return v___x_1341_;
}
v___jp_1285_:
{
size_t v_sz_1287_; size_t v___x_1288_; lean_object* v___x_1289_; 
v_sz_1287_ = lean_array_size(v_entries_1281_);
v___x_1288_ = ((size_t)0ULL);
v___x_1289_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__0___redArg(v_entries_1281_, v_sz_1287_, v___x_1288_, v___y_1286_, v___y_1282_);
if (lean_obj_tag(v___x_1289_) == 0)
{
lean_object* v_a_1290_; lean_object* v_fst_1291_; lean_object* v_snd_1292_; lean_object* v___x_1293_; lean_object* v___x_1294_; 
v_a_1290_ = lean_ctor_get(v___x_1289_, 0);
lean_inc(v_a_1290_);
lean_dec_ref_known(v___x_1289_, 1);
v_fst_1291_ = lean_ctor_get(v_a_1290_, 0);
lean_inc(v_fst_1291_);
v_snd_1292_ = lean_ctor_get(v_a_1290_, 1);
lean_inc(v_snd_1292_);
lean_dec(v_a_1290_);
v___x_1293_ = lean_box(0);
v___x_1294_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__1(v_fst_1291_, v___x_1293_, v_toUpdate_1278_, v_snd_1292_, v___y_1283_);
lean_dec(v_fst_1291_);
if (lean_obj_tag(v___x_1294_) == 0)
{
lean_object* v_a_1295_; lean_object* v___x_1297_; uint8_t v_isShared_1298_; uint8_t v_isSharedCheck_1311_; 
v_a_1295_ = lean_ctor_get(v___x_1294_, 0);
v_isSharedCheck_1311_ = !lean_is_exclusive(v___x_1294_);
if (v_isSharedCheck_1311_ == 0)
{
v___x_1297_ = v___x_1294_;
v_isShared_1298_ = v_isSharedCheck_1311_;
goto v_resetjp_1296_;
}
else
{
lean_inc(v_a_1295_);
lean_dec(v___x_1294_);
v___x_1297_ = lean_box(0);
v_isShared_1298_ = v_isSharedCheck_1311_;
goto v_resetjp_1296_;
}
v_resetjp_1296_:
{
lean_object* v_snd_1299_; lean_object* v___x_1301_; uint8_t v_isShared_1302_; uint8_t v_isSharedCheck_1309_; 
v_snd_1299_ = lean_ctor_get(v_a_1295_, 1);
v_isSharedCheck_1309_ = !lean_is_exclusive(v_a_1295_);
if (v_isSharedCheck_1309_ == 0)
{
lean_object* v_unused_1310_; 
v_unused_1310_ = lean_ctor_get(v_a_1295_, 0);
lean_dec(v_unused_1310_);
v___x_1301_ = v_a_1295_;
v_isShared_1302_ = v_isSharedCheck_1309_;
goto v_resetjp_1300_;
}
else
{
lean_inc(v_snd_1299_);
lean_dec(v_a_1295_);
v___x_1301_ = lean_box(0);
v_isShared_1302_ = v_isSharedCheck_1309_;
goto v_resetjp_1300_;
}
v_resetjp_1300_:
{
lean_object* v___x_1304_; 
if (v_isShared_1302_ == 0)
{
lean_ctor_set(v___x_1301_, 0, v___x_1293_);
v___x_1304_ = v___x_1301_;
goto v_reusejp_1303_;
}
else
{
lean_object* v_reuseFailAlloc_1308_; 
v_reuseFailAlloc_1308_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1308_, 0, v___x_1293_);
lean_ctor_set(v_reuseFailAlloc_1308_, 1, v_snd_1299_);
v___x_1304_ = v_reuseFailAlloc_1308_;
goto v_reusejp_1303_;
}
v_reusejp_1303_:
{
lean_object* v___x_1306_; 
if (v_isShared_1298_ == 0)
{
lean_ctor_set(v___x_1297_, 0, v___x_1304_);
v___x_1306_ = v___x_1297_;
goto v_reusejp_1305_;
}
else
{
lean_object* v_reuseFailAlloc_1307_; 
v_reuseFailAlloc_1307_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1307_, 0, v___x_1304_);
v___x_1306_ = v_reuseFailAlloc_1307_;
goto v_reusejp_1305_;
}
v_reusejp_1305_:
{
return v___x_1306_;
}
}
}
}
}
else
{
lean_object* v_a_1312_; lean_object* v___x_1314_; uint8_t v_isShared_1315_; uint8_t v_isSharedCheck_1319_; 
v_a_1312_ = lean_ctor_get(v___x_1294_, 0);
v_isSharedCheck_1319_ = !lean_is_exclusive(v___x_1294_);
if (v_isSharedCheck_1319_ == 0)
{
v___x_1314_ = v___x_1294_;
v_isShared_1315_ = v_isSharedCheck_1319_;
goto v_resetjp_1313_;
}
else
{
lean_inc(v_a_1312_);
lean_dec(v___x_1294_);
v___x_1314_ = lean_box(0);
v_isShared_1315_ = v_isSharedCheck_1319_;
goto v_resetjp_1313_;
}
v_resetjp_1313_:
{
lean_object* v___x_1317_; 
if (v_isShared_1315_ == 0)
{
v___x_1317_ = v___x_1314_;
goto v_reusejp_1316_;
}
else
{
lean_object* v_reuseFailAlloc_1318_; 
v_reuseFailAlloc_1318_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1318_, 0, v_a_1312_);
v___x_1317_ = v_reuseFailAlloc_1318_;
goto v_reusejp_1316_;
}
v_reusejp_1316_:
{
return v___x_1317_;
}
}
}
}
else
{
lean_object* v_a_1320_; lean_object* v___x_1322_; uint8_t v_isShared_1323_; uint8_t v_isSharedCheck_1327_; 
lean_dec(v_toUpdate_1278_);
v_a_1320_ = lean_ctor_get(v___x_1289_, 0);
v_isSharedCheck_1327_ = !lean_is_exclusive(v___x_1289_);
if (v_isSharedCheck_1327_ == 0)
{
v___x_1322_ = v___x_1289_;
v_isShared_1323_ = v_isSharedCheck_1327_;
goto v_resetjp_1321_;
}
else
{
lean_inc(v_a_1320_);
lean_dec(v___x_1289_);
v___x_1322_ = lean_box(0);
v_isShared_1323_ = v_isSharedCheck_1327_;
goto v_resetjp_1321_;
}
v_resetjp_1321_:
{
lean_object* v___x_1325_; 
if (v_isShared_1323_ == 0)
{
v___x_1325_ = v___x_1322_;
goto v_reusejp_1324_;
}
else
{
lean_object* v_reuseFailAlloc_1326_; 
v_reuseFailAlloc_1326_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1326_, 0, v_a_1320_);
v___x_1325_ = v_reuseFailAlloc_1326_;
goto v_reusejp_1324_;
}
v_reusejp_1324_:
{
return v___x_1325_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_reuseManifest___lam__0___boxed(lean_object* v_toUpdate_1342_, lean_object* v___x_1343_, lean_object* v___x_1344_, lean_object* v_entries_1345_, lean_object* v___y_1346_, lean_object* v___y_1347_, lean_object* v___y_1348_){
_start:
{
lean_object* v_res_1349_; 
v_res_1349_ = l___private_Lake_Load_Resolve_0__Lake_reuseManifest___lam__0(v_toUpdate_1342_, v___x_1343_, v___x_1344_, v_entries_1345_, v___y_1346_, v___y_1347_);
lean_dec_ref(v___y_1347_);
lean_dec_ref(v_entries_1345_);
lean_dec(v___x_1344_);
lean_dec_ref(v___x_1343_);
return v_res_1349_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__3(lean_object* v_as_1350_, size_t v_i_1351_, size_t v_stop_1352_, lean_object* v_b_1353_, lean_object* v___y_1354_){
_start:
{
uint8_t v___x_1356_; 
v___x_1356_ = lean_usize_dec_eq(v_i_1351_, v_stop_1352_);
if (v___x_1356_ == 0)
{
lean_object* v___x_1357_; lean_object* v___x_1358_; size_t v___x_1359_; size_t v___x_1360_; 
v___x_1357_ = lean_array_uget_borrowed(v_as_1350_, v_i_1351_);
lean_inc_ref(v___y_1354_);
lean_inc(v___x_1357_);
v___x_1358_ = lean_apply_2(v___y_1354_, v___x_1357_, lean_box(0));
v___x_1359_ = ((size_t)1ULL);
v___x_1360_ = lean_usize_add(v_i_1351_, v___x_1359_);
v_i_1351_ = v___x_1360_;
v_b_1353_ = v___x_1358_;
goto _start;
}
else
{
lean_object* v___x_1362_; 
v___x_1362_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1362_, 0, v_b_1353_);
return v___x_1362_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__3___boxed(lean_object* v_as_1363_, lean_object* v_i_1364_, lean_object* v_stop_1365_, lean_object* v_b_1366_, lean_object* v___y_1367_, lean_object* v___y_1368_){
_start:
{
size_t v_i_boxed_1369_; size_t v_stop_boxed_1370_; lean_object* v_res_1371_; 
v_i_boxed_1369_ = lean_unbox_usize(v_i_1364_);
lean_dec(v_i_1364_);
v_stop_boxed_1370_ = lean_unbox_usize(v_stop_1365_);
lean_dec(v_stop_1365_);
v_res_1371_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__3(v_as_1363_, v_i_boxed_1369_, v_stop_boxed_1370_, v_b_1366_, v___y_1367_);
lean_dec_ref(v___y_1367_);
lean_dec_ref(v_as_1363_);
return v_res_1371_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__4___redArg(lean_object* v_toUpdate_1372_, lean_object* v_as_1373_, size_t v_i_1374_, size_t v_stop_1375_, lean_object* v_b_1376_, lean_object* v___y_1377_){
_start:
{
lean_object* v_fst_1380_; lean_object* v_snd_1381_; uint8_t v___x_1387_; 
v___x_1387_ = lean_usize_dec_eq(v_i_1374_, v_stop_1375_);
if (v___x_1387_ == 0)
{
lean_object* v___x_1388_; uint8_t v_inherited_1389_; 
v___x_1388_ = lean_array_uget_borrowed(v_as_1373_, v_i_1374_);
v_inherited_1389_ = lean_ctor_get_uint8(v___x_1388_, sizeof(void*)*5);
if (v_inherited_1389_ == 0)
{
lean_object* v_name_1390_; uint8_t v___x_1391_; 
v_name_1390_ = lean_ctor_get(v___x_1388_, 0);
v___x_1391_ = l_Lean_NameSet_contains(v_toUpdate_1372_, v_name_1390_);
if (v___x_1391_ == 0)
{
lean_object* v___x_1392_; lean_object* v___x_1393_; 
v___x_1392_ = lean_box(0);
lean_inc(v___x_1388_);
lean_inc(v_name_1390_);
v___x_1393_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_name_1390_, v___x_1388_, v___y_1377_);
v_fst_1380_ = v___x_1392_;
v_snd_1381_ = v___x_1393_;
goto v___jp_1379_;
}
else
{
goto v___jp_1385_;
}
}
else
{
goto v___jp_1385_;
}
}
else
{
lean_object* v___x_1394_; lean_object* v___x_1395_; 
v___x_1394_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1394_, 0, v_b_1376_);
lean_ctor_set(v___x_1394_, 1, v___y_1377_);
v___x_1395_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1395_, 0, v___x_1394_);
return v___x_1395_;
}
v___jp_1379_:
{
size_t v___x_1382_; size_t v___x_1383_; 
v___x_1382_ = ((size_t)1ULL);
v___x_1383_ = lean_usize_add(v_i_1374_, v___x_1382_);
v_i_1374_ = v___x_1383_;
v_b_1376_ = v_fst_1380_;
v___y_1377_ = v_snd_1381_;
goto _start;
}
v___jp_1385_:
{
lean_object* v___x_1386_; 
v___x_1386_ = lean_box(0);
v_fst_1380_ = v___x_1386_;
v_snd_1381_ = v___y_1377_;
goto v___jp_1379_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__4___redArg___boxed(lean_object* v_toUpdate_1396_, lean_object* v_as_1397_, lean_object* v_i_1398_, lean_object* v_stop_1399_, lean_object* v_b_1400_, lean_object* v___y_1401_, lean_object* v___y_1402_){
_start:
{
size_t v_i_boxed_1403_; size_t v_stop_boxed_1404_; lean_object* v_res_1405_; 
v_i_boxed_1403_ = lean_unbox_usize(v_i_1398_);
lean_dec(v_i_1398_);
v_stop_boxed_1404_ = lean_unbox_usize(v_stop_1399_);
lean_dec(v_stop_1399_);
v_res_1405_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__4___redArg(v_toUpdate_1396_, v_as_1397_, v_i_boxed_1403_, v_stop_boxed_1404_, v_b_1400_, v___y_1401_);
lean_dec_ref(v_as_1397_);
lean_dec(v_toUpdate_1396_);
return v_res_1405_;
}
}
static lean_object* _init_l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__5(void){
_start:
{
lean_object* v___x_1412_; lean_object* v___x_1413_; 
v___x_1412_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__4));
v___x_1413_ = lean_array_get_size(v___x_1412_);
return v___x_1413_;
}
}
static uint8_t _init_l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__6(void){
_start:
{
lean_object* v___x_1414_; lean_object* v___x_1415_; uint8_t v___x_1416_; 
v___x_1414_ = lean_obj_once(&l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__5, &l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__5_once, _init_l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__5);
v___x_1415_ = lean_unsigned_to_nat(0u);
v___x_1416_ = lean_nat_dec_lt(v___x_1415_, v___x_1414_);
return v___x_1416_;
}
}
static size_t _init_l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__7(void){
_start:
{
lean_object* v___x_1417_; size_t v___x_1418_; 
v___x_1417_ = lean_obj_once(&l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__5, &l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__5_once, _init_l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__5);
v___x_1418_ = lean_usize_of_nat(v___x_1417_);
return v___x_1418_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_reuseManifest(lean_object* v_ws_1421_, lean_object* v_toUpdate_1422_, lean_object* v_a_1423_, lean_object* v_a_1424_){
_start:
{
lean_object* v___y_1427_; lean_object* v___y_1432_; lean_object* v_fst_1433_; lean_object* v_snd_1434_; lean_object* v_packages_1453_; lean_object* v___x_1454_; lean_object* v___y_1456_; lean_object* v___y_1457_; lean_object* v___y_1458_; lean_object* v_val_1459_; lean_object* v___y_1475_; lean_object* v___y_1476_; lean_object* v___y_1477_; lean_object* v___y_1478_; lean_object* v___x_1495_; lean_object* v_baseName_1496_; lean_object* v_dir_1497_; lean_object* v_config_1498_; lean_object* v_relManifestFile_1499_; lean_object* v___y_1501_; lean_object* v___y_1502_; lean_object* v___y_1503_; uint8_t v_fst_1504_; lean_object* v_snd_1505_; lean_object* v_packagesDir_x3f_1526_; lean_object* v___y_1527_; lean_object* v___y_1528_; lean_object* v___y_1550_; lean_object* v___y_1551_; uint8_t v___x_1555_; lean_object* v_rootName_1556_; lean_object* v_fst_1558_; lean_object* v_snd_1559_; lean_object* v___x_1625_; lean_object* v___x_1626_; lean_object* v_val_1628_; lean_object* v___x_1642_; 
v_packages_1453_ = lean_ctor_get(v_ws_1421_, 4);
v___x_1454_ = lean_unsigned_to_nat(0u);
v___x_1495_ = lean_array_fget_borrowed(v_packages_1453_, v___x_1454_);
v_baseName_1496_ = lean_ctor_get(v___x_1495_, 1);
v_dir_1497_ = lean_ctor_get(v___x_1495_, 4);
v_config_1498_ = lean_ctor_get(v___x_1495_, 6);
v_relManifestFile_1499_ = lean_ctor_get(v___x_1495_, 9);
v___x_1555_ = 0;
lean_inc(v_baseName_1496_);
v_rootName_1556_ = l_Lean_Name_toString(v_baseName_1496_, v___x_1555_);
lean_inc_ref(v_relManifestFile_1499_);
lean_inc_ref(v_dir_1497_);
v___x_1625_ = l_Lake_joinRelative(v_dir_1497_, v_relManifestFile_1499_);
v___x_1626_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__4));
v___x_1642_ = l_Lake_Manifest_load(v___x_1625_);
if (lean_obj_tag(v___x_1642_) == 0)
{
lean_object* v_a_1643_; lean_object* v___x_1645_; uint8_t v_isShared_1646_; uint8_t v_isSharedCheck_1650_; 
v_a_1643_ = lean_ctor_get(v___x_1642_, 0);
v_isSharedCheck_1650_ = !lean_is_exclusive(v___x_1642_);
if (v_isSharedCheck_1650_ == 0)
{
v___x_1645_ = v___x_1642_;
v_isShared_1646_ = v_isSharedCheck_1650_;
goto v_resetjp_1644_;
}
else
{
lean_inc(v_a_1643_);
lean_dec(v___x_1642_);
v___x_1645_ = lean_box(0);
v_isShared_1646_ = v_isSharedCheck_1650_;
goto v_resetjp_1644_;
}
v_resetjp_1644_:
{
lean_object* v___x_1648_; 
if (v_isShared_1646_ == 0)
{
lean_ctor_set_tag(v___x_1645_, 1);
v___x_1648_ = v___x_1645_;
goto v_reusejp_1647_;
}
else
{
lean_object* v_reuseFailAlloc_1649_; 
v_reuseFailAlloc_1649_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1649_, 0, v_a_1643_);
v___x_1648_ = v_reuseFailAlloc_1649_;
goto v_reusejp_1647_;
}
v_reusejp_1647_:
{
v_val_1628_ = v___x_1648_;
goto v___jp_1627_;
}
}
}
else
{
lean_object* v_a_1651_; lean_object* v___x_1653_; uint8_t v_isShared_1654_; uint8_t v_isSharedCheck_1658_; 
v_a_1651_ = lean_ctor_get(v___x_1642_, 0);
v_isSharedCheck_1658_ = !lean_is_exclusive(v___x_1642_);
if (v_isSharedCheck_1658_ == 0)
{
v___x_1653_ = v___x_1642_;
v_isShared_1654_ = v_isSharedCheck_1658_;
goto v_resetjp_1652_;
}
else
{
lean_inc(v_a_1651_);
lean_dec(v___x_1642_);
v___x_1653_ = lean_box(0);
v_isShared_1654_ = v_isSharedCheck_1658_;
goto v_resetjp_1652_;
}
v_resetjp_1652_:
{
lean_object* v___x_1656_; 
if (v_isShared_1654_ == 0)
{
lean_ctor_set_tag(v___x_1653_, 0);
v___x_1656_ = v___x_1653_;
goto v_reusejp_1655_;
}
else
{
lean_object* v_reuseFailAlloc_1657_; 
v_reuseFailAlloc_1657_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1657_, 0, v_a_1651_);
v___x_1656_ = v_reuseFailAlloc_1657_;
goto v_reusejp_1655_;
}
v_reusejp_1655_:
{
v_val_1628_ = v___x_1656_;
goto v___jp_1627_;
}
}
}
v___jp_1426_:
{
lean_object* v___x_1428_; lean_object* v___x_1429_; lean_object* v___x_1430_; 
v___x_1428_ = lean_box(0);
v___x_1429_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1429_, 0, v___x_1428_);
lean_ctor_set(v___x_1429_, 1, v___y_1427_);
v___x_1430_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1430_, 0, v___x_1429_);
return v___x_1430_;
}
v___jp_1431_:
{
if (lean_obj_tag(v_fst_1433_) == 0)
{
lean_object* v_a_1435_; lean_object* v___x_1437_; uint8_t v_isShared_1438_; uint8_t v_isSharedCheck_1449_; 
lean_dec(v_snd_1434_);
v_a_1435_ = lean_ctor_get(v_fst_1433_, 0);
v_isSharedCheck_1449_ = !lean_is_exclusive(v_fst_1433_);
if (v_isSharedCheck_1449_ == 0)
{
v___x_1437_ = v_fst_1433_;
v_isShared_1438_ = v_isSharedCheck_1449_;
goto v_resetjp_1436_;
}
else
{
lean_inc(v_a_1435_);
lean_dec(v_fst_1433_);
v___x_1437_ = lean_box(0);
v_isShared_1438_ = v_isSharedCheck_1449_;
goto v_resetjp_1436_;
}
v_resetjp_1436_:
{
lean_object* v___x_1439_; lean_object* v___x_1440_; lean_object* v___x_1441_; uint8_t v___x_1442_; lean_object* v___x_1443_; lean_object* v___x_1444_; lean_object* v___x_1445_; lean_object* v___x_1447_; 
v___x_1439_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__0));
v___x_1440_ = lean_io_error_to_string(v_a_1435_);
v___x_1441_ = lean_string_append(v___x_1439_, v___x_1440_);
lean_dec_ref(v___x_1440_);
v___x_1442_ = 3;
v___x_1443_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1443_, 0, v___x_1441_);
lean_ctor_set_uint8(v___x_1443_, sizeof(void*)*1, v___x_1442_);
lean_inc_ref(v___y_1432_);
v___x_1444_ = lean_apply_2(v___y_1432_, v___x_1443_, lean_box(0));
v___x_1445_ = lean_box(0);
if (v_isShared_1438_ == 0)
{
lean_ctor_set_tag(v___x_1437_, 1);
lean_ctor_set(v___x_1437_, 0, v___x_1445_);
v___x_1447_ = v___x_1437_;
goto v_reusejp_1446_;
}
else
{
lean_object* v_reuseFailAlloc_1448_; 
v_reuseFailAlloc_1448_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1448_, 0, v___x_1445_);
v___x_1447_ = v_reuseFailAlloc_1448_;
goto v_reusejp_1446_;
}
v_reusejp_1446_:
{
return v___x_1447_;
}
}
}
else
{
lean_object* v___x_1450_; lean_object* v___x_1451_; lean_object* v___x_1452_; 
lean_dec_ref(v_fst_1433_);
v___x_1450_ = lean_box(0);
v___x_1451_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1451_, 0, v___x_1450_);
lean_ctor_set(v___x_1451_, 1, v_snd_1434_);
v___x_1452_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1452_, 0, v___x_1451_);
return v___x_1452_;
}
}
v___jp_1455_:
{
lean_object* v___x_1460_; uint8_t v___x_1461_; 
v___x_1460_ = lean_array_get_size(v___y_1456_);
v___x_1461_ = lean_nat_dec_lt(v___x_1454_, v___x_1460_);
if (v___x_1461_ == 0)
{
v___y_1432_ = v___y_1457_;
v_fst_1433_ = v_val_1459_;
v_snd_1434_ = v___y_1458_;
goto v___jp_1431_;
}
else
{
lean_object* v___x_1462_; size_t v___x_1463_; size_t v___x_1464_; lean_object* v___x_1465_; 
v___x_1462_ = lean_box(0);
v___x_1463_ = ((size_t)0ULL);
v___x_1464_ = lean_usize_of_nat(v___x_1460_);
v___x_1465_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__3(v___y_1456_, v___x_1463_, v___x_1464_, v___x_1462_, v___y_1457_);
if (lean_obj_tag(v___x_1465_) == 0)
{
lean_dec_ref_known(v___x_1465_, 1);
v___y_1432_ = v___y_1457_;
v_fst_1433_ = v_val_1459_;
v_snd_1434_ = v___y_1458_;
goto v___jp_1431_;
}
else
{
lean_object* v_a_1466_; lean_object* v___x_1468_; uint8_t v_isShared_1469_; uint8_t v_isSharedCheck_1473_; 
lean_dec_ref(v_val_1459_);
lean_dec(v___y_1458_);
v_a_1466_ = lean_ctor_get(v___x_1465_, 0);
v_isSharedCheck_1473_ = !lean_is_exclusive(v___x_1465_);
if (v_isSharedCheck_1473_ == 0)
{
v___x_1468_ = v___x_1465_;
v_isShared_1469_ = v_isSharedCheck_1473_;
goto v_resetjp_1467_;
}
else
{
lean_inc(v_a_1466_);
lean_dec(v___x_1465_);
v___x_1468_ = lean_box(0);
v_isShared_1469_ = v_isSharedCheck_1473_;
goto v_resetjp_1467_;
}
v_resetjp_1467_:
{
lean_object* v___x_1471_; 
if (v_isShared_1469_ == 0)
{
v___x_1471_ = v___x_1468_;
goto v_reusejp_1470_;
}
else
{
lean_object* v_reuseFailAlloc_1472_; 
v_reuseFailAlloc_1472_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1472_, 0, v_a_1466_);
v___x_1471_ = v_reuseFailAlloc_1472_;
goto v_reusejp_1470_;
}
v_reusejp_1470_:
{
return v___x_1471_;
}
}
}
}
}
v___jp_1474_:
{
if (lean_obj_tag(v___y_1478_) == 0)
{
lean_object* v_a_1479_; lean_object* v___x_1481_; uint8_t v_isShared_1482_; uint8_t v_isSharedCheck_1486_; 
v_a_1479_ = lean_ctor_get(v___y_1478_, 0);
v_isSharedCheck_1486_ = !lean_is_exclusive(v___y_1478_);
if (v_isSharedCheck_1486_ == 0)
{
v___x_1481_ = v___y_1478_;
v_isShared_1482_ = v_isSharedCheck_1486_;
goto v_resetjp_1480_;
}
else
{
lean_inc(v_a_1479_);
lean_dec(v___y_1478_);
v___x_1481_ = lean_box(0);
v_isShared_1482_ = v_isSharedCheck_1486_;
goto v_resetjp_1480_;
}
v_resetjp_1480_:
{
lean_object* v___x_1484_; 
if (v_isShared_1482_ == 0)
{
lean_ctor_set_tag(v___x_1481_, 1);
v___x_1484_ = v___x_1481_;
goto v_reusejp_1483_;
}
else
{
lean_object* v_reuseFailAlloc_1485_; 
v_reuseFailAlloc_1485_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1485_, 0, v_a_1479_);
v___x_1484_ = v_reuseFailAlloc_1485_;
goto v_reusejp_1483_;
}
v_reusejp_1483_:
{
v___y_1456_ = v___y_1475_;
v___y_1457_ = v___y_1476_;
v___y_1458_ = v___y_1477_;
v_val_1459_ = v___x_1484_;
goto v___jp_1455_;
}
}
}
else
{
lean_object* v_a_1487_; lean_object* v___x_1489_; uint8_t v_isShared_1490_; uint8_t v_isSharedCheck_1494_; 
v_a_1487_ = lean_ctor_get(v___y_1478_, 0);
v_isSharedCheck_1494_ = !lean_is_exclusive(v___y_1478_);
if (v_isSharedCheck_1494_ == 0)
{
v___x_1489_ = v___y_1478_;
v_isShared_1490_ = v_isSharedCheck_1494_;
goto v_resetjp_1488_;
}
else
{
lean_inc(v_a_1487_);
lean_dec(v___y_1478_);
v___x_1489_ = lean_box(0);
v_isShared_1490_ = v_isSharedCheck_1494_;
goto v_resetjp_1488_;
}
v_resetjp_1488_:
{
lean_object* v___x_1492_; 
if (v_isShared_1490_ == 0)
{
lean_ctor_set_tag(v___x_1489_, 0);
v___x_1492_ = v___x_1489_;
goto v_reusejp_1491_;
}
else
{
lean_object* v_reuseFailAlloc_1493_; 
v_reuseFailAlloc_1493_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1493_, 0, v_a_1487_);
v___x_1492_ = v_reuseFailAlloc_1493_;
goto v_reusejp_1491_;
}
v_reusejp_1491_:
{
v___y_1456_ = v___y_1475_;
v___y_1457_ = v___y_1476_;
v___y_1458_ = v___y_1477_;
v_val_1459_ = v___x_1492_;
goto v___jp_1455_;
}
}
}
}
v___jp_1500_:
{
lean_object* v_toWorkspaceConfig_1506_; lean_object* v___x_1507_; lean_object* v___x_1508_; lean_object* v___x_1509_; uint8_t v___x_1510_; 
v_toWorkspaceConfig_1506_ = lean_ctor_get(v_config_1498_, 0);
v___x_1507_ = l_System_FilePath_normalize(v___y_1501_);
lean_inc_ref(v_toWorkspaceConfig_1506_);
v___x_1508_ = l_System_FilePath_normalize(v_toWorkspaceConfig_1506_);
lean_inc_ref(v___x_1508_);
v___x_1509_ = l_System_FilePath_normalize(v___x_1508_);
v___x_1510_ = lean_string_dec_eq(v___x_1507_, v___x_1509_);
lean_dec_ref(v___x_1509_);
lean_dec_ref(v___x_1507_);
if (v___x_1510_ == 0)
{
if (v_fst_1504_ == 0)
{
lean_dec_ref(v___x_1508_);
lean_dec_ref(v___y_1503_);
v___y_1427_ = v_snd_1505_;
goto v___jp_1426_;
}
else
{
lean_object* v___x_1511_; lean_object* v___x_1512_; lean_object* v___x_1513_; lean_object* v___x_1514_; lean_object* v___x_1515_; lean_object* v___x_1516_; lean_object* v___x_1517_; lean_object* v___x_1518_; uint8_t v___x_1519_; lean_object* v___x_1520_; lean_object* v___x_1521_; lean_object* v___x_1522_; lean_object* v___x_1523_; 
v___x_1511_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__1));
v___x_1512_ = lean_string_append(v___x_1511_, v___y_1503_);
v___x_1513_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__2));
v___x_1514_ = lean_string_append(v___x_1512_, v___x_1513_);
lean_inc_ref(v_dir_1497_);
v___x_1515_ = l_Lake_joinRelative(v_dir_1497_, v___x_1508_);
v___x_1516_ = lean_string_append(v___x_1514_, v___x_1515_);
v___x_1517_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__3));
v___x_1518_ = lean_string_append(v___x_1516_, v___x_1517_);
v___x_1519_ = 1;
v___x_1520_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1520_, 0, v___x_1518_);
lean_ctor_set_uint8(v___x_1520_, sizeof(void*)*1, v___x_1519_);
lean_inc_ref(v___y_1502_);
v___x_1521_ = lean_apply_2(v___y_1502_, v___x_1520_, lean_box(0));
v___x_1522_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__4));
lean_inc_ref(v___x_1515_);
v___x_1523_ = l_Lake_createParentDirs(v___x_1515_);
if (lean_obj_tag(v___x_1523_) == 0)
{
lean_object* v___x_1524_; 
lean_dec_ref_known(v___x_1523_, 1);
v___x_1524_ = lean_io_rename(v___y_1503_, v___x_1515_);
lean_dec_ref(v___x_1515_);
lean_dec_ref(v___y_1503_);
v___y_1475_ = v___x_1522_;
v___y_1476_ = v___y_1502_;
v___y_1477_ = v_snd_1505_;
v___y_1478_ = v___x_1524_;
goto v___jp_1474_;
}
else
{
lean_dec_ref(v___x_1515_);
lean_dec_ref(v___y_1503_);
v___y_1475_ = v___x_1522_;
v___y_1476_ = v___y_1502_;
v___y_1477_ = v_snd_1505_;
v___y_1478_ = v___x_1523_;
goto v___jp_1474_;
}
}
}
else
{
lean_dec_ref(v___x_1508_);
lean_dec_ref(v___y_1503_);
v___y_1427_ = v_snd_1505_;
goto v___jp_1426_;
}
}
v___jp_1525_:
{
if (lean_obj_tag(v_packagesDir_x3f_1526_) == 1)
{
lean_object* v_val_1529_; lean_object* v___x_1530_; lean_object* v___x_1531_; uint8_t v___x_1532_; uint8_t v___x_1533_; 
v_val_1529_ = lean_ctor_get(v_packagesDir_x3f_1526_, 0);
lean_inc_n(v_val_1529_, 2);
lean_dec_ref_known(v_packagesDir_x3f_1526_, 1);
lean_inc_ref(v_dir_1497_);
v___x_1530_ = l_Lake_joinRelative(v_dir_1497_, v_val_1529_);
v___x_1531_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__4));
v___x_1532_ = l_System_FilePath_pathExists(v___x_1530_);
v___x_1533_ = lean_uint8_once(&l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__6, &l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__6_once, _init_l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__6);
if (v___x_1533_ == 0)
{
v___y_1501_ = v_val_1529_;
v___y_1502_ = v___y_1528_;
v___y_1503_ = v___x_1530_;
v_fst_1504_ = v___x_1532_;
v_snd_1505_ = v___y_1527_;
goto v___jp_1500_;
}
else
{
lean_object* v___x_1534_; size_t v___x_1535_; size_t v___x_1536_; lean_object* v___x_1537_; 
v___x_1534_ = lean_box(0);
v___x_1535_ = ((size_t)0ULL);
v___x_1536_ = lean_usize_once(&l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__7, &l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__7_once, _init_l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__7);
v___x_1537_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__3(v___x_1531_, v___x_1535_, v___x_1536_, v___x_1534_, v___y_1528_);
if (lean_obj_tag(v___x_1537_) == 0)
{
lean_dec_ref_known(v___x_1537_, 1);
v___y_1501_ = v_val_1529_;
v___y_1502_ = v___y_1528_;
v___y_1503_ = v___x_1530_;
v_fst_1504_ = v___x_1532_;
v_snd_1505_ = v___y_1527_;
goto v___jp_1500_;
}
else
{
lean_object* v_a_1538_; lean_object* v___x_1540_; uint8_t v_isShared_1541_; uint8_t v_isSharedCheck_1545_; 
lean_dec_ref(v___x_1530_);
lean_dec(v_val_1529_);
lean_dec(v___y_1527_);
v_a_1538_ = lean_ctor_get(v___x_1537_, 0);
v_isSharedCheck_1545_ = !lean_is_exclusive(v___x_1537_);
if (v_isSharedCheck_1545_ == 0)
{
v___x_1540_ = v___x_1537_;
v_isShared_1541_ = v_isSharedCheck_1545_;
goto v_resetjp_1539_;
}
else
{
lean_inc(v_a_1538_);
lean_dec(v___x_1537_);
v___x_1540_ = lean_box(0);
v_isShared_1541_ = v_isSharedCheck_1545_;
goto v_resetjp_1539_;
}
v_resetjp_1539_:
{
lean_object* v___x_1543_; 
if (v_isShared_1541_ == 0)
{
v___x_1543_ = v___x_1540_;
goto v_reusejp_1542_;
}
else
{
lean_object* v_reuseFailAlloc_1544_; 
v_reuseFailAlloc_1544_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1544_, 0, v_a_1538_);
v___x_1543_ = v_reuseFailAlloc_1544_;
goto v_reusejp_1542_;
}
v_reusejp_1542_:
{
return v___x_1543_;
}
}
}
}
}
else
{
lean_object* v___x_1546_; lean_object* v___x_1547_; lean_object* v___x_1548_; 
lean_dec(v_packagesDir_x3f_1526_);
v___x_1546_ = lean_box(0);
v___x_1547_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1547_, 0, v___x_1546_);
lean_ctor_set(v___x_1547_, 1, v___y_1527_);
v___x_1548_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1548_, 0, v___x_1547_);
return v___x_1548_;
}
}
v___jp_1549_:
{
if (lean_obj_tag(v___y_1551_) == 0)
{
lean_object* v_a_1552_; lean_object* v_snd_1553_; lean_object* v_packagesDir_x3f_1554_; 
v_a_1552_ = lean_ctor_get(v___y_1551_, 0);
lean_inc(v_a_1552_);
lean_dec_ref_known(v___y_1551_, 1);
v_snd_1553_ = lean_ctor_get(v_a_1552_, 1);
lean_inc(v_snd_1553_);
lean_dec(v_a_1552_);
v_packagesDir_x3f_1554_ = lean_ctor_get(v___y_1550_, 2);
lean_inc(v_packagesDir_x3f_1554_);
lean_dec_ref(v___y_1550_);
v_packagesDir_x3f_1526_ = v_packagesDir_x3f_1554_;
v___y_1527_ = v_snd_1553_;
v___y_1528_ = v_a_1424_;
goto v___jp_1525_;
}
else
{
lean_dec_ref(v___y_1550_);
return v___y_1551_;
}
}
v___jp_1557_:
{
if (lean_obj_tag(v_fst_1558_) == 0)
{
lean_object* v_a_1560_; lean_object* v___x_1562_; uint8_t v_isShared_1563_; uint8_t v_isSharedCheck_1607_; 
v_a_1560_ = lean_ctor_get(v_fst_1558_, 0);
v_isSharedCheck_1607_ = !lean_is_exclusive(v_fst_1558_);
if (v_isSharedCheck_1607_ == 0)
{
v___x_1562_ = v_fst_1558_;
v_isShared_1563_ = v_isSharedCheck_1607_;
goto v_resetjp_1561_;
}
else
{
lean_inc(v_a_1560_);
lean_dec(v_fst_1558_);
v___x_1562_ = lean_box(0);
v_isShared_1563_ = v_isSharedCheck_1607_;
goto v_resetjp_1561_;
}
v_resetjp_1561_:
{
if (lean_obj_tag(v_a_1560_) == 11)
{
lean_object* v___x_1564_; lean_object* v___x_1565_; 
lean_dec_ref_known(v_a_1560_, 2);
lean_del_object(v___x_1562_);
v___x_1564_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_mkDepLoadConfig___closed__0));
v___x_1565_ = l___private_Lake_Load_Resolve_0__Lake_reuseManifest___lam__0(v_toUpdate_1422_, v___x_1495_, v___x_1454_, v___x_1564_, v_snd_1559_, v_a_1424_);
if (lean_obj_tag(v___x_1565_) == 0)
{
lean_object* v_a_1566_; lean_object* v___x_1568_; uint8_t v_isShared_1569_; uint8_t v_isSharedCheck_1587_; 
v_a_1566_ = lean_ctor_get(v___x_1565_, 0);
v_isSharedCheck_1587_ = !lean_is_exclusive(v___x_1565_);
if (v_isSharedCheck_1587_ == 0)
{
v___x_1568_ = v___x_1565_;
v_isShared_1569_ = v_isSharedCheck_1587_;
goto v_resetjp_1567_;
}
else
{
lean_inc(v_a_1566_);
lean_dec(v___x_1565_);
v___x_1568_ = lean_box(0);
v_isShared_1569_ = v_isSharedCheck_1587_;
goto v_resetjp_1567_;
}
v_resetjp_1567_:
{
lean_object* v_snd_1570_; lean_object* v___x_1572_; uint8_t v_isShared_1573_; uint8_t v_isSharedCheck_1585_; 
v_snd_1570_ = lean_ctor_get(v_a_1566_, 1);
v_isSharedCheck_1585_ = !lean_is_exclusive(v_a_1566_);
if (v_isSharedCheck_1585_ == 0)
{
lean_object* v_unused_1586_; 
v_unused_1586_ = lean_ctor_get(v_a_1566_, 0);
lean_dec(v_unused_1586_);
v___x_1572_ = v_a_1566_;
v_isShared_1573_ = v_isSharedCheck_1585_;
goto v_resetjp_1571_;
}
else
{
lean_inc(v_snd_1570_);
lean_dec(v_a_1566_);
v___x_1572_ = lean_box(0);
v_isShared_1573_ = v_isSharedCheck_1585_;
goto v_resetjp_1571_;
}
v_resetjp_1571_:
{
lean_object* v___x_1574_; lean_object* v___x_1575_; uint8_t v___x_1576_; lean_object* v___x_1577_; lean_object* v___x_1578_; lean_object* v___x_1580_; 
v___x_1574_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__8));
v___x_1575_ = lean_string_append(v_rootName_1556_, v___x_1574_);
v___x_1576_ = 1;
v___x_1577_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1577_, 0, v___x_1575_);
lean_ctor_set_uint8(v___x_1577_, sizeof(void*)*1, v___x_1576_);
lean_inc_ref(v_a_1424_);
v___x_1578_ = lean_apply_2(v_a_1424_, v___x_1577_, lean_box(0));
if (v_isShared_1573_ == 0)
{
lean_ctor_set(v___x_1572_, 0, v___x_1578_);
v___x_1580_ = v___x_1572_;
goto v_reusejp_1579_;
}
else
{
lean_object* v_reuseFailAlloc_1584_; 
v_reuseFailAlloc_1584_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1584_, 0, v___x_1578_);
lean_ctor_set(v_reuseFailAlloc_1584_, 1, v_snd_1570_);
v___x_1580_ = v_reuseFailAlloc_1584_;
goto v_reusejp_1579_;
}
v_reusejp_1579_:
{
lean_object* v___x_1582_; 
if (v_isShared_1569_ == 0)
{
lean_ctor_set(v___x_1568_, 0, v___x_1580_);
v___x_1582_ = v___x_1568_;
goto v_reusejp_1581_;
}
else
{
lean_object* v_reuseFailAlloc_1583_; 
v_reuseFailAlloc_1583_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1583_, 0, v___x_1580_);
v___x_1582_ = v_reuseFailAlloc_1583_;
goto v_reusejp_1581_;
}
v_reusejp_1581_:
{
return v___x_1582_;
}
}
}
}
}
else
{
lean_dec_ref(v_rootName_1556_);
return v___x_1565_;
}
}
else
{
if (lean_obj_tag(v_toUpdate_1422_) == 0)
{
lean_object* v___x_1588_; uint8_t v___x_1589_; lean_object* v___x_1590_; lean_object* v___x_1591_; lean_object* v___x_1592_; lean_object* v___x_1594_; 
lean_dec_ref_known(v_toUpdate_1422_, 5);
lean_dec(v_snd_1559_);
lean_dec_ref(v_rootName_1556_);
v___x_1588_ = lean_io_error_to_string(v_a_1560_);
v___x_1589_ = 3;
v___x_1590_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1590_, 0, v___x_1588_);
lean_ctor_set_uint8(v___x_1590_, sizeof(void*)*1, v___x_1589_);
lean_inc_ref(v_a_1424_);
v___x_1591_ = lean_apply_2(v_a_1424_, v___x_1590_, lean_box(0));
v___x_1592_ = lean_box(0);
if (v_isShared_1563_ == 0)
{
lean_ctor_set_tag(v___x_1562_, 1);
lean_ctor_set(v___x_1562_, 0, v___x_1592_);
v___x_1594_ = v___x_1562_;
goto v_reusejp_1593_;
}
else
{
lean_object* v_reuseFailAlloc_1595_; 
v_reuseFailAlloc_1595_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1595_, 0, v___x_1592_);
v___x_1594_ = v_reuseFailAlloc_1595_;
goto v_reusejp_1593_;
}
v_reusejp_1593_:
{
return v___x_1594_;
}
}
else
{
lean_object* v___x_1596_; lean_object* v___x_1597_; lean_object* v___x_1598_; lean_object* v___x_1599_; uint8_t v___x_1600_; lean_object* v___x_1601_; lean_object* v___x_1602_; lean_object* v___x_1603_; lean_object* v___x_1605_; 
v___x_1596_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__9));
v___x_1597_ = lean_string_append(v_rootName_1556_, v___x_1596_);
v___x_1598_ = lean_io_error_to_string(v_a_1560_);
v___x_1599_ = lean_string_append(v___x_1597_, v___x_1598_);
lean_dec_ref(v___x_1598_);
v___x_1600_ = 2;
v___x_1601_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1601_, 0, v___x_1599_);
lean_ctor_set_uint8(v___x_1601_, sizeof(void*)*1, v___x_1600_);
lean_inc_ref(v_a_1424_);
v___x_1602_ = lean_apply_2(v_a_1424_, v___x_1601_, lean_box(0));
v___x_1603_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1603_, 0, v___x_1602_);
lean_ctor_set(v___x_1603_, 1, v_snd_1559_);
if (v_isShared_1563_ == 0)
{
lean_ctor_set(v___x_1562_, 0, v___x_1603_);
v___x_1605_ = v___x_1562_;
goto v_reusejp_1604_;
}
else
{
lean_object* v_reuseFailAlloc_1606_; 
v_reuseFailAlloc_1606_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1606_, 0, v___x_1603_);
v___x_1605_ = v_reuseFailAlloc_1606_;
goto v_reusejp_1604_;
}
v_reusejp_1604_:
{
return v___x_1605_;
}
}
}
}
}
else
{
lean_object* v_a_1608_; lean_object* v_packagesDir_x3f_1609_; lean_object* v_packages_1610_; lean_object* v___x_1611_; 
lean_dec_ref(v_rootName_1556_);
v_a_1608_ = lean_ctor_get(v_fst_1558_, 0);
lean_inc(v_a_1608_);
lean_dec_ref_known(v_fst_1558_, 1);
v_packagesDir_x3f_1609_ = lean_ctor_get(v_a_1608_, 2);
v_packages_1610_ = lean_ctor_get(v_a_1608_, 3);
lean_inc(v_toUpdate_1422_);
v___x_1611_ = l___private_Lake_Load_Resolve_0__Lake_reuseManifest___lam__0(v_toUpdate_1422_, v___x_1495_, v___x_1454_, v_packages_1610_, v_snd_1559_, v_a_1424_);
if (lean_obj_tag(v___x_1611_) == 0)
{
lean_object* v_a_1612_; 
v_a_1612_ = lean_ctor_get(v___x_1611_, 0);
lean_inc(v_a_1612_);
lean_dec_ref_known(v___x_1611_, 1);
if (lean_obj_tag(v_toUpdate_1422_) == 0)
{
lean_object* v_snd_1613_; lean_object* v___x_1614_; uint8_t v___x_1615_; 
v_snd_1613_ = lean_ctor_get(v_a_1612_, 1);
lean_inc(v_snd_1613_);
lean_dec(v_a_1612_);
v___x_1614_ = lean_array_get_size(v_packages_1610_);
v___x_1615_ = lean_nat_dec_lt(v___x_1454_, v___x_1614_);
if (v___x_1615_ == 0)
{
lean_inc(v_packagesDir_x3f_1609_);
lean_dec_ref_known(v_toUpdate_1422_, 5);
lean_dec(v_a_1608_);
v_packagesDir_x3f_1526_ = v_packagesDir_x3f_1609_;
v___y_1527_ = v_snd_1613_;
v___y_1528_ = v_a_1424_;
goto v___jp_1525_;
}
else
{
lean_object* v___x_1616_; uint8_t v___x_1617_; 
v___x_1616_ = lean_box(0);
v___x_1617_ = lean_nat_dec_le(v___x_1614_, v___x_1614_);
if (v___x_1617_ == 0)
{
if (v___x_1615_ == 0)
{
lean_inc(v_packagesDir_x3f_1609_);
lean_dec_ref_known(v_toUpdate_1422_, 5);
lean_dec(v_a_1608_);
v_packagesDir_x3f_1526_ = v_packagesDir_x3f_1609_;
v___y_1527_ = v_snd_1613_;
v___y_1528_ = v_a_1424_;
goto v___jp_1525_;
}
else
{
size_t v___x_1618_; size_t v___x_1619_; lean_object* v___x_1620_; 
v___x_1618_ = ((size_t)0ULL);
v___x_1619_ = lean_usize_of_nat(v___x_1614_);
v___x_1620_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__4___redArg(v_toUpdate_1422_, v_packages_1610_, v___x_1618_, v___x_1619_, v___x_1616_, v_snd_1613_);
lean_dec_ref_known(v_toUpdate_1422_, 5);
v___y_1550_ = v_a_1608_;
v___y_1551_ = v___x_1620_;
goto v___jp_1549_;
}
}
else
{
size_t v___x_1621_; size_t v___x_1622_; lean_object* v___x_1623_; 
v___x_1621_ = ((size_t)0ULL);
v___x_1622_ = lean_usize_of_nat(v___x_1614_);
v___x_1623_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__4___redArg(v_toUpdate_1422_, v_packages_1610_, v___x_1621_, v___x_1622_, v___x_1616_, v_snd_1613_);
lean_dec_ref_known(v_toUpdate_1422_, 5);
v___y_1550_ = v_a_1608_;
v___y_1551_ = v___x_1623_;
goto v___jp_1549_;
}
}
}
else
{
lean_object* v_snd_1624_; 
lean_inc(v_packagesDir_x3f_1609_);
lean_dec(v_a_1608_);
v_snd_1624_ = lean_ctor_get(v_a_1612_, 1);
lean_inc(v_snd_1624_);
lean_dec(v_a_1612_);
v_packagesDir_x3f_1526_ = v_packagesDir_x3f_1609_;
v___y_1527_ = v_snd_1624_;
v___y_1528_ = v_a_1424_;
goto v___jp_1525_;
}
}
else
{
lean_dec(v_a_1608_);
lean_dec(v_toUpdate_1422_);
return v___x_1611_;
}
}
}
v___jp_1627_:
{
uint8_t v___x_1629_; 
v___x_1629_ = lean_uint8_once(&l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__6, &l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__6_once, _init_l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__6);
if (v___x_1629_ == 0)
{
v_fst_1558_ = v_val_1628_;
v_snd_1559_ = v_a_1423_;
goto v___jp_1557_;
}
else
{
lean_object* v___x_1630_; size_t v___x_1631_; size_t v___x_1632_; lean_object* v___x_1633_; 
v___x_1630_ = lean_box(0);
v___x_1631_ = ((size_t)0ULL);
v___x_1632_ = lean_usize_once(&l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__7, &l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__7_once, _init_l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__7);
v___x_1633_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__3(v___x_1626_, v___x_1631_, v___x_1632_, v___x_1630_, v_a_1424_);
if (lean_obj_tag(v___x_1633_) == 0)
{
lean_dec_ref_known(v___x_1633_, 1);
v_fst_1558_ = v_val_1628_;
v_snd_1559_ = v_a_1423_;
goto v___jp_1557_;
}
else
{
lean_object* v_a_1634_; lean_object* v___x_1636_; uint8_t v_isShared_1637_; uint8_t v_isSharedCheck_1641_; 
lean_dec_ref(v_val_1628_);
lean_dec_ref(v_rootName_1556_);
lean_dec(v_a_1423_);
lean_dec(v_toUpdate_1422_);
v_a_1634_ = lean_ctor_get(v___x_1633_, 0);
v_isSharedCheck_1641_ = !lean_is_exclusive(v___x_1633_);
if (v_isSharedCheck_1641_ == 0)
{
v___x_1636_ = v___x_1633_;
v_isShared_1637_ = v_isSharedCheck_1641_;
goto v_resetjp_1635_;
}
else
{
lean_inc(v_a_1634_);
lean_dec(v___x_1633_);
v___x_1636_ = lean_box(0);
v_isShared_1637_ = v_isSharedCheck_1641_;
goto v_resetjp_1635_;
}
v_resetjp_1635_:
{
lean_object* v___x_1639_; 
if (v_isShared_1637_ == 0)
{
v___x_1639_ = v___x_1636_;
goto v_reusejp_1638_;
}
else
{
lean_object* v_reuseFailAlloc_1640_; 
v_reuseFailAlloc_1640_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1640_, 0, v_a_1634_);
v___x_1639_ = v_reuseFailAlloc_1640_;
goto v_reusejp_1638_;
}
v_reusejp_1638_:
{
return v___x_1639_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_reuseManifest___boxed(lean_object* v_ws_1659_, lean_object* v_toUpdate_1660_, lean_object* v_a_1661_, lean_object* v_a_1662_, lean_object* v_a_1663_){
_start:
{
lean_object* v_res_1664_; 
v_res_1664_ = l___private_Lake_Load_Resolve_0__Lake_reuseManifest(v_ws_1659_, v_toUpdate_1660_, v_a_1661_, v_a_1662_);
lean_dec_ref(v_a_1662_);
lean_dec_ref(v_ws_1659_);
return v_res_1664_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__0(lean_object* v_as_1665_, size_t v_sz_1666_, size_t v_i_1667_, lean_object* v_b_1668_, lean_object* v___y_1669_, lean_object* v___y_1670_){
_start:
{
lean_object* v___x_1672_; 
v___x_1672_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__0___redArg(v_as_1665_, v_sz_1666_, v_i_1667_, v_b_1668_, v___y_1669_);
return v___x_1672_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__0___boxed(lean_object* v_as_1673_, lean_object* v_sz_1674_, lean_object* v_i_1675_, lean_object* v_b_1676_, lean_object* v___y_1677_, lean_object* v___y_1678_, lean_object* v___y_1679_){
_start:
{
size_t v_sz_boxed_1680_; size_t v_i_boxed_1681_; lean_object* v_res_1682_; 
v_sz_boxed_1680_ = lean_unbox_usize(v_sz_1674_);
lean_dec(v_sz_1674_);
v_i_boxed_1681_ = lean_unbox_usize(v_i_1675_);
lean_dec(v_i_1675_);
v_res_1682_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__0(v_as_1673_, v_sz_boxed_1680_, v_i_boxed_1681_, v_b_1676_, v___y_1677_, v___y_1678_);
lean_dec_ref(v___y_1678_);
lean_dec_ref(v_as_1673_);
return v_res_1682_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__4(lean_object* v_toUpdate_1683_, lean_object* v_as_1684_, size_t v_i_1685_, size_t v_stop_1686_, lean_object* v_b_1687_, lean_object* v___y_1688_, lean_object* v___y_1689_){
_start:
{
lean_object* v___x_1691_; 
v___x_1691_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__4___redArg(v_toUpdate_1683_, v_as_1684_, v_i_1685_, v_stop_1686_, v_b_1687_, v___y_1688_);
return v___x_1691_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__4___boxed(lean_object* v_toUpdate_1692_, lean_object* v_as_1693_, lean_object* v_i_1694_, lean_object* v_stop_1695_, lean_object* v_b_1696_, lean_object* v___y_1697_, lean_object* v___y_1698_, lean_object* v___y_1699_){
_start:
{
size_t v_i_boxed_1700_; size_t v_stop_boxed_1701_; lean_object* v_res_1702_; 
v_i_boxed_1700_ = lean_unbox_usize(v_i_1694_);
lean_dec(v_i_1694_);
v_stop_boxed_1701_ = lean_unbox_usize(v_stop_1695_);
lean_dec(v_stop_1695_);
v_res_1702_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__4(v_toUpdate_1692_, v_as_1693_, v_i_boxed_1700_, v_stop_boxed_1701_, v_b_1696_, v___y_1697_, v___y_1698_);
lean_dec_ref(v___y_1698_);
lean_dec_ref(v_as_1693_);
lean_dec(v_toUpdate_1692_);
return v_res_1702_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_addDependencyEntries_spec__0___redArg(lean_object* v_dep_1703_, lean_object* v_as_1704_, size_t v_i_1705_, size_t v_stop_1706_, lean_object* v_b_1707_, lean_object* v___y_1708_){
_start:
{
lean_object* v_fst_1711_; lean_object* v_snd_1712_; lean_object* v___y_1717_; lean_object* v_name_1718_; uint8_t v___x_1721_; 
v___x_1721_ = lean_usize_dec_eq(v_i_1705_, v_stop_1706_);
if (v___x_1721_ == 0)
{
lean_object* v___x_1722_; lean_object* v_name_1723_; lean_object* v_scope_1724_; lean_object* v_configFile_1725_; lean_object* v_manifestFile_x3f_1726_; lean_object* v_src_1727_; lean_object* v___x_1729_; uint8_t v_isShared_1730_; uint8_t v_isSharedCheck_1750_; 
v___x_1722_ = lean_array_uget(v_as_1704_, v_i_1705_);
v_name_1723_ = lean_ctor_get(v___x_1722_, 0);
v_scope_1724_ = lean_ctor_get(v___x_1722_, 1);
v_configFile_1725_ = lean_ctor_get(v___x_1722_, 2);
v_manifestFile_x3f_1726_ = lean_ctor_get(v___x_1722_, 3);
v_src_1727_ = lean_ctor_get(v___x_1722_, 4);
v_isSharedCheck_1750_ = !lean_is_exclusive(v___x_1722_);
if (v_isSharedCheck_1750_ == 0)
{
v___x_1729_ = v___x_1722_;
v_isShared_1730_ = v_isSharedCheck_1750_;
goto v_resetjp_1728_;
}
else
{
lean_inc(v_src_1727_);
lean_inc(v_manifestFile_x3f_1726_);
lean_inc(v_configFile_1725_);
lean_inc(v_scope_1724_);
lean_inc(v_name_1723_);
lean_dec(v___x_1722_);
v___x_1729_ = lean_box(0);
v_isShared_1730_ = v_isSharedCheck_1750_;
goto v_resetjp_1728_;
}
v_resetjp_1728_:
{
uint8_t v___x_1731_; 
v___x_1731_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_NameMap_contains_spec__0___redArg(v_name_1723_, v___y_1708_);
if (v___x_1731_ == 0)
{
uint8_t v___x_1732_; 
v___x_1732_ = 1;
if (lean_obj_tag(v_src_1727_) == 0)
{
lean_object* v_dir_1733_; lean_object* v___x_1735_; uint8_t v_isShared_1736_; uint8_t v_isSharedCheck_1745_; 
v_dir_1733_ = lean_ctor_get(v_src_1727_, 0);
v_isSharedCheck_1745_ = !lean_is_exclusive(v_src_1727_);
if (v_isSharedCheck_1745_ == 0)
{
v___x_1735_ = v_src_1727_;
v_isShared_1736_ = v_isSharedCheck_1745_;
goto v_resetjp_1734_;
}
else
{
lean_inc(v_dir_1733_);
lean_dec(v_src_1727_);
v___x_1735_ = lean_box(0);
v_isShared_1736_ = v_isSharedCheck_1745_;
goto v_resetjp_1734_;
}
v_resetjp_1734_:
{
lean_object* v_relPkgDir_1737_; lean_object* v___x_1738_; lean_object* v___x_1740_; 
v_relPkgDir_1737_ = lean_ctor_get(v_dep_1703_, 1);
lean_inc_ref(v_relPkgDir_1737_);
v___x_1738_ = l_Lake_joinRelative(v_relPkgDir_1737_, v_dir_1733_);
if (v_isShared_1736_ == 0)
{
lean_ctor_set(v___x_1735_, 0, v___x_1738_);
v___x_1740_ = v___x_1735_;
goto v_reusejp_1739_;
}
else
{
lean_object* v_reuseFailAlloc_1744_; 
v_reuseFailAlloc_1744_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1744_, 0, v___x_1738_);
v___x_1740_ = v_reuseFailAlloc_1744_;
goto v_reusejp_1739_;
}
v_reusejp_1739_:
{
lean_object* v___x_1742_; 
lean_inc(v_name_1723_);
if (v_isShared_1730_ == 0)
{
lean_ctor_set(v___x_1729_, 4, v___x_1740_);
v___x_1742_ = v___x_1729_;
goto v_reusejp_1741_;
}
else
{
lean_object* v_reuseFailAlloc_1743_; 
v_reuseFailAlloc_1743_ = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(v_reuseFailAlloc_1743_, 0, v_name_1723_);
lean_ctor_set(v_reuseFailAlloc_1743_, 1, v_scope_1724_);
lean_ctor_set(v_reuseFailAlloc_1743_, 2, v_configFile_1725_);
lean_ctor_set(v_reuseFailAlloc_1743_, 3, v_manifestFile_x3f_1726_);
lean_ctor_set(v_reuseFailAlloc_1743_, 4, v___x_1740_);
v___x_1742_ = v_reuseFailAlloc_1743_;
goto v_reusejp_1741_;
}
v_reusejp_1741_:
{
lean_ctor_set_uint8(v___x_1742_, sizeof(void*)*5, v___x_1732_);
v___y_1717_ = v___x_1742_;
v_name_1718_ = v_name_1723_;
goto v___jp_1716_;
}
}
}
}
else
{
lean_object* v___x_1747_; 
lean_inc(v_name_1723_);
if (v_isShared_1730_ == 0)
{
v___x_1747_ = v___x_1729_;
goto v_reusejp_1746_;
}
else
{
lean_object* v_reuseFailAlloc_1748_; 
v_reuseFailAlloc_1748_ = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(v_reuseFailAlloc_1748_, 0, v_name_1723_);
lean_ctor_set(v_reuseFailAlloc_1748_, 1, v_scope_1724_);
lean_ctor_set(v_reuseFailAlloc_1748_, 2, v_configFile_1725_);
lean_ctor_set(v_reuseFailAlloc_1748_, 3, v_manifestFile_x3f_1726_);
lean_ctor_set(v_reuseFailAlloc_1748_, 4, v_src_1727_);
v___x_1747_ = v_reuseFailAlloc_1748_;
goto v_reusejp_1746_;
}
v_reusejp_1746_:
{
lean_ctor_set_uint8(v___x_1747_, sizeof(void*)*5, v___x_1732_);
v___y_1717_ = v___x_1747_;
v_name_1718_ = v_name_1723_;
goto v___jp_1716_;
}
}
}
else
{
lean_object* v___x_1749_; 
lean_del_object(v___x_1729_);
lean_dec_ref(v_src_1727_);
lean_dec(v_manifestFile_x3f_1726_);
lean_dec_ref(v_configFile_1725_);
lean_dec_ref(v_scope_1724_);
lean_dec(v_name_1723_);
v___x_1749_ = lean_box(0);
v_fst_1711_ = v___x_1749_;
v_snd_1712_ = v___y_1708_;
goto v___jp_1710_;
}
}
}
else
{
lean_object* v___x_1751_; lean_object* v___x_1752_; 
lean_dec_ref(v_dep_1703_);
v___x_1751_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1751_, 0, v_b_1707_);
lean_ctor_set(v___x_1751_, 1, v___y_1708_);
v___x_1752_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1752_, 0, v___x_1751_);
return v___x_1752_;
}
v___jp_1710_:
{
size_t v___x_1713_; size_t v___x_1714_; 
v___x_1713_ = ((size_t)1ULL);
v___x_1714_ = lean_usize_add(v_i_1705_, v___x_1713_);
v_i_1705_ = v___x_1714_;
v_b_1707_ = v_fst_1711_;
v___y_1708_ = v_snd_1712_;
goto _start;
}
v___jp_1716_:
{
lean_object* v___x_1719_; lean_object* v___x_1720_; 
v___x_1719_ = lean_box(0);
v___x_1720_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_name_1718_, v___y_1717_, v___y_1708_);
v_fst_1711_ = v___x_1719_;
v_snd_1712_ = v___x_1720_;
goto v___jp_1710_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_addDependencyEntries_spec__0___redArg___boxed(lean_object* v_dep_1753_, lean_object* v_as_1754_, lean_object* v_i_1755_, lean_object* v_stop_1756_, lean_object* v_b_1757_, lean_object* v___y_1758_, lean_object* v___y_1759_){
_start:
{
size_t v_i_boxed_1760_; size_t v_stop_boxed_1761_; lean_object* v_res_1762_; 
v_i_boxed_1760_ = lean_unbox_usize(v_i_1755_);
lean_dec(v_i_1755_);
v_stop_boxed_1761_ = lean_unbox_usize(v_stop_1756_);
lean_dec(v_stop_1756_);
v_res_1762_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_addDependencyEntries_spec__0___redArg(v_dep_1753_, v_as_1754_, v_i_boxed_1760_, v_stop_boxed_1761_, v_b_1757_, v___y_1758_);
lean_dec_ref(v_as_1754_);
return v_res_1762_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_addDependencyEntries(lean_object* v_dep_1765_, lean_object* v_a_1766_, lean_object* v_a_1767_){
_start:
{
lean_object* v_manifestEntry_1769_; lean_object* v_pkgDir_1770_; lean_object* v_name_1771_; lean_object* v_manifestFile_x3f_1772_; lean_object* v___y_1774_; lean_object* v_fst_1775_; lean_object* v_snd_1776_; lean_object* v___y_1833_; lean_object* v___y_1834_; lean_object* v___y_1835_; lean_object* v_val_1836_; lean_object* v___y_1852_; 
v_manifestEntry_1769_ = lean_ctor_get(v_dep_1765_, 4);
v_pkgDir_1770_ = lean_ctor_get(v_dep_1765_, 0);
v_name_1771_ = lean_ctor_get(v_manifestEntry_1769_, 0);
v_manifestFile_x3f_1772_ = lean_ctor_get(v_manifestEntry_1769_, 3);
if (lean_obj_tag(v_manifestFile_x3f_1772_) == 0)
{
lean_object* v___x_1872_; lean_object* v___x_1873_; 
v___x_1872_ = l_Lake_defaultManifestFile;
lean_inc_ref(v_pkgDir_1770_);
v___x_1873_ = l_Lake_joinRelative(v_pkgDir_1770_, v___x_1872_);
v___y_1852_ = v___x_1873_;
goto v___jp_1851_;
}
else
{
lean_object* v_val_1874_; lean_object* v___x_1875_; 
v_val_1874_ = lean_ctor_get(v_manifestFile_x3f_1772_, 0);
lean_inc(v_val_1874_);
lean_inc_ref(v_pkgDir_1770_);
v___x_1875_ = l_Lake_joinRelative(v_pkgDir_1770_, v_val_1874_);
v___y_1852_ = v___x_1875_;
goto v___jp_1851_;
}
v___jp_1773_:
{
if (lean_obj_tag(v_fst_1775_) == 0)
{
lean_object* v_a_1777_; lean_object* v___x_1779_; uint8_t v_isShared_1780_; uint8_t v_isSharedCheck_1806_; 
lean_inc(v_name_1771_);
lean_dec_ref(v_dep_1765_);
v_a_1777_ = lean_ctor_get(v_fst_1775_, 0);
v_isSharedCheck_1806_ = !lean_is_exclusive(v_fst_1775_);
if (v_isSharedCheck_1806_ == 0)
{
v___x_1779_ = v_fst_1775_;
v_isShared_1780_ = v_isSharedCheck_1806_;
goto v_resetjp_1778_;
}
else
{
lean_inc(v_a_1777_);
lean_dec(v_fst_1775_);
v___x_1779_ = lean_box(0);
v_isShared_1780_ = v_isSharedCheck_1806_;
goto v_resetjp_1778_;
}
v_resetjp_1778_:
{
if (lean_obj_tag(v_a_1777_) == 11)
{
uint8_t v___x_1781_; lean_object* v___x_1782_; lean_object* v___x_1783_; lean_object* v___x_1784_; lean_object* v___x_1785_; uint8_t v___x_1786_; lean_object* v___x_1787_; lean_object* v___x_1788_; lean_object* v___x_1789_; lean_object* v___x_1791_; 
lean_dec_ref_known(v_a_1777_, 2);
v___x_1781_ = 0;
v___x_1782_ = l_Lean_Name_toString(v_name_1771_, v___x_1781_);
v___x_1783_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_addDependencyEntries___closed__0));
v___x_1784_ = lean_string_append(v___x_1782_, v___x_1783_);
v___x_1785_ = lean_string_append(v___x_1784_, v___y_1774_);
lean_dec_ref(v___y_1774_);
v___x_1786_ = 2;
v___x_1787_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1787_, 0, v___x_1785_);
lean_ctor_set_uint8(v___x_1787_, sizeof(void*)*1, v___x_1786_);
lean_inc_ref(v_a_1767_);
v___x_1788_ = lean_apply_2(v_a_1767_, v___x_1787_, lean_box(0));
v___x_1789_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1789_, 0, v___x_1788_);
lean_ctor_set(v___x_1789_, 1, v_snd_1776_);
if (v_isShared_1780_ == 0)
{
lean_ctor_set(v___x_1779_, 0, v___x_1789_);
v___x_1791_ = v___x_1779_;
goto v_reusejp_1790_;
}
else
{
lean_object* v_reuseFailAlloc_1792_; 
v_reuseFailAlloc_1792_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1792_, 0, v___x_1789_);
v___x_1791_ = v_reuseFailAlloc_1792_;
goto v_reusejp_1790_;
}
v_reusejp_1790_:
{
return v___x_1791_;
}
}
else
{
uint8_t v___x_1793_; lean_object* v___x_1794_; lean_object* v___x_1795_; lean_object* v___x_1796_; lean_object* v___x_1797_; lean_object* v___x_1798_; uint8_t v___x_1799_; lean_object* v___x_1800_; lean_object* v___x_1801_; lean_object* v___x_1802_; lean_object* v___x_1804_; 
lean_dec_ref(v___y_1774_);
v___x_1793_ = 0;
v___x_1794_ = l_Lean_Name_toString(v_name_1771_, v___x_1793_);
v___x_1795_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_addDependencyEntries___closed__1));
v___x_1796_ = lean_string_append(v___x_1794_, v___x_1795_);
v___x_1797_ = lean_io_error_to_string(v_a_1777_);
v___x_1798_ = lean_string_append(v___x_1796_, v___x_1797_);
lean_dec_ref(v___x_1797_);
v___x_1799_ = 2;
v___x_1800_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1800_, 0, v___x_1798_);
lean_ctor_set_uint8(v___x_1800_, sizeof(void*)*1, v___x_1799_);
lean_inc_ref(v_a_1767_);
v___x_1801_ = lean_apply_2(v_a_1767_, v___x_1800_, lean_box(0));
v___x_1802_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1802_, 0, v___x_1801_);
lean_ctor_set(v___x_1802_, 1, v_snd_1776_);
if (v_isShared_1780_ == 0)
{
lean_ctor_set(v___x_1779_, 0, v___x_1802_);
v___x_1804_ = v___x_1779_;
goto v_reusejp_1803_;
}
else
{
lean_object* v_reuseFailAlloc_1805_; 
v_reuseFailAlloc_1805_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1805_, 0, v___x_1802_);
v___x_1804_ = v_reuseFailAlloc_1805_;
goto v_reusejp_1803_;
}
v_reusejp_1803_:
{
return v___x_1804_;
}
}
}
}
else
{
lean_object* v_a_1807_; lean_object* v___x_1809_; uint8_t v_isShared_1810_; uint8_t v_isSharedCheck_1831_; 
lean_dec_ref(v___y_1774_);
v_a_1807_ = lean_ctor_get(v_fst_1775_, 0);
v_isSharedCheck_1831_ = !lean_is_exclusive(v_fst_1775_);
if (v_isSharedCheck_1831_ == 0)
{
v___x_1809_ = v_fst_1775_;
v_isShared_1810_ = v_isSharedCheck_1831_;
goto v_resetjp_1808_;
}
else
{
lean_inc(v_a_1807_);
lean_dec(v_fst_1775_);
v___x_1809_ = lean_box(0);
v_isShared_1810_ = v_isSharedCheck_1831_;
goto v_resetjp_1808_;
}
v_resetjp_1808_:
{
lean_object* v_packages_1811_; lean_object* v___x_1812_; lean_object* v___x_1813_; lean_object* v___x_1814_; uint8_t v___x_1815_; 
v_packages_1811_ = lean_ctor_get(v_a_1807_, 3);
lean_inc_ref(v_packages_1811_);
lean_dec(v_a_1807_);
v___x_1812_ = lean_unsigned_to_nat(0u);
v___x_1813_ = lean_array_get_size(v_packages_1811_);
v___x_1814_ = lean_box(0);
v___x_1815_ = lean_nat_dec_lt(v___x_1812_, v___x_1813_);
if (v___x_1815_ == 0)
{
lean_object* v___x_1816_; lean_object* v___x_1818_; 
lean_dec_ref(v_packages_1811_);
lean_dec_ref(v_dep_1765_);
v___x_1816_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1816_, 0, v___x_1814_);
lean_ctor_set(v___x_1816_, 1, v_snd_1776_);
if (v_isShared_1810_ == 0)
{
lean_ctor_set_tag(v___x_1809_, 0);
lean_ctor_set(v___x_1809_, 0, v___x_1816_);
v___x_1818_ = v___x_1809_;
goto v_reusejp_1817_;
}
else
{
lean_object* v_reuseFailAlloc_1819_; 
v_reuseFailAlloc_1819_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1819_, 0, v___x_1816_);
v___x_1818_ = v_reuseFailAlloc_1819_;
goto v_reusejp_1817_;
}
v_reusejp_1817_:
{
return v___x_1818_;
}
}
else
{
uint8_t v___x_1820_; 
v___x_1820_ = lean_nat_dec_le(v___x_1813_, v___x_1813_);
if (v___x_1820_ == 0)
{
if (v___x_1815_ == 0)
{
lean_object* v___x_1821_; lean_object* v___x_1823_; 
lean_dec_ref(v_packages_1811_);
lean_dec_ref(v_dep_1765_);
v___x_1821_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1821_, 0, v___x_1814_);
lean_ctor_set(v___x_1821_, 1, v_snd_1776_);
if (v_isShared_1810_ == 0)
{
lean_ctor_set_tag(v___x_1809_, 0);
lean_ctor_set(v___x_1809_, 0, v___x_1821_);
v___x_1823_ = v___x_1809_;
goto v_reusejp_1822_;
}
else
{
lean_object* v_reuseFailAlloc_1824_; 
v_reuseFailAlloc_1824_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1824_, 0, v___x_1821_);
v___x_1823_ = v_reuseFailAlloc_1824_;
goto v_reusejp_1822_;
}
v_reusejp_1822_:
{
return v___x_1823_;
}
}
else
{
size_t v___x_1825_; size_t v___x_1826_; lean_object* v___x_1827_; 
lean_del_object(v___x_1809_);
v___x_1825_ = ((size_t)0ULL);
v___x_1826_ = lean_usize_of_nat(v___x_1813_);
v___x_1827_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_addDependencyEntries_spec__0___redArg(v_dep_1765_, v_packages_1811_, v___x_1825_, v___x_1826_, v___x_1814_, v_snd_1776_);
lean_dec_ref(v_packages_1811_);
return v___x_1827_;
}
}
else
{
size_t v___x_1828_; size_t v___x_1829_; lean_object* v___x_1830_; 
lean_del_object(v___x_1809_);
v___x_1828_ = ((size_t)0ULL);
v___x_1829_ = lean_usize_of_nat(v___x_1813_);
v___x_1830_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_addDependencyEntries_spec__0___redArg(v_dep_1765_, v_packages_1811_, v___x_1828_, v___x_1829_, v___x_1814_, v_snd_1776_);
lean_dec_ref(v_packages_1811_);
return v___x_1830_;
}
}
}
}
}
v___jp_1832_:
{
lean_object* v___x_1837_; uint8_t v___x_1838_; 
v___x_1837_ = lean_array_get_size(v___y_1835_);
v___x_1838_ = lean_nat_dec_lt(v___y_1834_, v___x_1837_);
if (v___x_1838_ == 0)
{
v___y_1774_ = v___y_1833_;
v_fst_1775_ = v_val_1836_;
v_snd_1776_ = v_a_1766_;
goto v___jp_1773_;
}
else
{
lean_object* v___x_1839_; size_t v___x_1840_; size_t v___x_1841_; lean_object* v___x_1842_; 
v___x_1839_ = lean_box(0);
v___x_1840_ = ((size_t)0ULL);
v___x_1841_ = lean_usize_of_nat(v___x_1837_);
v___x_1842_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__3(v___y_1835_, v___x_1840_, v___x_1841_, v___x_1839_, v_a_1767_);
if (lean_obj_tag(v___x_1842_) == 0)
{
lean_dec_ref_known(v___x_1842_, 1);
v___y_1774_ = v___y_1833_;
v_fst_1775_ = v_val_1836_;
v_snd_1776_ = v_a_1766_;
goto v___jp_1773_;
}
else
{
lean_object* v_a_1843_; lean_object* v___x_1845_; uint8_t v_isShared_1846_; uint8_t v_isSharedCheck_1850_; 
lean_dec_ref(v_val_1836_);
lean_dec_ref(v___y_1833_);
lean_dec(v_a_1766_);
lean_dec_ref(v_dep_1765_);
v_a_1843_ = lean_ctor_get(v___x_1842_, 0);
v_isSharedCheck_1850_ = !lean_is_exclusive(v___x_1842_);
if (v_isSharedCheck_1850_ == 0)
{
v___x_1845_ = v___x_1842_;
v_isShared_1846_ = v_isSharedCheck_1850_;
goto v_resetjp_1844_;
}
else
{
lean_inc(v_a_1843_);
lean_dec(v___x_1842_);
v___x_1845_ = lean_box(0);
v_isShared_1846_ = v_isSharedCheck_1850_;
goto v_resetjp_1844_;
}
v_resetjp_1844_:
{
lean_object* v___x_1848_; 
if (v_isShared_1846_ == 0)
{
v___x_1848_ = v___x_1845_;
goto v_reusejp_1847_;
}
else
{
lean_object* v_reuseFailAlloc_1849_; 
v_reuseFailAlloc_1849_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1849_, 0, v_a_1843_);
v___x_1848_ = v_reuseFailAlloc_1849_;
goto v_reusejp_1847_;
}
v_reusejp_1847_:
{
return v___x_1848_;
}
}
}
}
}
v___jp_1851_:
{
lean_object* v___x_1853_; lean_object* v___x_1854_; lean_object* v___x_1855_; 
v___x_1853_ = lean_unsigned_to_nat(0u);
v___x_1854_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__4));
lean_inc_ref(v___y_1852_);
v___x_1855_ = l_Lake_Manifest_load(v___y_1852_);
if (lean_obj_tag(v___x_1855_) == 0)
{
lean_object* v_a_1856_; lean_object* v___x_1858_; uint8_t v_isShared_1859_; uint8_t v_isSharedCheck_1863_; 
v_a_1856_ = lean_ctor_get(v___x_1855_, 0);
v_isSharedCheck_1863_ = !lean_is_exclusive(v___x_1855_);
if (v_isSharedCheck_1863_ == 0)
{
v___x_1858_ = v___x_1855_;
v_isShared_1859_ = v_isSharedCheck_1863_;
goto v_resetjp_1857_;
}
else
{
lean_inc(v_a_1856_);
lean_dec(v___x_1855_);
v___x_1858_ = lean_box(0);
v_isShared_1859_ = v_isSharedCheck_1863_;
goto v_resetjp_1857_;
}
v_resetjp_1857_:
{
lean_object* v___x_1861_; 
if (v_isShared_1859_ == 0)
{
lean_ctor_set_tag(v___x_1858_, 1);
v___x_1861_ = v___x_1858_;
goto v_reusejp_1860_;
}
else
{
lean_object* v_reuseFailAlloc_1862_; 
v_reuseFailAlloc_1862_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1862_, 0, v_a_1856_);
v___x_1861_ = v_reuseFailAlloc_1862_;
goto v_reusejp_1860_;
}
v_reusejp_1860_:
{
v___y_1833_ = v___y_1852_;
v___y_1834_ = v___x_1853_;
v___y_1835_ = v___x_1854_;
v_val_1836_ = v___x_1861_;
goto v___jp_1832_;
}
}
}
else
{
lean_object* v_a_1864_; lean_object* v___x_1866_; uint8_t v_isShared_1867_; uint8_t v_isSharedCheck_1871_; 
v_a_1864_ = lean_ctor_get(v___x_1855_, 0);
v_isSharedCheck_1871_ = !lean_is_exclusive(v___x_1855_);
if (v_isSharedCheck_1871_ == 0)
{
v___x_1866_ = v___x_1855_;
v_isShared_1867_ = v_isSharedCheck_1871_;
goto v_resetjp_1865_;
}
else
{
lean_inc(v_a_1864_);
lean_dec(v___x_1855_);
v___x_1866_ = lean_box(0);
v_isShared_1867_ = v_isSharedCheck_1871_;
goto v_resetjp_1865_;
}
v_resetjp_1865_:
{
lean_object* v___x_1869_; 
if (v_isShared_1867_ == 0)
{
lean_ctor_set_tag(v___x_1866_, 0);
v___x_1869_ = v___x_1866_;
goto v_reusejp_1868_;
}
else
{
lean_object* v_reuseFailAlloc_1870_; 
v_reuseFailAlloc_1870_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1870_, 0, v_a_1864_);
v___x_1869_ = v_reuseFailAlloc_1870_;
goto v_reusejp_1868_;
}
v_reusejp_1868_:
{
v___y_1833_ = v___y_1852_;
v___y_1834_ = v___x_1853_;
v___y_1835_ = v___x_1854_;
v_val_1836_ = v___x_1869_;
goto v___jp_1832_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_addDependencyEntries___boxed(lean_object* v_dep_1876_, lean_object* v_a_1877_, lean_object* v_a_1878_, lean_object* v_a_1879_){
_start:
{
lean_object* v_res_1880_; 
v_res_1880_ = l___private_Lake_Load_Resolve_0__Lake_addDependencyEntries(v_dep_1876_, v_a_1877_, v_a_1878_);
lean_dec_ref(v_a_1878_);
return v_res_1880_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_addDependencyEntries_spec__0(lean_object* v_dep_1881_, lean_object* v_as_1882_, size_t v_i_1883_, size_t v_stop_1884_, lean_object* v_b_1885_, lean_object* v___y_1886_, lean_object* v___y_1887_){
_start:
{
lean_object* v___x_1889_; 
v___x_1889_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_addDependencyEntries_spec__0___redArg(v_dep_1881_, v_as_1882_, v_i_1883_, v_stop_1884_, v_b_1885_, v___y_1886_);
return v___x_1889_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_addDependencyEntries_spec__0___boxed(lean_object* v_dep_1890_, lean_object* v_as_1891_, lean_object* v_i_1892_, lean_object* v_stop_1893_, lean_object* v_b_1894_, lean_object* v___y_1895_, lean_object* v___y_1896_, lean_object* v___y_1897_){
_start:
{
size_t v_i_boxed_1898_; size_t v_stop_boxed_1899_; lean_object* v_res_1900_; 
v_i_boxed_1898_ = lean_unbox_usize(v_i_1892_);
lean_dec(v_i_1892_);
v_stop_boxed_1899_ = lean_unbox_usize(v_stop_1893_);
lean_dec(v_stop_1893_);
v_res_1900_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_addDependencyEntries_spec__0(v_dep_1890_, v_as_1891_, v_i_boxed_1898_, v_stop_boxed_1899_, v_b_1894_, v___y_1895_, v___y_1896_);
lean_dec_ref(v___y_1896_);
lean_dec_ref(v_as_1891_);
return v_res_1900_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_updateAndMaterializeDep(lean_object* v_ws_1902_, lean_object* v_pkg_1903_, lean_object* v_dep_1904_, lean_object* v_a_1905_, lean_object* v_a_1906_){
_start:
{
uint8_t v___y_1909_; lean_object* v___y_1910_; lean_object* v_name_1940_; lean_object* v___x_1941_; 
v_name_1940_ = lean_ctor_get(v_dep_1904_, 0);
v___x_1941_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_a_1905_, v_name_1940_);
if (lean_obj_tag(v___x_1941_) == 1)
{
lean_object* v_val_1942_; lean_object* v_lakeEnv_1943_; lean_object* v_packages_1944_; lean_object* v___x_1945_; lean_object* v___x_1946_; lean_object* v_config_1947_; lean_object* v_dir_1948_; lean_object* v_toWorkspaceConfig_1949_; lean_object* v___x_1950_; lean_object* v___x_1951_; 
lean_dec_ref(v_dep_1904_);
lean_dec_ref(v_pkg_1903_);
v_val_1942_ = lean_ctor_get(v___x_1941_, 0);
lean_inc(v_val_1942_);
lean_dec_ref_known(v___x_1941_, 1);
v_lakeEnv_1943_ = lean_ctor_get(v_ws_1902_, 0);
lean_inc_ref(v_lakeEnv_1943_);
v_packages_1944_ = lean_ctor_get(v_ws_1902_, 4);
lean_inc_ref(v_packages_1944_);
lean_dec_ref(v_ws_1902_);
v___x_1945_ = lean_unsigned_to_nat(0u);
v___x_1946_ = lean_array_fget(v_packages_1944_, v___x_1945_);
lean_dec_ref(v_packages_1944_);
v_config_1947_ = lean_ctor_get(v___x_1946_, 6);
lean_inc_ref(v_config_1947_);
v_dir_1948_ = lean_ctor_get(v___x_1946_, 4);
lean_inc_ref(v_dir_1948_);
lean_dec(v___x_1946_);
v_toWorkspaceConfig_1949_ = lean_ctor_get(v_config_1947_, 0);
lean_inc_ref(v_toWorkspaceConfig_1949_);
lean_dec_ref(v_config_1947_);
v___x_1950_ = l_System_FilePath_normalize(v_toWorkspaceConfig_1949_);
v___x_1951_ = l_Lake_PackageEntry_materialize(v_val_1942_, v_lakeEnv_1943_, v_dir_1948_, v___x_1950_, v_a_1906_);
lean_dec_ref(v_lakeEnv_1943_);
if (lean_obj_tag(v___x_1951_) == 0)
{
lean_object* v_a_1952_; lean_object* v___x_1954_; uint8_t v_isShared_1955_; uint8_t v_isSharedCheck_1960_; 
v_a_1952_ = lean_ctor_get(v___x_1951_, 0);
v_isSharedCheck_1960_ = !lean_is_exclusive(v___x_1951_);
if (v_isSharedCheck_1960_ == 0)
{
v___x_1954_ = v___x_1951_;
v_isShared_1955_ = v_isSharedCheck_1960_;
goto v_resetjp_1953_;
}
else
{
lean_inc(v_a_1952_);
lean_dec(v___x_1951_);
v___x_1954_ = lean_box(0);
v_isShared_1955_ = v_isSharedCheck_1960_;
goto v_resetjp_1953_;
}
v_resetjp_1953_:
{
lean_object* v___x_1956_; lean_object* v___x_1958_; 
v___x_1956_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1956_, 0, v_a_1952_);
lean_ctor_set(v___x_1956_, 1, v_a_1905_);
if (v_isShared_1955_ == 0)
{
lean_ctor_set(v___x_1954_, 0, v___x_1956_);
v___x_1958_ = v___x_1954_;
goto v_reusejp_1957_;
}
else
{
lean_object* v_reuseFailAlloc_1959_; 
v_reuseFailAlloc_1959_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1959_, 0, v___x_1956_);
v___x_1958_ = v_reuseFailAlloc_1959_;
goto v_reusejp_1957_;
}
v_reusejp_1957_:
{
return v___x_1958_;
}
}
}
else
{
lean_object* v_a_1961_; lean_object* v___x_1963_; uint8_t v_isShared_1964_; uint8_t v_isSharedCheck_1968_; 
lean_dec(v_a_1905_);
v_a_1961_ = lean_ctor_get(v___x_1951_, 0);
v_isSharedCheck_1968_ = !lean_is_exclusive(v___x_1951_);
if (v_isSharedCheck_1968_ == 0)
{
v___x_1963_ = v___x_1951_;
v_isShared_1964_ = v_isSharedCheck_1968_;
goto v_resetjp_1962_;
}
else
{
lean_inc(v_a_1961_);
lean_dec(v___x_1951_);
v___x_1963_ = lean_box(0);
v_isShared_1964_ = v_isSharedCheck_1968_;
goto v_resetjp_1962_;
}
v_resetjp_1962_:
{
lean_object* v___x_1966_; 
if (v_isShared_1964_ == 0)
{
v___x_1966_ = v___x_1963_;
goto v_reusejp_1965_;
}
else
{
lean_object* v_reuseFailAlloc_1967_; 
v_reuseFailAlloc_1967_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1967_, 0, v_a_1961_);
v___x_1966_ = v_reuseFailAlloc_1967_;
goto v_reusejp_1965_;
}
v_reusejp_1965_:
{
return v___x_1966_;
}
}
}
}
else
{
lean_object* v_wsIdx_1969_; lean_object* v_relDir_1970_; uint8_t v___y_1972_; lean_object* v___x_1976_; uint8_t v___x_1977_; 
lean_dec(v___x_1941_);
v_wsIdx_1969_ = lean_ctor_get(v_pkg_1903_, 0);
lean_inc(v_wsIdx_1969_);
v_relDir_1970_ = lean_ctor_get(v_pkg_1903_, 5);
lean_inc_ref(v_relDir_1970_);
lean_dec_ref(v_pkg_1903_);
v___x_1976_ = lean_unsigned_to_nat(0u);
v___x_1977_ = lean_nat_dec_eq(v_wsIdx_1969_, v___x_1976_);
lean_dec(v_wsIdx_1969_);
if (v___x_1977_ == 0)
{
uint8_t v___x_1978_; 
v___x_1978_ = 1;
v___y_1972_ = v___x_1978_;
goto v___jp_1971_;
}
else
{
uint8_t v___x_1979_; 
v___x_1979_ = 0;
v___y_1972_ = v___x_1979_;
goto v___jp_1971_;
}
v___jp_1971_:
{
lean_object* v___x_1973_; uint8_t v___x_1974_; 
v___x_1973_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_updateAndMaterializeDep___closed__0));
v___x_1974_ = lean_string_dec_eq(v_relDir_1970_, v___x_1973_);
if (v___x_1974_ == 0)
{
lean_object* v___x_1975_; 
v___x_1975_ = l_Lake_joinRelative(v_relDir_1970_, v___x_1973_);
v___y_1909_ = v___y_1972_;
v___y_1910_ = v___x_1975_;
goto v___jp_1908_;
}
else
{
v___y_1909_ = v___y_1972_;
v___y_1910_ = v_relDir_1970_;
goto v___jp_1908_;
}
}
}
v___jp_1908_:
{
lean_object* v_lakeEnv_1911_; lean_object* v_packages_1912_; lean_object* v___x_1913_; lean_object* v___x_1914_; lean_object* v_config_1915_; lean_object* v_dir_1916_; lean_object* v_toWorkspaceConfig_1917_; lean_object* v___x_1918_; lean_object* v___x_1919_; 
v_lakeEnv_1911_ = lean_ctor_get(v_ws_1902_, 0);
lean_inc_ref(v_lakeEnv_1911_);
v_packages_1912_ = lean_ctor_get(v_ws_1902_, 4);
lean_inc_ref(v_packages_1912_);
lean_dec_ref(v_ws_1902_);
v___x_1913_ = lean_unsigned_to_nat(0u);
v___x_1914_ = lean_array_fget(v_packages_1912_, v___x_1913_);
lean_dec_ref(v_packages_1912_);
v_config_1915_ = lean_ctor_get(v___x_1914_, 6);
lean_inc_ref(v_config_1915_);
v_dir_1916_ = lean_ctor_get(v___x_1914_, 4);
lean_inc_ref(v_dir_1916_);
lean_dec(v___x_1914_);
v_toWorkspaceConfig_1917_ = lean_ctor_get(v_config_1915_, 0);
lean_inc_ref(v_toWorkspaceConfig_1917_);
lean_dec_ref(v_config_1915_);
v___x_1918_ = l_System_FilePath_normalize(v_toWorkspaceConfig_1917_);
v___x_1919_ = l_Lake_Dependency_materialize(v_dep_1904_, v___y_1909_, v_lakeEnv_1911_, v_dir_1916_, v___x_1918_, v___y_1910_, v_a_1906_);
if (lean_obj_tag(v___x_1919_) == 0)
{
lean_object* v_a_1920_; lean_object* v___x_1922_; uint8_t v_isShared_1923_; uint8_t v_isSharedCheck_1931_; 
v_a_1920_ = lean_ctor_get(v___x_1919_, 0);
v_isSharedCheck_1931_ = !lean_is_exclusive(v___x_1919_);
if (v_isSharedCheck_1931_ == 0)
{
v___x_1922_ = v___x_1919_;
v_isShared_1923_ = v_isSharedCheck_1931_;
goto v_resetjp_1921_;
}
else
{
lean_inc(v_a_1920_);
lean_dec(v___x_1919_);
v___x_1922_ = lean_box(0);
v_isShared_1923_ = v_isSharedCheck_1931_;
goto v_resetjp_1921_;
}
v_resetjp_1921_:
{
lean_object* v_manifestEntry_1924_; lean_object* v_name_1925_; lean_object* v___x_1926_; lean_object* v___x_1927_; lean_object* v___x_1929_; 
v_manifestEntry_1924_ = lean_ctor_get(v_a_1920_, 4);
v_name_1925_ = lean_ctor_get(v_manifestEntry_1924_, 0);
lean_inc_ref(v_manifestEntry_1924_);
lean_inc(v_name_1925_);
v___x_1926_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_name_1925_, v_manifestEntry_1924_, v_a_1905_);
v___x_1927_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1927_, 0, v_a_1920_);
lean_ctor_set(v___x_1927_, 1, v___x_1926_);
if (v_isShared_1923_ == 0)
{
lean_ctor_set(v___x_1922_, 0, v___x_1927_);
v___x_1929_ = v___x_1922_;
goto v_reusejp_1928_;
}
else
{
lean_object* v_reuseFailAlloc_1930_; 
v_reuseFailAlloc_1930_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1930_, 0, v___x_1927_);
v___x_1929_ = v_reuseFailAlloc_1930_;
goto v_reusejp_1928_;
}
v_reusejp_1928_:
{
return v___x_1929_;
}
}
}
else
{
lean_object* v_a_1932_; lean_object* v___x_1934_; uint8_t v_isShared_1935_; uint8_t v_isSharedCheck_1939_; 
lean_dec(v_a_1905_);
v_a_1932_ = lean_ctor_get(v___x_1919_, 0);
v_isSharedCheck_1939_ = !lean_is_exclusive(v___x_1919_);
if (v_isSharedCheck_1939_ == 0)
{
v___x_1934_ = v___x_1919_;
v_isShared_1935_ = v_isSharedCheck_1939_;
goto v_resetjp_1933_;
}
else
{
lean_inc(v_a_1932_);
lean_dec(v___x_1919_);
v___x_1934_ = lean_box(0);
v_isShared_1935_ = v_isSharedCheck_1939_;
goto v_resetjp_1933_;
}
v_resetjp_1933_:
{
lean_object* v___x_1937_; 
if (v_isShared_1935_ == 0)
{
v___x_1937_ = v___x_1934_;
goto v_reusejp_1936_;
}
else
{
lean_object* v_reuseFailAlloc_1938_; 
v_reuseFailAlloc_1938_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1938_, 0, v_a_1932_);
v___x_1937_ = v_reuseFailAlloc_1938_;
goto v_reusejp_1936_;
}
v_reusejp_1936_:
{
return v___x_1937_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_updateAndMaterializeDep___boxed(lean_object* v_ws_1980_, lean_object* v_pkg_1981_, lean_object* v_dep_1982_, lean_object* v_a_1983_, lean_object* v_a_1984_, lean_object* v_a_1985_){
_start:
{
lean_object* v_res_1986_; 
v_res_1986_ = l___private_Lake_Load_Resolve_0__Lake_updateAndMaterializeDep(v_ws_1980_, v_pkg_1981_, v_dep_1982_, v_a_1983_, v_a_1984_);
lean_dec_ref(v_a_1984_);
return v_res_1986_;
}
}
static uint32_t _init_l___private_Lake_Load_Resolve_0__Lake_restartCode(void){
_start:
{
uint32_t v___x_1987_; 
v___x_1987_ = 4;
return v___x_1987_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_ToolchainState_replace(lean_object* v_src_1988_, lean_object* v_tc_x3f_1989_, uint8_t v_fixed_1990_, lean_object* v_self_1991_){
_start:
{
lean_object* v_clashes_1992_; lean_object* v___x_1994_; uint8_t v_isShared_1995_; uint8_t v_isSharedCheck_1999_; 
v_clashes_1992_ = lean_ctor_get(v_self_1991_, 2);
v_isSharedCheck_1999_ = !lean_is_exclusive(v_self_1991_);
if (v_isSharedCheck_1999_ == 0)
{
lean_object* v_unused_2000_; lean_object* v_unused_2001_; 
v_unused_2000_ = lean_ctor_get(v_self_1991_, 1);
lean_dec(v_unused_2000_);
v_unused_2001_ = lean_ctor_get(v_self_1991_, 0);
lean_dec(v_unused_2001_);
v___x_1994_ = v_self_1991_;
v_isShared_1995_ = v_isSharedCheck_1999_;
goto v_resetjp_1993_;
}
else
{
lean_inc(v_clashes_1992_);
lean_dec(v_self_1991_);
v___x_1994_ = lean_box(0);
v_isShared_1995_ = v_isSharedCheck_1999_;
goto v_resetjp_1993_;
}
v_resetjp_1993_:
{
lean_object* v___x_1997_; 
if (v_isShared_1995_ == 0)
{
lean_ctor_set(v___x_1994_, 1, v_tc_x3f_1989_);
lean_ctor_set(v___x_1994_, 0, v_src_1988_);
v___x_1997_ = v___x_1994_;
goto v_reusejp_1996_;
}
else
{
lean_object* v_reuseFailAlloc_1998_; 
v_reuseFailAlloc_1998_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_1998_, 0, v_src_1988_);
lean_ctor_set(v_reuseFailAlloc_1998_, 1, v_tc_x3f_1989_);
lean_ctor_set(v_reuseFailAlloc_1998_, 2, v_clashes_1992_);
v___x_1997_ = v_reuseFailAlloc_1998_;
goto v_reusejp_1996_;
}
v_reusejp_1996_:
{
lean_ctor_set_uint8(v___x_1997_, sizeof(void*)*3, v_fixed_1990_);
return v___x_1997_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_ToolchainState_replace___boxed(lean_object* v_src_2002_, lean_object* v_tc_x3f_2003_, lean_object* v_fixed_2004_, lean_object* v_self_2005_){
_start:
{
uint8_t v_fixed_boxed_2006_; lean_object* v_res_2007_; 
v_fixed_boxed_2006_ = lean_unbox(v_fixed_2004_);
v_res_2007_ = l___private_Lake_Load_Resolve_0__Lake_ToolchainState_replace(v_src_2002_, v_tc_x3f_2003_, v_fixed_boxed_2006_, v_self_2005_);
return v_res_2007_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_ToolchainState_addClash(lean_object* v_src_2008_, lean_object* v_ver_2009_, uint8_t v_fixed_2010_, lean_object* v_self_2011_){
_start:
{
lean_object* v_src_2012_; lean_object* v_tc_x3f_2013_; lean_object* v_clashes_2014_; uint8_t v_fixed_2015_; lean_object* v___x_2017_; uint8_t v_isShared_2018_; uint8_t v_isSharedCheck_2024_; 
v_src_2012_ = lean_ctor_get(v_self_2011_, 0);
v_tc_x3f_2013_ = lean_ctor_get(v_self_2011_, 1);
v_clashes_2014_ = lean_ctor_get(v_self_2011_, 2);
v_fixed_2015_ = lean_ctor_get_uint8(v_self_2011_, sizeof(void*)*3);
v_isSharedCheck_2024_ = !lean_is_exclusive(v_self_2011_);
if (v_isSharedCheck_2024_ == 0)
{
v___x_2017_ = v_self_2011_;
v_isShared_2018_ = v_isSharedCheck_2024_;
goto v_resetjp_2016_;
}
else
{
lean_inc(v_clashes_2014_);
lean_inc(v_tc_x3f_2013_);
lean_inc(v_src_2012_);
lean_dec(v_self_2011_);
v___x_2017_ = lean_box(0);
v_isShared_2018_ = v_isSharedCheck_2024_;
goto v_resetjp_2016_;
}
v_resetjp_2016_:
{
lean_object* v___x_2019_; lean_object* v___x_2020_; lean_object* v___x_2022_; 
v___x_2019_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_2019_, 0, v_src_2008_);
lean_ctor_set(v___x_2019_, 1, v_ver_2009_);
lean_ctor_set_uint8(v___x_2019_, sizeof(void*)*2, v_fixed_2010_);
v___x_2020_ = lean_array_push(v_clashes_2014_, v___x_2019_);
if (v_isShared_2018_ == 0)
{
lean_ctor_set(v___x_2017_, 2, v___x_2020_);
v___x_2022_ = v___x_2017_;
goto v_reusejp_2021_;
}
else
{
lean_object* v_reuseFailAlloc_2023_; 
v_reuseFailAlloc_2023_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_2023_, 0, v_src_2012_);
lean_ctor_set(v_reuseFailAlloc_2023_, 1, v_tc_x3f_2013_);
lean_ctor_set(v_reuseFailAlloc_2023_, 2, v___x_2020_);
lean_ctor_set_uint8(v_reuseFailAlloc_2023_, sizeof(void*)*3, v_fixed_2015_);
v___x_2022_ = v_reuseFailAlloc_2023_;
goto v_reusejp_2021_;
}
v_reusejp_2021_:
{
return v___x_2022_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_ToolchainState_addClash___boxed(lean_object* v_src_2025_, lean_object* v_ver_2026_, lean_object* v_fixed_2027_, lean_object* v_self_2028_){
_start:
{
uint8_t v_fixed_boxed_2029_; lean_object* v_res_2030_; 
v_fixed_boxed_2029_ = lean_unbox(v_fixed_2027_);
v_res_2030_ = l___private_Lake_Load_Resolve_0__Lake_ToolchainState_addClash(v_src_2025_, v_ver_2026_, v_fixed_boxed_2029_, v_self_2028_);
return v_res_2030_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain_spec__0_spec__0(lean_object* v___x_2035_, lean_object* v_as_2036_, size_t v_i_2037_, size_t v_stop_2038_, lean_object* v_b_2039_){
_start:
{
uint8_t v___x_2040_; 
v___x_2040_ = lean_usize_dec_eq(v_i_2037_, v_stop_2038_);
if (v___x_2040_ == 0)
{
lean_object* v___x_2041_; lean_object* v_src_2042_; lean_object* v_ver_2043_; uint8_t v_fixed_2044_; lean_object* v___x_2045_; uint8_t v___x_2046_; lean_object* v___y_2048_; 
v___x_2041_ = lean_array_uget_borrowed(v_as_2036_, v_i_2037_);
v_src_2042_ = lean_ctor_get(v___x_2041_, 0);
v_ver_2043_ = lean_ctor_get(v___x_2041_, 1);
v_fixed_2044_ = lean_ctor_get_uint8(v___x_2041_, sizeof(void*)*2);
v___x_2045_ = lean_unsigned_to_nat(0u);
v___x_2046_ = lean_nat_dec_lt(v___x_2045_, v___x_2035_);
if (v_fixed_2044_ == 0)
{
lean_object* v___x_2061_; 
v___x_2061_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain_spec__0_spec__0___closed__2));
v___y_2048_ = v___x_2061_;
goto v___jp_2047_;
}
else
{
lean_object* v___x_2062_; 
v___x_2062_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain_spec__0_spec__0___closed__3));
v___y_2048_ = v___x_2062_;
goto v___jp_2047_;
}
v___jp_2047_:
{
lean_object* v___x_2049_; lean_object* v___x_2050_; lean_object* v___x_2051_; lean_object* v___x_2052_; lean_object* v___x_2053_; lean_object* v___x_2054_; lean_object* v___x_2055_; lean_object* v___x_2056_; lean_object* v___x_2057_; size_t v___x_2058_; size_t v___x_2059_; 
v___x_2049_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain_spec__0_spec__0___closed__0));
v___x_2050_ = lean_string_append(v_b_2039_, v___x_2049_);
v___x_2051_ = l_Lake_ToolchainVer_toString___override(v_ver_2043_);
v___x_2052_ = lean_string_append(v___x_2050_, v___x_2051_);
lean_dec_ref(v___x_2051_);
v___x_2053_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain_spec__0_spec__0___closed__1));
v___x_2054_ = lean_string_append(v___x_2052_, v___x_2053_);
lean_inc(v_src_2042_);
v___x_2055_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_src_2042_, v___x_2046_);
v___x_2056_ = lean_string_append(v___x_2054_, v___x_2055_);
lean_dec_ref(v___x_2055_);
v___x_2057_ = lean_string_append(v___x_2056_, v___y_2048_);
v___x_2058_ = ((size_t)1ULL);
v___x_2059_ = lean_usize_add(v_i_2037_, v___x_2058_);
v_i_2037_ = v___x_2059_;
v_b_2039_ = v___x_2057_;
goto _start;
}
}
else
{
return v_b_2039_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain_spec__0_spec__0___boxed(lean_object* v___x_2063_, lean_object* v_as_2064_, lean_object* v_i_2065_, lean_object* v_stop_2066_, lean_object* v_b_2067_){
_start:
{
size_t v_i_boxed_2068_; size_t v_stop_boxed_2069_; lean_object* v_res_2070_; 
v_i_boxed_2068_ = lean_unbox_usize(v_i_2065_);
lean_dec(v_i_2065_);
v_stop_boxed_2069_ = lean_unbox_usize(v_stop_2066_);
lean_dec(v_stop_2066_);
v_res_2070_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain_spec__0_spec__0(v___x_2063_, v_as_2064_, v_i_boxed_2068_, v_stop_boxed_2069_, v_b_2067_);
lean_dec_ref(v_as_2064_);
lean_dec(v___x_2063_);
return v_res_2070_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain_spec__0(lean_object* v___x_2071_, lean_object* v_as_2072_, size_t v_i_2073_, size_t v_stop_2074_, lean_object* v_b_2075_){
_start:
{
uint8_t v___x_2076_; 
v___x_2076_ = lean_usize_dec_eq(v_i_2073_, v_stop_2074_);
if (v___x_2076_ == 0)
{
lean_object* v___x_2077_; lean_object* v_src_2078_; lean_object* v_ver_2079_; uint8_t v_fixed_2080_; lean_object* v___x_2081_; uint8_t v___x_2082_; lean_object* v___y_2084_; 
v___x_2077_ = lean_array_uget_borrowed(v_as_2072_, v_i_2073_);
v_src_2078_ = lean_ctor_get(v___x_2077_, 0);
v_ver_2079_ = lean_ctor_get(v___x_2077_, 1);
v_fixed_2080_ = lean_ctor_get_uint8(v___x_2077_, sizeof(void*)*2);
v___x_2081_ = lean_unsigned_to_nat(0u);
v___x_2082_ = lean_nat_dec_lt(v___x_2081_, v___x_2071_);
if (v_fixed_2080_ == 0)
{
lean_object* v___x_2097_; 
v___x_2097_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain_spec__0_spec__0___closed__2));
v___y_2084_ = v___x_2097_;
goto v___jp_2083_;
}
else
{
lean_object* v___x_2098_; 
v___x_2098_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain_spec__0_spec__0___closed__3));
v___y_2084_ = v___x_2098_;
goto v___jp_2083_;
}
v___jp_2083_:
{
lean_object* v___x_2085_; lean_object* v___x_2086_; lean_object* v___x_2087_; lean_object* v___x_2088_; lean_object* v___x_2089_; lean_object* v___x_2090_; lean_object* v___x_2091_; lean_object* v___x_2092_; lean_object* v___x_2093_; size_t v___x_2094_; size_t v___x_2095_; lean_object* v___x_2096_; 
v___x_2085_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain_spec__0_spec__0___closed__0));
v___x_2086_ = lean_string_append(v_b_2075_, v___x_2085_);
v___x_2087_ = l_Lake_ToolchainVer_toString___override(v_ver_2079_);
v___x_2088_ = lean_string_append(v___x_2086_, v___x_2087_);
lean_dec_ref(v___x_2087_);
v___x_2089_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain_spec__0_spec__0___closed__1));
v___x_2090_ = lean_string_append(v___x_2088_, v___x_2089_);
lean_inc(v_src_2078_);
v___x_2091_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_src_2078_, v___x_2082_);
v___x_2092_ = lean_string_append(v___x_2090_, v___x_2091_);
lean_dec_ref(v___x_2091_);
v___x_2093_ = lean_string_append(v___x_2092_, v___y_2084_);
v___x_2094_ = ((size_t)1ULL);
v___x_2095_ = lean_usize_add(v_i_2073_, v___x_2094_);
v___x_2096_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain_spec__0_spec__0(v___x_2071_, v_as_2072_, v___x_2095_, v_stop_2074_, v___x_2093_);
return v___x_2096_;
}
}
else
{
return v_b_2075_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain_spec__0___boxed(lean_object* v___x_2099_, lean_object* v_as_2100_, lean_object* v_i_2101_, lean_object* v_stop_2102_, lean_object* v_b_2103_){
_start:
{
size_t v_i_boxed_2104_; size_t v_stop_boxed_2105_; lean_object* v_res_2106_; 
v_i_boxed_2104_ = lean_unbox_usize(v_i_2101_);
lean_dec(v_i_2101_);
v_stop_boxed_2105_ = lean_unbox_usize(v_stop_2102_);
lean_dec(v_stop_2102_);
v_res_2106_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain_spec__0(v___x_2099_, v_as_2100_, v_i_boxed_2104_, v_stop_boxed_2105_, v_b_2103_);
lean_dec_ref(v_as_2100_);
lean_dec(v___x_2099_);
return v_res_2106_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain_spec__1(lean_object* v___x_2107_, lean_object* v_as_2108_, size_t v_i_2109_, size_t v_stop_2110_, lean_object* v_b_2111_, lean_object* v___y_2112_){
_start:
{
lean_object* v_a_2115_; uint8_t v___x_2119_; 
v___x_2119_ = lean_usize_dec_eq(v_i_2109_, v_stop_2110_);
if (v___x_2119_ == 0)
{
lean_object* v___x_2120_; lean_object* v_relPkgDir_2121_; lean_object* v_manifestEntry_2122_; lean_object* v___x_2123_; lean_object* v___x_2124_; lean_object* v___x_2125_; lean_object* v___x_2126_; 
v___x_2120_ = lean_array_uget_borrowed(v_as_2108_, v_i_2109_);
v_relPkgDir_2121_ = lean_ctor_get(v___x_2120_, 1);
v_manifestEntry_2122_ = lean_ctor_get(v___x_2120_, 4);
lean_inc_ref(v_relPkgDir_2121_);
lean_inc_ref(v___x_2107_);
v___x_2123_ = l_Lake_joinRelative(v___x_2107_, v_relPkgDir_2121_);
v___x_2124_ = l_Lake_toolchainFileName;
v___x_2125_ = l_System_FilePath_join(v___x_2123_, v___x_2124_);
v___x_2126_ = l_Lake_ToolchainVer_ofFile_x3f(v___x_2125_);
lean_dec_ref(v___x_2125_);
if (lean_obj_tag(v___x_2126_) == 0)
{
lean_object* v_a_2127_; 
v_a_2127_ = lean_ctor_get(v___x_2126_, 0);
lean_inc(v_a_2127_);
lean_dec_ref_known(v___x_2126_, 1);
if (lean_obj_tag(v_a_2127_) == 1)
{
lean_object* v_tc_x3f_2128_; 
v_tc_x3f_2128_ = lean_ctor_get(v_b_2111_, 1);
if (lean_obj_tag(v_tc_x3f_2128_) == 1)
{
lean_object* v_val_2129_; lean_object* v_src_2130_; lean_object* v_clashes_2131_; uint8_t v_fixed_2132_; lean_object* v_val_2133_; uint8_t v___x_2134_; uint8_t v___y_2136_; 
v_val_2129_ = lean_ctor_get(v_a_2127_, 0);
v_src_2130_ = lean_ctor_get(v_b_2111_, 0);
v_clashes_2131_ = lean_ctor_get(v_b_2111_, 2);
v_fixed_2132_ = lean_ctor_get_uint8(v_b_2111_, sizeof(void*)*3);
v_val_2133_ = lean_ctor_get(v_tc_x3f_2128_, 0);
v___x_2134_ = l_Lake_MaterializedDep_fixedToolchain(v___x_2120_);
if (v___x_2134_ == 0)
{
uint8_t v___x_2145_; 
v___x_2145_ = l_Lake_ToolchainVer_ble(v_val_2129_, v_val_2133_);
if (v___x_2145_ == 0)
{
lean_inc_ref(v_clashes_2131_);
lean_inc(v_src_2130_);
lean_inc_ref(v_tc_x3f_2128_);
lean_dec_ref(v_b_2111_);
if (v_fixed_2132_ == 0)
{
goto v___jp_2143_;
}
else
{
if (v___x_2145_ == 0)
{
v___y_2136_ = v___x_2145_;
goto v___jp_2135_;
}
else
{
goto v___jp_2143_;
}
}
}
else
{
lean_dec_ref_known(v_a_2127_, 1);
v_a_2115_ = v_b_2111_;
goto v___jp_2114_;
}
}
else
{
if (v_fixed_2132_ == 0)
{
lean_object* v___x_2147_; uint8_t v_isShared_2148_; uint8_t v_isSharedCheck_2160_; 
lean_inc_ref(v_clashes_2131_);
lean_inc(v_src_2130_);
lean_inc_ref(v_tc_x3f_2128_);
v_isSharedCheck_2160_ = !lean_is_exclusive(v_b_2111_);
if (v_isSharedCheck_2160_ == 0)
{
lean_object* v_unused_2161_; lean_object* v_unused_2162_; lean_object* v_unused_2163_; 
v_unused_2161_ = lean_ctor_get(v_b_2111_, 2);
lean_dec(v_unused_2161_);
v_unused_2162_ = lean_ctor_get(v_b_2111_, 1);
lean_dec(v_unused_2162_);
v_unused_2163_ = lean_ctor_get(v_b_2111_, 0);
lean_dec(v_unused_2163_);
v___x_2147_ = v_b_2111_;
v_isShared_2148_ = v_isSharedCheck_2160_;
goto v_resetjp_2146_;
}
else
{
lean_dec(v_b_2111_);
v___x_2147_ = lean_box(0);
v_isShared_2148_ = v_isSharedCheck_2160_;
goto v_resetjp_2146_;
}
v_resetjp_2146_:
{
uint8_t v___x_2149_; 
v___x_2149_ = l_Lake_ToolchainVer_ble(v_val_2133_, v_val_2129_);
if (v___x_2149_ == 0)
{
lean_object* v_name_2150_; lean_object* v___x_2151_; lean_object* v___x_2152_; lean_object* v___x_2154_; 
lean_inc(v_val_2129_);
lean_dec_ref_known(v_a_2127_, 1);
v_name_2150_ = lean_ctor_get(v_manifestEntry_2122_, 0);
lean_inc(v_name_2150_);
v___x_2151_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_2151_, 0, v_name_2150_);
lean_ctor_set(v___x_2151_, 1, v_val_2129_);
lean_ctor_set_uint8(v___x_2151_, sizeof(void*)*2, v___x_2134_);
v___x_2152_ = lean_array_push(v_clashes_2131_, v___x_2151_);
if (v_isShared_2148_ == 0)
{
lean_ctor_set(v___x_2147_, 2, v___x_2152_);
v___x_2154_ = v___x_2147_;
goto v_reusejp_2153_;
}
else
{
lean_object* v_reuseFailAlloc_2155_; 
v_reuseFailAlloc_2155_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_2155_, 0, v_src_2130_);
lean_ctor_set(v_reuseFailAlloc_2155_, 1, v_tc_x3f_2128_);
lean_ctor_set(v_reuseFailAlloc_2155_, 2, v___x_2152_);
lean_ctor_set_uint8(v_reuseFailAlloc_2155_, sizeof(void*)*3, v_fixed_2132_);
v___x_2154_ = v_reuseFailAlloc_2155_;
goto v_reusejp_2153_;
}
v_reusejp_2153_:
{
v_a_2115_ = v___x_2154_;
goto v___jp_2114_;
}
}
else
{
lean_object* v_name_2156_; lean_object* v___x_2158_; 
lean_dec(v_src_2130_);
lean_dec_ref_known(v_tc_x3f_2128_, 1);
v_name_2156_ = lean_ctor_get(v_manifestEntry_2122_, 0);
lean_inc(v_name_2156_);
if (v_isShared_2148_ == 0)
{
lean_ctor_set(v___x_2147_, 1, v_a_2127_);
lean_ctor_set(v___x_2147_, 0, v_name_2156_);
v___x_2158_ = v___x_2147_;
goto v_reusejp_2157_;
}
else
{
lean_object* v_reuseFailAlloc_2159_; 
v_reuseFailAlloc_2159_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_2159_, 0, v_name_2156_);
lean_ctor_set(v_reuseFailAlloc_2159_, 1, v_a_2127_);
lean_ctor_set(v_reuseFailAlloc_2159_, 2, v_clashes_2131_);
v___x_2158_ = v_reuseFailAlloc_2159_;
goto v_reusejp_2157_;
}
v_reusejp_2157_:
{
lean_ctor_set_uint8(v___x_2158_, sizeof(void*)*3, v___x_2134_);
v_a_2115_ = v___x_2158_;
goto v___jp_2114_;
}
}
}
}
else
{
uint8_t v___x_2164_; 
lean_inc_n(v_val_2129_, 2);
lean_dec_ref_known(v_a_2127_, 1);
lean_inc(v_val_2133_);
v___x_2164_ = l_Lake_instDecidableEqToolchainVer_decEq(v_val_2133_, v_val_2129_);
if (v___x_2164_ == 0)
{
lean_object* v___x_2166_; uint8_t v_isShared_2167_; uint8_t v_isSharedCheck_2174_; 
lean_inc_ref(v_clashes_2131_);
lean_inc(v_src_2130_);
lean_inc_ref(v_tc_x3f_2128_);
v_isSharedCheck_2174_ = !lean_is_exclusive(v_b_2111_);
if (v_isSharedCheck_2174_ == 0)
{
lean_object* v_unused_2175_; lean_object* v_unused_2176_; lean_object* v_unused_2177_; 
v_unused_2175_ = lean_ctor_get(v_b_2111_, 2);
lean_dec(v_unused_2175_);
v_unused_2176_ = lean_ctor_get(v_b_2111_, 1);
lean_dec(v_unused_2176_);
v_unused_2177_ = lean_ctor_get(v_b_2111_, 0);
lean_dec(v_unused_2177_);
v___x_2166_ = v_b_2111_;
v_isShared_2167_ = v_isSharedCheck_2174_;
goto v_resetjp_2165_;
}
else
{
lean_dec(v_b_2111_);
v___x_2166_ = lean_box(0);
v_isShared_2167_ = v_isSharedCheck_2174_;
goto v_resetjp_2165_;
}
v_resetjp_2165_:
{
lean_object* v_name_2168_; lean_object* v___x_2169_; lean_object* v___x_2170_; lean_object* v___x_2172_; 
v_name_2168_ = lean_ctor_get(v_manifestEntry_2122_, 0);
lean_inc(v_name_2168_);
v___x_2169_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_2169_, 0, v_name_2168_);
lean_ctor_set(v___x_2169_, 1, v_val_2129_);
lean_ctor_set_uint8(v___x_2169_, sizeof(void*)*2, v___x_2134_);
v___x_2170_ = lean_array_push(v_clashes_2131_, v___x_2169_);
if (v_isShared_2167_ == 0)
{
lean_ctor_set(v___x_2166_, 2, v___x_2170_);
v___x_2172_ = v___x_2166_;
goto v_reusejp_2171_;
}
else
{
lean_object* v_reuseFailAlloc_2173_; 
v_reuseFailAlloc_2173_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_2173_, 0, v_src_2130_);
lean_ctor_set(v_reuseFailAlloc_2173_, 1, v_tc_x3f_2128_);
lean_ctor_set(v_reuseFailAlloc_2173_, 2, v___x_2170_);
lean_ctor_set_uint8(v_reuseFailAlloc_2173_, sizeof(void*)*3, v_fixed_2132_);
v___x_2172_ = v_reuseFailAlloc_2173_;
goto v_reusejp_2171_;
}
v_reusejp_2171_:
{
v_a_2115_ = v___x_2172_;
goto v___jp_2114_;
}
}
}
else
{
lean_dec(v_val_2129_);
v_a_2115_ = v_b_2111_;
goto v___jp_2114_;
}
}
}
v___jp_2135_:
{
if (v___y_2136_ == 0)
{
lean_object* v_name_2137_; lean_object* v___x_2138_; lean_object* v___x_2139_; lean_object* v___x_2140_; 
lean_inc(v_val_2129_);
lean_dec_ref_known(v_a_2127_, 1);
v_name_2137_ = lean_ctor_get(v_manifestEntry_2122_, 0);
lean_inc(v_name_2137_);
v___x_2138_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_2138_, 0, v_name_2137_);
lean_ctor_set(v___x_2138_, 1, v_val_2129_);
lean_ctor_set_uint8(v___x_2138_, sizeof(void*)*2, v___x_2134_);
v___x_2139_ = lean_array_push(v_clashes_2131_, v___x_2138_);
v___x_2140_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_2140_, 0, v_src_2130_);
lean_ctor_set(v___x_2140_, 1, v_tc_x3f_2128_);
lean_ctor_set(v___x_2140_, 2, v___x_2139_);
lean_ctor_set_uint8(v___x_2140_, sizeof(void*)*3, v_fixed_2132_);
v_a_2115_ = v___x_2140_;
goto v___jp_2114_;
}
else
{
lean_object* v_name_2141_; lean_object* v___x_2142_; 
lean_dec(v_src_2130_);
lean_dec_ref_known(v_tc_x3f_2128_, 1);
v_name_2141_ = lean_ctor_get(v_manifestEntry_2122_, 0);
lean_inc(v_name_2141_);
v___x_2142_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_2142_, 0, v_name_2141_);
lean_ctor_set(v___x_2142_, 1, v_a_2127_);
lean_ctor_set(v___x_2142_, 2, v_clashes_2131_);
lean_ctor_set_uint8(v___x_2142_, sizeof(void*)*3, v___x_2134_);
v_a_2115_ = v___x_2142_;
goto v___jp_2114_;
}
}
v___jp_2143_:
{
uint8_t v___x_2144_; 
v___x_2144_ = l_Lake_ToolchainVer_blt(v_val_2133_, v_val_2129_);
v___y_2136_ = v___x_2144_;
goto v___jp_2135_;
}
}
else
{
lean_object* v_clashes_2178_; lean_object* v___x_2180_; uint8_t v_isShared_2181_; uint8_t v_isSharedCheck_2187_; 
v_clashes_2178_ = lean_ctor_get(v_b_2111_, 2);
v_isSharedCheck_2187_ = !lean_is_exclusive(v_b_2111_);
if (v_isSharedCheck_2187_ == 0)
{
lean_object* v_unused_2188_; lean_object* v_unused_2189_; 
v_unused_2188_ = lean_ctor_get(v_b_2111_, 1);
lean_dec(v_unused_2188_);
v_unused_2189_ = lean_ctor_get(v_b_2111_, 0);
lean_dec(v_unused_2189_);
v___x_2180_ = v_b_2111_;
v_isShared_2181_ = v_isSharedCheck_2187_;
goto v_resetjp_2179_;
}
else
{
lean_inc(v_clashes_2178_);
lean_dec(v_b_2111_);
v___x_2180_ = lean_box(0);
v_isShared_2181_ = v_isSharedCheck_2187_;
goto v_resetjp_2179_;
}
v_resetjp_2179_:
{
lean_object* v_name_2182_; uint8_t v___x_2183_; lean_object* v___x_2185_; 
v_name_2182_ = lean_ctor_get(v_manifestEntry_2122_, 0);
v___x_2183_ = l_Lake_MaterializedDep_fixedToolchain(v___x_2120_);
lean_inc(v_name_2182_);
if (v_isShared_2181_ == 0)
{
lean_ctor_set(v___x_2180_, 1, v_a_2127_);
lean_ctor_set(v___x_2180_, 0, v_name_2182_);
v___x_2185_ = v___x_2180_;
goto v_reusejp_2184_;
}
else
{
lean_object* v_reuseFailAlloc_2186_; 
v_reuseFailAlloc_2186_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_2186_, 0, v_name_2182_);
lean_ctor_set(v_reuseFailAlloc_2186_, 1, v_a_2127_);
lean_ctor_set(v_reuseFailAlloc_2186_, 2, v_clashes_2178_);
v___x_2185_ = v_reuseFailAlloc_2186_;
goto v_reusejp_2184_;
}
v_reusejp_2184_:
{
lean_ctor_set_uint8(v___x_2185_, sizeof(void*)*3, v___x_2183_);
v_a_2115_ = v___x_2185_;
goto v___jp_2114_;
}
}
}
}
else
{
lean_dec(v_a_2127_);
v_a_2115_ = v_b_2111_;
goto v___jp_2114_;
}
}
else
{
lean_object* v_a_2190_; lean_object* v___x_2192_; uint8_t v_isShared_2193_; uint8_t v_isSharedCheck_2202_; 
lean_dec_ref(v_b_2111_);
lean_dec_ref(v___x_2107_);
v_a_2190_ = lean_ctor_get(v___x_2126_, 0);
v_isSharedCheck_2202_ = !lean_is_exclusive(v___x_2126_);
if (v_isSharedCheck_2202_ == 0)
{
v___x_2192_ = v___x_2126_;
v_isShared_2193_ = v_isSharedCheck_2202_;
goto v_resetjp_2191_;
}
else
{
lean_inc(v_a_2190_);
lean_dec(v___x_2126_);
v___x_2192_ = lean_box(0);
v_isShared_2193_ = v_isSharedCheck_2202_;
goto v_resetjp_2191_;
}
v_resetjp_2191_:
{
lean_object* v___x_2194_; uint8_t v___x_2195_; lean_object* v___x_2196_; lean_object* v___x_2197_; lean_object* v___x_2198_; lean_object* v___x_2200_; 
v___x_2194_ = lean_io_error_to_string(v_a_2190_);
v___x_2195_ = 3;
v___x_2196_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2196_, 0, v___x_2194_);
lean_ctor_set_uint8(v___x_2196_, sizeof(void*)*1, v___x_2195_);
lean_inc_ref(v___y_2112_);
v___x_2197_ = lean_apply_2(v___y_2112_, v___x_2196_, lean_box(0));
v___x_2198_ = lean_box(0);
if (v_isShared_2193_ == 0)
{
lean_ctor_set(v___x_2192_, 0, v___x_2198_);
v___x_2200_ = v___x_2192_;
goto v_reusejp_2199_;
}
else
{
lean_object* v_reuseFailAlloc_2201_; 
v_reuseFailAlloc_2201_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2201_, 0, v___x_2198_);
v___x_2200_ = v_reuseFailAlloc_2201_;
goto v_reusejp_2199_;
}
v_reusejp_2199_:
{
return v___x_2200_;
}
}
}
}
else
{
lean_object* v___x_2203_; 
lean_dec_ref(v___x_2107_);
v___x_2203_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2203_, 0, v_b_2111_);
return v___x_2203_;
}
v___jp_2114_:
{
size_t v___x_2116_; size_t v___x_2117_; 
v___x_2116_ = ((size_t)1ULL);
v___x_2117_ = lean_usize_add(v_i_2109_, v___x_2116_);
v_i_2109_ = v___x_2117_;
v_b_2111_ = v_a_2115_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain_spec__1___boxed(lean_object* v___x_2204_, lean_object* v_as_2205_, lean_object* v_i_2206_, lean_object* v_stop_2207_, lean_object* v_b_2208_, lean_object* v___y_2209_, lean_object* v___y_2210_){
_start:
{
size_t v_i_boxed_2211_; size_t v_stop_boxed_2212_; lean_object* v_res_2213_; 
v_i_boxed_2211_ = lean_unbox_usize(v_i_2206_);
lean_dec(v_i_2206_);
v_stop_boxed_2212_ = lean_unbox_usize(v_stop_2207_);
lean_dec(v_stop_2207_);
v_res_2213_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain_spec__1(v___x_2204_, v_as_2205_, v_i_boxed_2211_, v_stop_boxed_2212_, v_b_2208_, v___y_2209_);
lean_dec_ref(v___y_2209_);
lean_dec_ref(v_as_2205_);
return v_res_2213_;
}
}
static lean_object* _init_l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__8(void){
_start:
{
lean_object* v___x_2225_; lean_object* v___x_2226_; lean_object* v___x_2227_; lean_object* v___x_2228_; 
v___x_2225_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__5));
v___x_2226_ = lean_unsigned_to_nat(4u);
v___x_2227_ = lean_mk_empty_array_with_capacity(v___x_2226_);
v___x_2228_ = lean_array_push(v___x_2227_, v___x_2225_);
return v___x_2228_;
}
}
static lean_object* _init_l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__9(void){
_start:
{
lean_object* v___x_2229_; lean_object* v___x_2230_; lean_object* v___x_2231_; 
v___x_2229_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__6));
v___x_2230_ = lean_obj_once(&l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__8, &l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__8_once, _init_l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__8);
v___x_2231_ = lean_array_push(v___x_2230_, v___x_2229_);
return v___x_2231_;
}
}
static uint8_t _init_l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__12(void){
_start:
{
uint32_t v___x_2236_; uint8_t v___x_2237_; 
v___x_2236_ = 4;
v___x_2237_ = lean_uint32_to_uint8(v___x_2236_);
return v___x_2237_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain(lean_object* v_ws_2253_, lean_object* v_rootDeps_2254_, lean_object* v_a_2255_){
_start:
{
lean_object* v___y_2258_; lean_object* v___y_2264_; uint8_t v___y_2265_; lean_object* v___y_2266_; lean_object* v___y_2267_; lean_object* v___y_2272_; uint8_t v___y_2273_; lean_object* v___y_2274_; lean_object* v___y_2275_; lean_object* v___y_2276_; lean_object* v___y_2277_; lean_object* v_lakeEnv_2286_; lean_object* v_lakeArgs_x3f_2287_; lean_object* v_packages_2288_; lean_object* v___x_2289_; lean_object* v___x_2290_; lean_object* v_baseName_2291_; lean_object* v_dir_2292_; lean_object* v_config_2293_; lean_object* v___x_2294_; lean_object* v_rootToolchainFile_2295_; lean_object* v___y_2297_; uint8_t v___y_2298_; lean_object* v___x_2441_; lean_object* v___x_2442_; 
v_lakeEnv_2286_ = lean_ctor_get(v_ws_2253_, 0);
lean_inc_ref(v_lakeEnv_2286_);
v_lakeArgs_x3f_2287_ = lean_ctor_get(v_ws_2253_, 3);
lean_inc(v_lakeArgs_x3f_2287_);
v_packages_2288_ = lean_ctor_get(v_ws_2253_, 4);
lean_inc_ref(v_packages_2288_);
lean_dec_ref(v_ws_2253_);
v___x_2289_ = lean_unsigned_to_nat(0u);
v___x_2290_ = lean_array_fget(v_packages_2288_, v___x_2289_);
lean_dec_ref(v_packages_2288_);
v_baseName_2291_ = lean_ctor_get(v___x_2290_, 1);
lean_inc(v_baseName_2291_);
v_dir_2292_ = lean_ctor_get(v___x_2290_, 4);
lean_inc_ref_n(v_dir_2292_, 3);
v_config_2293_ = lean_ctor_get(v___x_2290_, 6);
lean_inc_ref(v_config_2293_);
lean_dec(v___x_2290_);
v___x_2294_ = l_Lake_toolchainFileName;
v_rootToolchainFile_2295_ = l_Lake_joinRelative(v_dir_2292_, v___x_2294_);
v___x_2441_ = l_System_FilePath_join(v_dir_2292_, v___x_2294_);
v___x_2442_ = l_Lake_ToolchainVer_ofFile_x3f(v___x_2441_);
lean_dec_ref(v___x_2441_);
if (lean_obj_tag(v___x_2442_) == 0)
{
lean_object* v_a_2443_; lean_object* v___x_2445_; uint8_t v_isShared_2446_; uint8_t v_isSharedCheck_2501_; 
v_a_2443_ = lean_ctor_get(v___x_2442_, 0);
v_isSharedCheck_2501_ = !lean_is_exclusive(v___x_2442_);
if (v_isSharedCheck_2501_ == 0)
{
v___x_2445_ = v___x_2442_;
v_isShared_2446_ = v_isSharedCheck_2501_;
goto v_resetjp_2444_;
}
else
{
lean_inc(v_a_2443_);
lean_dec(v___x_2442_);
v___x_2445_ = lean_box(0);
v_isShared_2446_ = v_isSharedCheck_2501_;
goto v_resetjp_2444_;
}
v_resetjp_2444_:
{
lean_object* v_src_2448_; lean_object* v_tc_x3f_2449_; lean_object* v_clashes_2450_; uint8_t v_fixed_2451_; lean_object* v___y_2475_; uint8_t v_fixedToolchain_2489_; lean_object* v___x_2490_; lean_object* v___x_2491_; uint8_t v___x_2492_; 
v_fixedToolchain_2489_ = lean_ctor_get_uint8(v_config_2293_, sizeof(void*)*28 + 6);
lean_dec_ref(v_config_2293_);
v___x_2490_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__20));
v___x_2491_ = lean_array_get_size(v_rootDeps_2254_);
v___x_2492_ = lean_nat_dec_lt(v___x_2289_, v___x_2491_);
if (v___x_2492_ == 0)
{
lean_dec_ref(v_dir_2292_);
lean_inc(v_a_2443_);
v_src_2448_ = v_baseName_2291_;
v_tc_x3f_2449_ = v_a_2443_;
v_clashes_2450_ = v___x_2490_;
v_fixed_2451_ = v_fixedToolchain_2489_;
goto v___jp_2447_;
}
else
{
lean_object* v___x_2493_; uint8_t v___x_2494_; 
lean_inc(v_a_2443_);
lean_inc(v_baseName_2291_);
v___x_2493_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_2493_, 0, v_baseName_2291_);
lean_ctor_set(v___x_2493_, 1, v_a_2443_);
lean_ctor_set(v___x_2493_, 2, v___x_2490_);
lean_ctor_set_uint8(v___x_2493_, sizeof(void*)*3, v_fixedToolchain_2489_);
v___x_2494_ = lean_nat_dec_le(v___x_2491_, v___x_2491_);
if (v___x_2494_ == 0)
{
if (v___x_2492_ == 0)
{
lean_dec_ref_known(v___x_2493_, 3);
lean_dec_ref(v_dir_2292_);
lean_inc(v_a_2443_);
v_src_2448_ = v_baseName_2291_;
v_tc_x3f_2449_ = v_a_2443_;
v_clashes_2450_ = v___x_2490_;
v_fixed_2451_ = v_fixedToolchain_2489_;
goto v___jp_2447_;
}
else
{
size_t v___x_2495_; size_t v___x_2496_; lean_object* v___x_2497_; 
lean_dec(v_baseName_2291_);
v___x_2495_ = ((size_t)0ULL);
v___x_2496_ = lean_usize_of_nat(v___x_2491_);
v___x_2497_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain_spec__1(v_dir_2292_, v_rootDeps_2254_, v___x_2495_, v___x_2496_, v___x_2493_, v_a_2255_);
v___y_2475_ = v___x_2497_;
goto v___jp_2474_;
}
}
else
{
size_t v___x_2498_; size_t v___x_2499_; lean_object* v___x_2500_; 
lean_dec(v_baseName_2291_);
v___x_2498_ = ((size_t)0ULL);
v___x_2499_ = lean_usize_of_nat(v___x_2491_);
v___x_2500_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain_spec__1(v_dir_2292_, v_rootDeps_2254_, v___x_2498_, v___x_2499_, v___x_2493_, v_a_2255_);
v___y_2475_ = v___x_2500_;
goto v___jp_2474_;
}
}
v___jp_2447_:
{
lean_object* v___x_2452_; uint8_t v___x_2453_; 
v___x_2452_ = lean_array_get_size(v_clashes_2450_);
v___x_2453_ = lean_nat_dec_lt(v___x_2289_, v___x_2452_);
if (v___x_2453_ == 0)
{
lean_dec_ref(v_clashes_2450_);
lean_dec(v_src_2448_);
if (lean_obj_tag(v_tc_x3f_2449_) == 1)
{
if (lean_obj_tag(v_a_2443_) == 0)
{
lean_object* v_val_2454_; 
lean_del_object(v___x_2445_);
v_val_2454_ = lean_ctor_get(v_tc_x3f_2449_, 0);
lean_inc(v_val_2454_);
lean_dec_ref_known(v_tc_x3f_2449_, 1);
v___y_2297_ = v_val_2454_;
v___y_2298_ = v___x_2453_;
goto v___jp_2296_;
}
else
{
lean_object* v_val_2455_; lean_object* v_val_2456_; uint8_t v___x_2457_; 
v_val_2455_ = lean_ctor_get(v_tc_x3f_2449_, 0);
lean_inc_n(v_val_2455_, 2);
lean_dec_ref_known(v_tc_x3f_2449_, 1);
v_val_2456_ = lean_ctor_get(v_a_2443_, 0);
lean_inc(v_val_2456_);
lean_dec_ref_known(v_a_2443_, 1);
v___x_2457_ = l_Lake_instDecidableEqToolchainVer_decEq(v_val_2456_, v_val_2455_);
if (v___x_2457_ == 0)
{
lean_del_object(v___x_2445_);
v___y_2297_ = v_val_2455_;
v___y_2298_ = v___x_2457_;
goto v___jp_2296_;
}
else
{
lean_object* v___x_2458_; lean_object* v___x_2459_; lean_object* v___x_2460_; lean_object* v___x_2462_; 
lean_dec(v_val_2455_);
lean_dec_ref(v_rootToolchainFile_2295_);
lean_dec(v_lakeArgs_x3f_2287_);
lean_dec_ref(v_lakeEnv_2286_);
v___x_2458_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__16));
lean_inc_ref(v_a_2255_);
v___x_2459_ = lean_apply_2(v_a_2255_, v___x_2458_, lean_box(0));
v___x_2460_ = lean_box(0);
if (v_isShared_2446_ == 0)
{
lean_ctor_set(v___x_2445_, 0, v___x_2460_);
v___x_2462_ = v___x_2445_;
goto v_reusejp_2461_;
}
else
{
lean_object* v_reuseFailAlloc_2463_; 
v_reuseFailAlloc_2463_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2463_, 0, v___x_2460_);
v___x_2462_ = v_reuseFailAlloc_2463_;
goto v_reusejp_2461_;
}
v_reusejp_2461_:
{
return v___x_2462_;
}
}
}
}
else
{
lean_object* v___x_2464_; lean_object* v___x_2465_; lean_object* v___x_2467_; 
lean_dec(v_tc_x3f_2449_);
lean_dec(v_a_2443_);
lean_dec_ref(v_rootToolchainFile_2295_);
lean_dec(v_lakeArgs_x3f_2287_);
lean_dec_ref(v_lakeEnv_2286_);
v___x_2464_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__18));
lean_inc_ref(v_a_2255_);
v___x_2465_ = lean_apply_2(v_a_2255_, v___x_2464_, lean_box(0));
if (v_isShared_2446_ == 0)
{
lean_ctor_set(v___x_2445_, 0, v___x_2465_);
v___x_2467_ = v___x_2445_;
goto v_reusejp_2466_;
}
else
{
lean_object* v_reuseFailAlloc_2468_; 
v_reuseFailAlloc_2468_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2468_, 0, v___x_2465_);
v___x_2467_ = v_reuseFailAlloc_2468_;
goto v_reusejp_2466_;
}
v_reusejp_2466_:
{
return v___x_2467_;
}
}
}
else
{
lean_del_object(v___x_2445_);
lean_dec(v_a_2443_);
lean_dec_ref(v_rootToolchainFile_2295_);
lean_dec(v_lakeArgs_x3f_2287_);
lean_dec_ref(v_lakeEnv_2286_);
if (lean_obj_tag(v_tc_x3f_2449_) == 1)
{
if (v_fixed_2451_ == 0)
{
lean_object* v_val_2469_; lean_object* v___x_2470_; 
v_val_2469_ = lean_ctor_get(v_tc_x3f_2449_, 0);
lean_inc(v_val_2469_);
lean_dec_ref_known(v_tc_x3f_2449_, 1);
v___x_2470_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain_spec__0_spec__0___closed__2));
v___y_2272_ = v___x_2452_;
v___y_2273_ = v___x_2453_;
v___y_2274_ = v_clashes_2450_;
v___y_2275_ = v_val_2469_;
v___y_2276_ = v_src_2448_;
v___y_2277_ = v___x_2470_;
goto v___jp_2271_;
}
else
{
lean_object* v_val_2471_; lean_object* v___x_2472_; 
v_val_2471_ = lean_ctor_get(v_tc_x3f_2449_, 0);
lean_inc(v_val_2471_);
lean_dec_ref_known(v_tc_x3f_2449_, 1);
v___x_2472_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain_spec__0_spec__0___closed__3));
v___y_2272_ = v___x_2452_;
v___y_2273_ = v___x_2453_;
v___y_2274_ = v_clashes_2450_;
v___y_2275_ = v_val_2471_;
v___y_2276_ = v_src_2448_;
v___y_2277_ = v___x_2472_;
goto v___jp_2271_;
}
}
else
{
lean_object* v___x_2473_; 
lean_dec(v_tc_x3f_2449_);
lean_dec(v_src_2448_);
v___x_2473_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__19));
v___y_2264_ = v___x_2452_;
v___y_2265_ = v___x_2453_;
v___y_2266_ = v_clashes_2450_;
v___y_2267_ = v___x_2473_;
goto v___jp_2263_;
}
}
}
v___jp_2474_:
{
if (lean_obj_tag(v___y_2475_) == 0)
{
lean_object* v_a_2476_; lean_object* v_src_2477_; lean_object* v_tc_x3f_2478_; lean_object* v_clashes_2479_; uint8_t v_fixed_2480_; 
v_a_2476_ = lean_ctor_get(v___y_2475_, 0);
lean_inc(v_a_2476_);
lean_dec_ref_known(v___y_2475_, 1);
v_src_2477_ = lean_ctor_get(v_a_2476_, 0);
lean_inc(v_src_2477_);
v_tc_x3f_2478_ = lean_ctor_get(v_a_2476_, 1);
lean_inc(v_tc_x3f_2478_);
v_clashes_2479_ = lean_ctor_get(v_a_2476_, 2);
lean_inc_ref(v_clashes_2479_);
v_fixed_2480_ = lean_ctor_get_uint8(v_a_2476_, sizeof(void*)*3);
lean_dec(v_a_2476_);
v_src_2448_ = v_src_2477_;
v_tc_x3f_2449_ = v_tc_x3f_2478_;
v_clashes_2450_ = v_clashes_2479_;
v_fixed_2451_ = v_fixed_2480_;
goto v___jp_2447_;
}
else
{
lean_object* v_a_2481_; lean_object* v___x_2483_; uint8_t v_isShared_2484_; uint8_t v_isSharedCheck_2488_; 
lean_del_object(v___x_2445_);
lean_dec(v_a_2443_);
lean_dec_ref(v_rootToolchainFile_2295_);
lean_dec(v_lakeArgs_x3f_2287_);
lean_dec_ref(v_lakeEnv_2286_);
v_a_2481_ = lean_ctor_get(v___y_2475_, 0);
v_isSharedCheck_2488_ = !lean_is_exclusive(v___y_2475_);
if (v_isSharedCheck_2488_ == 0)
{
v___x_2483_ = v___y_2475_;
v_isShared_2484_ = v_isSharedCheck_2488_;
goto v_resetjp_2482_;
}
else
{
lean_inc(v_a_2481_);
lean_dec(v___y_2475_);
v___x_2483_ = lean_box(0);
v_isShared_2484_ = v_isSharedCheck_2488_;
goto v_resetjp_2482_;
}
v_resetjp_2482_:
{
lean_object* v___x_2486_; 
if (v_isShared_2484_ == 0)
{
v___x_2486_ = v___x_2483_;
goto v_reusejp_2485_;
}
else
{
lean_object* v_reuseFailAlloc_2487_; 
v_reuseFailAlloc_2487_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2487_, 0, v_a_2481_);
v___x_2486_ = v_reuseFailAlloc_2487_;
goto v_reusejp_2485_;
}
v_reusejp_2485_:
{
return v___x_2486_;
}
}
}
}
}
}
else
{
lean_object* v_a_2502_; lean_object* v___x_2504_; uint8_t v_isShared_2505_; uint8_t v_isSharedCheck_2514_; 
lean_dec_ref(v_rootToolchainFile_2295_);
lean_dec_ref(v_config_2293_);
lean_dec_ref(v_dir_2292_);
lean_dec(v_baseName_2291_);
lean_dec(v_lakeArgs_x3f_2287_);
lean_dec_ref(v_lakeEnv_2286_);
v_a_2502_ = lean_ctor_get(v___x_2442_, 0);
v_isSharedCheck_2514_ = !lean_is_exclusive(v___x_2442_);
if (v_isSharedCheck_2514_ == 0)
{
v___x_2504_ = v___x_2442_;
v_isShared_2505_ = v_isSharedCheck_2514_;
goto v_resetjp_2503_;
}
else
{
lean_inc(v_a_2502_);
lean_dec(v___x_2442_);
v___x_2504_ = lean_box(0);
v_isShared_2505_ = v_isSharedCheck_2514_;
goto v_resetjp_2503_;
}
v_resetjp_2503_:
{
lean_object* v___x_2506_; uint8_t v___x_2507_; lean_object* v___x_2508_; lean_object* v___x_2509_; lean_object* v___x_2510_; lean_object* v___x_2512_; 
v___x_2506_ = lean_io_error_to_string(v_a_2502_);
v___x_2507_ = 3;
v___x_2508_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2508_, 0, v___x_2506_);
lean_ctor_set_uint8(v___x_2508_, sizeof(void*)*1, v___x_2507_);
lean_inc_ref(v_a_2255_);
v___x_2509_ = lean_apply_2(v_a_2255_, v___x_2508_, lean_box(0));
v___x_2510_ = lean_box(0);
if (v_isShared_2505_ == 0)
{
lean_ctor_set(v___x_2504_, 0, v___x_2510_);
v___x_2512_ = v___x_2504_;
goto v_reusejp_2511_;
}
else
{
lean_object* v_reuseFailAlloc_2513_; 
v_reuseFailAlloc_2513_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2513_, 0, v___x_2510_);
v___x_2512_ = v_reuseFailAlloc_2513_;
goto v_reusejp_2511_;
}
v_reusejp_2511_:
{
return v___x_2512_;
}
}
}
v___jp_2257_:
{
uint8_t v___x_2259_; lean_object* v___x_2260_; lean_object* v___x_2261_; lean_object* v___x_2262_; 
v___x_2259_ = 2;
v___x_2260_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2260_, 0, v___y_2258_);
lean_ctor_set_uint8(v___x_2260_, sizeof(void*)*1, v___x_2259_);
lean_inc_ref(v_a_2255_);
v___x_2261_ = lean_apply_2(v_a_2255_, v___x_2260_, lean_box(0));
v___x_2262_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2262_, 0, v___x_2261_);
return v___x_2262_;
}
v___jp_2263_:
{
if (v___y_2265_ == 0)
{
lean_dec_ref(v___y_2266_);
lean_dec(v___y_2264_);
v___y_2258_ = v___y_2267_;
goto v___jp_2257_;
}
else
{
size_t v___x_2268_; size_t v___x_2269_; lean_object* v___x_2270_; 
v___x_2268_ = ((size_t)0ULL);
v___x_2269_ = lean_usize_of_nat(v___y_2264_);
v___x_2270_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain_spec__0(v___y_2264_, v___y_2266_, v___x_2268_, v___x_2269_, v___y_2267_);
lean_dec_ref(v___y_2266_);
lean_dec(v___y_2264_);
v___y_2258_ = v___x_2270_;
goto v___jp_2257_;
}
}
v___jp_2271_:
{
lean_object* v___x_2278_; lean_object* v___x_2279_; lean_object* v___x_2280_; lean_object* v___x_2281_; lean_object* v___x_2282_; lean_object* v___x_2283_; lean_object* v___x_2284_; lean_object* v___x_2285_; 
v___x_2278_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__0));
v___x_2279_ = l_Lake_ToolchainVer_toString___override(v___y_2275_);
lean_dec_ref(v___y_2275_);
v___x_2280_ = lean_string_append(v___x_2278_, v___x_2279_);
lean_dec_ref(v___x_2279_);
v___x_2281_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain_spec__0_spec__0___closed__1));
v___x_2282_ = lean_string_append(v___x_2280_, v___x_2281_);
v___x_2283_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___y_2276_, v___y_2273_);
v___x_2284_ = lean_string_append(v___x_2282_, v___x_2283_);
lean_dec_ref(v___x_2283_);
v___x_2285_ = lean_string_append(v___x_2284_, v___y_2277_);
v___y_2264_ = v___y_2272_;
v___y_2265_ = v___y_2273_;
v___y_2266_ = v___y_2274_;
v___y_2267_ = v___x_2285_;
goto v___jp_2263_;
}
v___jp_2296_:
{
uint8_t v___x_2299_; lean_object* v___x_2300_; lean_object* v___x_2301_; lean_object* v___x_2302_; lean_object* v___x_2303_; lean_object* v___x_2304_; uint8_t v___x_2305_; lean_object* v___x_2306_; lean_object* v___x_2307_; lean_object* v___x_2308_; 
v___x_2299_ = 1;
v___x_2300_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__1));
v___x_2301_ = l_Lake_ToolchainVer_toString___override(v___y_2297_);
lean_dec_ref(v___y_2297_);
v___x_2302_ = lean_string_append(v___x_2300_, v___x_2301_);
v___x_2303_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__3));
v___x_2304_ = lean_string_append(v___x_2302_, v___x_2303_);
v___x_2305_ = 1;
v___x_2306_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2306_, 0, v___x_2304_);
lean_ctor_set_uint8(v___x_2306_, sizeof(void*)*1, v___x_2305_);
lean_inc_ref(v_a_2255_);
v___x_2307_ = lean_apply_2(v_a_2255_, v___x_2306_, lean_box(0));
v___x_2308_ = l_IO_FS_writeFile(v_rootToolchainFile_2295_, v___x_2301_);
lean_dec_ref(v_rootToolchainFile_2295_);
if (lean_obj_tag(v___x_2308_) == 0)
{
lean_dec_ref_known(v___x_2308_, 1);
if (lean_obj_tag(v_lakeArgs_x3f_2287_) == 1)
{
lean_object* v_elan_x3f_2309_; 
v_elan_x3f_2309_ = lean_ctor_get(v_lakeEnv_2286_, 2);
if (lean_obj_tag(v_elan_x3f_2309_) == 1)
{
lean_object* v_val_2310_; lean_object* v_val_2311_; lean_object* v___x_2312_; lean_object* v___x_2313_; lean_object* v___x_2314_; lean_object* v_elan_2315_; lean_object* v___x_2316_; lean_object* v___x_2317_; lean_object* v___x_2318_; lean_object* v___x_2319_; lean_object* v___x_2320_; lean_object* v___x_2321_; lean_object* v___x_2322_; lean_object* v___x_2323_; lean_object* v___x_2324_; 
v_val_2310_ = lean_ctor_get(v_lakeArgs_x3f_2287_, 0);
lean_inc(v_val_2310_);
lean_dec_ref_known(v_lakeArgs_x3f_2287_, 1);
v_val_2311_ = lean_ctor_get(v_elan_x3f_2309_, 0);
v___x_2312_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__3));
lean_inc_ref(v_a_2255_);
v___x_2313_ = lean_apply_2(v_a_2255_, v___x_2312_, lean_box(0));
v___x_2314_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__4));
v_elan_2315_ = lean_ctor_get(v_val_2311_, 1);
lean_inc_ref(v_elan_2315_);
v___x_2316_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__7));
v___x_2317_ = lean_obj_once(&l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__9, &l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__9_once, _init_l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__9);
v___x_2318_ = lean_array_push(v___x_2317_, v___x_2301_);
v___x_2319_ = lean_array_push(v___x_2318_, v___x_2316_);
v___x_2320_ = l_Array_append___redArg(v___x_2319_, v_val_2310_);
lean_dec(v_val_2310_);
v___x_2321_ = lean_box(0);
v___x_2322_ = l_Lake_Env_noToolchainVars(v_lakeEnv_2286_);
v___x_2323_ = lean_alloc_ctor(0, 5, 2);
lean_ctor_set(v___x_2323_, 0, v___x_2314_);
lean_ctor_set(v___x_2323_, 1, v_elan_2315_);
lean_ctor_set(v___x_2323_, 2, v___x_2320_);
lean_ctor_set(v___x_2323_, 3, v___x_2321_);
lean_ctor_set(v___x_2323_, 4, v___x_2322_);
lean_ctor_set_uint8(v___x_2323_, sizeof(void*)*5, v___x_2299_);
lean_ctor_set_uint8(v___x_2323_, sizeof(void*)*5 + 1, v___y_2298_);
v___x_2324_ = lean_io_process_spawn(v___x_2323_);
if (lean_obj_tag(v___x_2324_) == 0)
{
lean_object* v_a_2325_; lean_object* v___x_2326_; 
v_a_2325_ = lean_ctor_get(v___x_2324_, 0);
lean_inc(v_a_2325_);
lean_dec_ref_known(v___x_2324_, 1);
v___x_2326_ = lean_io_process_child_wait(v___x_2314_, v_a_2325_);
lean_dec(v_a_2325_);
if (lean_obj_tag(v___x_2326_) == 0)
{
lean_object* v_a_2327_; uint32_t v___x_2328_; uint8_t v___x_2329_; lean_object* v___x_2330_; 
v_a_2327_ = lean_ctor_get(v___x_2326_, 0);
lean_inc(v_a_2327_);
lean_dec_ref_known(v___x_2326_, 1);
v___x_2328_ = lean_unbox_uint32(v_a_2327_);
lean_dec(v_a_2327_);
v___x_2329_ = lean_uint32_to_uint8(v___x_2328_);
v___x_2330_ = lean_io_exit(v___x_2329_);
if (lean_obj_tag(v___x_2330_) == 0)
{
lean_object* v_a_2331_; lean_object* v___x_2333_; uint8_t v_isShared_2334_; uint8_t v_isSharedCheck_2338_; 
v_a_2331_ = lean_ctor_get(v___x_2330_, 0);
v_isSharedCheck_2338_ = !lean_is_exclusive(v___x_2330_);
if (v_isSharedCheck_2338_ == 0)
{
v___x_2333_ = v___x_2330_;
v_isShared_2334_ = v_isSharedCheck_2338_;
goto v_resetjp_2332_;
}
else
{
lean_inc(v_a_2331_);
lean_dec(v___x_2330_);
v___x_2333_ = lean_box(0);
v_isShared_2334_ = v_isSharedCheck_2338_;
goto v_resetjp_2332_;
}
v_resetjp_2332_:
{
lean_object* v___x_2336_; 
if (v_isShared_2334_ == 0)
{
v___x_2336_ = v___x_2333_;
goto v_reusejp_2335_;
}
else
{
lean_object* v_reuseFailAlloc_2337_; 
v_reuseFailAlloc_2337_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2337_, 0, v_a_2331_);
v___x_2336_ = v_reuseFailAlloc_2337_;
goto v_reusejp_2335_;
}
v_reusejp_2335_:
{
return v___x_2336_;
}
}
}
else
{
lean_object* v_a_2339_; lean_object* v___x_2341_; uint8_t v_isShared_2342_; uint8_t v_isSharedCheck_2351_; 
v_a_2339_ = lean_ctor_get(v___x_2330_, 0);
v_isSharedCheck_2351_ = !lean_is_exclusive(v___x_2330_);
if (v_isSharedCheck_2351_ == 0)
{
v___x_2341_ = v___x_2330_;
v_isShared_2342_ = v_isSharedCheck_2351_;
goto v_resetjp_2340_;
}
else
{
lean_inc(v_a_2339_);
lean_dec(v___x_2330_);
v___x_2341_ = lean_box(0);
v_isShared_2342_ = v_isSharedCheck_2351_;
goto v_resetjp_2340_;
}
v_resetjp_2340_:
{
lean_object* v___x_2343_; uint8_t v___x_2344_; lean_object* v___x_2345_; lean_object* v___x_2346_; lean_object* v___x_2347_; lean_object* v___x_2349_; 
v___x_2343_ = lean_io_error_to_string(v_a_2339_);
v___x_2344_ = 3;
v___x_2345_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2345_, 0, v___x_2343_);
lean_ctor_set_uint8(v___x_2345_, sizeof(void*)*1, v___x_2344_);
lean_inc_ref(v_a_2255_);
v___x_2346_ = lean_apply_2(v_a_2255_, v___x_2345_, lean_box(0));
v___x_2347_ = lean_box(0);
if (v_isShared_2342_ == 0)
{
lean_ctor_set(v___x_2341_, 0, v___x_2347_);
v___x_2349_ = v___x_2341_;
goto v_reusejp_2348_;
}
else
{
lean_object* v_reuseFailAlloc_2350_; 
v_reuseFailAlloc_2350_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2350_, 0, v___x_2347_);
v___x_2349_ = v_reuseFailAlloc_2350_;
goto v_reusejp_2348_;
}
v_reusejp_2348_:
{
return v___x_2349_;
}
}
}
}
else
{
lean_object* v_a_2352_; lean_object* v___x_2354_; uint8_t v_isShared_2355_; uint8_t v_isSharedCheck_2364_; 
v_a_2352_ = lean_ctor_get(v___x_2326_, 0);
v_isSharedCheck_2364_ = !lean_is_exclusive(v___x_2326_);
if (v_isSharedCheck_2364_ == 0)
{
v___x_2354_ = v___x_2326_;
v_isShared_2355_ = v_isSharedCheck_2364_;
goto v_resetjp_2353_;
}
else
{
lean_inc(v_a_2352_);
lean_dec(v___x_2326_);
v___x_2354_ = lean_box(0);
v_isShared_2355_ = v_isSharedCheck_2364_;
goto v_resetjp_2353_;
}
v_resetjp_2353_:
{
lean_object* v___x_2356_; uint8_t v___x_2357_; lean_object* v___x_2358_; lean_object* v___x_2359_; lean_object* v___x_2360_; lean_object* v___x_2362_; 
v___x_2356_ = lean_io_error_to_string(v_a_2352_);
v___x_2357_ = 3;
v___x_2358_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2358_, 0, v___x_2356_);
lean_ctor_set_uint8(v___x_2358_, sizeof(void*)*1, v___x_2357_);
lean_inc_ref(v_a_2255_);
v___x_2359_ = lean_apply_2(v_a_2255_, v___x_2358_, lean_box(0));
v___x_2360_ = lean_box(0);
if (v_isShared_2355_ == 0)
{
lean_ctor_set(v___x_2354_, 0, v___x_2360_);
v___x_2362_ = v___x_2354_;
goto v_reusejp_2361_;
}
else
{
lean_object* v_reuseFailAlloc_2363_; 
v_reuseFailAlloc_2363_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2363_, 0, v___x_2360_);
v___x_2362_ = v_reuseFailAlloc_2363_;
goto v_reusejp_2361_;
}
v_reusejp_2361_:
{
return v___x_2362_;
}
}
}
}
else
{
lean_object* v_a_2365_; lean_object* v___x_2367_; uint8_t v_isShared_2368_; uint8_t v_isSharedCheck_2377_; 
v_a_2365_ = lean_ctor_get(v___x_2324_, 0);
v_isSharedCheck_2377_ = !lean_is_exclusive(v___x_2324_);
if (v_isSharedCheck_2377_ == 0)
{
v___x_2367_ = v___x_2324_;
v_isShared_2368_ = v_isSharedCheck_2377_;
goto v_resetjp_2366_;
}
else
{
lean_inc(v_a_2365_);
lean_dec(v___x_2324_);
v___x_2367_ = lean_box(0);
v_isShared_2368_ = v_isSharedCheck_2377_;
goto v_resetjp_2366_;
}
v_resetjp_2366_:
{
lean_object* v___x_2369_; uint8_t v___x_2370_; lean_object* v___x_2371_; lean_object* v___x_2372_; lean_object* v___x_2373_; lean_object* v___x_2375_; 
v___x_2369_ = lean_io_error_to_string(v_a_2365_);
v___x_2370_ = 3;
v___x_2371_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2371_, 0, v___x_2369_);
lean_ctor_set_uint8(v___x_2371_, sizeof(void*)*1, v___x_2370_);
lean_inc_ref(v_a_2255_);
v___x_2372_ = lean_apply_2(v_a_2255_, v___x_2371_, lean_box(0));
v___x_2373_ = lean_box(0);
if (v_isShared_2368_ == 0)
{
lean_ctor_set(v___x_2367_, 0, v___x_2373_);
v___x_2375_ = v___x_2367_;
goto v_reusejp_2374_;
}
else
{
lean_object* v_reuseFailAlloc_2376_; 
v_reuseFailAlloc_2376_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2376_, 0, v___x_2373_);
v___x_2375_ = v_reuseFailAlloc_2376_;
goto v_reusejp_2374_;
}
v_reusejp_2374_:
{
return v___x_2375_;
}
}
}
}
else
{
lean_object* v___x_2378_; lean_object* v___x_2379_; uint8_t v___x_2380_; lean_object* v___x_2381_; 
lean_dec_ref_known(v_lakeArgs_x3f_2287_, 1);
lean_dec_ref(v___x_2301_);
lean_dec_ref(v_lakeEnv_2286_);
v___x_2378_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__11));
lean_inc_ref(v_a_2255_);
v___x_2379_ = lean_apply_2(v_a_2255_, v___x_2378_, lean_box(0));
v___x_2380_ = lean_uint8_once(&l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__12, &l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__12_once, _init_l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__12);
v___x_2381_ = lean_io_exit(v___x_2380_);
if (lean_obj_tag(v___x_2381_) == 0)
{
lean_object* v_a_2382_; lean_object* v___x_2384_; uint8_t v_isShared_2385_; uint8_t v_isSharedCheck_2389_; 
v_a_2382_ = lean_ctor_get(v___x_2381_, 0);
v_isSharedCheck_2389_ = !lean_is_exclusive(v___x_2381_);
if (v_isSharedCheck_2389_ == 0)
{
v___x_2384_ = v___x_2381_;
v_isShared_2385_ = v_isSharedCheck_2389_;
goto v_resetjp_2383_;
}
else
{
lean_inc(v_a_2382_);
lean_dec(v___x_2381_);
v___x_2384_ = lean_box(0);
v_isShared_2385_ = v_isSharedCheck_2389_;
goto v_resetjp_2383_;
}
v_resetjp_2383_:
{
lean_object* v___x_2387_; 
if (v_isShared_2385_ == 0)
{
v___x_2387_ = v___x_2384_;
goto v_reusejp_2386_;
}
else
{
lean_object* v_reuseFailAlloc_2388_; 
v_reuseFailAlloc_2388_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2388_, 0, v_a_2382_);
v___x_2387_ = v_reuseFailAlloc_2388_;
goto v_reusejp_2386_;
}
v_reusejp_2386_:
{
return v___x_2387_;
}
}
}
else
{
lean_object* v_a_2390_; lean_object* v___x_2392_; uint8_t v_isShared_2393_; uint8_t v_isSharedCheck_2402_; 
v_a_2390_ = lean_ctor_get(v___x_2381_, 0);
v_isSharedCheck_2402_ = !lean_is_exclusive(v___x_2381_);
if (v_isSharedCheck_2402_ == 0)
{
v___x_2392_ = v___x_2381_;
v_isShared_2393_ = v_isSharedCheck_2402_;
goto v_resetjp_2391_;
}
else
{
lean_inc(v_a_2390_);
lean_dec(v___x_2381_);
v___x_2392_ = lean_box(0);
v_isShared_2393_ = v_isSharedCheck_2402_;
goto v_resetjp_2391_;
}
v_resetjp_2391_:
{
lean_object* v___x_2394_; uint8_t v___x_2395_; lean_object* v___x_2396_; lean_object* v___x_2397_; lean_object* v___x_2398_; lean_object* v___x_2400_; 
v___x_2394_ = lean_io_error_to_string(v_a_2390_);
v___x_2395_ = 3;
v___x_2396_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2396_, 0, v___x_2394_);
lean_ctor_set_uint8(v___x_2396_, sizeof(void*)*1, v___x_2395_);
lean_inc_ref(v_a_2255_);
v___x_2397_ = lean_apply_2(v_a_2255_, v___x_2396_, lean_box(0));
v___x_2398_ = lean_box(0);
if (v_isShared_2393_ == 0)
{
lean_ctor_set(v___x_2392_, 0, v___x_2398_);
v___x_2400_ = v___x_2392_;
goto v_reusejp_2399_;
}
else
{
lean_object* v_reuseFailAlloc_2401_; 
v_reuseFailAlloc_2401_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2401_, 0, v___x_2398_);
v___x_2400_ = v_reuseFailAlloc_2401_;
goto v_reusejp_2399_;
}
v_reusejp_2399_:
{
return v___x_2400_;
}
}
}
}
}
else
{
lean_object* v___x_2403_; lean_object* v___x_2404_; uint8_t v___x_2405_; lean_object* v___x_2406_; 
lean_dec_ref(v___x_2301_);
lean_dec(v_lakeArgs_x3f_2287_);
lean_dec_ref(v_lakeEnv_2286_);
v___x_2403_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__14));
lean_inc_ref(v_a_2255_);
v___x_2404_ = lean_apply_2(v_a_2255_, v___x_2403_, lean_box(0));
v___x_2405_ = lean_uint8_once(&l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__12, &l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__12_once, _init_l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__12);
v___x_2406_ = lean_io_exit(v___x_2405_);
if (lean_obj_tag(v___x_2406_) == 0)
{
lean_object* v_a_2407_; lean_object* v___x_2409_; uint8_t v_isShared_2410_; uint8_t v_isSharedCheck_2414_; 
v_a_2407_ = lean_ctor_get(v___x_2406_, 0);
v_isSharedCheck_2414_ = !lean_is_exclusive(v___x_2406_);
if (v_isSharedCheck_2414_ == 0)
{
v___x_2409_ = v___x_2406_;
v_isShared_2410_ = v_isSharedCheck_2414_;
goto v_resetjp_2408_;
}
else
{
lean_inc(v_a_2407_);
lean_dec(v___x_2406_);
v___x_2409_ = lean_box(0);
v_isShared_2410_ = v_isSharedCheck_2414_;
goto v_resetjp_2408_;
}
v_resetjp_2408_:
{
lean_object* v___x_2412_; 
if (v_isShared_2410_ == 0)
{
v___x_2412_ = v___x_2409_;
goto v_reusejp_2411_;
}
else
{
lean_object* v_reuseFailAlloc_2413_; 
v_reuseFailAlloc_2413_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2413_, 0, v_a_2407_);
v___x_2412_ = v_reuseFailAlloc_2413_;
goto v_reusejp_2411_;
}
v_reusejp_2411_:
{
return v___x_2412_;
}
}
}
else
{
lean_object* v_a_2415_; lean_object* v___x_2417_; uint8_t v_isShared_2418_; uint8_t v_isSharedCheck_2427_; 
v_a_2415_ = lean_ctor_get(v___x_2406_, 0);
v_isSharedCheck_2427_ = !lean_is_exclusive(v___x_2406_);
if (v_isSharedCheck_2427_ == 0)
{
v___x_2417_ = v___x_2406_;
v_isShared_2418_ = v_isSharedCheck_2427_;
goto v_resetjp_2416_;
}
else
{
lean_inc(v_a_2415_);
lean_dec(v___x_2406_);
v___x_2417_ = lean_box(0);
v_isShared_2418_ = v_isSharedCheck_2427_;
goto v_resetjp_2416_;
}
v_resetjp_2416_:
{
lean_object* v___x_2419_; uint8_t v___x_2420_; lean_object* v___x_2421_; lean_object* v___x_2422_; lean_object* v___x_2423_; lean_object* v___x_2425_; 
v___x_2419_ = lean_io_error_to_string(v_a_2415_);
v___x_2420_ = 3;
v___x_2421_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2421_, 0, v___x_2419_);
lean_ctor_set_uint8(v___x_2421_, sizeof(void*)*1, v___x_2420_);
lean_inc_ref(v_a_2255_);
v___x_2422_ = lean_apply_2(v_a_2255_, v___x_2421_, lean_box(0));
v___x_2423_ = lean_box(0);
if (v_isShared_2418_ == 0)
{
lean_ctor_set(v___x_2417_, 0, v___x_2423_);
v___x_2425_ = v___x_2417_;
goto v_reusejp_2424_;
}
else
{
lean_object* v_reuseFailAlloc_2426_; 
v_reuseFailAlloc_2426_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2426_, 0, v___x_2423_);
v___x_2425_ = v_reuseFailAlloc_2426_;
goto v_reusejp_2424_;
}
v_reusejp_2424_:
{
return v___x_2425_;
}
}
}
}
}
else
{
lean_object* v_a_2428_; lean_object* v___x_2430_; uint8_t v_isShared_2431_; uint8_t v_isSharedCheck_2440_; 
lean_dec_ref(v___x_2301_);
lean_dec(v_lakeArgs_x3f_2287_);
lean_dec_ref(v_lakeEnv_2286_);
v_a_2428_ = lean_ctor_get(v___x_2308_, 0);
v_isSharedCheck_2440_ = !lean_is_exclusive(v___x_2308_);
if (v_isSharedCheck_2440_ == 0)
{
v___x_2430_ = v___x_2308_;
v_isShared_2431_ = v_isSharedCheck_2440_;
goto v_resetjp_2429_;
}
else
{
lean_inc(v_a_2428_);
lean_dec(v___x_2308_);
v___x_2430_ = lean_box(0);
v_isShared_2431_ = v_isSharedCheck_2440_;
goto v_resetjp_2429_;
}
v_resetjp_2429_:
{
lean_object* v___x_2432_; uint8_t v___x_2433_; lean_object* v___x_2434_; lean_object* v___x_2435_; lean_object* v___x_2436_; lean_object* v___x_2438_; 
v___x_2432_ = lean_io_error_to_string(v_a_2428_);
v___x_2433_ = 3;
v___x_2434_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2434_, 0, v___x_2432_);
lean_ctor_set_uint8(v___x_2434_, sizeof(void*)*1, v___x_2433_);
lean_inc_ref(v_a_2255_);
v___x_2435_ = lean_apply_2(v_a_2255_, v___x_2434_, lean_box(0));
v___x_2436_ = lean_box(0);
if (v_isShared_2431_ == 0)
{
lean_ctor_set(v___x_2430_, 0, v___x_2436_);
v___x_2438_ = v___x_2430_;
goto v_reusejp_2437_;
}
else
{
lean_object* v_reuseFailAlloc_2439_; 
v_reuseFailAlloc_2439_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2439_, 0, v___x_2436_);
v___x_2438_ = v_reuseFailAlloc_2439_;
goto v_reusejp_2437_;
}
v_reusejp_2437_:
{
return v___x_2438_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___boxed(lean_object* v_ws_2515_, lean_object* v_rootDeps_2516_, lean_object* v_a_2517_, lean_object* v_a_2518_){
_start:
{
lean_object* v_res_2519_; 
v_res_2519_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain(v_ws_2515_, v_rootDeps_2516_, v_a_2517_);
lean_dec_ref(v_a_2517_);
lean_dec_ref(v_rootDeps_2516_);
return v_res_2519_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_updateAndAddDep(lean_object* v_pkg_2520_, lean_object* v_dep_2521_, lean_object* v_ws_2522_, lean_object* v_a_2523_, lean_object* v_a_2524_){
_start:
{
lean_object* v___x_2526_; 
v___x_2526_ = l___private_Lake_Load_Resolve_0__Lake_updateAndMaterializeDep(v_ws_2522_, v_pkg_2520_, v_dep_2521_, v_a_2523_, v_a_2524_);
if (lean_obj_tag(v___x_2526_) == 0)
{
lean_object* v_a_2527_; lean_object* v_fst_2528_; lean_object* v_snd_2529_; lean_object* v___x_2530_; 
v_a_2527_ = lean_ctor_get(v___x_2526_, 0);
lean_inc(v_a_2527_);
lean_dec_ref_known(v___x_2526_, 1);
v_fst_2528_ = lean_ctor_get(v_a_2527_, 0);
lean_inc_n(v_fst_2528_, 2);
v_snd_2529_ = lean_ctor_get(v_a_2527_, 1);
lean_inc(v_snd_2529_);
lean_dec(v_a_2527_);
v___x_2530_ = l___private_Lake_Load_Resolve_0__Lake_addDependencyEntries(v_fst_2528_, v_snd_2529_, v_a_2524_);
if (lean_obj_tag(v___x_2530_) == 0)
{
lean_object* v_a_2531_; lean_object* v___x_2533_; uint8_t v_isShared_2534_; uint8_t v_isSharedCheck_2547_; 
v_a_2531_ = lean_ctor_get(v___x_2530_, 0);
v_isSharedCheck_2547_ = !lean_is_exclusive(v___x_2530_);
if (v_isSharedCheck_2547_ == 0)
{
v___x_2533_ = v___x_2530_;
v_isShared_2534_ = v_isSharedCheck_2547_;
goto v_resetjp_2532_;
}
else
{
lean_inc(v_a_2531_);
lean_dec(v___x_2530_);
v___x_2533_ = lean_box(0);
v_isShared_2534_ = v_isSharedCheck_2547_;
goto v_resetjp_2532_;
}
v_resetjp_2532_:
{
lean_object* v_snd_2535_; lean_object* v___x_2537_; uint8_t v_isShared_2538_; uint8_t v_isSharedCheck_2545_; 
v_snd_2535_ = lean_ctor_get(v_a_2531_, 1);
v_isSharedCheck_2545_ = !lean_is_exclusive(v_a_2531_);
if (v_isSharedCheck_2545_ == 0)
{
lean_object* v_unused_2546_; 
v_unused_2546_ = lean_ctor_get(v_a_2531_, 0);
lean_dec(v_unused_2546_);
v___x_2537_ = v_a_2531_;
v_isShared_2538_ = v_isSharedCheck_2545_;
goto v_resetjp_2536_;
}
else
{
lean_inc(v_snd_2535_);
lean_dec(v_a_2531_);
v___x_2537_ = lean_box(0);
v_isShared_2538_ = v_isSharedCheck_2545_;
goto v_resetjp_2536_;
}
v_resetjp_2536_:
{
lean_object* v___x_2540_; 
if (v_isShared_2538_ == 0)
{
lean_ctor_set(v___x_2537_, 0, v_fst_2528_);
v___x_2540_ = v___x_2537_;
goto v_reusejp_2539_;
}
else
{
lean_object* v_reuseFailAlloc_2544_; 
v_reuseFailAlloc_2544_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2544_, 0, v_fst_2528_);
lean_ctor_set(v_reuseFailAlloc_2544_, 1, v_snd_2535_);
v___x_2540_ = v_reuseFailAlloc_2544_;
goto v_reusejp_2539_;
}
v_reusejp_2539_:
{
lean_object* v___x_2542_; 
if (v_isShared_2534_ == 0)
{
lean_ctor_set(v___x_2533_, 0, v___x_2540_);
v___x_2542_ = v___x_2533_;
goto v_reusejp_2541_;
}
else
{
lean_object* v_reuseFailAlloc_2543_; 
v_reuseFailAlloc_2543_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2543_, 0, v___x_2540_);
v___x_2542_ = v_reuseFailAlloc_2543_;
goto v_reusejp_2541_;
}
v_reusejp_2541_:
{
return v___x_2542_;
}
}
}
}
}
else
{
lean_object* v_a_2548_; lean_object* v___x_2550_; uint8_t v_isShared_2551_; uint8_t v_isSharedCheck_2555_; 
lean_dec(v_fst_2528_);
v_a_2548_ = lean_ctor_get(v___x_2530_, 0);
v_isSharedCheck_2555_ = !lean_is_exclusive(v___x_2530_);
if (v_isSharedCheck_2555_ == 0)
{
v___x_2550_ = v___x_2530_;
v_isShared_2551_ = v_isSharedCheck_2555_;
goto v_resetjp_2549_;
}
else
{
lean_inc(v_a_2548_);
lean_dec(v___x_2530_);
v___x_2550_ = lean_box(0);
v_isShared_2551_ = v_isSharedCheck_2555_;
goto v_resetjp_2549_;
}
v_resetjp_2549_:
{
lean_object* v___x_2553_; 
if (v_isShared_2551_ == 0)
{
v___x_2553_ = v___x_2550_;
goto v_reusejp_2552_;
}
else
{
lean_object* v_reuseFailAlloc_2554_; 
v_reuseFailAlloc_2554_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2554_, 0, v_a_2548_);
v___x_2553_ = v_reuseFailAlloc_2554_;
goto v_reusejp_2552_;
}
v_reusejp_2552_:
{
return v___x_2553_;
}
}
}
}
else
{
return v___x_2526_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_updateAndAddDep___boxed(lean_object* v_pkg_2556_, lean_object* v_dep_2557_, lean_object* v_ws_2558_, lean_object* v_a_2559_, lean_object* v_a_2560_, lean_object* v_a_2561_){
_start:
{
lean_object* v_res_2562_; 
v_res_2562_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_updateAndAddDep(v_pkg_2556_, v_dep_2557_, v_ws_2558_, v_a_2559_, v_a_2560_);
lean_dec_ref(v_a_2560_);
return v_res_2562_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_updateAndMaterializeDep___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore___elam__0_spec__0(lean_object* v___y_2563_, lean_object* v_ws_2564_, lean_object* v_pkg_2565_, lean_object* v_dep_2566_, lean_object* v_a_2567_){
_start:
{
uint8_t v___y_2570_; lean_object* v___y_2571_; lean_object* v_name_2601_; lean_object* v___x_2602_; 
v_name_2601_ = lean_ctor_get(v_dep_2566_, 0);
v___x_2602_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_a_2567_, v_name_2601_);
if (lean_obj_tag(v___x_2602_) == 1)
{
lean_object* v_val_2603_; lean_object* v_lakeEnv_2604_; lean_object* v_packages_2605_; lean_object* v___x_2606_; lean_object* v___x_2607_; lean_object* v_config_2608_; lean_object* v_dir_2609_; lean_object* v_toWorkspaceConfig_2610_; lean_object* v___x_2611_; lean_object* v___x_2612_; 
lean_dec_ref(v_dep_2566_);
lean_dec_ref(v_pkg_2565_);
v_val_2603_ = lean_ctor_get(v___x_2602_, 0);
lean_inc(v_val_2603_);
lean_dec_ref_known(v___x_2602_, 1);
v_lakeEnv_2604_ = lean_ctor_get(v_ws_2564_, 0);
lean_inc_ref(v_lakeEnv_2604_);
v_packages_2605_ = lean_ctor_get(v_ws_2564_, 4);
lean_inc_ref(v_packages_2605_);
lean_dec_ref(v_ws_2564_);
v___x_2606_ = lean_unsigned_to_nat(0u);
v___x_2607_ = lean_array_fget(v_packages_2605_, v___x_2606_);
lean_dec_ref(v_packages_2605_);
v_config_2608_ = lean_ctor_get(v___x_2607_, 6);
lean_inc_ref(v_config_2608_);
v_dir_2609_ = lean_ctor_get(v___x_2607_, 4);
lean_inc_ref(v_dir_2609_);
lean_dec(v___x_2607_);
v_toWorkspaceConfig_2610_ = lean_ctor_get(v_config_2608_, 0);
lean_inc_ref(v_toWorkspaceConfig_2610_);
lean_dec_ref(v_config_2608_);
v___x_2611_ = l_System_FilePath_normalize(v_toWorkspaceConfig_2610_);
v___x_2612_ = l_Lake_PackageEntry_materialize(v_val_2603_, v_lakeEnv_2604_, v_dir_2609_, v___x_2611_, v___y_2563_);
lean_dec_ref(v_lakeEnv_2604_);
if (lean_obj_tag(v___x_2612_) == 0)
{
lean_object* v_a_2613_; lean_object* v___x_2615_; uint8_t v_isShared_2616_; uint8_t v_isSharedCheck_2621_; 
v_a_2613_ = lean_ctor_get(v___x_2612_, 0);
v_isSharedCheck_2621_ = !lean_is_exclusive(v___x_2612_);
if (v_isSharedCheck_2621_ == 0)
{
v___x_2615_ = v___x_2612_;
v_isShared_2616_ = v_isSharedCheck_2621_;
goto v_resetjp_2614_;
}
else
{
lean_inc(v_a_2613_);
lean_dec(v___x_2612_);
v___x_2615_ = lean_box(0);
v_isShared_2616_ = v_isSharedCheck_2621_;
goto v_resetjp_2614_;
}
v_resetjp_2614_:
{
lean_object* v___x_2617_; lean_object* v___x_2619_; 
v___x_2617_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2617_, 0, v_a_2613_);
lean_ctor_set(v___x_2617_, 1, v_a_2567_);
if (v_isShared_2616_ == 0)
{
lean_ctor_set(v___x_2615_, 0, v___x_2617_);
v___x_2619_ = v___x_2615_;
goto v_reusejp_2618_;
}
else
{
lean_object* v_reuseFailAlloc_2620_; 
v_reuseFailAlloc_2620_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2620_, 0, v___x_2617_);
v___x_2619_ = v_reuseFailAlloc_2620_;
goto v_reusejp_2618_;
}
v_reusejp_2618_:
{
return v___x_2619_;
}
}
}
else
{
lean_object* v_a_2622_; lean_object* v___x_2624_; uint8_t v_isShared_2625_; uint8_t v_isSharedCheck_2629_; 
lean_dec(v_a_2567_);
v_a_2622_ = lean_ctor_get(v___x_2612_, 0);
v_isSharedCheck_2629_ = !lean_is_exclusive(v___x_2612_);
if (v_isSharedCheck_2629_ == 0)
{
v___x_2624_ = v___x_2612_;
v_isShared_2625_ = v_isSharedCheck_2629_;
goto v_resetjp_2623_;
}
else
{
lean_inc(v_a_2622_);
lean_dec(v___x_2612_);
v___x_2624_ = lean_box(0);
v_isShared_2625_ = v_isSharedCheck_2629_;
goto v_resetjp_2623_;
}
v_resetjp_2623_:
{
lean_object* v___x_2627_; 
if (v_isShared_2625_ == 0)
{
v___x_2627_ = v___x_2624_;
goto v_reusejp_2626_;
}
else
{
lean_object* v_reuseFailAlloc_2628_; 
v_reuseFailAlloc_2628_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2628_, 0, v_a_2622_);
v___x_2627_ = v_reuseFailAlloc_2628_;
goto v_reusejp_2626_;
}
v_reusejp_2626_:
{
return v___x_2627_;
}
}
}
}
else
{
lean_object* v_wsIdx_2630_; lean_object* v_relDir_2631_; uint8_t v___y_2633_; lean_object* v___x_2637_; uint8_t v___x_2638_; 
lean_dec(v___x_2602_);
v_wsIdx_2630_ = lean_ctor_get(v_pkg_2565_, 0);
lean_inc(v_wsIdx_2630_);
v_relDir_2631_ = lean_ctor_get(v_pkg_2565_, 5);
lean_inc_ref(v_relDir_2631_);
lean_dec_ref(v_pkg_2565_);
v___x_2637_ = lean_unsigned_to_nat(0u);
v___x_2638_ = lean_nat_dec_eq(v_wsIdx_2630_, v___x_2637_);
lean_dec(v_wsIdx_2630_);
if (v___x_2638_ == 0)
{
uint8_t v___x_2639_; 
v___x_2639_ = 1;
v___y_2633_ = v___x_2639_;
goto v___jp_2632_;
}
else
{
uint8_t v___x_2640_; 
v___x_2640_ = 0;
v___y_2633_ = v___x_2640_;
goto v___jp_2632_;
}
v___jp_2632_:
{
lean_object* v___x_2634_; uint8_t v___x_2635_; 
v___x_2634_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_updateAndMaterializeDep___closed__0));
v___x_2635_ = lean_string_dec_eq(v_relDir_2631_, v___x_2634_);
if (v___x_2635_ == 0)
{
lean_object* v___x_2636_; 
v___x_2636_ = l_Lake_joinRelative(v_relDir_2631_, v___x_2634_);
v___y_2570_ = v___y_2633_;
v___y_2571_ = v___x_2636_;
goto v___jp_2569_;
}
else
{
v___y_2570_ = v___y_2633_;
v___y_2571_ = v_relDir_2631_;
goto v___jp_2569_;
}
}
}
v___jp_2569_:
{
lean_object* v_lakeEnv_2572_; lean_object* v_packages_2573_; lean_object* v___x_2574_; lean_object* v___x_2575_; lean_object* v_config_2576_; lean_object* v_dir_2577_; lean_object* v_toWorkspaceConfig_2578_; lean_object* v___x_2579_; lean_object* v___x_2580_; 
v_lakeEnv_2572_ = lean_ctor_get(v_ws_2564_, 0);
lean_inc_ref(v_lakeEnv_2572_);
v_packages_2573_ = lean_ctor_get(v_ws_2564_, 4);
lean_inc_ref(v_packages_2573_);
lean_dec_ref(v_ws_2564_);
v___x_2574_ = lean_unsigned_to_nat(0u);
v___x_2575_ = lean_array_fget(v_packages_2573_, v___x_2574_);
lean_dec_ref(v_packages_2573_);
v_config_2576_ = lean_ctor_get(v___x_2575_, 6);
lean_inc_ref(v_config_2576_);
v_dir_2577_ = lean_ctor_get(v___x_2575_, 4);
lean_inc_ref(v_dir_2577_);
lean_dec(v___x_2575_);
v_toWorkspaceConfig_2578_ = lean_ctor_get(v_config_2576_, 0);
lean_inc_ref(v_toWorkspaceConfig_2578_);
lean_dec_ref(v_config_2576_);
v___x_2579_ = l_System_FilePath_normalize(v_toWorkspaceConfig_2578_);
v___x_2580_ = l_Lake_Dependency_materialize(v_dep_2566_, v___y_2570_, v_lakeEnv_2572_, v_dir_2577_, v___x_2579_, v___y_2571_, v___y_2563_);
if (lean_obj_tag(v___x_2580_) == 0)
{
lean_object* v_a_2581_; lean_object* v___x_2583_; uint8_t v_isShared_2584_; uint8_t v_isSharedCheck_2592_; 
v_a_2581_ = lean_ctor_get(v___x_2580_, 0);
v_isSharedCheck_2592_ = !lean_is_exclusive(v___x_2580_);
if (v_isSharedCheck_2592_ == 0)
{
v___x_2583_ = v___x_2580_;
v_isShared_2584_ = v_isSharedCheck_2592_;
goto v_resetjp_2582_;
}
else
{
lean_inc(v_a_2581_);
lean_dec(v___x_2580_);
v___x_2583_ = lean_box(0);
v_isShared_2584_ = v_isSharedCheck_2592_;
goto v_resetjp_2582_;
}
v_resetjp_2582_:
{
lean_object* v_manifestEntry_2585_; lean_object* v_name_2586_; lean_object* v___x_2587_; lean_object* v___x_2588_; lean_object* v___x_2590_; 
v_manifestEntry_2585_ = lean_ctor_get(v_a_2581_, 4);
v_name_2586_ = lean_ctor_get(v_manifestEntry_2585_, 0);
lean_inc_ref(v_manifestEntry_2585_);
lean_inc(v_name_2586_);
v___x_2587_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_name_2586_, v_manifestEntry_2585_, v_a_2567_);
v___x_2588_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2588_, 0, v_a_2581_);
lean_ctor_set(v___x_2588_, 1, v___x_2587_);
if (v_isShared_2584_ == 0)
{
lean_ctor_set(v___x_2583_, 0, v___x_2588_);
v___x_2590_ = v___x_2583_;
goto v_reusejp_2589_;
}
else
{
lean_object* v_reuseFailAlloc_2591_; 
v_reuseFailAlloc_2591_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2591_, 0, v___x_2588_);
v___x_2590_ = v_reuseFailAlloc_2591_;
goto v_reusejp_2589_;
}
v_reusejp_2589_:
{
return v___x_2590_;
}
}
}
else
{
lean_object* v_a_2593_; lean_object* v___x_2595_; uint8_t v_isShared_2596_; uint8_t v_isSharedCheck_2600_; 
lean_dec(v_a_2567_);
v_a_2593_ = lean_ctor_get(v___x_2580_, 0);
v_isSharedCheck_2600_ = !lean_is_exclusive(v___x_2580_);
if (v_isSharedCheck_2600_ == 0)
{
v___x_2595_ = v___x_2580_;
v_isShared_2596_ = v_isSharedCheck_2600_;
goto v_resetjp_2594_;
}
else
{
lean_inc(v_a_2593_);
lean_dec(v___x_2580_);
v___x_2595_ = lean_box(0);
v_isShared_2596_ = v_isSharedCheck_2600_;
goto v_resetjp_2594_;
}
v_resetjp_2594_:
{
lean_object* v___x_2598_; 
if (v_isShared_2596_ == 0)
{
v___x_2598_ = v___x_2595_;
goto v_reusejp_2597_;
}
else
{
lean_object* v_reuseFailAlloc_2599_; 
v_reuseFailAlloc_2599_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2599_, 0, v_a_2593_);
v___x_2598_ = v_reuseFailAlloc_2599_;
goto v_reusejp_2597_;
}
v_reusejp_2597_:
{
return v___x_2598_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_updateAndMaterializeDep___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore___elam__0_spec__0___boxed(lean_object* v___y_2641_, lean_object* v_ws_2642_, lean_object* v_pkg_2643_, lean_object* v_dep_2644_, lean_object* v_a_2645_, lean_object* v_a_2646_){
_start:
{
lean_object* v_res_2647_; 
v_res_2647_ = l___private_Lake_Load_Resolve_0__Lake_updateAndMaterializeDep___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore___elam__0_spec__0(v___y_2641_, v_ws_2642_, v_pkg_2643_, v_dep_2644_, v_a_2645_);
lean_dec_ref(v___y_2641_);
return v_res_2647_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_addDependencyEntries___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore___elam__0_spec__1(lean_object* v___y_2648_, lean_object* v_dep_2649_, lean_object* v_a_2650_){
_start:
{
lean_object* v_manifestEntry_2652_; lean_object* v_pkgDir_2653_; lean_object* v_name_2654_; lean_object* v_manifestFile_x3f_2655_; lean_object* v___y_2657_; lean_object* v_fst_2658_; lean_object* v_snd_2659_; lean_object* v___y_2708_; lean_object* v___y_2709_; lean_object* v___y_2710_; lean_object* v_val_2711_; lean_object* v___y_2727_; 
v_manifestEntry_2652_ = lean_ctor_get(v_dep_2649_, 4);
v_pkgDir_2653_ = lean_ctor_get(v_dep_2649_, 0);
v_name_2654_ = lean_ctor_get(v_manifestEntry_2652_, 0);
v_manifestFile_x3f_2655_ = lean_ctor_get(v_manifestEntry_2652_, 3);
if (lean_obj_tag(v_manifestFile_x3f_2655_) == 0)
{
lean_object* v___x_2747_; lean_object* v___x_2748_; 
v___x_2747_ = l_Lake_defaultManifestFile;
lean_inc_ref(v_pkgDir_2653_);
v___x_2748_ = l_Lake_joinRelative(v_pkgDir_2653_, v___x_2747_);
v___y_2727_ = v___x_2748_;
goto v___jp_2726_;
}
else
{
lean_object* v_val_2749_; lean_object* v___x_2750_; 
v_val_2749_ = lean_ctor_get(v_manifestFile_x3f_2655_, 0);
lean_inc(v_val_2749_);
lean_inc_ref(v_pkgDir_2653_);
v___x_2750_ = l_Lake_joinRelative(v_pkgDir_2653_, v_val_2749_);
v___y_2727_ = v___x_2750_;
goto v___jp_2726_;
}
v___jp_2656_:
{
if (lean_obj_tag(v_fst_2658_) == 0)
{
lean_object* v_a_2660_; lean_object* v___x_2662_; uint8_t v_isShared_2663_; uint8_t v_isSharedCheck_2689_; 
lean_inc(v_name_2654_);
lean_dec_ref(v_dep_2649_);
v_a_2660_ = lean_ctor_get(v_fst_2658_, 0);
v_isSharedCheck_2689_ = !lean_is_exclusive(v_fst_2658_);
if (v_isSharedCheck_2689_ == 0)
{
v___x_2662_ = v_fst_2658_;
v_isShared_2663_ = v_isSharedCheck_2689_;
goto v_resetjp_2661_;
}
else
{
lean_inc(v_a_2660_);
lean_dec(v_fst_2658_);
v___x_2662_ = lean_box(0);
v_isShared_2663_ = v_isSharedCheck_2689_;
goto v_resetjp_2661_;
}
v_resetjp_2661_:
{
if (lean_obj_tag(v_a_2660_) == 11)
{
uint8_t v___x_2664_; lean_object* v___x_2665_; lean_object* v___x_2666_; lean_object* v___x_2667_; lean_object* v___x_2668_; uint8_t v___x_2669_; lean_object* v___x_2670_; lean_object* v___x_2671_; lean_object* v___x_2672_; lean_object* v___x_2674_; 
lean_dec_ref_known(v_a_2660_, 2);
v___x_2664_ = 0;
v___x_2665_ = l_Lean_Name_toString(v_name_2654_, v___x_2664_);
v___x_2666_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_addDependencyEntries___closed__0));
v___x_2667_ = lean_string_append(v___x_2665_, v___x_2666_);
v___x_2668_ = lean_string_append(v___x_2667_, v___y_2657_);
lean_dec_ref(v___y_2657_);
v___x_2669_ = 2;
v___x_2670_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2670_, 0, v___x_2668_);
lean_ctor_set_uint8(v___x_2670_, sizeof(void*)*1, v___x_2669_);
v___x_2671_ = lean_apply_2(v___y_2648_, v___x_2670_, lean_box(0));
v___x_2672_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2672_, 0, v___x_2671_);
lean_ctor_set(v___x_2672_, 1, v_snd_2659_);
if (v_isShared_2663_ == 0)
{
lean_ctor_set(v___x_2662_, 0, v___x_2672_);
v___x_2674_ = v___x_2662_;
goto v_reusejp_2673_;
}
else
{
lean_object* v_reuseFailAlloc_2675_; 
v_reuseFailAlloc_2675_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2675_, 0, v___x_2672_);
v___x_2674_ = v_reuseFailAlloc_2675_;
goto v_reusejp_2673_;
}
v_reusejp_2673_:
{
return v___x_2674_;
}
}
else
{
uint8_t v___x_2676_; lean_object* v___x_2677_; lean_object* v___x_2678_; lean_object* v___x_2679_; lean_object* v___x_2680_; lean_object* v___x_2681_; uint8_t v___x_2682_; lean_object* v___x_2683_; lean_object* v___x_2684_; lean_object* v___x_2685_; lean_object* v___x_2687_; 
lean_dec_ref(v___y_2657_);
v___x_2676_ = 0;
v___x_2677_ = l_Lean_Name_toString(v_name_2654_, v___x_2676_);
v___x_2678_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_addDependencyEntries___closed__1));
v___x_2679_ = lean_string_append(v___x_2677_, v___x_2678_);
v___x_2680_ = lean_io_error_to_string(v_a_2660_);
v___x_2681_ = lean_string_append(v___x_2679_, v___x_2680_);
lean_dec_ref(v___x_2680_);
v___x_2682_ = 2;
v___x_2683_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2683_, 0, v___x_2681_);
lean_ctor_set_uint8(v___x_2683_, sizeof(void*)*1, v___x_2682_);
v___x_2684_ = lean_apply_2(v___y_2648_, v___x_2683_, lean_box(0));
v___x_2685_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2685_, 0, v___x_2684_);
lean_ctor_set(v___x_2685_, 1, v_snd_2659_);
if (v_isShared_2663_ == 0)
{
lean_ctor_set(v___x_2662_, 0, v___x_2685_);
v___x_2687_ = v___x_2662_;
goto v_reusejp_2686_;
}
else
{
lean_object* v_reuseFailAlloc_2688_; 
v_reuseFailAlloc_2688_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2688_, 0, v___x_2685_);
v___x_2687_ = v_reuseFailAlloc_2688_;
goto v_reusejp_2686_;
}
v_reusejp_2686_:
{
return v___x_2687_;
}
}
}
}
else
{
lean_object* v_a_2690_; lean_object* v___x_2692_; uint8_t v_isShared_2693_; uint8_t v_isSharedCheck_2706_; 
lean_dec_ref(v___y_2657_);
lean_dec_ref(v___y_2648_);
v_a_2690_ = lean_ctor_get(v_fst_2658_, 0);
v_isSharedCheck_2706_ = !lean_is_exclusive(v_fst_2658_);
if (v_isSharedCheck_2706_ == 0)
{
v___x_2692_ = v_fst_2658_;
v_isShared_2693_ = v_isSharedCheck_2706_;
goto v_resetjp_2691_;
}
else
{
lean_inc(v_a_2690_);
lean_dec(v_fst_2658_);
v___x_2692_ = lean_box(0);
v_isShared_2693_ = v_isSharedCheck_2706_;
goto v_resetjp_2691_;
}
v_resetjp_2691_:
{
lean_object* v_packages_2694_; lean_object* v___x_2695_; lean_object* v___x_2696_; lean_object* v___x_2697_; uint8_t v___x_2698_; 
v_packages_2694_ = lean_ctor_get(v_a_2690_, 3);
lean_inc_ref(v_packages_2694_);
lean_dec(v_a_2690_);
v___x_2695_ = lean_unsigned_to_nat(0u);
v___x_2696_ = lean_array_get_size(v_packages_2694_);
v___x_2697_ = lean_box(0);
v___x_2698_ = lean_nat_dec_lt(v___x_2695_, v___x_2696_);
if (v___x_2698_ == 0)
{
lean_object* v___x_2699_; lean_object* v___x_2701_; 
lean_dec_ref(v_packages_2694_);
lean_dec_ref(v_dep_2649_);
v___x_2699_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2699_, 0, v___x_2697_);
lean_ctor_set(v___x_2699_, 1, v_snd_2659_);
if (v_isShared_2693_ == 0)
{
lean_ctor_set_tag(v___x_2692_, 0);
lean_ctor_set(v___x_2692_, 0, v___x_2699_);
v___x_2701_ = v___x_2692_;
goto v_reusejp_2700_;
}
else
{
lean_object* v_reuseFailAlloc_2702_; 
v_reuseFailAlloc_2702_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2702_, 0, v___x_2699_);
v___x_2701_ = v_reuseFailAlloc_2702_;
goto v_reusejp_2700_;
}
v_reusejp_2700_:
{
return v___x_2701_;
}
}
else
{
size_t v___x_2703_; size_t v___x_2704_; lean_object* v___x_2705_; 
lean_del_object(v___x_2692_);
v___x_2703_ = ((size_t)0ULL);
v___x_2704_ = lean_usize_of_nat(v___x_2696_);
v___x_2705_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_addDependencyEntries_spec__0___redArg(v_dep_2649_, v_packages_2694_, v___x_2703_, v___x_2704_, v___x_2697_, v_snd_2659_);
lean_dec_ref(v_packages_2694_);
return v___x_2705_;
}
}
}
}
v___jp_2707_:
{
lean_object* v___x_2712_; uint8_t v___x_2713_; 
v___x_2712_ = lean_array_get_size(v___y_2708_);
v___x_2713_ = lean_nat_dec_lt(v___y_2709_, v___x_2712_);
if (v___x_2713_ == 0)
{
v___y_2657_ = v___y_2710_;
v_fst_2658_ = v_val_2711_;
v_snd_2659_ = v_a_2650_;
goto v___jp_2656_;
}
else
{
lean_object* v___x_2714_; size_t v___x_2715_; size_t v___x_2716_; lean_object* v___x_2717_; 
v___x_2714_ = lean_box(0);
v___x_2715_ = ((size_t)0ULL);
v___x_2716_ = lean_usize_of_nat(v___x_2712_);
v___x_2717_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__3(v___y_2708_, v___x_2715_, v___x_2716_, v___x_2714_, v___y_2648_);
if (lean_obj_tag(v___x_2717_) == 0)
{
lean_dec_ref_known(v___x_2717_, 1);
v___y_2657_ = v___y_2710_;
v_fst_2658_ = v_val_2711_;
v_snd_2659_ = v_a_2650_;
goto v___jp_2656_;
}
else
{
lean_object* v_a_2718_; lean_object* v___x_2720_; uint8_t v_isShared_2721_; uint8_t v_isSharedCheck_2725_; 
lean_dec_ref(v_val_2711_);
lean_dec_ref(v___y_2710_);
lean_dec(v_a_2650_);
lean_dec_ref(v_dep_2649_);
lean_dec_ref(v___y_2648_);
v_a_2718_ = lean_ctor_get(v___x_2717_, 0);
v_isSharedCheck_2725_ = !lean_is_exclusive(v___x_2717_);
if (v_isSharedCheck_2725_ == 0)
{
v___x_2720_ = v___x_2717_;
v_isShared_2721_ = v_isSharedCheck_2725_;
goto v_resetjp_2719_;
}
else
{
lean_inc(v_a_2718_);
lean_dec(v___x_2717_);
v___x_2720_ = lean_box(0);
v_isShared_2721_ = v_isSharedCheck_2725_;
goto v_resetjp_2719_;
}
v_resetjp_2719_:
{
lean_object* v___x_2723_; 
if (v_isShared_2721_ == 0)
{
v___x_2723_ = v___x_2720_;
goto v_reusejp_2722_;
}
else
{
lean_object* v_reuseFailAlloc_2724_; 
v_reuseFailAlloc_2724_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2724_, 0, v_a_2718_);
v___x_2723_ = v_reuseFailAlloc_2724_;
goto v_reusejp_2722_;
}
v_reusejp_2722_:
{
return v___x_2723_;
}
}
}
}
}
v___jp_2726_:
{
lean_object* v___x_2728_; lean_object* v___x_2729_; lean_object* v___x_2730_; 
v___x_2728_ = lean_unsigned_to_nat(0u);
v___x_2729_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__4));
lean_inc_ref(v___y_2727_);
v___x_2730_ = l_Lake_Manifest_load(v___y_2727_);
if (lean_obj_tag(v___x_2730_) == 0)
{
lean_object* v_a_2731_; lean_object* v___x_2733_; uint8_t v_isShared_2734_; uint8_t v_isSharedCheck_2738_; 
v_a_2731_ = lean_ctor_get(v___x_2730_, 0);
v_isSharedCheck_2738_ = !lean_is_exclusive(v___x_2730_);
if (v_isSharedCheck_2738_ == 0)
{
v___x_2733_ = v___x_2730_;
v_isShared_2734_ = v_isSharedCheck_2738_;
goto v_resetjp_2732_;
}
else
{
lean_inc(v_a_2731_);
lean_dec(v___x_2730_);
v___x_2733_ = lean_box(0);
v_isShared_2734_ = v_isSharedCheck_2738_;
goto v_resetjp_2732_;
}
v_resetjp_2732_:
{
lean_object* v___x_2736_; 
if (v_isShared_2734_ == 0)
{
lean_ctor_set_tag(v___x_2733_, 1);
v___x_2736_ = v___x_2733_;
goto v_reusejp_2735_;
}
else
{
lean_object* v_reuseFailAlloc_2737_; 
v_reuseFailAlloc_2737_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2737_, 0, v_a_2731_);
v___x_2736_ = v_reuseFailAlloc_2737_;
goto v_reusejp_2735_;
}
v_reusejp_2735_:
{
v___y_2708_ = v___x_2729_;
v___y_2709_ = v___x_2728_;
v___y_2710_ = v___y_2727_;
v_val_2711_ = v___x_2736_;
goto v___jp_2707_;
}
}
}
else
{
lean_object* v_a_2739_; lean_object* v___x_2741_; uint8_t v_isShared_2742_; uint8_t v_isSharedCheck_2746_; 
v_a_2739_ = lean_ctor_get(v___x_2730_, 0);
v_isSharedCheck_2746_ = !lean_is_exclusive(v___x_2730_);
if (v_isSharedCheck_2746_ == 0)
{
v___x_2741_ = v___x_2730_;
v_isShared_2742_ = v_isSharedCheck_2746_;
goto v_resetjp_2740_;
}
else
{
lean_inc(v_a_2739_);
lean_dec(v___x_2730_);
v___x_2741_ = lean_box(0);
v_isShared_2742_ = v_isSharedCheck_2746_;
goto v_resetjp_2740_;
}
v_resetjp_2740_:
{
lean_object* v___x_2744_; 
if (v_isShared_2742_ == 0)
{
lean_ctor_set_tag(v___x_2741_, 0);
v___x_2744_ = v___x_2741_;
goto v_reusejp_2743_;
}
else
{
lean_object* v_reuseFailAlloc_2745_; 
v_reuseFailAlloc_2745_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2745_, 0, v_a_2739_);
v___x_2744_ = v_reuseFailAlloc_2745_;
goto v_reusejp_2743_;
}
v_reusejp_2743_:
{
v___y_2708_ = v___x_2729_;
v___y_2709_ = v___x_2728_;
v___y_2710_ = v___y_2727_;
v_val_2711_ = v___x_2744_;
goto v___jp_2707_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_addDependencyEntries___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore___elam__0_spec__1___boxed(lean_object* v___y_2751_, lean_object* v_dep_2752_, lean_object* v_a_2753_, lean_object* v_a_2754_){
_start:
{
lean_object* v_res_2755_; 
v_res_2755_ = l___private_Lake_Load_Resolve_0__Lake_addDependencyEntries___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore___elam__0_spec__1(v___y_2751_, v_dep_2752_, v_a_2753_);
return v_res_2755_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore___elam__0(lean_object* v___y_2756_, lean_object* v___y_2757_, lean_object* v___y_2758_, lean_object* v___y_2759_, lean_object* v___y_2760_){
_start:
{
lean_object* v___x_2762_; 
v___x_2762_ = l___private_Lake_Load_Resolve_0__Lake_updateAndMaterializeDep___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore___elam__0_spec__0(v___y_2760_, v___y_2758_, v___y_2756_, v___y_2757_, v___y_2759_);
if (lean_obj_tag(v___x_2762_) == 0)
{
lean_object* v_a_2763_; lean_object* v_fst_2764_; lean_object* v_snd_2765_; lean_object* v___x_2766_; 
v_a_2763_ = lean_ctor_get(v___x_2762_, 0);
lean_inc(v_a_2763_);
lean_dec_ref_known(v___x_2762_, 1);
v_fst_2764_ = lean_ctor_get(v_a_2763_, 0);
lean_inc_n(v_fst_2764_, 2);
v_snd_2765_ = lean_ctor_get(v_a_2763_, 1);
lean_inc(v_snd_2765_);
lean_dec(v_a_2763_);
v___x_2766_ = l___private_Lake_Load_Resolve_0__Lake_addDependencyEntries___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore___elam__0_spec__1(v___y_2760_, v_fst_2764_, v_snd_2765_);
if (lean_obj_tag(v___x_2766_) == 0)
{
lean_object* v_a_2767_; lean_object* v___x_2769_; uint8_t v_isShared_2770_; uint8_t v_isSharedCheck_2783_; 
v_a_2767_ = lean_ctor_get(v___x_2766_, 0);
v_isSharedCheck_2783_ = !lean_is_exclusive(v___x_2766_);
if (v_isSharedCheck_2783_ == 0)
{
v___x_2769_ = v___x_2766_;
v_isShared_2770_ = v_isSharedCheck_2783_;
goto v_resetjp_2768_;
}
else
{
lean_inc(v_a_2767_);
lean_dec(v___x_2766_);
v___x_2769_ = lean_box(0);
v_isShared_2770_ = v_isSharedCheck_2783_;
goto v_resetjp_2768_;
}
v_resetjp_2768_:
{
lean_object* v_snd_2771_; lean_object* v___x_2773_; uint8_t v_isShared_2774_; uint8_t v_isSharedCheck_2781_; 
v_snd_2771_ = lean_ctor_get(v_a_2767_, 1);
v_isSharedCheck_2781_ = !lean_is_exclusive(v_a_2767_);
if (v_isSharedCheck_2781_ == 0)
{
lean_object* v_unused_2782_; 
v_unused_2782_ = lean_ctor_get(v_a_2767_, 0);
lean_dec(v_unused_2782_);
v___x_2773_ = v_a_2767_;
v_isShared_2774_ = v_isSharedCheck_2781_;
goto v_resetjp_2772_;
}
else
{
lean_inc(v_snd_2771_);
lean_dec(v_a_2767_);
v___x_2773_ = lean_box(0);
v_isShared_2774_ = v_isSharedCheck_2781_;
goto v_resetjp_2772_;
}
v_resetjp_2772_:
{
lean_object* v___x_2776_; 
if (v_isShared_2774_ == 0)
{
lean_ctor_set(v___x_2773_, 0, v_fst_2764_);
v___x_2776_ = v___x_2773_;
goto v_reusejp_2775_;
}
else
{
lean_object* v_reuseFailAlloc_2780_; 
v_reuseFailAlloc_2780_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2780_, 0, v_fst_2764_);
lean_ctor_set(v_reuseFailAlloc_2780_, 1, v_snd_2771_);
v___x_2776_ = v_reuseFailAlloc_2780_;
goto v_reusejp_2775_;
}
v_reusejp_2775_:
{
lean_object* v___x_2778_; 
if (v_isShared_2770_ == 0)
{
lean_ctor_set(v___x_2769_, 0, v___x_2776_);
v___x_2778_ = v___x_2769_;
goto v_reusejp_2777_;
}
else
{
lean_object* v_reuseFailAlloc_2779_; 
v_reuseFailAlloc_2779_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2779_, 0, v___x_2776_);
v___x_2778_ = v_reuseFailAlloc_2779_;
goto v_reusejp_2777_;
}
v_reusejp_2777_:
{
return v___x_2778_;
}
}
}
}
}
else
{
lean_object* v_a_2784_; lean_object* v___x_2786_; uint8_t v_isShared_2787_; uint8_t v_isSharedCheck_2791_; 
lean_dec(v_fst_2764_);
v_a_2784_ = lean_ctor_get(v___x_2766_, 0);
v_isSharedCheck_2791_ = !lean_is_exclusive(v___x_2766_);
if (v_isSharedCheck_2791_ == 0)
{
v___x_2786_ = v___x_2766_;
v_isShared_2787_ = v_isSharedCheck_2791_;
goto v_resetjp_2785_;
}
else
{
lean_inc(v_a_2784_);
lean_dec(v___x_2766_);
v___x_2786_ = lean_box(0);
v_isShared_2787_ = v_isSharedCheck_2791_;
goto v_resetjp_2785_;
}
v_resetjp_2785_:
{
lean_object* v___x_2789_; 
if (v_isShared_2787_ == 0)
{
v___x_2789_ = v___x_2786_;
goto v_reusejp_2788_;
}
else
{
lean_object* v_reuseFailAlloc_2790_; 
v_reuseFailAlloc_2790_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2790_, 0, v_a_2784_);
v___x_2789_ = v_reuseFailAlloc_2790_;
goto v_reusejp_2788_;
}
v_reusejp_2788_:
{
return v___x_2789_;
}
}
}
}
else
{
lean_dec_ref(v___y_2760_);
return v___x_2762_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore___elam__0___boxed(lean_object* v___y_2792_, lean_object* v___y_2793_, lean_object* v___y_2794_, lean_object* v___y_2795_, lean_object* v___y_2796_, lean_object* v___y_2797_){
_start:
{
lean_object* v_res_2798_; 
v_res_2798_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore___elam__0(v___y_2792_, v___y_2793_, v___y_2794_, v___y_2795_, v___y_2796_);
return v_res_2798_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_reuseManifest___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__3___lam__0(lean_object* v_toUpdate_2799_, lean_object* v___x_2800_, lean_object* v___x_2801_, lean_object* v_entries_2802_, lean_object* v___y_2803_, lean_object* v___y_2804_){
_start:
{
lean_object* v___y_2807_; 
if (lean_obj_tag(v_toUpdate_2799_) == 0)
{
lean_object* v_depConfigs_2849_; lean_object* v___x_2850_; lean_object* v___x_2851_; uint8_t v___x_2852_; 
v_depConfigs_2849_ = lean_ctor_get(v___x_2800_, 12);
v___x_2850_ = l_Lean_NameSet_empty;
v___x_2851_ = lean_array_get_size(v_depConfigs_2849_);
v___x_2852_ = lean_nat_dec_lt(v___x_2801_, v___x_2851_);
if (v___x_2852_ == 0)
{
v___y_2807_ = v___x_2850_;
goto v___jp_2806_;
}
else
{
size_t v___x_2853_; size_t v___x_2854_; lean_object* v___x_2855_; 
v___x_2853_ = ((size_t)0ULL);
v___x_2854_ = lean_usize_of_nat(v___x_2851_);
v___x_2855_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__2(v_depConfigs_2849_, v___x_2853_, v___x_2854_, v___x_2850_);
v___y_2807_ = v___x_2855_;
goto v___jp_2806_;
}
}
else
{
lean_object* v___x_2856_; lean_object* v___x_2857_; lean_object* v___x_2858_; 
v___x_2856_ = lean_box(0);
v___x_2857_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2857_, 0, v___x_2856_);
lean_ctor_set(v___x_2857_, 1, v___y_2803_);
v___x_2858_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2858_, 0, v___x_2857_);
return v___x_2858_;
}
v___jp_2806_:
{
size_t v_sz_2808_; size_t v___x_2809_; lean_object* v___x_2810_; 
v_sz_2808_ = lean_array_size(v_entries_2802_);
v___x_2809_ = ((size_t)0ULL);
v___x_2810_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__0___redArg(v_entries_2802_, v_sz_2808_, v___x_2809_, v___y_2807_, v___y_2803_);
if (lean_obj_tag(v___x_2810_) == 0)
{
lean_object* v_a_2811_; lean_object* v_fst_2812_; lean_object* v_snd_2813_; lean_object* v___x_2814_; lean_object* v___x_2815_; 
v_a_2811_ = lean_ctor_get(v___x_2810_, 0);
lean_inc(v_a_2811_);
lean_dec_ref_known(v___x_2810_, 1);
v_fst_2812_ = lean_ctor_get(v_a_2811_, 0);
lean_inc(v_fst_2812_);
v_snd_2813_ = lean_ctor_get(v_a_2811_, 1);
lean_inc(v_snd_2813_);
lean_dec(v_a_2811_);
v___x_2814_ = lean_box(0);
v___x_2815_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__1(v_fst_2812_, v___x_2814_, v_toUpdate_2799_, v_snd_2813_, v___y_2804_);
lean_dec(v_fst_2812_);
if (lean_obj_tag(v___x_2815_) == 0)
{
lean_object* v_a_2816_; lean_object* v___x_2818_; uint8_t v_isShared_2819_; uint8_t v_isSharedCheck_2832_; 
v_a_2816_ = lean_ctor_get(v___x_2815_, 0);
v_isSharedCheck_2832_ = !lean_is_exclusive(v___x_2815_);
if (v_isSharedCheck_2832_ == 0)
{
v___x_2818_ = v___x_2815_;
v_isShared_2819_ = v_isSharedCheck_2832_;
goto v_resetjp_2817_;
}
else
{
lean_inc(v_a_2816_);
lean_dec(v___x_2815_);
v___x_2818_ = lean_box(0);
v_isShared_2819_ = v_isSharedCheck_2832_;
goto v_resetjp_2817_;
}
v_resetjp_2817_:
{
lean_object* v_snd_2820_; lean_object* v___x_2822_; uint8_t v_isShared_2823_; uint8_t v_isSharedCheck_2830_; 
v_snd_2820_ = lean_ctor_get(v_a_2816_, 1);
v_isSharedCheck_2830_ = !lean_is_exclusive(v_a_2816_);
if (v_isSharedCheck_2830_ == 0)
{
lean_object* v_unused_2831_; 
v_unused_2831_ = lean_ctor_get(v_a_2816_, 0);
lean_dec(v_unused_2831_);
v___x_2822_ = v_a_2816_;
v_isShared_2823_ = v_isSharedCheck_2830_;
goto v_resetjp_2821_;
}
else
{
lean_inc(v_snd_2820_);
lean_dec(v_a_2816_);
v___x_2822_ = lean_box(0);
v_isShared_2823_ = v_isSharedCheck_2830_;
goto v_resetjp_2821_;
}
v_resetjp_2821_:
{
lean_object* v___x_2825_; 
if (v_isShared_2823_ == 0)
{
lean_ctor_set(v___x_2822_, 0, v___x_2814_);
v___x_2825_ = v___x_2822_;
goto v_reusejp_2824_;
}
else
{
lean_object* v_reuseFailAlloc_2829_; 
v_reuseFailAlloc_2829_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2829_, 0, v___x_2814_);
lean_ctor_set(v_reuseFailAlloc_2829_, 1, v_snd_2820_);
v___x_2825_ = v_reuseFailAlloc_2829_;
goto v_reusejp_2824_;
}
v_reusejp_2824_:
{
lean_object* v___x_2827_; 
if (v_isShared_2819_ == 0)
{
lean_ctor_set(v___x_2818_, 0, v___x_2825_);
v___x_2827_ = v___x_2818_;
goto v_reusejp_2826_;
}
else
{
lean_object* v_reuseFailAlloc_2828_; 
v_reuseFailAlloc_2828_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2828_, 0, v___x_2825_);
v___x_2827_ = v_reuseFailAlloc_2828_;
goto v_reusejp_2826_;
}
v_reusejp_2826_:
{
return v___x_2827_;
}
}
}
}
}
else
{
lean_object* v_a_2833_; lean_object* v___x_2835_; uint8_t v_isShared_2836_; uint8_t v_isSharedCheck_2840_; 
v_a_2833_ = lean_ctor_get(v___x_2815_, 0);
v_isSharedCheck_2840_ = !lean_is_exclusive(v___x_2815_);
if (v_isSharedCheck_2840_ == 0)
{
v___x_2835_ = v___x_2815_;
v_isShared_2836_ = v_isSharedCheck_2840_;
goto v_resetjp_2834_;
}
else
{
lean_inc(v_a_2833_);
lean_dec(v___x_2815_);
v___x_2835_ = lean_box(0);
v_isShared_2836_ = v_isSharedCheck_2840_;
goto v_resetjp_2834_;
}
v_resetjp_2834_:
{
lean_object* v___x_2838_; 
if (v_isShared_2836_ == 0)
{
v___x_2838_ = v___x_2835_;
goto v_reusejp_2837_;
}
else
{
lean_object* v_reuseFailAlloc_2839_; 
v_reuseFailAlloc_2839_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2839_, 0, v_a_2833_);
v___x_2838_ = v_reuseFailAlloc_2839_;
goto v_reusejp_2837_;
}
v_reusejp_2837_:
{
return v___x_2838_;
}
}
}
}
else
{
lean_object* v_a_2841_; lean_object* v___x_2843_; uint8_t v_isShared_2844_; uint8_t v_isSharedCheck_2848_; 
lean_dec(v_toUpdate_2799_);
v_a_2841_ = lean_ctor_get(v___x_2810_, 0);
v_isSharedCheck_2848_ = !lean_is_exclusive(v___x_2810_);
if (v_isSharedCheck_2848_ == 0)
{
v___x_2843_ = v___x_2810_;
v_isShared_2844_ = v_isSharedCheck_2848_;
goto v_resetjp_2842_;
}
else
{
lean_inc(v_a_2841_);
lean_dec(v___x_2810_);
v___x_2843_ = lean_box(0);
v_isShared_2844_ = v_isSharedCheck_2848_;
goto v_resetjp_2842_;
}
v_resetjp_2842_:
{
lean_object* v___x_2846_; 
if (v_isShared_2844_ == 0)
{
v___x_2846_ = v___x_2843_;
goto v_reusejp_2845_;
}
else
{
lean_object* v_reuseFailAlloc_2847_; 
v_reuseFailAlloc_2847_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2847_, 0, v_a_2841_);
v___x_2846_ = v_reuseFailAlloc_2847_;
goto v_reusejp_2845_;
}
v_reusejp_2845_:
{
return v___x_2846_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_reuseManifest___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__3___lam__0___boxed(lean_object* v_toUpdate_2859_, lean_object* v___x_2860_, lean_object* v___x_2861_, lean_object* v_entries_2862_, lean_object* v___y_2863_, lean_object* v___y_2864_, lean_object* v___y_2865_){
_start:
{
lean_object* v_res_2866_; 
v_res_2866_ = l___private_Lake_Load_Resolve_0__Lake_reuseManifest___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__3___lam__0(v_toUpdate_2859_, v___x_2860_, v___x_2861_, v_entries_2862_, v___y_2863_, v___y_2864_);
lean_dec_ref(v___y_2864_);
lean_dec_ref(v_entries_2862_);
lean_dec(v___x_2861_);
lean_dec_ref(v___x_2860_);
return v_res_2866_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_reuseManifest___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__3(lean_object* v_a_2867_, lean_object* v_ws_2868_, lean_object* v_toUpdate_2869_, lean_object* v_a_2870_){
_start:
{
lean_object* v___y_2873_; lean_object* v___y_2878_; lean_object* v_fst_2879_; lean_object* v_snd_2880_; lean_object* v_packages_2899_; lean_object* v___x_2900_; lean_object* v___y_2902_; lean_object* v___y_2903_; lean_object* v___y_2904_; lean_object* v_val_2905_; lean_object* v___y_2921_; lean_object* v___y_2922_; lean_object* v___y_2923_; lean_object* v___y_2924_; lean_object* v___x_2941_; lean_object* v_baseName_2942_; lean_object* v_dir_2943_; lean_object* v_config_2944_; lean_object* v_relManifestFile_2945_; lean_object* v___y_2947_; lean_object* v___y_2948_; lean_object* v___y_2949_; uint8_t v_fst_2950_; lean_object* v_snd_2951_; lean_object* v_packagesDir_x3f_2972_; lean_object* v___y_2973_; lean_object* v___y_2974_; uint8_t v___x_2995_; lean_object* v_rootName_2996_; lean_object* v_fst_2998_; lean_object* v_snd_2999_; lean_object* v___x_3063_; lean_object* v___x_3064_; lean_object* v_val_3066_; lean_object* v___x_3080_; 
v_packages_2899_ = lean_ctor_get(v_ws_2868_, 4);
v___x_2900_ = lean_unsigned_to_nat(0u);
v___x_2941_ = lean_array_fget_borrowed(v_packages_2899_, v___x_2900_);
v_baseName_2942_ = lean_ctor_get(v___x_2941_, 1);
v_dir_2943_ = lean_ctor_get(v___x_2941_, 4);
v_config_2944_ = lean_ctor_get(v___x_2941_, 6);
v_relManifestFile_2945_ = lean_ctor_get(v___x_2941_, 9);
v___x_2995_ = 0;
lean_inc(v_baseName_2942_);
v_rootName_2996_ = l_Lean_Name_toString(v_baseName_2942_, v___x_2995_);
lean_inc_ref(v_relManifestFile_2945_);
lean_inc_ref(v_dir_2943_);
v___x_3063_ = l_Lake_joinRelative(v_dir_2943_, v_relManifestFile_2945_);
v___x_3064_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__4));
v___x_3080_ = l_Lake_Manifest_load(v___x_3063_);
if (lean_obj_tag(v___x_3080_) == 0)
{
lean_object* v_a_3081_; lean_object* v___x_3083_; uint8_t v_isShared_3084_; uint8_t v_isSharedCheck_3088_; 
v_a_3081_ = lean_ctor_get(v___x_3080_, 0);
v_isSharedCheck_3088_ = !lean_is_exclusive(v___x_3080_);
if (v_isSharedCheck_3088_ == 0)
{
v___x_3083_ = v___x_3080_;
v_isShared_3084_ = v_isSharedCheck_3088_;
goto v_resetjp_3082_;
}
else
{
lean_inc(v_a_3081_);
lean_dec(v___x_3080_);
v___x_3083_ = lean_box(0);
v_isShared_3084_ = v_isSharedCheck_3088_;
goto v_resetjp_3082_;
}
v_resetjp_3082_:
{
lean_object* v___x_3086_; 
if (v_isShared_3084_ == 0)
{
lean_ctor_set_tag(v___x_3083_, 1);
v___x_3086_ = v___x_3083_;
goto v_reusejp_3085_;
}
else
{
lean_object* v_reuseFailAlloc_3087_; 
v_reuseFailAlloc_3087_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3087_, 0, v_a_3081_);
v___x_3086_ = v_reuseFailAlloc_3087_;
goto v_reusejp_3085_;
}
v_reusejp_3085_:
{
v_val_3066_ = v___x_3086_;
goto v___jp_3065_;
}
}
}
else
{
lean_object* v_a_3089_; lean_object* v___x_3091_; uint8_t v_isShared_3092_; uint8_t v_isSharedCheck_3096_; 
v_a_3089_ = lean_ctor_get(v___x_3080_, 0);
v_isSharedCheck_3096_ = !lean_is_exclusive(v___x_3080_);
if (v_isSharedCheck_3096_ == 0)
{
v___x_3091_ = v___x_3080_;
v_isShared_3092_ = v_isSharedCheck_3096_;
goto v_resetjp_3090_;
}
else
{
lean_inc(v_a_3089_);
lean_dec(v___x_3080_);
v___x_3091_ = lean_box(0);
v_isShared_3092_ = v_isSharedCheck_3096_;
goto v_resetjp_3090_;
}
v_resetjp_3090_:
{
lean_object* v___x_3094_; 
if (v_isShared_3092_ == 0)
{
lean_ctor_set_tag(v___x_3091_, 0);
v___x_3094_ = v___x_3091_;
goto v_reusejp_3093_;
}
else
{
lean_object* v_reuseFailAlloc_3095_; 
v_reuseFailAlloc_3095_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3095_, 0, v_a_3089_);
v___x_3094_ = v_reuseFailAlloc_3095_;
goto v_reusejp_3093_;
}
v_reusejp_3093_:
{
v_val_3066_ = v___x_3094_;
goto v___jp_3065_;
}
}
}
v___jp_2872_:
{
lean_object* v___x_2874_; lean_object* v___x_2875_; lean_object* v___x_2876_; 
v___x_2874_ = lean_box(0);
v___x_2875_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2875_, 0, v___x_2874_);
lean_ctor_set(v___x_2875_, 1, v___y_2873_);
v___x_2876_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2876_, 0, v___x_2875_);
return v___x_2876_;
}
v___jp_2877_:
{
if (lean_obj_tag(v_fst_2879_) == 0)
{
lean_object* v_a_2881_; lean_object* v___x_2883_; uint8_t v_isShared_2884_; uint8_t v_isSharedCheck_2895_; 
lean_dec(v_snd_2880_);
v_a_2881_ = lean_ctor_get(v_fst_2879_, 0);
v_isSharedCheck_2895_ = !lean_is_exclusive(v_fst_2879_);
if (v_isSharedCheck_2895_ == 0)
{
v___x_2883_ = v_fst_2879_;
v_isShared_2884_ = v_isSharedCheck_2895_;
goto v_resetjp_2882_;
}
else
{
lean_inc(v_a_2881_);
lean_dec(v_fst_2879_);
v___x_2883_ = lean_box(0);
v_isShared_2884_ = v_isSharedCheck_2895_;
goto v_resetjp_2882_;
}
v_resetjp_2882_:
{
lean_object* v___x_2885_; lean_object* v___x_2886_; lean_object* v___x_2887_; uint8_t v___x_2888_; lean_object* v___x_2889_; lean_object* v___x_2890_; lean_object* v___x_2891_; lean_object* v___x_2893_; 
v___x_2885_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__0));
v___x_2886_ = lean_io_error_to_string(v_a_2881_);
v___x_2887_ = lean_string_append(v___x_2885_, v___x_2886_);
lean_dec_ref(v___x_2886_);
v___x_2888_ = 3;
v___x_2889_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2889_, 0, v___x_2887_);
lean_ctor_set_uint8(v___x_2889_, sizeof(void*)*1, v___x_2888_);
lean_inc_ref(v___y_2878_);
v___x_2890_ = lean_apply_2(v___y_2878_, v___x_2889_, lean_box(0));
v___x_2891_ = lean_box(0);
if (v_isShared_2884_ == 0)
{
lean_ctor_set_tag(v___x_2883_, 1);
lean_ctor_set(v___x_2883_, 0, v___x_2891_);
v___x_2893_ = v___x_2883_;
goto v_reusejp_2892_;
}
else
{
lean_object* v_reuseFailAlloc_2894_; 
v_reuseFailAlloc_2894_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2894_, 0, v___x_2891_);
v___x_2893_ = v_reuseFailAlloc_2894_;
goto v_reusejp_2892_;
}
v_reusejp_2892_:
{
return v___x_2893_;
}
}
}
else
{
lean_object* v___x_2896_; lean_object* v___x_2897_; lean_object* v___x_2898_; 
lean_dec_ref(v_fst_2879_);
v___x_2896_ = lean_box(0);
v___x_2897_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2897_, 0, v___x_2896_);
lean_ctor_set(v___x_2897_, 1, v_snd_2880_);
v___x_2898_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2898_, 0, v___x_2897_);
return v___x_2898_;
}
}
v___jp_2901_:
{
lean_object* v___x_2906_; uint8_t v___x_2907_; 
v___x_2906_ = lean_array_get_size(v___y_2904_);
v___x_2907_ = lean_nat_dec_lt(v___x_2900_, v___x_2906_);
if (v___x_2907_ == 0)
{
v___y_2878_ = v___y_2903_;
v_fst_2879_ = v_val_2905_;
v_snd_2880_ = v___y_2902_;
goto v___jp_2877_;
}
else
{
lean_object* v___x_2908_; size_t v___x_2909_; size_t v___x_2910_; lean_object* v___x_2911_; 
v___x_2908_ = lean_box(0);
v___x_2909_ = ((size_t)0ULL);
v___x_2910_ = lean_usize_of_nat(v___x_2906_);
v___x_2911_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__3(v___y_2904_, v___x_2909_, v___x_2910_, v___x_2908_, v___y_2903_);
if (lean_obj_tag(v___x_2911_) == 0)
{
lean_dec_ref_known(v___x_2911_, 1);
v___y_2878_ = v___y_2903_;
v_fst_2879_ = v_val_2905_;
v_snd_2880_ = v___y_2902_;
goto v___jp_2877_;
}
else
{
lean_object* v_a_2912_; lean_object* v___x_2914_; uint8_t v_isShared_2915_; uint8_t v_isSharedCheck_2919_; 
lean_dec_ref(v_val_2905_);
lean_dec(v___y_2902_);
v_a_2912_ = lean_ctor_get(v___x_2911_, 0);
v_isSharedCheck_2919_ = !lean_is_exclusive(v___x_2911_);
if (v_isSharedCheck_2919_ == 0)
{
v___x_2914_ = v___x_2911_;
v_isShared_2915_ = v_isSharedCheck_2919_;
goto v_resetjp_2913_;
}
else
{
lean_inc(v_a_2912_);
lean_dec(v___x_2911_);
v___x_2914_ = lean_box(0);
v_isShared_2915_ = v_isSharedCheck_2919_;
goto v_resetjp_2913_;
}
v_resetjp_2913_:
{
lean_object* v___x_2917_; 
if (v_isShared_2915_ == 0)
{
v___x_2917_ = v___x_2914_;
goto v_reusejp_2916_;
}
else
{
lean_object* v_reuseFailAlloc_2918_; 
v_reuseFailAlloc_2918_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2918_, 0, v_a_2912_);
v___x_2917_ = v_reuseFailAlloc_2918_;
goto v_reusejp_2916_;
}
v_reusejp_2916_:
{
return v___x_2917_;
}
}
}
}
}
v___jp_2920_:
{
if (lean_obj_tag(v___y_2924_) == 0)
{
lean_object* v_a_2925_; lean_object* v___x_2927_; uint8_t v_isShared_2928_; uint8_t v_isSharedCheck_2932_; 
v_a_2925_ = lean_ctor_get(v___y_2924_, 0);
v_isSharedCheck_2932_ = !lean_is_exclusive(v___y_2924_);
if (v_isSharedCheck_2932_ == 0)
{
v___x_2927_ = v___y_2924_;
v_isShared_2928_ = v_isSharedCheck_2932_;
goto v_resetjp_2926_;
}
else
{
lean_inc(v_a_2925_);
lean_dec(v___y_2924_);
v___x_2927_ = lean_box(0);
v_isShared_2928_ = v_isSharedCheck_2932_;
goto v_resetjp_2926_;
}
v_resetjp_2926_:
{
lean_object* v___x_2930_; 
if (v_isShared_2928_ == 0)
{
lean_ctor_set_tag(v___x_2927_, 1);
v___x_2930_ = v___x_2927_;
goto v_reusejp_2929_;
}
else
{
lean_object* v_reuseFailAlloc_2931_; 
v_reuseFailAlloc_2931_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2931_, 0, v_a_2925_);
v___x_2930_ = v_reuseFailAlloc_2931_;
goto v_reusejp_2929_;
}
v_reusejp_2929_:
{
v___y_2902_ = v___y_2921_;
v___y_2903_ = v___y_2922_;
v___y_2904_ = v___y_2923_;
v_val_2905_ = v___x_2930_;
goto v___jp_2901_;
}
}
}
else
{
lean_object* v_a_2933_; lean_object* v___x_2935_; uint8_t v_isShared_2936_; uint8_t v_isSharedCheck_2940_; 
v_a_2933_ = lean_ctor_get(v___y_2924_, 0);
v_isSharedCheck_2940_ = !lean_is_exclusive(v___y_2924_);
if (v_isSharedCheck_2940_ == 0)
{
v___x_2935_ = v___y_2924_;
v_isShared_2936_ = v_isSharedCheck_2940_;
goto v_resetjp_2934_;
}
else
{
lean_inc(v_a_2933_);
lean_dec(v___y_2924_);
v___x_2935_ = lean_box(0);
v_isShared_2936_ = v_isSharedCheck_2940_;
goto v_resetjp_2934_;
}
v_resetjp_2934_:
{
lean_object* v___x_2938_; 
if (v_isShared_2936_ == 0)
{
lean_ctor_set_tag(v___x_2935_, 0);
v___x_2938_ = v___x_2935_;
goto v_reusejp_2937_;
}
else
{
lean_object* v_reuseFailAlloc_2939_; 
v_reuseFailAlloc_2939_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2939_, 0, v_a_2933_);
v___x_2938_ = v_reuseFailAlloc_2939_;
goto v_reusejp_2937_;
}
v_reusejp_2937_:
{
v___y_2902_ = v___y_2921_;
v___y_2903_ = v___y_2922_;
v___y_2904_ = v___y_2923_;
v_val_2905_ = v___x_2938_;
goto v___jp_2901_;
}
}
}
}
v___jp_2946_:
{
lean_object* v_toWorkspaceConfig_2952_; lean_object* v___x_2953_; lean_object* v___x_2954_; lean_object* v___x_2955_; uint8_t v___x_2956_; 
v_toWorkspaceConfig_2952_ = lean_ctor_get(v_config_2944_, 0);
v___x_2953_ = l_System_FilePath_normalize(v___y_2948_);
lean_inc_ref(v_toWorkspaceConfig_2952_);
v___x_2954_ = l_System_FilePath_normalize(v_toWorkspaceConfig_2952_);
lean_inc_ref(v___x_2954_);
v___x_2955_ = l_System_FilePath_normalize(v___x_2954_);
v___x_2956_ = lean_string_dec_eq(v___x_2953_, v___x_2955_);
lean_dec_ref(v___x_2955_);
lean_dec_ref(v___x_2953_);
if (v___x_2956_ == 0)
{
if (v_fst_2950_ == 0)
{
lean_dec_ref(v___x_2954_);
lean_dec_ref(v___y_2949_);
v___y_2873_ = v_snd_2951_;
goto v___jp_2872_;
}
else
{
lean_object* v___x_2957_; lean_object* v___x_2958_; lean_object* v___x_2959_; lean_object* v___x_2960_; lean_object* v___x_2961_; lean_object* v___x_2962_; lean_object* v___x_2963_; lean_object* v___x_2964_; uint8_t v___x_2965_; lean_object* v___x_2966_; lean_object* v___x_2967_; lean_object* v___x_2968_; lean_object* v___x_2969_; 
v___x_2957_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__1));
v___x_2958_ = lean_string_append(v___x_2957_, v___y_2949_);
v___x_2959_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__2));
v___x_2960_ = lean_string_append(v___x_2958_, v___x_2959_);
lean_inc_ref(v_dir_2943_);
v___x_2961_ = l_Lake_joinRelative(v_dir_2943_, v___x_2954_);
v___x_2962_ = lean_string_append(v___x_2960_, v___x_2961_);
v___x_2963_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__3));
v___x_2964_ = lean_string_append(v___x_2962_, v___x_2963_);
v___x_2965_ = 1;
v___x_2966_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2966_, 0, v___x_2964_);
lean_ctor_set_uint8(v___x_2966_, sizeof(void*)*1, v___x_2965_);
lean_inc_ref(v___y_2947_);
v___x_2967_ = lean_apply_2(v___y_2947_, v___x_2966_, lean_box(0));
v___x_2968_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__4));
lean_inc_ref(v___x_2961_);
v___x_2969_ = l_Lake_createParentDirs(v___x_2961_);
if (lean_obj_tag(v___x_2969_) == 0)
{
lean_object* v___x_2970_; 
lean_dec_ref_known(v___x_2969_, 1);
v___x_2970_ = lean_io_rename(v___y_2949_, v___x_2961_);
lean_dec_ref(v___x_2961_);
lean_dec_ref(v___y_2949_);
v___y_2921_ = v_snd_2951_;
v___y_2922_ = v___y_2947_;
v___y_2923_ = v___x_2968_;
v___y_2924_ = v___x_2970_;
goto v___jp_2920_;
}
else
{
lean_dec_ref(v___x_2961_);
lean_dec_ref(v___y_2949_);
v___y_2921_ = v_snd_2951_;
v___y_2922_ = v___y_2947_;
v___y_2923_ = v___x_2968_;
v___y_2924_ = v___x_2969_;
goto v___jp_2920_;
}
}
}
else
{
lean_dec_ref(v___x_2954_);
lean_dec_ref(v___y_2949_);
v___y_2873_ = v_snd_2951_;
goto v___jp_2872_;
}
}
v___jp_2971_:
{
if (lean_obj_tag(v_packagesDir_x3f_2972_) == 1)
{
lean_object* v_val_2975_; lean_object* v___x_2976_; lean_object* v___x_2977_; uint8_t v___x_2978_; uint8_t v___x_2979_; 
v_val_2975_ = lean_ctor_get(v_packagesDir_x3f_2972_, 0);
lean_inc_n(v_val_2975_, 2);
lean_dec_ref_known(v_packagesDir_x3f_2972_, 1);
lean_inc_ref(v_dir_2943_);
v___x_2976_ = l_Lake_joinRelative(v_dir_2943_, v_val_2975_);
v___x_2977_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__4));
v___x_2978_ = l_System_FilePath_pathExists(v___x_2976_);
v___x_2979_ = lean_uint8_once(&l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__6, &l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__6_once, _init_l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__6);
if (v___x_2979_ == 0)
{
v___y_2947_ = v___y_2974_;
v___y_2948_ = v_val_2975_;
v___y_2949_ = v___x_2976_;
v_fst_2950_ = v___x_2978_;
v_snd_2951_ = v___y_2973_;
goto v___jp_2946_;
}
else
{
lean_object* v___x_2980_; size_t v___x_2981_; size_t v___x_2982_; lean_object* v___x_2983_; 
v___x_2980_ = lean_box(0);
v___x_2981_ = ((size_t)0ULL);
v___x_2982_ = lean_usize_once(&l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__7, &l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__7_once, _init_l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__7);
v___x_2983_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__3(v___x_2977_, v___x_2981_, v___x_2982_, v___x_2980_, v___y_2974_);
if (lean_obj_tag(v___x_2983_) == 0)
{
lean_dec_ref_known(v___x_2983_, 1);
v___y_2947_ = v___y_2974_;
v___y_2948_ = v_val_2975_;
v___y_2949_ = v___x_2976_;
v_fst_2950_ = v___x_2978_;
v_snd_2951_ = v___y_2973_;
goto v___jp_2946_;
}
else
{
lean_object* v_a_2984_; lean_object* v___x_2986_; uint8_t v_isShared_2987_; uint8_t v_isSharedCheck_2991_; 
lean_dec_ref(v___x_2976_);
lean_dec(v_val_2975_);
lean_dec(v___y_2973_);
v_a_2984_ = lean_ctor_get(v___x_2983_, 0);
v_isSharedCheck_2991_ = !lean_is_exclusive(v___x_2983_);
if (v_isSharedCheck_2991_ == 0)
{
v___x_2986_ = v___x_2983_;
v_isShared_2987_ = v_isSharedCheck_2991_;
goto v_resetjp_2985_;
}
else
{
lean_inc(v_a_2984_);
lean_dec(v___x_2983_);
v___x_2986_ = lean_box(0);
v_isShared_2987_ = v_isSharedCheck_2991_;
goto v_resetjp_2985_;
}
v_resetjp_2985_:
{
lean_object* v___x_2989_; 
if (v_isShared_2987_ == 0)
{
v___x_2989_ = v___x_2986_;
goto v_reusejp_2988_;
}
else
{
lean_object* v_reuseFailAlloc_2990_; 
v_reuseFailAlloc_2990_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2990_, 0, v_a_2984_);
v___x_2989_ = v_reuseFailAlloc_2990_;
goto v_reusejp_2988_;
}
v_reusejp_2988_:
{
return v___x_2989_;
}
}
}
}
}
else
{
lean_object* v___x_2992_; lean_object* v___x_2993_; lean_object* v___x_2994_; 
lean_dec(v_packagesDir_x3f_2972_);
v___x_2992_ = lean_box(0);
v___x_2993_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2993_, 0, v___x_2992_);
lean_ctor_set(v___x_2993_, 1, v___y_2973_);
v___x_2994_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2994_, 0, v___x_2993_);
return v___x_2994_;
}
}
v___jp_2997_:
{
if (lean_obj_tag(v_fst_2998_) == 0)
{
lean_object* v_a_3000_; lean_object* v___x_3002_; uint8_t v_isShared_3003_; uint8_t v_isSharedCheck_3047_; 
v_a_3000_ = lean_ctor_get(v_fst_2998_, 0);
v_isSharedCheck_3047_ = !lean_is_exclusive(v_fst_2998_);
if (v_isSharedCheck_3047_ == 0)
{
v___x_3002_ = v_fst_2998_;
v_isShared_3003_ = v_isSharedCheck_3047_;
goto v_resetjp_3001_;
}
else
{
lean_inc(v_a_3000_);
lean_dec(v_fst_2998_);
v___x_3002_ = lean_box(0);
v_isShared_3003_ = v_isSharedCheck_3047_;
goto v_resetjp_3001_;
}
v_resetjp_3001_:
{
if (lean_obj_tag(v_a_3000_) == 11)
{
lean_object* v___x_3004_; lean_object* v___x_3005_; 
lean_dec_ref_known(v_a_3000_, 2);
lean_del_object(v___x_3002_);
v___x_3004_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_mkDepLoadConfig___closed__0));
v___x_3005_ = l___private_Lake_Load_Resolve_0__Lake_reuseManifest___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__3___lam__0(v_toUpdate_2869_, v___x_2941_, v___x_2900_, v___x_3004_, v_snd_2999_, v_a_2867_);
if (lean_obj_tag(v___x_3005_) == 0)
{
lean_object* v_a_3006_; lean_object* v___x_3008_; uint8_t v_isShared_3009_; uint8_t v_isSharedCheck_3027_; 
v_a_3006_ = lean_ctor_get(v___x_3005_, 0);
v_isSharedCheck_3027_ = !lean_is_exclusive(v___x_3005_);
if (v_isSharedCheck_3027_ == 0)
{
v___x_3008_ = v___x_3005_;
v_isShared_3009_ = v_isSharedCheck_3027_;
goto v_resetjp_3007_;
}
else
{
lean_inc(v_a_3006_);
lean_dec(v___x_3005_);
v___x_3008_ = lean_box(0);
v_isShared_3009_ = v_isSharedCheck_3027_;
goto v_resetjp_3007_;
}
v_resetjp_3007_:
{
lean_object* v_snd_3010_; lean_object* v___x_3012_; uint8_t v_isShared_3013_; uint8_t v_isSharedCheck_3025_; 
v_snd_3010_ = lean_ctor_get(v_a_3006_, 1);
v_isSharedCheck_3025_ = !lean_is_exclusive(v_a_3006_);
if (v_isSharedCheck_3025_ == 0)
{
lean_object* v_unused_3026_; 
v_unused_3026_ = lean_ctor_get(v_a_3006_, 0);
lean_dec(v_unused_3026_);
v___x_3012_ = v_a_3006_;
v_isShared_3013_ = v_isSharedCheck_3025_;
goto v_resetjp_3011_;
}
else
{
lean_inc(v_snd_3010_);
lean_dec(v_a_3006_);
v___x_3012_ = lean_box(0);
v_isShared_3013_ = v_isSharedCheck_3025_;
goto v_resetjp_3011_;
}
v_resetjp_3011_:
{
lean_object* v___x_3014_; lean_object* v___x_3015_; uint8_t v___x_3016_; lean_object* v___x_3017_; lean_object* v___x_3018_; lean_object* v___x_3020_; 
v___x_3014_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__8));
v___x_3015_ = lean_string_append(v_rootName_2996_, v___x_3014_);
v___x_3016_ = 1;
v___x_3017_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_3017_, 0, v___x_3015_);
lean_ctor_set_uint8(v___x_3017_, sizeof(void*)*1, v___x_3016_);
lean_inc_ref(v_a_2867_);
v___x_3018_ = lean_apply_2(v_a_2867_, v___x_3017_, lean_box(0));
if (v_isShared_3013_ == 0)
{
lean_ctor_set(v___x_3012_, 0, v___x_3018_);
v___x_3020_ = v___x_3012_;
goto v_reusejp_3019_;
}
else
{
lean_object* v_reuseFailAlloc_3024_; 
v_reuseFailAlloc_3024_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3024_, 0, v___x_3018_);
lean_ctor_set(v_reuseFailAlloc_3024_, 1, v_snd_3010_);
v___x_3020_ = v_reuseFailAlloc_3024_;
goto v_reusejp_3019_;
}
v_reusejp_3019_:
{
lean_object* v___x_3022_; 
if (v_isShared_3009_ == 0)
{
lean_ctor_set(v___x_3008_, 0, v___x_3020_);
v___x_3022_ = v___x_3008_;
goto v_reusejp_3021_;
}
else
{
lean_object* v_reuseFailAlloc_3023_; 
v_reuseFailAlloc_3023_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3023_, 0, v___x_3020_);
v___x_3022_ = v_reuseFailAlloc_3023_;
goto v_reusejp_3021_;
}
v_reusejp_3021_:
{
return v___x_3022_;
}
}
}
}
}
else
{
lean_dec_ref(v_rootName_2996_);
return v___x_3005_;
}
}
else
{
if (lean_obj_tag(v_toUpdate_2869_) == 0)
{
lean_object* v___x_3028_; uint8_t v___x_3029_; lean_object* v___x_3030_; lean_object* v___x_3031_; lean_object* v___x_3032_; lean_object* v___x_3034_; 
lean_dec_ref_known(v_toUpdate_2869_, 5);
lean_dec(v_snd_2999_);
lean_dec_ref(v_rootName_2996_);
v___x_3028_ = lean_io_error_to_string(v_a_3000_);
v___x_3029_ = 3;
v___x_3030_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_3030_, 0, v___x_3028_);
lean_ctor_set_uint8(v___x_3030_, sizeof(void*)*1, v___x_3029_);
lean_inc_ref(v_a_2867_);
v___x_3031_ = lean_apply_2(v_a_2867_, v___x_3030_, lean_box(0));
v___x_3032_ = lean_box(0);
if (v_isShared_3003_ == 0)
{
lean_ctor_set_tag(v___x_3002_, 1);
lean_ctor_set(v___x_3002_, 0, v___x_3032_);
v___x_3034_ = v___x_3002_;
goto v_reusejp_3033_;
}
else
{
lean_object* v_reuseFailAlloc_3035_; 
v_reuseFailAlloc_3035_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3035_, 0, v___x_3032_);
v___x_3034_ = v_reuseFailAlloc_3035_;
goto v_reusejp_3033_;
}
v_reusejp_3033_:
{
return v___x_3034_;
}
}
else
{
lean_object* v___x_3036_; lean_object* v___x_3037_; lean_object* v___x_3038_; lean_object* v___x_3039_; uint8_t v___x_3040_; lean_object* v___x_3041_; lean_object* v___x_3042_; lean_object* v___x_3043_; lean_object* v___x_3045_; 
v___x_3036_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__9));
v___x_3037_ = lean_string_append(v_rootName_2996_, v___x_3036_);
v___x_3038_ = lean_io_error_to_string(v_a_3000_);
v___x_3039_ = lean_string_append(v___x_3037_, v___x_3038_);
lean_dec_ref(v___x_3038_);
v___x_3040_ = 2;
v___x_3041_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_3041_, 0, v___x_3039_);
lean_ctor_set_uint8(v___x_3041_, sizeof(void*)*1, v___x_3040_);
lean_inc_ref(v_a_2867_);
v___x_3042_ = lean_apply_2(v_a_2867_, v___x_3041_, lean_box(0));
v___x_3043_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3043_, 0, v___x_3042_);
lean_ctor_set(v___x_3043_, 1, v_snd_2999_);
if (v_isShared_3003_ == 0)
{
lean_ctor_set(v___x_3002_, 0, v___x_3043_);
v___x_3045_ = v___x_3002_;
goto v_reusejp_3044_;
}
else
{
lean_object* v_reuseFailAlloc_3046_; 
v_reuseFailAlloc_3046_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3046_, 0, v___x_3043_);
v___x_3045_ = v_reuseFailAlloc_3046_;
goto v_reusejp_3044_;
}
v_reusejp_3044_:
{
return v___x_3045_;
}
}
}
}
}
else
{
lean_object* v_a_3048_; lean_object* v_packagesDir_x3f_3049_; lean_object* v_packages_3050_; lean_object* v___x_3051_; 
lean_dec_ref(v_rootName_2996_);
v_a_3048_ = lean_ctor_get(v_fst_2998_, 0);
lean_inc(v_a_3048_);
lean_dec_ref_known(v_fst_2998_, 1);
v_packagesDir_x3f_3049_ = lean_ctor_get(v_a_3048_, 2);
lean_inc(v_packagesDir_x3f_3049_);
v_packages_3050_ = lean_ctor_get(v_a_3048_, 3);
lean_inc_ref(v_packages_3050_);
lean_dec(v_a_3048_);
lean_inc(v_toUpdate_2869_);
v___x_3051_ = l___private_Lake_Load_Resolve_0__Lake_reuseManifest___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__3___lam__0(v_toUpdate_2869_, v___x_2941_, v___x_2900_, v_packages_3050_, v_snd_2999_, v_a_2867_);
if (lean_obj_tag(v___x_3051_) == 0)
{
lean_object* v_a_3052_; 
v_a_3052_ = lean_ctor_get(v___x_3051_, 0);
lean_inc(v_a_3052_);
lean_dec_ref_known(v___x_3051_, 1);
if (lean_obj_tag(v_toUpdate_2869_) == 0)
{
lean_object* v_snd_3053_; lean_object* v___x_3054_; uint8_t v___x_3055_; 
v_snd_3053_ = lean_ctor_get(v_a_3052_, 1);
lean_inc(v_snd_3053_);
lean_dec(v_a_3052_);
v___x_3054_ = lean_array_get_size(v_packages_3050_);
v___x_3055_ = lean_nat_dec_lt(v___x_2900_, v___x_3054_);
if (v___x_3055_ == 0)
{
lean_dec_ref_known(v_toUpdate_2869_, 5);
lean_dec_ref(v_packages_3050_);
v_packagesDir_x3f_2972_ = v_packagesDir_x3f_3049_;
v___y_2973_ = v_snd_3053_;
v___y_2974_ = v_a_2867_;
goto v___jp_2971_;
}
else
{
lean_object* v___x_3056_; size_t v___x_3057_; size_t v___x_3058_; lean_object* v___x_3059_; 
v___x_3056_ = lean_box(0);
v___x_3057_ = ((size_t)0ULL);
v___x_3058_ = lean_usize_of_nat(v___x_3054_);
v___x_3059_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__4___redArg(v_toUpdate_2869_, v_packages_3050_, v___x_3057_, v___x_3058_, v___x_3056_, v_snd_3053_);
lean_dec_ref(v_packages_3050_);
lean_dec_ref_known(v_toUpdate_2869_, 5);
if (lean_obj_tag(v___x_3059_) == 0)
{
lean_object* v_a_3060_; lean_object* v_snd_3061_; 
v_a_3060_ = lean_ctor_get(v___x_3059_, 0);
lean_inc(v_a_3060_);
lean_dec_ref_known(v___x_3059_, 1);
v_snd_3061_ = lean_ctor_get(v_a_3060_, 1);
lean_inc(v_snd_3061_);
lean_dec(v_a_3060_);
v_packagesDir_x3f_2972_ = v_packagesDir_x3f_3049_;
v___y_2973_ = v_snd_3061_;
v___y_2974_ = v_a_2867_;
goto v___jp_2971_;
}
else
{
lean_dec(v_packagesDir_x3f_3049_);
return v___x_3059_;
}
}
}
else
{
lean_object* v_snd_3062_; 
lean_dec_ref(v_packages_3050_);
v_snd_3062_ = lean_ctor_get(v_a_3052_, 1);
lean_inc(v_snd_3062_);
lean_dec(v_a_3052_);
v_packagesDir_x3f_2972_ = v_packagesDir_x3f_3049_;
v___y_2973_ = v_snd_3062_;
v___y_2974_ = v_a_2867_;
goto v___jp_2971_;
}
}
else
{
lean_dec_ref(v_packages_3050_);
lean_dec(v_packagesDir_x3f_3049_);
lean_dec(v_toUpdate_2869_);
return v___x_3051_;
}
}
}
v___jp_3065_:
{
uint8_t v___x_3067_; 
v___x_3067_ = lean_uint8_once(&l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__6, &l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__6_once, _init_l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__6);
if (v___x_3067_ == 0)
{
v_fst_2998_ = v_val_3066_;
v_snd_2999_ = v_a_2870_;
goto v___jp_2997_;
}
else
{
lean_object* v___x_3068_; size_t v___x_3069_; size_t v___x_3070_; lean_object* v___x_3071_; 
v___x_3068_ = lean_box(0);
v___x_3069_ = ((size_t)0ULL);
v___x_3070_ = lean_usize_once(&l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__7, &l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__7_once, _init_l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__7);
v___x_3071_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__3(v___x_3064_, v___x_3069_, v___x_3070_, v___x_3068_, v_a_2867_);
if (lean_obj_tag(v___x_3071_) == 0)
{
lean_dec_ref_known(v___x_3071_, 1);
v_fst_2998_ = v_val_3066_;
v_snd_2999_ = v_a_2870_;
goto v___jp_2997_;
}
else
{
lean_object* v_a_3072_; lean_object* v___x_3074_; uint8_t v_isShared_3075_; uint8_t v_isSharedCheck_3079_; 
lean_dec_ref(v_val_3066_);
lean_dec_ref(v_rootName_2996_);
lean_dec(v_a_2870_);
lean_dec(v_toUpdate_2869_);
v_a_3072_ = lean_ctor_get(v___x_3071_, 0);
v_isSharedCheck_3079_ = !lean_is_exclusive(v___x_3071_);
if (v_isSharedCheck_3079_ == 0)
{
v___x_3074_ = v___x_3071_;
v_isShared_3075_ = v_isSharedCheck_3079_;
goto v_resetjp_3073_;
}
else
{
lean_inc(v_a_3072_);
lean_dec(v___x_3071_);
v___x_3074_ = lean_box(0);
v_isShared_3075_ = v_isSharedCheck_3079_;
goto v_resetjp_3073_;
}
v_resetjp_3073_:
{
lean_object* v___x_3077_; 
if (v_isShared_3075_ == 0)
{
v___x_3077_ = v___x_3074_;
goto v_reusejp_3076_;
}
else
{
lean_object* v_reuseFailAlloc_3078_; 
v_reuseFailAlloc_3078_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3078_, 0, v_a_3072_);
v___x_3077_ = v_reuseFailAlloc_3078_;
goto v_reusejp_3076_;
}
v_reusejp_3076_:
{
return v___x_3077_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_reuseManifest___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__3___boxed(lean_object* v_a_3097_, lean_object* v_ws_3098_, lean_object* v_toUpdate_3099_, lean_object* v_a_3100_, lean_object* v_a_3101_){
_start:
{
lean_object* v_res_3102_; 
v_res_3102_ = l___private_Lake_Load_Resolve_0__Lake_reuseManifest___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__3(v_a_3097_, v_ws_3098_, v_toUpdate_3099_, v_a_3100_);
lean_dec_ref(v_ws_3098_);
lean_dec_ref(v_a_3097_);
return v_res_3102_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__7(lean_object* v_a_3103_, lean_object* v_ws_3104_, lean_object* v_rootDeps_3105_){
_start:
{
lean_object* v___y_3108_; lean_object* v___y_3114_; lean_object* v___y_3115_; uint8_t v___y_3116_; lean_object* v___y_3117_; lean_object* v___y_3122_; lean_object* v___y_3123_; lean_object* v___y_3124_; uint8_t v___y_3125_; lean_object* v___y_3126_; lean_object* v___y_3127_; lean_object* v_lakeEnv_3136_; lean_object* v_lakeArgs_x3f_3137_; lean_object* v_packages_3138_; lean_object* v___x_3139_; lean_object* v___x_3140_; lean_object* v_baseName_3141_; lean_object* v_dir_3142_; lean_object* v_config_3143_; lean_object* v___x_3144_; lean_object* v_rootToolchainFile_3145_; lean_object* v___y_3147_; uint8_t v___y_3148_; lean_object* v___x_3293_; lean_object* v___x_3294_; 
v_lakeEnv_3136_ = lean_ctor_get(v_ws_3104_, 0);
lean_inc_ref(v_lakeEnv_3136_);
v_lakeArgs_x3f_3137_ = lean_ctor_get(v_ws_3104_, 3);
lean_inc(v_lakeArgs_x3f_3137_);
v_packages_3138_ = lean_ctor_get(v_ws_3104_, 4);
lean_inc_ref(v_packages_3138_);
lean_dec_ref(v_ws_3104_);
v___x_3139_ = lean_unsigned_to_nat(0u);
v___x_3140_ = lean_array_fget(v_packages_3138_, v___x_3139_);
lean_dec_ref(v_packages_3138_);
v_baseName_3141_ = lean_ctor_get(v___x_3140_, 1);
lean_inc(v_baseName_3141_);
v_dir_3142_ = lean_ctor_get(v___x_3140_, 4);
lean_inc_ref_n(v_dir_3142_, 3);
v_config_3143_ = lean_ctor_get(v___x_3140_, 6);
lean_inc_ref(v_config_3143_);
lean_dec(v___x_3140_);
v___x_3144_ = l_Lake_toolchainFileName;
v_rootToolchainFile_3145_ = l_Lake_joinRelative(v_dir_3142_, v___x_3144_);
v___x_3293_ = l_System_FilePath_join(v_dir_3142_, v___x_3144_);
v___x_3294_ = l_Lake_ToolchainVer_ofFile_x3f(v___x_3293_);
lean_dec_ref(v___x_3293_);
if (lean_obj_tag(v___x_3294_) == 0)
{
lean_object* v_a_3295_; lean_object* v___x_3297_; uint8_t v_isShared_3298_; uint8_t v_isSharedCheck_3347_; 
v_a_3295_ = lean_ctor_get(v___x_3294_, 0);
v_isSharedCheck_3347_ = !lean_is_exclusive(v___x_3294_);
if (v_isSharedCheck_3347_ == 0)
{
v___x_3297_ = v___x_3294_;
v_isShared_3298_ = v_isSharedCheck_3347_;
goto v_resetjp_3296_;
}
else
{
lean_inc(v_a_3295_);
lean_dec(v___x_3294_);
v___x_3297_ = lean_box(0);
v_isShared_3298_ = v_isSharedCheck_3347_;
goto v_resetjp_3296_;
}
v_resetjp_3296_:
{
lean_object* v_src_3300_; lean_object* v_tc_x3f_3301_; lean_object* v_clashes_3302_; uint8_t v_fixed_3303_; uint8_t v_fixedToolchain_3326_; lean_object* v___x_3327_; lean_object* v___x_3328_; uint8_t v___x_3329_; 
v_fixedToolchain_3326_ = lean_ctor_get_uint8(v_config_3143_, sizeof(void*)*28 + 6);
lean_dec_ref(v_config_3143_);
v___x_3327_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__20));
v___x_3328_ = lean_array_get_size(v_rootDeps_3105_);
v___x_3329_ = lean_nat_dec_lt(v___x_3139_, v___x_3328_);
if (v___x_3329_ == 0)
{
lean_dec_ref(v_dir_3142_);
lean_inc(v_a_3295_);
v_src_3300_ = v_baseName_3141_;
v_tc_x3f_3301_ = v_a_3295_;
v_clashes_3302_ = v___x_3327_;
v_fixed_3303_ = v_fixedToolchain_3326_;
goto v___jp_3299_;
}
else
{
lean_object* v___x_3330_; size_t v___x_3331_; size_t v___x_3332_; lean_object* v___x_3333_; 
lean_inc(v_a_3295_);
v___x_3330_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_3330_, 0, v_baseName_3141_);
lean_ctor_set(v___x_3330_, 1, v_a_3295_);
lean_ctor_set(v___x_3330_, 2, v___x_3327_);
lean_ctor_set_uint8(v___x_3330_, sizeof(void*)*3, v_fixedToolchain_3326_);
v___x_3331_ = ((size_t)0ULL);
v___x_3332_ = lean_usize_of_nat(v___x_3328_);
v___x_3333_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain_spec__1(v_dir_3142_, v_rootDeps_3105_, v___x_3331_, v___x_3332_, v___x_3330_, v_a_3103_);
if (lean_obj_tag(v___x_3333_) == 0)
{
lean_object* v_a_3334_; lean_object* v_src_3335_; lean_object* v_tc_x3f_3336_; lean_object* v_clashes_3337_; uint8_t v_fixed_3338_; 
v_a_3334_ = lean_ctor_get(v___x_3333_, 0);
lean_inc(v_a_3334_);
lean_dec_ref_known(v___x_3333_, 1);
v_src_3335_ = lean_ctor_get(v_a_3334_, 0);
lean_inc(v_src_3335_);
v_tc_x3f_3336_ = lean_ctor_get(v_a_3334_, 1);
lean_inc(v_tc_x3f_3336_);
v_clashes_3337_ = lean_ctor_get(v_a_3334_, 2);
lean_inc_ref(v_clashes_3337_);
v_fixed_3338_ = lean_ctor_get_uint8(v_a_3334_, sizeof(void*)*3);
lean_dec(v_a_3334_);
v_src_3300_ = v_src_3335_;
v_tc_x3f_3301_ = v_tc_x3f_3336_;
v_clashes_3302_ = v_clashes_3337_;
v_fixed_3303_ = v_fixed_3338_;
goto v___jp_3299_;
}
else
{
lean_object* v_a_3339_; lean_object* v___x_3341_; uint8_t v_isShared_3342_; uint8_t v_isSharedCheck_3346_; 
lean_del_object(v___x_3297_);
lean_dec(v_a_3295_);
lean_dec_ref(v_rootToolchainFile_3145_);
lean_dec(v_lakeArgs_x3f_3137_);
lean_dec_ref(v_lakeEnv_3136_);
v_a_3339_ = lean_ctor_get(v___x_3333_, 0);
v_isSharedCheck_3346_ = !lean_is_exclusive(v___x_3333_);
if (v_isSharedCheck_3346_ == 0)
{
v___x_3341_ = v___x_3333_;
v_isShared_3342_ = v_isSharedCheck_3346_;
goto v_resetjp_3340_;
}
else
{
lean_inc(v_a_3339_);
lean_dec(v___x_3333_);
v___x_3341_ = lean_box(0);
v_isShared_3342_ = v_isSharedCheck_3346_;
goto v_resetjp_3340_;
}
v_resetjp_3340_:
{
lean_object* v___x_3344_; 
if (v_isShared_3342_ == 0)
{
v___x_3344_ = v___x_3341_;
goto v_reusejp_3343_;
}
else
{
lean_object* v_reuseFailAlloc_3345_; 
v_reuseFailAlloc_3345_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3345_, 0, v_a_3339_);
v___x_3344_ = v_reuseFailAlloc_3345_;
goto v_reusejp_3343_;
}
v_reusejp_3343_:
{
return v___x_3344_;
}
}
}
}
v___jp_3299_:
{
lean_object* v___x_3304_; uint8_t v___x_3305_; 
v___x_3304_ = lean_array_get_size(v_clashes_3302_);
v___x_3305_ = lean_nat_dec_lt(v___x_3139_, v___x_3304_);
if (v___x_3305_ == 0)
{
lean_dec_ref(v_clashes_3302_);
lean_dec(v_src_3300_);
if (lean_obj_tag(v_tc_x3f_3301_) == 1)
{
if (lean_obj_tag(v_a_3295_) == 0)
{
lean_object* v_val_3306_; 
lean_del_object(v___x_3297_);
v_val_3306_ = lean_ctor_get(v_tc_x3f_3301_, 0);
lean_inc(v_val_3306_);
lean_dec_ref_known(v_tc_x3f_3301_, 1);
v___y_3147_ = v_val_3306_;
v___y_3148_ = v___x_3305_;
goto v___jp_3146_;
}
else
{
lean_object* v_val_3307_; lean_object* v_val_3308_; uint8_t v___x_3309_; 
v_val_3307_ = lean_ctor_get(v_tc_x3f_3301_, 0);
lean_inc_n(v_val_3307_, 2);
lean_dec_ref_known(v_tc_x3f_3301_, 1);
v_val_3308_ = lean_ctor_get(v_a_3295_, 0);
lean_inc(v_val_3308_);
lean_dec_ref_known(v_a_3295_, 1);
v___x_3309_ = l_Lake_instDecidableEqToolchainVer_decEq(v_val_3308_, v_val_3307_);
if (v___x_3309_ == 0)
{
lean_del_object(v___x_3297_);
v___y_3147_ = v_val_3307_;
v___y_3148_ = v___x_3309_;
goto v___jp_3146_;
}
else
{
lean_object* v___x_3310_; lean_object* v___x_3311_; lean_object* v___x_3312_; lean_object* v___x_3314_; 
lean_dec(v_val_3307_);
lean_dec_ref(v_rootToolchainFile_3145_);
lean_dec(v_lakeArgs_x3f_3137_);
lean_dec_ref(v_lakeEnv_3136_);
v___x_3310_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__16));
lean_inc_ref(v_a_3103_);
v___x_3311_ = lean_apply_2(v_a_3103_, v___x_3310_, lean_box(0));
v___x_3312_ = lean_box(0);
if (v_isShared_3298_ == 0)
{
lean_ctor_set(v___x_3297_, 0, v___x_3312_);
v___x_3314_ = v___x_3297_;
goto v_reusejp_3313_;
}
else
{
lean_object* v_reuseFailAlloc_3315_; 
v_reuseFailAlloc_3315_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3315_, 0, v___x_3312_);
v___x_3314_ = v_reuseFailAlloc_3315_;
goto v_reusejp_3313_;
}
v_reusejp_3313_:
{
return v___x_3314_;
}
}
}
}
else
{
lean_object* v___x_3316_; lean_object* v___x_3317_; lean_object* v___x_3319_; 
lean_dec(v_tc_x3f_3301_);
lean_dec(v_a_3295_);
lean_dec_ref(v_rootToolchainFile_3145_);
lean_dec(v_lakeArgs_x3f_3137_);
lean_dec_ref(v_lakeEnv_3136_);
v___x_3316_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__18));
lean_inc_ref(v_a_3103_);
v___x_3317_ = lean_apply_2(v_a_3103_, v___x_3316_, lean_box(0));
if (v_isShared_3298_ == 0)
{
lean_ctor_set(v___x_3297_, 0, v___x_3317_);
v___x_3319_ = v___x_3297_;
goto v_reusejp_3318_;
}
else
{
lean_object* v_reuseFailAlloc_3320_; 
v_reuseFailAlloc_3320_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3320_, 0, v___x_3317_);
v___x_3319_ = v_reuseFailAlloc_3320_;
goto v_reusejp_3318_;
}
v_reusejp_3318_:
{
return v___x_3319_;
}
}
}
else
{
lean_del_object(v___x_3297_);
lean_dec(v_a_3295_);
lean_dec_ref(v_rootToolchainFile_3145_);
lean_dec(v_lakeArgs_x3f_3137_);
lean_dec_ref(v_lakeEnv_3136_);
if (lean_obj_tag(v_tc_x3f_3301_) == 1)
{
if (v_fixed_3303_ == 0)
{
lean_object* v_val_3321_; lean_object* v___x_3322_; 
v_val_3321_ = lean_ctor_get(v_tc_x3f_3301_, 0);
lean_inc(v_val_3321_);
lean_dec_ref_known(v_tc_x3f_3301_, 1);
v___x_3322_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain_spec__0_spec__0___closed__2));
v___y_3122_ = v_src_3300_;
v___y_3123_ = v___x_3304_;
v___y_3124_ = v_clashes_3302_;
v___y_3125_ = v___x_3305_;
v___y_3126_ = v_val_3321_;
v___y_3127_ = v___x_3322_;
goto v___jp_3121_;
}
else
{
lean_object* v_val_3323_; lean_object* v___x_3324_; 
v_val_3323_ = lean_ctor_get(v_tc_x3f_3301_, 0);
lean_inc(v_val_3323_);
lean_dec_ref_known(v_tc_x3f_3301_, 1);
v___x_3324_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain_spec__0_spec__0___closed__3));
v___y_3122_ = v_src_3300_;
v___y_3123_ = v___x_3304_;
v___y_3124_ = v_clashes_3302_;
v___y_3125_ = v___x_3305_;
v___y_3126_ = v_val_3323_;
v___y_3127_ = v___x_3324_;
goto v___jp_3121_;
}
}
else
{
lean_object* v___x_3325_; 
lean_dec(v_tc_x3f_3301_);
lean_dec(v_src_3300_);
v___x_3325_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__19));
v___y_3114_ = v___x_3304_;
v___y_3115_ = v_clashes_3302_;
v___y_3116_ = v___x_3305_;
v___y_3117_ = v___x_3325_;
goto v___jp_3113_;
}
}
}
}
}
else
{
lean_object* v_a_3348_; lean_object* v___x_3350_; uint8_t v_isShared_3351_; uint8_t v_isSharedCheck_3360_; 
lean_dec_ref(v_rootToolchainFile_3145_);
lean_dec_ref(v_config_3143_);
lean_dec_ref(v_dir_3142_);
lean_dec(v_baseName_3141_);
lean_dec(v_lakeArgs_x3f_3137_);
lean_dec_ref(v_lakeEnv_3136_);
v_a_3348_ = lean_ctor_get(v___x_3294_, 0);
v_isSharedCheck_3360_ = !lean_is_exclusive(v___x_3294_);
if (v_isSharedCheck_3360_ == 0)
{
v___x_3350_ = v___x_3294_;
v_isShared_3351_ = v_isSharedCheck_3360_;
goto v_resetjp_3349_;
}
else
{
lean_inc(v_a_3348_);
lean_dec(v___x_3294_);
v___x_3350_ = lean_box(0);
v_isShared_3351_ = v_isSharedCheck_3360_;
goto v_resetjp_3349_;
}
v_resetjp_3349_:
{
lean_object* v___x_3352_; uint8_t v___x_3353_; lean_object* v___x_3354_; lean_object* v___x_3355_; lean_object* v___x_3356_; lean_object* v___x_3358_; 
v___x_3352_ = lean_io_error_to_string(v_a_3348_);
v___x_3353_ = 3;
v___x_3354_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_3354_, 0, v___x_3352_);
lean_ctor_set_uint8(v___x_3354_, sizeof(void*)*1, v___x_3353_);
lean_inc_ref(v_a_3103_);
v___x_3355_ = lean_apply_2(v_a_3103_, v___x_3354_, lean_box(0));
v___x_3356_ = lean_box(0);
if (v_isShared_3351_ == 0)
{
lean_ctor_set(v___x_3350_, 0, v___x_3356_);
v___x_3358_ = v___x_3350_;
goto v_reusejp_3357_;
}
else
{
lean_object* v_reuseFailAlloc_3359_; 
v_reuseFailAlloc_3359_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3359_, 0, v___x_3356_);
v___x_3358_ = v_reuseFailAlloc_3359_;
goto v_reusejp_3357_;
}
v_reusejp_3357_:
{
return v___x_3358_;
}
}
}
v___jp_3107_:
{
uint8_t v___x_3109_; lean_object* v___x_3110_; lean_object* v___x_3111_; lean_object* v___x_3112_; 
v___x_3109_ = 2;
v___x_3110_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_3110_, 0, v___y_3108_);
lean_ctor_set_uint8(v___x_3110_, sizeof(void*)*1, v___x_3109_);
lean_inc_ref(v_a_3103_);
v___x_3111_ = lean_apply_2(v_a_3103_, v___x_3110_, lean_box(0));
v___x_3112_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3112_, 0, v___x_3111_);
return v___x_3112_;
}
v___jp_3113_:
{
if (v___y_3116_ == 0)
{
lean_dec_ref(v___y_3115_);
lean_dec(v___y_3114_);
v___y_3108_ = v___y_3117_;
goto v___jp_3107_;
}
else
{
size_t v___x_3118_; size_t v___x_3119_; lean_object* v___x_3120_; 
v___x_3118_ = ((size_t)0ULL);
v___x_3119_ = lean_usize_of_nat(v___y_3114_);
v___x_3120_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain_spec__0(v___y_3114_, v___y_3115_, v___x_3118_, v___x_3119_, v___y_3117_);
lean_dec_ref(v___y_3115_);
lean_dec(v___y_3114_);
v___y_3108_ = v___x_3120_;
goto v___jp_3107_;
}
}
v___jp_3121_:
{
lean_object* v___x_3128_; lean_object* v___x_3129_; lean_object* v___x_3130_; lean_object* v___x_3131_; lean_object* v___x_3132_; lean_object* v___x_3133_; lean_object* v___x_3134_; lean_object* v___x_3135_; 
v___x_3128_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__0));
v___x_3129_ = l_Lake_ToolchainVer_toString___override(v___y_3126_);
lean_dec_ref(v___y_3126_);
v___x_3130_ = lean_string_append(v___x_3128_, v___x_3129_);
lean_dec_ref(v___x_3129_);
v___x_3131_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain_spec__0_spec__0___closed__1));
v___x_3132_ = lean_string_append(v___x_3130_, v___x_3131_);
v___x_3133_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___y_3122_, v___y_3125_);
v___x_3134_ = lean_string_append(v___x_3132_, v___x_3133_);
lean_dec_ref(v___x_3133_);
v___x_3135_ = lean_string_append(v___x_3134_, v___y_3127_);
v___y_3114_ = v___y_3123_;
v___y_3115_ = v___y_3124_;
v___y_3116_ = v___y_3125_;
v___y_3117_ = v___x_3135_;
goto v___jp_3113_;
}
v___jp_3146_:
{
uint8_t v___x_3149_; lean_object* v___x_3150_; lean_object* v___x_3151_; lean_object* v___x_3152_; lean_object* v___x_3153_; lean_object* v___x_3154_; uint8_t v___x_3155_; lean_object* v___x_3156_; lean_object* v___x_3157_; lean_object* v___x_3158_; 
v___x_3149_ = 1;
v___x_3150_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__1));
v___x_3151_ = l_Lake_ToolchainVer_toString___override(v___y_3147_);
lean_dec_ref(v___y_3147_);
v___x_3152_ = lean_string_append(v___x_3150_, v___x_3151_);
v___x_3153_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__3));
v___x_3154_ = lean_string_append(v___x_3152_, v___x_3153_);
v___x_3155_ = 1;
v___x_3156_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_3156_, 0, v___x_3154_);
lean_ctor_set_uint8(v___x_3156_, sizeof(void*)*1, v___x_3155_);
lean_inc_ref(v_a_3103_);
v___x_3157_ = lean_apply_2(v_a_3103_, v___x_3156_, lean_box(0));
v___x_3158_ = l_IO_FS_writeFile(v_rootToolchainFile_3145_, v___x_3151_);
lean_dec_ref(v_rootToolchainFile_3145_);
if (lean_obj_tag(v___x_3158_) == 0)
{
lean_dec_ref_known(v___x_3158_, 1);
if (lean_obj_tag(v_lakeArgs_x3f_3137_) == 1)
{
lean_object* v_elan_x3f_3159_; 
v_elan_x3f_3159_ = lean_ctor_get(v_lakeEnv_3136_, 2);
if (lean_obj_tag(v_elan_x3f_3159_) == 1)
{
lean_object* v_val_3160_; lean_object* v_val_3161_; lean_object* v___x_3162_; lean_object* v___x_3163_; lean_object* v___x_3164_; lean_object* v_elan_3165_; lean_object* v___x_3166_; lean_object* v___x_3167_; lean_object* v___x_3168_; lean_object* v___x_3169_; lean_object* v___x_3170_; lean_object* v___x_3171_; lean_object* v___x_3172_; lean_object* v___x_3173_; lean_object* v___x_3174_; lean_object* v___x_3175_; lean_object* v___x_3176_; 
v_val_3160_ = lean_ctor_get(v_lakeArgs_x3f_3137_, 0);
lean_inc(v_val_3160_);
lean_dec_ref_known(v_lakeArgs_x3f_3137_, 1);
v_val_3161_ = lean_ctor_get(v_elan_x3f_3159_, 0);
v___x_3162_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__3));
lean_inc_ref(v_a_3103_);
v___x_3163_ = lean_apply_2(v_a_3103_, v___x_3162_, lean_box(0));
v___x_3164_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__4));
v_elan_3165_ = lean_ctor_get(v_val_3161_, 1);
lean_inc_ref(v_elan_3165_);
v___x_3166_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__7));
v___x_3167_ = lean_unsigned_to_nat(4u);
v___x_3168_ = lean_mk_empty_array_with_capacity(v___x_3167_);
lean_dec_ref(v___x_3168_);
v___x_3169_ = lean_obj_once(&l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__9, &l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__9_once, _init_l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__9);
v___x_3170_ = lean_array_push(v___x_3169_, v___x_3151_);
v___x_3171_ = lean_array_push(v___x_3170_, v___x_3166_);
v___x_3172_ = l_Array_append___redArg(v___x_3171_, v_val_3160_);
lean_dec(v_val_3160_);
v___x_3173_ = lean_box(0);
v___x_3174_ = l_Lake_Env_noToolchainVars(v_lakeEnv_3136_);
v___x_3175_ = lean_alloc_ctor(0, 5, 2);
lean_ctor_set(v___x_3175_, 0, v___x_3164_);
lean_ctor_set(v___x_3175_, 1, v_elan_3165_);
lean_ctor_set(v___x_3175_, 2, v___x_3172_);
lean_ctor_set(v___x_3175_, 3, v___x_3173_);
lean_ctor_set(v___x_3175_, 4, v___x_3174_);
lean_ctor_set_uint8(v___x_3175_, sizeof(void*)*5, v___x_3149_);
lean_ctor_set_uint8(v___x_3175_, sizeof(void*)*5 + 1, v___y_3148_);
v___x_3176_ = lean_io_process_spawn(v___x_3175_);
if (lean_obj_tag(v___x_3176_) == 0)
{
lean_object* v_a_3177_; lean_object* v___x_3178_; 
v_a_3177_ = lean_ctor_get(v___x_3176_, 0);
lean_inc(v_a_3177_);
lean_dec_ref_known(v___x_3176_, 1);
v___x_3178_ = lean_io_process_child_wait(v___x_3164_, v_a_3177_);
lean_dec(v_a_3177_);
if (lean_obj_tag(v___x_3178_) == 0)
{
lean_object* v_a_3179_; uint32_t v___x_3180_; uint8_t v___x_3181_; lean_object* v___x_3182_; 
v_a_3179_ = lean_ctor_get(v___x_3178_, 0);
lean_inc(v_a_3179_);
lean_dec_ref_known(v___x_3178_, 1);
v___x_3180_ = lean_unbox_uint32(v_a_3179_);
lean_dec(v_a_3179_);
v___x_3181_ = lean_uint32_to_uint8(v___x_3180_);
v___x_3182_ = lean_io_exit(v___x_3181_);
if (lean_obj_tag(v___x_3182_) == 0)
{
lean_object* v_a_3183_; lean_object* v___x_3185_; uint8_t v_isShared_3186_; uint8_t v_isSharedCheck_3190_; 
v_a_3183_ = lean_ctor_get(v___x_3182_, 0);
v_isSharedCheck_3190_ = !lean_is_exclusive(v___x_3182_);
if (v_isSharedCheck_3190_ == 0)
{
v___x_3185_ = v___x_3182_;
v_isShared_3186_ = v_isSharedCheck_3190_;
goto v_resetjp_3184_;
}
else
{
lean_inc(v_a_3183_);
lean_dec(v___x_3182_);
v___x_3185_ = lean_box(0);
v_isShared_3186_ = v_isSharedCheck_3190_;
goto v_resetjp_3184_;
}
v_resetjp_3184_:
{
lean_object* v___x_3188_; 
if (v_isShared_3186_ == 0)
{
v___x_3188_ = v___x_3185_;
goto v_reusejp_3187_;
}
else
{
lean_object* v_reuseFailAlloc_3189_; 
v_reuseFailAlloc_3189_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3189_, 0, v_a_3183_);
v___x_3188_ = v_reuseFailAlloc_3189_;
goto v_reusejp_3187_;
}
v_reusejp_3187_:
{
return v___x_3188_;
}
}
}
else
{
lean_object* v_a_3191_; lean_object* v___x_3193_; uint8_t v_isShared_3194_; uint8_t v_isSharedCheck_3203_; 
v_a_3191_ = lean_ctor_get(v___x_3182_, 0);
v_isSharedCheck_3203_ = !lean_is_exclusive(v___x_3182_);
if (v_isSharedCheck_3203_ == 0)
{
v___x_3193_ = v___x_3182_;
v_isShared_3194_ = v_isSharedCheck_3203_;
goto v_resetjp_3192_;
}
else
{
lean_inc(v_a_3191_);
lean_dec(v___x_3182_);
v___x_3193_ = lean_box(0);
v_isShared_3194_ = v_isSharedCheck_3203_;
goto v_resetjp_3192_;
}
v_resetjp_3192_:
{
lean_object* v___x_3195_; uint8_t v___x_3196_; lean_object* v___x_3197_; lean_object* v___x_3198_; lean_object* v___x_3199_; lean_object* v___x_3201_; 
v___x_3195_ = lean_io_error_to_string(v_a_3191_);
v___x_3196_ = 3;
v___x_3197_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_3197_, 0, v___x_3195_);
lean_ctor_set_uint8(v___x_3197_, sizeof(void*)*1, v___x_3196_);
lean_inc_ref(v_a_3103_);
v___x_3198_ = lean_apply_2(v_a_3103_, v___x_3197_, lean_box(0));
v___x_3199_ = lean_box(0);
if (v_isShared_3194_ == 0)
{
lean_ctor_set(v___x_3193_, 0, v___x_3199_);
v___x_3201_ = v___x_3193_;
goto v_reusejp_3200_;
}
else
{
lean_object* v_reuseFailAlloc_3202_; 
v_reuseFailAlloc_3202_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3202_, 0, v___x_3199_);
v___x_3201_ = v_reuseFailAlloc_3202_;
goto v_reusejp_3200_;
}
v_reusejp_3200_:
{
return v___x_3201_;
}
}
}
}
else
{
lean_object* v_a_3204_; lean_object* v___x_3206_; uint8_t v_isShared_3207_; uint8_t v_isSharedCheck_3216_; 
v_a_3204_ = lean_ctor_get(v___x_3178_, 0);
v_isSharedCheck_3216_ = !lean_is_exclusive(v___x_3178_);
if (v_isSharedCheck_3216_ == 0)
{
v___x_3206_ = v___x_3178_;
v_isShared_3207_ = v_isSharedCheck_3216_;
goto v_resetjp_3205_;
}
else
{
lean_inc(v_a_3204_);
lean_dec(v___x_3178_);
v___x_3206_ = lean_box(0);
v_isShared_3207_ = v_isSharedCheck_3216_;
goto v_resetjp_3205_;
}
v_resetjp_3205_:
{
lean_object* v___x_3208_; uint8_t v___x_3209_; lean_object* v___x_3210_; lean_object* v___x_3211_; lean_object* v___x_3212_; lean_object* v___x_3214_; 
v___x_3208_ = lean_io_error_to_string(v_a_3204_);
v___x_3209_ = 3;
v___x_3210_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_3210_, 0, v___x_3208_);
lean_ctor_set_uint8(v___x_3210_, sizeof(void*)*1, v___x_3209_);
lean_inc_ref(v_a_3103_);
v___x_3211_ = lean_apply_2(v_a_3103_, v___x_3210_, lean_box(0));
v___x_3212_ = lean_box(0);
if (v_isShared_3207_ == 0)
{
lean_ctor_set(v___x_3206_, 0, v___x_3212_);
v___x_3214_ = v___x_3206_;
goto v_reusejp_3213_;
}
else
{
lean_object* v_reuseFailAlloc_3215_; 
v_reuseFailAlloc_3215_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3215_, 0, v___x_3212_);
v___x_3214_ = v_reuseFailAlloc_3215_;
goto v_reusejp_3213_;
}
v_reusejp_3213_:
{
return v___x_3214_;
}
}
}
}
else
{
lean_object* v_a_3217_; lean_object* v___x_3219_; uint8_t v_isShared_3220_; uint8_t v_isSharedCheck_3229_; 
v_a_3217_ = lean_ctor_get(v___x_3176_, 0);
v_isSharedCheck_3229_ = !lean_is_exclusive(v___x_3176_);
if (v_isSharedCheck_3229_ == 0)
{
v___x_3219_ = v___x_3176_;
v_isShared_3220_ = v_isSharedCheck_3229_;
goto v_resetjp_3218_;
}
else
{
lean_inc(v_a_3217_);
lean_dec(v___x_3176_);
v___x_3219_ = lean_box(0);
v_isShared_3220_ = v_isSharedCheck_3229_;
goto v_resetjp_3218_;
}
v_resetjp_3218_:
{
lean_object* v___x_3221_; uint8_t v___x_3222_; lean_object* v___x_3223_; lean_object* v___x_3224_; lean_object* v___x_3225_; lean_object* v___x_3227_; 
v___x_3221_ = lean_io_error_to_string(v_a_3217_);
v___x_3222_ = 3;
v___x_3223_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_3223_, 0, v___x_3221_);
lean_ctor_set_uint8(v___x_3223_, sizeof(void*)*1, v___x_3222_);
lean_inc_ref(v_a_3103_);
v___x_3224_ = lean_apply_2(v_a_3103_, v___x_3223_, lean_box(0));
v___x_3225_ = lean_box(0);
if (v_isShared_3220_ == 0)
{
lean_ctor_set(v___x_3219_, 0, v___x_3225_);
v___x_3227_ = v___x_3219_;
goto v_reusejp_3226_;
}
else
{
lean_object* v_reuseFailAlloc_3228_; 
v_reuseFailAlloc_3228_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3228_, 0, v___x_3225_);
v___x_3227_ = v_reuseFailAlloc_3228_;
goto v_reusejp_3226_;
}
v_reusejp_3226_:
{
return v___x_3227_;
}
}
}
}
else
{
lean_object* v___x_3230_; lean_object* v___x_3231_; uint8_t v___x_3232_; lean_object* v___x_3233_; 
lean_dec_ref_known(v_lakeArgs_x3f_3137_, 1);
lean_dec_ref(v___x_3151_);
lean_dec_ref(v_lakeEnv_3136_);
v___x_3230_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__11));
lean_inc_ref(v_a_3103_);
v___x_3231_ = lean_apply_2(v_a_3103_, v___x_3230_, lean_box(0));
v___x_3232_ = lean_uint8_once(&l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__12, &l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__12_once, _init_l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__12);
v___x_3233_ = lean_io_exit(v___x_3232_);
if (lean_obj_tag(v___x_3233_) == 0)
{
lean_object* v_a_3234_; lean_object* v___x_3236_; uint8_t v_isShared_3237_; uint8_t v_isSharedCheck_3241_; 
v_a_3234_ = lean_ctor_get(v___x_3233_, 0);
v_isSharedCheck_3241_ = !lean_is_exclusive(v___x_3233_);
if (v_isSharedCheck_3241_ == 0)
{
v___x_3236_ = v___x_3233_;
v_isShared_3237_ = v_isSharedCheck_3241_;
goto v_resetjp_3235_;
}
else
{
lean_inc(v_a_3234_);
lean_dec(v___x_3233_);
v___x_3236_ = lean_box(0);
v_isShared_3237_ = v_isSharedCheck_3241_;
goto v_resetjp_3235_;
}
v_resetjp_3235_:
{
lean_object* v___x_3239_; 
if (v_isShared_3237_ == 0)
{
v___x_3239_ = v___x_3236_;
goto v_reusejp_3238_;
}
else
{
lean_object* v_reuseFailAlloc_3240_; 
v_reuseFailAlloc_3240_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3240_, 0, v_a_3234_);
v___x_3239_ = v_reuseFailAlloc_3240_;
goto v_reusejp_3238_;
}
v_reusejp_3238_:
{
return v___x_3239_;
}
}
}
else
{
lean_object* v_a_3242_; lean_object* v___x_3244_; uint8_t v_isShared_3245_; uint8_t v_isSharedCheck_3254_; 
v_a_3242_ = lean_ctor_get(v___x_3233_, 0);
v_isSharedCheck_3254_ = !lean_is_exclusive(v___x_3233_);
if (v_isSharedCheck_3254_ == 0)
{
v___x_3244_ = v___x_3233_;
v_isShared_3245_ = v_isSharedCheck_3254_;
goto v_resetjp_3243_;
}
else
{
lean_inc(v_a_3242_);
lean_dec(v___x_3233_);
v___x_3244_ = lean_box(0);
v_isShared_3245_ = v_isSharedCheck_3254_;
goto v_resetjp_3243_;
}
v_resetjp_3243_:
{
lean_object* v___x_3246_; uint8_t v___x_3247_; lean_object* v___x_3248_; lean_object* v___x_3249_; lean_object* v___x_3250_; lean_object* v___x_3252_; 
v___x_3246_ = lean_io_error_to_string(v_a_3242_);
v___x_3247_ = 3;
v___x_3248_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_3248_, 0, v___x_3246_);
lean_ctor_set_uint8(v___x_3248_, sizeof(void*)*1, v___x_3247_);
lean_inc_ref(v_a_3103_);
v___x_3249_ = lean_apply_2(v_a_3103_, v___x_3248_, lean_box(0));
v___x_3250_ = lean_box(0);
if (v_isShared_3245_ == 0)
{
lean_ctor_set(v___x_3244_, 0, v___x_3250_);
v___x_3252_ = v___x_3244_;
goto v_reusejp_3251_;
}
else
{
lean_object* v_reuseFailAlloc_3253_; 
v_reuseFailAlloc_3253_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3253_, 0, v___x_3250_);
v___x_3252_ = v_reuseFailAlloc_3253_;
goto v_reusejp_3251_;
}
v_reusejp_3251_:
{
return v___x_3252_;
}
}
}
}
}
else
{
lean_object* v___x_3255_; lean_object* v___x_3256_; uint8_t v___x_3257_; lean_object* v___x_3258_; 
lean_dec_ref(v___x_3151_);
lean_dec(v_lakeArgs_x3f_3137_);
lean_dec_ref(v_lakeEnv_3136_);
v___x_3255_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__14));
lean_inc_ref(v_a_3103_);
v___x_3256_ = lean_apply_2(v_a_3103_, v___x_3255_, lean_box(0));
v___x_3257_ = lean_uint8_once(&l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__12, &l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__12_once, _init_l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___closed__12);
v___x_3258_ = lean_io_exit(v___x_3257_);
if (lean_obj_tag(v___x_3258_) == 0)
{
lean_object* v_a_3259_; lean_object* v___x_3261_; uint8_t v_isShared_3262_; uint8_t v_isSharedCheck_3266_; 
v_a_3259_ = lean_ctor_get(v___x_3258_, 0);
v_isSharedCheck_3266_ = !lean_is_exclusive(v___x_3258_);
if (v_isSharedCheck_3266_ == 0)
{
v___x_3261_ = v___x_3258_;
v_isShared_3262_ = v_isSharedCheck_3266_;
goto v_resetjp_3260_;
}
else
{
lean_inc(v_a_3259_);
lean_dec(v___x_3258_);
v___x_3261_ = lean_box(0);
v_isShared_3262_ = v_isSharedCheck_3266_;
goto v_resetjp_3260_;
}
v_resetjp_3260_:
{
lean_object* v___x_3264_; 
if (v_isShared_3262_ == 0)
{
v___x_3264_ = v___x_3261_;
goto v_reusejp_3263_;
}
else
{
lean_object* v_reuseFailAlloc_3265_; 
v_reuseFailAlloc_3265_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3265_, 0, v_a_3259_);
v___x_3264_ = v_reuseFailAlloc_3265_;
goto v_reusejp_3263_;
}
v_reusejp_3263_:
{
return v___x_3264_;
}
}
}
else
{
lean_object* v_a_3267_; lean_object* v___x_3269_; uint8_t v_isShared_3270_; uint8_t v_isSharedCheck_3279_; 
v_a_3267_ = lean_ctor_get(v___x_3258_, 0);
v_isSharedCheck_3279_ = !lean_is_exclusive(v___x_3258_);
if (v_isSharedCheck_3279_ == 0)
{
v___x_3269_ = v___x_3258_;
v_isShared_3270_ = v_isSharedCheck_3279_;
goto v_resetjp_3268_;
}
else
{
lean_inc(v_a_3267_);
lean_dec(v___x_3258_);
v___x_3269_ = lean_box(0);
v_isShared_3270_ = v_isSharedCheck_3279_;
goto v_resetjp_3268_;
}
v_resetjp_3268_:
{
lean_object* v___x_3271_; uint8_t v___x_3272_; lean_object* v___x_3273_; lean_object* v___x_3274_; lean_object* v___x_3275_; lean_object* v___x_3277_; 
v___x_3271_ = lean_io_error_to_string(v_a_3267_);
v___x_3272_ = 3;
v___x_3273_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_3273_, 0, v___x_3271_);
lean_ctor_set_uint8(v___x_3273_, sizeof(void*)*1, v___x_3272_);
lean_inc_ref(v_a_3103_);
v___x_3274_ = lean_apply_2(v_a_3103_, v___x_3273_, lean_box(0));
v___x_3275_ = lean_box(0);
if (v_isShared_3270_ == 0)
{
lean_ctor_set(v___x_3269_, 0, v___x_3275_);
v___x_3277_ = v___x_3269_;
goto v_reusejp_3276_;
}
else
{
lean_object* v_reuseFailAlloc_3278_; 
v_reuseFailAlloc_3278_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3278_, 0, v___x_3275_);
v___x_3277_ = v_reuseFailAlloc_3278_;
goto v_reusejp_3276_;
}
v_reusejp_3276_:
{
return v___x_3277_;
}
}
}
}
}
else
{
lean_object* v_a_3280_; lean_object* v___x_3282_; uint8_t v_isShared_3283_; uint8_t v_isSharedCheck_3292_; 
lean_dec_ref(v___x_3151_);
lean_dec(v_lakeArgs_x3f_3137_);
lean_dec_ref(v_lakeEnv_3136_);
v_a_3280_ = lean_ctor_get(v___x_3158_, 0);
v_isSharedCheck_3292_ = !lean_is_exclusive(v___x_3158_);
if (v_isSharedCheck_3292_ == 0)
{
v___x_3282_ = v___x_3158_;
v_isShared_3283_ = v_isSharedCheck_3292_;
goto v_resetjp_3281_;
}
else
{
lean_inc(v_a_3280_);
lean_dec(v___x_3158_);
v___x_3282_ = lean_box(0);
v_isShared_3283_ = v_isSharedCheck_3292_;
goto v_resetjp_3281_;
}
v_resetjp_3281_:
{
lean_object* v___x_3284_; uint8_t v___x_3285_; lean_object* v___x_3286_; lean_object* v___x_3287_; lean_object* v___x_3288_; lean_object* v___x_3290_; 
v___x_3284_ = lean_io_error_to_string(v_a_3280_);
v___x_3285_ = 3;
v___x_3286_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_3286_, 0, v___x_3284_);
lean_ctor_set_uint8(v___x_3286_, sizeof(void*)*1, v___x_3285_);
lean_inc_ref(v_a_3103_);
v___x_3287_ = lean_apply_2(v_a_3103_, v___x_3286_, lean_box(0));
v___x_3288_ = lean_box(0);
if (v_isShared_3283_ == 0)
{
lean_ctor_set(v___x_3282_, 0, v___x_3288_);
v___x_3290_ = v___x_3282_;
goto v_reusejp_3289_;
}
else
{
lean_object* v_reuseFailAlloc_3291_; 
v_reuseFailAlloc_3291_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3291_, 0, v___x_3288_);
v___x_3290_ = v_reuseFailAlloc_3291_;
goto v_reusejp_3289_;
}
v_reusejp_3289_:
{
return v___x_3290_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__7___boxed(lean_object* v_a_3361_, lean_object* v_ws_3362_, lean_object* v_rootDeps_3363_, lean_object* v_a_3364_){
_start:
{
lean_object* v_res_3365_; 
v_res_3365_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__7(v_a_3361_, v_ws_3362_, v_rootDeps_3363_);
lean_dec_ref(v_rootDeps_3363_);
lean_dec_ref(v_a_3361_);
return v_res_3365_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5_spec__6_spec__8___redArg(lean_object* v_msg_3366_){
_start:
{
lean_object* v___x_3367_; lean_object* v___x_3368_; 
v___x_3367_ = lean_box(1);
v___x_3368_ = lean_panic_fn_borrowed(v___x_3367_, v_msg_3366_);
return v___x_3368_;
}
}
static lean_object* _init_l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5_spec__6___redArg___closed__3(void){
_start:
{
lean_object* v___x_3372_; lean_object* v___x_3373_; lean_object* v___x_3374_; lean_object* v___x_3375_; lean_object* v___x_3376_; lean_object* v___x_3377_; 
v___x_3372_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5_spec__6___redArg___closed__2));
v___x_3373_ = lean_unsigned_to_nat(35u);
v___x_3374_ = lean_unsigned_to_nat(182u);
v___x_3375_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5_spec__6___redArg___closed__1));
v___x_3376_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5_spec__6___redArg___closed__0));
v___x_3377_ = l_mkPanicMessageWithDecl(v___x_3376_, v___x_3375_, v___x_3374_, v___x_3373_, v___x_3372_);
return v___x_3377_;
}
}
static lean_object* _init_l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5_spec__6___redArg___closed__4(void){
_start:
{
lean_object* v___x_3378_; lean_object* v___x_3379_; lean_object* v___x_3380_; lean_object* v___x_3381_; lean_object* v___x_3382_; lean_object* v___x_3383_; 
v___x_3378_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5_spec__6___redArg___closed__2));
v___x_3379_ = lean_unsigned_to_nat(21u);
v___x_3380_ = lean_unsigned_to_nat(183u);
v___x_3381_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5_spec__6___redArg___closed__1));
v___x_3382_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5_spec__6___redArg___closed__0));
v___x_3383_ = l_mkPanicMessageWithDecl(v___x_3382_, v___x_3381_, v___x_3380_, v___x_3379_, v___x_3378_);
return v___x_3383_;
}
}
static lean_object* _init_l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5_spec__6___redArg___closed__7(void){
_start:
{
lean_object* v___x_3386_; lean_object* v___x_3387_; lean_object* v___x_3388_; lean_object* v___x_3389_; lean_object* v___x_3390_; lean_object* v___x_3391_; 
v___x_3386_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5_spec__6___redArg___closed__6));
v___x_3387_ = lean_unsigned_to_nat(35u);
v___x_3388_ = lean_unsigned_to_nat(276u);
v___x_3389_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5_spec__6___redArg___closed__5));
v___x_3390_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5_spec__6___redArg___closed__0));
v___x_3391_ = l_mkPanicMessageWithDecl(v___x_3390_, v___x_3389_, v___x_3388_, v___x_3387_, v___x_3386_);
return v___x_3391_;
}
}
static lean_object* _init_l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5_spec__6___redArg___closed__8(void){
_start:
{
lean_object* v___x_3392_; lean_object* v___x_3393_; lean_object* v___x_3394_; lean_object* v___x_3395_; lean_object* v___x_3396_; lean_object* v___x_3397_; 
v___x_3392_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5_spec__6___redArg___closed__6));
v___x_3393_ = lean_unsigned_to_nat(21u);
v___x_3394_ = lean_unsigned_to_nat(277u);
v___x_3395_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5_spec__6___redArg___closed__5));
v___x_3396_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5_spec__6___redArg___closed__0));
v___x_3397_ = l_mkPanicMessageWithDecl(v___x_3396_, v___x_3395_, v___x_3394_, v___x_3393_, v___x_3392_);
return v___x_3397_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5_spec__6___redArg(lean_object* v_k_3398_, lean_object* v_v_3399_, lean_object* v_t_3400_){
_start:
{
if (lean_obj_tag(v_t_3400_) == 0)
{
lean_object* v_size_3401_; lean_object* v_k_3402_; lean_object* v_v_3403_; lean_object* v_l_3404_; lean_object* v_r_3405_; lean_object* v___x_3407_; uint8_t v_isShared_3408_; uint8_t v_isSharedCheck_3761_; 
v_size_3401_ = lean_ctor_get(v_t_3400_, 0);
v_k_3402_ = lean_ctor_get(v_t_3400_, 1);
v_v_3403_ = lean_ctor_get(v_t_3400_, 2);
v_l_3404_ = lean_ctor_get(v_t_3400_, 3);
v_r_3405_ = lean_ctor_get(v_t_3400_, 4);
v_isSharedCheck_3761_ = !lean_is_exclusive(v_t_3400_);
if (v_isSharedCheck_3761_ == 0)
{
v___x_3407_ = v_t_3400_;
v_isShared_3408_ = v_isSharedCheck_3761_;
goto v_resetjp_3406_;
}
else
{
lean_inc(v_r_3405_);
lean_inc(v_l_3404_);
lean_inc(v_v_3403_);
lean_inc(v_k_3402_);
lean_inc(v_size_3401_);
lean_dec(v_t_3400_);
v___x_3407_ = lean_box(0);
v_isShared_3408_ = v_isSharedCheck_3761_;
goto v_resetjp_3406_;
}
v_resetjp_3406_:
{
uint8_t v___x_3409_; 
v___x_3409_ = lean_string_compare(v_k_3398_, v_k_3402_);
switch(v___x_3409_)
{
case 0:
{
lean_object* v___x_3410_; 
lean_dec(v_size_3401_);
v___x_3410_ = l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5_spec__6___redArg(v_k_3398_, v_v_3399_, v_l_3404_);
if (lean_obj_tag(v_r_3405_) == 0)
{
if (lean_obj_tag(v___x_3410_) == 0)
{
lean_object* v_size_3411_; lean_object* v_size_3412_; lean_object* v_k_3413_; lean_object* v_v_3414_; lean_object* v_l_3415_; lean_object* v_r_3416_; lean_object* v___x_3417_; lean_object* v___x_3418_; uint8_t v___x_3419_; 
v_size_3411_ = lean_ctor_get(v_r_3405_, 0);
v_size_3412_ = lean_ctor_get(v___x_3410_, 0);
lean_inc(v_size_3412_);
v_k_3413_ = lean_ctor_get(v___x_3410_, 1);
lean_inc(v_k_3413_);
v_v_3414_ = lean_ctor_get(v___x_3410_, 2);
lean_inc(v_v_3414_);
v_l_3415_ = lean_ctor_get(v___x_3410_, 3);
lean_inc(v_l_3415_);
v_r_3416_ = lean_ctor_get(v___x_3410_, 4);
lean_inc(v_r_3416_);
v___x_3417_ = lean_unsigned_to_nat(3u);
v___x_3418_ = lean_nat_mul(v___x_3417_, v_size_3411_);
v___x_3419_ = lean_nat_dec_lt(v___x_3418_, v_size_3412_);
lean_dec(v___x_3418_);
if (v___x_3419_ == 0)
{
lean_object* v___x_3420_; lean_object* v___x_3421_; lean_object* v___x_3422_; lean_object* v___x_3424_; 
lean_dec(v_r_3416_);
lean_dec(v_l_3415_);
lean_dec(v_v_3414_);
lean_dec(v_k_3413_);
v___x_3420_ = lean_unsigned_to_nat(1u);
v___x_3421_ = lean_nat_add(v___x_3420_, v_size_3412_);
lean_dec(v_size_3412_);
v___x_3422_ = lean_nat_add(v___x_3421_, v_size_3411_);
lean_dec(v___x_3421_);
if (v_isShared_3408_ == 0)
{
lean_ctor_set(v___x_3407_, 3, v___x_3410_);
lean_ctor_set(v___x_3407_, 0, v___x_3422_);
v___x_3424_ = v___x_3407_;
goto v_reusejp_3423_;
}
else
{
lean_object* v_reuseFailAlloc_3425_; 
v_reuseFailAlloc_3425_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3425_, 0, v___x_3422_);
lean_ctor_set(v_reuseFailAlloc_3425_, 1, v_k_3402_);
lean_ctor_set(v_reuseFailAlloc_3425_, 2, v_v_3403_);
lean_ctor_set(v_reuseFailAlloc_3425_, 3, v___x_3410_);
lean_ctor_set(v_reuseFailAlloc_3425_, 4, v_r_3405_);
v___x_3424_ = v_reuseFailAlloc_3425_;
goto v_reusejp_3423_;
}
v_reusejp_3423_:
{
return v___x_3424_;
}
}
else
{
lean_object* v___x_3427_; uint8_t v_isShared_3428_; uint8_t v_isSharedCheck_3497_; 
v_isSharedCheck_3497_ = !lean_is_exclusive(v___x_3410_);
if (v_isSharedCheck_3497_ == 0)
{
lean_object* v_unused_3498_; lean_object* v_unused_3499_; lean_object* v_unused_3500_; lean_object* v_unused_3501_; lean_object* v_unused_3502_; 
v_unused_3498_ = lean_ctor_get(v___x_3410_, 4);
lean_dec(v_unused_3498_);
v_unused_3499_ = lean_ctor_get(v___x_3410_, 3);
lean_dec(v_unused_3499_);
v_unused_3500_ = lean_ctor_get(v___x_3410_, 2);
lean_dec(v_unused_3500_);
v_unused_3501_ = lean_ctor_get(v___x_3410_, 1);
lean_dec(v_unused_3501_);
v_unused_3502_ = lean_ctor_get(v___x_3410_, 0);
lean_dec(v_unused_3502_);
v___x_3427_ = v___x_3410_;
v_isShared_3428_ = v_isSharedCheck_3497_;
goto v_resetjp_3426_;
}
else
{
lean_dec(v___x_3410_);
v___x_3427_ = lean_box(0);
v_isShared_3428_ = v_isSharedCheck_3497_;
goto v_resetjp_3426_;
}
v_resetjp_3426_:
{
if (lean_obj_tag(v_l_3415_) == 0)
{
if (lean_obj_tag(v_r_3416_) == 0)
{
lean_object* v_size_3429_; lean_object* v_size_3430_; lean_object* v_k_3431_; lean_object* v_v_3432_; lean_object* v_l_3433_; lean_object* v_r_3434_; lean_object* v___x_3435_; lean_object* v___x_3436_; uint8_t v___x_3437_; 
v_size_3429_ = lean_ctor_get(v_l_3415_, 0);
v_size_3430_ = lean_ctor_get(v_r_3416_, 0);
v_k_3431_ = lean_ctor_get(v_r_3416_, 1);
v_v_3432_ = lean_ctor_get(v_r_3416_, 2);
v_l_3433_ = lean_ctor_get(v_r_3416_, 3);
v_r_3434_ = lean_ctor_get(v_r_3416_, 4);
v___x_3435_ = lean_unsigned_to_nat(2u);
v___x_3436_ = lean_nat_mul(v___x_3435_, v_size_3429_);
v___x_3437_ = lean_nat_dec_lt(v_size_3430_, v___x_3436_);
lean_dec(v___x_3436_);
if (v___x_3437_ == 0)
{
lean_object* v___x_3439_; uint8_t v_isShared_3440_; uint8_t v_isSharedCheck_3467_; 
lean_inc(v_r_3434_);
lean_inc(v_l_3433_);
lean_inc(v_v_3432_);
lean_inc(v_k_3431_);
v_isSharedCheck_3467_ = !lean_is_exclusive(v_r_3416_);
if (v_isSharedCheck_3467_ == 0)
{
lean_object* v_unused_3468_; lean_object* v_unused_3469_; lean_object* v_unused_3470_; lean_object* v_unused_3471_; lean_object* v_unused_3472_; 
v_unused_3468_ = lean_ctor_get(v_r_3416_, 4);
lean_dec(v_unused_3468_);
v_unused_3469_ = lean_ctor_get(v_r_3416_, 3);
lean_dec(v_unused_3469_);
v_unused_3470_ = lean_ctor_get(v_r_3416_, 2);
lean_dec(v_unused_3470_);
v_unused_3471_ = lean_ctor_get(v_r_3416_, 1);
lean_dec(v_unused_3471_);
v_unused_3472_ = lean_ctor_get(v_r_3416_, 0);
lean_dec(v_unused_3472_);
v___x_3439_ = v_r_3416_;
v_isShared_3440_ = v_isSharedCheck_3467_;
goto v_resetjp_3438_;
}
else
{
lean_dec(v_r_3416_);
v___x_3439_ = lean_box(0);
v_isShared_3440_ = v_isSharedCheck_3467_;
goto v_resetjp_3438_;
}
v_resetjp_3438_:
{
lean_object* v___x_3441_; lean_object* v___x_3442_; lean_object* v___x_3443_; lean_object* v___y_3445_; lean_object* v___y_3446_; lean_object* v___y_3447_; lean_object* v___x_3455_; lean_object* v___y_3457_; 
v___x_3441_ = lean_unsigned_to_nat(1u);
v___x_3442_ = lean_nat_add(v___x_3441_, v_size_3412_);
lean_dec(v_size_3412_);
v___x_3443_ = lean_nat_add(v___x_3442_, v_size_3411_);
lean_dec(v___x_3442_);
v___x_3455_ = lean_nat_add(v___x_3441_, v_size_3429_);
if (lean_obj_tag(v_l_3433_) == 0)
{
lean_object* v_size_3465_; 
v_size_3465_ = lean_ctor_get(v_l_3433_, 0);
lean_inc(v_size_3465_);
v___y_3457_ = v_size_3465_;
goto v___jp_3456_;
}
else
{
lean_object* v___x_3466_; 
v___x_3466_ = lean_unsigned_to_nat(0u);
v___y_3457_ = v___x_3466_;
goto v___jp_3456_;
}
v___jp_3444_:
{
lean_object* v___x_3448_; lean_object* v___x_3450_; 
v___x_3448_ = lean_nat_add(v___y_3446_, v___y_3447_);
lean_dec(v___y_3447_);
lean_dec(v___y_3446_);
if (v_isShared_3440_ == 0)
{
lean_ctor_set(v___x_3439_, 4, v_r_3405_);
lean_ctor_set(v___x_3439_, 3, v_r_3434_);
lean_ctor_set(v___x_3439_, 2, v_v_3403_);
lean_ctor_set(v___x_3439_, 1, v_k_3402_);
lean_ctor_set(v___x_3439_, 0, v___x_3448_);
v___x_3450_ = v___x_3439_;
goto v_reusejp_3449_;
}
else
{
lean_object* v_reuseFailAlloc_3454_; 
v_reuseFailAlloc_3454_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3454_, 0, v___x_3448_);
lean_ctor_set(v_reuseFailAlloc_3454_, 1, v_k_3402_);
lean_ctor_set(v_reuseFailAlloc_3454_, 2, v_v_3403_);
lean_ctor_set(v_reuseFailAlloc_3454_, 3, v_r_3434_);
lean_ctor_set(v_reuseFailAlloc_3454_, 4, v_r_3405_);
v___x_3450_ = v_reuseFailAlloc_3454_;
goto v_reusejp_3449_;
}
v_reusejp_3449_:
{
lean_object* v___x_3452_; 
if (v_isShared_3428_ == 0)
{
lean_ctor_set(v___x_3427_, 4, v___x_3450_);
lean_ctor_set(v___x_3427_, 3, v___y_3445_);
lean_ctor_set(v___x_3427_, 2, v_v_3432_);
lean_ctor_set(v___x_3427_, 1, v_k_3431_);
lean_ctor_set(v___x_3427_, 0, v___x_3443_);
v___x_3452_ = v___x_3427_;
goto v_reusejp_3451_;
}
else
{
lean_object* v_reuseFailAlloc_3453_; 
v_reuseFailAlloc_3453_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3453_, 0, v___x_3443_);
lean_ctor_set(v_reuseFailAlloc_3453_, 1, v_k_3431_);
lean_ctor_set(v_reuseFailAlloc_3453_, 2, v_v_3432_);
lean_ctor_set(v_reuseFailAlloc_3453_, 3, v___y_3445_);
lean_ctor_set(v_reuseFailAlloc_3453_, 4, v___x_3450_);
v___x_3452_ = v_reuseFailAlloc_3453_;
goto v_reusejp_3451_;
}
v_reusejp_3451_:
{
return v___x_3452_;
}
}
}
v___jp_3456_:
{
lean_object* v___x_3458_; lean_object* v___x_3460_; 
v___x_3458_ = lean_nat_add(v___x_3455_, v___y_3457_);
lean_dec(v___y_3457_);
lean_dec(v___x_3455_);
if (v_isShared_3408_ == 0)
{
lean_ctor_set(v___x_3407_, 4, v_l_3433_);
lean_ctor_set(v___x_3407_, 3, v_l_3415_);
lean_ctor_set(v___x_3407_, 2, v_v_3414_);
lean_ctor_set(v___x_3407_, 1, v_k_3413_);
lean_ctor_set(v___x_3407_, 0, v___x_3458_);
v___x_3460_ = v___x_3407_;
goto v_reusejp_3459_;
}
else
{
lean_object* v_reuseFailAlloc_3464_; 
v_reuseFailAlloc_3464_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3464_, 0, v___x_3458_);
lean_ctor_set(v_reuseFailAlloc_3464_, 1, v_k_3413_);
lean_ctor_set(v_reuseFailAlloc_3464_, 2, v_v_3414_);
lean_ctor_set(v_reuseFailAlloc_3464_, 3, v_l_3415_);
lean_ctor_set(v_reuseFailAlloc_3464_, 4, v_l_3433_);
v___x_3460_ = v_reuseFailAlloc_3464_;
goto v_reusejp_3459_;
}
v_reusejp_3459_:
{
lean_object* v___x_3461_; 
v___x_3461_ = lean_nat_add(v___x_3441_, v_size_3411_);
if (lean_obj_tag(v_r_3434_) == 0)
{
lean_object* v_size_3462_; 
v_size_3462_ = lean_ctor_get(v_r_3434_, 0);
lean_inc(v_size_3462_);
v___y_3445_ = v___x_3460_;
v___y_3446_ = v___x_3461_;
v___y_3447_ = v_size_3462_;
goto v___jp_3444_;
}
else
{
lean_object* v___x_3463_; 
v___x_3463_ = lean_unsigned_to_nat(0u);
v___y_3445_ = v___x_3460_;
v___y_3446_ = v___x_3461_;
v___y_3447_ = v___x_3463_;
goto v___jp_3444_;
}
}
}
}
}
else
{
lean_object* v___x_3473_; lean_object* v___x_3474_; lean_object* v___x_3475_; lean_object* v___x_3476_; lean_object* v___x_3477_; lean_object* v___x_3479_; 
lean_del_object(v___x_3407_);
v___x_3473_ = lean_unsigned_to_nat(1u);
v___x_3474_ = lean_nat_add(v___x_3473_, v_size_3412_);
lean_dec(v_size_3412_);
v___x_3475_ = lean_nat_add(v___x_3474_, v_size_3411_);
lean_dec(v___x_3474_);
v___x_3476_ = lean_nat_add(v___x_3473_, v_size_3411_);
v___x_3477_ = lean_nat_add(v___x_3476_, v_size_3430_);
lean_dec(v___x_3476_);
lean_inc_ref(v_r_3405_);
if (v_isShared_3428_ == 0)
{
lean_ctor_set(v___x_3427_, 4, v_r_3405_);
lean_ctor_set(v___x_3427_, 3, v_r_3416_);
lean_ctor_set(v___x_3427_, 2, v_v_3403_);
lean_ctor_set(v___x_3427_, 1, v_k_3402_);
lean_ctor_set(v___x_3427_, 0, v___x_3477_);
v___x_3479_ = v___x_3427_;
goto v_reusejp_3478_;
}
else
{
lean_object* v_reuseFailAlloc_3492_; 
v_reuseFailAlloc_3492_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3492_, 0, v___x_3477_);
lean_ctor_set(v_reuseFailAlloc_3492_, 1, v_k_3402_);
lean_ctor_set(v_reuseFailAlloc_3492_, 2, v_v_3403_);
lean_ctor_set(v_reuseFailAlloc_3492_, 3, v_r_3416_);
lean_ctor_set(v_reuseFailAlloc_3492_, 4, v_r_3405_);
v___x_3479_ = v_reuseFailAlloc_3492_;
goto v_reusejp_3478_;
}
v_reusejp_3478_:
{
lean_object* v___x_3481_; uint8_t v_isShared_3482_; uint8_t v_isSharedCheck_3486_; 
v_isSharedCheck_3486_ = !lean_is_exclusive(v_r_3405_);
if (v_isSharedCheck_3486_ == 0)
{
lean_object* v_unused_3487_; lean_object* v_unused_3488_; lean_object* v_unused_3489_; lean_object* v_unused_3490_; lean_object* v_unused_3491_; 
v_unused_3487_ = lean_ctor_get(v_r_3405_, 4);
lean_dec(v_unused_3487_);
v_unused_3488_ = lean_ctor_get(v_r_3405_, 3);
lean_dec(v_unused_3488_);
v_unused_3489_ = lean_ctor_get(v_r_3405_, 2);
lean_dec(v_unused_3489_);
v_unused_3490_ = lean_ctor_get(v_r_3405_, 1);
lean_dec(v_unused_3490_);
v_unused_3491_ = lean_ctor_get(v_r_3405_, 0);
lean_dec(v_unused_3491_);
v___x_3481_ = v_r_3405_;
v_isShared_3482_ = v_isSharedCheck_3486_;
goto v_resetjp_3480_;
}
else
{
lean_dec(v_r_3405_);
v___x_3481_ = lean_box(0);
v_isShared_3482_ = v_isSharedCheck_3486_;
goto v_resetjp_3480_;
}
v_resetjp_3480_:
{
lean_object* v___x_3484_; 
if (v_isShared_3482_ == 0)
{
lean_ctor_set(v___x_3481_, 4, v___x_3479_);
lean_ctor_set(v___x_3481_, 3, v_l_3415_);
lean_ctor_set(v___x_3481_, 2, v_v_3414_);
lean_ctor_set(v___x_3481_, 1, v_k_3413_);
lean_ctor_set(v___x_3481_, 0, v___x_3475_);
v___x_3484_ = v___x_3481_;
goto v_reusejp_3483_;
}
else
{
lean_object* v_reuseFailAlloc_3485_; 
v_reuseFailAlloc_3485_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3485_, 0, v___x_3475_);
lean_ctor_set(v_reuseFailAlloc_3485_, 1, v_k_3413_);
lean_ctor_set(v_reuseFailAlloc_3485_, 2, v_v_3414_);
lean_ctor_set(v_reuseFailAlloc_3485_, 3, v_l_3415_);
lean_ctor_set(v_reuseFailAlloc_3485_, 4, v___x_3479_);
v___x_3484_ = v_reuseFailAlloc_3485_;
goto v_reusejp_3483_;
}
v_reusejp_3483_:
{
return v___x_3484_;
}
}
}
}
}
else
{
lean_object* v___x_3493_; lean_object* v___x_3494_; 
lean_dec_ref_known(v_l_3415_, 5);
lean_del_object(v___x_3427_);
lean_dec(v_v_3414_);
lean_dec(v_k_3413_);
lean_dec(v_size_3412_);
lean_dec_ref_known(v_r_3405_, 5);
lean_del_object(v___x_3407_);
lean_dec(v_v_3403_);
lean_dec(v_k_3402_);
v___x_3493_ = lean_obj_once(&l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5_spec__6___redArg___closed__3, &l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5_spec__6___redArg___closed__3_once, _init_l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5_spec__6___redArg___closed__3);
v___x_3494_ = l_panic___at___00Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5_spec__6_spec__8___redArg(v___x_3493_);
return v___x_3494_;
}
}
else
{
lean_object* v___x_3495_; lean_object* v___x_3496_; 
lean_del_object(v___x_3427_);
lean_dec(v_r_3416_);
lean_dec(v_v_3414_);
lean_dec(v_k_3413_);
lean_dec(v_size_3412_);
lean_dec_ref_known(v_r_3405_, 5);
lean_del_object(v___x_3407_);
lean_dec(v_v_3403_);
lean_dec(v_k_3402_);
v___x_3495_ = lean_obj_once(&l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5_spec__6___redArg___closed__4, &l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5_spec__6___redArg___closed__4_once, _init_l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5_spec__6___redArg___closed__4);
v___x_3496_ = l_panic___at___00Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5_spec__6_spec__8___redArg(v___x_3495_);
return v___x_3496_;
}
}
}
}
else
{
lean_object* v_size_3503_; lean_object* v___x_3504_; lean_object* v___x_3505_; lean_object* v___x_3507_; 
v_size_3503_ = lean_ctor_get(v_r_3405_, 0);
v___x_3504_ = lean_unsigned_to_nat(1u);
v___x_3505_ = lean_nat_add(v___x_3504_, v_size_3503_);
if (v_isShared_3408_ == 0)
{
lean_ctor_set(v___x_3407_, 3, v___x_3410_);
lean_ctor_set(v___x_3407_, 0, v___x_3505_);
v___x_3507_ = v___x_3407_;
goto v_reusejp_3506_;
}
else
{
lean_object* v_reuseFailAlloc_3508_; 
v_reuseFailAlloc_3508_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3508_, 0, v___x_3505_);
lean_ctor_set(v_reuseFailAlloc_3508_, 1, v_k_3402_);
lean_ctor_set(v_reuseFailAlloc_3508_, 2, v_v_3403_);
lean_ctor_set(v_reuseFailAlloc_3508_, 3, v___x_3410_);
lean_ctor_set(v_reuseFailAlloc_3508_, 4, v_r_3405_);
v___x_3507_ = v_reuseFailAlloc_3508_;
goto v_reusejp_3506_;
}
v_reusejp_3506_:
{
return v___x_3507_;
}
}
}
else
{
if (lean_obj_tag(v___x_3410_) == 0)
{
lean_object* v_l_3509_; 
v_l_3509_ = lean_ctor_get(v___x_3410_, 3);
lean_inc(v_l_3509_);
if (lean_obj_tag(v_l_3509_) == 0)
{
lean_object* v_r_3510_; 
v_r_3510_ = lean_ctor_get(v___x_3410_, 4);
lean_inc(v_r_3510_);
if (lean_obj_tag(v_r_3510_) == 0)
{
lean_object* v_size_3511_; lean_object* v_k_3512_; lean_object* v_v_3513_; lean_object* v___x_3515_; uint8_t v_isShared_3516_; uint8_t v_isSharedCheck_3527_; 
v_size_3511_ = lean_ctor_get(v___x_3410_, 0);
v_k_3512_ = lean_ctor_get(v___x_3410_, 1);
v_v_3513_ = lean_ctor_get(v___x_3410_, 2);
v_isSharedCheck_3527_ = !lean_is_exclusive(v___x_3410_);
if (v_isSharedCheck_3527_ == 0)
{
lean_object* v_unused_3528_; lean_object* v_unused_3529_; 
v_unused_3528_ = lean_ctor_get(v___x_3410_, 4);
lean_dec(v_unused_3528_);
v_unused_3529_ = lean_ctor_get(v___x_3410_, 3);
lean_dec(v_unused_3529_);
v___x_3515_ = v___x_3410_;
v_isShared_3516_ = v_isSharedCheck_3527_;
goto v_resetjp_3514_;
}
else
{
lean_inc(v_v_3513_);
lean_inc(v_k_3512_);
lean_inc(v_size_3511_);
lean_dec(v___x_3410_);
v___x_3515_ = lean_box(0);
v_isShared_3516_ = v_isSharedCheck_3527_;
goto v_resetjp_3514_;
}
v_resetjp_3514_:
{
lean_object* v_size_3517_; lean_object* v___x_3518_; lean_object* v___x_3519_; lean_object* v___x_3520_; lean_object* v___x_3522_; 
v_size_3517_ = lean_ctor_get(v_r_3510_, 0);
v___x_3518_ = lean_unsigned_to_nat(1u);
v___x_3519_ = lean_nat_add(v___x_3518_, v_size_3511_);
lean_dec(v_size_3511_);
v___x_3520_ = lean_nat_add(v___x_3518_, v_size_3517_);
if (v_isShared_3516_ == 0)
{
lean_ctor_set(v___x_3515_, 4, v_r_3405_);
lean_ctor_set(v___x_3515_, 3, v_r_3510_);
lean_ctor_set(v___x_3515_, 2, v_v_3403_);
lean_ctor_set(v___x_3515_, 1, v_k_3402_);
lean_ctor_set(v___x_3515_, 0, v___x_3520_);
v___x_3522_ = v___x_3515_;
goto v_reusejp_3521_;
}
else
{
lean_object* v_reuseFailAlloc_3526_; 
v_reuseFailAlloc_3526_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3526_, 0, v___x_3520_);
lean_ctor_set(v_reuseFailAlloc_3526_, 1, v_k_3402_);
lean_ctor_set(v_reuseFailAlloc_3526_, 2, v_v_3403_);
lean_ctor_set(v_reuseFailAlloc_3526_, 3, v_r_3510_);
lean_ctor_set(v_reuseFailAlloc_3526_, 4, v_r_3405_);
v___x_3522_ = v_reuseFailAlloc_3526_;
goto v_reusejp_3521_;
}
v_reusejp_3521_:
{
lean_object* v___x_3524_; 
if (v_isShared_3408_ == 0)
{
lean_ctor_set(v___x_3407_, 4, v___x_3522_);
lean_ctor_set(v___x_3407_, 3, v_l_3509_);
lean_ctor_set(v___x_3407_, 2, v_v_3513_);
lean_ctor_set(v___x_3407_, 1, v_k_3512_);
lean_ctor_set(v___x_3407_, 0, v___x_3519_);
v___x_3524_ = v___x_3407_;
goto v_reusejp_3523_;
}
else
{
lean_object* v_reuseFailAlloc_3525_; 
v_reuseFailAlloc_3525_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3525_, 0, v___x_3519_);
lean_ctor_set(v_reuseFailAlloc_3525_, 1, v_k_3512_);
lean_ctor_set(v_reuseFailAlloc_3525_, 2, v_v_3513_);
lean_ctor_set(v_reuseFailAlloc_3525_, 3, v_l_3509_);
lean_ctor_set(v_reuseFailAlloc_3525_, 4, v___x_3522_);
v___x_3524_ = v_reuseFailAlloc_3525_;
goto v_reusejp_3523_;
}
v_reusejp_3523_:
{
return v___x_3524_;
}
}
}
}
else
{
lean_object* v_k_3530_; lean_object* v_v_3531_; lean_object* v___x_3533_; uint8_t v_isShared_3534_; uint8_t v_isSharedCheck_3543_; 
v_k_3530_ = lean_ctor_get(v___x_3410_, 1);
v_v_3531_ = lean_ctor_get(v___x_3410_, 2);
v_isSharedCheck_3543_ = !lean_is_exclusive(v___x_3410_);
if (v_isSharedCheck_3543_ == 0)
{
lean_object* v_unused_3544_; lean_object* v_unused_3545_; lean_object* v_unused_3546_; 
v_unused_3544_ = lean_ctor_get(v___x_3410_, 4);
lean_dec(v_unused_3544_);
v_unused_3545_ = lean_ctor_get(v___x_3410_, 3);
lean_dec(v_unused_3545_);
v_unused_3546_ = lean_ctor_get(v___x_3410_, 0);
lean_dec(v_unused_3546_);
v___x_3533_ = v___x_3410_;
v_isShared_3534_ = v_isSharedCheck_3543_;
goto v_resetjp_3532_;
}
else
{
lean_inc(v_v_3531_);
lean_inc(v_k_3530_);
lean_dec(v___x_3410_);
v___x_3533_ = lean_box(0);
v_isShared_3534_ = v_isSharedCheck_3543_;
goto v_resetjp_3532_;
}
v_resetjp_3532_:
{
lean_object* v___x_3535_; lean_object* v___x_3536_; lean_object* v___x_3538_; 
v___x_3535_ = lean_unsigned_to_nat(3u);
v___x_3536_ = lean_unsigned_to_nat(1u);
if (v_isShared_3534_ == 0)
{
lean_ctor_set(v___x_3533_, 3, v_r_3510_);
lean_ctor_set(v___x_3533_, 2, v_v_3403_);
lean_ctor_set(v___x_3533_, 1, v_k_3402_);
lean_ctor_set(v___x_3533_, 0, v___x_3536_);
v___x_3538_ = v___x_3533_;
goto v_reusejp_3537_;
}
else
{
lean_object* v_reuseFailAlloc_3542_; 
v_reuseFailAlloc_3542_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3542_, 0, v___x_3536_);
lean_ctor_set(v_reuseFailAlloc_3542_, 1, v_k_3402_);
lean_ctor_set(v_reuseFailAlloc_3542_, 2, v_v_3403_);
lean_ctor_set(v_reuseFailAlloc_3542_, 3, v_r_3510_);
lean_ctor_set(v_reuseFailAlloc_3542_, 4, v_r_3510_);
v___x_3538_ = v_reuseFailAlloc_3542_;
goto v_reusejp_3537_;
}
v_reusejp_3537_:
{
lean_object* v___x_3540_; 
if (v_isShared_3408_ == 0)
{
lean_ctor_set(v___x_3407_, 4, v___x_3538_);
lean_ctor_set(v___x_3407_, 3, v_l_3509_);
lean_ctor_set(v___x_3407_, 2, v_v_3531_);
lean_ctor_set(v___x_3407_, 1, v_k_3530_);
lean_ctor_set(v___x_3407_, 0, v___x_3535_);
v___x_3540_ = v___x_3407_;
goto v_reusejp_3539_;
}
else
{
lean_object* v_reuseFailAlloc_3541_; 
v_reuseFailAlloc_3541_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3541_, 0, v___x_3535_);
lean_ctor_set(v_reuseFailAlloc_3541_, 1, v_k_3530_);
lean_ctor_set(v_reuseFailAlloc_3541_, 2, v_v_3531_);
lean_ctor_set(v_reuseFailAlloc_3541_, 3, v_l_3509_);
lean_ctor_set(v_reuseFailAlloc_3541_, 4, v___x_3538_);
v___x_3540_ = v_reuseFailAlloc_3541_;
goto v_reusejp_3539_;
}
v_reusejp_3539_:
{
return v___x_3540_;
}
}
}
}
}
else
{
lean_object* v_r_3547_; 
v_r_3547_ = lean_ctor_get(v___x_3410_, 4);
lean_inc(v_r_3547_);
if (lean_obj_tag(v_r_3547_) == 0)
{
lean_object* v_k_3548_; lean_object* v_v_3549_; lean_object* v___x_3551_; uint8_t v_isShared_3552_; uint8_t v_isSharedCheck_3573_; 
v_k_3548_ = lean_ctor_get(v___x_3410_, 1);
v_v_3549_ = lean_ctor_get(v___x_3410_, 2);
v_isSharedCheck_3573_ = !lean_is_exclusive(v___x_3410_);
if (v_isSharedCheck_3573_ == 0)
{
lean_object* v_unused_3574_; lean_object* v_unused_3575_; lean_object* v_unused_3576_; 
v_unused_3574_ = lean_ctor_get(v___x_3410_, 4);
lean_dec(v_unused_3574_);
v_unused_3575_ = lean_ctor_get(v___x_3410_, 3);
lean_dec(v_unused_3575_);
v_unused_3576_ = lean_ctor_get(v___x_3410_, 0);
lean_dec(v_unused_3576_);
v___x_3551_ = v___x_3410_;
v_isShared_3552_ = v_isSharedCheck_3573_;
goto v_resetjp_3550_;
}
else
{
lean_inc(v_v_3549_);
lean_inc(v_k_3548_);
lean_dec(v___x_3410_);
v___x_3551_ = lean_box(0);
v_isShared_3552_ = v_isSharedCheck_3573_;
goto v_resetjp_3550_;
}
v_resetjp_3550_:
{
lean_object* v_k_3553_; lean_object* v_v_3554_; lean_object* v___x_3556_; uint8_t v_isShared_3557_; uint8_t v_isSharedCheck_3569_; 
v_k_3553_ = lean_ctor_get(v_r_3547_, 1);
v_v_3554_ = lean_ctor_get(v_r_3547_, 2);
v_isSharedCheck_3569_ = !lean_is_exclusive(v_r_3547_);
if (v_isSharedCheck_3569_ == 0)
{
lean_object* v_unused_3570_; lean_object* v_unused_3571_; lean_object* v_unused_3572_; 
v_unused_3570_ = lean_ctor_get(v_r_3547_, 4);
lean_dec(v_unused_3570_);
v_unused_3571_ = lean_ctor_get(v_r_3547_, 3);
lean_dec(v_unused_3571_);
v_unused_3572_ = lean_ctor_get(v_r_3547_, 0);
lean_dec(v_unused_3572_);
v___x_3556_ = v_r_3547_;
v_isShared_3557_ = v_isSharedCheck_3569_;
goto v_resetjp_3555_;
}
else
{
lean_inc(v_v_3554_);
lean_inc(v_k_3553_);
lean_dec(v_r_3547_);
v___x_3556_ = lean_box(0);
v_isShared_3557_ = v_isSharedCheck_3569_;
goto v_resetjp_3555_;
}
v_resetjp_3555_:
{
lean_object* v___x_3558_; lean_object* v___x_3559_; lean_object* v___x_3561_; 
v___x_3558_ = lean_unsigned_to_nat(3u);
v___x_3559_ = lean_unsigned_to_nat(1u);
if (v_isShared_3557_ == 0)
{
lean_ctor_set(v___x_3556_, 4, v_l_3509_);
lean_ctor_set(v___x_3556_, 3, v_l_3509_);
lean_ctor_set(v___x_3556_, 2, v_v_3549_);
lean_ctor_set(v___x_3556_, 1, v_k_3548_);
lean_ctor_set(v___x_3556_, 0, v___x_3559_);
v___x_3561_ = v___x_3556_;
goto v_reusejp_3560_;
}
else
{
lean_object* v_reuseFailAlloc_3568_; 
v_reuseFailAlloc_3568_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3568_, 0, v___x_3559_);
lean_ctor_set(v_reuseFailAlloc_3568_, 1, v_k_3548_);
lean_ctor_set(v_reuseFailAlloc_3568_, 2, v_v_3549_);
lean_ctor_set(v_reuseFailAlloc_3568_, 3, v_l_3509_);
lean_ctor_set(v_reuseFailAlloc_3568_, 4, v_l_3509_);
v___x_3561_ = v_reuseFailAlloc_3568_;
goto v_reusejp_3560_;
}
v_reusejp_3560_:
{
lean_object* v___x_3563_; 
if (v_isShared_3552_ == 0)
{
lean_ctor_set(v___x_3551_, 4, v_l_3509_);
lean_ctor_set(v___x_3551_, 2, v_v_3403_);
lean_ctor_set(v___x_3551_, 1, v_k_3402_);
lean_ctor_set(v___x_3551_, 0, v___x_3559_);
v___x_3563_ = v___x_3551_;
goto v_reusejp_3562_;
}
else
{
lean_object* v_reuseFailAlloc_3567_; 
v_reuseFailAlloc_3567_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3567_, 0, v___x_3559_);
lean_ctor_set(v_reuseFailAlloc_3567_, 1, v_k_3402_);
lean_ctor_set(v_reuseFailAlloc_3567_, 2, v_v_3403_);
lean_ctor_set(v_reuseFailAlloc_3567_, 3, v_l_3509_);
lean_ctor_set(v_reuseFailAlloc_3567_, 4, v_l_3509_);
v___x_3563_ = v_reuseFailAlloc_3567_;
goto v_reusejp_3562_;
}
v_reusejp_3562_:
{
lean_object* v___x_3565_; 
if (v_isShared_3408_ == 0)
{
lean_ctor_set(v___x_3407_, 4, v___x_3563_);
lean_ctor_set(v___x_3407_, 3, v___x_3561_);
lean_ctor_set(v___x_3407_, 2, v_v_3554_);
lean_ctor_set(v___x_3407_, 1, v_k_3553_);
lean_ctor_set(v___x_3407_, 0, v___x_3558_);
v___x_3565_ = v___x_3407_;
goto v_reusejp_3564_;
}
else
{
lean_object* v_reuseFailAlloc_3566_; 
v_reuseFailAlloc_3566_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3566_, 0, v___x_3558_);
lean_ctor_set(v_reuseFailAlloc_3566_, 1, v_k_3553_);
lean_ctor_set(v_reuseFailAlloc_3566_, 2, v_v_3554_);
lean_ctor_set(v_reuseFailAlloc_3566_, 3, v___x_3561_);
lean_ctor_set(v_reuseFailAlloc_3566_, 4, v___x_3563_);
v___x_3565_ = v_reuseFailAlloc_3566_;
goto v_reusejp_3564_;
}
v_reusejp_3564_:
{
return v___x_3565_;
}
}
}
}
}
}
else
{
lean_object* v___x_3577_; lean_object* v___x_3579_; 
v___x_3577_ = lean_unsigned_to_nat(2u);
if (v_isShared_3408_ == 0)
{
lean_ctor_set(v___x_3407_, 4, v_r_3547_);
lean_ctor_set(v___x_3407_, 3, v___x_3410_);
lean_ctor_set(v___x_3407_, 0, v___x_3577_);
v___x_3579_ = v___x_3407_;
goto v_reusejp_3578_;
}
else
{
lean_object* v_reuseFailAlloc_3580_; 
v_reuseFailAlloc_3580_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3580_, 0, v___x_3577_);
lean_ctor_set(v_reuseFailAlloc_3580_, 1, v_k_3402_);
lean_ctor_set(v_reuseFailAlloc_3580_, 2, v_v_3403_);
lean_ctor_set(v_reuseFailAlloc_3580_, 3, v___x_3410_);
lean_ctor_set(v_reuseFailAlloc_3580_, 4, v_r_3547_);
v___x_3579_ = v_reuseFailAlloc_3580_;
goto v_reusejp_3578_;
}
v_reusejp_3578_:
{
return v___x_3579_;
}
}
}
}
else
{
lean_object* v___x_3581_; lean_object* v___x_3583_; 
v___x_3581_ = lean_unsigned_to_nat(1u);
if (v_isShared_3408_ == 0)
{
lean_ctor_set(v___x_3407_, 4, v___x_3410_);
lean_ctor_set(v___x_3407_, 3, v___x_3410_);
lean_ctor_set(v___x_3407_, 0, v___x_3581_);
v___x_3583_ = v___x_3407_;
goto v_reusejp_3582_;
}
else
{
lean_object* v_reuseFailAlloc_3584_; 
v_reuseFailAlloc_3584_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3584_, 0, v___x_3581_);
lean_ctor_set(v_reuseFailAlloc_3584_, 1, v_k_3402_);
lean_ctor_set(v_reuseFailAlloc_3584_, 2, v_v_3403_);
lean_ctor_set(v_reuseFailAlloc_3584_, 3, v___x_3410_);
lean_ctor_set(v_reuseFailAlloc_3584_, 4, v___x_3410_);
v___x_3583_ = v_reuseFailAlloc_3584_;
goto v_reusejp_3582_;
}
v_reusejp_3582_:
{
return v___x_3583_;
}
}
}
}
case 1:
{
lean_object* v___x_3586_; 
lean_dec(v_v_3403_);
lean_dec(v_k_3402_);
if (v_isShared_3408_ == 0)
{
lean_ctor_set(v___x_3407_, 2, v_v_3399_);
lean_ctor_set(v___x_3407_, 1, v_k_3398_);
v___x_3586_ = v___x_3407_;
goto v_reusejp_3585_;
}
else
{
lean_object* v_reuseFailAlloc_3587_; 
v_reuseFailAlloc_3587_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3587_, 0, v_size_3401_);
lean_ctor_set(v_reuseFailAlloc_3587_, 1, v_k_3398_);
lean_ctor_set(v_reuseFailAlloc_3587_, 2, v_v_3399_);
lean_ctor_set(v_reuseFailAlloc_3587_, 3, v_l_3404_);
lean_ctor_set(v_reuseFailAlloc_3587_, 4, v_r_3405_);
v___x_3586_ = v_reuseFailAlloc_3587_;
goto v_reusejp_3585_;
}
v_reusejp_3585_:
{
return v___x_3586_;
}
}
default: 
{
lean_object* v___x_3588_; 
lean_dec(v_size_3401_);
v___x_3588_ = l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5_spec__6___redArg(v_k_3398_, v_v_3399_, v_r_3405_);
if (lean_obj_tag(v_l_3404_) == 0)
{
if (lean_obj_tag(v___x_3588_) == 0)
{
lean_object* v_size_3589_; lean_object* v_size_3590_; lean_object* v_k_3591_; lean_object* v_v_3592_; lean_object* v_l_3593_; lean_object* v_r_3594_; lean_object* v___x_3595_; lean_object* v___x_3596_; uint8_t v___x_3597_; 
v_size_3589_ = lean_ctor_get(v_l_3404_, 0);
v_size_3590_ = lean_ctor_get(v___x_3588_, 0);
lean_inc(v_size_3590_);
v_k_3591_ = lean_ctor_get(v___x_3588_, 1);
lean_inc(v_k_3591_);
v_v_3592_ = lean_ctor_get(v___x_3588_, 2);
lean_inc(v_v_3592_);
v_l_3593_ = lean_ctor_get(v___x_3588_, 3);
lean_inc(v_l_3593_);
v_r_3594_ = lean_ctor_get(v___x_3588_, 4);
lean_inc(v_r_3594_);
v___x_3595_ = lean_unsigned_to_nat(3u);
v___x_3596_ = lean_nat_mul(v___x_3595_, v_size_3589_);
v___x_3597_ = lean_nat_dec_lt(v___x_3596_, v_size_3590_);
lean_dec(v___x_3596_);
if (v___x_3597_ == 0)
{
lean_object* v___x_3598_; lean_object* v___x_3599_; lean_object* v___x_3600_; lean_object* v___x_3602_; 
lean_dec(v_r_3594_);
lean_dec(v_l_3593_);
lean_dec(v_v_3592_);
lean_dec(v_k_3591_);
v___x_3598_ = lean_unsigned_to_nat(1u);
v___x_3599_ = lean_nat_add(v___x_3598_, v_size_3589_);
v___x_3600_ = lean_nat_add(v___x_3599_, v_size_3590_);
lean_dec(v_size_3590_);
lean_dec(v___x_3599_);
if (v_isShared_3408_ == 0)
{
lean_ctor_set(v___x_3407_, 4, v___x_3588_);
lean_ctor_set(v___x_3407_, 0, v___x_3600_);
v___x_3602_ = v___x_3407_;
goto v_reusejp_3601_;
}
else
{
lean_object* v_reuseFailAlloc_3603_; 
v_reuseFailAlloc_3603_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3603_, 0, v___x_3600_);
lean_ctor_set(v_reuseFailAlloc_3603_, 1, v_k_3402_);
lean_ctor_set(v_reuseFailAlloc_3603_, 2, v_v_3403_);
lean_ctor_set(v_reuseFailAlloc_3603_, 3, v_l_3404_);
lean_ctor_set(v_reuseFailAlloc_3603_, 4, v___x_3588_);
v___x_3602_ = v_reuseFailAlloc_3603_;
goto v_reusejp_3601_;
}
v_reusejp_3601_:
{
return v___x_3602_;
}
}
else
{
lean_object* v___x_3605_; uint8_t v_isShared_3606_; uint8_t v_isSharedCheck_3673_; 
v_isSharedCheck_3673_ = !lean_is_exclusive(v___x_3588_);
if (v_isSharedCheck_3673_ == 0)
{
lean_object* v_unused_3674_; lean_object* v_unused_3675_; lean_object* v_unused_3676_; lean_object* v_unused_3677_; lean_object* v_unused_3678_; 
v_unused_3674_ = lean_ctor_get(v___x_3588_, 4);
lean_dec(v_unused_3674_);
v_unused_3675_ = lean_ctor_get(v___x_3588_, 3);
lean_dec(v_unused_3675_);
v_unused_3676_ = lean_ctor_get(v___x_3588_, 2);
lean_dec(v_unused_3676_);
v_unused_3677_ = lean_ctor_get(v___x_3588_, 1);
lean_dec(v_unused_3677_);
v_unused_3678_ = lean_ctor_get(v___x_3588_, 0);
lean_dec(v_unused_3678_);
v___x_3605_ = v___x_3588_;
v_isShared_3606_ = v_isSharedCheck_3673_;
goto v_resetjp_3604_;
}
else
{
lean_dec(v___x_3588_);
v___x_3605_ = lean_box(0);
v_isShared_3606_ = v_isSharedCheck_3673_;
goto v_resetjp_3604_;
}
v_resetjp_3604_:
{
if (lean_obj_tag(v_l_3593_) == 0)
{
if (lean_obj_tag(v_r_3594_) == 0)
{
lean_object* v_size_3607_; lean_object* v_k_3608_; lean_object* v_v_3609_; lean_object* v_l_3610_; lean_object* v_r_3611_; lean_object* v_size_3612_; lean_object* v___x_3613_; lean_object* v___x_3614_; uint8_t v___x_3615_; 
v_size_3607_ = lean_ctor_get(v_l_3593_, 0);
v_k_3608_ = lean_ctor_get(v_l_3593_, 1);
v_v_3609_ = lean_ctor_get(v_l_3593_, 2);
v_l_3610_ = lean_ctor_get(v_l_3593_, 3);
v_r_3611_ = lean_ctor_get(v_l_3593_, 4);
v_size_3612_ = lean_ctor_get(v_r_3594_, 0);
v___x_3613_ = lean_unsigned_to_nat(2u);
v___x_3614_ = lean_nat_mul(v___x_3613_, v_size_3612_);
v___x_3615_ = lean_nat_dec_lt(v_size_3607_, v___x_3614_);
lean_dec(v___x_3614_);
if (v___x_3615_ == 0)
{
lean_object* v___x_3617_; uint8_t v_isShared_3618_; uint8_t v_isSharedCheck_3644_; 
lean_inc(v_r_3611_);
lean_inc(v_l_3610_);
lean_inc(v_v_3609_);
lean_inc(v_k_3608_);
v_isSharedCheck_3644_ = !lean_is_exclusive(v_l_3593_);
if (v_isSharedCheck_3644_ == 0)
{
lean_object* v_unused_3645_; lean_object* v_unused_3646_; lean_object* v_unused_3647_; lean_object* v_unused_3648_; lean_object* v_unused_3649_; 
v_unused_3645_ = lean_ctor_get(v_l_3593_, 4);
lean_dec(v_unused_3645_);
v_unused_3646_ = lean_ctor_get(v_l_3593_, 3);
lean_dec(v_unused_3646_);
v_unused_3647_ = lean_ctor_get(v_l_3593_, 2);
lean_dec(v_unused_3647_);
v_unused_3648_ = lean_ctor_get(v_l_3593_, 1);
lean_dec(v_unused_3648_);
v_unused_3649_ = lean_ctor_get(v_l_3593_, 0);
lean_dec(v_unused_3649_);
v___x_3617_ = v_l_3593_;
v_isShared_3618_ = v_isSharedCheck_3644_;
goto v_resetjp_3616_;
}
else
{
lean_dec(v_l_3593_);
v___x_3617_ = lean_box(0);
v_isShared_3618_ = v_isSharedCheck_3644_;
goto v_resetjp_3616_;
}
v_resetjp_3616_:
{
lean_object* v___x_3619_; lean_object* v___x_3620_; lean_object* v___x_3621_; lean_object* v___y_3623_; lean_object* v___y_3624_; lean_object* v___y_3625_; lean_object* v___y_3634_; 
v___x_3619_ = lean_unsigned_to_nat(1u);
v___x_3620_ = lean_nat_add(v___x_3619_, v_size_3589_);
v___x_3621_ = lean_nat_add(v___x_3620_, v_size_3590_);
lean_dec(v_size_3590_);
if (lean_obj_tag(v_l_3610_) == 0)
{
lean_object* v_size_3642_; 
v_size_3642_ = lean_ctor_get(v_l_3610_, 0);
lean_inc(v_size_3642_);
v___y_3634_ = v_size_3642_;
goto v___jp_3633_;
}
else
{
lean_object* v___x_3643_; 
v___x_3643_ = lean_unsigned_to_nat(0u);
v___y_3634_ = v___x_3643_;
goto v___jp_3633_;
}
v___jp_3622_:
{
lean_object* v___x_3626_; lean_object* v___x_3628_; 
v___x_3626_ = lean_nat_add(v___y_3623_, v___y_3625_);
lean_dec(v___y_3625_);
lean_dec(v___y_3623_);
if (v_isShared_3618_ == 0)
{
lean_ctor_set(v___x_3617_, 4, v_r_3594_);
lean_ctor_set(v___x_3617_, 3, v_r_3611_);
lean_ctor_set(v___x_3617_, 2, v_v_3592_);
lean_ctor_set(v___x_3617_, 1, v_k_3591_);
lean_ctor_set(v___x_3617_, 0, v___x_3626_);
v___x_3628_ = v___x_3617_;
goto v_reusejp_3627_;
}
else
{
lean_object* v_reuseFailAlloc_3632_; 
v_reuseFailAlloc_3632_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3632_, 0, v___x_3626_);
lean_ctor_set(v_reuseFailAlloc_3632_, 1, v_k_3591_);
lean_ctor_set(v_reuseFailAlloc_3632_, 2, v_v_3592_);
lean_ctor_set(v_reuseFailAlloc_3632_, 3, v_r_3611_);
lean_ctor_set(v_reuseFailAlloc_3632_, 4, v_r_3594_);
v___x_3628_ = v_reuseFailAlloc_3632_;
goto v_reusejp_3627_;
}
v_reusejp_3627_:
{
lean_object* v___x_3630_; 
if (v_isShared_3606_ == 0)
{
lean_ctor_set(v___x_3605_, 4, v___x_3628_);
lean_ctor_set(v___x_3605_, 3, v___y_3624_);
lean_ctor_set(v___x_3605_, 2, v_v_3609_);
lean_ctor_set(v___x_3605_, 1, v_k_3608_);
lean_ctor_set(v___x_3605_, 0, v___x_3621_);
v___x_3630_ = v___x_3605_;
goto v_reusejp_3629_;
}
else
{
lean_object* v_reuseFailAlloc_3631_; 
v_reuseFailAlloc_3631_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3631_, 0, v___x_3621_);
lean_ctor_set(v_reuseFailAlloc_3631_, 1, v_k_3608_);
lean_ctor_set(v_reuseFailAlloc_3631_, 2, v_v_3609_);
lean_ctor_set(v_reuseFailAlloc_3631_, 3, v___y_3624_);
lean_ctor_set(v_reuseFailAlloc_3631_, 4, v___x_3628_);
v___x_3630_ = v_reuseFailAlloc_3631_;
goto v_reusejp_3629_;
}
v_reusejp_3629_:
{
return v___x_3630_;
}
}
}
v___jp_3633_:
{
lean_object* v___x_3635_; lean_object* v___x_3637_; 
v___x_3635_ = lean_nat_add(v___x_3620_, v___y_3634_);
lean_dec(v___y_3634_);
lean_dec(v___x_3620_);
if (v_isShared_3408_ == 0)
{
lean_ctor_set(v___x_3407_, 4, v_l_3610_);
lean_ctor_set(v___x_3407_, 0, v___x_3635_);
v___x_3637_ = v___x_3407_;
goto v_reusejp_3636_;
}
else
{
lean_object* v_reuseFailAlloc_3641_; 
v_reuseFailAlloc_3641_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3641_, 0, v___x_3635_);
lean_ctor_set(v_reuseFailAlloc_3641_, 1, v_k_3402_);
lean_ctor_set(v_reuseFailAlloc_3641_, 2, v_v_3403_);
lean_ctor_set(v_reuseFailAlloc_3641_, 3, v_l_3404_);
lean_ctor_set(v_reuseFailAlloc_3641_, 4, v_l_3610_);
v___x_3637_ = v_reuseFailAlloc_3641_;
goto v_reusejp_3636_;
}
v_reusejp_3636_:
{
lean_object* v___x_3638_; 
v___x_3638_ = lean_nat_add(v___x_3619_, v_size_3612_);
if (lean_obj_tag(v_r_3611_) == 0)
{
lean_object* v_size_3639_; 
v_size_3639_ = lean_ctor_get(v_r_3611_, 0);
lean_inc(v_size_3639_);
v___y_3623_ = v___x_3638_;
v___y_3624_ = v___x_3637_;
v___y_3625_ = v_size_3639_;
goto v___jp_3622_;
}
else
{
lean_object* v___x_3640_; 
v___x_3640_ = lean_unsigned_to_nat(0u);
v___y_3623_ = v___x_3638_;
v___y_3624_ = v___x_3637_;
v___y_3625_ = v___x_3640_;
goto v___jp_3622_;
}
}
}
}
}
else
{
lean_object* v___x_3650_; lean_object* v___x_3651_; lean_object* v___x_3652_; lean_object* v___x_3653_; lean_object* v___x_3655_; 
lean_del_object(v___x_3407_);
v___x_3650_ = lean_unsigned_to_nat(1u);
v___x_3651_ = lean_nat_add(v___x_3650_, v_size_3589_);
v___x_3652_ = lean_nat_add(v___x_3651_, v_size_3590_);
lean_dec(v_size_3590_);
v___x_3653_ = lean_nat_add(v___x_3651_, v_size_3607_);
lean_dec(v___x_3651_);
lean_inc_ref(v_l_3404_);
if (v_isShared_3606_ == 0)
{
lean_ctor_set(v___x_3605_, 4, v_l_3593_);
lean_ctor_set(v___x_3605_, 3, v_l_3404_);
lean_ctor_set(v___x_3605_, 2, v_v_3403_);
lean_ctor_set(v___x_3605_, 1, v_k_3402_);
lean_ctor_set(v___x_3605_, 0, v___x_3653_);
v___x_3655_ = v___x_3605_;
goto v_reusejp_3654_;
}
else
{
lean_object* v_reuseFailAlloc_3668_; 
v_reuseFailAlloc_3668_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3668_, 0, v___x_3653_);
lean_ctor_set(v_reuseFailAlloc_3668_, 1, v_k_3402_);
lean_ctor_set(v_reuseFailAlloc_3668_, 2, v_v_3403_);
lean_ctor_set(v_reuseFailAlloc_3668_, 3, v_l_3404_);
lean_ctor_set(v_reuseFailAlloc_3668_, 4, v_l_3593_);
v___x_3655_ = v_reuseFailAlloc_3668_;
goto v_reusejp_3654_;
}
v_reusejp_3654_:
{
lean_object* v___x_3657_; uint8_t v_isShared_3658_; uint8_t v_isSharedCheck_3662_; 
v_isSharedCheck_3662_ = !lean_is_exclusive(v_l_3404_);
if (v_isSharedCheck_3662_ == 0)
{
lean_object* v_unused_3663_; lean_object* v_unused_3664_; lean_object* v_unused_3665_; lean_object* v_unused_3666_; lean_object* v_unused_3667_; 
v_unused_3663_ = lean_ctor_get(v_l_3404_, 4);
lean_dec(v_unused_3663_);
v_unused_3664_ = lean_ctor_get(v_l_3404_, 3);
lean_dec(v_unused_3664_);
v_unused_3665_ = lean_ctor_get(v_l_3404_, 2);
lean_dec(v_unused_3665_);
v_unused_3666_ = lean_ctor_get(v_l_3404_, 1);
lean_dec(v_unused_3666_);
v_unused_3667_ = lean_ctor_get(v_l_3404_, 0);
lean_dec(v_unused_3667_);
v___x_3657_ = v_l_3404_;
v_isShared_3658_ = v_isSharedCheck_3662_;
goto v_resetjp_3656_;
}
else
{
lean_dec(v_l_3404_);
v___x_3657_ = lean_box(0);
v_isShared_3658_ = v_isSharedCheck_3662_;
goto v_resetjp_3656_;
}
v_resetjp_3656_:
{
lean_object* v___x_3660_; 
if (v_isShared_3658_ == 0)
{
lean_ctor_set(v___x_3657_, 4, v_r_3594_);
lean_ctor_set(v___x_3657_, 3, v___x_3655_);
lean_ctor_set(v___x_3657_, 2, v_v_3592_);
lean_ctor_set(v___x_3657_, 1, v_k_3591_);
lean_ctor_set(v___x_3657_, 0, v___x_3652_);
v___x_3660_ = v___x_3657_;
goto v_reusejp_3659_;
}
else
{
lean_object* v_reuseFailAlloc_3661_; 
v_reuseFailAlloc_3661_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3661_, 0, v___x_3652_);
lean_ctor_set(v_reuseFailAlloc_3661_, 1, v_k_3591_);
lean_ctor_set(v_reuseFailAlloc_3661_, 2, v_v_3592_);
lean_ctor_set(v_reuseFailAlloc_3661_, 3, v___x_3655_);
lean_ctor_set(v_reuseFailAlloc_3661_, 4, v_r_3594_);
v___x_3660_ = v_reuseFailAlloc_3661_;
goto v_reusejp_3659_;
}
v_reusejp_3659_:
{
return v___x_3660_;
}
}
}
}
}
else
{
lean_object* v___x_3669_; lean_object* v___x_3670_; 
lean_dec_ref_known(v_l_3593_, 5);
lean_del_object(v___x_3605_);
lean_dec(v_v_3592_);
lean_dec(v_k_3591_);
lean_dec(v_size_3590_);
lean_dec_ref_known(v_l_3404_, 5);
lean_del_object(v___x_3407_);
lean_dec(v_v_3403_);
lean_dec(v_k_3402_);
v___x_3669_ = lean_obj_once(&l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5_spec__6___redArg___closed__7, &l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5_spec__6___redArg___closed__7_once, _init_l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5_spec__6___redArg___closed__7);
v___x_3670_ = l_panic___at___00Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5_spec__6_spec__8___redArg(v___x_3669_);
return v___x_3670_;
}
}
else
{
lean_object* v___x_3671_; lean_object* v___x_3672_; 
lean_del_object(v___x_3605_);
lean_dec(v_r_3594_);
lean_dec(v_v_3592_);
lean_dec(v_k_3591_);
lean_dec(v_size_3590_);
lean_dec_ref_known(v_l_3404_, 5);
lean_del_object(v___x_3407_);
lean_dec(v_v_3403_);
lean_dec(v_k_3402_);
v___x_3671_ = lean_obj_once(&l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5_spec__6___redArg___closed__8, &l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5_spec__6___redArg___closed__8_once, _init_l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5_spec__6___redArg___closed__8);
v___x_3672_ = l_panic___at___00Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5_spec__6_spec__8___redArg(v___x_3671_);
return v___x_3672_;
}
}
}
}
else
{
lean_object* v_size_3679_; lean_object* v___x_3680_; lean_object* v___x_3681_; lean_object* v___x_3683_; 
v_size_3679_ = lean_ctor_get(v_l_3404_, 0);
v___x_3680_ = lean_unsigned_to_nat(1u);
v___x_3681_ = lean_nat_add(v___x_3680_, v_size_3679_);
if (v_isShared_3408_ == 0)
{
lean_ctor_set(v___x_3407_, 4, v___x_3588_);
lean_ctor_set(v___x_3407_, 0, v___x_3681_);
v___x_3683_ = v___x_3407_;
goto v_reusejp_3682_;
}
else
{
lean_object* v_reuseFailAlloc_3684_; 
v_reuseFailAlloc_3684_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3684_, 0, v___x_3681_);
lean_ctor_set(v_reuseFailAlloc_3684_, 1, v_k_3402_);
lean_ctor_set(v_reuseFailAlloc_3684_, 2, v_v_3403_);
lean_ctor_set(v_reuseFailAlloc_3684_, 3, v_l_3404_);
lean_ctor_set(v_reuseFailAlloc_3684_, 4, v___x_3588_);
v___x_3683_ = v_reuseFailAlloc_3684_;
goto v_reusejp_3682_;
}
v_reusejp_3682_:
{
return v___x_3683_;
}
}
}
else
{
if (lean_obj_tag(v___x_3588_) == 0)
{
lean_object* v_l_3685_; 
v_l_3685_ = lean_ctor_get(v___x_3588_, 3);
lean_inc(v_l_3685_);
if (lean_obj_tag(v_l_3685_) == 0)
{
lean_object* v_r_3686_; 
v_r_3686_ = lean_ctor_get(v___x_3588_, 4);
lean_inc(v_r_3686_);
if (lean_obj_tag(v_r_3686_) == 0)
{
lean_object* v_size_3687_; lean_object* v_k_3688_; lean_object* v_v_3689_; lean_object* v___x_3691_; uint8_t v_isShared_3692_; uint8_t v_isSharedCheck_3703_; 
v_size_3687_ = lean_ctor_get(v___x_3588_, 0);
v_k_3688_ = lean_ctor_get(v___x_3588_, 1);
v_v_3689_ = lean_ctor_get(v___x_3588_, 2);
v_isSharedCheck_3703_ = !lean_is_exclusive(v___x_3588_);
if (v_isSharedCheck_3703_ == 0)
{
lean_object* v_unused_3704_; lean_object* v_unused_3705_; 
v_unused_3704_ = lean_ctor_get(v___x_3588_, 4);
lean_dec(v_unused_3704_);
v_unused_3705_ = lean_ctor_get(v___x_3588_, 3);
lean_dec(v_unused_3705_);
v___x_3691_ = v___x_3588_;
v_isShared_3692_ = v_isSharedCheck_3703_;
goto v_resetjp_3690_;
}
else
{
lean_inc(v_v_3689_);
lean_inc(v_k_3688_);
lean_inc(v_size_3687_);
lean_dec(v___x_3588_);
v___x_3691_ = lean_box(0);
v_isShared_3692_ = v_isSharedCheck_3703_;
goto v_resetjp_3690_;
}
v_resetjp_3690_:
{
lean_object* v_size_3693_; lean_object* v___x_3694_; lean_object* v___x_3695_; lean_object* v___x_3696_; lean_object* v___x_3698_; 
v_size_3693_ = lean_ctor_get(v_l_3685_, 0);
v___x_3694_ = lean_unsigned_to_nat(1u);
v___x_3695_ = lean_nat_add(v___x_3694_, v_size_3687_);
lean_dec(v_size_3687_);
v___x_3696_ = lean_nat_add(v___x_3694_, v_size_3693_);
if (v_isShared_3692_ == 0)
{
lean_ctor_set(v___x_3691_, 4, v_l_3685_);
lean_ctor_set(v___x_3691_, 3, v_l_3404_);
lean_ctor_set(v___x_3691_, 2, v_v_3403_);
lean_ctor_set(v___x_3691_, 1, v_k_3402_);
lean_ctor_set(v___x_3691_, 0, v___x_3696_);
v___x_3698_ = v___x_3691_;
goto v_reusejp_3697_;
}
else
{
lean_object* v_reuseFailAlloc_3702_; 
v_reuseFailAlloc_3702_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3702_, 0, v___x_3696_);
lean_ctor_set(v_reuseFailAlloc_3702_, 1, v_k_3402_);
lean_ctor_set(v_reuseFailAlloc_3702_, 2, v_v_3403_);
lean_ctor_set(v_reuseFailAlloc_3702_, 3, v_l_3404_);
lean_ctor_set(v_reuseFailAlloc_3702_, 4, v_l_3685_);
v___x_3698_ = v_reuseFailAlloc_3702_;
goto v_reusejp_3697_;
}
v_reusejp_3697_:
{
lean_object* v___x_3700_; 
if (v_isShared_3408_ == 0)
{
lean_ctor_set(v___x_3407_, 4, v_r_3686_);
lean_ctor_set(v___x_3407_, 3, v___x_3698_);
lean_ctor_set(v___x_3407_, 2, v_v_3689_);
lean_ctor_set(v___x_3407_, 1, v_k_3688_);
lean_ctor_set(v___x_3407_, 0, v___x_3695_);
v___x_3700_ = v___x_3407_;
goto v_reusejp_3699_;
}
else
{
lean_object* v_reuseFailAlloc_3701_; 
v_reuseFailAlloc_3701_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3701_, 0, v___x_3695_);
lean_ctor_set(v_reuseFailAlloc_3701_, 1, v_k_3688_);
lean_ctor_set(v_reuseFailAlloc_3701_, 2, v_v_3689_);
lean_ctor_set(v_reuseFailAlloc_3701_, 3, v___x_3698_);
lean_ctor_set(v_reuseFailAlloc_3701_, 4, v_r_3686_);
v___x_3700_ = v_reuseFailAlloc_3701_;
goto v_reusejp_3699_;
}
v_reusejp_3699_:
{
return v___x_3700_;
}
}
}
}
else
{
lean_object* v_k_3706_; lean_object* v_v_3707_; lean_object* v___x_3709_; uint8_t v_isShared_3710_; uint8_t v_isSharedCheck_3731_; 
v_k_3706_ = lean_ctor_get(v___x_3588_, 1);
v_v_3707_ = lean_ctor_get(v___x_3588_, 2);
v_isSharedCheck_3731_ = !lean_is_exclusive(v___x_3588_);
if (v_isSharedCheck_3731_ == 0)
{
lean_object* v_unused_3732_; lean_object* v_unused_3733_; lean_object* v_unused_3734_; 
v_unused_3732_ = lean_ctor_get(v___x_3588_, 4);
lean_dec(v_unused_3732_);
v_unused_3733_ = lean_ctor_get(v___x_3588_, 3);
lean_dec(v_unused_3733_);
v_unused_3734_ = lean_ctor_get(v___x_3588_, 0);
lean_dec(v_unused_3734_);
v___x_3709_ = v___x_3588_;
v_isShared_3710_ = v_isSharedCheck_3731_;
goto v_resetjp_3708_;
}
else
{
lean_inc(v_v_3707_);
lean_inc(v_k_3706_);
lean_dec(v___x_3588_);
v___x_3709_ = lean_box(0);
v_isShared_3710_ = v_isSharedCheck_3731_;
goto v_resetjp_3708_;
}
v_resetjp_3708_:
{
lean_object* v_k_3711_; lean_object* v_v_3712_; lean_object* v___x_3714_; uint8_t v_isShared_3715_; uint8_t v_isSharedCheck_3727_; 
v_k_3711_ = lean_ctor_get(v_l_3685_, 1);
v_v_3712_ = lean_ctor_get(v_l_3685_, 2);
v_isSharedCheck_3727_ = !lean_is_exclusive(v_l_3685_);
if (v_isSharedCheck_3727_ == 0)
{
lean_object* v_unused_3728_; lean_object* v_unused_3729_; lean_object* v_unused_3730_; 
v_unused_3728_ = lean_ctor_get(v_l_3685_, 4);
lean_dec(v_unused_3728_);
v_unused_3729_ = lean_ctor_get(v_l_3685_, 3);
lean_dec(v_unused_3729_);
v_unused_3730_ = lean_ctor_get(v_l_3685_, 0);
lean_dec(v_unused_3730_);
v___x_3714_ = v_l_3685_;
v_isShared_3715_ = v_isSharedCheck_3727_;
goto v_resetjp_3713_;
}
else
{
lean_inc(v_v_3712_);
lean_inc(v_k_3711_);
lean_dec(v_l_3685_);
v___x_3714_ = lean_box(0);
v_isShared_3715_ = v_isSharedCheck_3727_;
goto v_resetjp_3713_;
}
v_resetjp_3713_:
{
lean_object* v___x_3716_; lean_object* v___x_3717_; lean_object* v___x_3719_; 
v___x_3716_ = lean_unsigned_to_nat(3u);
v___x_3717_ = lean_unsigned_to_nat(1u);
if (v_isShared_3715_ == 0)
{
lean_ctor_set(v___x_3714_, 4, v_r_3686_);
lean_ctor_set(v___x_3714_, 3, v_r_3686_);
lean_ctor_set(v___x_3714_, 2, v_v_3403_);
lean_ctor_set(v___x_3714_, 1, v_k_3402_);
lean_ctor_set(v___x_3714_, 0, v___x_3717_);
v___x_3719_ = v___x_3714_;
goto v_reusejp_3718_;
}
else
{
lean_object* v_reuseFailAlloc_3726_; 
v_reuseFailAlloc_3726_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3726_, 0, v___x_3717_);
lean_ctor_set(v_reuseFailAlloc_3726_, 1, v_k_3402_);
lean_ctor_set(v_reuseFailAlloc_3726_, 2, v_v_3403_);
lean_ctor_set(v_reuseFailAlloc_3726_, 3, v_r_3686_);
lean_ctor_set(v_reuseFailAlloc_3726_, 4, v_r_3686_);
v___x_3719_ = v_reuseFailAlloc_3726_;
goto v_reusejp_3718_;
}
v_reusejp_3718_:
{
lean_object* v___x_3721_; 
if (v_isShared_3710_ == 0)
{
lean_ctor_set(v___x_3709_, 3, v_r_3686_);
lean_ctor_set(v___x_3709_, 0, v___x_3717_);
v___x_3721_ = v___x_3709_;
goto v_reusejp_3720_;
}
else
{
lean_object* v_reuseFailAlloc_3725_; 
v_reuseFailAlloc_3725_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3725_, 0, v___x_3717_);
lean_ctor_set(v_reuseFailAlloc_3725_, 1, v_k_3706_);
lean_ctor_set(v_reuseFailAlloc_3725_, 2, v_v_3707_);
lean_ctor_set(v_reuseFailAlloc_3725_, 3, v_r_3686_);
lean_ctor_set(v_reuseFailAlloc_3725_, 4, v_r_3686_);
v___x_3721_ = v_reuseFailAlloc_3725_;
goto v_reusejp_3720_;
}
v_reusejp_3720_:
{
lean_object* v___x_3723_; 
if (v_isShared_3408_ == 0)
{
lean_ctor_set(v___x_3407_, 4, v___x_3721_);
lean_ctor_set(v___x_3407_, 3, v___x_3719_);
lean_ctor_set(v___x_3407_, 2, v_v_3712_);
lean_ctor_set(v___x_3407_, 1, v_k_3711_);
lean_ctor_set(v___x_3407_, 0, v___x_3716_);
v___x_3723_ = v___x_3407_;
goto v_reusejp_3722_;
}
else
{
lean_object* v_reuseFailAlloc_3724_; 
v_reuseFailAlloc_3724_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3724_, 0, v___x_3716_);
lean_ctor_set(v_reuseFailAlloc_3724_, 1, v_k_3711_);
lean_ctor_set(v_reuseFailAlloc_3724_, 2, v_v_3712_);
lean_ctor_set(v_reuseFailAlloc_3724_, 3, v___x_3719_);
lean_ctor_set(v_reuseFailAlloc_3724_, 4, v___x_3721_);
v___x_3723_ = v_reuseFailAlloc_3724_;
goto v_reusejp_3722_;
}
v_reusejp_3722_:
{
return v___x_3723_;
}
}
}
}
}
}
}
else
{
lean_object* v_r_3735_; 
v_r_3735_ = lean_ctor_get(v___x_3588_, 4);
lean_inc(v_r_3735_);
if (lean_obj_tag(v_r_3735_) == 0)
{
lean_object* v_k_3736_; lean_object* v_v_3737_; lean_object* v___x_3739_; uint8_t v_isShared_3740_; uint8_t v_isSharedCheck_3749_; 
v_k_3736_ = lean_ctor_get(v___x_3588_, 1);
v_v_3737_ = lean_ctor_get(v___x_3588_, 2);
v_isSharedCheck_3749_ = !lean_is_exclusive(v___x_3588_);
if (v_isSharedCheck_3749_ == 0)
{
lean_object* v_unused_3750_; lean_object* v_unused_3751_; lean_object* v_unused_3752_; 
v_unused_3750_ = lean_ctor_get(v___x_3588_, 4);
lean_dec(v_unused_3750_);
v_unused_3751_ = lean_ctor_get(v___x_3588_, 3);
lean_dec(v_unused_3751_);
v_unused_3752_ = lean_ctor_get(v___x_3588_, 0);
lean_dec(v_unused_3752_);
v___x_3739_ = v___x_3588_;
v_isShared_3740_ = v_isSharedCheck_3749_;
goto v_resetjp_3738_;
}
else
{
lean_inc(v_v_3737_);
lean_inc(v_k_3736_);
lean_dec(v___x_3588_);
v___x_3739_ = lean_box(0);
v_isShared_3740_ = v_isSharedCheck_3749_;
goto v_resetjp_3738_;
}
v_resetjp_3738_:
{
lean_object* v___x_3741_; lean_object* v___x_3742_; lean_object* v___x_3744_; 
v___x_3741_ = lean_unsigned_to_nat(3u);
v___x_3742_ = lean_unsigned_to_nat(1u);
if (v_isShared_3740_ == 0)
{
lean_ctor_set(v___x_3739_, 4, v_l_3685_);
lean_ctor_set(v___x_3739_, 2, v_v_3403_);
lean_ctor_set(v___x_3739_, 1, v_k_3402_);
lean_ctor_set(v___x_3739_, 0, v___x_3742_);
v___x_3744_ = v___x_3739_;
goto v_reusejp_3743_;
}
else
{
lean_object* v_reuseFailAlloc_3748_; 
v_reuseFailAlloc_3748_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3748_, 0, v___x_3742_);
lean_ctor_set(v_reuseFailAlloc_3748_, 1, v_k_3402_);
lean_ctor_set(v_reuseFailAlloc_3748_, 2, v_v_3403_);
lean_ctor_set(v_reuseFailAlloc_3748_, 3, v_l_3685_);
lean_ctor_set(v_reuseFailAlloc_3748_, 4, v_l_3685_);
v___x_3744_ = v_reuseFailAlloc_3748_;
goto v_reusejp_3743_;
}
v_reusejp_3743_:
{
lean_object* v___x_3746_; 
if (v_isShared_3408_ == 0)
{
lean_ctor_set(v___x_3407_, 4, v_r_3735_);
lean_ctor_set(v___x_3407_, 3, v___x_3744_);
lean_ctor_set(v___x_3407_, 2, v_v_3737_);
lean_ctor_set(v___x_3407_, 1, v_k_3736_);
lean_ctor_set(v___x_3407_, 0, v___x_3741_);
v___x_3746_ = v___x_3407_;
goto v_reusejp_3745_;
}
else
{
lean_object* v_reuseFailAlloc_3747_; 
v_reuseFailAlloc_3747_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3747_, 0, v___x_3741_);
lean_ctor_set(v_reuseFailAlloc_3747_, 1, v_k_3736_);
lean_ctor_set(v_reuseFailAlloc_3747_, 2, v_v_3737_);
lean_ctor_set(v_reuseFailAlloc_3747_, 3, v___x_3744_);
lean_ctor_set(v_reuseFailAlloc_3747_, 4, v_r_3735_);
v___x_3746_ = v_reuseFailAlloc_3747_;
goto v_reusejp_3745_;
}
v_reusejp_3745_:
{
return v___x_3746_;
}
}
}
}
else
{
lean_object* v___x_3753_; lean_object* v___x_3755_; 
v___x_3753_ = lean_unsigned_to_nat(2u);
if (v_isShared_3408_ == 0)
{
lean_ctor_set(v___x_3407_, 4, v___x_3588_);
lean_ctor_set(v___x_3407_, 3, v_r_3735_);
lean_ctor_set(v___x_3407_, 0, v___x_3753_);
v___x_3755_ = v___x_3407_;
goto v_reusejp_3754_;
}
else
{
lean_object* v_reuseFailAlloc_3756_; 
v_reuseFailAlloc_3756_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3756_, 0, v___x_3753_);
lean_ctor_set(v_reuseFailAlloc_3756_, 1, v_k_3402_);
lean_ctor_set(v_reuseFailAlloc_3756_, 2, v_v_3403_);
lean_ctor_set(v_reuseFailAlloc_3756_, 3, v_r_3735_);
lean_ctor_set(v_reuseFailAlloc_3756_, 4, v___x_3588_);
v___x_3755_ = v_reuseFailAlloc_3756_;
goto v_reusejp_3754_;
}
v_reusejp_3754_:
{
return v___x_3755_;
}
}
}
}
else
{
lean_object* v___x_3757_; lean_object* v___x_3759_; 
v___x_3757_ = lean_unsigned_to_nat(1u);
if (v_isShared_3408_ == 0)
{
lean_ctor_set(v___x_3407_, 4, v___x_3588_);
lean_ctor_set(v___x_3407_, 3, v___x_3588_);
lean_ctor_set(v___x_3407_, 0, v___x_3757_);
v___x_3759_ = v___x_3407_;
goto v_reusejp_3758_;
}
else
{
lean_object* v_reuseFailAlloc_3760_; 
v_reuseFailAlloc_3760_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3760_, 0, v___x_3757_);
lean_ctor_set(v_reuseFailAlloc_3760_, 1, v_k_3402_);
lean_ctor_set(v_reuseFailAlloc_3760_, 2, v_v_3403_);
lean_ctor_set(v_reuseFailAlloc_3760_, 3, v___x_3588_);
lean_ctor_set(v_reuseFailAlloc_3760_, 4, v___x_3588_);
v___x_3759_ = v_reuseFailAlloc_3760_;
goto v_reusejp_3758_;
}
v_reusejp_3758_:
{
return v___x_3759_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_3762_; lean_object* v___x_3763_; 
v___x_3762_ = lean_unsigned_to_nat(1u);
v___x_3763_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_3763_, 0, v___x_3762_);
lean_ctor_set(v___x_3763_, 1, v_k_3398_);
lean_ctor_set(v___x_3763_, 2, v_v_3399_);
lean_ctor_set(v___x_3763_, 3, v_t_3400_);
lean_ctor_set(v___x_3763_, 4, v_t_3400_);
return v___x_3763_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5_spec__7_spec__10(lean_object* v_init_3764_, lean_object* v_x_3765_){
_start:
{
if (lean_obj_tag(v_x_3765_) == 0)
{
lean_object* v_k_3766_; lean_object* v_v_3767_; lean_object* v_l_3768_; lean_object* v_r_3769_; lean_object* v___x_3770_; uint8_t v___x_3771_; lean_object* v___x_3772_; lean_object* v___x_3773_; lean_object* v___x_3774_; 
v_k_3766_ = lean_ctor_get(v_x_3765_, 1);
lean_inc(v_k_3766_);
v_v_3767_ = lean_ctor_get(v_x_3765_, 2);
lean_inc(v_v_3767_);
v_l_3768_ = lean_ctor_get(v_x_3765_, 3);
lean_inc(v_l_3768_);
v_r_3769_ = lean_ctor_get(v_x_3765_, 4);
lean_inc(v_r_3769_);
lean_dec_ref_known(v_x_3765_, 5);
v___x_3770_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5_spec__7_spec__10(v_init_3764_, v_l_3768_);
v___x_3771_ = 1;
v___x_3772_ = l_Lean_Name_toString(v_k_3766_, v___x_3771_);
v___x_3773_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3773_, 0, v_v_3767_);
v___x_3774_ = l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5_spec__6___redArg(v___x_3772_, v___x_3773_, v___x_3770_);
v_init_3764_ = v___x_3774_;
v_x_3765_ = v_r_3769_;
goto _start;
}
else
{
return v_init_3764_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5(lean_object* v_m_3776_){
_start:
{
lean_object* v___x_3777_; lean_object* v___x_3778_; lean_object* v___x_3779_; 
v___x_3777_ = lean_box(1);
v___x_3778_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5_spec__7_spec__10(v___x_3777_, v_m_3776_);
v___x_3779_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_3779_, 0, v___x_3778_);
return v___x_3779_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore___lam__0(lean_object* v___x_3782_, uint8_t v_updateToolchain_3783_, lean_object* v_ws_3784_, lean_object* v_dep_3785_, lean_object* v___y_3786_, lean_object* v___y_3787_){
_start:
{
lean_object* v_baseName_3789_; lean_object* v_name_3790_; lean_object* v_opts_3791_; uint8_t v___x_3792_; lean_object* v___x_3793_; lean_object* v___x_3794_; lean_object* v___x_3795_; lean_object* v___x_3796_; lean_object* v___x_3797_; lean_object* v___x_3798_; lean_object* v___x_3799_; lean_object* v___x_3800_; lean_object* v___x_3801_; lean_object* v___x_3802_; lean_object* v___x_3803_; uint8_t v___x_3804_; lean_object* v___x_3805_; lean_object* v___x_3806_; lean_object* v___x_3807_; 
v_baseName_3789_ = lean_ctor_get(v___x_3782_, 1);
v_name_3790_ = lean_ctor_get(v_dep_3785_, 0);
v_opts_3791_ = lean_ctor_get(v_dep_3785_, 4);
v___x_3792_ = 0;
lean_inc(v_baseName_3789_);
v___x_3793_ = l_Lean_Name_toString(v_baseName_3789_, v___x_3792_);
v___x_3794_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore___lam__0___closed__0));
v___x_3795_ = lean_string_append(v___x_3793_, v___x_3794_);
lean_inc(v_name_3790_);
v___x_3796_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_name_3790_, v_updateToolchain_3783_);
v___x_3797_ = lean_string_append(v___x_3795_, v___x_3796_);
lean_dec_ref(v___x_3796_);
v___x_3798_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore___lam__0___closed__1));
v___x_3799_ = lean_string_append(v___x_3797_, v___x_3798_);
lean_inc(v_opts_3791_);
v___x_3800_ = l_Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5(v_opts_3791_);
v___x_3801_ = lean_unsigned_to_nat(80u);
v___x_3802_ = l_Lean_Json_pretty(v___x_3800_, v___x_3801_);
v___x_3803_ = lean_string_append(v___x_3799_, v___x_3802_);
lean_dec_ref(v___x_3802_);
v___x_3804_ = 0;
v___x_3805_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_3805_, 0, v___x_3803_);
lean_ctor_set_uint8(v___x_3805_, sizeof(void*)*1, v___x_3804_);
lean_inc_ref(v___y_3787_);
v___x_3806_ = lean_apply_2(v___y_3787_, v___x_3805_, lean_box(0));
v___x_3807_ = l___private_Lake_Load_Resolve_0__Lake_updateAndMaterializeDep(v_ws_3784_, v___x_3782_, v_dep_3785_, v___y_3786_, v___y_3787_);
return v___x_3807_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore___lam__0___boxed(lean_object* v___x_3808_, lean_object* v_updateToolchain_3809_, lean_object* v_ws_3810_, lean_object* v_dep_3811_, lean_object* v___y_3812_, lean_object* v___y_3813_, lean_object* v___y_3814_){
_start:
{
uint8_t v_updateToolchain_boxed_3815_; lean_object* v_res_3816_; 
v_updateToolchain_boxed_3815_ = lean_unbox(v_updateToolchain_3809_);
v_res_3816_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore___lam__0(v___x_3808_, v_updateToolchain_boxed_3815_, v_ws_3810_, v_dep_3811_, v___y_3812_, v___y_3813_);
lean_dec_ref(v___y_3813_);
return v_res_3816_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__8___redArg(lean_object* v_a_3817_, lean_object* v_b_3818_){
_start:
{
lean_object* v_next_3819_; 
v_next_3819_ = lean_ctor_get(v_a_3817_, 0);
lean_inc(v_next_3819_);
if (lean_obj_tag(v_next_3819_) == 0)
{
lean_dec_ref(v_a_3817_);
return v_b_3818_;
}
else
{
lean_object* v_upperBound_3820_; lean_object* v___x_3822_; uint8_t v_isShared_3823_; uint8_t v_isSharedCheck_3840_; 
v_upperBound_3820_ = lean_ctor_get(v_a_3817_, 1);
v_isSharedCheck_3840_ = !lean_is_exclusive(v_a_3817_);
if (v_isSharedCheck_3840_ == 0)
{
lean_object* v_unused_3841_; 
v_unused_3841_ = lean_ctor_get(v_a_3817_, 0);
lean_dec(v_unused_3841_);
v___x_3822_ = v_a_3817_;
v_isShared_3823_ = v_isSharedCheck_3840_;
goto v_resetjp_3821_;
}
else
{
lean_inc(v_upperBound_3820_);
lean_dec(v_a_3817_);
v___x_3822_ = lean_box(0);
v_isShared_3823_ = v_isSharedCheck_3840_;
goto v_resetjp_3821_;
}
v_resetjp_3821_:
{
lean_object* v_val_3824_; lean_object* v___x_3826_; uint8_t v_isShared_3827_; uint8_t v_isSharedCheck_3839_; 
v_val_3824_ = lean_ctor_get(v_next_3819_, 0);
v_isSharedCheck_3839_ = !lean_is_exclusive(v_next_3819_);
if (v_isSharedCheck_3839_ == 0)
{
v___x_3826_ = v_next_3819_;
v_isShared_3827_ = v_isSharedCheck_3839_;
goto v_resetjp_3825_;
}
else
{
lean_inc(v_val_3824_);
lean_dec(v_next_3819_);
v___x_3826_ = lean_box(0);
v_isShared_3827_ = v_isSharedCheck_3839_;
goto v_resetjp_3825_;
}
v_resetjp_3825_:
{
uint8_t v___x_3828_; 
v___x_3828_ = lean_nat_dec_lt(v_val_3824_, v_upperBound_3820_);
if (v___x_3828_ == 0)
{
lean_del_object(v___x_3826_);
lean_dec(v_val_3824_);
lean_del_object(v___x_3822_);
lean_dec(v_upperBound_3820_);
return v_b_3818_;
}
else
{
lean_object* v___x_3829_; lean_object* v___x_3830_; lean_object* v___x_3832_; 
v___x_3829_ = lean_unsigned_to_nat(1u);
v___x_3830_ = lean_nat_add(v_val_3824_, v___x_3829_);
if (v_isShared_3827_ == 0)
{
lean_ctor_set(v___x_3826_, 0, v___x_3830_);
v___x_3832_ = v___x_3826_;
goto v_reusejp_3831_;
}
else
{
lean_object* v_reuseFailAlloc_3838_; 
v_reuseFailAlloc_3838_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3838_, 0, v___x_3830_);
v___x_3832_ = v_reuseFailAlloc_3838_;
goto v_reusejp_3831_;
}
v_reusejp_3831_:
{
lean_object* v___x_3834_; 
if (v_isShared_3823_ == 0)
{
lean_ctor_set(v___x_3822_, 0, v___x_3832_);
v___x_3834_ = v___x_3822_;
goto v_reusejp_3833_;
}
else
{
lean_object* v_reuseFailAlloc_3837_; 
v_reuseFailAlloc_3837_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3837_, 0, v___x_3832_);
lean_ctor_set(v_reuseFailAlloc_3837_, 1, v_upperBound_3820_);
v___x_3834_ = v_reuseFailAlloc_3837_;
goto v_reusejp_3833_;
}
v_reusejp_3833_:
{
lean_object* v___x_3835_; 
v___x_3835_ = lean_array_push(v_b_3818_, v_val_3824_);
v_a_3817_ = v___x_3834_;
v_b_3818_ = v___x_3835_;
goto _start;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Vector_Basic_0__Vector_mapM_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__6___redArg(lean_object* v_n_3842_, lean_object* v_f_3843_, lean_object* v_xs_3844_, lean_object* v_k_3845_, lean_object* v_acc_3846_, lean_object* v___y_3847_, lean_object* v___y_3848_){
_start:
{
uint8_t v___x_3850_; 
v___x_3850_ = lean_nat_dec_lt(v_k_3845_, v_n_3842_);
if (v___x_3850_ == 0)
{
lean_object* v___x_3851_; lean_object* v___x_3852_; 
lean_dec(v_k_3845_);
lean_dec_ref(v_f_3843_);
v___x_3851_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3851_, 0, v_acc_3846_);
lean_ctor_set(v___x_3851_, 1, v___y_3847_);
v___x_3852_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3852_, 0, v___x_3851_);
return v___x_3852_;
}
else
{
lean_object* v___x_3853_; lean_object* v___x_3854_; 
v___x_3853_ = lean_array_fget_borrowed(v_xs_3844_, v_k_3845_);
lean_inc_ref(v_f_3843_);
lean_inc_ref(v___y_3848_);
lean_inc(v___x_3853_);
v___x_3854_ = lean_apply_4(v_f_3843_, v___x_3853_, v___y_3847_, v___y_3848_, lean_box(0));
if (lean_obj_tag(v___x_3854_) == 0)
{
lean_object* v_a_3855_; lean_object* v_fst_3856_; lean_object* v_snd_3857_; lean_object* v___x_3858_; lean_object* v___x_3859_; lean_object* v___x_3860_; 
v_a_3855_ = lean_ctor_get(v___x_3854_, 0);
lean_inc(v_a_3855_);
lean_dec_ref_known(v___x_3854_, 1);
v_fst_3856_ = lean_ctor_get(v_a_3855_, 0);
lean_inc(v_fst_3856_);
v_snd_3857_ = lean_ctor_get(v_a_3855_, 1);
lean_inc(v_snd_3857_);
lean_dec(v_a_3855_);
v___x_3858_ = lean_unsigned_to_nat(1u);
v___x_3859_ = lean_nat_add(v_k_3845_, v___x_3858_);
lean_dec(v_k_3845_);
v___x_3860_ = lean_array_push(v_acc_3846_, v_fst_3856_);
v_k_3845_ = v___x_3859_;
v_acc_3846_ = v___x_3860_;
v___y_3847_ = v_snd_3857_;
goto _start;
}
else
{
lean_object* v_a_3862_; lean_object* v___x_3864_; uint8_t v_isShared_3865_; uint8_t v_isSharedCheck_3869_; 
lean_dec_ref(v_acc_3846_);
lean_dec(v_k_3845_);
lean_dec_ref(v_f_3843_);
v_a_3862_ = lean_ctor_get(v___x_3854_, 0);
v_isSharedCheck_3869_ = !lean_is_exclusive(v___x_3854_);
if (v_isSharedCheck_3869_ == 0)
{
v___x_3864_ = v___x_3854_;
v_isShared_3865_ = v_isSharedCheck_3869_;
goto v_resetjp_3863_;
}
else
{
lean_inc(v_a_3862_);
lean_dec(v___x_3854_);
v___x_3864_ = lean_box(0);
v_isShared_3865_ = v_isSharedCheck_3869_;
goto v_resetjp_3863_;
}
v_resetjp_3863_:
{
lean_object* v___x_3867_; 
if (v_isShared_3865_ == 0)
{
v___x_3867_ = v___x_3864_;
goto v_reusejp_3866_;
}
else
{
lean_object* v_reuseFailAlloc_3868_; 
v_reuseFailAlloc_3868_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3868_, 0, v_a_3862_);
v___x_3867_ = v_reuseFailAlloc_3868_;
goto v_reusejp_3866_;
}
v_reusejp_3866_:
{
return v___x_3867_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Vector_Basic_0__Vector_mapM_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__6___redArg___boxed(lean_object* v_n_3870_, lean_object* v_f_3871_, lean_object* v_xs_3872_, lean_object* v_k_3873_, lean_object* v_acc_3874_, lean_object* v___y_3875_, lean_object* v___y_3876_, lean_object* v___y_3877_){
_start:
{
lean_object* v_res_3878_; 
v_res_3878_ = l___private_Init_Data_Vector_Basic_0__Vector_mapM_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__6___redArg(v_n_3870_, v_f_3871_, v_xs_3872_, v_k_3873_, v_acc_3874_, v___y_3875_, v___y_3876_);
lean_dec_ref(v___y_3876_);
lean_dec_ref(v_xs_3872_);
lean_dec(v_n_3870_);
return v_res_3878_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__9___redArg(lean_object* v_upperBound_3879_, lean_object* v_fst_3880_, lean_object* v___x_3881_, lean_object* v_leanOpts_3882_, lean_object* v_a_3883_, lean_object* v_b_3884_, lean_object* v___y_3885_, lean_object* v___y_3886_){
_start:
{
lean_object* v_fst_3889_; lean_object* v_snd_3890_; uint8_t v___x_3894_; 
v___x_3894_ = lean_nat_dec_lt(v_a_3883_, v_upperBound_3879_);
if (v___x_3894_ == 0)
{
lean_object* v___x_3895_; lean_object* v___x_3896_; 
lean_dec(v_a_3883_);
lean_dec_ref(v_leanOpts_3882_);
v___x_3895_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3895_, 0, v_b_3884_);
lean_ctor_set(v___x_3895_, 1, v___y_3885_);
v___x_3896_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3896_, 0, v___x_3895_);
return v___x_3896_;
}
else
{
lean_object* v___x_3897_; lean_object* v___x_3898_; 
v___x_3897_ = lean_array_fget_borrowed(v_fst_3880_, v_a_3883_);
lean_inc(v___x_3897_);
v___x_3898_ = l___private_Lake_Load_Resolve_0__Lake_addDependencyEntries(v___x_3897_, v___y_3885_, v___y_3886_);
if (lean_obj_tag(v___x_3898_) == 0)
{
lean_object* v_a_3899_; lean_object* v___x_3901_; uint8_t v_isShared_3902_; uint8_t v_isSharedCheck_3952_; 
v_a_3899_ = lean_ctor_get(v___x_3898_, 0);
v_isSharedCheck_3952_ = !lean_is_exclusive(v___x_3898_);
if (v_isSharedCheck_3952_ == 0)
{
v___x_3901_ = v___x_3898_;
v_isShared_3902_ = v_isSharedCheck_3952_;
goto v_resetjp_3900_;
}
else
{
lean_inc(v_a_3899_);
lean_dec(v___x_3898_);
v___x_3901_ = lean_box(0);
v_isShared_3902_ = v_isSharedCheck_3952_;
goto v_resetjp_3900_;
}
v_resetjp_3900_:
{
lean_object* v_snd_3903_; lean_object* v___x_3904_; lean_object* v_opts_3905_; lean_object* v___x_3906_; lean_object* v___x_3907_; lean_object* v___x_3908_; 
v_snd_3903_ = lean_ctor_get(v_a_3899_, 1);
lean_inc(v_snd_3903_);
lean_dec(v_a_3899_);
v___x_3904_ = lean_array_fget_borrowed(v___x_3881_, v_a_3883_);
v_opts_3905_ = lean_ctor_get(v___x_3904_, 4);
v___x_3906_ = lean_unsigned_to_nat(0u);
v___x_3907_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__4));
lean_inc_ref(v_leanOpts_3882_);
lean_inc(v_opts_3905_);
lean_inc(v___x_3897_);
v___x_3908_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_addDepPackage_x27(v_b_3884_, v___x_3897_, v_opts_3905_, v_leanOpts_3882_, v___x_3894_, v___x_3907_);
if (lean_obj_tag(v___x_3908_) == 0)
{
lean_object* v_a_3909_; lean_object* v_a_3910_; lean_object* v___x_3911_; uint8_t v___x_3912_; 
lean_del_object(v___x_3901_);
v_a_3909_ = lean_ctor_get(v___x_3908_, 0);
lean_inc(v_a_3909_);
v_a_3910_ = lean_ctor_get(v___x_3908_, 1);
lean_inc(v_a_3910_);
lean_dec_ref_known(v___x_3908_, 2);
v___x_3911_ = lean_array_get_size(v_a_3910_);
v___x_3912_ = lean_nat_dec_lt(v___x_3906_, v___x_3911_);
if (v___x_3912_ == 0)
{
lean_dec(v_a_3910_);
v_fst_3889_ = v_a_3909_;
v_snd_3890_ = v_snd_3903_;
goto v___jp_3888_;
}
else
{
lean_object* v___x_3913_; size_t v___x_3914_; size_t v___x_3915_; lean_object* v___x_3916_; 
v___x_3913_ = lean_box(0);
v___x_3914_ = ((size_t)0ULL);
v___x_3915_ = lean_usize_of_nat(v___x_3911_);
v___x_3916_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__3(v_a_3910_, v___x_3914_, v___x_3915_, v___x_3913_, v___y_3886_);
lean_dec(v_a_3910_);
if (lean_obj_tag(v___x_3916_) == 0)
{
lean_dec_ref_known(v___x_3916_, 1);
v_fst_3889_ = v_a_3909_;
v_snd_3890_ = v_snd_3903_;
goto v___jp_3888_;
}
else
{
lean_object* v_a_3917_; lean_object* v___x_3919_; uint8_t v_isShared_3920_; uint8_t v_isSharedCheck_3924_; 
lean_dec(v_a_3909_);
lean_dec(v_snd_3903_);
lean_dec(v_a_3883_);
lean_dec_ref(v_leanOpts_3882_);
v_a_3917_ = lean_ctor_get(v___x_3916_, 0);
v_isSharedCheck_3924_ = !lean_is_exclusive(v___x_3916_);
if (v_isSharedCheck_3924_ == 0)
{
v___x_3919_ = v___x_3916_;
v_isShared_3920_ = v_isSharedCheck_3924_;
goto v_resetjp_3918_;
}
else
{
lean_inc(v_a_3917_);
lean_dec(v___x_3916_);
v___x_3919_ = lean_box(0);
v_isShared_3920_ = v_isSharedCheck_3924_;
goto v_resetjp_3918_;
}
v_resetjp_3918_:
{
lean_object* v___x_3922_; 
if (v_isShared_3920_ == 0)
{
v___x_3922_ = v___x_3919_;
goto v_reusejp_3921_;
}
else
{
lean_object* v_reuseFailAlloc_3923_; 
v_reuseFailAlloc_3923_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3923_, 0, v_a_3917_);
v___x_3922_ = v_reuseFailAlloc_3923_;
goto v_reusejp_3921_;
}
v_reusejp_3921_:
{
return v___x_3922_;
}
}
}
}
}
else
{
lean_object* v_a_3925_; lean_object* v___x_3926_; uint8_t v___x_3927_; 
lean_dec(v_snd_3903_);
lean_dec(v_a_3883_);
lean_dec_ref(v_leanOpts_3882_);
v_a_3925_ = lean_ctor_get(v___x_3908_, 1);
lean_inc(v_a_3925_);
lean_dec_ref_known(v___x_3908_, 2);
v___x_3926_ = lean_array_get_size(v_a_3925_);
v___x_3927_ = lean_nat_dec_lt(v___x_3906_, v___x_3926_);
if (v___x_3927_ == 0)
{
lean_object* v___x_3928_; lean_object* v___x_3930_; 
lean_dec(v_a_3925_);
v___x_3928_ = lean_box(0);
if (v_isShared_3902_ == 0)
{
lean_ctor_set_tag(v___x_3901_, 1);
lean_ctor_set(v___x_3901_, 0, v___x_3928_);
v___x_3930_ = v___x_3901_;
goto v_reusejp_3929_;
}
else
{
lean_object* v_reuseFailAlloc_3931_; 
v_reuseFailAlloc_3931_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3931_, 0, v___x_3928_);
v___x_3930_ = v_reuseFailAlloc_3931_;
goto v_reusejp_3929_;
}
v_reusejp_3929_:
{
return v___x_3930_;
}
}
else
{
lean_object* v___x_3932_; size_t v___x_3933_; size_t v___x_3934_; lean_object* v___x_3935_; 
lean_del_object(v___x_3901_);
v___x_3932_ = lean_box(0);
v___x_3933_ = ((size_t)0ULL);
v___x_3934_ = lean_usize_of_nat(v___x_3926_);
v___x_3935_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__3(v_a_3925_, v___x_3933_, v___x_3934_, v___x_3932_, v___y_3886_);
lean_dec(v_a_3925_);
if (lean_obj_tag(v___x_3935_) == 0)
{
lean_object* v___x_3937_; uint8_t v_isShared_3938_; uint8_t v_isSharedCheck_3942_; 
v_isSharedCheck_3942_ = !lean_is_exclusive(v___x_3935_);
if (v_isSharedCheck_3942_ == 0)
{
lean_object* v_unused_3943_; 
v_unused_3943_ = lean_ctor_get(v___x_3935_, 0);
lean_dec(v_unused_3943_);
v___x_3937_ = v___x_3935_;
v_isShared_3938_ = v_isSharedCheck_3942_;
goto v_resetjp_3936_;
}
else
{
lean_dec(v___x_3935_);
v___x_3937_ = lean_box(0);
v_isShared_3938_ = v_isSharedCheck_3942_;
goto v_resetjp_3936_;
}
v_resetjp_3936_:
{
lean_object* v___x_3940_; 
if (v_isShared_3938_ == 0)
{
lean_ctor_set_tag(v___x_3937_, 1);
lean_ctor_set(v___x_3937_, 0, v___x_3932_);
v___x_3940_ = v___x_3937_;
goto v_reusejp_3939_;
}
else
{
lean_object* v_reuseFailAlloc_3941_; 
v_reuseFailAlloc_3941_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3941_, 0, v___x_3932_);
v___x_3940_ = v_reuseFailAlloc_3941_;
goto v_reusejp_3939_;
}
v_reusejp_3939_:
{
return v___x_3940_;
}
}
}
else
{
lean_object* v_a_3944_; lean_object* v___x_3946_; uint8_t v_isShared_3947_; uint8_t v_isSharedCheck_3951_; 
v_a_3944_ = lean_ctor_get(v___x_3935_, 0);
v_isSharedCheck_3951_ = !lean_is_exclusive(v___x_3935_);
if (v_isSharedCheck_3951_ == 0)
{
v___x_3946_ = v___x_3935_;
v_isShared_3947_ = v_isSharedCheck_3951_;
goto v_resetjp_3945_;
}
else
{
lean_inc(v_a_3944_);
lean_dec(v___x_3935_);
v___x_3946_ = lean_box(0);
v_isShared_3947_ = v_isSharedCheck_3951_;
goto v_resetjp_3945_;
}
v_resetjp_3945_:
{
lean_object* v___x_3949_; 
if (v_isShared_3947_ == 0)
{
v___x_3949_ = v___x_3946_;
goto v_reusejp_3948_;
}
else
{
lean_object* v_reuseFailAlloc_3950_; 
v_reuseFailAlloc_3950_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3950_, 0, v_a_3944_);
v___x_3949_ = v_reuseFailAlloc_3950_;
goto v_reusejp_3948_;
}
v_reusejp_3948_:
{
return v___x_3949_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_3953_; lean_object* v___x_3955_; uint8_t v_isShared_3956_; uint8_t v_isSharedCheck_3960_; 
lean_dec_ref(v_b_3884_);
lean_dec(v_a_3883_);
lean_dec_ref(v_leanOpts_3882_);
v_a_3953_ = lean_ctor_get(v___x_3898_, 0);
v_isSharedCheck_3960_ = !lean_is_exclusive(v___x_3898_);
if (v_isSharedCheck_3960_ == 0)
{
v___x_3955_ = v___x_3898_;
v_isShared_3956_ = v_isSharedCheck_3960_;
goto v_resetjp_3954_;
}
else
{
lean_inc(v_a_3953_);
lean_dec(v___x_3898_);
v___x_3955_ = lean_box(0);
v_isShared_3956_ = v_isSharedCheck_3960_;
goto v_resetjp_3954_;
}
v_resetjp_3954_:
{
lean_object* v___x_3958_; 
if (v_isShared_3956_ == 0)
{
v___x_3958_ = v___x_3955_;
goto v_reusejp_3957_;
}
else
{
lean_object* v_reuseFailAlloc_3959_; 
v_reuseFailAlloc_3959_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3959_, 0, v_a_3953_);
v___x_3958_ = v_reuseFailAlloc_3959_;
goto v_reusejp_3957_;
}
v_reusejp_3957_:
{
return v___x_3958_;
}
}
}
}
v___jp_3888_:
{
lean_object* v___x_3891_; lean_object* v___x_3892_; 
v___x_3891_ = lean_unsigned_to_nat(1u);
v___x_3892_ = lean_nat_add(v_a_3883_, v___x_3891_);
lean_dec(v_a_3883_);
v_a_3883_ = v___x_3892_;
v_b_3884_ = v_fst_3889_;
v___y_3885_ = v_snd_3890_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__9___redArg___boxed(lean_object* v_upperBound_3961_, lean_object* v_fst_3962_, lean_object* v___x_3963_, lean_object* v_leanOpts_3964_, lean_object* v_a_3965_, lean_object* v_b_3966_, lean_object* v___y_3967_, lean_object* v___y_3968_, lean_object* v___y_3969_){
_start:
{
lean_object* v_res_3970_; 
v_res_3970_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__9___redArg(v_upperBound_3961_, v_fst_3962_, v___x_3963_, v_leanOpts_3964_, v_a_3965_, v_b_3966_, v___y_3967_, v___y_3968_);
lean_dec_ref(v___y_3968_);
lean_dec_ref(v___x_3963_);
lean_dec_ref(v_fst_3962_);
lean_dec(v_upperBound_3961_);
return v_res_3970_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4_spec__4___redArg___lam__0(lean_object* v___x_3971_, lean_object* v_x_3972_){
_start:
{
lean_object* v_baseName_3973_; lean_object* v_name_3974_; uint8_t v___x_3975_; 
v_baseName_3973_ = lean_ctor_get(v_x_3972_, 1);
v_name_3974_ = lean_ctor_get(v___x_3971_, 0);
v___x_3975_ = lean_name_eq(v_baseName_3973_, v_name_3974_);
return v___x_3975_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4_spec__4___redArg___lam__0___boxed(lean_object* v___x_3976_, lean_object* v_x_3977_){
_start:
{
uint8_t v_res_3978_; lean_object* v_r_3979_; 
v_res_3978_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4_spec__4___redArg___lam__0(v___x_3976_, v_x_3977_);
lean_dec_ref(v_x_3977_);
lean_dec_ref(v___x_3976_);
v_r_3979_ = lean_box(v_res_3978_);
return v_r_3979_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4_spec__4___redArg(lean_object* v_pkg_3980_, lean_object* v_leanOpts_3981_, uint8_t v_reconfigure_3982_, lean_object* v_as_3983_, size_t v_i_3984_, size_t v_stop_3985_, lean_object* v_b_3986_, lean_object* v___y_3987_, lean_object* v___y_3988_){
_start:
{
uint8_t v___x_3990_; 
v___x_3990_ = lean_usize_dec_eq(v_i_3984_, v_stop_3985_);
if (v___x_3990_ == 0)
{
lean_object* v_ws_3991_; lean_object* v_depIdxs_3992_; lean_object* v___x_3994_; uint8_t v_isShared_3995_; uint8_t v_isSharedCheck_4089_; 
v_ws_3991_ = lean_ctor_get(v_b_3986_, 0);
v_depIdxs_3992_ = lean_ctor_get(v_b_3986_, 1);
v_isSharedCheck_4089_ = !lean_is_exclusive(v_b_3986_);
if (v_isSharedCheck_4089_ == 0)
{
v___x_3994_ = v_b_3986_;
v_isShared_3995_ = v_isSharedCheck_4089_;
goto v_resetjp_3993_;
}
else
{
lean_inc(v_depIdxs_3992_);
lean_inc(v_ws_3991_);
lean_dec(v_b_3986_);
v___x_3994_ = lean_box(0);
v_isShared_3995_ = v_isSharedCheck_4089_;
goto v_resetjp_3993_;
}
v_resetjp_3993_:
{
lean_object* v_packages_3996_; size_t v___x_3997_; size_t v___x_3998_; lean_object* v___x_3999_; lean_object* v___f_4000_; lean_object* v___x_4001_; lean_object* v___x_4002_; 
v_packages_3996_ = lean_ctor_get(v_ws_3991_, 4);
v___x_3997_ = ((size_t)1ULL);
v___x_3998_ = lean_usize_sub(v_i_3984_, v___x_3997_);
v___x_3999_ = lean_array_uget_borrowed(v_as_3983_, v___x_3998_);
lean_inc(v___x_3999_);
v___f_4000_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4_spec__4___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_4000_, 0, v___x_3999_);
v___x_4001_ = lean_unsigned_to_nat(0u);
v___x_4002_ = l___private_Init_Data_Array_Basic_0__Array_findFinIdx_x3f_loop(lean_box(0), v___f_4000_, v_packages_3996_, v___x_4001_);
if (lean_obj_tag(v___x_4002_) == 1)
{
lean_object* v_val_4003_; lean_object* v___x_4004_; lean_object* v___x_4006_; 
v_val_4003_ = lean_ctor_get(v___x_4002_, 0);
lean_inc(v_val_4003_);
lean_dec_ref_known(v___x_4002_, 1);
v___x_4004_ = lean_array_push(v_depIdxs_3992_, v_val_4003_);
if (v_isShared_3995_ == 0)
{
lean_ctor_set(v___x_3994_, 1, v___x_4004_);
v___x_4006_ = v___x_3994_;
goto v_reusejp_4005_;
}
else
{
lean_object* v_reuseFailAlloc_4008_; 
v_reuseFailAlloc_4008_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4008_, 0, v_ws_3991_);
lean_ctor_set(v_reuseFailAlloc_4008_, 1, v___x_4004_);
v___x_4006_ = v_reuseFailAlloc_4008_;
goto v_reusejp_4005_;
}
v_reusejp_4005_:
{
v_i_3984_ = v___x_3998_;
v_b_3986_ = v___x_4006_;
goto _start;
}
}
else
{
lean_object* v_baseName_4009_; lean_object* v_name_4010_; lean_object* v_opts_4011_; uint8_t v___x_4012_; 
lean_dec(v___x_4002_);
v_baseName_4009_ = lean_ctor_get(v_pkg_3980_, 1);
v_name_4010_ = lean_ctor_get(v___x_3999_, 0);
v_opts_4011_ = lean_ctor_get(v___x_3999_, 4);
v___x_4012_ = lean_name_eq(v_baseName_4009_, v_name_4010_);
if (v___x_4012_ == 0)
{
lean_object* v___x_4013_; 
lean_inc_ref(v___y_3988_);
lean_inc_ref(v_ws_3991_);
lean_inc(v___x_3999_);
lean_inc_ref(v_pkg_3980_);
v___x_4013_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore___elam__0(v_pkg_3980_, v___x_3999_, v_ws_3991_, v___y_3987_, v___y_3988_);
if (lean_obj_tag(v___x_4013_) == 0)
{
lean_object* v_a_4014_; lean_object* v___x_4016_; uint8_t v_isShared_4017_; uint8_t v_isSharedCheck_4072_; 
v_a_4014_ = lean_ctor_get(v___x_4013_, 0);
v_isSharedCheck_4072_ = !lean_is_exclusive(v___x_4013_);
if (v_isSharedCheck_4072_ == 0)
{
v___x_4016_ = v___x_4013_;
v_isShared_4017_ = v_isSharedCheck_4072_;
goto v_resetjp_4015_;
}
else
{
lean_inc(v_a_4014_);
lean_dec(v___x_4013_);
v___x_4016_ = lean_box(0);
v_isShared_4017_ = v_isSharedCheck_4072_;
goto v_resetjp_4015_;
}
v_resetjp_4015_:
{
lean_object* v_fst_4018_; lean_object* v_snd_4019_; lean_object* v___x_4020_; lean_object* v_wsIdx_4021_; lean_object* v___x_4022_; 
v_fst_4018_ = lean_ctor_get(v_a_4014_, 0);
lean_inc(v_fst_4018_);
v_snd_4019_ = lean_ctor_get(v_a_4014_, 1);
lean_inc(v_snd_4019_);
lean_dec(v_a_4014_);
v___x_4020_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__4));
v_wsIdx_4021_ = lean_array_get_size(v_packages_3996_);
lean_inc_ref(v_leanOpts_3981_);
lean_inc(v_opts_4011_);
v___x_4022_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_addDepPackage_x27(v_ws_3991_, v_fst_4018_, v_opts_4011_, v_leanOpts_3981_, v_reconfigure_3982_, v___x_4020_);
if (lean_obj_tag(v___x_4022_) == 0)
{
lean_object* v_a_4023_; lean_object* v_a_4024_; lean_object* v___x_4025_; lean_object* v___x_4027_; 
lean_del_object(v___x_4016_);
v_a_4023_ = lean_ctor_get(v___x_4022_, 0);
lean_inc(v_a_4023_);
v_a_4024_ = lean_ctor_get(v___x_4022_, 1);
lean_inc(v_a_4024_);
lean_dec_ref_known(v___x_4022_, 2);
v___x_4025_ = lean_array_push(v_depIdxs_3992_, v_wsIdx_4021_);
if (v_isShared_3995_ == 0)
{
lean_ctor_set(v___x_3994_, 1, v___x_4025_);
lean_ctor_set(v___x_3994_, 0, v_a_4023_);
v___x_4027_ = v___x_3994_;
goto v_reusejp_4026_;
}
else
{
lean_object* v_reuseFailAlloc_4044_; 
v_reuseFailAlloc_4044_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4044_, 0, v_a_4023_);
lean_ctor_set(v_reuseFailAlloc_4044_, 1, v___x_4025_);
v___x_4027_ = v_reuseFailAlloc_4044_;
goto v_reusejp_4026_;
}
v_reusejp_4026_:
{
lean_object* v___x_4028_; uint8_t v___x_4029_; 
v___x_4028_ = lean_array_get_size(v_a_4024_);
v___x_4029_ = lean_nat_dec_lt(v___x_4001_, v___x_4028_);
if (v___x_4029_ == 0)
{
lean_dec(v_a_4024_);
v_i_3984_ = v___x_3998_;
v_b_3986_ = v___x_4027_;
v___y_3987_ = v_snd_4019_;
goto _start;
}
else
{
lean_object* v___x_4031_; size_t v___x_4032_; size_t v___x_4033_; lean_object* v___x_4034_; 
v___x_4031_ = lean_box(0);
v___x_4032_ = ((size_t)0ULL);
v___x_4033_ = lean_usize_of_nat(v___x_4028_);
v___x_4034_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__3(v_a_4024_, v___x_4032_, v___x_4033_, v___x_4031_, v___y_3988_);
lean_dec(v_a_4024_);
if (lean_obj_tag(v___x_4034_) == 0)
{
lean_dec_ref_known(v___x_4034_, 1);
v_i_3984_ = v___x_3998_;
v_b_3986_ = v___x_4027_;
v___y_3987_ = v_snd_4019_;
goto _start;
}
else
{
lean_object* v_a_4036_; lean_object* v___x_4038_; uint8_t v_isShared_4039_; uint8_t v_isSharedCheck_4043_; 
lean_dec_ref(v___x_4027_);
lean_dec(v_snd_4019_);
lean_dec_ref(v_leanOpts_3981_);
lean_dec_ref(v_pkg_3980_);
v_a_4036_ = lean_ctor_get(v___x_4034_, 0);
v_isSharedCheck_4043_ = !lean_is_exclusive(v___x_4034_);
if (v_isSharedCheck_4043_ == 0)
{
v___x_4038_ = v___x_4034_;
v_isShared_4039_ = v_isSharedCheck_4043_;
goto v_resetjp_4037_;
}
else
{
lean_inc(v_a_4036_);
lean_dec(v___x_4034_);
v___x_4038_ = lean_box(0);
v_isShared_4039_ = v_isSharedCheck_4043_;
goto v_resetjp_4037_;
}
v_resetjp_4037_:
{
lean_object* v___x_4041_; 
if (v_isShared_4039_ == 0)
{
v___x_4041_ = v___x_4038_;
goto v_reusejp_4040_;
}
else
{
lean_object* v_reuseFailAlloc_4042_; 
v_reuseFailAlloc_4042_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4042_, 0, v_a_4036_);
v___x_4041_ = v_reuseFailAlloc_4042_;
goto v_reusejp_4040_;
}
v_reusejp_4040_:
{
return v___x_4041_;
}
}
}
}
}
}
else
{
lean_object* v_a_4045_; lean_object* v___x_4046_; uint8_t v___x_4047_; 
lean_dec(v_snd_4019_);
lean_del_object(v___x_3994_);
lean_dec_ref(v_depIdxs_3992_);
lean_dec_ref(v_leanOpts_3981_);
lean_dec_ref(v_pkg_3980_);
v_a_4045_ = lean_ctor_get(v___x_4022_, 1);
lean_inc(v_a_4045_);
lean_dec_ref_known(v___x_4022_, 2);
v___x_4046_ = lean_array_get_size(v_a_4045_);
v___x_4047_ = lean_nat_dec_lt(v___x_4001_, v___x_4046_);
if (v___x_4047_ == 0)
{
lean_object* v___x_4048_; lean_object* v___x_4050_; 
lean_dec(v_a_4045_);
v___x_4048_ = lean_box(0);
if (v_isShared_4017_ == 0)
{
lean_ctor_set_tag(v___x_4016_, 1);
lean_ctor_set(v___x_4016_, 0, v___x_4048_);
v___x_4050_ = v___x_4016_;
goto v_reusejp_4049_;
}
else
{
lean_object* v_reuseFailAlloc_4051_; 
v_reuseFailAlloc_4051_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4051_, 0, v___x_4048_);
v___x_4050_ = v_reuseFailAlloc_4051_;
goto v_reusejp_4049_;
}
v_reusejp_4049_:
{
return v___x_4050_;
}
}
else
{
lean_object* v___x_4052_; size_t v___x_4053_; size_t v___x_4054_; lean_object* v___x_4055_; 
lean_del_object(v___x_4016_);
v___x_4052_ = lean_box(0);
v___x_4053_ = ((size_t)0ULL);
v___x_4054_ = lean_usize_of_nat(v___x_4046_);
v___x_4055_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__3(v_a_4045_, v___x_4053_, v___x_4054_, v___x_4052_, v___y_3988_);
lean_dec(v_a_4045_);
if (lean_obj_tag(v___x_4055_) == 0)
{
lean_object* v___x_4057_; uint8_t v_isShared_4058_; uint8_t v_isSharedCheck_4062_; 
v_isSharedCheck_4062_ = !lean_is_exclusive(v___x_4055_);
if (v_isSharedCheck_4062_ == 0)
{
lean_object* v_unused_4063_; 
v_unused_4063_ = lean_ctor_get(v___x_4055_, 0);
lean_dec(v_unused_4063_);
v___x_4057_ = v___x_4055_;
v_isShared_4058_ = v_isSharedCheck_4062_;
goto v_resetjp_4056_;
}
else
{
lean_dec(v___x_4055_);
v___x_4057_ = lean_box(0);
v_isShared_4058_ = v_isSharedCheck_4062_;
goto v_resetjp_4056_;
}
v_resetjp_4056_:
{
lean_object* v___x_4060_; 
if (v_isShared_4058_ == 0)
{
lean_ctor_set_tag(v___x_4057_, 1);
lean_ctor_set(v___x_4057_, 0, v___x_4052_);
v___x_4060_ = v___x_4057_;
goto v_reusejp_4059_;
}
else
{
lean_object* v_reuseFailAlloc_4061_; 
v_reuseFailAlloc_4061_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4061_, 0, v___x_4052_);
v___x_4060_ = v_reuseFailAlloc_4061_;
goto v_reusejp_4059_;
}
v_reusejp_4059_:
{
return v___x_4060_;
}
}
}
else
{
lean_object* v_a_4064_; lean_object* v___x_4066_; uint8_t v_isShared_4067_; uint8_t v_isSharedCheck_4071_; 
v_a_4064_ = lean_ctor_get(v___x_4055_, 0);
v_isSharedCheck_4071_ = !lean_is_exclusive(v___x_4055_);
if (v_isSharedCheck_4071_ == 0)
{
v___x_4066_ = v___x_4055_;
v_isShared_4067_ = v_isSharedCheck_4071_;
goto v_resetjp_4065_;
}
else
{
lean_inc(v_a_4064_);
lean_dec(v___x_4055_);
v___x_4066_ = lean_box(0);
v_isShared_4067_ = v_isSharedCheck_4071_;
goto v_resetjp_4065_;
}
v_resetjp_4065_:
{
lean_object* v___x_4069_; 
if (v_isShared_4067_ == 0)
{
v___x_4069_ = v___x_4066_;
goto v_reusejp_4068_;
}
else
{
lean_object* v_reuseFailAlloc_4070_; 
v_reuseFailAlloc_4070_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4070_, 0, v_a_4064_);
v___x_4069_ = v_reuseFailAlloc_4070_;
goto v_reusejp_4068_;
}
v_reusejp_4068_:
{
return v___x_4069_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_4073_; lean_object* v___x_4075_; uint8_t v_isShared_4076_; uint8_t v_isSharedCheck_4080_; 
lean_del_object(v___x_3994_);
lean_dec_ref(v_depIdxs_3992_);
lean_dec_ref(v_ws_3991_);
lean_dec_ref(v_leanOpts_3981_);
lean_dec_ref(v_pkg_3980_);
v_a_4073_ = lean_ctor_get(v___x_4013_, 0);
v_isSharedCheck_4080_ = !lean_is_exclusive(v___x_4013_);
if (v_isSharedCheck_4080_ == 0)
{
v___x_4075_ = v___x_4013_;
v_isShared_4076_ = v_isSharedCheck_4080_;
goto v_resetjp_4074_;
}
else
{
lean_inc(v_a_4073_);
lean_dec(v___x_4013_);
v___x_4075_ = lean_box(0);
v_isShared_4076_ = v_isSharedCheck_4080_;
goto v_resetjp_4074_;
}
v_resetjp_4074_:
{
lean_object* v___x_4078_; 
if (v_isShared_4076_ == 0)
{
v___x_4078_ = v___x_4075_;
goto v_reusejp_4077_;
}
else
{
lean_object* v_reuseFailAlloc_4079_; 
v_reuseFailAlloc_4079_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4079_, 0, v_a_4073_);
v___x_4078_ = v_reuseFailAlloc_4079_;
goto v_reusejp_4077_;
}
v_reusejp_4077_:
{
return v___x_4078_;
}
}
}
}
else
{
lean_object* v___x_4081_; lean_object* v___x_4082_; lean_object* v___x_4083_; uint8_t v___x_4084_; lean_object* v___x_4085_; lean_object* v___x_4086_; lean_object* v___x_4087_; lean_object* v___x_4088_; 
lean_inc(v_baseName_4009_);
lean_del_object(v___x_3994_);
lean_dec_ref(v_depIdxs_3992_);
lean_dec_ref(v_ws_3991_);
lean_dec(v___y_3987_);
lean_dec_ref(v_leanOpts_3981_);
lean_dec_ref(v_pkg_3980_);
v___x_4081_ = l_Lean_Name_toString(v_baseName_4009_, v___x_3990_);
v___x_4082_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__6___closed__0));
v___x_4083_ = lean_string_append(v___x_4081_, v___x_4082_);
v___x_4084_ = 3;
v___x_4085_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4085_, 0, v___x_4083_);
lean_ctor_set_uint8(v___x_4085_, sizeof(void*)*1, v___x_4084_);
lean_inc_ref(v___y_3988_);
v___x_4086_ = lean_apply_2(v___y_3988_, v___x_4085_, lean_box(0));
v___x_4087_ = lean_box(0);
v___x_4088_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4088_, 0, v___x_4087_);
return v___x_4088_;
}
}
}
}
else
{
lean_object* v___x_4090_; lean_object* v___x_4091_; 
lean_dec_ref(v_leanOpts_3981_);
lean_dec_ref(v_pkg_3980_);
v___x_4090_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4090_, 0, v_b_3986_);
lean_ctor_set(v___x_4090_, 1, v___y_3987_);
v___x_4091_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4091_, 0, v___x_4090_);
return v___x_4091_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4_spec__4___redArg___boxed(lean_object* v_pkg_4092_, lean_object* v_leanOpts_4093_, lean_object* v_reconfigure_4094_, lean_object* v_as_4095_, lean_object* v_i_4096_, lean_object* v_stop_4097_, lean_object* v_b_4098_, lean_object* v___y_4099_, lean_object* v___y_4100_, lean_object* v___y_4101_){
_start:
{
uint8_t v_reconfigure_boxed_4102_; size_t v_i_boxed_4103_; size_t v_stop_boxed_4104_; lean_object* v_res_4105_; 
v_reconfigure_boxed_4102_ = lean_unbox(v_reconfigure_4094_);
v_i_boxed_4103_ = lean_unbox_usize(v_i_4096_);
lean_dec(v_i_4096_);
v_stop_boxed_4104_ = lean_unbox_usize(v_stop_4097_);
lean_dec(v_stop_4097_);
v_res_4105_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4_spec__4___redArg(v_pkg_4092_, v_leanOpts_4093_, v_reconfigure_boxed_4102_, v_as_4095_, v_i_boxed_4103_, v_stop_boxed_4104_, v_b_4098_, v___y_4099_, v___y_4100_);
lean_dec_ref(v___y_4100_);
lean_dec_ref(v_as_4095_);
return v_res_4105_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4___redArg(lean_object* v_leanOpts_4106_, uint8_t v_reconfigure_4107_, lean_object* v_ws_4108_, lean_object* v_i_4109_, lean_object* v_next_4110_, lean_object* v___y_4111_, lean_object* v___y_4112_){
_start:
{
lean_object* v_packages_4114_; lean_object* v_pkg_4115_; lean_object* v_ws_4117_; lean_object* v_depIdxs_4118_; lean_object* v___y_4119_; lean_object* v___y_4120_; lean_object* v_____x_4131_; lean_object* v___y_4132_; lean_object* v___y_4133_; lean_object* v_depConfigs_4136_; lean_object* v___x_4137_; lean_object* v___x_4138_; lean_object* v_s_4139_; lean_object* v___x_4140_; uint8_t v___x_4141_; 
v_packages_4114_ = lean_ctor_get(v_ws_4108_, 4);
v_pkg_4115_ = lean_array_fget(v_packages_4114_, v_i_4109_);
lean_dec(v_i_4109_);
v_depConfigs_4136_ = lean_ctor_get(v_pkg_4115_, 12);
v___x_4137_ = lean_array_get_size(v_depConfigs_4136_);
v___x_4138_ = lean_mk_empty_array_with_capacity(v___x_4137_);
lean_inc_ref(v___x_4138_);
lean_inc_ref(v_ws_4108_);
v_s_4139_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_s_4139_, 0, v_ws_4108_);
lean_ctor_set(v_s_4139_, 1, v___x_4138_);
v___x_4140_ = lean_unsigned_to_nat(0u);
v___x_4141_ = lean_nat_dec_le(v___x_4137_, v___x_4137_);
if (v___x_4141_ == 0)
{
uint8_t v___x_4142_; 
v___x_4142_ = lean_nat_dec_lt(v___x_4140_, v___x_4137_);
if (v___x_4142_ == 0)
{
lean_object* v_ws_4143_; lean_object* v_packages_4144_; lean_object* v___x_4145_; uint8_t v___x_4146_; 
lean_dec_ref_known(v_s_4139_, 2);
v_ws_4143_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_setDepIdxs___redArg(v_ws_4108_, v_pkg_4115_, v___x_4138_);
v_packages_4144_ = lean_ctor_get(v_ws_4143_, 4);
lean_inc_ref(v_packages_4144_);
v___x_4145_ = lean_array_get_size(v_packages_4144_);
lean_dec_ref(v_packages_4144_);
v___x_4146_ = lean_nat_dec_lt(v_next_4110_, v___x_4145_);
if (v___x_4146_ == 0)
{
lean_object* v___x_4147_; lean_object* v___x_4148_; 
lean_dec(v_next_4110_);
lean_dec_ref(v_leanOpts_4106_);
v___x_4147_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4147_, 0, v_ws_4143_);
lean_ctor_set(v___x_4147_, 1, v___y_4111_);
v___x_4148_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4148_, 0, v___x_4147_);
return v___x_4148_;
}
else
{
lean_object* v___x_4149_; lean_object* v___x_4150_; 
v___x_4149_ = lean_unsigned_to_nat(1u);
v___x_4150_ = lean_nat_add(v_next_4110_, v___x_4149_);
v_ws_4108_ = v_ws_4143_;
v_i_4109_ = v_next_4110_;
v_next_4110_ = v___x_4150_;
goto _start;
}
}
else
{
size_t v___x_4152_; size_t v___x_4153_; lean_object* v___x_4154_; 
lean_dec_ref(v___x_4138_);
lean_dec_ref(v_ws_4108_);
v___x_4152_ = lean_usize_of_nat(v___x_4137_);
v___x_4153_ = ((size_t)0ULL);
lean_inc_ref(v_leanOpts_4106_);
lean_inc(v_pkg_4115_);
v___x_4154_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4_spec__4___redArg(v_pkg_4115_, v_leanOpts_4106_, v_reconfigure_4107_, v_depConfigs_4136_, v___x_4152_, v___x_4153_, v_s_4139_, v___y_4111_, v___y_4112_);
if (lean_obj_tag(v___x_4154_) == 0)
{
lean_object* v_a_4155_; lean_object* v_fst_4156_; lean_object* v_snd_4157_; 
v_a_4155_ = lean_ctor_get(v___x_4154_, 0);
lean_inc(v_a_4155_);
lean_dec_ref_known(v___x_4154_, 1);
v_fst_4156_ = lean_ctor_get(v_a_4155_, 0);
lean_inc(v_fst_4156_);
v_snd_4157_ = lean_ctor_get(v_a_4155_, 1);
lean_inc(v_snd_4157_);
lean_dec(v_a_4155_);
v_____x_4131_ = v_fst_4156_;
v___y_4132_ = v_snd_4157_;
v___y_4133_ = v___y_4112_;
goto v___jp_4130_;
}
else
{
lean_object* v_a_4158_; lean_object* v___x_4160_; uint8_t v_isShared_4161_; uint8_t v_isSharedCheck_4165_; 
lean_dec(v_pkg_4115_);
lean_dec(v_next_4110_);
lean_dec_ref(v_leanOpts_4106_);
v_a_4158_ = lean_ctor_get(v___x_4154_, 0);
v_isSharedCheck_4165_ = !lean_is_exclusive(v___x_4154_);
if (v_isSharedCheck_4165_ == 0)
{
v___x_4160_ = v___x_4154_;
v_isShared_4161_ = v_isSharedCheck_4165_;
goto v_resetjp_4159_;
}
else
{
lean_inc(v_a_4158_);
lean_dec(v___x_4154_);
v___x_4160_ = lean_box(0);
v_isShared_4161_ = v_isSharedCheck_4165_;
goto v_resetjp_4159_;
}
v_resetjp_4159_:
{
lean_object* v___x_4163_; 
if (v_isShared_4161_ == 0)
{
v___x_4163_ = v___x_4160_;
goto v_reusejp_4162_;
}
else
{
lean_object* v_reuseFailAlloc_4164_; 
v_reuseFailAlloc_4164_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4164_, 0, v_a_4158_);
v___x_4163_ = v_reuseFailAlloc_4164_;
goto v_reusejp_4162_;
}
v_reusejp_4162_:
{
return v___x_4163_;
}
}
}
}
}
else
{
uint8_t v___x_4166_; 
v___x_4166_ = lean_nat_dec_lt(v___x_4140_, v___x_4137_);
if (v___x_4166_ == 0)
{
lean_dec_ref_known(v_s_4139_, 2);
v_ws_4117_ = v_ws_4108_;
v_depIdxs_4118_ = v___x_4138_;
v___y_4119_ = v___y_4111_;
v___y_4120_ = v___y_4112_;
goto v___jp_4116_;
}
else
{
size_t v___x_4167_; size_t v___x_4168_; lean_object* v___x_4169_; 
lean_dec_ref(v___x_4138_);
lean_dec_ref(v_ws_4108_);
v___x_4167_ = lean_usize_of_nat(v___x_4137_);
v___x_4168_ = ((size_t)0ULL);
lean_inc_ref(v_leanOpts_4106_);
lean_inc(v_pkg_4115_);
v___x_4169_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4_spec__4___redArg(v_pkg_4115_, v_leanOpts_4106_, v_reconfigure_4107_, v_depConfigs_4136_, v___x_4167_, v___x_4168_, v_s_4139_, v___y_4111_, v___y_4112_);
if (lean_obj_tag(v___x_4169_) == 0)
{
lean_object* v_a_4170_; lean_object* v_fst_4171_; lean_object* v_snd_4172_; 
v_a_4170_ = lean_ctor_get(v___x_4169_, 0);
lean_inc(v_a_4170_);
lean_dec_ref_known(v___x_4169_, 1);
v_fst_4171_ = lean_ctor_get(v_a_4170_, 0);
lean_inc(v_fst_4171_);
v_snd_4172_ = lean_ctor_get(v_a_4170_, 1);
lean_inc(v_snd_4172_);
lean_dec(v_a_4170_);
v_____x_4131_ = v_fst_4171_;
v___y_4132_ = v_snd_4172_;
v___y_4133_ = v___y_4112_;
goto v___jp_4130_;
}
else
{
lean_object* v_a_4173_; lean_object* v___x_4175_; uint8_t v_isShared_4176_; uint8_t v_isSharedCheck_4180_; 
lean_dec(v_pkg_4115_);
lean_dec(v_next_4110_);
lean_dec_ref(v_leanOpts_4106_);
v_a_4173_ = lean_ctor_get(v___x_4169_, 0);
v_isSharedCheck_4180_ = !lean_is_exclusive(v___x_4169_);
if (v_isSharedCheck_4180_ == 0)
{
v___x_4175_ = v___x_4169_;
v_isShared_4176_ = v_isSharedCheck_4180_;
goto v_resetjp_4174_;
}
else
{
lean_inc(v_a_4173_);
lean_dec(v___x_4169_);
v___x_4175_ = lean_box(0);
v_isShared_4176_ = v_isSharedCheck_4180_;
goto v_resetjp_4174_;
}
v_resetjp_4174_:
{
lean_object* v___x_4178_; 
if (v_isShared_4176_ == 0)
{
v___x_4178_ = v___x_4175_;
goto v_reusejp_4177_;
}
else
{
lean_object* v_reuseFailAlloc_4179_; 
v_reuseFailAlloc_4179_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4179_, 0, v_a_4173_);
v___x_4178_ = v_reuseFailAlloc_4179_;
goto v_reusejp_4177_;
}
v_reusejp_4177_:
{
return v___x_4178_;
}
}
}
}
}
v___jp_4116_:
{
lean_object* v_ws_4121_; lean_object* v_packages_4122_; lean_object* v___x_4123_; uint8_t v___x_4124_; 
v_ws_4121_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_setDepIdxs___redArg(v_ws_4117_, v_pkg_4115_, v_depIdxs_4118_);
v_packages_4122_ = lean_ctor_get(v_ws_4121_, 4);
lean_inc_ref(v_packages_4122_);
v___x_4123_ = lean_array_get_size(v_packages_4122_);
lean_dec_ref(v_packages_4122_);
v___x_4124_ = lean_nat_dec_lt(v_next_4110_, v___x_4123_);
if (v___x_4124_ == 0)
{
lean_object* v___x_4125_; lean_object* v___x_4126_; 
lean_dec(v_next_4110_);
lean_dec_ref(v_leanOpts_4106_);
v___x_4125_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4125_, 0, v_ws_4121_);
lean_ctor_set(v___x_4125_, 1, v___y_4119_);
v___x_4126_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4126_, 0, v___x_4125_);
return v___x_4126_;
}
else
{
lean_object* v___x_4127_; lean_object* v___x_4128_; 
v___x_4127_ = lean_unsigned_to_nat(1u);
v___x_4128_ = lean_nat_add(v_next_4110_, v___x_4127_);
v_ws_4108_ = v_ws_4121_;
v_i_4109_ = v_next_4110_;
v_next_4110_ = v___x_4128_;
v___y_4111_ = v___y_4119_;
v___y_4112_ = v___y_4120_;
goto _start;
}
}
v___jp_4130_:
{
lean_object* v_ws_4134_; lean_object* v_depIdxs_4135_; 
v_ws_4134_ = lean_ctor_get(v_____x_4131_, 0);
lean_inc_ref(v_ws_4134_);
v_depIdxs_4135_ = lean_ctor_get(v_____x_4131_, 1);
lean_inc_ref(v_depIdxs_4135_);
lean_dec_ref(v_____x_4131_);
v_ws_4117_ = v_ws_4134_;
v_depIdxs_4118_ = v_depIdxs_4135_;
v___y_4119_ = v___y_4132_;
v___y_4120_ = v___y_4133_;
goto v___jp_4116_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4___redArg___boxed(lean_object* v_leanOpts_4181_, lean_object* v_reconfigure_4182_, lean_object* v_ws_4183_, lean_object* v_i_4184_, lean_object* v_next_4185_, lean_object* v___y_4186_, lean_object* v___y_4187_, lean_object* v___y_4188_){
_start:
{
uint8_t v_reconfigure_boxed_4189_; lean_object* v_res_4190_; 
v_reconfigure_boxed_4189_ = lean_unbox(v_reconfigure_4182_);
v_res_4190_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4___redArg(v_leanOpts_4181_, v_reconfigure_boxed_4189_, v_ws_4183_, v_i_4184_, v_next_4185_, v___y_4186_, v___y_4187_);
lean_dec_ref(v___y_4187_);
return v_res_4190_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore(lean_object* v_ws_4193_, lean_object* v_toUpdate_4194_, lean_object* v_leanOpts_4195_, uint8_t v_updateToolchain_4196_, lean_object* v_a_4197_){
_start:
{
lean_object* v___x_4199_; lean_object* v___x_4200_; 
v___x_4199_ = lean_box(1);
v___x_4200_ = l___private_Lake_Load_Resolve_0__Lake_reuseManifest___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__3(v_a_4197_, v_ws_4193_, v_toUpdate_4194_, v___x_4199_);
if (lean_obj_tag(v___x_4200_) == 0)
{
lean_object* v_a_4201_; lean_object* v_snd_4202_; uint8_t v___x_4203_; 
v_a_4201_ = lean_ctor_get(v___x_4200_, 0);
lean_inc(v_a_4201_);
lean_dec_ref_known(v___x_4200_, 1);
v_snd_4202_ = lean_ctor_get(v_a_4201_, 1);
lean_inc(v_snd_4202_);
lean_dec(v_a_4201_);
v___x_4203_ = 1;
if (v_updateToolchain_4196_ == 0)
{
lean_object* v_packages_4204_; lean_object* v___x_4205_; lean_object* v___x_4206_; lean_object* v_wsIdx_4207_; lean_object* v___x_4208_; lean_object* v___x_4209_; 
v_packages_4204_ = lean_ctor_get(v_ws_4193_, 4);
v___x_4205_ = lean_unsigned_to_nat(0u);
v___x_4206_ = lean_array_fget_borrowed(v_packages_4204_, v___x_4205_);
v_wsIdx_4207_ = lean_ctor_get(v___x_4206_, 0);
lean_inc(v_wsIdx_4207_);
v___x_4208_ = lean_array_get_size(v_packages_4204_);
v___x_4209_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4___redArg(v_leanOpts_4195_, v___x_4203_, v_ws_4193_, v_wsIdx_4207_, v___x_4208_, v_snd_4202_, v_a_4197_);
if (lean_obj_tag(v___x_4209_) == 0)
{
lean_object* v_a_4210_; lean_object* v___x_4212_; uint8_t v_isShared_4213_; uint8_t v_isSharedCheck_4227_; 
v_a_4210_ = lean_ctor_get(v___x_4209_, 0);
v_isSharedCheck_4227_ = !lean_is_exclusive(v___x_4209_);
if (v_isSharedCheck_4227_ == 0)
{
v___x_4212_ = v___x_4209_;
v_isShared_4213_ = v_isSharedCheck_4227_;
goto v_resetjp_4211_;
}
else
{
lean_inc(v_a_4210_);
lean_dec(v___x_4209_);
v___x_4212_ = lean_box(0);
v_isShared_4213_ = v_isSharedCheck_4227_;
goto v_resetjp_4211_;
}
v_resetjp_4211_:
{
lean_object* v_fst_4214_; lean_object* v_snd_4215_; lean_object* v___x_4217_; uint8_t v_isShared_4218_; uint8_t v_isSharedCheck_4226_; 
v_fst_4214_ = lean_ctor_get(v_a_4210_, 0);
v_snd_4215_ = lean_ctor_get(v_a_4210_, 1);
v_isSharedCheck_4226_ = !lean_is_exclusive(v_a_4210_);
if (v_isSharedCheck_4226_ == 0)
{
v___x_4217_ = v_a_4210_;
v_isShared_4218_ = v_isSharedCheck_4226_;
goto v_resetjp_4216_;
}
else
{
lean_inc(v_snd_4215_);
lean_inc(v_fst_4214_);
lean_dec(v_a_4210_);
v___x_4217_ = lean_box(0);
v_isShared_4218_ = v_isSharedCheck_4226_;
goto v_resetjp_4216_;
}
v_resetjp_4216_:
{
lean_object* v___x_4219_; lean_object* v___x_4221_; 
v___x_4219_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_updateDepPkgs(v_fst_4214_);
if (v_isShared_4218_ == 0)
{
lean_ctor_set(v___x_4217_, 0, v___x_4219_);
v___x_4221_ = v___x_4217_;
goto v_reusejp_4220_;
}
else
{
lean_object* v_reuseFailAlloc_4225_; 
v_reuseFailAlloc_4225_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4225_, 0, v___x_4219_);
lean_ctor_set(v_reuseFailAlloc_4225_, 1, v_snd_4215_);
v___x_4221_ = v_reuseFailAlloc_4225_;
goto v_reusejp_4220_;
}
v_reusejp_4220_:
{
lean_object* v___x_4223_; 
if (v_isShared_4213_ == 0)
{
lean_ctor_set(v___x_4212_, 0, v___x_4221_);
v___x_4223_ = v___x_4212_;
goto v_reusejp_4222_;
}
else
{
lean_object* v_reuseFailAlloc_4224_; 
v_reuseFailAlloc_4224_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4224_, 0, v___x_4221_);
v___x_4223_ = v_reuseFailAlloc_4224_;
goto v_reusejp_4222_;
}
v_reusejp_4222_:
{
return v___x_4223_;
}
}
}
}
}
else
{
return v___x_4209_;
}
}
else
{
lean_object* v_packages_4228_; lean_object* v___x_4229_; lean_object* v___x_4230_; lean_object* v_depConfigs_4231_; lean_object* v___x_4232_; lean_object* v___f_4233_; lean_object* v___x_4234_; lean_object* v___x_4235_; lean_object* v___x_4236_; lean_object* v___x_4237_; 
v_packages_4228_ = lean_ctor_get(v_ws_4193_, 4);
v___x_4229_ = lean_unsigned_to_nat(0u);
v___x_4230_ = lean_array_fget_borrowed(v_packages_4228_, v___x_4229_);
v_depConfigs_4231_ = lean_ctor_get(v___x_4230_, 12);
v___x_4232_ = lean_box(v_updateToolchain_4196_);
lean_inc_ref(v_ws_4193_);
lean_inc(v___x_4230_);
v___f_4233_ = lean_alloc_closure((void*)(l___private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore___lam__0___boxed), 7, 3);
lean_closure_set(v___f_4233_, 0, v___x_4230_);
lean_closure_set(v___f_4233_, 1, v___x_4232_);
lean_closure_set(v___f_4233_, 2, v_ws_4193_);
v___x_4234_ = lean_array_get_size(v_depConfigs_4231_);
lean_inc_ref(v_depConfigs_4231_);
v___x_4235_ = l_Array_reverse___redArg(v_depConfigs_4231_);
v___x_4236_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore___closed__0));
v___x_4237_ = l___private_Init_Data_Vector_Basic_0__Vector_mapM_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__6___redArg(v___x_4234_, v___f_4233_, v___x_4235_, v___x_4229_, v___x_4236_, v_snd_4202_, v_a_4197_);
if (lean_obj_tag(v___x_4237_) == 0)
{
lean_object* v_a_4238_; lean_object* v_fst_4239_; lean_object* v_snd_4240_; lean_object* v___x_4242_; uint8_t v_isShared_4243_; uint8_t v_isSharedCheck_4312_; 
v_a_4238_ = lean_ctor_get(v___x_4237_, 0);
lean_inc(v_a_4238_);
lean_dec_ref_known(v___x_4237_, 1);
v_fst_4239_ = lean_ctor_get(v_a_4238_, 0);
v_snd_4240_ = lean_ctor_get(v_a_4238_, 1);
v_isSharedCheck_4312_ = !lean_is_exclusive(v_a_4238_);
if (v_isSharedCheck_4312_ == 0)
{
v___x_4242_ = v_a_4238_;
v_isShared_4243_ = v_isSharedCheck_4312_;
goto v_resetjp_4241_;
}
else
{
lean_inc(v_snd_4240_);
lean_inc(v_fst_4239_);
lean_dec(v_a_4238_);
v___x_4242_ = lean_box(0);
v_isShared_4243_ = v_isSharedCheck_4312_;
goto v_resetjp_4241_;
}
v_resetjp_4241_:
{
lean_object* v___x_4244_; 
lean_inc_ref(v_ws_4193_);
v___x_4244_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__7(v_a_4197_, v_ws_4193_, v_fst_4239_);
if (lean_obj_tag(v___x_4244_) == 0)
{
lean_object* v___x_4245_; lean_object* v___x_4246_; 
lean_dec_ref_known(v___x_4244_, 1);
v___x_4245_ = lean_array_get_size(v_packages_4228_);
lean_inc_ref(v_leanOpts_4195_);
v___x_4246_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__9___redArg(v___x_4234_, v_fst_4239_, v___x_4235_, v_leanOpts_4195_, v___x_4229_, v_ws_4193_, v_snd_4240_, v_a_4197_);
lean_dec_ref(v___x_4235_);
lean_dec(v_fst_4239_);
if (lean_obj_tag(v___x_4246_) == 0)
{
lean_object* v_a_4247_; lean_object* v___x_4249_; uint8_t v_isShared_4250_; uint8_t v_isSharedCheck_4295_; 
v_a_4247_ = lean_ctor_get(v___x_4246_, 0);
v_isSharedCheck_4295_ = !lean_is_exclusive(v___x_4246_);
if (v_isSharedCheck_4295_ == 0)
{
v___x_4249_ = v___x_4246_;
v_isShared_4250_ = v_isSharedCheck_4295_;
goto v_resetjp_4248_;
}
else
{
lean_inc(v_a_4247_);
lean_dec(v___x_4246_);
v___x_4249_ = lean_box(0);
v_isShared_4250_ = v_isSharedCheck_4295_;
goto v_resetjp_4248_;
}
v_resetjp_4248_:
{
lean_object* v_fst_4251_; lean_object* v_snd_4252_; lean_object* v___x_4254_; uint8_t v_isShared_4255_; uint8_t v_isSharedCheck_4294_; 
v_fst_4251_ = lean_ctor_get(v_a_4247_, 0);
v_snd_4252_ = lean_ctor_get(v_a_4247_, 1);
v_isSharedCheck_4294_ = !lean_is_exclusive(v_a_4247_);
if (v_isSharedCheck_4294_ == 0)
{
v___x_4254_ = v_a_4247_;
v_isShared_4255_ = v_isSharedCheck_4294_;
goto v_resetjp_4253_;
}
else
{
lean_inc(v_snd_4252_);
lean_inc(v_fst_4251_);
lean_dec(v_a_4247_);
v___x_4254_ = lean_box(0);
v_isShared_4255_ = v_isSharedCheck_4294_;
goto v_resetjp_4253_;
}
v_resetjp_4253_:
{
lean_object* v_packages_4256_; lean_object* v___x_4257_; lean_object* v___x_4258_; lean_object* v___x_4259_; lean_object* v___x_4261_; 
v_packages_4256_ = lean_ctor_get(v_fst_4251_, 4);
v___x_4257_ = lean_array_get_size(v_packages_4256_);
v___x_4258_ = lean_array_fget(v_packages_4256_, v___x_4229_);
v___x_4259_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4259_, 0, v___x_4245_);
if (v_isShared_4243_ == 0)
{
lean_ctor_set(v___x_4242_, 1, v___x_4257_);
lean_ctor_set(v___x_4242_, 0, v___x_4259_);
v___x_4261_ = v___x_4242_;
goto v_reusejp_4260_;
}
else
{
lean_object* v_reuseFailAlloc_4293_; 
v_reuseFailAlloc_4293_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4293_, 0, v___x_4259_);
lean_ctor_set(v_reuseFailAlloc_4293_, 1, v___x_4257_);
v___x_4261_ = v_reuseFailAlloc_4293_;
goto v_reusejp_4260_;
}
v_reusejp_4260_:
{
lean_object* v___x_4262_; lean_object* v___x_4263_; uint8_t v___x_4264_; 
v___x_4262_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__8___redArg(v___x_4261_, v___x_4236_);
v___x_4263_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_setDepIdxs___redArg(v_fst_4251_, v___x_4258_, v___x_4262_);
v___x_4264_ = lean_nat_dec_eq(v___x_4245_, v___x_4257_);
if (v___x_4264_ == 0)
{
lean_object* v___x_4265_; lean_object* v___x_4266_; lean_object* v___x_4267_; 
lean_del_object(v___x_4254_);
lean_del_object(v___x_4249_);
v___x_4265_ = lean_unsigned_to_nat(1u);
v___x_4266_ = lean_nat_add(v___x_4245_, v___x_4265_);
v___x_4267_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4___redArg(v_leanOpts_4195_, v___x_4203_, v___x_4263_, v___x_4245_, v___x_4266_, v_snd_4252_, v_a_4197_);
if (lean_obj_tag(v___x_4267_) == 0)
{
lean_object* v_a_4268_; lean_object* v___x_4270_; uint8_t v_isShared_4271_; uint8_t v_isSharedCheck_4285_; 
v_a_4268_ = lean_ctor_get(v___x_4267_, 0);
v_isSharedCheck_4285_ = !lean_is_exclusive(v___x_4267_);
if (v_isSharedCheck_4285_ == 0)
{
v___x_4270_ = v___x_4267_;
v_isShared_4271_ = v_isSharedCheck_4285_;
goto v_resetjp_4269_;
}
else
{
lean_inc(v_a_4268_);
lean_dec(v___x_4267_);
v___x_4270_ = lean_box(0);
v_isShared_4271_ = v_isSharedCheck_4285_;
goto v_resetjp_4269_;
}
v_resetjp_4269_:
{
lean_object* v_fst_4272_; lean_object* v_snd_4273_; lean_object* v___x_4275_; uint8_t v_isShared_4276_; uint8_t v_isSharedCheck_4284_; 
v_fst_4272_ = lean_ctor_get(v_a_4268_, 0);
v_snd_4273_ = lean_ctor_get(v_a_4268_, 1);
v_isSharedCheck_4284_ = !lean_is_exclusive(v_a_4268_);
if (v_isSharedCheck_4284_ == 0)
{
v___x_4275_ = v_a_4268_;
v_isShared_4276_ = v_isSharedCheck_4284_;
goto v_resetjp_4274_;
}
else
{
lean_inc(v_snd_4273_);
lean_inc(v_fst_4272_);
lean_dec(v_a_4268_);
v___x_4275_ = lean_box(0);
v_isShared_4276_ = v_isSharedCheck_4284_;
goto v_resetjp_4274_;
}
v_resetjp_4274_:
{
lean_object* v___x_4277_; lean_object* v___x_4279_; 
v___x_4277_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_updateDepPkgs(v_fst_4272_);
if (v_isShared_4276_ == 0)
{
lean_ctor_set(v___x_4275_, 0, v___x_4277_);
v___x_4279_ = v___x_4275_;
goto v_reusejp_4278_;
}
else
{
lean_object* v_reuseFailAlloc_4283_; 
v_reuseFailAlloc_4283_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4283_, 0, v___x_4277_);
lean_ctor_set(v_reuseFailAlloc_4283_, 1, v_snd_4273_);
v___x_4279_ = v_reuseFailAlloc_4283_;
goto v_reusejp_4278_;
}
v_reusejp_4278_:
{
lean_object* v___x_4281_; 
if (v_isShared_4271_ == 0)
{
lean_ctor_set(v___x_4270_, 0, v___x_4279_);
v___x_4281_ = v___x_4270_;
goto v_reusejp_4280_;
}
else
{
lean_object* v_reuseFailAlloc_4282_; 
v_reuseFailAlloc_4282_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4282_, 0, v___x_4279_);
v___x_4281_ = v_reuseFailAlloc_4282_;
goto v_reusejp_4280_;
}
v_reusejp_4280_:
{
return v___x_4281_;
}
}
}
}
}
else
{
return v___x_4267_;
}
}
else
{
lean_object* v___x_4286_; lean_object* v___x_4288_; 
lean_dec_ref(v_leanOpts_4195_);
v___x_4286_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_updateDepPkgs(v___x_4263_);
if (v_isShared_4255_ == 0)
{
lean_ctor_set(v___x_4254_, 0, v___x_4286_);
v___x_4288_ = v___x_4254_;
goto v_reusejp_4287_;
}
else
{
lean_object* v_reuseFailAlloc_4292_; 
v_reuseFailAlloc_4292_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4292_, 0, v___x_4286_);
lean_ctor_set(v_reuseFailAlloc_4292_, 1, v_snd_4252_);
v___x_4288_ = v_reuseFailAlloc_4292_;
goto v_reusejp_4287_;
}
v_reusejp_4287_:
{
lean_object* v___x_4290_; 
if (v_isShared_4250_ == 0)
{
lean_ctor_set(v___x_4249_, 0, v___x_4288_);
v___x_4290_ = v___x_4249_;
goto v_reusejp_4289_;
}
else
{
lean_object* v_reuseFailAlloc_4291_; 
v_reuseFailAlloc_4291_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4291_, 0, v___x_4288_);
v___x_4290_ = v_reuseFailAlloc_4291_;
goto v_reusejp_4289_;
}
v_reusejp_4289_:
{
return v___x_4290_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_4296_; lean_object* v___x_4298_; uint8_t v_isShared_4299_; uint8_t v_isSharedCheck_4303_; 
lean_del_object(v___x_4242_);
lean_dec_ref(v_leanOpts_4195_);
v_a_4296_ = lean_ctor_get(v___x_4246_, 0);
v_isSharedCheck_4303_ = !lean_is_exclusive(v___x_4246_);
if (v_isSharedCheck_4303_ == 0)
{
v___x_4298_ = v___x_4246_;
v_isShared_4299_ = v_isSharedCheck_4303_;
goto v_resetjp_4297_;
}
else
{
lean_inc(v_a_4296_);
lean_dec(v___x_4246_);
v___x_4298_ = lean_box(0);
v_isShared_4299_ = v_isSharedCheck_4303_;
goto v_resetjp_4297_;
}
v_resetjp_4297_:
{
lean_object* v___x_4301_; 
if (v_isShared_4299_ == 0)
{
v___x_4301_ = v___x_4298_;
goto v_reusejp_4300_;
}
else
{
lean_object* v_reuseFailAlloc_4302_; 
v_reuseFailAlloc_4302_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4302_, 0, v_a_4296_);
v___x_4301_ = v_reuseFailAlloc_4302_;
goto v_reusejp_4300_;
}
v_reusejp_4300_:
{
return v___x_4301_;
}
}
}
}
else
{
lean_object* v_a_4304_; lean_object* v___x_4306_; uint8_t v_isShared_4307_; uint8_t v_isSharedCheck_4311_; 
lean_del_object(v___x_4242_);
lean_dec(v_snd_4240_);
lean_dec(v_fst_4239_);
lean_dec_ref(v___x_4235_);
lean_dec_ref(v_leanOpts_4195_);
lean_dec_ref(v_ws_4193_);
v_a_4304_ = lean_ctor_get(v___x_4244_, 0);
v_isSharedCheck_4311_ = !lean_is_exclusive(v___x_4244_);
if (v_isSharedCheck_4311_ == 0)
{
v___x_4306_ = v___x_4244_;
v_isShared_4307_ = v_isSharedCheck_4311_;
goto v_resetjp_4305_;
}
else
{
lean_inc(v_a_4304_);
lean_dec(v___x_4244_);
v___x_4306_ = lean_box(0);
v_isShared_4307_ = v_isSharedCheck_4311_;
goto v_resetjp_4305_;
}
v_resetjp_4305_:
{
lean_object* v___x_4309_; 
if (v_isShared_4307_ == 0)
{
v___x_4309_ = v___x_4306_;
goto v_reusejp_4308_;
}
else
{
lean_object* v_reuseFailAlloc_4310_; 
v_reuseFailAlloc_4310_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4310_, 0, v_a_4304_);
v___x_4309_ = v_reuseFailAlloc_4310_;
goto v_reusejp_4308_;
}
v_reusejp_4308_:
{
return v___x_4309_;
}
}
}
}
}
else
{
lean_object* v_a_4313_; lean_object* v___x_4315_; uint8_t v_isShared_4316_; uint8_t v_isSharedCheck_4320_; 
lean_dec_ref(v___x_4235_);
lean_dec_ref(v_leanOpts_4195_);
lean_dec_ref(v_ws_4193_);
v_a_4313_ = lean_ctor_get(v___x_4237_, 0);
v_isSharedCheck_4320_ = !lean_is_exclusive(v___x_4237_);
if (v_isSharedCheck_4320_ == 0)
{
v___x_4315_ = v___x_4237_;
v_isShared_4316_ = v_isSharedCheck_4320_;
goto v_resetjp_4314_;
}
else
{
lean_inc(v_a_4313_);
lean_dec(v___x_4237_);
v___x_4315_ = lean_box(0);
v_isShared_4316_ = v_isSharedCheck_4320_;
goto v_resetjp_4314_;
}
v_resetjp_4314_:
{
lean_object* v___x_4318_; 
if (v_isShared_4316_ == 0)
{
v___x_4318_ = v___x_4315_;
goto v_reusejp_4317_;
}
else
{
lean_object* v_reuseFailAlloc_4319_; 
v_reuseFailAlloc_4319_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4319_, 0, v_a_4313_);
v___x_4318_ = v_reuseFailAlloc_4319_;
goto v_reusejp_4317_;
}
v_reusejp_4317_:
{
return v___x_4318_;
}
}
}
}
}
else
{
lean_object* v_a_4321_; lean_object* v___x_4323_; uint8_t v_isShared_4324_; uint8_t v_isSharedCheck_4328_; 
lean_dec_ref(v_leanOpts_4195_);
lean_dec_ref(v_ws_4193_);
v_a_4321_ = lean_ctor_get(v___x_4200_, 0);
v_isSharedCheck_4328_ = !lean_is_exclusive(v___x_4200_);
if (v_isSharedCheck_4328_ == 0)
{
v___x_4323_ = v___x_4200_;
v_isShared_4324_ = v_isSharedCheck_4328_;
goto v_resetjp_4322_;
}
else
{
lean_inc(v_a_4321_);
lean_dec(v___x_4200_);
v___x_4323_ = lean_box(0);
v_isShared_4324_ = v_isSharedCheck_4328_;
goto v_resetjp_4322_;
}
v_resetjp_4322_:
{
lean_object* v___x_4326_; 
if (v_isShared_4324_ == 0)
{
v___x_4326_ = v___x_4323_;
goto v_reusejp_4325_;
}
else
{
lean_object* v_reuseFailAlloc_4327_; 
v_reuseFailAlloc_4327_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4327_, 0, v_a_4321_);
v___x_4326_ = v_reuseFailAlloc_4327_;
goto v_reusejp_4325_;
}
v_reusejp_4325_:
{
return v___x_4326_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore___boxed(lean_object* v_ws_4329_, lean_object* v_toUpdate_4330_, lean_object* v_leanOpts_4331_, lean_object* v_updateToolchain_4332_, lean_object* v_a_4333_, lean_object* v_a_4334_){
_start:
{
uint8_t v_updateToolchain_boxed_4335_; lean_object* v_res_4336_; 
v_updateToolchain_boxed_4335_ = lean_unbox(v_updateToolchain_4332_);
v_res_4336_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore(v_ws_4329_, v_toUpdate_4330_, v_leanOpts_4331_, v_updateToolchain_boxed_4335_, v_a_4333_);
lean_dec_ref(v_a_4333_);
return v_res_4336_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4(lean_object* v_leanOpts_4337_, uint8_t v_reconfigure_4338_, lean_object* v_ws_4339_, lean_object* v_i_4340_, lean_object* v_i__lt_4341_, lean_object* v_next_4342_, lean_object* v_lt__next_4343_, lean_object* v___y_4344_, lean_object* v___y_4345_){
_start:
{
lean_object* v___x_4347_; 
v___x_4347_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4___redArg(v_leanOpts_4337_, v_reconfigure_4338_, v_ws_4339_, v_i_4340_, v_next_4342_, v___y_4344_, v___y_4345_);
return v___x_4347_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4___boxed(lean_object* v_leanOpts_4348_, lean_object* v_reconfigure_4349_, lean_object* v_ws_4350_, lean_object* v_i_4351_, lean_object* v_i__lt_4352_, lean_object* v_next_4353_, lean_object* v_lt__next_4354_, lean_object* v___y_4355_, lean_object* v___y_4356_, lean_object* v___y_4357_){
_start:
{
uint8_t v_reconfigure_boxed_4358_; lean_object* v_res_4359_; 
v_reconfigure_boxed_4358_ = lean_unbox(v_reconfigure_4349_);
v_res_4359_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4(v_leanOpts_4348_, v_reconfigure_boxed_4358_, v_ws_4350_, v_i_4351_, v_i__lt_4352_, v_next_4353_, v_lt__next_4354_, v___y_4355_, v___y_4356_);
lean_dec_ref(v___y_4356_);
return v_res_4359_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Vector_Basic_0__Vector_mapM_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__6(lean_object* v_00_u03b1_4360_, lean_object* v_00_u03b2_4361_, lean_object* v_n_4362_, lean_object* v_f_4363_, lean_object* v_xs_4364_, lean_object* v_k_4365_, lean_object* v_h_4366_, lean_object* v_acc_4367_, lean_object* v___y_4368_, lean_object* v___y_4369_){
_start:
{
lean_object* v___x_4371_; 
v___x_4371_ = l___private_Init_Data_Vector_Basic_0__Vector_mapM_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__6___redArg(v_n_4362_, v_f_4363_, v_xs_4364_, v_k_4365_, v_acc_4367_, v___y_4368_, v___y_4369_);
return v___x_4371_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Vector_Basic_0__Vector_mapM_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__6___boxed(lean_object* v_00_u03b1_4372_, lean_object* v_00_u03b2_4373_, lean_object* v_n_4374_, lean_object* v_f_4375_, lean_object* v_xs_4376_, lean_object* v_k_4377_, lean_object* v_h_4378_, lean_object* v_acc_4379_, lean_object* v___y_4380_, lean_object* v___y_4381_, lean_object* v___y_4382_){
_start:
{
lean_object* v_res_4383_; 
v_res_4383_ = l___private_Init_Data_Vector_Basic_0__Vector_mapM_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__6(v_00_u03b1_4372_, v_00_u03b2_4373_, v_n_4374_, v_f_4375_, v_xs_4376_, v_k_4377_, v_h_4378_, v_acc_4379_, v___y_4380_, v___y_4381_);
lean_dec_ref(v___y_4381_);
lean_dec_ref(v_xs_4376_);
lean_dec(v_n_4374_);
return v_res_4383_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__8(lean_object* v_inst_4384_, lean_object* v_R_4385_, lean_object* v_a_4386_, lean_object* v_b_4387_){
_start:
{
lean_object* v___x_4388_; 
v___x_4388_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__8___redArg(v_a_4386_, v_b_4387_);
return v___x_4388_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__9(lean_object* v_upperBound_4389_, lean_object* v_fst_4390_, lean_object* v___x_4391_, lean_object* v_leanOpts_4392_, lean_object* v_inst_4393_, lean_object* v_R_4394_, lean_object* v_a_4395_, lean_object* v_b_4396_, lean_object* v_c_4397_, lean_object* v___y_4398_, lean_object* v___y_4399_){
_start:
{
lean_object* v___x_4401_; 
v___x_4401_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__9___redArg(v_upperBound_4389_, v_fst_4390_, v___x_4391_, v_leanOpts_4392_, v_a_4395_, v_b_4396_, v___y_4398_, v___y_4399_);
return v___x_4401_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__9___boxed(lean_object* v_upperBound_4402_, lean_object* v_fst_4403_, lean_object* v___x_4404_, lean_object* v_leanOpts_4405_, lean_object* v_inst_4406_, lean_object* v_R_4407_, lean_object* v_a_4408_, lean_object* v_b_4409_, lean_object* v_c_4410_, lean_object* v___y_4411_, lean_object* v___y_4412_, lean_object* v___y_4413_){
_start:
{
lean_object* v_res_4414_; 
v_res_4414_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__9(v_upperBound_4402_, v_fst_4403_, v___x_4404_, v_leanOpts_4405_, v_inst_4406_, v_R_4407_, v_a_4408_, v_b_4409_, v_c_4410_, v___y_4411_, v___y_4412_);
lean_dec_ref(v___y_4412_);
lean_dec_ref(v___x_4404_);
lean_dec_ref(v_fst_4403_);
lean_dec(v_upperBound_4402_);
return v_res_4414_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4_spec__4(lean_object* v_start_4415_, lean_object* v_pkg_4416_, lean_object* v_leanOpts_4417_, uint8_t v_reconfigure_4418_, lean_object* v_as_4419_, size_t v_i_4420_, size_t v_stop_4421_, lean_object* v_b_4422_, lean_object* v___y_4423_, lean_object* v___y_4424_){
_start:
{
lean_object* v___x_4426_; 
v___x_4426_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4_spec__4___redArg(v_pkg_4416_, v_leanOpts_4417_, v_reconfigure_4418_, v_as_4419_, v_i_4420_, v_stop_4421_, v_b_4422_, v___y_4423_, v___y_4424_);
return v___x_4426_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4_spec__4___boxed(lean_object* v_start_4427_, lean_object* v_pkg_4428_, lean_object* v_leanOpts_4429_, lean_object* v_reconfigure_4430_, lean_object* v_as_4431_, lean_object* v_i_4432_, lean_object* v_stop_4433_, lean_object* v_b_4434_, lean_object* v___y_4435_, lean_object* v___y_4436_, lean_object* v___y_4437_){
_start:
{
uint8_t v_reconfigure_boxed_4438_; size_t v_i_boxed_4439_; size_t v_stop_boxed_4440_; lean_object* v_res_4441_; 
v_reconfigure_boxed_4438_ = lean_unbox(v_reconfigure_4430_);
v_i_boxed_4439_ = lean_unbox_usize(v_i_4432_);
lean_dec(v_i_4432_);
v_stop_boxed_4440_ = lean_unbox_usize(v_stop_4433_);
lean_dec(v_stop_4433_);
v_res_4441_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4_spec__4(v_start_4427_, v_pkg_4428_, v_leanOpts_4429_, v_reconfigure_boxed_4438_, v_as_4431_, v_i_boxed_4439_, v_stop_boxed_4440_, v_b_4434_, v___y_4435_, v___y_4436_);
lean_dec_ref(v___y_4436_);
lean_dec_ref(v_as_4431_);
lean_dec(v_start_4427_);
return v_res_4441_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5_spec__6_spec__8(lean_object* v_00_u03b2_4442_, lean_object* v_msg_4443_){
_start:
{
lean_object* v___x_4444_; 
v___x_4444_ = l_panic___at___00Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5_spec__6_spec__8___redArg(v_msg_4443_);
return v___x_4444_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5_spec__6(lean_object* v_00_u03b2_4445_, lean_object* v_k_4446_, lean_object* v_v_4447_, lean_object* v_t_4448_){
_start:
{
lean_object* v___x_4449_; 
v___x_4449_ = l_Std_DTreeMap_Internal_Impl_insert_x21___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5_spec__6___redArg(v_k_4446_, v_v_4447_, v_t_4448_);
return v___x_4449_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5_spec__7(lean_object* v_init_4450_, lean_object* v_t_4451_){
_start:
{
lean_object* v___x_4452_; 
v___x_4452_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_NameMap_toJson___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__5_spec__7_spec__10(v_init_4450_, v_t_4451_);
return v___x_4452_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_writeManifest_spec__0(lean_object* v_entries_4453_, lean_object* v_as_4454_, size_t v_i_4455_, size_t v_stop_4456_, lean_object* v_b_4457_){
_start:
{
lean_object* v___y_4459_; uint8_t v___x_4463_; 
v___x_4463_ = lean_usize_dec_eq(v_i_4455_, v_stop_4456_);
if (v___x_4463_ == 0)
{
lean_object* v___x_4464_; lean_object* v_baseName_4465_; lean_object* v_relConfigFile_4466_; lean_object* v_relManifestFile_4467_; lean_object* v___x_4468_; 
v___x_4464_ = lean_array_uget_borrowed(v_as_4454_, v_i_4455_);
v_baseName_4465_ = lean_ctor_get(v___x_4464_, 1);
v_relConfigFile_4466_ = lean_ctor_get(v___x_4464_, 8);
v_relManifestFile_4467_ = lean_ctor_get(v___x_4464_, 9);
v___x_4468_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_entries_4453_, v_baseName_4465_);
if (lean_obj_tag(v___x_4468_) == 0)
{
v___y_4459_ = v_b_4457_;
goto v___jp_4458_;
}
else
{
lean_object* v_val_4469_; lean_object* v___x_4471_; uint8_t v_isShared_4472_; uint8_t v_isSharedCheck_4490_; 
v_val_4469_ = lean_ctor_get(v___x_4468_, 0);
v_isSharedCheck_4490_ = !lean_is_exclusive(v___x_4468_);
if (v_isSharedCheck_4490_ == 0)
{
v___x_4471_ = v___x_4468_;
v_isShared_4472_ = v_isSharedCheck_4490_;
goto v_resetjp_4470_;
}
else
{
lean_inc(v_val_4469_);
lean_dec(v___x_4468_);
v___x_4471_ = lean_box(0);
v_isShared_4472_ = v_isSharedCheck_4490_;
goto v_resetjp_4470_;
}
v_resetjp_4470_:
{
lean_object* v_name_4473_; lean_object* v_scope_4474_; uint8_t v_inherited_4475_; lean_object* v_src_4476_; lean_object* v___x_4478_; uint8_t v_isShared_4479_; uint8_t v_isSharedCheck_4487_; 
v_name_4473_ = lean_ctor_get(v_val_4469_, 0);
v_scope_4474_ = lean_ctor_get(v_val_4469_, 1);
v_inherited_4475_ = lean_ctor_get_uint8(v_val_4469_, sizeof(void*)*5);
v_src_4476_ = lean_ctor_get(v_val_4469_, 4);
v_isSharedCheck_4487_ = !lean_is_exclusive(v_val_4469_);
if (v_isSharedCheck_4487_ == 0)
{
lean_object* v_unused_4488_; lean_object* v_unused_4489_; 
v_unused_4488_ = lean_ctor_get(v_val_4469_, 3);
lean_dec(v_unused_4488_);
v_unused_4489_ = lean_ctor_get(v_val_4469_, 2);
lean_dec(v_unused_4489_);
v___x_4478_ = v_val_4469_;
v_isShared_4479_ = v_isSharedCheck_4487_;
goto v_resetjp_4477_;
}
else
{
lean_inc(v_src_4476_);
lean_inc(v_scope_4474_);
lean_inc(v_name_4473_);
lean_dec(v_val_4469_);
v___x_4478_ = lean_box(0);
v_isShared_4479_ = v_isSharedCheck_4487_;
goto v_resetjp_4477_;
}
v_resetjp_4477_:
{
lean_object* v___x_4481_; 
lean_inc_ref(v_relManifestFile_4467_);
if (v_isShared_4472_ == 0)
{
lean_ctor_set(v___x_4471_, 0, v_relManifestFile_4467_);
v___x_4481_ = v___x_4471_;
goto v_reusejp_4480_;
}
else
{
lean_object* v_reuseFailAlloc_4486_; 
v_reuseFailAlloc_4486_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4486_, 0, v_relManifestFile_4467_);
v___x_4481_ = v_reuseFailAlloc_4486_;
goto v_reusejp_4480_;
}
v_reusejp_4480_:
{
lean_object* v___x_4483_; 
lean_inc_ref(v_relConfigFile_4466_);
if (v_isShared_4479_ == 0)
{
lean_ctor_set(v___x_4478_, 3, v___x_4481_);
lean_ctor_set(v___x_4478_, 2, v_relConfigFile_4466_);
v___x_4483_ = v___x_4478_;
goto v_reusejp_4482_;
}
else
{
lean_object* v_reuseFailAlloc_4485_; 
v_reuseFailAlloc_4485_ = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(v_reuseFailAlloc_4485_, 0, v_name_4473_);
lean_ctor_set(v_reuseFailAlloc_4485_, 1, v_scope_4474_);
lean_ctor_set(v_reuseFailAlloc_4485_, 2, v_relConfigFile_4466_);
lean_ctor_set(v_reuseFailAlloc_4485_, 3, v___x_4481_);
lean_ctor_set(v_reuseFailAlloc_4485_, 4, v_src_4476_);
lean_ctor_set_uint8(v_reuseFailAlloc_4485_, sizeof(void*)*5, v_inherited_4475_);
v___x_4483_ = v_reuseFailAlloc_4485_;
goto v_reusejp_4482_;
}
v_reusejp_4482_:
{
lean_object* v___x_4484_; 
v___x_4484_ = lean_array_push(v_b_4457_, v___x_4483_);
v___y_4459_ = v___x_4484_;
goto v___jp_4458_;
}
}
}
}
}
}
else
{
return v_b_4457_;
}
v___jp_4458_:
{
size_t v___x_4460_; size_t v___x_4461_; 
v___x_4460_ = ((size_t)1ULL);
v___x_4461_ = lean_usize_add(v_i_4455_, v___x_4460_);
v_i_4455_ = v___x_4461_;
v_b_4457_ = v___y_4459_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_writeManifest_spec__0___boxed(lean_object* v_entries_4491_, lean_object* v_as_4492_, lean_object* v_i_4493_, lean_object* v_stop_4494_, lean_object* v_b_4495_){
_start:
{
size_t v_i_boxed_4496_; size_t v_stop_boxed_4497_; lean_object* v_res_4498_; 
v_i_boxed_4496_ = lean_unbox_usize(v_i_4493_);
lean_dec(v_i_4493_);
v_stop_boxed_4497_ = lean_unbox_usize(v_stop_4494_);
lean_dec(v_stop_4494_);
v_res_4498_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_writeManifest_spec__0(v_entries_4491_, v_as_4492_, v_i_boxed_4496_, v_stop_boxed_4497_, v_b_4495_);
lean_dec_ref(v_as_4492_);
lean_dec(v_entries_4491_);
return v_res_4498_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_writeManifest(lean_object* v_ws_4499_, lean_object* v_entries_4500_){
_start:
{
lean_object* v_packages_4502_; lean_object* v___y_4504_; lean_object* v___x_4519_; lean_object* v___x_4520_; lean_object* v___x_4521_; uint8_t v___x_4522_; 
v_packages_4502_ = lean_ctor_get(v_ws_4499_, 4);
v___x_4519_ = lean_unsigned_to_nat(0u);
v___x_4520_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_mkDepLoadConfig___closed__0));
v___x_4521_ = lean_array_get_size(v_packages_4502_);
v___x_4522_ = lean_nat_dec_lt(v___x_4519_, v___x_4521_);
if (v___x_4522_ == 0)
{
v___y_4504_ = v___x_4520_;
goto v___jp_4503_;
}
else
{
uint8_t v___x_4523_; 
v___x_4523_ = lean_nat_dec_le(v___x_4521_, v___x_4521_);
if (v___x_4523_ == 0)
{
if (v___x_4522_ == 0)
{
v___y_4504_ = v___x_4520_;
goto v___jp_4503_;
}
else
{
size_t v___x_4524_; size_t v___x_4525_; lean_object* v___x_4526_; 
v___x_4524_ = ((size_t)0ULL);
v___x_4525_ = lean_usize_of_nat(v___x_4521_);
v___x_4526_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_writeManifest_spec__0(v_entries_4500_, v_packages_4502_, v___x_4524_, v___x_4525_, v___x_4520_);
v___y_4504_ = v___x_4526_;
goto v___jp_4503_;
}
}
else
{
size_t v___x_4527_; size_t v___x_4528_; lean_object* v___x_4529_; 
v___x_4527_ = ((size_t)0ULL);
v___x_4528_ = lean_usize_of_nat(v___x_4521_);
v___x_4529_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_writeManifest_spec__0(v_entries_4500_, v_packages_4502_, v___x_4527_, v___x_4528_, v___x_4520_);
v___y_4504_ = v___x_4529_;
goto v___jp_4503_;
}
}
v___jp_4503_:
{
lean_object* v___x_4505_; lean_object* v___x_4506_; lean_object* v_config_4507_; lean_object* v_baseName_4508_; lean_object* v_dir_4509_; lean_object* v_relManifestFile_4510_; lean_object* v_toWorkspaceConfig_4511_; uint8_t v_fixedToolchain_4512_; lean_object* v___x_4513_; lean_object* v___x_4514_; lean_object* v___x_4515_; lean_object* v_manifest_4516_; lean_object* v___x_4517_; lean_object* v___x_4518_; 
v___x_4505_ = lean_unsigned_to_nat(0u);
v___x_4506_ = lean_array_fget_borrowed(v_packages_4502_, v___x_4505_);
v_config_4507_ = lean_ctor_get(v___x_4506_, 6);
v_baseName_4508_ = lean_ctor_get(v___x_4506_, 1);
v_dir_4509_ = lean_ctor_get(v___x_4506_, 4);
v_relManifestFile_4510_ = lean_ctor_get(v___x_4506_, 9);
v_toWorkspaceConfig_4511_ = lean_ctor_get(v_config_4507_, 0);
v_fixedToolchain_4512_ = lean_ctor_get_uint8(v_config_4507_, sizeof(void*)*28 + 6);
v___x_4513_ = l_Lake_defaultLakeDir;
lean_inc_ref(v_toWorkspaceConfig_4511_);
v___x_4514_ = l_System_FilePath_normalize(v_toWorkspaceConfig_4511_);
v___x_4515_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4515_, 0, v___x_4514_);
lean_inc(v_baseName_4508_);
v_manifest_4516_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_manifest_4516_, 0, v_baseName_4508_);
lean_ctor_set(v_manifest_4516_, 1, v___x_4513_);
lean_ctor_set(v_manifest_4516_, 2, v___x_4515_);
lean_ctor_set(v_manifest_4516_, 3, v___y_4504_);
lean_ctor_set_uint8(v_manifest_4516_, sizeof(void*)*4, v_fixedToolchain_4512_);
lean_inc_ref(v_relManifestFile_4510_);
lean_inc_ref(v_dir_4509_);
v___x_4517_ = l_Lake_joinRelative(v_dir_4509_, v_relManifestFile_4510_);
v___x_4518_ = l_Lake_Manifest_save(v_manifest_4516_, v___x_4517_);
lean_dec_ref(v___x_4517_);
return v___x_4518_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_writeManifest___boxed(lean_object* v_ws_4530_, lean_object* v_entries_4531_, lean_object* v_a_4532_){
_start:
{
lean_object* v_res_4533_; 
v_res_4533_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_writeManifest(v_ws_4530_, v_entries_4531_);
lean_dec(v_entries_4531_);
lean_dec_ref(v_ws_4530_);
return v_res_4533_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Package_runPostUpdateHooks_spec__0(lean_object* v_pkg_4534_, lean_object* v_as_4535_, size_t v_i_4536_, size_t v_stop_4537_, lean_object* v_b_4538_, lean_object* v___y_4539_, lean_object* v___y_4540_){
_start:
{
lean_object* v_a_4543_; lean_object* v___y_4548_; uint8_t v___x_4550_; 
v___x_4550_ = lean_usize_dec_eq(v_i_4536_, v_stop_4537_);
if (v___x_4550_ == 0)
{
lean_object* v___x_4551_; lean_object* v___x_4552_; lean_object* v___x_4553_; lean_object* v___x_4554_; lean_object* v___x_4555_; lean_object* v___x_6597__overap_4556_; lean_object* v___x_4557_; 
v___x_4551_ = lean_array_uget_borrowed(v_as_4535_, v_i_4536_);
v___x_4552_ = l_unsafeCast___redArg(v___y_4539_);
v___x_4553_ = l_unsafeCast___redArg(v___x_4552_);
lean_dec(v___x_4552_);
v___x_4554_ = lean_unsigned_to_nat(0u);
v___x_4555_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__4));
v___x_6597__overap_4556_ = l_unsafeCast___redArg(v___x_4551_);
lean_inc_ref(v_pkg_4534_);
v___x_4557_ = lean_apply_4(v___x_6597__overap_4556_, v_pkg_4534_, v___x_4553_, v___x_4555_, lean_box(0));
if (lean_obj_tag(v___x_4557_) == 0)
{
lean_object* v_a_4558_; lean_object* v_a_4559_; lean_object* v___x_4560_; uint8_t v___x_4561_; 
v_a_4558_ = lean_ctor_get(v___x_4557_, 0);
lean_inc(v_a_4558_);
v_a_4559_ = lean_ctor_get(v___x_4557_, 1);
lean_inc(v_a_4559_);
lean_dec_ref_known(v___x_4557_, 2);
v___x_4560_ = lean_array_get_size(v_a_4559_);
v___x_4561_ = lean_nat_dec_lt(v___x_4554_, v___x_4560_);
if (v___x_4561_ == 0)
{
lean_dec(v_a_4559_);
v_a_4543_ = v_a_4558_;
goto v___jp_4542_;
}
else
{
lean_object* v___x_4562_; size_t v___x_4563_; size_t v___x_4564_; lean_object* v___x_4565_; 
v___x_4562_ = lean_box(0);
v___x_4563_ = ((size_t)0ULL);
v___x_4564_ = lean_usize_of_nat(v___x_4560_);
v___x_4565_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__3(v_a_4559_, v___x_4563_, v___x_4564_, v___x_4562_, v___y_4540_);
lean_dec(v_a_4559_);
if (lean_obj_tag(v___x_4565_) == 0)
{
lean_dec_ref_known(v___x_4565_, 1);
v_a_4543_ = v_a_4558_;
goto v___jp_4542_;
}
else
{
lean_dec(v_a_4558_);
v___y_4548_ = v___x_4565_;
goto v___jp_4547_;
}
}
}
else
{
lean_object* v_a_4566_; lean_object* v___x_4567_; uint8_t v___x_4568_; 
v_a_4566_ = lean_ctor_get(v___x_4557_, 1);
lean_inc(v_a_4566_);
lean_dec_ref_known(v___x_4557_, 2);
v___x_4567_ = lean_array_get_size(v_a_4566_);
v___x_4568_ = lean_nat_dec_lt(v___x_4554_, v___x_4567_);
if (v___x_4568_ == 0)
{
lean_object* v___x_4569_; lean_object* v___x_4570_; 
lean_dec(v_a_4566_);
lean_dec_ref(v_pkg_4534_);
v___x_4569_ = lean_box(0);
v___x_4570_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4570_, 0, v___x_4569_);
return v___x_4570_;
}
else
{
lean_object* v___x_4571_; size_t v___x_4572_; size_t v___x_4573_; lean_object* v___x_4574_; 
v___x_4571_ = lean_box(0);
v___x_4572_ = ((size_t)0ULL);
v___x_4573_ = lean_usize_of_nat(v___x_4567_);
v___x_4574_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__3(v_a_4566_, v___x_4572_, v___x_4573_, v___x_4571_, v___y_4540_);
lean_dec(v_a_4566_);
if (lean_obj_tag(v___x_4574_) == 0)
{
lean_object* v___x_4576_; uint8_t v_isShared_4577_; uint8_t v_isSharedCheck_4581_; 
lean_dec_ref(v_pkg_4534_);
v_isSharedCheck_4581_ = !lean_is_exclusive(v___x_4574_);
if (v_isSharedCheck_4581_ == 0)
{
lean_object* v_unused_4582_; 
v_unused_4582_ = lean_ctor_get(v___x_4574_, 0);
lean_dec(v_unused_4582_);
v___x_4576_ = v___x_4574_;
v_isShared_4577_ = v_isSharedCheck_4581_;
goto v_resetjp_4575_;
}
else
{
lean_dec(v___x_4574_);
v___x_4576_ = lean_box(0);
v_isShared_4577_ = v_isSharedCheck_4581_;
goto v_resetjp_4575_;
}
v_resetjp_4575_:
{
lean_object* v___x_4579_; 
if (v_isShared_4577_ == 0)
{
lean_ctor_set_tag(v___x_4576_, 1);
lean_ctor_set(v___x_4576_, 0, v___x_4571_);
v___x_4579_ = v___x_4576_;
goto v_reusejp_4578_;
}
else
{
lean_object* v_reuseFailAlloc_4580_; 
v_reuseFailAlloc_4580_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4580_, 0, v___x_4571_);
v___x_4579_ = v_reuseFailAlloc_4580_;
goto v_reusejp_4578_;
}
v_reusejp_4578_:
{
return v___x_4579_;
}
}
}
else
{
v___y_4548_ = v___x_4574_;
goto v___jp_4547_;
}
}
}
}
else
{
lean_object* v___x_4583_; 
lean_dec_ref(v_pkg_4534_);
v___x_4583_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4583_, 0, v_b_4538_);
return v___x_4583_;
}
v___jp_4542_:
{
size_t v___x_4544_; size_t v___x_4545_; 
v___x_4544_ = ((size_t)1ULL);
v___x_4545_ = lean_usize_add(v_i_4536_, v___x_4544_);
v_i_4536_ = v___x_4545_;
v_b_4538_ = v_a_4543_;
goto _start;
}
v___jp_4547_:
{
if (lean_obj_tag(v___y_4548_) == 0)
{
lean_object* v_a_4549_; 
v_a_4549_ = lean_ctor_get(v___y_4548_, 0);
lean_inc(v_a_4549_);
lean_dec_ref_known(v___y_4548_, 1);
v_a_4543_ = v_a_4549_;
goto v___jp_4542_;
}
else
{
lean_dec_ref(v_pkg_4534_);
return v___y_4548_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Package_runPostUpdateHooks_spec__0___boxed(lean_object* v_pkg_4584_, lean_object* v_as_4585_, lean_object* v_i_4586_, lean_object* v_stop_4587_, lean_object* v_b_4588_, lean_object* v___y_4589_, lean_object* v___y_4590_, lean_object* v___y_4591_){
_start:
{
size_t v_i_boxed_4592_; size_t v_stop_boxed_4593_; lean_object* v_res_4594_; 
v_i_boxed_4592_ = lean_unbox_usize(v_i_4586_);
lean_dec(v_i_4586_);
v_stop_boxed_4593_ = lean_unbox_usize(v_stop_4587_);
lean_dec(v_stop_4587_);
v_res_4594_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Package_runPostUpdateHooks_spec__0(v_pkg_4584_, v_as_4585_, v_i_boxed_4592_, v_stop_boxed_4593_, v_b_4588_, v___y_4589_, v___y_4590_);
lean_dec_ref(v___y_4590_);
lean_dec(v___y_4589_);
lean_dec_ref(v_as_4585_);
return v_res_4594_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Package_runPostUpdateHooks(lean_object* v_pkg_4596_, lean_object* v_a_4597_, lean_object* v_a_4598_){
_start:
{
lean_object* v_baseName_4600_; lean_object* v_postUpdateHooks_4601_; lean_object* v___x_4602_; lean_object* v___x_4603_; uint8_t v___x_4604_; 
v_baseName_4600_ = lean_ctor_get(v_pkg_4596_, 1);
v_postUpdateHooks_4601_ = lean_ctor_get(v_pkg_4596_, 20);
lean_inc_ref(v_postUpdateHooks_4601_);
v___x_4602_ = lean_array_get_size(v_postUpdateHooks_4601_);
v___x_4603_ = lean_unsigned_to_nat(0u);
v___x_4604_ = lean_nat_dec_eq(v___x_4602_, v___x_4603_);
if (v___x_4604_ == 0)
{
lean_object* v___x_4605_; lean_object* v___x_4606_; lean_object* v___x_4607_; uint8_t v___x_4608_; lean_object* v___x_4609_; lean_object* v___x_4610_; lean_object* v___x_4611_; uint8_t v___x_4612_; 
lean_inc(v_baseName_4600_);
v___x_4605_ = l_Lean_Name_toString(v_baseName_4600_, v___x_4604_);
v___x_4606_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_Package_runPostUpdateHooks___closed__0));
v___x_4607_ = lean_string_append(v___x_4605_, v___x_4606_);
v___x_4608_ = 1;
v___x_4609_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4609_, 0, v___x_4607_);
lean_ctor_set_uint8(v___x_4609_, sizeof(void*)*1, v___x_4608_);
lean_inc_ref(v_a_4598_);
v___x_4610_ = lean_apply_2(v_a_4598_, v___x_4609_, lean_box(0));
v___x_4611_ = lean_box(0);
v___x_4612_ = lean_nat_dec_lt(v___x_4603_, v___x_4602_);
if (v___x_4612_ == 0)
{
lean_object* v___x_4613_; 
lean_dec_ref(v_postUpdateHooks_4601_);
lean_dec_ref(v_pkg_4596_);
v___x_4613_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4613_, 0, v___x_4611_);
return v___x_4613_;
}
else
{
uint8_t v___x_4614_; 
v___x_4614_ = lean_nat_dec_le(v___x_4602_, v___x_4602_);
if (v___x_4614_ == 0)
{
if (v___x_4612_ == 0)
{
lean_object* v___x_4615_; 
lean_dec_ref(v_postUpdateHooks_4601_);
lean_dec_ref(v_pkg_4596_);
v___x_4615_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4615_, 0, v___x_4611_);
return v___x_4615_;
}
else
{
size_t v___x_4616_; size_t v___x_4617_; lean_object* v___x_4618_; 
v___x_4616_ = ((size_t)0ULL);
v___x_4617_ = lean_usize_of_nat(v___x_4602_);
v___x_4618_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Package_runPostUpdateHooks_spec__0(v_pkg_4596_, v_postUpdateHooks_4601_, v___x_4616_, v___x_4617_, v___x_4611_, v_a_4597_, v_a_4598_);
lean_dec_ref(v_postUpdateHooks_4601_);
return v___x_4618_;
}
}
else
{
size_t v___x_4619_; size_t v___x_4620_; lean_object* v___x_4621_; 
v___x_4619_ = ((size_t)0ULL);
v___x_4620_ = lean_usize_of_nat(v___x_4602_);
v___x_4621_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Package_runPostUpdateHooks_spec__0(v_pkg_4596_, v_postUpdateHooks_4601_, v___x_4619_, v___x_4620_, v___x_4611_, v_a_4597_, v_a_4598_);
lean_dec_ref(v_postUpdateHooks_4601_);
return v___x_4621_;
}
}
}
else
{
lean_object* v___x_4622_; lean_object* v___x_4623_; 
lean_dec_ref(v_postUpdateHooks_4601_);
lean_dec_ref(v_pkg_4596_);
v___x_4622_ = lean_box(0);
v___x_4623_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4623_, 0, v___x_4622_);
return v___x_4623_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Package_runPostUpdateHooks___boxed(lean_object* v_pkg_4624_, lean_object* v_a_4625_, lean_object* v_a_4626_, lean_object* v_a_4627_){
_start:
{
lean_object* v_res_4628_; 
v_res_4628_ = l___private_Lake_Load_Resolve_0__Lake_Package_runPostUpdateHooks(v_pkg_4624_, v_a_4625_, v_a_4626_);
lean_dec_ref(v_a_4626_);
lean_dec(v_a_4625_);
return v_res_4628_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore___at___00Lake_Workspace_updateAndMaterialize_spec__0(lean_object* v_a_4629_, lean_object* v_ws_4630_, lean_object* v_toUpdate_4631_, lean_object* v_leanOpts_4632_, uint8_t v_updateToolchain_4633_){
_start:
{
lean_object* v___x_4635_; lean_object* v___x_4636_; 
v___x_4635_ = lean_box(1);
v___x_4636_ = l___private_Lake_Load_Resolve_0__Lake_reuseManifest___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__3(v_a_4629_, v_ws_4630_, v_toUpdate_4631_, v___x_4635_);
if (lean_obj_tag(v___x_4636_) == 0)
{
lean_object* v_a_4637_; lean_object* v_snd_4638_; uint8_t v___x_4639_; 
v_a_4637_ = lean_ctor_get(v___x_4636_, 0);
lean_inc(v_a_4637_);
lean_dec_ref_known(v___x_4636_, 1);
v_snd_4638_ = lean_ctor_get(v_a_4637_, 1);
lean_inc(v_snd_4638_);
lean_dec(v_a_4637_);
v___x_4639_ = 1;
if (v_updateToolchain_4633_ == 0)
{
lean_object* v_packages_4640_; lean_object* v___x_4641_; lean_object* v___x_4642_; lean_object* v_wsIdx_4643_; lean_object* v___x_4644_; lean_object* v___x_4645_; 
v_packages_4640_ = lean_ctor_get(v_ws_4630_, 4);
v___x_4641_ = lean_unsigned_to_nat(0u);
v___x_4642_ = lean_array_fget_borrowed(v_packages_4640_, v___x_4641_);
v_wsIdx_4643_ = lean_ctor_get(v___x_4642_, 0);
lean_inc(v_wsIdx_4643_);
v___x_4644_ = lean_array_get_size(v_packages_4640_);
v___x_4645_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4___redArg(v_leanOpts_4632_, v___x_4639_, v_ws_4630_, v_wsIdx_4643_, v___x_4644_, v_snd_4638_, v_a_4629_);
if (lean_obj_tag(v___x_4645_) == 0)
{
lean_object* v_a_4646_; lean_object* v___x_4648_; uint8_t v_isShared_4649_; uint8_t v_isSharedCheck_4663_; 
v_a_4646_ = lean_ctor_get(v___x_4645_, 0);
v_isSharedCheck_4663_ = !lean_is_exclusive(v___x_4645_);
if (v_isSharedCheck_4663_ == 0)
{
v___x_4648_ = v___x_4645_;
v_isShared_4649_ = v_isSharedCheck_4663_;
goto v_resetjp_4647_;
}
else
{
lean_inc(v_a_4646_);
lean_dec(v___x_4645_);
v___x_4648_ = lean_box(0);
v_isShared_4649_ = v_isSharedCheck_4663_;
goto v_resetjp_4647_;
}
v_resetjp_4647_:
{
lean_object* v_fst_4650_; lean_object* v_snd_4651_; lean_object* v___x_4653_; uint8_t v_isShared_4654_; uint8_t v_isSharedCheck_4662_; 
v_fst_4650_ = lean_ctor_get(v_a_4646_, 0);
v_snd_4651_ = lean_ctor_get(v_a_4646_, 1);
v_isSharedCheck_4662_ = !lean_is_exclusive(v_a_4646_);
if (v_isSharedCheck_4662_ == 0)
{
v___x_4653_ = v_a_4646_;
v_isShared_4654_ = v_isSharedCheck_4662_;
goto v_resetjp_4652_;
}
else
{
lean_inc(v_snd_4651_);
lean_inc(v_fst_4650_);
lean_dec(v_a_4646_);
v___x_4653_ = lean_box(0);
v_isShared_4654_ = v_isSharedCheck_4662_;
goto v_resetjp_4652_;
}
v_resetjp_4652_:
{
lean_object* v___x_4655_; lean_object* v___x_4657_; 
v___x_4655_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_updateDepPkgs(v_fst_4650_);
if (v_isShared_4654_ == 0)
{
lean_ctor_set(v___x_4653_, 0, v___x_4655_);
v___x_4657_ = v___x_4653_;
goto v_reusejp_4656_;
}
else
{
lean_object* v_reuseFailAlloc_4661_; 
v_reuseFailAlloc_4661_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4661_, 0, v___x_4655_);
lean_ctor_set(v_reuseFailAlloc_4661_, 1, v_snd_4651_);
v___x_4657_ = v_reuseFailAlloc_4661_;
goto v_reusejp_4656_;
}
v_reusejp_4656_:
{
lean_object* v___x_4659_; 
if (v_isShared_4649_ == 0)
{
lean_ctor_set(v___x_4648_, 0, v___x_4657_);
v___x_4659_ = v___x_4648_;
goto v_reusejp_4658_;
}
else
{
lean_object* v_reuseFailAlloc_4660_; 
v_reuseFailAlloc_4660_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4660_, 0, v___x_4657_);
v___x_4659_ = v_reuseFailAlloc_4660_;
goto v_reusejp_4658_;
}
v_reusejp_4658_:
{
return v___x_4659_;
}
}
}
}
}
else
{
return v___x_4645_;
}
}
else
{
lean_object* v_packages_4664_; lean_object* v___x_4665_; lean_object* v___x_4666_; lean_object* v_depConfigs_4667_; lean_object* v___x_4668_; lean_object* v___f_4669_; lean_object* v___x_4670_; lean_object* v___x_4671_; lean_object* v___x_4672_; lean_object* v___x_4673_; 
v_packages_4664_ = lean_ctor_get(v_ws_4630_, 4);
v___x_4665_ = lean_unsigned_to_nat(0u);
v___x_4666_ = lean_array_fget_borrowed(v_packages_4664_, v___x_4665_);
v_depConfigs_4667_ = lean_ctor_get(v___x_4666_, 12);
v___x_4668_ = lean_box(v_updateToolchain_4633_);
lean_inc_ref(v_ws_4630_);
lean_inc(v___x_4666_);
v___f_4669_ = lean_alloc_closure((void*)(l___private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore___lam__0___boxed), 7, 3);
lean_closure_set(v___f_4669_, 0, v___x_4666_);
lean_closure_set(v___f_4669_, 1, v___x_4668_);
lean_closure_set(v___f_4669_, 2, v_ws_4630_);
v___x_4670_ = lean_array_get_size(v_depConfigs_4667_);
lean_inc_ref(v_depConfigs_4667_);
v___x_4671_ = l_Array_reverse___redArg(v_depConfigs_4667_);
v___x_4672_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore___closed__0));
v___x_4673_ = l___private_Init_Data_Vector_Basic_0__Vector_mapM_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__6___redArg(v___x_4670_, v___f_4669_, v___x_4671_, v___x_4665_, v___x_4672_, v_snd_4638_, v_a_4629_);
if (lean_obj_tag(v___x_4673_) == 0)
{
lean_object* v_a_4674_; lean_object* v_fst_4675_; lean_object* v_snd_4676_; lean_object* v___x_4678_; uint8_t v_isShared_4679_; uint8_t v_isSharedCheck_4748_; 
v_a_4674_ = lean_ctor_get(v___x_4673_, 0);
lean_inc(v_a_4674_);
lean_dec_ref_known(v___x_4673_, 1);
v_fst_4675_ = lean_ctor_get(v_a_4674_, 0);
v_snd_4676_ = lean_ctor_get(v_a_4674_, 1);
v_isSharedCheck_4748_ = !lean_is_exclusive(v_a_4674_);
if (v_isSharedCheck_4748_ == 0)
{
v___x_4678_ = v_a_4674_;
v_isShared_4679_ = v_isSharedCheck_4748_;
goto v_resetjp_4677_;
}
else
{
lean_inc(v_snd_4676_);
lean_inc(v_fst_4675_);
lean_dec(v_a_4674_);
v___x_4678_ = lean_box(0);
v_isShared_4679_ = v_isSharedCheck_4748_;
goto v_resetjp_4677_;
}
v_resetjp_4677_:
{
lean_object* v___x_4680_; 
lean_inc_ref(v_ws_4630_);
v___x_4680_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_updateToolchain___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__7(v_a_4629_, v_ws_4630_, v_fst_4675_);
if (lean_obj_tag(v___x_4680_) == 0)
{
lean_object* v___x_4681_; lean_object* v___x_4682_; 
lean_dec_ref_known(v___x_4680_, 1);
v___x_4681_ = lean_array_get_size(v_packages_4664_);
lean_inc_ref(v_leanOpts_4632_);
v___x_4682_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__9___redArg(v___x_4670_, v_fst_4675_, v___x_4671_, v_leanOpts_4632_, v___x_4665_, v_ws_4630_, v_snd_4676_, v_a_4629_);
lean_dec_ref(v___x_4671_);
lean_dec(v_fst_4675_);
if (lean_obj_tag(v___x_4682_) == 0)
{
lean_object* v_a_4683_; lean_object* v___x_4685_; uint8_t v_isShared_4686_; uint8_t v_isSharedCheck_4731_; 
v_a_4683_ = lean_ctor_get(v___x_4682_, 0);
v_isSharedCheck_4731_ = !lean_is_exclusive(v___x_4682_);
if (v_isSharedCheck_4731_ == 0)
{
v___x_4685_ = v___x_4682_;
v_isShared_4686_ = v_isSharedCheck_4731_;
goto v_resetjp_4684_;
}
else
{
lean_inc(v_a_4683_);
lean_dec(v___x_4682_);
v___x_4685_ = lean_box(0);
v_isShared_4686_ = v_isSharedCheck_4731_;
goto v_resetjp_4684_;
}
v_resetjp_4684_:
{
lean_object* v_fst_4687_; lean_object* v_snd_4688_; lean_object* v___x_4690_; uint8_t v_isShared_4691_; uint8_t v_isSharedCheck_4730_; 
v_fst_4687_ = lean_ctor_get(v_a_4683_, 0);
v_snd_4688_ = lean_ctor_get(v_a_4683_, 1);
v_isSharedCheck_4730_ = !lean_is_exclusive(v_a_4683_);
if (v_isSharedCheck_4730_ == 0)
{
v___x_4690_ = v_a_4683_;
v_isShared_4691_ = v_isSharedCheck_4730_;
goto v_resetjp_4689_;
}
else
{
lean_inc(v_snd_4688_);
lean_inc(v_fst_4687_);
lean_dec(v_a_4683_);
v___x_4690_ = lean_box(0);
v_isShared_4691_ = v_isSharedCheck_4730_;
goto v_resetjp_4689_;
}
v_resetjp_4689_:
{
lean_object* v_packages_4692_; lean_object* v___x_4693_; lean_object* v___x_4694_; lean_object* v___x_4695_; lean_object* v___x_4697_; 
v_packages_4692_ = lean_ctor_get(v_fst_4687_, 4);
v___x_4693_ = lean_array_get_size(v_packages_4692_);
v___x_4694_ = lean_array_fget(v_packages_4692_, v___x_4665_);
v___x_4695_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4695_, 0, v___x_4681_);
if (v_isShared_4679_ == 0)
{
lean_ctor_set(v___x_4678_, 1, v___x_4693_);
lean_ctor_set(v___x_4678_, 0, v___x_4695_);
v___x_4697_ = v___x_4678_;
goto v_reusejp_4696_;
}
else
{
lean_object* v_reuseFailAlloc_4729_; 
v_reuseFailAlloc_4729_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4729_, 0, v___x_4695_);
lean_ctor_set(v_reuseFailAlloc_4729_, 1, v___x_4693_);
v___x_4697_ = v_reuseFailAlloc_4729_;
goto v_reusejp_4696_;
}
v_reusejp_4696_:
{
lean_object* v___x_4698_; lean_object* v___x_4699_; uint8_t v___x_4700_; 
v___x_4698_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__8___redArg(v___x_4697_, v___x_4672_);
v___x_4699_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_setDepIdxs___redArg(v_fst_4687_, v___x_4694_, v___x_4698_);
v___x_4700_ = lean_nat_dec_eq(v___x_4681_, v___x_4693_);
if (v___x_4700_ == 0)
{
lean_object* v___x_4701_; lean_object* v___x_4702_; lean_object* v___x_4703_; 
lean_del_object(v___x_4690_);
lean_del_object(v___x_4685_);
v___x_4701_ = lean_unsigned_to_nat(1u);
v___x_4702_ = lean_nat_add(v___x_4681_, v___x_4701_);
v___x_4703_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4___redArg(v_leanOpts_4632_, v___x_4639_, v___x_4699_, v___x_4681_, v___x_4702_, v_snd_4688_, v_a_4629_);
if (lean_obj_tag(v___x_4703_) == 0)
{
lean_object* v_a_4704_; lean_object* v___x_4706_; uint8_t v_isShared_4707_; uint8_t v_isSharedCheck_4721_; 
v_a_4704_ = lean_ctor_get(v___x_4703_, 0);
v_isSharedCheck_4721_ = !lean_is_exclusive(v___x_4703_);
if (v_isSharedCheck_4721_ == 0)
{
v___x_4706_ = v___x_4703_;
v_isShared_4707_ = v_isSharedCheck_4721_;
goto v_resetjp_4705_;
}
else
{
lean_inc(v_a_4704_);
lean_dec(v___x_4703_);
v___x_4706_ = lean_box(0);
v_isShared_4707_ = v_isSharedCheck_4721_;
goto v_resetjp_4705_;
}
v_resetjp_4705_:
{
lean_object* v_fst_4708_; lean_object* v_snd_4709_; lean_object* v___x_4711_; uint8_t v_isShared_4712_; uint8_t v_isSharedCheck_4720_; 
v_fst_4708_ = lean_ctor_get(v_a_4704_, 0);
v_snd_4709_ = lean_ctor_get(v_a_4704_, 1);
v_isSharedCheck_4720_ = !lean_is_exclusive(v_a_4704_);
if (v_isSharedCheck_4720_ == 0)
{
v___x_4711_ = v_a_4704_;
v_isShared_4712_ = v_isSharedCheck_4720_;
goto v_resetjp_4710_;
}
else
{
lean_inc(v_snd_4709_);
lean_inc(v_fst_4708_);
lean_dec(v_a_4704_);
v___x_4711_ = lean_box(0);
v_isShared_4712_ = v_isSharedCheck_4720_;
goto v_resetjp_4710_;
}
v_resetjp_4710_:
{
lean_object* v___x_4713_; lean_object* v___x_4715_; 
v___x_4713_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_updateDepPkgs(v_fst_4708_);
if (v_isShared_4712_ == 0)
{
lean_ctor_set(v___x_4711_, 0, v___x_4713_);
v___x_4715_ = v___x_4711_;
goto v_reusejp_4714_;
}
else
{
lean_object* v_reuseFailAlloc_4719_; 
v_reuseFailAlloc_4719_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4719_, 0, v___x_4713_);
lean_ctor_set(v_reuseFailAlloc_4719_, 1, v_snd_4709_);
v___x_4715_ = v_reuseFailAlloc_4719_;
goto v_reusejp_4714_;
}
v_reusejp_4714_:
{
lean_object* v___x_4717_; 
if (v_isShared_4707_ == 0)
{
lean_ctor_set(v___x_4706_, 0, v___x_4715_);
v___x_4717_ = v___x_4706_;
goto v_reusejp_4716_;
}
else
{
lean_object* v_reuseFailAlloc_4718_; 
v_reuseFailAlloc_4718_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4718_, 0, v___x_4715_);
v___x_4717_ = v_reuseFailAlloc_4718_;
goto v_reusejp_4716_;
}
v_reusejp_4716_:
{
return v___x_4717_;
}
}
}
}
}
else
{
return v___x_4703_;
}
}
else
{
lean_object* v___x_4722_; lean_object* v___x_4724_; 
lean_dec_ref(v_leanOpts_4632_);
v___x_4722_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_updateDepPkgs(v___x_4699_);
if (v_isShared_4691_ == 0)
{
lean_ctor_set(v___x_4690_, 0, v___x_4722_);
v___x_4724_ = v___x_4690_;
goto v_reusejp_4723_;
}
else
{
lean_object* v_reuseFailAlloc_4728_; 
v_reuseFailAlloc_4728_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4728_, 0, v___x_4722_);
lean_ctor_set(v_reuseFailAlloc_4728_, 1, v_snd_4688_);
v___x_4724_ = v_reuseFailAlloc_4728_;
goto v_reusejp_4723_;
}
v_reusejp_4723_:
{
lean_object* v___x_4726_; 
if (v_isShared_4686_ == 0)
{
lean_ctor_set(v___x_4685_, 0, v___x_4724_);
v___x_4726_ = v___x_4685_;
goto v_reusejp_4725_;
}
else
{
lean_object* v_reuseFailAlloc_4727_; 
v_reuseFailAlloc_4727_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4727_, 0, v___x_4724_);
v___x_4726_ = v_reuseFailAlloc_4727_;
goto v_reusejp_4725_;
}
v_reusejp_4725_:
{
return v___x_4726_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_4732_; lean_object* v___x_4734_; uint8_t v_isShared_4735_; uint8_t v_isSharedCheck_4739_; 
lean_del_object(v___x_4678_);
lean_dec_ref(v_leanOpts_4632_);
v_a_4732_ = lean_ctor_get(v___x_4682_, 0);
v_isSharedCheck_4739_ = !lean_is_exclusive(v___x_4682_);
if (v_isSharedCheck_4739_ == 0)
{
v___x_4734_ = v___x_4682_;
v_isShared_4735_ = v_isSharedCheck_4739_;
goto v_resetjp_4733_;
}
else
{
lean_inc(v_a_4732_);
lean_dec(v___x_4682_);
v___x_4734_ = lean_box(0);
v_isShared_4735_ = v_isSharedCheck_4739_;
goto v_resetjp_4733_;
}
v_resetjp_4733_:
{
lean_object* v___x_4737_; 
if (v_isShared_4735_ == 0)
{
v___x_4737_ = v___x_4734_;
goto v_reusejp_4736_;
}
else
{
lean_object* v_reuseFailAlloc_4738_; 
v_reuseFailAlloc_4738_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4738_, 0, v_a_4732_);
v___x_4737_ = v_reuseFailAlloc_4738_;
goto v_reusejp_4736_;
}
v_reusejp_4736_:
{
return v___x_4737_;
}
}
}
}
else
{
lean_object* v_a_4740_; lean_object* v___x_4742_; uint8_t v_isShared_4743_; uint8_t v_isSharedCheck_4747_; 
lean_del_object(v___x_4678_);
lean_dec(v_snd_4676_);
lean_dec(v_fst_4675_);
lean_dec_ref(v___x_4671_);
lean_dec_ref(v_leanOpts_4632_);
lean_dec_ref(v_ws_4630_);
v_a_4740_ = lean_ctor_get(v___x_4680_, 0);
v_isSharedCheck_4747_ = !lean_is_exclusive(v___x_4680_);
if (v_isSharedCheck_4747_ == 0)
{
v___x_4742_ = v___x_4680_;
v_isShared_4743_ = v_isSharedCheck_4747_;
goto v_resetjp_4741_;
}
else
{
lean_inc(v_a_4740_);
lean_dec(v___x_4680_);
v___x_4742_ = lean_box(0);
v_isShared_4743_ = v_isSharedCheck_4747_;
goto v_resetjp_4741_;
}
v_resetjp_4741_:
{
lean_object* v___x_4745_; 
if (v_isShared_4743_ == 0)
{
v___x_4745_ = v___x_4742_;
goto v_reusejp_4744_;
}
else
{
lean_object* v_reuseFailAlloc_4746_; 
v_reuseFailAlloc_4746_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4746_, 0, v_a_4740_);
v___x_4745_ = v_reuseFailAlloc_4746_;
goto v_reusejp_4744_;
}
v_reusejp_4744_:
{
return v___x_4745_;
}
}
}
}
}
else
{
lean_object* v_a_4749_; lean_object* v___x_4751_; uint8_t v_isShared_4752_; uint8_t v_isSharedCheck_4756_; 
lean_dec_ref(v___x_4671_);
lean_dec_ref(v_leanOpts_4632_);
lean_dec_ref(v_ws_4630_);
v_a_4749_ = lean_ctor_get(v___x_4673_, 0);
v_isSharedCheck_4756_ = !lean_is_exclusive(v___x_4673_);
if (v_isSharedCheck_4756_ == 0)
{
v___x_4751_ = v___x_4673_;
v_isShared_4752_ = v_isSharedCheck_4756_;
goto v_resetjp_4750_;
}
else
{
lean_inc(v_a_4749_);
lean_dec(v___x_4673_);
v___x_4751_ = lean_box(0);
v_isShared_4752_ = v_isSharedCheck_4756_;
goto v_resetjp_4750_;
}
v_resetjp_4750_:
{
lean_object* v___x_4754_; 
if (v_isShared_4752_ == 0)
{
v___x_4754_ = v___x_4751_;
goto v_reusejp_4753_;
}
else
{
lean_object* v_reuseFailAlloc_4755_; 
v_reuseFailAlloc_4755_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4755_, 0, v_a_4749_);
v___x_4754_ = v_reuseFailAlloc_4755_;
goto v_reusejp_4753_;
}
v_reusejp_4753_:
{
return v___x_4754_;
}
}
}
}
}
else
{
lean_object* v_a_4757_; lean_object* v___x_4759_; uint8_t v_isShared_4760_; uint8_t v_isSharedCheck_4764_; 
lean_dec_ref(v_leanOpts_4632_);
lean_dec_ref(v_ws_4630_);
v_a_4757_ = lean_ctor_get(v___x_4636_, 0);
v_isSharedCheck_4764_ = !lean_is_exclusive(v___x_4636_);
if (v_isSharedCheck_4764_ == 0)
{
v___x_4759_ = v___x_4636_;
v_isShared_4760_ = v_isSharedCheck_4764_;
goto v_resetjp_4758_;
}
else
{
lean_inc(v_a_4757_);
lean_dec(v___x_4636_);
v___x_4759_ = lean_box(0);
v_isShared_4760_ = v_isSharedCheck_4764_;
goto v_resetjp_4758_;
}
v_resetjp_4758_:
{
lean_object* v___x_4762_; 
if (v_isShared_4760_ == 0)
{
v___x_4762_ = v___x_4759_;
goto v_reusejp_4761_;
}
else
{
lean_object* v_reuseFailAlloc_4763_; 
v_reuseFailAlloc_4763_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4763_, 0, v_a_4757_);
v___x_4762_ = v_reuseFailAlloc_4763_;
goto v_reusejp_4761_;
}
v_reusejp_4761_:
{
return v___x_4762_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore___at___00Lake_Workspace_updateAndMaterialize_spec__0___boxed(lean_object* v_a_4765_, lean_object* v_ws_4766_, lean_object* v_toUpdate_4767_, lean_object* v_leanOpts_4768_, lean_object* v_updateToolchain_4769_, lean_object* v_a_4770_){
_start:
{
uint8_t v_updateToolchain_boxed_4771_; lean_object* v_res_4772_; 
v_updateToolchain_boxed_4771_ = lean_unbox(v_updateToolchain_4769_);
v_res_4772_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore___at___00Lake_Workspace_updateAndMaterialize_spec__0(v_a_4765_, v_ws_4766_, v_toUpdate_4767_, v_leanOpts_4768_, v_updateToolchain_boxed_4771_);
lean_dec_ref(v_a_4765_);
return v_res_4772_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Workspace_updateAndMaterialize_spec__1(lean_object* v_as_4773_, size_t v_i_4774_, size_t v_stop_4775_, lean_object* v_b_4776_, lean_object* v___y_4777_, lean_object* v___y_4778_){
_start:
{
uint8_t v___x_4780_; 
v___x_4780_ = lean_usize_dec_eq(v_i_4774_, v_stop_4775_);
if (v___x_4780_ == 0)
{
lean_object* v___x_4781_; lean_object* v___x_4782_; 
v___x_4781_ = lean_array_uget_borrowed(v_as_4773_, v_i_4774_);
lean_inc(v___x_4781_);
v___x_4782_ = l___private_Lake_Load_Resolve_0__Lake_Package_runPostUpdateHooks(v___x_4781_, v___y_4777_, v___y_4778_);
if (lean_obj_tag(v___x_4782_) == 0)
{
lean_object* v_a_4783_; size_t v___x_4784_; size_t v___x_4785_; 
v_a_4783_ = lean_ctor_get(v___x_4782_, 0);
lean_inc(v_a_4783_);
lean_dec_ref_known(v___x_4782_, 1);
v___x_4784_ = ((size_t)1ULL);
v___x_4785_ = lean_usize_add(v_i_4774_, v___x_4784_);
v_i_4774_ = v___x_4785_;
v_b_4776_ = v_a_4783_;
goto _start;
}
else
{
return v___x_4782_;
}
}
else
{
lean_object* v___x_4787_; 
v___x_4787_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4787_, 0, v_b_4776_);
return v___x_4787_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Workspace_updateAndMaterialize_spec__1___boxed(lean_object* v_as_4788_, lean_object* v_i_4789_, lean_object* v_stop_4790_, lean_object* v_b_4791_, lean_object* v___y_4792_, lean_object* v___y_4793_, lean_object* v___y_4794_){
_start:
{
size_t v_i_boxed_4795_; size_t v_stop_boxed_4796_; lean_object* v_res_4797_; 
v_i_boxed_4795_ = lean_unbox_usize(v_i_4789_);
lean_dec(v_i_4789_);
v_stop_boxed_4796_ = lean_unbox_usize(v_stop_4790_);
lean_dec(v_stop_4790_);
v_res_4797_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Workspace_updateAndMaterialize_spec__1(v_as_4788_, v_i_boxed_4795_, v_stop_boxed_4796_, v_b_4791_, v___y_4792_, v___y_4793_);
lean_dec_ref(v___y_4793_);
lean_dec(v___y_4792_);
lean_dec_ref(v_as_4788_);
return v_res_4797_;
}
}
LEAN_EXPORT lean_object* l_Lake_Workspace_updateAndMaterialize(lean_object* v_ws_4798_, lean_object* v_toUpdate_4799_, lean_object* v_leanOpts_4800_, uint8_t v_updateToolchain_4801_, lean_object* v_a_4802_){
_start:
{
lean_object* v___x_4804_; 
v___x_4804_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore___at___00Lake_Workspace_updateAndMaterialize_spec__0(v_a_4802_, v_ws_4798_, v_toUpdate_4799_, v_leanOpts_4800_, v_updateToolchain_4801_);
if (lean_obj_tag(v___x_4804_) == 0)
{
lean_object* v_a_4805_; lean_object* v_fst_4806_; lean_object* v_snd_4807_; lean_object* v___y_4809_; lean_object* v___x_4826_; 
v_a_4805_ = lean_ctor_get(v___x_4804_, 0);
lean_inc(v_a_4805_);
lean_dec_ref_known(v___x_4804_, 1);
v_fst_4806_ = lean_ctor_get(v_a_4805_, 0);
lean_inc(v_fst_4806_);
v_snd_4807_ = lean_ctor_get(v_a_4805_, 1);
lean_inc(v_snd_4807_);
lean_dec(v_a_4805_);
v___x_4826_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_writeManifest(v_fst_4806_, v_snd_4807_);
lean_dec(v_snd_4807_);
if (lean_obj_tag(v___x_4826_) == 0)
{
lean_object* v___x_4828_; uint8_t v_isShared_4829_; uint8_t v_isSharedCheck_4849_; 
v_isSharedCheck_4849_ = !lean_is_exclusive(v___x_4826_);
if (v_isSharedCheck_4849_ == 0)
{
lean_object* v_unused_4850_; 
v_unused_4850_ = lean_ctor_get(v___x_4826_, 0);
lean_dec(v_unused_4850_);
v___x_4828_ = v___x_4826_;
v_isShared_4829_ = v_isSharedCheck_4849_;
goto v_resetjp_4827_;
}
else
{
lean_dec(v___x_4826_);
v___x_4828_ = lean_box(0);
v_isShared_4829_ = v_isSharedCheck_4849_;
goto v_resetjp_4827_;
}
v_resetjp_4827_:
{
lean_object* v_packages_4830_; lean_object* v___x_4831_; lean_object* v___x_4832_; uint8_t v___x_4833_; 
v_packages_4830_ = lean_ctor_get(v_fst_4806_, 4);
v___x_4831_ = lean_unsigned_to_nat(0u);
v___x_4832_ = lean_array_get_size(v_packages_4830_);
v___x_4833_ = lean_nat_dec_lt(v___x_4831_, v___x_4832_);
if (v___x_4833_ == 0)
{
lean_object* v___x_4835_; 
if (v_isShared_4829_ == 0)
{
lean_ctor_set(v___x_4828_, 0, v_fst_4806_);
v___x_4835_ = v___x_4828_;
goto v_reusejp_4834_;
}
else
{
lean_object* v_reuseFailAlloc_4836_; 
v_reuseFailAlloc_4836_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4836_, 0, v_fst_4806_);
v___x_4835_ = v_reuseFailAlloc_4836_;
goto v_reusejp_4834_;
}
v_reusejp_4834_:
{
return v___x_4835_;
}
}
else
{
lean_object* v___x_4837_; lean_object* v___x_4838_; uint8_t v___x_4839_; 
v___x_4837_ = l_unsafeCast___redArg(v_fst_4806_);
v___x_4838_ = lean_box(0);
v___x_4839_ = lean_nat_dec_le(v___x_4832_, v___x_4832_);
if (v___x_4839_ == 0)
{
if (v___x_4833_ == 0)
{
lean_object* v___x_4841_; 
lean_dec(v___x_4837_);
if (v_isShared_4829_ == 0)
{
lean_ctor_set(v___x_4828_, 0, v_fst_4806_);
v___x_4841_ = v___x_4828_;
goto v_reusejp_4840_;
}
else
{
lean_object* v_reuseFailAlloc_4842_; 
v_reuseFailAlloc_4842_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4842_, 0, v_fst_4806_);
v___x_4841_ = v_reuseFailAlloc_4842_;
goto v_reusejp_4840_;
}
v_reusejp_4840_:
{
return v___x_4841_;
}
}
else
{
size_t v___x_4843_; size_t v___x_4844_; lean_object* v___x_4845_; 
lean_del_object(v___x_4828_);
v___x_4843_ = ((size_t)0ULL);
v___x_4844_ = lean_usize_of_nat(v___x_4832_);
v___x_4845_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Workspace_updateAndMaterialize_spec__1(v_packages_4830_, v___x_4843_, v___x_4844_, v___x_4838_, v___x_4837_, v_a_4802_);
lean_dec(v___x_4837_);
v___y_4809_ = v___x_4845_;
goto v___jp_4808_;
}
}
else
{
size_t v___x_4846_; size_t v___x_4847_; lean_object* v___x_4848_; 
lean_del_object(v___x_4828_);
v___x_4846_ = ((size_t)0ULL);
v___x_4847_ = lean_usize_of_nat(v___x_4832_);
v___x_4848_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Workspace_updateAndMaterialize_spec__1(v_packages_4830_, v___x_4846_, v___x_4847_, v___x_4838_, v___x_4837_, v_a_4802_);
lean_dec(v___x_4837_);
v___y_4809_ = v___x_4848_;
goto v___jp_4808_;
}
}
}
}
else
{
lean_object* v_a_4851_; lean_object* v___x_4853_; uint8_t v_isShared_4854_; uint8_t v_isSharedCheck_4863_; 
lean_dec(v_fst_4806_);
v_a_4851_ = lean_ctor_get(v___x_4826_, 0);
v_isSharedCheck_4863_ = !lean_is_exclusive(v___x_4826_);
if (v_isSharedCheck_4863_ == 0)
{
v___x_4853_ = v___x_4826_;
v_isShared_4854_ = v_isSharedCheck_4863_;
goto v_resetjp_4852_;
}
else
{
lean_inc(v_a_4851_);
lean_dec(v___x_4826_);
v___x_4853_ = lean_box(0);
v_isShared_4854_ = v_isSharedCheck_4863_;
goto v_resetjp_4852_;
}
v_resetjp_4852_:
{
lean_object* v___x_4855_; uint8_t v___x_4856_; lean_object* v___x_4857_; lean_object* v___x_4858_; lean_object* v___x_4859_; lean_object* v___x_4861_; 
v___x_4855_ = lean_io_error_to_string(v_a_4851_);
v___x_4856_ = 3;
v___x_4857_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4857_, 0, v___x_4855_);
lean_ctor_set_uint8(v___x_4857_, sizeof(void*)*1, v___x_4856_);
lean_inc_ref(v_a_4802_);
v___x_4858_ = lean_apply_2(v_a_4802_, v___x_4857_, lean_box(0));
v___x_4859_ = lean_box(0);
if (v_isShared_4854_ == 0)
{
lean_ctor_set(v___x_4853_, 0, v___x_4859_);
v___x_4861_ = v___x_4853_;
goto v_reusejp_4860_;
}
else
{
lean_object* v_reuseFailAlloc_4862_; 
v_reuseFailAlloc_4862_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4862_, 0, v___x_4859_);
v___x_4861_ = v_reuseFailAlloc_4862_;
goto v_reusejp_4860_;
}
v_reusejp_4860_:
{
return v___x_4861_;
}
}
}
v___jp_4808_:
{
if (lean_obj_tag(v___y_4809_) == 0)
{
lean_object* v___x_4811_; uint8_t v_isShared_4812_; uint8_t v_isSharedCheck_4816_; 
v_isSharedCheck_4816_ = !lean_is_exclusive(v___y_4809_);
if (v_isSharedCheck_4816_ == 0)
{
lean_object* v_unused_4817_; 
v_unused_4817_ = lean_ctor_get(v___y_4809_, 0);
lean_dec(v_unused_4817_);
v___x_4811_ = v___y_4809_;
v_isShared_4812_ = v_isSharedCheck_4816_;
goto v_resetjp_4810_;
}
else
{
lean_dec(v___y_4809_);
v___x_4811_ = lean_box(0);
v_isShared_4812_ = v_isSharedCheck_4816_;
goto v_resetjp_4810_;
}
v_resetjp_4810_:
{
lean_object* v___x_4814_; 
if (v_isShared_4812_ == 0)
{
lean_ctor_set(v___x_4811_, 0, v_fst_4806_);
v___x_4814_ = v___x_4811_;
goto v_reusejp_4813_;
}
else
{
lean_object* v_reuseFailAlloc_4815_; 
v_reuseFailAlloc_4815_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4815_, 0, v_fst_4806_);
v___x_4814_ = v_reuseFailAlloc_4815_;
goto v_reusejp_4813_;
}
v_reusejp_4813_:
{
return v___x_4814_;
}
}
}
else
{
lean_object* v_a_4818_; lean_object* v___x_4820_; uint8_t v_isShared_4821_; uint8_t v_isSharedCheck_4825_; 
lean_dec(v_fst_4806_);
v_a_4818_ = lean_ctor_get(v___y_4809_, 0);
v_isSharedCheck_4825_ = !lean_is_exclusive(v___y_4809_);
if (v_isSharedCheck_4825_ == 0)
{
v___x_4820_ = v___y_4809_;
v_isShared_4821_ = v_isSharedCheck_4825_;
goto v_resetjp_4819_;
}
else
{
lean_inc(v_a_4818_);
lean_dec(v___y_4809_);
v___x_4820_ = lean_box(0);
v_isShared_4821_ = v_isSharedCheck_4825_;
goto v_resetjp_4819_;
}
v_resetjp_4819_:
{
lean_object* v___x_4823_; 
if (v_isShared_4821_ == 0)
{
v___x_4823_ = v___x_4820_;
goto v_reusejp_4822_;
}
else
{
lean_object* v_reuseFailAlloc_4824_; 
v_reuseFailAlloc_4824_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4824_, 0, v_a_4818_);
v___x_4823_ = v_reuseFailAlloc_4824_;
goto v_reusejp_4822_;
}
v_reusejp_4822_:
{
return v___x_4823_;
}
}
}
}
}
else
{
lean_object* v_a_4864_; lean_object* v___x_4866_; uint8_t v_isShared_4867_; uint8_t v_isSharedCheck_4871_; 
v_a_4864_ = lean_ctor_get(v___x_4804_, 0);
v_isSharedCheck_4871_ = !lean_is_exclusive(v___x_4804_);
if (v_isSharedCheck_4871_ == 0)
{
v___x_4866_ = v___x_4804_;
v_isShared_4867_ = v_isSharedCheck_4871_;
goto v_resetjp_4865_;
}
else
{
lean_inc(v_a_4864_);
lean_dec(v___x_4804_);
v___x_4866_ = lean_box(0);
v_isShared_4867_ = v_isSharedCheck_4871_;
goto v_resetjp_4865_;
}
v_resetjp_4865_:
{
lean_object* v___x_4869_; 
if (v_isShared_4867_ == 0)
{
v___x_4869_ = v___x_4866_;
goto v_reusejp_4868_;
}
else
{
lean_object* v_reuseFailAlloc_4870_; 
v_reuseFailAlloc_4870_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4870_, 0, v_a_4864_);
v___x_4869_ = v_reuseFailAlloc_4870_;
goto v_reusejp_4868_;
}
v_reusejp_4868_:
{
return v___x_4869_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Workspace_updateAndMaterialize___boxed(lean_object* v_ws_4872_, lean_object* v_toUpdate_4873_, lean_object* v_leanOpts_4874_, lean_object* v_updateToolchain_4875_, lean_object* v_a_4876_, lean_object* v_a_4877_){
_start:
{
uint8_t v_updateToolchain_boxed_4878_; lean_object* v_res_4879_; 
v_updateToolchain_boxed_4878_ = lean_unbox(v_updateToolchain_4875_);
v_res_4879_ = l_Lake_Workspace_updateAndMaterialize(v_ws_4872_, v_toUpdate_4873_, v_leanOpts_4874_, v_updateToolchain_boxed_4878_, v_a_4876_);
lean_dec_ref(v_a_4876_);
return v_res_4879_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_validateManifest_spec__0___lam__0(lean_object* v___x_4884_, lean_object* v_what_4885_, lean_object* v___y_4886_){
_start:
{
lean_object* v_name_4888_; lean_object* v___x_4889_; lean_object* v___x_4890_; lean_object* v___x_4891_; lean_object* v___x_4892_; uint8_t v___x_4893_; lean_object* v___x_4894_; lean_object* v___x_4895_; lean_object* v___x_4896_; lean_object* v___x_4897_; lean_object* v___x_4898_; lean_object* v___x_4899_; lean_object* v___x_4900_; uint8_t v___x_4901_; lean_object* v___x_4902_; lean_object* v___x_4903_; lean_object* v___x_4904_; 
v_name_4888_ = lean_ctor_get(v___x_4884_, 0);
lean_inc(v_name_4888_);
lean_dec_ref(v___x_4884_);
v___x_4889_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_validateManifest_spec__0___lam__0___closed__0));
v___x_4890_ = lean_string_append(v___x_4889_, v_what_4885_);
v___x_4891_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_validateManifest_spec__0___lam__0___closed__1));
v___x_4892_ = lean_string_append(v___x_4890_, v___x_4891_);
v___x_4893_ = 1;
v___x_4894_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_name_4888_, v___x_4893_);
v___x_4895_ = lean_string_append(v___x_4892_, v___x_4894_);
v___x_4896_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_validateManifest_spec__0___lam__0___closed__2));
v___x_4897_ = lean_string_append(v___x_4895_, v___x_4896_);
v___x_4898_ = lean_string_append(v___x_4897_, v___x_4894_);
lean_dec_ref(v___x_4894_);
v___x_4899_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_validateManifest_spec__0___lam__0___closed__3));
v___x_4900_ = lean_string_append(v___x_4898_, v___x_4899_);
v___x_4901_ = 2;
v___x_4902_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4902_, 0, v___x_4900_);
lean_ctor_set_uint8(v___x_4902_, sizeof(void*)*1, v___x_4901_);
lean_inc_ref(v___y_4886_);
v___x_4903_ = lean_apply_2(v___y_4886_, v___x_4902_, lean_box(0));
v___x_4904_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4904_, 0, v___x_4903_);
return v___x_4904_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_validateManifest_spec__0___lam__0___boxed(lean_object* v___x_4905_, lean_object* v_what_4906_, lean_object* v___y_4907_, lean_object* v___y_4908_){
_start:
{
lean_object* v_res_4909_; 
v_res_4909_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_validateManifest_spec__0___lam__0(v___x_4905_, v_what_4906_, v___y_4907_);
lean_dec_ref(v___y_4907_);
lean_dec_ref(v_what_4906_);
return v_res_4909_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_validateManifest_spec__0(lean_object* v_pkgEntries_4913_, lean_object* v_as_4914_, size_t v_i_4915_, size_t v_stop_4916_, lean_object* v_b_4917_, lean_object* v___y_4918_){
_start:
{
lean_object* v_a_4921_; lean_object* v___y_4926_; uint8_t v___x_4928_; 
v___x_4928_ = lean_usize_dec_eq(v_i_4915_, v_stop_4916_);
if (v___x_4928_ == 0)
{
lean_object* v___x_4929_; lean_object* v_src_x3f_4930_; 
v___x_4929_ = lean_array_uget_borrowed(v_as_4914_, v_i_4915_);
v_src_x3f_4930_ = lean_ctor_get(v___x_4929_, 3);
if (lean_obj_tag(v_src_x3f_4930_) == 1)
{
lean_object* v_name_4931_; lean_object* v_val_4932_; lean_object* v___x_4933_; 
v_name_4931_ = lean_ctor_get(v___x_4929_, 0);
v_val_4932_ = lean_ctor_get(v_src_x3f_4930_, 0);
v___x_4933_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_pkgEntries_4913_, v_name_4931_);
if (lean_obj_tag(v___x_4933_) == 1)
{
lean_object* v_val_4934_; lean_object* v___y_4936_; lean_object* v___y_4940_; 
v_val_4934_ = lean_ctor_get(v___x_4933_, 0);
lean_inc(v_val_4934_);
lean_dec_ref_known(v___x_4933_, 1);
if (lean_obj_tag(v_val_4932_) == 0)
{
lean_object* v_src_4943_; 
v_src_4943_ = lean_ctor_get(v_val_4934_, 4);
lean_inc_ref(v_src_4943_);
lean_dec(v_val_4934_);
if (lean_obj_tag(v_src_4943_) == 0)
{
lean_object* v___x_4944_; 
lean_dec_ref_known(v_src_4943_, 1);
v___x_4944_ = lean_box(0);
v_a_4921_ = v___x_4944_;
goto v___jp_4920_;
}
else
{
lean_dec_ref(v_src_4943_);
v___y_4940_ = v___y_4918_;
goto v___jp_4939_;
}
}
else
{
lean_object* v_src_4945_; 
v_src_4945_ = lean_ctor_get(v_val_4934_, 4);
lean_inc_ref(v_src_4945_);
lean_dec(v_val_4934_);
if (lean_obj_tag(v_src_4945_) == 1)
{
lean_object* v_url_4946_; lean_object* v_rev_4947_; lean_object* v_url_4948_; lean_object* v_inputRev_x3f_4949_; lean_object* v___y_4951_; uint8_t v___x_4958_; 
v_url_4946_ = lean_ctor_get(v_val_4932_, 0);
v_rev_4947_ = lean_ctor_get(v_val_4932_, 1);
v_url_4948_ = lean_ctor_get(v_src_4945_, 0);
lean_inc_ref(v_url_4948_);
v_inputRev_x3f_4949_ = lean_ctor_get(v_src_4945_, 2);
lean_inc(v_inputRev_x3f_4949_);
lean_dec_ref_known(v_src_4945_, 4);
v___x_4958_ = lean_string_dec_eq(v_url_4946_, v_url_4948_);
lean_dec_ref(v_url_4948_);
if (v___x_4958_ == 0)
{
goto v___jp_4955_;
}
else
{
if (v___x_4928_ == 0)
{
v___y_4951_ = v___y_4918_;
goto v___jp_4950_;
}
else
{
goto v___jp_4955_;
}
}
v___jp_4950_:
{
lean_object* v___x_4952_; uint8_t v___x_4953_; 
v___x_4952_ = lean_alloc_closure((void*)(l_instDecidableEqString___boxed), 2, 0);
lean_inc(v_rev_4947_);
v___x_4953_ = l_Option_instDecidableEq___redArg(v___x_4952_, v_rev_4947_, v_inputRev_x3f_4949_);
if (v___x_4953_ == 0)
{
v___y_4936_ = v___y_4951_;
goto v___jp_4935_;
}
else
{
if (v___x_4928_ == 0)
{
lean_object* v___x_4954_; 
v___x_4954_ = lean_box(0);
v_a_4921_ = v___x_4954_;
goto v___jp_4920_;
}
else
{
v___y_4936_ = v___y_4951_;
goto v___jp_4935_;
}
}
}
v___jp_4955_:
{
lean_object* v___x_4956_; lean_object* v___x_4957_; 
v___x_4956_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_validateManifest_spec__0___closed__2));
lean_inc(v___x_4929_);
v___x_4957_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_validateManifest_spec__0___lam__0(v___x_4929_, v___x_4956_, v___y_4918_);
if (lean_obj_tag(v___x_4957_) == 0)
{
lean_dec_ref_known(v___x_4957_, 1);
v___y_4951_ = v___y_4918_;
goto v___jp_4950_;
}
else
{
lean_dec(v_inputRev_x3f_4949_);
return v___x_4957_;
}
}
}
else
{
lean_dec_ref(v_src_4945_);
v___y_4940_ = v___y_4918_;
goto v___jp_4939_;
}
}
v___jp_4935_:
{
lean_object* v___x_4937_; lean_object* v___x_4938_; 
v___x_4937_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_validateManifest_spec__0___closed__0));
lean_inc(v___x_4929_);
v___x_4938_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_validateManifest_spec__0___lam__0(v___x_4929_, v___x_4937_, v___y_4936_);
v___y_4926_ = v___x_4938_;
goto v___jp_4925_;
}
v___jp_4939_:
{
lean_object* v___x_4941_; lean_object* v___x_4942_; 
v___x_4941_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_validateManifest_spec__0___closed__1));
lean_inc(v___x_4929_);
v___x_4942_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_validateManifest_spec__0___lam__0(v___x_4929_, v___x_4941_, v___y_4940_);
v___y_4926_ = v___x_4942_;
goto v___jp_4925_;
}
}
else
{
lean_object* v___x_4959_; 
lean_dec(v___x_4933_);
v___x_4959_ = lean_box(0);
v_a_4921_ = v___x_4959_;
goto v___jp_4920_;
}
}
else
{
lean_object* v___x_4960_; 
v___x_4960_ = lean_box(0);
v_a_4921_ = v___x_4960_;
goto v___jp_4920_;
}
}
else
{
lean_object* v___x_4961_; 
v___x_4961_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4961_, 0, v_b_4917_);
return v___x_4961_;
}
v___jp_4920_:
{
size_t v___x_4922_; size_t v___x_4923_; 
v___x_4922_ = ((size_t)1ULL);
v___x_4923_ = lean_usize_add(v_i_4915_, v___x_4922_);
v_i_4915_ = v___x_4923_;
v_b_4917_ = v_a_4921_;
goto _start;
}
v___jp_4925_:
{
if (lean_obj_tag(v___y_4926_) == 0)
{
lean_object* v_a_4927_; 
v_a_4927_ = lean_ctor_get(v___y_4926_, 0);
lean_inc(v_a_4927_);
lean_dec_ref_known(v___y_4926_, 1);
v_a_4921_ = v_a_4927_;
goto v___jp_4920_;
}
else
{
return v___y_4926_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_validateManifest_spec__0___boxed(lean_object* v_pkgEntries_4962_, lean_object* v_as_4963_, lean_object* v_i_4964_, lean_object* v_stop_4965_, lean_object* v_b_4966_, lean_object* v___y_4967_, lean_object* v___y_4968_){
_start:
{
size_t v_i_boxed_4969_; size_t v_stop_boxed_4970_; lean_object* v_res_4971_; 
v_i_boxed_4969_ = lean_unbox_usize(v_i_4964_);
lean_dec(v_i_4964_);
v_stop_boxed_4970_ = lean_unbox_usize(v_stop_4965_);
lean_dec(v_stop_4965_);
v_res_4971_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_validateManifest_spec__0(v_pkgEntries_4962_, v_as_4963_, v_i_boxed_4969_, v_stop_boxed_4970_, v_b_4966_, v___y_4967_);
lean_dec_ref(v___y_4967_);
lean_dec_ref(v_as_4963_);
lean_dec(v_pkgEntries_4962_);
return v_res_4971_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_validateManifest(lean_object* v_pkgEntries_4972_, lean_object* v_deps_4973_, lean_object* v_a_4974_){
_start:
{
lean_object* v___x_4976_; lean_object* v___x_4977_; lean_object* v___x_4978_; uint8_t v___x_4979_; 
v___x_4976_ = lean_unsigned_to_nat(0u);
v___x_4977_ = lean_array_get_size(v_deps_4973_);
v___x_4978_ = lean_box(0);
v___x_4979_ = lean_nat_dec_lt(v___x_4976_, v___x_4977_);
if (v___x_4979_ == 0)
{
lean_object* v___x_4980_; 
v___x_4980_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4980_, 0, v___x_4978_);
return v___x_4980_;
}
else
{
uint8_t v___x_4981_; 
v___x_4981_ = lean_nat_dec_le(v___x_4977_, v___x_4977_);
if (v___x_4981_ == 0)
{
if (v___x_4979_ == 0)
{
lean_object* v___x_4982_; 
v___x_4982_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4982_, 0, v___x_4978_);
return v___x_4982_;
}
else
{
size_t v___x_4983_; size_t v___x_4984_; lean_object* v___x_4985_; 
v___x_4983_ = ((size_t)0ULL);
v___x_4984_ = lean_usize_of_nat(v___x_4977_);
v___x_4985_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_validateManifest_spec__0(v_pkgEntries_4972_, v_deps_4973_, v___x_4983_, v___x_4984_, v___x_4978_, v_a_4974_);
return v___x_4985_;
}
}
else
{
size_t v___x_4986_; size_t v___x_4987_; lean_object* v___x_4988_; 
v___x_4986_ = ((size_t)0ULL);
v___x_4987_ = lean_usize_of_nat(v___x_4977_);
v___x_4988_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_validateManifest_spec__0(v_pkgEntries_4972_, v_deps_4973_, v___x_4986_, v___x_4987_, v___x_4978_, v_a_4974_);
return v___x_4988_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_validateManifest___boxed(lean_object* v_pkgEntries_4989_, lean_object* v_deps_4990_, lean_object* v_a_4991_, lean_object* v_a_4992_){
_start:
{
lean_object* v_res_4993_; 
v_res_4993_ = l___private_Lake_Load_Resolve_0__Lake_validateManifest(v_pkgEntries_4989_, v_deps_4990_, v_a_4991_);
lean_dec_ref(v_a_4991_);
lean_dec_ref(v_deps_4990_);
lean_dec(v_pkgEntries_4989_);
return v_res_4993_;
}
}
LEAN_EXPORT uint8_t l_Option_instBEq_beq___at___00Lake_Workspace_materializeDeps_spec__2(lean_object* v_x_4994_, lean_object* v_x_4995_){
_start:
{
if (lean_obj_tag(v_x_4994_) == 0)
{
if (lean_obj_tag(v_x_4995_) == 0)
{
uint8_t v___x_4996_; 
v___x_4996_ = 1;
return v___x_4996_;
}
else
{
uint8_t v___x_4997_; 
v___x_4997_ = 0;
return v___x_4997_;
}
}
else
{
if (lean_obj_tag(v_x_4995_) == 0)
{
uint8_t v___x_4998_; 
v___x_4998_ = 0;
return v___x_4998_;
}
else
{
lean_object* v_val_4999_; lean_object* v_val_5000_; uint8_t v___x_5001_; 
v_val_4999_ = lean_ctor_get(v_x_4994_, 0);
v_val_5000_ = lean_ctor_get(v_x_4995_, 0);
v___x_5001_ = lean_string_dec_eq(v_val_4999_, v_val_5000_);
return v___x_5001_;
}
}
}
}
LEAN_EXPORT lean_object* l_Option_instBEq_beq___at___00Lake_Workspace_materializeDeps_spec__2___boxed(lean_object* v_x_5002_, lean_object* v_x_5003_){
_start:
{
uint8_t v_res_5004_; lean_object* v_r_5005_; 
v_res_5004_ = l_Option_instBEq_beq___at___00Lake_Workspace_materializeDeps_spec__2(v_x_5002_, v_x_5003_);
lean_dec(v_x_5003_);
lean_dec(v_x_5002_);
v_r_5005_ = lean_box(v_res_5004_);
return v_r_5005_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0_spec__0_spec__2___redArg(lean_object* v_pkg_5011_, lean_object* v___y_5012_, lean_object* v___y_5013_, lean_object* v_leanOpts_5014_, uint8_t v_reconfigure_5015_, lean_object* v_as_5016_, size_t v_i_5017_, size_t v_stop_5018_, lean_object* v_b_5019_, lean_object* v___y_5020_){
_start:
{
uint8_t v___x_5022_; 
v___x_5022_ = lean_usize_dec_eq(v_i_5017_, v_stop_5018_);
if (v___x_5022_ == 0)
{
lean_object* v_ws_5023_; lean_object* v_depIdxs_5024_; lean_object* v___x_5026_; uint8_t v_isShared_5027_; uint8_t v_isSharedCheck_5154_; 
v_ws_5023_ = lean_ctor_get(v_b_5019_, 0);
v_depIdxs_5024_ = lean_ctor_get(v_b_5019_, 1);
v_isSharedCheck_5154_ = !lean_is_exclusive(v_b_5019_);
if (v_isSharedCheck_5154_ == 0)
{
v___x_5026_ = v_b_5019_;
v_isShared_5027_ = v_isSharedCheck_5154_;
goto v_resetjp_5025_;
}
else
{
lean_inc(v_depIdxs_5024_);
lean_inc(v_ws_5023_);
lean_dec(v_b_5019_);
v___x_5026_ = lean_box(0);
v_isShared_5027_ = v_isSharedCheck_5154_;
goto v_resetjp_5025_;
}
v_resetjp_5025_:
{
lean_object* v_lakeEnv_5028_; lean_object* v_packages_5029_; size_t v___x_5030_; size_t v___x_5031_; lean_object* v___x_5032_; lean_object* v___f_5033_; lean_object* v___x_5034_; lean_object* v___x_5035_; 
v_lakeEnv_5028_ = lean_ctor_get(v_ws_5023_, 0);
v_packages_5029_ = lean_ctor_get(v_ws_5023_, 4);
v___x_5030_ = ((size_t)1ULL);
v___x_5031_ = lean_usize_sub(v_i_5017_, v___x_5030_);
v___x_5032_ = lean_array_uget_borrowed(v_as_5016_, v___x_5031_);
lean_inc(v___x_5032_);
v___f_5033_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4_spec__4___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_5033_, 0, v___x_5032_);
v___x_5034_ = lean_unsigned_to_nat(0u);
v___x_5035_ = l___private_Init_Data_Array_Basic_0__Array_findFinIdx_x3f_loop(lean_box(0), v___f_5033_, v_packages_5029_, v___x_5034_);
if (lean_obj_tag(v___x_5035_) == 1)
{
lean_object* v_val_5036_; lean_object* v___x_5037_; lean_object* v___x_5039_; 
v_val_5036_ = lean_ctor_get(v___x_5035_, 0);
lean_inc(v_val_5036_);
lean_dec_ref_known(v___x_5035_, 1);
v___x_5037_ = lean_array_push(v_depIdxs_5024_, v_val_5036_);
if (v_isShared_5027_ == 0)
{
lean_ctor_set(v___x_5026_, 1, v___x_5037_);
v___x_5039_ = v___x_5026_;
goto v_reusejp_5038_;
}
else
{
lean_object* v_reuseFailAlloc_5041_; 
v_reuseFailAlloc_5041_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5041_, 0, v_ws_5023_);
lean_ctor_set(v_reuseFailAlloc_5041_, 1, v___x_5037_);
v___x_5039_ = v_reuseFailAlloc_5041_;
goto v_reusejp_5038_;
}
v_reusejp_5038_:
{
v_i_5017_ = v___x_5031_;
v_b_5019_ = v___x_5039_;
goto _start;
}
}
else
{
lean_object* v_wsIdx_5042_; lean_object* v_baseName_5043_; lean_object* v_name_5044_; lean_object* v_opts_5045_; uint8_t v___x_5046_; 
lean_dec(v___x_5035_);
v_wsIdx_5042_ = lean_ctor_get(v_pkg_5011_, 0);
v_baseName_5043_ = lean_ctor_get(v_pkg_5011_, 1);
v_name_5044_ = lean_ctor_get(v___x_5032_, 0);
v_opts_5045_ = lean_ctor_get(v___x_5032_, 4);
v___x_5046_ = lean_name_eq(v_baseName_5043_, v_name_5044_);
if (v___x_5046_ == 0)
{
lean_object* v___x_5047_; 
v___x_5047_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v___y_5012_, v_name_5044_);
if (lean_obj_tag(v___x_5047_) == 1)
{
lean_object* v_val_5048_; lean_object* v___x_5049_; lean_object* v_dir_5050_; lean_object* v___x_5051_; 
v_val_5048_ = lean_ctor_get(v___x_5047_, 0);
lean_inc(v_val_5048_);
lean_dec_ref_known(v___x_5047_, 1);
v___x_5049_ = lean_array_fget_borrowed(v_packages_5029_, v___x_5034_);
v_dir_5050_ = lean_ctor_get(v___x_5049_, 4);
lean_inc_ref(v___y_5013_);
lean_inc_ref(v_dir_5050_);
v___x_5051_ = l_Lake_PackageEntry_materialize(v_val_5048_, v_lakeEnv_5028_, v_dir_5050_, v___y_5013_, v___y_5020_);
if (lean_obj_tag(v___x_5051_) == 0)
{
lean_object* v_a_5052_; lean_object* v___x_5054_; uint8_t v_isShared_5055_; uint8_t v_isSharedCheck_5108_; 
v_a_5052_ = lean_ctor_get(v___x_5051_, 0);
v_isSharedCheck_5108_ = !lean_is_exclusive(v___x_5051_);
if (v_isSharedCheck_5108_ == 0)
{
v___x_5054_ = v___x_5051_;
v_isShared_5055_ = v_isSharedCheck_5108_;
goto v_resetjp_5053_;
}
else
{
lean_inc(v_a_5052_);
lean_dec(v___x_5051_);
v___x_5054_ = lean_box(0);
v_isShared_5055_ = v_isSharedCheck_5108_;
goto v_resetjp_5053_;
}
v_resetjp_5053_:
{
lean_object* v___x_5056_; lean_object* v_wsIdx_5057_; lean_object* v___x_5058_; 
v___x_5056_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__4));
v_wsIdx_5057_ = lean_array_get_size(v_packages_5029_);
lean_inc_ref(v_leanOpts_5014_);
lean_inc(v_opts_5045_);
v___x_5058_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_addDepPackage_x27(v_ws_5023_, v_a_5052_, v_opts_5045_, v_leanOpts_5014_, v_reconfigure_5015_, v___x_5056_);
if (lean_obj_tag(v___x_5058_) == 0)
{
lean_object* v_a_5059_; lean_object* v_a_5060_; lean_object* v___x_5061_; lean_object* v___x_5063_; 
lean_del_object(v___x_5054_);
v_a_5059_ = lean_ctor_get(v___x_5058_, 0);
lean_inc(v_a_5059_);
v_a_5060_ = lean_ctor_get(v___x_5058_, 1);
lean_inc(v_a_5060_);
lean_dec_ref_known(v___x_5058_, 2);
v___x_5061_ = lean_array_push(v_depIdxs_5024_, v_wsIdx_5057_);
if (v_isShared_5027_ == 0)
{
lean_ctor_set(v___x_5026_, 1, v___x_5061_);
lean_ctor_set(v___x_5026_, 0, v_a_5059_);
v___x_5063_ = v___x_5026_;
goto v_reusejp_5062_;
}
else
{
lean_object* v_reuseFailAlloc_5080_; 
v_reuseFailAlloc_5080_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5080_, 0, v_a_5059_);
lean_ctor_set(v_reuseFailAlloc_5080_, 1, v___x_5061_);
v___x_5063_ = v_reuseFailAlloc_5080_;
goto v_reusejp_5062_;
}
v_reusejp_5062_:
{
lean_object* v___x_5064_; uint8_t v___x_5065_; 
v___x_5064_ = lean_array_get_size(v_a_5060_);
v___x_5065_ = lean_nat_dec_lt(v___x_5034_, v___x_5064_);
if (v___x_5065_ == 0)
{
lean_dec(v_a_5060_);
v_i_5017_ = v___x_5031_;
v_b_5019_ = v___x_5063_;
goto _start;
}
else
{
lean_object* v___x_5067_; size_t v___x_5068_; size_t v___x_5069_; lean_object* v___x_5070_; 
v___x_5067_ = lean_box(0);
v___x_5068_ = ((size_t)0ULL);
v___x_5069_ = lean_usize_of_nat(v___x_5064_);
v___x_5070_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__3(v_a_5060_, v___x_5068_, v___x_5069_, v___x_5067_, v___y_5020_);
lean_dec(v_a_5060_);
if (lean_obj_tag(v___x_5070_) == 0)
{
lean_dec_ref_known(v___x_5070_, 1);
v_i_5017_ = v___x_5031_;
v_b_5019_ = v___x_5063_;
goto _start;
}
else
{
lean_object* v_a_5072_; lean_object* v___x_5074_; uint8_t v_isShared_5075_; uint8_t v_isSharedCheck_5079_; 
lean_dec_ref(v___x_5063_);
lean_dec_ref(v_leanOpts_5014_);
lean_dec_ref(v___y_5013_);
lean_dec_ref(v_pkg_5011_);
v_a_5072_ = lean_ctor_get(v___x_5070_, 0);
v_isSharedCheck_5079_ = !lean_is_exclusive(v___x_5070_);
if (v_isSharedCheck_5079_ == 0)
{
v___x_5074_ = v___x_5070_;
v_isShared_5075_ = v_isSharedCheck_5079_;
goto v_resetjp_5073_;
}
else
{
lean_inc(v_a_5072_);
lean_dec(v___x_5070_);
v___x_5074_ = lean_box(0);
v_isShared_5075_ = v_isSharedCheck_5079_;
goto v_resetjp_5073_;
}
v_resetjp_5073_:
{
lean_object* v___x_5077_; 
if (v_isShared_5075_ == 0)
{
v___x_5077_ = v___x_5074_;
goto v_reusejp_5076_;
}
else
{
lean_object* v_reuseFailAlloc_5078_; 
v_reuseFailAlloc_5078_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5078_, 0, v_a_5072_);
v___x_5077_ = v_reuseFailAlloc_5078_;
goto v_reusejp_5076_;
}
v_reusejp_5076_:
{
return v___x_5077_;
}
}
}
}
}
}
else
{
lean_object* v_a_5081_; lean_object* v___x_5082_; uint8_t v___x_5083_; 
lean_del_object(v___x_5026_);
lean_dec_ref(v_depIdxs_5024_);
lean_dec_ref(v_leanOpts_5014_);
lean_dec_ref(v___y_5013_);
lean_dec_ref(v_pkg_5011_);
v_a_5081_ = lean_ctor_get(v___x_5058_, 1);
lean_inc(v_a_5081_);
lean_dec_ref_known(v___x_5058_, 2);
v___x_5082_ = lean_array_get_size(v_a_5081_);
v___x_5083_ = lean_nat_dec_lt(v___x_5034_, v___x_5082_);
if (v___x_5083_ == 0)
{
lean_object* v___x_5084_; lean_object* v___x_5086_; 
lean_dec(v_a_5081_);
v___x_5084_ = lean_box(0);
if (v_isShared_5055_ == 0)
{
lean_ctor_set_tag(v___x_5054_, 1);
lean_ctor_set(v___x_5054_, 0, v___x_5084_);
v___x_5086_ = v___x_5054_;
goto v_reusejp_5085_;
}
else
{
lean_object* v_reuseFailAlloc_5087_; 
v_reuseFailAlloc_5087_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5087_, 0, v___x_5084_);
v___x_5086_ = v_reuseFailAlloc_5087_;
goto v_reusejp_5085_;
}
v_reusejp_5085_:
{
return v___x_5086_;
}
}
else
{
lean_object* v___x_5088_; size_t v___x_5089_; size_t v___x_5090_; lean_object* v___x_5091_; 
lean_del_object(v___x_5054_);
v___x_5088_ = lean_box(0);
v___x_5089_ = ((size_t)0ULL);
v___x_5090_ = lean_usize_of_nat(v___x_5082_);
v___x_5091_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__3(v_a_5081_, v___x_5089_, v___x_5090_, v___x_5088_, v___y_5020_);
lean_dec(v_a_5081_);
if (lean_obj_tag(v___x_5091_) == 0)
{
lean_object* v___x_5093_; uint8_t v_isShared_5094_; uint8_t v_isSharedCheck_5098_; 
v_isSharedCheck_5098_ = !lean_is_exclusive(v___x_5091_);
if (v_isSharedCheck_5098_ == 0)
{
lean_object* v_unused_5099_; 
v_unused_5099_ = lean_ctor_get(v___x_5091_, 0);
lean_dec(v_unused_5099_);
v___x_5093_ = v___x_5091_;
v_isShared_5094_ = v_isSharedCheck_5098_;
goto v_resetjp_5092_;
}
else
{
lean_dec(v___x_5091_);
v___x_5093_ = lean_box(0);
v_isShared_5094_ = v_isSharedCheck_5098_;
goto v_resetjp_5092_;
}
v_resetjp_5092_:
{
lean_object* v___x_5096_; 
if (v_isShared_5094_ == 0)
{
lean_ctor_set_tag(v___x_5093_, 1);
lean_ctor_set(v___x_5093_, 0, v___x_5088_);
v___x_5096_ = v___x_5093_;
goto v_reusejp_5095_;
}
else
{
lean_object* v_reuseFailAlloc_5097_; 
v_reuseFailAlloc_5097_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5097_, 0, v___x_5088_);
v___x_5096_ = v_reuseFailAlloc_5097_;
goto v_reusejp_5095_;
}
v_reusejp_5095_:
{
return v___x_5096_;
}
}
}
else
{
lean_object* v_a_5100_; lean_object* v___x_5102_; uint8_t v_isShared_5103_; uint8_t v_isSharedCheck_5107_; 
v_a_5100_ = lean_ctor_get(v___x_5091_, 0);
v_isSharedCheck_5107_ = !lean_is_exclusive(v___x_5091_);
if (v_isSharedCheck_5107_ == 0)
{
v___x_5102_ = v___x_5091_;
v_isShared_5103_ = v_isSharedCheck_5107_;
goto v_resetjp_5101_;
}
else
{
lean_inc(v_a_5100_);
lean_dec(v___x_5091_);
v___x_5102_ = lean_box(0);
v_isShared_5103_ = v_isSharedCheck_5107_;
goto v_resetjp_5101_;
}
v_resetjp_5101_:
{
lean_object* v___x_5105_; 
if (v_isShared_5103_ == 0)
{
v___x_5105_ = v___x_5102_;
goto v_reusejp_5104_;
}
else
{
lean_object* v_reuseFailAlloc_5106_; 
v_reuseFailAlloc_5106_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5106_, 0, v_a_5100_);
v___x_5105_ = v_reuseFailAlloc_5106_;
goto v_reusejp_5104_;
}
v_reusejp_5104_:
{
return v___x_5105_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_5109_; lean_object* v___x_5111_; uint8_t v_isShared_5112_; uint8_t v_isSharedCheck_5116_; 
lean_del_object(v___x_5026_);
lean_dec_ref(v_depIdxs_5024_);
lean_dec_ref(v_ws_5023_);
lean_dec_ref(v_leanOpts_5014_);
lean_dec_ref(v___y_5013_);
lean_dec_ref(v_pkg_5011_);
v_a_5109_ = lean_ctor_get(v___x_5051_, 0);
v_isSharedCheck_5116_ = !lean_is_exclusive(v___x_5051_);
if (v_isSharedCheck_5116_ == 0)
{
v___x_5111_ = v___x_5051_;
v_isShared_5112_ = v_isSharedCheck_5116_;
goto v_resetjp_5110_;
}
else
{
lean_inc(v_a_5109_);
lean_dec(v___x_5051_);
v___x_5111_ = lean_box(0);
v_isShared_5112_ = v_isSharedCheck_5116_;
goto v_resetjp_5110_;
}
v_resetjp_5110_:
{
lean_object* v___x_5114_; 
if (v_isShared_5112_ == 0)
{
v___x_5114_ = v___x_5111_;
goto v_reusejp_5113_;
}
else
{
lean_object* v_reuseFailAlloc_5115_; 
v_reuseFailAlloc_5115_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5115_, 0, v_a_5109_);
v___x_5114_ = v_reuseFailAlloc_5115_;
goto v_reusejp_5113_;
}
v_reusejp_5113_:
{
return v___x_5114_;
}
}
}
}
else
{
uint8_t v___x_5117_; 
lean_inc(v_baseName_5043_);
lean_inc(v_wsIdx_5042_);
lean_dec(v___x_5047_);
lean_del_object(v___x_5026_);
lean_dec_ref(v_depIdxs_5024_);
lean_dec_ref(v_ws_5023_);
lean_dec_ref(v_leanOpts_5014_);
lean_dec_ref(v___y_5013_);
lean_dec_ref(v_pkg_5011_);
v___x_5117_ = lean_nat_dec_eq(v_wsIdx_5042_, v___x_5034_);
lean_dec(v_wsIdx_5042_);
if (v___x_5117_ == 0)
{
lean_object* v___x_5118_; uint8_t v___x_5119_; lean_object* v___x_5120_; lean_object* v___x_5121_; lean_object* v___x_5122_; lean_object* v___x_5123_; lean_object* v___x_5124_; lean_object* v___x_5125_; lean_object* v___x_5126_; lean_object* v___x_5127_; uint8_t v___x_5128_; lean_object* v___x_5129_; lean_object* v___x_5130_; lean_object* v___x_5131_; lean_object* v___x_5132_; 
v___x_5118_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0_spec__0_spec__2___redArg___closed__0));
v___x_5119_ = 1;
lean_inc(v_name_5044_);
v___x_5120_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_name_5044_, v___x_5119_);
v___x_5121_ = lean_string_append(v___x_5118_, v___x_5120_);
lean_dec_ref(v___x_5120_);
v___x_5122_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0_spec__0_spec__2___redArg___closed__1));
v___x_5123_ = lean_string_append(v___x_5121_, v___x_5122_);
v___x_5124_ = l_Lean_Name_toString(v_baseName_5043_, v___x_5117_);
v___x_5125_ = lean_string_append(v___x_5123_, v___x_5124_);
lean_dec_ref(v___x_5124_);
v___x_5126_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0_spec__0_spec__2___redArg___closed__2));
v___x_5127_ = lean_string_append(v___x_5125_, v___x_5126_);
v___x_5128_ = 3;
v___x_5129_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_5129_, 0, v___x_5127_);
lean_ctor_set_uint8(v___x_5129_, sizeof(void*)*1, v___x_5128_);
lean_inc_ref(v___y_5020_);
v___x_5130_ = lean_apply_2(v___y_5020_, v___x_5129_, lean_box(0));
v___x_5131_ = lean_box(0);
v___x_5132_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5132_, 0, v___x_5131_);
return v___x_5132_;
}
else
{
lean_object* v___x_5133_; lean_object* v___x_5134_; lean_object* v___x_5135_; lean_object* v___x_5136_; lean_object* v___x_5137_; lean_object* v___x_5138_; lean_object* v___x_5139_; lean_object* v___x_5140_; uint8_t v___x_5141_; lean_object* v___x_5142_; lean_object* v___x_5143_; lean_object* v___x_5144_; lean_object* v___x_5145_; 
lean_dec(v_baseName_5043_);
v___x_5133_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0_spec__0_spec__2___redArg___closed__0));
lean_inc(v_name_5044_);
v___x_5134_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_name_5044_, v___x_5117_);
v___x_5135_ = lean_string_append(v___x_5133_, v___x_5134_);
v___x_5136_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0_spec__0_spec__2___redArg___closed__3));
v___x_5137_ = lean_string_append(v___x_5135_, v___x_5136_);
v___x_5138_ = lean_string_append(v___x_5137_, v___x_5134_);
lean_dec_ref(v___x_5134_);
v___x_5139_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0_spec__0_spec__2___redArg___closed__4));
v___x_5140_ = lean_string_append(v___x_5138_, v___x_5139_);
v___x_5141_ = 3;
v___x_5142_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_5142_, 0, v___x_5140_);
lean_ctor_set_uint8(v___x_5142_, sizeof(void*)*1, v___x_5141_);
lean_inc_ref(v___y_5020_);
v___x_5143_ = lean_apply_2(v___y_5020_, v___x_5142_, lean_box(0));
v___x_5144_ = lean_box(0);
v___x_5145_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5145_, 0, v___x_5144_);
return v___x_5145_;
}
}
}
else
{
lean_object* v___x_5146_; lean_object* v___x_5147_; lean_object* v___x_5148_; uint8_t v___x_5149_; lean_object* v___x_5150_; lean_object* v___x_5151_; lean_object* v___x_5152_; lean_object* v___x_5153_; 
lean_inc(v_baseName_5043_);
lean_del_object(v___x_5026_);
lean_dec_ref(v_depIdxs_5024_);
lean_dec_ref(v_ws_5023_);
lean_dec_ref(v_leanOpts_5014_);
lean_dec_ref(v___y_5013_);
lean_dec_ref(v_pkg_5011_);
v___x_5146_ = l_Lean_Name_toString(v_baseName_5043_, v___x_5022_);
v___x_5147_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__6___closed__0));
v___x_5148_ = lean_string_append(v___x_5146_, v___x_5147_);
v___x_5149_ = 3;
v___x_5150_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_5150_, 0, v___x_5148_);
lean_ctor_set_uint8(v___x_5150_, sizeof(void*)*1, v___x_5149_);
lean_inc_ref(v___y_5020_);
v___x_5151_ = lean_apply_2(v___y_5020_, v___x_5150_, lean_box(0));
v___x_5152_ = lean_box(0);
v___x_5153_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5153_, 0, v___x_5152_);
return v___x_5153_;
}
}
}
}
else
{
lean_object* v___x_5155_; 
lean_dec_ref(v_leanOpts_5014_);
lean_dec_ref(v___y_5013_);
lean_dec_ref(v_pkg_5011_);
v___x_5155_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5155_, 0, v_b_5019_);
return v___x_5155_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0_spec__0_spec__2___redArg___boxed(lean_object* v_pkg_5156_, lean_object* v___y_5157_, lean_object* v___y_5158_, lean_object* v_leanOpts_5159_, lean_object* v_reconfigure_5160_, lean_object* v_as_5161_, lean_object* v_i_5162_, lean_object* v_stop_5163_, lean_object* v_b_5164_, lean_object* v___y_5165_, lean_object* v___y_5166_){
_start:
{
uint8_t v_reconfigure_boxed_5167_; size_t v_i_boxed_5168_; size_t v_stop_boxed_5169_; lean_object* v_res_5170_; 
v_reconfigure_boxed_5167_ = lean_unbox(v_reconfigure_5160_);
v_i_boxed_5168_ = lean_unbox_usize(v_i_5162_);
lean_dec(v_i_5162_);
v_stop_boxed_5169_ = lean_unbox_usize(v_stop_5163_);
lean_dec(v_stop_5163_);
v_res_5170_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0_spec__0_spec__2___redArg(v_pkg_5156_, v___y_5157_, v___y_5158_, v_leanOpts_5159_, v_reconfigure_boxed_5167_, v_as_5161_, v_i_boxed_5168_, v_stop_boxed_5169_, v_b_5164_, v___y_5165_);
lean_dec_ref(v___y_5165_);
lean_dec_ref(v_as_5161_);
lean_dec(v___y_5157_);
return v_res_5170_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0_spec__0(lean_object* v_start_5171_, lean_object* v_pkg_5172_, lean_object* v___y_5173_, lean_object* v___y_5174_, lean_object* v_leanOpts_5175_, uint8_t v_reconfigure_5176_, lean_object* v_as_5177_, size_t v_i_5178_, size_t v_stop_5179_, lean_object* v_b_5180_, lean_object* v___y_5181_){
_start:
{
uint8_t v___x_5183_; 
v___x_5183_ = lean_usize_dec_eq(v_i_5178_, v_stop_5179_);
if (v___x_5183_ == 0)
{
lean_object* v_ws_5184_; lean_object* v_depIdxs_5185_; lean_object* v___x_5187_; uint8_t v_isShared_5188_; uint8_t v_isSharedCheck_5315_; 
v_ws_5184_ = lean_ctor_get(v_b_5180_, 0);
v_depIdxs_5185_ = lean_ctor_get(v_b_5180_, 1);
v_isSharedCheck_5315_ = !lean_is_exclusive(v_b_5180_);
if (v_isSharedCheck_5315_ == 0)
{
v___x_5187_ = v_b_5180_;
v_isShared_5188_ = v_isSharedCheck_5315_;
goto v_resetjp_5186_;
}
else
{
lean_inc(v_depIdxs_5185_);
lean_inc(v_ws_5184_);
lean_dec(v_b_5180_);
v___x_5187_ = lean_box(0);
v_isShared_5188_ = v_isSharedCheck_5315_;
goto v_resetjp_5186_;
}
v_resetjp_5186_:
{
lean_object* v_lakeEnv_5189_; lean_object* v_packages_5190_; size_t v___x_5191_; size_t v___x_5192_; lean_object* v___x_5193_; lean_object* v___f_5194_; lean_object* v___x_5195_; lean_object* v___x_5196_; 
v_lakeEnv_5189_ = lean_ctor_get(v_ws_5184_, 0);
v_packages_5190_ = lean_ctor_get(v_ws_5184_, 4);
v___x_5191_ = ((size_t)1ULL);
v___x_5192_ = lean_usize_sub(v_i_5178_, v___x_5191_);
v___x_5193_ = lean_array_uget_borrowed(v_as_5177_, v___x_5192_);
lean_inc(v___x_5193_);
v___f_5194_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_updateAndMaterializeCore_spec__4_spec__4___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_5194_, 0, v___x_5193_);
v___x_5195_ = lean_unsigned_to_nat(0u);
v___x_5196_ = l___private_Init_Data_Array_Basic_0__Array_findFinIdx_x3f_loop(lean_box(0), v___f_5194_, v_packages_5190_, v___x_5195_);
if (lean_obj_tag(v___x_5196_) == 1)
{
lean_object* v_val_5197_; lean_object* v___x_5198_; lean_object* v___x_5200_; 
v_val_5197_ = lean_ctor_get(v___x_5196_, 0);
lean_inc(v_val_5197_);
lean_dec_ref_known(v___x_5196_, 1);
v___x_5198_ = lean_array_push(v_depIdxs_5185_, v_val_5197_);
if (v_isShared_5188_ == 0)
{
lean_ctor_set(v___x_5187_, 1, v___x_5198_);
v___x_5200_ = v___x_5187_;
goto v_reusejp_5199_;
}
else
{
lean_object* v_reuseFailAlloc_5202_; 
v_reuseFailAlloc_5202_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5202_, 0, v_ws_5184_);
lean_ctor_set(v_reuseFailAlloc_5202_, 1, v___x_5198_);
v___x_5200_ = v_reuseFailAlloc_5202_;
goto v_reusejp_5199_;
}
v_reusejp_5199_:
{
lean_object* v___x_5201_; 
v___x_5201_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0_spec__0_spec__2___redArg(v_pkg_5172_, v___y_5173_, v___y_5174_, v_leanOpts_5175_, v_reconfigure_5176_, v_as_5177_, v___x_5192_, v_stop_5179_, v___x_5200_, v___y_5181_);
return v___x_5201_;
}
}
else
{
lean_object* v_wsIdx_5203_; lean_object* v_baseName_5204_; lean_object* v_name_5205_; lean_object* v_opts_5206_; uint8_t v___x_5207_; 
lean_dec(v___x_5196_);
v_wsIdx_5203_ = lean_ctor_get(v_pkg_5172_, 0);
v_baseName_5204_ = lean_ctor_get(v_pkg_5172_, 1);
v_name_5205_ = lean_ctor_get(v___x_5193_, 0);
v_opts_5206_ = lean_ctor_get(v___x_5193_, 4);
v___x_5207_ = lean_name_eq(v_baseName_5204_, v_name_5205_);
if (v___x_5207_ == 0)
{
lean_object* v___x_5208_; 
v___x_5208_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v___y_5173_, v_name_5205_);
if (lean_obj_tag(v___x_5208_) == 1)
{
lean_object* v_val_5209_; lean_object* v___x_5210_; lean_object* v_dir_5211_; lean_object* v___x_5212_; 
v_val_5209_ = lean_ctor_get(v___x_5208_, 0);
lean_inc(v_val_5209_);
lean_dec_ref_known(v___x_5208_, 1);
v___x_5210_ = lean_array_fget_borrowed(v_packages_5190_, v___x_5195_);
v_dir_5211_ = lean_ctor_get(v___x_5210_, 4);
lean_inc_ref(v___y_5174_);
lean_inc_ref(v_dir_5211_);
v___x_5212_ = l_Lake_PackageEntry_materialize(v_val_5209_, v_lakeEnv_5189_, v_dir_5211_, v___y_5174_, v___y_5181_);
if (lean_obj_tag(v___x_5212_) == 0)
{
lean_object* v_a_5213_; lean_object* v___x_5215_; uint8_t v_isShared_5216_; uint8_t v_isSharedCheck_5269_; 
v_a_5213_ = lean_ctor_get(v___x_5212_, 0);
v_isSharedCheck_5269_ = !lean_is_exclusive(v___x_5212_);
if (v_isSharedCheck_5269_ == 0)
{
v___x_5215_ = v___x_5212_;
v_isShared_5216_ = v_isSharedCheck_5269_;
goto v_resetjp_5214_;
}
else
{
lean_inc(v_a_5213_);
lean_dec(v___x_5212_);
v___x_5215_ = lean_box(0);
v_isShared_5216_ = v_isSharedCheck_5269_;
goto v_resetjp_5214_;
}
v_resetjp_5214_:
{
lean_object* v___x_5217_; lean_object* v_wsIdx_5218_; lean_object* v___x_5219_; 
v___x_5217_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_reuseManifest___closed__4));
v_wsIdx_5218_ = lean_array_get_size(v_packages_5190_);
lean_inc_ref(v_leanOpts_5175_);
lean_inc(v_opts_5206_);
v___x_5219_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_addDepPackage_x27(v_ws_5184_, v_a_5213_, v_opts_5206_, v_leanOpts_5175_, v_reconfigure_5176_, v___x_5217_);
if (lean_obj_tag(v___x_5219_) == 0)
{
lean_object* v_a_5220_; lean_object* v_a_5221_; lean_object* v___x_5222_; lean_object* v___x_5224_; 
lean_del_object(v___x_5215_);
v_a_5220_ = lean_ctor_get(v___x_5219_, 0);
lean_inc(v_a_5220_);
v_a_5221_ = lean_ctor_get(v___x_5219_, 1);
lean_inc(v_a_5221_);
lean_dec_ref_known(v___x_5219_, 2);
v___x_5222_ = lean_array_push(v_depIdxs_5185_, v_wsIdx_5218_);
if (v_isShared_5188_ == 0)
{
lean_ctor_set(v___x_5187_, 1, v___x_5222_);
lean_ctor_set(v___x_5187_, 0, v_a_5220_);
v___x_5224_ = v___x_5187_;
goto v_reusejp_5223_;
}
else
{
lean_object* v_reuseFailAlloc_5241_; 
v_reuseFailAlloc_5241_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5241_, 0, v_a_5220_);
lean_ctor_set(v_reuseFailAlloc_5241_, 1, v___x_5222_);
v___x_5224_ = v_reuseFailAlloc_5241_;
goto v_reusejp_5223_;
}
v_reusejp_5223_:
{
lean_object* v___x_5225_; uint8_t v___x_5226_; 
v___x_5225_ = lean_array_get_size(v_a_5221_);
v___x_5226_ = lean_nat_dec_lt(v___x_5195_, v___x_5225_);
if (v___x_5226_ == 0)
{
lean_object* v___x_5227_; 
lean_dec(v_a_5221_);
v___x_5227_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0_spec__0_spec__2___redArg(v_pkg_5172_, v___y_5173_, v___y_5174_, v_leanOpts_5175_, v_reconfigure_5176_, v_as_5177_, v___x_5192_, v_stop_5179_, v___x_5224_, v___y_5181_);
return v___x_5227_;
}
else
{
lean_object* v___x_5228_; size_t v___x_5229_; size_t v___x_5230_; lean_object* v___x_5231_; 
v___x_5228_ = lean_box(0);
v___x_5229_ = ((size_t)0ULL);
v___x_5230_ = lean_usize_of_nat(v___x_5225_);
v___x_5231_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__3(v_a_5221_, v___x_5229_, v___x_5230_, v___x_5228_, v___y_5181_);
lean_dec(v_a_5221_);
if (lean_obj_tag(v___x_5231_) == 0)
{
lean_object* v___x_5232_; 
lean_dec_ref_known(v___x_5231_, 1);
v___x_5232_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0_spec__0_spec__2___redArg(v_pkg_5172_, v___y_5173_, v___y_5174_, v_leanOpts_5175_, v_reconfigure_5176_, v_as_5177_, v___x_5192_, v_stop_5179_, v___x_5224_, v___y_5181_);
return v___x_5232_;
}
else
{
lean_object* v_a_5233_; lean_object* v___x_5235_; uint8_t v_isShared_5236_; uint8_t v_isSharedCheck_5240_; 
lean_dec_ref(v___x_5224_);
lean_dec_ref(v_leanOpts_5175_);
lean_dec_ref(v___y_5174_);
lean_dec_ref(v_pkg_5172_);
v_a_5233_ = lean_ctor_get(v___x_5231_, 0);
v_isSharedCheck_5240_ = !lean_is_exclusive(v___x_5231_);
if (v_isSharedCheck_5240_ == 0)
{
v___x_5235_ = v___x_5231_;
v_isShared_5236_ = v_isSharedCheck_5240_;
goto v_resetjp_5234_;
}
else
{
lean_inc(v_a_5233_);
lean_dec(v___x_5231_);
v___x_5235_ = lean_box(0);
v_isShared_5236_ = v_isSharedCheck_5240_;
goto v_resetjp_5234_;
}
v_resetjp_5234_:
{
lean_object* v___x_5238_; 
if (v_isShared_5236_ == 0)
{
v___x_5238_ = v___x_5235_;
goto v_reusejp_5237_;
}
else
{
lean_object* v_reuseFailAlloc_5239_; 
v_reuseFailAlloc_5239_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5239_, 0, v_a_5233_);
v___x_5238_ = v_reuseFailAlloc_5239_;
goto v_reusejp_5237_;
}
v_reusejp_5237_:
{
return v___x_5238_;
}
}
}
}
}
}
else
{
lean_object* v_a_5242_; lean_object* v___x_5243_; uint8_t v___x_5244_; 
lean_del_object(v___x_5187_);
lean_dec_ref(v_depIdxs_5185_);
lean_dec_ref(v_leanOpts_5175_);
lean_dec_ref(v___y_5174_);
lean_dec_ref(v_pkg_5172_);
v_a_5242_ = lean_ctor_get(v___x_5219_, 1);
lean_inc(v_a_5242_);
lean_dec_ref_known(v___x_5219_, 2);
v___x_5243_ = lean_array_get_size(v_a_5242_);
v___x_5244_ = lean_nat_dec_lt(v___x_5195_, v___x_5243_);
if (v___x_5244_ == 0)
{
lean_object* v___x_5245_; lean_object* v___x_5247_; 
lean_dec(v_a_5242_);
v___x_5245_ = lean_box(0);
if (v_isShared_5216_ == 0)
{
lean_ctor_set_tag(v___x_5215_, 1);
lean_ctor_set(v___x_5215_, 0, v___x_5245_);
v___x_5247_ = v___x_5215_;
goto v_reusejp_5246_;
}
else
{
lean_object* v_reuseFailAlloc_5248_; 
v_reuseFailAlloc_5248_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5248_, 0, v___x_5245_);
v___x_5247_ = v_reuseFailAlloc_5248_;
goto v_reusejp_5246_;
}
v_reusejp_5246_:
{
return v___x_5247_;
}
}
else
{
lean_object* v___x_5249_; size_t v___x_5250_; size_t v___x_5251_; lean_object* v___x_5252_; 
lean_del_object(v___x_5215_);
v___x_5249_ = lean_box(0);
v___x_5250_ = ((size_t)0ULL);
v___x_5251_ = lean_usize_of_nat(v___x_5243_);
v___x_5252_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_reuseManifest_spec__3(v_a_5242_, v___x_5250_, v___x_5251_, v___x_5249_, v___y_5181_);
lean_dec(v_a_5242_);
if (lean_obj_tag(v___x_5252_) == 0)
{
lean_object* v___x_5254_; uint8_t v_isShared_5255_; uint8_t v_isSharedCheck_5259_; 
v_isSharedCheck_5259_ = !lean_is_exclusive(v___x_5252_);
if (v_isSharedCheck_5259_ == 0)
{
lean_object* v_unused_5260_; 
v_unused_5260_ = lean_ctor_get(v___x_5252_, 0);
lean_dec(v_unused_5260_);
v___x_5254_ = v___x_5252_;
v_isShared_5255_ = v_isSharedCheck_5259_;
goto v_resetjp_5253_;
}
else
{
lean_dec(v___x_5252_);
v___x_5254_ = lean_box(0);
v_isShared_5255_ = v_isSharedCheck_5259_;
goto v_resetjp_5253_;
}
v_resetjp_5253_:
{
lean_object* v___x_5257_; 
if (v_isShared_5255_ == 0)
{
lean_ctor_set_tag(v___x_5254_, 1);
lean_ctor_set(v___x_5254_, 0, v___x_5249_);
v___x_5257_ = v___x_5254_;
goto v_reusejp_5256_;
}
else
{
lean_object* v_reuseFailAlloc_5258_; 
v_reuseFailAlloc_5258_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5258_, 0, v___x_5249_);
v___x_5257_ = v_reuseFailAlloc_5258_;
goto v_reusejp_5256_;
}
v_reusejp_5256_:
{
return v___x_5257_;
}
}
}
else
{
lean_object* v_a_5261_; lean_object* v___x_5263_; uint8_t v_isShared_5264_; uint8_t v_isSharedCheck_5268_; 
v_a_5261_ = lean_ctor_get(v___x_5252_, 0);
v_isSharedCheck_5268_ = !lean_is_exclusive(v___x_5252_);
if (v_isSharedCheck_5268_ == 0)
{
v___x_5263_ = v___x_5252_;
v_isShared_5264_ = v_isSharedCheck_5268_;
goto v_resetjp_5262_;
}
else
{
lean_inc(v_a_5261_);
lean_dec(v___x_5252_);
v___x_5263_ = lean_box(0);
v_isShared_5264_ = v_isSharedCheck_5268_;
goto v_resetjp_5262_;
}
v_resetjp_5262_:
{
lean_object* v___x_5266_; 
if (v_isShared_5264_ == 0)
{
v___x_5266_ = v___x_5263_;
goto v_reusejp_5265_;
}
else
{
lean_object* v_reuseFailAlloc_5267_; 
v_reuseFailAlloc_5267_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5267_, 0, v_a_5261_);
v___x_5266_ = v_reuseFailAlloc_5267_;
goto v_reusejp_5265_;
}
v_reusejp_5265_:
{
return v___x_5266_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_5270_; lean_object* v___x_5272_; uint8_t v_isShared_5273_; uint8_t v_isSharedCheck_5277_; 
lean_del_object(v___x_5187_);
lean_dec_ref(v_depIdxs_5185_);
lean_dec_ref(v_ws_5184_);
lean_dec_ref(v_leanOpts_5175_);
lean_dec_ref(v___y_5174_);
lean_dec_ref(v_pkg_5172_);
v_a_5270_ = lean_ctor_get(v___x_5212_, 0);
v_isSharedCheck_5277_ = !lean_is_exclusive(v___x_5212_);
if (v_isSharedCheck_5277_ == 0)
{
v___x_5272_ = v___x_5212_;
v_isShared_5273_ = v_isSharedCheck_5277_;
goto v_resetjp_5271_;
}
else
{
lean_inc(v_a_5270_);
lean_dec(v___x_5212_);
v___x_5272_ = lean_box(0);
v_isShared_5273_ = v_isSharedCheck_5277_;
goto v_resetjp_5271_;
}
v_resetjp_5271_:
{
lean_object* v___x_5275_; 
if (v_isShared_5273_ == 0)
{
v___x_5275_ = v___x_5272_;
goto v_reusejp_5274_;
}
else
{
lean_object* v_reuseFailAlloc_5276_; 
v_reuseFailAlloc_5276_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5276_, 0, v_a_5270_);
v___x_5275_ = v_reuseFailAlloc_5276_;
goto v_reusejp_5274_;
}
v_reusejp_5274_:
{
return v___x_5275_;
}
}
}
}
else
{
uint8_t v___x_5278_; 
lean_inc(v_baseName_5204_);
lean_inc(v_wsIdx_5203_);
lean_dec(v___x_5208_);
lean_del_object(v___x_5187_);
lean_dec_ref(v_depIdxs_5185_);
lean_dec_ref(v_ws_5184_);
lean_dec_ref(v_leanOpts_5175_);
lean_dec_ref(v___y_5174_);
lean_dec_ref(v_pkg_5172_);
v___x_5278_ = lean_nat_dec_eq(v_wsIdx_5203_, v___x_5195_);
lean_dec(v_wsIdx_5203_);
if (v___x_5278_ == 0)
{
lean_object* v___x_5279_; uint8_t v___x_5280_; lean_object* v___x_5281_; lean_object* v___x_5282_; lean_object* v___x_5283_; lean_object* v___x_5284_; lean_object* v___x_5285_; lean_object* v___x_5286_; lean_object* v___x_5287_; lean_object* v___x_5288_; uint8_t v___x_5289_; lean_object* v___x_5290_; lean_object* v___x_5291_; lean_object* v___x_5292_; lean_object* v___x_5293_; 
v___x_5279_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0_spec__0_spec__2___redArg___closed__0));
v___x_5280_ = 1;
lean_inc(v_name_5205_);
v___x_5281_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_name_5205_, v___x_5280_);
v___x_5282_ = lean_string_append(v___x_5279_, v___x_5281_);
lean_dec_ref(v___x_5281_);
v___x_5283_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0_spec__0_spec__2___redArg___closed__1));
v___x_5284_ = lean_string_append(v___x_5282_, v___x_5283_);
v___x_5285_ = l_Lean_Name_toString(v_baseName_5204_, v___x_5278_);
v___x_5286_ = lean_string_append(v___x_5284_, v___x_5285_);
lean_dec_ref(v___x_5285_);
v___x_5287_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0_spec__0_spec__2___redArg___closed__2));
v___x_5288_ = lean_string_append(v___x_5286_, v___x_5287_);
v___x_5289_ = 3;
v___x_5290_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_5290_, 0, v___x_5288_);
lean_ctor_set_uint8(v___x_5290_, sizeof(void*)*1, v___x_5289_);
lean_inc_ref(v___y_5181_);
v___x_5291_ = lean_apply_2(v___y_5181_, v___x_5290_, lean_box(0));
v___x_5292_ = lean_box(0);
v___x_5293_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5293_, 0, v___x_5292_);
return v___x_5293_;
}
else
{
lean_object* v___x_5294_; lean_object* v___x_5295_; lean_object* v___x_5296_; lean_object* v___x_5297_; lean_object* v___x_5298_; lean_object* v___x_5299_; lean_object* v___x_5300_; lean_object* v___x_5301_; uint8_t v___x_5302_; lean_object* v___x_5303_; lean_object* v___x_5304_; lean_object* v___x_5305_; lean_object* v___x_5306_; 
lean_dec(v_baseName_5204_);
v___x_5294_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0_spec__0_spec__2___redArg___closed__0));
lean_inc(v_name_5205_);
v___x_5295_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_name_5205_, v___x_5278_);
v___x_5296_ = lean_string_append(v___x_5294_, v___x_5295_);
v___x_5297_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0_spec__0_spec__2___redArg___closed__3));
v___x_5298_ = lean_string_append(v___x_5296_, v___x_5297_);
v___x_5299_ = lean_string_append(v___x_5298_, v___x_5295_);
lean_dec_ref(v___x_5295_);
v___x_5300_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0_spec__0_spec__2___redArg___closed__4));
v___x_5301_ = lean_string_append(v___x_5299_, v___x_5300_);
v___x_5302_ = 3;
v___x_5303_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_5303_, 0, v___x_5301_);
lean_ctor_set_uint8(v___x_5303_, sizeof(void*)*1, v___x_5302_);
lean_inc_ref(v___y_5181_);
v___x_5304_ = lean_apply_2(v___y_5181_, v___x_5303_, lean_box(0));
v___x_5305_ = lean_box(0);
v___x_5306_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5306_, 0, v___x_5305_);
return v___x_5306_;
}
}
}
else
{
lean_object* v___x_5307_; lean_object* v___x_5308_; lean_object* v___x_5309_; uint8_t v___x_5310_; lean_object* v___x_5311_; lean_object* v___x_5312_; lean_object* v___x_5313_; lean_object* v___x_5314_; 
lean_inc(v_baseName_5204_);
lean_del_object(v___x_5187_);
lean_dec_ref(v_depIdxs_5185_);
lean_dec_ref(v_ws_5184_);
lean_dec_ref(v_leanOpts_5175_);
lean_dec_ref(v___y_5174_);
lean_dec_ref(v_pkg_5172_);
v___x_5307_ = l_Lean_Name_toString(v_baseName_5204_, v___x_5183_);
v___x_5308_ = ((lean_object*)(l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___redArg___lam__6___closed__0));
v___x_5309_ = lean_string_append(v___x_5307_, v___x_5308_);
v___x_5310_ = 3;
v___x_5311_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_5311_, 0, v___x_5309_);
lean_ctor_set_uint8(v___x_5311_, sizeof(void*)*1, v___x_5310_);
lean_inc_ref(v___y_5181_);
v___x_5312_ = lean_apply_2(v___y_5181_, v___x_5311_, lean_box(0));
v___x_5313_ = lean_box(0);
v___x_5314_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5314_, 0, v___x_5313_);
return v___x_5314_;
}
}
}
}
else
{
lean_object* v___x_5316_; 
lean_dec_ref(v_leanOpts_5175_);
lean_dec_ref(v___y_5174_);
lean_dec_ref(v_pkg_5172_);
v___x_5316_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5316_, 0, v_b_5180_);
return v___x_5316_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0_spec__0___boxed(lean_object* v_start_5317_, lean_object* v_pkg_5318_, lean_object* v___y_5319_, lean_object* v___y_5320_, lean_object* v_leanOpts_5321_, lean_object* v_reconfigure_5322_, lean_object* v_as_5323_, lean_object* v_i_5324_, lean_object* v_stop_5325_, lean_object* v_b_5326_, lean_object* v___y_5327_, lean_object* v___y_5328_){
_start:
{
uint8_t v_reconfigure_boxed_5329_; size_t v_i_boxed_5330_; size_t v_stop_boxed_5331_; lean_object* v_res_5332_; 
v_reconfigure_boxed_5329_ = lean_unbox(v_reconfigure_5322_);
v_i_boxed_5330_ = lean_unbox_usize(v_i_5324_);
lean_dec(v_i_5324_);
v_stop_boxed_5331_ = lean_unbox_usize(v_stop_5325_);
lean_dec(v_stop_5325_);
v_res_5332_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0_spec__0(v_start_5317_, v_pkg_5318_, v___y_5319_, v___y_5320_, v_leanOpts_5321_, v_reconfigure_boxed_5329_, v_as_5323_, v_i_boxed_5330_, v_stop_boxed_5331_, v_b_5326_, v___y_5327_);
lean_dec_ref(v___y_5327_);
lean_dec_ref(v_as_5323_);
lean_dec(v___y_5319_);
lean_dec(v_start_5317_);
return v_res_5332_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0___redArg(lean_object* v___y_5333_, lean_object* v___y_5334_, lean_object* v_leanOpts_5335_, uint8_t v_reconfigure_5336_, lean_object* v_ws_5337_, lean_object* v_i_5338_, lean_object* v_next_5339_, lean_object* v___y_5340_){
_start:
{
lean_object* v_packages_5342_; lean_object* v_pkg_5343_; lean_object* v_ws_5345_; lean_object* v_depIdxs_5346_; lean_object* v___y_5347_; lean_object* v_____x_5357_; lean_object* v___y_5358_; lean_object* v_depConfigs_5361_; lean_object* v_start_5362_; lean_object* v___x_5363_; lean_object* v___x_5364_; lean_object* v_s_5365_; lean_object* v___x_5366_; uint8_t v___x_5367_; 
v_packages_5342_ = lean_ctor_get(v_ws_5337_, 4);
v_pkg_5343_ = lean_array_fget(v_packages_5342_, v_i_5338_);
lean_dec(v_i_5338_);
v_depConfigs_5361_ = lean_ctor_get(v_pkg_5343_, 12);
v_start_5362_ = lean_array_get_size(v_packages_5342_);
v___x_5363_ = lean_array_get_size(v_depConfigs_5361_);
v___x_5364_ = lean_mk_empty_array_with_capacity(v___x_5363_);
lean_inc_ref(v___x_5364_);
lean_inc_ref(v_ws_5337_);
v_s_5365_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_s_5365_, 0, v_ws_5337_);
lean_ctor_set(v_s_5365_, 1, v___x_5364_);
v___x_5366_ = lean_unsigned_to_nat(0u);
v___x_5367_ = lean_nat_dec_le(v___x_5363_, v___x_5363_);
if (v___x_5367_ == 0)
{
uint8_t v___x_5368_; 
v___x_5368_ = lean_nat_dec_lt(v___x_5366_, v___x_5363_);
if (v___x_5368_ == 0)
{
lean_object* v_ws_5369_; lean_object* v_packages_5370_; lean_object* v___x_5371_; uint8_t v___x_5372_; 
lean_dec_ref_known(v_s_5365_, 2);
v_ws_5369_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_setDepIdxs___redArg(v_ws_5337_, v_pkg_5343_, v___x_5364_);
v_packages_5370_ = lean_ctor_get(v_ws_5369_, 4);
lean_inc_ref(v_packages_5370_);
v___x_5371_ = lean_array_get_size(v_packages_5370_);
lean_dec_ref(v_packages_5370_);
v___x_5372_ = lean_nat_dec_lt(v_next_5339_, v___x_5371_);
if (v___x_5372_ == 0)
{
lean_object* v___x_5373_; 
lean_dec(v_next_5339_);
lean_dec_ref(v_leanOpts_5335_);
lean_dec_ref(v___y_5334_);
v___x_5373_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5373_, 0, v_ws_5369_);
return v___x_5373_;
}
else
{
lean_object* v___x_5374_; lean_object* v___x_5375_; 
v___x_5374_ = lean_unsigned_to_nat(1u);
v___x_5375_ = lean_nat_add(v_next_5339_, v___x_5374_);
v_ws_5337_ = v_ws_5369_;
v_i_5338_ = v_next_5339_;
v_next_5339_ = v___x_5375_;
goto _start;
}
}
else
{
size_t v___x_5377_; size_t v___x_5378_; lean_object* v___x_5379_; 
lean_dec_ref(v___x_5364_);
lean_dec_ref(v_ws_5337_);
v___x_5377_ = lean_usize_of_nat(v___x_5363_);
v___x_5378_ = ((size_t)0ULL);
lean_inc_ref(v_leanOpts_5335_);
lean_inc_ref(v___y_5334_);
lean_inc(v_pkg_5343_);
v___x_5379_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0_spec__0(v_start_5362_, v_pkg_5343_, v___y_5333_, v___y_5334_, v_leanOpts_5335_, v_reconfigure_5336_, v_depConfigs_5361_, v___x_5377_, v___x_5378_, v_s_5365_, v___y_5340_);
if (lean_obj_tag(v___x_5379_) == 0)
{
lean_object* v_a_5380_; 
v_a_5380_ = lean_ctor_get(v___x_5379_, 0);
lean_inc(v_a_5380_);
lean_dec_ref_known(v___x_5379_, 1);
v_____x_5357_ = v_a_5380_;
v___y_5358_ = v___y_5340_;
goto v___jp_5356_;
}
else
{
lean_object* v_a_5381_; lean_object* v___x_5383_; uint8_t v_isShared_5384_; uint8_t v_isSharedCheck_5388_; 
lean_dec(v_pkg_5343_);
lean_dec(v_next_5339_);
lean_dec_ref(v_leanOpts_5335_);
lean_dec_ref(v___y_5334_);
v_a_5381_ = lean_ctor_get(v___x_5379_, 0);
v_isSharedCheck_5388_ = !lean_is_exclusive(v___x_5379_);
if (v_isSharedCheck_5388_ == 0)
{
v___x_5383_ = v___x_5379_;
v_isShared_5384_ = v_isSharedCheck_5388_;
goto v_resetjp_5382_;
}
else
{
lean_inc(v_a_5381_);
lean_dec(v___x_5379_);
v___x_5383_ = lean_box(0);
v_isShared_5384_ = v_isSharedCheck_5388_;
goto v_resetjp_5382_;
}
v_resetjp_5382_:
{
lean_object* v___x_5386_; 
if (v_isShared_5384_ == 0)
{
v___x_5386_ = v___x_5383_;
goto v_reusejp_5385_;
}
else
{
lean_object* v_reuseFailAlloc_5387_; 
v_reuseFailAlloc_5387_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5387_, 0, v_a_5381_);
v___x_5386_ = v_reuseFailAlloc_5387_;
goto v_reusejp_5385_;
}
v_reusejp_5385_:
{
return v___x_5386_;
}
}
}
}
}
else
{
uint8_t v___x_5389_; 
v___x_5389_ = lean_nat_dec_lt(v___x_5366_, v___x_5363_);
if (v___x_5389_ == 0)
{
lean_dec_ref_known(v_s_5365_, 2);
v_ws_5345_ = v_ws_5337_;
v_depIdxs_5346_ = v___x_5364_;
v___y_5347_ = v___y_5340_;
goto v___jp_5344_;
}
else
{
size_t v___x_5390_; size_t v___x_5391_; lean_object* v___x_5392_; 
lean_dec_ref(v___x_5364_);
lean_dec_ref(v_ws_5337_);
v___x_5390_ = lean_usize_of_nat(v___x_5363_);
v___x_5391_ = ((size_t)0ULL);
lean_inc_ref(v_leanOpts_5335_);
lean_inc_ref(v___y_5334_);
lean_inc(v_pkg_5343_);
v___x_5392_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0_spec__0(v_start_5362_, v_pkg_5343_, v___y_5333_, v___y_5334_, v_leanOpts_5335_, v_reconfigure_5336_, v_depConfigs_5361_, v___x_5390_, v___x_5391_, v_s_5365_, v___y_5340_);
if (lean_obj_tag(v___x_5392_) == 0)
{
lean_object* v_a_5393_; 
v_a_5393_ = lean_ctor_get(v___x_5392_, 0);
lean_inc(v_a_5393_);
lean_dec_ref_known(v___x_5392_, 1);
v_____x_5357_ = v_a_5393_;
v___y_5358_ = v___y_5340_;
goto v___jp_5356_;
}
else
{
lean_object* v_a_5394_; lean_object* v___x_5396_; uint8_t v_isShared_5397_; uint8_t v_isSharedCheck_5401_; 
lean_dec(v_pkg_5343_);
lean_dec(v_next_5339_);
lean_dec_ref(v_leanOpts_5335_);
lean_dec_ref(v___y_5334_);
v_a_5394_ = lean_ctor_get(v___x_5392_, 0);
v_isSharedCheck_5401_ = !lean_is_exclusive(v___x_5392_);
if (v_isSharedCheck_5401_ == 0)
{
v___x_5396_ = v___x_5392_;
v_isShared_5397_ = v_isSharedCheck_5401_;
goto v_resetjp_5395_;
}
else
{
lean_inc(v_a_5394_);
lean_dec(v___x_5392_);
v___x_5396_ = lean_box(0);
v_isShared_5397_ = v_isSharedCheck_5401_;
goto v_resetjp_5395_;
}
v_resetjp_5395_:
{
lean_object* v___x_5399_; 
if (v_isShared_5397_ == 0)
{
v___x_5399_ = v___x_5396_;
goto v_reusejp_5398_;
}
else
{
lean_object* v_reuseFailAlloc_5400_; 
v_reuseFailAlloc_5400_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5400_, 0, v_a_5394_);
v___x_5399_ = v_reuseFailAlloc_5400_;
goto v_reusejp_5398_;
}
v_reusejp_5398_:
{
return v___x_5399_;
}
}
}
}
}
v___jp_5344_:
{
lean_object* v_ws_5348_; lean_object* v_packages_5349_; lean_object* v___x_5350_; uint8_t v___x_5351_; 
v_ws_5348_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_setDepIdxs___redArg(v_ws_5345_, v_pkg_5343_, v_depIdxs_5346_);
v_packages_5349_ = lean_ctor_get(v_ws_5348_, 4);
lean_inc_ref(v_packages_5349_);
v___x_5350_ = lean_array_get_size(v_packages_5349_);
lean_dec_ref(v_packages_5349_);
v___x_5351_ = lean_nat_dec_lt(v_next_5339_, v___x_5350_);
if (v___x_5351_ == 0)
{
lean_object* v___x_5352_; 
lean_dec(v_next_5339_);
lean_dec_ref(v_leanOpts_5335_);
lean_dec_ref(v___y_5334_);
v___x_5352_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5352_, 0, v_ws_5348_);
return v___x_5352_;
}
else
{
lean_object* v___x_5353_; lean_object* v___x_5354_; 
v___x_5353_ = lean_unsigned_to_nat(1u);
v___x_5354_ = lean_nat_add(v_next_5339_, v___x_5353_);
v_ws_5337_ = v_ws_5348_;
v_i_5338_ = v_next_5339_;
v_next_5339_ = v___x_5354_;
v___y_5340_ = v___y_5347_;
goto _start;
}
}
v___jp_5356_:
{
lean_object* v_ws_5359_; lean_object* v_depIdxs_5360_; 
v_ws_5359_ = lean_ctor_get(v_____x_5357_, 0);
lean_inc_ref(v_ws_5359_);
v_depIdxs_5360_ = lean_ctor_get(v_____x_5357_, 1);
lean_inc_ref(v_depIdxs_5360_);
lean_dec_ref(v_____x_5357_);
v_ws_5345_ = v_ws_5359_;
v_depIdxs_5346_ = v_depIdxs_5360_;
v___y_5347_ = v___y_5358_;
goto v___jp_5344_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0___redArg___boxed(lean_object* v___y_5402_, lean_object* v___y_5403_, lean_object* v_leanOpts_5404_, lean_object* v_reconfigure_5405_, lean_object* v_ws_5406_, lean_object* v_i_5407_, lean_object* v_next_5408_, lean_object* v___y_5409_, lean_object* v___y_5410_){
_start:
{
uint8_t v_reconfigure_boxed_5411_; lean_object* v_res_5412_; 
v_reconfigure_boxed_5411_ = lean_unbox(v_reconfigure_5405_);
v_res_5412_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0___redArg(v___y_5402_, v___y_5403_, v_leanOpts_5404_, v_reconfigure_boxed_5411_, v_ws_5406_, v_i_5407_, v_next_5408_, v___y_5409_);
lean_dec_ref(v___y_5409_);
lean_dec(v___y_5402_);
return v_res_5412_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Workspace_materializeDeps_spec__1_spec__2(lean_object* v_as_5413_, size_t v_i_5414_, size_t v_stop_5415_, lean_object* v_b_5416_){
_start:
{
uint8_t v___x_5417_; 
v___x_5417_ = lean_usize_dec_eq(v_i_5414_, v_stop_5415_);
if (v___x_5417_ == 0)
{
lean_object* v___x_5418_; lean_object* v_name_5419_; lean_object* v___x_5420_; size_t v___x_5421_; size_t v___x_5422_; 
v___x_5418_ = lean_array_uget_borrowed(v_as_5413_, v_i_5414_);
v_name_5419_ = lean_ctor_get(v___x_5418_, 0);
lean_inc(v___x_5418_);
lean_inc(v_name_5419_);
v___x_5420_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_name_5419_, v___x_5418_, v_b_5416_);
v___x_5421_ = ((size_t)1ULL);
v___x_5422_ = lean_usize_add(v_i_5414_, v___x_5421_);
v_i_5414_ = v___x_5422_;
v_b_5416_ = v___x_5420_;
goto _start;
}
else
{
return v_b_5416_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Workspace_materializeDeps_spec__1_spec__2___boxed(lean_object* v_as_5424_, lean_object* v_i_5425_, lean_object* v_stop_5426_, lean_object* v_b_5427_){
_start:
{
size_t v_i_boxed_5428_; size_t v_stop_boxed_5429_; lean_object* v_res_5430_; 
v_i_boxed_5428_ = lean_unbox_usize(v_i_5425_);
lean_dec(v_i_5425_);
v_stop_boxed_5429_ = lean_unbox_usize(v_stop_5426_);
lean_dec(v_stop_5426_);
v_res_5430_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Workspace_materializeDeps_spec__1_spec__2(v_as_5424_, v_i_boxed_5428_, v_stop_boxed_5429_, v_b_5427_);
lean_dec_ref(v_as_5424_);
return v_res_5430_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Workspace_materializeDeps_spec__1(lean_object* v_as_5431_, size_t v_i_5432_, size_t v_stop_5433_, lean_object* v_b_5434_){
_start:
{
uint8_t v___x_5435_; 
v___x_5435_ = lean_usize_dec_eq(v_i_5432_, v_stop_5433_);
if (v___x_5435_ == 0)
{
lean_object* v___x_5436_; lean_object* v_name_5437_; lean_object* v___x_5438_; size_t v___x_5439_; size_t v___x_5440_; lean_object* v___x_5441_; 
v___x_5436_ = lean_array_uget_borrowed(v_as_5431_, v_i_5432_);
v_name_5437_ = lean_ctor_get(v___x_5436_, 0);
lean_inc(v___x_5436_);
lean_inc(v_name_5437_);
v___x_5438_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_name_5437_, v___x_5436_, v_b_5434_);
v___x_5439_ = ((size_t)1ULL);
v___x_5440_ = lean_usize_add(v_i_5432_, v___x_5439_);
v___x_5441_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Workspace_materializeDeps_spec__1_spec__2(v_as_5431_, v___x_5440_, v_stop_5433_, v___x_5438_);
return v___x_5441_;
}
else
{
return v_b_5434_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Workspace_materializeDeps_spec__1___boxed(lean_object* v_as_5442_, lean_object* v_i_5443_, lean_object* v_stop_5444_, lean_object* v_b_5445_){
_start:
{
size_t v_i_boxed_5446_; size_t v_stop_boxed_5447_; lean_object* v_res_5448_; 
v_i_boxed_5446_ = lean_unbox_usize(v_i_5443_);
lean_dec(v_i_5443_);
v_stop_boxed_5447_ = lean_unbox_usize(v_stop_5444_);
lean_dec(v_stop_5444_);
v_res_5448_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Workspace_materializeDeps_spec__1(v_as_5442_, v_i_boxed_5446_, v_stop_boxed_5447_, v_b_5445_);
lean_dec_ref(v_as_5442_);
return v_res_5448_;
}
}
LEAN_EXPORT lean_object* l_Lake_Workspace_materializeDeps(lean_object* v_ws_5458_, lean_object* v_manifest_5459_, lean_object* v_leanOpts_5460_, uint8_t v_reconfigure_5461_, lean_object* v_overrides_5462_, lean_object* v_a_5463_){
_start:
{
lean_object* v___y_5466_; lean_object* v___y_5467_; lean_object* v___y_5468_; lean_object* v___y_5469_; lean_object* v___y_5470_; lean_object* v___y_5483_; lean_object* v___y_5484_; lean_object* v___y_5485_; lean_object* v___y_5486_; lean_object* v___y_5487_; lean_object* v___y_5488_; lean_object* v___y_5489_; lean_object* v___y_5497_; lean_object* v___y_5498_; lean_object* v___y_5499_; lean_object* v___y_5500_; lean_object* v___y_5501_; lean_object* v___y_5502_; lean_object* v___y_5503_; lean_object* v___y_5514_; lean_object* v___y_5515_; lean_object* v___y_5516_; lean_object* v___y_5517_; lean_object* v_packagesDir_x3f_5560_; lean_object* v_packages_5561_; lean_object* v___y_5563_; lean_object* v___y_5564_; lean_object* v___y_5577_; lean_object* v___x_5585_; lean_object* v___x_5586_; uint8_t v___x_5587_; 
v_packagesDir_x3f_5560_ = lean_ctor_get(v_manifest_5459_, 2);
lean_inc(v_packagesDir_x3f_5560_);
v_packages_5561_ = lean_ctor_get(v_manifest_5459_, 3);
lean_inc_ref(v_packages_5561_);
lean_dec_ref(v_manifest_5459_);
v___x_5585_ = lean_array_get_size(v_packages_5561_);
v___x_5586_ = lean_unsigned_to_nat(0u);
v___x_5587_ = lean_nat_dec_eq(v___x_5585_, v___x_5586_);
if (v___x_5587_ == 0)
{
lean_object* v_packages_5588_; lean_object* v___x_5589_; lean_object* v_config_5590_; lean_object* v_toWorkspaceConfig_5591_; lean_object* v___x_5592_; lean_object* v___x_5593_; lean_object* v___x_5594_; uint8_t v___x_5595_; 
v_packages_5588_ = lean_ctor_get(v_ws_5458_, 4);
v___x_5589_ = lean_array_fget_borrowed(v_packages_5588_, v___x_5586_);
v_config_5590_ = lean_ctor_get(v___x_5589_, 6);
v_toWorkspaceConfig_5591_ = lean_ctor_get(v_config_5590_, 0);
lean_inc_ref(v_toWorkspaceConfig_5591_);
v___x_5592_ = l_System_FilePath_normalize(v_toWorkspaceConfig_5591_);
v___x_5593_ = l_Lake_mkRelPathString(v___x_5592_);
v___x_5594_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5594_, 0, v___x_5593_);
v___x_5595_ = l_Option_instBEq_beq___at___00Lake_Workspace_materializeDeps_spec__2(v_packagesDir_x3f_5560_, v___x_5594_);
lean_dec_ref_known(v___x_5594_, 1);
if (v___x_5595_ == 0)
{
lean_object* v___x_5596_; lean_object* v___x_5597_; 
v___x_5596_ = ((lean_object*)(l_Lake_Workspace_materializeDeps___closed__4));
lean_inc_ref(v_a_5463_);
v___x_5597_ = lean_apply_2(v_a_5463_, v___x_5596_, lean_box(0));
v___y_5577_ = v_a_5463_;
goto v___jp_5576_;
}
else
{
v___y_5577_ = v_a_5463_;
goto v___jp_5576_;
}
}
else
{
v___y_5577_ = v_a_5463_;
goto v___jp_5576_;
}
v___jp_5465_:
{
lean_object* v___x_5471_; lean_object* v___x_5472_; 
v___x_5471_ = lean_array_get_size(v___y_5467_);
lean_dec_ref(v___y_5467_);
v___x_5472_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0___redArg(v___y_5470_, v___y_5466_, v_leanOpts_5460_, v_reconfigure_5461_, v_ws_5458_, v___y_5468_, v___x_5471_, v___y_5469_);
lean_dec(v___y_5470_);
if (lean_obj_tag(v___x_5472_) == 0)
{
lean_object* v_a_5473_; lean_object* v___x_5475_; uint8_t v_isShared_5476_; uint8_t v_isSharedCheck_5481_; 
v_a_5473_ = lean_ctor_get(v___x_5472_, 0);
v_isSharedCheck_5481_ = !lean_is_exclusive(v___x_5472_);
if (v_isSharedCheck_5481_ == 0)
{
v___x_5475_ = v___x_5472_;
v_isShared_5476_ = v_isSharedCheck_5481_;
goto v_resetjp_5474_;
}
else
{
lean_inc(v_a_5473_);
lean_dec(v___x_5472_);
v___x_5475_ = lean_box(0);
v_isShared_5476_ = v_isSharedCheck_5481_;
goto v_resetjp_5474_;
}
v_resetjp_5474_:
{
lean_object* v___x_5477_; lean_object* v___x_5479_; 
v___x_5477_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_updateDepPkgs(v_a_5473_);
if (v_isShared_5476_ == 0)
{
lean_ctor_set(v___x_5475_, 0, v___x_5477_);
v___x_5479_ = v___x_5475_;
goto v_reusejp_5478_;
}
else
{
lean_object* v_reuseFailAlloc_5480_; 
v_reuseFailAlloc_5480_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5480_, 0, v___x_5477_);
v___x_5479_ = v_reuseFailAlloc_5480_;
goto v_reusejp_5478_;
}
v_reusejp_5478_:
{
return v___x_5479_;
}
}
}
else
{
return v___x_5472_;
}
}
v___jp_5482_:
{
if (lean_obj_tag(v___y_5489_) == 0)
{
lean_dec_ref(v___y_5486_);
v___y_5466_ = v___y_5483_;
v___y_5467_ = v___y_5484_;
v___y_5468_ = v___y_5487_;
v___y_5469_ = v___y_5488_;
v___y_5470_ = v___y_5489_;
goto v___jp_5465_;
}
else
{
lean_object* v___x_5490_; uint8_t v___x_5491_; 
v___x_5490_ = lean_array_get_size(v___y_5486_);
lean_dec_ref(v___y_5486_);
v___x_5491_ = lean_nat_dec_eq(v___x_5490_, v___y_5485_);
if (v___x_5491_ == 0)
{
lean_object* v___x_5492_; lean_object* v___x_5493_; lean_object* v___x_5494_; lean_object* v___x_5495_; 
lean_dec(v___y_5487_);
lean_dec_ref(v___y_5484_);
lean_dec_ref(v___y_5483_);
lean_dec_ref(v_leanOpts_5460_);
lean_dec_ref(v_ws_5458_);
v___x_5492_ = ((lean_object*)(l_Lake_Workspace_materializeDeps___closed__1));
lean_inc_ref(v___y_5488_);
v___x_5493_ = lean_apply_2(v___y_5488_, v___x_5492_, lean_box(0));
v___x_5494_ = lean_box(0);
v___x_5495_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5495_, 0, v___x_5494_);
return v___x_5495_;
}
else
{
v___y_5466_ = v___y_5483_;
v___y_5467_ = v___y_5484_;
v___y_5468_ = v___y_5487_;
v___y_5469_ = v___y_5488_;
v___y_5470_ = v___y_5489_;
goto v___jp_5465_;
}
}
}
v___jp_5496_:
{
lean_object* v___x_5504_; uint8_t v___x_5505_; 
v___x_5504_ = lean_array_get_size(v_overrides_5462_);
v___x_5505_ = lean_nat_dec_lt(v___y_5499_, v___x_5504_);
if (v___x_5505_ == 0)
{
v___y_5483_ = v___y_5497_;
v___y_5484_ = v___y_5498_;
v___y_5485_ = v___y_5499_;
v___y_5486_ = v___y_5500_;
v___y_5487_ = v___y_5501_;
v___y_5488_ = v___y_5502_;
v___y_5489_ = v___y_5503_;
goto v___jp_5482_;
}
else
{
uint8_t v___x_5506_; 
v___x_5506_ = lean_nat_dec_le(v___x_5504_, v___x_5504_);
if (v___x_5506_ == 0)
{
if (v___x_5505_ == 0)
{
v___y_5483_ = v___y_5497_;
v___y_5484_ = v___y_5498_;
v___y_5485_ = v___y_5499_;
v___y_5486_ = v___y_5500_;
v___y_5487_ = v___y_5501_;
v___y_5488_ = v___y_5502_;
v___y_5489_ = v___y_5503_;
goto v___jp_5482_;
}
else
{
size_t v___x_5507_; size_t v___x_5508_; lean_object* v___x_5509_; 
v___x_5507_ = ((size_t)0ULL);
v___x_5508_ = lean_usize_of_nat(v___x_5504_);
v___x_5509_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Workspace_materializeDeps_spec__1(v_overrides_5462_, v___x_5507_, v___x_5508_, v___y_5503_);
v___y_5483_ = v___y_5497_;
v___y_5484_ = v___y_5498_;
v___y_5485_ = v___y_5499_;
v___y_5486_ = v___y_5500_;
v___y_5487_ = v___y_5501_;
v___y_5488_ = v___y_5502_;
v___y_5489_ = v___x_5509_;
goto v___jp_5482_;
}
}
else
{
size_t v___x_5510_; size_t v___x_5511_; lean_object* v___x_5512_; 
v___x_5510_ = ((size_t)0ULL);
v___x_5511_ = lean_usize_of_nat(v___x_5504_);
v___x_5512_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Workspace_materializeDeps_spec__1(v_overrides_5462_, v___x_5510_, v___x_5511_, v___y_5503_);
v___y_5483_ = v___y_5497_;
v___y_5484_ = v___y_5498_;
v___y_5485_ = v___y_5499_;
v___y_5486_ = v___y_5500_;
v___y_5487_ = v___y_5501_;
v___y_5488_ = v___y_5502_;
v___y_5489_ = v___x_5512_;
goto v___jp_5482_;
}
}
}
v___jp_5513_:
{
lean_object* v_packages_5518_; lean_object* v___x_5519_; lean_object* v_wsIdx_5520_; lean_object* v_dir_5521_; lean_object* v_depConfigs_5522_; lean_object* v___x_5523_; 
v_packages_5518_ = lean_ctor_get(v_ws_5458_, 4);
v___x_5519_ = lean_array_fget_borrowed(v_packages_5518_, v___y_5515_);
v_wsIdx_5520_ = lean_ctor_get(v___x_5519_, 0);
v_dir_5521_ = lean_ctor_get(v___x_5519_, 4);
v_depConfigs_5522_ = lean_ctor_get(v___x_5519_, 12);
v___x_5523_ = l___private_Lake_Load_Resolve_0__Lake_validateManifest(v___y_5517_, v_depConfigs_5522_, v___y_5516_);
if (lean_obj_tag(v___x_5523_) == 0)
{
lean_object* v___x_5524_; lean_object* v___x_5525_; lean_object* v___x_5526_; lean_object* v___x_5527_; lean_object* v___x_5528_; 
lean_dec_ref_known(v___x_5523_, 1);
v___x_5524_ = l_Lake_defaultLakeDir;
lean_inc_ref(v_dir_5521_);
v___x_5525_ = l_Lake_joinRelative(v_dir_5521_, v___x_5524_);
v___x_5526_ = ((lean_object*)(l_Lake_Workspace_materializeDeps___closed__2));
v___x_5527_ = l_Lake_joinRelative(v___x_5525_, v___x_5526_);
v___x_5528_ = l_Lake_Manifest_tryLoadEntries(v___x_5527_);
if (lean_obj_tag(v___x_5528_) == 0)
{
lean_object* v_a_5529_; lean_object* v___x_5530_; uint8_t v___x_5531_; 
v_a_5529_ = lean_ctor_get(v___x_5528_, 0);
lean_inc(v_a_5529_);
lean_dec_ref_known(v___x_5528_, 1);
v___x_5530_ = lean_array_get_size(v_a_5529_);
v___x_5531_ = lean_nat_dec_lt(v___y_5515_, v___x_5530_);
if (v___x_5531_ == 0)
{
lean_dec(v_a_5529_);
lean_inc(v_wsIdx_5520_);
lean_inc_ref(v_depConfigs_5522_);
lean_inc_ref(v_packages_5518_);
v___y_5497_ = v___y_5514_;
v___y_5498_ = v_packages_5518_;
v___y_5499_ = v___y_5515_;
v___y_5500_ = v_depConfigs_5522_;
v___y_5501_ = v_wsIdx_5520_;
v___y_5502_ = v___y_5516_;
v___y_5503_ = v___y_5517_;
goto v___jp_5496_;
}
else
{
uint8_t v___x_5532_; 
v___x_5532_ = lean_nat_dec_le(v___x_5530_, v___x_5530_);
if (v___x_5532_ == 0)
{
if (v___x_5531_ == 0)
{
lean_dec(v_a_5529_);
lean_inc(v_wsIdx_5520_);
lean_inc_ref(v_depConfigs_5522_);
lean_inc_ref(v_packages_5518_);
v___y_5497_ = v___y_5514_;
v___y_5498_ = v_packages_5518_;
v___y_5499_ = v___y_5515_;
v___y_5500_ = v_depConfigs_5522_;
v___y_5501_ = v_wsIdx_5520_;
v___y_5502_ = v___y_5516_;
v___y_5503_ = v___y_5517_;
goto v___jp_5496_;
}
else
{
size_t v___x_5533_; size_t v___x_5534_; lean_object* v___x_5535_; 
v___x_5533_ = ((size_t)0ULL);
v___x_5534_ = lean_usize_of_nat(v___x_5530_);
v___x_5535_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Workspace_materializeDeps_spec__1(v_a_5529_, v___x_5533_, v___x_5534_, v___y_5517_);
lean_dec(v_a_5529_);
lean_inc(v_wsIdx_5520_);
lean_inc_ref(v_depConfigs_5522_);
lean_inc_ref(v_packages_5518_);
v___y_5497_ = v___y_5514_;
v___y_5498_ = v_packages_5518_;
v___y_5499_ = v___y_5515_;
v___y_5500_ = v_depConfigs_5522_;
v___y_5501_ = v_wsIdx_5520_;
v___y_5502_ = v___y_5516_;
v___y_5503_ = v___x_5535_;
goto v___jp_5496_;
}
}
else
{
size_t v___x_5536_; size_t v___x_5537_; lean_object* v___x_5538_; 
v___x_5536_ = ((size_t)0ULL);
v___x_5537_ = lean_usize_of_nat(v___x_5530_);
v___x_5538_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Workspace_materializeDeps_spec__1(v_a_5529_, v___x_5536_, v___x_5537_, v___y_5517_);
lean_dec(v_a_5529_);
lean_inc(v_wsIdx_5520_);
lean_inc_ref(v_depConfigs_5522_);
lean_inc_ref(v_packages_5518_);
v___y_5497_ = v___y_5514_;
v___y_5498_ = v_packages_5518_;
v___y_5499_ = v___y_5515_;
v___y_5500_ = v_depConfigs_5522_;
v___y_5501_ = v_wsIdx_5520_;
v___y_5502_ = v___y_5516_;
v___y_5503_ = v___x_5538_;
goto v___jp_5496_;
}
}
}
else
{
lean_object* v_a_5539_; lean_object* v___x_5541_; uint8_t v_isShared_5542_; uint8_t v_isSharedCheck_5551_; 
lean_dec(v___y_5517_);
lean_dec_ref(v___y_5514_);
lean_dec_ref(v_leanOpts_5460_);
lean_dec_ref(v_ws_5458_);
v_a_5539_ = lean_ctor_get(v___x_5528_, 0);
v_isSharedCheck_5551_ = !lean_is_exclusive(v___x_5528_);
if (v_isSharedCheck_5551_ == 0)
{
v___x_5541_ = v___x_5528_;
v_isShared_5542_ = v_isSharedCheck_5551_;
goto v_resetjp_5540_;
}
else
{
lean_inc(v_a_5539_);
lean_dec(v___x_5528_);
v___x_5541_ = lean_box(0);
v_isShared_5542_ = v_isSharedCheck_5551_;
goto v_resetjp_5540_;
}
v_resetjp_5540_:
{
lean_object* v___x_5543_; uint8_t v___x_5544_; lean_object* v___x_5545_; lean_object* v___x_5546_; lean_object* v___x_5547_; lean_object* v___x_5549_; 
v___x_5543_ = lean_io_error_to_string(v_a_5539_);
v___x_5544_ = 3;
v___x_5545_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_5545_, 0, v___x_5543_);
lean_ctor_set_uint8(v___x_5545_, sizeof(void*)*1, v___x_5544_);
lean_inc_ref(v___y_5516_);
v___x_5546_ = lean_apply_2(v___y_5516_, v___x_5545_, lean_box(0));
v___x_5547_ = lean_box(0);
if (v_isShared_5542_ == 0)
{
lean_ctor_set(v___x_5541_, 0, v___x_5547_);
v___x_5549_ = v___x_5541_;
goto v_reusejp_5548_;
}
else
{
lean_object* v_reuseFailAlloc_5550_; 
v_reuseFailAlloc_5550_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5550_, 0, v___x_5547_);
v___x_5549_ = v_reuseFailAlloc_5550_;
goto v_reusejp_5548_;
}
v_reusejp_5548_:
{
return v___x_5549_;
}
}
}
}
else
{
lean_object* v_a_5552_; lean_object* v___x_5554_; uint8_t v_isShared_5555_; uint8_t v_isSharedCheck_5559_; 
lean_dec(v___y_5517_);
lean_dec_ref(v___y_5514_);
lean_dec_ref(v_leanOpts_5460_);
lean_dec_ref(v_ws_5458_);
v_a_5552_ = lean_ctor_get(v___x_5523_, 0);
v_isSharedCheck_5559_ = !lean_is_exclusive(v___x_5523_);
if (v_isSharedCheck_5559_ == 0)
{
v___x_5554_ = v___x_5523_;
v_isShared_5555_ = v_isSharedCheck_5559_;
goto v_resetjp_5553_;
}
else
{
lean_inc(v_a_5552_);
lean_dec(v___x_5523_);
v___x_5554_ = lean_box(0);
v_isShared_5555_ = v_isSharedCheck_5559_;
goto v_resetjp_5553_;
}
v_resetjp_5553_:
{
lean_object* v___x_5557_; 
if (v_isShared_5555_ == 0)
{
v___x_5557_ = v___x_5554_;
goto v_reusejp_5556_;
}
else
{
lean_object* v_reuseFailAlloc_5558_; 
v_reuseFailAlloc_5558_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5558_, 0, v_a_5552_);
v___x_5557_ = v_reuseFailAlloc_5558_;
goto v_reusejp_5556_;
}
v_reusejp_5556_:
{
return v___x_5557_;
}
}
}
}
v___jp_5562_:
{
lean_object* v_pkgEntries_5565_; lean_object* v___x_5566_; lean_object* v___x_5567_; uint8_t v___x_5568_; 
v_pkgEntries_5565_ = lean_box(1);
v___x_5566_ = lean_unsigned_to_nat(0u);
v___x_5567_ = lean_array_get_size(v_packages_5561_);
v___x_5568_ = lean_nat_dec_lt(v___x_5566_, v___x_5567_);
if (v___x_5568_ == 0)
{
lean_dec_ref(v_packages_5561_);
v___y_5514_ = v___y_5564_;
v___y_5515_ = v___x_5566_;
v___y_5516_ = v___y_5563_;
v___y_5517_ = v_pkgEntries_5565_;
goto v___jp_5513_;
}
else
{
uint8_t v___x_5569_; 
v___x_5569_ = lean_nat_dec_le(v___x_5567_, v___x_5567_);
if (v___x_5569_ == 0)
{
if (v___x_5568_ == 0)
{
lean_dec_ref(v_packages_5561_);
v___y_5514_ = v___y_5564_;
v___y_5515_ = v___x_5566_;
v___y_5516_ = v___y_5563_;
v___y_5517_ = v_pkgEntries_5565_;
goto v___jp_5513_;
}
else
{
size_t v___x_5570_; size_t v___x_5571_; lean_object* v___x_5572_; 
v___x_5570_ = ((size_t)0ULL);
v___x_5571_ = lean_usize_of_nat(v___x_5567_);
v___x_5572_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Workspace_materializeDeps_spec__1(v_packages_5561_, v___x_5570_, v___x_5571_, v_pkgEntries_5565_);
lean_dec_ref(v_packages_5561_);
v___y_5514_ = v___y_5564_;
v___y_5515_ = v___x_5566_;
v___y_5516_ = v___y_5563_;
v___y_5517_ = v___x_5572_;
goto v___jp_5513_;
}
}
else
{
size_t v___x_5573_; size_t v___x_5574_; lean_object* v___x_5575_; 
v___x_5573_ = ((size_t)0ULL);
v___x_5574_ = lean_usize_of_nat(v___x_5567_);
v___x_5575_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Workspace_materializeDeps_spec__1(v_packages_5561_, v___x_5573_, v___x_5574_, v_pkgEntries_5565_);
lean_dec_ref(v_packages_5561_);
v___y_5514_ = v___y_5564_;
v___y_5515_ = v___x_5566_;
v___y_5516_ = v___y_5563_;
v___y_5517_ = v___x_5575_;
goto v___jp_5513_;
}
}
}
v___jp_5576_:
{
if (lean_obj_tag(v_packagesDir_x3f_5560_) == 0)
{
lean_object* v_packages_5578_; lean_object* v___x_5579_; lean_object* v___x_5580_; lean_object* v_config_5581_; lean_object* v_toWorkspaceConfig_5582_; lean_object* v___x_5583_; 
v_packages_5578_ = lean_ctor_get(v_ws_5458_, 4);
v___x_5579_ = lean_unsigned_to_nat(0u);
v___x_5580_ = lean_array_fget_borrowed(v_packages_5578_, v___x_5579_);
v_config_5581_ = lean_ctor_get(v___x_5580_, 6);
v_toWorkspaceConfig_5582_ = lean_ctor_get(v_config_5581_, 0);
lean_inc_ref(v_toWorkspaceConfig_5582_);
v___x_5583_ = l_System_FilePath_normalize(v_toWorkspaceConfig_5582_);
v___y_5563_ = v___y_5577_;
v___y_5564_ = v___x_5583_;
goto v___jp_5562_;
}
else
{
lean_object* v_val_5584_; 
v_val_5584_ = lean_ctor_get(v_packagesDir_x3f_5560_, 0);
lean_inc(v_val_5584_);
lean_dec_ref_known(v_packagesDir_x3f_5560_, 1);
v___y_5563_ = v___y_5577_;
v___y_5564_ = v_val_5584_;
goto v___jp_5562_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Workspace_materializeDeps___boxed(lean_object* v_ws_5598_, lean_object* v_manifest_5599_, lean_object* v_leanOpts_5600_, lean_object* v_reconfigure_5601_, lean_object* v_overrides_5602_, lean_object* v_a_5603_, lean_object* v_a_5604_){
_start:
{
uint8_t v_reconfigure_boxed_5605_; lean_object* v_res_5606_; 
v_reconfigure_boxed_5605_ = lean_unbox(v_reconfigure_5601_);
v_res_5606_ = l_Lake_Workspace_materializeDeps(v_ws_5598_, v_manifest_5599_, v_leanOpts_5600_, v_reconfigure_boxed_5605_, v_overrides_5602_, v_a_5603_);
lean_dec_ref(v_a_5603_);
lean_dec_ref(v_overrides_5602_);
return v_res_5606_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0(lean_object* v___y_5607_, lean_object* v___y_5608_, lean_object* v_leanOpts_5609_, uint8_t v_reconfigure_5610_, lean_object* v_ws_5611_, lean_object* v_i_5612_, lean_object* v_i__lt_5613_, lean_object* v_next_5614_, lean_object* v_lt__next_5615_, lean_object* v___y_5616_){
_start:
{
lean_object* v___x_5618_; 
v___x_5618_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0___redArg(v___y_5607_, v___y_5608_, v_leanOpts_5609_, v_reconfigure_5610_, v_ws_5611_, v_i_5612_, v_next_5614_, v___y_5616_);
return v___x_5618_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0___boxed(lean_object* v___y_5619_, lean_object* v___y_5620_, lean_object* v_leanOpts_5621_, lean_object* v_reconfigure_5622_, lean_object* v_ws_5623_, lean_object* v_i_5624_, lean_object* v_i__lt_5625_, lean_object* v_next_5626_, lean_object* v_lt__next_5627_, lean_object* v___y_5628_, lean_object* v___y_5629_){
_start:
{
uint8_t v_reconfigure_boxed_5630_; lean_object* v_res_5631_; 
v_reconfigure_boxed_5630_ = lean_unbox(v_reconfigure_5622_);
v_res_5631_ = l___private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0(v___y_5619_, v___y_5620_, v_leanOpts_5621_, v_reconfigure_boxed_5630_, v_ws_5623_, v_i_5624_, v_i__lt_5625_, v_next_5626_, v_lt__next_5627_, v___y_5628_);
lean_dec_ref(v___y_5628_);
lean_dec(v___y_5619_);
return v_res_5631_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0_spec__0_spec__2(lean_object* v_start_5632_, lean_object* v_pkg_5633_, lean_object* v___y_5634_, lean_object* v___y_5635_, lean_object* v_leanOpts_5636_, uint8_t v_reconfigure_5637_, lean_object* v_as_5638_, size_t v_i_5639_, size_t v_stop_5640_, lean_object* v_b_5641_, lean_object* v___y_5642_){
_start:
{
lean_object* v___x_5644_; 
v___x_5644_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0_spec__0_spec__2___redArg(v_pkg_5633_, v___y_5634_, v___y_5635_, v_leanOpts_5636_, v_reconfigure_5637_, v_as_5638_, v_i_5639_, v_stop_5640_, v_b_5641_, v___y_5642_);
return v___x_5644_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0_spec__0_spec__2___boxed(lean_object* v_start_5645_, lean_object* v_pkg_5646_, lean_object* v___y_5647_, lean_object* v___y_5648_, lean_object* v_leanOpts_5649_, lean_object* v_reconfigure_5650_, lean_object* v_as_5651_, lean_object* v_i_5652_, lean_object* v_stop_5653_, lean_object* v_b_5654_, lean_object* v___y_5655_, lean_object* v___y_5656_){
_start:
{
uint8_t v_reconfigure_boxed_5657_; size_t v_i_boxed_5658_; size_t v_stop_boxed_5659_; lean_object* v_res_5660_; 
v_reconfigure_boxed_5657_ = lean_unbox(v_reconfigure_5650_);
v_i_boxed_5658_ = lean_unbox_usize(v_i_5652_);
lean_dec(v_i_5652_);
v_stop_boxed_5659_ = lean_unbox_usize(v_stop_5653_);
lean_dec(v_stop_5653_);
v_res_5660_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lake_Load_Resolve_0__Lake_Workspace_resolveDepsCore_go___at___00Lake_Workspace_materializeDeps_spec__0_spec__0_spec__2(v_start_5645_, v_pkg_5646_, v___y_5647_, v___y_5648_, v_leanOpts_5649_, v_reconfigure_boxed_5657_, v_as_5651_, v_i_boxed_5658_, v_stop_boxed_5659_, v_b_5654_, v___y_5655_);
lean_dec_ref(v___y_5655_);
lean_dec_ref(v_as_5651_);
lean_dec(v___y_5647_);
lean_dec(v_start_5645_);
return v_res_5660_;
}
}
lean_object* runtime_initialize_Lake_Config_Workspace(uint8_t builtin);
lean_object* runtime_initialize_Lake_Load_Manifest(uint8_t builtin);
lean_object* runtime_initialize_Lake_Util_IO(uint8_t builtin);
lean_object* runtime_initialize_Lake_Util_StoreInsts(uint8_t builtin);
lean_object* runtime_initialize_Lake_Config_Monad(uint8_t builtin);
lean_object* runtime_initialize_Lake_Load_Materialize(uint8_t builtin);
lean_object* runtime_initialize_Lake_Load_Lean_Eval(uint8_t builtin);
lean_object* runtime_initialize_Lake_Load_Package(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Vector_Lemmas(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Range_Polymorphic_Iterators(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Range_Polymorphic_Lemmas(uint8_t builtin);
lean_object* runtime_initialize_Init_TacticsExtra(uint8_t builtin);
lean_object* runtime_initialize_Lean_Runtime(uint8_t builtin);
void lean_initialize();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lake_Load_Resolve(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize();
res = runtime_initialize_Lake_Config_Workspace(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Load_Manifest(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Util_IO(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Util_StoreInsts(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Config_Monad(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Load_Materialize(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Load_Lean_Eval(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Load_Package(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Vector_Lemmas(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Range_Polymorphic_Iterators(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Range_Polymorphic_Lemmas(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_TacticsExtra(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Runtime(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___private_Lake_Load_Resolve_0__Lake_restartCode = _init_l___private_Lake_Load_Resolve_0__Lake_restartCode();
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lake_Load_Resolve(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lake_Config_Workspace(uint8_t builtin);
lean_object* initialize_Lake_Load_Manifest(uint8_t builtin);
lean_object* initialize_Lake_Util_IO(uint8_t builtin);
lean_object* initialize_Lake_Util_StoreInsts(uint8_t builtin);
lean_object* initialize_Lake_Config_Monad(uint8_t builtin);
lean_object* initialize_Lake_Load_Materialize(uint8_t builtin);
lean_object* initialize_Lake_Load_Lean_Eval(uint8_t builtin);
lean_object* initialize_Lake_Load_Package(uint8_t builtin);
lean_object* initialize_Init_Data_Vector_Lemmas(uint8_t builtin);
lean_object* initialize_Init_Data_Range_Polymorphic_Iterators(uint8_t builtin);
lean_object* initialize_Init_Data_Range_Polymorphic_Lemmas(uint8_t builtin);
lean_object* initialize_Init_TacticsExtra(uint8_t builtin);
lean_object* initialize_Lean_Runtime(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lake_Load_Resolve(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lake_Config_Workspace(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Load_Manifest(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Util_IO(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Util_StoreInsts(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Config_Monad(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Load_Materialize(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Load_Lean_Eval(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Load_Package(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Vector_Lemmas(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Range_Polymorphic_Iterators(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Range_Polymorphic_Lemmas(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_TacticsExtra(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Runtime(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Load_Resolve(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lake_Load_Resolve(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lake_Load_Resolve(builtin);
}
#ifdef __cplusplus
}
#endif

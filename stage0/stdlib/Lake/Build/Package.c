// Lean compiler output
// Module: Lake.Build.Package
// Imports: public import Lake.Config.FacetConfig public import Lake.Build.Job.Monad public import Lake.Build.Infos import Lake.Util.Git import Lake.Util.Url import Lake.Build.Common import Lake.Build.Targets import Lake.Build.Job.Register import Lake.Reservoir
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
lean_object* lean_array_get_size(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_array_propagate_mark(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
size_t lean_usize_add(size_t, size_t);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lake_BuildTrace_nil(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(lean_object*, uint8_t);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Lake_Verbosity_ctorIdx(uint8_t);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
extern lean_object* l_Lake_Package_optReservoirBarrelFacet;
lean_object* l_Lake_Name_eraseHead(lean_object*);
extern lean_object* l_Lake_Package_optGitHubReleaseFacet;
extern lean_object* l_Lake_instDataKindUnit;
lean_object* l_Lake_OptDataKind_anonymous___redArg();
lean_object* lean_task_pure(lean_object*);
extern lean_object* l_Lake_Package_optBuildCacheFacet;
extern lean_object* l_Lake_Package_keyword;
lean_object* lean_string_utf8_byte_size(lean_object*);
lean_object* l_System_FilePath_normalize(lean_object*);
lean_object* l_Lake_joinRelative(lean_object*, lean_object*);
uint8_t l_System_FilePath_pathExists(lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l_Lake_Job_mapM___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lake_Job_add___redArg(lean_object*, lean_object*);
lean_object* l_Lake_ensureJob___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* l_Lake_Job_toOpaque___redArg(lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lake_Job_renew___redArg(lean_object*);
uint8_t l_Lake_JobAction_merge(uint8_t, uint8_t);
lean_object* l_Lake_GitRepo_resolveRevision_x3f(lean_object*, lean_object*);
lean_object* l_Lean_Name_toString(lean_object*, uint8_t);
lean_object* l_Lake_Reservoir_pkgApiUrl(lean_object*, lean_object*, lean_object*);
lean_object* l_Lake_uriEncode(lean_object*, lean_object*);
extern lean_object* l_Lake_defaultLakeDir;
lean_object* l_Lake_untar(lean_object*, lean_object*, uint8_t, lean_object*);
extern uint64_t l_Lake_Hash_nil;
uint64_t lean_string_hash(lean_object*);
uint64_t lean_uint64_mix_hash(uint64_t, uint64_t);
lean_object* l_System_FilePath_addExtension(lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* l_Lake_readTraceFile(lean_object*, lean_object*);
uint8_t lean_uint64_dec_eq(uint64_t, uint64_t);
lean_object* lean_io_metadata(lean_object*);
uint8_t l_IO_FS_instOrdSystemTime_ord(lean_object*, lean_object*);
lean_object* l_Lake_OutputStatus_ctorIdx(uint8_t);
lean_object* l___private_Lake_Build_Common_0__Lake_SavedTrace_replayIfUpToDate_x27_replay(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_io_mono_ms_now();
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Lake_download(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_extract___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lake_Build_Common_0__Lake_BuildMetadata_ofBuildCore(lean_object*, lean_object*, lean_object*);
lean_object* l_Lake_BuildMetadata_writeFile(lean_object*, lean_object*);
lean_object* l_Lake_removeFileIfExists(lean_object*);
lean_object* lean_io_error_to_string(lean_object*);
lean_object* l_Lake_Job_async___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Json_compress(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
extern lean_object* l_Lake_Package_transDepsFacet;
lean_object* l_Lake_Job_await___redArg(lean_object*, lean_object*);
lean_object* l_String_Slice_Pos_prevn(lean_object*, lean_object*, lean_object*);
lean_object* lean_string_utf8_extract_fast(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lake_Package_depsFacet;
uint8_t l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lake_Package_findTargetDecl_x3f(lean_object*, lean_object*);
extern lean_object* l_Lake_LeanExe_keyword;
lean_object* l_Lake_LeanExeConfig_toLeanLibConfig___redArg(lean_object*);
extern lean_object* l_Lake_Module_transImportsFacet;
extern lean_object* l_Lake_Module_keyword;
lean_object* l_Lean_Name_mkStr1(lean_object*);
extern lean_object* l_Lake_LeanLib_modulesFacet;
extern lean_object* l_Lake_Package_defaultModulesFacet;
lean_object* l_Lake_Package_fetchTargetJob(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lake_Job_mix___redArg(lean_object*, lean_object*);
extern lean_object* l_Lake_Package_extraDepFacet;
extern lean_object* l_Lake_instDataKindBool;
extern lean_object* l_Lake_Package_buildCacheFacet;
extern lean_object* l_Lake_Reservoir_lakeHeaders;
extern lean_object* l_Lake_Package_reservoirBarrelFacet;
lean_object* l_Lake_GitRepo_findTag_x3f(lean_object*, lean_object*);
extern lean_object* l_Lake_Git_defaultRemote;
lean_object* l_Lake_GitRepo_getFilteredRemoteUrl_x3f(lean_object*, lean_object*);
lean_object* l_Lake_Job_bindM___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lake_instQueryJsonUnit___lam__0(lean_object*);
lean_object* l_instToStringBool___lam__0___boxed(lean_object*);
extern lean_object* l_Lake_Package_gitHubReleaseFacet;
lean_object* l_Lean_instToJsonBool___lam__0___boxed(lean_object*);
lean_object* l_Lake_formatQuery___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lake_instQueryTextUnit___lam__0(lean_object*);
lean_object* l_Lake_Job_async___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lake_JobM_runSpawnM___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lake_FetchM_runJobM___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lake_Build_Package_0__Lake_Package_recFetchDeps___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Build_Package_0__Lake_Package_recFetchDeps___redArg___closed__0;
static const lean_array_object l___private_Lake_Build_Package_0__Lake_Package_recFetchDeps___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lake_Build_Package_0__Lake_Package_recFetchDeps___redArg___closed__1 = (const lean_object*)&l___private_Lake_Build_Package_0__Lake_Package_recFetchDeps___redArg___closed__1_value;
static const lean_string_object l___private_Lake_Build_Package_0__Lake_Package_recFetchDeps___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l___private_Lake_Build_Package_0__Lake_Package_recFetchDeps___redArg___closed__2 = (const lean_object*)&l___private_Lake_Build_Package_0__Lake_Package_recFetchDeps___redArg___closed__2_value;
static const lean_string_object l___private_Lake_Build_Package_0__Lake_Package_recFetchDeps___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "<nil>"};
static const lean_object* l___private_Lake_Build_Package_0__Lake_Package_recFetchDeps___redArg___closed__3 = (const lean_object*)&l___private_Lake_Build_Package_0__Lake_Package_recFetchDeps___redArg___closed__3_value;
static lean_once_cell_t l___private_Lake_Build_Package_0__Lake_Package_recFetchDeps___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Build_Package_0__Lake_Package_recFetchDeps___redArg___closed__4;
static lean_once_cell_t l___private_Lake_Build_Package_0__Lake_Package_recFetchDeps___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Build_Package_0__Lake_Package_recFetchDeps___redArg___closed__5;
LEAN_EXPORT lean_object* l___private_Lake_Build_Package_0__Lake_Package_recFetchDeps___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Package_0__Lake_Package_recFetchDeps___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Package_0__Lake_Package_recFetchDeps(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Package_0__Lake_Package_recFetchDeps___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_formatQuery___at___00Lake_Package_depsFacetConfig_spec__0_spec__1(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_formatQuery___at___00Lake_Package_depsFacetConfig_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_formatQuery___at___00Lake_Package_depsFacetConfig_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "\n"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_formatQuery___at___00Lake_Package_depsFacetConfig_spec__0_spec__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_formatQuery___at___00Lake_Package_depsFacetConfig_spec__0_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_formatQuery___at___00Lake_Package_depsFacetConfig_spec__0_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_formatQuery___at___00Lake_Package_depsFacetConfig_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_formatQuery___at___00Lake_Package_depsFacetConfig_spec__0(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lake_formatQuery___at___00Lake_Package_depsFacetConfig_spec__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lake_Package_depsFacetConfig___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_formatQuery___at___00Lake_Package_depsFacetConfig_spec__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_Package_depsFacetConfig___closed__0 = (const lean_object*)&l_Lake_Package_depsFacetConfig___closed__0_value;
static const lean_closure_object l_Lake_Package_depsFacetConfig___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lake_Build_Package_0__Lake_Package_recFetchDeps___boxed, .m_arity = 8, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_Package_depsFacetConfig___closed__1 = (const lean_object*)&l_Lake_Package_depsFacetConfig___closed__1_value;
static lean_once_cell_t l_Lake_Package_depsFacetConfig___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Package_depsFacetConfig___closed__2;
LEAN_EXPORT lean_object* l_Lake_Package_depsFacetConfig;
static lean_once_cell_t l_Lake_OrdHashSet_empty___at___00__private_Lake_Build_Package_0__Lake_Package_recComputeTransDeps_spec__2___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_OrdHashSet_empty___at___00__private_Lake_Build_Package_0__Lake_Package_recComputeTransDeps_spec__2___closed__0;
static lean_once_cell_t l_Lake_OrdHashSet_empty___at___00__private_Lake_Build_Package_0__Lake_Package_recComputeTransDeps_spec__2___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_OrdHashSet_empty___at___00__private_Lake_Build_Package_0__Lake_Package_recComputeTransDeps_spec__2___closed__1;
static const lean_array_object l_Lake_OrdHashSet_empty___at___00__private_Lake_Build_Package_0__Lake_Package_recComputeTransDeps_spec__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lake_OrdHashSet_empty___at___00__private_Lake_Build_Package_0__Lake_Package_recComputeTransDeps_spec__2___closed__2 = (const lean_object*)&l_Lake_OrdHashSet_empty___at___00__private_Lake_Build_Package_0__Lake_Package_recComputeTransDeps_spec__2___closed__2_value;
static lean_once_cell_t l_Lake_OrdHashSet_empty___at___00__private_Lake_Build_Package_0__Lake_Package_recComputeTransDeps_spec__2___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_OrdHashSet_empty___at___00__private_Lake_Build_Package_0__Lake_Package_recComputeTransDeps_spec__2___closed__3;
LEAN_EXPORT lean_object* l_Lake_OrdHashSet_empty___at___00__private_Lake_Build_Package_0__Lake_Package_recComputeTransDeps_spec__2;
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lake_OrdHashSet_insert___at___00__private_Lake_Build_Package_0__Lake_Package_recComputeTransDeps_spec__0_spec__0_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lake_OrdHashSet_insert___at___00__private_Lake_Build_Package_0__Lake_Package_recComputeTransDeps_spec__0_spec__0_spec__2___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lake_OrdHashSet_insert___at___00__private_Lake_Build_Package_0__Lake_Package_recComputeTransDeps_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lake_OrdHashSet_insert___at___00__private_Lake_Build_Package_0__Lake_Package_recComputeTransDeps_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lake_OrdHashSet_insert___at___00__private_Lake_Build_Package_0__Lake_Package_recComputeTransDeps_spec__0_spec__1_spec__4_spec__7_spec__8___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lake_OrdHashSet_insert___at___00__private_Lake_Build_Package_0__Lake_Package_recComputeTransDeps_spec__0_spec__1_spec__4_spec__7___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lake_OrdHashSet_insert___at___00__private_Lake_Build_Package_0__Lake_Package_recComputeTransDeps_spec__0_spec__1_spec__4___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lake_OrdHashSet_insert___at___00__private_Lake_Build_Package_0__Lake_Package_recComputeTransDeps_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_OrdHashSet_insert___at___00__private_Lake_Build_Package_0__Lake_Package_recComputeTransDeps_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Package_0__Lake_Package_recComputeTransDeps_spec__1(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Package_0__Lake_Package_recComputeTransDeps_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Package_0__Lake_Package_recComputeTransDeps_spec__3(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Package_0__Lake_Package_recComputeTransDeps_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Package_0__Lake_Package_recComputeTransDeps___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Package_0__Lake_Package_recComputeTransDeps___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Package_0__Lake_Package_recComputeTransDeps(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Package_0__Lake_Package_recComputeTransDeps___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lake_OrdHashSet_insert___at___00__private_Lake_Build_Package_0__Lake_Package_recComputeTransDeps_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lake_OrdHashSet_insert___at___00__private_Lake_Build_Package_0__Lake_Package_recComputeTransDeps_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lake_OrdHashSet_insert___at___00__private_Lake_Build_Package_0__Lake_Package_recComputeTransDeps_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lake_OrdHashSet_insert___at___00__private_Lake_Build_Package_0__Lake_Package_recComputeTransDeps_spec__0_spec__0_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lake_OrdHashSet_insert___at___00__private_Lake_Build_Package_0__Lake_Package_recComputeTransDeps_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lake_OrdHashSet_insert___at___00__private_Lake_Build_Package_0__Lake_Package_recComputeTransDeps_spec__0_spec__1_spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lake_OrdHashSet_insert___at___00__private_Lake_Build_Package_0__Lake_Package_recComputeTransDeps_spec__0_spec__1_spec__4_spec__7(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lake_OrdHashSet_insert___at___00__private_Lake_Build_Package_0__Lake_Package_recComputeTransDeps_spec__0_spec__1_spec__4_spec__7_spec__8(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lake_Build_Package_0__Lake_Package_recCollectDefaultModules_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lake_Build_Package_0__Lake_Package_recCollectDefaultModules_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lake_Build_Package_0__Lake_Package_recCollectDefaultModules_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lake_Build_Package_0__Lake_Package_recCollectDefaultModules_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lake_Build_Package_0__Lake_Package_recCollectDefaultModules_spec__1_spec__2_spec__3_spec__6___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lake_Build_Package_0__Lake_Package_recCollectDefaultModules_spec__1_spec__2_spec__3___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lake_Build_Package_0__Lake_Package_recCollectDefaultModules_spec__1_spec__2___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lake_Build_Package_0__Lake_Package_recCollectDefaultModules_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Package_0__Lake_Package_recCollectDefaultModules_spec__2___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Package_0__Lake_Package_recCollectDefaultModules_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Package_0__Lake_Package_recCollectDefaultModules_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Package_0__Lake_Package_recCollectDefaultModules_spec__3___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Package_0__Lake_Package_recCollectDefaultModules_spec__3___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Package_0__Lake_Package_recCollectDefaultModules_spec__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "lean_lib"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Package_0__Lake_Package_recCollectDefaultModules_spec__3___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Package_0__Lake_Package_recCollectDefaultModules_spec__3___closed__1_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Package_0__Lake_Package_recCollectDefaultModules_spec__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Package_0__Lake_Package_recCollectDefaultModules_spec__3___closed__1_value),LEAN_SCALAR_PTR_LITERAL(99, 123, 8, 14, 20, 41, 164, 170)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Package_0__Lake_Package_recCollectDefaultModules_spec__3___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Package_0__Lake_Package_recCollectDefaultModules_spec__3___closed__2_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Package_0__Lake_Package_recCollectDefaultModules_spec__3(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Package_0__Lake_Package_recCollectDefaultModules_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Package_0__Lake_Package_recCollectDefaultModules___lam__0(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Package_0__Lake_Package_recCollectDefaultModules___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lake_Build_Package_0__Lake_Package_recCollectDefaultModules___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Build_Package_0__Lake_Package_recCollectDefaultModules___closed__0;
static lean_once_cell_t l___private_Lake_Build_Package_0__Lake_Package_recCollectDefaultModules___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Build_Package_0__Lake_Package_recCollectDefaultModules___closed__1;
static lean_once_cell_t l___private_Lake_Build_Package_0__Lake_Package_recCollectDefaultModules___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Build_Package_0__Lake_Package_recCollectDefaultModules___closed__2;
static const lean_ctor_object l___private_Lake_Build_Package_0__Lake_Package_recCollectDefaultModules___boxed__const__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + sizeof(size_t)*1, .m_other = 0, .m_tag = 0}, .m_objs = {(lean_object*)(size_t)(0ULL)}};
LEAN_EXPORT const lean_object* l___private_Lake_Build_Package_0__Lake_Package_recCollectDefaultModules___boxed__const__1 = (const lean_object*)&l___private_Lake_Build_Package_0__Lake_Package_recCollectDefaultModules___boxed__const__1_value;
LEAN_EXPORT lean_object* l___private_Lake_Build_Package_0__Lake_Package_recCollectDefaultModules(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Package_0__Lake_Package_recCollectDefaultModules___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lake_Build_Package_0__Lake_Package_recCollectDefaultModules_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lake_Build_Package_0__Lake_Package_recCollectDefaultModules_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lake_Build_Package_0__Lake_Package_recCollectDefaultModules_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Package_0__Lake_Package_recCollectDefaultModules_spec__2(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Package_0__Lake_Package_recCollectDefaultModules_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lake_Build_Package_0__Lake_Package_recCollectDefaultModules_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lake_Build_Package_0__Lake_Package_recCollectDefaultModules_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lake_Build_Package_0__Lake_Package_recCollectDefaultModules_spec__1_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lake_Build_Package_0__Lake_Package_recCollectDefaultModules_spec__1_spec__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lake_Build_Package_0__Lake_Package_recCollectDefaultModules_spec__1_spec__2_spec__3_spec__6(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_formatQuery___at___00Lake_Package_defaultModulesFacetConfig_spec__0_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_formatQuery___at___00Lake_Package_defaultModulesFacetConfig_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lake_formatQuery___at___00Lake_Package_defaultModulesFacetConfig_spec__0_spec__1_spec__2(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lake_formatQuery___at___00Lake_Package_defaultModulesFacetConfig_spec__0_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Array_toJson___at___00Lake_formatQuery___at___00Lake_Package_defaultModulesFacetConfig_spec__0_spec__1(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Array_toJson___at___00Lake_formatQuery___at___00Lake_Package_defaultModulesFacetConfig_spec__0_spec__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_formatQuery___at___00Lake_Package_defaultModulesFacetConfig_spec__0(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lake_formatQuery___at___00Lake_Package_defaultModulesFacetConfig_spec__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lake_Package_defaultModulesFacetConfig___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_formatQuery___at___00Lake_Package_defaultModulesFacetConfig_spec__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_Package_defaultModulesFacetConfig___closed__0 = (const lean_object*)&l_Lake_Package_defaultModulesFacetConfig___closed__0_value;
static const lean_closure_object l_Lake_Package_defaultModulesFacetConfig___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lake_Build_Package_0__Lake_Package_recCollectDefaultModules___boxed, .m_arity = 8, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_Package_defaultModulesFacetConfig___closed__1 = (const lean_object*)&l_Lake_Package_defaultModulesFacetConfig___closed__1_value;
static lean_once_cell_t l_Lake_Package_defaultModulesFacetConfig___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Package_defaultModulesFacetConfig___closed__2;
LEAN_EXPORT lean_object* l_Lake_Package_defaultModulesFacetConfig;
static const lean_closure_object l_Lake_Package_transDepsFacetConfig___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lake_Build_Package_0__Lake_Package_recComputeTransDeps___boxed, .m_arity = 8, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_Package_transDepsFacetConfig___closed__0 = (const lean_object*)&l_Lake_Package_transDepsFacetConfig___closed__0_value;
static lean_once_cell_t l_Lake_Package_transDepsFacetConfig___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Package_transDepsFacetConfig___closed__1;
LEAN_EXPORT lean_object* l_Lake_Package_transDepsFacetConfig;
LEAN_EXPORT lean_object* l___private_Lake_Build_Package_0__Lake_Package_fetchOptBuildCacheCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Package_0__Lake_Package_fetchOptBuildCacheCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lake_formatQuery___at___00Lake_Package_optBuildCacheFacetConfig_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "false"};
static const lean_object* l_Lake_formatQuery___at___00Lake_Package_optBuildCacheFacetConfig_spec__0___closed__0 = (const lean_object*)&l_Lake_formatQuery___at___00Lake_Package_optBuildCacheFacetConfig_spec__0___closed__0_value;
static const lean_string_object l_Lake_formatQuery___at___00Lake_Package_optBuildCacheFacetConfig_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "true"};
static const lean_object* l_Lake_formatQuery___at___00Lake_Package_optBuildCacheFacetConfig_spec__0___closed__1 = (const lean_object*)&l_Lake_formatQuery___at___00Lake_Package_optBuildCacheFacetConfig_spec__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lake_formatQuery___at___00Lake_Package_optBuildCacheFacetConfig_spec__0(uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lake_formatQuery___at___00Lake_Package_optBuildCacheFacetConfig_spec__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lake_Package_optBuildCacheFacetConfig___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lake_Build_Package_0__Lake_Package_fetchOptBuildCacheCore___boxed, .m_arity = 8, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_Package_optBuildCacheFacetConfig___closed__0 = (const lean_object*)&l_Lake_Package_optBuildCacheFacetConfig___closed__0_value;
static const lean_closure_object l_Lake_Package_optBuildCacheFacetConfig___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_formatQuery___at___00Lake_Package_optBuildCacheFacetConfig_spec__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_Package_optBuildCacheFacetConfig___closed__1 = (const lean_object*)&l_Lake_Package_optBuildCacheFacetConfig___closed__1_value;
static lean_once_cell_t l_Lake_Package_optBuildCacheFacetConfig___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Package_optBuildCacheFacetConfig___closed__2;
LEAN_EXPORT lean_object* l_Lake_Package_optBuildCacheFacetConfig;
static const lean_string_object l___private_Lake_Build_Package_0__Lake_Package_maybeFetchBuildCache___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "leanprover"};
static const lean_object* l___private_Lake_Build_Package_0__Lake_Package_maybeFetchBuildCache___closed__0 = (const lean_object*)&l___private_Lake_Build_Package_0__Lake_Package_maybeFetchBuildCache___closed__0_value;
static const lean_string_object l___private_Lake_Build_Package_0__Lake_Package_maybeFetchBuildCache___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "leanprover-community"};
static const lean_object* l___private_Lake_Build_Package_0__Lake_Package_maybeFetchBuildCache___closed__1 = (const lean_object*)&l___private_Lake_Build_Package_0__Lake_Package_maybeFetchBuildCache___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lake_Build_Package_0__Lake_Package_maybeFetchBuildCache(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Package_0__Lake_Package_maybeFetchBuildCache___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lake_Build_Package_0__Lake_Package_optFacetDetails___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Build_Package_0__Lake_Package_optFacetDetails___redArg___closed__0;
static const lean_string_object l___private_Lake_Build_Package_0__Lake_Package_optFacetDetails___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = " (run with '-v' for details)"};
static const lean_object* l___private_Lake_Build_Package_0__Lake_Package_optFacetDetails___redArg___closed__1 = (const lean_object*)&l___private_Lake_Build_Package_0__Lake_Package_optFacetDetails___redArg___closed__1_value;
static const lean_string_object l___private_Lake_Build_Package_0__Lake_Package_optFacetDetails___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = " (see '"};
static const lean_object* l___private_Lake_Build_Package_0__Lake_Package_optFacetDetails___redArg___closed__2 = (const lean_object*)&l___private_Lake_Build_Package_0__Lake_Package_optFacetDetails___redArg___closed__2_value;
static const lean_string_object l___private_Lake_Build_Package_0__Lake_Package_optFacetDetails___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ":"};
static const lean_object* l___private_Lake_Build_Package_0__Lake_Package_optFacetDetails___redArg___closed__3 = (const lean_object*)&l___private_Lake_Build_Package_0__Lake_Package_optFacetDetails___redArg___closed__3_value;
static const lean_string_object l___private_Lake_Build_Package_0__Lake_Package_optFacetDetails___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "' for details)"};
static const lean_object* l___private_Lake_Build_Package_0__Lake_Package_optFacetDetails___redArg___closed__4 = (const lean_object*)&l___private_Lake_Build_Package_0__Lake_Package_optFacetDetails___redArg___closed__4_value;
LEAN_EXPORT lean_object* l___private_Lake_Build_Package_0__Lake_Package_optFacetDetails___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Package_0__Lake_Package_optFacetDetails___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Package_0__Lake_Package_optFacetDetails(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Package_0__Lake_Package_optFacetDetails___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lake_Build_Package_0__Lake_Package_maybeFetchBuildCacheWithWarning___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "building from source; failed to fetch Reservoir build"};
static const lean_object* l___private_Lake_Build_Package_0__Lake_Package_maybeFetchBuildCacheWithWarning___lam__0___closed__0 = (const lean_object*)&l___private_Lake_Build_Package_0__Lake_Package_maybeFetchBuildCacheWithWarning___lam__0___closed__0_value;
static const lean_string_object l___private_Lake_Build_Package_0__Lake_Package_maybeFetchBuildCacheWithWarning___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 53, .m_capacity = 53, .m_length = 52, .m_data = "building from source; failed to fetch GitHub release"};
static const lean_object* l___private_Lake_Build_Package_0__Lake_Package_maybeFetchBuildCacheWithWarning___lam__0___closed__1 = (const lean_object*)&l___private_Lake_Build_Package_0__Lake_Package_maybeFetchBuildCacheWithWarning___lam__0___closed__1_value;
static lean_once_cell_t l___private_Lake_Build_Package_0__Lake_Package_maybeFetchBuildCacheWithWarning___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Build_Package_0__Lake_Package_maybeFetchBuildCacheWithWarning___lam__0___closed__2;
static lean_once_cell_t l___private_Lake_Build_Package_0__Lake_Package_maybeFetchBuildCacheWithWarning___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Build_Package_0__Lake_Package_maybeFetchBuildCacheWithWarning___lam__0___closed__3;
LEAN_EXPORT lean_object* l___private_Lake_Build_Package_0__Lake_Package_maybeFetchBuildCacheWithWarning___lam__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Package_0__Lake_Package_maybeFetchBuildCacheWithWarning___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Package_0__Lake_Package_maybeFetchBuildCacheWithWarning(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Package_0__Lake_Package_maybeFetchBuildCacheWithWarning___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Package_0__Lake_Package_recBuildExtraDepTargets_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Package_0__Lake_Package_recBuildExtraDepTargets_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Package_0__Lake_Package_recBuildExtraDepTargets___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Package_0__Lake_Package_recBuildExtraDepTargets___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Package_0__Lake_Package_recBuildExtraDepTargets___lam__1(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Package_0__Lake_Package_recBuildExtraDepTargets___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lake_Build_Package_0__Lake_Package_recBuildExtraDepTargets___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = ":extraDep"};
static const lean_object* l___private_Lake_Build_Package_0__Lake_Package_recBuildExtraDepTargets___closed__0 = (const lean_object*)&l___private_Lake_Build_Package_0__Lake_Package_recBuildExtraDepTargets___closed__0_value;
static const lean_string_object l___private_Lake_Build_Package_0__Lake_Package_recBuildExtraDepTargets___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "@"};
static const lean_object* l___private_Lake_Build_Package_0__Lake_Package_recBuildExtraDepTargets___closed__1 = (const lean_object*)&l___private_Lake_Build_Package_0__Lake_Package_recBuildExtraDepTargets___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lake_Build_Package_0__Lake_Package_recBuildExtraDepTargets(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Package_0__Lake_Package_recBuildExtraDepTargets___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lake_formatQuery___at___00Lake_Package_extraDepFacetConfig_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_formatQuery___at___00Lake_Package_extraDepFacetConfig_spec__0___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lake_formatQuery___at___00Lake_Package_extraDepFacetConfig_spec__0___redArg(uint8_t);
LEAN_EXPORT lean_object* l_Lake_formatQuery___at___00Lake_Package_extraDepFacetConfig_spec__0___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_formatQuery___at___00Lake_Package_extraDepFacetConfig_spec__0(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lake_formatQuery___at___00Lake_Package_extraDepFacetConfig_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Package_extraDepFacetConfig___lam__0(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Package_extraDepFacetConfig___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lake_Package_extraDepFacetConfig___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_Package_extraDepFacetConfig___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_Package_extraDepFacetConfig___closed__0 = (const lean_object*)&l_Lake_Package_extraDepFacetConfig___closed__0_value;
static const lean_closure_object l_Lake_Package_extraDepFacetConfig___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lake_Build_Package_0__Lake_Package_recBuildExtraDepTargets___boxed, .m_arity = 8, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_Package_extraDepFacetConfig___closed__1 = (const lean_object*)&l_Lake_Package_extraDepFacetConfig___closed__1_value;
static lean_once_cell_t l_Lake_Package_extraDepFacetConfig___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Package_extraDepFacetConfig___closed__2;
LEAN_EXPORT lean_object* l_Lake_Package_extraDepFacetConfig;
static const lean_string_object l___private_Lake_Build_Package_0__Lake_Package_getBarrelUrl___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "HEAD"};
static const lean_object* l___private_Lake_Build_Package_0__Lake_Package_getBarrelUrl___redArg___closed__0 = (const lean_object*)&l___private_Lake_Build_Package_0__Lake_Package_getBarrelUrl___redArg___closed__0_value;
static const lean_string_object l___private_Lake_Build_Package_0__Lake_Package_getBarrelUrl___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "/barrel\?rev="};
static const lean_object* l___private_Lake_Build_Package_0__Lake_Package_getBarrelUrl___redArg___closed__1 = (const lean_object*)&l___private_Lake_Build_Package_0__Lake_Package_getBarrelUrl___redArg___closed__1_value;
static const lean_string_object l___private_Lake_Build_Package_0__Lake_Package_getBarrelUrl___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "&toolchain="};
static const lean_object* l___private_Lake_Build_Package_0__Lake_Package_getBarrelUrl___redArg___closed__2 = (const lean_object*)&l___private_Lake_Build_Package_0__Lake_Package_getBarrelUrl___redArg___closed__2_value;
static const lean_string_object l___private_Lake_Build_Package_0__Lake_Package_getBarrelUrl___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 75, .m_capacity = 75, .m_length = 74, .m_data = "Lean toolchain not known; Reservoir only hosts builds for known toolchains"};
static const lean_object* l___private_Lake_Build_Package_0__Lake_Package_getBarrelUrl___redArg___closed__3 = (const lean_object*)&l___private_Lake_Build_Package_0__Lake_Package_getBarrelUrl___redArg___closed__3_value;
static const lean_ctor_object l___private_Lake_Build_Package_0__Lake_Package_getBarrelUrl___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lake_Build_Package_0__Lake_Package_getBarrelUrl___redArg___closed__3_value),LEAN_SCALAR_PTR_LITERAL(3, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l___private_Lake_Build_Package_0__Lake_Package_getBarrelUrl___redArg___closed__4 = (const lean_object*)&l___private_Lake_Build_Package_0__Lake_Package_getBarrelUrl___redArg___closed__4_value;
static const lean_string_object l___private_Lake_Build_Package_0__Lake_Package_getBarrelUrl___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "failed to resolve HEAD revision"};
static const lean_object* l___private_Lake_Build_Package_0__Lake_Package_getBarrelUrl___redArg___closed__5 = (const lean_object*)&l___private_Lake_Build_Package_0__Lake_Package_getBarrelUrl___redArg___closed__5_value;
static const lean_ctor_object l___private_Lake_Build_Package_0__Lake_Package_getBarrelUrl___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lake_Build_Package_0__Lake_Package_getBarrelUrl___redArg___closed__5_value),LEAN_SCALAR_PTR_LITERAL(3, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l___private_Lake_Build_Package_0__Lake_Package_getBarrelUrl___redArg___closed__6 = (const lean_object*)&l___private_Lake_Build_Package_0__Lake_Package_getBarrelUrl___redArg___closed__6_value;
static const lean_string_object l___private_Lake_Build_Package_0__Lake_Package_getBarrelUrl___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "package has no Reservoir scope"};
static const lean_object* l___private_Lake_Build_Package_0__Lake_Package_getBarrelUrl___redArg___closed__7 = (const lean_object*)&l___private_Lake_Build_Package_0__Lake_Package_getBarrelUrl___redArg___closed__7_value;
static const lean_ctor_object l___private_Lake_Build_Package_0__Lake_Package_getBarrelUrl___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lake_Build_Package_0__Lake_Package_getBarrelUrl___redArg___closed__7_value),LEAN_SCALAR_PTR_LITERAL(3, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l___private_Lake_Build_Package_0__Lake_Package_getBarrelUrl___redArg___closed__8 = (const lean_object*)&l___private_Lake_Build_Package_0__Lake_Package_getBarrelUrl___redArg___closed__8_value;
LEAN_EXPORT lean_object* l___private_Lake_Build_Package_0__Lake_Package_getBarrelUrl___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Package_0__Lake_Package_getBarrelUrl___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Package_0__Lake_Package_getBarrelUrl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Package_0__Lake_Package_getBarrelUrl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lake_Build_Package_0__Lake_Package_getReleaseUrl___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "no release tag found for revision"};
static const lean_object* l___private_Lake_Build_Package_0__Lake_Package_getReleaseUrl___redArg___closed__0 = (const lean_object*)&l___private_Lake_Build_Package_0__Lake_Package_getReleaseUrl___redArg___closed__0_value;
static const lean_string_object l___private_Lake_Build_Package_0__Lake_Package_getReleaseUrl___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "/releases/download/"};
static const lean_object* l___private_Lake_Build_Package_0__Lake_Package_getReleaseUrl___redArg___closed__1 = (const lean_object*)&l___private_Lake_Build_Package_0__Lake_Package_getReleaseUrl___redArg___closed__1_value;
static const lean_string_object l___private_Lake_Build_Package_0__Lake_Package_getReleaseUrl___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "/"};
static const lean_object* l___private_Lake_Build_Package_0__Lake_Package_getReleaseUrl___redArg___closed__2 = (const lean_object*)&l___private_Lake_Build_Package_0__Lake_Package_getReleaseUrl___redArg___closed__2_value;
static const lean_string_object l___private_Lake_Build_Package_0__Lake_Package_getReleaseUrl___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " '"};
static const lean_object* l___private_Lake_Build_Package_0__Lake_Package_getReleaseUrl___redArg___closed__3 = (const lean_object*)&l___private_Lake_Build_Package_0__Lake_Package_getReleaseUrl___redArg___closed__3_value;
static const lean_string_object l___private_Lake_Build_Package_0__Lake_Package_getReleaseUrl___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "'"};
static const lean_object* l___private_Lake_Build_Package_0__Lake_Package_getReleaseUrl___redArg___closed__4 = (const lean_object*)&l___private_Lake_Build_Package_0__Lake_Package_getReleaseUrl___redArg___closed__4_value;
static const lean_string_object l___private_Lake_Build_Package_0__Lake_Package_getReleaseUrl___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 76, .m_capacity = 76, .m_length = 75, .m_data = "release repository URL not known; the package may need to set 'releaseRepo'"};
static const lean_object* l___private_Lake_Build_Package_0__Lake_Package_getReleaseUrl___redArg___closed__5 = (const lean_object*)&l___private_Lake_Build_Package_0__Lake_Package_getReleaseUrl___redArg___closed__5_value;
static const lean_ctor_object l___private_Lake_Build_Package_0__Lake_Package_getReleaseUrl___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lake_Build_Package_0__Lake_Package_getReleaseUrl___redArg___closed__5_value),LEAN_SCALAR_PTR_LITERAL(3, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l___private_Lake_Build_Package_0__Lake_Package_getReleaseUrl___redArg___closed__6 = (const lean_object*)&l___private_Lake_Build_Package_0__Lake_Package_getReleaseUrl___redArg___closed__6_value;
LEAN_EXPORT lean_object* l___private_Lake_Build_Package_0__Lake_Package_getReleaseUrl___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Package_0__Lake_Package_getReleaseUrl___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Package_0__Lake_Package_getReleaseUrl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Package_0__Lake_Package_getReleaseUrl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_buildAction___at___00__private_Lake_Build_Package_0__Lake_Package_fetchBuildArchive_spec__1___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_buildAction___at___00__private_Lake_Build_Package_0__Lake_Package_fetchBuildArchive_spec__1___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lake_buildAction___at___00__private_Lake_Build_Package_0__Lake_Package_fetchBuildArchive_spec__1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 46, .m_capacity = 46, .m_length = 45, .m_data = "target is out-of-date and needs to be rebuilt"};
static const lean_object* l_Lake_buildAction___at___00__private_Lake_Build_Package_0__Lake_Package_fetchBuildArchive_spec__1___redArg___closed__0 = (const lean_object*)&l_Lake_buildAction___at___00__private_Lake_Build_Package_0__Lake_Package_fetchBuildArchive_spec__1___redArg___closed__0_value;
static const lean_ctor_object l_Lake_buildAction___at___00__private_Lake_Build_Package_0__Lake_Package_fetchBuildArchive_spec__1___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_buildAction___at___00__private_Lake_Build_Package_0__Lake_Package_fetchBuildArchive_spec__1___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(3, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lake_buildAction___at___00__private_Lake_Build_Package_0__Lake_Package_fetchBuildArchive_spec__1___redArg___closed__1 = (const lean_object*)&l_Lake_buildAction___at___00__private_Lake_Build_Package_0__Lake_Package_fetchBuildArchive_spec__1___redArg___closed__1_value;
static const lean_string_object l_Lake_buildAction___at___00__private_Lake_Build_Package_0__Lake_Package_fetchBuildArchive_spec__1___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "nobuild"};
static const lean_object* l_Lake_buildAction___at___00__private_Lake_Build_Package_0__Lake_Package_fetchBuildArchive_spec__1___redArg___closed__2 = (const lean_object*)&l_Lake_buildAction___at___00__private_Lake_Build_Package_0__Lake_Package_fetchBuildArchive_spec__1___redArg___closed__2_value;
LEAN_EXPORT lean_object* l_Lake_buildAction___at___00__private_Lake_Build_Package_0__Lake_Package_fetchBuildArchive_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_buildAction___at___00__private_Lake_Build_Package_0__Lake_Package_fetchBuildArchive_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_buildAction___at___00__private_Lake_Build_Package_0__Lake_Package_fetchBuildArchive_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_buildAction___at___00__private_Lake_Build_Package_0__Lake_Package_fetchBuildArchive_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Option_instBEq_beq___at___00__private_Lake_Build_Common_0__Lake_checkHashUpToDate_x27___at___00Lake_SavedTrace_replayIfUpToDate_x27___at___00__private_Lake_Build_Package_0__Lake_Package_fetchBuildArchive_spec__0_spec__0_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Option_instBEq_beq___at___00__private_Lake_Build_Common_0__Lake_checkHashUpToDate_x27___at___00Lake_SavedTrace_replayIfUpToDate_x27___at___00__private_Lake_Build_Package_0__Lake_Package_fetchBuildArchive_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lake_MTime_checkUpToDate___at___00Lake_SavedTrace_replayIfUpToDate_x27___at___00__private_Lake_Build_Package_0__Lake_Package_fetchBuildArchive_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_MTime_checkUpToDate___at___00Lake_SavedTrace_replayIfUpToDate_x27___at___00__private_Lake_Build_Package_0__Lake_Package_fetchBuildArchive_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_checkHashUpToDate_x27___at___00Lake_SavedTrace_replayIfUpToDate_x27___at___00__private_Lake_Build_Package_0__Lake_Package_fetchBuildArchive_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_checkHashUpToDate_x27___at___00Lake_SavedTrace_replayIfUpToDate_x27___at___00__private_Lake_Build_Package_0__Lake_Package_fetchBuildArchive_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lake_SavedTrace_replayIfUpToDate_x27___at___00__private_Lake_Build_Package_0__Lake_Package_fetchBuildArchive_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_SavedTrace_replayIfUpToDate_x27___at___00__private_Lake_Build_Package_0__Lake_Package_fetchBuildArchive_spec__0___closed__0;
LEAN_EXPORT lean_object* l_Lake_SavedTrace_replayIfUpToDate_x27___at___00__private_Lake_Build_Package_0__Lake_Package_fetchBuildArchive_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_SavedTrace_replayIfUpToDate_x27___at___00__private_Lake_Build_Package_0__Lake_Package_fetchBuildArchive_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lake_Build_Package_0__Lake_Package_fetchBuildArchive___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lake_Build_Package_0__Lake_Package_fetchBuildArchive___closed__0 = (const lean_object*)&l___private_Lake_Build_Package_0__Lake_Package_fetchBuildArchive___closed__0_value;
static const lean_string_object l___private_Lake_Build_Package_0__Lake_Package_fetchBuildArchive___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l___private_Lake_Build_Package_0__Lake_Package_fetchBuildArchive___closed__1 = (const lean_object*)&l___private_Lake_Build_Package_0__Lake_Package_fetchBuildArchive___closed__1_value;
static const lean_string_object l___private_Lake_Build_Package_0__Lake_Package_fetchBuildArchive___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "<hash>"};
static const lean_object* l___private_Lake_Build_Package_0__Lake_Package_fetchBuildArchive___closed__2 = (const lean_object*)&l___private_Lake_Build_Package_0__Lake_Package_fetchBuildArchive___closed__2_value;
static lean_once_cell_t l___private_Lake_Build_Package_0__Lake_Package_fetchBuildArchive___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Build_Package_0__Lake_Package_fetchBuildArchive___closed__3;
static lean_once_cell_t l___private_Lake_Build_Package_0__Lake_Package_fetchBuildArchive___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Build_Package_0__Lake_Package_fetchBuildArchive___closed__4;
LEAN_EXPORT lean_object* l___private_Lake_Build_Package_0__Lake_Package_fetchBuildArchive(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Package_0__Lake_Package_fetchBuildArchive___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_checkHashUpToDate_x27___at___00Lake_SavedTrace_replayIfUpToDate_x27___at___00__private_Lake_Build_Package_0__Lake_Package_fetchBuildArchive_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_checkHashUpToDate_x27___at___00Lake_SavedTrace_replayIfUpToDate_x27___at___00__private_Lake_Build_Package_0__Lake_Package_fetchBuildArchive_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Package_0__Lake_Package_mkOptBuildArchiveFacetConfig___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Package_0__Lake_Package_mkOptBuildArchiveFacetConfig___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Package_0__Lake_Package_mkOptBuildArchiveFacetConfig___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Package_0__Lake_Package_mkOptBuildArchiveFacetConfig___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lake_Build_Package_0__Lake_Package_mkOptBuildArchiveFacetConfig___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instToStringBool___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lake_Build_Package_0__Lake_Package_mkOptBuildArchiveFacetConfig___redArg___closed__0 = (const lean_object*)&l___private_Lake_Build_Package_0__Lake_Package_mkOptBuildArchiveFacetConfig___redArg___closed__0_value;
static const lean_closure_object l___private_Lake_Build_Package_0__Lake_Package_mkOptBuildArchiveFacetConfig___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instToJsonBool___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lake_Build_Package_0__Lake_Package_mkOptBuildArchiveFacetConfig___redArg___closed__1 = (const lean_object*)&l___private_Lake_Build_Package_0__Lake_Package_mkOptBuildArchiveFacetConfig___redArg___closed__1_value;
static const lean_ctor_object l___private_Lake_Build_Package_0__Lake_Package_mkOptBuildArchiveFacetConfig___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lake_Build_Package_0__Lake_Package_mkOptBuildArchiveFacetConfig___redArg___closed__0_value),((lean_object*)&l___private_Lake_Build_Package_0__Lake_Package_mkOptBuildArchiveFacetConfig___redArg___closed__1_value)}};
static const lean_object* l___private_Lake_Build_Package_0__Lake_Package_mkOptBuildArchiveFacetConfig___redArg___closed__2 = (const lean_object*)&l___private_Lake_Build_Package_0__Lake_Package_mkOptBuildArchiveFacetConfig___redArg___closed__2_value;
static const lean_closure_object l___private_Lake_Build_Package_0__Lake_Package_mkOptBuildArchiveFacetConfig___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_formatQuery___boxed, .m_arity = 4, .m_num_fixed = 2, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lake_Build_Package_0__Lake_Package_mkOptBuildArchiveFacetConfig___redArg___closed__2_value)} };
static const lean_object* l___private_Lake_Build_Package_0__Lake_Package_mkOptBuildArchiveFacetConfig___redArg___closed__3 = (const lean_object*)&l___private_Lake_Build_Package_0__Lake_Package_mkOptBuildArchiveFacetConfig___redArg___closed__3_value;
LEAN_EXPORT lean_object* l___private_Lake_Build_Package_0__Lake_Package_mkOptBuildArchiveFacetConfig___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Package_0__Lake_Package_mkOptBuildArchiveFacetConfig(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lake_Build_Package_0__Lake_Package_mkBuildArchiveFacetConfig___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "failed to fetch "};
static const lean_object* l___private_Lake_Build_Package_0__Lake_Package_mkBuildArchiveFacetConfig___redArg___lam__0___closed__0 = (const lean_object*)&l___private_Lake_Build_Package_0__Lake_Package_mkBuildArchiveFacetConfig___redArg___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lake_Build_Package_0__Lake_Package_mkBuildArchiveFacetConfig___redArg___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Package_0__Lake_Package_mkBuildArchiveFacetConfig___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Package_0__Lake_Package_mkBuildArchiveFacetConfig___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Package_0__Lake_Package_mkBuildArchiveFacetConfig___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Package_0__Lake_Package_mkBuildArchiveFacetConfig___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Package_0__Lake_Package_mkBuildArchiveFacetConfig___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lake_Build_Package_0__Lake_Package_mkBuildArchiveFacetConfig___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_instQueryTextUnit___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lake_Build_Package_0__Lake_Package_mkBuildArchiveFacetConfig___redArg___closed__0 = (const lean_object*)&l___private_Lake_Build_Package_0__Lake_Package_mkBuildArchiveFacetConfig___redArg___closed__0_value;
static const lean_closure_object l___private_Lake_Build_Package_0__Lake_Package_mkBuildArchiveFacetConfig___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_instQueryJsonUnit___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lake_Build_Package_0__Lake_Package_mkBuildArchiveFacetConfig___redArg___closed__1 = (const lean_object*)&l___private_Lake_Build_Package_0__Lake_Package_mkBuildArchiveFacetConfig___redArg___closed__1_value;
static const lean_ctor_object l___private_Lake_Build_Package_0__Lake_Package_mkBuildArchiveFacetConfig___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lake_Build_Package_0__Lake_Package_mkBuildArchiveFacetConfig___redArg___closed__0_value),((lean_object*)&l___private_Lake_Build_Package_0__Lake_Package_mkBuildArchiveFacetConfig___redArg___closed__1_value)}};
static const lean_object* l___private_Lake_Build_Package_0__Lake_Package_mkBuildArchiveFacetConfig___redArg___closed__2 = (const lean_object*)&l___private_Lake_Build_Package_0__Lake_Package_mkBuildArchiveFacetConfig___redArg___closed__2_value;
static const lean_closure_object l___private_Lake_Build_Package_0__Lake_Package_mkBuildArchiveFacetConfig___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_formatQuery___boxed, .m_arity = 4, .m_num_fixed = 2, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lake_Build_Package_0__Lake_Package_mkBuildArchiveFacetConfig___redArg___closed__2_value)} };
static const lean_object* l___private_Lake_Build_Package_0__Lake_Package_mkBuildArchiveFacetConfig___redArg___closed__3 = (const lean_object*)&l___private_Lake_Build_Package_0__Lake_Package_mkBuildArchiveFacetConfig___redArg___closed__3_value;
LEAN_EXPORT lean_object* l___private_Lake_Build_Package_0__Lake_Package_mkBuildArchiveFacetConfig___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Package_0__Lake_Package_mkBuildArchiveFacetConfig(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lake_Package_buildCacheFacetConfig___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "failed to fetch build cache"};
static const lean_object* l_Lake_Package_buildCacheFacetConfig___lam__1___closed__0 = (const lean_object*)&l_Lake_Package_buildCacheFacetConfig___lam__1___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_Package_buildCacheFacetConfig___lam__1(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Package_buildCacheFacetConfig___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Package_buildCacheFacetConfig___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Package_buildCacheFacetConfig___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lake_Package_buildCacheFacetConfig___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Package_buildCacheFacetConfig___closed__0;
static lean_once_cell_t l_Lake_Package_buildCacheFacetConfig___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Package_buildCacheFacetConfig___closed__1;
LEAN_EXPORT lean_object* l_Lake_Package_buildCacheFacetConfig;
static const lean_string_object l_Lake_Package_optBarrelFacetConfig___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "build.barrel"};
static const lean_object* l_Lake_Package_optBarrelFacetConfig___lam__0___closed__0 = (const lean_object*)&l_Lake_Package_optBarrelFacetConfig___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_Package_optBarrelFacetConfig___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Package_optBarrelFacetConfig___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Package_optBarrelFacetConfig___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Package_optBarrelFacetConfig___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Package_optBarrelFacetConfig___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Package_optBarrelFacetConfig___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lake_Package_optBarrelFacetConfig___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Package_optBarrelFacetConfig___closed__0;
static lean_once_cell_t l_Lake_Package_optBarrelFacetConfig___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Package_optBarrelFacetConfig___closed__1;
LEAN_EXPORT lean_object* l_Lake_Package_optBarrelFacetConfig;
static const lean_string_object l_Lake_Package_barrelFacetConfig___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "failed to fetch Reservoir build"};
static const lean_object* l_Lake_Package_barrelFacetConfig___lam__1___closed__0 = (const lean_object*)&l_Lake_Package_barrelFacetConfig___lam__1___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_Package_barrelFacetConfig___lam__1(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Package_barrelFacetConfig___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Package_barrelFacetConfig___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Package_barrelFacetConfig___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lake_Package_barrelFacetConfig___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Package_barrelFacetConfig___closed__0;
static lean_once_cell_t l_Lake_Package_barrelFacetConfig___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Package_barrelFacetConfig___closed__1;
LEAN_EXPORT lean_object* l_Lake_Package_barrelFacetConfig;
LEAN_EXPORT lean_object* l_Lake_Package_optGitHubReleaseFacetConfig___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Package_optGitHubReleaseFacetConfig___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Package_optGitHubReleaseFacetConfig___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Package_optGitHubReleaseFacetConfig___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lake_Package_optGitHubReleaseFacetConfig___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lake_Package_optGitHubReleaseFacetConfig___closed__0 = (const lean_object*)&l_Lake_Package_optGitHubReleaseFacetConfig___closed__0_value;
static lean_once_cell_t l_Lake_Package_optGitHubReleaseFacetConfig___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Package_optGitHubReleaseFacetConfig___closed__1;
static lean_once_cell_t l_Lake_Package_optGitHubReleaseFacetConfig___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Package_optGitHubReleaseFacetConfig___closed__2;
LEAN_EXPORT lean_object* l_Lake_Package_optGitHubReleaseFacetConfig;
static const lean_string_object l_Lake_Package_gitHubReleaseFacetConfig___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "failed to fetch GitHub release"};
static const lean_object* l_Lake_Package_gitHubReleaseFacetConfig___lam__1___closed__0 = (const lean_object*)&l_Lake_Package_gitHubReleaseFacetConfig___lam__1___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_Package_gitHubReleaseFacetConfig___lam__1(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Package_gitHubReleaseFacetConfig___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Package_gitHubReleaseFacetConfig___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Package_gitHubReleaseFacetConfig___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lake_Package_gitHubReleaseFacetConfig___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Package_gitHubReleaseFacetConfig___closed__0;
static lean_once_cell_t l_Lake_Package_gitHubReleaseFacetConfig___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Package_gitHubReleaseFacetConfig___closed__1;
LEAN_EXPORT lean_object* l_Lake_Package_gitHubReleaseFacetConfig;
LEAN_EXPORT lean_object* l_Lake_Package_afterBuildCacheAsync___redArg___lam__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Package_afterBuildCacheAsync___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Package_afterBuildCacheAsync___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Package_afterBuildCacheAsync___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Package_afterBuildCacheAsync(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Package_afterBuildCacheAsync___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Package_afterBuildCacheSync___redArg___lam__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Package_afterBuildCacheSync___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Package_afterBuildCacheSync___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Package_afterBuildCacheSync___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Package_afterBuildCacheSync(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Package_afterBuildCacheSync___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lake_Package_initFacetConfigs_spec__0___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lake_Package_initFacetConfigs___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Package_initFacetConfigs___closed__0;
static lean_once_cell_t l_Lake_Package_initFacetConfigs___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Package_initFacetConfigs___closed__1;
static lean_once_cell_t l_Lake_Package_initFacetConfigs___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Package_initFacetConfigs___closed__2;
static lean_once_cell_t l_Lake_Package_initFacetConfigs___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Package_initFacetConfigs___closed__3;
static lean_once_cell_t l_Lake_Package_initFacetConfigs___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Package_initFacetConfigs___closed__4;
static lean_once_cell_t l_Lake_Package_initFacetConfigs___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Package_initFacetConfigs___closed__5;
static lean_once_cell_t l_Lake_Package_initFacetConfigs___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Package_initFacetConfigs___closed__6;
static lean_once_cell_t l_Lake_Package_initFacetConfigs___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Package_initFacetConfigs___closed__7;
static lean_once_cell_t l_Lake_Package_initFacetConfigs___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Package_initFacetConfigs___closed__8;
static lean_once_cell_t l_Lake_Package_initFacetConfigs___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Package_initFacetConfigs___closed__9;
LEAN_EXPORT lean_object* l_Lake_Package_initFacetConfigs;
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lake_Package_initFacetConfigs_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_initPackageFacetConfigs;
static lean_object* _init_l___private_Lake_Build_Package_0__Lake_Package_recFetchDeps___redArg___closed__0(void){
_start:
{
lean_object* v___x_1_; 
v___x_1_ = l_Lake_OptDataKind_anonymous___redArg();
return v___x_1_;
}
}
static lean_object* _init_l___private_Lake_Build_Package_0__Lake_Package_recFetchDeps___redArg___closed__4(void){
_start:
{
lean_object* v___x_6_; lean_object* v___x_7_; 
v___x_6_ = ((lean_object*)(l___private_Lake_Build_Package_0__Lake_Package_recFetchDeps___redArg___closed__3));
v___x_7_ = l_Lake_BuildTrace_nil(v___x_6_);
return v___x_7_;
}
}
static lean_object* _init_l___private_Lake_Build_Package_0__Lake_Package_recFetchDeps___redArg___closed__5(void){
_start:
{
lean_object* v___x_8_; lean_object* v___x_9_; uint8_t v___x_10_; uint8_t v___x_11_; lean_object* v___x_12_; lean_object* v___x_13_; 
v___x_8_ = lean_unsigned_to_nat(0u);
v___x_9_ = lean_obj_once(&l___private_Lake_Build_Package_0__Lake_Package_recFetchDeps___redArg___closed__4, &l___private_Lake_Build_Package_0__Lake_Package_recFetchDeps___redArg___closed__4_once, _init_l___private_Lake_Build_Package_0__Lake_Package_recFetchDeps___redArg___closed__4);
v___x_10_ = 0;
v___x_11_ = 0;
v___x_12_ = ((lean_object*)(l___private_Lake_Build_Package_0__Lake_Package_recFetchDeps___redArg___closed__1));
v___x_13_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_13_, 0, v___x_12_);
lean_ctor_set(v___x_13_, 1, v___x_9_);
lean_ctor_set(v___x_13_, 2, v___x_8_);
lean_ctor_set_uint8(v___x_13_, sizeof(void*)*3, v___x_11_);
lean_ctor_set_uint8(v___x_13_, sizeof(void*)*3 + 1, v___x_10_);
return v___x_13_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Package_0__Lake_Package_recFetchDeps___redArg(lean_object* v_self_14_, lean_object* v_a_15_){
_start:
{
lean_object* v_depPkgs_17_; lean_object* v___x_18_; lean_object* v___x_19_; uint8_t v___x_20_; lean_object* v___x_21_; lean_object* v___x_22_; lean_object* v___x_23_; lean_object* v___x_24_; lean_object* v___x_25_; 
v_depPkgs_17_ = lean_ctor_get(v_self_14_, 14);
v___x_18_ = lean_obj_once(&l___private_Lake_Build_Package_0__Lake_Package_recFetchDeps___redArg___closed__0, &l___private_Lake_Build_Package_0__Lake_Package_recFetchDeps___redArg___closed__0_once, _init_l___private_Lake_Build_Package_0__Lake_Package_recFetchDeps___redArg___closed__0);
v___x_19_ = ((lean_object*)(l___private_Lake_Build_Package_0__Lake_Package_recFetchDeps___redArg___closed__2));
v___x_20_ = 0;
v___x_21_ = lean_obj_once(&l___private_Lake_Build_Package_0__Lake_Package_recFetchDeps___redArg___closed__5, &l___private_Lake_Build_Package_0__Lake_Package_recFetchDeps___redArg___closed__5_once, _init_l___private_Lake_Build_Package_0__Lake_Package_recFetchDeps___redArg___closed__5);
lean_inc_ref(v_depPkgs_17_);
v___x_22_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_22_, 0, v_depPkgs_17_);
lean_ctor_set(v___x_22_, 1, v___x_21_);
v___x_23_ = lean_task_pure(v___x_22_);
v___x_24_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_24_, 0, v___x_23_);
lean_ctor_set(v___x_24_, 1, v___x_18_);
lean_ctor_set(v___x_24_, 2, v___x_19_);
lean_ctor_set_uint8(v___x_24_, sizeof(void*)*3, v___x_20_);
v___x_25_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_25_, 0, v___x_24_);
lean_ctor_set(v___x_25_, 1, v_a_15_);
return v___x_25_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Package_0__Lake_Package_recFetchDeps___redArg___boxed(lean_object* v_self_26_, lean_object* v_a_27_, lean_object* v_a_28_){
_start:
{
lean_object* v_res_29_; 
v_res_29_ = l___private_Lake_Build_Package_0__Lake_Package_recFetchDeps___redArg(v_self_26_, v_a_27_);
lean_dec_ref(v_self_26_);
return v_res_29_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Package_0__Lake_Package_recFetchDeps(lean_object* v_self_30_, lean_object* v_a_31_, lean_object* v_a_32_, lean_object* v_a_33_, lean_object* v_a_34_, lean_object* v_a_35_, lean_object* v_a_36_){
_start:
{
lean_object* v___x_38_; 
v___x_38_ = l___private_Lake_Build_Package_0__Lake_Package_recFetchDeps___redArg(v_self_30_, v_a_36_);
return v___x_38_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Package_0__Lake_Package_recFetchDeps___boxed(lean_object* v_self_39_, lean_object* v_a_40_, lean_object* v_a_41_, lean_object* v_a_42_, lean_object* v_a_43_, lean_object* v_a_44_, lean_object* v_a_45_, lean_object* v_a_46_){
_start:
{
lean_object* v_res_47_; 
v_res_47_ = l___private_Lake_Build_Package_0__Lake_Package_recFetchDeps(v_self_39_, v_a_40_, v_a_41_, v_a_42_, v_a_43_, v_a_44_, v_a_45_);
lean_dec_ref(v_a_44_);
lean_dec(v_a_43_);
lean_dec(v_a_42_);
lean_dec(v_a_41_);
lean_dec_ref(v_a_40_);
lean_dec_ref(v_self_39_);
return v_res_47_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_formatQuery___at___00Lake_Package_depsFacetConfig_spec__0_spec__1(size_t v_sz_48_, size_t v_i_49_, lean_object* v_bs_50_){
_start:
{
uint8_t v___x_51_; 
v___x_51_ = lean_usize_dec_lt(v_i_49_, v_sz_48_);
if (v___x_51_ == 0)
{
lean_object* v___x_52_; 
v___x_52_ = l_unsafeCast___redArg(v_bs_50_);
lean_dec_ref(v_bs_50_);
return v___x_52_;
}
else
{
lean_object* v_v_53_; lean_object* v___x_54_; lean_object* v_keyName_55_; lean_object* v___x_56_; lean_object* v_bs_x27_57_; lean_object* v___x_58_; lean_object* v___x_59_; size_t v___x_60_; size_t v___x_61_; lean_object* v___x_62_; lean_object* v___x_63_; 
v_v_53_ = lean_array_uget_borrowed(v_bs_50_, v_i_49_);
v___x_54_ = l_unsafeCast___redArg(v_v_53_);
v_keyName_55_ = lean_ctor_get(v___x_54_, 2);
lean_inc(v_keyName_55_);
lean_dec(v___x_54_);
v___x_56_ = lean_unsigned_to_nat(0u);
v_bs_x27_57_ = lean_array_uset(v_bs_50_, v_i_49_, v___x_56_);
v___x_58_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_keyName_55_, v___x_51_);
v___x_59_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_59_, 0, v___x_58_);
v___x_60_ = ((size_t)1ULL);
v___x_61_ = lean_usize_add(v_i_49_, v___x_60_);
v___x_62_ = l_unsafeCast___redArg(v___x_59_);
lean_dec_ref_known(v___x_59_, 1);
v___x_63_ = lean_array_uset(v_bs_x27_57_, v_i_49_, v___x_62_);
v_i_49_ = v___x_61_;
v_bs_50_ = v___x_63_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_formatQuery___at___00Lake_Package_depsFacetConfig_spec__0_spec__1___boxed(lean_object* v_sz_65_, lean_object* v_i_66_, lean_object* v_bs_67_){
_start:
{
size_t v_sz_boxed_68_; size_t v_i_boxed_69_; lean_object* v_res_70_; 
v_sz_boxed_68_ = lean_unbox_usize(v_sz_65_);
lean_dec(v_sz_65_);
v_i_boxed_69_ = lean_unbox_usize(v_i_66_);
lean_dec(v_i_66_);
v_res_70_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_formatQuery___at___00Lake_Package_depsFacetConfig_spec__0_spec__1(v_sz_boxed_68_, v_i_boxed_69_, v_bs_67_);
return v_res_70_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_formatQuery___at___00Lake_Package_depsFacetConfig_spec__0_spec__0(lean_object* v_as_72_, size_t v_i_73_, size_t v_stop_74_, lean_object* v_b_75_){
_start:
{
uint8_t v___x_76_; 
v___x_76_ = lean_usize_dec_eq(v_i_73_, v_stop_74_);
if (v___x_76_ == 0)
{
lean_object* v___x_77_; lean_object* v_baseName_78_; lean_object* v___x_79_; lean_object* v___x_80_; lean_object* v___x_81_; lean_object* v___x_82_; size_t v___x_83_; size_t v___x_84_; 
v___x_77_ = lean_array_uget_borrowed(v_as_72_, v_i_73_);
v_baseName_78_ = lean_ctor_get(v___x_77_, 1);
lean_inc(v_baseName_78_);
v___x_79_ = l_Lean_Name_toString(v_baseName_78_, v___x_76_);
v___x_80_ = lean_string_append(v_b_75_, v___x_79_);
lean_dec_ref(v___x_79_);
v___x_81_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_formatQuery___at___00Lake_Package_depsFacetConfig_spec__0_spec__0___closed__0));
v___x_82_ = lean_string_append(v___x_80_, v___x_81_);
v___x_83_ = ((size_t)1ULL);
v___x_84_ = lean_usize_add(v_i_73_, v___x_83_);
v_i_73_ = v___x_84_;
v_b_75_ = v___x_82_;
goto _start;
}
else
{
return v_b_75_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_formatQuery___at___00Lake_Package_depsFacetConfig_spec__0_spec__0___boxed(lean_object* v_as_86_, lean_object* v_i_87_, lean_object* v_stop_88_, lean_object* v_b_89_){
_start:
{
size_t v_i_boxed_90_; size_t v_stop_boxed_91_; lean_object* v_res_92_; 
v_i_boxed_90_ = lean_unbox_usize(v_i_87_);
lean_dec(v_i_87_);
v_stop_boxed_91_ = lean_unbox_usize(v_stop_88_);
lean_dec(v_stop_88_);
v_res_92_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_formatQuery___at___00Lake_Package_depsFacetConfig_spec__0_spec__0(v_as_86_, v_i_boxed_90_, v_stop_boxed_91_, v_b_89_);
lean_dec_ref(v_as_86_);
return v_res_92_;
}
}
LEAN_EXPORT lean_object* l_Lake_formatQuery___at___00Lake_Package_depsFacetConfig_spec__0(uint8_t v_fmt_93_, lean_object* v_a_94_){
_start:
{
lean_object* v___y_96_; 
if (v_fmt_93_ == 0)
{
lean_object* v___x_103_; lean_object* v___x_104_; lean_object* v___x_105_; uint8_t v___x_106_; 
v___x_103_ = ((lean_object*)(l___private_Lake_Build_Package_0__Lake_Package_recFetchDeps___redArg___closed__2));
v___x_104_ = lean_unsigned_to_nat(0u);
v___x_105_ = lean_array_get_size(v_a_94_);
v___x_106_ = lean_nat_dec_lt(v___x_104_, v___x_105_);
if (v___x_106_ == 0)
{
v___y_96_ = v___x_103_;
goto v___jp_95_;
}
else
{
size_t v___x_107_; size_t v___x_108_; lean_object* v___x_109_; 
v___x_107_ = ((size_t)0ULL);
v___x_108_ = lean_usize_of_nat(v___x_105_);
v___x_109_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_formatQuery___at___00Lake_Package_depsFacetConfig_spec__0_spec__0(v_a_94_, v___x_107_, v___x_108_, v___x_103_);
v___y_96_ = v___x_109_;
goto v___jp_95_;
}
}
else
{
size_t v_sz_110_; size_t v___x_111_; lean_object* v___x_112_; lean_object* v___x_113_; lean_object* v___x_114_; lean_object* v___x_115_; lean_object* v___x_116_; 
v_sz_110_ = lean_array_size(v_a_94_);
v___x_111_ = ((size_t)0ULL);
v___x_112_ = l_unsafeCast___redArg(v_a_94_);
v___x_113_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_formatQuery___at___00Lake_Package_depsFacetConfig_spec__0_spec__1(v_sz_110_, v___x_111_, v___x_112_);
v___x_114_ = l_unsafeCast___redArg(v___x_113_);
lean_dec_ref(v___x_113_);
v___x_115_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_115_, 0, v___x_114_);
v___x_116_ = l_Lean_Json_compress(v___x_115_);
return v___x_116_;
}
v___jp_95_:
{
lean_object* v___x_97_; lean_object* v___x_98_; lean_object* v___x_99_; lean_object* v___x_100_; lean_object* v___x_101_; lean_object* v___x_102_; 
v___x_97_ = lean_unsigned_to_nat(1u);
v___x_98_ = lean_unsigned_to_nat(0u);
v___x_99_ = lean_string_utf8_byte_size(v___y_96_);
lean_inc_ref(v___y_96_);
v___x_100_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_100_, 0, v___y_96_);
lean_ctor_set(v___x_100_, 1, v___x_98_);
lean_ctor_set(v___x_100_, 2, v___x_99_);
v___x_101_ = l_String_Slice_Pos_prevn(v___x_100_, v___x_99_, v___x_97_);
lean_dec_ref_known(v___x_100_, 3);
v___x_102_ = lean_string_utf8_extract_fast(v___y_96_, v___x_98_, v___x_101_);
lean_dec(v___x_101_);
lean_dec_ref(v___y_96_);
return v___x_102_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_formatQuery___at___00Lake_Package_depsFacetConfig_spec__0___boxed(lean_object* v_fmt_117_, lean_object* v_a_118_){
_start:
{
uint8_t v_fmt_boxed_119_; lean_object* v_res_120_; 
v_fmt_boxed_119_ = lean_unbox(v_fmt_117_);
v_res_120_ = l_Lake_formatQuery___at___00Lake_Package_depsFacetConfig_spec__0(v_fmt_boxed_119_, v_a_118_);
lean_dec_ref(v_a_118_);
return v_res_120_;
}
}
static lean_object* _init_l_Lake_Package_depsFacetConfig___closed__2(void){
_start:
{
uint8_t v___x_123_; lean_object* v___f_124_; uint8_t v___x_125_; lean_object* v___x_126_; lean_object* v___x_127_; lean_object* v___x_128_; lean_object* v___x_129_; 
v___x_123_ = 1;
v___f_124_ = ((lean_object*)(l_Lake_Package_depsFacetConfig___closed__0));
v___x_125_ = 0;
v___x_126_ = lean_obj_once(&l___private_Lake_Build_Package_0__Lake_Package_recFetchDeps___redArg___closed__0, &l___private_Lake_Build_Package_0__Lake_Package_recFetchDeps___redArg___closed__0_once, _init_l___private_Lake_Build_Package_0__Lake_Package_recFetchDeps___redArg___closed__0);
v___x_127_ = ((lean_object*)(l_Lake_Package_depsFacetConfig___closed__1));
v___x_128_ = l_Lake_Package_keyword;
v___x_129_ = lean_alloc_ctor(0, 4, 2);
lean_ctor_set(v___x_129_, 0, v___x_128_);
lean_ctor_set(v___x_129_, 1, v___x_127_);
lean_ctor_set(v___x_129_, 2, v___x_126_);
lean_ctor_set(v___x_129_, 3, v___f_124_);
lean_ctor_set_uint8(v___x_129_, sizeof(void*)*4, v___x_125_);
lean_ctor_set_uint8(v___x_129_, sizeof(void*)*4 + 1, v___x_123_);
return v___x_129_;
}
}
static lean_object* _init_l_Lake_Package_depsFacetConfig(void){
_start:
{
lean_object* v___x_130_; 
v___x_130_ = lean_obj_once(&l_Lake_Package_depsFacetConfig___closed__2, &l_Lake_Package_depsFacetConfig___closed__2_once, _init_l_Lake_Package_depsFacetConfig___closed__2);
return v___x_130_;
}
}
static lean_object* _init_l_Lake_OrdHashSet_empty___at___00__private_Lake_Build_Package_0__Lake_Package_recComputeTransDeps_spec__2___closed__0(void){
_start:
{
lean_object* v___x_131_; lean_object* v___x_132_; lean_object* v___x_133_; 
v___x_131_ = lean_box(0);
v___x_132_ = lean_unsigned_to_nat(16u);
v___x_133_ = lean_mk_array(v___x_132_, v___x_131_);
return v___x_133_;
}
}
static lean_object* _init_l_Lake_OrdHashSet_empty___at___00__private_Lake_Build_Package_0__Lake_Package_recComputeTransDeps_spec__2___closed__1(void){
_start:
{
lean_object* v___x_134_; lean_object* v___x_135_; lean_object* v___x_136_; 
v___x_134_ = lean_obj_once(&l_Lake_OrdHashSet_empty___at___00__private_Lake_Build_Package_0__Lake_Package_recComputeTransDeps_spec__2___closed__0, &l_Lake_OrdHashSet_empty___at___00__private_Lake_Build_Package_0__Lake_Package_recComputeTransDeps_spec__2___closed__0_once, _init_l_Lake_OrdHashSet_empty___at___00__private_Lake_Build_Package_0__Lake_Package_recComputeTransDeps_spec__2___closed__0);
v___x_135_ = lean_unsigned_to_nat(0u);
v___x_136_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_136_, 0, v___x_135_);
lean_ctor_set(v___x_136_, 1, v___x_134_);
return v___x_136_;
}
}
static lean_object* _init_l_Lake_OrdHashSet_empty___at___00__private_Lake_Build_Package_0__Lake_Package_recComputeTransDeps_spec__2___closed__3(void){
_start:
{
lean_object* v___x_139_; lean_object* v___x_140_; lean_object* v___x_141_; 
v___x_139_ = ((lean_object*)(l_Lake_OrdHashSet_empty___at___00__private_Lake_Build_Package_0__Lake_Package_recComputeTransDeps_spec__2___closed__2));
v___x_140_ = lean_obj_once(&l_Lake_OrdHashSet_empty___at___00__private_Lake_Build_Package_0__Lake_Package_recComputeTransDeps_spec__2___closed__1, &l_Lake_OrdHashSet_empty___at___00__private_Lake_Build_Package_0__Lake_Package_recComputeTransDeps_spec__2___closed__1_once, _init_l_Lake_OrdHashSet_empty___at___00__private_Lake_Build_Package_0__Lake_Package_recComputeTransDeps_spec__2___closed__1);
v___x_141_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_141_, 0, v___x_140_);
lean_ctor_set(v___x_141_, 1, v___x_139_);
return v___x_141_;
}
}
static lean_object* _init_l_Lake_OrdHashSet_empty___at___00__private_Lake_Build_Package_0__Lake_Package_recComputeTransDeps_spec__2(void){
_start:
{
lean_object* v___x_142_; 
v___x_142_ = lean_obj_once(&l_Lake_OrdHashSet_empty___at___00__private_Lake_Build_Package_0__Lake_Package_recComputeTransDeps_spec__2___closed__3, &l_Lake_OrdHashSet_empty___at___00__private_Lake_Build_Package_0__Lake_Package_recComputeTransDeps_spec__2___closed__3_once, _init_l_Lake_OrdHashSet_empty___at___00__private_Lake_Build_Package_0__Lake_Package_recComputeTransDeps_spec__2___closed__3);
return v___x_142_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lake_OrdHashSet_insert___at___00__private_Lake_Build_Package_0__Lake_Package_recComputeTransDeps_spec__0_spec__0_spec__2___redArg(lean_object* v_a_143_, lean_object* v_x_144_){
_start:
{
if (lean_obj_tag(v_x_144_) == 0)
{
uint8_t v___x_145_; 
v___x_145_ = 0;
return v___x_145_;
}
else
{
lean_object* v_key_146_; lean_object* v_tail_147_; lean_object* v_wsIdx_148_; lean_object* v_wsIdx_149_; uint8_t v___x_150_; 
v_key_146_ = lean_ctor_get(v_x_144_, 0);
v_tail_147_ = lean_ctor_get(v_x_144_, 2);
v_wsIdx_148_ = lean_ctor_get(v_key_146_, 0);
v_wsIdx_149_ = lean_ctor_get(v_a_143_, 0);
v___x_150_ = lean_nat_dec_eq(v_wsIdx_148_, v_wsIdx_149_);
if (v___x_150_ == 0)
{
v_x_144_ = v_tail_147_;
goto _start;
}
else
{
return v___x_150_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lake_OrdHashSet_insert___at___00__private_Lake_Build_Package_0__Lake_Package_recComputeTransDeps_spec__0_spec__0_spec__2___redArg___boxed(lean_object* v_a_152_, lean_object* v_x_153_){
_start:
{
uint8_t v_res_154_; lean_object* v_r_155_; 
v_res_154_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lake_OrdHashSet_insert___at___00__private_Lake_Build_Package_0__Lake_Package_recComputeTransDeps_spec__0_spec__0_spec__2___redArg(v_a_152_, v_x_153_);
lean_dec(v_x_153_);
lean_dec_ref(v_a_152_);
v_r_155_ = lean_box(v_res_154_);
return v_r_155_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lake_OrdHashSet_insert___at___00__private_Lake_Build_Package_0__Lake_Package_recComputeTransDeps_spec__0_spec__0___redArg(lean_object* v_m_156_, lean_object* v_a_157_){
_start:
{
lean_object* v_buckets_158_; lean_object* v_keyName_159_; lean_object* v___x_160_; uint64_t v___y_162_; lean_object* v___x_176_; 
v_buckets_158_ = lean_ctor_get(v_m_156_, 1);
v_keyName_159_ = lean_ctor_get(v_a_157_, 2);
v___x_160_ = lean_array_get_size(v_buckets_158_);
v___x_176_ = l_unsafeCast___redArg(v_keyName_159_);
if (lean_obj_tag(v___x_176_) == 0)
{
uint64_t v___x_177_; 
v___x_177_ = 1723ULL;
v___y_162_ = v___x_177_;
goto v___jp_161_;
}
else
{
uint64_t v_hash_178_; 
v_hash_178_ = lean_ctor_get_uint64(v___x_176_, sizeof(void*)*2);
lean_dec(v___x_176_);
v___y_162_ = v_hash_178_;
goto v___jp_161_;
}
v___jp_161_:
{
uint64_t v___x_163_; uint64_t v___x_164_; uint64_t v_fold_165_; uint64_t v___x_166_; uint64_t v___x_167_; uint64_t v___x_168_; size_t v___x_169_; size_t v___x_170_; size_t v___x_171_; size_t v___x_172_; size_t v___x_173_; lean_object* v___x_174_; uint8_t v___x_175_; 
v___x_163_ = 32ULL;
v___x_164_ = lean_uint64_shift_right(v___y_162_, v___x_163_);
v_fold_165_ = lean_uint64_xor(v___y_162_, v___x_164_);
v___x_166_ = 16ULL;
v___x_167_ = lean_uint64_shift_right(v_fold_165_, v___x_166_);
v___x_168_ = lean_uint64_xor(v_fold_165_, v___x_167_);
v___x_169_ = lean_uint64_to_usize(v___x_168_);
v___x_170_ = lean_usize_of_nat(v___x_160_);
v___x_171_ = ((size_t)1ULL);
v___x_172_ = lean_usize_sub(v___x_170_, v___x_171_);
v___x_173_ = lean_usize_land(v___x_169_, v___x_172_);
v___x_174_ = lean_array_uget_borrowed(v_buckets_158_, v___x_173_);
v___x_175_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lake_OrdHashSet_insert___at___00__private_Lake_Build_Package_0__Lake_Package_recComputeTransDeps_spec__0_spec__0_spec__2___redArg(v_a_157_, v___x_174_);
return v___x_175_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lake_OrdHashSet_insert___at___00__private_Lake_Build_Package_0__Lake_Package_recComputeTransDeps_spec__0_spec__0___redArg___boxed(lean_object* v_m_179_, lean_object* v_a_180_){
_start:
{
uint8_t v_res_181_; lean_object* v_r_182_; 
v_res_181_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lake_OrdHashSet_insert___at___00__private_Lake_Build_Package_0__Lake_Package_recComputeTransDeps_spec__0_spec__0___redArg(v_m_179_, v_a_180_);
lean_dec_ref(v_a_180_);
lean_dec_ref(v_m_179_);
v_r_182_ = lean_box(v_res_181_);
return v_r_182_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lake_OrdHashSet_insert___at___00__private_Lake_Build_Package_0__Lake_Package_recComputeTransDeps_spec__0_spec__1_spec__4_spec__7_spec__8___redArg(lean_object* v_x_183_, lean_object* v_x_184_){
_start:
{
if (lean_obj_tag(v_x_184_) == 0)
{
return v_x_183_;
}
else
{
lean_object* v_key_185_; lean_object* v_value_186_; lean_object* v_tail_187_; lean_object* v___x_189_; uint8_t v_isShared_190_; uint8_t v_isSharedCheck_215_; 
v_key_185_ = lean_ctor_get(v_x_184_, 0);
v_value_186_ = lean_ctor_get(v_x_184_, 1);
v_tail_187_ = lean_ctor_get(v_x_184_, 2);
v_isSharedCheck_215_ = !lean_is_exclusive(v_x_184_);
if (v_isSharedCheck_215_ == 0)
{
v___x_189_ = v_x_184_;
v_isShared_190_ = v_isSharedCheck_215_;
goto v_resetjp_188_;
}
else
{
lean_inc(v_tail_187_);
lean_inc(v_value_186_);
lean_inc(v_key_185_);
lean_dec(v_x_184_);
v___x_189_ = lean_box(0);
v_isShared_190_ = v_isSharedCheck_215_;
goto v_resetjp_188_;
}
v_resetjp_188_:
{
lean_object* v_keyName_191_; lean_object* v___x_192_; uint64_t v___y_194_; lean_object* v___x_212_; 
v_keyName_191_ = lean_ctor_get(v_key_185_, 2);
v___x_192_ = lean_array_get_size(v_x_183_);
v___x_212_ = l_unsafeCast___redArg(v_keyName_191_);
if (lean_obj_tag(v___x_212_) == 0)
{
uint64_t v___x_213_; 
v___x_213_ = 1723ULL;
v___y_194_ = v___x_213_;
goto v___jp_193_;
}
else
{
uint64_t v_hash_214_; 
v_hash_214_ = lean_ctor_get_uint64(v___x_212_, sizeof(void*)*2);
lean_dec(v___x_212_);
v___y_194_ = v_hash_214_;
goto v___jp_193_;
}
v___jp_193_:
{
uint64_t v___x_195_; uint64_t v___x_196_; uint64_t v_fold_197_; uint64_t v___x_198_; uint64_t v___x_199_; uint64_t v___x_200_; size_t v___x_201_; size_t v___x_202_; size_t v___x_203_; size_t v___x_204_; size_t v___x_205_; lean_object* v___x_206_; lean_object* v___x_208_; 
v___x_195_ = 32ULL;
v___x_196_ = lean_uint64_shift_right(v___y_194_, v___x_195_);
v_fold_197_ = lean_uint64_xor(v___y_194_, v___x_196_);
v___x_198_ = 16ULL;
v___x_199_ = lean_uint64_shift_right(v_fold_197_, v___x_198_);
v___x_200_ = lean_uint64_xor(v_fold_197_, v___x_199_);
v___x_201_ = lean_uint64_to_usize(v___x_200_);
v___x_202_ = lean_usize_of_nat(v___x_192_);
v___x_203_ = ((size_t)1ULL);
v___x_204_ = lean_usize_sub(v___x_202_, v___x_203_);
v___x_205_ = lean_usize_land(v___x_201_, v___x_204_);
v___x_206_ = lean_array_uget_borrowed(v_x_183_, v___x_205_);
lean_inc(v___x_206_);
if (v_isShared_190_ == 0)
{
lean_ctor_set(v___x_189_, 2, v___x_206_);
v___x_208_ = v___x_189_;
goto v_reusejp_207_;
}
else
{
lean_object* v_reuseFailAlloc_211_; 
v_reuseFailAlloc_211_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_211_, 0, v_key_185_);
lean_ctor_set(v_reuseFailAlloc_211_, 1, v_value_186_);
lean_ctor_set(v_reuseFailAlloc_211_, 2, v___x_206_);
v___x_208_ = v_reuseFailAlloc_211_;
goto v_reusejp_207_;
}
v_reusejp_207_:
{
lean_object* v___x_209_; 
v___x_209_ = lean_array_uset(v_x_183_, v___x_205_, v___x_208_);
v_x_183_ = v___x_209_;
v_x_184_ = v_tail_187_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lake_OrdHashSet_insert___at___00__private_Lake_Build_Package_0__Lake_Package_recComputeTransDeps_spec__0_spec__1_spec__4_spec__7___redArg(lean_object* v_i_216_, lean_object* v_source_217_, lean_object* v_target_218_){
_start:
{
lean_object* v___x_219_; uint8_t v___x_220_; 
v___x_219_ = lean_array_get_size(v_source_217_);
v___x_220_ = lean_nat_dec_lt(v_i_216_, v___x_219_);
if (v___x_220_ == 0)
{
lean_dec_ref(v_source_217_);
lean_dec(v_i_216_);
return v_target_218_;
}
else
{
lean_object* v_es_221_; lean_object* v___x_222_; lean_object* v_source_223_; lean_object* v_target_224_; lean_object* v___x_225_; lean_object* v___x_226_; 
v_es_221_ = lean_array_fget(v_source_217_, v_i_216_);
v___x_222_ = lean_box(0);
v_source_223_ = lean_array_fset(v_source_217_, v_i_216_, v___x_222_);
v_target_224_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lake_OrdHashSet_insert___at___00__private_Lake_Build_Package_0__Lake_Package_recComputeTransDeps_spec__0_spec__1_spec__4_spec__7_spec__8___redArg(v_target_218_, v_es_221_);
v___x_225_ = lean_unsigned_to_nat(1u);
v___x_226_ = lean_nat_add(v_i_216_, v___x_225_);
lean_dec(v_i_216_);
v_i_216_ = v___x_226_;
v_source_217_ = v_source_223_;
v_target_218_ = v_target_224_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lake_OrdHashSet_insert___at___00__private_Lake_Build_Package_0__Lake_Package_recComputeTransDeps_spec__0_spec__1_spec__4___redArg(lean_object* v_data_228_){
_start:
{
lean_object* v___x_229_; lean_object* v___x_230_; lean_object* v_nbuckets_231_; lean_object* v___x_232_; lean_object* v___x_233_; lean_object* v___x_234_; lean_object* v___x_235_; lean_object* v___x_236_; 
v___x_229_ = lean_array_get_size(v_data_228_);
v___x_230_ = lean_unsigned_to_nat(2u);
v_nbuckets_231_ = lean_nat_mul(v___x_229_, v___x_230_);
v___x_232_ = lean_unsigned_to_nat(0u);
v___x_233_ = lean_box(0);
v___x_234_ = lean_mk_array(v_nbuckets_231_, v___x_233_);
v___x_235_ = lean_array_propagate_mark(v_data_228_, v___x_234_);
v___x_236_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lake_OrdHashSet_insert___at___00__private_Lake_Build_Package_0__Lake_Package_recComputeTransDeps_spec__0_spec__1_spec__4_spec__7___redArg(v___x_232_, v_data_228_, v___x_235_);
return v___x_236_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lake_OrdHashSet_insert___at___00__private_Lake_Build_Package_0__Lake_Package_recComputeTransDeps_spec__0_spec__1___redArg(lean_object* v_m_237_, lean_object* v_a_238_, lean_object* v_b_239_){
_start:
{
lean_object* v_size_240_; lean_object* v_buckets_241_; lean_object* v_keyName_242_; lean_object* v___x_243_; uint64_t v___y_245_; lean_object* v___x_282_; 
v_size_240_ = lean_ctor_get(v_m_237_, 0);
v_buckets_241_ = lean_ctor_get(v_m_237_, 1);
v_keyName_242_ = lean_ctor_get(v_a_238_, 2);
v___x_243_ = lean_array_get_size(v_buckets_241_);
v___x_282_ = l_unsafeCast___redArg(v_keyName_242_);
if (lean_obj_tag(v___x_282_) == 0)
{
uint64_t v___x_283_; 
v___x_283_ = 1723ULL;
v___y_245_ = v___x_283_;
goto v___jp_244_;
}
else
{
uint64_t v_hash_284_; 
v_hash_284_ = lean_ctor_get_uint64(v___x_282_, sizeof(void*)*2);
lean_dec(v___x_282_);
v___y_245_ = v_hash_284_;
goto v___jp_244_;
}
v___jp_244_:
{
uint64_t v___x_246_; uint64_t v___x_247_; uint64_t v_fold_248_; uint64_t v___x_249_; uint64_t v___x_250_; uint64_t v___x_251_; size_t v___x_252_; size_t v___x_253_; size_t v___x_254_; size_t v___x_255_; size_t v___x_256_; lean_object* v_bkt_257_; uint8_t v___x_258_; 
v___x_246_ = 32ULL;
v___x_247_ = lean_uint64_shift_right(v___y_245_, v___x_246_);
v_fold_248_ = lean_uint64_xor(v___y_245_, v___x_247_);
v___x_249_ = 16ULL;
v___x_250_ = lean_uint64_shift_right(v_fold_248_, v___x_249_);
v___x_251_ = lean_uint64_xor(v_fold_248_, v___x_250_);
v___x_252_ = lean_uint64_to_usize(v___x_251_);
v___x_253_ = lean_usize_of_nat(v___x_243_);
v___x_254_ = ((size_t)1ULL);
v___x_255_ = lean_usize_sub(v___x_253_, v___x_254_);
v___x_256_ = lean_usize_land(v___x_252_, v___x_255_);
v_bkt_257_ = lean_array_uget_borrowed(v_buckets_241_, v___x_256_);
v___x_258_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lake_OrdHashSet_insert___at___00__private_Lake_Build_Package_0__Lake_Package_recComputeTransDeps_spec__0_spec__0_spec__2___redArg(v_a_238_, v_bkt_257_);
if (v___x_258_ == 0)
{
lean_object* v___x_260_; uint8_t v_isShared_261_; uint8_t v_isSharedCheck_279_; 
lean_inc_ref(v_buckets_241_);
lean_inc(v_size_240_);
v_isSharedCheck_279_ = !lean_is_exclusive(v_m_237_);
if (v_isSharedCheck_279_ == 0)
{
lean_object* v_unused_280_; lean_object* v_unused_281_; 
v_unused_280_ = lean_ctor_get(v_m_237_, 1);
lean_dec(v_unused_280_);
v_unused_281_ = lean_ctor_get(v_m_237_, 0);
lean_dec(v_unused_281_);
v___x_260_ = v_m_237_;
v_isShared_261_ = v_isSharedCheck_279_;
goto v_resetjp_259_;
}
else
{
lean_dec(v_m_237_);
v___x_260_ = lean_box(0);
v_isShared_261_ = v_isSharedCheck_279_;
goto v_resetjp_259_;
}
v_resetjp_259_:
{
lean_object* v___x_262_; lean_object* v_size_x27_263_; lean_object* v___x_264_; lean_object* v_buckets_x27_265_; lean_object* v___x_266_; lean_object* v___x_267_; lean_object* v___x_268_; lean_object* v___x_269_; lean_object* v___x_270_; uint8_t v___x_271_; 
v___x_262_ = lean_unsigned_to_nat(1u);
v_size_x27_263_ = lean_nat_add(v_size_240_, v___x_262_);
lean_dec(v_size_240_);
lean_inc(v_bkt_257_);
v___x_264_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_264_, 0, v_a_238_);
lean_ctor_set(v___x_264_, 1, v_b_239_);
lean_ctor_set(v___x_264_, 2, v_bkt_257_);
v_buckets_x27_265_ = lean_array_uset(v_buckets_241_, v___x_256_, v___x_264_);
v___x_266_ = lean_unsigned_to_nat(4u);
v___x_267_ = lean_nat_mul(v_size_x27_263_, v___x_266_);
v___x_268_ = lean_unsigned_to_nat(3u);
v___x_269_ = lean_nat_div(v___x_267_, v___x_268_);
lean_dec(v___x_267_);
v___x_270_ = lean_array_get_size(v_buckets_x27_265_);
v___x_271_ = lean_nat_dec_le(v___x_269_, v___x_270_);
lean_dec(v___x_269_);
if (v___x_271_ == 0)
{
lean_object* v_val_272_; lean_object* v___x_274_; 
v_val_272_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lake_OrdHashSet_insert___at___00__private_Lake_Build_Package_0__Lake_Package_recComputeTransDeps_spec__0_spec__1_spec__4___redArg(v_buckets_x27_265_);
if (v_isShared_261_ == 0)
{
lean_ctor_set(v___x_260_, 1, v_val_272_);
lean_ctor_set(v___x_260_, 0, v_size_x27_263_);
v___x_274_ = v___x_260_;
goto v_reusejp_273_;
}
else
{
lean_object* v_reuseFailAlloc_275_; 
v_reuseFailAlloc_275_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_275_, 0, v_size_x27_263_);
lean_ctor_set(v_reuseFailAlloc_275_, 1, v_val_272_);
v___x_274_ = v_reuseFailAlloc_275_;
goto v_reusejp_273_;
}
v_reusejp_273_:
{
return v___x_274_;
}
}
else
{
lean_object* v___x_277_; 
if (v_isShared_261_ == 0)
{
lean_ctor_set(v___x_260_, 1, v_buckets_x27_265_);
lean_ctor_set(v___x_260_, 0, v_size_x27_263_);
v___x_277_ = v___x_260_;
goto v_reusejp_276_;
}
else
{
lean_object* v_reuseFailAlloc_278_; 
v_reuseFailAlloc_278_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_278_, 0, v_size_x27_263_);
lean_ctor_set(v_reuseFailAlloc_278_, 1, v_buckets_x27_265_);
v___x_277_ = v_reuseFailAlloc_278_;
goto v_reusejp_276_;
}
v_reusejp_276_:
{
return v___x_277_;
}
}
}
}
else
{
lean_dec(v_b_239_);
lean_dec_ref(v_a_238_);
return v_m_237_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_OrdHashSet_insert___at___00__private_Lake_Build_Package_0__Lake_Package_recComputeTransDeps_spec__0(lean_object* v_self_285_, lean_object* v_a_286_){
_start:
{
lean_object* v_toHashSet_287_; lean_object* v_toArray_288_; uint8_t v___x_289_; 
v_toHashSet_287_ = lean_ctor_get(v_self_285_, 0);
v_toArray_288_ = lean_ctor_get(v_self_285_, 1);
v___x_289_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lake_OrdHashSet_insert___at___00__private_Lake_Build_Package_0__Lake_Package_recComputeTransDeps_spec__0_spec__0___redArg(v_toHashSet_287_, v_a_286_);
if (v___x_289_ == 0)
{
lean_object* v___x_291_; uint8_t v_isShared_292_; uint8_t v_isSharedCheck_299_; 
lean_inc_ref(v_toArray_288_);
lean_inc_ref(v_toHashSet_287_);
v_isSharedCheck_299_ = !lean_is_exclusive(v_self_285_);
if (v_isSharedCheck_299_ == 0)
{
lean_object* v_unused_300_; lean_object* v_unused_301_; 
v_unused_300_ = lean_ctor_get(v_self_285_, 1);
lean_dec(v_unused_300_);
v_unused_301_ = lean_ctor_get(v_self_285_, 0);
lean_dec(v_unused_301_);
v___x_291_ = v_self_285_;
v_isShared_292_ = v_isSharedCheck_299_;
goto v_resetjp_290_;
}
else
{
lean_dec(v_self_285_);
v___x_291_ = lean_box(0);
v_isShared_292_ = v_isSharedCheck_299_;
goto v_resetjp_290_;
}
v_resetjp_290_:
{
lean_object* v___x_293_; lean_object* v___x_294_; lean_object* v___x_295_; lean_object* v___x_297_; 
v___x_293_ = lean_box(0);
lean_inc_ref(v_a_286_);
v___x_294_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lake_OrdHashSet_insert___at___00__private_Lake_Build_Package_0__Lake_Package_recComputeTransDeps_spec__0_spec__1___redArg(v_toHashSet_287_, v_a_286_, v___x_293_);
v___x_295_ = lean_array_push(v_toArray_288_, v_a_286_);
if (v_isShared_292_ == 0)
{
lean_ctor_set(v___x_291_, 1, v___x_295_);
lean_ctor_set(v___x_291_, 0, v___x_294_);
v___x_297_ = v___x_291_;
goto v_reusejp_296_;
}
else
{
lean_object* v_reuseFailAlloc_298_; 
v_reuseFailAlloc_298_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_298_, 0, v___x_294_);
lean_ctor_set(v_reuseFailAlloc_298_, 1, v___x_295_);
v___x_297_ = v_reuseFailAlloc_298_;
goto v_reusejp_296_;
}
v_reusejp_296_:
{
return v___x_297_;
}
}
}
else
{
lean_dec_ref(v_a_286_);
return v_self_285_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Package_0__Lake_Package_recComputeTransDeps_spec__1(lean_object* v_as_302_, size_t v_i_303_, size_t v_stop_304_, lean_object* v_b_305_){
_start:
{
uint8_t v___x_306_; 
v___x_306_ = lean_usize_dec_eq(v_i_303_, v_stop_304_);
if (v___x_306_ == 0)
{
lean_object* v___x_307_; lean_object* v___x_308_; size_t v___x_309_; size_t v___x_310_; 
v___x_307_ = lean_array_uget_borrowed(v_as_302_, v_i_303_);
lean_inc(v___x_307_);
v___x_308_ = l_Lake_OrdHashSet_insert___at___00__private_Lake_Build_Package_0__Lake_Package_recComputeTransDeps_spec__0(v_b_305_, v___x_307_);
v___x_309_ = ((size_t)1ULL);
v___x_310_ = lean_usize_add(v_i_303_, v___x_309_);
v_i_303_ = v___x_310_;
v_b_305_ = v___x_308_;
goto _start;
}
else
{
return v_b_305_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Package_0__Lake_Package_recComputeTransDeps_spec__1___boxed(lean_object* v_as_312_, lean_object* v_i_313_, lean_object* v_stop_314_, lean_object* v_b_315_){
_start:
{
size_t v_i_boxed_316_; size_t v_stop_boxed_317_; lean_object* v_res_318_; 
v_i_boxed_316_ = lean_unbox_usize(v_i_313_);
lean_dec(v_i_313_);
v_stop_boxed_317_ = lean_unbox_usize(v_stop_314_);
lean_dec(v_stop_314_);
v_res_318_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Package_0__Lake_Package_recComputeTransDeps_spec__1(v_as_312_, v_i_boxed_316_, v_stop_boxed_317_, v_b_315_);
lean_dec_ref(v_as_312_);
return v_res_318_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Package_0__Lake_Package_recComputeTransDeps_spec__3(lean_object* v_as_319_, size_t v_i_320_, size_t v_stop_321_, lean_object* v_b_322_, lean_object* v___y_323_, lean_object* v___y_324_, lean_object* v___y_325_, lean_object* v___y_326_, lean_object* v___y_327_, lean_object* v___y_328_){
_start:
{
uint8_t v___x_330_; 
v___x_330_ = lean_usize_dec_eq(v_i_320_, v_stop_321_);
if (v___x_330_ == 0)
{
lean_object* v___x_331_; lean_object* v_keyName_332_; lean_object* v___x_333_; lean_object* v___x_334_; lean_object* v___x_335_; lean_object* v___x_336_; lean_object* v___x_337_; 
v___x_331_ = lean_array_uget_borrowed(v_as_319_, v_i_320_);
v_keyName_332_ = lean_ctor_get(v___x_331_, 2);
v___x_333_ = l_Lake_Package_transDepsFacet;
lean_inc(v_keyName_332_);
v___x_334_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_334_, 0, v_keyName_332_);
v___x_335_ = l_Lake_Package_keyword;
lean_inc(v___x_331_);
v___x_336_ = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(v___x_336_, 0, v___x_334_);
lean_ctor_set(v___x_336_, 1, v___x_335_);
lean_ctor_set(v___x_336_, 2, v___x_331_);
lean_ctor_set(v___x_336_, 3, v___x_333_);
lean_inc_ref(v___y_323_);
lean_inc_ref(v___y_327_);
lean_inc(v___y_326_);
lean_inc(v___y_325_);
lean_inc(v___y_324_);
v___x_337_ = lean_apply_7(v___y_323_, v___x_336_, v___y_324_, v___y_325_, v___y_326_, v___y_327_, v___y_328_, lean_box(0));
if (lean_obj_tag(v___x_337_) == 0)
{
lean_object* v_a_338_; lean_object* v_a_339_; lean_object* v___x_340_; 
v_a_338_ = lean_ctor_get(v___x_337_, 0);
lean_inc(v_a_338_);
v_a_339_ = lean_ctor_get(v___x_337_, 1);
lean_inc(v_a_339_);
lean_dec_ref_known(v___x_337_, 2);
v___x_340_ = l_Lake_Job_await___redArg(v_a_338_, v_a_339_);
if (lean_obj_tag(v___x_340_) == 0)
{
lean_object* v_a_341_; lean_object* v_a_342_; lean_object* v___y_344_; lean_object* v___x_349_; lean_object* v___x_350_; uint8_t v___x_351_; 
v_a_341_ = lean_ctor_get(v___x_340_, 0);
lean_inc(v_a_341_);
v_a_342_ = lean_ctor_get(v___x_340_, 1);
lean_inc(v_a_342_);
lean_dec_ref_known(v___x_340_, 2);
v___x_349_ = lean_unsigned_to_nat(0u);
v___x_350_ = lean_array_get_size(v_a_341_);
v___x_351_ = lean_nat_dec_lt(v___x_349_, v___x_350_);
if (v___x_351_ == 0)
{
lean_dec(v_a_341_);
v___y_344_ = v_b_322_;
goto v___jp_343_;
}
else
{
uint8_t v___x_352_; 
v___x_352_ = lean_nat_dec_le(v___x_350_, v___x_350_);
if (v___x_352_ == 0)
{
if (v___x_351_ == 0)
{
lean_dec(v_a_341_);
v___y_344_ = v_b_322_;
goto v___jp_343_;
}
else
{
size_t v___x_353_; size_t v___x_354_; lean_object* v___x_355_; 
v___x_353_ = ((size_t)0ULL);
v___x_354_ = lean_usize_of_nat(v___x_350_);
v___x_355_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Package_0__Lake_Package_recComputeTransDeps_spec__1(v_a_341_, v___x_353_, v___x_354_, v_b_322_);
lean_dec(v_a_341_);
v___y_344_ = v___x_355_;
goto v___jp_343_;
}
}
else
{
size_t v___x_356_; size_t v___x_357_; lean_object* v___x_358_; 
v___x_356_ = ((size_t)0ULL);
v___x_357_ = lean_usize_of_nat(v___x_350_);
v___x_358_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Package_0__Lake_Package_recComputeTransDeps_spec__1(v_a_341_, v___x_356_, v___x_357_, v_b_322_);
lean_dec(v_a_341_);
v___y_344_ = v___x_358_;
goto v___jp_343_;
}
}
v___jp_343_:
{
lean_object* v___x_345_; size_t v___x_346_; size_t v___x_347_; 
lean_inc(v___x_331_);
v___x_345_ = l_Lake_OrdHashSet_insert___at___00__private_Lake_Build_Package_0__Lake_Package_recComputeTransDeps_spec__0(v___y_344_, v___x_331_);
v___x_346_ = ((size_t)1ULL);
v___x_347_ = lean_usize_add(v_i_320_, v___x_346_);
v_i_320_ = v___x_347_;
v_b_322_ = v___x_345_;
v___y_328_ = v_a_342_;
goto _start;
}
}
else
{
lean_object* v_a_359_; lean_object* v_a_360_; lean_object* v___x_362_; uint8_t v_isShared_363_; uint8_t v_isSharedCheck_367_; 
lean_dec_ref(v___y_323_);
lean_dec_ref(v_b_322_);
v_a_359_ = lean_ctor_get(v___x_340_, 0);
v_a_360_ = lean_ctor_get(v___x_340_, 1);
v_isSharedCheck_367_ = !lean_is_exclusive(v___x_340_);
if (v_isSharedCheck_367_ == 0)
{
v___x_362_ = v___x_340_;
v_isShared_363_ = v_isSharedCheck_367_;
goto v_resetjp_361_;
}
else
{
lean_inc(v_a_360_);
lean_inc(v_a_359_);
lean_dec(v___x_340_);
v___x_362_ = lean_box(0);
v_isShared_363_ = v_isSharedCheck_367_;
goto v_resetjp_361_;
}
v_resetjp_361_:
{
lean_object* v___x_365_; 
if (v_isShared_363_ == 0)
{
v___x_365_ = v___x_362_;
goto v_reusejp_364_;
}
else
{
lean_object* v_reuseFailAlloc_366_; 
v_reuseFailAlloc_366_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_366_, 0, v_a_359_);
lean_ctor_set(v_reuseFailAlloc_366_, 1, v_a_360_);
v___x_365_ = v_reuseFailAlloc_366_;
goto v_reusejp_364_;
}
v_reusejp_364_:
{
return v___x_365_;
}
}
}
}
else
{
lean_object* v_a_368_; lean_object* v_a_369_; lean_object* v___x_371_; uint8_t v_isShared_372_; uint8_t v_isSharedCheck_376_; 
lean_dec_ref(v___y_323_);
lean_dec_ref(v_b_322_);
v_a_368_ = lean_ctor_get(v___x_337_, 0);
v_a_369_ = lean_ctor_get(v___x_337_, 1);
v_isSharedCheck_376_ = !lean_is_exclusive(v___x_337_);
if (v_isSharedCheck_376_ == 0)
{
v___x_371_ = v___x_337_;
v_isShared_372_ = v_isSharedCheck_376_;
goto v_resetjp_370_;
}
else
{
lean_inc(v_a_369_);
lean_inc(v_a_368_);
lean_dec(v___x_337_);
v___x_371_ = lean_box(0);
v_isShared_372_ = v_isSharedCheck_376_;
goto v_resetjp_370_;
}
v_resetjp_370_:
{
lean_object* v___x_374_; 
if (v_isShared_372_ == 0)
{
v___x_374_ = v___x_371_;
goto v_reusejp_373_;
}
else
{
lean_object* v_reuseFailAlloc_375_; 
v_reuseFailAlloc_375_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_375_, 0, v_a_368_);
lean_ctor_set(v_reuseFailAlloc_375_, 1, v_a_369_);
v___x_374_ = v_reuseFailAlloc_375_;
goto v_reusejp_373_;
}
v_reusejp_373_:
{
return v___x_374_;
}
}
}
}
else
{
lean_object* v___x_377_; 
lean_dec_ref(v___y_323_);
v___x_377_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_377_, 0, v_b_322_);
lean_ctor_set(v___x_377_, 1, v___y_328_);
return v___x_377_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Package_0__Lake_Package_recComputeTransDeps_spec__3___boxed(lean_object* v_as_378_, lean_object* v_i_379_, lean_object* v_stop_380_, lean_object* v_b_381_, lean_object* v___y_382_, lean_object* v___y_383_, lean_object* v___y_384_, lean_object* v___y_385_, lean_object* v___y_386_, lean_object* v___y_387_, lean_object* v___y_388_){
_start:
{
size_t v_i_boxed_389_; size_t v_stop_boxed_390_; lean_object* v_res_391_; 
v_i_boxed_389_ = lean_unbox_usize(v_i_379_);
lean_dec(v_i_379_);
v_stop_boxed_390_ = lean_unbox_usize(v_stop_380_);
lean_dec(v_stop_380_);
v_res_391_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Package_0__Lake_Package_recComputeTransDeps_spec__3(v_as_378_, v_i_boxed_389_, v_stop_boxed_390_, v_b_381_, v___y_382_, v___y_383_, v___y_384_, v___y_385_, v___y_386_, v___y_387_);
lean_dec_ref(v___y_386_);
lean_dec(v___y_385_);
lean_dec(v___y_384_);
lean_dec(v___y_383_);
lean_dec_ref(v_as_378_);
return v_res_391_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Package_0__Lake_Package_recComputeTransDeps___lam__0(lean_object* v___x_392_, lean_object* v___x_393_, lean_object* v___x_394_, lean_object* v___x_395_, lean_object* v_depPkgs_396_, lean_object* v___y_397_, lean_object* v___y_398_, lean_object* v___y_399_, lean_object* v___y_400_, lean_object* v___y_401_, lean_object* v___y_402_){
_start:
{
lean_object* v_a_405_; lean_object* v_a_406_; lean_object* v___y_426_; uint8_t v___x_438_; 
v___x_438_ = lean_nat_dec_lt(v___x_392_, v___x_394_);
if (v___x_438_ == 0)
{
lean_dec_ref(v___y_397_);
v_a_405_ = v___x_395_;
v_a_406_ = v___y_402_;
goto v___jp_404_;
}
else
{
uint8_t v___x_439_; 
v___x_439_ = lean_nat_dec_le(v___x_394_, v___x_394_);
if (v___x_439_ == 0)
{
if (v___x_438_ == 0)
{
lean_dec_ref(v___y_397_);
v_a_405_ = v___x_395_;
v_a_406_ = v___y_402_;
goto v___jp_404_;
}
else
{
size_t v___x_440_; size_t v___x_441_; lean_object* v___x_442_; 
v___x_440_ = ((size_t)0ULL);
v___x_441_ = lean_usize_of_nat(v___x_394_);
v___x_442_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Package_0__Lake_Package_recComputeTransDeps_spec__3(v_depPkgs_396_, v___x_440_, v___x_441_, v___x_395_, v___y_397_, v___y_398_, v___y_399_, v___y_400_, v___y_401_, v___y_402_);
v___y_426_ = v___x_442_;
goto v___jp_425_;
}
}
else
{
size_t v___x_443_; size_t v___x_444_; lean_object* v___x_445_; 
v___x_443_ = ((size_t)0ULL);
v___x_444_ = lean_usize_of_nat(v___x_394_);
v___x_445_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Package_0__Lake_Package_recComputeTransDeps_spec__3(v_depPkgs_396_, v___x_443_, v___x_444_, v___x_395_, v___y_397_, v___y_398_, v___y_399_, v___y_400_, v___y_401_, v___y_402_);
v___y_426_ = v___x_445_;
goto v___jp_425_;
}
}
v___jp_404_:
{
lean_object* v_toArray_407_; lean_object* v___x_409_; uint8_t v_isShared_410_; uint8_t v_isSharedCheck_423_; 
v_toArray_407_ = lean_ctor_get(v_a_405_, 1);
v_isSharedCheck_423_ = !lean_is_exclusive(v_a_405_);
if (v_isSharedCheck_423_ == 0)
{
lean_object* v_unused_424_; 
v_unused_424_ = lean_ctor_get(v_a_405_, 0);
lean_dec(v_unused_424_);
v___x_409_ = v_a_405_;
v_isShared_410_ = v_isSharedCheck_423_;
goto v_resetjp_408_;
}
else
{
lean_inc(v_toArray_407_);
lean_dec(v_a_405_);
v___x_409_ = lean_box(0);
v_isShared_410_ = v_isSharedCheck_423_;
goto v_resetjp_408_;
}
v_resetjp_408_:
{
lean_object* v___x_411_; lean_object* v___x_412_; uint8_t v___x_413_; uint8_t v___x_414_; lean_object* v___x_415_; lean_object* v___x_416_; lean_object* v___x_418_; 
v___x_411_ = lean_mk_empty_array_with_capacity(v___x_392_);
v___x_412_ = ((lean_object*)(l___private_Lake_Build_Package_0__Lake_Package_recFetchDeps___redArg___closed__2));
v___x_413_ = 0;
v___x_414_ = 0;
v___x_415_ = lean_obj_once(&l___private_Lake_Build_Package_0__Lake_Package_recFetchDeps___redArg___closed__4, &l___private_Lake_Build_Package_0__Lake_Package_recFetchDeps___redArg___closed__4_once, _init_l___private_Lake_Build_Package_0__Lake_Package_recFetchDeps___redArg___closed__4);
v___x_416_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_416_, 0, v___x_411_);
lean_ctor_set(v___x_416_, 1, v___x_415_);
lean_ctor_set(v___x_416_, 2, v___x_392_);
lean_ctor_set_uint8(v___x_416_, sizeof(void*)*3, v___x_413_);
lean_ctor_set_uint8(v___x_416_, sizeof(void*)*3 + 1, v___x_414_);
if (v_isShared_410_ == 0)
{
lean_ctor_set(v___x_409_, 1, v___x_416_);
lean_ctor_set(v___x_409_, 0, v_toArray_407_);
v___x_418_ = v___x_409_;
goto v_reusejp_417_;
}
else
{
lean_object* v_reuseFailAlloc_422_; 
v_reuseFailAlloc_422_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_422_, 0, v_toArray_407_);
lean_ctor_set(v_reuseFailAlloc_422_, 1, v___x_416_);
v___x_418_ = v_reuseFailAlloc_422_;
goto v_reusejp_417_;
}
v_reusejp_417_:
{
lean_object* v___x_419_; lean_object* v___x_420_; lean_object* v___x_421_; 
v___x_419_ = lean_task_pure(v___x_418_);
v___x_420_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_420_, 0, v___x_419_);
lean_ctor_set(v___x_420_, 1, v___x_393_);
lean_ctor_set(v___x_420_, 2, v___x_412_);
lean_ctor_set_uint8(v___x_420_, sizeof(void*)*3, v___x_414_);
v___x_421_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_421_, 0, v___x_420_);
lean_ctor_set(v___x_421_, 1, v_a_406_);
return v___x_421_;
}
}
}
v___jp_425_:
{
if (lean_obj_tag(v___y_426_) == 0)
{
lean_object* v_a_427_; lean_object* v_a_428_; 
v_a_427_ = lean_ctor_get(v___y_426_, 0);
lean_inc(v_a_427_);
v_a_428_ = lean_ctor_get(v___y_426_, 1);
lean_inc(v_a_428_);
lean_dec_ref_known(v___y_426_, 2);
v_a_405_ = v_a_427_;
v_a_406_ = v_a_428_;
goto v___jp_404_;
}
else
{
lean_object* v_a_429_; lean_object* v_a_430_; lean_object* v___x_432_; uint8_t v_isShared_433_; uint8_t v_isSharedCheck_437_; 
lean_dec(v___x_393_);
lean_dec(v___x_392_);
v_a_429_ = lean_ctor_get(v___y_426_, 0);
v_a_430_ = lean_ctor_get(v___y_426_, 1);
v_isSharedCheck_437_ = !lean_is_exclusive(v___y_426_);
if (v_isSharedCheck_437_ == 0)
{
v___x_432_ = v___y_426_;
v_isShared_433_ = v_isSharedCheck_437_;
goto v_resetjp_431_;
}
else
{
lean_inc(v_a_430_);
lean_inc(v_a_429_);
lean_dec(v___y_426_);
v___x_432_ = lean_box(0);
v_isShared_433_ = v_isSharedCheck_437_;
goto v_resetjp_431_;
}
v_resetjp_431_:
{
lean_object* v___x_435_; 
if (v_isShared_433_ == 0)
{
v___x_435_ = v___x_432_;
goto v_reusejp_434_;
}
else
{
lean_object* v_reuseFailAlloc_436_; 
v_reuseFailAlloc_436_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_436_, 0, v_a_429_);
lean_ctor_set(v_reuseFailAlloc_436_, 1, v_a_430_);
v___x_435_ = v_reuseFailAlloc_436_;
goto v_reusejp_434_;
}
v_reusejp_434_:
{
return v___x_435_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Package_0__Lake_Package_recComputeTransDeps___lam__0___boxed(lean_object* v___x_446_, lean_object* v___x_447_, lean_object* v___x_448_, lean_object* v___x_449_, lean_object* v_depPkgs_450_, lean_object* v___y_451_, lean_object* v___y_452_, lean_object* v___y_453_, lean_object* v___y_454_, lean_object* v___y_455_, lean_object* v___y_456_, lean_object* v___y_457_){
_start:
{
lean_object* v_res_458_; 
v_res_458_ = l___private_Lake_Build_Package_0__Lake_Package_recComputeTransDeps___lam__0(v___x_446_, v___x_447_, v___x_448_, v___x_449_, v_depPkgs_450_, v___y_451_, v___y_452_, v___y_453_, v___y_454_, v___y_455_, v___y_456_);
lean_dec_ref(v___y_455_);
lean_dec(v___y_454_);
lean_dec(v___y_453_);
lean_dec(v___y_452_);
lean_dec_ref(v_depPkgs_450_);
lean_dec(v___x_448_);
return v_res_458_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Package_0__Lake_Package_recComputeTransDeps(lean_object* v_self_459_, lean_object* v_a_460_, lean_object* v_a_461_, lean_object* v_a_462_, lean_object* v_a_463_, lean_object* v_a_464_, lean_object* v_a_465_){
_start:
{
lean_object* v_depPkgs_467_; lean_object* v___x_468_; lean_object* v___x_469_; lean_object* v___x_470_; lean_object* v___x_471_; lean_object* v___f_472_; lean_object* v___x_473_; 
v_depPkgs_467_ = lean_ctor_get(v_self_459_, 14);
lean_inc_ref(v_depPkgs_467_);
lean_dec_ref(v_self_459_);
v___x_468_ = lean_obj_once(&l___private_Lake_Build_Package_0__Lake_Package_recFetchDeps___redArg___closed__0, &l___private_Lake_Build_Package_0__Lake_Package_recFetchDeps___redArg___closed__0_once, _init_l___private_Lake_Build_Package_0__Lake_Package_recFetchDeps___redArg___closed__0);
v___x_469_ = l_Lake_OrdHashSet_empty___at___00__private_Lake_Build_Package_0__Lake_Package_recComputeTransDeps_spec__2;
v___x_470_ = lean_unsigned_to_nat(0u);
v___x_471_ = lean_array_get_size(v_depPkgs_467_);
v___f_472_ = lean_alloc_closure((void*)(l___private_Lake_Build_Package_0__Lake_Package_recComputeTransDeps___lam__0___boxed), 12, 5);
lean_closure_set(v___f_472_, 0, v___x_470_);
lean_closure_set(v___f_472_, 1, v___x_468_);
lean_closure_set(v___f_472_, 2, v___x_471_);
lean_closure_set(v___f_472_, 3, v___x_469_);
lean_closure_set(v___f_472_, 4, v_depPkgs_467_);
v___x_473_ = l_Lake_ensureJob___redArg(v___x_468_, v___f_472_, v_a_460_, v_a_461_, v_a_462_, v_a_463_, v_a_464_, v_a_465_);
return v___x_473_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Package_0__Lake_Package_recComputeTransDeps___boxed(lean_object* v_self_474_, lean_object* v_a_475_, lean_object* v_a_476_, lean_object* v_a_477_, lean_object* v_a_478_, lean_object* v_a_479_, lean_object* v_a_480_, lean_object* v_a_481_){
_start:
{
lean_object* v_res_482_; 
v_res_482_ = l___private_Lake_Build_Package_0__Lake_Package_recComputeTransDeps(v_self_474_, v_a_475_, v_a_476_, v_a_477_, v_a_478_, v_a_479_, v_a_480_);
lean_dec_ref(v_a_479_);
lean_dec(v_a_478_);
lean_dec(v_a_477_);
lean_dec(v_a_476_);
return v_res_482_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lake_OrdHashSet_insert___at___00__private_Lake_Build_Package_0__Lake_Package_recComputeTransDeps_spec__0_spec__0(lean_object* v_00_u03b2_483_, lean_object* v_m_484_, lean_object* v_a_485_){
_start:
{
uint8_t v___x_486_; 
v___x_486_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lake_OrdHashSet_insert___at___00__private_Lake_Build_Package_0__Lake_Package_recComputeTransDeps_spec__0_spec__0___redArg(v_m_484_, v_a_485_);
return v___x_486_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lake_OrdHashSet_insert___at___00__private_Lake_Build_Package_0__Lake_Package_recComputeTransDeps_spec__0_spec__0___boxed(lean_object* v_00_u03b2_487_, lean_object* v_m_488_, lean_object* v_a_489_){
_start:
{
uint8_t v_res_490_; lean_object* v_r_491_; 
v_res_490_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lake_OrdHashSet_insert___at___00__private_Lake_Build_Package_0__Lake_Package_recComputeTransDeps_spec__0_spec__0(v_00_u03b2_487_, v_m_488_, v_a_489_);
lean_dec_ref(v_a_489_);
lean_dec_ref(v_m_488_);
v_r_491_ = lean_box(v_res_490_);
return v_r_491_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lake_OrdHashSet_insert___at___00__private_Lake_Build_Package_0__Lake_Package_recComputeTransDeps_spec__0_spec__1(lean_object* v_00_u03b2_492_, lean_object* v_m_493_, lean_object* v_a_494_, lean_object* v_b_495_){
_start:
{
lean_object* v___x_496_; 
v___x_496_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lake_OrdHashSet_insert___at___00__private_Lake_Build_Package_0__Lake_Package_recComputeTransDeps_spec__0_spec__1___redArg(v_m_493_, v_a_494_, v_b_495_);
return v___x_496_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lake_OrdHashSet_insert___at___00__private_Lake_Build_Package_0__Lake_Package_recComputeTransDeps_spec__0_spec__0_spec__2(lean_object* v_00_u03b2_497_, lean_object* v_a_498_, lean_object* v_x_499_){
_start:
{
uint8_t v___x_500_; 
v___x_500_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lake_OrdHashSet_insert___at___00__private_Lake_Build_Package_0__Lake_Package_recComputeTransDeps_spec__0_spec__0_spec__2___redArg(v_a_498_, v_x_499_);
return v___x_500_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lake_OrdHashSet_insert___at___00__private_Lake_Build_Package_0__Lake_Package_recComputeTransDeps_spec__0_spec__0_spec__2___boxed(lean_object* v_00_u03b2_501_, lean_object* v_a_502_, lean_object* v_x_503_){
_start:
{
uint8_t v_res_504_; lean_object* v_r_505_; 
v_res_504_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lake_OrdHashSet_insert___at___00__private_Lake_Build_Package_0__Lake_Package_recComputeTransDeps_spec__0_spec__0_spec__2(v_00_u03b2_501_, v_a_502_, v_x_503_);
lean_dec(v_x_503_);
lean_dec_ref(v_a_502_);
v_r_505_ = lean_box(v_res_504_);
return v_r_505_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lake_OrdHashSet_insert___at___00__private_Lake_Build_Package_0__Lake_Package_recComputeTransDeps_spec__0_spec__1_spec__4(lean_object* v_00_u03b2_506_, lean_object* v_data_507_){
_start:
{
lean_object* v___x_508_; 
v___x_508_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lake_OrdHashSet_insert___at___00__private_Lake_Build_Package_0__Lake_Package_recComputeTransDeps_spec__0_spec__1_spec__4___redArg(v_data_507_);
return v___x_508_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lake_OrdHashSet_insert___at___00__private_Lake_Build_Package_0__Lake_Package_recComputeTransDeps_spec__0_spec__1_spec__4_spec__7(lean_object* v_00_u03b2_509_, lean_object* v_i_510_, lean_object* v_source_511_, lean_object* v_target_512_){
_start:
{
lean_object* v___x_513_; 
v___x_513_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lake_OrdHashSet_insert___at___00__private_Lake_Build_Package_0__Lake_Package_recComputeTransDeps_spec__0_spec__1_spec__4_spec__7___redArg(v_i_510_, v_source_511_, v_target_512_);
return v___x_513_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lake_OrdHashSet_insert___at___00__private_Lake_Build_Package_0__Lake_Package_recComputeTransDeps_spec__0_spec__1_spec__4_spec__7_spec__8(lean_object* v_00_u03b2_514_, lean_object* v_x_515_, lean_object* v_x_516_){
_start:
{
lean_object* v___x_517_; 
v___x_517_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Lake_OrdHashSet_insert___at___00__private_Lake_Build_Package_0__Lake_Package_recComputeTransDeps_spec__0_spec__1_spec__4_spec__7_spec__8___redArg(v_x_515_, v_x_516_);
return v___x_517_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lake_Build_Package_0__Lake_Package_recCollectDefaultModules_spec__0_spec__0___redArg(lean_object* v_a_518_, lean_object* v_x_519_){
_start:
{
if (lean_obj_tag(v_x_519_) == 0)
{
uint8_t v___x_520_; 
v___x_520_ = 0;
return v___x_520_;
}
else
{
lean_object* v_key_521_; lean_object* v_tail_522_; lean_object* v_name_523_; lean_object* v_name_524_; uint8_t v___x_525_; 
v_key_521_ = lean_ctor_get(v_x_519_, 0);
v_tail_522_ = lean_ctor_get(v_x_519_, 2);
v_name_523_ = lean_ctor_get(v_key_521_, 1);
v_name_524_ = lean_ctor_get(v_a_518_, 1);
v___x_525_ = lean_name_eq(v_name_523_, v_name_524_);
if (v___x_525_ == 0)
{
v_x_519_ = v_tail_522_;
goto _start;
}
else
{
return v___x_525_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lake_Build_Package_0__Lake_Package_recCollectDefaultModules_spec__0_spec__0___redArg___boxed(lean_object* v_a_527_, lean_object* v_x_528_){
_start:
{
uint8_t v_res_529_; lean_object* v_r_530_; 
v_res_529_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lake_Build_Package_0__Lake_Package_recCollectDefaultModules_spec__0_spec__0___redArg(v_a_527_, v_x_528_);
lean_dec(v_x_528_);
lean_dec_ref(v_a_527_);
v_r_530_ = lean_box(v_res_529_);
return v_r_530_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lake_Build_Package_0__Lake_Package_recCollectDefaultModules_spec__0___redArg(lean_object* v_m_531_, lean_object* v_a_532_){
_start:
{
lean_object* v_buckets_533_; lean_object* v_name_534_; lean_object* v___x_535_; uint64_t v___y_537_; lean_object* v___x_551_; 
v_buckets_533_ = lean_ctor_get(v_m_531_, 1);
v_name_534_ = lean_ctor_get(v_a_532_, 1);
v___x_535_ = lean_array_get_size(v_buckets_533_);
v___x_551_ = l_unsafeCast___redArg(v_name_534_);
if (lean_obj_tag(v___x_551_) == 0)
{
uint64_t v___x_552_; 
v___x_552_ = 1723ULL;
v___y_537_ = v___x_552_;
goto v___jp_536_;
}
else
{
uint64_t v_hash_553_; 
v_hash_553_ = lean_ctor_get_uint64(v___x_551_, sizeof(void*)*2);
lean_dec(v___x_551_);
v___y_537_ = v_hash_553_;
goto v___jp_536_;
}
v___jp_536_:
{
uint64_t v___x_538_; uint64_t v___x_539_; uint64_t v_fold_540_; uint64_t v___x_541_; uint64_t v___x_542_; uint64_t v___x_543_; size_t v___x_544_; size_t v___x_545_; size_t v___x_546_; size_t v___x_547_; size_t v___x_548_; lean_object* v___x_549_; uint8_t v___x_550_; 
v___x_538_ = 32ULL;
v___x_539_ = lean_uint64_shift_right(v___y_537_, v___x_538_);
v_fold_540_ = lean_uint64_xor(v___y_537_, v___x_539_);
v___x_541_ = 16ULL;
v___x_542_ = lean_uint64_shift_right(v_fold_540_, v___x_541_);
v___x_543_ = lean_uint64_xor(v_fold_540_, v___x_542_);
v___x_544_ = lean_uint64_to_usize(v___x_543_);
v___x_545_ = lean_usize_of_nat(v___x_535_);
v___x_546_ = ((size_t)1ULL);
v___x_547_ = lean_usize_sub(v___x_545_, v___x_546_);
v___x_548_ = lean_usize_land(v___x_544_, v___x_547_);
v___x_549_ = lean_array_uget_borrowed(v_buckets_533_, v___x_548_);
v___x_550_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lake_Build_Package_0__Lake_Package_recCollectDefaultModules_spec__0_spec__0___redArg(v_a_532_, v___x_549_);
return v___x_550_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lake_Build_Package_0__Lake_Package_recCollectDefaultModules_spec__0___redArg___boxed(lean_object* v_m_554_, lean_object* v_a_555_){
_start:
{
uint8_t v_res_556_; lean_object* v_r_557_; 
v_res_556_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lake_Build_Package_0__Lake_Package_recCollectDefaultModules_spec__0___redArg(v_m_554_, v_a_555_);
lean_dec_ref(v_a_555_);
lean_dec_ref(v_m_554_);
v_r_557_ = lean_box(v_res_556_);
return v_r_557_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lake_Build_Package_0__Lake_Package_recCollectDefaultModules_spec__1_spec__2_spec__3_spec__6___redArg(lean_object* v_x_558_, lean_object* v_x_559_){
_start:
{
if (lean_obj_tag(v_x_559_) == 0)
{
return v_x_558_;
}
else
{
lean_object* v_key_560_; lean_object* v_value_561_; lean_object* v_tail_562_; lean_object* v___x_564_; uint8_t v_isShared_565_; uint8_t v_isSharedCheck_590_; 
v_key_560_ = lean_ctor_get(v_x_559_, 0);
v_value_561_ = lean_ctor_get(v_x_559_, 1);
v_tail_562_ = lean_ctor_get(v_x_559_, 2);
v_isSharedCheck_590_ = !lean_is_exclusive(v_x_559_);
if (v_isSharedCheck_590_ == 0)
{
v___x_564_ = v_x_559_;
v_isShared_565_ = v_isSharedCheck_590_;
goto v_resetjp_563_;
}
else
{
lean_inc(v_tail_562_);
lean_inc(v_value_561_);
lean_inc(v_key_560_);
lean_dec(v_x_559_);
v___x_564_ = lean_box(0);
v_isShared_565_ = v_isSharedCheck_590_;
goto v_resetjp_563_;
}
v_resetjp_563_:
{
lean_object* v_name_566_; lean_object* v___x_567_; uint64_t v___y_569_; lean_object* v___x_587_; 
v_name_566_ = lean_ctor_get(v_key_560_, 1);
v___x_567_ = lean_array_get_size(v_x_558_);
v___x_587_ = l_unsafeCast___redArg(v_name_566_);
if (lean_obj_tag(v___x_587_) == 0)
{
uint64_t v___x_588_; 
v___x_588_ = 1723ULL;
v___y_569_ = v___x_588_;
goto v___jp_568_;
}
else
{
uint64_t v_hash_589_; 
v_hash_589_ = lean_ctor_get_uint64(v___x_587_, sizeof(void*)*2);
lean_dec(v___x_587_);
v___y_569_ = v_hash_589_;
goto v___jp_568_;
}
v___jp_568_:
{
uint64_t v___x_570_; uint64_t v___x_571_; uint64_t v_fold_572_; uint64_t v___x_573_; uint64_t v___x_574_; uint64_t v___x_575_; size_t v___x_576_; size_t v___x_577_; size_t v___x_578_; size_t v___x_579_; size_t v___x_580_; lean_object* v___x_581_; lean_object* v___x_583_; 
v___x_570_ = 32ULL;
v___x_571_ = lean_uint64_shift_right(v___y_569_, v___x_570_);
v_fold_572_ = lean_uint64_xor(v___y_569_, v___x_571_);
v___x_573_ = 16ULL;
v___x_574_ = lean_uint64_shift_right(v_fold_572_, v___x_573_);
v___x_575_ = lean_uint64_xor(v_fold_572_, v___x_574_);
v___x_576_ = lean_uint64_to_usize(v___x_575_);
v___x_577_ = lean_usize_of_nat(v___x_567_);
v___x_578_ = ((size_t)1ULL);
v___x_579_ = lean_usize_sub(v___x_577_, v___x_578_);
v___x_580_ = lean_usize_land(v___x_576_, v___x_579_);
v___x_581_ = lean_array_uget_borrowed(v_x_558_, v___x_580_);
lean_inc(v___x_581_);
if (v_isShared_565_ == 0)
{
lean_ctor_set(v___x_564_, 2, v___x_581_);
v___x_583_ = v___x_564_;
goto v_reusejp_582_;
}
else
{
lean_object* v_reuseFailAlloc_586_; 
v_reuseFailAlloc_586_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_586_, 0, v_key_560_);
lean_ctor_set(v_reuseFailAlloc_586_, 1, v_value_561_);
lean_ctor_set(v_reuseFailAlloc_586_, 2, v___x_581_);
v___x_583_ = v_reuseFailAlloc_586_;
goto v_reusejp_582_;
}
v_reusejp_582_:
{
lean_object* v___x_584_; 
v___x_584_ = lean_array_uset(v_x_558_, v___x_580_, v___x_583_);
v_x_558_ = v___x_584_;
v_x_559_ = v_tail_562_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lake_Build_Package_0__Lake_Package_recCollectDefaultModules_spec__1_spec__2_spec__3___redArg(lean_object* v_i_591_, lean_object* v_source_592_, lean_object* v_target_593_){
_start:
{
lean_object* v___x_594_; uint8_t v___x_595_; 
v___x_594_ = lean_array_get_size(v_source_592_);
v___x_595_ = lean_nat_dec_lt(v_i_591_, v___x_594_);
if (v___x_595_ == 0)
{
lean_dec_ref(v_source_592_);
lean_dec(v_i_591_);
return v_target_593_;
}
else
{
lean_object* v_es_596_; lean_object* v___x_597_; lean_object* v_source_598_; lean_object* v_target_599_; lean_object* v___x_600_; lean_object* v___x_601_; 
v_es_596_ = lean_array_fget(v_source_592_, v_i_591_);
v___x_597_ = lean_box(0);
v_source_598_ = lean_array_fset(v_source_592_, v_i_591_, v___x_597_);
v_target_599_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lake_Build_Package_0__Lake_Package_recCollectDefaultModules_spec__1_spec__2_spec__3_spec__6___redArg(v_target_593_, v_es_596_);
v___x_600_ = lean_unsigned_to_nat(1u);
v___x_601_ = lean_nat_add(v_i_591_, v___x_600_);
lean_dec(v_i_591_);
v_i_591_ = v___x_601_;
v_source_592_ = v_source_598_;
v_target_593_ = v_target_599_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lake_Build_Package_0__Lake_Package_recCollectDefaultModules_spec__1_spec__2___redArg(lean_object* v_data_603_){
_start:
{
lean_object* v___x_604_; lean_object* v___x_605_; lean_object* v_nbuckets_606_; lean_object* v___x_607_; lean_object* v___x_608_; lean_object* v___x_609_; lean_object* v___x_610_; lean_object* v___x_611_; 
v___x_604_ = lean_array_get_size(v_data_603_);
v___x_605_ = lean_unsigned_to_nat(2u);
v_nbuckets_606_ = lean_nat_mul(v___x_604_, v___x_605_);
v___x_607_ = lean_unsigned_to_nat(0u);
v___x_608_ = lean_box(0);
v___x_609_ = lean_mk_array(v_nbuckets_606_, v___x_608_);
v___x_610_ = lean_array_propagate_mark(v_data_603_, v___x_609_);
v___x_611_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lake_Build_Package_0__Lake_Package_recCollectDefaultModules_spec__1_spec__2_spec__3___redArg(v___x_607_, v_data_603_, v___x_610_);
return v___x_611_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lake_Build_Package_0__Lake_Package_recCollectDefaultModules_spec__1___redArg(lean_object* v_m_612_, lean_object* v_a_613_, lean_object* v_b_614_){
_start:
{
lean_object* v_size_615_; lean_object* v_buckets_616_; lean_object* v_name_617_; lean_object* v___x_618_; uint64_t v___y_620_; lean_object* v___x_657_; 
v_size_615_ = lean_ctor_get(v_m_612_, 0);
v_buckets_616_ = lean_ctor_get(v_m_612_, 1);
v_name_617_ = lean_ctor_get(v_a_613_, 1);
v___x_618_ = lean_array_get_size(v_buckets_616_);
v___x_657_ = l_unsafeCast___redArg(v_name_617_);
if (lean_obj_tag(v___x_657_) == 0)
{
uint64_t v___x_658_; 
v___x_658_ = 1723ULL;
v___y_620_ = v___x_658_;
goto v___jp_619_;
}
else
{
uint64_t v_hash_659_; 
v_hash_659_ = lean_ctor_get_uint64(v___x_657_, sizeof(void*)*2);
lean_dec(v___x_657_);
v___y_620_ = v_hash_659_;
goto v___jp_619_;
}
v___jp_619_:
{
uint64_t v___x_621_; uint64_t v___x_622_; uint64_t v_fold_623_; uint64_t v___x_624_; uint64_t v___x_625_; uint64_t v___x_626_; size_t v___x_627_; size_t v___x_628_; size_t v___x_629_; size_t v___x_630_; size_t v___x_631_; lean_object* v_bkt_632_; uint8_t v___x_633_; 
v___x_621_ = 32ULL;
v___x_622_ = lean_uint64_shift_right(v___y_620_, v___x_621_);
v_fold_623_ = lean_uint64_xor(v___y_620_, v___x_622_);
v___x_624_ = 16ULL;
v___x_625_ = lean_uint64_shift_right(v_fold_623_, v___x_624_);
v___x_626_ = lean_uint64_xor(v_fold_623_, v___x_625_);
v___x_627_ = lean_uint64_to_usize(v___x_626_);
v___x_628_ = lean_usize_of_nat(v___x_618_);
v___x_629_ = ((size_t)1ULL);
v___x_630_ = lean_usize_sub(v___x_628_, v___x_629_);
v___x_631_ = lean_usize_land(v___x_627_, v___x_630_);
v_bkt_632_ = lean_array_uget_borrowed(v_buckets_616_, v___x_631_);
v___x_633_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lake_Build_Package_0__Lake_Package_recCollectDefaultModules_spec__0_spec__0___redArg(v_a_613_, v_bkt_632_);
if (v___x_633_ == 0)
{
lean_object* v___x_635_; uint8_t v_isShared_636_; uint8_t v_isSharedCheck_654_; 
lean_inc_ref(v_buckets_616_);
lean_inc(v_size_615_);
v_isSharedCheck_654_ = !lean_is_exclusive(v_m_612_);
if (v_isSharedCheck_654_ == 0)
{
lean_object* v_unused_655_; lean_object* v_unused_656_; 
v_unused_655_ = lean_ctor_get(v_m_612_, 1);
lean_dec(v_unused_655_);
v_unused_656_ = lean_ctor_get(v_m_612_, 0);
lean_dec(v_unused_656_);
v___x_635_ = v_m_612_;
v_isShared_636_ = v_isSharedCheck_654_;
goto v_resetjp_634_;
}
else
{
lean_dec(v_m_612_);
v___x_635_ = lean_box(0);
v_isShared_636_ = v_isSharedCheck_654_;
goto v_resetjp_634_;
}
v_resetjp_634_:
{
lean_object* v___x_637_; lean_object* v_size_x27_638_; lean_object* v___x_639_; lean_object* v_buckets_x27_640_; lean_object* v___x_641_; lean_object* v___x_642_; lean_object* v___x_643_; lean_object* v___x_644_; lean_object* v___x_645_; uint8_t v___x_646_; 
v___x_637_ = lean_unsigned_to_nat(1u);
v_size_x27_638_ = lean_nat_add(v_size_615_, v___x_637_);
lean_dec(v_size_615_);
lean_inc(v_bkt_632_);
v___x_639_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_639_, 0, v_a_613_);
lean_ctor_set(v___x_639_, 1, v_b_614_);
lean_ctor_set(v___x_639_, 2, v_bkt_632_);
v_buckets_x27_640_ = lean_array_uset(v_buckets_616_, v___x_631_, v___x_639_);
v___x_641_ = lean_unsigned_to_nat(4u);
v___x_642_ = lean_nat_mul(v_size_x27_638_, v___x_641_);
v___x_643_ = lean_unsigned_to_nat(3u);
v___x_644_ = lean_nat_div(v___x_642_, v___x_643_);
lean_dec(v___x_642_);
v___x_645_ = lean_array_get_size(v_buckets_x27_640_);
v___x_646_ = lean_nat_dec_le(v___x_644_, v___x_645_);
lean_dec(v___x_644_);
if (v___x_646_ == 0)
{
lean_object* v_val_647_; lean_object* v___x_649_; 
v_val_647_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lake_Build_Package_0__Lake_Package_recCollectDefaultModules_spec__1_spec__2___redArg(v_buckets_x27_640_);
if (v_isShared_636_ == 0)
{
lean_ctor_set(v___x_635_, 1, v_val_647_);
lean_ctor_set(v___x_635_, 0, v_size_x27_638_);
v___x_649_ = v___x_635_;
goto v_reusejp_648_;
}
else
{
lean_object* v_reuseFailAlloc_650_; 
v_reuseFailAlloc_650_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_650_, 0, v_size_x27_638_);
lean_ctor_set(v_reuseFailAlloc_650_, 1, v_val_647_);
v___x_649_ = v_reuseFailAlloc_650_;
goto v_reusejp_648_;
}
v_reusejp_648_:
{
return v___x_649_;
}
}
else
{
lean_object* v___x_652_; 
if (v_isShared_636_ == 0)
{
lean_ctor_set(v___x_635_, 1, v_buckets_x27_640_);
lean_ctor_set(v___x_635_, 0, v_size_x27_638_);
v___x_652_ = v___x_635_;
goto v_reusejp_651_;
}
else
{
lean_object* v_reuseFailAlloc_653_; 
v_reuseFailAlloc_653_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_653_, 0, v_size_x27_638_);
lean_ctor_set(v_reuseFailAlloc_653_, 1, v_buckets_x27_640_);
v___x_652_ = v_reuseFailAlloc_653_;
goto v_reusejp_651_;
}
v_reusejp_651_:
{
return v___x_652_;
}
}
}
}
else
{
lean_dec(v_b_614_);
lean_dec_ref(v_a_613_);
return v_m_612_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Package_0__Lake_Package_recCollectDefaultModules_spec__2___redArg(lean_object* v_as_660_, size_t v_sz_661_, size_t v_i_662_, lean_object* v_b_663_, lean_object* v___y_664_){
_start:
{
lean_object* v_a_667_; lean_object* v_a_668_; uint8_t v___x_672_; 
v___x_672_ = lean_usize_dec_lt(v_i_662_, v_sz_661_);
if (v___x_672_ == 0)
{
lean_object* v___x_673_; 
v___x_673_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_673_, 0, v_b_663_);
lean_ctor_set(v___x_673_, 1, v___y_664_);
return v___x_673_;
}
else
{
lean_object* v_fst_674_; lean_object* v_snd_675_; lean_object* v___x_677_; uint8_t v_isShared_678_; uint8_t v_isSharedCheck_690_; 
v_fst_674_ = lean_ctor_get(v_b_663_, 0);
v_snd_675_ = lean_ctor_get(v_b_663_, 1);
v_isSharedCheck_690_ = !lean_is_exclusive(v_b_663_);
if (v_isSharedCheck_690_ == 0)
{
v___x_677_ = v_b_663_;
v_isShared_678_ = v_isSharedCheck_690_;
goto v_resetjp_676_;
}
else
{
lean_inc(v_snd_675_);
lean_inc(v_fst_674_);
lean_dec(v_b_663_);
v___x_677_ = lean_box(0);
v_isShared_678_ = v_isSharedCheck_690_;
goto v_resetjp_676_;
}
v_resetjp_676_:
{
lean_object* v_a_679_; uint8_t v___x_680_; 
v_a_679_ = lean_array_uget_borrowed(v_as_660_, v_i_662_);
v___x_680_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lake_Build_Package_0__Lake_Package_recCollectDefaultModules_spec__0___redArg(v_snd_675_, v_a_679_);
if (v___x_680_ == 0)
{
lean_object* v___x_681_; lean_object* v___x_682_; lean_object* v___x_683_; lean_object* v___x_685_; 
v___x_681_ = lean_box(0);
lean_inc_n(v_a_679_, 2);
v___x_682_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lake_Build_Package_0__Lake_Package_recCollectDefaultModules_spec__1___redArg(v_snd_675_, v_a_679_, v___x_681_);
v___x_683_ = lean_array_push(v_fst_674_, v_a_679_);
if (v_isShared_678_ == 0)
{
lean_ctor_set(v___x_677_, 1, v___x_682_);
lean_ctor_set(v___x_677_, 0, v___x_683_);
v___x_685_ = v___x_677_;
goto v_reusejp_684_;
}
else
{
lean_object* v_reuseFailAlloc_686_; 
v_reuseFailAlloc_686_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_686_, 0, v___x_683_);
lean_ctor_set(v_reuseFailAlloc_686_, 1, v___x_682_);
v___x_685_ = v_reuseFailAlloc_686_;
goto v_reusejp_684_;
}
v_reusejp_684_:
{
v_a_667_ = v___x_685_;
v_a_668_ = v___y_664_;
goto v___jp_666_;
}
}
else
{
lean_object* v___x_688_; 
if (v_isShared_678_ == 0)
{
v___x_688_ = v___x_677_;
goto v_reusejp_687_;
}
else
{
lean_object* v_reuseFailAlloc_689_; 
v_reuseFailAlloc_689_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_689_, 0, v_fst_674_);
lean_ctor_set(v_reuseFailAlloc_689_, 1, v_snd_675_);
v___x_688_ = v_reuseFailAlloc_689_;
goto v_reusejp_687_;
}
v_reusejp_687_:
{
v_a_667_ = v___x_688_;
v_a_668_ = v___y_664_;
goto v___jp_666_;
}
}
}
}
v___jp_666_:
{
size_t v___x_669_; size_t v___x_670_; 
v___x_669_ = ((size_t)1ULL);
v___x_670_ = lean_usize_add(v_i_662_, v___x_669_);
v_i_662_ = v___x_670_;
v_b_663_ = v_a_667_;
v___y_664_ = v_a_668_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Package_0__Lake_Package_recCollectDefaultModules_spec__2___redArg___boxed(lean_object* v_as_691_, lean_object* v_sz_692_, lean_object* v_i_693_, lean_object* v_b_694_, lean_object* v___y_695_, lean_object* v___y_696_){
_start:
{
size_t v_sz_boxed_697_; size_t v_i_boxed_698_; lean_object* v_res_699_; 
v_sz_boxed_697_ = lean_unbox_usize(v_sz_692_);
lean_dec(v_sz_692_);
v_i_boxed_698_ = lean_unbox_usize(v_i_693_);
lean_dec(v_i_693_);
v_res_699_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Package_0__Lake_Package_recCollectDefaultModules_spec__2___redArg(v_as_691_, v_sz_boxed_697_, v_i_boxed_698_, v_b_694_, v___y_695_);
lean_dec_ref(v_as_691_);
return v_res_699_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Package_0__Lake_Package_recCollectDefaultModules_spec__3(lean_object* v_self_705_, lean_object* v_as_706_, size_t v_sz_707_, size_t v_i_708_, lean_object* v_b_709_, lean_object* v___y_710_, lean_object* v___y_711_, lean_object* v___y_712_, lean_object* v___y_713_, lean_object* v___y_714_, lean_object* v___y_715_){
_start:
{
lean_object* v_a_718_; lean_object* v_a_719_; uint8_t v___x_721_; 
v___x_721_ = lean_usize_dec_lt(v_i_708_, v_sz_707_);
if (v___x_721_ == 0)
{
lean_object* v___x_722_; 
lean_dec_ref(v___y_710_);
lean_dec_ref(v_self_705_);
v___x_722_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_722_, 0, v_b_709_);
lean_ctor_set(v___x_722_, 1, v___y_715_);
return v___x_722_;
}
else
{
lean_object* v_fst_723_; lean_object* v_snd_724_; lean_object* v___x_726_; uint8_t v_isShared_727_; uint8_t v_isSharedCheck_824_; 
v_fst_723_ = lean_ctor_get(v_b_709_, 0);
v_snd_724_ = lean_ctor_get(v_b_709_, 1);
v_isSharedCheck_824_ = !lean_is_exclusive(v_b_709_);
if (v_isSharedCheck_824_ == 0)
{
v___x_726_ = v_b_709_;
v_isShared_727_ = v_isSharedCheck_824_;
goto v_resetjp_725_;
}
else
{
lean_inc(v_snd_724_);
lean_inc(v_fst_723_);
lean_dec(v_b_709_);
v___x_726_ = lean_box(0);
v_isShared_727_ = v_isSharedCheck_824_;
goto v_resetjp_725_;
}
v_resetjp_725_:
{
lean_object* v_targetMods_729_; lean_object* v___y_730_; lean_object* v___y_731_; lean_object* v___y_732_; lean_object* v___y_733_; lean_object* v___y_734_; lean_object* v___y_735_; lean_object* v_mods_758_; lean_object* v_a_759_; lean_object* v___x_795_; 
v_mods_758_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Package_0__Lake_Package_recCollectDefaultModules_spec__3___closed__0));
v_a_759_ = lean_array_uget_borrowed(v_as_706_, v_i_708_);
v___x_795_ = l_Lake_Package_findTargetDecl_x3f(v_a_759_, v_self_705_);
if (lean_obj_tag(v___x_795_) == 0)
{
goto v___jp_760_;
}
else
{
lean_object* v_val_796_; lean_object* v_name_797_; lean_object* v_kind_798_; lean_object* v_config_799_; lean_object* v___x_801_; uint8_t v_isShared_802_; uint8_t v_isSharedCheck_822_; 
v_val_796_ = lean_ctor_get(v___x_795_, 0);
lean_inc(v_val_796_);
lean_dec_ref_known(v___x_795_, 1);
v_name_797_ = lean_ctor_get(v_val_796_, 1);
v_kind_798_ = lean_ctor_get(v_val_796_, 2);
v_config_799_ = lean_ctor_get(v_val_796_, 3);
v_isSharedCheck_822_ = !lean_is_exclusive(v_val_796_);
if (v_isSharedCheck_822_ == 0)
{
lean_object* v_unused_823_; 
v_unused_823_ = lean_ctor_get(v_val_796_, 0);
lean_dec(v_unused_823_);
v___x_801_ = v_val_796_;
v_isShared_802_ = v_isSharedCheck_822_;
goto v_resetjp_800_;
}
else
{
lean_inc(v_config_799_);
lean_inc(v_kind_798_);
lean_inc(v_name_797_);
lean_dec(v_val_796_);
v___x_801_ = lean_box(0);
v_isShared_802_ = v_isSharedCheck_822_;
goto v_resetjp_800_;
}
v_resetjp_800_:
{
lean_object* v___x_803_; uint8_t v___x_804_; 
v___x_803_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Package_0__Lake_Package_recCollectDefaultModules_spec__3___closed__2));
v___x_804_ = lean_name_eq(v_kind_798_, v___x_803_);
lean_dec(v_kind_798_);
if (v___x_804_ == 0)
{
lean_del_object(v___x_801_);
lean_dec(v_config_799_);
lean_dec(v_name_797_);
goto v___jp_760_;
}
else
{
lean_object* v_keyName_805_; lean_object* v___x_806_; lean_object* v___x_807_; lean_object* v___x_808_; lean_object* v___x_810_; 
v_keyName_805_ = lean_ctor_get(v_self_705_, 2);
lean_inc(v_name_797_);
lean_inc_ref(v_self_705_);
v___x_806_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_806_, 0, v_self_705_);
lean_ctor_set(v___x_806_, 1, v_name_797_);
lean_ctor_set(v___x_806_, 2, v_config_799_);
v___x_807_ = l_Lake_LeanLib_modulesFacet;
lean_inc(v_keyName_805_);
v___x_808_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_808_, 0, v_keyName_805_);
lean_ctor_set(v___x_808_, 1, v_name_797_);
if (v_isShared_802_ == 0)
{
lean_ctor_set_tag(v___x_801_, 1);
lean_ctor_set(v___x_801_, 3, v___x_807_);
lean_ctor_set(v___x_801_, 2, v___x_806_);
lean_ctor_set(v___x_801_, 1, v___x_803_);
lean_ctor_set(v___x_801_, 0, v___x_808_);
v___x_810_ = v___x_801_;
goto v_reusejp_809_;
}
else
{
lean_object* v_reuseFailAlloc_821_; 
v_reuseFailAlloc_821_ = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(v_reuseFailAlloc_821_, 0, v___x_808_);
lean_ctor_set(v_reuseFailAlloc_821_, 1, v___x_803_);
lean_ctor_set(v_reuseFailAlloc_821_, 2, v___x_806_);
lean_ctor_set(v_reuseFailAlloc_821_, 3, v___x_807_);
v___x_810_ = v_reuseFailAlloc_821_;
goto v_reusejp_809_;
}
v_reusejp_809_:
{
lean_object* v___x_811_; 
lean_inc_ref(v___y_710_);
lean_inc_ref(v___y_714_);
lean_inc(v___y_713_);
lean_inc(v___y_712_);
lean_inc(v___y_711_);
v___x_811_ = lean_apply_7(v___y_710_, v___x_810_, v___y_711_, v___y_712_, v___y_713_, v___y_714_, v___y_715_, lean_box(0));
if (lean_obj_tag(v___x_811_) == 0)
{
lean_object* v_a_812_; lean_object* v_a_813_; lean_object* v___x_814_; 
v_a_812_ = lean_ctor_get(v___x_811_, 0);
lean_inc(v_a_812_);
v_a_813_ = lean_ctor_get(v___x_811_, 1);
lean_inc(v_a_813_);
lean_dec_ref_known(v___x_811_, 2);
v___x_814_ = l_Lake_Job_await___redArg(v_a_812_, v_a_813_);
if (lean_obj_tag(v___x_814_) == 0)
{
lean_object* v_a_815_; lean_object* v_a_816_; 
v_a_815_ = lean_ctor_get(v___x_814_, 0);
lean_inc(v_a_815_);
v_a_816_ = lean_ctor_get(v___x_814_, 1);
lean_inc(v_a_816_);
lean_dec_ref_known(v___x_814_, 2);
lean_inc_ref(v___y_710_);
v_targetMods_729_ = v_a_815_;
v___y_730_ = v___y_710_;
v___y_731_ = v___y_711_;
v___y_732_ = v___y_712_;
v___y_733_ = v___y_713_;
v___y_734_ = v___y_714_;
v___y_735_ = v_a_816_;
goto v___jp_728_;
}
else
{
lean_object* v_a_817_; lean_object* v_a_818_; 
lean_del_object(v___x_726_);
lean_dec(v_snd_724_);
lean_dec(v_fst_723_);
lean_dec_ref(v___y_710_);
lean_dec_ref(v_self_705_);
v_a_817_ = lean_ctor_get(v___x_814_, 0);
lean_inc(v_a_817_);
v_a_818_ = lean_ctor_get(v___x_814_, 1);
lean_inc(v_a_818_);
lean_dec_ref_known(v___x_814_, 2);
v_a_718_ = v_a_817_;
v_a_719_ = v_a_818_;
goto v___jp_717_;
}
}
else
{
lean_object* v_a_819_; lean_object* v_a_820_; 
lean_del_object(v___x_726_);
lean_dec(v_snd_724_);
lean_dec(v_fst_723_);
lean_dec_ref(v___y_710_);
lean_dec_ref(v_self_705_);
v_a_819_ = lean_ctor_get(v___x_811_, 0);
lean_inc(v_a_819_);
v_a_820_ = lean_ctor_get(v___x_811_, 1);
lean_inc(v_a_820_);
lean_dec_ref_known(v___x_811_, 2);
v_a_718_ = v_a_819_;
v_a_719_ = v_a_820_;
goto v___jp_717_;
}
}
}
}
}
v___jp_728_:
{
lean_object* v___x_737_; 
lean_dec_ref(v___y_730_);
if (v_isShared_727_ == 0)
{
v___x_737_ = v___x_726_;
goto v_reusejp_736_;
}
else
{
lean_object* v_reuseFailAlloc_757_; 
v_reuseFailAlloc_757_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_757_, 0, v_fst_723_);
lean_ctor_set(v_reuseFailAlloc_757_, 1, v_snd_724_);
v___x_737_ = v_reuseFailAlloc_757_;
goto v_reusejp_736_;
}
v_reusejp_736_:
{
size_t v_sz_738_; size_t v___x_739_; lean_object* v___x_740_; 
v_sz_738_ = lean_array_size(v_targetMods_729_);
v___x_739_ = ((size_t)0ULL);
v___x_740_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Package_0__Lake_Package_recCollectDefaultModules_spec__2___redArg(v_targetMods_729_, v_sz_738_, v___x_739_, v___x_737_, v___y_735_);
lean_dec_ref(v_targetMods_729_);
if (lean_obj_tag(v___x_740_) == 0)
{
lean_object* v_a_741_; lean_object* v_a_742_; lean_object* v_fst_743_; lean_object* v_snd_744_; lean_object* v___x_746_; uint8_t v_isShared_747_; uint8_t v_isSharedCheck_754_; 
v_a_741_ = lean_ctor_get(v___x_740_, 0);
lean_inc(v_a_741_);
v_a_742_ = lean_ctor_get(v___x_740_, 1);
lean_inc(v_a_742_);
lean_dec_ref_known(v___x_740_, 2);
v_fst_743_ = lean_ctor_get(v_a_741_, 0);
v_snd_744_ = lean_ctor_get(v_a_741_, 1);
v_isSharedCheck_754_ = !lean_is_exclusive(v_a_741_);
if (v_isSharedCheck_754_ == 0)
{
v___x_746_ = v_a_741_;
v_isShared_747_ = v_isSharedCheck_754_;
goto v_resetjp_745_;
}
else
{
lean_inc(v_snd_744_);
lean_inc(v_fst_743_);
lean_dec(v_a_741_);
v___x_746_ = lean_box(0);
v_isShared_747_ = v_isSharedCheck_754_;
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
lean_object* v_reuseFailAlloc_753_; 
v_reuseFailAlloc_753_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_753_, 0, v_fst_743_);
lean_ctor_set(v_reuseFailAlloc_753_, 1, v_snd_744_);
v___x_749_ = v_reuseFailAlloc_753_;
goto v_reusejp_748_;
}
v_reusejp_748_:
{
size_t v___x_750_; size_t v___x_751_; 
v___x_750_ = ((size_t)1ULL);
v___x_751_ = lean_usize_add(v_i_708_, v___x_750_);
v_i_708_ = v___x_751_;
v_b_709_ = v___x_749_;
v___y_715_ = v_a_742_;
goto _start;
}
}
}
else
{
lean_object* v_a_755_; lean_object* v_a_756_; 
lean_dec_ref(v___y_710_);
lean_dec_ref(v_self_705_);
v_a_755_ = lean_ctor_get(v___x_740_, 0);
lean_inc(v_a_755_);
v_a_756_ = lean_ctor_get(v___x_740_, 1);
lean_inc(v_a_756_);
lean_dec_ref_known(v___x_740_, 2);
v_a_718_ = v_a_755_;
v_a_719_ = v_a_756_;
goto v___jp_717_;
}
}
}
v___jp_760_:
{
lean_object* v___x_761_; 
v___x_761_ = l_Lake_Package_findTargetDecl_x3f(v_a_759_, v_self_705_);
if (lean_obj_tag(v___x_761_) == 0)
{
lean_inc_ref(v___y_710_);
v_targetMods_729_ = v_mods_758_;
v___y_730_ = v___y_710_;
v___y_731_ = v___y_711_;
v___y_732_ = v___y_712_;
v___y_733_ = v___y_713_;
v___y_734_ = v___y_714_;
v___y_735_ = v___y_715_;
goto v___jp_728_;
}
else
{
lean_object* v_val_762_; lean_object* v_name_763_; lean_object* v_kind_764_; lean_object* v_config_765_; lean_object* v___x_767_; uint8_t v_isShared_768_; uint8_t v_isSharedCheck_793_; 
v_val_762_ = lean_ctor_get(v___x_761_, 0);
lean_inc(v_val_762_);
lean_dec_ref_known(v___x_761_, 1);
v_name_763_ = lean_ctor_get(v_val_762_, 1);
v_kind_764_ = lean_ctor_get(v_val_762_, 2);
v_config_765_ = lean_ctor_get(v_val_762_, 3);
v_isSharedCheck_793_ = !lean_is_exclusive(v_val_762_);
if (v_isSharedCheck_793_ == 0)
{
lean_object* v_unused_794_; 
v_unused_794_ = lean_ctor_get(v_val_762_, 0);
lean_dec(v_unused_794_);
v___x_767_ = v_val_762_;
v_isShared_768_ = v_isSharedCheck_793_;
goto v_resetjp_766_;
}
else
{
lean_inc(v_config_765_);
lean_inc(v_kind_764_);
lean_inc(v_name_763_);
lean_dec(v_val_762_);
v___x_767_ = lean_box(0);
v_isShared_768_ = v_isSharedCheck_793_;
goto v_resetjp_766_;
}
v_resetjp_766_:
{
lean_object* v___x_769_; uint8_t v___x_770_; 
v___x_769_ = l_Lake_LeanExe_keyword;
v___x_770_ = lean_name_eq(v_kind_764_, v___x_769_);
lean_dec(v_kind_764_);
if (v___x_770_ == 0)
{
lean_del_object(v___x_767_);
lean_dec(v_config_765_);
lean_dec(v_name_763_);
lean_inc_ref(v___y_710_);
v_targetMods_729_ = v_mods_758_;
v___y_730_ = v___y_710_;
v___y_731_ = v___y_711_;
v___y_732_ = v___y_712_;
v___y_733_ = v___y_713_;
v___y_734_ = v___y_714_;
v___y_735_ = v___y_715_;
goto v___jp_728_;
}
else
{
lean_object* v_root_771_; lean_object* v_keyName_772_; lean_object* v___x_773_; lean_object* v___x_774_; lean_object* v___x_775_; lean_object* v___x_776_; lean_object* v___x_777_; lean_object* v___x_778_; lean_object* v___x_780_; 
v_root_771_ = lean_ctor_get(v_config_765_, 2);
lean_inc_n(v_root_771_, 2);
v_keyName_772_ = lean_ctor_get(v_self_705_, 2);
v___x_773_ = l_Lake_LeanExeConfig_toLeanLibConfig___redArg(v_config_765_);
lean_dec(v_config_765_);
lean_inc_ref(v_self_705_);
v___x_774_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_774_, 0, v_self_705_);
lean_ctor_set(v___x_774_, 1, v_name_763_);
lean_ctor_set(v___x_774_, 2, v___x_773_);
v___x_775_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_775_, 0, v___x_774_);
lean_ctor_set(v___x_775_, 1, v_root_771_);
v___x_776_ = l_Lake_Module_transImportsFacet;
lean_inc(v_keyName_772_);
v___x_777_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_777_, 0, v_keyName_772_);
lean_ctor_set(v___x_777_, 1, v_root_771_);
v___x_778_ = l_Lake_Module_keyword;
lean_inc_ref(v___x_775_);
if (v_isShared_768_ == 0)
{
lean_ctor_set_tag(v___x_767_, 1);
lean_ctor_set(v___x_767_, 3, v___x_776_);
lean_ctor_set(v___x_767_, 2, v___x_775_);
lean_ctor_set(v___x_767_, 1, v___x_778_);
lean_ctor_set(v___x_767_, 0, v___x_777_);
v___x_780_ = v___x_767_;
goto v_reusejp_779_;
}
else
{
lean_object* v_reuseFailAlloc_792_; 
v_reuseFailAlloc_792_ = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(v_reuseFailAlloc_792_, 0, v___x_777_);
lean_ctor_set(v_reuseFailAlloc_792_, 1, v___x_778_);
lean_ctor_set(v_reuseFailAlloc_792_, 2, v___x_775_);
lean_ctor_set(v_reuseFailAlloc_792_, 3, v___x_776_);
v___x_780_ = v_reuseFailAlloc_792_;
goto v_reusejp_779_;
}
v_reusejp_779_:
{
lean_object* v___x_781_; 
lean_inc_ref(v___y_710_);
lean_inc_ref(v___y_714_);
lean_inc(v___y_713_);
lean_inc(v___y_712_);
lean_inc(v___y_711_);
v___x_781_ = lean_apply_7(v___y_710_, v___x_780_, v___y_711_, v___y_712_, v___y_713_, v___y_714_, v___y_715_, lean_box(0));
if (lean_obj_tag(v___x_781_) == 0)
{
lean_object* v_a_782_; lean_object* v_a_783_; lean_object* v___x_784_; 
v_a_782_ = lean_ctor_get(v___x_781_, 0);
lean_inc(v_a_782_);
v_a_783_ = lean_ctor_get(v___x_781_, 1);
lean_inc(v_a_783_);
lean_dec_ref_known(v___x_781_, 2);
v___x_784_ = l_Lake_Job_await___redArg(v_a_782_, v_a_783_);
if (lean_obj_tag(v___x_784_) == 0)
{
lean_object* v_a_785_; lean_object* v_a_786_; lean_object* v___x_787_; 
v_a_785_ = lean_ctor_get(v___x_784_, 0);
lean_inc(v_a_785_);
v_a_786_ = lean_ctor_get(v___x_784_, 1);
lean_inc(v_a_786_);
lean_dec_ref_known(v___x_784_, 2);
v___x_787_ = lean_array_push(v_a_785_, v___x_775_);
lean_inc_ref(v___y_710_);
v_targetMods_729_ = v___x_787_;
v___y_730_ = v___y_710_;
v___y_731_ = v___y_711_;
v___y_732_ = v___y_712_;
v___y_733_ = v___y_713_;
v___y_734_ = v___y_714_;
v___y_735_ = v_a_786_;
goto v___jp_728_;
}
else
{
lean_object* v_a_788_; lean_object* v_a_789_; 
lean_dec_ref_known(v___x_775_, 2);
lean_del_object(v___x_726_);
lean_dec(v_snd_724_);
lean_dec(v_fst_723_);
lean_dec_ref(v___y_710_);
lean_dec_ref(v_self_705_);
v_a_788_ = lean_ctor_get(v___x_784_, 0);
lean_inc(v_a_788_);
v_a_789_ = lean_ctor_get(v___x_784_, 1);
lean_inc(v_a_789_);
lean_dec_ref_known(v___x_784_, 2);
v_a_718_ = v_a_788_;
v_a_719_ = v_a_789_;
goto v___jp_717_;
}
}
else
{
lean_object* v_a_790_; lean_object* v_a_791_; 
lean_dec_ref_known(v___x_775_, 2);
lean_del_object(v___x_726_);
lean_dec(v_snd_724_);
lean_dec(v_fst_723_);
lean_dec_ref(v___y_710_);
lean_dec_ref(v_self_705_);
v_a_790_ = lean_ctor_get(v___x_781_, 0);
lean_inc(v_a_790_);
v_a_791_ = lean_ctor_get(v___x_781_, 1);
lean_inc(v_a_791_);
lean_dec_ref_known(v___x_781_, 2);
v_a_718_ = v_a_790_;
v_a_719_ = v_a_791_;
goto v___jp_717_;
}
}
}
}
}
}
}
}
v___jp_717_:
{
lean_object* v___x_720_; 
v___x_720_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_720_, 0, v_a_718_);
lean_ctor_set(v___x_720_, 1, v_a_719_);
return v___x_720_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Package_0__Lake_Package_recCollectDefaultModules_spec__3___boxed(lean_object* v_self_825_, lean_object* v_as_826_, lean_object* v_sz_827_, lean_object* v_i_828_, lean_object* v_b_829_, lean_object* v___y_830_, lean_object* v___y_831_, lean_object* v___y_832_, lean_object* v___y_833_, lean_object* v___y_834_, lean_object* v___y_835_, lean_object* v___y_836_){
_start:
{
size_t v_sz_boxed_837_; size_t v_i_boxed_838_; lean_object* v_res_839_; 
v_sz_boxed_837_ = lean_unbox_usize(v_sz_827_);
lean_dec(v_sz_827_);
v_i_boxed_838_ = lean_unbox_usize(v_i_828_);
lean_dec(v_i_828_);
v_res_839_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Package_0__Lake_Package_recCollectDefaultModules_spec__3(v_self_825_, v_as_826_, v_sz_boxed_837_, v_i_boxed_838_, v_b_829_, v___y_830_, v___y_831_, v___y_832_, v___y_833_, v___y_834_, v___y_835_);
lean_dec_ref(v___y_834_);
lean_dec(v___y_833_);
lean_dec(v___y_832_);
lean_dec(v___y_831_);
lean_dec_ref(v_as_826_);
return v_res_839_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Package_0__Lake_Package_recCollectDefaultModules___lam__0(lean_object* v_self_840_, lean_object* v_defaultTargets_841_, size_t v_sz_842_, size_t v___x_843_, lean_object* v___x_844_, lean_object* v___x_845_, lean_object* v___x_846_, lean_object* v___y_847_, lean_object* v___y_848_, lean_object* v___y_849_, lean_object* v___y_850_, lean_object* v___y_851_, lean_object* v___y_852_){
_start:
{
lean_object* v___x_854_; 
v___x_854_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Package_0__Lake_Package_recCollectDefaultModules_spec__3(v_self_840_, v_defaultTargets_841_, v_sz_842_, v___x_843_, v___x_844_, v___y_847_, v___y_848_, v___y_849_, v___y_850_, v___y_851_, v___y_852_);
if (lean_obj_tag(v___x_854_) == 0)
{
lean_object* v_a_855_; lean_object* v_a_856_; lean_object* v___x_858_; uint8_t v_isShared_859_; uint8_t v_isSharedCheck_880_; 
v_a_855_ = lean_ctor_get(v___x_854_, 0);
v_a_856_ = lean_ctor_get(v___x_854_, 1);
v_isSharedCheck_880_ = !lean_is_exclusive(v___x_854_);
if (v_isSharedCheck_880_ == 0)
{
v___x_858_ = v___x_854_;
v_isShared_859_ = v_isSharedCheck_880_;
goto v_resetjp_857_;
}
else
{
lean_inc(v_a_856_);
lean_inc(v_a_855_);
lean_dec(v___x_854_);
v___x_858_ = lean_box(0);
v_isShared_859_ = v_isSharedCheck_880_;
goto v_resetjp_857_;
}
v_resetjp_857_:
{
lean_object* v_fst_860_; lean_object* v___x_862_; uint8_t v_isShared_863_; uint8_t v_isSharedCheck_878_; 
v_fst_860_ = lean_ctor_get(v_a_855_, 0);
v_isSharedCheck_878_ = !lean_is_exclusive(v_a_855_);
if (v_isSharedCheck_878_ == 0)
{
lean_object* v_unused_879_; 
v_unused_879_ = lean_ctor_get(v_a_855_, 1);
lean_dec(v_unused_879_);
v___x_862_ = v_a_855_;
v_isShared_863_ = v_isSharedCheck_878_;
goto v_resetjp_861_;
}
else
{
lean_inc(v_fst_860_);
lean_dec(v_a_855_);
v___x_862_ = lean_box(0);
v_isShared_863_ = v_isSharedCheck_878_;
goto v_resetjp_861_;
}
v_resetjp_861_:
{
lean_object* v___x_864_; lean_object* v___x_865_; uint8_t v___x_866_; uint8_t v___x_867_; lean_object* v___x_868_; lean_object* v___x_869_; lean_object* v___x_871_; 
v___x_864_ = lean_mk_empty_array_with_capacity(v___x_845_);
v___x_865_ = ((lean_object*)(l___private_Lake_Build_Package_0__Lake_Package_recFetchDeps___redArg___closed__2));
v___x_866_ = 0;
v___x_867_ = 0;
v___x_868_ = lean_obj_once(&l___private_Lake_Build_Package_0__Lake_Package_recFetchDeps___redArg___closed__4, &l___private_Lake_Build_Package_0__Lake_Package_recFetchDeps___redArg___closed__4_once, _init_l___private_Lake_Build_Package_0__Lake_Package_recFetchDeps___redArg___closed__4);
v___x_869_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_869_, 0, v___x_864_);
lean_ctor_set(v___x_869_, 1, v___x_868_);
lean_ctor_set(v___x_869_, 2, v___x_845_);
lean_ctor_set_uint8(v___x_869_, sizeof(void*)*3, v___x_866_);
lean_ctor_set_uint8(v___x_869_, sizeof(void*)*3 + 1, v___x_867_);
if (v_isShared_859_ == 0)
{
lean_ctor_set(v___x_858_, 1, v___x_869_);
lean_ctor_set(v___x_858_, 0, v_fst_860_);
v___x_871_ = v___x_858_;
goto v_reusejp_870_;
}
else
{
lean_object* v_reuseFailAlloc_877_; 
v_reuseFailAlloc_877_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_877_, 0, v_fst_860_);
lean_ctor_set(v_reuseFailAlloc_877_, 1, v___x_869_);
v___x_871_ = v_reuseFailAlloc_877_;
goto v_reusejp_870_;
}
v_reusejp_870_:
{
lean_object* v___x_872_; lean_object* v___x_873_; lean_object* v___x_875_; 
v___x_872_ = lean_task_pure(v___x_871_);
v___x_873_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_873_, 0, v___x_872_);
lean_ctor_set(v___x_873_, 1, v___x_846_);
lean_ctor_set(v___x_873_, 2, v___x_865_);
lean_ctor_set_uint8(v___x_873_, sizeof(void*)*3, v___x_867_);
if (v_isShared_863_ == 0)
{
lean_ctor_set(v___x_862_, 1, v_a_856_);
lean_ctor_set(v___x_862_, 0, v___x_873_);
v___x_875_ = v___x_862_;
goto v_reusejp_874_;
}
else
{
lean_object* v_reuseFailAlloc_876_; 
v_reuseFailAlloc_876_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_876_, 0, v___x_873_);
lean_ctor_set(v_reuseFailAlloc_876_, 1, v_a_856_);
v___x_875_ = v_reuseFailAlloc_876_;
goto v_reusejp_874_;
}
v_reusejp_874_:
{
return v___x_875_;
}
}
}
}
}
else
{
lean_object* v_a_881_; lean_object* v_a_882_; lean_object* v___x_884_; uint8_t v_isShared_885_; uint8_t v_isSharedCheck_889_; 
lean_dec(v___x_846_);
lean_dec(v___x_845_);
v_a_881_ = lean_ctor_get(v___x_854_, 0);
v_a_882_ = lean_ctor_get(v___x_854_, 1);
v_isSharedCheck_889_ = !lean_is_exclusive(v___x_854_);
if (v_isSharedCheck_889_ == 0)
{
v___x_884_ = v___x_854_;
v_isShared_885_ = v_isSharedCheck_889_;
goto v_resetjp_883_;
}
else
{
lean_inc(v_a_882_);
lean_inc(v_a_881_);
lean_dec(v___x_854_);
v___x_884_ = lean_box(0);
v_isShared_885_ = v_isSharedCheck_889_;
goto v_resetjp_883_;
}
v_resetjp_883_:
{
lean_object* v___x_887_; 
if (v_isShared_885_ == 0)
{
v___x_887_ = v___x_884_;
goto v_reusejp_886_;
}
else
{
lean_object* v_reuseFailAlloc_888_; 
v_reuseFailAlloc_888_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_888_, 0, v_a_881_);
lean_ctor_set(v_reuseFailAlloc_888_, 1, v_a_882_);
v___x_887_ = v_reuseFailAlloc_888_;
goto v_reusejp_886_;
}
v_reusejp_886_:
{
return v___x_887_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Package_0__Lake_Package_recCollectDefaultModules___lam__0___boxed(lean_object* v_self_890_, lean_object* v_defaultTargets_891_, lean_object* v_sz_892_, lean_object* v___x_893_, lean_object* v___x_894_, lean_object* v___x_895_, lean_object* v___x_896_, lean_object* v___y_897_, lean_object* v___y_898_, lean_object* v___y_899_, lean_object* v___y_900_, lean_object* v___y_901_, lean_object* v___y_902_, lean_object* v___y_903_){
_start:
{
size_t v_sz_boxed_904_; size_t v___x_15378__boxed_905_; lean_object* v_res_906_; 
v_sz_boxed_904_ = lean_unbox_usize(v_sz_892_);
lean_dec(v_sz_892_);
v___x_15378__boxed_905_ = lean_unbox_usize(v___x_893_);
lean_dec(v___x_893_);
v_res_906_ = l___private_Lake_Build_Package_0__Lake_Package_recCollectDefaultModules___lam__0(v_self_890_, v_defaultTargets_891_, v_sz_boxed_904_, v___x_15378__boxed_905_, v___x_894_, v___x_895_, v___x_896_, v___y_897_, v___y_898_, v___y_899_, v___y_900_, v___y_901_, v___y_902_);
lean_dec_ref(v___y_901_);
lean_dec(v___y_900_);
lean_dec(v___y_899_);
lean_dec(v___y_898_);
lean_dec_ref(v_defaultTargets_891_);
return v_res_906_;
}
}
static lean_object* _init_l___private_Lake_Build_Package_0__Lake_Package_recCollectDefaultModules___closed__0(void){
_start:
{
lean_object* v___x_907_; lean_object* v___x_908_; lean_object* v___x_909_; 
v___x_907_ = lean_box(0);
v___x_908_ = lean_unsigned_to_nat(16u);
v___x_909_ = lean_mk_array(v___x_908_, v___x_907_);
return v___x_909_;
}
}
static lean_object* _init_l___private_Lake_Build_Package_0__Lake_Package_recCollectDefaultModules___closed__1(void){
_start:
{
lean_object* v___x_910_; lean_object* v___x_911_; lean_object* v_seen_912_; 
v___x_910_ = lean_obj_once(&l___private_Lake_Build_Package_0__Lake_Package_recCollectDefaultModules___closed__0, &l___private_Lake_Build_Package_0__Lake_Package_recCollectDefaultModules___closed__0_once, _init_l___private_Lake_Build_Package_0__Lake_Package_recCollectDefaultModules___closed__0);
v___x_911_ = lean_unsigned_to_nat(0u);
v_seen_912_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_seen_912_, 0, v___x_911_);
lean_ctor_set(v_seen_912_, 1, v___x_910_);
return v_seen_912_;
}
}
static lean_object* _init_l___private_Lake_Build_Package_0__Lake_Package_recCollectDefaultModules___closed__2(void){
_start:
{
lean_object* v_seen_913_; lean_object* v_mods_914_; lean_object* v___x_915_; 
v_seen_913_ = lean_obj_once(&l___private_Lake_Build_Package_0__Lake_Package_recCollectDefaultModules___closed__1, &l___private_Lake_Build_Package_0__Lake_Package_recCollectDefaultModules___closed__1_once, _init_l___private_Lake_Build_Package_0__Lake_Package_recCollectDefaultModules___closed__1);
v_mods_914_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Package_0__Lake_Package_recCollectDefaultModules_spec__3___closed__0));
v___x_915_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_915_, 0, v_mods_914_);
lean_ctor_set(v___x_915_, 1, v_seen_913_);
return v___x_915_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Package_0__Lake_Package_recCollectDefaultModules(lean_object* v_self_918_, lean_object* v_a_919_, lean_object* v_a_920_, lean_object* v_a_921_, lean_object* v_a_922_, lean_object* v_a_923_, lean_object* v_a_924_){
_start:
{
lean_object* v_defaultTargets_926_; lean_object* v___x_927_; lean_object* v___x_928_; lean_object* v___x_929_; size_t v_sz_930_; lean_object* v___x_931_; lean_object* v___x_932_; lean_object* v___f_933_; lean_object* v___x_934_; 
v_defaultTargets_926_ = lean_ctor_get(v_self_918_, 17);
lean_inc_ref(v_defaultTargets_926_);
v___x_927_ = lean_unsigned_to_nat(0u);
v___x_928_ = lean_obj_once(&l___private_Lake_Build_Package_0__Lake_Package_recFetchDeps___redArg___closed__0, &l___private_Lake_Build_Package_0__Lake_Package_recFetchDeps___redArg___closed__0_once, _init_l___private_Lake_Build_Package_0__Lake_Package_recFetchDeps___redArg___closed__0);
v___x_929_ = lean_obj_once(&l___private_Lake_Build_Package_0__Lake_Package_recCollectDefaultModules___closed__2, &l___private_Lake_Build_Package_0__Lake_Package_recCollectDefaultModules___closed__2_once, _init_l___private_Lake_Build_Package_0__Lake_Package_recCollectDefaultModules___closed__2);
v_sz_930_ = lean_array_size(v_defaultTargets_926_);
v___x_931_ = lean_box_usize(v_sz_930_);
v___x_932_ = ((lean_object*)(l___private_Lake_Build_Package_0__Lake_Package_recCollectDefaultModules___boxed__const__1));
v___f_933_ = lean_alloc_closure((void*)(l___private_Lake_Build_Package_0__Lake_Package_recCollectDefaultModules___lam__0___boxed), 14, 7);
lean_closure_set(v___f_933_, 0, v_self_918_);
lean_closure_set(v___f_933_, 1, v_defaultTargets_926_);
lean_closure_set(v___f_933_, 2, v___x_931_);
lean_closure_set(v___f_933_, 3, v___x_932_);
lean_closure_set(v___f_933_, 4, v___x_929_);
lean_closure_set(v___f_933_, 5, v___x_927_);
lean_closure_set(v___f_933_, 6, v___x_928_);
v___x_934_ = l_Lake_ensureJob___redArg(v___x_928_, v___f_933_, v_a_919_, v_a_920_, v_a_921_, v_a_922_, v_a_923_, v_a_924_);
return v___x_934_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Package_0__Lake_Package_recCollectDefaultModules___boxed(lean_object* v_self_935_, lean_object* v_a_936_, lean_object* v_a_937_, lean_object* v_a_938_, lean_object* v_a_939_, lean_object* v_a_940_, lean_object* v_a_941_, lean_object* v_a_942_){
_start:
{
lean_object* v_res_943_; 
v_res_943_ = l___private_Lake_Build_Package_0__Lake_Package_recCollectDefaultModules(v_self_935_, v_a_936_, v_a_937_, v_a_938_, v_a_939_, v_a_940_, v_a_941_);
lean_dec_ref(v_a_940_);
lean_dec(v_a_939_);
lean_dec(v_a_938_);
lean_dec(v_a_937_);
return v_res_943_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lake_Build_Package_0__Lake_Package_recCollectDefaultModules_spec__0(lean_object* v_00_u03b2_944_, lean_object* v_m_945_, lean_object* v_a_946_){
_start:
{
uint8_t v___x_947_; 
v___x_947_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lake_Build_Package_0__Lake_Package_recCollectDefaultModules_spec__0___redArg(v_m_945_, v_a_946_);
return v___x_947_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lake_Build_Package_0__Lake_Package_recCollectDefaultModules_spec__0___boxed(lean_object* v_00_u03b2_948_, lean_object* v_m_949_, lean_object* v_a_950_){
_start:
{
uint8_t v_res_951_; lean_object* v_r_952_; 
v_res_951_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lake_Build_Package_0__Lake_Package_recCollectDefaultModules_spec__0(v_00_u03b2_948_, v_m_949_, v_a_950_);
lean_dec_ref(v_a_950_);
lean_dec_ref(v_m_949_);
v_r_952_ = lean_box(v_res_951_);
return v_r_952_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lake_Build_Package_0__Lake_Package_recCollectDefaultModules_spec__1(lean_object* v_00_u03b2_953_, lean_object* v_m_954_, lean_object* v_a_955_, lean_object* v_b_956_){
_start:
{
lean_object* v___x_957_; 
v___x_957_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lake_Build_Package_0__Lake_Package_recCollectDefaultModules_spec__1___redArg(v_m_954_, v_a_955_, v_b_956_);
return v___x_957_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Package_0__Lake_Package_recCollectDefaultModules_spec__2(lean_object* v_as_958_, size_t v_sz_959_, size_t v_i_960_, lean_object* v_b_961_, lean_object* v___y_962_, lean_object* v___y_963_, lean_object* v___y_964_, lean_object* v___y_965_, lean_object* v___y_966_, lean_object* v___y_967_){
_start:
{
lean_object* v___x_969_; 
v___x_969_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Package_0__Lake_Package_recCollectDefaultModules_spec__2___redArg(v_as_958_, v_sz_959_, v_i_960_, v_b_961_, v___y_967_);
return v___x_969_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Package_0__Lake_Package_recCollectDefaultModules_spec__2___boxed(lean_object* v_as_970_, lean_object* v_sz_971_, lean_object* v_i_972_, lean_object* v_b_973_, lean_object* v___y_974_, lean_object* v___y_975_, lean_object* v___y_976_, lean_object* v___y_977_, lean_object* v___y_978_, lean_object* v___y_979_, lean_object* v___y_980_){
_start:
{
size_t v_sz_boxed_981_; size_t v_i_boxed_982_; lean_object* v_res_983_; 
v_sz_boxed_981_ = lean_unbox_usize(v_sz_971_);
lean_dec(v_sz_971_);
v_i_boxed_982_ = lean_unbox_usize(v_i_972_);
lean_dec(v_i_972_);
v_res_983_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Package_0__Lake_Package_recCollectDefaultModules_spec__2(v_as_970_, v_sz_boxed_981_, v_i_boxed_982_, v_b_973_, v___y_974_, v___y_975_, v___y_976_, v___y_977_, v___y_978_, v___y_979_);
lean_dec_ref(v___y_978_);
lean_dec(v___y_977_);
lean_dec(v___y_976_);
lean_dec(v___y_975_);
lean_dec_ref(v___y_974_);
lean_dec_ref(v_as_970_);
return v_res_983_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lake_Build_Package_0__Lake_Package_recCollectDefaultModules_spec__0_spec__0(lean_object* v_00_u03b2_984_, lean_object* v_a_985_, lean_object* v_x_986_){
_start:
{
uint8_t v___x_987_; 
v___x_987_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lake_Build_Package_0__Lake_Package_recCollectDefaultModules_spec__0_spec__0___redArg(v_a_985_, v_x_986_);
return v___x_987_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lake_Build_Package_0__Lake_Package_recCollectDefaultModules_spec__0_spec__0___boxed(lean_object* v_00_u03b2_988_, lean_object* v_a_989_, lean_object* v_x_990_){
_start:
{
uint8_t v_res_991_; lean_object* v_r_992_; 
v_res_991_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lake_Build_Package_0__Lake_Package_recCollectDefaultModules_spec__0_spec__0(v_00_u03b2_988_, v_a_989_, v_x_990_);
lean_dec(v_x_990_);
lean_dec_ref(v_a_989_);
v_r_992_ = lean_box(v_res_991_);
return v_r_992_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lake_Build_Package_0__Lake_Package_recCollectDefaultModules_spec__1_spec__2(lean_object* v_00_u03b2_993_, lean_object* v_data_994_){
_start:
{
lean_object* v___x_995_; 
v___x_995_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lake_Build_Package_0__Lake_Package_recCollectDefaultModules_spec__1_spec__2___redArg(v_data_994_);
return v___x_995_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lake_Build_Package_0__Lake_Package_recCollectDefaultModules_spec__1_spec__2_spec__3(lean_object* v_00_u03b2_996_, lean_object* v_i_997_, lean_object* v_source_998_, lean_object* v_target_999_){
_start:
{
lean_object* v___x_1000_; 
v___x_1000_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lake_Build_Package_0__Lake_Package_recCollectDefaultModules_spec__1_spec__2_spec__3___redArg(v_i_997_, v_source_998_, v_target_999_);
return v___x_1000_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lake_Build_Package_0__Lake_Package_recCollectDefaultModules_spec__1_spec__2_spec__3_spec__6(lean_object* v_00_u03b2_1001_, lean_object* v_x_1002_, lean_object* v_x_1003_){
_start:
{
lean_object* v___x_1004_; 
v___x_1004_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lake_Build_Package_0__Lake_Package_recCollectDefaultModules_spec__1_spec__2_spec__3_spec__6___redArg(v_x_1002_, v_x_1003_);
return v___x_1004_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_formatQuery___at___00Lake_Package_defaultModulesFacetConfig_spec__0_spec__0(lean_object* v_as_1005_, size_t v_i_1006_, size_t v_stop_1007_, lean_object* v_b_1008_){
_start:
{
uint8_t v___x_1009_; 
v___x_1009_ = lean_usize_dec_eq(v_i_1006_, v_stop_1007_);
if (v___x_1009_ == 0)
{
lean_object* v___x_1010_; lean_object* v_name_1011_; uint8_t v___x_1012_; lean_object* v___x_1013_; lean_object* v___x_1014_; lean_object* v___x_1015_; lean_object* v___x_1016_; size_t v___x_1017_; size_t v___x_1018_; 
v___x_1010_ = lean_array_uget_borrowed(v_as_1005_, v_i_1006_);
v_name_1011_ = lean_ctor_get(v___x_1010_, 1);
v___x_1012_ = 1;
lean_inc(v_name_1011_);
v___x_1013_ = l_Lean_Name_toString(v_name_1011_, v___x_1012_);
v___x_1014_ = lean_string_append(v_b_1008_, v___x_1013_);
lean_dec_ref(v___x_1013_);
v___x_1015_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_formatQuery___at___00Lake_Package_depsFacetConfig_spec__0_spec__0___closed__0));
v___x_1016_ = lean_string_append(v___x_1014_, v___x_1015_);
v___x_1017_ = ((size_t)1ULL);
v___x_1018_ = lean_usize_add(v_i_1006_, v___x_1017_);
v_i_1006_ = v___x_1018_;
v_b_1008_ = v___x_1016_;
goto _start;
}
else
{
return v_b_1008_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_formatQuery___at___00Lake_Package_defaultModulesFacetConfig_spec__0_spec__0___boxed(lean_object* v_as_1020_, lean_object* v_i_1021_, lean_object* v_stop_1022_, lean_object* v_b_1023_){
_start:
{
size_t v_i_boxed_1024_; size_t v_stop_boxed_1025_; lean_object* v_res_1026_; 
v_i_boxed_1024_ = lean_unbox_usize(v_i_1021_);
lean_dec(v_i_1021_);
v_stop_boxed_1025_ = lean_unbox_usize(v_stop_1022_);
lean_dec(v_stop_1022_);
v_res_1026_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_formatQuery___at___00Lake_Package_defaultModulesFacetConfig_spec__0_spec__0(v_as_1020_, v_i_boxed_1024_, v_stop_boxed_1025_, v_b_1023_);
lean_dec_ref(v_as_1020_);
return v_res_1026_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lake_formatQuery___at___00Lake_Package_defaultModulesFacetConfig_spec__0_spec__1_spec__2(size_t v_sz_1027_, size_t v_i_1028_, lean_object* v_bs_1029_){
_start:
{
uint8_t v___x_1030_; 
v___x_1030_ = lean_usize_dec_lt(v_i_1028_, v_sz_1027_);
if (v___x_1030_ == 0)
{
lean_object* v___x_1031_; 
v___x_1031_ = l_unsafeCast___redArg(v_bs_1029_);
lean_dec_ref(v_bs_1029_);
return v___x_1031_;
}
else
{
lean_object* v_v_1032_; lean_object* v___x_1033_; lean_object* v_name_1034_; lean_object* v___x_1035_; lean_object* v_bs_x27_1036_; lean_object* v___x_1037_; lean_object* v___x_1038_; size_t v___x_1039_; size_t v___x_1040_; lean_object* v___x_1041_; lean_object* v___x_1042_; 
v_v_1032_ = lean_array_uget_borrowed(v_bs_1029_, v_i_1028_);
v___x_1033_ = l_unsafeCast___redArg(v_v_1032_);
v_name_1034_ = lean_ctor_get(v___x_1033_, 1);
lean_inc(v_name_1034_);
lean_dec(v___x_1033_);
v___x_1035_ = lean_unsigned_to_nat(0u);
v_bs_x27_1036_ = lean_array_uset(v_bs_1029_, v_i_1028_, v___x_1035_);
v___x_1037_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_name_1034_, v___x_1030_);
v___x_1038_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1038_, 0, v___x_1037_);
v___x_1039_ = ((size_t)1ULL);
v___x_1040_ = lean_usize_add(v_i_1028_, v___x_1039_);
v___x_1041_ = l_unsafeCast___redArg(v___x_1038_);
lean_dec_ref_known(v___x_1038_, 1);
v___x_1042_ = lean_array_uset(v_bs_x27_1036_, v_i_1028_, v___x_1041_);
v_i_1028_ = v___x_1040_;
v_bs_1029_ = v___x_1042_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lake_formatQuery___at___00Lake_Package_defaultModulesFacetConfig_spec__0_spec__1_spec__2___boxed(lean_object* v_sz_1044_, lean_object* v_i_1045_, lean_object* v_bs_1046_){
_start:
{
size_t v_sz_boxed_1047_; size_t v_i_boxed_1048_; lean_object* v_res_1049_; 
v_sz_boxed_1047_ = lean_unbox_usize(v_sz_1044_);
lean_dec(v_sz_1044_);
v_i_boxed_1048_ = lean_unbox_usize(v_i_1045_);
lean_dec(v_i_1045_);
v_res_1049_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lake_formatQuery___at___00Lake_Package_defaultModulesFacetConfig_spec__0_spec__1_spec__2(v_sz_boxed_1047_, v_i_boxed_1048_, v_bs_1046_);
return v_res_1049_;
}
}
LEAN_EXPORT lean_object* l_Lean_Array_toJson___at___00Lake_formatQuery___at___00Lake_Package_defaultModulesFacetConfig_spec__0_spec__1(lean_object* v_a_1050_){
_start:
{
size_t v_sz_1051_; size_t v___x_1052_; lean_object* v___x_1053_; lean_object* v___x_1054_; lean_object* v___x_1055_; lean_object* v___x_1056_; 
v_sz_1051_ = lean_array_size(v_a_1050_);
v___x_1052_ = ((size_t)0ULL);
v___x_1053_ = l_unsafeCast___redArg(v_a_1050_);
v___x_1054_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lake_formatQuery___at___00Lake_Package_defaultModulesFacetConfig_spec__0_spec__1_spec__2(v_sz_1051_, v___x_1052_, v___x_1053_);
v___x_1055_ = l_unsafeCast___redArg(v___x_1054_);
lean_dec_ref(v___x_1054_);
v___x_1056_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1056_, 0, v___x_1055_);
return v___x_1056_;
}
}
LEAN_EXPORT lean_object* l_Lean_Array_toJson___at___00Lake_formatQuery___at___00Lake_Package_defaultModulesFacetConfig_spec__0_spec__1___boxed(lean_object* v_a_1057_){
_start:
{
lean_object* v_res_1058_; 
v_res_1058_ = l_Lean_Array_toJson___at___00Lake_formatQuery___at___00Lake_Package_defaultModulesFacetConfig_spec__0_spec__1(v_a_1057_);
lean_dec_ref(v_a_1057_);
return v_res_1058_;
}
}
LEAN_EXPORT lean_object* l_Lake_formatQuery___at___00Lake_Package_defaultModulesFacetConfig_spec__0(uint8_t v_fmt_1059_, lean_object* v_a_1060_){
_start:
{
lean_object* v___y_1062_; 
if (v_fmt_1059_ == 0)
{
lean_object* v___x_1069_; lean_object* v___x_1070_; lean_object* v___x_1071_; uint8_t v___x_1072_; 
v___x_1069_ = ((lean_object*)(l___private_Lake_Build_Package_0__Lake_Package_recFetchDeps___redArg___closed__2));
v___x_1070_ = lean_unsigned_to_nat(0u);
v___x_1071_ = lean_array_get_size(v_a_1060_);
v___x_1072_ = lean_nat_dec_lt(v___x_1070_, v___x_1071_);
if (v___x_1072_ == 0)
{
v___y_1062_ = v___x_1069_;
goto v___jp_1061_;
}
else
{
size_t v___x_1073_; size_t v___x_1074_; lean_object* v___x_1075_; 
v___x_1073_ = ((size_t)0ULL);
v___x_1074_ = lean_usize_of_nat(v___x_1071_);
v___x_1075_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_formatQuery___at___00Lake_Package_defaultModulesFacetConfig_spec__0_spec__0(v_a_1060_, v___x_1073_, v___x_1074_, v___x_1069_);
v___y_1062_ = v___x_1075_;
goto v___jp_1061_;
}
}
else
{
lean_object* v___x_1076_; lean_object* v___x_1077_; 
v___x_1076_ = l_Lean_Array_toJson___at___00Lake_formatQuery___at___00Lake_Package_defaultModulesFacetConfig_spec__0_spec__1(v_a_1060_);
v___x_1077_ = l_Lean_Json_compress(v___x_1076_);
return v___x_1077_;
}
v___jp_1061_:
{
lean_object* v___x_1063_; lean_object* v___x_1064_; lean_object* v___x_1065_; lean_object* v___x_1066_; lean_object* v___x_1067_; lean_object* v___x_1068_; 
v___x_1063_ = lean_unsigned_to_nat(1u);
v___x_1064_ = lean_unsigned_to_nat(0u);
v___x_1065_ = lean_string_utf8_byte_size(v___y_1062_);
lean_inc_ref(v___y_1062_);
v___x_1066_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1066_, 0, v___y_1062_);
lean_ctor_set(v___x_1066_, 1, v___x_1064_);
lean_ctor_set(v___x_1066_, 2, v___x_1065_);
v___x_1067_ = l_String_Slice_Pos_prevn(v___x_1066_, v___x_1065_, v___x_1063_);
lean_dec_ref_known(v___x_1066_, 3);
v___x_1068_ = lean_string_utf8_extract_fast(v___y_1062_, v___x_1064_, v___x_1067_);
lean_dec(v___x_1067_);
lean_dec_ref(v___y_1062_);
return v___x_1068_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_formatQuery___at___00Lake_Package_defaultModulesFacetConfig_spec__0___boxed(lean_object* v_fmt_1078_, lean_object* v_a_1079_){
_start:
{
uint8_t v_fmt_boxed_1080_; lean_object* v_res_1081_; 
v_fmt_boxed_1080_ = lean_unbox(v_fmt_1078_);
v_res_1081_ = l_Lake_formatQuery___at___00Lake_Package_defaultModulesFacetConfig_spec__0(v_fmt_boxed_1080_, v_a_1079_);
lean_dec_ref(v_a_1079_);
return v_res_1081_;
}
}
static lean_object* _init_l_Lake_Package_defaultModulesFacetConfig___closed__2(void){
_start:
{
uint8_t v___x_1084_; lean_object* v___f_1085_; uint8_t v___x_1086_; lean_object* v___x_1087_; lean_object* v___x_1088_; lean_object* v___x_1089_; lean_object* v___x_1090_; 
v___x_1084_ = 1;
v___f_1085_ = ((lean_object*)(l_Lake_Package_defaultModulesFacetConfig___closed__0));
v___x_1086_ = 0;
v___x_1087_ = lean_obj_once(&l___private_Lake_Build_Package_0__Lake_Package_recFetchDeps___redArg___closed__0, &l___private_Lake_Build_Package_0__Lake_Package_recFetchDeps___redArg___closed__0_once, _init_l___private_Lake_Build_Package_0__Lake_Package_recFetchDeps___redArg___closed__0);
v___x_1088_ = ((lean_object*)(l_Lake_Package_defaultModulesFacetConfig___closed__1));
v___x_1089_ = l_Lake_Package_keyword;
v___x_1090_ = lean_alloc_ctor(0, 4, 2);
lean_ctor_set(v___x_1090_, 0, v___x_1089_);
lean_ctor_set(v___x_1090_, 1, v___x_1088_);
lean_ctor_set(v___x_1090_, 2, v___x_1087_);
lean_ctor_set(v___x_1090_, 3, v___f_1085_);
lean_ctor_set_uint8(v___x_1090_, sizeof(void*)*4, v___x_1086_);
lean_ctor_set_uint8(v___x_1090_, sizeof(void*)*4 + 1, v___x_1084_);
return v___x_1090_;
}
}
static lean_object* _init_l_Lake_Package_defaultModulesFacetConfig(void){
_start:
{
lean_object* v___x_1091_; 
v___x_1091_ = lean_obj_once(&l_Lake_Package_defaultModulesFacetConfig___closed__2, &l_Lake_Package_defaultModulesFacetConfig___closed__2_once, _init_l_Lake_Package_defaultModulesFacetConfig___closed__2);
return v___x_1091_;
}
}
static lean_object* _init_l_Lake_Package_transDepsFacetConfig___closed__1(void){
_start:
{
uint8_t v___x_1093_; lean_object* v___f_1094_; uint8_t v___x_1095_; lean_object* v___x_1096_; lean_object* v___x_1097_; lean_object* v___x_1098_; lean_object* v___x_1099_; 
v___x_1093_ = 1;
v___f_1094_ = ((lean_object*)(l_Lake_Package_depsFacetConfig___closed__0));
v___x_1095_ = 0;
v___x_1096_ = lean_obj_once(&l___private_Lake_Build_Package_0__Lake_Package_recFetchDeps___redArg___closed__0, &l___private_Lake_Build_Package_0__Lake_Package_recFetchDeps___redArg___closed__0_once, _init_l___private_Lake_Build_Package_0__Lake_Package_recFetchDeps___redArg___closed__0);
v___x_1097_ = ((lean_object*)(l_Lake_Package_transDepsFacetConfig___closed__0));
v___x_1098_ = l_Lake_Package_keyword;
v___x_1099_ = lean_alloc_ctor(0, 4, 2);
lean_ctor_set(v___x_1099_, 0, v___x_1098_);
lean_ctor_set(v___x_1099_, 1, v___x_1097_);
lean_ctor_set(v___x_1099_, 2, v___x_1096_);
lean_ctor_set(v___x_1099_, 3, v___f_1094_);
lean_ctor_set_uint8(v___x_1099_, sizeof(void*)*4, v___x_1095_);
lean_ctor_set_uint8(v___x_1099_, sizeof(void*)*4 + 1, v___x_1093_);
return v___x_1099_;
}
}
static lean_object* _init_l_Lake_Package_transDepsFacetConfig(void){
_start:
{
lean_object* v___x_1100_; 
v___x_1100_ = lean_obj_once(&l_Lake_Package_transDepsFacetConfig___closed__1, &l_Lake_Package_transDepsFacetConfig___closed__1_once, _init_l_Lake_Package_transDepsFacetConfig___closed__1);
return v___x_1100_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Package_0__Lake_Package_fetchOptBuildCacheCore(lean_object* v_self_1101_, lean_object* v_a_1102_, lean_object* v_a_1103_, lean_object* v_a_1104_, lean_object* v_a_1105_, lean_object* v_a_1106_, lean_object* v_a_1107_){
_start:
{
lean_object* v_config_1109_; uint8_t v_preferReleaseBuild_1110_; 
v_config_1109_ = lean_ctor_get(v_self_1101_, 6);
v_preferReleaseBuild_1110_ = lean_ctor_get_uint8(v_config_1109_, sizeof(void*)*28 + 2);
if (v_preferReleaseBuild_1110_ == 0)
{
lean_object* v_keyName_1111_; lean_object* v___x_1112_; lean_object* v___x_1113_; lean_object* v___x_1114_; lean_object* v___x_1115_; lean_object* v___x_1116_; 
v_keyName_1111_ = lean_ctor_get(v_self_1101_, 2);
v___x_1112_ = l_Lake_Package_optReservoirBarrelFacet;
lean_inc(v_keyName_1111_);
v___x_1113_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1113_, 0, v_keyName_1111_);
v___x_1114_ = l_Lake_Package_keyword;
v___x_1115_ = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(v___x_1115_, 0, v___x_1113_);
lean_ctor_set(v___x_1115_, 1, v___x_1114_);
lean_ctor_set(v___x_1115_, 2, v_self_1101_);
lean_ctor_set(v___x_1115_, 3, v___x_1112_);
lean_inc_ref(v_a_1106_);
lean_inc(v_a_1105_);
lean_inc(v_a_1104_);
lean_inc(v_a_1103_);
v___x_1116_ = lean_apply_7(v_a_1102_, v___x_1115_, v_a_1103_, v_a_1104_, v_a_1105_, v_a_1106_, v_a_1107_, lean_box(0));
return v___x_1116_;
}
else
{
lean_object* v_keyName_1117_; lean_object* v___x_1118_; lean_object* v___x_1119_; lean_object* v___x_1120_; lean_object* v___x_1121_; lean_object* v___x_1122_; 
v_keyName_1117_ = lean_ctor_get(v_self_1101_, 2);
v___x_1118_ = l_Lake_Package_optGitHubReleaseFacet;
lean_inc(v_keyName_1117_);
v___x_1119_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1119_, 0, v_keyName_1117_);
v___x_1120_ = l_Lake_Package_keyword;
v___x_1121_ = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(v___x_1121_, 0, v___x_1119_);
lean_ctor_set(v___x_1121_, 1, v___x_1120_);
lean_ctor_set(v___x_1121_, 2, v_self_1101_);
lean_ctor_set(v___x_1121_, 3, v___x_1118_);
lean_inc_ref(v_a_1106_);
lean_inc(v_a_1105_);
lean_inc(v_a_1104_);
lean_inc(v_a_1103_);
v___x_1122_ = lean_apply_7(v_a_1102_, v___x_1121_, v_a_1103_, v_a_1104_, v_a_1105_, v_a_1106_, v_a_1107_, lean_box(0));
return v___x_1122_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Package_0__Lake_Package_fetchOptBuildCacheCore___boxed(lean_object* v_self_1123_, lean_object* v_a_1124_, lean_object* v_a_1125_, lean_object* v_a_1126_, lean_object* v_a_1127_, lean_object* v_a_1128_, lean_object* v_a_1129_, lean_object* v_a_1130_){
_start:
{
lean_object* v_res_1131_; 
v_res_1131_ = l___private_Lake_Build_Package_0__Lake_Package_fetchOptBuildCacheCore(v_self_1123_, v_a_1124_, v_a_1125_, v_a_1126_, v_a_1127_, v_a_1128_, v_a_1129_);
lean_dec_ref(v_a_1128_);
lean_dec(v_a_1127_);
lean_dec(v_a_1126_);
lean_dec(v_a_1125_);
return v_res_1131_;
}
}
LEAN_EXPORT lean_object* l_Lake_formatQuery___at___00Lake_Package_optBuildCacheFacetConfig_spec__0(uint8_t v_fmt_1134_, uint8_t v_a_1135_){
_start:
{
if (v_fmt_1134_ == 0)
{
if (v_a_1135_ == 0)
{
lean_object* v___x_1136_; 
v___x_1136_ = ((lean_object*)(l_Lake_formatQuery___at___00Lake_Package_optBuildCacheFacetConfig_spec__0___closed__0));
return v___x_1136_;
}
else
{
lean_object* v___x_1137_; 
v___x_1137_ = ((lean_object*)(l_Lake_formatQuery___at___00Lake_Package_optBuildCacheFacetConfig_spec__0___closed__1));
return v___x_1137_;
}
}
else
{
lean_object* v___x_1138_; lean_object* v___x_1139_; 
v___x_1138_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_1138_, 0, v_a_1135_);
v___x_1139_ = l_Lean_Json_compress(v___x_1138_);
return v___x_1139_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_formatQuery___at___00Lake_Package_optBuildCacheFacetConfig_spec__0___boxed(lean_object* v_fmt_1140_, lean_object* v_a_1141_){
_start:
{
uint8_t v_fmt_boxed_1142_; uint8_t v_a_boxed_1143_; lean_object* v_res_1144_; 
v_fmt_boxed_1142_ = lean_unbox(v_fmt_1140_);
v_a_boxed_1143_ = lean_unbox(v_a_1141_);
v_res_1144_ = l_Lake_formatQuery___at___00Lake_Package_optBuildCacheFacetConfig_spec__0(v_fmt_boxed_1142_, v_a_boxed_1143_);
return v_res_1144_;
}
}
static lean_object* _init_l_Lake_Package_optBuildCacheFacetConfig___closed__2(void){
_start:
{
lean_object* v___f_1147_; uint8_t v___x_1148_; lean_object* v___x_1149_; lean_object* v___f_1150_; lean_object* v___x_1151_; lean_object* v___x_1152_; 
v___f_1147_ = ((lean_object*)(l_Lake_Package_optBuildCacheFacetConfig___closed__1));
v___x_1148_ = 1;
v___x_1149_ = l_Lake_instDataKindBool;
v___f_1150_ = ((lean_object*)(l_Lake_Package_optBuildCacheFacetConfig___closed__0));
v___x_1151_ = l_Lake_Package_keyword;
v___x_1152_ = lean_alloc_ctor(0, 4, 2);
lean_ctor_set(v___x_1152_, 0, v___x_1151_);
lean_ctor_set(v___x_1152_, 1, v___f_1150_);
lean_ctor_set(v___x_1152_, 2, v___x_1149_);
lean_ctor_set(v___x_1152_, 3, v___f_1147_);
lean_ctor_set_uint8(v___x_1152_, sizeof(void*)*4, v___x_1148_);
lean_ctor_set_uint8(v___x_1152_, sizeof(void*)*4 + 1, v___x_1148_);
return v___x_1152_;
}
}
static lean_object* _init_l_Lake_Package_optBuildCacheFacetConfig(void){
_start:
{
lean_object* v___x_1153_; 
v___x_1153_ = lean_obj_once(&l_Lake_Package_optBuildCacheFacetConfig___closed__2, &l_Lake_Package_optBuildCacheFacetConfig___closed__2_once, _init_l_Lake_Package_optBuildCacheFacetConfig___closed__2);
return v___x_1153_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Package_0__Lake_Package_maybeFetchBuildCache(lean_object* v_self_1156_, lean_object* v_a_1157_, lean_object* v_a_1158_, lean_object* v_a_1159_, lean_object* v_a_1160_, lean_object* v_a_1161_, lean_object* v_a_1162_){
_start:
{
lean_object* v___y_1165_; uint8_t v___y_1166_; lean_object* v___y_1181_; lean_object* v___y_1182_; uint8_t v___y_1189_; lean_object* v___y_1190_; lean_object* v___y_1191_; lean_object* v___y_1192_; lean_object* v_toContext_1196_; uint8_t v_a_1198_; lean_object* v_a_1199_; lean_object* v___x_1231_; lean_object* v___x_1232_; lean_object* v___x_1233_; lean_object* v___x_1234_; lean_object* v___x_1235_; lean_object* v___x_1236_; lean_object* v___x_1237_; lean_object* v___x_1238_; lean_object* v___x_1239_; lean_object* v___x_1240_; lean_object* v___x_1241_; lean_object* v___x_1242_; lean_object* v___x_1243_; lean_object* v___x_1244_; lean_object* v___x_1245_; lean_object* v_lakeEnv_1246_; uint8_t v_noCache_1247_; 
v_toContext_1196_ = lean_ctor_get(v_a_1161_, 1);
v___x_1231_ = l_unsafeCast___redArg(v_toContext_1196_);
v___x_1232_ = l_unsafeCast___redArg(v___x_1231_);
lean_dec(v___x_1231_);
v___x_1233_ = l_unsafeCast___redArg(v___x_1232_);
lean_dec(v___x_1232_);
v___x_1234_ = l_unsafeCast___redArg(v___x_1233_);
lean_dec(v___x_1233_);
v___x_1235_ = l_unsafeCast___redArg(v___x_1234_);
lean_dec(v___x_1234_);
v___x_1236_ = l_unsafeCast___redArg(v___x_1235_);
lean_dec(v___x_1235_);
v___x_1237_ = l_unsafeCast___redArg(v___x_1236_);
lean_dec(v___x_1236_);
v___x_1238_ = l_unsafeCast___redArg(v___x_1237_);
lean_dec(v___x_1237_);
v___x_1239_ = l_unsafeCast___redArg(v___x_1238_);
lean_dec(v___x_1238_);
v___x_1240_ = l_unsafeCast___redArg(v___x_1239_);
lean_dec(v___x_1239_);
v___x_1241_ = l_unsafeCast___redArg(v___x_1240_);
lean_dec(v___x_1240_);
v___x_1242_ = l_unsafeCast___redArg(v___x_1241_);
lean_dec(v___x_1241_);
v___x_1243_ = l_unsafeCast___redArg(v___x_1242_);
lean_dec(v___x_1242_);
v___x_1244_ = l_unsafeCast___redArg(v___x_1243_);
lean_dec(v___x_1243_);
v___x_1245_ = l_unsafeCast___redArg(v___x_1244_);
lean_dec(v___x_1244_);
v_lakeEnv_1246_ = lean_ctor_get(v___x_1245_, 0);
lean_inc_ref(v_lakeEnv_1246_);
lean_dec(v___x_1245_);
v_noCache_1247_ = lean_ctor_get_uint8(v_lakeEnv_1246_, sizeof(void*)*20);
lean_dec_ref(v_lakeEnv_1246_);
if (v_noCache_1247_ == 0)
{
uint8_t v___x_1248_; 
v___x_1248_ = 1;
v_a_1198_ = v___x_1248_;
v_a_1199_ = v_a_1162_;
goto v___jp_1197_;
}
else
{
uint8_t v___x_1249_; 
v___x_1249_ = 0;
v_a_1198_ = v___x_1249_;
v_a_1199_ = v_a_1162_;
goto v___jp_1197_;
}
v___jp_1164_:
{
uint8_t v___x_1167_; lean_object* v___x_1168_; lean_object* v___x_1169_; lean_object* v___x_1170_; lean_object* v___x_1171_; uint8_t v___x_1172_; lean_object* v___x_1173_; lean_object* v___x_1174_; lean_object* v___x_1175_; lean_object* v___x_1176_; lean_object* v___x_1177_; lean_object* v___x_1178_; lean_object* v___x_1179_; 
v___x_1167_ = 1;
v___x_1168_ = lean_obj_once(&l___private_Lake_Build_Package_0__Lake_Package_recFetchDeps___redArg___closed__0, &l___private_Lake_Build_Package_0__Lake_Package_recFetchDeps___redArg___closed__0_once, _init_l___private_Lake_Build_Package_0__Lake_Package_recFetchDeps___redArg___closed__0);
v___x_1169_ = lean_unsigned_to_nat(0u);
v___x_1170_ = ((lean_object*)(l___private_Lake_Build_Package_0__Lake_Package_recFetchDeps___redArg___closed__1));
v___x_1171_ = ((lean_object*)(l___private_Lake_Build_Package_0__Lake_Package_recFetchDeps___redArg___closed__2));
v___x_1172_ = 0;
v___x_1173_ = lean_obj_once(&l___private_Lake_Build_Package_0__Lake_Package_recFetchDeps___redArg___closed__4, &l___private_Lake_Build_Package_0__Lake_Package_recFetchDeps___redArg___closed__4_once, _init_l___private_Lake_Build_Package_0__Lake_Package_recFetchDeps___redArg___closed__4);
v___x_1174_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_1174_, 0, v___x_1170_);
lean_ctor_set(v___x_1174_, 1, v___x_1173_);
lean_ctor_set(v___x_1174_, 2, v___x_1169_);
lean_ctor_set_uint8(v___x_1174_, sizeof(void*)*3, v___x_1172_);
lean_ctor_set_uint8(v___x_1174_, sizeof(void*)*3 + 1, v___y_1166_);
v___x_1175_ = lean_box(v___x_1167_);
v___x_1176_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1176_, 0, v___x_1175_);
lean_ctor_set(v___x_1176_, 1, v___x_1174_);
v___x_1177_ = lean_task_pure(v___x_1176_);
v___x_1178_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_1178_, 0, v___x_1177_);
lean_ctor_set(v___x_1178_, 1, v___x_1168_);
lean_ctor_set(v___x_1178_, 2, v___x_1171_);
lean_ctor_set_uint8(v___x_1178_, sizeof(void*)*3, v___y_1166_);
v___x_1179_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1179_, 0, v___x_1178_);
lean_ctor_set(v___x_1179_, 1, v___y_1165_);
return v___x_1179_;
}
v___jp_1180_:
{
lean_object* v___x_1183_; lean_object* v___x_1184_; lean_object* v___x_1185_; lean_object* v___x_1186_; lean_object* v___x_1187_; 
v___x_1183_ = l_Lake_Package_optBuildCacheFacet;
v___x_1184_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1184_, 0, v___y_1181_);
v___x_1185_ = l_Lake_Package_keyword;
v___x_1186_ = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(v___x_1186_, 0, v___x_1184_);
lean_ctor_set(v___x_1186_, 1, v___x_1185_);
lean_ctor_set(v___x_1186_, 2, v_self_1156_);
lean_ctor_set(v___x_1186_, 3, v___x_1183_);
lean_inc_ref(v_a_1161_);
lean_inc(v_a_1160_);
lean_inc(v_a_1159_);
lean_inc(v_a_1158_);
v___x_1187_ = lean_apply_7(v_a_1157_, v___x_1186_, v_a_1158_, v_a_1159_, v_a_1160_, v_a_1161_, v___y_1182_, lean_box(0));
return v___x_1187_;
}
v___jp_1188_:
{
lean_object* v___x_1193_; lean_object* v___x_1194_; uint8_t v___x_1195_; 
v___x_1193_ = lean_string_utf8_byte_size(v___y_1191_);
lean_dec_ref(v___y_1191_);
v___x_1194_ = lean_unsigned_to_nat(0u);
v___x_1195_ = lean_nat_dec_eq(v___x_1193_, v___x_1194_);
if (v___x_1195_ == 0)
{
v___y_1181_ = v___y_1190_;
v___y_1182_ = v___y_1192_;
goto v___jp_1180_;
}
else
{
lean_dec(v___y_1190_);
lean_dec_ref(v_a_1157_);
lean_dec_ref(v_self_1156_);
v___y_1165_ = v___y_1192_;
v___y_1166_ = v___y_1189_;
goto v___jp_1164_;
}
}
v___jp_1197_:
{
lean_object* v_config_1200_; lean_object* v_keyName_1201_; lean_object* v_dir_1202_; lean_object* v_scope_1203_; lean_object* v_buildDir_1204_; uint8_t v_preferReleaseBuild_1205_; lean_object* v___x_1206_; lean_object* v___x_1207_; uint8_t v___x_1208_; lean_object* v___x_1209_; lean_object* v___x_1210_; lean_object* v___x_1211_; lean_object* v___x_1212_; lean_object* v___x_1213_; lean_object* v___x_1214_; lean_object* v___x_1215_; lean_object* v___x_1216_; lean_object* v___x_1217_; lean_object* v___x_1218_; lean_object* v___x_1219_; lean_object* v___x_1220_; lean_object* v___x_1221_; lean_object* v___x_1222_; lean_object* v___x_1223_; lean_object* v_lakeEnv_1224_; 
v_config_1200_ = lean_ctor_get(v_self_1156_, 6);
v_keyName_1201_ = lean_ctor_get(v_self_1156_, 2);
v_dir_1202_ = lean_ctor_get(v_self_1156_, 4);
v_scope_1203_ = lean_ctor_get(v_self_1156_, 10);
v_buildDir_1204_ = lean_ctor_get(v_config_1200_, 5);
v_preferReleaseBuild_1205_ = lean_ctor_get_uint8(v_config_1200_, sizeof(void*)*28 + 2);
lean_inc_ref(v_buildDir_1204_);
v___x_1206_ = l_System_FilePath_normalize(v_buildDir_1204_);
lean_inc_ref(v_dir_1202_);
v___x_1207_ = l_Lake_joinRelative(v_dir_1202_, v___x_1206_);
v___x_1208_ = l_System_FilePath_pathExists(v___x_1207_);
lean_dec_ref(v___x_1207_);
v___x_1209_ = l_unsafeCast___redArg(v_toContext_1196_);
v___x_1210_ = l_unsafeCast___redArg(v___x_1209_);
lean_dec(v___x_1209_);
v___x_1211_ = l_unsafeCast___redArg(v___x_1210_);
lean_dec(v___x_1210_);
v___x_1212_ = l_unsafeCast___redArg(v___x_1211_);
lean_dec(v___x_1211_);
v___x_1213_ = l_unsafeCast___redArg(v___x_1212_);
lean_dec(v___x_1212_);
v___x_1214_ = l_unsafeCast___redArg(v___x_1213_);
lean_dec(v___x_1213_);
v___x_1215_ = l_unsafeCast___redArg(v___x_1214_);
lean_dec(v___x_1214_);
v___x_1216_ = l_unsafeCast___redArg(v___x_1215_);
lean_dec(v___x_1215_);
v___x_1217_ = l_unsafeCast___redArg(v___x_1216_);
lean_dec(v___x_1216_);
v___x_1218_ = l_unsafeCast___redArg(v___x_1217_);
lean_dec(v___x_1217_);
v___x_1219_ = l_unsafeCast___redArg(v___x_1218_);
lean_dec(v___x_1218_);
v___x_1220_ = l_unsafeCast___redArg(v___x_1219_);
lean_dec(v___x_1219_);
v___x_1221_ = l_unsafeCast___redArg(v___x_1220_);
lean_dec(v___x_1220_);
v___x_1222_ = l_unsafeCast___redArg(v___x_1221_);
lean_dec(v___x_1221_);
v___x_1223_ = l_unsafeCast___redArg(v___x_1222_);
lean_dec(v___x_1222_);
v_lakeEnv_1224_ = lean_ctor_get(v___x_1223_, 0);
lean_inc_ref(v_lakeEnv_1224_);
lean_dec(v___x_1223_);
if (v_a_1198_ == 0)
{
lean_dec_ref(v_lakeEnv_1224_);
lean_dec_ref(v_a_1157_);
lean_dec_ref(v_self_1156_);
v___y_1165_ = v_a_1199_;
v___y_1166_ = v_a_1198_;
goto v___jp_1164_;
}
else
{
if (v___x_1208_ == 0)
{
if (v_preferReleaseBuild_1205_ == 0)
{
lean_object* v_toolchain_1225_; lean_object* v___x_1226_; uint8_t v___x_1227_; 
v_toolchain_1225_ = lean_ctor_get(v_lakeEnv_1224_, 19);
lean_inc_ref(v_toolchain_1225_);
lean_dec_ref(v_lakeEnv_1224_);
v___x_1226_ = ((lean_object*)(l___private_Lake_Build_Package_0__Lake_Package_maybeFetchBuildCache___closed__0));
v___x_1227_ = lean_string_dec_eq(v_scope_1203_, v___x_1226_);
if (v___x_1227_ == 0)
{
lean_object* v___x_1228_; uint8_t v___x_1229_; 
v___x_1228_ = ((lean_object*)(l___private_Lake_Build_Package_0__Lake_Package_maybeFetchBuildCache___closed__1));
v___x_1229_ = lean_string_dec_eq(v_scope_1203_, v___x_1228_);
if (v___x_1229_ == 0)
{
lean_dec_ref(v_toolchain_1225_);
lean_dec_ref(v_a_1157_);
lean_dec_ref(v_self_1156_);
v___y_1165_ = v_a_1199_;
v___y_1166_ = v___x_1229_;
goto v___jp_1164_;
}
else
{
lean_inc(v_keyName_1201_);
v___y_1189_ = v_preferReleaseBuild_1205_;
v___y_1190_ = v_keyName_1201_;
v___y_1191_ = v_toolchain_1225_;
v___y_1192_ = v_a_1199_;
goto v___jp_1188_;
}
}
else
{
lean_inc(v_keyName_1201_);
v___y_1189_ = v_preferReleaseBuild_1205_;
v___y_1190_ = v_keyName_1201_;
v___y_1191_ = v_toolchain_1225_;
v___y_1192_ = v_a_1199_;
goto v___jp_1188_;
}
}
else
{
lean_dec_ref(v_lakeEnv_1224_);
lean_inc(v_keyName_1201_);
v___y_1181_ = v_keyName_1201_;
v___y_1182_ = v_a_1199_;
goto v___jp_1180_;
}
}
else
{
uint8_t v___x_1230_; 
lean_dec_ref(v_lakeEnv_1224_);
lean_dec_ref(v_a_1157_);
lean_dec_ref(v_self_1156_);
v___x_1230_ = 0;
v___y_1165_ = v_a_1199_;
v___y_1166_ = v___x_1230_;
goto v___jp_1164_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Package_0__Lake_Package_maybeFetchBuildCache___boxed(lean_object* v_self_1250_, lean_object* v_a_1251_, lean_object* v_a_1252_, lean_object* v_a_1253_, lean_object* v_a_1254_, lean_object* v_a_1255_, lean_object* v_a_1256_, lean_object* v_a_1257_){
_start:
{
lean_object* v_res_1258_; 
v_res_1258_ = l___private_Lake_Build_Package_0__Lake_Package_maybeFetchBuildCache(v_self_1250_, v_a_1251_, v_a_1252_, v_a_1253_, v_a_1254_, v_a_1255_, v_a_1256_);
lean_dec_ref(v_a_1255_);
lean_dec(v_a_1254_);
lean_dec(v_a_1253_);
lean_dec(v_a_1252_);
return v_res_1258_;
}
}
static lean_object* _init_l___private_Lake_Build_Package_0__Lake_Package_optFacetDetails___redArg___closed__0(void){
_start:
{
uint8_t v___x_1259_; lean_object* v___x_1260_; 
v___x_1259_ = 2;
v___x_1260_ = l_Lake_Verbosity_ctorIdx(v___x_1259_);
return v___x_1260_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Package_0__Lake_Package_optFacetDetails___redArg(lean_object* v_self_1265_, lean_object* v_facet_1266_, lean_object* v_a_1267_, lean_object* v_a_1268_){
_start:
{
lean_object* v_toBuildConfig_1270_; uint8_t v_verbosity_1271_; lean_object* v___x_1272_; lean_object* v___x_1273_; uint8_t v___x_1274_; 
v_toBuildConfig_1270_ = lean_ctor_get(v_a_1267_, 0);
v_verbosity_1271_ = lean_ctor_get_uint8(v_toBuildConfig_1270_, sizeof(void*)*5 + 4);
v___x_1272_ = l_Lake_Verbosity_ctorIdx(v_verbosity_1271_);
v___x_1273_ = lean_obj_once(&l___private_Lake_Build_Package_0__Lake_Package_optFacetDetails___redArg___closed__0, &l___private_Lake_Build_Package_0__Lake_Package_optFacetDetails___redArg___closed__0_once, _init_l___private_Lake_Build_Package_0__Lake_Package_optFacetDetails___redArg___closed__0);
v___x_1274_ = lean_nat_dec_eq(v___x_1272_, v___x_1273_);
lean_dec(v___x_1272_);
if (v___x_1274_ == 0)
{
lean_object* v___x_1275_; lean_object* v___x_1276_; 
lean_dec(v_facet_1266_);
lean_dec_ref(v_self_1265_);
v___x_1275_ = ((lean_object*)(l___private_Lake_Build_Package_0__Lake_Package_optFacetDetails___redArg___closed__1));
v___x_1276_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1276_, 0, v___x_1275_);
lean_ctor_set(v___x_1276_, 1, v_a_1268_);
return v___x_1276_;
}
else
{
lean_object* v_baseName_1277_; lean_object* v___x_1278_; lean_object* v___x_1279_; lean_object* v___x_1280_; lean_object* v___x_1281_; lean_object* v___x_1282_; lean_object* v___x_1283_; lean_object* v___x_1284_; lean_object* v___x_1285_; lean_object* v___x_1286_; lean_object* v___x_1287_; lean_object* v___x_1288_; 
v_baseName_1277_ = lean_ctor_get(v_self_1265_, 1);
lean_inc(v_baseName_1277_);
lean_dec_ref(v_self_1265_);
v___x_1278_ = ((lean_object*)(l___private_Lake_Build_Package_0__Lake_Package_optFacetDetails___redArg___closed__2));
v___x_1279_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_baseName_1277_, v___x_1274_);
v___x_1280_ = lean_string_append(v___x_1278_, v___x_1279_);
lean_dec_ref(v___x_1279_);
v___x_1281_ = ((lean_object*)(l___private_Lake_Build_Package_0__Lake_Package_optFacetDetails___redArg___closed__3));
v___x_1282_ = lean_string_append(v___x_1280_, v___x_1281_);
v___x_1283_ = l_Lake_Name_eraseHead(v_facet_1266_);
v___x_1284_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_1283_, v___x_1274_);
v___x_1285_ = lean_string_append(v___x_1282_, v___x_1284_);
lean_dec_ref(v___x_1284_);
v___x_1286_ = ((lean_object*)(l___private_Lake_Build_Package_0__Lake_Package_optFacetDetails___redArg___closed__4));
v___x_1287_ = lean_string_append(v___x_1285_, v___x_1286_);
v___x_1288_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1288_, 0, v___x_1287_);
lean_ctor_set(v___x_1288_, 1, v_a_1268_);
return v___x_1288_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Package_0__Lake_Package_optFacetDetails___redArg___boxed(lean_object* v_self_1289_, lean_object* v_facet_1290_, lean_object* v_a_1291_, lean_object* v_a_1292_, lean_object* v_a_1293_){
_start:
{
lean_object* v_res_1294_; 
v_res_1294_ = l___private_Lake_Build_Package_0__Lake_Package_optFacetDetails___redArg(v_self_1289_, v_facet_1290_, v_a_1291_, v_a_1292_);
lean_dec_ref(v_a_1291_);
return v_res_1294_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Package_0__Lake_Package_optFacetDetails(lean_object* v_self_1295_, lean_object* v_facet_1296_, lean_object* v_a_1297_, lean_object* v_a_1298_, lean_object* v_a_1299_, lean_object* v_a_1300_, lean_object* v_a_1301_, lean_object* v_a_1302_){
_start:
{
lean_object* v_toBuildConfig_1304_; uint8_t v_verbosity_1305_; lean_object* v___x_1306_; lean_object* v___x_1307_; uint8_t v___x_1308_; 
v_toBuildConfig_1304_ = lean_ctor_get(v_a_1301_, 0);
v_verbosity_1305_ = lean_ctor_get_uint8(v_toBuildConfig_1304_, sizeof(void*)*5 + 4);
v___x_1306_ = l_Lake_Verbosity_ctorIdx(v_verbosity_1305_);
v___x_1307_ = lean_obj_once(&l___private_Lake_Build_Package_0__Lake_Package_optFacetDetails___redArg___closed__0, &l___private_Lake_Build_Package_0__Lake_Package_optFacetDetails___redArg___closed__0_once, _init_l___private_Lake_Build_Package_0__Lake_Package_optFacetDetails___redArg___closed__0);
v___x_1308_ = lean_nat_dec_eq(v___x_1306_, v___x_1307_);
lean_dec(v___x_1306_);
if (v___x_1308_ == 0)
{
lean_object* v___x_1309_; lean_object* v___x_1310_; 
lean_dec(v_facet_1296_);
lean_dec_ref(v_self_1295_);
v___x_1309_ = ((lean_object*)(l___private_Lake_Build_Package_0__Lake_Package_optFacetDetails___redArg___closed__1));
v___x_1310_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1310_, 0, v___x_1309_);
lean_ctor_set(v___x_1310_, 1, v_a_1302_);
return v___x_1310_;
}
else
{
lean_object* v_baseName_1311_; lean_object* v___x_1312_; lean_object* v___x_1313_; lean_object* v___x_1314_; lean_object* v___x_1315_; lean_object* v___x_1316_; lean_object* v___x_1317_; lean_object* v___x_1318_; lean_object* v___x_1319_; lean_object* v___x_1320_; lean_object* v___x_1321_; lean_object* v___x_1322_; 
v_baseName_1311_ = lean_ctor_get(v_self_1295_, 1);
lean_inc(v_baseName_1311_);
lean_dec_ref(v_self_1295_);
v___x_1312_ = ((lean_object*)(l___private_Lake_Build_Package_0__Lake_Package_optFacetDetails___redArg___closed__2));
v___x_1313_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_baseName_1311_, v___x_1308_);
v___x_1314_ = lean_string_append(v___x_1312_, v___x_1313_);
lean_dec_ref(v___x_1313_);
v___x_1315_ = ((lean_object*)(l___private_Lake_Build_Package_0__Lake_Package_optFacetDetails___redArg___closed__3));
v___x_1316_ = lean_string_append(v___x_1314_, v___x_1315_);
v___x_1317_ = l_Lake_Name_eraseHead(v_facet_1296_);
v___x_1318_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_1317_, v___x_1308_);
v___x_1319_ = lean_string_append(v___x_1316_, v___x_1318_);
lean_dec_ref(v___x_1318_);
v___x_1320_ = ((lean_object*)(l___private_Lake_Build_Package_0__Lake_Package_optFacetDetails___redArg___closed__4));
v___x_1321_ = lean_string_append(v___x_1319_, v___x_1320_);
v___x_1322_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1322_, 0, v___x_1321_);
lean_ctor_set(v___x_1322_, 1, v_a_1302_);
return v___x_1322_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Package_0__Lake_Package_optFacetDetails___boxed(lean_object* v_self_1323_, lean_object* v_facet_1324_, lean_object* v_a_1325_, lean_object* v_a_1326_, lean_object* v_a_1327_, lean_object* v_a_1328_, lean_object* v_a_1329_, lean_object* v_a_1330_, lean_object* v_a_1331_){
_start:
{
lean_object* v_res_1332_; 
v_res_1332_ = l___private_Lake_Build_Package_0__Lake_Package_optFacetDetails(v_self_1323_, v_facet_1324_, v_a_1325_, v_a_1326_, v_a_1327_, v_a_1328_, v_a_1329_, v_a_1330_);
lean_dec_ref(v_a_1329_);
lean_dec(v_a_1328_);
lean_dec(v_a_1327_);
lean_dec(v_a_1326_);
lean_dec_ref(v_a_1325_);
return v_res_1332_;
}
}
static lean_object* _init_l___private_Lake_Build_Package_0__Lake_Package_maybeFetchBuildCacheWithWarning___lam__0___closed__2(void){
_start:
{
lean_object* v___x_1335_; lean_object* v___x_1336_; 
v___x_1335_ = l_Lake_Package_optReservoirBarrelFacet;
v___x_1336_ = l_Lake_Name_eraseHead(v___x_1335_);
return v___x_1336_;
}
}
static lean_object* _init_l___private_Lake_Build_Package_0__Lake_Package_maybeFetchBuildCacheWithWarning___lam__0___closed__3(void){
_start:
{
lean_object* v___x_1337_; lean_object* v___x_1338_; 
v___x_1337_ = l_Lake_Package_optGitHubReleaseFacet;
v___x_1338_ = l_Lake_Name_eraseHead(v___x_1337_);
return v___x_1338_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Package_0__Lake_Package_maybeFetchBuildCacheWithWarning___lam__0(lean_object* v_self_1339_, uint8_t v_success_1340_, lean_object* v___y_1341_, lean_object* v___y_1342_, lean_object* v___y_1343_, lean_object* v___y_1344_, lean_object* v___y_1345_, lean_object* v___y_1346_){
_start:
{
lean_object* v_a_1349_; lean_object* v_a_1350_; lean_object* v_a_1371_; lean_object* v_a_1372_; 
if (v_success_1340_ == 0)
{
lean_object* v_config_1392_; uint8_t v_preferReleaseBuild_1393_; 
v_config_1392_ = lean_ctor_get(v_self_1339_, 6);
v_preferReleaseBuild_1393_ = lean_ctor_get_uint8(v_config_1392_, sizeof(void*)*28 + 2);
if (v_preferReleaseBuild_1393_ == 0)
{
lean_object* v_toBuildConfig_1394_; lean_object* v_baseName_1395_; uint8_t v_verbosity_1396_; lean_object* v___x_1397_; lean_object* v___x_1398_; uint8_t v___x_1399_; 
v_toBuildConfig_1394_ = lean_ctor_get(v___y_1345_, 0);
v_baseName_1395_ = lean_ctor_get(v_self_1339_, 1);
lean_inc(v_baseName_1395_);
lean_dec_ref(v_self_1339_);
v_verbosity_1396_ = lean_ctor_get_uint8(v_toBuildConfig_1394_, sizeof(void*)*5 + 4);
v___x_1397_ = l_Lake_Verbosity_ctorIdx(v_verbosity_1396_);
v___x_1398_ = lean_obj_once(&l___private_Lake_Build_Package_0__Lake_Package_optFacetDetails___redArg___closed__0, &l___private_Lake_Build_Package_0__Lake_Package_optFacetDetails___redArg___closed__0_once, _init_l___private_Lake_Build_Package_0__Lake_Package_optFacetDetails___redArg___closed__0);
v___x_1399_ = lean_nat_dec_eq(v___x_1397_, v___x_1398_);
lean_dec(v___x_1397_);
if (v___x_1399_ == 0)
{
lean_object* v___x_1400_; 
lean_dec(v_baseName_1395_);
v___x_1400_ = ((lean_object*)(l___private_Lake_Build_Package_0__Lake_Package_optFacetDetails___redArg___closed__1));
v_a_1349_ = v___x_1400_;
v_a_1350_ = v___y_1346_;
goto v___jp_1348_;
}
else
{
lean_object* v___x_1401_; lean_object* v___x_1402_; lean_object* v___x_1403_; lean_object* v___x_1404_; lean_object* v___x_1405_; lean_object* v___x_1406_; lean_object* v___x_1407_; lean_object* v___x_1408_; lean_object* v___x_1409_; lean_object* v___x_1410_; 
v___x_1401_ = ((lean_object*)(l___private_Lake_Build_Package_0__Lake_Package_optFacetDetails___redArg___closed__2));
v___x_1402_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_baseName_1395_, v___x_1399_);
v___x_1403_ = lean_string_append(v___x_1401_, v___x_1402_);
lean_dec_ref(v___x_1402_);
v___x_1404_ = ((lean_object*)(l___private_Lake_Build_Package_0__Lake_Package_optFacetDetails___redArg___closed__3));
v___x_1405_ = lean_string_append(v___x_1403_, v___x_1404_);
v___x_1406_ = lean_obj_once(&l___private_Lake_Build_Package_0__Lake_Package_maybeFetchBuildCacheWithWarning___lam__0___closed__2, &l___private_Lake_Build_Package_0__Lake_Package_maybeFetchBuildCacheWithWarning___lam__0___closed__2_once, _init_l___private_Lake_Build_Package_0__Lake_Package_maybeFetchBuildCacheWithWarning___lam__0___closed__2);
v___x_1407_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_1406_, v___x_1399_);
v___x_1408_ = lean_string_append(v___x_1405_, v___x_1407_);
lean_dec_ref(v___x_1407_);
v___x_1409_ = ((lean_object*)(l___private_Lake_Build_Package_0__Lake_Package_optFacetDetails___redArg___closed__4));
v___x_1410_ = lean_string_append(v___x_1408_, v___x_1409_);
v_a_1349_ = v___x_1410_;
v_a_1350_ = v___y_1346_;
goto v___jp_1348_;
}
}
else
{
lean_object* v_toBuildConfig_1411_; lean_object* v_baseName_1412_; uint8_t v_verbosity_1413_; lean_object* v___x_1414_; lean_object* v___x_1415_; uint8_t v___x_1416_; 
v_toBuildConfig_1411_ = lean_ctor_get(v___y_1345_, 0);
v_baseName_1412_ = lean_ctor_get(v_self_1339_, 1);
lean_inc(v_baseName_1412_);
lean_dec_ref(v_self_1339_);
v_verbosity_1413_ = lean_ctor_get_uint8(v_toBuildConfig_1411_, sizeof(void*)*5 + 4);
v___x_1414_ = l_Lake_Verbosity_ctorIdx(v_verbosity_1413_);
v___x_1415_ = lean_obj_once(&l___private_Lake_Build_Package_0__Lake_Package_optFacetDetails___redArg___closed__0, &l___private_Lake_Build_Package_0__Lake_Package_optFacetDetails___redArg___closed__0_once, _init_l___private_Lake_Build_Package_0__Lake_Package_optFacetDetails___redArg___closed__0);
v___x_1416_ = lean_nat_dec_eq(v___x_1414_, v___x_1415_);
lean_dec(v___x_1414_);
if (v___x_1416_ == 0)
{
lean_object* v___x_1417_; 
lean_dec(v_baseName_1412_);
v___x_1417_ = ((lean_object*)(l___private_Lake_Build_Package_0__Lake_Package_optFacetDetails___redArg___closed__1));
v_a_1371_ = v___x_1417_;
v_a_1372_ = v___y_1346_;
goto v___jp_1370_;
}
else
{
lean_object* v___x_1418_; lean_object* v___x_1419_; lean_object* v___x_1420_; lean_object* v___x_1421_; lean_object* v___x_1422_; lean_object* v___x_1423_; lean_object* v___x_1424_; lean_object* v___x_1425_; lean_object* v___x_1426_; lean_object* v___x_1427_; 
v___x_1418_ = ((lean_object*)(l___private_Lake_Build_Package_0__Lake_Package_optFacetDetails___redArg___closed__2));
v___x_1419_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_baseName_1412_, v___x_1416_);
v___x_1420_ = lean_string_append(v___x_1418_, v___x_1419_);
lean_dec_ref(v___x_1419_);
v___x_1421_ = ((lean_object*)(l___private_Lake_Build_Package_0__Lake_Package_optFacetDetails___redArg___closed__3));
v___x_1422_ = lean_string_append(v___x_1420_, v___x_1421_);
v___x_1423_ = lean_obj_once(&l___private_Lake_Build_Package_0__Lake_Package_maybeFetchBuildCacheWithWarning___lam__0___closed__3, &l___private_Lake_Build_Package_0__Lake_Package_maybeFetchBuildCacheWithWarning___lam__0___closed__3_once, _init_l___private_Lake_Build_Package_0__Lake_Package_maybeFetchBuildCacheWithWarning___lam__0___closed__3);
v___x_1424_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_1423_, v___x_1416_);
v___x_1425_ = lean_string_append(v___x_1422_, v___x_1424_);
lean_dec_ref(v___x_1424_);
v___x_1426_ = ((lean_object*)(l___private_Lake_Build_Package_0__Lake_Package_optFacetDetails___redArg___closed__4));
v___x_1427_ = lean_string_append(v___x_1425_, v___x_1426_);
v_a_1371_ = v___x_1427_;
v_a_1372_ = v___y_1346_;
goto v___jp_1370_;
}
}
}
else
{
lean_object* v___x_1428_; lean_object* v___x_1429_; 
lean_dec_ref(v_self_1339_);
v___x_1428_ = lean_box(0);
v___x_1429_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1429_, 0, v___x_1428_);
lean_ctor_set(v___x_1429_, 1, v___y_1346_);
return v___x_1429_;
}
v___jp_1348_:
{
lean_object* v_log_1351_; uint8_t v_action_1352_; uint8_t v_wantsRebuild_1353_; lean_object* v_trace_1354_; lean_object* v_buildTime_1355_; lean_object* v___x_1357_; uint8_t v_isShared_1358_; uint8_t v_isSharedCheck_1369_; 
v_log_1351_ = lean_ctor_get(v_a_1350_, 0);
v_action_1352_ = lean_ctor_get_uint8(v_a_1350_, sizeof(void*)*3);
v_wantsRebuild_1353_ = lean_ctor_get_uint8(v_a_1350_, sizeof(void*)*3 + 1);
v_trace_1354_ = lean_ctor_get(v_a_1350_, 1);
v_buildTime_1355_ = lean_ctor_get(v_a_1350_, 2);
v_isSharedCheck_1369_ = !lean_is_exclusive(v_a_1350_);
if (v_isSharedCheck_1369_ == 0)
{
v___x_1357_ = v_a_1350_;
v_isShared_1358_ = v_isSharedCheck_1369_;
goto v_resetjp_1356_;
}
else
{
lean_inc(v_buildTime_1355_);
lean_inc(v_trace_1354_);
lean_inc(v_log_1351_);
lean_dec(v_a_1350_);
v___x_1357_ = lean_box(0);
v_isShared_1358_ = v_isSharedCheck_1369_;
goto v_resetjp_1356_;
}
v_resetjp_1356_:
{
lean_object* v___x_1359_; lean_object* v___x_1360_; uint8_t v___x_1361_; lean_object* v___x_1362_; lean_object* v___x_1363_; lean_object* v___x_1364_; lean_object* v___x_1366_; 
v___x_1359_ = ((lean_object*)(l___private_Lake_Build_Package_0__Lake_Package_maybeFetchBuildCacheWithWarning___lam__0___closed__0));
v___x_1360_ = lean_string_append(v___x_1359_, v_a_1349_);
lean_dec_ref(v_a_1349_);
v___x_1361_ = 0;
v___x_1362_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1362_, 0, v___x_1360_);
lean_ctor_set_uint8(v___x_1362_, sizeof(void*)*1, v___x_1361_);
v___x_1363_ = lean_box(0);
v___x_1364_ = lean_array_push(v_log_1351_, v___x_1362_);
if (v_isShared_1358_ == 0)
{
lean_ctor_set(v___x_1357_, 0, v___x_1364_);
v___x_1366_ = v___x_1357_;
goto v_reusejp_1365_;
}
else
{
lean_object* v_reuseFailAlloc_1368_; 
v_reuseFailAlloc_1368_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_1368_, 0, v___x_1364_);
lean_ctor_set(v_reuseFailAlloc_1368_, 1, v_trace_1354_);
lean_ctor_set(v_reuseFailAlloc_1368_, 2, v_buildTime_1355_);
lean_ctor_set_uint8(v_reuseFailAlloc_1368_, sizeof(void*)*3, v_action_1352_);
lean_ctor_set_uint8(v_reuseFailAlloc_1368_, sizeof(void*)*3 + 1, v_wantsRebuild_1353_);
v___x_1366_ = v_reuseFailAlloc_1368_;
goto v_reusejp_1365_;
}
v_reusejp_1365_:
{
lean_object* v___x_1367_; 
v___x_1367_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1367_, 0, v___x_1363_);
lean_ctor_set(v___x_1367_, 1, v___x_1366_);
return v___x_1367_;
}
}
}
v___jp_1370_:
{
lean_object* v_log_1373_; uint8_t v_action_1374_; uint8_t v_wantsRebuild_1375_; lean_object* v_trace_1376_; lean_object* v_buildTime_1377_; lean_object* v___x_1379_; uint8_t v_isShared_1380_; uint8_t v_isSharedCheck_1391_; 
v_log_1373_ = lean_ctor_get(v_a_1372_, 0);
v_action_1374_ = lean_ctor_get_uint8(v_a_1372_, sizeof(void*)*3);
v_wantsRebuild_1375_ = lean_ctor_get_uint8(v_a_1372_, sizeof(void*)*3 + 1);
v_trace_1376_ = lean_ctor_get(v_a_1372_, 1);
v_buildTime_1377_ = lean_ctor_get(v_a_1372_, 2);
v_isSharedCheck_1391_ = !lean_is_exclusive(v_a_1372_);
if (v_isSharedCheck_1391_ == 0)
{
v___x_1379_ = v_a_1372_;
v_isShared_1380_ = v_isSharedCheck_1391_;
goto v_resetjp_1378_;
}
else
{
lean_inc(v_buildTime_1377_);
lean_inc(v_trace_1376_);
lean_inc(v_log_1373_);
lean_dec(v_a_1372_);
v___x_1379_ = lean_box(0);
v_isShared_1380_ = v_isSharedCheck_1391_;
goto v_resetjp_1378_;
}
v_resetjp_1378_:
{
lean_object* v___x_1381_; lean_object* v___x_1382_; uint8_t v___x_1383_; lean_object* v___x_1384_; lean_object* v___x_1385_; lean_object* v___x_1386_; lean_object* v___x_1388_; 
v___x_1381_ = ((lean_object*)(l___private_Lake_Build_Package_0__Lake_Package_maybeFetchBuildCacheWithWarning___lam__0___closed__1));
v___x_1382_ = lean_string_append(v___x_1381_, v_a_1371_);
lean_dec_ref(v_a_1371_);
v___x_1383_ = 2;
v___x_1384_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1384_, 0, v___x_1382_);
lean_ctor_set_uint8(v___x_1384_, sizeof(void*)*1, v___x_1383_);
v___x_1385_ = lean_box(0);
v___x_1386_ = lean_array_push(v_log_1373_, v___x_1384_);
if (v_isShared_1380_ == 0)
{
lean_ctor_set(v___x_1379_, 0, v___x_1386_);
v___x_1388_ = v___x_1379_;
goto v_reusejp_1387_;
}
else
{
lean_object* v_reuseFailAlloc_1390_; 
v_reuseFailAlloc_1390_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_1390_, 0, v___x_1386_);
lean_ctor_set(v_reuseFailAlloc_1390_, 1, v_trace_1376_);
lean_ctor_set(v_reuseFailAlloc_1390_, 2, v_buildTime_1377_);
lean_ctor_set_uint8(v_reuseFailAlloc_1390_, sizeof(void*)*3, v_action_1374_);
lean_ctor_set_uint8(v_reuseFailAlloc_1390_, sizeof(void*)*3 + 1, v_wantsRebuild_1375_);
v___x_1388_ = v_reuseFailAlloc_1390_;
goto v_reusejp_1387_;
}
v_reusejp_1387_:
{
lean_object* v___x_1389_; 
v___x_1389_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1389_, 0, v___x_1385_);
lean_ctor_set(v___x_1389_, 1, v___x_1388_);
return v___x_1389_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Package_0__Lake_Package_maybeFetchBuildCacheWithWarning___lam__0___boxed(lean_object* v_self_1430_, lean_object* v_success_1431_, lean_object* v___y_1432_, lean_object* v___y_1433_, lean_object* v___y_1434_, lean_object* v___y_1435_, lean_object* v___y_1436_, lean_object* v___y_1437_, lean_object* v___y_1438_){
_start:
{
uint8_t v_success_boxed_1439_; lean_object* v_res_1440_; 
v_success_boxed_1439_ = lean_unbox(v_success_1431_);
v_res_1440_ = l___private_Lake_Build_Package_0__Lake_Package_maybeFetchBuildCacheWithWarning___lam__0(v_self_1430_, v_success_boxed_1439_, v___y_1432_, v___y_1433_, v___y_1434_, v___y_1435_, v___y_1436_, v___y_1437_);
lean_dec_ref(v___y_1436_);
lean_dec(v___y_1435_);
lean_dec(v___y_1434_);
lean_dec(v___y_1433_);
lean_dec_ref(v___y_1432_);
return v_res_1440_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Package_0__Lake_Package_maybeFetchBuildCacheWithWarning(lean_object* v_self_1441_, lean_object* v_a_1442_, lean_object* v_a_1443_, lean_object* v_a_1444_, lean_object* v_a_1445_, lean_object* v_a_1446_, lean_object* v_a_1447_){
_start:
{
lean_object* v___f_1449_; lean_object* v___x_1450_; lean_object* v___x_1451_; 
lean_inc_ref(v_self_1441_);
v___f_1449_ = lean_alloc_closure((void*)(l___private_Lake_Build_Package_0__Lake_Package_maybeFetchBuildCacheWithWarning___lam__0___boxed), 9, 1);
lean_closure_set(v___f_1449_, 0, v_self_1441_);
v___x_1450_ = l_Lake_instDataKindUnit;
lean_inc_ref(v_a_1442_);
v___x_1451_ = l___private_Lake_Build_Package_0__Lake_Package_maybeFetchBuildCache(v_self_1441_, v_a_1442_, v_a_1443_, v_a_1444_, v_a_1445_, v_a_1446_, v_a_1447_);
if (lean_obj_tag(v___x_1451_) == 0)
{
lean_object* v_a_1452_; lean_object* v_a_1453_; lean_object* v___x_1455_; uint8_t v_isShared_1456_; uint8_t v_isSharedCheck_1464_; 
v_a_1452_ = lean_ctor_get(v___x_1451_, 0);
v_a_1453_ = lean_ctor_get(v___x_1451_, 1);
v_isSharedCheck_1464_ = !lean_is_exclusive(v___x_1451_);
if (v_isSharedCheck_1464_ == 0)
{
v___x_1455_ = v___x_1451_;
v_isShared_1456_ = v_isSharedCheck_1464_;
goto v_resetjp_1454_;
}
else
{
lean_inc(v_a_1453_);
lean_inc(v_a_1452_);
lean_dec(v___x_1451_);
v___x_1455_ = lean_box(0);
v_isShared_1456_ = v_isSharedCheck_1464_;
goto v_resetjp_1454_;
}
v_resetjp_1454_:
{
lean_object* v___x_1457_; uint8_t v___x_1458_; lean_object* v___x_1459_; lean_object* v___x_1460_; lean_object* v___x_1462_; 
v___x_1457_ = lean_unsigned_to_nat(0u);
v___x_1458_ = 0;
v___x_1459_ = lean_obj_once(&l___private_Lake_Build_Package_0__Lake_Package_recFetchDeps___redArg___closed__4, &l___private_Lake_Build_Package_0__Lake_Package_recFetchDeps___redArg___closed__4_once, _init_l___private_Lake_Build_Package_0__Lake_Package_recFetchDeps___redArg___closed__4);
v___x_1460_ = l_Lake_Job_mapM___redArg(v___x_1450_, v_a_1452_, v___f_1449_, v___x_1457_, v___x_1458_, v_a_1442_, v_a_1443_, v_a_1444_, v_a_1445_, v_a_1446_, v___x_1459_);
if (v_isShared_1456_ == 0)
{
lean_ctor_set(v___x_1455_, 0, v___x_1460_);
v___x_1462_ = v___x_1455_;
goto v_reusejp_1461_;
}
else
{
lean_object* v_reuseFailAlloc_1463_; 
v_reuseFailAlloc_1463_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1463_, 0, v___x_1460_);
lean_ctor_set(v_reuseFailAlloc_1463_, 1, v_a_1453_);
v___x_1462_ = v_reuseFailAlloc_1463_;
goto v_reusejp_1461_;
}
v_reusejp_1461_:
{
return v___x_1462_;
}
}
}
else
{
lean_object* v_a_1465_; lean_object* v_a_1466_; lean_object* v___x_1468_; uint8_t v_isShared_1469_; uint8_t v_isSharedCheck_1473_; 
lean_dec_ref(v___f_1449_);
lean_dec_ref(v_a_1442_);
v_a_1465_ = lean_ctor_get(v___x_1451_, 0);
v_a_1466_ = lean_ctor_get(v___x_1451_, 1);
v_isSharedCheck_1473_ = !lean_is_exclusive(v___x_1451_);
if (v_isSharedCheck_1473_ == 0)
{
v___x_1468_ = v___x_1451_;
v_isShared_1469_ = v_isSharedCheck_1473_;
goto v_resetjp_1467_;
}
else
{
lean_inc(v_a_1466_);
lean_inc(v_a_1465_);
lean_dec(v___x_1451_);
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
v_reuseFailAlloc_1472_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1472_, 0, v_a_1465_);
lean_ctor_set(v_reuseFailAlloc_1472_, 1, v_a_1466_);
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
LEAN_EXPORT lean_object* l___private_Lake_Build_Package_0__Lake_Package_maybeFetchBuildCacheWithWarning___boxed(lean_object* v_self_1474_, lean_object* v_a_1475_, lean_object* v_a_1476_, lean_object* v_a_1477_, lean_object* v_a_1478_, lean_object* v_a_1479_, lean_object* v_a_1480_, lean_object* v_a_1481_){
_start:
{
lean_object* v_res_1482_; 
v_res_1482_ = l___private_Lake_Build_Package_0__Lake_Package_maybeFetchBuildCacheWithWarning(v_self_1474_, v_a_1475_, v_a_1476_, v_a_1477_, v_a_1478_, v_a_1479_, v_a_1480_);
lean_dec_ref(v_a_1479_);
lean_dec(v_a_1478_);
lean_dec(v_a_1477_);
lean_dec(v_a_1476_);
return v_res_1482_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Package_0__Lake_Package_recBuildExtraDepTargets_spec__0(lean_object* v_self_1483_, lean_object* v_as_1484_, size_t v_sz_1485_, size_t v_i_1486_, lean_object* v_b_1487_, lean_object* v___y_1488_, lean_object* v___y_1489_, lean_object* v___y_1490_, lean_object* v___y_1491_, lean_object* v___y_1492_, lean_object* v___y_1493_){
_start:
{
uint8_t v___x_1495_; 
v___x_1495_ = lean_usize_dec_lt(v_i_1486_, v_sz_1485_);
if (v___x_1495_ == 0)
{
lean_object* v___x_1496_; 
lean_dec_ref(v___y_1488_);
lean_dec_ref(v_self_1483_);
v___x_1496_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1496_, 0, v_b_1487_);
lean_ctor_set(v___x_1496_, 1, v___y_1493_);
return v___x_1496_;
}
else
{
lean_object* v_a_1497_; lean_object* v___x_1498_; 
v_a_1497_ = lean_array_uget_borrowed(v_as_1484_, v_i_1486_);
lean_inc_ref(v___y_1488_);
lean_inc(v_a_1497_);
lean_inc_ref(v_self_1483_);
v___x_1498_ = l_Lake_Package_fetchTargetJob(v_self_1483_, v_a_1497_, v___y_1488_, v___y_1489_, v___y_1490_, v___y_1491_, v___y_1492_, v___y_1493_);
if (lean_obj_tag(v___x_1498_) == 0)
{
lean_object* v_a_1499_; lean_object* v_a_1500_; lean_object* v___x_1501_; size_t v___x_1502_; size_t v___x_1503_; 
v_a_1499_ = lean_ctor_get(v___x_1498_, 0);
lean_inc(v_a_1499_);
v_a_1500_ = lean_ctor_get(v___x_1498_, 1);
lean_inc(v_a_1500_);
lean_dec_ref_known(v___x_1498_, 2);
v___x_1501_ = l_Lake_Job_mix___redArg(v_b_1487_, v_a_1499_);
v___x_1502_ = ((size_t)1ULL);
v___x_1503_ = lean_usize_add(v_i_1486_, v___x_1502_);
v_i_1486_ = v___x_1503_;
v_b_1487_ = v___x_1501_;
v___y_1493_ = v_a_1500_;
goto _start;
}
else
{
lean_object* v_a_1505_; lean_object* v_a_1506_; lean_object* v___x_1508_; uint8_t v_isShared_1509_; uint8_t v_isSharedCheck_1513_; 
lean_dec_ref(v___y_1488_);
lean_dec_ref(v_b_1487_);
lean_dec_ref(v_self_1483_);
v_a_1505_ = lean_ctor_get(v___x_1498_, 0);
v_a_1506_ = lean_ctor_get(v___x_1498_, 1);
v_isSharedCheck_1513_ = !lean_is_exclusive(v___x_1498_);
if (v_isSharedCheck_1513_ == 0)
{
v___x_1508_ = v___x_1498_;
v_isShared_1509_ = v_isSharedCheck_1513_;
goto v_resetjp_1507_;
}
else
{
lean_inc(v_a_1506_);
lean_inc(v_a_1505_);
lean_dec(v___x_1498_);
v___x_1508_ = lean_box(0);
v_isShared_1509_ = v_isSharedCheck_1513_;
goto v_resetjp_1507_;
}
v_resetjp_1507_:
{
lean_object* v___x_1511_; 
if (v_isShared_1509_ == 0)
{
v___x_1511_ = v___x_1508_;
goto v_reusejp_1510_;
}
else
{
lean_object* v_reuseFailAlloc_1512_; 
v_reuseFailAlloc_1512_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1512_, 0, v_a_1505_);
lean_ctor_set(v_reuseFailAlloc_1512_, 1, v_a_1506_);
v___x_1511_ = v_reuseFailAlloc_1512_;
goto v_reusejp_1510_;
}
v_reusejp_1510_:
{
return v___x_1511_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Package_0__Lake_Package_recBuildExtraDepTargets_spec__0___boxed(lean_object* v_self_1514_, lean_object* v_as_1515_, lean_object* v_sz_1516_, lean_object* v_i_1517_, lean_object* v_b_1518_, lean_object* v___y_1519_, lean_object* v___y_1520_, lean_object* v___y_1521_, lean_object* v___y_1522_, lean_object* v___y_1523_, lean_object* v___y_1524_, lean_object* v___y_1525_){
_start:
{
size_t v_sz_boxed_1526_; size_t v_i_boxed_1527_; lean_object* v_res_1528_; 
v_sz_boxed_1526_ = lean_unbox_usize(v_sz_1516_);
lean_dec(v_sz_1516_);
v_i_boxed_1527_ = lean_unbox_usize(v_i_1517_);
lean_dec(v_i_1517_);
v_res_1528_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Package_0__Lake_Package_recBuildExtraDepTargets_spec__0(v_self_1514_, v_as_1515_, v_sz_boxed_1526_, v_i_boxed_1527_, v_b_1518_, v___y_1519_, v___y_1520_, v___y_1521_, v___y_1522_, v___y_1523_, v___y_1524_);
lean_dec_ref(v___y_1523_);
lean_dec(v___y_1522_);
lean_dec(v___y_1521_);
lean_dec(v___y_1520_);
lean_dec_ref(v_as_1515_);
return v_res_1528_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Package_0__Lake_Package_recBuildExtraDepTargets___lam__0(lean_object* v_config_1529_, lean_object* v_self_1530_, lean_object* v_____r_1531_, lean_object* v_job_1532_, lean_object* v___y_1533_, lean_object* v___y_1534_, lean_object* v___y_1535_, lean_object* v___y_1536_, lean_object* v___y_1537_, lean_object* v___y_1538_){
_start:
{
lean_object* v_extraDepTargets_1540_; size_t v_sz_1541_; size_t v___x_1542_; lean_object* v___x_1543_; 
v_extraDepTargets_1540_ = lean_ctor_get(v_config_1529_, 2);
v_sz_1541_ = lean_array_size(v_extraDepTargets_1540_);
v___x_1542_ = ((size_t)0ULL);
v___x_1543_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Package_0__Lake_Package_recBuildExtraDepTargets_spec__0(v_self_1530_, v_extraDepTargets_1540_, v_sz_1541_, v___x_1542_, v_job_1532_, v___y_1533_, v___y_1534_, v___y_1535_, v___y_1536_, v___y_1537_, v___y_1538_);
return v___x_1543_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Package_0__Lake_Package_recBuildExtraDepTargets___lam__0___boxed(lean_object* v_config_1544_, lean_object* v_self_1545_, lean_object* v_____r_1546_, lean_object* v_job_1547_, lean_object* v___y_1548_, lean_object* v___y_1549_, lean_object* v___y_1550_, lean_object* v___y_1551_, lean_object* v___y_1552_, lean_object* v___y_1553_, lean_object* v___y_1554_){
_start:
{
lean_object* v_res_1555_; 
v_res_1555_ = l___private_Lake_Build_Package_0__Lake_Package_recBuildExtraDepTargets___lam__0(v_config_1544_, v_self_1545_, v_____r_1546_, v_job_1547_, v___y_1548_, v___y_1549_, v___y_1550_, v___y_1551_, v___y_1552_, v___y_1553_);
lean_dec_ref(v___y_1552_);
lean_dec(v___y_1551_);
lean_dec(v___y_1550_);
lean_dec(v___y_1549_);
lean_dec_ref(v_config_1544_);
return v_res_1555_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Package_0__Lake_Package_recBuildExtraDepTargets___lam__1(uint8_t v___x_1556_, lean_object* v_self_1557_, lean_object* v_job_1558_, lean_object* v___f_1559_, lean_object* v___x_1560_, lean_object* v___y_1561_, lean_object* v___y_1562_, lean_object* v___y_1563_, lean_object* v___y_1564_, lean_object* v___y_1565_, lean_object* v___y_1566_){
_start:
{
if (v___x_1556_ == 0)
{
lean_object* v___x_1568_; 
lean_inc_ref(v___y_1561_);
v___x_1568_ = l___private_Lake_Build_Package_0__Lake_Package_maybeFetchBuildCacheWithWarning(v_self_1557_, v___y_1561_, v___y_1562_, v___y_1563_, v___y_1564_, v___y_1565_, v___y_1566_);
if (lean_obj_tag(v___x_1568_) == 0)
{
lean_object* v_a_1569_; lean_object* v_a_1570_; lean_object* v___x_1571_; lean_object* v___x_1572_; 
v_a_1569_ = lean_ctor_get(v___x_1568_, 0);
lean_inc(v_a_1569_);
v_a_1570_ = lean_ctor_get(v___x_1568_, 1);
lean_inc(v_a_1570_);
lean_dec_ref_known(v___x_1568_, 2);
v___x_1571_ = l_Lake_Job_add___redArg(v_job_1558_, v_a_1569_);
lean_inc_ref(v___y_1565_);
lean_inc(v___y_1564_);
lean_inc(v___y_1563_);
lean_inc(v___y_1562_);
v___x_1572_ = lean_apply_9(v___f_1559_, v___x_1560_, v___x_1571_, v___y_1561_, v___y_1562_, v___y_1563_, v___y_1564_, v___y_1565_, v_a_1570_, lean_box(0));
return v___x_1572_;
}
else
{
lean_dec_ref(v___y_1561_);
lean_dec_ref(v___f_1559_);
lean_dec_ref(v_job_1558_);
return v___x_1568_;
}
}
else
{
lean_object* v___x_1573_; 
lean_dec_ref(v_self_1557_);
lean_inc_ref(v___y_1565_);
lean_inc(v___y_1564_);
lean_inc(v___y_1563_);
lean_inc(v___y_1562_);
v___x_1573_ = lean_apply_9(v___f_1559_, v___x_1560_, v_job_1558_, v___y_1561_, v___y_1562_, v___y_1563_, v___y_1564_, v___y_1565_, v___y_1566_, lean_box(0));
return v___x_1573_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Package_0__Lake_Package_recBuildExtraDepTargets___lam__1___boxed(lean_object* v___x_1574_, lean_object* v_self_1575_, lean_object* v_job_1576_, lean_object* v___f_1577_, lean_object* v___x_1578_, lean_object* v___y_1579_, lean_object* v___y_1580_, lean_object* v___y_1581_, lean_object* v___y_1582_, lean_object* v___y_1583_, lean_object* v___y_1584_, lean_object* v___y_1585_){
_start:
{
uint8_t v___x_4126__boxed_1586_; lean_object* v_res_1587_; 
v___x_4126__boxed_1586_ = lean_unbox(v___x_1574_);
v_res_1587_ = l___private_Lake_Build_Package_0__Lake_Package_recBuildExtraDepTargets___lam__1(v___x_4126__boxed_1586_, v_self_1575_, v_job_1576_, v___f_1577_, v___x_1578_, v___y_1579_, v___y_1580_, v___y_1581_, v___y_1582_, v___y_1583_, v___y_1584_);
lean_dec_ref(v___y_1583_);
lean_dec(v___y_1582_);
lean_dec(v___y_1581_);
lean_dec(v___y_1580_);
return v_res_1587_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Package_0__Lake_Package_recBuildExtraDepTargets(lean_object* v_self_1590_, lean_object* v_a_1591_, lean_object* v_a_1592_, lean_object* v_a_1593_, lean_object* v_a_1594_, lean_object* v_a_1595_, lean_object* v_a_1596_){
_start:
{
lean_object* v_wsIdx_1598_; lean_object* v_baseName_1599_; lean_object* v_config_1600_; lean_object* v___f_1601_; lean_object* v___x_1602_; uint8_t v___x_1603_; lean_object* v___x_1604_; lean_object* v___x_1605_; lean_object* v___x_1606_; lean_object* v___x_1607_; lean_object* v___x_1608_; lean_object* v___x_1609_; lean_object* v___x_1610_; lean_object* v___x_1611_; lean_object* v___x_1612_; lean_object* v___x_1613_; uint8_t v___x_1614_; uint8_t v___x_1615_; lean_object* v___x_1616_; lean_object* v___x_1617_; lean_object* v___x_1618_; lean_object* v___x_1619_; lean_object* v___x_1620_; lean_object* v_job_1621_; uint8_t v___x_1622_; lean_object* v___x_1623_; lean_object* v___y_1624_; lean_object* v___x_1625_; 
v_wsIdx_1598_ = lean_ctor_get(v_self_1590_, 0);
v_baseName_1599_ = lean_ctor_get(v_self_1590_, 1);
v_config_1600_ = lean_ctor_get(v_self_1590_, 6);
lean_inc_ref(v_self_1590_);
lean_inc_ref(v_config_1600_);
v___f_1601_ = lean_alloc_closure((void*)(l___private_Lake_Build_Package_0__Lake_Package_recBuildExtraDepTargets___lam__0___boxed), 11, 2);
lean_closure_set(v___f_1601_, 0, v_config_1600_);
lean_closure_set(v___f_1601_, 1, v_self_1590_);
v___x_1602_ = l_Lake_instDataKindUnit;
v___x_1603_ = 1;
lean_inc(v_baseName_1599_);
v___x_1604_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_baseName_1599_, v___x_1603_);
v___x_1605_ = ((lean_object*)(l___private_Lake_Build_Package_0__Lake_Package_recBuildExtraDepTargets___closed__0));
lean_inc_ref(v___x_1604_);
v___x_1606_ = lean_string_append(v___x_1604_, v___x_1605_);
v___x_1607_ = ((lean_object*)(l___private_Lake_Build_Package_0__Lake_Package_recBuildExtraDepTargets___closed__1));
v___x_1608_ = lean_string_append(v___x_1607_, v___x_1604_);
lean_dec_ref(v___x_1604_);
v___x_1609_ = lean_string_append(v___x_1608_, v___x_1605_);
v___x_1610_ = lean_box(0);
v___x_1611_ = lean_obj_once(&l___private_Lake_Build_Package_0__Lake_Package_recFetchDeps___redArg___closed__0, &l___private_Lake_Build_Package_0__Lake_Package_recFetchDeps___redArg___closed__0_once, _init_l___private_Lake_Build_Package_0__Lake_Package_recFetchDeps___redArg___closed__0);
v___x_1612_ = lean_unsigned_to_nat(0u);
v___x_1613_ = ((lean_object*)(l___private_Lake_Build_Package_0__Lake_Package_recFetchDeps___redArg___closed__1));
v___x_1614_ = 0;
v___x_1615_ = 0;
v___x_1616_ = l_Lake_BuildTrace_nil(v___x_1609_);
v___x_1617_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_1617_, 0, v___x_1613_);
lean_ctor_set(v___x_1617_, 1, v___x_1616_);
lean_ctor_set(v___x_1617_, 2, v___x_1612_);
lean_ctor_set_uint8(v___x_1617_, sizeof(void*)*3, v___x_1614_);
lean_ctor_set_uint8(v___x_1617_, sizeof(void*)*3 + 1, v___x_1615_);
v___x_1618_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1618_, 0, v___x_1610_);
lean_ctor_set(v___x_1618_, 1, v___x_1617_);
v___x_1619_ = lean_task_pure(v___x_1618_);
v___x_1620_ = ((lean_object*)(l___private_Lake_Build_Package_0__Lake_Package_recFetchDeps___redArg___closed__2));
v_job_1621_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_job_1621_, 0, v___x_1619_);
lean_ctor_set(v_job_1621_, 1, v___x_1611_);
lean_ctor_set(v_job_1621_, 2, v___x_1620_);
lean_ctor_set_uint8(v_job_1621_, sizeof(void*)*3, v___x_1615_);
v___x_1622_ = lean_nat_dec_eq(v_wsIdx_1598_, v___x_1612_);
v___x_1623_ = lean_box(v___x_1622_);
v___y_1624_ = lean_alloc_closure((void*)(l___private_Lake_Build_Package_0__Lake_Package_recBuildExtraDepTargets___lam__1___boxed), 12, 5);
lean_closure_set(v___y_1624_, 0, v___x_1623_);
lean_closure_set(v___y_1624_, 1, v_self_1590_);
lean_closure_set(v___y_1624_, 2, v_job_1621_);
lean_closure_set(v___y_1624_, 3, v___f_1601_);
lean_closure_set(v___y_1624_, 4, v___x_1610_);
v___x_1625_ = l_Lake_ensureJob___redArg(v___x_1602_, v___y_1624_, v_a_1591_, v_a_1592_, v_a_1593_, v_a_1594_, v_a_1595_, v_a_1596_);
if (lean_obj_tag(v___x_1625_) == 0)
{
lean_object* v_a_1626_; lean_object* v_a_1627_; lean_object* v___x_1629_; uint8_t v_isShared_1630_; uint8_t v_isSharedCheck_1650_; 
v_a_1626_ = lean_ctor_get(v___x_1625_, 0);
v_a_1627_ = lean_ctor_get(v___x_1625_, 1);
v_isSharedCheck_1650_ = !lean_is_exclusive(v___x_1625_);
if (v_isSharedCheck_1650_ == 0)
{
v___x_1629_ = v___x_1625_;
v_isShared_1630_ = v_isSharedCheck_1650_;
goto v_resetjp_1628_;
}
else
{
lean_inc(v_a_1627_);
lean_inc(v_a_1626_);
lean_dec(v___x_1625_);
v___x_1629_ = lean_box(0);
v_isShared_1630_ = v_isSharedCheck_1650_;
goto v_resetjp_1628_;
}
v_resetjp_1628_:
{
lean_object* v_task_1631_; lean_object* v_kind_1632_; lean_object* v___x_1634_; uint8_t v_isShared_1635_; uint8_t v_isSharedCheck_1648_; 
v_task_1631_ = lean_ctor_get(v_a_1626_, 0);
v_kind_1632_ = lean_ctor_get(v_a_1626_, 1);
v_isSharedCheck_1648_ = !lean_is_exclusive(v_a_1626_);
if (v_isSharedCheck_1648_ == 0)
{
lean_object* v_unused_1649_; 
v_unused_1649_ = lean_ctor_get(v_a_1626_, 2);
lean_dec(v_unused_1649_);
v___x_1634_ = v_a_1626_;
v_isShared_1635_ = v_isSharedCheck_1648_;
goto v_resetjp_1633_;
}
else
{
lean_inc(v_kind_1632_);
lean_inc(v_task_1631_);
lean_dec(v_a_1626_);
v___x_1634_ = lean_box(0);
v_isShared_1635_ = v_isSharedCheck_1648_;
goto v_resetjp_1633_;
}
v_resetjp_1633_:
{
lean_object* v_registeredJobs_1636_; lean_object* v_job_1638_; 
v_registeredJobs_1636_ = lean_ctor_get(v_a_1595_, 4);
if (v_isShared_1635_ == 0)
{
lean_ctor_set(v___x_1634_, 2, v___x_1606_);
v_job_1638_ = v___x_1634_;
goto v_reusejp_1637_;
}
else
{
lean_object* v_reuseFailAlloc_1647_; 
v_reuseFailAlloc_1647_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_1647_, 0, v_task_1631_);
lean_ctor_set(v_reuseFailAlloc_1647_, 1, v_kind_1632_);
lean_ctor_set(v_reuseFailAlloc_1647_, 2, v___x_1606_);
v_job_1638_ = v_reuseFailAlloc_1647_;
goto v_reusejp_1637_;
}
v_reusejp_1637_:
{
lean_object* v___x_1639_; lean_object* v___x_1640_; lean_object* v___x_1641_; lean_object* v___x_1642_; lean_object* v___x_1643_; lean_object* v___x_1645_; 
lean_ctor_set_uint8(v_job_1638_, sizeof(void*)*3, v___x_1615_);
v___x_1639_ = lean_st_ref_take(v_registeredJobs_1636_);
lean_inc_ref(v_job_1638_);
v___x_1640_ = l_Lake_Job_toOpaque___redArg(v_job_1638_);
v___x_1641_ = lean_array_push(v___x_1639_, v___x_1640_);
v___x_1642_ = lean_st_ref_put(v_registeredJobs_1636_, v___x_1641_);
v___x_1643_ = l_Lake_Job_renew___redArg(v_job_1638_);
if (v_isShared_1630_ == 0)
{
lean_ctor_set(v___x_1629_, 0, v___x_1643_);
v___x_1645_ = v___x_1629_;
goto v_reusejp_1644_;
}
else
{
lean_object* v_reuseFailAlloc_1646_; 
v_reuseFailAlloc_1646_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1646_, 0, v___x_1643_);
lean_ctor_set(v_reuseFailAlloc_1646_, 1, v_a_1627_);
v___x_1645_ = v_reuseFailAlloc_1646_;
goto v_reusejp_1644_;
}
v_reusejp_1644_:
{
return v___x_1645_;
}
}
}
}
}
else
{
lean_dec_ref(v___x_1606_);
return v___x_1625_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Package_0__Lake_Package_recBuildExtraDepTargets___boxed(lean_object* v_self_1651_, lean_object* v_a_1652_, lean_object* v_a_1653_, lean_object* v_a_1654_, lean_object* v_a_1655_, lean_object* v_a_1656_, lean_object* v_a_1657_, lean_object* v_a_1658_){
_start:
{
lean_object* v_res_1659_; 
v_res_1659_ = l___private_Lake_Build_Package_0__Lake_Package_recBuildExtraDepTargets(v_self_1651_, v_a_1652_, v_a_1653_, v_a_1654_, v_a_1655_, v_a_1656_, v_a_1657_);
lean_dec_ref(v_a_1656_);
lean_dec(v_a_1655_);
lean_dec(v_a_1654_);
lean_dec(v_a_1653_);
return v_res_1659_;
}
}
static lean_object* _init_l_Lake_formatQuery___at___00Lake_Package_extraDepFacetConfig_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_1660_; lean_object* v___x_1661_; 
v___x_1660_ = lean_box(0);
v___x_1661_ = l_Lean_Json_compress(v___x_1660_);
return v___x_1661_;
}
}
LEAN_EXPORT lean_object* l_Lake_formatQuery___at___00Lake_Package_extraDepFacetConfig_spec__0___redArg(uint8_t v_fmt_1662_){
_start:
{
if (v_fmt_1662_ == 0)
{
lean_object* v___x_1663_; 
v___x_1663_ = ((lean_object*)(l___private_Lake_Build_Package_0__Lake_Package_recFetchDeps___redArg___closed__2));
return v___x_1663_;
}
else
{
lean_object* v___x_1664_; 
v___x_1664_ = lean_obj_once(&l_Lake_formatQuery___at___00Lake_Package_extraDepFacetConfig_spec__0___redArg___closed__0, &l_Lake_formatQuery___at___00Lake_Package_extraDepFacetConfig_spec__0___redArg___closed__0_once, _init_l_Lake_formatQuery___at___00Lake_Package_extraDepFacetConfig_spec__0___redArg___closed__0);
return v___x_1664_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_formatQuery___at___00Lake_Package_extraDepFacetConfig_spec__0___redArg___boxed(lean_object* v_fmt_1665_){
_start:
{
uint8_t v_fmt_boxed_1666_; lean_object* v_res_1667_; 
v_fmt_boxed_1666_ = lean_unbox(v_fmt_1665_);
v_res_1667_ = l_Lake_formatQuery___at___00Lake_Package_extraDepFacetConfig_spec__0___redArg(v_fmt_boxed_1666_);
return v_res_1667_;
}
}
LEAN_EXPORT lean_object* l_Lake_formatQuery___at___00Lake_Package_extraDepFacetConfig_spec__0(uint8_t v_fmt_1668_, lean_object* v_a_1669_){
_start:
{
lean_object* v___x_1670_; 
v___x_1670_ = l_Lake_formatQuery___at___00Lake_Package_extraDepFacetConfig_spec__0___redArg(v_fmt_1668_);
return v___x_1670_;
}
}
LEAN_EXPORT lean_object* l_Lake_formatQuery___at___00Lake_Package_extraDepFacetConfig_spec__0___boxed(lean_object* v_fmt_1671_, lean_object* v_a_1672_){
_start:
{
uint8_t v_fmt_boxed_1673_; lean_object* v_res_1674_; 
v_fmt_boxed_1673_ = lean_unbox(v_fmt_1671_);
v_res_1674_ = l_Lake_formatQuery___at___00Lake_Package_extraDepFacetConfig_spec__0(v_fmt_boxed_1673_, v_a_1672_);
return v_res_1674_;
}
}
LEAN_EXPORT lean_object* l_Lake_Package_extraDepFacetConfig___lam__0(uint8_t v___y_1675_, lean_object* v___y_1676_){
_start:
{
lean_object* v___x_1677_; 
v___x_1677_ = l_Lake_formatQuery___at___00Lake_Package_extraDepFacetConfig_spec__0___redArg(v___y_1675_);
return v___x_1677_;
}
}
LEAN_EXPORT lean_object* l_Lake_Package_extraDepFacetConfig___lam__0___boxed(lean_object* v___y_1678_, lean_object* v___y_1679_){
_start:
{
uint8_t v___y_67__boxed_1680_; lean_object* v_res_1681_; 
v___y_67__boxed_1680_ = lean_unbox(v___y_1678_);
v_res_1681_ = l_Lake_Package_extraDepFacetConfig___lam__0(v___y_67__boxed_1680_, v___y_1679_);
return v_res_1681_;
}
}
static lean_object* _init_l_Lake_Package_extraDepFacetConfig___closed__2(void){
_start:
{
lean_object* v___f_1684_; uint8_t v___x_1685_; lean_object* v___x_1686_; lean_object* v___x_1687_; lean_object* v___x_1688_; lean_object* v___x_1689_; 
v___f_1684_ = ((lean_object*)(l_Lake_Package_extraDepFacetConfig___closed__0));
v___x_1685_ = 1;
v___x_1686_ = l_Lake_instDataKindUnit;
v___x_1687_ = ((lean_object*)(l_Lake_Package_extraDepFacetConfig___closed__1));
v___x_1688_ = l_Lake_Package_keyword;
v___x_1689_ = lean_alloc_ctor(0, 4, 2);
lean_ctor_set(v___x_1689_, 0, v___x_1688_);
lean_ctor_set(v___x_1689_, 1, v___x_1687_);
lean_ctor_set(v___x_1689_, 2, v___x_1686_);
lean_ctor_set(v___x_1689_, 3, v___f_1684_);
lean_ctor_set_uint8(v___x_1689_, sizeof(void*)*4, v___x_1685_);
lean_ctor_set_uint8(v___x_1689_, sizeof(void*)*4 + 1, v___x_1685_);
return v___x_1689_;
}
}
static lean_object* _init_l_Lake_Package_extraDepFacetConfig(void){
_start:
{
lean_object* v___x_1690_; 
v___x_1690_ = lean_obj_once(&l_Lake_Package_extraDepFacetConfig___closed__2, &l_Lake_Package_extraDepFacetConfig___closed__2_once, _init_l_Lake_Package_extraDepFacetConfig___closed__2);
return v___x_1690_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Package_0__Lake_Package_getBarrelUrl___redArg(lean_object* v_self_1706_, lean_object* v_a_1707_, lean_object* v_a_1708_){
_start:
{
lean_object* v_origName_1710_; lean_object* v_dir_1711_; lean_object* v_scope_1712_; lean_object* v___x_1713_; lean_object* v___x_1714_; uint8_t v___x_1715_; 
v_origName_1710_ = lean_ctor_get(v_self_1706_, 3);
lean_inc(v_origName_1710_);
v_dir_1711_ = lean_ctor_get(v_self_1706_, 4);
lean_inc_ref(v_dir_1711_);
v_scope_1712_ = lean_ctor_get(v_self_1706_, 10);
lean_inc_ref(v_scope_1712_);
lean_dec_ref(v_self_1706_);
v___x_1713_ = lean_string_utf8_byte_size(v_scope_1712_);
v___x_1714_ = lean_unsigned_to_nat(0u);
v___x_1715_ = lean_nat_dec_eq(v___x_1713_, v___x_1714_);
if (v___x_1715_ == 0)
{
lean_object* v_log_1716_; uint8_t v_action_1717_; uint8_t v_wantsRebuild_1718_; lean_object* v_trace_1719_; lean_object* v_buildTime_1720_; lean_object* v___x_1721_; lean_object* v___x_1722_; 
v_log_1716_ = lean_ctor_get(v_a_1708_, 0);
v_action_1717_ = lean_ctor_get_uint8(v_a_1708_, sizeof(void*)*3);
v_wantsRebuild_1718_ = lean_ctor_get_uint8(v_a_1708_, sizeof(void*)*3 + 1);
v_trace_1719_ = lean_ctor_get(v_a_1708_, 1);
v_buildTime_1720_ = lean_ctor_get(v_a_1708_, 2);
v___x_1721_ = ((lean_object*)(l___private_Lake_Build_Package_0__Lake_Package_getBarrelUrl___redArg___closed__0));
v___x_1722_ = l_Lake_GitRepo_resolveRevision_x3f(v___x_1721_, v_dir_1711_);
if (lean_obj_tag(v___x_1722_) == 1)
{
lean_object* v_val_1723_; lean_object* v_toContext_1724_; lean_object* v___x_1725_; lean_object* v___x_1726_; lean_object* v___x_1727_; lean_object* v___x_1728_; lean_object* v___x_1729_; lean_object* v___x_1730_; lean_object* v___x_1731_; lean_object* v___x_1732_; lean_object* v___x_1733_; lean_object* v___x_1734_; lean_object* v___x_1735_; lean_object* v___x_1736_; lean_object* v___x_1737_; lean_object* v_lakeEnv_1738_; lean_object* v_toolchain_1739_; lean_object* v___x_1740_; uint8_t v___x_1741_; 
v_val_1723_ = lean_ctor_get(v___x_1722_, 0);
lean_inc(v_val_1723_);
lean_dec_ref_known(v___x_1722_, 1);
v_toContext_1724_ = lean_ctor_get(v_a_1707_, 1);
v___x_1725_ = l_unsafeCast___redArg(v_toContext_1724_);
v___x_1726_ = l_unsafeCast___redArg(v___x_1725_);
lean_dec(v___x_1725_);
v___x_1727_ = l_unsafeCast___redArg(v___x_1726_);
lean_dec(v___x_1726_);
v___x_1728_ = l_unsafeCast___redArg(v___x_1727_);
lean_dec(v___x_1727_);
v___x_1729_ = l_unsafeCast___redArg(v___x_1728_);
lean_dec(v___x_1728_);
v___x_1730_ = l_unsafeCast___redArg(v___x_1729_);
lean_dec(v___x_1729_);
v___x_1731_ = l_unsafeCast___redArg(v___x_1730_);
lean_dec(v___x_1730_);
v___x_1732_ = l_unsafeCast___redArg(v___x_1731_);
lean_dec(v___x_1731_);
v___x_1733_ = l_unsafeCast___redArg(v___x_1732_);
lean_dec(v___x_1732_);
v___x_1734_ = l_unsafeCast___redArg(v___x_1733_);
lean_dec(v___x_1733_);
v___x_1735_ = l_unsafeCast___redArg(v___x_1734_);
lean_dec(v___x_1734_);
v___x_1736_ = l_unsafeCast___redArg(v___x_1735_);
lean_dec(v___x_1735_);
v___x_1737_ = l_unsafeCast___redArg(v___x_1736_);
lean_dec(v___x_1736_);
v_lakeEnv_1738_ = lean_ctor_get(v___x_1737_, 0);
lean_inc_ref(v_lakeEnv_1738_);
lean_dec(v___x_1737_);
v_toolchain_1739_ = lean_ctor_get(v_lakeEnv_1738_, 19);
lean_inc_ref(v_toolchain_1739_);
v___x_1740_ = lean_string_utf8_byte_size(v_toolchain_1739_);
v___x_1741_ = lean_nat_dec_eq(v___x_1740_, v___x_1714_);
if (v___x_1741_ == 0)
{
lean_object* v___x_1742_; lean_object* v___x_1743_; lean_object* v___x_1744_; lean_object* v___x_1745_; lean_object* v___x_1746_; lean_object* v___x_1747_; lean_object* v___x_1748_; lean_object* v___x_1749_; lean_object* v___x_1750_; lean_object* v___x_1751_; lean_object* v___x_1752_; 
v___x_1742_ = l_Lean_Name_toString(v_origName_1710_, v___x_1715_);
v___x_1743_ = l_Lake_Reservoir_pkgApiUrl(v_lakeEnv_1738_, v_scope_1712_, v___x_1742_);
lean_dec_ref(v___x_1742_);
lean_dec_ref(v_scope_1712_);
v___x_1744_ = ((lean_object*)(l___private_Lake_Build_Package_0__Lake_Package_getBarrelUrl___redArg___closed__1));
v___x_1745_ = lean_string_append(v___x_1743_, v___x_1744_);
v___x_1746_ = lean_string_append(v___x_1745_, v_val_1723_);
lean_dec(v_val_1723_);
v___x_1747_ = ((lean_object*)(l___private_Lake_Build_Package_0__Lake_Package_getBarrelUrl___redArg___closed__2));
v___x_1748_ = lean_string_append(v___x_1746_, v___x_1747_);
v___x_1749_ = ((lean_object*)(l___private_Lake_Build_Package_0__Lake_Package_recFetchDeps___redArg___closed__2));
v___x_1750_ = l_Lake_uriEncode(v_toolchain_1739_, v___x_1749_);
lean_dec_ref(v_toolchain_1739_);
v___x_1751_ = lean_string_append(v___x_1748_, v___x_1750_);
lean_dec_ref(v___x_1750_);
v___x_1752_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1752_, 0, v___x_1751_);
lean_ctor_set(v___x_1752_, 1, v_a_1708_);
return v___x_1752_;
}
else
{
lean_object* v___x_1754_; uint8_t v_isShared_1755_; uint8_t v_isSharedCheck_1763_; 
lean_inc(v_buildTime_1720_);
lean_inc_ref(v_trace_1719_);
lean_inc_ref(v_log_1716_);
lean_dec_ref(v_toolchain_1739_);
lean_dec_ref(v_lakeEnv_1738_);
lean_dec(v_val_1723_);
lean_dec_ref(v_scope_1712_);
lean_dec(v_origName_1710_);
v_isSharedCheck_1763_ = !lean_is_exclusive(v_a_1708_);
if (v_isSharedCheck_1763_ == 0)
{
lean_object* v_unused_1764_; lean_object* v_unused_1765_; lean_object* v_unused_1766_; 
v_unused_1764_ = lean_ctor_get(v_a_1708_, 2);
lean_dec(v_unused_1764_);
v_unused_1765_ = lean_ctor_get(v_a_1708_, 1);
lean_dec(v_unused_1765_);
v_unused_1766_ = lean_ctor_get(v_a_1708_, 0);
lean_dec(v_unused_1766_);
v___x_1754_ = v_a_1708_;
v_isShared_1755_ = v_isSharedCheck_1763_;
goto v_resetjp_1753_;
}
else
{
lean_dec(v_a_1708_);
v___x_1754_ = lean_box(0);
v_isShared_1755_ = v_isSharedCheck_1763_;
goto v_resetjp_1753_;
}
v_resetjp_1753_:
{
lean_object* v___x_1756_; lean_object* v___x_1757_; lean_object* v___x_1758_; lean_object* v___x_1760_; 
v___x_1756_ = ((lean_object*)(l___private_Lake_Build_Package_0__Lake_Package_getBarrelUrl___redArg___closed__4));
v___x_1757_ = lean_array_get_size(v_log_1716_);
v___x_1758_ = lean_array_push(v_log_1716_, v___x_1756_);
if (v_isShared_1755_ == 0)
{
lean_ctor_set(v___x_1754_, 0, v___x_1758_);
v___x_1760_ = v___x_1754_;
goto v_reusejp_1759_;
}
else
{
lean_object* v_reuseFailAlloc_1762_; 
v_reuseFailAlloc_1762_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_1762_, 0, v___x_1758_);
lean_ctor_set(v_reuseFailAlloc_1762_, 1, v_trace_1719_);
lean_ctor_set(v_reuseFailAlloc_1762_, 2, v_buildTime_1720_);
lean_ctor_set_uint8(v_reuseFailAlloc_1762_, sizeof(void*)*3, v_action_1717_);
lean_ctor_set_uint8(v_reuseFailAlloc_1762_, sizeof(void*)*3 + 1, v_wantsRebuild_1718_);
v___x_1760_ = v_reuseFailAlloc_1762_;
goto v_reusejp_1759_;
}
v_reusejp_1759_:
{
lean_object* v___x_1761_; 
v___x_1761_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1761_, 0, v___x_1757_);
lean_ctor_set(v___x_1761_, 1, v___x_1760_);
return v___x_1761_;
}
}
}
}
else
{
lean_object* v___x_1768_; uint8_t v_isShared_1769_; uint8_t v_isSharedCheck_1777_; 
lean_inc(v_buildTime_1720_);
lean_inc_ref(v_trace_1719_);
lean_inc_ref(v_log_1716_);
lean_dec(v___x_1722_);
lean_dec_ref(v_scope_1712_);
lean_dec(v_origName_1710_);
v_isSharedCheck_1777_ = !lean_is_exclusive(v_a_1708_);
if (v_isSharedCheck_1777_ == 0)
{
lean_object* v_unused_1778_; lean_object* v_unused_1779_; lean_object* v_unused_1780_; 
v_unused_1778_ = lean_ctor_get(v_a_1708_, 2);
lean_dec(v_unused_1778_);
v_unused_1779_ = lean_ctor_get(v_a_1708_, 1);
lean_dec(v_unused_1779_);
v_unused_1780_ = lean_ctor_get(v_a_1708_, 0);
lean_dec(v_unused_1780_);
v___x_1768_ = v_a_1708_;
v_isShared_1769_ = v_isSharedCheck_1777_;
goto v_resetjp_1767_;
}
else
{
lean_dec(v_a_1708_);
v___x_1768_ = lean_box(0);
v_isShared_1769_ = v_isSharedCheck_1777_;
goto v_resetjp_1767_;
}
v_resetjp_1767_:
{
lean_object* v___x_1770_; lean_object* v___x_1771_; lean_object* v___x_1772_; lean_object* v___x_1774_; 
v___x_1770_ = ((lean_object*)(l___private_Lake_Build_Package_0__Lake_Package_getBarrelUrl___redArg___closed__6));
v___x_1771_ = lean_array_get_size(v_log_1716_);
v___x_1772_ = lean_array_push(v_log_1716_, v___x_1770_);
if (v_isShared_1769_ == 0)
{
lean_ctor_set(v___x_1768_, 0, v___x_1772_);
v___x_1774_ = v___x_1768_;
goto v_reusejp_1773_;
}
else
{
lean_object* v_reuseFailAlloc_1776_; 
v_reuseFailAlloc_1776_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_1776_, 0, v___x_1772_);
lean_ctor_set(v_reuseFailAlloc_1776_, 1, v_trace_1719_);
lean_ctor_set(v_reuseFailAlloc_1776_, 2, v_buildTime_1720_);
lean_ctor_set_uint8(v_reuseFailAlloc_1776_, sizeof(void*)*3, v_action_1717_);
lean_ctor_set_uint8(v_reuseFailAlloc_1776_, sizeof(void*)*3 + 1, v_wantsRebuild_1718_);
v___x_1774_ = v_reuseFailAlloc_1776_;
goto v_reusejp_1773_;
}
v_reusejp_1773_:
{
lean_object* v___x_1775_; 
v___x_1775_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1775_, 0, v___x_1771_);
lean_ctor_set(v___x_1775_, 1, v___x_1774_);
return v___x_1775_;
}
}
}
}
else
{
lean_object* v_log_1781_; uint8_t v_action_1782_; uint8_t v_wantsRebuild_1783_; lean_object* v_trace_1784_; lean_object* v_buildTime_1785_; lean_object* v___x_1787_; uint8_t v_isShared_1788_; uint8_t v_isSharedCheck_1796_; 
lean_dec_ref(v_scope_1712_);
lean_dec_ref(v_dir_1711_);
lean_dec(v_origName_1710_);
v_log_1781_ = lean_ctor_get(v_a_1708_, 0);
v_action_1782_ = lean_ctor_get_uint8(v_a_1708_, sizeof(void*)*3);
v_wantsRebuild_1783_ = lean_ctor_get_uint8(v_a_1708_, sizeof(void*)*3 + 1);
v_trace_1784_ = lean_ctor_get(v_a_1708_, 1);
v_buildTime_1785_ = lean_ctor_get(v_a_1708_, 2);
v_isSharedCheck_1796_ = !lean_is_exclusive(v_a_1708_);
if (v_isSharedCheck_1796_ == 0)
{
v___x_1787_ = v_a_1708_;
v_isShared_1788_ = v_isSharedCheck_1796_;
goto v_resetjp_1786_;
}
else
{
lean_inc(v_buildTime_1785_);
lean_inc(v_trace_1784_);
lean_inc(v_log_1781_);
lean_dec(v_a_1708_);
v___x_1787_ = lean_box(0);
v_isShared_1788_ = v_isSharedCheck_1796_;
goto v_resetjp_1786_;
}
v_resetjp_1786_:
{
lean_object* v___x_1789_; lean_object* v___x_1790_; lean_object* v___x_1791_; lean_object* v___x_1793_; 
v___x_1789_ = ((lean_object*)(l___private_Lake_Build_Package_0__Lake_Package_getBarrelUrl___redArg___closed__8));
v___x_1790_ = lean_array_get_size(v_log_1781_);
v___x_1791_ = lean_array_push(v_log_1781_, v___x_1789_);
if (v_isShared_1788_ == 0)
{
lean_ctor_set(v___x_1787_, 0, v___x_1791_);
v___x_1793_ = v___x_1787_;
goto v_reusejp_1792_;
}
else
{
lean_object* v_reuseFailAlloc_1795_; 
v_reuseFailAlloc_1795_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_1795_, 0, v___x_1791_);
lean_ctor_set(v_reuseFailAlloc_1795_, 1, v_trace_1784_);
lean_ctor_set(v_reuseFailAlloc_1795_, 2, v_buildTime_1785_);
lean_ctor_set_uint8(v_reuseFailAlloc_1795_, sizeof(void*)*3, v_action_1782_);
lean_ctor_set_uint8(v_reuseFailAlloc_1795_, sizeof(void*)*3 + 1, v_wantsRebuild_1783_);
v___x_1793_ = v_reuseFailAlloc_1795_;
goto v_reusejp_1792_;
}
v_reusejp_1792_:
{
lean_object* v___x_1794_; 
v___x_1794_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1794_, 0, v___x_1790_);
lean_ctor_set(v___x_1794_, 1, v___x_1793_);
return v___x_1794_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Package_0__Lake_Package_getBarrelUrl___redArg___boxed(lean_object* v_self_1797_, lean_object* v_a_1798_, lean_object* v_a_1799_, lean_object* v_a_1800_){
_start:
{
lean_object* v_res_1801_; 
v_res_1801_ = l___private_Lake_Build_Package_0__Lake_Package_getBarrelUrl___redArg(v_self_1797_, v_a_1798_, v_a_1799_);
lean_dec_ref(v_a_1798_);
return v_res_1801_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Package_0__Lake_Package_getBarrelUrl(lean_object* v_self_1802_, lean_object* v_a_1803_, lean_object* v_a_1804_, lean_object* v_a_1805_, lean_object* v_a_1806_, lean_object* v_a_1807_, lean_object* v_a_1808_){
_start:
{
lean_object* v___x_1810_; 
v___x_1810_ = l___private_Lake_Build_Package_0__Lake_Package_getBarrelUrl___redArg(v_self_1802_, v_a_1807_, v_a_1808_);
return v___x_1810_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Package_0__Lake_Package_getBarrelUrl___boxed(lean_object* v_self_1811_, lean_object* v_a_1812_, lean_object* v_a_1813_, lean_object* v_a_1814_, lean_object* v_a_1815_, lean_object* v_a_1816_, lean_object* v_a_1817_, lean_object* v_a_1818_){
_start:
{
lean_object* v_res_1819_; 
v_res_1819_ = l___private_Lake_Build_Package_0__Lake_Package_getBarrelUrl(v_self_1811_, v_a_1812_, v_a_1813_, v_a_1814_, v_a_1815_, v_a_1816_, v_a_1817_);
lean_dec_ref(v_a_1816_);
lean_dec(v_a_1815_);
lean_dec(v_a_1814_);
lean_dec(v_a_1813_);
lean_dec_ref(v_a_1812_);
return v_res_1819_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Package_0__Lake_Package_getReleaseUrl___redArg(lean_object* v_self_1829_, lean_object* v_a_1830_){
_start:
{
lean_object* v_rev_1833_; lean_object* v_log_1834_; uint8_t v_action_1835_; uint8_t v_wantsRebuild_1836_; lean_object* v_trace_1837_; lean_object* v_buildTime_1838_; lean_object* v_dir_1847_; lean_object* v_config_1848_; lean_object* v_remoteUrl_1849_; lean_object* v_buildArchive_1850_; lean_object* v___y_1852_; lean_object* v___y_1853_; uint8_t v___y_1854_; uint8_t v___y_1855_; lean_object* v___y_1856_; lean_object* v_val_1857_; lean_object* v___y_1877_; lean_object* v_releaseRepo_1898_; 
v_dir_1847_ = lean_ctor_get(v_self_1829_, 4);
lean_inc_ref(v_dir_1847_);
v_config_1848_ = lean_ctor_get(v_self_1829_, 6);
lean_inc_ref(v_config_1848_);
v_remoteUrl_1849_ = lean_ctor_get(v_self_1829_, 11);
lean_inc_ref(v_remoteUrl_1849_);
v_buildArchive_1850_ = lean_ctor_get(v_self_1829_, 21);
lean_inc_ref(v_buildArchive_1850_);
lean_dec_ref(v_self_1829_);
v_releaseRepo_1898_ = lean_ctor_get(v_config_1848_, 10);
lean_inc(v_releaseRepo_1898_);
lean_dec_ref(v_config_1848_);
if (lean_obj_tag(v_releaseRepo_1898_) == 0)
{
lean_object* v___x_1899_; lean_object* v___x_1900_; uint8_t v___x_1901_; 
v___x_1899_ = lean_string_utf8_byte_size(v_remoteUrl_1849_);
v___x_1900_ = lean_unsigned_to_nat(0u);
v___x_1901_ = lean_nat_dec_eq(v___x_1899_, v___x_1900_);
if (v___x_1901_ == 0)
{
lean_object* v___x_1902_; 
v___x_1902_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1902_, 0, v_remoteUrl_1849_);
v___y_1877_ = v___x_1902_;
goto v___jp_1876_;
}
else
{
lean_dec_ref(v_remoteUrl_1849_);
v___y_1877_ = v_releaseRepo_1898_;
goto v___jp_1876_;
}
}
else
{
lean_dec_ref(v_remoteUrl_1849_);
v___y_1877_ = v_releaseRepo_1898_;
goto v___jp_1876_;
}
v___jp_1832_:
{
lean_object* v___x_1839_; lean_object* v___x_1840_; uint8_t v___x_1841_; lean_object* v___x_1842_; lean_object* v___x_1843_; lean_object* v___x_1844_; lean_object* v___x_1845_; lean_object* v___x_1846_; 
v___x_1839_ = ((lean_object*)(l___private_Lake_Build_Package_0__Lake_Package_getReleaseUrl___redArg___closed__0));
v___x_1840_ = lean_string_append(v___x_1839_, v_rev_1833_);
lean_dec_ref(v_rev_1833_);
v___x_1841_ = 3;
v___x_1842_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1842_, 0, v___x_1840_);
lean_ctor_set_uint8(v___x_1842_, sizeof(void*)*1, v___x_1841_);
v___x_1843_ = lean_array_get_size(v_log_1834_);
v___x_1844_ = lean_array_push(v_log_1834_, v___x_1842_);
v___x_1845_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_1845_, 0, v___x_1844_);
lean_ctor_set(v___x_1845_, 1, v_trace_1837_);
lean_ctor_set(v___x_1845_, 2, v_buildTime_1838_);
lean_ctor_set_uint8(v___x_1845_, sizeof(void*)*3, v_action_1835_);
lean_ctor_set_uint8(v___x_1845_, sizeof(void*)*3 + 1, v_wantsRebuild_1836_);
v___x_1846_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1846_, 0, v___x_1843_);
lean_ctor_set(v___x_1846_, 1, v___x_1845_);
return v___x_1846_;
}
v___jp_1851_:
{
lean_object* v___x_1858_; lean_object* v___x_1859_; 
v___x_1858_ = ((lean_object*)(l___private_Lake_Build_Package_0__Lake_Package_getBarrelUrl___redArg___closed__0));
lean_inc_ref(v_dir_1847_);
v___x_1859_ = l_Lake_GitRepo_findTag_x3f(v___x_1858_, v_dir_1847_);
if (lean_obj_tag(v___x_1859_) == 1)
{
lean_object* v_val_1860_; lean_object* v___x_1861_; lean_object* v___x_1862_; lean_object* v___x_1863_; lean_object* v___x_1864_; lean_object* v___x_1865_; lean_object* v___x_1866_; lean_object* v___x_1867_; lean_object* v___x_1868_; 
lean_dec_ref(v_dir_1847_);
v_val_1860_ = lean_ctor_get(v___x_1859_, 0);
lean_inc(v_val_1860_);
lean_dec_ref_known(v___x_1859_, 1);
v___x_1861_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_1861_, 0, v___y_1856_);
lean_ctor_set(v___x_1861_, 1, v___y_1853_);
lean_ctor_set(v___x_1861_, 2, v___y_1852_);
lean_ctor_set_uint8(v___x_1861_, sizeof(void*)*3, v___y_1855_);
lean_ctor_set_uint8(v___x_1861_, sizeof(void*)*3 + 1, v___y_1854_);
v___x_1862_ = ((lean_object*)(l___private_Lake_Build_Package_0__Lake_Package_getReleaseUrl___redArg___closed__1));
v___x_1863_ = lean_string_append(v_val_1857_, v___x_1862_);
v___x_1864_ = lean_string_append(v___x_1863_, v_val_1860_);
lean_dec(v_val_1860_);
v___x_1865_ = ((lean_object*)(l___private_Lake_Build_Package_0__Lake_Package_getReleaseUrl___redArg___closed__2));
v___x_1866_ = lean_string_append(v___x_1864_, v___x_1865_);
v___x_1867_ = lean_string_append(v___x_1866_, v_buildArchive_1850_);
lean_dec_ref(v_buildArchive_1850_);
v___x_1868_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1868_, 0, v___x_1867_);
lean_ctor_set(v___x_1868_, 1, v___x_1861_);
return v___x_1868_;
}
else
{
lean_object* v___x_1869_; 
lean_dec(v___x_1859_);
lean_dec_ref(v_val_1857_);
lean_dec_ref(v_buildArchive_1850_);
v___x_1869_ = l_Lake_GitRepo_resolveRevision_x3f(v___x_1858_, v_dir_1847_);
if (lean_obj_tag(v___x_1869_) == 1)
{
lean_object* v_val_1870_; lean_object* v___x_1871_; lean_object* v___x_1872_; lean_object* v___x_1873_; lean_object* v___x_1874_; 
v_val_1870_ = lean_ctor_get(v___x_1869_, 0);
lean_inc(v_val_1870_);
lean_dec_ref_known(v___x_1869_, 1);
v___x_1871_ = ((lean_object*)(l___private_Lake_Build_Package_0__Lake_Package_getReleaseUrl___redArg___closed__3));
v___x_1872_ = lean_string_append(v___x_1871_, v_val_1870_);
lean_dec(v_val_1870_);
v___x_1873_ = ((lean_object*)(l___private_Lake_Build_Package_0__Lake_Package_getReleaseUrl___redArg___closed__4));
v___x_1874_ = lean_string_append(v___x_1872_, v___x_1873_);
v_rev_1833_ = v___x_1874_;
v_log_1834_ = v___y_1856_;
v_action_1835_ = v___y_1855_;
v_wantsRebuild_1836_ = v___y_1854_;
v_trace_1837_ = v___y_1853_;
v_buildTime_1838_ = v___y_1852_;
goto v___jp_1832_;
}
else
{
lean_object* v___x_1875_; 
lean_dec(v___x_1869_);
v___x_1875_ = ((lean_object*)(l___private_Lake_Build_Package_0__Lake_Package_recFetchDeps___redArg___closed__2));
v_rev_1833_ = v___x_1875_;
v_log_1834_ = v___y_1856_;
v_action_1835_ = v___y_1855_;
v_wantsRebuild_1836_ = v___y_1854_;
v_trace_1837_ = v___y_1853_;
v_buildTime_1838_ = v___y_1852_;
goto v___jp_1832_;
}
}
}
v___jp_1876_:
{
lean_object* v_log_1878_; uint8_t v_action_1879_; uint8_t v_wantsRebuild_1880_; lean_object* v_trace_1881_; lean_object* v_buildTime_1882_; lean_object* v___x_1884_; uint8_t v_isShared_1885_; uint8_t v_isSharedCheck_1897_; 
v_log_1878_ = lean_ctor_get(v_a_1830_, 0);
v_action_1879_ = lean_ctor_get_uint8(v_a_1830_, sizeof(void*)*3);
v_wantsRebuild_1880_ = lean_ctor_get_uint8(v_a_1830_, sizeof(void*)*3 + 1);
v_trace_1881_ = lean_ctor_get(v_a_1830_, 1);
v_buildTime_1882_ = lean_ctor_get(v_a_1830_, 2);
v_isSharedCheck_1897_ = !lean_is_exclusive(v_a_1830_);
if (v_isSharedCheck_1897_ == 0)
{
v___x_1884_ = v_a_1830_;
v_isShared_1885_ = v_isSharedCheck_1897_;
goto v_resetjp_1883_;
}
else
{
lean_inc(v_buildTime_1882_);
lean_inc(v_trace_1881_);
lean_inc(v_log_1878_);
lean_dec(v_a_1830_);
v___x_1884_ = lean_box(0);
v_isShared_1885_ = v_isSharedCheck_1897_;
goto v_resetjp_1883_;
}
v_resetjp_1883_:
{
lean_object* v___x_1886_; lean_object* v___x_1887_; 
v___x_1886_ = l_Lake_Git_defaultRemote;
lean_inc_ref(v_dir_1847_);
v___x_1887_ = l_Lake_GitRepo_getFilteredRemoteUrl_x3f(v___x_1886_, v_dir_1847_);
if (lean_obj_tag(v___y_1877_) == 0)
{
if (lean_obj_tag(v___x_1887_) == 1)
{
lean_object* v_val_1888_; 
lean_del_object(v___x_1884_);
v_val_1888_ = lean_ctor_get(v___x_1887_, 0);
lean_inc(v_val_1888_);
lean_dec_ref_known(v___x_1887_, 1);
v___y_1852_ = v_buildTime_1882_;
v___y_1853_ = v_trace_1881_;
v___y_1854_ = v_wantsRebuild_1880_;
v___y_1855_ = v_action_1879_;
v___y_1856_ = v_log_1878_;
v_val_1857_ = v_val_1888_;
goto v___jp_1851_;
}
else
{
lean_object* v___x_1889_; lean_object* v___x_1890_; lean_object* v___x_1891_; lean_object* v___x_1893_; 
lean_dec(v___x_1887_);
lean_dec_ref(v_buildArchive_1850_);
lean_dec_ref(v_dir_1847_);
v___x_1889_ = ((lean_object*)(l___private_Lake_Build_Package_0__Lake_Package_getReleaseUrl___redArg___closed__6));
v___x_1890_ = lean_array_get_size(v_log_1878_);
v___x_1891_ = lean_array_push(v_log_1878_, v___x_1889_);
if (v_isShared_1885_ == 0)
{
lean_ctor_set(v___x_1884_, 0, v___x_1891_);
v___x_1893_ = v___x_1884_;
goto v_reusejp_1892_;
}
else
{
lean_object* v_reuseFailAlloc_1895_; 
v_reuseFailAlloc_1895_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_1895_, 0, v___x_1891_);
lean_ctor_set(v_reuseFailAlloc_1895_, 1, v_trace_1881_);
lean_ctor_set(v_reuseFailAlloc_1895_, 2, v_buildTime_1882_);
lean_ctor_set_uint8(v_reuseFailAlloc_1895_, sizeof(void*)*3, v_action_1879_);
lean_ctor_set_uint8(v_reuseFailAlloc_1895_, sizeof(void*)*3 + 1, v_wantsRebuild_1880_);
v___x_1893_ = v_reuseFailAlloc_1895_;
goto v_reusejp_1892_;
}
v_reusejp_1892_:
{
lean_object* v___x_1894_; 
v___x_1894_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1894_, 0, v___x_1890_);
lean_ctor_set(v___x_1894_, 1, v___x_1893_);
return v___x_1894_;
}
}
}
else
{
lean_object* v_val_1896_; 
lean_dec(v___x_1887_);
lean_del_object(v___x_1884_);
v_val_1896_ = lean_ctor_get(v___y_1877_, 0);
lean_inc(v_val_1896_);
lean_dec_ref_known(v___y_1877_, 1);
v___y_1852_ = v_buildTime_1882_;
v___y_1853_ = v_trace_1881_;
v___y_1854_ = v_wantsRebuild_1880_;
v___y_1855_ = v_action_1879_;
v___y_1856_ = v_log_1878_;
v_val_1857_ = v_val_1896_;
goto v___jp_1851_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Package_0__Lake_Package_getReleaseUrl___redArg___boxed(lean_object* v_self_1903_, lean_object* v_a_1904_, lean_object* v_a_1905_){
_start:
{
lean_object* v_res_1906_; 
v_res_1906_ = l___private_Lake_Build_Package_0__Lake_Package_getReleaseUrl___redArg(v_self_1903_, v_a_1904_);
return v_res_1906_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Package_0__Lake_Package_getReleaseUrl(lean_object* v_self_1907_, lean_object* v_a_1908_, lean_object* v_a_1909_, lean_object* v_a_1910_, lean_object* v_a_1911_, lean_object* v_a_1912_, lean_object* v_a_1913_){
_start:
{
lean_object* v___x_1915_; 
v___x_1915_ = l___private_Lake_Build_Package_0__Lake_Package_getReleaseUrl___redArg(v_self_1907_, v_a_1913_);
return v___x_1915_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Package_0__Lake_Package_getReleaseUrl___boxed(lean_object* v_self_1916_, lean_object* v_a_1917_, lean_object* v_a_1918_, lean_object* v_a_1919_, lean_object* v_a_1920_, lean_object* v_a_1921_, lean_object* v_a_1922_, lean_object* v_a_1923_){
_start:
{
lean_object* v_res_1924_; 
v_res_1924_ = l___private_Lake_Build_Package_0__Lake_Package_getReleaseUrl(v_self_1916_, v_a_1917_, v_a_1918_, v_a_1919_, v_a_1920_, v_a_1921_, v_a_1922_);
lean_dec_ref(v_a_1921_);
lean_dec(v_a_1920_);
lean_dec(v_a_1919_);
lean_dec(v_a_1918_);
lean_dec_ref(v_a_1917_);
return v_res_1924_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildAction___at___00__private_Lake_Build_Package_0__Lake_Package_fetchBuildArchive_spec__1___redArg___lam__0(lean_object* v_val_1925_, lean_object* v_a_x3f_1926_, lean_object* v___y_1927_){
_start:
{
lean_object* v_log_1929_; uint8_t v_action_1930_; uint8_t v_wantsRebuild_1931_; lean_object* v_trace_1932_; lean_object* v_buildTime_1933_; lean_object* v___x_1935_; uint8_t v_isShared_1936_; uint8_t v_isSharedCheck_1945_; 
v_log_1929_ = lean_ctor_get(v___y_1927_, 0);
v_action_1930_ = lean_ctor_get_uint8(v___y_1927_, sizeof(void*)*3);
v_wantsRebuild_1931_ = lean_ctor_get_uint8(v___y_1927_, sizeof(void*)*3 + 1);
v_trace_1932_ = lean_ctor_get(v___y_1927_, 1);
v_buildTime_1933_ = lean_ctor_get(v___y_1927_, 2);
v_isSharedCheck_1945_ = !lean_is_exclusive(v___y_1927_);
if (v_isSharedCheck_1945_ == 0)
{
v___x_1935_ = v___y_1927_;
v_isShared_1936_ = v_isSharedCheck_1945_;
goto v_resetjp_1934_;
}
else
{
lean_inc(v_buildTime_1933_);
lean_inc(v_trace_1932_);
lean_inc(v_log_1929_);
lean_dec(v___y_1927_);
v___x_1935_ = lean_box(0);
v_isShared_1936_ = v_isSharedCheck_1945_;
goto v_resetjp_1934_;
}
v_resetjp_1934_:
{
lean_object* v___x_1937_; lean_object* v___x_1938_; lean_object* v___x_1939_; lean_object* v___x_1940_; lean_object* v___x_1942_; 
v___x_1937_ = lean_io_mono_ms_now();
v___x_1938_ = lean_nat_sub(v___x_1937_, v_val_1925_);
lean_dec(v___x_1937_);
v___x_1939_ = lean_box(0);
v___x_1940_ = lean_nat_add(v_buildTime_1933_, v___x_1938_);
lean_dec(v___x_1938_);
lean_dec(v_buildTime_1933_);
if (v_isShared_1936_ == 0)
{
lean_ctor_set(v___x_1935_, 2, v___x_1940_);
v___x_1942_ = v___x_1935_;
goto v_reusejp_1941_;
}
else
{
lean_object* v_reuseFailAlloc_1944_; 
v_reuseFailAlloc_1944_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_1944_, 0, v_log_1929_);
lean_ctor_set(v_reuseFailAlloc_1944_, 1, v_trace_1932_);
lean_ctor_set(v_reuseFailAlloc_1944_, 2, v___x_1940_);
lean_ctor_set_uint8(v_reuseFailAlloc_1944_, sizeof(void*)*3, v_action_1930_);
lean_ctor_set_uint8(v_reuseFailAlloc_1944_, sizeof(void*)*3 + 1, v_wantsRebuild_1931_);
v___x_1942_ = v_reuseFailAlloc_1944_;
goto v_reusejp_1941_;
}
v_reusejp_1941_:
{
lean_object* v___x_1943_; 
v___x_1943_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1943_, 0, v___x_1939_);
lean_ctor_set(v___x_1943_, 1, v___x_1942_);
return v___x_1943_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_buildAction___at___00__private_Lake_Build_Package_0__Lake_Package_fetchBuildArchive_spec__1___redArg___lam__0___boxed(lean_object* v_val_1946_, lean_object* v_a_x3f_1947_, lean_object* v___y_1948_, lean_object* v___y_1949_){
_start:
{
lean_object* v_res_1950_; 
v_res_1950_ = l_Lake_buildAction___at___00__private_Lake_Build_Package_0__Lake_Package_fetchBuildArchive_spec__1___redArg___lam__0(v_val_1946_, v_a_x3f_1947_, v___y_1948_);
lean_dec(v_a_x3f_1947_);
lean_dec(v_val_1946_);
return v_res_1950_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildAction___at___00__private_Lake_Build_Package_0__Lake_Package_fetchBuildArchive_spec__1___redArg(lean_object* v_url_1956_, lean_object* v_archiveFile_1957_, lean_object* v_headers_1958_, lean_object* v_depTrace_1959_, lean_object* v_traceFile_1960_, uint8_t v_action_1961_, lean_object* v_a_1962_, lean_object* v_a_1963_){
_start:
{
lean_object* v_a_1966_; lean_object* v_a_1967_; lean_object* v_log_1970_; uint8_t v_action_1971_; uint8_t v_wantsRebuild_1972_; lean_object* v_trace_1973_; lean_object* v_buildTime_1974_; lean_object* v_toBuildConfig_1980_; lean_object* v_log_1981_; uint8_t v_action_1982_; uint8_t v_wantsRebuild_1983_; lean_object* v_trace_1984_; lean_object* v_buildTime_1985_; lean_object* v___x_1987_; uint8_t v_isShared_1988_; uint8_t v_isSharedCheck_2075_; 
v_toBuildConfig_1980_ = lean_ctor_get(v_a_1962_, 0);
v_log_1981_ = lean_ctor_get(v_a_1963_, 0);
v_action_1982_ = lean_ctor_get_uint8(v_a_1963_, sizeof(void*)*3);
v_wantsRebuild_1983_ = lean_ctor_get_uint8(v_a_1963_, sizeof(void*)*3 + 1);
v_trace_1984_ = lean_ctor_get(v_a_1963_, 1);
v_buildTime_1985_ = lean_ctor_get(v_a_1963_, 2);
v_isSharedCheck_2075_ = !lean_is_exclusive(v_a_1963_);
if (v_isSharedCheck_2075_ == 0)
{
v___x_1987_ = v_a_1963_;
v_isShared_1988_ = v_isSharedCheck_2075_;
goto v_resetjp_1986_;
}
else
{
lean_inc(v_buildTime_1985_);
lean_inc(v_trace_1984_);
lean_inc(v_log_1981_);
lean_dec(v_a_1963_);
v___x_1987_ = lean_box(0);
v_isShared_1988_ = v_isSharedCheck_2075_;
goto v_resetjp_1986_;
}
v___jp_1965_:
{
lean_object* v___x_1968_; 
v___x_1968_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1968_, 0, v_a_1966_);
lean_ctor_set(v___x_1968_, 1, v_a_1967_);
return v___x_1968_;
}
v___jp_1969_:
{
lean_object* v___x_1975_; lean_object* v___x_1976_; lean_object* v___x_1977_; lean_object* v___x_1978_; lean_object* v___x_1979_; 
v___x_1975_ = ((lean_object*)(l_Lake_buildAction___at___00__private_Lake_Build_Package_0__Lake_Package_fetchBuildArchive_spec__1___redArg___closed__1));
v___x_1976_ = lean_array_get_size(v_log_1970_);
v___x_1977_ = lean_array_push(v_log_1970_, v___x_1975_);
v___x_1978_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_1978_, 0, v___x_1977_);
lean_ctor_set(v___x_1978_, 1, v_trace_1973_);
lean_ctor_set(v___x_1978_, 2, v_buildTime_1974_);
lean_ctor_set_uint8(v___x_1978_, sizeof(void*)*3, v_action_1971_);
lean_ctor_set_uint8(v___x_1978_, sizeof(void*)*3 + 1, v_wantsRebuild_1972_);
v___x_1979_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1979_, 0, v___x_1976_);
lean_ctor_set(v___x_1979_, 1, v___x_1978_);
return v___x_1979_;
}
v_resetjp_1986_:
{
uint8_t v_noBuild_1989_; uint8_t v___x_1990_; lean_object* v___x_1991_; lean_object* v___x_1992_; 
v_noBuild_1989_ = lean_ctor_get_uint8(v_toBuildConfig_1980_, sizeof(void*)*5 + 2);
v___x_1990_ = l_Lake_JobAction_merge(v_action_1982_, v_action_1961_);
v___x_1991_ = ((lean_object*)(l_Lake_buildAction___at___00__private_Lake_Build_Package_0__Lake_Package_fetchBuildArchive_spec__1___redArg___closed__2));
lean_inc_ref(v_traceFile_1960_);
v___x_1992_ = l_System_FilePath_addExtension(v_traceFile_1960_, v___x_1991_);
if (v_noBuild_1989_ == 0)
{
lean_object* v___x_1993_; lean_object* v_a_1995_; lean_object* v_a_1996_; lean_object* v___x_2000_; lean_object* v___x_2001_; 
v___x_1993_ = lean_io_mono_ms_now();
v___x_2000_ = lean_array_get_size(v_log_1981_);
v___x_2001_ = l_Lake_download(v_url_1956_, v_archiveFile_1957_, v_headers_1958_, v_log_1981_);
if (lean_obj_tag(v___x_2001_) == 0)
{
lean_object* v_a_2002_; lean_object* v_a_2003_; lean_object* v___x_2004_; lean_object* v___x_2005_; lean_object* v___x_2006_; lean_object* v___x_2007_; lean_object* v___x_2008_; 
v_a_2002_ = lean_ctor_get(v___x_2001_, 0);
lean_inc(v_a_2002_);
v_a_2003_ = lean_ctor_get(v___x_2001_, 1);
lean_inc(v_a_2003_);
lean_dec_ref_known(v___x_2001_, 2);
v___x_2004_ = lean_array_get_size(v_a_2003_);
v___x_2005_ = l_Array_extract___redArg(v_a_2003_, v___x_2000_, v___x_2004_);
v___x_2006_ = lean_box(0);
v___x_2007_ = l___private_Lake_Build_Common_0__Lake_BuildMetadata_ofBuildCore(v_depTrace_1959_, v___x_2006_, v___x_2005_);
v___x_2008_ = l_Lake_BuildMetadata_writeFile(v_traceFile_1960_, v___x_2007_);
lean_dec_ref(v___x_2007_);
if (lean_obj_tag(v___x_2008_) == 0)
{
lean_object* v___x_2010_; uint8_t v_isShared_2011_; uint8_t v_isSharedCheck_2045_; 
v_isSharedCheck_2045_ = !lean_is_exclusive(v___x_2008_);
if (v_isSharedCheck_2045_ == 0)
{
lean_object* v_unused_2046_; 
v_unused_2046_ = lean_ctor_get(v___x_2008_, 0);
lean_dec(v_unused_2046_);
v___x_2010_ = v___x_2008_;
v_isShared_2011_ = v_isSharedCheck_2045_;
goto v_resetjp_2009_;
}
else
{
lean_dec(v___x_2008_);
v___x_2010_ = lean_box(0);
v_isShared_2011_ = v_isSharedCheck_2045_;
goto v_resetjp_2009_;
}
v_resetjp_2009_:
{
lean_object* v___x_2012_; 
v___x_2012_ = l_Lake_removeFileIfExists(v___x_1992_);
lean_dec_ref(v___x_1992_);
if (lean_obj_tag(v___x_2012_) == 0)
{
lean_object* v___x_2014_; uint8_t v_isShared_2015_; uint8_t v_isSharedCheck_2035_; 
v_isSharedCheck_2035_ = !lean_is_exclusive(v___x_2012_);
if (v_isSharedCheck_2035_ == 0)
{
lean_object* v_unused_2036_; 
v_unused_2036_ = lean_ctor_get(v___x_2012_, 0);
lean_dec(v_unused_2036_);
v___x_2014_ = v___x_2012_;
v_isShared_2015_ = v_isSharedCheck_2035_;
goto v_resetjp_2013_;
}
else
{
lean_dec(v___x_2012_);
v___x_2014_ = lean_box(0);
v_isShared_2015_ = v_isSharedCheck_2035_;
goto v_resetjp_2013_;
}
v_resetjp_2013_:
{
lean_object* v___x_2017_; 
if (v_isShared_1988_ == 0)
{
lean_ctor_set(v___x_1987_, 0, v_a_2003_);
v___x_2017_ = v___x_1987_;
goto v_reusejp_2016_;
}
else
{
lean_object* v_reuseFailAlloc_2034_; 
v_reuseFailAlloc_2034_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_2034_, 0, v_a_2003_);
lean_ctor_set(v_reuseFailAlloc_2034_, 1, v_trace_1984_);
lean_ctor_set(v_reuseFailAlloc_2034_, 2, v_buildTime_1985_);
lean_ctor_set_uint8(v_reuseFailAlloc_2034_, sizeof(void*)*3 + 1, v_wantsRebuild_1983_);
v___x_2017_ = v_reuseFailAlloc_2034_;
goto v_reusejp_2016_;
}
v_reusejp_2016_:
{
lean_object* v___x_2019_; 
lean_ctor_set_uint8(v___x_2017_, sizeof(void*)*3, v___x_1990_);
lean_inc(v_a_2002_);
if (v_isShared_2015_ == 0)
{
lean_ctor_set(v___x_2014_, 0, v_a_2002_);
v___x_2019_ = v___x_2014_;
goto v_reusejp_2018_;
}
else
{
lean_object* v_reuseFailAlloc_2033_; 
v_reuseFailAlloc_2033_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2033_, 0, v_a_2002_);
v___x_2019_ = v_reuseFailAlloc_2033_;
goto v_reusejp_2018_;
}
v_reusejp_2018_:
{
lean_object* v___x_2021_; 
if (v_isShared_2011_ == 0)
{
lean_ctor_set_tag(v___x_2010_, 1);
lean_ctor_set(v___x_2010_, 0, v___x_2019_);
v___x_2021_ = v___x_2010_;
goto v_reusejp_2020_;
}
else
{
lean_object* v_reuseFailAlloc_2032_; 
v_reuseFailAlloc_2032_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2032_, 0, v___x_2019_);
v___x_2021_ = v_reuseFailAlloc_2032_;
goto v_reusejp_2020_;
}
v_reusejp_2020_:
{
lean_object* v___x_2022_; lean_object* v_a_2023_; lean_object* v___x_2025_; uint8_t v_isShared_2026_; uint8_t v_isSharedCheck_2030_; 
v___x_2022_ = l_Lake_buildAction___at___00__private_Lake_Build_Package_0__Lake_Package_fetchBuildArchive_spec__1___redArg___lam__0(v___x_1993_, v___x_2021_, v___x_2017_);
lean_dec_ref(v___x_2021_);
lean_dec(v___x_1993_);
v_a_2023_ = lean_ctor_get(v___x_2022_, 1);
v_isSharedCheck_2030_ = !lean_is_exclusive(v___x_2022_);
if (v_isSharedCheck_2030_ == 0)
{
lean_object* v_unused_2031_; 
v_unused_2031_ = lean_ctor_get(v___x_2022_, 0);
lean_dec(v_unused_2031_);
v___x_2025_ = v___x_2022_;
v_isShared_2026_ = v_isSharedCheck_2030_;
goto v_resetjp_2024_;
}
else
{
lean_inc(v_a_2023_);
lean_dec(v___x_2022_);
v___x_2025_ = lean_box(0);
v_isShared_2026_ = v_isSharedCheck_2030_;
goto v_resetjp_2024_;
}
v_resetjp_2024_:
{
lean_object* v___x_2028_; 
if (v_isShared_2026_ == 0)
{
lean_ctor_set(v___x_2025_, 0, v_a_2002_);
v___x_2028_ = v___x_2025_;
goto v_reusejp_2027_;
}
else
{
lean_object* v_reuseFailAlloc_2029_; 
v_reuseFailAlloc_2029_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2029_, 0, v_a_2002_);
lean_ctor_set(v_reuseFailAlloc_2029_, 1, v_a_2023_);
v___x_2028_ = v_reuseFailAlloc_2029_;
goto v_reusejp_2027_;
}
v_reusejp_2027_:
{
return v___x_2028_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_2037_; lean_object* v___x_2038_; uint8_t v___x_2039_; lean_object* v___x_2040_; lean_object* v___x_2041_; lean_object* v___x_2043_; 
lean_del_object(v___x_2010_);
lean_dec(v_a_2002_);
v_a_2037_ = lean_ctor_get(v___x_2012_, 0);
lean_inc(v_a_2037_);
lean_dec_ref_known(v___x_2012_, 1);
v___x_2038_ = lean_io_error_to_string(v_a_2037_);
v___x_2039_ = 3;
v___x_2040_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2040_, 0, v___x_2038_);
lean_ctor_set_uint8(v___x_2040_, sizeof(void*)*1, v___x_2039_);
v___x_2041_ = lean_array_push(v_a_2003_, v___x_2040_);
if (v_isShared_1988_ == 0)
{
lean_ctor_set(v___x_1987_, 0, v___x_2041_);
v___x_2043_ = v___x_1987_;
goto v_reusejp_2042_;
}
else
{
lean_object* v_reuseFailAlloc_2044_; 
v_reuseFailAlloc_2044_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_2044_, 0, v___x_2041_);
lean_ctor_set(v_reuseFailAlloc_2044_, 1, v_trace_1984_);
lean_ctor_set(v_reuseFailAlloc_2044_, 2, v_buildTime_1985_);
lean_ctor_set_uint8(v_reuseFailAlloc_2044_, sizeof(void*)*3 + 1, v_wantsRebuild_1983_);
v___x_2043_ = v_reuseFailAlloc_2044_;
goto v_reusejp_2042_;
}
v_reusejp_2042_:
{
lean_ctor_set_uint8(v___x_2043_, sizeof(void*)*3, v___x_1990_);
v_a_1995_ = v___x_2004_;
v_a_1996_ = v___x_2043_;
goto v___jp_1994_;
}
}
}
}
else
{
lean_object* v_a_2047_; lean_object* v___x_2048_; uint8_t v___x_2049_; lean_object* v___x_2050_; lean_object* v___x_2051_; lean_object* v___x_2053_; 
lean_dec(v_a_2002_);
lean_dec_ref(v___x_1992_);
v_a_2047_ = lean_ctor_get(v___x_2008_, 0);
lean_inc(v_a_2047_);
lean_dec_ref_known(v___x_2008_, 1);
v___x_2048_ = lean_io_error_to_string(v_a_2047_);
v___x_2049_ = 3;
v___x_2050_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2050_, 0, v___x_2048_);
lean_ctor_set_uint8(v___x_2050_, sizeof(void*)*1, v___x_2049_);
v___x_2051_ = lean_array_push(v_a_2003_, v___x_2050_);
if (v_isShared_1988_ == 0)
{
lean_ctor_set(v___x_1987_, 0, v___x_2051_);
v___x_2053_ = v___x_1987_;
goto v_reusejp_2052_;
}
else
{
lean_object* v_reuseFailAlloc_2054_; 
v_reuseFailAlloc_2054_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_2054_, 0, v___x_2051_);
lean_ctor_set(v_reuseFailAlloc_2054_, 1, v_trace_1984_);
lean_ctor_set(v_reuseFailAlloc_2054_, 2, v_buildTime_1985_);
lean_ctor_set_uint8(v_reuseFailAlloc_2054_, sizeof(void*)*3 + 1, v_wantsRebuild_1983_);
v___x_2053_ = v_reuseFailAlloc_2054_;
goto v_reusejp_2052_;
}
v_reusejp_2052_:
{
lean_ctor_set_uint8(v___x_2053_, sizeof(void*)*3, v___x_1990_);
v_a_1995_ = v___x_2004_;
v_a_1996_ = v___x_2053_;
goto v___jp_1994_;
}
}
}
else
{
lean_object* v_a_2055_; lean_object* v_a_2056_; lean_object* v___x_2058_; 
lean_dec_ref(v___x_1992_);
lean_dec_ref(v_traceFile_1960_);
v_a_2055_ = lean_ctor_get(v___x_2001_, 0);
lean_inc(v_a_2055_);
v_a_2056_ = lean_ctor_get(v___x_2001_, 1);
lean_inc(v_a_2056_);
lean_dec_ref_known(v___x_2001_, 2);
if (v_isShared_1988_ == 0)
{
lean_ctor_set(v___x_1987_, 0, v_a_2056_);
v___x_2058_ = v___x_1987_;
goto v_reusejp_2057_;
}
else
{
lean_object* v_reuseFailAlloc_2059_; 
v_reuseFailAlloc_2059_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_2059_, 0, v_a_2056_);
lean_ctor_set(v_reuseFailAlloc_2059_, 1, v_trace_1984_);
lean_ctor_set(v_reuseFailAlloc_2059_, 2, v_buildTime_1985_);
lean_ctor_set_uint8(v_reuseFailAlloc_2059_, sizeof(void*)*3 + 1, v_wantsRebuild_1983_);
v___x_2058_ = v_reuseFailAlloc_2059_;
goto v_reusejp_2057_;
}
v_reusejp_2057_:
{
lean_ctor_set_uint8(v___x_2058_, sizeof(void*)*3, v___x_1990_);
v_a_1995_ = v_a_2055_;
v_a_1996_ = v___x_2058_;
goto v___jp_1994_;
}
}
v___jp_1994_:
{
lean_object* v___x_1997_; lean_object* v___x_1998_; lean_object* v_a_1999_; 
v___x_1997_ = lean_box(0);
v___x_1998_ = l_Lake_buildAction___at___00__private_Lake_Build_Package_0__Lake_Package_fetchBuildArchive_spec__1___redArg___lam__0(v___x_1993_, v___x_1997_, v_a_1996_);
lean_dec(v___x_1993_);
v_a_1999_ = lean_ctor_get(v___x_1998_, 1);
lean_inc(v_a_1999_);
lean_dec_ref(v___x_1998_);
v_a_1966_ = v_a_1995_;
v_a_1967_ = v_a_1999_;
goto v___jp_1965_;
}
}
else
{
uint8_t v___x_2060_; 
lean_dec_ref(v_archiveFile_1957_);
lean_dec_ref(v_url_1956_);
v___x_2060_ = l_System_FilePath_pathExists(v_traceFile_1960_);
lean_dec_ref(v_traceFile_1960_);
if (v___x_2060_ == 0)
{
lean_dec_ref(v___x_1992_);
lean_del_object(v___x_1987_);
v_log_1970_ = v_log_1981_;
v_action_1971_ = v___x_1990_;
v_wantsRebuild_1972_ = v_noBuild_1989_;
v_trace_1973_ = v_trace_1984_;
v_buildTime_1974_ = v_buildTime_1985_;
goto v___jp_1969_;
}
else
{
lean_object* v___x_2061_; lean_object* v___x_2062_; lean_object* v___x_2063_; lean_object* v___x_2064_; 
v___x_2061_ = lean_box(0);
v___x_2062_ = ((lean_object*)(l___private_Lake_Build_Package_0__Lake_Package_recFetchDeps___redArg___closed__1));
v___x_2063_ = l___private_Lake_Build_Common_0__Lake_BuildMetadata_ofBuildCore(v_depTrace_1959_, v___x_2061_, v___x_2062_);
v___x_2064_ = l_Lake_BuildMetadata_writeFile(v___x_1992_, v___x_2063_);
lean_dec_ref(v___x_2063_);
if (lean_obj_tag(v___x_2064_) == 0)
{
lean_dec_ref_known(v___x_2064_, 1);
lean_del_object(v___x_1987_);
v_log_1970_ = v_log_1981_;
v_action_1971_ = v___x_1990_;
v_wantsRebuild_1972_ = v_noBuild_1989_;
v_trace_1973_ = v_trace_1984_;
v_buildTime_1974_ = v_buildTime_1985_;
goto v___jp_1969_;
}
else
{
lean_object* v_a_2065_; lean_object* v___x_2066_; uint8_t v___x_2067_; lean_object* v___x_2068_; lean_object* v___x_2069_; lean_object* v___x_2070_; lean_object* v___x_2072_; 
v_a_2065_ = lean_ctor_get(v___x_2064_, 0);
lean_inc(v_a_2065_);
lean_dec_ref_known(v___x_2064_, 1);
v___x_2066_ = lean_io_error_to_string(v_a_2065_);
v___x_2067_ = 3;
v___x_2068_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2068_, 0, v___x_2066_);
lean_ctor_set_uint8(v___x_2068_, sizeof(void*)*1, v___x_2067_);
v___x_2069_ = lean_array_get_size(v_log_1981_);
v___x_2070_ = lean_array_push(v_log_1981_, v___x_2068_);
if (v_isShared_1988_ == 0)
{
lean_ctor_set(v___x_1987_, 0, v___x_2070_);
v___x_2072_ = v___x_1987_;
goto v_reusejp_2071_;
}
else
{
lean_object* v_reuseFailAlloc_2074_; 
v_reuseFailAlloc_2074_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_2074_, 0, v___x_2070_);
lean_ctor_set(v_reuseFailAlloc_2074_, 1, v_trace_1984_);
lean_ctor_set(v_reuseFailAlloc_2074_, 2, v_buildTime_1985_);
v___x_2072_ = v_reuseFailAlloc_2074_;
goto v_reusejp_2071_;
}
v_reusejp_2071_:
{
lean_object* v___x_2073_; 
lean_ctor_set_uint8(v___x_2072_, sizeof(void*)*3, v___x_1990_);
lean_ctor_set_uint8(v___x_2072_, sizeof(void*)*3 + 1, v_noBuild_1989_);
v___x_2073_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2073_, 0, v___x_2069_);
lean_ctor_set(v___x_2073_, 1, v___x_2072_);
return v___x_2073_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_buildAction___at___00__private_Lake_Build_Package_0__Lake_Package_fetchBuildArchive_spec__1___redArg___boxed(lean_object* v_url_2076_, lean_object* v_archiveFile_2077_, lean_object* v_headers_2078_, lean_object* v_depTrace_2079_, lean_object* v_traceFile_2080_, lean_object* v_action_2081_, lean_object* v_a_2082_, lean_object* v_a_2083_, lean_object* v_a_2084_){
_start:
{
uint8_t v_action_boxed_2085_; lean_object* v_res_2086_; 
v_action_boxed_2085_ = lean_unbox(v_action_2081_);
v_res_2086_ = l_Lake_buildAction___at___00__private_Lake_Build_Package_0__Lake_Package_fetchBuildArchive_spec__1___redArg(v_url_2076_, v_archiveFile_2077_, v_headers_2078_, v_depTrace_2079_, v_traceFile_2080_, v_action_boxed_2085_, v_a_2082_, v_a_2083_);
lean_dec_ref(v_a_2082_);
lean_dec_ref(v_depTrace_2079_);
lean_dec_ref(v_headers_2078_);
return v_res_2086_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildAction___at___00__private_Lake_Build_Package_0__Lake_Package_fetchBuildArchive_spec__1(lean_object* v_url_2087_, lean_object* v_archiveFile_2088_, lean_object* v_headers_2089_, lean_object* v_a_2090_, lean_object* v_depTrace_2091_, lean_object* v_traceFile_2092_, uint8_t v_action_2093_, lean_object* v_a_2094_, lean_object* v_a_2095_, lean_object* v_a_2096_, lean_object* v_a_2097_, lean_object* v_a_2098_){
_start:
{
lean_object* v___x_2100_; 
v___x_2100_ = l_Lake_buildAction___at___00__private_Lake_Build_Package_0__Lake_Package_fetchBuildArchive_spec__1___redArg(v_url_2087_, v_archiveFile_2088_, v_headers_2089_, v_depTrace_2091_, v_traceFile_2092_, v_action_2093_, v_a_2097_, v_a_2098_);
return v___x_2100_;
}
}
LEAN_EXPORT lean_object* l_Lake_buildAction___at___00__private_Lake_Build_Package_0__Lake_Package_fetchBuildArchive_spec__1___boxed(lean_object* v_url_2101_, lean_object* v_archiveFile_2102_, lean_object* v_headers_2103_, lean_object* v_a_2104_, lean_object* v_depTrace_2105_, lean_object* v_traceFile_2106_, lean_object* v_action_2107_, lean_object* v_a_2108_, lean_object* v_a_2109_, lean_object* v_a_2110_, lean_object* v_a_2111_, lean_object* v_a_2112_, lean_object* v_a_2113_){
_start:
{
uint8_t v_action_boxed_2114_; lean_object* v_res_2115_; 
v_action_boxed_2114_ = lean_unbox(v_action_2107_);
v_res_2115_ = l_Lake_buildAction___at___00__private_Lake_Build_Package_0__Lake_Package_fetchBuildArchive_spec__1(v_url_2101_, v_archiveFile_2102_, v_headers_2103_, v_a_2104_, v_depTrace_2105_, v_traceFile_2106_, v_action_boxed_2114_, v_a_2108_, v_a_2109_, v_a_2110_, v_a_2111_, v_a_2112_);
lean_dec_ref(v_a_2111_);
lean_dec(v_a_2110_);
lean_dec(v_a_2109_);
lean_dec(v_a_2108_);
lean_dec_ref(v_depTrace_2105_);
lean_dec_ref(v_a_2104_);
lean_dec_ref(v_headers_2103_);
return v_res_2115_;
}
}
LEAN_EXPORT uint8_t l_Option_instBEq_beq___at___00__private_Lake_Build_Common_0__Lake_checkHashUpToDate_x27___at___00Lake_SavedTrace_replayIfUpToDate_x27___at___00__private_Lake_Build_Package_0__Lake_Package_fetchBuildArchive_spec__0_spec__0_spec__2(lean_object* v_x_2116_, lean_object* v_x_2117_){
_start:
{
if (lean_obj_tag(v_x_2116_) == 0)
{
if (lean_obj_tag(v_x_2117_) == 0)
{
uint8_t v___x_2118_; 
v___x_2118_ = 1;
return v___x_2118_;
}
else
{
uint8_t v___x_2119_; 
v___x_2119_ = 0;
return v___x_2119_;
}
}
else
{
if (lean_obj_tag(v_x_2117_) == 0)
{
uint8_t v___x_2120_; 
v___x_2120_ = 0;
return v___x_2120_;
}
else
{
lean_object* v_val_2121_; lean_object* v_val_2122_; uint64_t v___x_2123_; uint64_t v___x_2124_; uint8_t v___x_2125_; 
v_val_2121_ = lean_ctor_get(v_x_2116_, 0);
v_val_2122_ = lean_ctor_get(v_x_2117_, 0);
v___x_2123_ = lean_unbox_uint64(v_val_2121_);
v___x_2124_ = lean_unbox_uint64(v_val_2122_);
v___x_2125_ = lean_uint64_dec_eq(v___x_2123_, v___x_2124_);
return v___x_2125_;
}
}
}
}
LEAN_EXPORT lean_object* l_Option_instBEq_beq___at___00__private_Lake_Build_Common_0__Lake_checkHashUpToDate_x27___at___00Lake_SavedTrace_replayIfUpToDate_x27___at___00__private_Lake_Build_Package_0__Lake_Package_fetchBuildArchive_spec__0_spec__0_spec__2___boxed(lean_object* v_x_2126_, lean_object* v_x_2127_){
_start:
{
uint8_t v_res_2128_; lean_object* v_r_2129_; 
v_res_2128_ = l_Option_instBEq_beq___at___00__private_Lake_Build_Common_0__Lake_checkHashUpToDate_x27___at___00Lake_SavedTrace_replayIfUpToDate_x27___at___00__private_Lake_Build_Package_0__Lake_Package_fetchBuildArchive_spec__0_spec__0_spec__2(v_x_2126_, v_x_2127_);
lean_dec(v_x_2127_);
lean_dec(v_x_2126_);
v_r_2129_ = lean_box(v_res_2128_);
return v_r_2129_;
}
}
LEAN_EXPORT uint8_t l_Lake_MTime_checkUpToDate___at___00Lake_SavedTrace_replayIfUpToDate_x27___at___00__private_Lake_Build_Package_0__Lake_Package_fetchBuildArchive_spec__0_spec__1(lean_object* v_info_2130_, lean_object* v_self_2131_){
_start:
{
lean_object* v___x_2133_; 
v___x_2133_ = lean_io_metadata(v_info_2130_);
if (lean_obj_tag(v___x_2133_) == 0)
{
lean_object* v_a_2134_; lean_object* v_modified_2135_; uint8_t v___x_2136_; 
v_a_2134_ = lean_ctor_get(v___x_2133_, 0);
lean_inc(v_a_2134_);
lean_dec_ref_known(v___x_2133_, 1);
v_modified_2135_ = lean_ctor_get(v_a_2134_, 1);
lean_inc_ref(v_modified_2135_);
lean_dec(v_a_2134_);
v___x_2136_ = l_IO_FS_instOrdSystemTime_ord(v_self_2131_, v_modified_2135_);
lean_dec_ref(v_modified_2135_);
if (v___x_2136_ == 0)
{
uint8_t v___x_2137_; 
v___x_2137_ = 1;
return v___x_2137_;
}
else
{
uint8_t v___x_2138_; 
v___x_2138_ = 0;
return v___x_2138_;
}
}
else
{
uint8_t v___x_2139_; 
lean_dec_ref_known(v___x_2133_, 1);
v___x_2139_ = 0;
return v___x_2139_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_MTime_checkUpToDate___at___00Lake_SavedTrace_replayIfUpToDate_x27___at___00__private_Lake_Build_Package_0__Lake_Package_fetchBuildArchive_spec__0_spec__1___boxed(lean_object* v_info_2140_, lean_object* v_self_2141_, lean_object* v_a_2142_){
_start:
{
uint8_t v_res_2143_; lean_object* v_r_2144_; 
v_res_2143_ = l_Lake_MTime_checkUpToDate___at___00Lake_SavedTrace_replayIfUpToDate_x27___at___00__private_Lake_Build_Package_0__Lake_Package_fetchBuildArchive_spec__0_spec__1(v_info_2140_, v_self_2141_);
lean_dec_ref(v_self_2141_);
lean_dec_ref(v_info_2140_);
v_r_2144_ = lean_box(v_res_2143_);
return v_r_2144_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_checkHashUpToDate_x27___at___00Lake_SavedTrace_replayIfUpToDate_x27___at___00__private_Lake_Build_Package_0__Lake_Package_fetchBuildArchive_spec__0_spec__0___redArg(lean_object* v_info_2145_, lean_object* v_depTrace_2146_, lean_object* v_depHash_2147_, lean_object* v_oldTrace_2148_, lean_object* v_a_2149_, lean_object* v_a_2150_){
_start:
{
uint64_t v_hash_2152_; lean_object* v___x_2153_; lean_object* v___x_2154_; uint8_t v___x_2155_; 
v_hash_2152_ = lean_ctor_get_uint64(v_depTrace_2146_, sizeof(void*)*3);
v___x_2153_ = lean_box_uint64(v_hash_2152_);
v___x_2154_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2154_, 0, v___x_2153_);
v___x_2155_ = l_Option_instBEq_beq___at___00__private_Lake_Build_Common_0__Lake_checkHashUpToDate_x27___at___00Lake_SavedTrace_replayIfUpToDate_x27___at___00__private_Lake_Build_Package_0__Lake_Package_fetchBuildArchive_spec__0_spec__0_spec__2(v___x_2154_, v_depHash_2147_);
lean_dec_ref_known(v___x_2154_, 1);
if (v___x_2155_ == 0)
{
lean_object* v_toBuildConfig_2156_; uint8_t v_oldMode_2157_; 
v_toBuildConfig_2156_ = lean_ctor_get(v_a_2149_, 0);
v_oldMode_2157_ = lean_ctor_get_uint8(v_toBuildConfig_2156_, sizeof(void*)*5);
if (v_oldMode_2157_ == 0)
{
uint8_t v___x_2158_; lean_object* v___x_2159_; lean_object* v___x_2160_; 
v___x_2158_ = 0;
v___x_2159_ = lean_box(v___x_2158_);
v___x_2160_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2160_, 0, v___x_2159_);
lean_ctor_set(v___x_2160_, 1, v_a_2150_);
return v___x_2160_;
}
else
{
uint8_t v___x_2161_; 
v___x_2161_ = l_Lake_MTime_checkUpToDate___at___00Lake_SavedTrace_replayIfUpToDate_x27___at___00__private_Lake_Build_Package_0__Lake_Package_fetchBuildArchive_spec__0_spec__1(v_info_2145_, v_oldTrace_2148_);
if (v___x_2161_ == 0)
{
uint8_t v___x_2162_; lean_object* v___x_2163_; lean_object* v___x_2164_; 
v___x_2162_ = 0;
v___x_2163_ = lean_box(v___x_2162_);
v___x_2164_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2164_, 0, v___x_2163_);
lean_ctor_set(v___x_2164_, 1, v_a_2150_);
return v___x_2164_;
}
else
{
uint8_t v___x_2165_; lean_object* v___x_2166_; lean_object* v___x_2167_; 
v___x_2165_ = 1;
v___x_2166_ = lean_box(v___x_2165_);
v___x_2167_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2167_, 0, v___x_2166_);
lean_ctor_set(v___x_2167_, 1, v_a_2150_);
return v___x_2167_;
}
}
}
else
{
uint8_t v___x_2168_; 
v___x_2168_ = l_System_FilePath_pathExists(v_info_2145_);
if (v___x_2168_ == 0)
{
uint8_t v___x_2169_; lean_object* v___x_2170_; lean_object* v___x_2171_; 
v___x_2169_ = 0;
v___x_2170_ = lean_box(v___x_2169_);
v___x_2171_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2171_, 0, v___x_2170_);
lean_ctor_set(v___x_2171_, 1, v_a_2150_);
return v___x_2171_;
}
else
{
uint8_t v___x_2172_; lean_object* v___x_2173_; lean_object* v___x_2174_; 
v___x_2172_ = 2;
v___x_2173_ = lean_box(v___x_2172_);
v___x_2174_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2174_, 0, v___x_2173_);
lean_ctor_set(v___x_2174_, 1, v_a_2150_);
return v___x_2174_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_checkHashUpToDate_x27___at___00Lake_SavedTrace_replayIfUpToDate_x27___at___00__private_Lake_Build_Package_0__Lake_Package_fetchBuildArchive_spec__0_spec__0___redArg___boxed(lean_object* v_info_2175_, lean_object* v_depTrace_2176_, lean_object* v_depHash_2177_, lean_object* v_oldTrace_2178_, lean_object* v_a_2179_, lean_object* v_a_2180_, lean_object* v_a_2181_){
_start:
{
lean_object* v_res_2182_; 
v_res_2182_ = l___private_Lake_Build_Common_0__Lake_checkHashUpToDate_x27___at___00Lake_SavedTrace_replayIfUpToDate_x27___at___00__private_Lake_Build_Package_0__Lake_Package_fetchBuildArchive_spec__0_spec__0___redArg(v_info_2175_, v_depTrace_2176_, v_depHash_2177_, v_oldTrace_2178_, v_a_2179_, v_a_2180_);
lean_dec_ref(v_a_2179_);
lean_dec_ref(v_oldTrace_2178_);
lean_dec(v_depHash_2177_);
lean_dec_ref(v_depTrace_2176_);
lean_dec_ref(v_info_2175_);
return v_res_2182_;
}
}
static lean_object* _init_l_Lake_SavedTrace_replayIfUpToDate_x27___at___00__private_Lake_Build_Package_0__Lake_Package_fetchBuildArchive_spec__0___closed__0(void){
_start:
{
uint8_t v___x_2183_; lean_object* v___x_2184_; 
v___x_2183_ = 0;
v___x_2184_ = l_Lake_OutputStatus_ctorIdx(v___x_2183_);
return v___x_2184_;
}
}
LEAN_EXPORT lean_object* l_Lake_SavedTrace_replayIfUpToDate_x27___at___00__private_Lake_Build_Package_0__Lake_Package_fetchBuildArchive_spec__0(lean_object* v_a_2185_, lean_object* v_info_2186_, lean_object* v_depTrace_2187_, lean_object* v_savedTrace_2188_, lean_object* v_oldTrace_2189_, lean_object* v_a_2190_, lean_object* v_a_2191_, lean_object* v_a_2192_, lean_object* v_a_2193_, lean_object* v_a_2194_){
_start:
{
if (lean_obj_tag(v_savedTrace_2188_) == 2)
{
lean_object* v_data_2196_; lean_object* v___x_2198_; uint8_t v_isShared_2199_; uint8_t v_isSharedCheck_2247_; 
v_data_2196_ = lean_ctor_get(v_savedTrace_2188_, 0);
v_isSharedCheck_2247_ = !lean_is_exclusive(v_savedTrace_2188_);
if (v_isSharedCheck_2247_ == 0)
{
v___x_2198_ = v_savedTrace_2188_;
v_isShared_2199_ = v_isSharedCheck_2247_;
goto v_resetjp_2197_;
}
else
{
lean_inc(v_data_2196_);
lean_dec(v_savedTrace_2188_);
v___x_2198_ = lean_box(0);
v_isShared_2199_ = v_isSharedCheck_2247_;
goto v_resetjp_2197_;
}
v_resetjp_2197_:
{
uint64_t v_depHash_2200_; lean_object* v_log_2201_; lean_object* v___x_2202_; lean_object* v___x_2204_; 
v_depHash_2200_ = lean_ctor_get_uint64(v_data_2196_, sizeof(void*)*3);
v_log_2201_ = lean_ctor_get(v_data_2196_, 2);
lean_inc_ref(v_log_2201_);
lean_dec_ref(v_data_2196_);
v___x_2202_ = lean_box_uint64(v_depHash_2200_);
if (v_isShared_2199_ == 0)
{
lean_ctor_set_tag(v___x_2198_, 1);
lean_ctor_set(v___x_2198_, 0, v___x_2202_);
v___x_2204_ = v___x_2198_;
goto v_reusejp_2203_;
}
else
{
lean_object* v_reuseFailAlloc_2246_; 
v_reuseFailAlloc_2246_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2246_, 0, v___x_2202_);
v___x_2204_ = v_reuseFailAlloc_2246_;
goto v_reusejp_2203_;
}
v_reusejp_2203_:
{
lean_object* v___x_2205_; lean_object* v_a_2206_; lean_object* v_a_2207_; lean_object* v___x_2209_; uint8_t v_isShared_2210_; uint8_t v_isSharedCheck_2245_; 
v___x_2205_ = l___private_Lake_Build_Common_0__Lake_checkHashUpToDate_x27___at___00Lake_SavedTrace_replayIfUpToDate_x27___at___00__private_Lake_Build_Package_0__Lake_Package_fetchBuildArchive_spec__0_spec__0___redArg(v_info_2186_, v_depTrace_2187_, v___x_2204_, v_oldTrace_2189_, v_a_2193_, v_a_2194_);
lean_dec_ref(v___x_2204_);
v_a_2206_ = lean_ctor_get(v___x_2205_, 0);
v_a_2207_ = lean_ctor_get(v___x_2205_, 1);
v_isSharedCheck_2245_ = !lean_is_exclusive(v___x_2205_);
if (v_isSharedCheck_2245_ == 0)
{
v___x_2209_ = v___x_2205_;
v_isShared_2210_ = v_isSharedCheck_2245_;
goto v_resetjp_2208_;
}
else
{
lean_inc(v_a_2207_);
lean_inc(v_a_2206_);
lean_dec(v___x_2205_);
v___x_2209_ = lean_box(0);
v_isShared_2210_ = v_isSharedCheck_2245_;
goto v_resetjp_2208_;
}
v_resetjp_2208_:
{
lean_object* v___y_2212_; uint8_t v___x_2216_; lean_object* v___x_2217_; lean_object* v___x_2218_; uint8_t v___x_2219_; 
v___x_2216_ = lean_unbox(v_a_2206_);
v___x_2217_ = l_Lake_OutputStatus_ctorIdx(v___x_2216_);
v___x_2218_ = lean_obj_once(&l_Lake_SavedTrace_replayIfUpToDate_x27___at___00__private_Lake_Build_Package_0__Lake_Package_fetchBuildArchive_spec__0___closed__0, &l_Lake_SavedTrace_replayIfUpToDate_x27___at___00__private_Lake_Build_Package_0__Lake_Package_fetchBuildArchive_spec__0___closed__0_once, _init_l_Lake_SavedTrace_replayIfUpToDate_x27___at___00__private_Lake_Build_Package_0__Lake_Package_fetchBuildArchive_spec__0___closed__0);
v___x_2219_ = lean_nat_dec_eq(v___x_2217_, v___x_2218_);
lean_dec(v___x_2217_);
if (v___x_2219_ == 0)
{
lean_object* v_log_2220_; uint8_t v_action_2221_; uint8_t v_wantsRebuild_2222_; lean_object* v_trace_2223_; lean_object* v_buildTime_2224_; lean_object* v___x_2226_; uint8_t v_isShared_2227_; uint8_t v_isSharedCheck_2244_; 
v_log_2220_ = lean_ctor_get(v_a_2207_, 0);
v_action_2221_ = lean_ctor_get_uint8(v_a_2207_, sizeof(void*)*3);
v_wantsRebuild_2222_ = lean_ctor_get_uint8(v_a_2207_, sizeof(void*)*3 + 1);
v_trace_2223_ = lean_ctor_get(v_a_2207_, 1);
v_buildTime_2224_ = lean_ctor_get(v_a_2207_, 2);
v_isSharedCheck_2244_ = !lean_is_exclusive(v_a_2207_);
if (v_isSharedCheck_2244_ == 0)
{
v___x_2226_ = v_a_2207_;
v_isShared_2227_ = v_isSharedCheck_2244_;
goto v_resetjp_2225_;
}
else
{
lean_inc(v_buildTime_2224_);
lean_inc(v_trace_2223_);
lean_inc(v_log_2220_);
lean_dec(v_a_2207_);
v___x_2226_ = lean_box(0);
v_isShared_2227_ = v_isSharedCheck_2244_;
goto v_resetjp_2225_;
}
v_resetjp_2225_:
{
uint8_t v___x_2228_; uint8_t v___x_2229_; lean_object* v___x_2231_; 
v___x_2228_ = 2;
v___x_2229_ = l_Lake_JobAction_merge(v_action_2221_, v___x_2228_);
if (v_isShared_2227_ == 0)
{
v___x_2231_ = v___x_2226_;
goto v_reusejp_2230_;
}
else
{
lean_object* v_reuseFailAlloc_2243_; 
v_reuseFailAlloc_2243_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_2243_, 0, v_log_2220_);
lean_ctor_set(v_reuseFailAlloc_2243_, 1, v_trace_2223_);
lean_ctor_set(v_reuseFailAlloc_2243_, 2, v_buildTime_2224_);
lean_ctor_set_uint8(v_reuseFailAlloc_2243_, sizeof(void*)*3 + 1, v_wantsRebuild_2222_);
v___x_2231_ = v_reuseFailAlloc_2243_;
goto v_reusejp_2230_;
}
v_reusejp_2230_:
{
lean_object* v___x_2232_; 
lean_ctor_set_uint8(v___x_2231_, sizeof(void*)*3, v___x_2229_);
v___x_2232_ = l___private_Lake_Build_Common_0__Lake_SavedTrace_replayIfUpToDate_x27_replay(v_log_2201_, v_a_2185_, v_a_2190_, v_a_2191_, v_a_2192_, v_a_2193_, v___x_2231_);
lean_dec_ref(v_log_2201_);
if (lean_obj_tag(v___x_2232_) == 0)
{
lean_object* v_a_2233_; 
v_a_2233_ = lean_ctor_get(v___x_2232_, 1);
lean_inc(v_a_2233_);
lean_dec_ref_known(v___x_2232_, 2);
v___y_2212_ = v_a_2233_;
goto v___jp_2211_;
}
else
{
lean_object* v_a_2234_; lean_object* v_a_2235_; lean_object* v___x_2237_; uint8_t v_isShared_2238_; uint8_t v_isSharedCheck_2242_; 
lean_del_object(v___x_2209_);
lean_dec(v_a_2206_);
v_a_2234_ = lean_ctor_get(v___x_2232_, 0);
v_a_2235_ = lean_ctor_get(v___x_2232_, 1);
v_isSharedCheck_2242_ = !lean_is_exclusive(v___x_2232_);
if (v_isSharedCheck_2242_ == 0)
{
v___x_2237_ = v___x_2232_;
v_isShared_2238_ = v_isSharedCheck_2242_;
goto v_resetjp_2236_;
}
else
{
lean_inc(v_a_2235_);
lean_inc(v_a_2234_);
lean_dec(v___x_2232_);
v___x_2237_ = lean_box(0);
v_isShared_2238_ = v_isSharedCheck_2242_;
goto v_resetjp_2236_;
}
v_resetjp_2236_:
{
lean_object* v___x_2240_; 
if (v_isShared_2238_ == 0)
{
v___x_2240_ = v___x_2237_;
goto v_reusejp_2239_;
}
else
{
lean_object* v_reuseFailAlloc_2241_; 
v_reuseFailAlloc_2241_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2241_, 0, v_a_2234_);
lean_ctor_set(v_reuseFailAlloc_2241_, 1, v_a_2235_);
v___x_2240_ = v_reuseFailAlloc_2241_;
goto v_reusejp_2239_;
}
v_reusejp_2239_:
{
return v___x_2240_;
}
}
}
}
}
}
else
{
lean_dec_ref(v_log_2201_);
v___y_2212_ = v_a_2207_;
goto v___jp_2211_;
}
v___jp_2211_:
{
lean_object* v___x_2214_; 
if (v_isShared_2210_ == 0)
{
lean_ctor_set(v___x_2209_, 1, v___y_2212_);
v___x_2214_ = v___x_2209_;
goto v_reusejp_2213_;
}
else
{
lean_object* v_reuseFailAlloc_2215_; 
v_reuseFailAlloc_2215_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2215_, 0, v_a_2206_);
lean_ctor_set(v_reuseFailAlloc_2215_, 1, v___y_2212_);
v___x_2214_ = v_reuseFailAlloc_2215_;
goto v_reusejp_2213_;
}
v_reusejp_2213_:
{
return v___x_2214_;
}
}
}
}
}
}
else
{
lean_object* v_toBuildConfig_2248_; uint8_t v_oldMode_2249_; 
lean_dec(v_savedTrace_2188_);
v_toBuildConfig_2248_ = lean_ctor_get(v_a_2193_, 0);
v_oldMode_2249_ = lean_ctor_get_uint8(v_toBuildConfig_2248_, sizeof(void*)*5);
if (v_oldMode_2249_ == 0)
{
uint8_t v___x_2250_; lean_object* v___x_2251_; lean_object* v___x_2252_; 
v___x_2250_ = 0;
v___x_2251_ = lean_box(v___x_2250_);
v___x_2252_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2252_, 0, v___x_2251_);
lean_ctor_set(v___x_2252_, 1, v_a_2194_);
return v___x_2252_;
}
else
{
uint8_t v___x_2253_; 
v___x_2253_ = l_Lake_MTime_checkUpToDate___at___00Lake_SavedTrace_replayIfUpToDate_x27___at___00__private_Lake_Build_Package_0__Lake_Package_fetchBuildArchive_spec__0_spec__1(v_info_2186_, v_oldTrace_2189_);
if (v___x_2253_ == 0)
{
uint8_t v___x_2254_; lean_object* v___x_2255_; lean_object* v___x_2256_; 
v___x_2254_ = 0;
v___x_2255_ = lean_box(v___x_2254_);
v___x_2256_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2256_, 0, v___x_2255_);
lean_ctor_set(v___x_2256_, 1, v_a_2194_);
return v___x_2256_;
}
else
{
uint8_t v___x_2257_; lean_object* v___x_2258_; lean_object* v___x_2259_; 
v___x_2257_ = 1;
v___x_2258_ = lean_box(v___x_2257_);
v___x_2259_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2259_, 0, v___x_2258_);
lean_ctor_set(v___x_2259_, 1, v_a_2194_);
return v___x_2259_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_SavedTrace_replayIfUpToDate_x27___at___00__private_Lake_Build_Package_0__Lake_Package_fetchBuildArchive_spec__0___boxed(lean_object* v_a_2260_, lean_object* v_info_2261_, lean_object* v_depTrace_2262_, lean_object* v_savedTrace_2263_, lean_object* v_oldTrace_2264_, lean_object* v_a_2265_, lean_object* v_a_2266_, lean_object* v_a_2267_, lean_object* v_a_2268_, lean_object* v_a_2269_, lean_object* v_a_2270_){
_start:
{
lean_object* v_res_2271_; 
v_res_2271_ = l_Lake_SavedTrace_replayIfUpToDate_x27___at___00__private_Lake_Build_Package_0__Lake_Package_fetchBuildArchive_spec__0(v_a_2260_, v_info_2261_, v_depTrace_2262_, v_savedTrace_2263_, v_oldTrace_2264_, v_a_2265_, v_a_2266_, v_a_2267_, v_a_2268_, v_a_2269_);
lean_dec_ref(v_a_2268_);
lean_dec(v_a_2267_);
lean_dec(v_a_2266_);
lean_dec(v_a_2265_);
lean_dec_ref(v_oldTrace_2264_);
lean_dec_ref(v_depTrace_2262_);
lean_dec_ref(v_info_2261_);
lean_dec_ref(v_a_2260_);
return v_res_2271_;
}
}
static lean_object* _init_l___private_Lake_Build_Package_0__Lake_Package_fetchBuildArchive___closed__3(void){
_start:
{
lean_object* v___x_2276_; lean_object* v___x_2277_; 
v___x_2276_ = lean_unsigned_to_nat(0u);
v___x_2277_ = lean_nat_to_int(v___x_2276_);
return v___x_2277_;
}
}
static lean_object* _init_l___private_Lake_Build_Package_0__Lake_Package_fetchBuildArchive___closed__4(void){
_start:
{
uint32_t v___x_2278_; lean_object* v___x_2279_; lean_object* v___x_2280_; 
v___x_2278_ = 0;
v___x_2279_ = lean_obj_once(&l___private_Lake_Build_Package_0__Lake_Package_fetchBuildArchive___closed__3, &l___private_Lake_Build_Package_0__Lake_Package_fetchBuildArchive___closed__3_once, _init_l___private_Lake_Build_Package_0__Lake_Package_fetchBuildArchive___closed__3);
v___x_2280_ = lean_alloc_ctor(0, 1, 4);
lean_ctor_set(v___x_2280_, 0, v___x_2279_);
lean_ctor_set_uint32(v___x_2280_, sizeof(void*)*1, v___x_2278_);
return v___x_2280_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Package_0__Lake_Package_fetchBuildArchive(lean_object* v_self_2281_, lean_object* v_url_2282_, lean_object* v_archiveFile_2283_, lean_object* v_headers_2284_, lean_object* v_a_2285_, lean_object* v_a_2286_, lean_object* v_a_2287_, lean_object* v_a_2288_, lean_object* v_a_2289_, lean_object* v_a_2290_){
_start:
{
lean_object* v___y_2293_; uint8_t v___y_2294_; lean_object* v___y_2295_; lean_object* v___y_2296_; uint8_t v___y_2297_; lean_object* v___y_2298_; uint8_t v_a_2324_; lean_object* v_a_2325_; lean_object* v_a_2340_; lean_object* v_a_2341_; lean_object* v_log_2343_; uint8_t v_action_2344_; uint8_t v_wantsRebuild_2345_; lean_object* v_trace_2346_; lean_object* v_buildTime_2347_; lean_object* v___x_2349_; uint8_t v_isShared_2350_; uint8_t v_isSharedCheck_2387_; 
v_log_2343_ = lean_ctor_get(v_a_2290_, 0);
v_action_2344_ = lean_ctor_get_uint8(v_a_2290_, sizeof(void*)*3);
v_wantsRebuild_2345_ = lean_ctor_get_uint8(v_a_2290_, sizeof(void*)*3 + 1);
v_trace_2346_ = lean_ctor_get(v_a_2290_, 1);
v_buildTime_2347_ = lean_ctor_get(v_a_2290_, 2);
v_isSharedCheck_2387_ = !lean_is_exclusive(v_a_2290_);
if (v_isSharedCheck_2387_ == 0)
{
v___x_2349_ = v_a_2290_;
v_isShared_2350_ = v_isSharedCheck_2387_;
goto v_resetjp_2348_;
}
else
{
lean_inc(v_buildTime_2347_);
lean_inc(v_trace_2346_);
lean_inc(v_log_2343_);
lean_dec(v_a_2290_);
v___x_2349_ = lean_box(0);
v_isShared_2350_ = v_isSharedCheck_2387_;
goto v_resetjp_2348_;
}
v___jp_2292_:
{
uint8_t v___x_2299_; uint8_t v___x_2300_; uint8_t v___x_2301_; lean_object* v___x_2302_; 
v___x_2299_ = 1;
v___x_2300_ = 3;
v___x_2301_ = l_Lake_JobAction_merge(v___y_2297_, v___x_2300_);
v___x_2302_ = l_Lake_untar(v_archiveFile_2283_, v___y_2298_, v___x_2299_, v___y_2293_);
if (lean_obj_tag(v___x_2302_) == 0)
{
lean_object* v_a_2303_; lean_object* v_a_2304_; lean_object* v___x_2306_; uint8_t v_isShared_2307_; uint8_t v_isSharedCheck_2312_; 
v_a_2303_ = lean_ctor_get(v___x_2302_, 0);
v_a_2304_ = lean_ctor_get(v___x_2302_, 1);
v_isSharedCheck_2312_ = !lean_is_exclusive(v___x_2302_);
if (v_isSharedCheck_2312_ == 0)
{
v___x_2306_ = v___x_2302_;
v_isShared_2307_ = v_isSharedCheck_2312_;
goto v_resetjp_2305_;
}
else
{
lean_inc(v_a_2304_);
lean_inc(v_a_2303_);
lean_dec(v___x_2302_);
v___x_2306_ = lean_box(0);
v_isShared_2307_ = v_isSharedCheck_2312_;
goto v_resetjp_2305_;
}
v_resetjp_2305_:
{
lean_object* v___x_2308_; lean_object* v___x_2310_; 
v___x_2308_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_2308_, 0, v_a_2304_);
lean_ctor_set(v___x_2308_, 1, v___y_2296_);
lean_ctor_set(v___x_2308_, 2, v___y_2295_);
lean_ctor_set_uint8(v___x_2308_, sizeof(void*)*3, v___x_2301_);
lean_ctor_set_uint8(v___x_2308_, sizeof(void*)*3 + 1, v___y_2294_);
if (v_isShared_2307_ == 0)
{
lean_ctor_set(v___x_2306_, 1, v___x_2308_);
v___x_2310_ = v___x_2306_;
goto v_reusejp_2309_;
}
else
{
lean_object* v_reuseFailAlloc_2311_; 
v_reuseFailAlloc_2311_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2311_, 0, v_a_2303_);
lean_ctor_set(v_reuseFailAlloc_2311_, 1, v___x_2308_);
v___x_2310_ = v_reuseFailAlloc_2311_;
goto v_reusejp_2309_;
}
v_reusejp_2309_:
{
return v___x_2310_;
}
}
}
else
{
lean_object* v_a_2313_; lean_object* v_a_2314_; lean_object* v___x_2316_; uint8_t v_isShared_2317_; uint8_t v_isSharedCheck_2322_; 
v_a_2313_ = lean_ctor_get(v___x_2302_, 0);
v_a_2314_ = lean_ctor_get(v___x_2302_, 1);
v_isSharedCheck_2322_ = !lean_is_exclusive(v___x_2302_);
if (v_isSharedCheck_2322_ == 0)
{
v___x_2316_ = v___x_2302_;
v_isShared_2317_ = v_isSharedCheck_2322_;
goto v_resetjp_2315_;
}
else
{
lean_inc(v_a_2314_);
lean_inc(v_a_2313_);
lean_dec(v___x_2302_);
v___x_2316_ = lean_box(0);
v_isShared_2317_ = v_isSharedCheck_2322_;
goto v_resetjp_2315_;
}
v_resetjp_2315_:
{
lean_object* v___x_2318_; lean_object* v___x_2320_; 
v___x_2318_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_2318_, 0, v_a_2314_);
lean_ctor_set(v___x_2318_, 1, v___y_2296_);
lean_ctor_set(v___x_2318_, 2, v___y_2295_);
lean_ctor_set_uint8(v___x_2318_, sizeof(void*)*3, v___x_2301_);
lean_ctor_set_uint8(v___x_2318_, sizeof(void*)*3 + 1, v___y_2294_);
if (v_isShared_2317_ == 0)
{
lean_ctor_set(v___x_2316_, 1, v___x_2318_);
v___x_2320_ = v___x_2316_;
goto v_reusejp_2319_;
}
else
{
lean_object* v_reuseFailAlloc_2321_; 
v_reuseFailAlloc_2321_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2321_, 0, v_a_2313_);
lean_ctor_set(v_reuseFailAlloc_2321_, 1, v___x_2318_);
v___x_2320_ = v_reuseFailAlloc_2321_;
goto v_reusejp_2319_;
}
v_reusejp_2319_:
{
return v___x_2320_;
}
}
}
}
v___jp_2323_:
{
lean_object* v_config_2326_; lean_object* v_dir_2327_; lean_object* v_buildDir_2328_; lean_object* v_log_2329_; uint8_t v_action_2330_; uint8_t v_wantsRebuild_2331_; lean_object* v_trace_2332_; lean_object* v_buildTime_2333_; lean_object* v___x_2334_; lean_object* v___x_2335_; uint8_t v___x_2336_; 
v_config_2326_ = lean_ctor_get(v_self_2281_, 6);
lean_inc_ref(v_config_2326_);
v_dir_2327_ = lean_ctor_get(v_self_2281_, 4);
lean_inc_ref(v_dir_2327_);
lean_dec_ref(v_self_2281_);
v_buildDir_2328_ = lean_ctor_get(v_config_2326_, 5);
lean_inc_ref(v_buildDir_2328_);
lean_dec_ref(v_config_2326_);
v_log_2329_ = lean_ctor_get(v_a_2325_, 0);
v_action_2330_ = lean_ctor_get_uint8(v_a_2325_, sizeof(void*)*3);
v_wantsRebuild_2331_ = lean_ctor_get_uint8(v_a_2325_, sizeof(void*)*3 + 1);
v_trace_2332_ = lean_ctor_get(v_a_2325_, 1);
v_buildTime_2333_ = lean_ctor_get(v_a_2325_, 2);
v___x_2334_ = l_System_FilePath_normalize(v_buildDir_2328_);
v___x_2335_ = l_Lake_joinRelative(v_dir_2327_, v___x_2334_);
v___x_2336_ = l_System_FilePath_pathExists(v___x_2335_);
if (v_a_2324_ == 0)
{
lean_inc(v_buildTime_2333_);
lean_inc_ref(v_trace_2332_);
lean_inc_ref(v_log_2329_);
lean_dec_ref(v_a_2325_);
v___y_2293_ = v_log_2329_;
v___y_2294_ = v_wantsRebuild_2331_;
v___y_2295_ = v_buildTime_2333_;
v___y_2296_ = v_trace_2332_;
v___y_2297_ = v_action_2330_;
v___y_2298_ = v___x_2335_;
goto v___jp_2292_;
}
else
{
if (v___x_2336_ == 0)
{
lean_inc(v_buildTime_2333_);
lean_inc_ref(v_trace_2332_);
lean_inc_ref(v_log_2329_);
lean_dec_ref(v_a_2325_);
v___y_2293_ = v_log_2329_;
v___y_2294_ = v_wantsRebuild_2331_;
v___y_2295_ = v_buildTime_2333_;
v___y_2296_ = v_trace_2332_;
v___y_2297_ = v_action_2330_;
v___y_2298_ = v___x_2335_;
goto v___jp_2292_;
}
else
{
lean_object* v___x_2337_; lean_object* v___x_2338_; 
lean_dec_ref(v___x_2335_);
lean_dec_ref(v_archiveFile_2283_);
v___x_2337_ = lean_box(0);
v___x_2338_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2338_, 0, v___x_2337_);
lean_ctor_set(v___x_2338_, 1, v_a_2325_);
return v___x_2338_;
}
}
}
v___jp_2339_:
{
lean_object* v___x_2342_; 
v___x_2342_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2342_, 0, v_a_2340_);
lean_ctor_set(v___x_2342_, 1, v_a_2341_);
return v___x_2342_;
}
v_resetjp_2348_:
{
lean_object* v___x_2351_; uint64_t v___x_2352_; uint64_t v___x_2353_; uint64_t v_depTrace_2354_; lean_object* v___x_2355_; lean_object* v_traceFile_2356_; lean_object* v___x_2357_; lean_object* v___x_2358_; lean_object* v___x_2359_; uint8_t v___x_2360_; lean_object* v___x_2361_; 
v___x_2351_ = ((lean_object*)(l___private_Lake_Build_Package_0__Lake_Package_fetchBuildArchive___closed__0));
v___x_2352_ = l_Lake_Hash_nil;
v___x_2353_ = lean_string_hash(v_url_2282_);
v_depTrace_2354_ = lean_uint64_mix_hash(v___x_2352_, v___x_2353_);
v___x_2355_ = ((lean_object*)(l___private_Lake_Build_Package_0__Lake_Package_fetchBuildArchive___closed__1));
lean_inc_ref(v_archiveFile_2283_);
v_traceFile_2356_ = l_System_FilePath_addExtension(v_archiveFile_2283_, v___x_2355_);
v___x_2357_ = ((lean_object*)(l___private_Lake_Build_Package_0__Lake_Package_fetchBuildArchive___closed__2));
v___x_2358_ = lean_obj_once(&l___private_Lake_Build_Package_0__Lake_Package_fetchBuildArchive___closed__4, &l___private_Lake_Build_Package_0__Lake_Package_fetchBuildArchive___closed__4_once, _init_l___private_Lake_Build_Package_0__Lake_Package_fetchBuildArchive___closed__4);
v___x_2359_ = lean_alloc_ctor(0, 3, 8);
lean_ctor_set(v___x_2359_, 0, v___x_2357_);
lean_ctor_set(v___x_2359_, 1, v___x_2351_);
lean_ctor_set(v___x_2359_, 2, v___x_2358_);
lean_ctor_set_uint64(v___x_2359_, sizeof(void*)*3, v_depTrace_2354_);
v___x_2360_ = 4;
lean_inc_ref(v_traceFile_2356_);
v___x_2361_ = l_Lake_readTraceFile(v_traceFile_2356_, v_log_2343_);
if (lean_obj_tag(v___x_2361_) == 0)
{
lean_object* v_a_2362_; lean_object* v_a_2363_; lean_object* v___x_2365_; 
v_a_2362_ = lean_ctor_get(v___x_2361_, 0);
lean_inc(v_a_2362_);
v_a_2363_ = lean_ctor_get(v___x_2361_, 1);
lean_inc(v_a_2363_);
lean_dec_ref_known(v___x_2361_, 2);
if (v_isShared_2350_ == 0)
{
lean_ctor_set(v___x_2349_, 0, v_a_2363_);
v___x_2365_ = v___x_2349_;
goto v_reusejp_2364_;
}
else
{
lean_object* v_reuseFailAlloc_2381_; 
v_reuseFailAlloc_2381_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_2381_, 0, v_a_2363_);
lean_ctor_set(v_reuseFailAlloc_2381_, 1, v_trace_2346_);
lean_ctor_set(v_reuseFailAlloc_2381_, 2, v_buildTime_2347_);
lean_ctor_set_uint8(v_reuseFailAlloc_2381_, sizeof(void*)*3, v_action_2344_);
lean_ctor_set_uint8(v_reuseFailAlloc_2381_, sizeof(void*)*3 + 1, v_wantsRebuild_2345_);
v___x_2365_ = v_reuseFailAlloc_2381_;
goto v_reusejp_2364_;
}
v_reusejp_2364_:
{
lean_object* v___x_2366_; 
v___x_2366_ = l_Lake_SavedTrace_replayIfUpToDate_x27___at___00__private_Lake_Build_Package_0__Lake_Package_fetchBuildArchive_spec__0(v_a_2285_, v_archiveFile_2283_, v___x_2359_, v_a_2362_, v___x_2358_, v_a_2286_, v_a_2287_, v_a_2288_, v_a_2289_, v___x_2365_);
if (lean_obj_tag(v___x_2366_) == 0)
{
lean_object* v_a_2367_; lean_object* v_a_2368_; uint8_t v___x_2369_; lean_object* v___x_2370_; lean_object* v___x_2371_; uint8_t v___x_2372_; 
v_a_2367_ = lean_ctor_get(v___x_2366_, 0);
lean_inc(v_a_2367_);
v_a_2368_ = lean_ctor_get(v___x_2366_, 1);
lean_inc(v_a_2368_);
lean_dec_ref_known(v___x_2366_, 2);
v___x_2369_ = lean_unbox(v_a_2367_);
lean_dec(v_a_2367_);
v___x_2370_ = l_Lake_OutputStatus_ctorIdx(v___x_2369_);
v___x_2371_ = lean_obj_once(&l_Lake_SavedTrace_replayIfUpToDate_x27___at___00__private_Lake_Build_Package_0__Lake_Package_fetchBuildArchive_spec__0___closed__0, &l_Lake_SavedTrace_replayIfUpToDate_x27___at___00__private_Lake_Build_Package_0__Lake_Package_fetchBuildArchive_spec__0___closed__0_once, _init_l_Lake_SavedTrace_replayIfUpToDate_x27___at___00__private_Lake_Build_Package_0__Lake_Package_fetchBuildArchive_spec__0___closed__0);
v___x_2372_ = lean_nat_dec_eq(v___x_2370_, v___x_2371_);
lean_dec(v___x_2370_);
if (v___x_2372_ == 0)
{
uint8_t v___x_2373_; 
lean_dec_ref_known(v___x_2359_, 3);
lean_dec_ref(v_traceFile_2356_);
lean_dec_ref(v_url_2282_);
v___x_2373_ = 1;
v_a_2324_ = v___x_2373_;
v_a_2325_ = v_a_2368_;
goto v___jp_2323_;
}
else
{
uint8_t v___x_2374_; lean_object* v___x_2375_; 
v___x_2374_ = 0;
lean_inc_ref(v_archiveFile_2283_);
v___x_2375_ = l_Lake_buildAction___at___00__private_Lake_Build_Package_0__Lake_Package_fetchBuildArchive_spec__1___redArg(v_url_2282_, v_archiveFile_2283_, v_headers_2284_, v___x_2359_, v_traceFile_2356_, v___x_2360_, v_a_2289_, v_a_2368_);
lean_dec_ref_known(v___x_2359_, 3);
if (lean_obj_tag(v___x_2375_) == 0)
{
lean_object* v_a_2376_; 
v_a_2376_ = lean_ctor_get(v___x_2375_, 1);
lean_inc(v_a_2376_);
lean_dec_ref_known(v___x_2375_, 2);
v_a_2324_ = v___x_2374_;
v_a_2325_ = v_a_2376_;
goto v___jp_2323_;
}
else
{
lean_object* v_a_2377_; lean_object* v_a_2378_; 
lean_dec_ref(v_archiveFile_2283_);
lean_dec_ref(v_self_2281_);
v_a_2377_ = lean_ctor_get(v___x_2375_, 0);
lean_inc(v_a_2377_);
v_a_2378_ = lean_ctor_get(v___x_2375_, 1);
lean_inc(v_a_2378_);
lean_dec_ref_known(v___x_2375_, 2);
v_a_2340_ = v_a_2377_;
v_a_2341_ = v_a_2378_;
goto v___jp_2339_;
}
}
}
else
{
lean_object* v_a_2379_; lean_object* v_a_2380_; 
lean_dec_ref_known(v___x_2359_, 3);
lean_dec_ref(v_traceFile_2356_);
lean_dec_ref(v_archiveFile_2283_);
lean_dec_ref(v_url_2282_);
lean_dec_ref(v_self_2281_);
v_a_2379_ = lean_ctor_get(v___x_2366_, 0);
lean_inc(v_a_2379_);
v_a_2380_ = lean_ctor_get(v___x_2366_, 1);
lean_inc(v_a_2380_);
lean_dec_ref_known(v___x_2366_, 2);
v_a_2340_ = v_a_2379_;
v_a_2341_ = v_a_2380_;
goto v___jp_2339_;
}
}
}
else
{
lean_object* v_a_2382_; lean_object* v_a_2383_; lean_object* v___x_2385_; 
lean_dec_ref_known(v___x_2359_, 3);
lean_dec_ref(v_traceFile_2356_);
lean_dec_ref(v_archiveFile_2283_);
lean_dec_ref(v_url_2282_);
lean_dec_ref(v_self_2281_);
v_a_2382_ = lean_ctor_get(v___x_2361_, 0);
lean_inc(v_a_2382_);
v_a_2383_ = lean_ctor_get(v___x_2361_, 1);
lean_inc(v_a_2383_);
lean_dec_ref_known(v___x_2361_, 2);
if (v_isShared_2350_ == 0)
{
lean_ctor_set(v___x_2349_, 0, v_a_2383_);
v___x_2385_ = v___x_2349_;
goto v_reusejp_2384_;
}
else
{
lean_object* v_reuseFailAlloc_2386_; 
v_reuseFailAlloc_2386_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_2386_, 0, v_a_2383_);
lean_ctor_set(v_reuseFailAlloc_2386_, 1, v_trace_2346_);
lean_ctor_set(v_reuseFailAlloc_2386_, 2, v_buildTime_2347_);
lean_ctor_set_uint8(v_reuseFailAlloc_2386_, sizeof(void*)*3, v_action_2344_);
lean_ctor_set_uint8(v_reuseFailAlloc_2386_, sizeof(void*)*3 + 1, v_wantsRebuild_2345_);
v___x_2385_ = v_reuseFailAlloc_2386_;
goto v_reusejp_2384_;
}
v_reusejp_2384_:
{
v_a_2340_ = v_a_2382_;
v_a_2341_ = v___x_2385_;
goto v___jp_2339_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Package_0__Lake_Package_fetchBuildArchive___boxed(lean_object* v_self_2388_, lean_object* v_url_2389_, lean_object* v_archiveFile_2390_, lean_object* v_headers_2391_, lean_object* v_a_2392_, lean_object* v_a_2393_, lean_object* v_a_2394_, lean_object* v_a_2395_, lean_object* v_a_2396_, lean_object* v_a_2397_, lean_object* v_a_2398_){
_start:
{
lean_object* v_res_2399_; 
v_res_2399_ = l___private_Lake_Build_Package_0__Lake_Package_fetchBuildArchive(v_self_2388_, v_url_2389_, v_archiveFile_2390_, v_headers_2391_, v_a_2392_, v_a_2393_, v_a_2394_, v_a_2395_, v_a_2396_, v_a_2397_);
lean_dec_ref(v_a_2396_);
lean_dec(v_a_2395_);
lean_dec(v_a_2394_);
lean_dec(v_a_2393_);
lean_dec_ref(v_a_2392_);
lean_dec_ref(v_headers_2391_);
return v_res_2399_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_checkHashUpToDate_x27___at___00Lake_SavedTrace_replayIfUpToDate_x27___at___00__private_Lake_Build_Package_0__Lake_Package_fetchBuildArchive_spec__0_spec__0(lean_object* v_a_2400_, lean_object* v_info_2401_, lean_object* v_depTrace_2402_, lean_object* v_depHash_2403_, lean_object* v_oldTrace_2404_, lean_object* v_a_2405_, lean_object* v_a_2406_, lean_object* v_a_2407_, lean_object* v_a_2408_, lean_object* v_a_2409_){
_start:
{
lean_object* v___x_2411_; 
v___x_2411_ = l___private_Lake_Build_Common_0__Lake_checkHashUpToDate_x27___at___00Lake_SavedTrace_replayIfUpToDate_x27___at___00__private_Lake_Build_Package_0__Lake_Package_fetchBuildArchive_spec__0_spec__0___redArg(v_info_2401_, v_depTrace_2402_, v_depHash_2403_, v_oldTrace_2404_, v_a_2408_, v_a_2409_);
return v___x_2411_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Common_0__Lake_checkHashUpToDate_x27___at___00Lake_SavedTrace_replayIfUpToDate_x27___at___00__private_Lake_Build_Package_0__Lake_Package_fetchBuildArchive_spec__0_spec__0___boxed(lean_object* v_a_2412_, lean_object* v_info_2413_, lean_object* v_depTrace_2414_, lean_object* v_depHash_2415_, lean_object* v_oldTrace_2416_, lean_object* v_a_2417_, lean_object* v_a_2418_, lean_object* v_a_2419_, lean_object* v_a_2420_, lean_object* v_a_2421_, lean_object* v_a_2422_){
_start:
{
lean_object* v_res_2423_; 
v_res_2423_ = l___private_Lake_Build_Common_0__Lake_checkHashUpToDate_x27___at___00Lake_SavedTrace_replayIfUpToDate_x27___at___00__private_Lake_Build_Package_0__Lake_Package_fetchBuildArchive_spec__0_spec__0(v_a_2412_, v_info_2413_, v_depTrace_2414_, v_depHash_2415_, v_oldTrace_2416_, v_a_2417_, v_a_2418_, v_a_2419_, v_a_2420_, v_a_2421_);
lean_dec_ref(v_a_2420_);
lean_dec(v_a_2419_);
lean_dec(v_a_2418_);
lean_dec(v_a_2417_);
lean_dec_ref(v_oldTrace_2416_);
lean_dec(v_depHash_2415_);
lean_dec_ref(v_depTrace_2414_);
lean_dec_ref(v_info_2413_);
lean_dec_ref(v_a_2412_);
return v_res_2423_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Package_0__Lake_Package_mkOptBuildArchiveFacetConfig___redArg___lam__0(lean_object* v_getUrl_2424_, lean_object* v_pkg_2425_, lean_object* v_archiveFile_2426_, lean_object* v_headers_2427_, lean_object* v___y_2428_, lean_object* v___y_2429_, lean_object* v___y_2430_, lean_object* v___y_2431_, lean_object* v___y_2432_, lean_object* v___y_2433_){
_start:
{
uint8_t v_r_2436_; lean_object* v___y_2437_; lean_object* v_a_2441_; lean_object* v___x_2457_; 
lean_inc_ref(v___y_2432_);
lean_inc(v___y_2431_);
lean_inc(v___y_2430_);
lean_inc(v___y_2429_);
lean_inc_ref(v___y_2428_);
lean_inc_ref(v_pkg_2425_);
v___x_2457_ = lean_apply_8(v_getUrl_2424_, v_pkg_2425_, v___y_2428_, v___y_2429_, v___y_2430_, v___y_2431_, v___y_2432_, v___y_2433_, lean_box(0));
if (lean_obj_tag(v___x_2457_) == 0)
{
lean_object* v_a_2458_; lean_object* v_a_2459_; lean_object* v___x_2460_; lean_object* v___x_2461_; 
v_a_2458_ = lean_ctor_get(v___x_2457_, 0);
lean_inc(v_a_2458_);
v_a_2459_ = lean_ctor_get(v___x_2457_, 1);
lean_inc(v_a_2459_);
lean_dec_ref_known(v___x_2457_, 2);
lean_inc_ref(v_pkg_2425_);
v___x_2460_ = lean_apply_1(v_archiveFile_2426_, v_pkg_2425_);
v___x_2461_ = l___private_Lake_Build_Package_0__Lake_Package_fetchBuildArchive(v_pkg_2425_, v_a_2458_, v___x_2460_, v_headers_2427_, v___y_2428_, v___y_2429_, v___y_2430_, v___y_2431_, v___y_2432_, v_a_2459_);
lean_dec_ref(v___y_2428_);
if (lean_obj_tag(v___x_2461_) == 0)
{
lean_object* v_a_2462_; uint8_t v___x_2463_; 
v_a_2462_ = lean_ctor_get(v___x_2461_, 1);
lean_inc(v_a_2462_);
lean_dec_ref_known(v___x_2461_, 2);
v___x_2463_ = 1;
v_r_2436_ = v___x_2463_;
v___y_2437_ = v_a_2462_;
goto v___jp_2435_;
}
else
{
lean_object* v_a_2464_; 
v_a_2464_ = lean_ctor_get(v___x_2461_, 1);
lean_inc(v_a_2464_);
lean_dec_ref_known(v___x_2461_, 2);
v_a_2441_ = v_a_2464_;
goto v___jp_2440_;
}
}
else
{
lean_object* v_a_2465_; 
lean_dec_ref(v___y_2428_);
lean_dec_ref(v_archiveFile_2426_);
lean_dec_ref(v_pkg_2425_);
v_a_2465_ = lean_ctor_get(v___x_2457_, 1);
lean_inc(v_a_2465_);
lean_dec_ref_known(v___x_2457_, 2);
v_a_2441_ = v_a_2465_;
goto v___jp_2440_;
}
v___jp_2435_:
{
lean_object* v___x_2438_; lean_object* v___x_2439_; 
v___x_2438_ = lean_box(v_r_2436_);
v___x_2439_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2439_, 0, v___x_2438_);
lean_ctor_set(v___x_2439_, 1, v___y_2437_);
return v___x_2439_;
}
v___jp_2440_:
{
lean_object* v_log_2442_; uint8_t v_action_2443_; uint8_t v_wantsRebuild_2444_; lean_object* v_trace_2445_; lean_object* v_buildTime_2446_; lean_object* v___x_2448_; uint8_t v_isShared_2449_; uint8_t v_isSharedCheck_2456_; 
v_log_2442_ = lean_ctor_get(v_a_2441_, 0);
v_action_2443_ = lean_ctor_get_uint8(v_a_2441_, sizeof(void*)*3);
v_wantsRebuild_2444_ = lean_ctor_get_uint8(v_a_2441_, sizeof(void*)*3 + 1);
v_trace_2445_ = lean_ctor_get(v_a_2441_, 1);
v_buildTime_2446_ = lean_ctor_get(v_a_2441_, 2);
v_isSharedCheck_2456_ = !lean_is_exclusive(v_a_2441_);
if (v_isSharedCheck_2456_ == 0)
{
v___x_2448_ = v_a_2441_;
v_isShared_2449_ = v_isSharedCheck_2456_;
goto v_resetjp_2447_;
}
else
{
lean_inc(v_buildTime_2446_);
lean_inc(v_trace_2445_);
lean_inc(v_log_2442_);
lean_dec(v_a_2441_);
v___x_2448_ = lean_box(0);
v_isShared_2449_ = v_isSharedCheck_2456_;
goto v_resetjp_2447_;
}
v_resetjp_2447_:
{
uint8_t v___x_2450_; uint8_t v___x_2451_; lean_object* v___x_2453_; 
v___x_2450_ = 4;
v___x_2451_ = l_Lake_JobAction_merge(v_action_2443_, v___x_2450_);
if (v_isShared_2449_ == 0)
{
v___x_2453_ = v___x_2448_;
goto v_reusejp_2452_;
}
else
{
lean_object* v_reuseFailAlloc_2455_; 
v_reuseFailAlloc_2455_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_2455_, 0, v_log_2442_);
lean_ctor_set(v_reuseFailAlloc_2455_, 1, v_trace_2445_);
lean_ctor_set(v_reuseFailAlloc_2455_, 2, v_buildTime_2446_);
lean_ctor_set_uint8(v_reuseFailAlloc_2455_, sizeof(void*)*3 + 1, v_wantsRebuild_2444_);
v___x_2453_ = v_reuseFailAlloc_2455_;
goto v_reusejp_2452_;
}
v_reusejp_2452_:
{
uint8_t v___x_2454_; 
lean_ctor_set_uint8(v___x_2453_, sizeof(void*)*3, v___x_2451_);
v___x_2454_ = 0;
v_r_2436_ = v___x_2454_;
v___y_2437_ = v___x_2453_;
goto v___jp_2435_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Package_0__Lake_Package_mkOptBuildArchiveFacetConfig___redArg___lam__0___boxed(lean_object* v_getUrl_2466_, lean_object* v_pkg_2467_, lean_object* v_archiveFile_2468_, lean_object* v_headers_2469_, lean_object* v___y_2470_, lean_object* v___y_2471_, lean_object* v___y_2472_, lean_object* v___y_2473_, lean_object* v___y_2474_, lean_object* v___y_2475_, lean_object* v___y_2476_){
_start:
{
lean_object* v_res_2477_; 
v_res_2477_ = l___private_Lake_Build_Package_0__Lake_Package_mkOptBuildArchiveFacetConfig___redArg___lam__0(v_getUrl_2466_, v_pkg_2467_, v_archiveFile_2468_, v_headers_2469_, v___y_2470_, v___y_2471_, v___y_2472_, v___y_2473_, v___y_2474_, v___y_2475_);
lean_dec_ref(v___y_2474_);
lean_dec(v___y_2473_);
lean_dec(v___y_2472_);
lean_dec(v___y_2471_);
lean_dec_ref(v_headers_2469_);
return v_res_2477_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Package_0__Lake_Package_mkOptBuildArchiveFacetConfig___redArg___lam__1(lean_object* v_getUrl_2478_, lean_object* v_archiveFile_2479_, lean_object* v_headers_2480_, lean_object* v_facet_2481_, lean_object* v___x_2482_, lean_object* v_pkg_2483_, lean_object* v___y_2484_, lean_object* v___y_2485_, lean_object* v___y_2486_, lean_object* v___y_2487_, lean_object* v___y_2488_, lean_object* v___y_2489_){
_start:
{
lean_object* v_baseName_2491_; lean_object* v___f_2492_; uint8_t v___x_2493_; lean_object* v___x_2494_; lean_object* v___x_2495_; lean_object* v___x_2496_; lean_object* v___x_2497_; lean_object* v___x_2498_; lean_object* v___x_2499_; lean_object* v___x_2500_; lean_object* v___x_2501_; lean_object* v___x_2502_; lean_object* v___x_2503_; lean_object* v___x_2504_; lean_object* v___x_2505_; 
v_baseName_2491_ = lean_ctor_get(v_pkg_2483_, 1);
lean_inc(v_baseName_2491_);
v___f_2492_ = lean_alloc_closure((void*)(l___private_Lake_Build_Package_0__Lake_Package_mkOptBuildArchiveFacetConfig___redArg___lam__0___boxed), 11, 4);
lean_closure_set(v___f_2492_, 0, v_getUrl_2478_);
lean_closure_set(v___f_2492_, 1, v_pkg_2483_);
lean_closure_set(v___f_2492_, 2, v_archiveFile_2479_);
lean_closure_set(v___f_2492_, 3, v_headers_2480_);
v___x_2493_ = 1;
v___x_2494_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_baseName_2491_, v___x_2493_);
v___x_2495_ = ((lean_object*)(l___private_Lake_Build_Package_0__Lake_Package_optFacetDetails___redArg___closed__3));
v___x_2496_ = lean_string_append(v___x_2494_, v___x_2495_);
v___x_2497_ = l_Lake_Name_eraseHead(v_facet_2481_);
v___x_2498_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_2497_, v___x_2493_);
v___x_2499_ = lean_string_append(v___x_2496_, v___x_2498_);
lean_dec_ref(v___x_2498_);
v___x_2500_ = lean_unsigned_to_nat(0u);
v___x_2501_ = ((lean_object*)(l___private_Lake_Build_Package_0__Lake_Package_recFetchDeps___redArg___closed__2));
lean_inc(v___x_2482_);
v___x_2502_ = lean_alloc_closure((void*)(l_Lake_Job_async___boxed), 12, 5);
lean_closure_set(v___x_2502_, 0, lean_box(0));
lean_closure_set(v___x_2502_, 1, v___x_2482_);
lean_closure_set(v___x_2502_, 2, v___f_2492_);
lean_closure_set(v___x_2502_, 3, v___x_2500_);
lean_closure_set(v___x_2502_, 4, v___x_2501_);
v___x_2503_ = lean_alloc_closure((void*)(l_Lake_JobM_runSpawnM___boxed), 9, 2);
lean_closure_set(v___x_2503_, 0, lean_box(0));
lean_closure_set(v___x_2503_, 1, v___x_2502_);
v___x_2504_ = lean_alloc_closure((void*)(l_Lake_FetchM_runJobM___boxed), 9, 2);
lean_closure_set(v___x_2504_, 0, lean_box(0));
lean_closure_set(v___x_2504_, 1, v___x_2503_);
v___x_2505_ = l_Lake_ensureJob___redArg(v___x_2482_, v___x_2504_, v___y_2484_, v___y_2485_, v___y_2486_, v___y_2487_, v___y_2488_, v___y_2489_);
if (lean_obj_tag(v___x_2505_) == 0)
{
lean_object* v_a_2506_; lean_object* v_a_2507_; lean_object* v___x_2509_; uint8_t v_isShared_2510_; uint8_t v_isSharedCheck_2530_; 
v_a_2506_ = lean_ctor_get(v___x_2505_, 0);
v_a_2507_ = lean_ctor_get(v___x_2505_, 1);
v_isSharedCheck_2530_ = !lean_is_exclusive(v___x_2505_);
if (v_isSharedCheck_2530_ == 0)
{
v___x_2509_ = v___x_2505_;
v_isShared_2510_ = v_isSharedCheck_2530_;
goto v_resetjp_2508_;
}
else
{
lean_inc(v_a_2507_);
lean_inc(v_a_2506_);
lean_dec(v___x_2505_);
v___x_2509_ = lean_box(0);
v_isShared_2510_ = v_isSharedCheck_2530_;
goto v_resetjp_2508_;
}
v_resetjp_2508_:
{
lean_object* v_task_2511_; lean_object* v_kind_2512_; lean_object* v___x_2514_; uint8_t v_isShared_2515_; uint8_t v_isSharedCheck_2528_; 
v_task_2511_ = lean_ctor_get(v_a_2506_, 0);
v_kind_2512_ = lean_ctor_get(v_a_2506_, 1);
v_isSharedCheck_2528_ = !lean_is_exclusive(v_a_2506_);
if (v_isSharedCheck_2528_ == 0)
{
lean_object* v_unused_2529_; 
v_unused_2529_ = lean_ctor_get(v_a_2506_, 2);
lean_dec(v_unused_2529_);
v___x_2514_ = v_a_2506_;
v_isShared_2515_ = v_isSharedCheck_2528_;
goto v_resetjp_2513_;
}
else
{
lean_inc(v_kind_2512_);
lean_inc(v_task_2511_);
lean_dec(v_a_2506_);
v___x_2514_ = lean_box(0);
v_isShared_2515_ = v_isSharedCheck_2528_;
goto v_resetjp_2513_;
}
v_resetjp_2513_:
{
lean_object* v_registeredJobs_2516_; lean_object* v_job_2518_; 
v_registeredJobs_2516_ = lean_ctor_get(v___y_2488_, 4);
if (v_isShared_2515_ == 0)
{
lean_ctor_set(v___x_2514_, 2, v___x_2499_);
v_job_2518_ = v___x_2514_;
goto v_reusejp_2517_;
}
else
{
lean_object* v_reuseFailAlloc_2527_; 
v_reuseFailAlloc_2527_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_2527_, 0, v_task_2511_);
lean_ctor_set(v_reuseFailAlloc_2527_, 1, v_kind_2512_);
lean_ctor_set(v_reuseFailAlloc_2527_, 2, v___x_2499_);
v_job_2518_ = v_reuseFailAlloc_2527_;
goto v_reusejp_2517_;
}
v_reusejp_2517_:
{
lean_object* v___x_2519_; lean_object* v___x_2520_; lean_object* v___x_2521_; lean_object* v___x_2522_; lean_object* v___x_2523_; lean_object* v___x_2525_; 
lean_ctor_set_uint8(v_job_2518_, sizeof(void*)*3, v___x_2493_);
v___x_2519_ = lean_st_ref_take(v_registeredJobs_2516_);
lean_inc_ref(v_job_2518_);
v___x_2520_ = l_Lake_Job_toOpaque___redArg(v_job_2518_);
v___x_2521_ = lean_array_push(v___x_2519_, v___x_2520_);
v___x_2522_ = lean_st_ref_put(v_registeredJobs_2516_, v___x_2521_);
v___x_2523_ = l_Lake_Job_renew___redArg(v_job_2518_);
if (v_isShared_2510_ == 0)
{
lean_ctor_set(v___x_2509_, 0, v___x_2523_);
v___x_2525_ = v___x_2509_;
goto v_reusejp_2524_;
}
else
{
lean_object* v_reuseFailAlloc_2526_; 
v_reuseFailAlloc_2526_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2526_, 0, v___x_2523_);
lean_ctor_set(v_reuseFailAlloc_2526_, 1, v_a_2507_);
v___x_2525_ = v_reuseFailAlloc_2526_;
goto v_reusejp_2524_;
}
v_reusejp_2524_:
{
return v___x_2525_;
}
}
}
}
}
else
{
lean_dec_ref(v___x_2499_);
return v___x_2505_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Package_0__Lake_Package_mkOptBuildArchiveFacetConfig___redArg___lam__1___boxed(lean_object* v_getUrl_2531_, lean_object* v_archiveFile_2532_, lean_object* v_headers_2533_, lean_object* v_facet_2534_, lean_object* v___x_2535_, lean_object* v_pkg_2536_, lean_object* v___y_2537_, lean_object* v___y_2538_, lean_object* v___y_2539_, lean_object* v___y_2540_, lean_object* v___y_2541_, lean_object* v___y_2542_, lean_object* v___y_2543_){
_start:
{
lean_object* v_res_2544_; 
v_res_2544_ = l___private_Lake_Build_Package_0__Lake_Package_mkOptBuildArchiveFacetConfig___redArg___lam__1(v_getUrl_2531_, v_archiveFile_2532_, v_headers_2533_, v_facet_2534_, v___x_2535_, v_pkg_2536_, v___y_2537_, v___y_2538_, v___y_2539_, v___y_2540_, v___y_2541_, v___y_2542_);
lean_dec_ref(v___y_2541_);
lean_dec(v___y_2540_);
lean_dec(v___y_2539_);
lean_dec(v___y_2538_);
return v_res_2544_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Package_0__Lake_Package_mkOptBuildArchiveFacetConfig___redArg(lean_object* v_facet_2552_, lean_object* v_archiveFile_2553_, lean_object* v_getUrl_2554_, lean_object* v_headers_2555_){
_start:
{
lean_object* v___x_2556_; lean_object* v___f_2557_; lean_object* v___x_2558_; uint8_t v___x_2559_; lean_object* v___x_2560_; lean_object* v___x_2561_; 
v___x_2556_ = l_Lake_instDataKindBool;
v___f_2557_ = lean_alloc_closure((void*)(l___private_Lake_Build_Package_0__Lake_Package_mkOptBuildArchiveFacetConfig___redArg___lam__1___boxed), 13, 5);
lean_closure_set(v___f_2557_, 0, v_getUrl_2554_);
lean_closure_set(v___f_2557_, 1, v_archiveFile_2553_);
lean_closure_set(v___f_2557_, 2, v_headers_2555_);
lean_closure_set(v___f_2557_, 3, v_facet_2552_);
lean_closure_set(v___f_2557_, 4, v___x_2556_);
v___x_2558_ = l_Lake_Package_keyword;
v___x_2559_ = 1;
v___x_2560_ = ((lean_object*)(l___private_Lake_Build_Package_0__Lake_Package_mkOptBuildArchiveFacetConfig___redArg___closed__3));
v___x_2561_ = lean_alloc_ctor(0, 4, 2);
lean_ctor_set(v___x_2561_, 0, v___x_2558_);
lean_ctor_set(v___x_2561_, 1, v___f_2557_);
lean_ctor_set(v___x_2561_, 2, v___x_2556_);
lean_ctor_set(v___x_2561_, 3, v___x_2560_);
lean_ctor_set_uint8(v___x_2561_, sizeof(void*)*4, v___x_2559_);
lean_ctor_set_uint8(v___x_2561_, sizeof(void*)*4 + 1, v___x_2559_);
return v___x_2561_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Package_0__Lake_Package_mkOptBuildArchiveFacetConfig(lean_object* v_facet_2562_, lean_object* v_archiveFile_2563_, lean_object* v_getUrl_2564_, lean_object* v_headers_2565_, lean_object* v_inst_2566_){
_start:
{
lean_object* v___x_2567_; lean_object* v___f_2568_; lean_object* v___x_2569_; uint8_t v___x_2570_; lean_object* v___x_2571_; lean_object* v___x_2572_; 
v___x_2567_ = l_Lake_instDataKindBool;
v___f_2568_ = lean_alloc_closure((void*)(l___private_Lake_Build_Package_0__Lake_Package_mkOptBuildArchiveFacetConfig___redArg___lam__1___boxed), 13, 5);
lean_closure_set(v___f_2568_, 0, v_getUrl_2564_);
lean_closure_set(v___f_2568_, 1, v_archiveFile_2563_);
lean_closure_set(v___f_2568_, 2, v_headers_2565_);
lean_closure_set(v___f_2568_, 3, v_facet_2562_);
lean_closure_set(v___f_2568_, 4, v___x_2567_);
v___x_2569_ = l_Lake_Package_keyword;
v___x_2570_ = 1;
v___x_2571_ = ((lean_object*)(l___private_Lake_Build_Package_0__Lake_Package_mkOptBuildArchiveFacetConfig___redArg___closed__3));
v___x_2572_ = lean_alloc_ctor(0, 4, 2);
lean_ctor_set(v___x_2572_, 0, v___x_2569_);
lean_ctor_set(v___x_2572_, 1, v___f_2568_);
lean_ctor_set(v___x_2572_, 2, v___x_2567_);
lean_ctor_set(v___x_2572_, 3, v___x_2571_);
lean_ctor_set_uint8(v___x_2572_, sizeof(void*)*4, v___x_2570_);
lean_ctor_set_uint8(v___x_2572_, sizeof(void*)*4 + 1, v___x_2570_);
return v___x_2572_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Package_0__Lake_Package_mkBuildArchiveFacetConfig___redArg___lam__0(lean_object* v_what_2574_, lean_object* v_baseName_2575_, lean_object* v_optFacet_2576_, uint8_t v_success_2577_, lean_object* v___y_2578_, lean_object* v___y_2579_, lean_object* v___y_2580_, lean_object* v___y_2581_, lean_object* v___y_2582_, lean_object* v___y_2583_){
_start:
{
lean_object* v_a_2586_; lean_object* v_a_2587_; 
if (v_success_2577_ == 0)
{
lean_object* v_toBuildConfig_2608_; uint8_t v_verbosity_2609_; lean_object* v___x_2610_; lean_object* v___x_2611_; uint8_t v___x_2612_; 
v_toBuildConfig_2608_ = lean_ctor_get(v___y_2582_, 0);
v_verbosity_2609_ = lean_ctor_get_uint8(v_toBuildConfig_2608_, sizeof(void*)*5 + 4);
v___x_2610_ = l_Lake_Verbosity_ctorIdx(v_verbosity_2609_);
v___x_2611_ = lean_obj_once(&l___private_Lake_Build_Package_0__Lake_Package_optFacetDetails___redArg___closed__0, &l___private_Lake_Build_Package_0__Lake_Package_optFacetDetails___redArg___closed__0_once, _init_l___private_Lake_Build_Package_0__Lake_Package_optFacetDetails___redArg___closed__0);
v___x_2612_ = lean_nat_dec_eq(v___x_2610_, v___x_2611_);
lean_dec(v___x_2610_);
if (v___x_2612_ == 0)
{
lean_object* v___x_2613_; 
lean_dec(v_optFacet_2576_);
lean_dec(v_baseName_2575_);
v___x_2613_ = ((lean_object*)(l___private_Lake_Build_Package_0__Lake_Package_optFacetDetails___redArg___closed__1));
v_a_2586_ = v___x_2613_;
v_a_2587_ = v___y_2583_;
goto v___jp_2585_;
}
else
{
lean_object* v___x_2614_; lean_object* v___x_2615_; lean_object* v___x_2616_; lean_object* v___x_2617_; lean_object* v___x_2618_; lean_object* v___x_2619_; lean_object* v___x_2620_; lean_object* v___x_2621_; lean_object* v___x_2622_; lean_object* v___x_2623_; 
v___x_2614_ = ((lean_object*)(l___private_Lake_Build_Package_0__Lake_Package_optFacetDetails___redArg___closed__2));
v___x_2615_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_baseName_2575_, v___x_2612_);
v___x_2616_ = lean_string_append(v___x_2614_, v___x_2615_);
lean_dec_ref(v___x_2615_);
v___x_2617_ = ((lean_object*)(l___private_Lake_Build_Package_0__Lake_Package_optFacetDetails___redArg___closed__3));
v___x_2618_ = lean_string_append(v___x_2616_, v___x_2617_);
v___x_2619_ = l_Lake_Name_eraseHead(v_optFacet_2576_);
v___x_2620_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_2619_, v___x_2612_);
v___x_2621_ = lean_string_append(v___x_2618_, v___x_2620_);
lean_dec_ref(v___x_2620_);
v___x_2622_ = ((lean_object*)(l___private_Lake_Build_Package_0__Lake_Package_optFacetDetails___redArg___closed__4));
v___x_2623_ = lean_string_append(v___x_2621_, v___x_2622_);
v_a_2586_ = v___x_2623_;
v_a_2587_ = v___y_2583_;
goto v___jp_2585_;
}
}
else
{
lean_object* v___x_2624_; lean_object* v___x_2625_; 
lean_dec(v_optFacet_2576_);
lean_dec(v_baseName_2575_);
v___x_2624_ = lean_box(0);
v___x_2625_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2625_, 0, v___x_2624_);
lean_ctor_set(v___x_2625_, 1, v___y_2583_);
return v___x_2625_;
}
v___jp_2585_:
{
lean_object* v_log_2588_; uint8_t v_action_2589_; uint8_t v_wantsRebuild_2590_; lean_object* v_trace_2591_; lean_object* v_buildTime_2592_; lean_object* v___x_2594_; uint8_t v_isShared_2595_; uint8_t v_isSharedCheck_2607_; 
v_log_2588_ = lean_ctor_get(v_a_2587_, 0);
v_action_2589_ = lean_ctor_get_uint8(v_a_2587_, sizeof(void*)*3);
v_wantsRebuild_2590_ = lean_ctor_get_uint8(v_a_2587_, sizeof(void*)*3 + 1);
v_trace_2591_ = lean_ctor_get(v_a_2587_, 1);
v_buildTime_2592_ = lean_ctor_get(v_a_2587_, 2);
v_isSharedCheck_2607_ = !lean_is_exclusive(v_a_2587_);
if (v_isSharedCheck_2607_ == 0)
{
v___x_2594_ = v_a_2587_;
v_isShared_2595_ = v_isSharedCheck_2607_;
goto v_resetjp_2593_;
}
else
{
lean_inc(v_buildTime_2592_);
lean_inc(v_trace_2591_);
lean_inc(v_log_2588_);
lean_dec(v_a_2587_);
v___x_2594_ = lean_box(0);
v_isShared_2595_ = v_isSharedCheck_2607_;
goto v_resetjp_2593_;
}
v_resetjp_2593_:
{
lean_object* v___x_2596_; lean_object* v___x_2597_; lean_object* v___x_2598_; uint8_t v___x_2599_; lean_object* v___x_2600_; lean_object* v___x_2601_; lean_object* v___x_2602_; lean_object* v___x_2604_; 
v___x_2596_ = ((lean_object*)(l___private_Lake_Build_Package_0__Lake_Package_mkBuildArchiveFacetConfig___redArg___lam__0___closed__0));
v___x_2597_ = lean_string_append(v___x_2596_, v_what_2574_);
v___x_2598_ = lean_string_append(v___x_2597_, v_a_2586_);
lean_dec_ref(v_a_2586_);
v___x_2599_ = 3;
v___x_2600_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2600_, 0, v___x_2598_);
lean_ctor_set_uint8(v___x_2600_, sizeof(void*)*1, v___x_2599_);
v___x_2601_ = lean_array_get_size(v_log_2588_);
v___x_2602_ = lean_array_push(v_log_2588_, v___x_2600_);
if (v_isShared_2595_ == 0)
{
lean_ctor_set(v___x_2594_, 0, v___x_2602_);
v___x_2604_ = v___x_2594_;
goto v_reusejp_2603_;
}
else
{
lean_object* v_reuseFailAlloc_2606_; 
v_reuseFailAlloc_2606_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_2606_, 0, v___x_2602_);
lean_ctor_set(v_reuseFailAlloc_2606_, 1, v_trace_2591_);
lean_ctor_set(v_reuseFailAlloc_2606_, 2, v_buildTime_2592_);
lean_ctor_set_uint8(v_reuseFailAlloc_2606_, sizeof(void*)*3, v_action_2589_);
lean_ctor_set_uint8(v_reuseFailAlloc_2606_, sizeof(void*)*3 + 1, v_wantsRebuild_2590_);
v___x_2604_ = v_reuseFailAlloc_2606_;
goto v_reusejp_2603_;
}
v_reusejp_2603_:
{
lean_object* v___x_2605_; 
v___x_2605_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2605_, 0, v___x_2601_);
lean_ctor_set(v___x_2605_, 1, v___x_2604_);
return v___x_2605_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Package_0__Lake_Package_mkBuildArchiveFacetConfig___redArg___lam__0___boxed(lean_object* v_what_2626_, lean_object* v_baseName_2627_, lean_object* v_optFacet_2628_, lean_object* v_success_2629_, lean_object* v___y_2630_, lean_object* v___y_2631_, lean_object* v___y_2632_, lean_object* v___y_2633_, lean_object* v___y_2634_, lean_object* v___y_2635_, lean_object* v___y_2636_){
_start:
{
uint8_t v_success_boxed_2637_; lean_object* v_res_2638_; 
v_success_boxed_2637_ = lean_unbox(v_success_2629_);
v_res_2638_ = l___private_Lake_Build_Package_0__Lake_Package_mkBuildArchiveFacetConfig___redArg___lam__0(v_what_2626_, v_baseName_2627_, v_optFacet_2628_, v_success_boxed_2637_, v___y_2630_, v___y_2631_, v___y_2632_, v___y_2633_, v___y_2634_, v___y_2635_);
lean_dec_ref(v___y_2634_);
lean_dec(v___y_2633_);
lean_dec(v___y_2632_);
lean_dec(v___y_2631_);
lean_dec_ref(v___y_2630_);
lean_dec_ref(v_what_2626_);
return v_res_2638_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Package_0__Lake_Package_mkBuildArchiveFacetConfig___redArg___lam__1(lean_object* v___x_2639_, lean_object* v___x_2640_, lean_object* v___f_2641_, lean_object* v___y_2642_, lean_object* v___y_2643_, lean_object* v___y_2644_, lean_object* v___y_2645_, lean_object* v___y_2646_, lean_object* v___y_2647_){
_start:
{
lean_object* v___x_2649_; 
lean_inc_ref(v___y_2642_);
lean_inc_ref(v___y_2646_);
lean_inc(v___y_2645_);
lean_inc(v___y_2644_);
lean_inc(v___y_2643_);
v___x_2649_ = lean_apply_7(v___y_2642_, v___x_2639_, v___y_2643_, v___y_2644_, v___y_2645_, v___y_2646_, v___y_2647_, lean_box(0));
if (lean_obj_tag(v___x_2649_) == 0)
{
lean_object* v_a_2650_; lean_object* v_a_2651_; lean_object* v___x_2653_; uint8_t v_isShared_2654_; uint8_t v_isSharedCheck_2662_; 
v_a_2650_ = lean_ctor_get(v___x_2649_, 0);
v_a_2651_ = lean_ctor_get(v___x_2649_, 1);
v_isSharedCheck_2662_ = !lean_is_exclusive(v___x_2649_);
if (v_isSharedCheck_2662_ == 0)
{
v___x_2653_ = v___x_2649_;
v_isShared_2654_ = v_isSharedCheck_2662_;
goto v_resetjp_2652_;
}
else
{
lean_inc(v_a_2651_);
lean_inc(v_a_2650_);
lean_dec(v___x_2649_);
v___x_2653_ = lean_box(0);
v_isShared_2654_ = v_isSharedCheck_2662_;
goto v_resetjp_2652_;
}
v_resetjp_2652_:
{
lean_object* v___x_2655_; uint8_t v___x_2656_; lean_object* v___x_2657_; lean_object* v___x_2658_; lean_object* v___x_2660_; 
v___x_2655_ = lean_unsigned_to_nat(0u);
v___x_2656_ = 0;
v___x_2657_ = lean_obj_once(&l___private_Lake_Build_Package_0__Lake_Package_recFetchDeps___redArg___closed__4, &l___private_Lake_Build_Package_0__Lake_Package_recFetchDeps___redArg___closed__4_once, _init_l___private_Lake_Build_Package_0__Lake_Package_recFetchDeps___redArg___closed__4);
v___x_2658_ = l_Lake_Job_mapM___redArg(v___x_2640_, v_a_2650_, v___f_2641_, v___x_2655_, v___x_2656_, v___y_2642_, v___y_2643_, v___y_2644_, v___y_2645_, v___y_2646_, v___x_2657_);
if (v_isShared_2654_ == 0)
{
lean_ctor_set(v___x_2653_, 0, v___x_2658_);
v___x_2660_ = v___x_2653_;
goto v_reusejp_2659_;
}
else
{
lean_object* v_reuseFailAlloc_2661_; 
v_reuseFailAlloc_2661_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2661_, 0, v___x_2658_);
lean_ctor_set(v_reuseFailAlloc_2661_, 1, v_a_2651_);
v___x_2660_ = v_reuseFailAlloc_2661_;
goto v_reusejp_2659_;
}
v_reusejp_2659_:
{
return v___x_2660_;
}
}
}
else
{
lean_object* v_a_2663_; lean_object* v_a_2664_; lean_object* v___x_2666_; uint8_t v_isShared_2667_; uint8_t v_isSharedCheck_2671_; 
lean_dec_ref(v___y_2642_);
lean_dec_ref(v___f_2641_);
lean_dec(v___x_2640_);
v_a_2663_ = lean_ctor_get(v___x_2649_, 0);
v_a_2664_ = lean_ctor_get(v___x_2649_, 1);
v_isSharedCheck_2671_ = !lean_is_exclusive(v___x_2649_);
if (v_isSharedCheck_2671_ == 0)
{
v___x_2666_ = v___x_2649_;
v_isShared_2667_ = v_isSharedCheck_2671_;
goto v_resetjp_2665_;
}
else
{
lean_inc(v_a_2664_);
lean_inc(v_a_2663_);
lean_dec(v___x_2649_);
v___x_2666_ = lean_box(0);
v_isShared_2667_ = v_isSharedCheck_2671_;
goto v_resetjp_2665_;
}
v_resetjp_2665_:
{
lean_object* v___x_2669_; 
if (v_isShared_2667_ == 0)
{
v___x_2669_ = v___x_2666_;
goto v_reusejp_2668_;
}
else
{
lean_object* v_reuseFailAlloc_2670_; 
v_reuseFailAlloc_2670_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2670_, 0, v_a_2663_);
lean_ctor_set(v_reuseFailAlloc_2670_, 1, v_a_2664_);
v___x_2669_ = v_reuseFailAlloc_2670_;
goto v_reusejp_2668_;
}
v_reusejp_2668_:
{
return v___x_2669_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Package_0__Lake_Package_mkBuildArchiveFacetConfig___redArg___lam__1___boxed(lean_object* v___x_2672_, lean_object* v___x_2673_, lean_object* v___f_2674_, lean_object* v___y_2675_, lean_object* v___y_2676_, lean_object* v___y_2677_, lean_object* v___y_2678_, lean_object* v___y_2679_, lean_object* v___y_2680_, lean_object* v___y_2681_){
_start:
{
lean_object* v_res_2682_; 
v_res_2682_ = l___private_Lake_Build_Package_0__Lake_Package_mkBuildArchiveFacetConfig___redArg___lam__1(v___x_2672_, v___x_2673_, v___f_2674_, v___y_2675_, v___y_2676_, v___y_2677_, v___y_2678_, v___y_2679_, v___y_2680_);
lean_dec_ref(v___y_2679_);
lean_dec(v___y_2678_);
lean_dec(v___y_2677_);
lean_dec(v___y_2676_);
return v_res_2682_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Package_0__Lake_Package_mkBuildArchiveFacetConfig___redArg___lam__2(lean_object* v_what_2683_, lean_object* v_optFacet_2684_, lean_object* v_facet_2685_, lean_object* v___x_2686_, lean_object* v_pkg_2687_, lean_object* v___y_2688_, lean_object* v___y_2689_, lean_object* v___y_2690_, lean_object* v___y_2691_, lean_object* v___y_2692_, lean_object* v___y_2693_){
_start:
{
lean_object* v_baseName_2695_; lean_object* v_keyName_2696_; lean_object* v___f_2697_; uint8_t v___x_2698_; lean_object* v___x_2699_; lean_object* v___x_2700_; lean_object* v___x_2701_; lean_object* v___x_2702_; lean_object* v___x_2703_; lean_object* v___x_2704_; lean_object* v___x_2705_; lean_object* v___x_2706_; lean_object* v___x_2707_; lean_object* v___f_2708_; uint8_t v___x_2709_; lean_object* v___x_2710_; 
v_baseName_2695_ = lean_ctor_get(v_pkg_2687_, 1);
v_keyName_2696_ = lean_ctor_get(v_pkg_2687_, 2);
lean_inc(v_optFacet_2684_);
lean_inc_n(v_baseName_2695_, 2);
v___f_2697_ = lean_alloc_closure((void*)(l___private_Lake_Build_Package_0__Lake_Package_mkBuildArchiveFacetConfig___redArg___lam__0___boxed), 11, 3);
lean_closure_set(v___f_2697_, 0, v_what_2683_);
lean_closure_set(v___f_2697_, 1, v_baseName_2695_);
lean_closure_set(v___f_2697_, 2, v_optFacet_2684_);
v___x_2698_ = 1;
v___x_2699_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_baseName_2695_, v___x_2698_);
v___x_2700_ = ((lean_object*)(l___private_Lake_Build_Package_0__Lake_Package_optFacetDetails___redArg___closed__3));
v___x_2701_ = lean_string_append(v___x_2699_, v___x_2700_);
v___x_2702_ = l_Lake_Name_eraseHead(v_facet_2685_);
v___x_2703_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_2702_, v___x_2698_);
v___x_2704_ = lean_string_append(v___x_2701_, v___x_2703_);
lean_dec_ref(v___x_2703_);
lean_inc(v_keyName_2696_);
v___x_2705_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2705_, 0, v_keyName_2696_);
v___x_2706_ = l_Lake_Package_keyword;
v___x_2707_ = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(v___x_2707_, 0, v___x_2705_);
lean_ctor_set(v___x_2707_, 1, v___x_2706_);
lean_ctor_set(v___x_2707_, 2, v_pkg_2687_);
lean_ctor_set(v___x_2707_, 3, v_optFacet_2684_);
lean_inc(v___x_2686_);
v___f_2708_ = lean_alloc_closure((void*)(l___private_Lake_Build_Package_0__Lake_Package_mkBuildArchiveFacetConfig___redArg___lam__1___boxed), 10, 3);
lean_closure_set(v___f_2708_, 0, v___x_2707_);
lean_closure_set(v___f_2708_, 1, v___x_2686_);
lean_closure_set(v___f_2708_, 2, v___f_2697_);
v___x_2709_ = 0;
v___x_2710_ = l_Lake_ensureJob___redArg(v___x_2686_, v___f_2708_, v___y_2688_, v___y_2689_, v___y_2690_, v___y_2691_, v___y_2692_, v___y_2693_);
if (lean_obj_tag(v___x_2710_) == 0)
{
lean_object* v_a_2711_; lean_object* v_a_2712_; lean_object* v___x_2714_; uint8_t v_isShared_2715_; uint8_t v_isSharedCheck_2735_; 
v_a_2711_ = lean_ctor_get(v___x_2710_, 0);
v_a_2712_ = lean_ctor_get(v___x_2710_, 1);
v_isSharedCheck_2735_ = !lean_is_exclusive(v___x_2710_);
if (v_isSharedCheck_2735_ == 0)
{
v___x_2714_ = v___x_2710_;
v_isShared_2715_ = v_isSharedCheck_2735_;
goto v_resetjp_2713_;
}
else
{
lean_inc(v_a_2712_);
lean_inc(v_a_2711_);
lean_dec(v___x_2710_);
v___x_2714_ = lean_box(0);
v_isShared_2715_ = v_isSharedCheck_2735_;
goto v_resetjp_2713_;
}
v_resetjp_2713_:
{
lean_object* v_task_2716_; lean_object* v_kind_2717_; lean_object* v___x_2719_; uint8_t v_isShared_2720_; uint8_t v_isSharedCheck_2733_; 
v_task_2716_ = lean_ctor_get(v_a_2711_, 0);
v_kind_2717_ = lean_ctor_get(v_a_2711_, 1);
v_isSharedCheck_2733_ = !lean_is_exclusive(v_a_2711_);
if (v_isSharedCheck_2733_ == 0)
{
lean_object* v_unused_2734_; 
v_unused_2734_ = lean_ctor_get(v_a_2711_, 2);
lean_dec(v_unused_2734_);
v___x_2719_ = v_a_2711_;
v_isShared_2720_ = v_isSharedCheck_2733_;
goto v_resetjp_2718_;
}
else
{
lean_inc(v_kind_2717_);
lean_inc(v_task_2716_);
lean_dec(v_a_2711_);
v___x_2719_ = lean_box(0);
v_isShared_2720_ = v_isSharedCheck_2733_;
goto v_resetjp_2718_;
}
v_resetjp_2718_:
{
lean_object* v_registeredJobs_2721_; lean_object* v_job_2723_; 
v_registeredJobs_2721_ = lean_ctor_get(v___y_2692_, 4);
if (v_isShared_2720_ == 0)
{
lean_ctor_set(v___x_2719_, 2, v___x_2704_);
v_job_2723_ = v___x_2719_;
goto v_reusejp_2722_;
}
else
{
lean_object* v_reuseFailAlloc_2732_; 
v_reuseFailAlloc_2732_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_2732_, 0, v_task_2716_);
lean_ctor_set(v_reuseFailAlloc_2732_, 1, v_kind_2717_);
lean_ctor_set(v_reuseFailAlloc_2732_, 2, v___x_2704_);
v_job_2723_ = v_reuseFailAlloc_2732_;
goto v_reusejp_2722_;
}
v_reusejp_2722_:
{
lean_object* v___x_2724_; lean_object* v___x_2725_; lean_object* v___x_2726_; lean_object* v___x_2727_; lean_object* v___x_2728_; lean_object* v___x_2730_; 
lean_ctor_set_uint8(v_job_2723_, sizeof(void*)*3, v___x_2709_);
v___x_2724_ = lean_st_ref_take(v_registeredJobs_2721_);
lean_inc_ref(v_job_2723_);
v___x_2725_ = l_Lake_Job_toOpaque___redArg(v_job_2723_);
v___x_2726_ = lean_array_push(v___x_2724_, v___x_2725_);
v___x_2727_ = lean_st_ref_put(v_registeredJobs_2721_, v___x_2726_);
v___x_2728_ = l_Lake_Job_renew___redArg(v_job_2723_);
if (v_isShared_2715_ == 0)
{
lean_ctor_set(v___x_2714_, 0, v___x_2728_);
v___x_2730_ = v___x_2714_;
goto v_reusejp_2729_;
}
else
{
lean_object* v_reuseFailAlloc_2731_; 
v_reuseFailAlloc_2731_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2731_, 0, v___x_2728_);
lean_ctor_set(v_reuseFailAlloc_2731_, 1, v_a_2712_);
v___x_2730_ = v_reuseFailAlloc_2731_;
goto v_reusejp_2729_;
}
v_reusejp_2729_:
{
return v___x_2730_;
}
}
}
}
}
else
{
lean_dec_ref(v___x_2704_);
return v___x_2710_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Package_0__Lake_Package_mkBuildArchiveFacetConfig___redArg___lam__2___boxed(lean_object* v_what_2736_, lean_object* v_optFacet_2737_, lean_object* v_facet_2738_, lean_object* v___x_2739_, lean_object* v_pkg_2740_, lean_object* v___y_2741_, lean_object* v___y_2742_, lean_object* v___y_2743_, lean_object* v___y_2744_, lean_object* v___y_2745_, lean_object* v___y_2746_, lean_object* v___y_2747_){
_start:
{
lean_object* v_res_2748_; 
v_res_2748_ = l___private_Lake_Build_Package_0__Lake_Package_mkBuildArchiveFacetConfig___redArg___lam__2(v_what_2736_, v_optFacet_2737_, v_facet_2738_, v___x_2739_, v_pkg_2740_, v___y_2741_, v___y_2742_, v___y_2743_, v___y_2744_, v___y_2745_, v___y_2746_);
lean_dec_ref(v___y_2745_);
lean_dec(v___y_2744_);
lean_dec(v___y_2743_);
lean_dec(v___y_2742_);
return v_res_2748_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Package_0__Lake_Package_mkBuildArchiveFacetConfig___redArg(lean_object* v_facet_2756_, lean_object* v_optFacet_2757_, lean_object* v_what_2758_){
_start:
{
lean_object* v___x_2759_; lean_object* v___f_2760_; lean_object* v___x_2761_; uint8_t v___x_2762_; lean_object* v___x_2763_; lean_object* v___x_2764_; 
v___x_2759_ = l_Lake_instDataKindUnit;
v___f_2760_ = lean_alloc_closure((void*)(l___private_Lake_Build_Package_0__Lake_Package_mkBuildArchiveFacetConfig___redArg___lam__2___boxed), 12, 4);
lean_closure_set(v___f_2760_, 0, v_what_2758_);
lean_closure_set(v___f_2760_, 1, v_optFacet_2757_);
lean_closure_set(v___f_2760_, 2, v_facet_2756_);
lean_closure_set(v___f_2760_, 3, v___x_2759_);
v___x_2761_ = l_Lake_Package_keyword;
v___x_2762_ = 1;
v___x_2763_ = ((lean_object*)(l___private_Lake_Build_Package_0__Lake_Package_mkBuildArchiveFacetConfig___redArg___closed__3));
v___x_2764_ = lean_alloc_ctor(0, 4, 2);
lean_ctor_set(v___x_2764_, 0, v___x_2761_);
lean_ctor_set(v___x_2764_, 1, v___f_2760_);
lean_ctor_set(v___x_2764_, 2, v___x_2759_);
lean_ctor_set(v___x_2764_, 3, v___x_2763_);
lean_ctor_set_uint8(v___x_2764_, sizeof(void*)*4, v___x_2762_);
lean_ctor_set_uint8(v___x_2764_, sizeof(void*)*4 + 1, v___x_2762_);
return v___x_2764_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Package_0__Lake_Package_mkBuildArchiveFacetConfig(lean_object* v_facet_2765_, lean_object* v_optFacet_2766_, lean_object* v_what_2767_, lean_object* v_inst_2768_, lean_object* v_inst_2769_){
_start:
{
lean_object* v___x_2770_; lean_object* v___f_2771_; lean_object* v___x_2772_; uint8_t v___x_2773_; lean_object* v___x_2774_; lean_object* v___x_2775_; 
v___x_2770_ = l_Lake_instDataKindUnit;
v___f_2771_ = lean_alloc_closure((void*)(l___private_Lake_Build_Package_0__Lake_Package_mkBuildArchiveFacetConfig___redArg___lam__2___boxed), 12, 4);
lean_closure_set(v___f_2771_, 0, v_what_2767_);
lean_closure_set(v___f_2771_, 1, v_optFacet_2766_);
lean_closure_set(v___f_2771_, 2, v_facet_2765_);
lean_closure_set(v___f_2771_, 3, v___x_2770_);
v___x_2772_ = l_Lake_Package_keyword;
v___x_2773_ = 1;
v___x_2774_ = ((lean_object*)(l___private_Lake_Build_Package_0__Lake_Package_mkBuildArchiveFacetConfig___redArg___closed__3));
v___x_2775_ = lean_alloc_ctor(0, 4, 2);
lean_ctor_set(v___x_2775_, 0, v___x_2772_);
lean_ctor_set(v___x_2775_, 1, v___f_2771_);
lean_ctor_set(v___x_2775_, 2, v___x_2770_);
lean_ctor_set(v___x_2775_, 3, v___x_2774_);
lean_ctor_set_uint8(v___x_2775_, sizeof(void*)*4, v___x_2773_);
lean_ctor_set_uint8(v___x_2775_, sizeof(void*)*4 + 1, v___x_2773_);
return v___x_2775_;
}
}
LEAN_EXPORT lean_object* l_Lake_Package_buildCacheFacetConfig___lam__1(lean_object* v_baseName_2777_, lean_object* v___x_2778_, uint8_t v_success_2779_, lean_object* v___y_2780_, lean_object* v___y_2781_, lean_object* v___y_2782_, lean_object* v___y_2783_, lean_object* v___y_2784_, lean_object* v___y_2785_){
_start:
{
lean_object* v_a_2788_; lean_object* v_a_2789_; 
if (v_success_2779_ == 0)
{
lean_object* v_toBuildConfig_2809_; uint8_t v_verbosity_2810_; lean_object* v___x_2811_; lean_object* v___x_2812_; uint8_t v___x_2813_; 
v_toBuildConfig_2809_ = lean_ctor_get(v___y_2784_, 0);
v_verbosity_2810_ = lean_ctor_get_uint8(v_toBuildConfig_2809_, sizeof(void*)*5 + 4);
v___x_2811_ = l_Lake_Verbosity_ctorIdx(v_verbosity_2810_);
v___x_2812_ = lean_obj_once(&l___private_Lake_Build_Package_0__Lake_Package_optFacetDetails___redArg___closed__0, &l___private_Lake_Build_Package_0__Lake_Package_optFacetDetails___redArg___closed__0_once, _init_l___private_Lake_Build_Package_0__Lake_Package_optFacetDetails___redArg___closed__0);
v___x_2813_ = lean_nat_dec_eq(v___x_2811_, v___x_2812_);
lean_dec(v___x_2811_);
if (v___x_2813_ == 0)
{
lean_object* v___x_2814_; 
lean_dec(v___x_2778_);
lean_dec(v_baseName_2777_);
v___x_2814_ = ((lean_object*)(l___private_Lake_Build_Package_0__Lake_Package_optFacetDetails___redArg___closed__1));
v_a_2788_ = v___x_2814_;
v_a_2789_ = v___y_2785_;
goto v___jp_2787_;
}
else
{
lean_object* v___x_2815_; lean_object* v___x_2816_; lean_object* v___x_2817_; lean_object* v___x_2818_; lean_object* v___x_2819_; lean_object* v___x_2820_; lean_object* v___x_2821_; lean_object* v___x_2822_; lean_object* v___x_2823_; lean_object* v___x_2824_; 
v___x_2815_ = ((lean_object*)(l___private_Lake_Build_Package_0__Lake_Package_optFacetDetails___redArg___closed__2));
v___x_2816_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_baseName_2777_, v___x_2813_);
v___x_2817_ = lean_string_append(v___x_2815_, v___x_2816_);
lean_dec_ref(v___x_2816_);
v___x_2818_ = ((lean_object*)(l___private_Lake_Build_Package_0__Lake_Package_optFacetDetails___redArg___closed__3));
v___x_2819_ = lean_string_append(v___x_2817_, v___x_2818_);
v___x_2820_ = l_Lake_Name_eraseHead(v___x_2778_);
v___x_2821_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_2820_, v___x_2813_);
v___x_2822_ = lean_string_append(v___x_2819_, v___x_2821_);
lean_dec_ref(v___x_2821_);
v___x_2823_ = ((lean_object*)(l___private_Lake_Build_Package_0__Lake_Package_optFacetDetails___redArg___closed__4));
v___x_2824_ = lean_string_append(v___x_2822_, v___x_2823_);
v_a_2788_ = v___x_2824_;
v_a_2789_ = v___y_2785_;
goto v___jp_2787_;
}
}
else
{
lean_object* v___x_2825_; lean_object* v___x_2826_; 
lean_dec(v___x_2778_);
lean_dec(v_baseName_2777_);
v___x_2825_ = lean_box(0);
v___x_2826_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2826_, 0, v___x_2825_);
lean_ctor_set(v___x_2826_, 1, v___y_2785_);
return v___x_2826_;
}
v___jp_2787_:
{
lean_object* v_log_2790_; uint8_t v_action_2791_; uint8_t v_wantsRebuild_2792_; lean_object* v_trace_2793_; lean_object* v_buildTime_2794_; lean_object* v___x_2796_; uint8_t v_isShared_2797_; uint8_t v_isSharedCheck_2808_; 
v_log_2790_ = lean_ctor_get(v_a_2789_, 0);
v_action_2791_ = lean_ctor_get_uint8(v_a_2789_, sizeof(void*)*3);
v_wantsRebuild_2792_ = lean_ctor_get_uint8(v_a_2789_, sizeof(void*)*3 + 1);
v_trace_2793_ = lean_ctor_get(v_a_2789_, 1);
v_buildTime_2794_ = lean_ctor_get(v_a_2789_, 2);
v_isSharedCheck_2808_ = !lean_is_exclusive(v_a_2789_);
if (v_isSharedCheck_2808_ == 0)
{
v___x_2796_ = v_a_2789_;
v_isShared_2797_ = v_isSharedCheck_2808_;
goto v_resetjp_2795_;
}
else
{
lean_inc(v_buildTime_2794_);
lean_inc(v_trace_2793_);
lean_inc(v_log_2790_);
lean_dec(v_a_2789_);
v___x_2796_ = lean_box(0);
v_isShared_2797_ = v_isSharedCheck_2808_;
goto v_resetjp_2795_;
}
v_resetjp_2795_:
{
lean_object* v___x_2798_; lean_object* v___x_2799_; uint8_t v___x_2800_; lean_object* v___x_2801_; lean_object* v___x_2802_; lean_object* v___x_2803_; lean_object* v___x_2805_; 
v___x_2798_ = ((lean_object*)(l_Lake_Package_buildCacheFacetConfig___lam__1___closed__0));
v___x_2799_ = lean_string_append(v___x_2798_, v_a_2788_);
lean_dec_ref(v_a_2788_);
v___x_2800_ = 3;
v___x_2801_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2801_, 0, v___x_2799_);
lean_ctor_set_uint8(v___x_2801_, sizeof(void*)*1, v___x_2800_);
v___x_2802_ = lean_array_get_size(v_log_2790_);
v___x_2803_ = lean_array_push(v_log_2790_, v___x_2801_);
if (v_isShared_2797_ == 0)
{
lean_ctor_set(v___x_2796_, 0, v___x_2803_);
v___x_2805_ = v___x_2796_;
goto v_reusejp_2804_;
}
else
{
lean_object* v_reuseFailAlloc_2807_; 
v_reuseFailAlloc_2807_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_2807_, 0, v___x_2803_);
lean_ctor_set(v_reuseFailAlloc_2807_, 1, v_trace_2793_);
lean_ctor_set(v_reuseFailAlloc_2807_, 2, v_buildTime_2794_);
lean_ctor_set_uint8(v_reuseFailAlloc_2807_, sizeof(void*)*3, v_action_2791_);
lean_ctor_set_uint8(v_reuseFailAlloc_2807_, sizeof(void*)*3 + 1, v_wantsRebuild_2792_);
v___x_2805_ = v_reuseFailAlloc_2807_;
goto v_reusejp_2804_;
}
v_reusejp_2804_:
{
lean_object* v___x_2806_; 
v___x_2806_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2806_, 0, v___x_2802_);
lean_ctor_set(v___x_2806_, 1, v___x_2805_);
return v___x_2806_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Package_buildCacheFacetConfig___lam__1___boxed(lean_object* v_baseName_2827_, lean_object* v___x_2828_, lean_object* v_success_2829_, lean_object* v___y_2830_, lean_object* v___y_2831_, lean_object* v___y_2832_, lean_object* v___y_2833_, lean_object* v___y_2834_, lean_object* v___y_2835_, lean_object* v___y_2836_){
_start:
{
uint8_t v_success_boxed_2837_; lean_object* v_res_2838_; 
v_success_boxed_2837_ = lean_unbox(v_success_2829_);
v_res_2838_ = l_Lake_Package_buildCacheFacetConfig___lam__1(v_baseName_2827_, v___x_2828_, v_success_boxed_2837_, v___y_2830_, v___y_2831_, v___y_2832_, v___y_2833_, v___y_2834_, v___y_2835_);
lean_dec_ref(v___y_2834_);
lean_dec(v___y_2833_);
lean_dec(v___y_2832_);
lean_dec(v___y_2831_);
lean_dec_ref(v___y_2830_);
return v_res_2838_;
}
}
LEAN_EXPORT lean_object* l_Lake_Package_buildCacheFacetConfig___lam__2(lean_object* v___x_2839_, lean_object* v___x_2840_, lean_object* v___x_2841_, lean_object* v_pkg_2842_, lean_object* v___y_2843_, lean_object* v___y_2844_, lean_object* v___y_2845_, lean_object* v___y_2846_, lean_object* v___y_2847_, lean_object* v___y_2848_){
_start:
{
lean_object* v_baseName_2850_; lean_object* v_keyName_2851_; lean_object* v___f_2852_; uint8_t v___x_2853_; lean_object* v___x_2854_; lean_object* v___x_2855_; lean_object* v___x_2856_; lean_object* v___x_2857_; lean_object* v___x_2858_; lean_object* v___x_2859_; lean_object* v___x_2860_; lean_object* v___x_2861_; lean_object* v___x_2862_; lean_object* v___f_2863_; uint8_t v___x_2864_; lean_object* v___x_2865_; 
v_baseName_2850_ = lean_ctor_get(v_pkg_2842_, 1);
v_keyName_2851_ = lean_ctor_get(v_pkg_2842_, 2);
lean_inc(v___x_2839_);
lean_inc_n(v_baseName_2850_, 2);
v___f_2852_ = lean_alloc_closure((void*)(l_Lake_Package_buildCacheFacetConfig___lam__1___boxed), 10, 2);
lean_closure_set(v___f_2852_, 0, v_baseName_2850_);
lean_closure_set(v___f_2852_, 1, v___x_2839_);
v___x_2853_ = 1;
v___x_2854_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_baseName_2850_, v___x_2853_);
v___x_2855_ = ((lean_object*)(l___private_Lake_Build_Package_0__Lake_Package_optFacetDetails___redArg___closed__3));
v___x_2856_ = lean_string_append(v___x_2854_, v___x_2855_);
v___x_2857_ = l_Lake_Name_eraseHead(v___x_2840_);
v___x_2858_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_2857_, v___x_2853_);
v___x_2859_ = lean_string_append(v___x_2856_, v___x_2858_);
lean_dec_ref(v___x_2858_);
lean_inc(v_keyName_2851_);
v___x_2860_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2860_, 0, v_keyName_2851_);
v___x_2861_ = l_Lake_Package_keyword;
v___x_2862_ = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(v___x_2862_, 0, v___x_2860_);
lean_ctor_set(v___x_2862_, 1, v___x_2861_);
lean_ctor_set(v___x_2862_, 2, v_pkg_2842_);
lean_ctor_set(v___x_2862_, 3, v___x_2839_);
lean_inc(v___x_2841_);
v___f_2863_ = lean_alloc_closure((void*)(l___private_Lake_Build_Package_0__Lake_Package_mkBuildArchiveFacetConfig___redArg___lam__1___boxed), 10, 3);
lean_closure_set(v___f_2863_, 0, v___x_2862_);
lean_closure_set(v___f_2863_, 1, v___x_2841_);
lean_closure_set(v___f_2863_, 2, v___f_2852_);
v___x_2864_ = 0;
v___x_2865_ = l_Lake_ensureJob___redArg(v___x_2841_, v___f_2863_, v___y_2843_, v___y_2844_, v___y_2845_, v___y_2846_, v___y_2847_, v___y_2848_);
if (lean_obj_tag(v___x_2865_) == 0)
{
lean_object* v_a_2866_; lean_object* v_a_2867_; lean_object* v___x_2869_; uint8_t v_isShared_2870_; uint8_t v_isSharedCheck_2890_; 
v_a_2866_ = lean_ctor_get(v___x_2865_, 0);
v_a_2867_ = lean_ctor_get(v___x_2865_, 1);
v_isSharedCheck_2890_ = !lean_is_exclusive(v___x_2865_);
if (v_isSharedCheck_2890_ == 0)
{
v___x_2869_ = v___x_2865_;
v_isShared_2870_ = v_isSharedCheck_2890_;
goto v_resetjp_2868_;
}
else
{
lean_inc(v_a_2867_);
lean_inc(v_a_2866_);
lean_dec(v___x_2865_);
v___x_2869_ = lean_box(0);
v_isShared_2870_ = v_isSharedCheck_2890_;
goto v_resetjp_2868_;
}
v_resetjp_2868_:
{
lean_object* v_task_2871_; lean_object* v_kind_2872_; lean_object* v___x_2874_; uint8_t v_isShared_2875_; uint8_t v_isSharedCheck_2888_; 
v_task_2871_ = lean_ctor_get(v_a_2866_, 0);
v_kind_2872_ = lean_ctor_get(v_a_2866_, 1);
v_isSharedCheck_2888_ = !lean_is_exclusive(v_a_2866_);
if (v_isSharedCheck_2888_ == 0)
{
lean_object* v_unused_2889_; 
v_unused_2889_ = lean_ctor_get(v_a_2866_, 2);
lean_dec(v_unused_2889_);
v___x_2874_ = v_a_2866_;
v_isShared_2875_ = v_isSharedCheck_2888_;
goto v_resetjp_2873_;
}
else
{
lean_inc(v_kind_2872_);
lean_inc(v_task_2871_);
lean_dec(v_a_2866_);
v___x_2874_ = lean_box(0);
v_isShared_2875_ = v_isSharedCheck_2888_;
goto v_resetjp_2873_;
}
v_resetjp_2873_:
{
lean_object* v_registeredJobs_2876_; lean_object* v_job_2878_; 
v_registeredJobs_2876_ = lean_ctor_get(v___y_2847_, 4);
if (v_isShared_2875_ == 0)
{
lean_ctor_set(v___x_2874_, 2, v___x_2859_);
v_job_2878_ = v___x_2874_;
goto v_reusejp_2877_;
}
else
{
lean_object* v_reuseFailAlloc_2887_; 
v_reuseFailAlloc_2887_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_2887_, 0, v_task_2871_);
lean_ctor_set(v_reuseFailAlloc_2887_, 1, v_kind_2872_);
lean_ctor_set(v_reuseFailAlloc_2887_, 2, v___x_2859_);
v_job_2878_ = v_reuseFailAlloc_2887_;
goto v_reusejp_2877_;
}
v_reusejp_2877_:
{
lean_object* v___x_2879_; lean_object* v___x_2880_; lean_object* v___x_2881_; lean_object* v___x_2882_; lean_object* v___x_2883_; lean_object* v___x_2885_; 
lean_ctor_set_uint8(v_job_2878_, sizeof(void*)*3, v___x_2864_);
v___x_2879_ = lean_st_ref_take(v_registeredJobs_2876_);
lean_inc_ref(v_job_2878_);
v___x_2880_ = l_Lake_Job_toOpaque___redArg(v_job_2878_);
v___x_2881_ = lean_array_push(v___x_2879_, v___x_2880_);
v___x_2882_ = lean_st_ref_put(v_registeredJobs_2876_, v___x_2881_);
v___x_2883_ = l_Lake_Job_renew___redArg(v_job_2878_);
if (v_isShared_2870_ == 0)
{
lean_ctor_set(v___x_2869_, 0, v___x_2883_);
v___x_2885_ = v___x_2869_;
goto v_reusejp_2884_;
}
else
{
lean_object* v_reuseFailAlloc_2886_; 
v_reuseFailAlloc_2886_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2886_, 0, v___x_2883_);
lean_ctor_set(v_reuseFailAlloc_2886_, 1, v_a_2867_);
v___x_2885_ = v_reuseFailAlloc_2886_;
goto v_reusejp_2884_;
}
v_reusejp_2884_:
{
return v___x_2885_;
}
}
}
}
}
else
{
lean_dec_ref(v___x_2859_);
return v___x_2865_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_Package_buildCacheFacetConfig___lam__2___boxed(lean_object* v___x_2891_, lean_object* v___x_2892_, lean_object* v___x_2893_, lean_object* v_pkg_2894_, lean_object* v___y_2895_, lean_object* v___y_2896_, lean_object* v___y_2897_, lean_object* v___y_2898_, lean_object* v___y_2899_, lean_object* v___y_2900_, lean_object* v___y_2901_){
_start:
{
lean_object* v_res_2902_; 
v_res_2902_ = l_Lake_Package_buildCacheFacetConfig___lam__2(v___x_2891_, v___x_2892_, v___x_2893_, v_pkg_2894_, v___y_2895_, v___y_2896_, v___y_2897_, v___y_2898_, v___y_2899_, v___y_2900_);
lean_dec_ref(v___y_2899_);
lean_dec(v___y_2898_);
lean_dec(v___y_2897_);
lean_dec(v___y_2896_);
return v_res_2902_;
}
}
static lean_object* _init_l_Lake_Package_buildCacheFacetConfig___closed__0(void){
_start:
{
lean_object* v___x_2903_; lean_object* v___x_2904_; lean_object* v___x_2905_; lean_object* v___f_2906_; 
v___x_2903_ = l_Lake_instDataKindUnit;
v___x_2904_ = l_Lake_Package_buildCacheFacet;
v___x_2905_ = l_Lake_Package_optBuildCacheFacet;
v___f_2906_ = lean_alloc_closure((void*)(l_Lake_Package_buildCacheFacetConfig___lam__2___boxed), 11, 3);
lean_closure_set(v___f_2906_, 0, v___x_2905_);
lean_closure_set(v___f_2906_, 1, v___x_2904_);
lean_closure_set(v___f_2906_, 2, v___x_2903_);
return v___f_2906_;
}
}
static lean_object* _init_l_Lake_Package_buildCacheFacetConfig___closed__1(void){
_start:
{
lean_object* v___f_2907_; uint8_t v___x_2908_; lean_object* v___x_2909_; lean_object* v___f_2910_; lean_object* v___x_2911_; lean_object* v___x_2912_; 
v___f_2907_ = ((lean_object*)(l_Lake_Package_extraDepFacetConfig___closed__0));
v___x_2908_ = 1;
v___x_2909_ = l_Lake_instDataKindUnit;
v___f_2910_ = lean_obj_once(&l_Lake_Package_buildCacheFacetConfig___closed__0, &l_Lake_Package_buildCacheFacetConfig___closed__0_once, _init_l_Lake_Package_buildCacheFacetConfig___closed__0);
v___x_2911_ = l_Lake_Package_keyword;
v___x_2912_ = lean_alloc_ctor(0, 4, 2);
lean_ctor_set(v___x_2912_, 0, v___x_2911_);
lean_ctor_set(v___x_2912_, 1, v___f_2910_);
lean_ctor_set(v___x_2912_, 2, v___x_2909_);
lean_ctor_set(v___x_2912_, 3, v___f_2907_);
lean_ctor_set_uint8(v___x_2912_, sizeof(void*)*4, v___x_2908_);
lean_ctor_set_uint8(v___x_2912_, sizeof(void*)*4 + 1, v___x_2908_);
return v___x_2912_;
}
}
static lean_object* _init_l_Lake_Package_buildCacheFacetConfig(void){
_start:
{
lean_object* v___x_2913_; 
v___x_2913_ = lean_obj_once(&l_Lake_Package_buildCacheFacetConfig___closed__1, &l_Lake_Package_buildCacheFacetConfig___closed__1_once, _init_l_Lake_Package_buildCacheFacetConfig___closed__1);
return v___x_2913_;
}
}
LEAN_EXPORT lean_object* l_Lake_Package_optBarrelFacetConfig___lam__0(lean_object* v_pkg_2915_, lean_object* v_dir_2916_, lean_object* v___x_2917_, lean_object* v___y_2918_, lean_object* v___y_2919_, lean_object* v___y_2920_, lean_object* v___y_2921_, lean_object* v___y_2922_, lean_object* v___y_2923_){
_start:
{
uint8_t v_r_2926_; lean_object* v___y_2927_; lean_object* v_a_2931_; lean_object* v___x_2947_; 
lean_inc_ref(v_pkg_2915_);
v___x_2947_ = l___private_Lake_Build_Package_0__Lake_Package_getBarrelUrl___redArg(v_pkg_2915_, v___y_2922_, v___y_2923_);
if (lean_obj_tag(v___x_2947_) == 0)
{
lean_object* v_a_2948_; lean_object* v_a_2949_; lean_object* v___x_2950_; lean_object* v___x_2951_; lean_object* v___x_2952_; lean_object* v___x_2953_; lean_object* v___x_2954_; 
v_a_2948_ = lean_ctor_get(v___x_2947_, 0);
lean_inc(v_a_2948_);
v_a_2949_ = lean_ctor_get(v___x_2947_, 1);
lean_inc(v_a_2949_);
lean_dec_ref_known(v___x_2947_, 2);
v___x_2950_ = l_Lake_defaultLakeDir;
v___x_2951_ = l_Lake_joinRelative(v_dir_2916_, v___x_2950_);
v___x_2952_ = ((lean_object*)(l_Lake_Package_optBarrelFacetConfig___lam__0___closed__0));
v___x_2953_ = l_Lake_joinRelative(v___x_2951_, v___x_2952_);
v___x_2954_ = l___private_Lake_Build_Package_0__Lake_Package_fetchBuildArchive(v_pkg_2915_, v_a_2948_, v___x_2953_, v___x_2917_, v___y_2918_, v___y_2919_, v___y_2920_, v___y_2921_, v___y_2922_, v_a_2949_);
if (lean_obj_tag(v___x_2954_) == 0)
{
lean_object* v_a_2955_; uint8_t v___x_2956_; 
v_a_2955_ = lean_ctor_get(v___x_2954_, 1);
lean_inc(v_a_2955_);
lean_dec_ref_known(v___x_2954_, 2);
v___x_2956_ = 1;
v_r_2926_ = v___x_2956_;
v___y_2927_ = v_a_2955_;
goto v___jp_2925_;
}
else
{
lean_object* v_a_2957_; 
v_a_2957_ = lean_ctor_get(v___x_2954_, 1);
lean_inc(v_a_2957_);
lean_dec_ref_known(v___x_2954_, 2);
v_a_2931_ = v_a_2957_;
goto v___jp_2930_;
}
}
else
{
lean_object* v_a_2958_; 
lean_dec_ref(v_dir_2916_);
lean_dec_ref(v_pkg_2915_);
v_a_2958_ = lean_ctor_get(v___x_2947_, 1);
lean_inc(v_a_2958_);
lean_dec_ref_known(v___x_2947_, 2);
v_a_2931_ = v_a_2958_;
goto v___jp_2930_;
}
v___jp_2925_:
{
lean_object* v___x_2928_; lean_object* v___x_2929_; 
v___x_2928_ = lean_box(v_r_2926_);
v___x_2929_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2929_, 0, v___x_2928_);
lean_ctor_set(v___x_2929_, 1, v___y_2927_);
return v___x_2929_;
}
v___jp_2930_:
{
lean_object* v_log_2932_; uint8_t v_action_2933_; uint8_t v_wantsRebuild_2934_; lean_object* v_trace_2935_; lean_object* v_buildTime_2936_; lean_object* v___x_2938_; uint8_t v_isShared_2939_; uint8_t v_isSharedCheck_2946_; 
v_log_2932_ = lean_ctor_get(v_a_2931_, 0);
v_action_2933_ = lean_ctor_get_uint8(v_a_2931_, sizeof(void*)*3);
v_wantsRebuild_2934_ = lean_ctor_get_uint8(v_a_2931_, sizeof(void*)*3 + 1);
v_trace_2935_ = lean_ctor_get(v_a_2931_, 1);
v_buildTime_2936_ = lean_ctor_get(v_a_2931_, 2);
v_isSharedCheck_2946_ = !lean_is_exclusive(v_a_2931_);
if (v_isSharedCheck_2946_ == 0)
{
v___x_2938_ = v_a_2931_;
v_isShared_2939_ = v_isSharedCheck_2946_;
goto v_resetjp_2937_;
}
else
{
lean_inc(v_buildTime_2936_);
lean_inc(v_trace_2935_);
lean_inc(v_log_2932_);
lean_dec(v_a_2931_);
v___x_2938_ = lean_box(0);
v_isShared_2939_ = v_isSharedCheck_2946_;
goto v_resetjp_2937_;
}
v_resetjp_2937_:
{
uint8_t v___x_2940_; uint8_t v___x_2941_; lean_object* v___x_2943_; 
v___x_2940_ = 4;
v___x_2941_ = l_Lake_JobAction_merge(v_action_2933_, v___x_2940_);
if (v_isShared_2939_ == 0)
{
v___x_2943_ = v___x_2938_;
goto v_reusejp_2942_;
}
else
{
lean_object* v_reuseFailAlloc_2945_; 
v_reuseFailAlloc_2945_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_2945_, 0, v_log_2932_);
lean_ctor_set(v_reuseFailAlloc_2945_, 1, v_trace_2935_);
lean_ctor_set(v_reuseFailAlloc_2945_, 2, v_buildTime_2936_);
lean_ctor_set_uint8(v_reuseFailAlloc_2945_, sizeof(void*)*3 + 1, v_wantsRebuild_2934_);
v___x_2943_ = v_reuseFailAlloc_2945_;
goto v_reusejp_2942_;
}
v_reusejp_2942_:
{
uint8_t v___x_2944_; 
lean_ctor_set_uint8(v___x_2943_, sizeof(void*)*3, v___x_2941_);
v___x_2944_ = 0;
v_r_2926_ = v___x_2944_;
v___y_2927_ = v___x_2943_;
goto v___jp_2925_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Package_optBarrelFacetConfig___lam__0___boxed(lean_object* v_pkg_2959_, lean_object* v_dir_2960_, lean_object* v___x_2961_, lean_object* v___y_2962_, lean_object* v___y_2963_, lean_object* v___y_2964_, lean_object* v___y_2965_, lean_object* v___y_2966_, lean_object* v___y_2967_, lean_object* v___y_2968_){
_start:
{
lean_object* v_res_2969_; 
v_res_2969_ = l_Lake_Package_optBarrelFacetConfig___lam__0(v_pkg_2959_, v_dir_2960_, v___x_2961_, v___y_2962_, v___y_2963_, v___y_2964_, v___y_2965_, v___y_2966_, v___y_2967_);
lean_dec_ref(v___y_2966_);
lean_dec(v___y_2965_);
lean_dec(v___y_2964_);
lean_dec(v___y_2963_);
lean_dec_ref(v___y_2962_);
lean_dec_ref(v___x_2961_);
return v_res_2969_;
}
}
LEAN_EXPORT lean_object* l_Lake_Package_optBarrelFacetConfig___lam__1(lean_object* v___x_2970_, lean_object* v___f_2971_, lean_object* v___x_2972_, lean_object* v___x_2973_, lean_object* v___y_2974_, lean_object* v___y_2975_, lean_object* v___y_2976_, lean_object* v___y_2977_, lean_object* v___y_2978_, lean_object* v___y_2979_){
_start:
{
lean_object* v___x_2981_; lean_object* v___x_2982_; 
v___x_2981_ = l_Lake_Job_async___redArg(v___x_2970_, v___f_2971_, v___x_2972_, v___x_2973_, v___y_2974_, v___y_2975_, v___y_2976_, v___y_2977_, v___y_2978_);
v___x_2982_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2982_, 0, v___x_2981_);
lean_ctor_set(v___x_2982_, 1, v___y_2979_);
return v___x_2982_;
}
}
LEAN_EXPORT lean_object* l_Lake_Package_optBarrelFacetConfig___lam__1___boxed(lean_object* v___x_2983_, lean_object* v___f_2984_, lean_object* v___x_2985_, lean_object* v___x_2986_, lean_object* v___y_2987_, lean_object* v___y_2988_, lean_object* v___y_2989_, lean_object* v___y_2990_, lean_object* v___y_2991_, lean_object* v___y_2992_, lean_object* v___y_2993_){
_start:
{
lean_object* v_res_2994_; 
v_res_2994_ = l_Lake_Package_optBarrelFacetConfig___lam__1(v___x_2983_, v___f_2984_, v___x_2985_, v___x_2986_, v___y_2987_, v___y_2988_, v___y_2989_, v___y_2990_, v___y_2991_, v___y_2992_);
lean_dec_ref(v___y_2991_);
lean_dec(v___y_2990_);
lean_dec(v___y_2989_);
lean_dec(v___y_2988_);
return v_res_2994_;
}
}
LEAN_EXPORT lean_object* l_Lake_Package_optBarrelFacetConfig___lam__2(lean_object* v___x_2995_, lean_object* v___x_2996_, lean_object* v___x_2997_, lean_object* v_pkg_2998_, lean_object* v___y_2999_, lean_object* v___y_3000_, lean_object* v___y_3001_, lean_object* v___y_3002_, lean_object* v___y_3003_, lean_object* v___y_3004_){
_start:
{
lean_object* v_baseName_3006_; lean_object* v_dir_3007_; lean_object* v___f_3008_; uint8_t v___x_3009_; lean_object* v___x_3010_; lean_object* v___x_3011_; lean_object* v___x_3012_; lean_object* v___x_3013_; lean_object* v___x_3014_; lean_object* v___x_3015_; lean_object* v___x_3016_; lean_object* v___x_3017_; lean_object* v___f_3018_; lean_object* v___x_3019_; 
v_baseName_3006_ = lean_ctor_get(v_pkg_2998_, 1);
lean_inc(v_baseName_3006_);
v_dir_3007_ = lean_ctor_get(v_pkg_2998_, 4);
lean_inc_ref(v_dir_3007_);
v___f_3008_ = lean_alloc_closure((void*)(l_Lake_Package_optBarrelFacetConfig___lam__0___boxed), 10, 3);
lean_closure_set(v___f_3008_, 0, v_pkg_2998_);
lean_closure_set(v___f_3008_, 1, v_dir_3007_);
lean_closure_set(v___f_3008_, 2, v___x_2995_);
v___x_3009_ = 1;
v___x_3010_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_baseName_3006_, v___x_3009_);
v___x_3011_ = ((lean_object*)(l___private_Lake_Build_Package_0__Lake_Package_optFacetDetails___redArg___closed__3));
v___x_3012_ = lean_string_append(v___x_3010_, v___x_3011_);
v___x_3013_ = l_Lake_Name_eraseHead(v___x_2996_);
v___x_3014_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_3013_, v___x_3009_);
v___x_3015_ = lean_string_append(v___x_3012_, v___x_3014_);
lean_dec_ref(v___x_3014_);
v___x_3016_ = lean_unsigned_to_nat(0u);
v___x_3017_ = ((lean_object*)(l___private_Lake_Build_Package_0__Lake_Package_recFetchDeps___redArg___closed__2));
lean_inc(v___x_2997_);
v___f_3018_ = lean_alloc_closure((void*)(l_Lake_Package_optBarrelFacetConfig___lam__1___boxed), 11, 4);
lean_closure_set(v___f_3018_, 0, v___x_2997_);
lean_closure_set(v___f_3018_, 1, v___f_3008_);
lean_closure_set(v___f_3018_, 2, v___x_3016_);
lean_closure_set(v___f_3018_, 3, v___x_3017_);
v___x_3019_ = l_Lake_ensureJob___redArg(v___x_2997_, v___f_3018_, v___y_2999_, v___y_3000_, v___y_3001_, v___y_3002_, v___y_3003_, v___y_3004_);
if (lean_obj_tag(v___x_3019_) == 0)
{
lean_object* v_a_3020_; lean_object* v_a_3021_; lean_object* v___x_3023_; uint8_t v_isShared_3024_; uint8_t v_isSharedCheck_3044_; 
v_a_3020_ = lean_ctor_get(v___x_3019_, 0);
v_a_3021_ = lean_ctor_get(v___x_3019_, 1);
v_isSharedCheck_3044_ = !lean_is_exclusive(v___x_3019_);
if (v_isSharedCheck_3044_ == 0)
{
v___x_3023_ = v___x_3019_;
v_isShared_3024_ = v_isSharedCheck_3044_;
goto v_resetjp_3022_;
}
else
{
lean_inc(v_a_3021_);
lean_inc(v_a_3020_);
lean_dec(v___x_3019_);
v___x_3023_ = lean_box(0);
v_isShared_3024_ = v_isSharedCheck_3044_;
goto v_resetjp_3022_;
}
v_resetjp_3022_:
{
lean_object* v_task_3025_; lean_object* v_kind_3026_; lean_object* v___x_3028_; uint8_t v_isShared_3029_; uint8_t v_isSharedCheck_3042_; 
v_task_3025_ = lean_ctor_get(v_a_3020_, 0);
v_kind_3026_ = lean_ctor_get(v_a_3020_, 1);
v_isSharedCheck_3042_ = !lean_is_exclusive(v_a_3020_);
if (v_isSharedCheck_3042_ == 0)
{
lean_object* v_unused_3043_; 
v_unused_3043_ = lean_ctor_get(v_a_3020_, 2);
lean_dec(v_unused_3043_);
v___x_3028_ = v_a_3020_;
v_isShared_3029_ = v_isSharedCheck_3042_;
goto v_resetjp_3027_;
}
else
{
lean_inc(v_kind_3026_);
lean_inc(v_task_3025_);
lean_dec(v_a_3020_);
v___x_3028_ = lean_box(0);
v_isShared_3029_ = v_isSharedCheck_3042_;
goto v_resetjp_3027_;
}
v_resetjp_3027_:
{
lean_object* v_registeredJobs_3030_; lean_object* v_job_3032_; 
v_registeredJobs_3030_ = lean_ctor_get(v___y_3003_, 4);
if (v_isShared_3029_ == 0)
{
lean_ctor_set(v___x_3028_, 2, v___x_3015_);
v_job_3032_ = v___x_3028_;
goto v_reusejp_3031_;
}
else
{
lean_object* v_reuseFailAlloc_3041_; 
v_reuseFailAlloc_3041_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_3041_, 0, v_task_3025_);
lean_ctor_set(v_reuseFailAlloc_3041_, 1, v_kind_3026_);
lean_ctor_set(v_reuseFailAlloc_3041_, 2, v___x_3015_);
v_job_3032_ = v_reuseFailAlloc_3041_;
goto v_reusejp_3031_;
}
v_reusejp_3031_:
{
lean_object* v___x_3033_; lean_object* v___x_3034_; lean_object* v___x_3035_; lean_object* v___x_3036_; lean_object* v___x_3037_; lean_object* v___x_3039_; 
lean_ctor_set_uint8(v_job_3032_, sizeof(void*)*3, v___x_3009_);
v___x_3033_ = lean_st_ref_take(v_registeredJobs_3030_);
lean_inc_ref(v_job_3032_);
v___x_3034_ = l_Lake_Job_toOpaque___redArg(v_job_3032_);
v___x_3035_ = lean_array_push(v___x_3033_, v___x_3034_);
v___x_3036_ = lean_st_ref_put(v_registeredJobs_3030_, v___x_3035_);
v___x_3037_ = l_Lake_Job_renew___redArg(v_job_3032_);
if (v_isShared_3024_ == 0)
{
lean_ctor_set(v___x_3023_, 0, v___x_3037_);
v___x_3039_ = v___x_3023_;
goto v_reusejp_3038_;
}
else
{
lean_object* v_reuseFailAlloc_3040_; 
v_reuseFailAlloc_3040_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3040_, 0, v___x_3037_);
lean_ctor_set(v_reuseFailAlloc_3040_, 1, v_a_3021_);
v___x_3039_ = v_reuseFailAlloc_3040_;
goto v_reusejp_3038_;
}
v_reusejp_3038_:
{
return v___x_3039_;
}
}
}
}
}
else
{
lean_dec_ref(v___x_3015_);
return v___x_3019_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_Package_optBarrelFacetConfig___lam__2___boxed(lean_object* v___x_3045_, lean_object* v___x_3046_, lean_object* v___x_3047_, lean_object* v_pkg_3048_, lean_object* v___y_3049_, lean_object* v___y_3050_, lean_object* v___y_3051_, lean_object* v___y_3052_, lean_object* v___y_3053_, lean_object* v___y_3054_, lean_object* v___y_3055_){
_start:
{
lean_object* v_res_3056_; 
v_res_3056_ = l_Lake_Package_optBarrelFacetConfig___lam__2(v___x_3045_, v___x_3046_, v___x_3047_, v_pkg_3048_, v___y_3049_, v___y_3050_, v___y_3051_, v___y_3052_, v___y_3053_, v___y_3054_);
lean_dec_ref(v___y_3053_);
lean_dec(v___y_3052_);
lean_dec(v___y_3051_);
lean_dec(v___y_3050_);
return v_res_3056_;
}
}
static lean_object* _init_l_Lake_Package_optBarrelFacetConfig___closed__0(void){
_start:
{
lean_object* v___x_3057_; lean_object* v___x_3058_; lean_object* v___x_3059_; lean_object* v___f_3060_; 
v___x_3057_ = l_Lake_instDataKindBool;
v___x_3058_ = l_Lake_Package_optReservoirBarrelFacet;
v___x_3059_ = l_Lake_Reservoir_lakeHeaders;
v___f_3060_ = lean_alloc_closure((void*)(l_Lake_Package_optBarrelFacetConfig___lam__2___boxed), 11, 3);
lean_closure_set(v___f_3060_, 0, v___x_3059_);
lean_closure_set(v___f_3060_, 1, v___x_3058_);
lean_closure_set(v___f_3060_, 2, v___x_3057_);
return v___f_3060_;
}
}
static lean_object* _init_l_Lake_Package_optBarrelFacetConfig___closed__1(void){
_start:
{
lean_object* v___f_3061_; uint8_t v___x_3062_; lean_object* v___x_3063_; lean_object* v___f_3064_; lean_object* v___x_3065_; lean_object* v___x_3066_; 
v___f_3061_ = ((lean_object*)(l_Lake_Package_optBuildCacheFacetConfig___closed__1));
v___x_3062_ = 1;
v___x_3063_ = l_Lake_instDataKindBool;
v___f_3064_ = lean_obj_once(&l_Lake_Package_optBarrelFacetConfig___closed__0, &l_Lake_Package_optBarrelFacetConfig___closed__0_once, _init_l_Lake_Package_optBarrelFacetConfig___closed__0);
v___x_3065_ = l_Lake_Package_keyword;
v___x_3066_ = lean_alloc_ctor(0, 4, 2);
lean_ctor_set(v___x_3066_, 0, v___x_3065_);
lean_ctor_set(v___x_3066_, 1, v___f_3064_);
lean_ctor_set(v___x_3066_, 2, v___x_3063_);
lean_ctor_set(v___x_3066_, 3, v___f_3061_);
lean_ctor_set_uint8(v___x_3066_, sizeof(void*)*4, v___x_3062_);
lean_ctor_set_uint8(v___x_3066_, sizeof(void*)*4 + 1, v___x_3062_);
return v___x_3066_;
}
}
static lean_object* _init_l_Lake_Package_optBarrelFacetConfig(void){
_start:
{
lean_object* v___x_3067_; 
v___x_3067_ = lean_obj_once(&l_Lake_Package_optBarrelFacetConfig___closed__1, &l_Lake_Package_optBarrelFacetConfig___closed__1_once, _init_l_Lake_Package_optBarrelFacetConfig___closed__1);
return v___x_3067_;
}
}
LEAN_EXPORT lean_object* l_Lake_Package_barrelFacetConfig___lam__1(lean_object* v_baseName_3069_, lean_object* v___x_3070_, uint8_t v_success_3071_, lean_object* v___y_3072_, lean_object* v___y_3073_, lean_object* v___y_3074_, lean_object* v___y_3075_, lean_object* v___y_3076_, lean_object* v___y_3077_){
_start:
{
lean_object* v_a_3080_; lean_object* v_a_3081_; 
if (v_success_3071_ == 0)
{
lean_object* v_toBuildConfig_3101_; uint8_t v_verbosity_3102_; lean_object* v___x_3103_; lean_object* v___x_3104_; uint8_t v___x_3105_; 
v_toBuildConfig_3101_ = lean_ctor_get(v___y_3076_, 0);
v_verbosity_3102_ = lean_ctor_get_uint8(v_toBuildConfig_3101_, sizeof(void*)*5 + 4);
v___x_3103_ = l_Lake_Verbosity_ctorIdx(v_verbosity_3102_);
v___x_3104_ = lean_obj_once(&l___private_Lake_Build_Package_0__Lake_Package_optFacetDetails___redArg___closed__0, &l___private_Lake_Build_Package_0__Lake_Package_optFacetDetails___redArg___closed__0_once, _init_l___private_Lake_Build_Package_0__Lake_Package_optFacetDetails___redArg___closed__0);
v___x_3105_ = lean_nat_dec_eq(v___x_3103_, v___x_3104_);
lean_dec(v___x_3103_);
if (v___x_3105_ == 0)
{
lean_object* v___x_3106_; 
lean_dec(v___x_3070_);
lean_dec(v_baseName_3069_);
v___x_3106_ = ((lean_object*)(l___private_Lake_Build_Package_0__Lake_Package_optFacetDetails___redArg___closed__1));
v_a_3080_ = v___x_3106_;
v_a_3081_ = v___y_3077_;
goto v___jp_3079_;
}
else
{
lean_object* v___x_3107_; lean_object* v___x_3108_; lean_object* v___x_3109_; lean_object* v___x_3110_; lean_object* v___x_3111_; lean_object* v___x_3112_; lean_object* v___x_3113_; lean_object* v___x_3114_; lean_object* v___x_3115_; lean_object* v___x_3116_; 
v___x_3107_ = ((lean_object*)(l___private_Lake_Build_Package_0__Lake_Package_optFacetDetails___redArg___closed__2));
v___x_3108_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_baseName_3069_, v___x_3105_);
v___x_3109_ = lean_string_append(v___x_3107_, v___x_3108_);
lean_dec_ref(v___x_3108_);
v___x_3110_ = ((lean_object*)(l___private_Lake_Build_Package_0__Lake_Package_optFacetDetails___redArg___closed__3));
v___x_3111_ = lean_string_append(v___x_3109_, v___x_3110_);
v___x_3112_ = l_Lake_Name_eraseHead(v___x_3070_);
v___x_3113_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_3112_, v___x_3105_);
v___x_3114_ = lean_string_append(v___x_3111_, v___x_3113_);
lean_dec_ref(v___x_3113_);
v___x_3115_ = ((lean_object*)(l___private_Lake_Build_Package_0__Lake_Package_optFacetDetails___redArg___closed__4));
v___x_3116_ = lean_string_append(v___x_3114_, v___x_3115_);
v_a_3080_ = v___x_3116_;
v_a_3081_ = v___y_3077_;
goto v___jp_3079_;
}
}
else
{
lean_object* v___x_3117_; lean_object* v___x_3118_; 
lean_dec(v___x_3070_);
lean_dec(v_baseName_3069_);
v___x_3117_ = lean_box(0);
v___x_3118_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3118_, 0, v___x_3117_);
lean_ctor_set(v___x_3118_, 1, v___y_3077_);
return v___x_3118_;
}
v___jp_3079_:
{
lean_object* v_log_3082_; uint8_t v_action_3083_; uint8_t v_wantsRebuild_3084_; lean_object* v_trace_3085_; lean_object* v_buildTime_3086_; lean_object* v___x_3088_; uint8_t v_isShared_3089_; uint8_t v_isSharedCheck_3100_; 
v_log_3082_ = lean_ctor_get(v_a_3081_, 0);
v_action_3083_ = lean_ctor_get_uint8(v_a_3081_, sizeof(void*)*3);
v_wantsRebuild_3084_ = lean_ctor_get_uint8(v_a_3081_, sizeof(void*)*3 + 1);
v_trace_3085_ = lean_ctor_get(v_a_3081_, 1);
v_buildTime_3086_ = lean_ctor_get(v_a_3081_, 2);
v_isSharedCheck_3100_ = !lean_is_exclusive(v_a_3081_);
if (v_isSharedCheck_3100_ == 0)
{
v___x_3088_ = v_a_3081_;
v_isShared_3089_ = v_isSharedCheck_3100_;
goto v_resetjp_3087_;
}
else
{
lean_inc(v_buildTime_3086_);
lean_inc(v_trace_3085_);
lean_inc(v_log_3082_);
lean_dec(v_a_3081_);
v___x_3088_ = lean_box(0);
v_isShared_3089_ = v_isSharedCheck_3100_;
goto v_resetjp_3087_;
}
v_resetjp_3087_:
{
lean_object* v___x_3090_; lean_object* v___x_3091_; uint8_t v___x_3092_; lean_object* v___x_3093_; lean_object* v___x_3094_; lean_object* v___x_3095_; lean_object* v___x_3097_; 
v___x_3090_ = ((lean_object*)(l_Lake_Package_barrelFacetConfig___lam__1___closed__0));
v___x_3091_ = lean_string_append(v___x_3090_, v_a_3080_);
lean_dec_ref(v_a_3080_);
v___x_3092_ = 3;
v___x_3093_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_3093_, 0, v___x_3091_);
lean_ctor_set_uint8(v___x_3093_, sizeof(void*)*1, v___x_3092_);
v___x_3094_ = lean_array_get_size(v_log_3082_);
v___x_3095_ = lean_array_push(v_log_3082_, v___x_3093_);
if (v_isShared_3089_ == 0)
{
lean_ctor_set(v___x_3088_, 0, v___x_3095_);
v___x_3097_ = v___x_3088_;
goto v_reusejp_3096_;
}
else
{
lean_object* v_reuseFailAlloc_3099_; 
v_reuseFailAlloc_3099_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_3099_, 0, v___x_3095_);
lean_ctor_set(v_reuseFailAlloc_3099_, 1, v_trace_3085_);
lean_ctor_set(v_reuseFailAlloc_3099_, 2, v_buildTime_3086_);
lean_ctor_set_uint8(v_reuseFailAlloc_3099_, sizeof(void*)*3, v_action_3083_);
lean_ctor_set_uint8(v_reuseFailAlloc_3099_, sizeof(void*)*3 + 1, v_wantsRebuild_3084_);
v___x_3097_ = v_reuseFailAlloc_3099_;
goto v_reusejp_3096_;
}
v_reusejp_3096_:
{
lean_object* v___x_3098_; 
v___x_3098_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3098_, 0, v___x_3094_);
lean_ctor_set(v___x_3098_, 1, v___x_3097_);
return v___x_3098_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Package_barrelFacetConfig___lam__1___boxed(lean_object* v_baseName_3119_, lean_object* v___x_3120_, lean_object* v_success_3121_, lean_object* v___y_3122_, lean_object* v___y_3123_, lean_object* v___y_3124_, lean_object* v___y_3125_, lean_object* v___y_3126_, lean_object* v___y_3127_, lean_object* v___y_3128_){
_start:
{
uint8_t v_success_boxed_3129_; lean_object* v_res_3130_; 
v_success_boxed_3129_ = lean_unbox(v_success_3121_);
v_res_3130_ = l_Lake_Package_barrelFacetConfig___lam__1(v_baseName_3119_, v___x_3120_, v_success_boxed_3129_, v___y_3122_, v___y_3123_, v___y_3124_, v___y_3125_, v___y_3126_, v___y_3127_);
lean_dec_ref(v___y_3126_);
lean_dec(v___y_3125_);
lean_dec(v___y_3124_);
lean_dec(v___y_3123_);
lean_dec_ref(v___y_3122_);
return v_res_3130_;
}
}
LEAN_EXPORT lean_object* l_Lake_Package_barrelFacetConfig___lam__2(lean_object* v___x_3131_, lean_object* v___x_3132_, lean_object* v___x_3133_, lean_object* v_pkg_3134_, lean_object* v___y_3135_, lean_object* v___y_3136_, lean_object* v___y_3137_, lean_object* v___y_3138_, lean_object* v___y_3139_, lean_object* v___y_3140_){
_start:
{
lean_object* v_baseName_3142_; lean_object* v_keyName_3143_; lean_object* v___f_3144_; uint8_t v___x_3145_; lean_object* v___x_3146_; lean_object* v___x_3147_; lean_object* v___x_3148_; lean_object* v___x_3149_; lean_object* v___x_3150_; lean_object* v___x_3151_; lean_object* v___x_3152_; lean_object* v___x_3153_; lean_object* v___x_3154_; lean_object* v___f_3155_; uint8_t v___x_3156_; lean_object* v___x_3157_; 
v_baseName_3142_ = lean_ctor_get(v_pkg_3134_, 1);
v_keyName_3143_ = lean_ctor_get(v_pkg_3134_, 2);
lean_inc(v___x_3131_);
lean_inc_n(v_baseName_3142_, 2);
v___f_3144_ = lean_alloc_closure((void*)(l_Lake_Package_barrelFacetConfig___lam__1___boxed), 10, 2);
lean_closure_set(v___f_3144_, 0, v_baseName_3142_);
lean_closure_set(v___f_3144_, 1, v___x_3131_);
v___x_3145_ = 1;
v___x_3146_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_baseName_3142_, v___x_3145_);
v___x_3147_ = ((lean_object*)(l___private_Lake_Build_Package_0__Lake_Package_optFacetDetails___redArg___closed__3));
v___x_3148_ = lean_string_append(v___x_3146_, v___x_3147_);
v___x_3149_ = l_Lake_Name_eraseHead(v___x_3132_);
v___x_3150_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_3149_, v___x_3145_);
v___x_3151_ = lean_string_append(v___x_3148_, v___x_3150_);
lean_dec_ref(v___x_3150_);
lean_inc(v_keyName_3143_);
v___x_3152_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3152_, 0, v_keyName_3143_);
v___x_3153_ = l_Lake_Package_keyword;
v___x_3154_ = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(v___x_3154_, 0, v___x_3152_);
lean_ctor_set(v___x_3154_, 1, v___x_3153_);
lean_ctor_set(v___x_3154_, 2, v_pkg_3134_);
lean_ctor_set(v___x_3154_, 3, v___x_3131_);
lean_inc(v___x_3133_);
v___f_3155_ = lean_alloc_closure((void*)(l___private_Lake_Build_Package_0__Lake_Package_mkBuildArchiveFacetConfig___redArg___lam__1___boxed), 10, 3);
lean_closure_set(v___f_3155_, 0, v___x_3154_);
lean_closure_set(v___f_3155_, 1, v___x_3133_);
lean_closure_set(v___f_3155_, 2, v___f_3144_);
v___x_3156_ = 0;
v___x_3157_ = l_Lake_ensureJob___redArg(v___x_3133_, v___f_3155_, v___y_3135_, v___y_3136_, v___y_3137_, v___y_3138_, v___y_3139_, v___y_3140_);
if (lean_obj_tag(v___x_3157_) == 0)
{
lean_object* v_a_3158_; lean_object* v_a_3159_; lean_object* v___x_3161_; uint8_t v_isShared_3162_; uint8_t v_isSharedCheck_3182_; 
v_a_3158_ = lean_ctor_get(v___x_3157_, 0);
v_a_3159_ = lean_ctor_get(v___x_3157_, 1);
v_isSharedCheck_3182_ = !lean_is_exclusive(v___x_3157_);
if (v_isSharedCheck_3182_ == 0)
{
v___x_3161_ = v___x_3157_;
v_isShared_3162_ = v_isSharedCheck_3182_;
goto v_resetjp_3160_;
}
else
{
lean_inc(v_a_3159_);
lean_inc(v_a_3158_);
lean_dec(v___x_3157_);
v___x_3161_ = lean_box(0);
v_isShared_3162_ = v_isSharedCheck_3182_;
goto v_resetjp_3160_;
}
v_resetjp_3160_:
{
lean_object* v_task_3163_; lean_object* v_kind_3164_; lean_object* v___x_3166_; uint8_t v_isShared_3167_; uint8_t v_isSharedCheck_3180_; 
v_task_3163_ = lean_ctor_get(v_a_3158_, 0);
v_kind_3164_ = lean_ctor_get(v_a_3158_, 1);
v_isSharedCheck_3180_ = !lean_is_exclusive(v_a_3158_);
if (v_isSharedCheck_3180_ == 0)
{
lean_object* v_unused_3181_; 
v_unused_3181_ = lean_ctor_get(v_a_3158_, 2);
lean_dec(v_unused_3181_);
v___x_3166_ = v_a_3158_;
v_isShared_3167_ = v_isSharedCheck_3180_;
goto v_resetjp_3165_;
}
else
{
lean_inc(v_kind_3164_);
lean_inc(v_task_3163_);
lean_dec(v_a_3158_);
v___x_3166_ = lean_box(0);
v_isShared_3167_ = v_isSharedCheck_3180_;
goto v_resetjp_3165_;
}
v_resetjp_3165_:
{
lean_object* v_registeredJobs_3168_; lean_object* v_job_3170_; 
v_registeredJobs_3168_ = lean_ctor_get(v___y_3139_, 4);
if (v_isShared_3167_ == 0)
{
lean_ctor_set(v___x_3166_, 2, v___x_3151_);
v_job_3170_ = v___x_3166_;
goto v_reusejp_3169_;
}
else
{
lean_object* v_reuseFailAlloc_3179_; 
v_reuseFailAlloc_3179_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_3179_, 0, v_task_3163_);
lean_ctor_set(v_reuseFailAlloc_3179_, 1, v_kind_3164_);
lean_ctor_set(v_reuseFailAlloc_3179_, 2, v___x_3151_);
v_job_3170_ = v_reuseFailAlloc_3179_;
goto v_reusejp_3169_;
}
v_reusejp_3169_:
{
lean_object* v___x_3171_; lean_object* v___x_3172_; lean_object* v___x_3173_; lean_object* v___x_3174_; lean_object* v___x_3175_; lean_object* v___x_3177_; 
lean_ctor_set_uint8(v_job_3170_, sizeof(void*)*3, v___x_3156_);
v___x_3171_ = lean_st_ref_take(v_registeredJobs_3168_);
lean_inc_ref(v_job_3170_);
v___x_3172_ = l_Lake_Job_toOpaque___redArg(v_job_3170_);
v___x_3173_ = lean_array_push(v___x_3171_, v___x_3172_);
v___x_3174_ = lean_st_ref_put(v_registeredJobs_3168_, v___x_3173_);
v___x_3175_ = l_Lake_Job_renew___redArg(v_job_3170_);
if (v_isShared_3162_ == 0)
{
lean_ctor_set(v___x_3161_, 0, v___x_3175_);
v___x_3177_ = v___x_3161_;
goto v_reusejp_3176_;
}
else
{
lean_object* v_reuseFailAlloc_3178_; 
v_reuseFailAlloc_3178_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3178_, 0, v___x_3175_);
lean_ctor_set(v_reuseFailAlloc_3178_, 1, v_a_3159_);
v___x_3177_ = v_reuseFailAlloc_3178_;
goto v_reusejp_3176_;
}
v_reusejp_3176_:
{
return v___x_3177_;
}
}
}
}
}
else
{
lean_dec_ref(v___x_3151_);
return v___x_3157_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_Package_barrelFacetConfig___lam__2___boxed(lean_object* v___x_3183_, lean_object* v___x_3184_, lean_object* v___x_3185_, lean_object* v_pkg_3186_, lean_object* v___y_3187_, lean_object* v___y_3188_, lean_object* v___y_3189_, lean_object* v___y_3190_, lean_object* v___y_3191_, lean_object* v___y_3192_, lean_object* v___y_3193_){
_start:
{
lean_object* v_res_3194_; 
v_res_3194_ = l_Lake_Package_barrelFacetConfig___lam__2(v___x_3183_, v___x_3184_, v___x_3185_, v_pkg_3186_, v___y_3187_, v___y_3188_, v___y_3189_, v___y_3190_, v___y_3191_, v___y_3192_);
lean_dec_ref(v___y_3191_);
lean_dec(v___y_3190_);
lean_dec(v___y_3189_);
lean_dec(v___y_3188_);
return v_res_3194_;
}
}
static lean_object* _init_l_Lake_Package_barrelFacetConfig___closed__0(void){
_start:
{
lean_object* v___x_3195_; lean_object* v___x_3196_; lean_object* v___x_3197_; lean_object* v___f_3198_; 
v___x_3195_ = l_Lake_instDataKindUnit;
v___x_3196_ = l_Lake_Package_reservoirBarrelFacet;
v___x_3197_ = l_Lake_Package_optReservoirBarrelFacet;
v___f_3198_ = lean_alloc_closure((void*)(l_Lake_Package_barrelFacetConfig___lam__2___boxed), 11, 3);
lean_closure_set(v___f_3198_, 0, v___x_3197_);
lean_closure_set(v___f_3198_, 1, v___x_3196_);
lean_closure_set(v___f_3198_, 2, v___x_3195_);
return v___f_3198_;
}
}
static lean_object* _init_l_Lake_Package_barrelFacetConfig___closed__1(void){
_start:
{
lean_object* v___f_3199_; uint8_t v___x_3200_; lean_object* v___x_3201_; lean_object* v___f_3202_; lean_object* v___x_3203_; lean_object* v___x_3204_; 
v___f_3199_ = ((lean_object*)(l_Lake_Package_extraDepFacetConfig___closed__0));
v___x_3200_ = 1;
v___x_3201_ = l_Lake_instDataKindUnit;
v___f_3202_ = lean_obj_once(&l_Lake_Package_barrelFacetConfig___closed__0, &l_Lake_Package_barrelFacetConfig___closed__0_once, _init_l_Lake_Package_barrelFacetConfig___closed__0);
v___x_3203_ = l_Lake_Package_keyword;
v___x_3204_ = lean_alloc_ctor(0, 4, 2);
lean_ctor_set(v___x_3204_, 0, v___x_3203_);
lean_ctor_set(v___x_3204_, 1, v___f_3202_);
lean_ctor_set(v___x_3204_, 2, v___x_3201_);
lean_ctor_set(v___x_3204_, 3, v___f_3199_);
lean_ctor_set_uint8(v___x_3204_, sizeof(void*)*4, v___x_3200_);
lean_ctor_set_uint8(v___x_3204_, sizeof(void*)*4 + 1, v___x_3200_);
return v___x_3204_;
}
}
static lean_object* _init_l_Lake_Package_barrelFacetConfig(void){
_start:
{
lean_object* v___x_3205_; 
v___x_3205_ = lean_obj_once(&l_Lake_Package_barrelFacetConfig___closed__1, &l_Lake_Package_barrelFacetConfig___closed__1_once, _init_l_Lake_Package_barrelFacetConfig___closed__1);
return v___x_3205_;
}
}
LEAN_EXPORT lean_object* l_Lake_Package_optGitHubReleaseFacetConfig___lam__0(lean_object* v_pkg_3206_, lean_object* v_dir_3207_, lean_object* v_buildArchive_3208_, lean_object* v___x_3209_, lean_object* v___y_3210_, lean_object* v___y_3211_, lean_object* v___y_3212_, lean_object* v___y_3213_, lean_object* v___y_3214_, lean_object* v___y_3215_){
_start:
{
uint8_t v_r_3218_; lean_object* v___y_3219_; lean_object* v_a_3223_; lean_object* v___x_3239_; 
lean_inc_ref(v_pkg_3206_);
v___x_3239_ = l___private_Lake_Build_Package_0__Lake_Package_getReleaseUrl___redArg(v_pkg_3206_, v___y_3215_);
if (lean_obj_tag(v___x_3239_) == 0)
{
lean_object* v_a_3240_; lean_object* v_a_3241_; lean_object* v___x_3242_; lean_object* v___x_3243_; lean_object* v___x_3244_; lean_object* v___x_3245_; 
v_a_3240_ = lean_ctor_get(v___x_3239_, 0);
lean_inc(v_a_3240_);
v_a_3241_ = lean_ctor_get(v___x_3239_, 1);
lean_inc(v_a_3241_);
lean_dec_ref_known(v___x_3239_, 2);
v___x_3242_ = l_Lake_defaultLakeDir;
v___x_3243_ = l_Lake_joinRelative(v_dir_3207_, v___x_3242_);
v___x_3244_ = l_Lake_joinRelative(v___x_3243_, v_buildArchive_3208_);
v___x_3245_ = l___private_Lake_Build_Package_0__Lake_Package_fetchBuildArchive(v_pkg_3206_, v_a_3240_, v___x_3244_, v___x_3209_, v___y_3210_, v___y_3211_, v___y_3212_, v___y_3213_, v___y_3214_, v_a_3241_);
if (lean_obj_tag(v___x_3245_) == 0)
{
lean_object* v_a_3246_; uint8_t v___x_3247_; 
v_a_3246_ = lean_ctor_get(v___x_3245_, 1);
lean_inc(v_a_3246_);
lean_dec_ref_known(v___x_3245_, 2);
v___x_3247_ = 1;
v_r_3218_ = v___x_3247_;
v___y_3219_ = v_a_3246_;
goto v___jp_3217_;
}
else
{
lean_object* v_a_3248_; 
v_a_3248_ = lean_ctor_get(v___x_3245_, 1);
lean_inc(v_a_3248_);
lean_dec_ref_known(v___x_3245_, 2);
v_a_3223_ = v_a_3248_;
goto v___jp_3222_;
}
}
else
{
lean_object* v_a_3249_; 
lean_dec_ref(v_buildArchive_3208_);
lean_dec_ref(v_dir_3207_);
lean_dec_ref(v_pkg_3206_);
v_a_3249_ = lean_ctor_get(v___x_3239_, 1);
lean_inc(v_a_3249_);
lean_dec_ref_known(v___x_3239_, 2);
v_a_3223_ = v_a_3249_;
goto v___jp_3222_;
}
v___jp_3217_:
{
lean_object* v___x_3220_; lean_object* v___x_3221_; 
v___x_3220_ = lean_box(v_r_3218_);
v___x_3221_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3221_, 0, v___x_3220_);
lean_ctor_set(v___x_3221_, 1, v___y_3219_);
return v___x_3221_;
}
v___jp_3222_:
{
lean_object* v_log_3224_; uint8_t v_action_3225_; uint8_t v_wantsRebuild_3226_; lean_object* v_trace_3227_; lean_object* v_buildTime_3228_; lean_object* v___x_3230_; uint8_t v_isShared_3231_; uint8_t v_isSharedCheck_3238_; 
v_log_3224_ = lean_ctor_get(v_a_3223_, 0);
v_action_3225_ = lean_ctor_get_uint8(v_a_3223_, sizeof(void*)*3);
v_wantsRebuild_3226_ = lean_ctor_get_uint8(v_a_3223_, sizeof(void*)*3 + 1);
v_trace_3227_ = lean_ctor_get(v_a_3223_, 1);
v_buildTime_3228_ = lean_ctor_get(v_a_3223_, 2);
v_isSharedCheck_3238_ = !lean_is_exclusive(v_a_3223_);
if (v_isSharedCheck_3238_ == 0)
{
v___x_3230_ = v_a_3223_;
v_isShared_3231_ = v_isSharedCheck_3238_;
goto v_resetjp_3229_;
}
else
{
lean_inc(v_buildTime_3228_);
lean_inc(v_trace_3227_);
lean_inc(v_log_3224_);
lean_dec(v_a_3223_);
v___x_3230_ = lean_box(0);
v_isShared_3231_ = v_isSharedCheck_3238_;
goto v_resetjp_3229_;
}
v_resetjp_3229_:
{
uint8_t v___x_3232_; uint8_t v___x_3233_; lean_object* v___x_3235_; 
v___x_3232_ = 4;
v___x_3233_ = l_Lake_JobAction_merge(v_action_3225_, v___x_3232_);
if (v_isShared_3231_ == 0)
{
v___x_3235_ = v___x_3230_;
goto v_reusejp_3234_;
}
else
{
lean_object* v_reuseFailAlloc_3237_; 
v_reuseFailAlloc_3237_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_3237_, 0, v_log_3224_);
lean_ctor_set(v_reuseFailAlloc_3237_, 1, v_trace_3227_);
lean_ctor_set(v_reuseFailAlloc_3237_, 2, v_buildTime_3228_);
lean_ctor_set_uint8(v_reuseFailAlloc_3237_, sizeof(void*)*3 + 1, v_wantsRebuild_3226_);
v___x_3235_ = v_reuseFailAlloc_3237_;
goto v_reusejp_3234_;
}
v_reusejp_3234_:
{
uint8_t v___x_3236_; 
lean_ctor_set_uint8(v___x_3235_, sizeof(void*)*3, v___x_3233_);
v___x_3236_ = 0;
v_r_3218_ = v___x_3236_;
v___y_3219_ = v___x_3235_;
goto v___jp_3217_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Package_optGitHubReleaseFacetConfig___lam__0___boxed(lean_object* v_pkg_3250_, lean_object* v_dir_3251_, lean_object* v_buildArchive_3252_, lean_object* v___x_3253_, lean_object* v___y_3254_, lean_object* v___y_3255_, lean_object* v___y_3256_, lean_object* v___y_3257_, lean_object* v___y_3258_, lean_object* v___y_3259_, lean_object* v___y_3260_){
_start:
{
lean_object* v_res_3261_; 
v_res_3261_ = l_Lake_Package_optGitHubReleaseFacetConfig___lam__0(v_pkg_3250_, v_dir_3251_, v_buildArchive_3252_, v___x_3253_, v___y_3254_, v___y_3255_, v___y_3256_, v___y_3257_, v___y_3258_, v___y_3259_);
lean_dec_ref(v___y_3258_);
lean_dec(v___y_3257_);
lean_dec(v___y_3256_);
lean_dec(v___y_3255_);
lean_dec_ref(v___y_3254_);
lean_dec_ref(v___x_3253_);
return v_res_3261_;
}
}
LEAN_EXPORT lean_object* l_Lake_Package_optGitHubReleaseFacetConfig___lam__2(lean_object* v___x_3262_, lean_object* v___x_3263_, lean_object* v___x_3264_, lean_object* v___x_3265_, lean_object* v_pkg_3266_, lean_object* v___y_3267_, lean_object* v___y_3268_, lean_object* v___y_3269_, lean_object* v___y_3270_, lean_object* v___y_3271_, lean_object* v___y_3272_){
_start:
{
lean_object* v_baseName_3274_; lean_object* v_dir_3275_; lean_object* v_buildArchive_3276_; lean_object* v___f_3277_; uint8_t v___x_3278_; lean_object* v___x_3279_; lean_object* v___x_3280_; lean_object* v___x_3281_; lean_object* v___x_3282_; lean_object* v___x_3283_; lean_object* v___x_3284_; lean_object* v___x_3285_; lean_object* v___f_3286_; lean_object* v___x_3287_; 
v_baseName_3274_ = lean_ctor_get(v_pkg_3266_, 1);
lean_inc(v_baseName_3274_);
v_dir_3275_ = lean_ctor_get(v_pkg_3266_, 4);
lean_inc_ref(v_dir_3275_);
v_buildArchive_3276_ = lean_ctor_get(v_pkg_3266_, 21);
lean_inc_ref(v_buildArchive_3276_);
v___f_3277_ = lean_alloc_closure((void*)(l_Lake_Package_optGitHubReleaseFacetConfig___lam__0___boxed), 11, 4);
lean_closure_set(v___f_3277_, 0, v_pkg_3266_);
lean_closure_set(v___f_3277_, 1, v_dir_3275_);
lean_closure_set(v___f_3277_, 2, v_buildArchive_3276_);
lean_closure_set(v___f_3277_, 3, v___x_3262_);
v___x_3278_ = 1;
v___x_3279_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_baseName_3274_, v___x_3278_);
v___x_3280_ = ((lean_object*)(l___private_Lake_Build_Package_0__Lake_Package_optFacetDetails___redArg___closed__3));
v___x_3281_ = lean_string_append(v___x_3279_, v___x_3280_);
v___x_3282_ = l_Lake_Name_eraseHead(v___x_3263_);
v___x_3283_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_3282_, v___x_3278_);
v___x_3284_ = lean_string_append(v___x_3281_, v___x_3283_);
lean_dec_ref(v___x_3283_);
v___x_3285_ = ((lean_object*)(l___private_Lake_Build_Package_0__Lake_Package_recFetchDeps___redArg___closed__2));
lean_inc(v___x_3264_);
v___f_3286_ = lean_alloc_closure((void*)(l_Lake_Package_optBarrelFacetConfig___lam__1___boxed), 11, 4);
lean_closure_set(v___f_3286_, 0, v___x_3264_);
lean_closure_set(v___f_3286_, 1, v___f_3277_);
lean_closure_set(v___f_3286_, 2, v___x_3265_);
lean_closure_set(v___f_3286_, 3, v___x_3285_);
v___x_3287_ = l_Lake_ensureJob___redArg(v___x_3264_, v___f_3286_, v___y_3267_, v___y_3268_, v___y_3269_, v___y_3270_, v___y_3271_, v___y_3272_);
if (lean_obj_tag(v___x_3287_) == 0)
{
lean_object* v_a_3288_; lean_object* v_a_3289_; lean_object* v___x_3291_; uint8_t v_isShared_3292_; uint8_t v_isSharedCheck_3312_; 
v_a_3288_ = lean_ctor_get(v___x_3287_, 0);
v_a_3289_ = lean_ctor_get(v___x_3287_, 1);
v_isSharedCheck_3312_ = !lean_is_exclusive(v___x_3287_);
if (v_isSharedCheck_3312_ == 0)
{
v___x_3291_ = v___x_3287_;
v_isShared_3292_ = v_isSharedCheck_3312_;
goto v_resetjp_3290_;
}
else
{
lean_inc(v_a_3289_);
lean_inc(v_a_3288_);
lean_dec(v___x_3287_);
v___x_3291_ = lean_box(0);
v_isShared_3292_ = v_isSharedCheck_3312_;
goto v_resetjp_3290_;
}
v_resetjp_3290_:
{
lean_object* v_task_3293_; lean_object* v_kind_3294_; lean_object* v___x_3296_; uint8_t v_isShared_3297_; uint8_t v_isSharedCheck_3310_; 
v_task_3293_ = lean_ctor_get(v_a_3288_, 0);
v_kind_3294_ = lean_ctor_get(v_a_3288_, 1);
v_isSharedCheck_3310_ = !lean_is_exclusive(v_a_3288_);
if (v_isSharedCheck_3310_ == 0)
{
lean_object* v_unused_3311_; 
v_unused_3311_ = lean_ctor_get(v_a_3288_, 2);
lean_dec(v_unused_3311_);
v___x_3296_ = v_a_3288_;
v_isShared_3297_ = v_isSharedCheck_3310_;
goto v_resetjp_3295_;
}
else
{
lean_inc(v_kind_3294_);
lean_inc(v_task_3293_);
lean_dec(v_a_3288_);
v___x_3296_ = lean_box(0);
v_isShared_3297_ = v_isSharedCheck_3310_;
goto v_resetjp_3295_;
}
v_resetjp_3295_:
{
lean_object* v_registeredJobs_3298_; lean_object* v_job_3300_; 
v_registeredJobs_3298_ = lean_ctor_get(v___y_3271_, 4);
if (v_isShared_3297_ == 0)
{
lean_ctor_set(v___x_3296_, 2, v___x_3284_);
v_job_3300_ = v___x_3296_;
goto v_reusejp_3299_;
}
else
{
lean_object* v_reuseFailAlloc_3309_; 
v_reuseFailAlloc_3309_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_3309_, 0, v_task_3293_);
lean_ctor_set(v_reuseFailAlloc_3309_, 1, v_kind_3294_);
lean_ctor_set(v_reuseFailAlloc_3309_, 2, v___x_3284_);
v_job_3300_ = v_reuseFailAlloc_3309_;
goto v_reusejp_3299_;
}
v_reusejp_3299_:
{
lean_object* v___x_3301_; lean_object* v___x_3302_; lean_object* v___x_3303_; lean_object* v___x_3304_; lean_object* v___x_3305_; lean_object* v___x_3307_; 
lean_ctor_set_uint8(v_job_3300_, sizeof(void*)*3, v___x_3278_);
v___x_3301_ = lean_st_ref_take(v_registeredJobs_3298_);
lean_inc_ref(v_job_3300_);
v___x_3302_ = l_Lake_Job_toOpaque___redArg(v_job_3300_);
v___x_3303_ = lean_array_push(v___x_3301_, v___x_3302_);
v___x_3304_ = lean_st_ref_put(v_registeredJobs_3298_, v___x_3303_);
v___x_3305_ = l_Lake_Job_renew___redArg(v_job_3300_);
if (v_isShared_3292_ == 0)
{
lean_ctor_set(v___x_3291_, 0, v___x_3305_);
v___x_3307_ = v___x_3291_;
goto v_reusejp_3306_;
}
else
{
lean_object* v_reuseFailAlloc_3308_; 
v_reuseFailAlloc_3308_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3308_, 0, v___x_3305_);
lean_ctor_set(v_reuseFailAlloc_3308_, 1, v_a_3289_);
v___x_3307_ = v_reuseFailAlloc_3308_;
goto v_reusejp_3306_;
}
v_reusejp_3306_:
{
return v___x_3307_;
}
}
}
}
}
else
{
lean_dec_ref(v___x_3284_);
return v___x_3287_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_Package_optGitHubReleaseFacetConfig___lam__2___boxed(lean_object* v___x_3313_, lean_object* v___x_3314_, lean_object* v___x_3315_, lean_object* v___x_3316_, lean_object* v_pkg_3317_, lean_object* v___y_3318_, lean_object* v___y_3319_, lean_object* v___y_3320_, lean_object* v___y_3321_, lean_object* v___y_3322_, lean_object* v___y_3323_, lean_object* v___y_3324_){
_start:
{
lean_object* v_res_3325_; 
v_res_3325_ = l_Lake_Package_optGitHubReleaseFacetConfig___lam__2(v___x_3313_, v___x_3314_, v___x_3315_, v___x_3316_, v_pkg_3317_, v___y_3318_, v___y_3319_, v___y_3320_, v___y_3321_, v___y_3322_, v___y_3323_);
lean_dec_ref(v___y_3322_);
lean_dec(v___y_3321_);
lean_dec(v___y_3320_);
lean_dec(v___y_3319_);
return v_res_3325_;
}
}
static lean_object* _init_l_Lake_Package_optGitHubReleaseFacetConfig___closed__1(void){
_start:
{
lean_object* v___x_3328_; lean_object* v___x_3329_; lean_object* v___x_3330_; lean_object* v___x_3331_; lean_object* v___f_3332_; 
v___x_3328_ = lean_unsigned_to_nat(0u);
v___x_3329_ = l_Lake_instDataKindBool;
v___x_3330_ = l_Lake_Package_optGitHubReleaseFacet;
v___x_3331_ = ((lean_object*)(l_Lake_Package_optGitHubReleaseFacetConfig___closed__0));
v___f_3332_ = lean_alloc_closure((void*)(l_Lake_Package_optGitHubReleaseFacetConfig___lam__2___boxed), 12, 4);
lean_closure_set(v___f_3332_, 0, v___x_3331_);
lean_closure_set(v___f_3332_, 1, v___x_3330_);
lean_closure_set(v___f_3332_, 2, v___x_3329_);
lean_closure_set(v___f_3332_, 3, v___x_3328_);
return v___f_3332_;
}
}
static lean_object* _init_l_Lake_Package_optGitHubReleaseFacetConfig___closed__2(void){
_start:
{
lean_object* v___f_3333_; uint8_t v___x_3334_; lean_object* v___x_3335_; lean_object* v___f_3336_; lean_object* v___x_3337_; lean_object* v___x_3338_; 
v___f_3333_ = ((lean_object*)(l_Lake_Package_optBuildCacheFacetConfig___closed__1));
v___x_3334_ = 1;
v___x_3335_ = l_Lake_instDataKindBool;
v___f_3336_ = lean_obj_once(&l_Lake_Package_optGitHubReleaseFacetConfig___closed__1, &l_Lake_Package_optGitHubReleaseFacetConfig___closed__1_once, _init_l_Lake_Package_optGitHubReleaseFacetConfig___closed__1);
v___x_3337_ = l_Lake_Package_keyword;
v___x_3338_ = lean_alloc_ctor(0, 4, 2);
lean_ctor_set(v___x_3338_, 0, v___x_3337_);
lean_ctor_set(v___x_3338_, 1, v___f_3336_);
lean_ctor_set(v___x_3338_, 2, v___x_3335_);
lean_ctor_set(v___x_3338_, 3, v___f_3333_);
lean_ctor_set_uint8(v___x_3338_, sizeof(void*)*4, v___x_3334_);
lean_ctor_set_uint8(v___x_3338_, sizeof(void*)*4 + 1, v___x_3334_);
return v___x_3338_;
}
}
static lean_object* _init_l_Lake_Package_optGitHubReleaseFacetConfig(void){
_start:
{
lean_object* v___x_3339_; 
v___x_3339_ = lean_obj_once(&l_Lake_Package_optGitHubReleaseFacetConfig___closed__2, &l_Lake_Package_optGitHubReleaseFacetConfig___closed__2_once, _init_l_Lake_Package_optGitHubReleaseFacetConfig___closed__2);
return v___x_3339_;
}
}
LEAN_EXPORT lean_object* l_Lake_Package_gitHubReleaseFacetConfig___lam__1(lean_object* v_baseName_3341_, lean_object* v___x_3342_, uint8_t v_success_3343_, lean_object* v___y_3344_, lean_object* v___y_3345_, lean_object* v___y_3346_, lean_object* v___y_3347_, lean_object* v___y_3348_, lean_object* v___y_3349_){
_start:
{
lean_object* v_a_3352_; lean_object* v_a_3353_; 
if (v_success_3343_ == 0)
{
lean_object* v_toBuildConfig_3373_; uint8_t v_verbosity_3374_; lean_object* v___x_3375_; lean_object* v___x_3376_; uint8_t v___x_3377_; 
v_toBuildConfig_3373_ = lean_ctor_get(v___y_3348_, 0);
v_verbosity_3374_ = lean_ctor_get_uint8(v_toBuildConfig_3373_, sizeof(void*)*5 + 4);
v___x_3375_ = l_Lake_Verbosity_ctorIdx(v_verbosity_3374_);
v___x_3376_ = lean_obj_once(&l___private_Lake_Build_Package_0__Lake_Package_optFacetDetails___redArg___closed__0, &l___private_Lake_Build_Package_0__Lake_Package_optFacetDetails___redArg___closed__0_once, _init_l___private_Lake_Build_Package_0__Lake_Package_optFacetDetails___redArg___closed__0);
v___x_3377_ = lean_nat_dec_eq(v___x_3375_, v___x_3376_);
lean_dec(v___x_3375_);
if (v___x_3377_ == 0)
{
lean_object* v___x_3378_; 
lean_dec(v___x_3342_);
lean_dec(v_baseName_3341_);
v___x_3378_ = ((lean_object*)(l___private_Lake_Build_Package_0__Lake_Package_optFacetDetails___redArg___closed__1));
v_a_3352_ = v___x_3378_;
v_a_3353_ = v___y_3349_;
goto v___jp_3351_;
}
else
{
lean_object* v___x_3379_; lean_object* v___x_3380_; lean_object* v___x_3381_; lean_object* v___x_3382_; lean_object* v___x_3383_; lean_object* v___x_3384_; lean_object* v___x_3385_; lean_object* v___x_3386_; lean_object* v___x_3387_; lean_object* v___x_3388_; 
v___x_3379_ = ((lean_object*)(l___private_Lake_Build_Package_0__Lake_Package_optFacetDetails___redArg___closed__2));
v___x_3380_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_baseName_3341_, v___x_3377_);
v___x_3381_ = lean_string_append(v___x_3379_, v___x_3380_);
lean_dec_ref(v___x_3380_);
v___x_3382_ = ((lean_object*)(l___private_Lake_Build_Package_0__Lake_Package_optFacetDetails___redArg___closed__3));
v___x_3383_ = lean_string_append(v___x_3381_, v___x_3382_);
v___x_3384_ = l_Lake_Name_eraseHead(v___x_3342_);
v___x_3385_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_3384_, v___x_3377_);
v___x_3386_ = lean_string_append(v___x_3383_, v___x_3385_);
lean_dec_ref(v___x_3385_);
v___x_3387_ = ((lean_object*)(l___private_Lake_Build_Package_0__Lake_Package_optFacetDetails___redArg___closed__4));
v___x_3388_ = lean_string_append(v___x_3386_, v___x_3387_);
v_a_3352_ = v___x_3388_;
v_a_3353_ = v___y_3349_;
goto v___jp_3351_;
}
}
else
{
lean_object* v___x_3389_; lean_object* v___x_3390_; 
lean_dec(v___x_3342_);
lean_dec(v_baseName_3341_);
v___x_3389_ = lean_box(0);
v___x_3390_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3390_, 0, v___x_3389_);
lean_ctor_set(v___x_3390_, 1, v___y_3349_);
return v___x_3390_;
}
v___jp_3351_:
{
lean_object* v_log_3354_; uint8_t v_action_3355_; uint8_t v_wantsRebuild_3356_; lean_object* v_trace_3357_; lean_object* v_buildTime_3358_; lean_object* v___x_3360_; uint8_t v_isShared_3361_; uint8_t v_isSharedCheck_3372_; 
v_log_3354_ = lean_ctor_get(v_a_3353_, 0);
v_action_3355_ = lean_ctor_get_uint8(v_a_3353_, sizeof(void*)*3);
v_wantsRebuild_3356_ = lean_ctor_get_uint8(v_a_3353_, sizeof(void*)*3 + 1);
v_trace_3357_ = lean_ctor_get(v_a_3353_, 1);
v_buildTime_3358_ = lean_ctor_get(v_a_3353_, 2);
v_isSharedCheck_3372_ = !lean_is_exclusive(v_a_3353_);
if (v_isSharedCheck_3372_ == 0)
{
v___x_3360_ = v_a_3353_;
v_isShared_3361_ = v_isSharedCheck_3372_;
goto v_resetjp_3359_;
}
else
{
lean_inc(v_buildTime_3358_);
lean_inc(v_trace_3357_);
lean_inc(v_log_3354_);
lean_dec(v_a_3353_);
v___x_3360_ = lean_box(0);
v_isShared_3361_ = v_isSharedCheck_3372_;
goto v_resetjp_3359_;
}
v_resetjp_3359_:
{
lean_object* v___x_3362_; lean_object* v___x_3363_; uint8_t v___x_3364_; lean_object* v___x_3365_; lean_object* v___x_3366_; lean_object* v___x_3367_; lean_object* v___x_3369_; 
v___x_3362_ = ((lean_object*)(l_Lake_Package_gitHubReleaseFacetConfig___lam__1___closed__0));
v___x_3363_ = lean_string_append(v___x_3362_, v_a_3352_);
lean_dec_ref(v_a_3352_);
v___x_3364_ = 3;
v___x_3365_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_3365_, 0, v___x_3363_);
lean_ctor_set_uint8(v___x_3365_, sizeof(void*)*1, v___x_3364_);
v___x_3366_ = lean_array_get_size(v_log_3354_);
v___x_3367_ = lean_array_push(v_log_3354_, v___x_3365_);
if (v_isShared_3361_ == 0)
{
lean_ctor_set(v___x_3360_, 0, v___x_3367_);
v___x_3369_ = v___x_3360_;
goto v_reusejp_3368_;
}
else
{
lean_object* v_reuseFailAlloc_3371_; 
v_reuseFailAlloc_3371_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_3371_, 0, v___x_3367_);
lean_ctor_set(v_reuseFailAlloc_3371_, 1, v_trace_3357_);
lean_ctor_set(v_reuseFailAlloc_3371_, 2, v_buildTime_3358_);
lean_ctor_set_uint8(v_reuseFailAlloc_3371_, sizeof(void*)*3, v_action_3355_);
lean_ctor_set_uint8(v_reuseFailAlloc_3371_, sizeof(void*)*3 + 1, v_wantsRebuild_3356_);
v___x_3369_ = v_reuseFailAlloc_3371_;
goto v_reusejp_3368_;
}
v_reusejp_3368_:
{
lean_object* v___x_3370_; 
v___x_3370_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3370_, 0, v___x_3366_);
lean_ctor_set(v___x_3370_, 1, v___x_3369_);
return v___x_3370_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Package_gitHubReleaseFacetConfig___lam__1___boxed(lean_object* v_baseName_3391_, lean_object* v___x_3392_, lean_object* v_success_3393_, lean_object* v___y_3394_, lean_object* v___y_3395_, lean_object* v___y_3396_, lean_object* v___y_3397_, lean_object* v___y_3398_, lean_object* v___y_3399_, lean_object* v___y_3400_){
_start:
{
uint8_t v_success_boxed_3401_; lean_object* v_res_3402_; 
v_success_boxed_3401_ = lean_unbox(v_success_3393_);
v_res_3402_ = l_Lake_Package_gitHubReleaseFacetConfig___lam__1(v_baseName_3391_, v___x_3392_, v_success_boxed_3401_, v___y_3394_, v___y_3395_, v___y_3396_, v___y_3397_, v___y_3398_, v___y_3399_);
lean_dec_ref(v___y_3398_);
lean_dec(v___y_3397_);
lean_dec(v___y_3396_);
lean_dec(v___y_3395_);
lean_dec_ref(v___y_3394_);
return v_res_3402_;
}
}
LEAN_EXPORT lean_object* l_Lake_Package_gitHubReleaseFacetConfig___lam__2(lean_object* v___x_3403_, lean_object* v___x_3404_, lean_object* v___x_3405_, lean_object* v_pkg_3406_, lean_object* v___y_3407_, lean_object* v___y_3408_, lean_object* v___y_3409_, lean_object* v___y_3410_, lean_object* v___y_3411_, lean_object* v___y_3412_){
_start:
{
lean_object* v_baseName_3414_; lean_object* v_keyName_3415_; lean_object* v___f_3416_; uint8_t v___x_3417_; lean_object* v___x_3418_; lean_object* v___x_3419_; lean_object* v___x_3420_; lean_object* v___x_3421_; lean_object* v___x_3422_; lean_object* v___x_3423_; lean_object* v___x_3424_; lean_object* v___x_3425_; lean_object* v___x_3426_; lean_object* v___f_3427_; uint8_t v___x_3428_; lean_object* v___x_3429_; 
v_baseName_3414_ = lean_ctor_get(v_pkg_3406_, 1);
v_keyName_3415_ = lean_ctor_get(v_pkg_3406_, 2);
lean_inc(v___x_3403_);
lean_inc_n(v_baseName_3414_, 2);
v___f_3416_ = lean_alloc_closure((void*)(l_Lake_Package_gitHubReleaseFacetConfig___lam__1___boxed), 10, 2);
lean_closure_set(v___f_3416_, 0, v_baseName_3414_);
lean_closure_set(v___f_3416_, 1, v___x_3403_);
v___x_3417_ = 1;
v___x_3418_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_baseName_3414_, v___x_3417_);
v___x_3419_ = ((lean_object*)(l___private_Lake_Build_Package_0__Lake_Package_optFacetDetails___redArg___closed__3));
v___x_3420_ = lean_string_append(v___x_3418_, v___x_3419_);
v___x_3421_ = l_Lake_Name_eraseHead(v___x_3404_);
v___x_3422_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_3421_, v___x_3417_);
v___x_3423_ = lean_string_append(v___x_3420_, v___x_3422_);
lean_dec_ref(v___x_3422_);
lean_inc(v_keyName_3415_);
v___x_3424_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3424_, 0, v_keyName_3415_);
v___x_3425_ = l_Lake_Package_keyword;
v___x_3426_ = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(v___x_3426_, 0, v___x_3424_);
lean_ctor_set(v___x_3426_, 1, v___x_3425_);
lean_ctor_set(v___x_3426_, 2, v_pkg_3406_);
lean_ctor_set(v___x_3426_, 3, v___x_3403_);
lean_inc(v___x_3405_);
v___f_3427_ = lean_alloc_closure((void*)(l___private_Lake_Build_Package_0__Lake_Package_mkBuildArchiveFacetConfig___redArg___lam__1___boxed), 10, 3);
lean_closure_set(v___f_3427_, 0, v___x_3426_);
lean_closure_set(v___f_3427_, 1, v___x_3405_);
lean_closure_set(v___f_3427_, 2, v___f_3416_);
v___x_3428_ = 0;
v___x_3429_ = l_Lake_ensureJob___redArg(v___x_3405_, v___f_3427_, v___y_3407_, v___y_3408_, v___y_3409_, v___y_3410_, v___y_3411_, v___y_3412_);
if (lean_obj_tag(v___x_3429_) == 0)
{
lean_object* v_a_3430_; lean_object* v_a_3431_; lean_object* v___x_3433_; uint8_t v_isShared_3434_; uint8_t v_isSharedCheck_3454_; 
v_a_3430_ = lean_ctor_get(v___x_3429_, 0);
v_a_3431_ = lean_ctor_get(v___x_3429_, 1);
v_isSharedCheck_3454_ = !lean_is_exclusive(v___x_3429_);
if (v_isSharedCheck_3454_ == 0)
{
v___x_3433_ = v___x_3429_;
v_isShared_3434_ = v_isSharedCheck_3454_;
goto v_resetjp_3432_;
}
else
{
lean_inc(v_a_3431_);
lean_inc(v_a_3430_);
lean_dec(v___x_3429_);
v___x_3433_ = lean_box(0);
v_isShared_3434_ = v_isSharedCheck_3454_;
goto v_resetjp_3432_;
}
v_resetjp_3432_:
{
lean_object* v_task_3435_; lean_object* v_kind_3436_; lean_object* v___x_3438_; uint8_t v_isShared_3439_; uint8_t v_isSharedCheck_3452_; 
v_task_3435_ = lean_ctor_get(v_a_3430_, 0);
v_kind_3436_ = lean_ctor_get(v_a_3430_, 1);
v_isSharedCheck_3452_ = !lean_is_exclusive(v_a_3430_);
if (v_isSharedCheck_3452_ == 0)
{
lean_object* v_unused_3453_; 
v_unused_3453_ = lean_ctor_get(v_a_3430_, 2);
lean_dec(v_unused_3453_);
v___x_3438_ = v_a_3430_;
v_isShared_3439_ = v_isSharedCheck_3452_;
goto v_resetjp_3437_;
}
else
{
lean_inc(v_kind_3436_);
lean_inc(v_task_3435_);
lean_dec(v_a_3430_);
v___x_3438_ = lean_box(0);
v_isShared_3439_ = v_isSharedCheck_3452_;
goto v_resetjp_3437_;
}
v_resetjp_3437_:
{
lean_object* v_registeredJobs_3440_; lean_object* v_job_3442_; 
v_registeredJobs_3440_ = lean_ctor_get(v___y_3411_, 4);
if (v_isShared_3439_ == 0)
{
lean_ctor_set(v___x_3438_, 2, v___x_3423_);
v_job_3442_ = v___x_3438_;
goto v_reusejp_3441_;
}
else
{
lean_object* v_reuseFailAlloc_3451_; 
v_reuseFailAlloc_3451_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_3451_, 0, v_task_3435_);
lean_ctor_set(v_reuseFailAlloc_3451_, 1, v_kind_3436_);
lean_ctor_set(v_reuseFailAlloc_3451_, 2, v___x_3423_);
v_job_3442_ = v_reuseFailAlloc_3451_;
goto v_reusejp_3441_;
}
v_reusejp_3441_:
{
lean_object* v___x_3443_; lean_object* v___x_3444_; lean_object* v___x_3445_; lean_object* v___x_3446_; lean_object* v___x_3447_; lean_object* v___x_3449_; 
lean_ctor_set_uint8(v_job_3442_, sizeof(void*)*3, v___x_3428_);
v___x_3443_ = lean_st_ref_take(v_registeredJobs_3440_);
lean_inc_ref(v_job_3442_);
v___x_3444_ = l_Lake_Job_toOpaque___redArg(v_job_3442_);
v___x_3445_ = lean_array_push(v___x_3443_, v___x_3444_);
v___x_3446_ = lean_st_ref_put(v_registeredJobs_3440_, v___x_3445_);
v___x_3447_ = l_Lake_Job_renew___redArg(v_job_3442_);
if (v_isShared_3434_ == 0)
{
lean_ctor_set(v___x_3433_, 0, v___x_3447_);
v___x_3449_ = v___x_3433_;
goto v_reusejp_3448_;
}
else
{
lean_object* v_reuseFailAlloc_3450_; 
v_reuseFailAlloc_3450_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3450_, 0, v___x_3447_);
lean_ctor_set(v_reuseFailAlloc_3450_, 1, v_a_3431_);
v___x_3449_ = v_reuseFailAlloc_3450_;
goto v_reusejp_3448_;
}
v_reusejp_3448_:
{
return v___x_3449_;
}
}
}
}
}
else
{
lean_dec_ref(v___x_3423_);
return v___x_3429_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_Package_gitHubReleaseFacetConfig___lam__2___boxed(lean_object* v___x_3455_, lean_object* v___x_3456_, lean_object* v___x_3457_, lean_object* v_pkg_3458_, lean_object* v___y_3459_, lean_object* v___y_3460_, lean_object* v___y_3461_, lean_object* v___y_3462_, lean_object* v___y_3463_, lean_object* v___y_3464_, lean_object* v___y_3465_){
_start:
{
lean_object* v_res_3466_; 
v_res_3466_ = l_Lake_Package_gitHubReleaseFacetConfig___lam__2(v___x_3455_, v___x_3456_, v___x_3457_, v_pkg_3458_, v___y_3459_, v___y_3460_, v___y_3461_, v___y_3462_, v___y_3463_, v___y_3464_);
lean_dec_ref(v___y_3463_);
lean_dec(v___y_3462_);
lean_dec(v___y_3461_);
lean_dec(v___y_3460_);
return v_res_3466_;
}
}
static lean_object* _init_l_Lake_Package_gitHubReleaseFacetConfig___closed__0(void){
_start:
{
lean_object* v___x_3467_; lean_object* v___x_3468_; lean_object* v___x_3469_; lean_object* v___f_3470_; 
v___x_3467_ = l_Lake_instDataKindUnit;
v___x_3468_ = l_Lake_Package_gitHubReleaseFacet;
v___x_3469_ = l_Lake_Package_optGitHubReleaseFacet;
v___f_3470_ = lean_alloc_closure((void*)(l_Lake_Package_gitHubReleaseFacetConfig___lam__2___boxed), 11, 3);
lean_closure_set(v___f_3470_, 0, v___x_3469_);
lean_closure_set(v___f_3470_, 1, v___x_3468_);
lean_closure_set(v___f_3470_, 2, v___x_3467_);
return v___f_3470_;
}
}
static lean_object* _init_l_Lake_Package_gitHubReleaseFacetConfig___closed__1(void){
_start:
{
lean_object* v___f_3471_; uint8_t v___x_3472_; lean_object* v___x_3473_; lean_object* v___f_3474_; lean_object* v___x_3475_; lean_object* v___x_3476_; 
v___f_3471_ = ((lean_object*)(l_Lake_Package_extraDepFacetConfig___closed__0));
v___x_3472_ = 1;
v___x_3473_ = l_Lake_instDataKindUnit;
v___f_3474_ = lean_obj_once(&l_Lake_Package_gitHubReleaseFacetConfig___closed__0, &l_Lake_Package_gitHubReleaseFacetConfig___closed__0_once, _init_l_Lake_Package_gitHubReleaseFacetConfig___closed__0);
v___x_3475_ = l_Lake_Package_keyword;
v___x_3476_ = lean_alloc_ctor(0, 4, 2);
lean_ctor_set(v___x_3476_, 0, v___x_3475_);
lean_ctor_set(v___x_3476_, 1, v___f_3474_);
lean_ctor_set(v___x_3476_, 2, v___x_3473_);
lean_ctor_set(v___x_3476_, 3, v___f_3471_);
lean_ctor_set_uint8(v___x_3476_, sizeof(void*)*4, v___x_3472_);
lean_ctor_set_uint8(v___x_3476_, sizeof(void*)*4 + 1, v___x_3472_);
return v___x_3476_;
}
}
static lean_object* _init_l_Lake_Package_gitHubReleaseFacetConfig(void){
_start:
{
lean_object* v___x_3477_; 
v___x_3477_ = lean_obj_once(&l_Lake_Package_gitHubReleaseFacetConfig___closed__1, &l_Lake_Package_gitHubReleaseFacetConfig___closed__1_once, _init_l_Lake_Package_gitHubReleaseFacetConfig___closed__1);
return v___x_3477_;
}
}
LEAN_EXPORT lean_object* l_Lake_Package_afterBuildCacheAsync___redArg___lam__0(lean_object* v_build_3478_, uint8_t v_x_3479_, lean_object* v___y_3480_, lean_object* v___y_3481_, lean_object* v___y_3482_, lean_object* v___y_3483_, lean_object* v___y_3484_, lean_object* v___y_3485_){
_start:
{
lean_object* v_log_3487_; uint8_t v_action_3488_; uint8_t v_wantsRebuild_3489_; lean_object* v_buildTime_3490_; lean_object* v___x_3492_; uint8_t v_isShared_3493_; uint8_t v_isSharedCheck_3499_; 
v_log_3487_ = lean_ctor_get(v___y_3485_, 0);
v_action_3488_ = lean_ctor_get_uint8(v___y_3485_, sizeof(void*)*3);
v_wantsRebuild_3489_ = lean_ctor_get_uint8(v___y_3485_, sizeof(void*)*3 + 1);
v_buildTime_3490_ = lean_ctor_get(v___y_3485_, 2);
v_isSharedCheck_3499_ = !lean_is_exclusive(v___y_3485_);
if (v_isSharedCheck_3499_ == 0)
{
lean_object* v_unused_3500_; 
v_unused_3500_ = lean_ctor_get(v___y_3485_, 1);
lean_dec(v_unused_3500_);
v___x_3492_ = v___y_3485_;
v_isShared_3493_ = v_isSharedCheck_3499_;
goto v_resetjp_3491_;
}
else
{
lean_inc(v_buildTime_3490_);
lean_inc(v_log_3487_);
lean_dec(v___y_3485_);
v___x_3492_ = lean_box(0);
v_isShared_3493_ = v_isSharedCheck_3499_;
goto v_resetjp_3491_;
}
v_resetjp_3491_:
{
lean_object* v___x_3494_; lean_object* v___x_3496_; 
v___x_3494_ = lean_obj_once(&l___private_Lake_Build_Package_0__Lake_Package_recFetchDeps___redArg___closed__4, &l___private_Lake_Build_Package_0__Lake_Package_recFetchDeps___redArg___closed__4_once, _init_l___private_Lake_Build_Package_0__Lake_Package_recFetchDeps___redArg___closed__4);
if (v_isShared_3493_ == 0)
{
lean_ctor_set(v___x_3492_, 1, v___x_3494_);
v___x_3496_ = v___x_3492_;
goto v_reusejp_3495_;
}
else
{
lean_object* v_reuseFailAlloc_3498_; 
v_reuseFailAlloc_3498_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_3498_, 0, v_log_3487_);
lean_ctor_set(v_reuseFailAlloc_3498_, 1, v___x_3494_);
lean_ctor_set(v_reuseFailAlloc_3498_, 2, v_buildTime_3490_);
lean_ctor_set_uint8(v_reuseFailAlloc_3498_, sizeof(void*)*3, v_action_3488_);
lean_ctor_set_uint8(v_reuseFailAlloc_3498_, sizeof(void*)*3 + 1, v_wantsRebuild_3489_);
v___x_3496_ = v_reuseFailAlloc_3498_;
goto v_reusejp_3495_;
}
v_reusejp_3495_:
{
lean_object* v___x_3497_; 
lean_inc_ref(v___y_3484_);
lean_inc(v___y_3483_);
lean_inc(v___y_3482_);
lean_inc(v___y_3481_);
v___x_3497_ = lean_apply_7(v_build_3478_, v___y_3480_, v___y_3481_, v___y_3482_, v___y_3483_, v___y_3484_, v___x_3496_, lean_box(0));
return v___x_3497_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Package_afterBuildCacheAsync___redArg___lam__0___boxed(lean_object* v_build_3501_, lean_object* v_x_3502_, lean_object* v___y_3503_, lean_object* v___y_3504_, lean_object* v___y_3505_, lean_object* v___y_3506_, lean_object* v___y_3507_, lean_object* v___y_3508_, lean_object* v___y_3509_){
_start:
{
uint8_t v_x_1603__boxed_3510_; lean_object* v_res_3511_; 
v_x_1603__boxed_3510_ = lean_unbox(v_x_3502_);
v_res_3511_ = l_Lake_Package_afterBuildCacheAsync___redArg___lam__0(v_build_3501_, v_x_1603__boxed_3510_, v___y_3503_, v___y_3504_, v___y_3505_, v___y_3506_, v___y_3507_, v___y_3508_);
lean_dec_ref(v___y_3507_);
lean_dec(v___y_3506_);
lean_dec(v___y_3505_);
lean_dec(v___y_3504_);
return v_res_3511_;
}
}
LEAN_EXPORT lean_object* l_Lake_Package_afterBuildCacheAsync___redArg(lean_object* v_self_3512_, lean_object* v_build_3513_, lean_object* v_a_3514_, lean_object* v_a_3515_, lean_object* v_a_3516_, lean_object* v_a_3517_, lean_object* v_a_3518_, lean_object* v_a_3519_){
_start:
{
lean_object* v_wsIdx_3521_; lean_object* v___x_3522_; uint8_t v___x_3523_; 
v_wsIdx_3521_ = lean_ctor_get(v_self_3512_, 0);
v___x_3522_ = lean_unsigned_to_nat(0u);
v___x_3523_ = lean_nat_dec_eq(v_wsIdx_3521_, v___x_3522_);
if (v___x_3523_ == 0)
{
lean_object* v___f_3524_; lean_object* v___x_3525_; lean_object* v___x_3526_; 
v___f_3524_ = lean_alloc_closure((void*)(l_Lake_Package_afterBuildCacheAsync___redArg___lam__0___boxed), 9, 1);
lean_closure_set(v___f_3524_, 0, v_build_3513_);
v___x_3525_ = lean_obj_once(&l___private_Lake_Build_Package_0__Lake_Package_recFetchDeps___redArg___closed__0, &l___private_Lake_Build_Package_0__Lake_Package_recFetchDeps___redArg___closed__0_once, _init_l___private_Lake_Build_Package_0__Lake_Package_recFetchDeps___redArg___closed__0);
lean_inc_ref(v_a_3514_);
v___x_3526_ = l___private_Lake_Build_Package_0__Lake_Package_maybeFetchBuildCache(v_self_3512_, v_a_3514_, v_a_3515_, v_a_3516_, v_a_3517_, v_a_3518_, v_a_3519_);
if (lean_obj_tag(v___x_3526_) == 0)
{
lean_object* v_a_3527_; lean_object* v_a_3528_; lean_object* v___x_3530_; uint8_t v_isShared_3531_; uint8_t v_isSharedCheck_3537_; 
v_a_3527_ = lean_ctor_get(v___x_3526_, 0);
v_a_3528_ = lean_ctor_get(v___x_3526_, 1);
v_isSharedCheck_3537_ = !lean_is_exclusive(v___x_3526_);
if (v_isSharedCheck_3537_ == 0)
{
v___x_3530_ = v___x_3526_;
v_isShared_3531_ = v_isSharedCheck_3537_;
goto v_resetjp_3529_;
}
else
{
lean_inc(v_a_3528_);
lean_inc(v_a_3527_);
lean_dec(v___x_3526_);
v___x_3530_ = lean_box(0);
v_isShared_3531_ = v_isSharedCheck_3537_;
goto v_resetjp_3529_;
}
v_resetjp_3529_:
{
lean_object* v___x_3532_; lean_object* v___x_3533_; lean_object* v___x_3535_; 
v___x_3532_ = lean_obj_once(&l___private_Lake_Build_Package_0__Lake_Package_recFetchDeps___redArg___closed__4, &l___private_Lake_Build_Package_0__Lake_Package_recFetchDeps___redArg___closed__4_once, _init_l___private_Lake_Build_Package_0__Lake_Package_recFetchDeps___redArg___closed__4);
v___x_3533_ = l_Lake_Job_bindM___redArg(v___x_3525_, v_a_3527_, v___f_3524_, v___x_3522_, v___x_3523_, v_a_3514_, v_a_3515_, v_a_3516_, v_a_3517_, v_a_3518_, v___x_3532_);
if (v_isShared_3531_ == 0)
{
lean_ctor_set(v___x_3530_, 0, v___x_3533_);
v___x_3535_ = v___x_3530_;
goto v_reusejp_3534_;
}
else
{
lean_object* v_reuseFailAlloc_3536_; 
v_reuseFailAlloc_3536_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3536_, 0, v___x_3533_);
lean_ctor_set(v_reuseFailAlloc_3536_, 1, v_a_3528_);
v___x_3535_ = v_reuseFailAlloc_3536_;
goto v_reusejp_3534_;
}
v_reusejp_3534_:
{
return v___x_3535_;
}
}
}
else
{
lean_object* v_a_3538_; lean_object* v_a_3539_; lean_object* v___x_3541_; uint8_t v_isShared_3542_; uint8_t v_isSharedCheck_3546_; 
lean_dec_ref(v___f_3524_);
lean_dec_ref(v_a_3514_);
v_a_3538_ = lean_ctor_get(v___x_3526_, 0);
v_a_3539_ = lean_ctor_get(v___x_3526_, 1);
v_isSharedCheck_3546_ = !lean_is_exclusive(v___x_3526_);
if (v_isSharedCheck_3546_ == 0)
{
v___x_3541_ = v___x_3526_;
v_isShared_3542_ = v_isSharedCheck_3546_;
goto v_resetjp_3540_;
}
else
{
lean_inc(v_a_3539_);
lean_inc(v_a_3538_);
lean_dec(v___x_3526_);
v___x_3541_ = lean_box(0);
v_isShared_3542_ = v_isSharedCheck_3546_;
goto v_resetjp_3540_;
}
v_resetjp_3540_:
{
lean_object* v___x_3544_; 
if (v_isShared_3542_ == 0)
{
v___x_3544_ = v___x_3541_;
goto v_reusejp_3543_;
}
else
{
lean_object* v_reuseFailAlloc_3545_; 
v_reuseFailAlloc_3545_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3545_, 0, v_a_3538_);
lean_ctor_set(v_reuseFailAlloc_3545_, 1, v_a_3539_);
v___x_3544_ = v_reuseFailAlloc_3545_;
goto v_reusejp_3543_;
}
v_reusejp_3543_:
{
return v___x_3544_;
}
}
}
}
else
{
uint8_t v___x_3547_; uint8_t v___x_3548_; lean_object* v___x_3549_; lean_object* v___x_3550_; lean_object* v___x_3551_; 
lean_dec_ref(v_self_3512_);
v___x_3547_ = 0;
v___x_3548_ = 0;
v___x_3549_ = lean_obj_once(&l___private_Lake_Build_Package_0__Lake_Package_recFetchDeps___redArg___closed__4, &l___private_Lake_Build_Package_0__Lake_Package_recFetchDeps___redArg___closed__4_once, _init_l___private_Lake_Build_Package_0__Lake_Package_recFetchDeps___redArg___closed__4);
v___x_3550_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_3550_, 0, v_a_3519_);
lean_ctor_set(v___x_3550_, 1, v___x_3549_);
lean_ctor_set(v___x_3550_, 2, v___x_3522_);
lean_ctor_set_uint8(v___x_3550_, sizeof(void*)*3, v___x_3547_);
lean_ctor_set_uint8(v___x_3550_, sizeof(void*)*3 + 1, v___x_3548_);
lean_inc_ref(v_a_3518_);
lean_inc(v_a_3517_);
lean_inc(v_a_3516_);
lean_inc(v_a_3515_);
v___x_3551_ = lean_apply_7(v_build_3513_, v_a_3514_, v_a_3515_, v_a_3516_, v_a_3517_, v_a_3518_, v___x_3550_, lean_box(0));
if (lean_obj_tag(v___x_3551_) == 0)
{
lean_object* v_a_3552_; lean_object* v_a_3553_; lean_object* v___x_3555_; uint8_t v_isShared_3556_; uint8_t v_isSharedCheck_3561_; 
v_a_3552_ = lean_ctor_get(v___x_3551_, 1);
v_a_3553_ = lean_ctor_get(v___x_3551_, 0);
v_isSharedCheck_3561_ = !lean_is_exclusive(v___x_3551_);
if (v_isSharedCheck_3561_ == 0)
{
v___x_3555_ = v___x_3551_;
v_isShared_3556_ = v_isSharedCheck_3561_;
goto v_resetjp_3554_;
}
else
{
lean_inc(v_a_3552_);
lean_inc(v_a_3553_);
lean_dec(v___x_3551_);
v___x_3555_ = lean_box(0);
v_isShared_3556_ = v_isSharedCheck_3561_;
goto v_resetjp_3554_;
}
v_resetjp_3554_:
{
lean_object* v_log_3557_; lean_object* v___x_3559_; 
v_log_3557_ = lean_ctor_get(v_a_3552_, 0);
lean_inc_ref(v_log_3557_);
lean_dec(v_a_3552_);
if (v_isShared_3556_ == 0)
{
lean_ctor_set(v___x_3555_, 1, v_log_3557_);
v___x_3559_ = v___x_3555_;
goto v_reusejp_3558_;
}
else
{
lean_object* v_reuseFailAlloc_3560_; 
v_reuseFailAlloc_3560_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3560_, 0, v_a_3553_);
lean_ctor_set(v_reuseFailAlloc_3560_, 1, v_log_3557_);
v___x_3559_ = v_reuseFailAlloc_3560_;
goto v_reusejp_3558_;
}
v_reusejp_3558_:
{
return v___x_3559_;
}
}
}
else
{
lean_object* v_a_3562_; lean_object* v_a_3563_; lean_object* v___x_3565_; uint8_t v_isShared_3566_; uint8_t v_isSharedCheck_3571_; 
v_a_3562_ = lean_ctor_get(v___x_3551_, 1);
v_a_3563_ = lean_ctor_get(v___x_3551_, 0);
v_isSharedCheck_3571_ = !lean_is_exclusive(v___x_3551_);
if (v_isSharedCheck_3571_ == 0)
{
v___x_3565_ = v___x_3551_;
v_isShared_3566_ = v_isSharedCheck_3571_;
goto v_resetjp_3564_;
}
else
{
lean_inc(v_a_3562_);
lean_inc(v_a_3563_);
lean_dec(v___x_3551_);
v___x_3565_ = lean_box(0);
v_isShared_3566_ = v_isSharedCheck_3571_;
goto v_resetjp_3564_;
}
v_resetjp_3564_:
{
lean_object* v_log_3567_; lean_object* v___x_3569_; 
v_log_3567_ = lean_ctor_get(v_a_3562_, 0);
lean_inc_ref(v_log_3567_);
lean_dec(v_a_3562_);
if (v_isShared_3566_ == 0)
{
lean_ctor_set(v___x_3565_, 1, v_log_3567_);
v___x_3569_ = v___x_3565_;
goto v_reusejp_3568_;
}
else
{
lean_object* v_reuseFailAlloc_3570_; 
v_reuseFailAlloc_3570_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3570_, 0, v_a_3563_);
lean_ctor_set(v_reuseFailAlloc_3570_, 1, v_log_3567_);
v___x_3569_ = v_reuseFailAlloc_3570_;
goto v_reusejp_3568_;
}
v_reusejp_3568_:
{
return v___x_3569_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Package_afterBuildCacheAsync___redArg___boxed(lean_object* v_self_3572_, lean_object* v_build_3573_, lean_object* v_a_3574_, lean_object* v_a_3575_, lean_object* v_a_3576_, lean_object* v_a_3577_, lean_object* v_a_3578_, lean_object* v_a_3579_, lean_object* v_a_3580_){
_start:
{
lean_object* v_res_3581_; 
v_res_3581_ = l_Lake_Package_afterBuildCacheAsync___redArg(v_self_3572_, v_build_3573_, v_a_3574_, v_a_3575_, v_a_3576_, v_a_3577_, v_a_3578_, v_a_3579_);
lean_dec_ref(v_a_3578_);
lean_dec(v_a_3577_);
lean_dec(v_a_3576_);
lean_dec(v_a_3575_);
return v_res_3581_;
}
}
LEAN_EXPORT lean_object* l_Lake_Package_afterBuildCacheAsync(lean_object* v_00_u03b1_3582_, lean_object* v_self_3583_, lean_object* v_build_3584_, lean_object* v_a_3585_, lean_object* v_a_3586_, lean_object* v_a_3587_, lean_object* v_a_3588_, lean_object* v_a_3589_, lean_object* v_a_3590_){
_start:
{
lean_object* v___x_3592_; 
v___x_3592_ = l_Lake_Package_afterBuildCacheAsync___redArg(v_self_3583_, v_build_3584_, v_a_3585_, v_a_3586_, v_a_3587_, v_a_3588_, v_a_3589_, v_a_3590_);
return v___x_3592_;
}
}
LEAN_EXPORT lean_object* l_Lake_Package_afterBuildCacheAsync___boxed(lean_object* v_00_u03b1_3593_, lean_object* v_self_3594_, lean_object* v_build_3595_, lean_object* v_a_3596_, lean_object* v_a_3597_, lean_object* v_a_3598_, lean_object* v_a_3599_, lean_object* v_a_3600_, lean_object* v_a_3601_, lean_object* v_a_3602_){
_start:
{
lean_object* v_res_3603_; 
v_res_3603_ = l_Lake_Package_afterBuildCacheAsync(v_00_u03b1_3593_, v_self_3594_, v_build_3595_, v_a_3596_, v_a_3597_, v_a_3598_, v_a_3599_, v_a_3600_, v_a_3601_);
lean_dec_ref(v_a_3600_);
lean_dec(v_a_3599_);
lean_dec(v_a_3598_);
lean_dec(v_a_3597_);
return v_res_3603_;
}
}
LEAN_EXPORT lean_object* l_Lake_Package_afterBuildCacheSync___redArg___lam__0(lean_object* v_build_3604_, uint8_t v_x_3605_, lean_object* v___y_3606_, lean_object* v___y_3607_, lean_object* v___y_3608_, lean_object* v___y_3609_, lean_object* v___y_3610_, lean_object* v___y_3611_){
_start:
{
lean_object* v_log_3613_; uint8_t v_action_3614_; uint8_t v_wantsRebuild_3615_; lean_object* v_buildTime_3616_; lean_object* v___x_3618_; uint8_t v_isShared_3619_; uint8_t v_isSharedCheck_3625_; 
v_log_3613_ = lean_ctor_get(v___y_3611_, 0);
v_action_3614_ = lean_ctor_get_uint8(v___y_3611_, sizeof(void*)*3);
v_wantsRebuild_3615_ = lean_ctor_get_uint8(v___y_3611_, sizeof(void*)*3 + 1);
v_buildTime_3616_ = lean_ctor_get(v___y_3611_, 2);
v_isSharedCheck_3625_ = !lean_is_exclusive(v___y_3611_);
if (v_isSharedCheck_3625_ == 0)
{
lean_object* v_unused_3626_; 
v_unused_3626_ = lean_ctor_get(v___y_3611_, 1);
lean_dec(v_unused_3626_);
v___x_3618_ = v___y_3611_;
v_isShared_3619_ = v_isSharedCheck_3625_;
goto v_resetjp_3617_;
}
else
{
lean_inc(v_buildTime_3616_);
lean_inc(v_log_3613_);
lean_dec(v___y_3611_);
v___x_3618_ = lean_box(0);
v_isShared_3619_ = v_isSharedCheck_3625_;
goto v_resetjp_3617_;
}
v_resetjp_3617_:
{
lean_object* v___x_3620_; lean_object* v___x_3622_; 
v___x_3620_ = lean_obj_once(&l___private_Lake_Build_Package_0__Lake_Package_recFetchDeps___redArg___closed__4, &l___private_Lake_Build_Package_0__Lake_Package_recFetchDeps___redArg___closed__4_once, _init_l___private_Lake_Build_Package_0__Lake_Package_recFetchDeps___redArg___closed__4);
if (v_isShared_3619_ == 0)
{
lean_ctor_set(v___x_3618_, 1, v___x_3620_);
v___x_3622_ = v___x_3618_;
goto v_reusejp_3621_;
}
else
{
lean_object* v_reuseFailAlloc_3624_; 
v_reuseFailAlloc_3624_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_3624_, 0, v_log_3613_);
lean_ctor_set(v_reuseFailAlloc_3624_, 1, v___x_3620_);
lean_ctor_set(v_reuseFailAlloc_3624_, 2, v_buildTime_3616_);
lean_ctor_set_uint8(v_reuseFailAlloc_3624_, sizeof(void*)*3, v_action_3614_);
lean_ctor_set_uint8(v_reuseFailAlloc_3624_, sizeof(void*)*3 + 1, v_wantsRebuild_3615_);
v___x_3622_ = v_reuseFailAlloc_3624_;
goto v_reusejp_3621_;
}
v_reusejp_3621_:
{
lean_object* v___x_3623_; 
lean_inc_ref(v___y_3610_);
lean_inc(v___y_3609_);
lean_inc(v___y_3608_);
lean_inc(v___y_3607_);
v___x_3623_ = lean_apply_7(v_build_3604_, v___y_3606_, v___y_3607_, v___y_3608_, v___y_3609_, v___y_3610_, v___x_3622_, lean_box(0));
return v___x_3623_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Package_afterBuildCacheSync___redArg___lam__0___boxed(lean_object* v_build_3627_, lean_object* v_x_3628_, lean_object* v___y_3629_, lean_object* v___y_3630_, lean_object* v___y_3631_, lean_object* v___y_3632_, lean_object* v___y_3633_, lean_object* v___y_3634_, lean_object* v___y_3635_){
_start:
{
uint8_t v_x_1633__boxed_3636_; lean_object* v_res_3637_; 
v_x_1633__boxed_3636_ = lean_unbox(v_x_3628_);
v_res_3637_ = l_Lake_Package_afterBuildCacheSync___redArg___lam__0(v_build_3627_, v_x_1633__boxed_3636_, v___y_3629_, v___y_3630_, v___y_3631_, v___y_3632_, v___y_3633_, v___y_3634_);
lean_dec_ref(v___y_3633_);
lean_dec(v___y_3632_);
lean_dec(v___y_3631_);
lean_dec(v___y_3630_);
return v_res_3637_;
}
}
LEAN_EXPORT lean_object* l_Lake_Package_afterBuildCacheSync___redArg(lean_object* v_self_3638_, lean_object* v_build_3639_, lean_object* v_a_3640_, lean_object* v_a_3641_, lean_object* v_a_3642_, lean_object* v_a_3643_, lean_object* v_a_3644_, lean_object* v_a_3645_){
_start:
{
lean_object* v_wsIdx_3647_; lean_object* v___x_3648_; uint8_t v___x_3649_; lean_object* v___x_3650_; 
v_wsIdx_3647_ = lean_ctor_get(v_self_3638_, 0);
v___x_3648_ = lean_unsigned_to_nat(0u);
v___x_3649_ = lean_nat_dec_eq(v_wsIdx_3647_, v___x_3648_);
v___x_3650_ = lean_obj_once(&l___private_Lake_Build_Package_0__Lake_Package_recFetchDeps___redArg___closed__0, &l___private_Lake_Build_Package_0__Lake_Package_recFetchDeps___redArg___closed__0_once, _init_l___private_Lake_Build_Package_0__Lake_Package_recFetchDeps___redArg___closed__0);
if (v___x_3649_ == 0)
{
lean_object* v___f_3651_; lean_object* v___x_3652_; 
v___f_3651_ = lean_alloc_closure((void*)(l_Lake_Package_afterBuildCacheSync___redArg___lam__0___boxed), 9, 1);
lean_closure_set(v___f_3651_, 0, v_build_3639_);
lean_inc_ref(v_a_3640_);
v___x_3652_ = l___private_Lake_Build_Package_0__Lake_Package_maybeFetchBuildCache(v_self_3638_, v_a_3640_, v_a_3641_, v_a_3642_, v_a_3643_, v_a_3644_, v_a_3645_);
if (lean_obj_tag(v___x_3652_) == 0)
{
lean_object* v_a_3653_; lean_object* v_a_3654_; lean_object* v___x_3656_; uint8_t v_isShared_3657_; uint8_t v_isSharedCheck_3663_; 
v_a_3653_ = lean_ctor_get(v___x_3652_, 0);
v_a_3654_ = lean_ctor_get(v___x_3652_, 1);
v_isSharedCheck_3663_ = !lean_is_exclusive(v___x_3652_);
if (v_isSharedCheck_3663_ == 0)
{
v___x_3656_ = v___x_3652_;
v_isShared_3657_ = v_isSharedCheck_3663_;
goto v_resetjp_3655_;
}
else
{
lean_inc(v_a_3654_);
lean_inc(v_a_3653_);
lean_dec(v___x_3652_);
v___x_3656_ = lean_box(0);
v_isShared_3657_ = v_isSharedCheck_3663_;
goto v_resetjp_3655_;
}
v_resetjp_3655_:
{
lean_object* v___x_3658_; lean_object* v___x_3659_; lean_object* v___x_3661_; 
v___x_3658_ = lean_obj_once(&l___private_Lake_Build_Package_0__Lake_Package_recFetchDeps___redArg___closed__4, &l___private_Lake_Build_Package_0__Lake_Package_recFetchDeps___redArg___closed__4_once, _init_l___private_Lake_Build_Package_0__Lake_Package_recFetchDeps___redArg___closed__4);
v___x_3659_ = l_Lake_Job_mapM___redArg(v___x_3650_, v_a_3653_, v___f_3651_, v___x_3648_, v___x_3649_, v_a_3640_, v_a_3641_, v_a_3642_, v_a_3643_, v_a_3644_, v___x_3658_);
if (v_isShared_3657_ == 0)
{
lean_ctor_set(v___x_3656_, 0, v___x_3659_);
v___x_3661_ = v___x_3656_;
goto v_reusejp_3660_;
}
else
{
lean_object* v_reuseFailAlloc_3662_; 
v_reuseFailAlloc_3662_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3662_, 0, v___x_3659_);
lean_ctor_set(v_reuseFailAlloc_3662_, 1, v_a_3654_);
v___x_3661_ = v_reuseFailAlloc_3662_;
goto v_reusejp_3660_;
}
v_reusejp_3660_:
{
return v___x_3661_;
}
}
}
else
{
lean_object* v_a_3664_; lean_object* v_a_3665_; lean_object* v___x_3667_; uint8_t v_isShared_3668_; uint8_t v_isSharedCheck_3672_; 
lean_dec_ref(v___f_3651_);
lean_dec_ref(v_a_3640_);
v_a_3664_ = lean_ctor_get(v___x_3652_, 0);
v_a_3665_ = lean_ctor_get(v___x_3652_, 1);
v_isSharedCheck_3672_ = !lean_is_exclusive(v___x_3652_);
if (v_isSharedCheck_3672_ == 0)
{
v___x_3667_ = v___x_3652_;
v_isShared_3668_ = v_isSharedCheck_3672_;
goto v_resetjp_3666_;
}
else
{
lean_inc(v_a_3665_);
lean_inc(v_a_3664_);
lean_dec(v___x_3652_);
v___x_3667_ = lean_box(0);
v_isShared_3668_ = v_isSharedCheck_3672_;
goto v_resetjp_3666_;
}
v_resetjp_3666_:
{
lean_object* v___x_3670_; 
if (v_isShared_3668_ == 0)
{
v___x_3670_ = v___x_3667_;
goto v_reusejp_3669_;
}
else
{
lean_object* v_reuseFailAlloc_3671_; 
v_reuseFailAlloc_3671_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3671_, 0, v_a_3664_);
lean_ctor_set(v_reuseFailAlloc_3671_, 1, v_a_3665_);
v___x_3670_ = v_reuseFailAlloc_3671_;
goto v_reusejp_3669_;
}
v_reusejp_3669_:
{
return v___x_3670_;
}
}
}
}
else
{
lean_object* v___x_3673_; lean_object* v___x_3674_; lean_object* v___x_3675_; 
lean_dec_ref(v_self_3638_);
v___x_3673_ = ((lean_object*)(l___private_Lake_Build_Package_0__Lake_Package_recFetchDeps___redArg___closed__2));
v___x_3674_ = l_Lake_Job_async___redArg(v___x_3650_, v_build_3639_, v___x_3648_, v___x_3673_, v_a_3640_, v_a_3641_, v_a_3642_, v_a_3643_, v_a_3644_);
v___x_3675_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3675_, 0, v___x_3674_);
lean_ctor_set(v___x_3675_, 1, v_a_3645_);
return v___x_3675_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_Package_afterBuildCacheSync___redArg___boxed(lean_object* v_self_3676_, lean_object* v_build_3677_, lean_object* v_a_3678_, lean_object* v_a_3679_, lean_object* v_a_3680_, lean_object* v_a_3681_, lean_object* v_a_3682_, lean_object* v_a_3683_, lean_object* v_a_3684_){
_start:
{
lean_object* v_res_3685_; 
v_res_3685_ = l_Lake_Package_afterBuildCacheSync___redArg(v_self_3676_, v_build_3677_, v_a_3678_, v_a_3679_, v_a_3680_, v_a_3681_, v_a_3682_, v_a_3683_);
lean_dec_ref(v_a_3682_);
lean_dec(v_a_3681_);
lean_dec(v_a_3680_);
lean_dec(v_a_3679_);
return v_res_3685_;
}
}
LEAN_EXPORT lean_object* l_Lake_Package_afterBuildCacheSync(lean_object* v_00_u03b1_3686_, lean_object* v_self_3687_, lean_object* v_build_3688_, lean_object* v_a_3689_, lean_object* v_a_3690_, lean_object* v_a_3691_, lean_object* v_a_3692_, lean_object* v_a_3693_, lean_object* v_a_3694_){
_start:
{
lean_object* v___x_3696_; 
v___x_3696_ = l_Lake_Package_afterBuildCacheSync___redArg(v_self_3687_, v_build_3688_, v_a_3689_, v_a_3690_, v_a_3691_, v_a_3692_, v_a_3693_, v_a_3694_);
return v___x_3696_;
}
}
LEAN_EXPORT lean_object* l_Lake_Package_afterBuildCacheSync___boxed(lean_object* v_00_u03b1_3697_, lean_object* v_self_3698_, lean_object* v_build_3699_, lean_object* v_a_3700_, lean_object* v_a_3701_, lean_object* v_a_3702_, lean_object* v_a_3703_, lean_object* v_a_3704_, lean_object* v_a_3705_, lean_object* v_a_3706_){
_start:
{
lean_object* v_res_3707_; 
v_res_3707_ = l_Lake_Package_afterBuildCacheSync(v_00_u03b1_3697_, v_self_3698_, v_build_3699_, v_a_3700_, v_a_3701_, v_a_3702_, v_a_3703_, v_a_3704_, v_a_3705_);
lean_dec_ref(v_a_3704_);
lean_dec(v_a_3703_);
lean_dec(v_a_3702_);
lean_dec(v_a_3701_);
return v_res_3707_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lake_Package_initFacetConfigs_spec__0___redArg(lean_object* v_k_3708_, lean_object* v_v_3709_, lean_object* v_t_3710_){
_start:
{
if (lean_obj_tag(v_t_3710_) == 0)
{
lean_object* v_size_3711_; lean_object* v_k_3712_; lean_object* v_v_3713_; lean_object* v_l_3714_; lean_object* v_r_3715_; lean_object* v___x_3717_; uint8_t v_isShared_3718_; uint8_t v_isSharedCheck_3995_; 
v_size_3711_ = lean_ctor_get(v_t_3710_, 0);
v_k_3712_ = lean_ctor_get(v_t_3710_, 1);
v_v_3713_ = lean_ctor_get(v_t_3710_, 2);
v_l_3714_ = lean_ctor_get(v_t_3710_, 3);
v_r_3715_ = lean_ctor_get(v_t_3710_, 4);
v_isSharedCheck_3995_ = !lean_is_exclusive(v_t_3710_);
if (v_isSharedCheck_3995_ == 0)
{
v___x_3717_ = v_t_3710_;
v_isShared_3718_ = v_isSharedCheck_3995_;
goto v_resetjp_3716_;
}
else
{
lean_inc(v_r_3715_);
lean_inc(v_l_3714_);
lean_inc(v_v_3713_);
lean_inc(v_k_3712_);
lean_inc(v_size_3711_);
lean_dec(v_t_3710_);
v___x_3717_ = lean_box(0);
v_isShared_3718_ = v_isSharedCheck_3995_;
goto v_resetjp_3716_;
}
v_resetjp_3716_:
{
uint8_t v___x_3719_; 
v___x_3719_ = l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(v_k_3708_, v_k_3712_);
switch(v___x_3719_)
{
case 0:
{
lean_object* v_impl_3720_; lean_object* v___x_3721_; 
lean_dec(v_size_3711_);
v_impl_3720_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lake_Package_initFacetConfigs_spec__0___redArg(v_k_3708_, v_v_3709_, v_l_3714_);
v___x_3721_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_r_3715_) == 0)
{
lean_object* v_size_3722_; lean_object* v_size_3723_; lean_object* v_k_3724_; lean_object* v_v_3725_; lean_object* v_l_3726_; lean_object* v_r_3727_; lean_object* v___x_3728_; lean_object* v___x_3729_; uint8_t v___x_3730_; 
v_size_3722_ = lean_ctor_get(v_r_3715_, 0);
v_size_3723_ = lean_ctor_get(v_impl_3720_, 0);
lean_inc(v_size_3723_);
v_k_3724_ = lean_ctor_get(v_impl_3720_, 1);
lean_inc(v_k_3724_);
v_v_3725_ = lean_ctor_get(v_impl_3720_, 2);
lean_inc(v_v_3725_);
v_l_3726_ = lean_ctor_get(v_impl_3720_, 3);
lean_inc(v_l_3726_);
v_r_3727_ = lean_ctor_get(v_impl_3720_, 4);
lean_inc(v_r_3727_);
v___x_3728_ = lean_unsigned_to_nat(3u);
v___x_3729_ = lean_nat_mul(v___x_3728_, v_size_3722_);
v___x_3730_ = lean_nat_dec_lt(v___x_3729_, v_size_3723_);
lean_dec(v___x_3729_);
if (v___x_3730_ == 0)
{
lean_object* v___x_3731_; lean_object* v___x_3732_; lean_object* v___x_3734_; 
lean_dec(v_r_3727_);
lean_dec(v_l_3726_);
lean_dec(v_v_3725_);
lean_dec(v_k_3724_);
v___x_3731_ = lean_nat_add(v___x_3721_, v_size_3723_);
lean_dec(v_size_3723_);
v___x_3732_ = lean_nat_add(v___x_3731_, v_size_3722_);
lean_dec(v___x_3731_);
if (v_isShared_3718_ == 0)
{
lean_ctor_set(v___x_3717_, 3, v_impl_3720_);
lean_ctor_set(v___x_3717_, 0, v___x_3732_);
v___x_3734_ = v___x_3717_;
goto v_reusejp_3733_;
}
else
{
lean_object* v_reuseFailAlloc_3735_; 
v_reuseFailAlloc_3735_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3735_, 0, v___x_3732_);
lean_ctor_set(v_reuseFailAlloc_3735_, 1, v_k_3712_);
lean_ctor_set(v_reuseFailAlloc_3735_, 2, v_v_3713_);
lean_ctor_set(v_reuseFailAlloc_3735_, 3, v_impl_3720_);
lean_ctor_set(v_reuseFailAlloc_3735_, 4, v_r_3715_);
v___x_3734_ = v_reuseFailAlloc_3735_;
goto v_reusejp_3733_;
}
v_reusejp_3733_:
{
return v___x_3734_;
}
}
else
{
lean_object* v___x_3737_; uint8_t v_isShared_3738_; uint8_t v_isSharedCheck_3801_; 
v_isSharedCheck_3801_ = !lean_is_exclusive(v_impl_3720_);
if (v_isSharedCheck_3801_ == 0)
{
lean_object* v_unused_3802_; lean_object* v_unused_3803_; lean_object* v_unused_3804_; lean_object* v_unused_3805_; lean_object* v_unused_3806_; 
v_unused_3802_ = lean_ctor_get(v_impl_3720_, 4);
lean_dec(v_unused_3802_);
v_unused_3803_ = lean_ctor_get(v_impl_3720_, 3);
lean_dec(v_unused_3803_);
v_unused_3804_ = lean_ctor_get(v_impl_3720_, 2);
lean_dec(v_unused_3804_);
v_unused_3805_ = lean_ctor_get(v_impl_3720_, 1);
lean_dec(v_unused_3805_);
v_unused_3806_ = lean_ctor_get(v_impl_3720_, 0);
lean_dec(v_unused_3806_);
v___x_3737_ = v_impl_3720_;
v_isShared_3738_ = v_isSharedCheck_3801_;
goto v_resetjp_3736_;
}
else
{
lean_dec(v_impl_3720_);
v___x_3737_ = lean_box(0);
v_isShared_3738_ = v_isSharedCheck_3801_;
goto v_resetjp_3736_;
}
v_resetjp_3736_:
{
lean_object* v_size_3739_; lean_object* v_size_3740_; lean_object* v_k_3741_; lean_object* v_v_3742_; lean_object* v_l_3743_; lean_object* v_r_3744_; lean_object* v___x_3745_; lean_object* v___x_3746_; uint8_t v___x_3747_; 
v_size_3739_ = lean_ctor_get(v_l_3726_, 0);
v_size_3740_ = lean_ctor_get(v_r_3727_, 0);
v_k_3741_ = lean_ctor_get(v_r_3727_, 1);
v_v_3742_ = lean_ctor_get(v_r_3727_, 2);
v_l_3743_ = lean_ctor_get(v_r_3727_, 3);
v_r_3744_ = lean_ctor_get(v_r_3727_, 4);
v___x_3745_ = lean_unsigned_to_nat(2u);
v___x_3746_ = lean_nat_mul(v___x_3745_, v_size_3739_);
v___x_3747_ = lean_nat_dec_lt(v_size_3740_, v___x_3746_);
lean_dec(v___x_3746_);
if (v___x_3747_ == 0)
{
lean_object* v___x_3749_; uint8_t v_isShared_3750_; uint8_t v_isSharedCheck_3776_; 
lean_inc(v_r_3744_);
lean_inc(v_l_3743_);
lean_inc(v_v_3742_);
lean_inc(v_k_3741_);
v_isSharedCheck_3776_ = !lean_is_exclusive(v_r_3727_);
if (v_isSharedCheck_3776_ == 0)
{
lean_object* v_unused_3777_; lean_object* v_unused_3778_; lean_object* v_unused_3779_; lean_object* v_unused_3780_; lean_object* v_unused_3781_; 
v_unused_3777_ = lean_ctor_get(v_r_3727_, 4);
lean_dec(v_unused_3777_);
v_unused_3778_ = lean_ctor_get(v_r_3727_, 3);
lean_dec(v_unused_3778_);
v_unused_3779_ = lean_ctor_get(v_r_3727_, 2);
lean_dec(v_unused_3779_);
v_unused_3780_ = lean_ctor_get(v_r_3727_, 1);
lean_dec(v_unused_3780_);
v_unused_3781_ = lean_ctor_get(v_r_3727_, 0);
lean_dec(v_unused_3781_);
v___x_3749_ = v_r_3727_;
v_isShared_3750_ = v_isSharedCheck_3776_;
goto v_resetjp_3748_;
}
else
{
lean_dec(v_r_3727_);
v___x_3749_ = lean_box(0);
v_isShared_3750_ = v_isSharedCheck_3776_;
goto v_resetjp_3748_;
}
v_resetjp_3748_:
{
lean_object* v___x_3751_; lean_object* v___x_3752_; lean_object* v___y_3754_; lean_object* v___y_3755_; lean_object* v___y_3756_; lean_object* v___x_3764_; lean_object* v___y_3766_; 
v___x_3751_ = lean_nat_add(v___x_3721_, v_size_3723_);
lean_dec(v_size_3723_);
v___x_3752_ = lean_nat_add(v___x_3751_, v_size_3722_);
lean_dec(v___x_3751_);
v___x_3764_ = lean_nat_add(v___x_3721_, v_size_3739_);
if (lean_obj_tag(v_l_3743_) == 0)
{
lean_object* v_size_3774_; 
v_size_3774_ = lean_ctor_get(v_l_3743_, 0);
lean_inc(v_size_3774_);
v___y_3766_ = v_size_3774_;
goto v___jp_3765_;
}
else
{
lean_object* v___x_3775_; 
v___x_3775_ = lean_unsigned_to_nat(0u);
v___y_3766_ = v___x_3775_;
goto v___jp_3765_;
}
v___jp_3753_:
{
lean_object* v___x_3757_; lean_object* v___x_3759_; 
v___x_3757_ = lean_nat_add(v___y_3755_, v___y_3756_);
lean_dec(v___y_3756_);
lean_dec(v___y_3755_);
if (v_isShared_3750_ == 0)
{
lean_ctor_set(v___x_3749_, 4, v_r_3715_);
lean_ctor_set(v___x_3749_, 3, v_r_3744_);
lean_ctor_set(v___x_3749_, 2, v_v_3713_);
lean_ctor_set(v___x_3749_, 1, v_k_3712_);
lean_ctor_set(v___x_3749_, 0, v___x_3757_);
v___x_3759_ = v___x_3749_;
goto v_reusejp_3758_;
}
else
{
lean_object* v_reuseFailAlloc_3763_; 
v_reuseFailAlloc_3763_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3763_, 0, v___x_3757_);
lean_ctor_set(v_reuseFailAlloc_3763_, 1, v_k_3712_);
lean_ctor_set(v_reuseFailAlloc_3763_, 2, v_v_3713_);
lean_ctor_set(v_reuseFailAlloc_3763_, 3, v_r_3744_);
lean_ctor_set(v_reuseFailAlloc_3763_, 4, v_r_3715_);
v___x_3759_ = v_reuseFailAlloc_3763_;
goto v_reusejp_3758_;
}
v_reusejp_3758_:
{
lean_object* v___x_3761_; 
if (v_isShared_3738_ == 0)
{
lean_ctor_set(v___x_3737_, 4, v___x_3759_);
lean_ctor_set(v___x_3737_, 3, v___y_3754_);
lean_ctor_set(v___x_3737_, 2, v_v_3742_);
lean_ctor_set(v___x_3737_, 1, v_k_3741_);
lean_ctor_set(v___x_3737_, 0, v___x_3752_);
v___x_3761_ = v___x_3737_;
goto v_reusejp_3760_;
}
else
{
lean_object* v_reuseFailAlloc_3762_; 
v_reuseFailAlloc_3762_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3762_, 0, v___x_3752_);
lean_ctor_set(v_reuseFailAlloc_3762_, 1, v_k_3741_);
lean_ctor_set(v_reuseFailAlloc_3762_, 2, v_v_3742_);
lean_ctor_set(v_reuseFailAlloc_3762_, 3, v___y_3754_);
lean_ctor_set(v_reuseFailAlloc_3762_, 4, v___x_3759_);
v___x_3761_ = v_reuseFailAlloc_3762_;
goto v_reusejp_3760_;
}
v_reusejp_3760_:
{
return v___x_3761_;
}
}
}
v___jp_3765_:
{
lean_object* v___x_3767_; lean_object* v___x_3769_; 
v___x_3767_ = lean_nat_add(v___x_3764_, v___y_3766_);
lean_dec(v___y_3766_);
lean_dec(v___x_3764_);
if (v_isShared_3718_ == 0)
{
lean_ctor_set(v___x_3717_, 4, v_l_3743_);
lean_ctor_set(v___x_3717_, 3, v_l_3726_);
lean_ctor_set(v___x_3717_, 2, v_v_3725_);
lean_ctor_set(v___x_3717_, 1, v_k_3724_);
lean_ctor_set(v___x_3717_, 0, v___x_3767_);
v___x_3769_ = v___x_3717_;
goto v_reusejp_3768_;
}
else
{
lean_object* v_reuseFailAlloc_3773_; 
v_reuseFailAlloc_3773_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3773_, 0, v___x_3767_);
lean_ctor_set(v_reuseFailAlloc_3773_, 1, v_k_3724_);
lean_ctor_set(v_reuseFailAlloc_3773_, 2, v_v_3725_);
lean_ctor_set(v_reuseFailAlloc_3773_, 3, v_l_3726_);
lean_ctor_set(v_reuseFailAlloc_3773_, 4, v_l_3743_);
v___x_3769_ = v_reuseFailAlloc_3773_;
goto v_reusejp_3768_;
}
v_reusejp_3768_:
{
lean_object* v___x_3770_; 
v___x_3770_ = lean_nat_add(v___x_3721_, v_size_3722_);
if (lean_obj_tag(v_r_3744_) == 0)
{
lean_object* v_size_3771_; 
v_size_3771_ = lean_ctor_get(v_r_3744_, 0);
lean_inc(v_size_3771_);
v___y_3754_ = v___x_3769_;
v___y_3755_ = v___x_3770_;
v___y_3756_ = v_size_3771_;
goto v___jp_3753_;
}
else
{
lean_object* v___x_3772_; 
v___x_3772_ = lean_unsigned_to_nat(0u);
v___y_3754_ = v___x_3769_;
v___y_3755_ = v___x_3770_;
v___y_3756_ = v___x_3772_;
goto v___jp_3753_;
}
}
}
}
}
else
{
lean_object* v___x_3782_; lean_object* v___x_3783_; lean_object* v___x_3784_; lean_object* v___x_3785_; lean_object* v___x_3787_; 
lean_del_object(v___x_3717_);
v___x_3782_ = lean_nat_add(v___x_3721_, v_size_3723_);
lean_dec(v_size_3723_);
v___x_3783_ = lean_nat_add(v___x_3782_, v_size_3722_);
lean_dec(v___x_3782_);
v___x_3784_ = lean_nat_add(v___x_3721_, v_size_3722_);
v___x_3785_ = lean_nat_add(v___x_3784_, v_size_3740_);
lean_dec(v___x_3784_);
lean_inc_ref(v_r_3715_);
if (v_isShared_3738_ == 0)
{
lean_ctor_set(v___x_3737_, 4, v_r_3715_);
lean_ctor_set(v___x_3737_, 3, v_r_3727_);
lean_ctor_set(v___x_3737_, 2, v_v_3713_);
lean_ctor_set(v___x_3737_, 1, v_k_3712_);
lean_ctor_set(v___x_3737_, 0, v___x_3785_);
v___x_3787_ = v___x_3737_;
goto v_reusejp_3786_;
}
else
{
lean_object* v_reuseFailAlloc_3800_; 
v_reuseFailAlloc_3800_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3800_, 0, v___x_3785_);
lean_ctor_set(v_reuseFailAlloc_3800_, 1, v_k_3712_);
lean_ctor_set(v_reuseFailAlloc_3800_, 2, v_v_3713_);
lean_ctor_set(v_reuseFailAlloc_3800_, 3, v_r_3727_);
lean_ctor_set(v_reuseFailAlloc_3800_, 4, v_r_3715_);
v___x_3787_ = v_reuseFailAlloc_3800_;
goto v_reusejp_3786_;
}
v_reusejp_3786_:
{
lean_object* v___x_3789_; uint8_t v_isShared_3790_; uint8_t v_isSharedCheck_3794_; 
v_isSharedCheck_3794_ = !lean_is_exclusive(v_r_3715_);
if (v_isSharedCheck_3794_ == 0)
{
lean_object* v_unused_3795_; lean_object* v_unused_3796_; lean_object* v_unused_3797_; lean_object* v_unused_3798_; lean_object* v_unused_3799_; 
v_unused_3795_ = lean_ctor_get(v_r_3715_, 4);
lean_dec(v_unused_3795_);
v_unused_3796_ = lean_ctor_get(v_r_3715_, 3);
lean_dec(v_unused_3796_);
v_unused_3797_ = lean_ctor_get(v_r_3715_, 2);
lean_dec(v_unused_3797_);
v_unused_3798_ = lean_ctor_get(v_r_3715_, 1);
lean_dec(v_unused_3798_);
v_unused_3799_ = lean_ctor_get(v_r_3715_, 0);
lean_dec(v_unused_3799_);
v___x_3789_ = v_r_3715_;
v_isShared_3790_ = v_isSharedCheck_3794_;
goto v_resetjp_3788_;
}
else
{
lean_dec(v_r_3715_);
v___x_3789_ = lean_box(0);
v_isShared_3790_ = v_isSharedCheck_3794_;
goto v_resetjp_3788_;
}
v_resetjp_3788_:
{
lean_object* v___x_3792_; 
if (v_isShared_3790_ == 0)
{
lean_ctor_set(v___x_3789_, 4, v___x_3787_);
lean_ctor_set(v___x_3789_, 3, v_l_3726_);
lean_ctor_set(v___x_3789_, 2, v_v_3725_);
lean_ctor_set(v___x_3789_, 1, v_k_3724_);
lean_ctor_set(v___x_3789_, 0, v___x_3783_);
v___x_3792_ = v___x_3789_;
goto v_reusejp_3791_;
}
else
{
lean_object* v_reuseFailAlloc_3793_; 
v_reuseFailAlloc_3793_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3793_, 0, v___x_3783_);
lean_ctor_set(v_reuseFailAlloc_3793_, 1, v_k_3724_);
lean_ctor_set(v_reuseFailAlloc_3793_, 2, v_v_3725_);
lean_ctor_set(v_reuseFailAlloc_3793_, 3, v_l_3726_);
lean_ctor_set(v_reuseFailAlloc_3793_, 4, v___x_3787_);
v___x_3792_ = v_reuseFailAlloc_3793_;
goto v_reusejp_3791_;
}
v_reusejp_3791_:
{
return v___x_3792_;
}
}
}
}
}
}
}
else
{
lean_object* v_l_3807_; 
v_l_3807_ = lean_ctor_get(v_impl_3720_, 3);
lean_inc(v_l_3807_);
if (lean_obj_tag(v_l_3807_) == 0)
{
lean_object* v_r_3808_; lean_object* v_k_3809_; lean_object* v_v_3810_; lean_object* v___x_3812_; uint8_t v_isShared_3813_; uint8_t v_isSharedCheck_3821_; 
v_r_3808_ = lean_ctor_get(v_impl_3720_, 4);
v_k_3809_ = lean_ctor_get(v_impl_3720_, 1);
v_v_3810_ = lean_ctor_get(v_impl_3720_, 2);
v_isSharedCheck_3821_ = !lean_is_exclusive(v_impl_3720_);
if (v_isSharedCheck_3821_ == 0)
{
lean_object* v_unused_3822_; lean_object* v_unused_3823_; 
v_unused_3822_ = lean_ctor_get(v_impl_3720_, 3);
lean_dec(v_unused_3822_);
v_unused_3823_ = lean_ctor_get(v_impl_3720_, 0);
lean_dec(v_unused_3823_);
v___x_3812_ = v_impl_3720_;
v_isShared_3813_ = v_isSharedCheck_3821_;
goto v_resetjp_3811_;
}
else
{
lean_inc(v_r_3808_);
lean_inc(v_v_3810_);
lean_inc(v_k_3809_);
lean_dec(v_impl_3720_);
v___x_3812_ = lean_box(0);
v_isShared_3813_ = v_isSharedCheck_3821_;
goto v_resetjp_3811_;
}
v_resetjp_3811_:
{
lean_object* v___x_3814_; lean_object* v___x_3816_; 
v___x_3814_ = lean_unsigned_to_nat(3u);
lean_inc(v_r_3808_);
if (v_isShared_3813_ == 0)
{
lean_ctor_set(v___x_3812_, 3, v_r_3808_);
lean_ctor_set(v___x_3812_, 2, v_v_3713_);
lean_ctor_set(v___x_3812_, 1, v_k_3712_);
lean_ctor_set(v___x_3812_, 0, v___x_3721_);
v___x_3816_ = v___x_3812_;
goto v_reusejp_3815_;
}
else
{
lean_object* v_reuseFailAlloc_3820_; 
v_reuseFailAlloc_3820_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3820_, 0, v___x_3721_);
lean_ctor_set(v_reuseFailAlloc_3820_, 1, v_k_3712_);
lean_ctor_set(v_reuseFailAlloc_3820_, 2, v_v_3713_);
lean_ctor_set(v_reuseFailAlloc_3820_, 3, v_r_3808_);
lean_ctor_set(v_reuseFailAlloc_3820_, 4, v_r_3808_);
v___x_3816_ = v_reuseFailAlloc_3820_;
goto v_reusejp_3815_;
}
v_reusejp_3815_:
{
lean_object* v___x_3818_; 
if (v_isShared_3718_ == 0)
{
lean_ctor_set(v___x_3717_, 4, v___x_3816_);
lean_ctor_set(v___x_3717_, 3, v_l_3807_);
lean_ctor_set(v___x_3717_, 2, v_v_3810_);
lean_ctor_set(v___x_3717_, 1, v_k_3809_);
lean_ctor_set(v___x_3717_, 0, v___x_3814_);
v___x_3818_ = v___x_3717_;
goto v_reusejp_3817_;
}
else
{
lean_object* v_reuseFailAlloc_3819_; 
v_reuseFailAlloc_3819_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3819_, 0, v___x_3814_);
lean_ctor_set(v_reuseFailAlloc_3819_, 1, v_k_3809_);
lean_ctor_set(v_reuseFailAlloc_3819_, 2, v_v_3810_);
lean_ctor_set(v_reuseFailAlloc_3819_, 3, v_l_3807_);
lean_ctor_set(v_reuseFailAlloc_3819_, 4, v___x_3816_);
v___x_3818_ = v_reuseFailAlloc_3819_;
goto v_reusejp_3817_;
}
v_reusejp_3817_:
{
return v___x_3818_;
}
}
}
}
else
{
lean_object* v_r_3824_; 
v_r_3824_ = lean_ctor_get(v_impl_3720_, 4);
lean_inc(v_r_3824_);
if (lean_obj_tag(v_r_3824_) == 0)
{
lean_object* v_k_3825_; lean_object* v_v_3826_; lean_object* v___x_3828_; uint8_t v_isShared_3829_; uint8_t v_isSharedCheck_3849_; 
v_k_3825_ = lean_ctor_get(v_impl_3720_, 1);
v_v_3826_ = lean_ctor_get(v_impl_3720_, 2);
v_isSharedCheck_3849_ = !lean_is_exclusive(v_impl_3720_);
if (v_isSharedCheck_3849_ == 0)
{
lean_object* v_unused_3850_; lean_object* v_unused_3851_; lean_object* v_unused_3852_; 
v_unused_3850_ = lean_ctor_get(v_impl_3720_, 4);
lean_dec(v_unused_3850_);
v_unused_3851_ = lean_ctor_get(v_impl_3720_, 3);
lean_dec(v_unused_3851_);
v_unused_3852_ = lean_ctor_get(v_impl_3720_, 0);
lean_dec(v_unused_3852_);
v___x_3828_ = v_impl_3720_;
v_isShared_3829_ = v_isSharedCheck_3849_;
goto v_resetjp_3827_;
}
else
{
lean_inc(v_v_3826_);
lean_inc(v_k_3825_);
lean_dec(v_impl_3720_);
v___x_3828_ = lean_box(0);
v_isShared_3829_ = v_isSharedCheck_3849_;
goto v_resetjp_3827_;
}
v_resetjp_3827_:
{
lean_object* v_k_3830_; lean_object* v_v_3831_; lean_object* v___x_3833_; uint8_t v_isShared_3834_; uint8_t v_isSharedCheck_3845_; 
v_k_3830_ = lean_ctor_get(v_r_3824_, 1);
v_v_3831_ = lean_ctor_get(v_r_3824_, 2);
v_isSharedCheck_3845_ = !lean_is_exclusive(v_r_3824_);
if (v_isSharedCheck_3845_ == 0)
{
lean_object* v_unused_3846_; lean_object* v_unused_3847_; lean_object* v_unused_3848_; 
v_unused_3846_ = lean_ctor_get(v_r_3824_, 4);
lean_dec(v_unused_3846_);
v_unused_3847_ = lean_ctor_get(v_r_3824_, 3);
lean_dec(v_unused_3847_);
v_unused_3848_ = lean_ctor_get(v_r_3824_, 0);
lean_dec(v_unused_3848_);
v___x_3833_ = v_r_3824_;
v_isShared_3834_ = v_isSharedCheck_3845_;
goto v_resetjp_3832_;
}
else
{
lean_inc(v_v_3831_);
lean_inc(v_k_3830_);
lean_dec(v_r_3824_);
v___x_3833_ = lean_box(0);
v_isShared_3834_ = v_isSharedCheck_3845_;
goto v_resetjp_3832_;
}
v_resetjp_3832_:
{
lean_object* v___x_3835_; lean_object* v___x_3837_; 
v___x_3835_ = lean_unsigned_to_nat(3u);
if (v_isShared_3834_ == 0)
{
lean_ctor_set(v___x_3833_, 4, v_l_3807_);
lean_ctor_set(v___x_3833_, 3, v_l_3807_);
lean_ctor_set(v___x_3833_, 2, v_v_3826_);
lean_ctor_set(v___x_3833_, 1, v_k_3825_);
lean_ctor_set(v___x_3833_, 0, v___x_3721_);
v___x_3837_ = v___x_3833_;
goto v_reusejp_3836_;
}
else
{
lean_object* v_reuseFailAlloc_3844_; 
v_reuseFailAlloc_3844_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3844_, 0, v___x_3721_);
lean_ctor_set(v_reuseFailAlloc_3844_, 1, v_k_3825_);
lean_ctor_set(v_reuseFailAlloc_3844_, 2, v_v_3826_);
lean_ctor_set(v_reuseFailAlloc_3844_, 3, v_l_3807_);
lean_ctor_set(v_reuseFailAlloc_3844_, 4, v_l_3807_);
v___x_3837_ = v_reuseFailAlloc_3844_;
goto v_reusejp_3836_;
}
v_reusejp_3836_:
{
lean_object* v___x_3839_; 
if (v_isShared_3829_ == 0)
{
lean_ctor_set(v___x_3828_, 4, v_l_3807_);
lean_ctor_set(v___x_3828_, 2, v_v_3713_);
lean_ctor_set(v___x_3828_, 1, v_k_3712_);
lean_ctor_set(v___x_3828_, 0, v___x_3721_);
v___x_3839_ = v___x_3828_;
goto v_reusejp_3838_;
}
else
{
lean_object* v_reuseFailAlloc_3843_; 
v_reuseFailAlloc_3843_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3843_, 0, v___x_3721_);
lean_ctor_set(v_reuseFailAlloc_3843_, 1, v_k_3712_);
lean_ctor_set(v_reuseFailAlloc_3843_, 2, v_v_3713_);
lean_ctor_set(v_reuseFailAlloc_3843_, 3, v_l_3807_);
lean_ctor_set(v_reuseFailAlloc_3843_, 4, v_l_3807_);
v___x_3839_ = v_reuseFailAlloc_3843_;
goto v_reusejp_3838_;
}
v_reusejp_3838_:
{
lean_object* v___x_3841_; 
if (v_isShared_3718_ == 0)
{
lean_ctor_set(v___x_3717_, 4, v___x_3839_);
lean_ctor_set(v___x_3717_, 3, v___x_3837_);
lean_ctor_set(v___x_3717_, 2, v_v_3831_);
lean_ctor_set(v___x_3717_, 1, v_k_3830_);
lean_ctor_set(v___x_3717_, 0, v___x_3835_);
v___x_3841_ = v___x_3717_;
goto v_reusejp_3840_;
}
else
{
lean_object* v_reuseFailAlloc_3842_; 
v_reuseFailAlloc_3842_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3842_, 0, v___x_3835_);
lean_ctor_set(v_reuseFailAlloc_3842_, 1, v_k_3830_);
lean_ctor_set(v_reuseFailAlloc_3842_, 2, v_v_3831_);
lean_ctor_set(v_reuseFailAlloc_3842_, 3, v___x_3837_);
lean_ctor_set(v_reuseFailAlloc_3842_, 4, v___x_3839_);
v___x_3841_ = v_reuseFailAlloc_3842_;
goto v_reusejp_3840_;
}
v_reusejp_3840_:
{
return v___x_3841_;
}
}
}
}
}
}
else
{
lean_object* v___x_3853_; lean_object* v___x_3855_; 
v___x_3853_ = lean_unsigned_to_nat(2u);
if (v_isShared_3718_ == 0)
{
lean_ctor_set(v___x_3717_, 4, v_r_3824_);
lean_ctor_set(v___x_3717_, 3, v_impl_3720_);
lean_ctor_set(v___x_3717_, 0, v___x_3853_);
v___x_3855_ = v___x_3717_;
goto v_reusejp_3854_;
}
else
{
lean_object* v_reuseFailAlloc_3856_; 
v_reuseFailAlloc_3856_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3856_, 0, v___x_3853_);
lean_ctor_set(v_reuseFailAlloc_3856_, 1, v_k_3712_);
lean_ctor_set(v_reuseFailAlloc_3856_, 2, v_v_3713_);
lean_ctor_set(v_reuseFailAlloc_3856_, 3, v_impl_3720_);
lean_ctor_set(v_reuseFailAlloc_3856_, 4, v_r_3824_);
v___x_3855_ = v_reuseFailAlloc_3856_;
goto v_reusejp_3854_;
}
v_reusejp_3854_:
{
return v___x_3855_;
}
}
}
}
}
case 1:
{
lean_object* v___x_3858_; 
lean_dec(v_v_3713_);
lean_dec(v_k_3712_);
if (v_isShared_3718_ == 0)
{
lean_ctor_set(v___x_3717_, 2, v_v_3709_);
lean_ctor_set(v___x_3717_, 1, v_k_3708_);
v___x_3858_ = v___x_3717_;
goto v_reusejp_3857_;
}
else
{
lean_object* v_reuseFailAlloc_3859_; 
v_reuseFailAlloc_3859_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3859_, 0, v_size_3711_);
lean_ctor_set(v_reuseFailAlloc_3859_, 1, v_k_3708_);
lean_ctor_set(v_reuseFailAlloc_3859_, 2, v_v_3709_);
lean_ctor_set(v_reuseFailAlloc_3859_, 3, v_l_3714_);
lean_ctor_set(v_reuseFailAlloc_3859_, 4, v_r_3715_);
v___x_3858_ = v_reuseFailAlloc_3859_;
goto v_reusejp_3857_;
}
v_reusejp_3857_:
{
return v___x_3858_;
}
}
default: 
{
lean_object* v_impl_3860_; lean_object* v___x_3861_; 
lean_dec(v_size_3711_);
v_impl_3860_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lake_Package_initFacetConfigs_spec__0___redArg(v_k_3708_, v_v_3709_, v_r_3715_);
v___x_3861_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_l_3714_) == 0)
{
lean_object* v_size_3862_; lean_object* v_size_3863_; lean_object* v_k_3864_; lean_object* v_v_3865_; lean_object* v_l_3866_; lean_object* v_r_3867_; lean_object* v___x_3868_; lean_object* v___x_3869_; uint8_t v___x_3870_; 
v_size_3862_ = lean_ctor_get(v_l_3714_, 0);
v_size_3863_ = lean_ctor_get(v_impl_3860_, 0);
lean_inc(v_size_3863_);
v_k_3864_ = lean_ctor_get(v_impl_3860_, 1);
lean_inc(v_k_3864_);
v_v_3865_ = lean_ctor_get(v_impl_3860_, 2);
lean_inc(v_v_3865_);
v_l_3866_ = lean_ctor_get(v_impl_3860_, 3);
lean_inc(v_l_3866_);
v_r_3867_ = lean_ctor_get(v_impl_3860_, 4);
lean_inc(v_r_3867_);
v___x_3868_ = lean_unsigned_to_nat(3u);
v___x_3869_ = lean_nat_mul(v___x_3868_, v_size_3862_);
v___x_3870_ = lean_nat_dec_lt(v___x_3869_, v_size_3863_);
lean_dec(v___x_3869_);
if (v___x_3870_ == 0)
{
lean_object* v___x_3871_; lean_object* v___x_3872_; lean_object* v___x_3874_; 
lean_dec(v_r_3867_);
lean_dec(v_l_3866_);
lean_dec(v_v_3865_);
lean_dec(v_k_3864_);
v___x_3871_ = lean_nat_add(v___x_3861_, v_size_3862_);
v___x_3872_ = lean_nat_add(v___x_3871_, v_size_3863_);
lean_dec(v_size_3863_);
lean_dec(v___x_3871_);
if (v_isShared_3718_ == 0)
{
lean_ctor_set(v___x_3717_, 4, v_impl_3860_);
lean_ctor_set(v___x_3717_, 0, v___x_3872_);
v___x_3874_ = v___x_3717_;
goto v_reusejp_3873_;
}
else
{
lean_object* v_reuseFailAlloc_3875_; 
v_reuseFailAlloc_3875_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3875_, 0, v___x_3872_);
lean_ctor_set(v_reuseFailAlloc_3875_, 1, v_k_3712_);
lean_ctor_set(v_reuseFailAlloc_3875_, 2, v_v_3713_);
lean_ctor_set(v_reuseFailAlloc_3875_, 3, v_l_3714_);
lean_ctor_set(v_reuseFailAlloc_3875_, 4, v_impl_3860_);
v___x_3874_ = v_reuseFailAlloc_3875_;
goto v_reusejp_3873_;
}
v_reusejp_3873_:
{
return v___x_3874_;
}
}
else
{
lean_object* v___x_3877_; uint8_t v_isShared_3878_; uint8_t v_isSharedCheck_3939_; 
v_isSharedCheck_3939_ = !lean_is_exclusive(v_impl_3860_);
if (v_isSharedCheck_3939_ == 0)
{
lean_object* v_unused_3940_; lean_object* v_unused_3941_; lean_object* v_unused_3942_; lean_object* v_unused_3943_; lean_object* v_unused_3944_; 
v_unused_3940_ = lean_ctor_get(v_impl_3860_, 4);
lean_dec(v_unused_3940_);
v_unused_3941_ = lean_ctor_get(v_impl_3860_, 3);
lean_dec(v_unused_3941_);
v_unused_3942_ = lean_ctor_get(v_impl_3860_, 2);
lean_dec(v_unused_3942_);
v_unused_3943_ = lean_ctor_get(v_impl_3860_, 1);
lean_dec(v_unused_3943_);
v_unused_3944_ = lean_ctor_get(v_impl_3860_, 0);
lean_dec(v_unused_3944_);
v___x_3877_ = v_impl_3860_;
v_isShared_3878_ = v_isSharedCheck_3939_;
goto v_resetjp_3876_;
}
else
{
lean_dec(v_impl_3860_);
v___x_3877_ = lean_box(0);
v_isShared_3878_ = v_isSharedCheck_3939_;
goto v_resetjp_3876_;
}
v_resetjp_3876_:
{
lean_object* v_size_3879_; lean_object* v_k_3880_; lean_object* v_v_3881_; lean_object* v_l_3882_; lean_object* v_r_3883_; lean_object* v_size_3884_; lean_object* v___x_3885_; lean_object* v___x_3886_; uint8_t v___x_3887_; 
v_size_3879_ = lean_ctor_get(v_l_3866_, 0);
v_k_3880_ = lean_ctor_get(v_l_3866_, 1);
v_v_3881_ = lean_ctor_get(v_l_3866_, 2);
v_l_3882_ = lean_ctor_get(v_l_3866_, 3);
v_r_3883_ = lean_ctor_get(v_l_3866_, 4);
v_size_3884_ = lean_ctor_get(v_r_3867_, 0);
v___x_3885_ = lean_unsigned_to_nat(2u);
v___x_3886_ = lean_nat_mul(v___x_3885_, v_size_3884_);
v___x_3887_ = lean_nat_dec_lt(v_size_3879_, v___x_3886_);
lean_dec(v___x_3886_);
if (v___x_3887_ == 0)
{
lean_object* v___x_3889_; uint8_t v_isShared_3890_; uint8_t v_isSharedCheck_3915_; 
lean_inc(v_r_3883_);
lean_inc(v_l_3882_);
lean_inc(v_v_3881_);
lean_inc(v_k_3880_);
v_isSharedCheck_3915_ = !lean_is_exclusive(v_l_3866_);
if (v_isSharedCheck_3915_ == 0)
{
lean_object* v_unused_3916_; lean_object* v_unused_3917_; lean_object* v_unused_3918_; lean_object* v_unused_3919_; lean_object* v_unused_3920_; 
v_unused_3916_ = lean_ctor_get(v_l_3866_, 4);
lean_dec(v_unused_3916_);
v_unused_3917_ = lean_ctor_get(v_l_3866_, 3);
lean_dec(v_unused_3917_);
v_unused_3918_ = lean_ctor_get(v_l_3866_, 2);
lean_dec(v_unused_3918_);
v_unused_3919_ = lean_ctor_get(v_l_3866_, 1);
lean_dec(v_unused_3919_);
v_unused_3920_ = lean_ctor_get(v_l_3866_, 0);
lean_dec(v_unused_3920_);
v___x_3889_ = v_l_3866_;
v_isShared_3890_ = v_isSharedCheck_3915_;
goto v_resetjp_3888_;
}
else
{
lean_dec(v_l_3866_);
v___x_3889_ = lean_box(0);
v_isShared_3890_ = v_isSharedCheck_3915_;
goto v_resetjp_3888_;
}
v_resetjp_3888_:
{
lean_object* v___x_3891_; lean_object* v___x_3892_; lean_object* v___y_3894_; lean_object* v___y_3895_; lean_object* v___y_3896_; lean_object* v___y_3905_; 
v___x_3891_ = lean_nat_add(v___x_3861_, v_size_3862_);
v___x_3892_ = lean_nat_add(v___x_3891_, v_size_3863_);
lean_dec(v_size_3863_);
if (lean_obj_tag(v_l_3882_) == 0)
{
lean_object* v_size_3913_; 
v_size_3913_ = lean_ctor_get(v_l_3882_, 0);
lean_inc(v_size_3913_);
v___y_3905_ = v_size_3913_;
goto v___jp_3904_;
}
else
{
lean_object* v___x_3914_; 
v___x_3914_ = lean_unsigned_to_nat(0u);
v___y_3905_ = v___x_3914_;
goto v___jp_3904_;
}
v___jp_3893_:
{
lean_object* v___x_3897_; lean_object* v___x_3899_; 
v___x_3897_ = lean_nat_add(v___y_3895_, v___y_3896_);
lean_dec(v___y_3896_);
lean_dec(v___y_3895_);
if (v_isShared_3890_ == 0)
{
lean_ctor_set(v___x_3889_, 4, v_r_3867_);
lean_ctor_set(v___x_3889_, 3, v_r_3883_);
lean_ctor_set(v___x_3889_, 2, v_v_3865_);
lean_ctor_set(v___x_3889_, 1, v_k_3864_);
lean_ctor_set(v___x_3889_, 0, v___x_3897_);
v___x_3899_ = v___x_3889_;
goto v_reusejp_3898_;
}
else
{
lean_object* v_reuseFailAlloc_3903_; 
v_reuseFailAlloc_3903_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3903_, 0, v___x_3897_);
lean_ctor_set(v_reuseFailAlloc_3903_, 1, v_k_3864_);
lean_ctor_set(v_reuseFailAlloc_3903_, 2, v_v_3865_);
lean_ctor_set(v_reuseFailAlloc_3903_, 3, v_r_3883_);
lean_ctor_set(v_reuseFailAlloc_3903_, 4, v_r_3867_);
v___x_3899_ = v_reuseFailAlloc_3903_;
goto v_reusejp_3898_;
}
v_reusejp_3898_:
{
lean_object* v___x_3901_; 
if (v_isShared_3878_ == 0)
{
lean_ctor_set(v___x_3877_, 4, v___x_3899_);
lean_ctor_set(v___x_3877_, 3, v___y_3894_);
lean_ctor_set(v___x_3877_, 2, v_v_3881_);
lean_ctor_set(v___x_3877_, 1, v_k_3880_);
lean_ctor_set(v___x_3877_, 0, v___x_3892_);
v___x_3901_ = v___x_3877_;
goto v_reusejp_3900_;
}
else
{
lean_object* v_reuseFailAlloc_3902_; 
v_reuseFailAlloc_3902_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3902_, 0, v___x_3892_);
lean_ctor_set(v_reuseFailAlloc_3902_, 1, v_k_3880_);
lean_ctor_set(v_reuseFailAlloc_3902_, 2, v_v_3881_);
lean_ctor_set(v_reuseFailAlloc_3902_, 3, v___y_3894_);
lean_ctor_set(v_reuseFailAlloc_3902_, 4, v___x_3899_);
v___x_3901_ = v_reuseFailAlloc_3902_;
goto v_reusejp_3900_;
}
v_reusejp_3900_:
{
return v___x_3901_;
}
}
}
v___jp_3904_:
{
lean_object* v___x_3906_; lean_object* v___x_3908_; 
v___x_3906_ = lean_nat_add(v___x_3891_, v___y_3905_);
lean_dec(v___y_3905_);
lean_dec(v___x_3891_);
if (v_isShared_3718_ == 0)
{
lean_ctor_set(v___x_3717_, 4, v_l_3882_);
lean_ctor_set(v___x_3717_, 0, v___x_3906_);
v___x_3908_ = v___x_3717_;
goto v_reusejp_3907_;
}
else
{
lean_object* v_reuseFailAlloc_3912_; 
v_reuseFailAlloc_3912_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3912_, 0, v___x_3906_);
lean_ctor_set(v_reuseFailAlloc_3912_, 1, v_k_3712_);
lean_ctor_set(v_reuseFailAlloc_3912_, 2, v_v_3713_);
lean_ctor_set(v_reuseFailAlloc_3912_, 3, v_l_3714_);
lean_ctor_set(v_reuseFailAlloc_3912_, 4, v_l_3882_);
v___x_3908_ = v_reuseFailAlloc_3912_;
goto v_reusejp_3907_;
}
v_reusejp_3907_:
{
lean_object* v___x_3909_; 
v___x_3909_ = lean_nat_add(v___x_3861_, v_size_3884_);
if (lean_obj_tag(v_r_3883_) == 0)
{
lean_object* v_size_3910_; 
v_size_3910_ = lean_ctor_get(v_r_3883_, 0);
lean_inc(v_size_3910_);
v___y_3894_ = v___x_3908_;
v___y_3895_ = v___x_3909_;
v___y_3896_ = v_size_3910_;
goto v___jp_3893_;
}
else
{
lean_object* v___x_3911_; 
v___x_3911_ = lean_unsigned_to_nat(0u);
v___y_3894_ = v___x_3908_;
v___y_3895_ = v___x_3909_;
v___y_3896_ = v___x_3911_;
goto v___jp_3893_;
}
}
}
}
}
else
{
lean_object* v___x_3921_; lean_object* v___x_3922_; lean_object* v___x_3923_; lean_object* v___x_3925_; 
lean_del_object(v___x_3717_);
v___x_3921_ = lean_nat_add(v___x_3861_, v_size_3862_);
v___x_3922_ = lean_nat_add(v___x_3921_, v_size_3863_);
lean_dec(v_size_3863_);
v___x_3923_ = lean_nat_add(v___x_3921_, v_size_3879_);
lean_dec(v___x_3921_);
lean_inc_ref(v_l_3714_);
if (v_isShared_3878_ == 0)
{
lean_ctor_set(v___x_3877_, 4, v_l_3866_);
lean_ctor_set(v___x_3877_, 3, v_l_3714_);
lean_ctor_set(v___x_3877_, 2, v_v_3713_);
lean_ctor_set(v___x_3877_, 1, v_k_3712_);
lean_ctor_set(v___x_3877_, 0, v___x_3923_);
v___x_3925_ = v___x_3877_;
goto v_reusejp_3924_;
}
else
{
lean_object* v_reuseFailAlloc_3938_; 
v_reuseFailAlloc_3938_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3938_, 0, v___x_3923_);
lean_ctor_set(v_reuseFailAlloc_3938_, 1, v_k_3712_);
lean_ctor_set(v_reuseFailAlloc_3938_, 2, v_v_3713_);
lean_ctor_set(v_reuseFailAlloc_3938_, 3, v_l_3714_);
lean_ctor_set(v_reuseFailAlloc_3938_, 4, v_l_3866_);
v___x_3925_ = v_reuseFailAlloc_3938_;
goto v_reusejp_3924_;
}
v_reusejp_3924_:
{
lean_object* v___x_3927_; uint8_t v_isShared_3928_; uint8_t v_isSharedCheck_3932_; 
v_isSharedCheck_3932_ = !lean_is_exclusive(v_l_3714_);
if (v_isSharedCheck_3932_ == 0)
{
lean_object* v_unused_3933_; lean_object* v_unused_3934_; lean_object* v_unused_3935_; lean_object* v_unused_3936_; lean_object* v_unused_3937_; 
v_unused_3933_ = lean_ctor_get(v_l_3714_, 4);
lean_dec(v_unused_3933_);
v_unused_3934_ = lean_ctor_get(v_l_3714_, 3);
lean_dec(v_unused_3934_);
v_unused_3935_ = lean_ctor_get(v_l_3714_, 2);
lean_dec(v_unused_3935_);
v_unused_3936_ = lean_ctor_get(v_l_3714_, 1);
lean_dec(v_unused_3936_);
v_unused_3937_ = lean_ctor_get(v_l_3714_, 0);
lean_dec(v_unused_3937_);
v___x_3927_ = v_l_3714_;
v_isShared_3928_ = v_isSharedCheck_3932_;
goto v_resetjp_3926_;
}
else
{
lean_dec(v_l_3714_);
v___x_3927_ = lean_box(0);
v_isShared_3928_ = v_isSharedCheck_3932_;
goto v_resetjp_3926_;
}
v_resetjp_3926_:
{
lean_object* v___x_3930_; 
if (v_isShared_3928_ == 0)
{
lean_ctor_set(v___x_3927_, 4, v_r_3867_);
lean_ctor_set(v___x_3927_, 3, v___x_3925_);
lean_ctor_set(v___x_3927_, 2, v_v_3865_);
lean_ctor_set(v___x_3927_, 1, v_k_3864_);
lean_ctor_set(v___x_3927_, 0, v___x_3922_);
v___x_3930_ = v___x_3927_;
goto v_reusejp_3929_;
}
else
{
lean_object* v_reuseFailAlloc_3931_; 
v_reuseFailAlloc_3931_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3931_, 0, v___x_3922_);
lean_ctor_set(v_reuseFailAlloc_3931_, 1, v_k_3864_);
lean_ctor_set(v_reuseFailAlloc_3931_, 2, v_v_3865_);
lean_ctor_set(v_reuseFailAlloc_3931_, 3, v___x_3925_);
lean_ctor_set(v_reuseFailAlloc_3931_, 4, v_r_3867_);
v___x_3930_ = v_reuseFailAlloc_3931_;
goto v_reusejp_3929_;
}
v_reusejp_3929_:
{
return v___x_3930_;
}
}
}
}
}
}
}
else
{
lean_object* v_l_3945_; 
v_l_3945_ = lean_ctor_get(v_impl_3860_, 3);
lean_inc(v_l_3945_);
if (lean_obj_tag(v_l_3945_) == 0)
{
lean_object* v_r_3946_; lean_object* v_k_3947_; lean_object* v_v_3948_; lean_object* v___x_3950_; uint8_t v_isShared_3951_; uint8_t v_isSharedCheck_3971_; 
v_r_3946_ = lean_ctor_get(v_impl_3860_, 4);
v_k_3947_ = lean_ctor_get(v_impl_3860_, 1);
v_v_3948_ = lean_ctor_get(v_impl_3860_, 2);
v_isSharedCheck_3971_ = !lean_is_exclusive(v_impl_3860_);
if (v_isSharedCheck_3971_ == 0)
{
lean_object* v_unused_3972_; lean_object* v_unused_3973_; 
v_unused_3972_ = lean_ctor_get(v_impl_3860_, 3);
lean_dec(v_unused_3972_);
v_unused_3973_ = lean_ctor_get(v_impl_3860_, 0);
lean_dec(v_unused_3973_);
v___x_3950_ = v_impl_3860_;
v_isShared_3951_ = v_isSharedCheck_3971_;
goto v_resetjp_3949_;
}
else
{
lean_inc(v_r_3946_);
lean_inc(v_v_3948_);
lean_inc(v_k_3947_);
lean_dec(v_impl_3860_);
v___x_3950_ = lean_box(0);
v_isShared_3951_ = v_isSharedCheck_3971_;
goto v_resetjp_3949_;
}
v_resetjp_3949_:
{
lean_object* v_k_3952_; lean_object* v_v_3953_; lean_object* v___x_3955_; uint8_t v_isShared_3956_; uint8_t v_isSharedCheck_3967_; 
v_k_3952_ = lean_ctor_get(v_l_3945_, 1);
v_v_3953_ = lean_ctor_get(v_l_3945_, 2);
v_isSharedCheck_3967_ = !lean_is_exclusive(v_l_3945_);
if (v_isSharedCheck_3967_ == 0)
{
lean_object* v_unused_3968_; lean_object* v_unused_3969_; lean_object* v_unused_3970_; 
v_unused_3968_ = lean_ctor_get(v_l_3945_, 4);
lean_dec(v_unused_3968_);
v_unused_3969_ = lean_ctor_get(v_l_3945_, 3);
lean_dec(v_unused_3969_);
v_unused_3970_ = lean_ctor_get(v_l_3945_, 0);
lean_dec(v_unused_3970_);
v___x_3955_ = v_l_3945_;
v_isShared_3956_ = v_isSharedCheck_3967_;
goto v_resetjp_3954_;
}
else
{
lean_inc(v_v_3953_);
lean_inc(v_k_3952_);
lean_dec(v_l_3945_);
v___x_3955_ = lean_box(0);
v_isShared_3956_ = v_isSharedCheck_3967_;
goto v_resetjp_3954_;
}
v_resetjp_3954_:
{
lean_object* v___x_3957_; lean_object* v___x_3959_; 
v___x_3957_ = lean_unsigned_to_nat(3u);
lean_inc_n(v_r_3946_, 2);
if (v_isShared_3956_ == 0)
{
lean_ctor_set(v___x_3955_, 4, v_r_3946_);
lean_ctor_set(v___x_3955_, 3, v_r_3946_);
lean_ctor_set(v___x_3955_, 2, v_v_3713_);
lean_ctor_set(v___x_3955_, 1, v_k_3712_);
lean_ctor_set(v___x_3955_, 0, v___x_3861_);
v___x_3959_ = v___x_3955_;
goto v_reusejp_3958_;
}
else
{
lean_object* v_reuseFailAlloc_3966_; 
v_reuseFailAlloc_3966_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3966_, 0, v___x_3861_);
lean_ctor_set(v_reuseFailAlloc_3966_, 1, v_k_3712_);
lean_ctor_set(v_reuseFailAlloc_3966_, 2, v_v_3713_);
lean_ctor_set(v_reuseFailAlloc_3966_, 3, v_r_3946_);
lean_ctor_set(v_reuseFailAlloc_3966_, 4, v_r_3946_);
v___x_3959_ = v_reuseFailAlloc_3966_;
goto v_reusejp_3958_;
}
v_reusejp_3958_:
{
lean_object* v___x_3961_; 
lean_inc(v_r_3946_);
if (v_isShared_3951_ == 0)
{
lean_ctor_set(v___x_3950_, 3, v_r_3946_);
lean_ctor_set(v___x_3950_, 0, v___x_3861_);
v___x_3961_ = v___x_3950_;
goto v_reusejp_3960_;
}
else
{
lean_object* v_reuseFailAlloc_3965_; 
v_reuseFailAlloc_3965_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3965_, 0, v___x_3861_);
lean_ctor_set(v_reuseFailAlloc_3965_, 1, v_k_3947_);
lean_ctor_set(v_reuseFailAlloc_3965_, 2, v_v_3948_);
lean_ctor_set(v_reuseFailAlloc_3965_, 3, v_r_3946_);
lean_ctor_set(v_reuseFailAlloc_3965_, 4, v_r_3946_);
v___x_3961_ = v_reuseFailAlloc_3965_;
goto v_reusejp_3960_;
}
v_reusejp_3960_:
{
lean_object* v___x_3963_; 
if (v_isShared_3718_ == 0)
{
lean_ctor_set(v___x_3717_, 4, v___x_3961_);
lean_ctor_set(v___x_3717_, 3, v___x_3959_);
lean_ctor_set(v___x_3717_, 2, v_v_3953_);
lean_ctor_set(v___x_3717_, 1, v_k_3952_);
lean_ctor_set(v___x_3717_, 0, v___x_3957_);
v___x_3963_ = v___x_3717_;
goto v_reusejp_3962_;
}
else
{
lean_object* v_reuseFailAlloc_3964_; 
v_reuseFailAlloc_3964_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3964_, 0, v___x_3957_);
lean_ctor_set(v_reuseFailAlloc_3964_, 1, v_k_3952_);
lean_ctor_set(v_reuseFailAlloc_3964_, 2, v_v_3953_);
lean_ctor_set(v_reuseFailAlloc_3964_, 3, v___x_3959_);
lean_ctor_set(v_reuseFailAlloc_3964_, 4, v___x_3961_);
v___x_3963_ = v_reuseFailAlloc_3964_;
goto v_reusejp_3962_;
}
v_reusejp_3962_:
{
return v___x_3963_;
}
}
}
}
}
}
else
{
lean_object* v_r_3974_; 
v_r_3974_ = lean_ctor_get(v_impl_3860_, 4);
lean_inc(v_r_3974_);
if (lean_obj_tag(v_r_3974_) == 0)
{
lean_object* v_k_3975_; lean_object* v_v_3976_; lean_object* v___x_3978_; uint8_t v_isShared_3979_; uint8_t v_isSharedCheck_3987_; 
v_k_3975_ = lean_ctor_get(v_impl_3860_, 1);
v_v_3976_ = lean_ctor_get(v_impl_3860_, 2);
v_isSharedCheck_3987_ = !lean_is_exclusive(v_impl_3860_);
if (v_isSharedCheck_3987_ == 0)
{
lean_object* v_unused_3988_; lean_object* v_unused_3989_; lean_object* v_unused_3990_; 
v_unused_3988_ = lean_ctor_get(v_impl_3860_, 4);
lean_dec(v_unused_3988_);
v_unused_3989_ = lean_ctor_get(v_impl_3860_, 3);
lean_dec(v_unused_3989_);
v_unused_3990_ = lean_ctor_get(v_impl_3860_, 0);
lean_dec(v_unused_3990_);
v___x_3978_ = v_impl_3860_;
v_isShared_3979_ = v_isSharedCheck_3987_;
goto v_resetjp_3977_;
}
else
{
lean_inc(v_v_3976_);
lean_inc(v_k_3975_);
lean_dec(v_impl_3860_);
v___x_3978_ = lean_box(0);
v_isShared_3979_ = v_isSharedCheck_3987_;
goto v_resetjp_3977_;
}
v_resetjp_3977_:
{
lean_object* v___x_3980_; lean_object* v___x_3982_; 
v___x_3980_ = lean_unsigned_to_nat(3u);
if (v_isShared_3979_ == 0)
{
lean_ctor_set(v___x_3978_, 4, v_l_3945_);
lean_ctor_set(v___x_3978_, 2, v_v_3713_);
lean_ctor_set(v___x_3978_, 1, v_k_3712_);
lean_ctor_set(v___x_3978_, 0, v___x_3861_);
v___x_3982_ = v___x_3978_;
goto v_reusejp_3981_;
}
else
{
lean_object* v_reuseFailAlloc_3986_; 
v_reuseFailAlloc_3986_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3986_, 0, v___x_3861_);
lean_ctor_set(v_reuseFailAlloc_3986_, 1, v_k_3712_);
lean_ctor_set(v_reuseFailAlloc_3986_, 2, v_v_3713_);
lean_ctor_set(v_reuseFailAlloc_3986_, 3, v_l_3945_);
lean_ctor_set(v_reuseFailAlloc_3986_, 4, v_l_3945_);
v___x_3982_ = v_reuseFailAlloc_3986_;
goto v_reusejp_3981_;
}
v_reusejp_3981_:
{
lean_object* v___x_3984_; 
if (v_isShared_3718_ == 0)
{
lean_ctor_set(v___x_3717_, 4, v_r_3974_);
lean_ctor_set(v___x_3717_, 3, v___x_3982_);
lean_ctor_set(v___x_3717_, 2, v_v_3976_);
lean_ctor_set(v___x_3717_, 1, v_k_3975_);
lean_ctor_set(v___x_3717_, 0, v___x_3980_);
v___x_3984_ = v___x_3717_;
goto v_reusejp_3983_;
}
else
{
lean_object* v_reuseFailAlloc_3985_; 
v_reuseFailAlloc_3985_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3985_, 0, v___x_3980_);
lean_ctor_set(v_reuseFailAlloc_3985_, 1, v_k_3975_);
lean_ctor_set(v_reuseFailAlloc_3985_, 2, v_v_3976_);
lean_ctor_set(v_reuseFailAlloc_3985_, 3, v___x_3982_);
lean_ctor_set(v_reuseFailAlloc_3985_, 4, v_r_3974_);
v___x_3984_ = v_reuseFailAlloc_3985_;
goto v_reusejp_3983_;
}
v_reusejp_3983_:
{
return v___x_3984_;
}
}
}
}
else
{
lean_object* v___x_3991_; lean_object* v___x_3993_; 
v___x_3991_ = lean_unsigned_to_nat(2u);
if (v_isShared_3718_ == 0)
{
lean_ctor_set(v___x_3717_, 4, v_impl_3860_);
lean_ctor_set(v___x_3717_, 3, v_r_3974_);
lean_ctor_set(v___x_3717_, 0, v___x_3991_);
v___x_3993_ = v___x_3717_;
goto v_reusejp_3992_;
}
else
{
lean_object* v_reuseFailAlloc_3994_; 
v_reuseFailAlloc_3994_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3994_, 0, v___x_3991_);
lean_ctor_set(v_reuseFailAlloc_3994_, 1, v_k_3712_);
lean_ctor_set(v_reuseFailAlloc_3994_, 2, v_v_3713_);
lean_ctor_set(v_reuseFailAlloc_3994_, 3, v_r_3974_);
lean_ctor_set(v_reuseFailAlloc_3994_, 4, v_impl_3860_);
v___x_3993_ = v_reuseFailAlloc_3994_;
goto v_reusejp_3992_;
}
v_reusejp_3992_:
{
return v___x_3993_;
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
lean_object* v___x_3996_; lean_object* v___x_3997_; 
v___x_3996_ = lean_unsigned_to_nat(1u);
v___x_3997_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_3997_, 0, v___x_3996_);
lean_ctor_set(v___x_3997_, 1, v_k_3708_);
lean_ctor_set(v___x_3997_, 2, v_v_3709_);
lean_ctor_set(v___x_3997_, 3, v_t_3710_);
lean_ctor_set(v___x_3997_, 4, v_t_3710_);
return v___x_3997_;
}
}
}
static lean_object* _init_l_Lake_Package_initFacetConfigs___closed__0(void){
_start:
{
lean_object* v___x_3998_; lean_object* v___x_3999_; lean_object* v___x_4000_; lean_object* v___x_4001_; 
v___x_3998_ = lean_box(1);
v___x_3999_ = l_Lake_Package_depsFacetConfig;
v___x_4000_ = l_Lake_Package_depsFacet;
v___x_4001_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lake_Package_initFacetConfigs_spec__0___redArg(v___x_4000_, v___x_3999_, v___x_3998_);
return v___x_4001_;
}
}
static lean_object* _init_l_Lake_Package_initFacetConfigs___closed__1(void){
_start:
{
lean_object* v___x_4002_; lean_object* v___x_4003_; lean_object* v___x_4004_; lean_object* v___x_4005_; 
v___x_4002_ = lean_obj_once(&l_Lake_Package_initFacetConfigs___closed__0, &l_Lake_Package_initFacetConfigs___closed__0_once, _init_l_Lake_Package_initFacetConfigs___closed__0);
v___x_4003_ = l_Lake_Package_transDepsFacetConfig;
v___x_4004_ = l_Lake_Package_transDepsFacet;
v___x_4005_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lake_Package_initFacetConfigs_spec__0___redArg(v___x_4004_, v___x_4003_, v___x_4002_);
return v___x_4005_;
}
}
static lean_object* _init_l_Lake_Package_initFacetConfigs___closed__2(void){
_start:
{
lean_object* v___x_4006_; lean_object* v___x_4007_; lean_object* v___x_4008_; lean_object* v___x_4009_; 
v___x_4006_ = lean_obj_once(&l_Lake_Package_initFacetConfigs___closed__1, &l_Lake_Package_initFacetConfigs___closed__1_once, _init_l_Lake_Package_initFacetConfigs___closed__1);
v___x_4007_ = l_Lake_Package_defaultModulesFacetConfig;
v___x_4008_ = l_Lake_Package_defaultModulesFacet;
v___x_4009_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lake_Package_initFacetConfigs_spec__0___redArg(v___x_4008_, v___x_4007_, v___x_4006_);
return v___x_4009_;
}
}
static lean_object* _init_l_Lake_Package_initFacetConfigs___closed__3(void){
_start:
{
lean_object* v___x_4010_; lean_object* v___x_4011_; lean_object* v___x_4012_; lean_object* v___x_4013_; 
v___x_4010_ = lean_obj_once(&l_Lake_Package_initFacetConfigs___closed__2, &l_Lake_Package_initFacetConfigs___closed__2_once, _init_l_Lake_Package_initFacetConfigs___closed__2);
v___x_4011_ = l_Lake_Package_extraDepFacetConfig;
v___x_4012_ = l_Lake_Package_extraDepFacet;
v___x_4013_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lake_Package_initFacetConfigs_spec__0___redArg(v___x_4012_, v___x_4011_, v___x_4010_);
return v___x_4013_;
}
}
static lean_object* _init_l_Lake_Package_initFacetConfigs___closed__4(void){
_start:
{
lean_object* v___x_4014_; lean_object* v___x_4015_; lean_object* v___x_4016_; lean_object* v___x_4017_; 
v___x_4014_ = lean_obj_once(&l_Lake_Package_initFacetConfigs___closed__3, &l_Lake_Package_initFacetConfigs___closed__3_once, _init_l_Lake_Package_initFacetConfigs___closed__3);
v___x_4015_ = l_Lake_Package_optBuildCacheFacetConfig;
v___x_4016_ = l_Lake_Package_optBuildCacheFacet;
v___x_4017_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lake_Package_initFacetConfigs_spec__0___redArg(v___x_4016_, v___x_4015_, v___x_4014_);
return v___x_4017_;
}
}
static lean_object* _init_l_Lake_Package_initFacetConfigs___closed__5(void){
_start:
{
lean_object* v___x_4018_; lean_object* v___x_4019_; lean_object* v___x_4020_; lean_object* v___x_4021_; 
v___x_4018_ = lean_obj_once(&l_Lake_Package_initFacetConfigs___closed__4, &l_Lake_Package_initFacetConfigs___closed__4_once, _init_l_Lake_Package_initFacetConfigs___closed__4);
v___x_4019_ = l_Lake_Package_buildCacheFacetConfig;
v___x_4020_ = l_Lake_Package_buildCacheFacet;
v___x_4021_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lake_Package_initFacetConfigs_spec__0___redArg(v___x_4020_, v___x_4019_, v___x_4018_);
return v___x_4021_;
}
}
static lean_object* _init_l_Lake_Package_initFacetConfigs___closed__6(void){
_start:
{
lean_object* v___x_4022_; lean_object* v___x_4023_; lean_object* v___x_4024_; lean_object* v___x_4025_; 
v___x_4022_ = lean_obj_once(&l_Lake_Package_initFacetConfigs___closed__5, &l_Lake_Package_initFacetConfigs___closed__5_once, _init_l_Lake_Package_initFacetConfigs___closed__5);
v___x_4023_ = l_Lake_Package_optBarrelFacetConfig;
v___x_4024_ = l_Lake_Package_optReservoirBarrelFacet;
v___x_4025_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lake_Package_initFacetConfigs_spec__0___redArg(v___x_4024_, v___x_4023_, v___x_4022_);
return v___x_4025_;
}
}
static lean_object* _init_l_Lake_Package_initFacetConfigs___closed__7(void){
_start:
{
lean_object* v___x_4026_; lean_object* v___x_4027_; lean_object* v___x_4028_; lean_object* v___x_4029_; 
v___x_4026_ = lean_obj_once(&l_Lake_Package_initFacetConfigs___closed__6, &l_Lake_Package_initFacetConfigs___closed__6_once, _init_l_Lake_Package_initFacetConfigs___closed__6);
v___x_4027_ = l_Lake_Package_barrelFacetConfig;
v___x_4028_ = l_Lake_Package_reservoirBarrelFacet;
v___x_4029_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lake_Package_initFacetConfigs_spec__0___redArg(v___x_4028_, v___x_4027_, v___x_4026_);
return v___x_4029_;
}
}
static lean_object* _init_l_Lake_Package_initFacetConfigs___closed__8(void){
_start:
{
lean_object* v___x_4030_; lean_object* v___x_4031_; lean_object* v___x_4032_; lean_object* v___x_4033_; 
v___x_4030_ = lean_obj_once(&l_Lake_Package_initFacetConfigs___closed__7, &l_Lake_Package_initFacetConfigs___closed__7_once, _init_l_Lake_Package_initFacetConfigs___closed__7);
v___x_4031_ = l_Lake_Package_optGitHubReleaseFacetConfig;
v___x_4032_ = l_Lake_Package_optGitHubReleaseFacet;
v___x_4033_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lake_Package_initFacetConfigs_spec__0___redArg(v___x_4032_, v___x_4031_, v___x_4030_);
return v___x_4033_;
}
}
static lean_object* _init_l_Lake_Package_initFacetConfigs___closed__9(void){
_start:
{
lean_object* v___x_4034_; lean_object* v___x_4035_; lean_object* v___x_4036_; lean_object* v___x_4037_; 
v___x_4034_ = lean_obj_once(&l_Lake_Package_initFacetConfigs___closed__8, &l_Lake_Package_initFacetConfigs___closed__8_once, _init_l_Lake_Package_initFacetConfigs___closed__8);
v___x_4035_ = l_Lake_Package_gitHubReleaseFacetConfig;
v___x_4036_ = l_Lake_Package_gitHubReleaseFacet;
v___x_4037_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lake_Package_initFacetConfigs_spec__0___redArg(v___x_4036_, v___x_4035_, v___x_4034_);
return v___x_4037_;
}
}
static lean_object* _init_l_Lake_Package_initFacetConfigs(void){
_start:
{
lean_object* v___x_4038_; 
v___x_4038_ = lean_obj_once(&l_Lake_Package_initFacetConfigs___closed__9, &l_Lake_Package_initFacetConfigs___closed__9_once, _init_l_Lake_Package_initFacetConfigs___closed__9);
return v___x_4038_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lake_Package_initFacetConfigs_spec__0(lean_object* v_00_u03b2_4039_, lean_object* v_k_4040_, lean_object* v_v_4041_, lean_object* v_t_4042_, lean_object* v_hl_4043_){
_start:
{
lean_object* v___x_4044_; 
v___x_4044_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lake_Package_initFacetConfigs_spec__0___redArg(v_k_4040_, v_v_4041_, v_t_4042_);
return v___x_4044_;
}
}
static lean_object* _init_l_Lake_initPackageFacetConfigs(void){
_start:
{
lean_object* v___x_4045_; 
v___x_4045_ = l_Lake_Package_initFacetConfigs;
return v___x_4045_;
}
}
lean_object* runtime_initialize_Lake_Config_FacetConfig(uint8_t builtin);
lean_object* runtime_initialize_Lake_Build_Job_Monad(uint8_t builtin);
lean_object* runtime_initialize_Lake_Build_Infos(uint8_t builtin);
lean_object* runtime_initialize_Lake_Util_Git(uint8_t builtin);
lean_object* runtime_initialize_Lake_Util_Url(uint8_t builtin);
lean_object* runtime_initialize_Lake_Build_Common(uint8_t builtin);
lean_object* runtime_initialize_Lake_Build_Targets(uint8_t builtin);
lean_object* runtime_initialize_Lake_Build_Job_Register(uint8_t builtin);
lean_object* runtime_initialize_Lake_Reservoir(uint8_t builtin);
void lean_initialize();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lake_Build_Package(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize();
res = runtime_initialize_Lake_Config_FacetConfig(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Build_Job_Monad(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Build_Infos(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Util_Git(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Util_Url(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Build_Common(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Build_Targets(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Build_Job_Register(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Reservoir(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lake_Package_depsFacetConfig = _init_l_Lake_Package_depsFacetConfig();
lean_mark_persistent(l_Lake_Package_depsFacetConfig);
l_Lake_OrdHashSet_empty___at___00__private_Lake_Build_Package_0__Lake_Package_recComputeTransDeps_spec__2 = _init_l_Lake_OrdHashSet_empty___at___00__private_Lake_Build_Package_0__Lake_Package_recComputeTransDeps_spec__2();
lean_mark_persistent(l_Lake_OrdHashSet_empty___at___00__private_Lake_Build_Package_0__Lake_Package_recComputeTransDeps_spec__2);
l_Lake_Package_defaultModulesFacetConfig = _init_l_Lake_Package_defaultModulesFacetConfig();
lean_mark_persistent(l_Lake_Package_defaultModulesFacetConfig);
l_Lake_Package_transDepsFacetConfig = _init_l_Lake_Package_transDepsFacetConfig();
lean_mark_persistent(l_Lake_Package_transDepsFacetConfig);
l_Lake_Package_optBuildCacheFacetConfig = _init_l_Lake_Package_optBuildCacheFacetConfig();
lean_mark_persistent(l_Lake_Package_optBuildCacheFacetConfig);
l_Lake_Package_extraDepFacetConfig = _init_l_Lake_Package_extraDepFacetConfig();
lean_mark_persistent(l_Lake_Package_extraDepFacetConfig);
l_Lake_Package_buildCacheFacetConfig = _init_l_Lake_Package_buildCacheFacetConfig();
lean_mark_persistent(l_Lake_Package_buildCacheFacetConfig);
l_Lake_Package_optBarrelFacetConfig = _init_l_Lake_Package_optBarrelFacetConfig();
lean_mark_persistent(l_Lake_Package_optBarrelFacetConfig);
l_Lake_Package_barrelFacetConfig = _init_l_Lake_Package_barrelFacetConfig();
lean_mark_persistent(l_Lake_Package_barrelFacetConfig);
l_Lake_Package_optGitHubReleaseFacetConfig = _init_l_Lake_Package_optGitHubReleaseFacetConfig();
lean_mark_persistent(l_Lake_Package_optGitHubReleaseFacetConfig);
l_Lake_Package_gitHubReleaseFacetConfig = _init_l_Lake_Package_gitHubReleaseFacetConfig();
lean_mark_persistent(l_Lake_Package_gitHubReleaseFacetConfig);
l_Lake_Package_initFacetConfigs = _init_l_Lake_Package_initFacetConfigs();
lean_mark_persistent(l_Lake_Package_initFacetConfigs);
l_Lake_initPackageFacetConfigs = _init_l_Lake_initPackageFacetConfigs();
lean_mark_persistent(l_Lake_initPackageFacetConfigs);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lake_Build_Package(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lake_Config_FacetConfig(uint8_t builtin);
lean_object* initialize_Lake_Build_Job_Monad(uint8_t builtin);
lean_object* initialize_Lake_Build_Infos(uint8_t builtin);
lean_object* initialize_Lake_Util_Git(uint8_t builtin);
lean_object* initialize_Lake_Util_Url(uint8_t builtin);
lean_object* initialize_Lake_Build_Common(uint8_t builtin);
lean_object* initialize_Lake_Build_Targets(uint8_t builtin);
lean_object* initialize_Lake_Build_Job_Register(uint8_t builtin);
lean_object* initialize_Lake_Reservoir(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lake_Build_Package(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lake_Config_FacetConfig(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Build_Job_Monad(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Build_Infos(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Util_Git(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Util_Url(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Build_Common(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Build_Targets(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Build_Job_Register(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Reservoir(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Build_Package(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lake_Build_Package(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lake_Build_Package(builtin);
}
#ifdef __cplusplus
}
#endif

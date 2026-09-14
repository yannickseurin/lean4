// Lean compiler output
// Module: Lake.Build.Library
// Imports: public import Lake.Config.FacetConfig import Lake.Build.Common import Lake.Build.Targets import Lake.Build.Job.Register import Lake.Build.Target.Fetch import Lake.Build.Infos import Lake.Util.Proc
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
extern lean_object* l_Lake_instDataKindFilePath;
lean_object* l_Lake_Verbosity_ctorIdx(uint8_t);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(lean_object*, uint8_t);
lean_object* lean_string_append(lean_object*, lean_object*);
extern lean_object* l_Lake_LeanLib_modulesFacet;
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* l_Lake_compileStaticLib(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
extern uint8_t l_System_Platform_isOSX;
extern uint8_t l_System_Platform_isWindows;
lean_object* l_Lake_createParentDirs(lean_object*);
lean_object* l_System_FilePath_addExtension(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lake_proc(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* lean_io_prim_handle_mk(lean_object*, uint8_t);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_io_prim_handle_put_str(lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_io_error_to_string(lean_object*);
lean_object* l_Lake_buildArtifactUnlessUpToDate(lean_object*, lean_object*, uint8_t, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* l_Lake_Job_collectArray___redArg(lean_object*, lean_object*);
lean_object* l_Lake_BuildTrace_nil(lean_object*);
lean_object* l_Lake_Job_mapM___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lake_PartialBuildKey_toString(lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
uint8_t l_Lean_Name_isAnonymous(lean_object*);
lean_object* l_System_FilePath_normalize(lean_object*);
lean_object* l_Lake_joinRelative(lean_object*, lean_object*);
lean_object* l_Lake_LeanLib_libName(lean_object*);
lean_object* l_Lake_nameToStaticLib(lean_object*, uint8_t);
lean_object* l_Lake_Job_await___redArg(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lake_ModuleFacet_fetch___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lake_ensureJob___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* l_Lake_Job_toOpaque___redArg(lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lake_Job_renew___redArg(lean_object*);
extern lean_object* l_Lake_instDataKindDynlib;
lean_object* l_Lake_nameToSharedLib(lean_object*, uint8_t);
uint8_t l_Lake_LeanLib_isPlugin(lean_object*);
lean_object* l_Lake_buildLeanSharedLib(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
extern lean_object* l_Lake_ExternLib_dynlibFacet;
extern lean_object* l_Lake_ExternLib_keyword;
extern lean_object* l_Lean_NameSet_empty;
lean_object* l_Lean_NameSet_insert(lean_object*, lean_object*);
uint8_t l_Lean_NameSet_contains(lean_object*, lean_object*);
extern lean_object* l_Lake_LeanLib_sharedFacet;
lean_object* lean_mk_array(lean_object*, lean_object*);
extern lean_object* l_Lake_Module_transImportsFacet;
extern lean_object* l_Lake_Module_keyword;
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
lean_object* lean_array_propagate_mark(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l_Lake_Target_fetchIn___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Json_compress(lean_object*);
extern lean_object* l_Lake_instDataKindUnit;
lean_object* l_Lake_Job_mixArray___redArg(lean_object*, lean_object*);
extern lean_object* l_Lake_LeanLib_defaultFacet;
uint8_t l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(lean_object*, lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
lean_object* l_String_Slice_Pos_prevn(lean_object*, lean_object*, lean_object*);
lean_object* lean_string_utf8_extract_fast(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_toString(lean_object*, uint8_t);
lean_object* l_Lake_OptDataKind_anonymous___redArg();
lean_object* l_Lake_LeanLib_getModuleArray(lean_object*);
extern lean_object* l_Lake_Module_importsFacet;
lean_object* lean_io_wait(lean_object*);
lean_object* lean_task_pure(lean_object*);
extern lean_object* l_Lake_Module_leanArtsFacet;
lean_object* l_Lake_Job_mix___redArg(lean_object*, lean_object*);
extern lean_object* l_Lake_LeanLib_leanArtsFacet;
lean_object* l_Lake_mkRelPathString(lean_object*);
extern lean_object* l_Lake_LeanLib_staticFacet;
extern lean_object* l_Lake_LeanLib_staticExportFacet;
extern lean_object* l_Lake_Package_extraDepFacet;
extern lean_object* l_Lake_Package_keyword;
lean_object* l_Lake_Package_fetchTargetJob(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lake_LeanLib_extraDepFacet;
lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
extern lean_object* l_instMonadBaseIO;
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
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__1_spec__2_spec__3_spec__5___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__1_spec__2_spec__3___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__1_spec__2___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__1_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__1_spec__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__1_spec__2_spec__3_spec__5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___lam__0___closed__0 = (const lean_object*)&l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___lam__0___closed__0_value;
static const lean_string_object l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "<nil>"};
static const lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___lam__0___closed__1 = (const lean_object*)&l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___lam__0___closed__1_value;
static lean_once_cell_t l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___lam__0___closed__2;
static const lean_string_object l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 53, .m_capacity = 53, .m_length = 52, .m_data = ": some modules have bad imports or could not be read"};
static const lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___lam__0___closed__3 = (const lean_object*)&l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___lam__0___closed__3_value;
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___closed__0;
static const lean_array_object l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___closed__1 = (const lean_object*)&l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___closed__1_value;
static lean_once_cell_t l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___closed__2;
static lean_once_cell_t l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___closed__3;
static lean_once_cell_t l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___closed__4;
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_formatQuery___at___00__private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "\n"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_formatQuery___at___00__private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig_spec__0_spec__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_formatQuery___at___00__private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig_spec__0_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_formatQuery___at___00__private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig_spec__0_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_formatQuery___at___00__private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lake_formatQuery___at___00__private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig_spec__0_spec__1_spec__2(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lake_formatQuery___at___00__private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig_spec__0_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Array_toJson___at___00Lake_formatQuery___at___00__private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig_spec__0_spec__1(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Array_toJson___at___00Lake_formatQuery___at___00__private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig_spec__0_spec__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_formatQuery___at___00__private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig_spec__0(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lake_formatQuery___at___00__private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig_spec__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l___private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_formatQuery___at___00__private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig_spec__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig___closed__0 = (const lean_object*)&l___private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig___closed__0_value;
static const lean_string_object l___private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "lean_lib"};
static const lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig___closed__1 = (const lean_object*)&l___private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig___closed__1_value;
static const lean_ctor_object l___private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig___closed__1_value),LEAN_SCALAR_PTR_LITERAL(99, 123, 8, 14, 20, 41, 164, 170)}};
static const lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig___closed__2 = (const lean_object*)&l___private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig___closed__2_value;
static const lean_closure_object l___private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___boxed, .m_arity = 8, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig___closed__3 = (const lean_object*)&l___private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig___closed__3_value;
static lean_once_cell_t l___private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig___closed__4;
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildLean_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildLean_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildLean___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildLean___closed__0 = (const lean_object*)&l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildLean___closed__0_value;
static lean_once_cell_t l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildLean___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildLean___closed__1;
static lean_once_cell_t l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildLean___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildLean___closed__2;
static lean_once_cell_t l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildLean___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildLean___closed__3;
static lean_once_cell_t l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildLean___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildLean___closed__4;
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildLean(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildLean___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lake_formatQuery___at___00Lake_LeanLib_leanArtsFacetConfig_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_formatQuery___at___00Lake_LeanLib_leanArtsFacetConfig_spec__0___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lake_formatQuery___at___00Lake_LeanLib_leanArtsFacetConfig_spec__0___redArg(uint8_t);
LEAN_EXPORT lean_object* l_Lake_formatQuery___at___00Lake_LeanLib_leanArtsFacetConfig_spec__0___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_formatQuery___at___00Lake_LeanLib_leanArtsFacetConfig_spec__0(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lake_formatQuery___at___00Lake_LeanLib_leanArtsFacetConfig_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanLib_leanArtsFacetConfig___lam__0(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanLib_leanArtsFacetConfig___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lake_LeanLib_leanArtsFacetConfig___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_LeanLib_leanArtsFacetConfig___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_LeanLib_leanArtsFacetConfig___closed__0 = (const lean_object*)&l_Lake_LeanLib_leanArtsFacetConfig___closed__0_value;
static const lean_closure_object l_Lake_LeanLib_leanArtsFacetConfig___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildLean___boxed, .m_arity = 8, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_LeanLib_leanArtsFacetConfig___closed__1 = (const lean_object*)&l_Lake_LeanLib_leanArtsFacetConfig___closed__1_value;
static lean_once_cell_t l_Lake_LeanLib_leanArtsFacetConfig___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_LeanLib_leanArtsFacetConfig___closed__2;
LEAN_EXPORT lean_object* l_Lake_LeanLib_leanArtsFacetConfig;
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__1(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "filelist"};
static const lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___closed__0 = (const lean_object*)&l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___closed__0_value;
static const lean_ctor_object l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(1, 1, 1, 0, 0, 0, 0, 0)}};
static const lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___closed__1 = (const lean_object*)&l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___closed__1_value;
static const lean_string_object l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "libtool"};
static const lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___closed__2 = (const lean_object*)&l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___closed__2_value;
static const lean_string_object l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "-static"};
static const lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___closed__3 = (const lean_object*)&l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___closed__3_value;
static const lean_string_object l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "-o"};
static const lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___closed__4 = (const lean_object*)&l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___closed__4_value;
static const lean_string_object l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "-filelist"};
static const lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___closed__5 = (const lean_object*)&l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___closed__5_value;
static lean_once_cell_t l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___closed__6;
static lean_once_cell_t l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___closed__7;
static const lean_array_object l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___closed__8 = (const lean_object*)&l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___closed__8_value;
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4(uint8_t, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__5___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "a"};
static const lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__5___closed__0 = (const lean_object*)&l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__5___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__5(uint8_t, lean_object*, uint8_t, uint8_t, lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__6___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "objs"};
static const lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__6___closed__0 = (const lean_object*)&l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__6___closed__0_value;
static const lean_string_object l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__6___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "export"};
static const lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__6___closed__1 = (const lean_object*)&l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__6___closed__1_value;
static const lean_array_object l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__6___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__6___closed__2 = (const lean_object*)&l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__6___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__6(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__6___boxed(lean_object**);
static lean_once_cell_t l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___closed__0;
static const lean_string_object l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = ":static"};
static const lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___closed__1 = (const lean_object*)&l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___closed__1_value;
static const lean_string_object l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = " (without exports)"};
static const lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___closed__2 = (const lean_object*)&l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___closed__2_value;
static const lean_string_object l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = " (with exports)"};
static const lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___closed__3 = (const lean_object*)&l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___closed__3_value;
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_formatQuery___at___00Lake_LeanLib_staticFacetConfig_spec__1(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lake_formatQuery___at___00Lake_LeanLib_staticFacetConfig_spec__1___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "type mismatch in target '"};
static const lean_object* l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__1___closed__0 = (const lean_object*)&l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__1___closed__0_value;
static const lean_string_object l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "': expected '"};
static const lean_object* l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__1___closed__1 = (const lean_object*)&l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__1___closed__1_value;
static lean_once_cell_t l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__1___closed__2;
static const lean_string_object l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "', got "};
static const lean_object* l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__1___closed__3 = (const lean_object*)&l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__1___closed__3_value;
static const lean_string_object l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "'"};
static const lean_object* l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__1___closed__4 = (const lean_object*)&l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__1___closed__4_value;
static const lean_string_object l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "unknown"};
static const lean_object* l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__1___closed__5 = (const lean_object*)&l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__1___closed__5_value;
LEAN_EXPORT lean_object* l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__2(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__3___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0___lam__0(uint8_t, lean_object*, lean_object*, uint8_t, uint8_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0___lam__1(uint8_t, lean_object*, uint8_t, uint8_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__4___boxed__const__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + sizeof(size_t)*1, .m_other = 0, .m_tag = 0}, .m_objs = {(lean_object*)(size_t)(0ULL)}};
LEAN_EXPORT const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__4___boxed__const__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__4___boxed__const__1_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__4(uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0___lam__2(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0___lam__2___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanLib_staticFacetConfig___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanLib_staticFacetConfig___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lake_LeanLib_staticFacetConfig___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_LeanLib_staticFacetConfig___lam__0___boxed, .m_arity = 8, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_LeanLib_staticFacetConfig___closed__0 = (const lean_object*)&l_Lake_LeanLib_staticFacetConfig___closed__0_value;
static const lean_closure_object l_Lake_LeanLib_staticFacetConfig___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_formatQuery___at___00Lake_LeanLib_staticFacetConfig_spec__1___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_LeanLib_staticFacetConfig___closed__1 = (const lean_object*)&l_Lake_LeanLib_staticFacetConfig___closed__1_value;
static lean_once_cell_t l_Lake_LeanLib_staticFacetConfig___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_LeanLib_staticFacetConfig___closed__2;
LEAN_EXPORT lean_object* l_Lake_LeanLib_staticFacetConfig;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__3(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanLib_staticExportFacetConfig___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanLib_staticExportFacetConfig___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lake_LeanLib_staticExportFacetConfig___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_LeanLib_staticExportFacetConfig___lam__0___boxed, .m_arity = 8, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_LeanLib_staticExportFacetConfig___closed__0 = (const lean_object*)&l_Lake_LeanLib_staticExportFacetConfig___closed__0_value;
static lean_once_cell_t l_Lake_LeanLib_staticExportFacetConfig___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_LeanLib_staticExportFacetConfig___closed__1;
LEAN_EXPORT lean_object* l_Lake_LeanLib_staticExportFacetConfig;
static lean_once_cell_t l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__1___closed__0;
LEAN_EXPORT lean_object* l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lake_OrdHashSet_empty___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__5___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lake_OrdHashSet_empty___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__5___closed__0 = (const lean_object*)&l_Lake_OrdHashSet_empty___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__5___closed__0_value;
static lean_once_cell_t l_Lake_OrdHashSet_empty___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__5___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_OrdHashSet_empty___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__5___closed__1;
LEAN_EXPORT lean_object* l_Lake_OrdHashSet_empty___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__5;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__8(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_OrdHashSet_insert___at___00Lake_OrdHashSet_appendArray___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_OrdHashSet_appendArray___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__0_spec__1(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_OrdHashSet_appendArray___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_OrdHashSet_appendArray___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_OrdHashSet_appendArray___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__7(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__2(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__6(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__4(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__3(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__9(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = ":shared"};
static const lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared___closed__0 = (const lean_object*)&l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_formatQuery___at___00Lake_LeanLib_sharedFacetConfig_spec__0(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lake_formatQuery___at___00Lake_LeanLib_sharedFacetConfig_spec__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lake_LeanLib_sharedFacetConfig___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_formatQuery___at___00Lake_LeanLib_sharedFacetConfig_spec__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_LeanLib_sharedFacetConfig___closed__0 = (const lean_object*)&l_Lake_LeanLib_sharedFacetConfig___closed__0_value;
static const lean_closure_object l_Lake_LeanLib_sharedFacetConfig___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared___boxed, .m_arity = 8, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_LeanLib_sharedFacetConfig___closed__1 = (const lean_object*)&l_Lake_LeanLib_sharedFacetConfig___closed__1_value;
static lean_once_cell_t l_Lake_LeanLib_sharedFacetConfig___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_LeanLib_sharedFacetConfig___closed__2;
LEAN_EXPORT lean_object* l_Lake_LeanLib_sharedFacetConfig;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildExtraDepTargets_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildExtraDepTargets_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildExtraDepTargets_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildExtraDepTargets_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildExtraDepTargets___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "/"};
static const lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildExtraDepTargets___closed__0 = (const lean_object*)&l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildExtraDepTargets___closed__0_value;
static const lean_string_object l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildExtraDepTargets___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = ":extraDep"};
static const lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildExtraDepTargets___closed__1 = (const lean_object*)&l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildExtraDepTargets___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildExtraDepTargets(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildExtraDepTargets___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lake_LeanLib_extraDepFacetConfig___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildExtraDepTargets___boxed, .m_arity = 8, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_LeanLib_extraDepFacetConfig___closed__0 = (const lean_object*)&l_Lake_LeanLib_extraDepFacetConfig___closed__0_value;
static lean_once_cell_t l_Lake_LeanLib_extraDepFacetConfig___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_LeanLib_extraDepFacetConfig___closed__1;
LEAN_EXPORT lean_object* l_Lake_LeanLib_extraDepFacetConfig;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildDefaultFacets_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildDefaultFacets_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildDefaultFacets___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "<collection>"};
static const lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildDefaultFacets___closed__0 = (const lean_object*)&l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildDefaultFacets___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildDefaultFacets(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildDefaultFacets___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lake_LeanLib_defaultFacetConfig___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildDefaultFacets___boxed, .m_arity = 8, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_LeanLib_defaultFacetConfig___closed__0 = (const lean_object*)&l_Lake_LeanLib_defaultFacetConfig___closed__0_value;
static lean_once_cell_t l_Lake_LeanLib_defaultFacetConfig___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_LeanLib_defaultFacetConfig___closed__1;
LEAN_EXPORT lean_object* l_Lake_LeanLib_defaultFacetConfig;
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lake_LeanLib_initFacetConfigs_spec__0___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lake_LeanLib_initFacetConfigs___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_LeanLib_initFacetConfigs___closed__0;
static lean_once_cell_t l_Lake_LeanLib_initFacetConfigs___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_LeanLib_initFacetConfigs___closed__1;
static lean_once_cell_t l_Lake_LeanLib_initFacetConfigs___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_LeanLib_initFacetConfigs___closed__2;
static lean_once_cell_t l_Lake_LeanLib_initFacetConfigs___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_LeanLib_initFacetConfigs___closed__3;
static lean_once_cell_t l_Lake_LeanLib_initFacetConfigs___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_LeanLib_initFacetConfigs___closed__4;
static lean_once_cell_t l_Lake_LeanLib_initFacetConfigs___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_LeanLib_initFacetConfigs___closed__5;
static lean_once_cell_t l_Lake_LeanLib_initFacetConfigs___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_LeanLib_initFacetConfigs___closed__6;
LEAN_EXPORT lean_object* l_Lake_LeanLib_initFacetConfigs;
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lake_LeanLib_initFacetConfigs_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_initLibraryFacetConfigs;
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__0_spec__0___redArg(lean_object* v_a_1_, lean_object* v_x_2_){
_start:
{
if (lean_obj_tag(v_x_2_) == 0)
{
uint8_t v___x_3_; 
v___x_3_ = 0;
return v___x_3_;
}
else
{
lean_object* v_key_4_; lean_object* v_tail_5_; lean_object* v_name_6_; lean_object* v_name_7_; uint8_t v___x_8_; 
v_key_4_ = lean_ctor_get(v_x_2_, 0);
v_tail_5_ = lean_ctor_get(v_x_2_, 2);
v_name_6_ = lean_ctor_get(v_key_4_, 1);
v_name_7_ = lean_ctor_get(v_a_1_, 1);
v___x_8_ = lean_name_eq(v_name_6_, v_name_7_);
if (v___x_8_ == 0)
{
v_x_2_ = v_tail_5_;
goto _start;
}
else
{
return v___x_8_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__0_spec__0___redArg___boxed(lean_object* v_a_10_, lean_object* v_x_11_){
_start:
{
uint8_t v_res_12_; lean_object* v_r_13_; 
v_res_12_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__0_spec__0___redArg(v_a_10_, v_x_11_);
lean_dec(v_x_11_);
lean_dec_ref(v_a_10_);
v_r_13_ = lean_box(v_res_12_);
return v_r_13_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__1_spec__2_spec__3_spec__5___redArg(lean_object* v_x_14_, lean_object* v_x_15_){
_start:
{
if (lean_obj_tag(v_x_15_) == 0)
{
return v_x_14_;
}
else
{
lean_object* v_key_16_; lean_object* v_value_17_; lean_object* v_tail_18_; lean_object* v___x_20_; uint8_t v_isShared_21_; uint8_t v_isSharedCheck_46_; 
v_key_16_ = lean_ctor_get(v_x_15_, 0);
v_value_17_ = lean_ctor_get(v_x_15_, 1);
v_tail_18_ = lean_ctor_get(v_x_15_, 2);
v_isSharedCheck_46_ = !lean_is_exclusive(v_x_15_);
if (v_isSharedCheck_46_ == 0)
{
v___x_20_ = v_x_15_;
v_isShared_21_ = v_isSharedCheck_46_;
goto v_resetjp_19_;
}
else
{
lean_inc(v_tail_18_);
lean_inc(v_value_17_);
lean_inc(v_key_16_);
lean_dec(v_x_15_);
v___x_20_ = lean_box(0);
v_isShared_21_ = v_isSharedCheck_46_;
goto v_resetjp_19_;
}
v_resetjp_19_:
{
lean_object* v_name_22_; lean_object* v___x_23_; uint64_t v___y_25_; lean_object* v___x_43_; 
v_name_22_ = lean_ctor_get(v_key_16_, 1);
v___x_23_ = lean_array_get_size(v_x_14_);
v___x_43_ = l_unsafeCast___redArg(v_name_22_);
if (lean_obj_tag(v___x_43_) == 0)
{
uint64_t v___x_44_; 
v___x_44_ = 1723ULL;
v___y_25_ = v___x_44_;
goto v___jp_24_;
}
else
{
uint64_t v_hash_45_; 
v_hash_45_ = lean_ctor_get_uint64(v___x_43_, sizeof(void*)*2);
lean_dec(v___x_43_);
v___y_25_ = v_hash_45_;
goto v___jp_24_;
}
v___jp_24_:
{
uint64_t v___x_26_; uint64_t v___x_27_; uint64_t v_fold_28_; uint64_t v___x_29_; uint64_t v___x_30_; uint64_t v___x_31_; size_t v___x_32_; size_t v___x_33_; size_t v___x_34_; size_t v___x_35_; size_t v___x_36_; lean_object* v___x_37_; lean_object* v___x_39_; 
v___x_26_ = 32ULL;
v___x_27_ = lean_uint64_shift_right(v___y_25_, v___x_26_);
v_fold_28_ = lean_uint64_xor(v___y_25_, v___x_27_);
v___x_29_ = 16ULL;
v___x_30_ = lean_uint64_shift_right(v_fold_28_, v___x_29_);
v___x_31_ = lean_uint64_xor(v_fold_28_, v___x_30_);
v___x_32_ = lean_uint64_to_usize(v___x_31_);
v___x_33_ = lean_usize_of_nat(v___x_23_);
v___x_34_ = ((size_t)1ULL);
v___x_35_ = lean_usize_sub(v___x_33_, v___x_34_);
v___x_36_ = lean_usize_land(v___x_32_, v___x_35_);
v___x_37_ = lean_array_uget_borrowed(v_x_14_, v___x_36_);
lean_inc(v___x_37_);
if (v_isShared_21_ == 0)
{
lean_ctor_set(v___x_20_, 2, v___x_37_);
v___x_39_ = v___x_20_;
goto v_reusejp_38_;
}
else
{
lean_object* v_reuseFailAlloc_42_; 
v_reuseFailAlloc_42_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_42_, 0, v_key_16_);
lean_ctor_set(v_reuseFailAlloc_42_, 1, v_value_17_);
lean_ctor_set(v_reuseFailAlloc_42_, 2, v___x_37_);
v___x_39_ = v_reuseFailAlloc_42_;
goto v_reusejp_38_;
}
v_reusejp_38_:
{
lean_object* v___x_40_; 
v___x_40_ = lean_array_uset(v_x_14_, v___x_36_, v___x_39_);
v_x_14_ = v___x_40_;
v_x_15_ = v_tail_18_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__1_spec__2_spec__3___redArg(lean_object* v_i_47_, lean_object* v_source_48_, lean_object* v_target_49_){
_start:
{
lean_object* v___x_50_; uint8_t v___x_51_; 
v___x_50_ = lean_array_get_size(v_source_48_);
v___x_51_ = lean_nat_dec_lt(v_i_47_, v___x_50_);
if (v___x_51_ == 0)
{
lean_dec_ref(v_source_48_);
lean_dec(v_i_47_);
return v_target_49_;
}
else
{
lean_object* v_es_52_; lean_object* v___x_53_; lean_object* v_source_54_; lean_object* v_target_55_; lean_object* v___x_56_; lean_object* v___x_57_; 
v_es_52_ = lean_array_fget(v_source_48_, v_i_47_);
v___x_53_ = lean_box(0);
v_source_54_ = lean_array_fset(v_source_48_, v_i_47_, v___x_53_);
v_target_55_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__1_spec__2_spec__3_spec__5___redArg(v_target_49_, v_es_52_);
v___x_56_ = lean_unsigned_to_nat(1u);
v___x_57_ = lean_nat_add(v_i_47_, v___x_56_);
lean_dec(v_i_47_);
v_i_47_ = v___x_57_;
v_source_48_ = v_source_54_;
v_target_49_ = v_target_55_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__1_spec__2___redArg(lean_object* v_data_59_){
_start:
{
lean_object* v___x_60_; lean_object* v___x_61_; lean_object* v_nbuckets_62_; lean_object* v___x_63_; lean_object* v___x_64_; lean_object* v___x_65_; lean_object* v___x_66_; lean_object* v___x_67_; 
v___x_60_ = lean_array_get_size(v_data_59_);
v___x_61_ = lean_unsigned_to_nat(2u);
v_nbuckets_62_ = lean_nat_mul(v___x_60_, v___x_61_);
v___x_63_ = lean_unsigned_to_nat(0u);
v___x_64_ = lean_box(0);
v___x_65_ = lean_mk_array(v_nbuckets_62_, v___x_64_);
v___x_66_ = lean_array_propagate_mark(v_data_59_, v___x_65_);
v___x_67_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__1_spec__2_spec__3___redArg(v___x_63_, v_data_59_, v___x_66_);
return v___x_67_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__1___redArg(lean_object* v_m_68_, lean_object* v_a_69_, lean_object* v_b_70_){
_start:
{
lean_object* v_size_71_; lean_object* v_buckets_72_; lean_object* v_name_73_; lean_object* v___x_74_; uint64_t v___y_76_; lean_object* v___x_113_; 
v_size_71_ = lean_ctor_get(v_m_68_, 0);
v_buckets_72_ = lean_ctor_get(v_m_68_, 1);
v_name_73_ = lean_ctor_get(v_a_69_, 1);
v___x_74_ = lean_array_get_size(v_buckets_72_);
v___x_113_ = l_unsafeCast___redArg(v_name_73_);
if (lean_obj_tag(v___x_113_) == 0)
{
uint64_t v___x_114_; 
v___x_114_ = 1723ULL;
v___y_76_ = v___x_114_;
goto v___jp_75_;
}
else
{
uint64_t v_hash_115_; 
v_hash_115_ = lean_ctor_get_uint64(v___x_113_, sizeof(void*)*2);
lean_dec(v___x_113_);
v___y_76_ = v_hash_115_;
goto v___jp_75_;
}
v___jp_75_:
{
uint64_t v___x_77_; uint64_t v___x_78_; uint64_t v_fold_79_; uint64_t v___x_80_; uint64_t v___x_81_; uint64_t v___x_82_; size_t v___x_83_; size_t v___x_84_; size_t v___x_85_; size_t v___x_86_; size_t v___x_87_; lean_object* v_bkt_88_; uint8_t v___x_89_; 
v___x_77_ = 32ULL;
v___x_78_ = lean_uint64_shift_right(v___y_76_, v___x_77_);
v_fold_79_ = lean_uint64_xor(v___y_76_, v___x_78_);
v___x_80_ = 16ULL;
v___x_81_ = lean_uint64_shift_right(v_fold_79_, v___x_80_);
v___x_82_ = lean_uint64_xor(v_fold_79_, v___x_81_);
v___x_83_ = lean_uint64_to_usize(v___x_82_);
v___x_84_ = lean_usize_of_nat(v___x_74_);
v___x_85_ = ((size_t)1ULL);
v___x_86_ = lean_usize_sub(v___x_84_, v___x_85_);
v___x_87_ = lean_usize_land(v___x_83_, v___x_86_);
v_bkt_88_ = lean_array_uget_borrowed(v_buckets_72_, v___x_87_);
v___x_89_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__0_spec__0___redArg(v_a_69_, v_bkt_88_);
if (v___x_89_ == 0)
{
lean_object* v___x_91_; uint8_t v_isShared_92_; uint8_t v_isSharedCheck_110_; 
lean_inc_ref(v_buckets_72_);
lean_inc(v_size_71_);
v_isSharedCheck_110_ = !lean_is_exclusive(v_m_68_);
if (v_isSharedCheck_110_ == 0)
{
lean_object* v_unused_111_; lean_object* v_unused_112_; 
v_unused_111_ = lean_ctor_get(v_m_68_, 1);
lean_dec(v_unused_111_);
v_unused_112_ = lean_ctor_get(v_m_68_, 0);
lean_dec(v_unused_112_);
v___x_91_ = v_m_68_;
v_isShared_92_ = v_isSharedCheck_110_;
goto v_resetjp_90_;
}
else
{
lean_dec(v_m_68_);
v___x_91_ = lean_box(0);
v_isShared_92_ = v_isSharedCheck_110_;
goto v_resetjp_90_;
}
v_resetjp_90_:
{
lean_object* v___x_93_; lean_object* v_size_x27_94_; lean_object* v___x_95_; lean_object* v_buckets_x27_96_; lean_object* v___x_97_; lean_object* v___x_98_; lean_object* v___x_99_; lean_object* v___x_100_; lean_object* v___x_101_; uint8_t v___x_102_; 
v___x_93_ = lean_unsigned_to_nat(1u);
v_size_x27_94_ = lean_nat_add(v_size_71_, v___x_93_);
lean_dec(v_size_71_);
lean_inc(v_bkt_88_);
v___x_95_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_95_, 0, v_a_69_);
lean_ctor_set(v___x_95_, 1, v_b_70_);
lean_ctor_set(v___x_95_, 2, v_bkt_88_);
v_buckets_x27_96_ = lean_array_uset(v_buckets_72_, v___x_87_, v___x_95_);
v___x_97_ = lean_unsigned_to_nat(4u);
v___x_98_ = lean_nat_mul(v_size_x27_94_, v___x_97_);
v___x_99_ = lean_unsigned_to_nat(3u);
v___x_100_ = lean_nat_div(v___x_98_, v___x_99_);
lean_dec(v___x_98_);
v___x_101_ = lean_array_get_size(v_buckets_x27_96_);
v___x_102_ = lean_nat_dec_le(v___x_100_, v___x_101_);
lean_dec(v___x_100_);
if (v___x_102_ == 0)
{
lean_object* v_val_103_; lean_object* v___x_105_; 
v_val_103_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__1_spec__2___redArg(v_buckets_x27_96_);
if (v_isShared_92_ == 0)
{
lean_ctor_set(v___x_91_, 1, v_val_103_);
lean_ctor_set(v___x_91_, 0, v_size_x27_94_);
v___x_105_ = v___x_91_;
goto v_reusejp_104_;
}
else
{
lean_object* v_reuseFailAlloc_106_; 
v_reuseFailAlloc_106_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_106_, 0, v_size_x27_94_);
lean_ctor_set(v_reuseFailAlloc_106_, 1, v_val_103_);
v___x_105_ = v_reuseFailAlloc_106_;
goto v_reusejp_104_;
}
v_reusejp_104_:
{
return v___x_105_;
}
}
else
{
lean_object* v___x_108_; 
if (v_isShared_92_ == 0)
{
lean_ctor_set(v___x_91_, 1, v_buckets_x27_96_);
lean_ctor_set(v___x_91_, 0, v_size_x27_94_);
v___x_108_ = v___x_91_;
goto v_reusejp_107_;
}
else
{
lean_object* v_reuseFailAlloc_109_; 
v_reuseFailAlloc_109_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_109_, 0, v_size_x27_94_);
lean_ctor_set(v_reuseFailAlloc_109_, 1, v_buckets_x27_96_);
v___x_108_ = v_reuseFailAlloc_109_;
goto v_reusejp_107_;
}
v_reusejp_107_:
{
return v___x_108_;
}
}
}
}
else
{
lean_dec(v_b_70_);
lean_dec_ref(v_a_69_);
return v_m_68_;
}
}
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__0___redArg(lean_object* v_m_116_, lean_object* v_a_117_){
_start:
{
lean_object* v_buckets_118_; lean_object* v_name_119_; lean_object* v___x_120_; uint64_t v___y_122_; lean_object* v___x_136_; 
v_buckets_118_ = lean_ctor_get(v_m_116_, 1);
v_name_119_ = lean_ctor_get(v_a_117_, 1);
v___x_120_ = lean_array_get_size(v_buckets_118_);
v___x_136_ = l_unsafeCast___redArg(v_name_119_);
if (lean_obj_tag(v___x_136_) == 0)
{
uint64_t v___x_137_; 
v___x_137_ = 1723ULL;
v___y_122_ = v___x_137_;
goto v___jp_121_;
}
else
{
uint64_t v_hash_138_; 
v_hash_138_ = lean_ctor_get_uint64(v___x_136_, sizeof(void*)*2);
lean_dec(v___x_136_);
v___y_122_ = v_hash_138_;
goto v___jp_121_;
}
v___jp_121_:
{
uint64_t v___x_123_; uint64_t v___x_124_; uint64_t v_fold_125_; uint64_t v___x_126_; uint64_t v___x_127_; uint64_t v___x_128_; size_t v___x_129_; size_t v___x_130_; size_t v___x_131_; size_t v___x_132_; size_t v___x_133_; lean_object* v___x_134_; uint8_t v___x_135_; 
v___x_123_ = 32ULL;
v___x_124_ = lean_uint64_shift_right(v___y_122_, v___x_123_);
v_fold_125_ = lean_uint64_xor(v___y_122_, v___x_124_);
v___x_126_ = 16ULL;
v___x_127_ = lean_uint64_shift_right(v_fold_125_, v___x_126_);
v___x_128_ = lean_uint64_xor(v_fold_125_, v___x_127_);
v___x_129_ = lean_uint64_to_usize(v___x_128_);
v___x_130_ = lean_usize_of_nat(v___x_120_);
v___x_131_ = ((size_t)1ULL);
v___x_132_ = lean_usize_sub(v___x_130_, v___x_131_);
v___x_133_ = lean_usize_land(v___x_129_, v___x_132_);
v___x_134_ = lean_array_uget_borrowed(v_buckets_118_, v___x_133_);
v___x_135_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__0_spec__0___redArg(v_a_117_, v___x_134_);
return v___x_135_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__0___redArg___boxed(lean_object* v_m_139_, lean_object* v_a_140_){
_start:
{
uint8_t v_res_141_; lean_object* v_r_142_; 
v_res_141_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__0___redArg(v_m_139_, v_a_140_);
lean_dec_ref(v_a_140_);
lean_dec_ref(v_m_139_);
v_r_142_ = lean_box(v_res_141_);
return v_r_142_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go(lean_object* v_self_143_, lean_object* v_root_144_, lean_object* v_col_145_, uint8_t v_viaImport_146_, lean_object* v_a_147_, lean_object* v_a_148_, lean_object* v_a_149_, lean_object* v_a_150_, lean_object* v_a_151_, lean_object* v_a_152_){
_start:
{
lean_object* v_col_155_; lean_object* v___y_156_; lean_object* v_mods_158_; lean_object* v_modSet_159_; uint8_t v_hasErrors_160_; uint8_t v___x_161_; 
v_mods_158_ = lean_ctor_get(v_col_145_, 0);
v_modSet_159_ = lean_ctor_get(v_col_145_, 1);
v_hasErrors_160_ = lean_ctor_get_uint8(v_col_145_, sizeof(void*)*2);
v___x_161_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__0___redArg(v_modSet_159_, v_root_144_);
if (v___x_161_ == 0)
{
lean_object* v___x_163_; uint8_t v_isShared_164_; uint8_t v_isSharedCheck_222_; 
lean_inc_ref(v_modSet_159_);
lean_inc_ref(v_mods_158_);
v_isSharedCheck_222_ = !lean_is_exclusive(v_col_145_);
if (v_isSharedCheck_222_ == 0)
{
lean_object* v_unused_223_; lean_object* v_unused_224_; 
v_unused_223_ = lean_ctor_get(v_col_145_, 1);
lean_dec(v_unused_223_);
v_unused_224_ = lean_ctor_get(v_col_145_, 0);
lean_dec(v_unused_224_);
v___x_163_ = v_col_145_;
v_isShared_164_ = v_isSharedCheck_222_;
goto v_resetjp_162_;
}
else
{
lean_dec(v_col_145_);
v___x_163_ = lean_box(0);
v_isShared_164_ = v_isSharedCheck_222_;
goto v_resetjp_162_;
}
v_resetjp_162_:
{
lean_object* v_lib_165_; lean_object* v_pkg_166_; lean_object* v_name_167_; lean_object* v_keyName_168_; uint8_t v___x_169_; lean_object* v___x_170_; lean_object* v___x_171_; lean_object* v_col_173_; 
v_lib_165_ = lean_ctor_get(v_root_144_, 0);
v_pkg_166_ = lean_ctor_get(v_lib_165_, 0);
v_name_167_ = lean_ctor_get(v_root_144_, 1);
v_keyName_168_ = lean_ctor_get(v_pkg_166_, 2);
v___x_169_ = 1;
v___x_170_ = lean_box(0);
lean_inc_ref(v_root_144_);
v___x_171_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__1___redArg(v_modSet_159_, v_root_144_, v___x_170_);
lean_inc_ref(v___x_171_);
lean_inc_ref(v_mods_158_);
if (v_isShared_164_ == 0)
{
lean_ctor_set(v___x_163_, 1, v___x_171_);
v_col_173_ = v___x_163_;
goto v_reusejp_172_;
}
else
{
lean_object* v_reuseFailAlloc_221_; 
v_reuseFailAlloc_221_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v_reuseFailAlloc_221_, 0, v_mods_158_);
lean_ctor_set(v_reuseFailAlloc_221_, 1, v___x_171_);
lean_ctor_set_uint8(v_reuseFailAlloc_221_, sizeof(void*)*2, v_hasErrors_160_);
v_col_173_ = v_reuseFailAlloc_221_;
goto v_reusejp_172_;
}
v_reusejp_172_:
{
lean_object* v___x_174_; lean_object* v___x_175_; lean_object* v___x_176_; lean_object* v___x_177_; lean_object* v___x_178_; 
v___x_174_ = l_Lake_Module_importsFacet;
lean_inc(v_name_167_);
lean_inc(v_keyName_168_);
v___x_175_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_175_, 0, v_keyName_168_);
lean_ctor_set(v___x_175_, 1, v_name_167_);
v___x_176_ = l_Lake_Module_keyword;
lean_inc_ref(v_root_144_);
v___x_177_ = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(v___x_177_, 0, v___x_175_);
lean_ctor_set(v___x_177_, 1, v___x_176_);
lean_ctor_set(v___x_177_, 2, v_root_144_);
lean_ctor_set(v___x_177_, 3, v___x_174_);
lean_inc_ref(v_a_147_);
lean_inc_ref(v_a_151_);
lean_inc(v_a_150_);
lean_inc(v_a_149_);
lean_inc(v_a_148_);
v___x_178_ = lean_apply_7(v_a_147_, v___x_177_, v_a_148_, v_a_149_, v_a_150_, v_a_151_, v_a_152_, lean_box(0));
if (lean_obj_tag(v___x_178_) == 0)
{
lean_object* v_a_179_; lean_object* v_a_180_; lean_object* v___x_182_; uint8_t v_isShared_183_; uint8_t v_isSharedCheck_211_; 
v_a_179_ = lean_ctor_get(v___x_178_, 0);
v_a_180_ = lean_ctor_get(v___x_178_, 1);
v_isSharedCheck_211_ = !lean_is_exclusive(v___x_178_);
if (v_isSharedCheck_211_ == 0)
{
v___x_182_ = v___x_178_;
v_isShared_183_ = v_isSharedCheck_211_;
goto v_resetjp_181_;
}
else
{
lean_inc(v_a_180_);
lean_inc(v_a_179_);
lean_dec(v___x_178_);
v___x_182_ = lean_box(0);
v_isShared_183_ = v_isSharedCheck_211_;
goto v_resetjp_181_;
}
v_resetjp_181_:
{
lean_object* v_task_184_; lean_object* v___x_185_; lean_object* v___y_187_; 
v_task_184_ = lean_ctor_get(v_a_179_, 0);
lean_inc_ref(v_task_184_);
lean_dec(v_a_179_);
v___x_185_ = lean_io_wait(v_task_184_);
if (lean_obj_tag(v___x_185_) == 0)
{
lean_object* v_a_191_; size_t v_sz_192_; size_t v___x_193_; lean_object* v___x_194_; 
lean_del_object(v___x_182_);
lean_dec_ref(v___x_171_);
lean_dec_ref(v_mods_158_);
v_a_191_ = lean_ctor_get(v___x_185_, 0);
lean_inc(v_a_191_);
lean_dec_ref_known(v___x_185_, 2);
v_sz_192_ = lean_array_size(v_a_191_);
v___x_193_ = ((size_t)0ULL);
v___x_194_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__2(v_self_143_, v_a_191_, v_sz_192_, v___x_193_, v_col_173_, v_a_147_, v_a_148_, v_a_149_, v_a_150_, v_a_151_, v_a_180_);
lean_dec(v_a_191_);
if (lean_obj_tag(v___x_194_) == 0)
{
lean_object* v_a_195_; lean_object* v_a_196_; lean_object* v_mods_197_; lean_object* v_modSet_198_; uint8_t v_hasErrors_199_; lean_object* v___x_201_; uint8_t v_isShared_202_; uint8_t v_isSharedCheck_207_; 
v_a_195_ = lean_ctor_get(v___x_194_, 0);
lean_inc(v_a_195_);
v_a_196_ = lean_ctor_get(v___x_194_, 1);
lean_inc(v_a_196_);
lean_dec_ref_known(v___x_194_, 2);
v_mods_197_ = lean_ctor_get(v_a_195_, 0);
v_modSet_198_ = lean_ctor_get(v_a_195_, 1);
v_hasErrors_199_ = lean_ctor_get_uint8(v_a_195_, sizeof(void*)*2);
v_isSharedCheck_207_ = !lean_is_exclusive(v_a_195_);
if (v_isSharedCheck_207_ == 0)
{
v___x_201_ = v_a_195_;
v_isShared_202_ = v_isSharedCheck_207_;
goto v_resetjp_200_;
}
else
{
lean_inc(v_modSet_198_);
lean_inc(v_mods_197_);
lean_dec(v_a_195_);
v___x_201_ = lean_box(0);
v_isShared_202_ = v_isSharedCheck_207_;
goto v_resetjp_200_;
}
v_resetjp_200_:
{
lean_object* v___x_203_; lean_object* v___x_205_; 
v___x_203_ = lean_array_push(v_mods_197_, v_root_144_);
if (v_isShared_202_ == 0)
{
lean_ctor_set(v___x_201_, 0, v___x_203_);
v___x_205_ = v___x_201_;
goto v_reusejp_204_;
}
else
{
lean_object* v_reuseFailAlloc_206_; 
v_reuseFailAlloc_206_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v_reuseFailAlloc_206_, 0, v___x_203_);
lean_ctor_set(v_reuseFailAlloc_206_, 1, v_modSet_198_);
lean_ctor_set_uint8(v_reuseFailAlloc_206_, sizeof(void*)*2, v_hasErrors_199_);
v___x_205_ = v_reuseFailAlloc_206_;
goto v_reusejp_204_;
}
v_reusejp_204_:
{
v_col_155_ = v___x_205_;
v___y_156_ = v_a_196_;
goto v___jp_154_;
}
}
}
else
{
lean_dec_ref(v_root_144_);
return v___x_194_;
}
}
else
{
lean_dec_ref_known(v___x_185_, 2);
lean_dec_ref(v_col_173_);
lean_dec_ref(v_a_147_);
if (v_viaImport_146_ == 0)
{
lean_object* v___x_208_; lean_object* v___x_209_; 
v___x_208_ = lean_array_push(v_mods_158_, v_root_144_);
v___x_209_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_209_, 0, v___x_208_);
lean_ctor_set(v___x_209_, 1, v___x_171_);
lean_ctor_set_uint8(v___x_209_, sizeof(void*)*2, v___x_169_);
v___y_187_ = v___x_209_;
goto v___jp_186_;
}
else
{
lean_object* v___x_210_; 
lean_dec_ref(v_root_144_);
v___x_210_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_210_, 0, v_mods_158_);
lean_ctor_set(v___x_210_, 1, v___x_171_);
lean_ctor_set_uint8(v___x_210_, sizeof(void*)*2, v___x_169_);
v___y_187_ = v___x_210_;
goto v___jp_186_;
}
}
v___jp_186_:
{
lean_object* v___x_189_; 
if (v_isShared_183_ == 0)
{
lean_ctor_set(v___x_182_, 0, v___y_187_);
v___x_189_ = v___x_182_;
goto v_reusejp_188_;
}
else
{
lean_object* v_reuseFailAlloc_190_; 
v_reuseFailAlloc_190_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_190_, 0, v___y_187_);
lean_ctor_set(v_reuseFailAlloc_190_, 1, v_a_180_);
v___x_189_ = v_reuseFailAlloc_190_;
goto v_reusejp_188_;
}
v_reusejp_188_:
{
return v___x_189_;
}
}
}
}
else
{
lean_object* v_a_212_; lean_object* v_a_213_; lean_object* v___x_215_; uint8_t v_isShared_216_; uint8_t v_isSharedCheck_220_; 
lean_dec_ref(v_col_173_);
lean_dec_ref(v___x_171_);
lean_dec_ref(v_mods_158_);
lean_dec_ref(v_a_147_);
lean_dec_ref(v_root_144_);
v_a_212_ = lean_ctor_get(v___x_178_, 0);
v_a_213_ = lean_ctor_get(v___x_178_, 1);
v_isSharedCheck_220_ = !lean_is_exclusive(v___x_178_);
if (v_isSharedCheck_220_ == 0)
{
v___x_215_ = v___x_178_;
v_isShared_216_ = v_isSharedCheck_220_;
goto v_resetjp_214_;
}
else
{
lean_inc(v_a_213_);
lean_inc(v_a_212_);
lean_dec(v___x_178_);
v___x_215_ = lean_box(0);
v_isShared_216_ = v_isSharedCheck_220_;
goto v_resetjp_214_;
}
v_resetjp_214_:
{
lean_object* v___x_218_; 
if (v_isShared_216_ == 0)
{
v___x_218_ = v___x_215_;
goto v_reusejp_217_;
}
else
{
lean_object* v_reuseFailAlloc_219_; 
v_reuseFailAlloc_219_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_219_, 0, v_a_212_);
lean_ctor_set(v_reuseFailAlloc_219_, 1, v_a_213_);
v___x_218_ = v_reuseFailAlloc_219_;
goto v_reusejp_217_;
}
v_reusejp_217_:
{
return v___x_218_;
}
}
}
}
}
}
else
{
lean_dec_ref(v_a_147_);
lean_dec_ref(v_root_144_);
v_col_155_ = v_col_145_;
v___y_156_ = v_a_152_;
goto v___jp_154_;
}
v___jp_154_:
{
lean_object* v___x_157_; 
v___x_157_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_157_, 0, v_col_155_);
lean_ctor_set(v___x_157_, 1, v___y_156_);
return v___x_157_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__2(lean_object* v_self_225_, lean_object* v_as_226_, size_t v_sz_227_, size_t v_i_228_, lean_object* v_b_229_, lean_object* v___y_230_, lean_object* v___y_231_, lean_object* v___y_232_, lean_object* v___y_233_, lean_object* v___y_234_, lean_object* v___y_235_){
_start:
{
lean_object* v_a_238_; lean_object* v_a_239_; uint8_t v___x_243_; 
v___x_243_ = lean_usize_dec_lt(v_i_228_, v_sz_227_);
if (v___x_243_ == 0)
{
lean_object* v___x_244_; 
lean_dec_ref(v___y_230_);
v___x_244_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_244_, 0, v_b_229_);
lean_ctor_set(v___x_244_, 1, v___y_235_);
return v___x_244_;
}
else
{
lean_object* v_a_245_; lean_object* v_lib_246_; lean_object* v_name_247_; lean_object* v_name_248_; uint8_t v___x_249_; 
v_a_245_ = lean_array_uget_borrowed(v_as_226_, v_i_228_);
v_lib_246_ = lean_ctor_get(v_a_245_, 0);
v_name_247_ = lean_ctor_get(v_lib_246_, 1);
v_name_248_ = lean_ctor_get(v_self_225_, 1);
v___x_249_ = lean_name_eq(v_name_247_, v_name_248_);
if (v___x_249_ == 0)
{
v_a_238_ = v_b_229_;
v_a_239_ = v___y_235_;
goto v___jp_237_;
}
else
{
lean_object* v___x_250_; 
lean_inc_ref(v___y_230_);
lean_inc(v_a_245_);
v___x_250_ = l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go(v_self_225_, v_a_245_, v_b_229_, v___x_249_, v___y_230_, v___y_231_, v___y_232_, v___y_233_, v___y_234_, v___y_235_);
if (lean_obj_tag(v___x_250_) == 0)
{
lean_object* v_a_251_; lean_object* v_a_252_; 
v_a_251_ = lean_ctor_get(v___x_250_, 0);
lean_inc(v_a_251_);
v_a_252_ = lean_ctor_get(v___x_250_, 1);
lean_inc(v_a_252_);
lean_dec_ref_known(v___x_250_, 2);
v_a_238_ = v_a_251_;
v_a_239_ = v_a_252_;
goto v___jp_237_;
}
else
{
lean_dec_ref(v___y_230_);
return v___x_250_;
}
}
}
v___jp_237_:
{
size_t v___x_240_; size_t v___x_241_; 
v___x_240_ = ((size_t)1ULL);
v___x_241_ = lean_usize_add(v_i_228_, v___x_240_);
v_i_228_ = v___x_241_;
v_b_229_ = v_a_238_;
v___y_235_ = v_a_239_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__2___boxed(lean_object* v_self_253_, lean_object* v_as_254_, lean_object* v_sz_255_, lean_object* v_i_256_, lean_object* v_b_257_, lean_object* v___y_258_, lean_object* v___y_259_, lean_object* v___y_260_, lean_object* v___y_261_, lean_object* v___y_262_, lean_object* v___y_263_, lean_object* v___y_264_){
_start:
{
size_t v_sz_boxed_265_; size_t v_i_boxed_266_; lean_object* v_res_267_; 
v_sz_boxed_265_ = lean_unbox_usize(v_sz_255_);
lean_dec(v_sz_255_);
v_i_boxed_266_ = lean_unbox_usize(v_i_256_);
lean_dec(v_i_256_);
v_res_267_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__2(v_self_253_, v_as_254_, v_sz_boxed_265_, v_i_boxed_266_, v_b_257_, v___y_258_, v___y_259_, v___y_260_, v___y_261_, v___y_262_, v___y_263_);
lean_dec_ref(v___y_262_);
lean_dec(v___y_261_);
lean_dec(v___y_260_);
lean_dec(v___y_259_);
lean_dec_ref(v_as_254_);
lean_dec_ref(v_self_253_);
return v_res_267_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go___boxed(lean_object* v_self_268_, lean_object* v_root_269_, lean_object* v_col_270_, lean_object* v_viaImport_271_, lean_object* v_a_272_, lean_object* v_a_273_, lean_object* v_a_274_, lean_object* v_a_275_, lean_object* v_a_276_, lean_object* v_a_277_, lean_object* v_a_278_){
_start:
{
uint8_t v_viaImport_boxed_279_; lean_object* v_res_280_; 
v_viaImport_boxed_279_ = lean_unbox(v_viaImport_271_);
v_res_280_ = l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go(v_self_268_, v_root_269_, v_col_270_, v_viaImport_boxed_279_, v_a_272_, v_a_273_, v_a_274_, v_a_275_, v_a_276_, v_a_277_);
lean_dec_ref(v_a_276_);
lean_dec(v_a_275_);
lean_dec(v_a_274_);
lean_dec(v_a_273_);
lean_dec_ref(v_self_268_);
return v_res_280_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__0(lean_object* v_00_u03b2_281_, lean_object* v_m_282_, lean_object* v_a_283_){
_start:
{
uint8_t v___x_284_; 
v___x_284_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__0___redArg(v_m_282_, v_a_283_);
return v___x_284_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__0___boxed(lean_object* v_00_u03b2_285_, lean_object* v_m_286_, lean_object* v_a_287_){
_start:
{
uint8_t v_res_288_; lean_object* v_r_289_; 
v_res_288_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__0(v_00_u03b2_285_, v_m_286_, v_a_287_);
lean_dec_ref(v_a_287_);
lean_dec_ref(v_m_286_);
v_r_289_ = lean_box(v_res_288_);
return v_r_289_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__1(lean_object* v_00_u03b2_290_, lean_object* v_m_291_, lean_object* v_a_292_, lean_object* v_b_293_){
_start:
{
lean_object* v___x_294_; 
v___x_294_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__1___redArg(v_m_291_, v_a_292_, v_b_293_);
return v___x_294_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__0_spec__0(lean_object* v_00_u03b2_295_, lean_object* v_a_296_, lean_object* v_x_297_){
_start:
{
uint8_t v___x_298_; 
v___x_298_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__0_spec__0___redArg(v_a_296_, v_x_297_);
return v___x_298_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__0_spec__0___boxed(lean_object* v_00_u03b2_299_, lean_object* v_a_300_, lean_object* v_x_301_){
_start:
{
uint8_t v_res_302_; lean_object* v_r_303_; 
v_res_302_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__0_spec__0(v_00_u03b2_299_, v_a_300_, v_x_301_);
lean_dec(v_x_301_);
lean_dec_ref(v_a_300_);
v_r_303_ = lean_box(v_res_302_);
return v_r_303_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__1_spec__2(lean_object* v_00_u03b2_304_, lean_object* v_data_305_){
_start:
{
lean_object* v___x_306_; 
v___x_306_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__1_spec__2___redArg(v_data_305_);
return v___x_306_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__1_spec__2_spec__3(lean_object* v_00_u03b2_307_, lean_object* v_i_308_, lean_object* v_source_309_, lean_object* v_target_310_){
_start:
{
lean_object* v___x_311_; 
v___x_311_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__1_spec__2_spec__3___redArg(v_i_308_, v_source_309_, v_target_310_);
return v___x_311_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__1_spec__2_spec__3_spec__5(lean_object* v_00_u03b2_312_, lean_object* v_x_313_, lean_object* v_x_314_){
_start:
{
lean_object* v___x_315_; 
v___x_315_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__1_spec__2_spec__3_spec__5___redArg(v_x_313_, v_x_314_);
return v___x_315_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_spec__0(lean_object* v_self_316_, lean_object* v_as_317_, size_t v_sz_318_, size_t v_i_319_, lean_object* v_b_320_, lean_object* v___y_321_, lean_object* v___y_322_, lean_object* v___y_323_, lean_object* v___y_324_, lean_object* v___y_325_, lean_object* v___y_326_){
_start:
{
uint8_t v___x_328_; 
v___x_328_ = lean_usize_dec_lt(v_i_319_, v_sz_318_);
if (v___x_328_ == 0)
{
lean_object* v___x_329_; 
lean_dec_ref(v___y_321_);
v___x_329_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_329_, 0, v_b_320_);
lean_ctor_set(v___x_329_, 1, v___y_326_);
return v___x_329_;
}
else
{
uint8_t v___x_330_; lean_object* v_a_331_; lean_object* v___x_332_; 
v___x_330_ = 0;
v_a_331_ = lean_array_uget_borrowed(v_as_317_, v_i_319_);
lean_inc_ref(v___y_321_);
lean_inc(v_a_331_);
v___x_332_ = l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go(v_self_316_, v_a_331_, v_b_320_, v___x_330_, v___y_321_, v___y_322_, v___y_323_, v___y_324_, v___y_325_, v___y_326_);
if (lean_obj_tag(v___x_332_) == 0)
{
lean_object* v_a_333_; lean_object* v_a_334_; size_t v___x_335_; size_t v___x_336_; 
v_a_333_ = lean_ctor_get(v___x_332_, 0);
lean_inc(v_a_333_);
v_a_334_ = lean_ctor_get(v___x_332_, 1);
lean_inc(v_a_334_);
lean_dec_ref_known(v___x_332_, 2);
v___x_335_ = ((size_t)1ULL);
v___x_336_ = lean_usize_add(v_i_319_, v___x_335_);
v_i_319_ = v___x_336_;
v_b_320_ = v_a_333_;
v___y_326_ = v_a_334_;
goto _start;
}
else
{
lean_dec_ref(v___y_321_);
return v___x_332_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_spec__0___boxed(lean_object* v_self_338_, lean_object* v_as_339_, lean_object* v_sz_340_, lean_object* v_i_341_, lean_object* v_b_342_, lean_object* v___y_343_, lean_object* v___y_344_, lean_object* v___y_345_, lean_object* v___y_346_, lean_object* v___y_347_, lean_object* v___y_348_, lean_object* v___y_349_){
_start:
{
size_t v_sz_boxed_350_; size_t v_i_boxed_351_; lean_object* v_res_352_; 
v_sz_boxed_350_ = lean_unbox_usize(v_sz_340_);
lean_dec(v_sz_340_);
v_i_boxed_351_ = lean_unbox_usize(v_i_341_);
lean_dec(v_i_341_);
v_res_352_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_spec__0(v_self_338_, v_as_339_, v_sz_boxed_350_, v_i_boxed_351_, v_b_342_, v___y_343_, v___y_344_, v___y_345_, v___y_346_, v___y_347_, v___y_348_);
lean_dec_ref(v___y_347_);
lean_dec(v___y_346_);
lean_dec(v___y_345_);
lean_dec(v___y_344_);
lean_dec_ref(v_as_339_);
lean_dec_ref(v_self_338_);
return v_res_352_;
}
}
static lean_object* _init_l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___lam__0___closed__2(void){
_start:
{
lean_object* v___x_355_; lean_object* v___x_356_; 
v___x_355_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___lam__0___closed__1));
v___x_356_ = l_Lake_BuildTrace_nil(v___x_355_);
return v___x_356_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___lam__0(lean_object* v_self_358_, lean_object* v_col_359_, lean_object* v___x_360_, uint8_t v___x_361_, lean_object* v___x_362_, lean_object* v___y_363_, lean_object* v___y_364_, lean_object* v___y_365_, lean_object* v___y_366_, lean_object* v___y_367_, lean_object* v___y_368_){
_start:
{
lean_object* v___x_370_; 
lean_inc_ref(v_self_358_);
v___x_370_ = l_Lake_LeanLib_getModuleArray(v_self_358_);
if (lean_obj_tag(v___x_370_) == 0)
{
lean_object* v_a_371_; size_t v_sz_372_; size_t v___x_373_; lean_object* v___x_374_; 
v_a_371_ = lean_ctor_get(v___x_370_, 0);
lean_inc(v_a_371_);
lean_dec_ref_known(v___x_370_, 1);
v_sz_372_ = lean_array_size(v_a_371_);
v___x_373_ = ((size_t)0ULL);
v___x_374_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_spec__0(v_self_358_, v_a_371_, v_sz_372_, v___x_373_, v_col_359_, v___y_363_, v___y_364_, v___y_365_, v___y_366_, v___y_367_, v___y_368_);
lean_dec(v_a_371_);
if (lean_obj_tag(v___x_374_) == 0)
{
lean_object* v_a_375_; lean_object* v_a_376_; lean_object* v___x_378_; uint8_t v_isShared_379_; uint8_t v_isSharedCheck_402_; 
v_a_375_ = lean_ctor_get(v___x_374_, 0);
v_a_376_ = lean_ctor_get(v___x_374_, 1);
v_isSharedCheck_402_ = !lean_is_exclusive(v___x_374_);
if (v_isSharedCheck_402_ == 0)
{
v___x_378_ = v___x_374_;
v_isShared_379_ = v_isSharedCheck_402_;
goto v_resetjp_377_;
}
else
{
lean_inc(v_a_376_);
lean_inc(v_a_375_);
lean_dec(v___x_374_);
v___x_378_ = lean_box(0);
v_isShared_379_ = v_isSharedCheck_402_;
goto v_resetjp_377_;
}
v_resetjp_377_:
{
lean_object* v_mods_380_; uint8_t v_hasErrors_381_; lean_object* v___y_383_; 
v_mods_380_ = lean_ctor_get(v_a_375_, 0);
lean_inc_ref(v_mods_380_);
v_hasErrors_381_ = lean_ctor_get_uint8(v_a_375_, sizeof(void*)*2);
lean_dec(v_a_375_);
if (v_hasErrors_381_ == 0)
{
lean_dec_ref(v_self_358_);
v___y_383_ = v_a_376_;
goto v___jp_382_;
}
else
{
lean_object* v_name_395_; lean_object* v___x_396_; lean_object* v___x_397_; lean_object* v___x_398_; uint8_t v___x_399_; lean_object* v___x_400_; lean_object* v___x_401_; 
v_name_395_ = lean_ctor_get(v_self_358_, 1);
lean_inc(v_name_395_);
lean_dec_ref(v_self_358_);
v___x_396_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_name_395_, v_hasErrors_381_);
v___x_397_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___lam__0___closed__3));
v___x_398_ = lean_string_append(v___x_396_, v___x_397_);
v___x_399_ = 3;
v___x_400_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_400_, 0, v___x_398_);
lean_ctor_set_uint8(v___x_400_, sizeof(void*)*1, v___x_399_);
v___x_401_ = lean_array_push(v_a_376_, v___x_400_);
v___y_383_ = v___x_401_;
goto v___jp_382_;
}
v___jp_382_:
{
lean_object* v___x_384_; lean_object* v___x_385_; uint8_t v___x_386_; lean_object* v___x_387_; lean_object* v___x_388_; lean_object* v___x_390_; 
v___x_384_ = lean_mk_empty_array_with_capacity(v___x_360_);
v___x_385_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___lam__0___closed__0));
v___x_386_ = 0;
v___x_387_ = lean_obj_once(&l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___lam__0___closed__2, &l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___lam__0___closed__2_once, _init_l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___lam__0___closed__2);
v___x_388_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_388_, 0, v___x_384_);
lean_ctor_set(v___x_388_, 1, v___x_387_);
lean_ctor_set(v___x_388_, 2, v___x_360_);
lean_ctor_set_uint8(v___x_388_, sizeof(void*)*3, v___x_386_);
lean_ctor_set_uint8(v___x_388_, sizeof(void*)*3 + 1, v___x_361_);
if (v_isShared_379_ == 0)
{
lean_ctor_set(v___x_378_, 1, v___x_388_);
lean_ctor_set(v___x_378_, 0, v_mods_380_);
v___x_390_ = v___x_378_;
goto v_reusejp_389_;
}
else
{
lean_object* v_reuseFailAlloc_394_; 
v_reuseFailAlloc_394_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_394_, 0, v_mods_380_);
lean_ctor_set(v_reuseFailAlloc_394_, 1, v___x_388_);
v___x_390_ = v_reuseFailAlloc_394_;
goto v_reusejp_389_;
}
v_reusejp_389_:
{
lean_object* v___x_391_; lean_object* v___x_392_; lean_object* v___x_393_; 
v___x_391_ = lean_task_pure(v___x_390_);
v___x_392_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_392_, 0, v___x_391_);
lean_ctor_set(v___x_392_, 1, v___x_362_);
lean_ctor_set(v___x_392_, 2, v___x_385_);
lean_ctor_set_uint8(v___x_392_, sizeof(void*)*3, v___x_361_);
v___x_393_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_393_, 0, v___x_392_);
lean_ctor_set(v___x_393_, 1, v___y_383_);
return v___x_393_;
}
}
}
}
else
{
lean_object* v_a_403_; lean_object* v_a_404_; lean_object* v___x_406_; uint8_t v_isShared_407_; uint8_t v_isSharedCheck_411_; 
lean_dec(v___x_362_);
lean_dec(v___x_360_);
lean_dec_ref(v_self_358_);
v_a_403_ = lean_ctor_get(v___x_374_, 0);
v_a_404_ = lean_ctor_get(v___x_374_, 1);
v_isSharedCheck_411_ = !lean_is_exclusive(v___x_374_);
if (v_isSharedCheck_411_ == 0)
{
v___x_406_ = v___x_374_;
v_isShared_407_ = v_isSharedCheck_411_;
goto v_resetjp_405_;
}
else
{
lean_inc(v_a_404_);
lean_inc(v_a_403_);
lean_dec(v___x_374_);
v___x_406_ = lean_box(0);
v_isShared_407_ = v_isSharedCheck_411_;
goto v_resetjp_405_;
}
v_resetjp_405_:
{
lean_object* v___x_409_; 
if (v_isShared_407_ == 0)
{
v___x_409_ = v___x_406_;
goto v_reusejp_408_;
}
else
{
lean_object* v_reuseFailAlloc_410_; 
v_reuseFailAlloc_410_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_410_, 0, v_a_403_);
lean_ctor_set(v_reuseFailAlloc_410_, 1, v_a_404_);
v___x_409_ = v_reuseFailAlloc_410_;
goto v_reusejp_408_;
}
v_reusejp_408_:
{
return v___x_409_;
}
}
}
}
else
{
lean_object* v_a_412_; lean_object* v___x_413_; uint8_t v___x_414_; lean_object* v___x_415_; lean_object* v___x_416_; lean_object* v___x_417_; lean_object* v___x_418_; 
lean_dec_ref(v___y_363_);
lean_dec(v___x_362_);
lean_dec(v___x_360_);
lean_dec_ref(v_col_359_);
lean_dec_ref(v_self_358_);
v_a_412_ = lean_ctor_get(v___x_370_, 0);
lean_inc(v_a_412_);
lean_dec_ref_known(v___x_370_, 1);
v___x_413_ = lean_io_error_to_string(v_a_412_);
v___x_414_ = 3;
v___x_415_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_415_, 0, v___x_413_);
lean_ctor_set_uint8(v___x_415_, sizeof(void*)*1, v___x_414_);
v___x_416_ = lean_array_get_size(v___y_368_);
v___x_417_ = lean_array_push(v___y_368_, v___x_415_);
v___x_418_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_418_, 0, v___x_416_);
lean_ctor_set(v___x_418_, 1, v___x_417_);
return v___x_418_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___lam__0___boxed(lean_object* v_self_419_, lean_object* v_col_420_, lean_object* v___x_421_, lean_object* v___x_422_, lean_object* v___x_423_, lean_object* v___y_424_, lean_object* v___y_425_, lean_object* v___y_426_, lean_object* v___y_427_, lean_object* v___y_428_, lean_object* v___y_429_, lean_object* v___y_430_){
_start:
{
uint8_t v___x_7363__boxed_431_; lean_object* v_res_432_; 
v___x_7363__boxed_431_ = lean_unbox(v___x_422_);
v_res_432_ = l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___lam__0(v_self_419_, v_col_420_, v___x_421_, v___x_7363__boxed_431_, v___x_423_, v___y_424_, v___y_425_, v___y_426_, v___y_427_, v___y_428_, v___y_429_);
lean_dec_ref(v___y_428_);
lean_dec(v___y_427_);
lean_dec(v___y_426_);
lean_dec(v___y_425_);
return v_res_432_;
}
}
static lean_object* _init_l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___closed__0(void){
_start:
{
lean_object* v___x_433_; 
v___x_433_ = l_Lake_OptDataKind_anonymous___redArg();
return v___x_433_;
}
}
static lean_object* _init_l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___closed__2(void){
_start:
{
lean_object* v___x_436_; lean_object* v___x_437_; lean_object* v___x_438_; 
v___x_436_ = lean_box(0);
v___x_437_ = lean_unsigned_to_nat(16u);
v___x_438_ = lean_mk_array(v___x_437_, v___x_436_);
return v___x_438_;
}
}
static lean_object* _init_l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___closed__3(void){
_start:
{
lean_object* v___x_439_; lean_object* v___x_440_; lean_object* v___x_441_; 
v___x_439_ = lean_obj_once(&l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___closed__2, &l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___closed__2_once, _init_l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___closed__2);
v___x_440_ = lean_unsigned_to_nat(0u);
v___x_441_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_441_, 0, v___x_440_);
lean_ctor_set(v___x_441_, 1, v___x_439_);
return v___x_441_;
}
}
static lean_object* _init_l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___closed__4(void){
_start:
{
uint8_t v___x_442_; lean_object* v___x_443_; lean_object* v___x_444_; lean_object* v_col_445_; 
v___x_442_ = 0;
v___x_443_ = lean_obj_once(&l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___closed__3, &l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___closed__3_once, _init_l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___closed__3);
v___x_444_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___closed__1));
v_col_445_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v_col_445_, 0, v___x_444_);
lean_ctor_set(v_col_445_, 1, v___x_443_);
lean_ctor_set_uint8(v_col_445_, sizeof(void*)*2, v___x_442_);
return v_col_445_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules(lean_object* v_self_446_, lean_object* v_a_447_, lean_object* v_a_448_, lean_object* v_a_449_, lean_object* v_a_450_, lean_object* v_a_451_, lean_object* v_a_452_){
_start:
{
lean_object* v___x_454_; lean_object* v___x_455_; uint8_t v___x_456_; lean_object* v_col_457_; lean_object* v___x_458_; lean_object* v___f_459_; lean_object* v___x_460_; 
v___x_454_ = lean_obj_once(&l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___closed__0, &l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___closed__0_once, _init_l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___closed__0);
v___x_455_ = lean_unsigned_to_nat(0u);
v___x_456_ = 0;
v_col_457_ = lean_obj_once(&l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___closed__4, &l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___closed__4_once, _init_l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___closed__4);
v___x_458_ = lean_box(v___x_456_);
v___f_459_ = lean_alloc_closure((void*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___lam__0___boxed), 12, 5);
lean_closure_set(v___f_459_, 0, v_self_446_);
lean_closure_set(v___f_459_, 1, v_col_457_);
lean_closure_set(v___f_459_, 2, v___x_455_);
lean_closure_set(v___f_459_, 3, v___x_458_);
lean_closure_set(v___f_459_, 4, v___x_454_);
v___x_460_ = l_Lake_ensureJob___redArg(v___x_454_, v___f_459_, v_a_447_, v_a_448_, v_a_449_, v_a_450_, v_a_451_, v_a_452_);
return v___x_460_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___boxed(lean_object* v_self_461_, lean_object* v_a_462_, lean_object* v_a_463_, lean_object* v_a_464_, lean_object* v_a_465_, lean_object* v_a_466_, lean_object* v_a_467_, lean_object* v_a_468_){
_start:
{
lean_object* v_res_469_; 
v_res_469_ = l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules(v_self_461_, v_a_462_, v_a_463_, v_a_464_, v_a_465_, v_a_466_, v_a_467_);
lean_dec_ref(v_a_466_);
lean_dec(v_a_465_);
lean_dec(v_a_464_);
lean_dec(v_a_463_);
return v_res_469_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_formatQuery___at___00__private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig_spec__0_spec__0(lean_object* v_as_471_, size_t v_i_472_, size_t v_stop_473_, lean_object* v_b_474_){
_start:
{
uint8_t v___x_475_; 
v___x_475_ = lean_usize_dec_eq(v_i_472_, v_stop_473_);
if (v___x_475_ == 0)
{
lean_object* v___x_476_; lean_object* v_name_477_; uint8_t v___x_478_; lean_object* v___x_479_; lean_object* v___x_480_; lean_object* v___x_481_; lean_object* v___x_482_; size_t v___x_483_; size_t v___x_484_; 
v___x_476_ = lean_array_uget_borrowed(v_as_471_, v_i_472_);
v_name_477_ = lean_ctor_get(v___x_476_, 1);
v___x_478_ = 1;
lean_inc(v_name_477_);
v___x_479_ = l_Lean_Name_toString(v_name_477_, v___x_478_);
v___x_480_ = lean_string_append(v_b_474_, v___x_479_);
lean_dec_ref(v___x_479_);
v___x_481_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_formatQuery___at___00__private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig_spec__0_spec__0___closed__0));
v___x_482_ = lean_string_append(v___x_480_, v___x_481_);
v___x_483_ = ((size_t)1ULL);
v___x_484_ = lean_usize_add(v_i_472_, v___x_483_);
v_i_472_ = v___x_484_;
v_b_474_ = v___x_482_;
goto _start;
}
else
{
return v_b_474_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_formatQuery___at___00__private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig_spec__0_spec__0___boxed(lean_object* v_as_486_, lean_object* v_i_487_, lean_object* v_stop_488_, lean_object* v_b_489_){
_start:
{
size_t v_i_boxed_490_; size_t v_stop_boxed_491_; lean_object* v_res_492_; 
v_i_boxed_490_ = lean_unbox_usize(v_i_487_);
lean_dec(v_i_487_);
v_stop_boxed_491_ = lean_unbox_usize(v_stop_488_);
lean_dec(v_stop_488_);
v_res_492_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_formatQuery___at___00__private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig_spec__0_spec__0(v_as_486_, v_i_boxed_490_, v_stop_boxed_491_, v_b_489_);
lean_dec_ref(v_as_486_);
return v_res_492_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lake_formatQuery___at___00__private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig_spec__0_spec__1_spec__2(size_t v_sz_493_, size_t v_i_494_, lean_object* v_bs_495_){
_start:
{
uint8_t v___x_496_; 
v___x_496_ = lean_usize_dec_lt(v_i_494_, v_sz_493_);
if (v___x_496_ == 0)
{
lean_object* v___x_497_; 
v___x_497_ = l_unsafeCast___redArg(v_bs_495_);
lean_dec_ref(v_bs_495_);
return v___x_497_;
}
else
{
lean_object* v_v_498_; lean_object* v___x_499_; lean_object* v_name_500_; lean_object* v___x_501_; lean_object* v_bs_x27_502_; lean_object* v___x_503_; lean_object* v___x_504_; size_t v___x_505_; size_t v___x_506_; lean_object* v___x_507_; lean_object* v___x_508_; 
v_v_498_ = lean_array_uget_borrowed(v_bs_495_, v_i_494_);
v___x_499_ = l_unsafeCast___redArg(v_v_498_);
v_name_500_ = lean_ctor_get(v___x_499_, 1);
lean_inc(v_name_500_);
lean_dec(v___x_499_);
v___x_501_ = lean_unsigned_to_nat(0u);
v_bs_x27_502_ = lean_array_uset(v_bs_495_, v_i_494_, v___x_501_);
v___x_503_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_name_500_, v___x_496_);
v___x_504_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_504_, 0, v___x_503_);
v___x_505_ = ((size_t)1ULL);
v___x_506_ = lean_usize_add(v_i_494_, v___x_505_);
v___x_507_ = l_unsafeCast___redArg(v___x_504_);
lean_dec_ref_known(v___x_504_, 1);
v___x_508_ = lean_array_uset(v_bs_x27_502_, v_i_494_, v___x_507_);
v_i_494_ = v___x_506_;
v_bs_495_ = v___x_508_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lake_formatQuery___at___00__private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig_spec__0_spec__1_spec__2___boxed(lean_object* v_sz_510_, lean_object* v_i_511_, lean_object* v_bs_512_){
_start:
{
size_t v_sz_boxed_513_; size_t v_i_boxed_514_; lean_object* v_res_515_; 
v_sz_boxed_513_ = lean_unbox_usize(v_sz_510_);
lean_dec(v_sz_510_);
v_i_boxed_514_ = lean_unbox_usize(v_i_511_);
lean_dec(v_i_511_);
v_res_515_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lake_formatQuery___at___00__private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig_spec__0_spec__1_spec__2(v_sz_boxed_513_, v_i_boxed_514_, v_bs_512_);
return v_res_515_;
}
}
LEAN_EXPORT lean_object* l_Lean_Array_toJson___at___00Lake_formatQuery___at___00__private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig_spec__0_spec__1(lean_object* v_a_516_){
_start:
{
size_t v_sz_517_; size_t v___x_518_; lean_object* v___x_519_; lean_object* v___x_520_; lean_object* v___x_521_; lean_object* v___x_522_; 
v_sz_517_ = lean_array_size(v_a_516_);
v___x_518_ = ((size_t)0ULL);
v___x_519_ = l_unsafeCast___redArg(v_a_516_);
v___x_520_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lake_formatQuery___at___00__private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig_spec__0_spec__1_spec__2(v_sz_517_, v___x_518_, v___x_519_);
v___x_521_ = l_unsafeCast___redArg(v___x_520_);
lean_dec_ref(v___x_520_);
v___x_522_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_522_, 0, v___x_521_);
return v___x_522_;
}
}
LEAN_EXPORT lean_object* l_Lean_Array_toJson___at___00Lake_formatQuery___at___00__private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig_spec__0_spec__1___boxed(lean_object* v_a_523_){
_start:
{
lean_object* v_res_524_; 
v_res_524_ = l_Lean_Array_toJson___at___00Lake_formatQuery___at___00__private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig_spec__0_spec__1(v_a_523_);
lean_dec_ref(v_a_523_);
return v_res_524_;
}
}
LEAN_EXPORT lean_object* l_Lake_formatQuery___at___00__private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig_spec__0(uint8_t v_fmt_525_, lean_object* v_a_526_){
_start:
{
lean_object* v___y_528_; 
if (v_fmt_525_ == 0)
{
lean_object* v___x_535_; lean_object* v___x_536_; lean_object* v___x_537_; uint8_t v___x_538_; 
v___x_535_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___lam__0___closed__0));
v___x_536_ = lean_unsigned_to_nat(0u);
v___x_537_ = lean_array_get_size(v_a_526_);
v___x_538_ = lean_nat_dec_lt(v___x_536_, v___x_537_);
if (v___x_538_ == 0)
{
v___y_528_ = v___x_535_;
goto v___jp_527_;
}
else
{
size_t v___x_539_; size_t v___x_540_; lean_object* v___x_541_; 
v___x_539_ = ((size_t)0ULL);
v___x_540_ = lean_usize_of_nat(v___x_537_);
v___x_541_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_formatQuery___at___00__private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig_spec__0_spec__0(v_a_526_, v___x_539_, v___x_540_, v___x_535_);
v___y_528_ = v___x_541_;
goto v___jp_527_;
}
}
else
{
lean_object* v___x_542_; lean_object* v___x_543_; 
v___x_542_ = l_Lean_Array_toJson___at___00Lake_formatQuery___at___00__private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig_spec__0_spec__1(v_a_526_);
v___x_543_ = l_Lean_Json_compress(v___x_542_);
return v___x_543_;
}
v___jp_527_:
{
lean_object* v___x_529_; lean_object* v___x_530_; lean_object* v___x_531_; lean_object* v___x_532_; lean_object* v___x_533_; lean_object* v___x_534_; 
v___x_529_ = lean_unsigned_to_nat(1u);
v___x_530_ = lean_unsigned_to_nat(0u);
v___x_531_ = lean_string_utf8_byte_size(v___y_528_);
lean_inc_ref(v___y_528_);
v___x_532_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_532_, 0, v___y_528_);
lean_ctor_set(v___x_532_, 1, v___x_530_);
lean_ctor_set(v___x_532_, 2, v___x_531_);
v___x_533_ = l_String_Slice_Pos_prevn(v___x_532_, v___x_531_, v___x_529_);
lean_dec_ref_known(v___x_532_, 3);
v___x_534_ = lean_string_utf8_extract_fast(v___y_528_, v___x_530_, v___x_533_);
lean_dec(v___x_533_);
lean_dec_ref(v___y_528_);
return v___x_534_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_formatQuery___at___00__private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig_spec__0___boxed(lean_object* v_fmt_544_, lean_object* v_a_545_){
_start:
{
uint8_t v_fmt_boxed_546_; lean_object* v_res_547_; 
v_fmt_boxed_546_ = lean_unbox(v_fmt_544_);
v_res_547_ = l_Lake_formatQuery___at___00__private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig_spec__0(v_fmt_boxed_546_, v_a_545_);
lean_dec_ref(v_a_545_);
return v_res_547_;
}
}
static lean_object* _init_l___private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig___closed__4(void){
_start:
{
uint8_t v___x_553_; lean_object* v___f_554_; uint8_t v___x_555_; lean_object* v___x_556_; lean_object* v___x_557_; lean_object* v___x_558_; lean_object* v___x_559_; 
v___x_553_ = 1;
v___f_554_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig___closed__0));
v___x_555_ = 0;
v___x_556_ = lean_obj_once(&l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___closed__0, &l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___closed__0_once, _init_l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___closed__0);
v___x_557_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig___closed__3));
v___x_558_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig___closed__2));
v___x_559_ = lean_alloc_ctor(0, 4, 2);
lean_ctor_set(v___x_559_, 0, v___x_558_);
lean_ctor_set(v___x_559_, 1, v___x_557_);
lean_ctor_set(v___x_559_, 2, v___x_556_);
lean_ctor_set(v___x_559_, 3, v___f_554_);
lean_ctor_set_uint8(v___x_559_, sizeof(void*)*4, v___x_555_);
lean_ctor_set_uint8(v___x_559_, sizeof(void*)*4 + 1, v___x_553_);
return v___x_559_;
}
}
static lean_object* _init_l___private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig(void){
_start:
{
lean_object* v___x_560_; 
v___x_560_ = lean_obj_once(&l___private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig___closed__4, &l___private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig___closed__4_once, _init_l___private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig___closed__4);
return v___x_560_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildLean_spec__0(lean_object* v_as_561_, size_t v_i_562_, size_t v_stop_563_, lean_object* v_b_564_, lean_object* v___y_565_, lean_object* v___y_566_, lean_object* v___y_567_, lean_object* v___y_568_, lean_object* v___y_569_, lean_object* v___y_570_){
_start:
{
uint8_t v___x_572_; 
v___x_572_ = lean_usize_dec_eq(v_i_562_, v_stop_563_);
if (v___x_572_ == 0)
{
lean_object* v___x_573_; lean_object* v_lib_574_; lean_object* v_pkg_575_; lean_object* v_name_576_; lean_object* v_keyName_577_; lean_object* v___x_578_; lean_object* v___x_579_; lean_object* v___x_580_; lean_object* v___x_581_; lean_object* v___x_582_; 
v___x_573_ = lean_array_uget_borrowed(v_as_561_, v_i_562_);
v_lib_574_ = lean_ctor_get(v___x_573_, 0);
v_pkg_575_ = lean_ctor_get(v_lib_574_, 0);
v_name_576_ = lean_ctor_get(v___x_573_, 1);
v_keyName_577_ = lean_ctor_get(v_pkg_575_, 2);
v___x_578_ = l_Lake_Module_leanArtsFacet;
lean_inc(v_name_576_);
lean_inc(v_keyName_577_);
v___x_579_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_579_, 0, v_keyName_577_);
lean_ctor_set(v___x_579_, 1, v_name_576_);
v___x_580_ = l_Lake_Module_keyword;
lean_inc(v___x_573_);
v___x_581_ = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(v___x_581_, 0, v___x_579_);
lean_ctor_set(v___x_581_, 1, v___x_580_);
lean_ctor_set(v___x_581_, 2, v___x_573_);
lean_ctor_set(v___x_581_, 3, v___x_578_);
lean_inc_ref(v___y_565_);
lean_inc_ref(v___y_569_);
lean_inc(v___y_568_);
lean_inc(v___y_567_);
lean_inc(v___y_566_);
v___x_582_ = lean_apply_7(v___y_565_, v___x_581_, v___y_566_, v___y_567_, v___y_568_, v___y_569_, v___y_570_, lean_box(0));
if (lean_obj_tag(v___x_582_) == 0)
{
lean_object* v_a_583_; lean_object* v_a_584_; lean_object* v___x_585_; size_t v___x_586_; size_t v___x_587_; 
v_a_583_ = lean_ctor_get(v___x_582_, 0);
lean_inc(v_a_583_);
v_a_584_ = lean_ctor_get(v___x_582_, 1);
lean_inc(v_a_584_);
lean_dec_ref_known(v___x_582_, 2);
v___x_585_ = l_Lake_Job_mix___redArg(v_b_564_, v_a_583_);
v___x_586_ = ((size_t)1ULL);
v___x_587_ = lean_usize_add(v_i_562_, v___x_586_);
v_i_562_ = v___x_587_;
v_b_564_ = v___x_585_;
v___y_570_ = v_a_584_;
goto _start;
}
else
{
lean_object* v_a_589_; lean_object* v_a_590_; lean_object* v___x_592_; uint8_t v_isShared_593_; uint8_t v_isSharedCheck_597_; 
lean_dec_ref(v___y_565_);
lean_dec_ref(v_b_564_);
v_a_589_ = lean_ctor_get(v___x_582_, 0);
v_a_590_ = lean_ctor_get(v___x_582_, 1);
v_isSharedCheck_597_ = !lean_is_exclusive(v___x_582_);
if (v_isSharedCheck_597_ == 0)
{
v___x_592_ = v___x_582_;
v_isShared_593_ = v_isSharedCheck_597_;
goto v_resetjp_591_;
}
else
{
lean_inc(v_a_590_);
lean_inc(v_a_589_);
lean_dec(v___x_582_);
v___x_592_ = lean_box(0);
v_isShared_593_ = v_isSharedCheck_597_;
goto v_resetjp_591_;
}
v_resetjp_591_:
{
lean_object* v___x_595_; 
if (v_isShared_593_ == 0)
{
v___x_595_ = v___x_592_;
goto v_reusejp_594_;
}
else
{
lean_object* v_reuseFailAlloc_596_; 
v_reuseFailAlloc_596_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_596_, 0, v_a_589_);
lean_ctor_set(v_reuseFailAlloc_596_, 1, v_a_590_);
v___x_595_ = v_reuseFailAlloc_596_;
goto v_reusejp_594_;
}
v_reusejp_594_:
{
return v___x_595_;
}
}
}
}
else
{
lean_object* v___x_598_; 
lean_dec_ref(v___y_565_);
v___x_598_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_598_, 0, v_b_564_);
lean_ctor_set(v___x_598_, 1, v___y_570_);
return v___x_598_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildLean_spec__0___boxed(lean_object* v_as_599_, lean_object* v_i_600_, lean_object* v_stop_601_, lean_object* v_b_602_, lean_object* v___y_603_, lean_object* v___y_604_, lean_object* v___y_605_, lean_object* v___y_606_, lean_object* v___y_607_, lean_object* v___y_608_, lean_object* v___y_609_){
_start:
{
size_t v_i_boxed_610_; size_t v_stop_boxed_611_; lean_object* v_res_612_; 
v_i_boxed_610_ = lean_unbox_usize(v_i_600_);
lean_dec(v_i_600_);
v_stop_boxed_611_ = lean_unbox_usize(v_stop_601_);
lean_dec(v_stop_601_);
v_res_612_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildLean_spec__0(v_as_599_, v_i_boxed_610_, v_stop_boxed_611_, v_b_602_, v___y_603_, v___y_604_, v___y_605_, v___y_606_, v___y_607_, v___y_608_);
lean_dec_ref(v___y_607_);
lean_dec(v___y_606_);
lean_dec(v___y_605_);
lean_dec(v___y_604_);
lean_dec_ref(v_as_599_);
return v_res_612_;
}
}
static lean_object* _init_l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildLean___closed__1(void){
_start:
{
lean_object* v___x_615_; lean_object* v___x_616_; uint8_t v___x_617_; uint8_t v___x_618_; lean_object* v___x_619_; lean_object* v___x_620_; 
v___x_615_ = lean_unsigned_to_nat(0u);
v___x_616_ = lean_obj_once(&l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___lam__0___closed__2, &l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___lam__0___closed__2_once, _init_l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___lam__0___closed__2);
v___x_617_ = 0;
v___x_618_ = 0;
v___x_619_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildLean___closed__0));
v___x_620_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_620_, 0, v___x_619_);
lean_ctor_set(v___x_620_, 1, v___x_616_);
lean_ctor_set(v___x_620_, 2, v___x_615_);
lean_ctor_set_uint8(v___x_620_, sizeof(void*)*3, v___x_618_);
lean_ctor_set_uint8(v___x_620_, sizeof(void*)*3 + 1, v___x_617_);
return v___x_620_;
}
}
static lean_object* _init_l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildLean___closed__2(void){
_start:
{
lean_object* v___x_621_; lean_object* v___x_622_; lean_object* v___x_623_; 
v___x_621_ = lean_obj_once(&l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildLean___closed__1, &l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildLean___closed__1_once, _init_l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildLean___closed__1);
v___x_622_ = lean_box(0);
v___x_623_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_623_, 0, v___x_622_);
lean_ctor_set(v___x_623_, 1, v___x_621_);
return v___x_623_;
}
}
static lean_object* _init_l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildLean___closed__3(void){
_start:
{
lean_object* v___x_624_; lean_object* v___x_625_; 
v___x_624_ = lean_obj_once(&l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildLean___closed__2, &l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildLean___closed__2_once, _init_l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildLean___closed__2);
v___x_625_ = lean_task_pure(v___x_624_);
return v___x_625_;
}
}
static lean_object* _init_l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildLean___closed__4(void){
_start:
{
uint8_t v___x_626_; lean_object* v___x_627_; lean_object* v___x_628_; lean_object* v___x_629_; lean_object* v___x_630_; 
v___x_626_ = 0;
v___x_627_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___lam__0___closed__0));
v___x_628_ = lean_obj_once(&l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___closed__0, &l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___closed__0_once, _init_l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___closed__0);
v___x_629_ = lean_obj_once(&l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildLean___closed__3, &l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildLean___closed__3_once, _init_l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildLean___closed__3);
v___x_630_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_630_, 0, v___x_629_);
lean_ctor_set(v___x_630_, 1, v___x_628_);
lean_ctor_set(v___x_630_, 2, v___x_627_);
lean_ctor_set_uint8(v___x_630_, sizeof(void*)*3, v___x_626_);
return v___x_630_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildLean(lean_object* v_self_631_, lean_object* v_a_632_, lean_object* v_a_633_, lean_object* v_a_634_, lean_object* v_a_635_, lean_object* v_a_636_, lean_object* v_a_637_){
_start:
{
lean_object* v_pkg_639_; lean_object* v_name_640_; lean_object* v_keyName_641_; lean_object* v___x_642_; lean_object* v___x_643_; lean_object* v___x_644_; lean_object* v___x_645_; lean_object* v___x_646_; 
v_pkg_639_ = lean_ctor_get(v_self_631_, 0);
v_name_640_ = lean_ctor_get(v_self_631_, 1);
v_keyName_641_ = lean_ctor_get(v_pkg_639_, 2);
v___x_642_ = l_Lake_LeanLib_modulesFacet;
lean_inc(v_name_640_);
lean_inc(v_keyName_641_);
v___x_643_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_643_, 0, v_keyName_641_);
lean_ctor_set(v___x_643_, 1, v_name_640_);
v___x_644_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig___closed__2));
v___x_645_ = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(v___x_645_, 0, v___x_643_);
lean_ctor_set(v___x_645_, 1, v___x_644_);
lean_ctor_set(v___x_645_, 2, v_self_631_);
lean_ctor_set(v___x_645_, 3, v___x_642_);
lean_inc_ref(v_a_632_);
lean_inc_ref(v_a_636_);
lean_inc(v_a_635_);
lean_inc(v_a_634_);
lean_inc(v_a_633_);
v___x_646_ = lean_apply_7(v_a_632_, v___x_645_, v_a_633_, v_a_634_, v_a_635_, v_a_636_, v_a_637_, lean_box(0));
if (lean_obj_tag(v___x_646_) == 0)
{
lean_object* v_a_647_; lean_object* v_a_648_; lean_object* v___x_649_; 
v_a_647_ = lean_ctor_get(v___x_646_, 0);
lean_inc(v_a_647_);
v_a_648_ = lean_ctor_get(v___x_646_, 1);
lean_inc(v_a_648_);
lean_dec_ref_known(v___x_646_, 2);
v___x_649_ = l_Lake_Job_await___redArg(v_a_647_, v_a_648_);
if (lean_obj_tag(v___x_649_) == 0)
{
lean_object* v_a_650_; lean_object* v_a_651_; lean_object* v___x_653_; uint8_t v_isShared_654_; uint8_t v_isSharedCheck_672_; 
v_a_650_ = lean_ctor_get(v___x_649_, 0);
v_a_651_ = lean_ctor_get(v___x_649_, 1);
v_isSharedCheck_672_ = !lean_is_exclusive(v___x_649_);
if (v_isSharedCheck_672_ == 0)
{
v___x_653_ = v___x_649_;
v_isShared_654_ = v_isSharedCheck_672_;
goto v_resetjp_652_;
}
else
{
lean_inc(v_a_651_);
lean_inc(v_a_650_);
lean_dec(v___x_649_);
v___x_653_ = lean_box(0);
v_isShared_654_ = v_isSharedCheck_672_;
goto v_resetjp_652_;
}
v_resetjp_652_:
{
lean_object* v___x_655_; lean_object* v___x_656_; lean_object* v___x_657_; uint8_t v___x_658_; 
v___x_655_ = lean_unsigned_to_nat(0u);
v___x_656_ = lean_obj_once(&l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildLean___closed__4, &l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildLean___closed__4_once, _init_l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildLean___closed__4);
v___x_657_ = lean_array_get_size(v_a_650_);
v___x_658_ = lean_nat_dec_lt(v___x_655_, v___x_657_);
if (v___x_658_ == 0)
{
lean_object* v___x_660_; 
lean_dec(v_a_650_);
lean_dec_ref(v_a_632_);
if (v_isShared_654_ == 0)
{
lean_ctor_set(v___x_653_, 0, v___x_656_);
v___x_660_ = v___x_653_;
goto v_reusejp_659_;
}
else
{
lean_object* v_reuseFailAlloc_661_; 
v_reuseFailAlloc_661_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_661_, 0, v___x_656_);
lean_ctor_set(v_reuseFailAlloc_661_, 1, v_a_651_);
v___x_660_ = v_reuseFailAlloc_661_;
goto v_reusejp_659_;
}
v_reusejp_659_:
{
return v___x_660_;
}
}
else
{
uint8_t v___x_662_; 
v___x_662_ = lean_nat_dec_le(v___x_657_, v___x_657_);
if (v___x_662_ == 0)
{
if (v___x_658_ == 0)
{
lean_object* v___x_664_; 
lean_dec(v_a_650_);
lean_dec_ref(v_a_632_);
if (v_isShared_654_ == 0)
{
lean_ctor_set(v___x_653_, 0, v___x_656_);
v___x_664_ = v___x_653_;
goto v_reusejp_663_;
}
else
{
lean_object* v_reuseFailAlloc_665_; 
v_reuseFailAlloc_665_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_665_, 0, v___x_656_);
lean_ctor_set(v_reuseFailAlloc_665_, 1, v_a_651_);
v___x_664_ = v_reuseFailAlloc_665_;
goto v_reusejp_663_;
}
v_reusejp_663_:
{
return v___x_664_;
}
}
else
{
size_t v___x_666_; size_t v___x_667_; lean_object* v___x_668_; 
lean_del_object(v___x_653_);
v___x_666_ = ((size_t)0ULL);
v___x_667_ = lean_usize_of_nat(v___x_657_);
v___x_668_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildLean_spec__0(v_a_650_, v___x_666_, v___x_667_, v___x_656_, v_a_632_, v_a_633_, v_a_634_, v_a_635_, v_a_636_, v_a_651_);
lean_dec(v_a_650_);
return v___x_668_;
}
}
else
{
size_t v___x_669_; size_t v___x_670_; lean_object* v___x_671_; 
lean_del_object(v___x_653_);
v___x_669_ = ((size_t)0ULL);
v___x_670_ = lean_usize_of_nat(v___x_657_);
v___x_671_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildLean_spec__0(v_a_650_, v___x_669_, v___x_670_, v___x_656_, v_a_632_, v_a_633_, v_a_634_, v_a_635_, v_a_636_, v_a_651_);
lean_dec(v_a_650_);
return v___x_671_;
}
}
}
}
else
{
lean_object* v_a_673_; lean_object* v_a_674_; lean_object* v___x_676_; uint8_t v_isShared_677_; uint8_t v_isSharedCheck_681_; 
lean_dec_ref(v_a_632_);
v_a_673_ = lean_ctor_get(v___x_649_, 0);
v_a_674_ = lean_ctor_get(v___x_649_, 1);
v_isSharedCheck_681_ = !lean_is_exclusive(v___x_649_);
if (v_isSharedCheck_681_ == 0)
{
v___x_676_ = v___x_649_;
v_isShared_677_ = v_isSharedCheck_681_;
goto v_resetjp_675_;
}
else
{
lean_inc(v_a_674_);
lean_inc(v_a_673_);
lean_dec(v___x_649_);
v___x_676_ = lean_box(0);
v_isShared_677_ = v_isSharedCheck_681_;
goto v_resetjp_675_;
}
v_resetjp_675_:
{
lean_object* v___x_679_; 
if (v_isShared_677_ == 0)
{
v___x_679_ = v___x_676_;
goto v_reusejp_678_;
}
else
{
lean_object* v_reuseFailAlloc_680_; 
v_reuseFailAlloc_680_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_680_, 0, v_a_673_);
lean_ctor_set(v_reuseFailAlloc_680_, 1, v_a_674_);
v___x_679_ = v_reuseFailAlloc_680_;
goto v_reusejp_678_;
}
v_reusejp_678_:
{
return v___x_679_;
}
}
}
}
else
{
lean_object* v_a_682_; lean_object* v_a_683_; lean_object* v___x_685_; uint8_t v_isShared_686_; uint8_t v_isSharedCheck_690_; 
lean_dec_ref(v_a_632_);
v_a_682_ = lean_ctor_get(v___x_646_, 0);
v_a_683_ = lean_ctor_get(v___x_646_, 1);
v_isSharedCheck_690_ = !lean_is_exclusive(v___x_646_);
if (v_isSharedCheck_690_ == 0)
{
v___x_685_ = v___x_646_;
v_isShared_686_ = v_isSharedCheck_690_;
goto v_resetjp_684_;
}
else
{
lean_inc(v_a_683_);
lean_inc(v_a_682_);
lean_dec(v___x_646_);
v___x_685_ = lean_box(0);
v_isShared_686_ = v_isSharedCheck_690_;
goto v_resetjp_684_;
}
v_resetjp_684_:
{
lean_object* v___x_688_; 
if (v_isShared_686_ == 0)
{
v___x_688_ = v___x_685_;
goto v_reusejp_687_;
}
else
{
lean_object* v_reuseFailAlloc_689_; 
v_reuseFailAlloc_689_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_689_, 0, v_a_682_);
lean_ctor_set(v_reuseFailAlloc_689_, 1, v_a_683_);
v___x_688_ = v_reuseFailAlloc_689_;
goto v_reusejp_687_;
}
v_reusejp_687_:
{
return v___x_688_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildLean___boxed(lean_object* v_self_691_, lean_object* v_a_692_, lean_object* v_a_693_, lean_object* v_a_694_, lean_object* v_a_695_, lean_object* v_a_696_, lean_object* v_a_697_, lean_object* v_a_698_){
_start:
{
lean_object* v_res_699_; 
v_res_699_ = l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildLean(v_self_691_, v_a_692_, v_a_693_, v_a_694_, v_a_695_, v_a_696_, v_a_697_);
lean_dec_ref(v_a_696_);
lean_dec(v_a_695_);
lean_dec(v_a_694_);
lean_dec(v_a_693_);
return v_res_699_;
}
}
static lean_object* _init_l_Lake_formatQuery___at___00Lake_LeanLib_leanArtsFacetConfig_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_700_; lean_object* v___x_701_; 
v___x_700_ = lean_box(0);
v___x_701_ = l_Lean_Json_compress(v___x_700_);
return v___x_701_;
}
}
LEAN_EXPORT lean_object* l_Lake_formatQuery___at___00Lake_LeanLib_leanArtsFacetConfig_spec__0___redArg(uint8_t v_fmt_702_){
_start:
{
if (v_fmt_702_ == 0)
{
lean_object* v___x_703_; 
v___x_703_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___lam__0___closed__0));
return v___x_703_;
}
else
{
lean_object* v___x_704_; 
v___x_704_ = lean_obj_once(&l_Lake_formatQuery___at___00Lake_LeanLib_leanArtsFacetConfig_spec__0___redArg___closed__0, &l_Lake_formatQuery___at___00Lake_LeanLib_leanArtsFacetConfig_spec__0___redArg___closed__0_once, _init_l_Lake_formatQuery___at___00Lake_LeanLib_leanArtsFacetConfig_spec__0___redArg___closed__0);
return v___x_704_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_formatQuery___at___00Lake_LeanLib_leanArtsFacetConfig_spec__0___redArg___boxed(lean_object* v_fmt_705_){
_start:
{
uint8_t v_fmt_boxed_706_; lean_object* v_res_707_; 
v_fmt_boxed_706_ = lean_unbox(v_fmt_705_);
v_res_707_ = l_Lake_formatQuery___at___00Lake_LeanLib_leanArtsFacetConfig_spec__0___redArg(v_fmt_boxed_706_);
return v_res_707_;
}
}
LEAN_EXPORT lean_object* l_Lake_formatQuery___at___00Lake_LeanLib_leanArtsFacetConfig_spec__0(uint8_t v_fmt_708_, lean_object* v_a_709_){
_start:
{
lean_object* v___x_710_; 
v___x_710_ = l_Lake_formatQuery___at___00Lake_LeanLib_leanArtsFacetConfig_spec__0___redArg(v_fmt_708_);
return v___x_710_;
}
}
LEAN_EXPORT lean_object* l_Lake_formatQuery___at___00Lake_LeanLib_leanArtsFacetConfig_spec__0___boxed(lean_object* v_fmt_711_, lean_object* v_a_712_){
_start:
{
uint8_t v_fmt_boxed_713_; lean_object* v_res_714_; 
v_fmt_boxed_713_ = lean_unbox(v_fmt_711_);
v_res_714_ = l_Lake_formatQuery___at___00Lake_LeanLib_leanArtsFacetConfig_spec__0(v_fmt_boxed_713_, v_a_712_);
return v_res_714_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLib_leanArtsFacetConfig___lam__0(uint8_t v___y_715_, lean_object* v___y_716_){
_start:
{
lean_object* v___x_717_; 
v___x_717_ = l_Lake_formatQuery___at___00Lake_LeanLib_leanArtsFacetConfig_spec__0___redArg(v___y_715_);
return v___x_717_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLib_leanArtsFacetConfig___lam__0___boxed(lean_object* v___y_718_, lean_object* v___y_719_){
_start:
{
uint8_t v___y_68__boxed_720_; lean_object* v_res_721_; 
v___y_68__boxed_720_ = lean_unbox(v___y_718_);
v_res_721_ = l_Lake_LeanLib_leanArtsFacetConfig___lam__0(v___y_68__boxed_720_, v___y_719_);
return v_res_721_;
}
}
static lean_object* _init_l_Lake_LeanLib_leanArtsFacetConfig___closed__2(void){
_start:
{
lean_object* v___f_724_; uint8_t v___x_725_; lean_object* v___x_726_; lean_object* v___x_727_; lean_object* v___x_728_; lean_object* v___x_729_; 
v___f_724_ = ((lean_object*)(l_Lake_LeanLib_leanArtsFacetConfig___closed__0));
v___x_725_ = 1;
v___x_726_ = l_Lake_instDataKindUnit;
v___x_727_ = ((lean_object*)(l_Lake_LeanLib_leanArtsFacetConfig___closed__1));
v___x_728_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig___closed__2));
v___x_729_ = lean_alloc_ctor(0, 4, 2);
lean_ctor_set(v___x_729_, 0, v___x_728_);
lean_ctor_set(v___x_729_, 1, v___x_727_);
lean_ctor_set(v___x_729_, 2, v___x_726_);
lean_ctor_set(v___x_729_, 3, v___f_724_);
lean_ctor_set_uint8(v___x_729_, sizeof(void*)*4, v___x_725_);
lean_ctor_set_uint8(v___x_729_, sizeof(void*)*4 + 1, v___x_725_);
return v___x_729_;
}
}
static lean_object* _init_l_Lake_LeanLib_leanArtsFacetConfig(void){
_start:
{
lean_object* v___x_730_; 
v___x_730_ = lean_obj_once(&l_Lake_LeanLib_leanArtsFacetConfig___closed__2, &l_Lake_LeanLib_leanArtsFacetConfig___closed__2_once, _init_l_Lake_LeanLib_leanArtsFacetConfig___closed__2);
return v___x_730_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__0(lean_object* v_a_731_, lean_object* v_x_732_, lean_object* v___y_733_, lean_object* v___y_734_, lean_object* v___y_735_, lean_object* v___y_736_, lean_object* v___y_737_, lean_object* v___y_738_){
_start:
{
lean_object* v___x_740_; 
v___x_740_ = l_Lake_ModuleFacet_fetch___redArg(v_x_732_, v_a_731_, v___y_733_, v___y_734_, v___y_735_, v___y_736_, v___y_737_, v___y_738_);
return v___x_740_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__0___boxed(lean_object* v_a_741_, lean_object* v_x_742_, lean_object* v___y_743_, lean_object* v___y_744_, lean_object* v___y_745_, lean_object* v___y_746_, lean_object* v___y_747_, lean_object* v___y_748_, lean_object* v___y_749_){
_start:
{
lean_object* v_res_750_; 
v_res_750_ = l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__0(v_a_741_, v_x_742_, v___y_743_, v___y_744_, v___y_745_, v___y_746_, v___y_747_, v___y_748_);
lean_dec_ref(v___y_747_);
lean_dec(v___y_746_);
lean_dec(v___y_745_);
lean_dec(v___y_744_);
return v_res_750_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__1(uint8_t v_shouldExport_751_, lean_object* v___x_752_, lean_object* v_bs_753_, lean_object* v_a_754_, lean_object* v___y_755_, lean_object* v___y_756_, lean_object* v___y_757_, lean_object* v___y_758_, lean_object* v___y_759_, lean_object* v___y_760_){
_start:
{
lean_object* v_lib_762_; lean_object* v_config_763_; lean_object* v_nativeFacets_764_; lean_object* v___f_765_; lean_object* v___x_766_; lean_object* v___x_767_; size_t v_sz_768_; size_t v___x_769_; lean_object* v___x_770_; lean_object* v___x_771_; lean_object* v___x_191952__overap_772_; lean_object* v___x_773_; 
v_lib_762_ = lean_ctor_get(v_a_754_, 0);
v_config_763_ = lean_ctor_get(v_lib_762_, 2);
v_nativeFacets_764_ = lean_ctor_get(v_config_763_, 8);
lean_inc_ref(v_nativeFacets_764_);
v___f_765_ = lean_alloc_closure((void*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__0___boxed), 9, 1);
lean_closure_set(v___f_765_, 0, v_a_754_);
v___x_766_ = lean_box(v_shouldExport_751_);
v___x_767_ = lean_apply_1(v_nativeFacets_764_, v___x_766_);
v_sz_768_ = lean_array_size(v___x_767_);
v___x_769_ = ((size_t)0ULL);
v___x_770_ = l_unsafeCast___redArg(v___x_767_);
lean_dec_ref(v___x_767_);
v___x_771_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_752_, v___f_765_, v_sz_768_, v___x_769_, v___x_770_);
v___x_191952__overap_772_ = l_unsafeCast___redArg(v___x_771_);
lean_dec(v___x_771_);
lean_inc_ref(v___y_759_);
lean_inc(v___y_758_);
lean_inc(v___y_757_);
lean_inc(v___y_756_);
v___x_773_ = lean_apply_7(v___x_191952__overap_772_, v___y_755_, v___y_756_, v___y_757_, v___y_758_, v___y_759_, v___y_760_, lean_box(0));
if (lean_obj_tag(v___x_773_) == 0)
{
lean_object* v_a_774_; lean_object* v_a_775_; lean_object* v___x_777_; uint8_t v_isShared_778_; uint8_t v_isSharedCheck_783_; 
v_a_774_ = lean_ctor_get(v___x_773_, 0);
v_a_775_ = lean_ctor_get(v___x_773_, 1);
v_isSharedCheck_783_ = !lean_is_exclusive(v___x_773_);
if (v_isSharedCheck_783_ == 0)
{
v___x_777_ = v___x_773_;
v_isShared_778_ = v_isSharedCheck_783_;
goto v_resetjp_776_;
}
else
{
lean_inc(v_a_775_);
lean_inc(v_a_774_);
lean_dec(v___x_773_);
v___x_777_ = lean_box(0);
v_isShared_778_ = v_isSharedCheck_783_;
goto v_resetjp_776_;
}
v_resetjp_776_:
{
lean_object* v___x_779_; lean_object* v___x_781_; 
v___x_779_ = l_Array_append___redArg(v_bs_753_, v_a_774_);
lean_dec(v_a_774_);
if (v_isShared_778_ == 0)
{
lean_ctor_set(v___x_777_, 0, v___x_779_);
v___x_781_ = v___x_777_;
goto v_reusejp_780_;
}
else
{
lean_object* v_reuseFailAlloc_782_; 
v_reuseFailAlloc_782_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_782_, 0, v___x_779_);
lean_ctor_set(v_reuseFailAlloc_782_, 1, v_a_775_);
v___x_781_ = v_reuseFailAlloc_782_;
goto v_reusejp_780_;
}
v_reusejp_780_:
{
return v___x_781_;
}
}
}
else
{
lean_dec_ref(v_bs_753_);
return v___x_773_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__1___boxed(lean_object* v_shouldExport_784_, lean_object* v___x_785_, lean_object* v_bs_786_, lean_object* v_a_787_, lean_object* v___y_788_, lean_object* v___y_789_, lean_object* v___y_790_, lean_object* v___y_791_, lean_object* v___y_792_, lean_object* v___y_793_, lean_object* v___y_794_){
_start:
{
uint8_t v_shouldExport_boxed_795_; lean_object* v_res_796_; 
v_shouldExport_boxed_795_ = lean_unbox(v_shouldExport_784_);
v_res_796_ = l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__1(v_shouldExport_boxed_795_, v___x_785_, v_bs_786_, v_a_787_, v___y_788_, v___y_789_, v___y_790_, v___y_791_, v___y_792_, v___y_793_);
lean_dec_ref(v___y_792_);
lean_dec(v___y_791_);
lean_dec(v___y_790_);
lean_dec(v___y_789_);
return v_res_796_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__2(lean_object* v___x_797_, lean_object* v_pkg_798_, lean_object* v_x_799_, lean_object* v___y_800_, lean_object* v___y_801_, lean_object* v___y_802_, lean_object* v___y_803_, lean_object* v___y_804_, lean_object* v___y_805_){
_start:
{
lean_object* v___x_807_; 
v___x_807_ = l_Lake_Target_fetchIn___redArg(v___x_797_, v_pkg_798_, v_x_799_, v___y_800_, v___y_801_, v___y_802_, v___y_803_, v___y_804_, v___y_805_);
return v___x_807_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__2___boxed(lean_object* v___x_808_, lean_object* v_pkg_809_, lean_object* v_x_810_, lean_object* v___y_811_, lean_object* v___y_812_, lean_object* v___y_813_, lean_object* v___y_814_, lean_object* v___y_815_, lean_object* v___y_816_, lean_object* v___y_817_){
_start:
{
lean_object* v_res_818_; 
v_res_818_ = l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__2(v___x_808_, v_pkg_809_, v_x_810_, v___y_811_, v___y_812_, v___y_813_, v___y_814_, v___y_815_, v___y_816_);
lean_dec_ref(v___y_815_);
lean_dec(v___y_814_);
lean_dec(v___y_813_);
lean_dec(v___y_812_);
return v_res_818_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__3(lean_object* v_a_819_, lean_object* v_x_820_, lean_object* v___y_821_, lean_object* v___y_822_, lean_object* v___y_823_, lean_object* v___y_824_, lean_object* v___y_825_, lean_object* v___y_826_, lean_object* v___y_827_){
_start:
{
lean_object* v_log_829_; uint8_t v_action_830_; uint8_t v_wantsRebuild_831_; lean_object* v_trace_832_; lean_object* v_buildTime_833_; lean_object* v___x_834_; lean_object* v___x_835_; lean_object* v___x_836_; 
v_log_829_ = lean_ctor_get(v___y_827_, 0);
v_action_830_ = lean_ctor_get_uint8(v___y_827_, sizeof(void*)*3);
v_wantsRebuild_831_ = lean_ctor_get_uint8(v___y_827_, sizeof(void*)*3 + 1);
v_trace_832_ = lean_ctor_get(v___y_827_, 1);
v_buildTime_833_ = lean_ctor_get(v___y_827_, 2);
v___x_834_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_formatQuery___at___00__private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig_spec__0_spec__0___closed__0));
v___x_835_ = lean_string_append(v___y_821_, v___x_834_);
v___x_836_ = lean_io_prim_handle_put_str(v_a_819_, v___x_835_);
lean_dec_ref(v___x_835_);
if (lean_obj_tag(v___x_836_) == 0)
{
lean_object* v_a_837_; lean_object* v___x_838_; 
v_a_837_ = lean_ctor_get(v___x_836_, 0);
lean_inc(v_a_837_);
lean_dec_ref_known(v___x_836_, 1);
v___x_838_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_838_, 0, v_a_837_);
lean_ctor_set(v___x_838_, 1, v___y_827_);
return v___x_838_;
}
else
{
lean_object* v___x_840_; uint8_t v_isShared_841_; uint8_t v_isSharedCheck_852_; 
lean_inc(v_buildTime_833_);
lean_inc_ref(v_trace_832_);
lean_inc_ref(v_log_829_);
v_isSharedCheck_852_ = !lean_is_exclusive(v___y_827_);
if (v_isSharedCheck_852_ == 0)
{
lean_object* v_unused_853_; lean_object* v_unused_854_; lean_object* v_unused_855_; 
v_unused_853_ = lean_ctor_get(v___y_827_, 2);
lean_dec(v_unused_853_);
v_unused_854_ = lean_ctor_get(v___y_827_, 1);
lean_dec(v_unused_854_);
v_unused_855_ = lean_ctor_get(v___y_827_, 0);
lean_dec(v_unused_855_);
v___x_840_ = v___y_827_;
v_isShared_841_ = v_isSharedCheck_852_;
goto v_resetjp_839_;
}
else
{
lean_dec(v___y_827_);
v___x_840_ = lean_box(0);
v_isShared_841_ = v_isSharedCheck_852_;
goto v_resetjp_839_;
}
v_resetjp_839_:
{
lean_object* v_a_842_; lean_object* v___x_843_; uint8_t v___x_844_; lean_object* v___x_845_; lean_object* v___x_846_; lean_object* v___x_847_; lean_object* v___x_849_; 
v_a_842_ = lean_ctor_get(v___x_836_, 0);
lean_inc(v_a_842_);
lean_dec_ref_known(v___x_836_, 1);
v___x_843_ = lean_io_error_to_string(v_a_842_);
v___x_844_ = 3;
v___x_845_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_845_, 0, v___x_843_);
lean_ctor_set_uint8(v___x_845_, sizeof(void*)*1, v___x_844_);
v___x_846_ = lean_array_get_size(v_log_829_);
v___x_847_ = lean_array_push(v_log_829_, v___x_845_);
if (v_isShared_841_ == 0)
{
lean_ctor_set(v___x_840_, 0, v___x_847_);
v___x_849_ = v___x_840_;
goto v_reusejp_848_;
}
else
{
lean_object* v_reuseFailAlloc_851_; 
v_reuseFailAlloc_851_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_851_, 0, v___x_847_);
lean_ctor_set(v_reuseFailAlloc_851_, 1, v_trace_832_);
lean_ctor_set(v_reuseFailAlloc_851_, 2, v_buildTime_833_);
lean_ctor_set_uint8(v_reuseFailAlloc_851_, sizeof(void*)*3, v_action_830_);
lean_ctor_set_uint8(v_reuseFailAlloc_851_, sizeof(void*)*3 + 1, v_wantsRebuild_831_);
v___x_849_ = v_reuseFailAlloc_851_;
goto v_reusejp_848_;
}
v_reusejp_848_:
{
lean_object* v___x_850_; 
v___x_850_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_850_, 0, v___x_846_);
lean_ctor_set(v___x_850_, 1, v___x_849_);
return v___x_850_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__3___boxed(lean_object* v_a_856_, lean_object* v_x_857_, lean_object* v___y_858_, lean_object* v___y_859_, lean_object* v___y_860_, lean_object* v___y_861_, lean_object* v___y_862_, lean_object* v___y_863_, lean_object* v___y_864_, lean_object* v___y_865_){
_start:
{
lean_object* v_res_866_; 
v_res_866_ = l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__3(v_a_856_, v_x_857_, v___y_858_, v___y_859_, v___y_860_, v___y_861_, v___y_862_, v___y_863_, v___y_864_);
lean_dec_ref(v___y_863_);
lean_dec(v___y_862_);
lean_dec(v___y_861_);
lean_dec(v___y_860_);
lean_dec_ref(v___y_859_);
lean_dec(v_a_856_);
return v_res_866_;
}
}
static lean_object* _init_l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___closed__6(void){
_start:
{
lean_object* v___x_874_; lean_object* v___x_875_; lean_object* v___x_876_; lean_object* v___x_877_; 
v___x_874_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___closed__3));
v___x_875_ = lean_unsigned_to_nat(5u);
v___x_876_ = lean_mk_empty_array_with_capacity(v___x_875_);
v___x_877_ = lean_array_push(v___x_876_, v___x_874_);
return v___x_877_;
}
}
static lean_object* _init_l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___closed__7(void){
_start:
{
lean_object* v___x_878_; lean_object* v___x_879_; lean_object* v___x_880_; 
v___x_878_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___closed__4));
v___x_879_ = lean_obj_once(&l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___closed__6, &l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___closed__6_once, _init_l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___closed__6);
v___x_880_ = lean_array_push(v___x_879_, v___x_878_);
return v___x_880_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4(uint8_t v_bootstrap_883_, lean_object* v___y_884_, lean_object* v_oFiles_885_, uint8_t v_shouldExport_886_, uint8_t v___x_887_, lean_object* v___x_888_, size_t v___x_889_, lean_object* v___y_890_, lean_object* v___y_891_, lean_object* v___y_892_, lean_object* v___y_893_, lean_object* v___y_894_, lean_object* v___y_895_){
_start:
{
if (v_bootstrap_883_ == 0)
{
lean_object* v_log_897_; uint8_t v_action_898_; uint8_t v_wantsRebuild_899_; lean_object* v_trace_900_; lean_object* v_buildTime_901_; lean_object* v___x_903_; uint8_t v_isShared_904_; uint8_t v_isSharedCheck_947_; 
lean_dec_ref(v___y_890_);
lean_dec_ref(v___x_888_);
v_log_897_ = lean_ctor_get(v___y_895_, 0);
v_action_898_ = lean_ctor_get_uint8(v___y_895_, sizeof(void*)*3);
v_wantsRebuild_899_ = lean_ctor_get_uint8(v___y_895_, sizeof(void*)*3 + 1);
v_trace_900_ = lean_ctor_get(v___y_895_, 1);
v_buildTime_901_ = lean_ctor_get(v___y_895_, 2);
v_isSharedCheck_947_ = !lean_is_exclusive(v___y_895_);
if (v_isSharedCheck_947_ == 0)
{
v___x_903_ = v___y_895_;
v_isShared_904_ = v_isSharedCheck_947_;
goto v_resetjp_902_;
}
else
{
lean_inc(v_buildTime_901_);
lean_inc(v_trace_900_);
lean_inc(v_log_897_);
lean_dec(v___y_895_);
v___x_903_ = lean_box(0);
v_isShared_904_ = v_isSharedCheck_947_;
goto v_resetjp_902_;
}
v_resetjp_902_:
{
lean_object* v_toContext_905_; lean_object* v___x_906_; lean_object* v___x_907_; lean_object* v___x_908_; lean_object* v___x_909_; lean_object* v___x_910_; lean_object* v___x_911_; lean_object* v___x_912_; lean_object* v___x_913_; lean_object* v___x_914_; lean_object* v___x_915_; lean_object* v___x_916_; lean_object* v___x_917_; lean_object* v___x_918_; lean_object* v_lakeEnv_919_; lean_object* v_lean_920_; lean_object* v_ar_921_; lean_object* v___x_922_; 
v_toContext_905_ = lean_ctor_get(v___y_894_, 1);
v___x_906_ = l_unsafeCast___redArg(v_toContext_905_);
v___x_907_ = l_unsafeCast___redArg(v___x_906_);
lean_dec(v___x_906_);
v___x_908_ = l_unsafeCast___redArg(v___x_907_);
lean_dec(v___x_907_);
v___x_909_ = l_unsafeCast___redArg(v___x_908_);
lean_dec(v___x_908_);
v___x_910_ = l_unsafeCast___redArg(v___x_909_);
lean_dec(v___x_909_);
v___x_911_ = l_unsafeCast___redArg(v___x_910_);
lean_dec(v___x_910_);
v___x_912_ = l_unsafeCast___redArg(v___x_911_);
lean_dec(v___x_911_);
v___x_913_ = l_unsafeCast___redArg(v___x_912_);
lean_dec(v___x_912_);
v___x_914_ = l_unsafeCast___redArg(v___x_913_);
lean_dec(v___x_913_);
v___x_915_ = l_unsafeCast___redArg(v___x_914_);
lean_dec(v___x_914_);
v___x_916_ = l_unsafeCast___redArg(v___x_915_);
lean_dec(v___x_915_);
v___x_917_ = l_unsafeCast___redArg(v___x_916_);
lean_dec(v___x_916_);
v___x_918_ = l_unsafeCast___redArg(v___x_917_);
lean_dec(v___x_917_);
v_lakeEnv_919_ = lean_ctor_get(v___x_918_, 0);
lean_inc_ref(v_lakeEnv_919_);
lean_dec(v___x_918_);
v_lean_920_ = lean_ctor_get(v_lakeEnv_919_, 1);
lean_inc_ref(v_lean_920_);
lean_dec_ref(v_lakeEnv_919_);
v_ar_921_ = lean_ctor_get(v_lean_920_, 13);
lean_inc_ref(v_ar_921_);
lean_dec_ref(v_lean_920_);
v___x_922_ = l_Lake_compileStaticLib(v___y_884_, v_oFiles_885_, v_ar_921_, v_bootstrap_883_, v_log_897_);
lean_dec_ref(v_oFiles_885_);
if (lean_obj_tag(v___x_922_) == 0)
{
lean_object* v_a_923_; lean_object* v_a_924_; lean_object* v___x_926_; uint8_t v_isShared_927_; uint8_t v_isSharedCheck_934_; 
v_a_923_ = lean_ctor_get(v___x_922_, 0);
v_a_924_ = lean_ctor_get(v___x_922_, 1);
v_isSharedCheck_934_ = !lean_is_exclusive(v___x_922_);
if (v_isSharedCheck_934_ == 0)
{
v___x_926_ = v___x_922_;
v_isShared_927_ = v_isSharedCheck_934_;
goto v_resetjp_925_;
}
else
{
lean_inc(v_a_924_);
lean_inc(v_a_923_);
lean_dec(v___x_922_);
v___x_926_ = lean_box(0);
v_isShared_927_ = v_isSharedCheck_934_;
goto v_resetjp_925_;
}
v_resetjp_925_:
{
lean_object* v___x_929_; 
if (v_isShared_904_ == 0)
{
lean_ctor_set(v___x_903_, 0, v_a_924_);
v___x_929_ = v___x_903_;
goto v_reusejp_928_;
}
else
{
lean_object* v_reuseFailAlloc_933_; 
v_reuseFailAlloc_933_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_933_, 0, v_a_924_);
lean_ctor_set(v_reuseFailAlloc_933_, 1, v_trace_900_);
lean_ctor_set(v_reuseFailAlloc_933_, 2, v_buildTime_901_);
lean_ctor_set_uint8(v_reuseFailAlloc_933_, sizeof(void*)*3, v_action_898_);
lean_ctor_set_uint8(v_reuseFailAlloc_933_, sizeof(void*)*3 + 1, v_wantsRebuild_899_);
v___x_929_ = v_reuseFailAlloc_933_;
goto v_reusejp_928_;
}
v_reusejp_928_:
{
lean_object* v___x_931_; 
if (v_isShared_927_ == 0)
{
lean_ctor_set(v___x_926_, 1, v___x_929_);
v___x_931_ = v___x_926_;
goto v_reusejp_930_;
}
else
{
lean_object* v_reuseFailAlloc_932_; 
v_reuseFailAlloc_932_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_932_, 0, v_a_923_);
lean_ctor_set(v_reuseFailAlloc_932_, 1, v___x_929_);
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
else
{
lean_object* v_a_935_; lean_object* v_a_936_; lean_object* v___x_938_; uint8_t v_isShared_939_; uint8_t v_isSharedCheck_946_; 
v_a_935_ = lean_ctor_get(v___x_922_, 0);
v_a_936_ = lean_ctor_get(v___x_922_, 1);
v_isSharedCheck_946_ = !lean_is_exclusive(v___x_922_);
if (v_isSharedCheck_946_ == 0)
{
v___x_938_ = v___x_922_;
v_isShared_939_ = v_isSharedCheck_946_;
goto v_resetjp_937_;
}
else
{
lean_inc(v_a_936_);
lean_inc(v_a_935_);
lean_dec(v___x_922_);
v___x_938_ = lean_box(0);
v_isShared_939_ = v_isSharedCheck_946_;
goto v_resetjp_937_;
}
v_resetjp_937_:
{
lean_object* v___x_941_; 
if (v_isShared_904_ == 0)
{
lean_ctor_set(v___x_903_, 0, v_a_936_);
v___x_941_ = v___x_903_;
goto v_reusejp_940_;
}
else
{
lean_object* v_reuseFailAlloc_945_; 
v_reuseFailAlloc_945_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_945_, 0, v_a_936_);
lean_ctor_set(v_reuseFailAlloc_945_, 1, v_trace_900_);
lean_ctor_set(v_reuseFailAlloc_945_, 2, v_buildTime_901_);
lean_ctor_set_uint8(v_reuseFailAlloc_945_, sizeof(void*)*3, v_action_898_);
lean_ctor_set_uint8(v_reuseFailAlloc_945_, sizeof(void*)*3 + 1, v_wantsRebuild_899_);
v___x_941_ = v_reuseFailAlloc_945_;
goto v_reusejp_940_;
}
v_reusejp_940_:
{
lean_object* v___x_943_; 
if (v_isShared_939_ == 0)
{
lean_ctor_set(v___x_938_, 1, v___x_941_);
v___x_943_ = v___x_938_;
goto v_reusejp_942_;
}
else
{
lean_object* v_reuseFailAlloc_944_; 
v_reuseFailAlloc_944_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_944_, 0, v_a_935_);
lean_ctor_set(v_reuseFailAlloc_944_, 1, v___x_941_);
v___x_943_ = v_reuseFailAlloc_944_;
goto v_reusejp_942_;
}
v_reusejp_942_:
{
return v___x_943_;
}
}
}
}
}
}
else
{
uint8_t v___x_948_; 
v___x_948_ = l_System_Platform_isOSX;
if (v___x_948_ == 0)
{
uint8_t v___x_949_; 
lean_dec_ref(v___y_890_);
lean_dec_ref(v___x_888_);
v___x_949_ = l_System_Platform_isWindows;
if (v___x_949_ == 0)
{
lean_object* v_log_950_; uint8_t v_action_951_; uint8_t v_wantsRebuild_952_; lean_object* v_trace_953_; lean_object* v_buildTime_954_; lean_object* v___x_956_; uint8_t v_isShared_957_; uint8_t v_isSharedCheck_1000_; 
v_log_950_ = lean_ctor_get(v___y_895_, 0);
v_action_951_ = lean_ctor_get_uint8(v___y_895_, sizeof(void*)*3);
v_wantsRebuild_952_ = lean_ctor_get_uint8(v___y_895_, sizeof(void*)*3 + 1);
v_trace_953_ = lean_ctor_get(v___y_895_, 1);
v_buildTime_954_ = lean_ctor_get(v___y_895_, 2);
v_isSharedCheck_1000_ = !lean_is_exclusive(v___y_895_);
if (v_isSharedCheck_1000_ == 0)
{
v___x_956_ = v___y_895_;
v_isShared_957_ = v_isSharedCheck_1000_;
goto v_resetjp_955_;
}
else
{
lean_inc(v_buildTime_954_);
lean_inc(v_trace_953_);
lean_inc(v_log_950_);
lean_dec(v___y_895_);
v___x_956_ = lean_box(0);
v_isShared_957_ = v_isSharedCheck_1000_;
goto v_resetjp_955_;
}
v_resetjp_955_:
{
lean_object* v_toContext_958_; lean_object* v___x_959_; lean_object* v___x_960_; lean_object* v___x_961_; lean_object* v___x_962_; lean_object* v___x_963_; lean_object* v___x_964_; lean_object* v___x_965_; lean_object* v___x_966_; lean_object* v___x_967_; lean_object* v___x_968_; lean_object* v___x_969_; lean_object* v___x_970_; lean_object* v___x_971_; lean_object* v_lakeEnv_972_; lean_object* v_lean_973_; lean_object* v_ar_974_; lean_object* v___x_975_; 
v_toContext_958_ = lean_ctor_get(v___y_894_, 1);
v___x_959_ = l_unsafeCast___redArg(v_toContext_958_);
v___x_960_ = l_unsafeCast___redArg(v___x_959_);
lean_dec(v___x_959_);
v___x_961_ = l_unsafeCast___redArg(v___x_960_);
lean_dec(v___x_960_);
v___x_962_ = l_unsafeCast___redArg(v___x_961_);
lean_dec(v___x_961_);
v___x_963_ = l_unsafeCast___redArg(v___x_962_);
lean_dec(v___x_962_);
v___x_964_ = l_unsafeCast___redArg(v___x_963_);
lean_dec(v___x_963_);
v___x_965_ = l_unsafeCast___redArg(v___x_964_);
lean_dec(v___x_964_);
v___x_966_ = l_unsafeCast___redArg(v___x_965_);
lean_dec(v___x_965_);
v___x_967_ = l_unsafeCast___redArg(v___x_966_);
lean_dec(v___x_966_);
v___x_968_ = l_unsafeCast___redArg(v___x_967_);
lean_dec(v___x_967_);
v___x_969_ = l_unsafeCast___redArg(v___x_968_);
lean_dec(v___x_968_);
v___x_970_ = l_unsafeCast___redArg(v___x_969_);
lean_dec(v___x_969_);
v___x_971_ = l_unsafeCast___redArg(v___x_970_);
lean_dec(v___x_970_);
v_lakeEnv_972_ = lean_ctor_get(v___x_971_, 0);
lean_inc_ref(v_lakeEnv_972_);
lean_dec(v___x_971_);
v_lean_973_ = lean_ctor_get(v_lakeEnv_972_, 1);
lean_inc_ref(v_lean_973_);
lean_dec_ref(v_lakeEnv_972_);
v_ar_974_ = lean_ctor_get(v_lean_973_, 13);
lean_inc_ref(v_ar_974_);
lean_dec_ref(v_lean_973_);
v___x_975_ = l_Lake_compileStaticLib(v___y_884_, v_oFiles_885_, v_ar_974_, v___x_949_, v_log_950_);
lean_dec_ref(v_oFiles_885_);
if (lean_obj_tag(v___x_975_) == 0)
{
lean_object* v_a_976_; lean_object* v_a_977_; lean_object* v___x_979_; uint8_t v_isShared_980_; uint8_t v_isSharedCheck_987_; 
v_a_976_ = lean_ctor_get(v___x_975_, 0);
v_a_977_ = lean_ctor_get(v___x_975_, 1);
v_isSharedCheck_987_ = !lean_is_exclusive(v___x_975_);
if (v_isSharedCheck_987_ == 0)
{
v___x_979_ = v___x_975_;
v_isShared_980_ = v_isSharedCheck_987_;
goto v_resetjp_978_;
}
else
{
lean_inc(v_a_977_);
lean_inc(v_a_976_);
lean_dec(v___x_975_);
v___x_979_ = lean_box(0);
v_isShared_980_ = v_isSharedCheck_987_;
goto v_resetjp_978_;
}
v_resetjp_978_:
{
lean_object* v___x_982_; 
if (v_isShared_957_ == 0)
{
lean_ctor_set(v___x_956_, 0, v_a_977_);
v___x_982_ = v___x_956_;
goto v_reusejp_981_;
}
else
{
lean_object* v_reuseFailAlloc_986_; 
v_reuseFailAlloc_986_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_986_, 0, v_a_977_);
lean_ctor_set(v_reuseFailAlloc_986_, 1, v_trace_953_);
lean_ctor_set(v_reuseFailAlloc_986_, 2, v_buildTime_954_);
lean_ctor_set_uint8(v_reuseFailAlloc_986_, sizeof(void*)*3, v_action_951_);
lean_ctor_set_uint8(v_reuseFailAlloc_986_, sizeof(void*)*3 + 1, v_wantsRebuild_952_);
v___x_982_ = v_reuseFailAlloc_986_;
goto v_reusejp_981_;
}
v_reusejp_981_:
{
lean_object* v___x_984_; 
if (v_isShared_980_ == 0)
{
lean_ctor_set(v___x_979_, 1, v___x_982_);
v___x_984_ = v___x_979_;
goto v_reusejp_983_;
}
else
{
lean_object* v_reuseFailAlloc_985_; 
v_reuseFailAlloc_985_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_985_, 0, v_a_976_);
lean_ctor_set(v_reuseFailAlloc_985_, 1, v___x_982_);
v___x_984_ = v_reuseFailAlloc_985_;
goto v_reusejp_983_;
}
v_reusejp_983_:
{
return v___x_984_;
}
}
}
}
else
{
lean_object* v_a_988_; lean_object* v_a_989_; lean_object* v___x_991_; uint8_t v_isShared_992_; uint8_t v_isSharedCheck_999_; 
v_a_988_ = lean_ctor_get(v___x_975_, 0);
v_a_989_ = lean_ctor_get(v___x_975_, 1);
v_isSharedCheck_999_ = !lean_is_exclusive(v___x_975_);
if (v_isSharedCheck_999_ == 0)
{
v___x_991_ = v___x_975_;
v_isShared_992_ = v_isSharedCheck_999_;
goto v_resetjp_990_;
}
else
{
lean_inc(v_a_989_);
lean_inc(v_a_988_);
lean_dec(v___x_975_);
v___x_991_ = lean_box(0);
v_isShared_992_ = v_isSharedCheck_999_;
goto v_resetjp_990_;
}
v_resetjp_990_:
{
lean_object* v___x_994_; 
if (v_isShared_957_ == 0)
{
lean_ctor_set(v___x_956_, 0, v_a_989_);
v___x_994_ = v___x_956_;
goto v_reusejp_993_;
}
else
{
lean_object* v_reuseFailAlloc_998_; 
v_reuseFailAlloc_998_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_998_, 0, v_a_989_);
lean_ctor_set(v_reuseFailAlloc_998_, 1, v_trace_953_);
lean_ctor_set(v_reuseFailAlloc_998_, 2, v_buildTime_954_);
lean_ctor_set_uint8(v_reuseFailAlloc_998_, sizeof(void*)*3, v_action_951_);
lean_ctor_set_uint8(v_reuseFailAlloc_998_, sizeof(void*)*3 + 1, v_wantsRebuild_952_);
v___x_994_ = v_reuseFailAlloc_998_;
goto v_reusejp_993_;
}
v_reusejp_993_:
{
lean_object* v___x_996_; 
if (v_isShared_992_ == 0)
{
lean_ctor_set(v___x_991_, 1, v___x_994_);
v___x_996_ = v___x_991_;
goto v_reusejp_995_;
}
else
{
lean_object* v_reuseFailAlloc_997_; 
v_reuseFailAlloc_997_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_997_, 0, v_a_988_);
lean_ctor_set(v_reuseFailAlloc_997_, 1, v___x_994_);
v___x_996_ = v_reuseFailAlloc_997_;
goto v_reusejp_995_;
}
v_reusejp_995_:
{
return v___x_996_;
}
}
}
}
}
}
else
{
lean_object* v_log_1001_; uint8_t v_action_1002_; uint8_t v_wantsRebuild_1003_; lean_object* v_trace_1004_; lean_object* v_buildTime_1005_; lean_object* v___x_1007_; uint8_t v_isShared_1008_; uint8_t v_isSharedCheck_1051_; 
v_log_1001_ = lean_ctor_get(v___y_895_, 0);
v_action_1002_ = lean_ctor_get_uint8(v___y_895_, sizeof(void*)*3);
v_wantsRebuild_1003_ = lean_ctor_get_uint8(v___y_895_, sizeof(void*)*3 + 1);
v_trace_1004_ = lean_ctor_get(v___y_895_, 1);
v_buildTime_1005_ = lean_ctor_get(v___y_895_, 2);
v_isSharedCheck_1051_ = !lean_is_exclusive(v___y_895_);
if (v_isSharedCheck_1051_ == 0)
{
v___x_1007_ = v___y_895_;
v_isShared_1008_ = v_isSharedCheck_1051_;
goto v_resetjp_1006_;
}
else
{
lean_inc(v_buildTime_1005_);
lean_inc(v_trace_1004_);
lean_inc(v_log_1001_);
lean_dec(v___y_895_);
v___x_1007_ = lean_box(0);
v_isShared_1008_ = v_isSharedCheck_1051_;
goto v_resetjp_1006_;
}
v_resetjp_1006_:
{
lean_object* v_toContext_1009_; lean_object* v___x_1010_; lean_object* v___x_1011_; lean_object* v___x_1012_; lean_object* v___x_1013_; lean_object* v___x_1014_; lean_object* v___x_1015_; lean_object* v___x_1016_; lean_object* v___x_1017_; lean_object* v___x_1018_; lean_object* v___x_1019_; lean_object* v___x_1020_; lean_object* v___x_1021_; lean_object* v___x_1022_; lean_object* v_lakeEnv_1023_; lean_object* v_lean_1024_; lean_object* v_ar_1025_; lean_object* v___x_1026_; 
v_toContext_1009_ = lean_ctor_get(v___y_894_, 1);
v___x_1010_ = l_unsafeCast___redArg(v_toContext_1009_);
v___x_1011_ = l_unsafeCast___redArg(v___x_1010_);
lean_dec(v___x_1010_);
v___x_1012_ = l_unsafeCast___redArg(v___x_1011_);
lean_dec(v___x_1011_);
v___x_1013_ = l_unsafeCast___redArg(v___x_1012_);
lean_dec(v___x_1012_);
v___x_1014_ = l_unsafeCast___redArg(v___x_1013_);
lean_dec(v___x_1013_);
v___x_1015_ = l_unsafeCast___redArg(v___x_1014_);
lean_dec(v___x_1014_);
v___x_1016_ = l_unsafeCast___redArg(v___x_1015_);
lean_dec(v___x_1015_);
v___x_1017_ = l_unsafeCast___redArg(v___x_1016_);
lean_dec(v___x_1016_);
v___x_1018_ = l_unsafeCast___redArg(v___x_1017_);
lean_dec(v___x_1017_);
v___x_1019_ = l_unsafeCast___redArg(v___x_1018_);
lean_dec(v___x_1018_);
v___x_1020_ = l_unsafeCast___redArg(v___x_1019_);
lean_dec(v___x_1019_);
v___x_1021_ = l_unsafeCast___redArg(v___x_1020_);
lean_dec(v___x_1020_);
v___x_1022_ = l_unsafeCast___redArg(v___x_1021_);
lean_dec(v___x_1021_);
v_lakeEnv_1023_ = lean_ctor_get(v___x_1022_, 0);
lean_inc_ref(v_lakeEnv_1023_);
lean_dec(v___x_1022_);
v_lean_1024_ = lean_ctor_get(v_lakeEnv_1023_, 1);
lean_inc_ref(v_lean_1024_);
lean_dec_ref(v_lakeEnv_1023_);
v_ar_1025_ = lean_ctor_get(v_lean_1024_, 13);
lean_inc_ref(v_ar_1025_);
lean_dec_ref(v_lean_1024_);
v___x_1026_ = l_Lake_compileStaticLib(v___y_884_, v_oFiles_885_, v_ar_1025_, v_shouldExport_886_, v_log_1001_);
lean_dec_ref(v_oFiles_885_);
if (lean_obj_tag(v___x_1026_) == 0)
{
lean_object* v_a_1027_; lean_object* v_a_1028_; lean_object* v___x_1030_; uint8_t v_isShared_1031_; uint8_t v_isSharedCheck_1038_; 
v_a_1027_ = lean_ctor_get(v___x_1026_, 0);
v_a_1028_ = lean_ctor_get(v___x_1026_, 1);
v_isSharedCheck_1038_ = !lean_is_exclusive(v___x_1026_);
if (v_isSharedCheck_1038_ == 0)
{
v___x_1030_ = v___x_1026_;
v_isShared_1031_ = v_isSharedCheck_1038_;
goto v_resetjp_1029_;
}
else
{
lean_inc(v_a_1028_);
lean_inc(v_a_1027_);
lean_dec(v___x_1026_);
v___x_1030_ = lean_box(0);
v_isShared_1031_ = v_isSharedCheck_1038_;
goto v_resetjp_1029_;
}
v_resetjp_1029_:
{
lean_object* v___x_1033_; 
if (v_isShared_1008_ == 0)
{
lean_ctor_set(v___x_1007_, 0, v_a_1028_);
v___x_1033_ = v___x_1007_;
goto v_reusejp_1032_;
}
else
{
lean_object* v_reuseFailAlloc_1037_; 
v_reuseFailAlloc_1037_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_1037_, 0, v_a_1028_);
lean_ctor_set(v_reuseFailAlloc_1037_, 1, v_trace_1004_);
lean_ctor_set(v_reuseFailAlloc_1037_, 2, v_buildTime_1005_);
lean_ctor_set_uint8(v_reuseFailAlloc_1037_, sizeof(void*)*3, v_action_1002_);
lean_ctor_set_uint8(v_reuseFailAlloc_1037_, sizeof(void*)*3 + 1, v_wantsRebuild_1003_);
v___x_1033_ = v_reuseFailAlloc_1037_;
goto v_reusejp_1032_;
}
v_reusejp_1032_:
{
lean_object* v___x_1035_; 
if (v_isShared_1031_ == 0)
{
lean_ctor_set(v___x_1030_, 1, v___x_1033_);
v___x_1035_ = v___x_1030_;
goto v_reusejp_1034_;
}
else
{
lean_object* v_reuseFailAlloc_1036_; 
v_reuseFailAlloc_1036_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1036_, 0, v_a_1027_);
lean_ctor_set(v_reuseFailAlloc_1036_, 1, v___x_1033_);
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
lean_object* v_a_1039_; lean_object* v_a_1040_; lean_object* v___x_1042_; uint8_t v_isShared_1043_; uint8_t v_isSharedCheck_1050_; 
v_a_1039_ = lean_ctor_get(v___x_1026_, 0);
v_a_1040_ = lean_ctor_get(v___x_1026_, 1);
v_isSharedCheck_1050_ = !lean_is_exclusive(v___x_1026_);
if (v_isSharedCheck_1050_ == 0)
{
v___x_1042_ = v___x_1026_;
v_isShared_1043_ = v_isSharedCheck_1050_;
goto v_resetjp_1041_;
}
else
{
lean_inc(v_a_1040_);
lean_inc(v_a_1039_);
lean_dec(v___x_1026_);
v___x_1042_ = lean_box(0);
v_isShared_1043_ = v_isSharedCheck_1050_;
goto v_resetjp_1041_;
}
v_resetjp_1041_:
{
lean_object* v___x_1045_; 
if (v_isShared_1008_ == 0)
{
lean_ctor_set(v___x_1007_, 0, v_a_1040_);
v___x_1045_ = v___x_1007_;
goto v_reusejp_1044_;
}
else
{
lean_object* v_reuseFailAlloc_1049_; 
v_reuseFailAlloc_1049_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_1049_, 0, v_a_1040_);
lean_ctor_set(v_reuseFailAlloc_1049_, 1, v_trace_1004_);
lean_ctor_set(v_reuseFailAlloc_1049_, 2, v_buildTime_1005_);
lean_ctor_set_uint8(v_reuseFailAlloc_1049_, sizeof(void*)*3, v_action_1002_);
lean_ctor_set_uint8(v_reuseFailAlloc_1049_, sizeof(void*)*3 + 1, v_wantsRebuild_1003_);
v___x_1045_ = v_reuseFailAlloc_1049_;
goto v_reusejp_1044_;
}
v_reusejp_1044_:
{
lean_object* v___x_1047_; 
if (v_isShared_1043_ == 0)
{
lean_ctor_set(v___x_1042_, 1, v___x_1045_);
v___x_1047_ = v___x_1042_;
goto v_reusejp_1046_;
}
else
{
lean_object* v_reuseFailAlloc_1048_; 
v_reuseFailAlloc_1048_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1048_, 0, v_a_1039_);
lean_ctor_set(v_reuseFailAlloc_1048_, 1, v___x_1045_);
v___x_1047_ = v_reuseFailAlloc_1048_;
goto v_reusejp_1046_;
}
v_reusejp_1046_:
{
return v___x_1047_;
}
}
}
}
}
}
}
else
{
lean_object* v_log_1052_; uint8_t v_action_1053_; uint8_t v_wantsRebuild_1054_; lean_object* v_trace_1055_; lean_object* v_buildTime_1056_; lean_object* v___x_1057_; 
v_log_1052_ = lean_ctor_get(v___y_895_, 0);
v_action_1053_ = lean_ctor_get_uint8(v___y_895_, sizeof(void*)*3);
v_wantsRebuild_1054_ = lean_ctor_get_uint8(v___y_895_, sizeof(void*)*3 + 1);
v_trace_1055_ = lean_ctor_get(v___y_895_, 1);
v_buildTime_1056_ = lean_ctor_get(v___y_895_, 2);
lean_inc_ref(v___y_884_);
v___x_1057_ = l_Lake_createParentDirs(v___y_884_);
if (lean_obj_tag(v___x_1057_) == 0)
{
lean_object* v___x_1058_; lean_object* v___x_1059_; lean_object* v_a_1061_; lean_object* v___y_1108_; uint8_t v___x_1110_; lean_object* v___x_1111_; 
lean_dec_ref_known(v___x_1057_, 1);
v___x_1058_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___closed__0));
lean_inc_ref(v___y_884_);
v___x_1059_ = l_System_FilePath_addExtension(v___y_884_, v___x_1058_);
v___x_1110_ = 1;
v___x_1111_ = lean_io_prim_handle_mk(v___x_1059_, v___x_1110_);
if (lean_obj_tag(v___x_1111_) == 0)
{
lean_object* v_a_1112_; lean_object* v___x_1113_; lean_object* v___x_1114_; uint8_t v___x_1115_; 
v_a_1112_ = lean_ctor_get(v___x_1111_, 0);
lean_inc(v_a_1112_);
lean_dec_ref_known(v___x_1111_, 1);
v___x_1113_ = lean_unsigned_to_nat(0u);
v___x_1114_ = lean_array_get_size(v_oFiles_885_);
v___x_1115_ = lean_nat_dec_lt(v___x_1113_, v___x_1114_);
if (v___x_1115_ == 0)
{
lean_dec(v_a_1112_);
lean_dec_ref(v___y_890_);
lean_dec_ref(v___x_888_);
lean_dec_ref(v_oFiles_885_);
v_a_1061_ = v___y_895_;
goto v___jp_1060_;
}
else
{
lean_object* v___f_1116_; lean_object* v___x_1117_; uint8_t v___x_1118_; 
v___f_1116_ = lean_alloc_closure((void*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__3___boxed), 10, 1);
lean_closure_set(v___f_1116_, 0, v_a_1112_);
v___x_1117_ = lean_box(0);
v___x_1118_ = lean_nat_dec_le(v___x_1114_, v___x_1114_);
if (v___x_1118_ == 0)
{
if (v___x_1115_ == 0)
{
lean_dec_ref(v___f_1116_);
lean_dec_ref(v___y_890_);
lean_dec_ref(v___x_888_);
lean_dec_ref(v_oFiles_885_);
v_a_1061_ = v___y_895_;
goto v___jp_1060_;
}
else
{
size_t v___x_1119_; lean_object* v___x_192149__overap_1120_; lean_object* v___x_1121_; 
v___x_1119_ = lean_usize_of_nat(v___x_1114_);
v___x_192149__overap_1120_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_888_, v___f_1116_, v_oFiles_885_, v___x_889_, v___x_1119_, v___x_1117_);
lean_inc_ref(v___y_894_);
lean_inc(v___y_893_);
lean_inc(v___y_892_);
lean_inc(v___y_891_);
v___x_1121_ = lean_apply_7(v___x_192149__overap_1120_, v___y_890_, v___y_891_, v___y_892_, v___y_893_, v___y_894_, v___y_895_, lean_box(0));
v___y_1108_ = v___x_1121_;
goto v___jp_1107_;
}
}
else
{
size_t v___x_1122_; lean_object* v___x_192151__overap_1123_; lean_object* v___x_1124_; 
v___x_1122_ = lean_usize_of_nat(v___x_1114_);
v___x_192151__overap_1123_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_888_, v___f_1116_, v_oFiles_885_, v___x_889_, v___x_1122_, v___x_1117_);
lean_inc_ref(v___y_894_);
lean_inc(v___y_893_);
lean_inc(v___y_892_);
lean_inc(v___y_891_);
v___x_1124_ = lean_apply_7(v___x_192151__overap_1123_, v___y_890_, v___y_891_, v___y_892_, v___y_893_, v___y_894_, v___y_895_, lean_box(0));
v___y_1108_ = v___x_1124_;
goto v___jp_1107_;
}
}
}
else
{
lean_object* v___x_1126_; uint8_t v_isShared_1127_; uint8_t v_isSharedCheck_1138_; 
lean_inc(v_buildTime_1056_);
lean_inc_ref(v_trace_1055_);
lean_inc_ref(v_log_1052_);
lean_dec_ref(v___x_1059_);
lean_dec_ref(v___y_890_);
lean_dec_ref(v___x_888_);
lean_dec_ref(v_oFiles_885_);
lean_dec_ref(v___y_884_);
v_isSharedCheck_1138_ = !lean_is_exclusive(v___y_895_);
if (v_isSharedCheck_1138_ == 0)
{
lean_object* v_unused_1139_; lean_object* v_unused_1140_; lean_object* v_unused_1141_; 
v_unused_1139_ = lean_ctor_get(v___y_895_, 2);
lean_dec(v_unused_1139_);
v_unused_1140_ = lean_ctor_get(v___y_895_, 1);
lean_dec(v_unused_1140_);
v_unused_1141_ = lean_ctor_get(v___y_895_, 0);
lean_dec(v_unused_1141_);
v___x_1126_ = v___y_895_;
v_isShared_1127_ = v_isSharedCheck_1138_;
goto v_resetjp_1125_;
}
else
{
lean_dec(v___y_895_);
v___x_1126_ = lean_box(0);
v_isShared_1127_ = v_isSharedCheck_1138_;
goto v_resetjp_1125_;
}
v_resetjp_1125_:
{
lean_object* v_a_1128_; lean_object* v___x_1129_; uint8_t v___x_1130_; lean_object* v___x_1131_; lean_object* v___x_1132_; lean_object* v___x_1133_; lean_object* v___x_1135_; 
v_a_1128_ = lean_ctor_get(v___x_1111_, 0);
lean_inc(v_a_1128_);
lean_dec_ref_known(v___x_1111_, 1);
v___x_1129_ = lean_io_error_to_string(v_a_1128_);
v___x_1130_ = 3;
v___x_1131_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1131_, 0, v___x_1129_);
lean_ctor_set_uint8(v___x_1131_, sizeof(void*)*1, v___x_1130_);
v___x_1132_ = lean_array_get_size(v_log_1052_);
v___x_1133_ = lean_array_push(v_log_1052_, v___x_1131_);
if (v_isShared_1127_ == 0)
{
lean_ctor_set(v___x_1126_, 0, v___x_1133_);
v___x_1135_ = v___x_1126_;
goto v_reusejp_1134_;
}
else
{
lean_object* v_reuseFailAlloc_1137_; 
v_reuseFailAlloc_1137_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_1137_, 0, v___x_1133_);
lean_ctor_set(v_reuseFailAlloc_1137_, 1, v_trace_1055_);
lean_ctor_set(v_reuseFailAlloc_1137_, 2, v_buildTime_1056_);
lean_ctor_set_uint8(v_reuseFailAlloc_1137_, sizeof(void*)*3, v_action_1053_);
lean_ctor_set_uint8(v_reuseFailAlloc_1137_, sizeof(void*)*3 + 1, v_wantsRebuild_1054_);
v___x_1135_ = v_reuseFailAlloc_1137_;
goto v_reusejp_1134_;
}
v_reusejp_1134_:
{
lean_object* v___x_1136_; 
v___x_1136_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1136_, 0, v___x_1132_);
lean_ctor_set(v___x_1136_, 1, v___x_1135_);
return v___x_1136_;
}
}
}
v___jp_1060_:
{
lean_object* v___x_1062_; lean_object* v_log_1063_; uint8_t v_action_1064_; uint8_t v_wantsRebuild_1065_; lean_object* v_trace_1066_; lean_object* v_buildTime_1067_; lean_object* v___x_1069_; uint8_t v_isShared_1070_; uint8_t v_isSharedCheck_1106_; 
v___x_1062_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___closed__1));
v_log_1063_ = lean_ctor_get(v_a_1061_, 0);
v_action_1064_ = lean_ctor_get_uint8(v_a_1061_, sizeof(void*)*3);
v_wantsRebuild_1065_ = lean_ctor_get_uint8(v_a_1061_, sizeof(void*)*3 + 1);
v_trace_1066_ = lean_ctor_get(v_a_1061_, 1);
v_buildTime_1067_ = lean_ctor_get(v_a_1061_, 2);
v_isSharedCheck_1106_ = !lean_is_exclusive(v_a_1061_);
if (v_isSharedCheck_1106_ == 0)
{
v___x_1069_ = v_a_1061_;
v_isShared_1070_ = v_isSharedCheck_1106_;
goto v_resetjp_1068_;
}
else
{
lean_inc(v_buildTime_1067_);
lean_inc(v_trace_1066_);
lean_inc(v_log_1063_);
lean_dec(v_a_1061_);
v___x_1069_ = lean_box(0);
v_isShared_1070_ = v_isSharedCheck_1106_;
goto v_resetjp_1068_;
}
v_resetjp_1068_:
{
lean_object* v___x_1071_; lean_object* v___x_1072_; lean_object* v___x_1073_; lean_object* v___x_1074_; lean_object* v___x_1075_; lean_object* v___x_1076_; lean_object* v___x_1077_; lean_object* v___x_1078_; uint8_t v___x_1079_; lean_object* v___x_1080_; lean_object* v___x_1081_; 
v___x_1071_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___closed__2));
v___x_1072_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___closed__5));
v___x_1073_ = lean_obj_once(&l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___closed__7, &l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___closed__7_once, _init_l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___closed__7);
v___x_1074_ = lean_array_push(v___x_1073_, v___y_884_);
v___x_1075_ = lean_array_push(v___x_1074_, v___x_1072_);
v___x_1076_ = lean_array_push(v___x_1075_, v___x_1059_);
v___x_1077_ = lean_box(0);
v___x_1078_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___closed__8));
v___x_1079_ = 0;
v___x_1080_ = lean_alloc_ctor(0, 5, 2);
lean_ctor_set(v___x_1080_, 0, v___x_1062_);
lean_ctor_set(v___x_1080_, 1, v___x_1071_);
lean_ctor_set(v___x_1080_, 2, v___x_1076_);
lean_ctor_set(v___x_1080_, 3, v___x_1077_);
lean_ctor_set(v___x_1080_, 4, v___x_1078_);
lean_ctor_set_uint8(v___x_1080_, sizeof(void*)*5, v___x_887_);
lean_ctor_set_uint8(v___x_1080_, sizeof(void*)*5 + 1, v___x_1079_);
v___x_1081_ = l_Lake_proc(v___x_1080_, v___x_1079_, v___x_1077_, v_log_1063_);
if (lean_obj_tag(v___x_1081_) == 0)
{
lean_object* v_a_1082_; lean_object* v_a_1083_; lean_object* v___x_1085_; uint8_t v_isShared_1086_; uint8_t v_isSharedCheck_1093_; 
v_a_1082_ = lean_ctor_get(v___x_1081_, 0);
v_a_1083_ = lean_ctor_get(v___x_1081_, 1);
v_isSharedCheck_1093_ = !lean_is_exclusive(v___x_1081_);
if (v_isSharedCheck_1093_ == 0)
{
v___x_1085_ = v___x_1081_;
v_isShared_1086_ = v_isSharedCheck_1093_;
goto v_resetjp_1084_;
}
else
{
lean_inc(v_a_1083_);
lean_inc(v_a_1082_);
lean_dec(v___x_1081_);
v___x_1085_ = lean_box(0);
v_isShared_1086_ = v_isSharedCheck_1093_;
goto v_resetjp_1084_;
}
v_resetjp_1084_:
{
lean_object* v___x_1088_; 
if (v_isShared_1070_ == 0)
{
lean_ctor_set(v___x_1069_, 0, v_a_1083_);
v___x_1088_ = v___x_1069_;
goto v_reusejp_1087_;
}
else
{
lean_object* v_reuseFailAlloc_1092_; 
v_reuseFailAlloc_1092_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_1092_, 0, v_a_1083_);
lean_ctor_set(v_reuseFailAlloc_1092_, 1, v_trace_1066_);
lean_ctor_set(v_reuseFailAlloc_1092_, 2, v_buildTime_1067_);
lean_ctor_set_uint8(v_reuseFailAlloc_1092_, sizeof(void*)*3, v_action_1064_);
lean_ctor_set_uint8(v_reuseFailAlloc_1092_, sizeof(void*)*3 + 1, v_wantsRebuild_1065_);
v___x_1088_ = v_reuseFailAlloc_1092_;
goto v_reusejp_1087_;
}
v_reusejp_1087_:
{
lean_object* v___x_1090_; 
if (v_isShared_1086_ == 0)
{
lean_ctor_set(v___x_1085_, 1, v___x_1088_);
v___x_1090_ = v___x_1085_;
goto v_reusejp_1089_;
}
else
{
lean_object* v_reuseFailAlloc_1091_; 
v_reuseFailAlloc_1091_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1091_, 0, v_a_1082_);
lean_ctor_set(v_reuseFailAlloc_1091_, 1, v___x_1088_);
v___x_1090_ = v_reuseFailAlloc_1091_;
goto v_reusejp_1089_;
}
v_reusejp_1089_:
{
return v___x_1090_;
}
}
}
}
else
{
lean_object* v_a_1094_; lean_object* v_a_1095_; lean_object* v___x_1097_; uint8_t v_isShared_1098_; uint8_t v_isSharedCheck_1105_; 
v_a_1094_ = lean_ctor_get(v___x_1081_, 0);
v_a_1095_ = lean_ctor_get(v___x_1081_, 1);
v_isSharedCheck_1105_ = !lean_is_exclusive(v___x_1081_);
if (v_isSharedCheck_1105_ == 0)
{
v___x_1097_ = v___x_1081_;
v_isShared_1098_ = v_isSharedCheck_1105_;
goto v_resetjp_1096_;
}
else
{
lean_inc(v_a_1095_);
lean_inc(v_a_1094_);
lean_dec(v___x_1081_);
v___x_1097_ = lean_box(0);
v_isShared_1098_ = v_isSharedCheck_1105_;
goto v_resetjp_1096_;
}
v_resetjp_1096_:
{
lean_object* v___x_1100_; 
if (v_isShared_1070_ == 0)
{
lean_ctor_set(v___x_1069_, 0, v_a_1095_);
v___x_1100_ = v___x_1069_;
goto v_reusejp_1099_;
}
else
{
lean_object* v_reuseFailAlloc_1104_; 
v_reuseFailAlloc_1104_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_1104_, 0, v_a_1095_);
lean_ctor_set(v_reuseFailAlloc_1104_, 1, v_trace_1066_);
lean_ctor_set(v_reuseFailAlloc_1104_, 2, v_buildTime_1067_);
lean_ctor_set_uint8(v_reuseFailAlloc_1104_, sizeof(void*)*3, v_action_1064_);
lean_ctor_set_uint8(v_reuseFailAlloc_1104_, sizeof(void*)*3 + 1, v_wantsRebuild_1065_);
v___x_1100_ = v_reuseFailAlloc_1104_;
goto v_reusejp_1099_;
}
v_reusejp_1099_:
{
lean_object* v___x_1102_; 
if (v_isShared_1098_ == 0)
{
lean_ctor_set(v___x_1097_, 1, v___x_1100_);
v___x_1102_ = v___x_1097_;
goto v_reusejp_1101_;
}
else
{
lean_object* v_reuseFailAlloc_1103_; 
v_reuseFailAlloc_1103_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1103_, 0, v_a_1094_);
lean_ctor_set(v_reuseFailAlloc_1103_, 1, v___x_1100_);
v___x_1102_ = v_reuseFailAlloc_1103_;
goto v_reusejp_1101_;
}
v_reusejp_1101_:
{
return v___x_1102_;
}
}
}
}
}
}
v___jp_1107_:
{
if (lean_obj_tag(v___y_1108_) == 0)
{
lean_object* v_a_1109_; 
v_a_1109_ = lean_ctor_get(v___y_1108_, 1);
lean_inc(v_a_1109_);
lean_dec_ref_known(v___y_1108_, 2);
v_a_1061_ = v_a_1109_;
goto v___jp_1060_;
}
else
{
lean_dec_ref(v___x_1059_);
lean_dec_ref(v___y_884_);
return v___y_1108_;
}
}
}
else
{
lean_object* v___x_1143_; uint8_t v_isShared_1144_; uint8_t v_isSharedCheck_1155_; 
lean_inc(v_buildTime_1056_);
lean_inc_ref(v_trace_1055_);
lean_inc_ref(v_log_1052_);
lean_dec_ref(v___y_890_);
lean_dec_ref(v___x_888_);
lean_dec_ref(v_oFiles_885_);
lean_dec_ref(v___y_884_);
v_isSharedCheck_1155_ = !lean_is_exclusive(v___y_895_);
if (v_isSharedCheck_1155_ == 0)
{
lean_object* v_unused_1156_; lean_object* v_unused_1157_; lean_object* v_unused_1158_; 
v_unused_1156_ = lean_ctor_get(v___y_895_, 2);
lean_dec(v_unused_1156_);
v_unused_1157_ = lean_ctor_get(v___y_895_, 1);
lean_dec(v_unused_1157_);
v_unused_1158_ = lean_ctor_get(v___y_895_, 0);
lean_dec(v_unused_1158_);
v___x_1143_ = v___y_895_;
v_isShared_1144_ = v_isSharedCheck_1155_;
goto v_resetjp_1142_;
}
else
{
lean_dec(v___y_895_);
v___x_1143_ = lean_box(0);
v_isShared_1144_ = v_isSharedCheck_1155_;
goto v_resetjp_1142_;
}
v_resetjp_1142_:
{
lean_object* v_a_1145_; lean_object* v___x_1146_; uint8_t v___x_1147_; lean_object* v___x_1148_; lean_object* v___x_1149_; lean_object* v___x_1150_; lean_object* v___x_1152_; 
v_a_1145_ = lean_ctor_get(v___x_1057_, 0);
lean_inc(v_a_1145_);
lean_dec_ref_known(v___x_1057_, 1);
v___x_1146_ = lean_io_error_to_string(v_a_1145_);
v___x_1147_ = 3;
v___x_1148_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1148_, 0, v___x_1146_);
lean_ctor_set_uint8(v___x_1148_, sizeof(void*)*1, v___x_1147_);
v___x_1149_ = lean_array_get_size(v_log_1052_);
v___x_1150_ = lean_array_push(v_log_1052_, v___x_1148_);
if (v_isShared_1144_ == 0)
{
lean_ctor_set(v___x_1143_, 0, v___x_1150_);
v___x_1152_ = v___x_1143_;
goto v_reusejp_1151_;
}
else
{
lean_object* v_reuseFailAlloc_1154_; 
v_reuseFailAlloc_1154_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_1154_, 0, v___x_1150_);
lean_ctor_set(v_reuseFailAlloc_1154_, 1, v_trace_1055_);
lean_ctor_set(v_reuseFailAlloc_1154_, 2, v_buildTime_1056_);
lean_ctor_set_uint8(v_reuseFailAlloc_1154_, sizeof(void*)*3, v_action_1053_);
lean_ctor_set_uint8(v_reuseFailAlloc_1154_, sizeof(void*)*3 + 1, v_wantsRebuild_1054_);
v___x_1152_ = v_reuseFailAlloc_1154_;
goto v_reusejp_1151_;
}
v_reusejp_1151_:
{
lean_object* v___x_1153_; 
v___x_1153_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1153_, 0, v___x_1149_);
lean_ctor_set(v___x_1153_, 1, v___x_1152_);
return v___x_1153_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___boxed(lean_object* v_bootstrap_1159_, lean_object* v___y_1160_, lean_object* v_oFiles_1161_, lean_object* v_shouldExport_1162_, lean_object* v___x_1163_, lean_object* v___x_1164_, lean_object* v___x_1165_, lean_object* v___y_1166_, lean_object* v___y_1167_, lean_object* v___y_1168_, lean_object* v___y_1169_, lean_object* v___y_1170_, lean_object* v___y_1171_, lean_object* v___y_1172_){
_start:
{
uint8_t v_bootstrap_boxed_1173_; uint8_t v_shouldExport_boxed_1174_; uint8_t v___x_192525__boxed_1175_; size_t v___x_192527__boxed_1176_; lean_object* v_res_1177_; 
v_bootstrap_boxed_1173_ = lean_unbox(v_bootstrap_1159_);
v_shouldExport_boxed_1174_ = lean_unbox(v_shouldExport_1162_);
v___x_192525__boxed_1175_ = lean_unbox(v___x_1163_);
v___x_192527__boxed_1176_ = lean_unbox_usize(v___x_1165_);
lean_dec(v___x_1165_);
v_res_1177_ = l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4(v_bootstrap_boxed_1173_, v___y_1160_, v_oFiles_1161_, v_shouldExport_boxed_1174_, v___x_192525__boxed_1175_, v___x_1164_, v___x_192527__boxed_1176_, v___y_1166_, v___y_1167_, v___y_1168_, v___y_1169_, v___y_1170_, v___y_1171_);
lean_dec_ref(v___y_1170_);
lean_dec(v___y_1169_);
lean_dec(v___y_1168_);
lean_dec(v___y_1167_);
return v_res_1177_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__5(uint8_t v_bootstrap_1179_, lean_object* v___y_1180_, uint8_t v_shouldExport_1181_, uint8_t v___x_1182_, lean_object* v___x_1183_, size_t v___x_1184_, lean_object* v_oFiles_1185_, lean_object* v___y_1186_, lean_object* v___y_1187_, lean_object* v___y_1188_, lean_object* v___y_1189_, lean_object* v___y_1190_, lean_object* v___y_1191_){
_start:
{
lean_object* v___x_1193_; lean_object* v___x_1194_; lean_object* v___x_1195_; lean_object* v___x_1196_; lean_object* v___y_1197_; uint8_t v___x_1198_; lean_object* v___x_1199_; lean_object* v___x_1200_; 
v___x_1193_ = lean_box(v_bootstrap_1179_);
v___x_1194_ = lean_box(v_shouldExport_1181_);
v___x_1195_ = lean_box(v___x_1182_);
v___x_1196_ = lean_box_usize(v___x_1184_);
lean_inc_ref(v___y_1180_);
v___y_1197_ = lean_alloc_closure((void*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___boxed), 14, 7);
lean_closure_set(v___y_1197_, 0, v___x_1193_);
lean_closure_set(v___y_1197_, 1, v___y_1180_);
lean_closure_set(v___y_1197_, 2, v_oFiles_1185_);
lean_closure_set(v___y_1197_, 3, v___x_1194_);
lean_closure_set(v___y_1197_, 4, v___x_1195_);
lean_closure_set(v___y_1197_, 5, v___x_1183_);
lean_closure_set(v___y_1197_, 6, v___x_1196_);
v___x_1198_ = 0;
v___x_1199_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__5___closed__0));
v___x_1200_ = l_Lake_buildArtifactUnlessUpToDate(v___y_1180_, v___y_1197_, v___x_1198_, v___x_1199_, v___x_1182_, v___x_1198_, v___x_1198_, v___y_1186_, v___y_1187_, v___y_1188_, v___y_1189_, v___y_1190_, v___y_1191_);
if (lean_obj_tag(v___x_1200_) == 0)
{
lean_object* v_a_1201_; lean_object* v_a_1202_; lean_object* v___x_1204_; uint8_t v_isShared_1205_; uint8_t v_isSharedCheck_1210_; 
v_a_1201_ = lean_ctor_get(v___x_1200_, 0);
v_a_1202_ = lean_ctor_get(v___x_1200_, 1);
v_isSharedCheck_1210_ = !lean_is_exclusive(v___x_1200_);
if (v_isSharedCheck_1210_ == 0)
{
v___x_1204_ = v___x_1200_;
v_isShared_1205_ = v_isSharedCheck_1210_;
goto v_resetjp_1203_;
}
else
{
lean_inc(v_a_1202_);
lean_inc(v_a_1201_);
lean_dec(v___x_1200_);
v___x_1204_ = lean_box(0);
v_isShared_1205_ = v_isSharedCheck_1210_;
goto v_resetjp_1203_;
}
v_resetjp_1203_:
{
lean_object* v_path_1206_; lean_object* v___x_1208_; 
v_path_1206_ = lean_ctor_get(v_a_1201_, 1);
lean_inc_ref(v_path_1206_);
lean_dec(v_a_1201_);
if (v_isShared_1205_ == 0)
{
lean_ctor_set(v___x_1204_, 0, v_path_1206_);
v___x_1208_ = v___x_1204_;
goto v_reusejp_1207_;
}
else
{
lean_object* v_reuseFailAlloc_1209_; 
v_reuseFailAlloc_1209_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1209_, 0, v_path_1206_);
lean_ctor_set(v_reuseFailAlloc_1209_, 1, v_a_1202_);
v___x_1208_ = v_reuseFailAlloc_1209_;
goto v_reusejp_1207_;
}
v_reusejp_1207_:
{
return v___x_1208_;
}
}
}
else
{
lean_object* v_a_1211_; lean_object* v_a_1212_; lean_object* v___x_1214_; uint8_t v_isShared_1215_; uint8_t v_isSharedCheck_1219_; 
v_a_1211_ = lean_ctor_get(v___x_1200_, 0);
v_a_1212_ = lean_ctor_get(v___x_1200_, 1);
v_isSharedCheck_1219_ = !lean_is_exclusive(v___x_1200_);
if (v_isSharedCheck_1219_ == 0)
{
v___x_1214_ = v___x_1200_;
v_isShared_1215_ = v_isSharedCheck_1219_;
goto v_resetjp_1213_;
}
else
{
lean_inc(v_a_1212_);
lean_inc(v_a_1211_);
lean_dec(v___x_1200_);
v___x_1214_ = lean_box(0);
v_isShared_1215_ = v_isSharedCheck_1219_;
goto v_resetjp_1213_;
}
v_resetjp_1213_:
{
lean_object* v___x_1217_; 
if (v_isShared_1215_ == 0)
{
v___x_1217_ = v___x_1214_;
goto v_reusejp_1216_;
}
else
{
lean_object* v_reuseFailAlloc_1218_; 
v_reuseFailAlloc_1218_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1218_, 0, v_a_1211_);
lean_ctor_set(v_reuseFailAlloc_1218_, 1, v_a_1212_);
v___x_1217_ = v_reuseFailAlloc_1218_;
goto v_reusejp_1216_;
}
v_reusejp_1216_:
{
return v___x_1217_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__5___boxed(lean_object* v_bootstrap_1220_, lean_object* v___y_1221_, lean_object* v_shouldExport_1222_, lean_object* v___x_1223_, lean_object* v___x_1224_, lean_object* v___x_1225_, lean_object* v_oFiles_1226_, lean_object* v___y_1227_, lean_object* v___y_1228_, lean_object* v___y_1229_, lean_object* v___y_1230_, lean_object* v___y_1231_, lean_object* v___y_1232_, lean_object* v___y_1233_){
_start:
{
uint8_t v_bootstrap_boxed_1234_; uint8_t v_shouldExport_boxed_1235_; uint8_t v___x_193026__boxed_1236_; size_t v___x_193028__boxed_1237_; lean_object* v_res_1238_; 
v_bootstrap_boxed_1234_ = lean_unbox(v_bootstrap_1220_);
v_shouldExport_boxed_1235_ = lean_unbox(v_shouldExport_1222_);
v___x_193026__boxed_1236_ = lean_unbox(v___x_1223_);
v___x_193028__boxed_1237_ = lean_unbox_usize(v___x_1225_);
lean_dec(v___x_1225_);
v_res_1238_ = l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__5(v_bootstrap_boxed_1234_, v___y_1221_, v_shouldExport_boxed_1235_, v___x_193026__boxed_1236_, v___x_1224_, v___x_193028__boxed_1237_, v_oFiles_1226_, v___y_1227_, v___y_1228_, v___y_1229_, v___y_1230_, v___y_1231_, v___y_1232_);
lean_dec_ref(v___y_1231_);
lean_dec(v___y_1230_);
lean_dec(v___y_1229_);
lean_dec(v___y_1228_);
return v_res_1238_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__6(lean_object* v_config_1243_, lean_object* v_config_1244_, uint8_t v_shouldExport_1245_, uint8_t v___x_1246_, lean_object* v___x_1247_, lean_object* v___x_1248_, lean_object* v___x_1249_, lean_object* v___x_1250_, lean_object* v___f_1251_, lean_object* v_dir_1252_, lean_object* v_self_1253_, lean_object* v___x_1254_, lean_object* v___f_1255_, lean_object* v___y_1256_, lean_object* v___y_1257_, lean_object* v___y_1258_, lean_object* v___y_1259_, lean_object* v___y_1260_, lean_object* v___y_1261_){
_start:
{
uint8_t v___y_1264_; size_t v___y_1265_; lean_object* v___y_1266_; lean_object* v___y_1267_; lean_object* v___y_1268_; lean_object* v___y_1269_; lean_object* v_a_1284_; lean_object* v_a_1285_; lean_object* v___x_1330_; 
lean_inc_ref(v___y_1256_);
lean_inc_ref(v___y_1260_);
lean_inc(v___y_1259_);
lean_inc(v___y_1258_);
lean_inc(v___x_1249_);
v___x_1330_ = lean_apply_7(v___y_1256_, v___x_1254_, v___x_1249_, v___y_1258_, v___y_1259_, v___y_1260_, v___y_1261_, lean_box(0));
if (lean_obj_tag(v___x_1330_) == 0)
{
lean_object* v_a_1331_; lean_object* v_a_1332_; lean_object* v___x_1333_; 
v_a_1331_ = lean_ctor_get(v___x_1330_, 0);
lean_inc(v_a_1331_);
v_a_1332_ = lean_ctor_get(v___x_1330_, 1);
lean_inc(v_a_1332_);
lean_dec_ref_known(v___x_1330_, 2);
v___x_1333_ = l_Lake_Job_await___redArg(v_a_1331_, v_a_1332_);
if (lean_obj_tag(v___x_1333_) == 0)
{
lean_object* v_a_1334_; lean_object* v_a_1335_; lean_object* v___x_1336_; lean_object* v___x_1337_; lean_object* v___x_1338_; uint8_t v___x_1339_; 
v_a_1334_ = lean_ctor_get(v___x_1333_, 0);
lean_inc(v_a_1334_);
v_a_1335_ = lean_ctor_get(v___x_1333_, 1);
lean_inc(v_a_1335_);
lean_dec_ref_known(v___x_1333_, 2);
v___x_1336_ = lean_unsigned_to_nat(0u);
v___x_1337_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__6___closed__2));
v___x_1338_ = lean_array_get_size(v_a_1334_);
v___x_1339_ = lean_nat_dec_lt(v___x_1336_, v___x_1338_);
if (v___x_1339_ == 0)
{
lean_dec(v_a_1334_);
lean_dec_ref(v___f_1255_);
v_a_1284_ = v___x_1337_;
v_a_1285_ = v_a_1335_;
goto v___jp_1283_;
}
else
{
size_t v___x_1340_; size_t v___x_1341_; lean_object* v___x_192281__overap_1342_; lean_object* v___x_1343_; 
v___x_1340_ = ((size_t)0ULL);
v___x_1341_ = lean_usize_of_nat(v___x_1338_);
lean_inc_ref(v___x_1250_);
v___x_192281__overap_1342_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_1250_, v___f_1255_, v_a_1334_, v___x_1340_, v___x_1341_, v___x_1337_);
lean_inc_ref(v___y_1260_);
lean_inc(v___y_1259_);
lean_inc(v___y_1258_);
lean_inc(v___x_1249_);
lean_inc_ref(v___y_1256_);
v___x_1343_ = lean_apply_7(v___x_192281__overap_1342_, v___y_1256_, v___x_1249_, v___y_1258_, v___y_1259_, v___y_1260_, v_a_1335_, lean_box(0));
if (lean_obj_tag(v___x_1343_) == 0)
{
lean_object* v_a_1344_; lean_object* v_a_1345_; 
v_a_1344_ = lean_ctor_get(v___x_1343_, 0);
lean_inc(v_a_1344_);
v_a_1345_ = lean_ctor_get(v___x_1343_, 1);
lean_inc(v_a_1345_);
lean_dec_ref_known(v___x_1343_, 2);
v_a_1284_ = v_a_1344_;
v_a_1285_ = v_a_1345_;
goto v___jp_1283_;
}
else
{
lean_object* v_a_1346_; lean_object* v_a_1347_; lean_object* v___x_1349_; uint8_t v_isShared_1350_; uint8_t v_isSharedCheck_1354_; 
lean_dec_ref(v___y_1256_);
lean_dec_ref(v_self_1253_);
lean_dec_ref(v_dir_1252_);
lean_dec_ref(v___f_1251_);
lean_dec_ref(v___x_1250_);
lean_dec(v___x_1249_);
lean_dec(v___x_1248_);
lean_dec_ref(v___x_1247_);
lean_dec_ref(v_config_1243_);
v_a_1346_ = lean_ctor_get(v___x_1343_, 0);
v_a_1347_ = lean_ctor_get(v___x_1343_, 1);
v_isSharedCheck_1354_ = !lean_is_exclusive(v___x_1343_);
if (v_isSharedCheck_1354_ == 0)
{
v___x_1349_ = v___x_1343_;
v_isShared_1350_ = v_isSharedCheck_1354_;
goto v_resetjp_1348_;
}
else
{
lean_inc(v_a_1347_);
lean_inc(v_a_1346_);
lean_dec(v___x_1343_);
v___x_1349_ = lean_box(0);
v_isShared_1350_ = v_isSharedCheck_1354_;
goto v_resetjp_1348_;
}
v_resetjp_1348_:
{
lean_object* v___x_1352_; 
if (v_isShared_1350_ == 0)
{
v___x_1352_ = v___x_1349_;
goto v_reusejp_1351_;
}
else
{
lean_object* v_reuseFailAlloc_1353_; 
v_reuseFailAlloc_1353_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1353_, 0, v_a_1346_);
lean_ctor_set(v_reuseFailAlloc_1353_, 1, v_a_1347_);
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
}
else
{
lean_object* v_a_1355_; lean_object* v_a_1356_; lean_object* v___x_1358_; uint8_t v_isShared_1359_; uint8_t v_isSharedCheck_1363_; 
lean_dec_ref(v___y_1256_);
lean_dec_ref(v___f_1255_);
lean_dec_ref(v_self_1253_);
lean_dec_ref(v_dir_1252_);
lean_dec_ref(v___f_1251_);
lean_dec_ref(v___x_1250_);
lean_dec(v___x_1249_);
lean_dec(v___x_1248_);
lean_dec_ref(v___x_1247_);
lean_dec_ref(v_config_1243_);
v_a_1355_ = lean_ctor_get(v___x_1333_, 0);
v_a_1356_ = lean_ctor_get(v___x_1333_, 1);
v_isSharedCheck_1363_ = !lean_is_exclusive(v___x_1333_);
if (v_isSharedCheck_1363_ == 0)
{
v___x_1358_ = v___x_1333_;
v_isShared_1359_ = v_isSharedCheck_1363_;
goto v_resetjp_1357_;
}
else
{
lean_inc(v_a_1356_);
lean_inc(v_a_1355_);
lean_dec(v___x_1333_);
v___x_1358_ = lean_box(0);
v_isShared_1359_ = v_isSharedCheck_1363_;
goto v_resetjp_1357_;
}
v_resetjp_1357_:
{
lean_object* v___x_1361_; 
if (v_isShared_1359_ == 0)
{
v___x_1361_ = v___x_1358_;
goto v_reusejp_1360_;
}
else
{
lean_object* v_reuseFailAlloc_1362_; 
v_reuseFailAlloc_1362_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1362_, 0, v_a_1355_);
lean_ctor_set(v_reuseFailAlloc_1362_, 1, v_a_1356_);
v___x_1361_ = v_reuseFailAlloc_1362_;
goto v_reusejp_1360_;
}
v_reusejp_1360_:
{
return v___x_1361_;
}
}
}
}
else
{
lean_object* v_a_1364_; lean_object* v_a_1365_; lean_object* v___x_1367_; uint8_t v_isShared_1368_; uint8_t v_isSharedCheck_1372_; 
lean_dec_ref(v___y_1256_);
lean_dec_ref(v___f_1255_);
lean_dec_ref(v_self_1253_);
lean_dec_ref(v_dir_1252_);
lean_dec_ref(v___f_1251_);
lean_dec_ref(v___x_1250_);
lean_dec(v___x_1249_);
lean_dec(v___x_1248_);
lean_dec_ref(v___x_1247_);
lean_dec_ref(v_config_1243_);
v_a_1364_ = lean_ctor_get(v___x_1330_, 0);
v_a_1365_ = lean_ctor_get(v___x_1330_, 1);
v_isSharedCheck_1372_ = !lean_is_exclusive(v___x_1330_);
if (v_isSharedCheck_1372_ == 0)
{
v___x_1367_ = v___x_1330_;
v_isShared_1368_ = v_isSharedCheck_1372_;
goto v_resetjp_1366_;
}
else
{
lean_inc(v_a_1365_);
lean_inc(v_a_1364_);
lean_dec(v___x_1330_);
v___x_1367_ = lean_box(0);
v_isShared_1368_ = v_isSharedCheck_1372_;
goto v_resetjp_1366_;
}
v_resetjp_1366_:
{
lean_object* v___x_1370_; 
if (v_isShared_1368_ == 0)
{
v___x_1370_ = v___x_1367_;
goto v_reusejp_1369_;
}
else
{
lean_object* v_reuseFailAlloc_1371_; 
v_reuseFailAlloc_1371_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1371_, 0, v_a_1364_);
lean_ctor_set(v_reuseFailAlloc_1371_, 1, v_a_1365_);
v___x_1370_ = v_reuseFailAlloc_1371_;
goto v_reusejp_1369_;
}
v_reusejp_1369_:
{
return v___x_1370_;
}
}
}
v___jp_1263_:
{
lean_object* v___x_1270_; lean_object* v___x_1271_; lean_object* v___x_1272_; lean_object* v___x_1273_; lean_object* v___f_1274_; lean_object* v___x_1275_; lean_object* v___x_1276_; lean_object* v___x_1277_; lean_object* v___x_1278_; uint8_t v___x_1279_; lean_object* v___x_1280_; lean_object* v___x_1281_; lean_object* v___x_1282_; 
v___x_1270_ = lean_box(v___y_1264_);
v___x_1271_ = lean_box(v_shouldExport_1245_);
v___x_1272_ = lean_box(v___x_1246_);
v___x_1273_ = lean_box_usize(v___y_1265_);
v___f_1274_ = lean_alloc_closure((void*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__5___boxed), 14, 6);
lean_closure_set(v___f_1274_, 0, v___x_1270_);
lean_closure_set(v___f_1274_, 1, v___y_1269_);
lean_closure_set(v___f_1274_, 2, v___x_1271_);
lean_closure_set(v___f_1274_, 3, v___x_1272_);
lean_closure_set(v___f_1274_, 4, v___x_1247_);
lean_closure_set(v___f_1274_, 5, v___x_1273_);
v___x_1275_ = l_Array_append___redArg(v___y_1268_, v___y_1266_);
lean_dec_ref(v___y_1266_);
v___x_1276_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__6___closed__0));
v___x_1277_ = l_Lake_Job_collectArray___redArg(v___x_1275_, v___x_1276_);
lean_dec_ref(v___x_1275_);
v___x_1278_ = lean_unsigned_to_nat(0u);
v___x_1279_ = 0;
v___x_1280_ = lean_obj_once(&l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___lam__0___closed__2, &l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___lam__0___closed__2_once, _init_l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___lam__0___closed__2);
v___x_1281_ = l_Lake_Job_mapM___redArg(v___x_1248_, v___x_1277_, v___f_1274_, v___x_1278_, v___x_1279_, v___y_1256_, v___x_1249_, v___y_1258_, v___y_1259_, v___y_1260_, v___x_1280_);
lean_dec(v___x_1249_);
v___x_1282_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1282_, 0, v___x_1281_);
lean_ctor_set(v___x_1282_, 1, v___y_1267_);
return v___x_1282_;
}
v___jp_1283_:
{
lean_object* v_toLeanConfig_1286_; lean_object* v_toLeanConfig_1287_; uint8_t v_bootstrap_1288_; lean_object* v_buildDir_1289_; lean_object* v_nativeLibDir_1290_; lean_object* v_moreLinkObjs_1291_; lean_object* v_moreLinkObjs_1292_; lean_object* v___x_1293_; size_t v_sz_1294_; size_t v___x_1295_; lean_object* v___x_1296_; lean_object* v___x_1297_; lean_object* v___x_192239__overap_1298_; lean_object* v___x_1299_; 
v_toLeanConfig_1286_ = lean_ctor_get(v_config_1243_, 1);
lean_inc_ref(v_toLeanConfig_1286_);
v_toLeanConfig_1287_ = lean_ctor_get(v_config_1244_, 0);
v_bootstrap_1288_ = lean_ctor_get_uint8(v_config_1243_, sizeof(void*)*28);
v_buildDir_1289_ = lean_ctor_get(v_config_1243_, 5);
lean_inc_ref(v_buildDir_1289_);
v_nativeLibDir_1290_ = lean_ctor_get(v_config_1243_, 7);
lean_inc_ref(v_nativeLibDir_1290_);
lean_dec_ref(v_config_1243_);
v_moreLinkObjs_1291_ = lean_ctor_get(v_toLeanConfig_1286_, 6);
lean_inc_ref(v_moreLinkObjs_1291_);
lean_dec_ref(v_toLeanConfig_1286_);
v_moreLinkObjs_1292_ = lean_ctor_get(v_toLeanConfig_1287_, 6);
v___x_1293_ = l_Array_append___redArg(v_moreLinkObjs_1291_, v_moreLinkObjs_1292_);
v_sz_1294_ = lean_array_size(v___x_1293_);
v___x_1295_ = ((size_t)0ULL);
v___x_1296_ = l_unsafeCast___redArg(v___x_1293_);
lean_dec_ref(v___x_1293_);
v___x_1297_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_1250_, v___f_1251_, v_sz_1294_, v___x_1295_, v___x_1296_);
v___x_192239__overap_1298_ = l_unsafeCast___redArg(v___x_1297_);
lean_dec(v___x_1297_);
lean_inc_ref(v___y_1260_);
lean_inc(v___y_1259_);
lean_inc(v___y_1258_);
lean_inc(v___x_1249_);
lean_inc_ref(v___y_1256_);
v___x_1299_ = lean_apply_7(v___x_192239__overap_1298_, v___y_1256_, v___x_1249_, v___y_1258_, v___y_1259_, v___y_1260_, v_a_1285_, lean_box(0));
if (lean_obj_tag(v___x_1299_) == 0)
{
if (v_shouldExport_1245_ == 0)
{
lean_object* v_a_1300_; lean_object* v_a_1301_; lean_object* v___x_1302_; lean_object* v___x_1303_; lean_object* v___x_1304_; lean_object* v___x_1305_; lean_object* v___x_1306_; lean_object* v___x_1307_; lean_object* v___x_1308_; 
v_a_1300_ = lean_ctor_get(v___x_1299_, 0);
lean_inc(v_a_1300_);
v_a_1301_ = lean_ctor_get(v___x_1299_, 1);
lean_inc(v_a_1301_);
lean_dec_ref_known(v___x_1299_, 2);
v___x_1302_ = l_System_FilePath_normalize(v_buildDir_1289_);
v___x_1303_ = l_Lake_joinRelative(v_dir_1252_, v___x_1302_);
v___x_1304_ = l_System_FilePath_normalize(v_nativeLibDir_1290_);
v___x_1305_ = l_Lake_joinRelative(v___x_1303_, v___x_1304_);
v___x_1306_ = l_Lake_LeanLib_libName(v_self_1253_);
v___x_1307_ = l_Lake_nameToStaticLib(v___x_1306_, v_shouldExport_1245_);
v___x_1308_ = l_Lake_joinRelative(v___x_1305_, v___x_1307_);
v___y_1264_ = v_bootstrap_1288_;
v___y_1265_ = v___x_1295_;
v___y_1266_ = v_a_1300_;
v___y_1267_ = v_a_1301_;
v___y_1268_ = v_a_1284_;
v___y_1269_ = v___x_1308_;
goto v___jp_1263_;
}
else
{
lean_object* v_a_1309_; lean_object* v_a_1310_; lean_object* v___x_1311_; lean_object* v___x_1312_; lean_object* v___x_1313_; lean_object* v___x_1314_; lean_object* v___x_1315_; uint8_t v___x_1316_; lean_object* v___x_1317_; lean_object* v___x_1318_; lean_object* v___x_1319_; lean_object* v___x_1320_; 
v_a_1309_ = lean_ctor_get(v___x_1299_, 0);
lean_inc(v_a_1309_);
v_a_1310_ = lean_ctor_get(v___x_1299_, 1);
lean_inc(v_a_1310_);
lean_dec_ref_known(v___x_1299_, 2);
v___x_1311_ = l_System_FilePath_normalize(v_buildDir_1289_);
v___x_1312_ = l_Lake_joinRelative(v_dir_1252_, v___x_1311_);
v___x_1313_ = l_System_FilePath_normalize(v_nativeLibDir_1290_);
v___x_1314_ = l_Lake_joinRelative(v___x_1312_, v___x_1313_);
v___x_1315_ = l_Lake_LeanLib_libName(v_self_1253_);
v___x_1316_ = 0;
v___x_1317_ = l_Lake_nameToStaticLib(v___x_1315_, v___x_1316_);
v___x_1318_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__6___closed__1));
v___x_1319_ = l_System_FilePath_addExtension(v___x_1317_, v___x_1318_);
v___x_1320_ = l_Lake_joinRelative(v___x_1314_, v___x_1319_);
v___y_1264_ = v_bootstrap_1288_;
v___y_1265_ = v___x_1295_;
v___y_1266_ = v_a_1309_;
v___y_1267_ = v_a_1310_;
v___y_1268_ = v_a_1284_;
v___y_1269_ = v___x_1320_;
goto v___jp_1263_;
}
}
else
{
lean_object* v_a_1321_; lean_object* v_a_1322_; lean_object* v___x_1324_; uint8_t v_isShared_1325_; uint8_t v_isSharedCheck_1329_; 
lean_dec_ref(v_nativeLibDir_1290_);
lean_dec_ref(v_buildDir_1289_);
lean_dec_ref(v_a_1284_);
lean_dec_ref(v___y_1256_);
lean_dec_ref(v_self_1253_);
lean_dec_ref(v_dir_1252_);
lean_dec(v___x_1249_);
lean_dec(v___x_1248_);
lean_dec_ref(v___x_1247_);
v_a_1321_ = lean_ctor_get(v___x_1299_, 0);
v_a_1322_ = lean_ctor_get(v___x_1299_, 1);
v_isSharedCheck_1329_ = !lean_is_exclusive(v___x_1299_);
if (v_isSharedCheck_1329_ == 0)
{
v___x_1324_ = v___x_1299_;
v_isShared_1325_ = v_isSharedCheck_1329_;
goto v_resetjp_1323_;
}
else
{
lean_inc(v_a_1322_);
lean_inc(v_a_1321_);
lean_dec(v___x_1299_);
v___x_1324_ = lean_box(0);
v_isShared_1325_ = v_isSharedCheck_1329_;
goto v_resetjp_1323_;
}
v_resetjp_1323_:
{
lean_object* v___x_1327_; 
if (v_isShared_1325_ == 0)
{
v___x_1327_ = v___x_1324_;
goto v_reusejp_1326_;
}
else
{
lean_object* v_reuseFailAlloc_1328_; 
v_reuseFailAlloc_1328_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1328_, 0, v_a_1321_);
lean_ctor_set(v_reuseFailAlloc_1328_, 1, v_a_1322_);
v___x_1327_ = v_reuseFailAlloc_1328_;
goto v_reusejp_1326_;
}
v_reusejp_1326_:
{
return v___x_1327_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__6___boxed(lean_object** _args){
lean_object* v_config_1373_ = _args[0];
lean_object* v_config_1374_ = _args[1];
lean_object* v_shouldExport_1375_ = _args[2];
lean_object* v___x_1376_ = _args[3];
lean_object* v___x_1377_ = _args[4];
lean_object* v___x_1378_ = _args[5];
lean_object* v___x_1379_ = _args[6];
lean_object* v___x_1380_ = _args[7];
lean_object* v___f_1381_ = _args[8];
lean_object* v_dir_1382_ = _args[9];
lean_object* v_self_1383_ = _args[10];
lean_object* v___x_1384_ = _args[11];
lean_object* v___f_1385_ = _args[12];
lean_object* v___y_1386_ = _args[13];
lean_object* v___y_1387_ = _args[14];
lean_object* v___y_1388_ = _args[15];
lean_object* v___y_1389_ = _args[16];
lean_object* v___y_1390_ = _args[17];
lean_object* v___y_1391_ = _args[18];
lean_object* v___y_1392_ = _args[19];
_start:
{
uint8_t v_shouldExport_boxed_1393_; uint8_t v___x_193124__boxed_1394_; lean_object* v_res_1395_; 
v_shouldExport_boxed_1393_ = lean_unbox(v_shouldExport_1375_);
v___x_193124__boxed_1394_ = lean_unbox(v___x_1376_);
v_res_1395_ = l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__6(v_config_1373_, v_config_1374_, v_shouldExport_boxed_1393_, v___x_193124__boxed_1394_, v___x_1377_, v___x_1378_, v___x_1379_, v___x_1380_, v___f_1381_, v_dir_1382_, v_self_1383_, v___x_1384_, v___f_1385_, v___y_1386_, v___y_1387_, v___y_1388_, v___y_1389_, v___y_1390_, v___y_1391_);
lean_dec_ref(v___y_1390_);
lean_dec(v___y_1389_);
lean_dec(v___y_1388_);
lean_dec(v___y_1387_);
lean_dec(v_config_1374_);
return v_res_1395_;
}
}
static lean_object* _init_l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___closed__0(void){
_start:
{
uint8_t v___x_1396_; lean_object* v___x_1397_; 
v___x_1396_ = 2;
v___x_1397_ = l_Lake_Verbosity_ctorIdx(v___x_1396_);
return v___x_1397_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic(lean_object* v_self_1401_, uint8_t v_shouldExport_1402_, lean_object* v_a_1403_, lean_object* v_a_1404_, lean_object* v_a_1405_, lean_object* v_a_1406_, lean_object* v_a_1407_, lean_object* v_a_1408_){
_start:
{
lean_object* v___x_1410_; lean_object* v_toApplicative_1411_; lean_object* v_toBind_1412_; lean_object* v_toFunctor_1413_; lean_object* v_toPure_1414_; lean_object* v___f_1415_; lean_object* v___f_1416_; lean_object* v___f_1417_; lean_object* v___f_1418_; lean_object* v___x_1419_; lean_object* v___f_1420_; lean_object* v___x_1421_; lean_object* v___x_1422_; lean_object* v___x_1423_; lean_object* v___x_1424_; lean_object* v___x_1425_; lean_object* v___x_1426_; lean_object* v___x_1427_; lean_object* v_toBuildConfig_1428_; lean_object* v_registeredJobs_1429_; uint8_t v_verbosity_1430_; lean_object* v___x_1431_; lean_object* v___x_1432_; lean_object* v___f_1433_; lean_object* v___x_1434_; lean_object* v___x_1435_; uint8_t v___x_1436_; uint8_t v___x_1437_; lean_object* v___y_1439_; 
v___x_1410_ = l_instMonadBaseIO;
v_toApplicative_1411_ = lean_ctor_get(v___x_1410_, 0);
v_toBind_1412_ = lean_ctor_get(v___x_1410_, 1);
v_toFunctor_1413_ = lean_ctor_get(v_toApplicative_1411_, 0);
v_toPure_1414_ = lean_ctor_get(v_toApplicative_1411_, 1);
lean_inc_n(v_toBind_1412_, 3);
lean_inc_n(v_toPure_1414_, 5);
v___f_1415_ = lean_alloc_closure((void*)(l_Lake_EStateT_instMonad___redArg___lam__1), 7, 2);
lean_closure_set(v___f_1415_, 0, v_toPure_1414_);
lean_closure_set(v___f_1415_, 1, v_toBind_1412_);
v___f_1416_ = lean_alloc_closure((void*)(l_Lake_EStateT_instMonad___redArg___lam__3), 7, 2);
lean_closure_set(v___f_1416_, 0, v_toPure_1414_);
lean_closure_set(v___f_1416_, 1, v_toBind_1412_);
lean_inc_ref(v___f_1415_);
v___f_1417_ = lean_alloc_closure((void*)(l_Lake_EStateT_instMonad___redArg___lam__5), 7, 2);
lean_closure_set(v___f_1417_, 0, v_toPure_1414_);
lean_closure_set(v___f_1417_, 1, v___f_1415_);
lean_inc_ref_n(v_toFunctor_1413_, 2);
v___f_1418_ = lean_alloc_closure((void*)(l_Lake_EStateT_instMonad___redArg___lam__9), 8, 3);
lean_closure_set(v___f_1418_, 0, v_toFunctor_1413_);
lean_closure_set(v___f_1418_, 1, v_toPure_1414_);
lean_closure_set(v___f_1418_, 2, v_toBind_1412_);
v___x_1419_ = l_Lake_EStateT_instFunctor___redArg(v_toFunctor_1413_);
v___f_1420_ = lean_alloc_closure((void*)(l_Lake_EStateT_instPure___redArg___lam__0), 4, 1);
lean_closure_set(v___f_1420_, 0, v_toPure_1414_);
v___x_1421_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1421_, 0, v___x_1419_);
lean_ctor_set(v___x_1421_, 1, v___f_1420_);
lean_ctor_set(v___x_1421_, 2, v___f_1418_);
lean_ctor_set(v___x_1421_, 3, v___f_1417_);
lean_ctor_set(v___x_1421_, 4, v___f_1416_);
v___x_1422_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1422_, 0, v___x_1421_);
lean_ctor_set(v___x_1422_, 1, v___f_1415_);
v___x_1423_ = l_ReaderT_instMonad___redArg(v___x_1422_);
v___x_1424_ = l_StateRefT_x27_instMonad___redArg(v___x_1423_);
v___x_1425_ = l_ReaderT_instMonad___redArg(v___x_1424_);
v___x_1426_ = l_ReaderT_instMonad___redArg(v___x_1425_);
v___x_1427_ = l_Lake_EquipT_instMonad___redArg(v___x_1426_);
v_toBuildConfig_1428_ = lean_ctor_get(v_a_1407_, 0);
v_registeredJobs_1429_ = lean_ctor_get(v_a_1407_, 4);
v_verbosity_1430_ = lean_ctor_get_uint8(v_toBuildConfig_1428_, sizeof(void*)*5 + 4);
v___x_1431_ = l_Lake_instDataKindFilePath;
v___x_1432_ = lean_box(v_shouldExport_1402_);
lean_inc_ref(v___x_1427_);
v___f_1433_ = lean_alloc_closure((void*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__1___boxed), 11, 2);
lean_closure_set(v___f_1433_, 0, v___x_1432_);
lean_closure_set(v___f_1433_, 1, v___x_1427_);
v___x_1434_ = l_Lake_Verbosity_ctorIdx(v_verbosity_1430_);
v___x_1435_ = lean_obj_once(&l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___closed__0, &l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___closed__0_once, _init_l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___closed__0);
v___x_1436_ = lean_nat_dec_eq(v___x_1434_, v___x_1435_);
lean_dec(v___x_1434_);
v___x_1437_ = 1;
if (v___x_1436_ == 0)
{
lean_object* v___x_1485_; 
v___x_1485_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___lam__0___closed__0));
v___y_1439_ = v___x_1485_;
goto v___jp_1438_;
}
else
{
if (v_shouldExport_1402_ == 0)
{
lean_object* v___x_1486_; 
v___x_1486_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___closed__2));
v___y_1439_ = v___x_1486_;
goto v___jp_1438_;
}
else
{
lean_object* v___x_1487_; 
v___x_1487_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___closed__3));
v___y_1439_ = v___x_1487_;
goto v___jp_1438_;
}
}
v___jp_1438_:
{
lean_object* v_pkg_1440_; lean_object* v_name_1441_; lean_object* v_config_1442_; lean_object* v_keyName_1443_; lean_object* v_dir_1444_; lean_object* v_config_1445_; lean_object* v___f_1446_; lean_object* v___x_1447_; lean_object* v___x_1448_; lean_object* v___x_1449_; lean_object* v___x_1450_; lean_object* v___x_1451_; lean_object* v___x_1452_; lean_object* v___x_1453_; lean_object* v___x_1454_; lean_object* v___x_1455_; lean_object* v___x_1456_; lean_object* v___x_1457_; lean_object* v___f_1458_; uint8_t v___x_1459_; lean_object* v___x_1460_; 
v_pkg_1440_ = lean_ctor_get(v_self_1401_, 0);
v_name_1441_ = lean_ctor_get(v_self_1401_, 1);
v_config_1442_ = lean_ctor_get(v_self_1401_, 2);
lean_inc(v_config_1442_);
v_keyName_1443_ = lean_ctor_get(v_pkg_1440_, 2);
v_dir_1444_ = lean_ctor_get(v_pkg_1440_, 4);
lean_inc_ref(v_dir_1444_);
v_config_1445_ = lean_ctor_get(v_pkg_1440_, 6);
lean_inc_ref(v_config_1445_);
lean_inc_ref_n(v_pkg_1440_, 2);
v___f_1446_ = lean_alloc_closure((void*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__2___boxed), 10, 2);
lean_closure_set(v___f_1446_, 0, v___x_1431_);
lean_closure_set(v___f_1446_, 1, v_pkg_1440_);
lean_inc_n(v_name_1441_, 2);
v___x_1447_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_name_1441_, v___x_1437_);
v___x_1448_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___closed__1));
v___x_1449_ = lean_string_append(v___x_1447_, v___x_1448_);
v___x_1450_ = lean_string_append(v___x_1449_, v___y_1439_);
v___x_1451_ = l_Lake_LeanLib_modulesFacet;
lean_inc(v_keyName_1443_);
v___x_1452_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_1452_, 0, v_keyName_1443_);
lean_ctor_set(v___x_1452_, 1, v_name_1441_);
v___x_1453_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig___closed__2));
lean_inc_ref(v_self_1401_);
v___x_1454_ = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(v___x_1454_, 0, v___x_1452_);
lean_ctor_set(v___x_1454_, 1, v___x_1453_);
lean_ctor_set(v___x_1454_, 2, v_self_1401_);
lean_ctor_set(v___x_1454_, 3, v___x_1451_);
v___x_1455_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1455_, 0, v_pkg_1440_);
v___x_1456_ = lean_box(v_shouldExport_1402_);
v___x_1457_ = lean_box(v___x_1437_);
lean_inc_ref(v___x_1427_);
v___f_1458_ = lean_alloc_closure((void*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__6___boxed), 20, 13);
lean_closure_set(v___f_1458_, 0, v_config_1445_);
lean_closure_set(v___f_1458_, 1, v_config_1442_);
lean_closure_set(v___f_1458_, 2, v___x_1456_);
lean_closure_set(v___f_1458_, 3, v___x_1457_);
lean_closure_set(v___f_1458_, 4, v___x_1427_);
lean_closure_set(v___f_1458_, 5, v___x_1431_);
lean_closure_set(v___f_1458_, 6, v___x_1455_);
lean_closure_set(v___f_1458_, 7, v___x_1427_);
lean_closure_set(v___f_1458_, 8, v___f_1446_);
lean_closure_set(v___f_1458_, 9, v_dir_1444_);
lean_closure_set(v___f_1458_, 10, v_self_1401_);
lean_closure_set(v___f_1458_, 11, v___x_1454_);
lean_closure_set(v___f_1458_, 12, v___f_1433_);
v___x_1459_ = 0;
v___x_1460_ = l_Lake_ensureJob___redArg(v___x_1431_, v___f_1458_, v_a_1403_, v_a_1404_, v_a_1405_, v_a_1406_, v_a_1407_, v_a_1408_);
if (lean_obj_tag(v___x_1460_) == 0)
{
lean_object* v_a_1461_; lean_object* v_a_1462_; lean_object* v___x_1464_; uint8_t v_isShared_1465_; uint8_t v_isSharedCheck_1484_; 
v_a_1461_ = lean_ctor_get(v___x_1460_, 0);
v_a_1462_ = lean_ctor_get(v___x_1460_, 1);
v_isSharedCheck_1484_ = !lean_is_exclusive(v___x_1460_);
if (v_isSharedCheck_1484_ == 0)
{
v___x_1464_ = v___x_1460_;
v_isShared_1465_ = v_isSharedCheck_1484_;
goto v_resetjp_1463_;
}
else
{
lean_inc(v_a_1462_);
lean_inc(v_a_1461_);
lean_dec(v___x_1460_);
v___x_1464_ = lean_box(0);
v_isShared_1465_ = v_isSharedCheck_1484_;
goto v_resetjp_1463_;
}
v_resetjp_1463_:
{
lean_object* v_task_1466_; lean_object* v_kind_1467_; lean_object* v___x_1469_; uint8_t v_isShared_1470_; uint8_t v_isSharedCheck_1482_; 
v_task_1466_ = lean_ctor_get(v_a_1461_, 0);
v_kind_1467_ = lean_ctor_get(v_a_1461_, 1);
v_isSharedCheck_1482_ = !lean_is_exclusive(v_a_1461_);
if (v_isSharedCheck_1482_ == 0)
{
lean_object* v_unused_1483_; 
v_unused_1483_ = lean_ctor_get(v_a_1461_, 2);
lean_dec(v_unused_1483_);
v___x_1469_ = v_a_1461_;
v_isShared_1470_ = v_isSharedCheck_1482_;
goto v_resetjp_1468_;
}
else
{
lean_inc(v_kind_1467_);
lean_inc(v_task_1466_);
lean_dec(v_a_1461_);
v___x_1469_ = lean_box(0);
v_isShared_1470_ = v_isSharedCheck_1482_;
goto v_resetjp_1468_;
}
v_resetjp_1468_:
{
lean_object* v_job_1472_; 
if (v_isShared_1470_ == 0)
{
lean_ctor_set(v___x_1469_, 2, v___x_1450_);
v_job_1472_ = v___x_1469_;
goto v_reusejp_1471_;
}
else
{
lean_object* v_reuseFailAlloc_1481_; 
v_reuseFailAlloc_1481_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_1481_, 0, v_task_1466_);
lean_ctor_set(v_reuseFailAlloc_1481_, 1, v_kind_1467_);
lean_ctor_set(v_reuseFailAlloc_1481_, 2, v___x_1450_);
v_job_1472_ = v_reuseFailAlloc_1481_;
goto v_reusejp_1471_;
}
v_reusejp_1471_:
{
lean_object* v___x_1473_; lean_object* v___x_1474_; lean_object* v___x_1475_; lean_object* v___x_1476_; lean_object* v___x_1477_; lean_object* v___x_1479_; 
lean_ctor_set_uint8(v_job_1472_, sizeof(void*)*3, v___x_1459_);
v___x_1473_ = lean_st_ref_take(v_registeredJobs_1429_);
lean_inc_ref(v_job_1472_);
v___x_1474_ = l_Lake_Job_toOpaque___redArg(v_job_1472_);
v___x_1475_ = lean_array_push(v___x_1473_, v___x_1474_);
v___x_1476_ = lean_st_ref_put(v_registeredJobs_1429_, v___x_1475_);
v___x_1477_ = l_Lake_Job_renew___redArg(v_job_1472_);
if (v_isShared_1465_ == 0)
{
lean_ctor_set(v___x_1464_, 0, v___x_1477_);
v___x_1479_ = v___x_1464_;
goto v_reusejp_1478_;
}
else
{
lean_object* v_reuseFailAlloc_1480_; 
v_reuseFailAlloc_1480_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1480_, 0, v___x_1477_);
lean_ctor_set(v_reuseFailAlloc_1480_, 1, v_a_1462_);
v___x_1479_ = v_reuseFailAlloc_1480_;
goto v_reusejp_1478_;
}
v_reusejp_1478_:
{
return v___x_1479_;
}
}
}
}
}
else
{
lean_dec_ref(v___x_1450_);
return v___x_1460_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___boxed(lean_object* v_self_1488_, lean_object* v_shouldExport_1489_, lean_object* v_a_1490_, lean_object* v_a_1491_, lean_object* v_a_1492_, lean_object* v_a_1493_, lean_object* v_a_1494_, lean_object* v_a_1495_, lean_object* v_a_1496_){
_start:
{
uint8_t v_shouldExport_boxed_1497_; lean_object* v_res_1498_; 
v_shouldExport_boxed_1497_ = lean_unbox(v_shouldExport_1489_);
v_res_1498_ = l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic(v_self_1488_, v_shouldExport_boxed_1497_, v_a_1490_, v_a_1491_, v_a_1492_, v_a_1493_, v_a_1494_, v_a_1495_);
lean_dec_ref(v_a_1494_);
lean_dec(v_a_1493_);
lean_dec(v_a_1492_);
lean_dec(v_a_1491_);
return v_res_1498_;
}
}
LEAN_EXPORT lean_object* l_Lake_formatQuery___at___00Lake_LeanLib_staticFacetConfig_spec__1(uint8_t v_fmt_1499_, lean_object* v_a_1500_){
_start:
{
if (v_fmt_1499_ == 0)
{
return v_a_1500_;
}
else
{
lean_object* v___x_1501_; lean_object* v___x_1502_; lean_object* v___x_1503_; 
v___x_1501_ = l_Lake_mkRelPathString(v_a_1500_);
v___x_1502_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1502_, 0, v___x_1501_);
v___x_1503_ = l_Lean_Json_compress(v___x_1502_);
return v___x_1503_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_formatQuery___at___00Lake_LeanLib_staticFacetConfig_spec__1___boxed(lean_object* v_fmt_1504_, lean_object* v_a_1505_){
_start:
{
uint8_t v_fmt_boxed_1506_; lean_object* v_res_1507_; 
v_fmt_boxed_1506_ = lean_unbox(v_fmt_1504_);
v_res_1507_ = l_Lake_formatQuery___at___00Lake_LeanLib_staticFacetConfig_spec__1(v_fmt_boxed_1506_, v_a_1505_);
return v_res_1507_;
}
}
static lean_object* _init_l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__1___closed__2(void){
_start:
{
uint8_t v___x_1510_; lean_object* v_name_1511_; lean_object* v___x_1512_; 
v___x_1510_ = 1;
v_name_1511_ = l_Lake_instDataKindFilePath;
v___x_1512_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_name_1511_, v___x_1510_);
return v___x_1512_;
}
}
LEAN_EXPORT lean_object* l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__1(lean_object* v_defaultPkg_1516_, lean_object* v_self_1517_, lean_object* v_a_1518_, lean_object* v_a_1519_, lean_object* v_a_1520_, lean_object* v_a_1521_, lean_object* v_a_1522_, lean_object* v_a_1523_){
_start:
{
lean_object* v_name_1525_; uint8_t v___x_1526_; lean_object* v___x_1527_; 
v_name_1525_ = l_Lake_instDataKindFilePath;
v___x_1526_ = 1;
lean_inc_ref_n(v_self_1517_, 2);
v___x_1527_ = l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux(v_defaultPkg_1516_, v_self_1517_, v_self_1517_, v___x_1526_, v_a_1518_, v_a_1519_, v_a_1520_, v_a_1521_, v_a_1522_, v_a_1523_);
if (lean_obj_tag(v___x_1527_) == 0)
{
lean_object* v_a_1528_; lean_object* v_a_1529_; lean_object* v___x_1531_; uint8_t v_isShared_1532_; uint8_t v_isSharedCheck_1569_; 
v_a_1528_ = lean_ctor_get(v___x_1527_, 0);
v_a_1529_ = lean_ctor_get(v___x_1527_, 1);
v_isSharedCheck_1569_ = !lean_is_exclusive(v___x_1527_);
if (v_isSharedCheck_1569_ == 0)
{
v___x_1531_ = v___x_1527_;
v_isShared_1532_ = v_isSharedCheck_1569_;
goto v_resetjp_1530_;
}
else
{
lean_inc(v_a_1529_);
lean_inc(v_a_1528_);
lean_dec(v___x_1527_);
v___x_1531_ = lean_box(0);
v_isShared_1532_ = v_isSharedCheck_1569_;
goto v_resetjp_1530_;
}
v_resetjp_1530_:
{
lean_object* v___y_1534_; lean_object* v_snd_1552_; lean_object* v___x_1554_; uint8_t v_isShared_1555_; uint8_t v_isSharedCheck_1567_; 
v_snd_1552_ = lean_ctor_get(v_a_1528_, 1);
v_isSharedCheck_1567_ = !lean_is_exclusive(v_a_1528_);
if (v_isSharedCheck_1567_ == 0)
{
lean_object* v_unused_1568_; 
v_unused_1568_ = lean_ctor_get(v_a_1528_, 0);
lean_dec(v_unused_1568_);
v___x_1554_ = v_a_1528_;
v_isShared_1555_ = v_isSharedCheck_1567_;
goto v_resetjp_1553_;
}
else
{
lean_inc(v_snd_1552_);
lean_dec(v_a_1528_);
v___x_1554_ = lean_box(0);
v_isShared_1555_ = v_isSharedCheck_1567_;
goto v_resetjp_1553_;
}
v___jp_1533_:
{
lean_object* v___x_1535_; lean_object* v___x_1536_; lean_object* v___x_1537_; lean_object* v___x_1538_; lean_object* v___x_1539_; lean_object* v___x_1540_; lean_object* v___x_1541_; lean_object* v___x_1542_; lean_object* v___x_1543_; lean_object* v___x_1544_; uint8_t v___x_1545_; lean_object* v___x_1546_; lean_object* v___x_1547_; lean_object* v___x_1548_; lean_object* v___x_1550_; 
v___x_1535_ = ((lean_object*)(l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__1___closed__0));
v___x_1536_ = l_Lake_PartialBuildKey_toString(v_self_1517_);
v___x_1537_ = lean_string_append(v___x_1535_, v___x_1536_);
lean_dec_ref(v___x_1536_);
v___x_1538_ = ((lean_object*)(l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__1___closed__1));
v___x_1539_ = lean_string_append(v___x_1537_, v___x_1538_);
v___x_1540_ = lean_obj_once(&l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__1___closed__2, &l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__1___closed__2_once, _init_l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__1___closed__2);
v___x_1541_ = lean_string_append(v___x_1539_, v___x_1540_);
v___x_1542_ = ((lean_object*)(l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__1___closed__3));
v___x_1543_ = lean_string_append(v___x_1541_, v___x_1542_);
v___x_1544_ = lean_string_append(v___x_1543_, v___y_1534_);
lean_dec_ref(v___y_1534_);
v___x_1545_ = 3;
v___x_1546_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1546_, 0, v___x_1544_);
lean_ctor_set_uint8(v___x_1546_, sizeof(void*)*1, v___x_1545_);
v___x_1547_ = lean_array_get_size(v_a_1529_);
v___x_1548_ = lean_array_push(v_a_1529_, v___x_1546_);
if (v_isShared_1532_ == 0)
{
lean_ctor_set_tag(v___x_1531_, 1);
lean_ctor_set(v___x_1531_, 1, v___x_1548_);
lean_ctor_set(v___x_1531_, 0, v___x_1547_);
v___x_1550_ = v___x_1531_;
goto v_reusejp_1549_;
}
else
{
lean_object* v_reuseFailAlloc_1551_; 
v_reuseFailAlloc_1551_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1551_, 0, v___x_1547_);
lean_ctor_set(v_reuseFailAlloc_1551_, 1, v___x_1548_);
v___x_1550_ = v_reuseFailAlloc_1551_;
goto v_reusejp_1549_;
}
v_reusejp_1549_:
{
return v___x_1550_;
}
}
v_resetjp_1553_:
{
lean_object* v_kind_1556_; uint8_t v___x_1557_; 
v_kind_1556_ = lean_ctor_get(v_snd_1552_, 1);
v___x_1557_ = lean_name_eq(v_kind_1556_, v_name_1525_);
if (v___x_1557_ == 0)
{
uint8_t v___x_1558_; 
lean_inc(v_kind_1556_);
lean_del_object(v___x_1554_);
lean_dec(v_snd_1552_);
v___x_1558_ = l_Lean_Name_isAnonymous(v_kind_1556_);
if (v___x_1558_ == 0)
{
lean_object* v___x_1559_; lean_object* v___x_1560_; lean_object* v___x_1561_; lean_object* v___x_1562_; 
v___x_1559_ = ((lean_object*)(l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__1___closed__4));
v___x_1560_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_kind_1556_, v___x_1526_);
v___x_1561_ = lean_string_append(v___x_1559_, v___x_1560_);
lean_dec_ref(v___x_1560_);
v___x_1562_ = lean_string_append(v___x_1561_, v___x_1559_);
v___y_1534_ = v___x_1562_;
goto v___jp_1533_;
}
else
{
lean_object* v___x_1563_; 
lean_dec(v_kind_1556_);
v___x_1563_ = ((lean_object*)(l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__1___closed__5));
v___y_1534_ = v___x_1563_;
goto v___jp_1533_;
}
}
else
{
lean_object* v___x_1565_; 
lean_del_object(v___x_1531_);
lean_dec_ref(v_self_1517_);
if (v_isShared_1555_ == 0)
{
lean_ctor_set(v___x_1554_, 1, v_a_1529_);
lean_ctor_set(v___x_1554_, 0, v_snd_1552_);
v___x_1565_ = v___x_1554_;
goto v_reusejp_1564_;
}
else
{
lean_object* v_reuseFailAlloc_1566_; 
v_reuseFailAlloc_1566_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1566_, 0, v_snd_1552_);
lean_ctor_set(v_reuseFailAlloc_1566_, 1, v_a_1529_);
v___x_1565_ = v_reuseFailAlloc_1566_;
goto v_reusejp_1564_;
}
v_reusejp_1564_:
{
return v___x_1565_;
}
}
}
}
}
else
{
lean_object* v_a_1570_; lean_object* v_a_1571_; lean_object* v___x_1573_; uint8_t v_isShared_1574_; uint8_t v_isSharedCheck_1578_; 
lean_dec_ref(v_self_1517_);
v_a_1570_ = lean_ctor_get(v___x_1527_, 0);
v_a_1571_ = lean_ctor_get(v___x_1527_, 1);
v_isSharedCheck_1578_ = !lean_is_exclusive(v___x_1527_);
if (v_isSharedCheck_1578_ == 0)
{
v___x_1573_ = v___x_1527_;
v_isShared_1574_ = v_isSharedCheck_1578_;
goto v_resetjp_1572_;
}
else
{
lean_inc(v_a_1571_);
lean_inc(v_a_1570_);
lean_dec(v___x_1527_);
v___x_1573_ = lean_box(0);
v_isShared_1574_ = v_isSharedCheck_1578_;
goto v_resetjp_1572_;
}
v_resetjp_1572_:
{
lean_object* v___x_1576_; 
if (v_isShared_1574_ == 0)
{
v___x_1576_ = v___x_1573_;
goto v_reusejp_1575_;
}
else
{
lean_object* v_reuseFailAlloc_1577_; 
v_reuseFailAlloc_1577_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1577_, 0, v_a_1570_);
lean_ctor_set(v_reuseFailAlloc_1577_, 1, v_a_1571_);
v___x_1576_ = v_reuseFailAlloc_1577_;
goto v_reusejp_1575_;
}
v_reusejp_1575_:
{
return v___x_1576_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__1___boxed(lean_object* v_defaultPkg_1579_, lean_object* v_self_1580_, lean_object* v_a_1581_, lean_object* v_a_1582_, lean_object* v_a_1583_, lean_object* v_a_1584_, lean_object* v_a_1585_, lean_object* v_a_1586_, lean_object* v_a_1587_){
_start:
{
lean_object* v_res_1588_; 
v_res_1588_ = l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__1(v_defaultPkg_1579_, v_self_1580_, v_a_1581_, v_a_1582_, v_a_1583_, v_a_1584_, v_a_1585_, v_a_1586_);
lean_dec_ref(v_a_1585_);
lean_dec(v_a_1584_);
lean_dec(v_a_1583_);
lean_dec(v_a_1582_);
return v_res_1588_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__2(lean_object* v___x_1589_, size_t v_sz_1590_, size_t v_i_1591_, lean_object* v_bs_1592_, lean_object* v___y_1593_, lean_object* v___y_1594_, lean_object* v___y_1595_, lean_object* v___y_1596_, lean_object* v___y_1597_, lean_object* v___y_1598_){
_start:
{
uint8_t v___x_1600_; 
v___x_1600_ = lean_usize_dec_lt(v_i_1591_, v_sz_1590_);
if (v___x_1600_ == 0)
{
lean_object* v___x_1601_; lean_object* v___x_1602_; 
lean_dec_ref(v___y_1593_);
lean_dec_ref(v___x_1589_);
v___x_1601_ = l_unsafeCast___redArg(v_bs_1592_);
lean_dec_ref(v_bs_1592_);
v___x_1602_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1602_, 0, v___x_1601_);
lean_ctor_set(v___x_1602_, 1, v___y_1598_);
return v___x_1602_;
}
else
{
lean_object* v_v_1603_; lean_object* v___x_1604_; lean_object* v_bs_x27_1605_; lean_object* v___x_1606_; lean_object* v___x_1607_; 
v_v_1603_ = lean_array_uget(v_bs_1592_, v_i_1591_);
v___x_1604_ = lean_unsigned_to_nat(0u);
v_bs_x27_1605_ = lean_array_uset(v_bs_1592_, v_i_1591_, v___x_1604_);
v___x_1606_ = l_unsafeCast___redArg(v_v_1603_);
lean_dec(v_v_1603_);
lean_inc_ref(v___y_1593_);
lean_inc_ref(v___x_1589_);
v___x_1607_ = l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__1(v___x_1589_, v___x_1606_, v___y_1593_, v___y_1594_, v___y_1595_, v___y_1596_, v___y_1597_, v___y_1598_);
if (lean_obj_tag(v___x_1607_) == 0)
{
lean_object* v_a_1608_; lean_object* v_a_1609_; size_t v___x_1610_; size_t v___x_1611_; lean_object* v___x_1612_; lean_object* v___x_1613_; 
v_a_1608_ = lean_ctor_get(v___x_1607_, 0);
lean_inc(v_a_1608_);
v_a_1609_ = lean_ctor_get(v___x_1607_, 1);
lean_inc(v_a_1609_);
lean_dec_ref_known(v___x_1607_, 2);
v___x_1610_ = ((size_t)1ULL);
v___x_1611_ = lean_usize_add(v_i_1591_, v___x_1610_);
v___x_1612_ = l_unsafeCast___redArg(v_a_1608_);
lean_dec(v_a_1608_);
v___x_1613_ = lean_array_uset(v_bs_x27_1605_, v_i_1591_, v___x_1612_);
v_i_1591_ = v___x_1611_;
v_bs_1592_ = v___x_1613_;
v___y_1598_ = v_a_1609_;
goto _start;
}
else
{
lean_object* v_a_1615_; lean_object* v_a_1616_; lean_object* v___x_1618_; uint8_t v_isShared_1619_; uint8_t v_isSharedCheck_1623_; 
lean_dec_ref(v_bs_x27_1605_);
lean_dec_ref(v___y_1593_);
lean_dec_ref(v___x_1589_);
v_a_1615_ = lean_ctor_get(v___x_1607_, 0);
v_a_1616_ = lean_ctor_get(v___x_1607_, 1);
v_isSharedCheck_1623_ = !lean_is_exclusive(v___x_1607_);
if (v_isSharedCheck_1623_ == 0)
{
v___x_1618_ = v___x_1607_;
v_isShared_1619_ = v_isSharedCheck_1623_;
goto v_resetjp_1617_;
}
else
{
lean_inc(v_a_1616_);
lean_inc(v_a_1615_);
lean_dec(v___x_1607_);
v___x_1618_ = lean_box(0);
v_isShared_1619_ = v_isSharedCheck_1623_;
goto v_resetjp_1617_;
}
v_resetjp_1617_:
{
lean_object* v___x_1621_; 
if (v_isShared_1619_ == 0)
{
v___x_1621_ = v___x_1618_;
goto v_reusejp_1620_;
}
else
{
lean_object* v_reuseFailAlloc_1622_; 
v_reuseFailAlloc_1622_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1622_, 0, v_a_1615_);
lean_ctor_set(v_reuseFailAlloc_1622_, 1, v_a_1616_);
v___x_1621_ = v_reuseFailAlloc_1622_;
goto v_reusejp_1620_;
}
v_reusejp_1620_:
{
return v___x_1621_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__2___boxed(lean_object* v___x_1624_, lean_object* v_sz_1625_, lean_object* v_i_1626_, lean_object* v_bs_1627_, lean_object* v___y_1628_, lean_object* v___y_1629_, lean_object* v___y_1630_, lean_object* v___y_1631_, lean_object* v___y_1632_, lean_object* v___y_1633_, lean_object* v___y_1634_){
_start:
{
size_t v_sz_boxed_1635_; size_t v_i_boxed_1636_; lean_object* v_res_1637_; 
v_sz_boxed_1635_ = lean_unbox_usize(v_sz_1625_);
lean_dec(v_sz_1625_);
v_i_boxed_1636_ = lean_unbox_usize(v_i_1626_);
lean_dec(v_i_1626_);
v_res_1637_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__2(v___x_1624_, v_sz_boxed_1635_, v_i_boxed_1636_, v_bs_1627_, v___y_1628_, v___y_1629_, v___y_1630_, v___y_1631_, v___y_1632_, v___y_1633_);
lean_dec_ref(v___y_1632_);
lean_dec(v___y_1631_);
lean_dec(v___y_1630_);
lean_dec(v___y_1629_);
return v_res_1637_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__3___redArg(lean_object* v_a_1638_, lean_object* v_as_1639_, size_t v_i_1640_, size_t v_stop_1641_, lean_object* v_b_1642_, lean_object* v___y_1643_){
_start:
{
uint8_t v___x_1645_; 
v___x_1645_ = lean_usize_dec_eq(v_i_1640_, v_stop_1641_);
if (v___x_1645_ == 0)
{
lean_object* v_log_1646_; uint8_t v_action_1647_; uint8_t v_wantsRebuild_1648_; lean_object* v_trace_1649_; lean_object* v_buildTime_1650_; lean_object* v___x_1651_; lean_object* v___x_1652_; lean_object* v___x_1653_; lean_object* v___x_1654_; 
v_log_1646_ = lean_ctor_get(v___y_1643_, 0);
v_action_1647_ = lean_ctor_get_uint8(v___y_1643_, sizeof(void*)*3);
v_wantsRebuild_1648_ = lean_ctor_get_uint8(v___y_1643_, sizeof(void*)*3 + 1);
v_trace_1649_ = lean_ctor_get(v___y_1643_, 1);
v_buildTime_1650_ = lean_ctor_get(v___y_1643_, 2);
v___x_1651_ = lean_array_uget_borrowed(v_as_1639_, v_i_1640_);
v___x_1652_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_formatQuery___at___00__private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig_spec__0_spec__0___closed__0));
lean_inc(v___x_1651_);
v___x_1653_ = lean_string_append(v___x_1651_, v___x_1652_);
v___x_1654_ = lean_io_prim_handle_put_str(v_a_1638_, v___x_1653_);
lean_dec_ref(v___x_1653_);
if (lean_obj_tag(v___x_1654_) == 0)
{
lean_object* v_a_1655_; size_t v___x_1656_; size_t v___x_1657_; 
v_a_1655_ = lean_ctor_get(v___x_1654_, 0);
lean_inc(v_a_1655_);
lean_dec_ref_known(v___x_1654_, 1);
v___x_1656_ = ((size_t)1ULL);
v___x_1657_ = lean_usize_add(v_i_1640_, v___x_1656_);
v_i_1640_ = v___x_1657_;
v_b_1642_ = v_a_1655_;
goto _start;
}
else
{
lean_object* v___x_1660_; uint8_t v_isShared_1661_; uint8_t v_isSharedCheck_1672_; 
lean_inc(v_buildTime_1650_);
lean_inc_ref(v_trace_1649_);
lean_inc_ref(v_log_1646_);
v_isSharedCheck_1672_ = !lean_is_exclusive(v___y_1643_);
if (v_isSharedCheck_1672_ == 0)
{
lean_object* v_unused_1673_; lean_object* v_unused_1674_; lean_object* v_unused_1675_; 
v_unused_1673_ = lean_ctor_get(v___y_1643_, 2);
lean_dec(v_unused_1673_);
v_unused_1674_ = lean_ctor_get(v___y_1643_, 1);
lean_dec(v_unused_1674_);
v_unused_1675_ = lean_ctor_get(v___y_1643_, 0);
lean_dec(v_unused_1675_);
v___x_1660_ = v___y_1643_;
v_isShared_1661_ = v_isSharedCheck_1672_;
goto v_resetjp_1659_;
}
else
{
lean_dec(v___y_1643_);
v___x_1660_ = lean_box(0);
v_isShared_1661_ = v_isSharedCheck_1672_;
goto v_resetjp_1659_;
}
v_resetjp_1659_:
{
lean_object* v_a_1662_; lean_object* v___x_1663_; uint8_t v___x_1664_; lean_object* v___x_1665_; lean_object* v___x_1666_; lean_object* v___x_1667_; lean_object* v___x_1669_; 
v_a_1662_ = lean_ctor_get(v___x_1654_, 0);
lean_inc(v_a_1662_);
lean_dec_ref_known(v___x_1654_, 1);
v___x_1663_ = lean_io_error_to_string(v_a_1662_);
v___x_1664_ = 3;
v___x_1665_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1665_, 0, v___x_1663_);
lean_ctor_set_uint8(v___x_1665_, sizeof(void*)*1, v___x_1664_);
v___x_1666_ = lean_array_get_size(v_log_1646_);
v___x_1667_ = lean_array_push(v_log_1646_, v___x_1665_);
if (v_isShared_1661_ == 0)
{
lean_ctor_set(v___x_1660_, 0, v___x_1667_);
v___x_1669_ = v___x_1660_;
goto v_reusejp_1668_;
}
else
{
lean_object* v_reuseFailAlloc_1671_; 
v_reuseFailAlloc_1671_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_1671_, 0, v___x_1667_);
lean_ctor_set(v_reuseFailAlloc_1671_, 1, v_trace_1649_);
lean_ctor_set(v_reuseFailAlloc_1671_, 2, v_buildTime_1650_);
lean_ctor_set_uint8(v_reuseFailAlloc_1671_, sizeof(void*)*3, v_action_1647_);
lean_ctor_set_uint8(v_reuseFailAlloc_1671_, sizeof(void*)*3 + 1, v_wantsRebuild_1648_);
v___x_1669_ = v_reuseFailAlloc_1671_;
goto v_reusejp_1668_;
}
v_reusejp_1668_:
{
lean_object* v___x_1670_; 
v___x_1670_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1670_, 0, v___x_1666_);
lean_ctor_set(v___x_1670_, 1, v___x_1669_);
return v___x_1670_;
}
}
}
}
else
{
lean_object* v___x_1676_; 
v___x_1676_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1676_, 0, v_b_1642_);
lean_ctor_set(v___x_1676_, 1, v___y_1643_);
return v___x_1676_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__3___redArg___boxed(lean_object* v_a_1677_, lean_object* v_as_1678_, lean_object* v_i_1679_, lean_object* v_stop_1680_, lean_object* v_b_1681_, lean_object* v___y_1682_, lean_object* v___y_1683_){
_start:
{
size_t v_i_boxed_1684_; size_t v_stop_boxed_1685_; lean_object* v_res_1686_; 
v_i_boxed_1684_ = lean_unbox_usize(v_i_1679_);
lean_dec(v_i_1679_);
v_stop_boxed_1685_ = lean_unbox_usize(v_stop_1680_);
lean_dec(v_stop_1680_);
v_res_1686_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__3___redArg(v_a_1677_, v_as_1678_, v_i_boxed_1684_, v_stop_boxed_1685_, v_b_1681_, v___y_1682_);
lean_dec_ref(v_as_1678_);
lean_dec(v_a_1677_);
return v_res_1686_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0___lam__0(uint8_t v_bootstrap_1687_, lean_object* v___y_1688_, lean_object* v_oFiles_1689_, uint8_t v_shouldExport_1690_, uint8_t v___x_1691_, size_t v___x_1692_, lean_object* v___y_1693_, lean_object* v___y_1694_, lean_object* v___y_1695_, lean_object* v___y_1696_, lean_object* v___y_1697_, lean_object* v___y_1698_){
_start:
{
if (v_bootstrap_1687_ == 0)
{
lean_object* v_log_1700_; uint8_t v_action_1701_; uint8_t v_wantsRebuild_1702_; lean_object* v_trace_1703_; lean_object* v_buildTime_1704_; lean_object* v___x_1706_; uint8_t v_isShared_1707_; uint8_t v_isSharedCheck_1750_; 
v_log_1700_ = lean_ctor_get(v___y_1698_, 0);
v_action_1701_ = lean_ctor_get_uint8(v___y_1698_, sizeof(void*)*3);
v_wantsRebuild_1702_ = lean_ctor_get_uint8(v___y_1698_, sizeof(void*)*3 + 1);
v_trace_1703_ = lean_ctor_get(v___y_1698_, 1);
v_buildTime_1704_ = lean_ctor_get(v___y_1698_, 2);
v_isSharedCheck_1750_ = !lean_is_exclusive(v___y_1698_);
if (v_isSharedCheck_1750_ == 0)
{
v___x_1706_ = v___y_1698_;
v_isShared_1707_ = v_isSharedCheck_1750_;
goto v_resetjp_1705_;
}
else
{
lean_inc(v_buildTime_1704_);
lean_inc(v_trace_1703_);
lean_inc(v_log_1700_);
lean_dec(v___y_1698_);
v___x_1706_ = lean_box(0);
v_isShared_1707_ = v_isSharedCheck_1750_;
goto v_resetjp_1705_;
}
v_resetjp_1705_:
{
lean_object* v_toContext_1708_; lean_object* v___x_1709_; lean_object* v___x_1710_; lean_object* v___x_1711_; lean_object* v___x_1712_; lean_object* v___x_1713_; lean_object* v___x_1714_; lean_object* v___x_1715_; lean_object* v___x_1716_; lean_object* v___x_1717_; lean_object* v___x_1718_; lean_object* v___x_1719_; lean_object* v___x_1720_; lean_object* v___x_1721_; lean_object* v_lakeEnv_1722_; lean_object* v_lean_1723_; lean_object* v_ar_1724_; lean_object* v___x_1725_; 
v_toContext_1708_ = lean_ctor_get(v___y_1697_, 1);
v___x_1709_ = l_unsafeCast___redArg(v_toContext_1708_);
v___x_1710_ = l_unsafeCast___redArg(v___x_1709_);
lean_dec(v___x_1709_);
v___x_1711_ = l_unsafeCast___redArg(v___x_1710_);
lean_dec(v___x_1710_);
v___x_1712_ = l_unsafeCast___redArg(v___x_1711_);
lean_dec(v___x_1711_);
v___x_1713_ = l_unsafeCast___redArg(v___x_1712_);
lean_dec(v___x_1712_);
v___x_1714_ = l_unsafeCast___redArg(v___x_1713_);
lean_dec(v___x_1713_);
v___x_1715_ = l_unsafeCast___redArg(v___x_1714_);
lean_dec(v___x_1714_);
v___x_1716_ = l_unsafeCast___redArg(v___x_1715_);
lean_dec(v___x_1715_);
v___x_1717_ = l_unsafeCast___redArg(v___x_1716_);
lean_dec(v___x_1716_);
v___x_1718_ = l_unsafeCast___redArg(v___x_1717_);
lean_dec(v___x_1717_);
v___x_1719_ = l_unsafeCast___redArg(v___x_1718_);
lean_dec(v___x_1718_);
v___x_1720_ = l_unsafeCast___redArg(v___x_1719_);
lean_dec(v___x_1719_);
v___x_1721_ = l_unsafeCast___redArg(v___x_1720_);
lean_dec(v___x_1720_);
v_lakeEnv_1722_ = lean_ctor_get(v___x_1721_, 0);
lean_inc_ref(v_lakeEnv_1722_);
lean_dec(v___x_1721_);
v_lean_1723_ = lean_ctor_get(v_lakeEnv_1722_, 1);
lean_inc_ref(v_lean_1723_);
lean_dec_ref(v_lakeEnv_1722_);
v_ar_1724_ = lean_ctor_get(v_lean_1723_, 13);
lean_inc_ref(v_ar_1724_);
lean_dec_ref(v_lean_1723_);
v___x_1725_ = l_Lake_compileStaticLib(v___y_1688_, v_oFiles_1689_, v_ar_1724_, v_bootstrap_1687_, v_log_1700_);
if (lean_obj_tag(v___x_1725_) == 0)
{
lean_object* v_a_1726_; lean_object* v_a_1727_; lean_object* v___x_1729_; uint8_t v_isShared_1730_; uint8_t v_isSharedCheck_1737_; 
v_a_1726_ = lean_ctor_get(v___x_1725_, 0);
v_a_1727_ = lean_ctor_get(v___x_1725_, 1);
v_isSharedCheck_1737_ = !lean_is_exclusive(v___x_1725_);
if (v_isSharedCheck_1737_ == 0)
{
v___x_1729_ = v___x_1725_;
v_isShared_1730_ = v_isSharedCheck_1737_;
goto v_resetjp_1728_;
}
else
{
lean_inc(v_a_1727_);
lean_inc(v_a_1726_);
lean_dec(v___x_1725_);
v___x_1729_ = lean_box(0);
v_isShared_1730_ = v_isSharedCheck_1737_;
goto v_resetjp_1728_;
}
v_resetjp_1728_:
{
lean_object* v___x_1732_; 
if (v_isShared_1707_ == 0)
{
lean_ctor_set(v___x_1706_, 0, v_a_1727_);
v___x_1732_ = v___x_1706_;
goto v_reusejp_1731_;
}
else
{
lean_object* v_reuseFailAlloc_1736_; 
v_reuseFailAlloc_1736_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_1736_, 0, v_a_1727_);
lean_ctor_set(v_reuseFailAlloc_1736_, 1, v_trace_1703_);
lean_ctor_set(v_reuseFailAlloc_1736_, 2, v_buildTime_1704_);
lean_ctor_set_uint8(v_reuseFailAlloc_1736_, sizeof(void*)*3, v_action_1701_);
lean_ctor_set_uint8(v_reuseFailAlloc_1736_, sizeof(void*)*3 + 1, v_wantsRebuild_1702_);
v___x_1732_ = v_reuseFailAlloc_1736_;
goto v_reusejp_1731_;
}
v_reusejp_1731_:
{
lean_object* v___x_1734_; 
if (v_isShared_1730_ == 0)
{
lean_ctor_set(v___x_1729_, 1, v___x_1732_);
v___x_1734_ = v___x_1729_;
goto v_reusejp_1733_;
}
else
{
lean_object* v_reuseFailAlloc_1735_; 
v_reuseFailAlloc_1735_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1735_, 0, v_a_1726_);
lean_ctor_set(v_reuseFailAlloc_1735_, 1, v___x_1732_);
v___x_1734_ = v_reuseFailAlloc_1735_;
goto v_reusejp_1733_;
}
v_reusejp_1733_:
{
return v___x_1734_;
}
}
}
}
else
{
lean_object* v_a_1738_; lean_object* v_a_1739_; lean_object* v___x_1741_; uint8_t v_isShared_1742_; uint8_t v_isSharedCheck_1749_; 
v_a_1738_ = lean_ctor_get(v___x_1725_, 0);
v_a_1739_ = lean_ctor_get(v___x_1725_, 1);
v_isSharedCheck_1749_ = !lean_is_exclusive(v___x_1725_);
if (v_isSharedCheck_1749_ == 0)
{
v___x_1741_ = v___x_1725_;
v_isShared_1742_ = v_isSharedCheck_1749_;
goto v_resetjp_1740_;
}
else
{
lean_inc(v_a_1739_);
lean_inc(v_a_1738_);
lean_dec(v___x_1725_);
v___x_1741_ = lean_box(0);
v_isShared_1742_ = v_isSharedCheck_1749_;
goto v_resetjp_1740_;
}
v_resetjp_1740_:
{
lean_object* v___x_1744_; 
if (v_isShared_1707_ == 0)
{
lean_ctor_set(v___x_1706_, 0, v_a_1739_);
v___x_1744_ = v___x_1706_;
goto v_reusejp_1743_;
}
else
{
lean_object* v_reuseFailAlloc_1748_; 
v_reuseFailAlloc_1748_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_1748_, 0, v_a_1739_);
lean_ctor_set(v_reuseFailAlloc_1748_, 1, v_trace_1703_);
lean_ctor_set(v_reuseFailAlloc_1748_, 2, v_buildTime_1704_);
lean_ctor_set_uint8(v_reuseFailAlloc_1748_, sizeof(void*)*3, v_action_1701_);
lean_ctor_set_uint8(v_reuseFailAlloc_1748_, sizeof(void*)*3 + 1, v_wantsRebuild_1702_);
v___x_1744_ = v_reuseFailAlloc_1748_;
goto v_reusejp_1743_;
}
v_reusejp_1743_:
{
lean_object* v___x_1746_; 
if (v_isShared_1742_ == 0)
{
lean_ctor_set(v___x_1741_, 1, v___x_1744_);
v___x_1746_ = v___x_1741_;
goto v_reusejp_1745_;
}
else
{
lean_object* v_reuseFailAlloc_1747_; 
v_reuseFailAlloc_1747_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1747_, 0, v_a_1738_);
lean_ctor_set(v_reuseFailAlloc_1747_, 1, v___x_1744_);
v___x_1746_ = v_reuseFailAlloc_1747_;
goto v_reusejp_1745_;
}
v_reusejp_1745_:
{
return v___x_1746_;
}
}
}
}
}
}
else
{
uint8_t v___x_1751_; 
v___x_1751_ = l_System_Platform_isOSX;
if (v___x_1751_ == 0)
{
uint8_t v___x_1752_; 
v___x_1752_ = l_System_Platform_isWindows;
if (v___x_1752_ == 0)
{
lean_object* v_log_1753_; uint8_t v_action_1754_; uint8_t v_wantsRebuild_1755_; lean_object* v_trace_1756_; lean_object* v_buildTime_1757_; lean_object* v___x_1759_; uint8_t v_isShared_1760_; uint8_t v_isSharedCheck_1803_; 
v_log_1753_ = lean_ctor_get(v___y_1698_, 0);
v_action_1754_ = lean_ctor_get_uint8(v___y_1698_, sizeof(void*)*3);
v_wantsRebuild_1755_ = lean_ctor_get_uint8(v___y_1698_, sizeof(void*)*3 + 1);
v_trace_1756_ = lean_ctor_get(v___y_1698_, 1);
v_buildTime_1757_ = lean_ctor_get(v___y_1698_, 2);
v_isSharedCheck_1803_ = !lean_is_exclusive(v___y_1698_);
if (v_isSharedCheck_1803_ == 0)
{
v___x_1759_ = v___y_1698_;
v_isShared_1760_ = v_isSharedCheck_1803_;
goto v_resetjp_1758_;
}
else
{
lean_inc(v_buildTime_1757_);
lean_inc(v_trace_1756_);
lean_inc(v_log_1753_);
lean_dec(v___y_1698_);
v___x_1759_ = lean_box(0);
v_isShared_1760_ = v_isSharedCheck_1803_;
goto v_resetjp_1758_;
}
v_resetjp_1758_:
{
lean_object* v_toContext_1761_; lean_object* v___x_1762_; lean_object* v___x_1763_; lean_object* v___x_1764_; lean_object* v___x_1765_; lean_object* v___x_1766_; lean_object* v___x_1767_; lean_object* v___x_1768_; lean_object* v___x_1769_; lean_object* v___x_1770_; lean_object* v___x_1771_; lean_object* v___x_1772_; lean_object* v___x_1773_; lean_object* v___x_1774_; lean_object* v_lakeEnv_1775_; lean_object* v_lean_1776_; lean_object* v_ar_1777_; lean_object* v___x_1778_; 
v_toContext_1761_ = lean_ctor_get(v___y_1697_, 1);
v___x_1762_ = l_unsafeCast___redArg(v_toContext_1761_);
v___x_1763_ = l_unsafeCast___redArg(v___x_1762_);
lean_dec(v___x_1762_);
v___x_1764_ = l_unsafeCast___redArg(v___x_1763_);
lean_dec(v___x_1763_);
v___x_1765_ = l_unsafeCast___redArg(v___x_1764_);
lean_dec(v___x_1764_);
v___x_1766_ = l_unsafeCast___redArg(v___x_1765_);
lean_dec(v___x_1765_);
v___x_1767_ = l_unsafeCast___redArg(v___x_1766_);
lean_dec(v___x_1766_);
v___x_1768_ = l_unsafeCast___redArg(v___x_1767_);
lean_dec(v___x_1767_);
v___x_1769_ = l_unsafeCast___redArg(v___x_1768_);
lean_dec(v___x_1768_);
v___x_1770_ = l_unsafeCast___redArg(v___x_1769_);
lean_dec(v___x_1769_);
v___x_1771_ = l_unsafeCast___redArg(v___x_1770_);
lean_dec(v___x_1770_);
v___x_1772_ = l_unsafeCast___redArg(v___x_1771_);
lean_dec(v___x_1771_);
v___x_1773_ = l_unsafeCast___redArg(v___x_1772_);
lean_dec(v___x_1772_);
v___x_1774_ = l_unsafeCast___redArg(v___x_1773_);
lean_dec(v___x_1773_);
v_lakeEnv_1775_ = lean_ctor_get(v___x_1774_, 0);
lean_inc_ref(v_lakeEnv_1775_);
lean_dec(v___x_1774_);
v_lean_1776_ = lean_ctor_get(v_lakeEnv_1775_, 1);
lean_inc_ref(v_lean_1776_);
lean_dec_ref(v_lakeEnv_1775_);
v_ar_1777_ = lean_ctor_get(v_lean_1776_, 13);
lean_inc_ref(v_ar_1777_);
lean_dec_ref(v_lean_1776_);
v___x_1778_ = l_Lake_compileStaticLib(v___y_1688_, v_oFiles_1689_, v_ar_1777_, v___x_1752_, v_log_1753_);
if (lean_obj_tag(v___x_1778_) == 0)
{
lean_object* v_a_1779_; lean_object* v_a_1780_; lean_object* v___x_1782_; uint8_t v_isShared_1783_; uint8_t v_isSharedCheck_1790_; 
v_a_1779_ = lean_ctor_get(v___x_1778_, 0);
v_a_1780_ = lean_ctor_get(v___x_1778_, 1);
v_isSharedCheck_1790_ = !lean_is_exclusive(v___x_1778_);
if (v_isSharedCheck_1790_ == 0)
{
v___x_1782_ = v___x_1778_;
v_isShared_1783_ = v_isSharedCheck_1790_;
goto v_resetjp_1781_;
}
else
{
lean_inc(v_a_1780_);
lean_inc(v_a_1779_);
lean_dec(v___x_1778_);
v___x_1782_ = lean_box(0);
v_isShared_1783_ = v_isSharedCheck_1790_;
goto v_resetjp_1781_;
}
v_resetjp_1781_:
{
lean_object* v___x_1785_; 
if (v_isShared_1760_ == 0)
{
lean_ctor_set(v___x_1759_, 0, v_a_1780_);
v___x_1785_ = v___x_1759_;
goto v_reusejp_1784_;
}
else
{
lean_object* v_reuseFailAlloc_1789_; 
v_reuseFailAlloc_1789_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_1789_, 0, v_a_1780_);
lean_ctor_set(v_reuseFailAlloc_1789_, 1, v_trace_1756_);
lean_ctor_set(v_reuseFailAlloc_1789_, 2, v_buildTime_1757_);
lean_ctor_set_uint8(v_reuseFailAlloc_1789_, sizeof(void*)*3, v_action_1754_);
lean_ctor_set_uint8(v_reuseFailAlloc_1789_, sizeof(void*)*3 + 1, v_wantsRebuild_1755_);
v___x_1785_ = v_reuseFailAlloc_1789_;
goto v_reusejp_1784_;
}
v_reusejp_1784_:
{
lean_object* v___x_1787_; 
if (v_isShared_1783_ == 0)
{
lean_ctor_set(v___x_1782_, 1, v___x_1785_);
v___x_1787_ = v___x_1782_;
goto v_reusejp_1786_;
}
else
{
lean_object* v_reuseFailAlloc_1788_; 
v_reuseFailAlloc_1788_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1788_, 0, v_a_1779_);
lean_ctor_set(v_reuseFailAlloc_1788_, 1, v___x_1785_);
v___x_1787_ = v_reuseFailAlloc_1788_;
goto v_reusejp_1786_;
}
v_reusejp_1786_:
{
return v___x_1787_;
}
}
}
}
else
{
lean_object* v_a_1791_; lean_object* v_a_1792_; lean_object* v___x_1794_; uint8_t v_isShared_1795_; uint8_t v_isSharedCheck_1802_; 
v_a_1791_ = lean_ctor_get(v___x_1778_, 0);
v_a_1792_ = lean_ctor_get(v___x_1778_, 1);
v_isSharedCheck_1802_ = !lean_is_exclusive(v___x_1778_);
if (v_isSharedCheck_1802_ == 0)
{
v___x_1794_ = v___x_1778_;
v_isShared_1795_ = v_isSharedCheck_1802_;
goto v_resetjp_1793_;
}
else
{
lean_inc(v_a_1792_);
lean_inc(v_a_1791_);
lean_dec(v___x_1778_);
v___x_1794_ = lean_box(0);
v_isShared_1795_ = v_isSharedCheck_1802_;
goto v_resetjp_1793_;
}
v_resetjp_1793_:
{
lean_object* v___x_1797_; 
if (v_isShared_1760_ == 0)
{
lean_ctor_set(v___x_1759_, 0, v_a_1792_);
v___x_1797_ = v___x_1759_;
goto v_reusejp_1796_;
}
else
{
lean_object* v_reuseFailAlloc_1801_; 
v_reuseFailAlloc_1801_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_1801_, 0, v_a_1792_);
lean_ctor_set(v_reuseFailAlloc_1801_, 1, v_trace_1756_);
lean_ctor_set(v_reuseFailAlloc_1801_, 2, v_buildTime_1757_);
lean_ctor_set_uint8(v_reuseFailAlloc_1801_, sizeof(void*)*3, v_action_1754_);
lean_ctor_set_uint8(v_reuseFailAlloc_1801_, sizeof(void*)*3 + 1, v_wantsRebuild_1755_);
v___x_1797_ = v_reuseFailAlloc_1801_;
goto v_reusejp_1796_;
}
v_reusejp_1796_:
{
lean_object* v___x_1799_; 
if (v_isShared_1795_ == 0)
{
lean_ctor_set(v___x_1794_, 1, v___x_1797_);
v___x_1799_ = v___x_1794_;
goto v_reusejp_1798_;
}
else
{
lean_object* v_reuseFailAlloc_1800_; 
v_reuseFailAlloc_1800_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1800_, 0, v_a_1791_);
lean_ctor_set(v_reuseFailAlloc_1800_, 1, v___x_1797_);
v___x_1799_ = v_reuseFailAlloc_1800_;
goto v_reusejp_1798_;
}
v_reusejp_1798_:
{
return v___x_1799_;
}
}
}
}
}
}
else
{
lean_object* v_log_1804_; uint8_t v_action_1805_; uint8_t v_wantsRebuild_1806_; lean_object* v_trace_1807_; lean_object* v_buildTime_1808_; lean_object* v___x_1810_; uint8_t v_isShared_1811_; uint8_t v_isSharedCheck_1854_; 
v_log_1804_ = lean_ctor_get(v___y_1698_, 0);
v_action_1805_ = lean_ctor_get_uint8(v___y_1698_, sizeof(void*)*3);
v_wantsRebuild_1806_ = lean_ctor_get_uint8(v___y_1698_, sizeof(void*)*3 + 1);
v_trace_1807_ = lean_ctor_get(v___y_1698_, 1);
v_buildTime_1808_ = lean_ctor_get(v___y_1698_, 2);
v_isSharedCheck_1854_ = !lean_is_exclusive(v___y_1698_);
if (v_isSharedCheck_1854_ == 0)
{
v___x_1810_ = v___y_1698_;
v_isShared_1811_ = v_isSharedCheck_1854_;
goto v_resetjp_1809_;
}
else
{
lean_inc(v_buildTime_1808_);
lean_inc(v_trace_1807_);
lean_inc(v_log_1804_);
lean_dec(v___y_1698_);
v___x_1810_ = lean_box(0);
v_isShared_1811_ = v_isSharedCheck_1854_;
goto v_resetjp_1809_;
}
v_resetjp_1809_:
{
lean_object* v_toContext_1812_; lean_object* v___x_1813_; lean_object* v___x_1814_; lean_object* v___x_1815_; lean_object* v___x_1816_; lean_object* v___x_1817_; lean_object* v___x_1818_; lean_object* v___x_1819_; lean_object* v___x_1820_; lean_object* v___x_1821_; lean_object* v___x_1822_; lean_object* v___x_1823_; lean_object* v___x_1824_; lean_object* v___x_1825_; lean_object* v_lakeEnv_1826_; lean_object* v_lean_1827_; lean_object* v_ar_1828_; lean_object* v___x_1829_; 
v_toContext_1812_ = lean_ctor_get(v___y_1697_, 1);
v___x_1813_ = l_unsafeCast___redArg(v_toContext_1812_);
v___x_1814_ = l_unsafeCast___redArg(v___x_1813_);
lean_dec(v___x_1813_);
v___x_1815_ = l_unsafeCast___redArg(v___x_1814_);
lean_dec(v___x_1814_);
v___x_1816_ = l_unsafeCast___redArg(v___x_1815_);
lean_dec(v___x_1815_);
v___x_1817_ = l_unsafeCast___redArg(v___x_1816_);
lean_dec(v___x_1816_);
v___x_1818_ = l_unsafeCast___redArg(v___x_1817_);
lean_dec(v___x_1817_);
v___x_1819_ = l_unsafeCast___redArg(v___x_1818_);
lean_dec(v___x_1818_);
v___x_1820_ = l_unsafeCast___redArg(v___x_1819_);
lean_dec(v___x_1819_);
v___x_1821_ = l_unsafeCast___redArg(v___x_1820_);
lean_dec(v___x_1820_);
v___x_1822_ = l_unsafeCast___redArg(v___x_1821_);
lean_dec(v___x_1821_);
v___x_1823_ = l_unsafeCast___redArg(v___x_1822_);
lean_dec(v___x_1822_);
v___x_1824_ = l_unsafeCast___redArg(v___x_1823_);
lean_dec(v___x_1823_);
v___x_1825_ = l_unsafeCast___redArg(v___x_1824_);
lean_dec(v___x_1824_);
v_lakeEnv_1826_ = lean_ctor_get(v___x_1825_, 0);
lean_inc_ref(v_lakeEnv_1826_);
lean_dec(v___x_1825_);
v_lean_1827_ = lean_ctor_get(v_lakeEnv_1826_, 1);
lean_inc_ref(v_lean_1827_);
lean_dec_ref(v_lakeEnv_1826_);
v_ar_1828_ = lean_ctor_get(v_lean_1827_, 13);
lean_inc_ref(v_ar_1828_);
lean_dec_ref(v_lean_1827_);
v___x_1829_ = l_Lake_compileStaticLib(v___y_1688_, v_oFiles_1689_, v_ar_1828_, v_shouldExport_1690_, v_log_1804_);
if (lean_obj_tag(v___x_1829_) == 0)
{
lean_object* v_a_1830_; lean_object* v_a_1831_; lean_object* v___x_1833_; uint8_t v_isShared_1834_; uint8_t v_isSharedCheck_1841_; 
v_a_1830_ = lean_ctor_get(v___x_1829_, 0);
v_a_1831_ = lean_ctor_get(v___x_1829_, 1);
v_isSharedCheck_1841_ = !lean_is_exclusive(v___x_1829_);
if (v_isSharedCheck_1841_ == 0)
{
v___x_1833_ = v___x_1829_;
v_isShared_1834_ = v_isSharedCheck_1841_;
goto v_resetjp_1832_;
}
else
{
lean_inc(v_a_1831_);
lean_inc(v_a_1830_);
lean_dec(v___x_1829_);
v___x_1833_ = lean_box(0);
v_isShared_1834_ = v_isSharedCheck_1841_;
goto v_resetjp_1832_;
}
v_resetjp_1832_:
{
lean_object* v___x_1836_; 
if (v_isShared_1811_ == 0)
{
lean_ctor_set(v___x_1810_, 0, v_a_1831_);
v___x_1836_ = v___x_1810_;
goto v_reusejp_1835_;
}
else
{
lean_object* v_reuseFailAlloc_1840_; 
v_reuseFailAlloc_1840_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_1840_, 0, v_a_1831_);
lean_ctor_set(v_reuseFailAlloc_1840_, 1, v_trace_1807_);
lean_ctor_set(v_reuseFailAlloc_1840_, 2, v_buildTime_1808_);
lean_ctor_set_uint8(v_reuseFailAlloc_1840_, sizeof(void*)*3, v_action_1805_);
lean_ctor_set_uint8(v_reuseFailAlloc_1840_, sizeof(void*)*3 + 1, v_wantsRebuild_1806_);
v___x_1836_ = v_reuseFailAlloc_1840_;
goto v_reusejp_1835_;
}
v_reusejp_1835_:
{
lean_object* v___x_1838_; 
if (v_isShared_1834_ == 0)
{
lean_ctor_set(v___x_1833_, 1, v___x_1836_);
v___x_1838_ = v___x_1833_;
goto v_reusejp_1837_;
}
else
{
lean_object* v_reuseFailAlloc_1839_; 
v_reuseFailAlloc_1839_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1839_, 0, v_a_1830_);
lean_ctor_set(v_reuseFailAlloc_1839_, 1, v___x_1836_);
v___x_1838_ = v_reuseFailAlloc_1839_;
goto v_reusejp_1837_;
}
v_reusejp_1837_:
{
return v___x_1838_;
}
}
}
}
else
{
lean_object* v_a_1842_; lean_object* v_a_1843_; lean_object* v___x_1845_; uint8_t v_isShared_1846_; uint8_t v_isSharedCheck_1853_; 
v_a_1842_ = lean_ctor_get(v___x_1829_, 0);
v_a_1843_ = lean_ctor_get(v___x_1829_, 1);
v_isSharedCheck_1853_ = !lean_is_exclusive(v___x_1829_);
if (v_isSharedCheck_1853_ == 0)
{
v___x_1845_ = v___x_1829_;
v_isShared_1846_ = v_isSharedCheck_1853_;
goto v_resetjp_1844_;
}
else
{
lean_inc(v_a_1843_);
lean_inc(v_a_1842_);
lean_dec(v___x_1829_);
v___x_1845_ = lean_box(0);
v_isShared_1846_ = v_isSharedCheck_1853_;
goto v_resetjp_1844_;
}
v_resetjp_1844_:
{
lean_object* v___x_1848_; 
if (v_isShared_1811_ == 0)
{
lean_ctor_set(v___x_1810_, 0, v_a_1843_);
v___x_1848_ = v___x_1810_;
goto v_reusejp_1847_;
}
else
{
lean_object* v_reuseFailAlloc_1852_; 
v_reuseFailAlloc_1852_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_1852_, 0, v_a_1843_);
lean_ctor_set(v_reuseFailAlloc_1852_, 1, v_trace_1807_);
lean_ctor_set(v_reuseFailAlloc_1852_, 2, v_buildTime_1808_);
lean_ctor_set_uint8(v_reuseFailAlloc_1852_, sizeof(void*)*3, v_action_1805_);
lean_ctor_set_uint8(v_reuseFailAlloc_1852_, sizeof(void*)*3 + 1, v_wantsRebuild_1806_);
v___x_1848_ = v_reuseFailAlloc_1852_;
goto v_reusejp_1847_;
}
v_reusejp_1847_:
{
lean_object* v___x_1850_; 
if (v_isShared_1846_ == 0)
{
lean_ctor_set(v___x_1845_, 1, v___x_1848_);
v___x_1850_ = v___x_1845_;
goto v_reusejp_1849_;
}
else
{
lean_object* v_reuseFailAlloc_1851_; 
v_reuseFailAlloc_1851_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1851_, 0, v_a_1842_);
lean_ctor_set(v_reuseFailAlloc_1851_, 1, v___x_1848_);
v___x_1850_ = v_reuseFailAlloc_1851_;
goto v_reusejp_1849_;
}
v_reusejp_1849_:
{
return v___x_1850_;
}
}
}
}
}
}
}
else
{
lean_object* v_log_1855_; uint8_t v_action_1856_; uint8_t v_wantsRebuild_1857_; lean_object* v_trace_1858_; lean_object* v_buildTime_1859_; lean_object* v___x_1860_; 
v_log_1855_ = lean_ctor_get(v___y_1698_, 0);
v_action_1856_ = lean_ctor_get_uint8(v___y_1698_, sizeof(void*)*3);
v_wantsRebuild_1857_ = lean_ctor_get_uint8(v___y_1698_, sizeof(void*)*3 + 1);
v_trace_1858_ = lean_ctor_get(v___y_1698_, 1);
v_buildTime_1859_ = lean_ctor_get(v___y_1698_, 2);
lean_inc_ref(v___y_1688_);
v___x_1860_ = l_Lake_createParentDirs(v___y_1688_);
if (lean_obj_tag(v___x_1860_) == 0)
{
lean_object* v___x_1861_; lean_object* v___x_1862_; lean_object* v_a_1864_; uint8_t v___x_1912_; lean_object* v___x_1913_; 
lean_dec_ref_known(v___x_1860_, 1);
v___x_1861_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___closed__0));
lean_inc_ref(v___y_1688_);
v___x_1862_ = l_System_FilePath_addExtension(v___y_1688_, v___x_1861_);
v___x_1912_ = 1;
v___x_1913_ = lean_io_prim_handle_mk(v___x_1862_, v___x_1912_);
if (lean_obj_tag(v___x_1913_) == 0)
{
lean_object* v_a_1914_; lean_object* v___x_1915_; lean_object* v___x_1916_; uint8_t v___x_1917_; 
v_a_1914_ = lean_ctor_get(v___x_1913_, 0);
lean_inc(v_a_1914_);
lean_dec_ref_known(v___x_1913_, 1);
v___x_1915_ = lean_unsigned_to_nat(0u);
v___x_1916_ = lean_array_get_size(v_oFiles_1689_);
v___x_1917_ = lean_nat_dec_lt(v___x_1915_, v___x_1916_);
if (v___x_1917_ == 0)
{
lean_dec(v_a_1914_);
v_a_1864_ = v___y_1698_;
goto v___jp_1863_;
}
else
{
lean_object* v___x_1918_; size_t v___x_1919_; lean_object* v___x_1920_; 
v___x_1918_ = lean_box(0);
v___x_1919_ = lean_usize_of_nat(v___x_1916_);
v___x_1920_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__3___redArg(v_a_1914_, v_oFiles_1689_, v___x_1692_, v___x_1919_, v___x_1918_, v___y_1698_);
lean_dec(v_a_1914_);
if (lean_obj_tag(v___x_1920_) == 0)
{
lean_object* v_a_1921_; 
v_a_1921_ = lean_ctor_get(v___x_1920_, 1);
lean_inc(v_a_1921_);
lean_dec_ref_known(v___x_1920_, 2);
v_a_1864_ = v_a_1921_;
goto v___jp_1863_;
}
else
{
lean_dec_ref(v___x_1862_);
lean_dec_ref(v___y_1688_);
return v___x_1920_;
}
}
}
else
{
lean_object* v___x_1923_; uint8_t v_isShared_1924_; uint8_t v_isSharedCheck_1935_; 
lean_inc(v_buildTime_1859_);
lean_inc_ref(v_trace_1858_);
lean_inc_ref(v_log_1855_);
lean_dec_ref(v___x_1862_);
lean_dec_ref(v___y_1688_);
v_isSharedCheck_1935_ = !lean_is_exclusive(v___y_1698_);
if (v_isSharedCheck_1935_ == 0)
{
lean_object* v_unused_1936_; lean_object* v_unused_1937_; lean_object* v_unused_1938_; 
v_unused_1936_ = lean_ctor_get(v___y_1698_, 2);
lean_dec(v_unused_1936_);
v_unused_1937_ = lean_ctor_get(v___y_1698_, 1);
lean_dec(v_unused_1937_);
v_unused_1938_ = lean_ctor_get(v___y_1698_, 0);
lean_dec(v_unused_1938_);
v___x_1923_ = v___y_1698_;
v_isShared_1924_ = v_isSharedCheck_1935_;
goto v_resetjp_1922_;
}
else
{
lean_dec(v___y_1698_);
v___x_1923_ = lean_box(0);
v_isShared_1924_ = v_isSharedCheck_1935_;
goto v_resetjp_1922_;
}
v_resetjp_1922_:
{
lean_object* v_a_1925_; lean_object* v___x_1926_; uint8_t v___x_1927_; lean_object* v___x_1928_; lean_object* v___x_1929_; lean_object* v___x_1930_; lean_object* v___x_1932_; 
v_a_1925_ = lean_ctor_get(v___x_1913_, 0);
lean_inc(v_a_1925_);
lean_dec_ref_known(v___x_1913_, 1);
v___x_1926_ = lean_io_error_to_string(v_a_1925_);
v___x_1927_ = 3;
v___x_1928_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1928_, 0, v___x_1926_);
lean_ctor_set_uint8(v___x_1928_, sizeof(void*)*1, v___x_1927_);
v___x_1929_ = lean_array_get_size(v_log_1855_);
v___x_1930_ = lean_array_push(v_log_1855_, v___x_1928_);
if (v_isShared_1924_ == 0)
{
lean_ctor_set(v___x_1923_, 0, v___x_1930_);
v___x_1932_ = v___x_1923_;
goto v_reusejp_1931_;
}
else
{
lean_object* v_reuseFailAlloc_1934_; 
v_reuseFailAlloc_1934_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_1934_, 0, v___x_1930_);
lean_ctor_set(v_reuseFailAlloc_1934_, 1, v_trace_1858_);
lean_ctor_set(v_reuseFailAlloc_1934_, 2, v_buildTime_1859_);
lean_ctor_set_uint8(v_reuseFailAlloc_1934_, sizeof(void*)*3, v_action_1856_);
lean_ctor_set_uint8(v_reuseFailAlloc_1934_, sizeof(void*)*3 + 1, v_wantsRebuild_1857_);
v___x_1932_ = v_reuseFailAlloc_1934_;
goto v_reusejp_1931_;
}
v_reusejp_1931_:
{
lean_object* v___x_1933_; 
v___x_1933_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1933_, 0, v___x_1929_);
lean_ctor_set(v___x_1933_, 1, v___x_1932_);
return v___x_1933_;
}
}
}
v___jp_1863_:
{
lean_object* v___x_1865_; lean_object* v_log_1866_; uint8_t v_action_1867_; uint8_t v_wantsRebuild_1868_; lean_object* v_trace_1869_; lean_object* v_buildTime_1870_; lean_object* v___x_1872_; uint8_t v_isShared_1873_; uint8_t v_isSharedCheck_1911_; 
v___x_1865_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___closed__1));
v_log_1866_ = lean_ctor_get(v_a_1864_, 0);
v_action_1867_ = lean_ctor_get_uint8(v_a_1864_, sizeof(void*)*3);
v_wantsRebuild_1868_ = lean_ctor_get_uint8(v_a_1864_, sizeof(void*)*3 + 1);
v_trace_1869_ = lean_ctor_get(v_a_1864_, 1);
v_buildTime_1870_ = lean_ctor_get(v_a_1864_, 2);
v_isSharedCheck_1911_ = !lean_is_exclusive(v_a_1864_);
if (v_isSharedCheck_1911_ == 0)
{
v___x_1872_ = v_a_1864_;
v_isShared_1873_ = v_isSharedCheck_1911_;
goto v_resetjp_1871_;
}
else
{
lean_inc(v_buildTime_1870_);
lean_inc(v_trace_1869_);
lean_inc(v_log_1866_);
lean_dec(v_a_1864_);
v___x_1872_ = lean_box(0);
v_isShared_1873_ = v_isSharedCheck_1911_;
goto v_resetjp_1871_;
}
v_resetjp_1871_:
{
lean_object* v___x_1874_; lean_object* v___x_1875_; lean_object* v___x_1876_; lean_object* v___x_1877_; lean_object* v___x_1878_; lean_object* v___x_1879_; lean_object* v___x_1880_; lean_object* v___x_1881_; lean_object* v___x_1882_; lean_object* v___x_1883_; uint8_t v___x_1884_; lean_object* v___x_1885_; lean_object* v___x_1886_; 
v___x_1874_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___closed__2));
v___x_1875_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___closed__5));
v___x_1876_ = lean_unsigned_to_nat(5u);
v___x_1877_ = lean_mk_empty_array_with_capacity(v___x_1876_);
lean_dec_ref(v___x_1877_);
v___x_1878_ = lean_obj_once(&l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___closed__7, &l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___closed__7_once, _init_l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___closed__7);
v___x_1879_ = lean_array_push(v___x_1878_, v___y_1688_);
v___x_1880_ = lean_array_push(v___x_1879_, v___x_1875_);
v___x_1881_ = lean_array_push(v___x_1880_, v___x_1862_);
v___x_1882_ = lean_box(0);
v___x_1883_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__4___closed__8));
v___x_1884_ = 0;
v___x_1885_ = lean_alloc_ctor(0, 5, 2);
lean_ctor_set(v___x_1885_, 0, v___x_1865_);
lean_ctor_set(v___x_1885_, 1, v___x_1874_);
lean_ctor_set(v___x_1885_, 2, v___x_1881_);
lean_ctor_set(v___x_1885_, 3, v___x_1882_);
lean_ctor_set(v___x_1885_, 4, v___x_1883_);
lean_ctor_set_uint8(v___x_1885_, sizeof(void*)*5, v___x_1691_);
lean_ctor_set_uint8(v___x_1885_, sizeof(void*)*5 + 1, v___x_1884_);
v___x_1886_ = l_Lake_proc(v___x_1885_, v___x_1884_, v___x_1882_, v_log_1866_);
if (lean_obj_tag(v___x_1886_) == 0)
{
lean_object* v_a_1887_; lean_object* v_a_1888_; lean_object* v___x_1890_; uint8_t v_isShared_1891_; uint8_t v_isSharedCheck_1898_; 
v_a_1887_ = lean_ctor_get(v___x_1886_, 0);
v_a_1888_ = lean_ctor_get(v___x_1886_, 1);
v_isSharedCheck_1898_ = !lean_is_exclusive(v___x_1886_);
if (v_isSharedCheck_1898_ == 0)
{
v___x_1890_ = v___x_1886_;
v_isShared_1891_ = v_isSharedCheck_1898_;
goto v_resetjp_1889_;
}
else
{
lean_inc(v_a_1888_);
lean_inc(v_a_1887_);
lean_dec(v___x_1886_);
v___x_1890_ = lean_box(0);
v_isShared_1891_ = v_isSharedCheck_1898_;
goto v_resetjp_1889_;
}
v_resetjp_1889_:
{
lean_object* v___x_1893_; 
if (v_isShared_1873_ == 0)
{
lean_ctor_set(v___x_1872_, 0, v_a_1888_);
v___x_1893_ = v___x_1872_;
goto v_reusejp_1892_;
}
else
{
lean_object* v_reuseFailAlloc_1897_; 
v_reuseFailAlloc_1897_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_1897_, 0, v_a_1888_);
lean_ctor_set(v_reuseFailAlloc_1897_, 1, v_trace_1869_);
lean_ctor_set(v_reuseFailAlloc_1897_, 2, v_buildTime_1870_);
lean_ctor_set_uint8(v_reuseFailAlloc_1897_, sizeof(void*)*3, v_action_1867_);
lean_ctor_set_uint8(v_reuseFailAlloc_1897_, sizeof(void*)*3 + 1, v_wantsRebuild_1868_);
v___x_1893_ = v_reuseFailAlloc_1897_;
goto v_reusejp_1892_;
}
v_reusejp_1892_:
{
lean_object* v___x_1895_; 
if (v_isShared_1891_ == 0)
{
lean_ctor_set(v___x_1890_, 1, v___x_1893_);
v___x_1895_ = v___x_1890_;
goto v_reusejp_1894_;
}
else
{
lean_object* v_reuseFailAlloc_1896_; 
v_reuseFailAlloc_1896_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1896_, 0, v_a_1887_);
lean_ctor_set(v_reuseFailAlloc_1896_, 1, v___x_1893_);
v___x_1895_ = v_reuseFailAlloc_1896_;
goto v_reusejp_1894_;
}
v_reusejp_1894_:
{
return v___x_1895_;
}
}
}
}
else
{
lean_object* v_a_1899_; lean_object* v_a_1900_; lean_object* v___x_1902_; uint8_t v_isShared_1903_; uint8_t v_isSharedCheck_1910_; 
v_a_1899_ = lean_ctor_get(v___x_1886_, 0);
v_a_1900_ = lean_ctor_get(v___x_1886_, 1);
v_isSharedCheck_1910_ = !lean_is_exclusive(v___x_1886_);
if (v_isSharedCheck_1910_ == 0)
{
v___x_1902_ = v___x_1886_;
v_isShared_1903_ = v_isSharedCheck_1910_;
goto v_resetjp_1901_;
}
else
{
lean_inc(v_a_1900_);
lean_inc(v_a_1899_);
lean_dec(v___x_1886_);
v___x_1902_ = lean_box(0);
v_isShared_1903_ = v_isSharedCheck_1910_;
goto v_resetjp_1901_;
}
v_resetjp_1901_:
{
lean_object* v___x_1905_; 
if (v_isShared_1873_ == 0)
{
lean_ctor_set(v___x_1872_, 0, v_a_1900_);
v___x_1905_ = v___x_1872_;
goto v_reusejp_1904_;
}
else
{
lean_object* v_reuseFailAlloc_1909_; 
v_reuseFailAlloc_1909_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_1909_, 0, v_a_1900_);
lean_ctor_set(v_reuseFailAlloc_1909_, 1, v_trace_1869_);
lean_ctor_set(v_reuseFailAlloc_1909_, 2, v_buildTime_1870_);
lean_ctor_set_uint8(v_reuseFailAlloc_1909_, sizeof(void*)*3, v_action_1867_);
lean_ctor_set_uint8(v_reuseFailAlloc_1909_, sizeof(void*)*3 + 1, v_wantsRebuild_1868_);
v___x_1905_ = v_reuseFailAlloc_1909_;
goto v_reusejp_1904_;
}
v_reusejp_1904_:
{
lean_object* v___x_1907_; 
if (v_isShared_1903_ == 0)
{
lean_ctor_set(v___x_1902_, 1, v___x_1905_);
v___x_1907_ = v___x_1902_;
goto v_reusejp_1906_;
}
else
{
lean_object* v_reuseFailAlloc_1908_; 
v_reuseFailAlloc_1908_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1908_, 0, v_a_1899_);
lean_ctor_set(v_reuseFailAlloc_1908_, 1, v___x_1905_);
v___x_1907_ = v_reuseFailAlloc_1908_;
goto v_reusejp_1906_;
}
v_reusejp_1906_:
{
return v___x_1907_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_1940_; uint8_t v_isShared_1941_; uint8_t v_isSharedCheck_1952_; 
lean_inc(v_buildTime_1859_);
lean_inc_ref(v_trace_1858_);
lean_inc_ref(v_log_1855_);
lean_dec_ref(v___y_1688_);
v_isSharedCheck_1952_ = !lean_is_exclusive(v___y_1698_);
if (v_isSharedCheck_1952_ == 0)
{
lean_object* v_unused_1953_; lean_object* v_unused_1954_; lean_object* v_unused_1955_; 
v_unused_1953_ = lean_ctor_get(v___y_1698_, 2);
lean_dec(v_unused_1953_);
v_unused_1954_ = lean_ctor_get(v___y_1698_, 1);
lean_dec(v_unused_1954_);
v_unused_1955_ = lean_ctor_get(v___y_1698_, 0);
lean_dec(v_unused_1955_);
v___x_1940_ = v___y_1698_;
v_isShared_1941_ = v_isSharedCheck_1952_;
goto v_resetjp_1939_;
}
else
{
lean_dec(v___y_1698_);
v___x_1940_ = lean_box(0);
v_isShared_1941_ = v_isSharedCheck_1952_;
goto v_resetjp_1939_;
}
v_resetjp_1939_:
{
lean_object* v_a_1942_; lean_object* v___x_1943_; uint8_t v___x_1944_; lean_object* v___x_1945_; lean_object* v___x_1946_; lean_object* v___x_1947_; lean_object* v___x_1949_; 
v_a_1942_ = lean_ctor_get(v___x_1860_, 0);
lean_inc(v_a_1942_);
lean_dec_ref_known(v___x_1860_, 1);
v___x_1943_ = lean_io_error_to_string(v_a_1942_);
v___x_1944_ = 3;
v___x_1945_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1945_, 0, v___x_1943_);
lean_ctor_set_uint8(v___x_1945_, sizeof(void*)*1, v___x_1944_);
v___x_1946_ = lean_array_get_size(v_log_1855_);
v___x_1947_ = lean_array_push(v_log_1855_, v___x_1945_);
if (v_isShared_1941_ == 0)
{
lean_ctor_set(v___x_1940_, 0, v___x_1947_);
v___x_1949_ = v___x_1940_;
goto v_reusejp_1948_;
}
else
{
lean_object* v_reuseFailAlloc_1951_; 
v_reuseFailAlloc_1951_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_1951_, 0, v___x_1947_);
lean_ctor_set(v_reuseFailAlloc_1951_, 1, v_trace_1858_);
lean_ctor_set(v_reuseFailAlloc_1951_, 2, v_buildTime_1859_);
lean_ctor_set_uint8(v_reuseFailAlloc_1951_, sizeof(void*)*3, v_action_1856_);
lean_ctor_set_uint8(v_reuseFailAlloc_1951_, sizeof(void*)*3 + 1, v_wantsRebuild_1857_);
v___x_1949_ = v_reuseFailAlloc_1951_;
goto v_reusejp_1948_;
}
v_reusejp_1948_:
{
lean_object* v___x_1950_; 
v___x_1950_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1950_, 0, v___x_1946_);
lean_ctor_set(v___x_1950_, 1, v___x_1949_);
return v___x_1950_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0___lam__0___boxed(lean_object* v_bootstrap_1956_, lean_object* v___y_1957_, lean_object* v_oFiles_1958_, lean_object* v_shouldExport_1959_, lean_object* v___x_1960_, lean_object* v___x_1961_, lean_object* v___y_1962_, lean_object* v___y_1963_, lean_object* v___y_1964_, lean_object* v___y_1965_, lean_object* v___y_1966_, lean_object* v___y_1967_, lean_object* v___y_1968_){
_start:
{
uint8_t v_bootstrap_boxed_1969_; uint8_t v_shouldExport_boxed_1970_; uint8_t v___x_6055__boxed_1971_; size_t v___x_6056__boxed_1972_; lean_object* v_res_1973_; 
v_bootstrap_boxed_1969_ = lean_unbox(v_bootstrap_1956_);
v_shouldExport_boxed_1970_ = lean_unbox(v_shouldExport_1959_);
v___x_6055__boxed_1971_ = lean_unbox(v___x_1960_);
v___x_6056__boxed_1972_ = lean_unbox_usize(v___x_1961_);
lean_dec(v___x_1961_);
v_res_1973_ = l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0___lam__0(v_bootstrap_boxed_1969_, v___y_1957_, v_oFiles_1958_, v_shouldExport_boxed_1970_, v___x_6055__boxed_1971_, v___x_6056__boxed_1972_, v___y_1962_, v___y_1963_, v___y_1964_, v___y_1965_, v___y_1966_, v___y_1967_);
lean_dec_ref(v___y_1966_);
lean_dec(v___y_1965_);
lean_dec(v___y_1964_);
lean_dec(v___y_1963_);
lean_dec_ref(v___y_1962_);
lean_dec_ref(v_oFiles_1958_);
return v_res_1973_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0___lam__1(uint8_t v_bootstrap_1974_, lean_object* v___y_1975_, uint8_t v_shouldExport_1976_, uint8_t v___x_1977_, size_t v___x_1978_, lean_object* v_oFiles_1979_, lean_object* v___y_1980_, lean_object* v___y_1981_, lean_object* v___y_1982_, lean_object* v___y_1983_, lean_object* v___y_1984_, lean_object* v___y_1985_){
_start:
{
lean_object* v___x_1987_; lean_object* v___x_1988_; lean_object* v___x_1989_; lean_object* v___x_1990_; lean_object* v___y_1991_; uint8_t v___x_1992_; lean_object* v___x_1993_; lean_object* v___x_1994_; 
v___x_1987_ = lean_box(v_bootstrap_1974_);
v___x_1988_ = lean_box(v_shouldExport_1976_);
v___x_1989_ = lean_box(v___x_1977_);
v___x_1990_ = lean_box_usize(v___x_1978_);
lean_inc_ref(v___y_1975_);
v___y_1991_ = lean_alloc_closure((void*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0___lam__0___boxed), 13, 6);
lean_closure_set(v___y_1991_, 0, v___x_1987_);
lean_closure_set(v___y_1991_, 1, v___y_1975_);
lean_closure_set(v___y_1991_, 2, v_oFiles_1979_);
lean_closure_set(v___y_1991_, 3, v___x_1988_);
lean_closure_set(v___y_1991_, 4, v___x_1989_);
lean_closure_set(v___y_1991_, 5, v___x_1990_);
v___x_1992_ = 0;
v___x_1993_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__5___closed__0));
v___x_1994_ = l_Lake_buildArtifactUnlessUpToDate(v___y_1975_, v___y_1991_, v___x_1992_, v___x_1993_, v___x_1977_, v___x_1992_, v___x_1992_, v___y_1980_, v___y_1981_, v___y_1982_, v___y_1983_, v___y_1984_, v___y_1985_);
if (lean_obj_tag(v___x_1994_) == 0)
{
lean_object* v_a_1995_; lean_object* v_a_1996_; lean_object* v___x_1998_; uint8_t v_isShared_1999_; uint8_t v_isSharedCheck_2004_; 
v_a_1995_ = lean_ctor_get(v___x_1994_, 0);
v_a_1996_ = lean_ctor_get(v___x_1994_, 1);
v_isSharedCheck_2004_ = !lean_is_exclusive(v___x_1994_);
if (v_isSharedCheck_2004_ == 0)
{
v___x_1998_ = v___x_1994_;
v_isShared_1999_ = v_isSharedCheck_2004_;
goto v_resetjp_1997_;
}
else
{
lean_inc(v_a_1996_);
lean_inc(v_a_1995_);
lean_dec(v___x_1994_);
v___x_1998_ = lean_box(0);
v_isShared_1999_ = v_isSharedCheck_2004_;
goto v_resetjp_1997_;
}
v_resetjp_1997_:
{
lean_object* v_path_2000_; lean_object* v___x_2002_; 
v_path_2000_ = lean_ctor_get(v_a_1995_, 1);
lean_inc_ref(v_path_2000_);
lean_dec(v_a_1995_);
if (v_isShared_1999_ == 0)
{
lean_ctor_set(v___x_1998_, 0, v_path_2000_);
v___x_2002_ = v___x_1998_;
goto v_reusejp_2001_;
}
else
{
lean_object* v_reuseFailAlloc_2003_; 
v_reuseFailAlloc_2003_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2003_, 0, v_path_2000_);
lean_ctor_set(v_reuseFailAlloc_2003_, 1, v_a_1996_);
v___x_2002_ = v_reuseFailAlloc_2003_;
goto v_reusejp_2001_;
}
v_reusejp_2001_:
{
return v___x_2002_;
}
}
}
else
{
lean_object* v_a_2005_; lean_object* v_a_2006_; lean_object* v___x_2008_; uint8_t v_isShared_2009_; uint8_t v_isSharedCheck_2013_; 
v_a_2005_ = lean_ctor_get(v___x_1994_, 0);
v_a_2006_ = lean_ctor_get(v___x_1994_, 1);
v_isSharedCheck_2013_ = !lean_is_exclusive(v___x_1994_);
if (v_isSharedCheck_2013_ == 0)
{
v___x_2008_ = v___x_1994_;
v_isShared_2009_ = v_isSharedCheck_2013_;
goto v_resetjp_2007_;
}
else
{
lean_inc(v_a_2006_);
lean_inc(v_a_2005_);
lean_dec(v___x_1994_);
v___x_2008_ = lean_box(0);
v_isShared_2009_ = v_isSharedCheck_2013_;
goto v_resetjp_2007_;
}
v_resetjp_2007_:
{
lean_object* v___x_2011_; 
if (v_isShared_2009_ == 0)
{
v___x_2011_ = v___x_2008_;
goto v_reusejp_2010_;
}
else
{
lean_object* v_reuseFailAlloc_2012_; 
v_reuseFailAlloc_2012_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2012_, 0, v_a_2005_);
lean_ctor_set(v_reuseFailAlloc_2012_, 1, v_a_2006_);
v___x_2011_ = v_reuseFailAlloc_2012_;
goto v_reusejp_2010_;
}
v_reusejp_2010_:
{
return v___x_2011_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0___lam__1___boxed(lean_object* v_bootstrap_2014_, lean_object* v___y_2015_, lean_object* v_shouldExport_2016_, lean_object* v___x_2017_, lean_object* v___x_2018_, lean_object* v_oFiles_2019_, lean_object* v___y_2020_, lean_object* v___y_2021_, lean_object* v___y_2022_, lean_object* v___y_2023_, lean_object* v___y_2024_, lean_object* v___y_2025_, lean_object* v___y_2026_){
_start:
{
uint8_t v_bootstrap_boxed_2027_; uint8_t v_shouldExport_boxed_2028_; uint8_t v___x_6533__boxed_2029_; size_t v___x_6534__boxed_2030_; lean_object* v_res_2031_; 
v_bootstrap_boxed_2027_ = lean_unbox(v_bootstrap_2014_);
v_shouldExport_boxed_2028_ = lean_unbox(v_shouldExport_2016_);
v___x_6533__boxed_2029_ = lean_unbox(v___x_2017_);
v___x_6534__boxed_2030_ = lean_unbox_usize(v___x_2018_);
lean_dec(v___x_2018_);
v_res_2031_ = l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0___lam__1(v_bootstrap_boxed_2027_, v___y_2015_, v_shouldExport_boxed_2028_, v___x_6533__boxed_2029_, v___x_6534__boxed_2030_, v_oFiles_2019_, v___y_2020_, v___y_2021_, v___y_2022_, v___y_2023_, v___y_2024_, v___y_2025_);
lean_dec_ref(v___y_2024_);
lean_dec(v___y_2023_);
lean_dec(v___y_2022_);
lean_dec(v___y_2021_);
return v_res_2031_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__0(lean_object* v_a_2032_, size_t v_sz_2033_, size_t v_i_2034_, lean_object* v_bs_2035_, lean_object* v___y_2036_, lean_object* v___y_2037_, lean_object* v___y_2038_, lean_object* v___y_2039_, lean_object* v___y_2040_, lean_object* v___y_2041_){
_start:
{
uint8_t v___x_2043_; 
v___x_2043_ = lean_usize_dec_lt(v_i_2034_, v_sz_2033_);
if (v___x_2043_ == 0)
{
lean_object* v___x_2044_; lean_object* v___x_2045_; 
lean_dec_ref(v___y_2036_);
lean_dec_ref(v_a_2032_);
v___x_2044_ = l_unsafeCast___redArg(v_bs_2035_);
lean_dec_ref(v_bs_2035_);
v___x_2045_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2045_, 0, v___x_2044_);
lean_ctor_set(v___x_2045_, 1, v___y_2041_);
return v___x_2045_;
}
else
{
lean_object* v_v_2046_; lean_object* v___x_2047_; lean_object* v_bs_x27_2048_; lean_object* v___x_2049_; lean_object* v___x_2050_; 
v_v_2046_ = lean_array_uget(v_bs_2035_, v_i_2034_);
v___x_2047_ = lean_unsigned_to_nat(0u);
v_bs_x27_2048_ = lean_array_uset(v_bs_2035_, v_i_2034_, v___x_2047_);
v___x_2049_ = l_unsafeCast___redArg(v_v_2046_);
lean_dec(v_v_2046_);
lean_inc_ref(v___y_2036_);
lean_inc_ref(v_a_2032_);
v___x_2050_ = l_Lake_ModuleFacet_fetch___redArg(v___x_2049_, v_a_2032_, v___y_2036_, v___y_2037_, v___y_2038_, v___y_2039_, v___y_2040_, v___y_2041_);
if (lean_obj_tag(v___x_2050_) == 0)
{
lean_object* v_a_2051_; lean_object* v_a_2052_; size_t v___x_2053_; size_t v___x_2054_; lean_object* v___x_2055_; lean_object* v___x_2056_; 
v_a_2051_ = lean_ctor_get(v___x_2050_, 0);
lean_inc(v_a_2051_);
v_a_2052_ = lean_ctor_get(v___x_2050_, 1);
lean_inc(v_a_2052_);
lean_dec_ref_known(v___x_2050_, 2);
v___x_2053_ = ((size_t)1ULL);
v___x_2054_ = lean_usize_add(v_i_2034_, v___x_2053_);
v___x_2055_ = l_unsafeCast___redArg(v_a_2051_);
lean_dec(v_a_2051_);
v___x_2056_ = lean_array_uset(v_bs_x27_2048_, v_i_2034_, v___x_2055_);
v_i_2034_ = v___x_2054_;
v_bs_2035_ = v___x_2056_;
v___y_2041_ = v_a_2052_;
goto _start;
}
else
{
lean_object* v_a_2058_; lean_object* v_a_2059_; lean_object* v___x_2061_; uint8_t v_isShared_2062_; uint8_t v_isSharedCheck_2066_; 
lean_dec_ref(v_bs_x27_2048_);
lean_dec_ref(v___y_2036_);
lean_dec_ref(v_a_2032_);
v_a_2058_ = lean_ctor_get(v___x_2050_, 0);
v_a_2059_ = lean_ctor_get(v___x_2050_, 1);
v_isSharedCheck_2066_ = !lean_is_exclusive(v___x_2050_);
if (v_isSharedCheck_2066_ == 0)
{
v___x_2061_ = v___x_2050_;
v_isShared_2062_ = v_isSharedCheck_2066_;
goto v_resetjp_2060_;
}
else
{
lean_inc(v_a_2059_);
lean_inc(v_a_2058_);
lean_dec(v___x_2050_);
v___x_2061_ = lean_box(0);
v_isShared_2062_ = v_isSharedCheck_2066_;
goto v_resetjp_2060_;
}
v_resetjp_2060_:
{
lean_object* v___x_2064_; 
if (v_isShared_2062_ == 0)
{
v___x_2064_ = v___x_2061_;
goto v_reusejp_2063_;
}
else
{
lean_object* v_reuseFailAlloc_2065_; 
v_reuseFailAlloc_2065_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2065_, 0, v_a_2058_);
lean_ctor_set(v_reuseFailAlloc_2065_, 1, v_a_2059_);
v___x_2064_ = v_reuseFailAlloc_2065_;
goto v_reusejp_2063_;
}
v_reusejp_2063_:
{
return v___x_2064_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__0___boxed(lean_object* v_a_2067_, lean_object* v_sz_2068_, lean_object* v_i_2069_, lean_object* v_bs_2070_, lean_object* v___y_2071_, lean_object* v___y_2072_, lean_object* v___y_2073_, lean_object* v___y_2074_, lean_object* v___y_2075_, lean_object* v___y_2076_, lean_object* v___y_2077_){
_start:
{
size_t v_sz_boxed_2078_; size_t v_i_boxed_2079_; lean_object* v_res_2080_; 
v_sz_boxed_2078_ = lean_unbox_usize(v_sz_2068_);
lean_dec(v_sz_2068_);
v_i_boxed_2079_ = lean_unbox_usize(v_i_2069_);
lean_dec(v_i_2069_);
v_res_2080_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__0(v_a_2067_, v_sz_boxed_2078_, v_i_boxed_2079_, v_bs_2070_, v___y_2071_, v___y_2072_, v___y_2073_, v___y_2074_, v___y_2075_, v___y_2076_);
lean_dec_ref(v___y_2075_);
lean_dec(v___y_2074_);
lean_dec(v___y_2073_);
lean_dec(v___y_2072_);
return v_res_2080_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__4(uint8_t v_shouldExport_2083_, lean_object* v_as_2084_, size_t v_i_2085_, size_t v_stop_2086_, lean_object* v_b_2087_, lean_object* v___y_2088_, lean_object* v___y_2089_, lean_object* v___y_2090_, lean_object* v___y_2091_, lean_object* v___y_2092_, lean_object* v___y_2093_){
_start:
{
uint8_t v___x_2095_; 
v___x_2095_ = lean_usize_dec_eq(v_i_2085_, v_stop_2086_);
if (v___x_2095_ == 0)
{
lean_object* v___x_2096_; lean_object* v_lib_2097_; lean_object* v_config_2098_; lean_object* v_nativeFacets_2099_; lean_object* v___x_2100_; lean_object* v___x_2101_; size_t v_sz_2102_; lean_object* v___x_2103_; lean_object* v___x_2104_; lean_object* v___x_2105_; lean_object* v___x_2106_; lean_object* v___x_5443__overap_2107_; lean_object* v___x_2108_; 
v___x_2096_ = lean_array_uget_borrowed(v_as_2084_, v_i_2085_);
v_lib_2097_ = lean_ctor_get(v___x_2096_, 0);
v_config_2098_ = lean_ctor_get(v_lib_2097_, 2);
v_nativeFacets_2099_ = lean_ctor_get(v_config_2098_, 8);
v___x_2100_ = lean_box(v_shouldExport_2083_);
lean_inc_ref(v_nativeFacets_2099_);
v___x_2101_ = lean_apply_1(v_nativeFacets_2099_, v___x_2100_);
v_sz_2102_ = lean_array_size(v___x_2101_);
v___x_2103_ = l_unsafeCast___redArg(v___x_2101_);
lean_dec_ref(v___x_2101_);
v___x_2104_ = lean_box_usize(v_sz_2102_);
v___x_2105_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__4___boxed__const__1));
lean_inc(v___x_2096_);
v___x_2106_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__0___boxed), 11, 4);
lean_closure_set(v___x_2106_, 0, v___x_2096_);
lean_closure_set(v___x_2106_, 1, v___x_2104_);
lean_closure_set(v___x_2106_, 2, v___x_2105_);
lean_closure_set(v___x_2106_, 3, v___x_2103_);
v___x_5443__overap_2107_ = l_unsafeCast___redArg(v___x_2106_);
lean_dec_ref(v___x_2106_);
lean_inc_ref(v___y_2092_);
lean_inc(v___y_2091_);
lean_inc(v___y_2090_);
lean_inc(v___y_2089_);
lean_inc_ref(v___y_2088_);
v___x_2108_ = lean_apply_7(v___x_5443__overap_2107_, v___y_2088_, v___y_2089_, v___y_2090_, v___y_2091_, v___y_2092_, v___y_2093_, lean_box(0));
if (lean_obj_tag(v___x_2108_) == 0)
{
lean_object* v_a_2109_; lean_object* v_a_2110_; lean_object* v___x_2111_; size_t v___x_2112_; size_t v___x_2113_; 
v_a_2109_ = lean_ctor_get(v___x_2108_, 0);
lean_inc(v_a_2109_);
v_a_2110_ = lean_ctor_get(v___x_2108_, 1);
lean_inc(v_a_2110_);
lean_dec_ref_known(v___x_2108_, 2);
v___x_2111_ = l_Array_append___redArg(v_b_2087_, v_a_2109_);
lean_dec(v_a_2109_);
v___x_2112_ = ((size_t)1ULL);
v___x_2113_ = lean_usize_add(v_i_2085_, v___x_2112_);
v_i_2085_ = v___x_2113_;
v_b_2087_ = v___x_2111_;
v___y_2093_ = v_a_2110_;
goto _start;
}
else
{
lean_dec_ref(v___y_2088_);
lean_dec_ref(v_b_2087_);
return v___x_2108_;
}
}
else
{
lean_object* v___x_2115_; 
lean_dec_ref(v___y_2088_);
v___x_2115_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2115_, 0, v_b_2087_);
lean_ctor_set(v___x_2115_, 1, v___y_2093_);
return v___x_2115_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__4___boxed(lean_object* v_shouldExport_2116_, lean_object* v_as_2117_, lean_object* v_i_2118_, lean_object* v_stop_2119_, lean_object* v_b_2120_, lean_object* v___y_2121_, lean_object* v___y_2122_, lean_object* v___y_2123_, lean_object* v___y_2124_, lean_object* v___y_2125_, lean_object* v___y_2126_, lean_object* v___y_2127_){
_start:
{
uint8_t v_shouldExport_boxed_2128_; size_t v_i_boxed_2129_; size_t v_stop_boxed_2130_; lean_object* v_res_2131_; 
v_shouldExport_boxed_2128_ = lean_unbox(v_shouldExport_2116_);
v_i_boxed_2129_ = lean_unbox_usize(v_i_2118_);
lean_dec(v_i_2118_);
v_stop_boxed_2130_ = lean_unbox_usize(v_stop_2119_);
lean_dec(v_stop_2119_);
v_res_2131_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__4(v_shouldExport_boxed_2128_, v_as_2117_, v_i_boxed_2129_, v_stop_boxed_2130_, v_b_2120_, v___y_2121_, v___y_2122_, v___y_2123_, v___y_2124_, v___y_2125_, v___y_2126_);
lean_dec_ref(v___y_2125_);
lean_dec(v___y_2124_);
lean_dec(v___y_2123_);
lean_dec(v___y_2122_);
lean_dec_ref(v_as_2117_);
return v_res_2131_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0___lam__2(lean_object* v_config_2132_, lean_object* v_config_2133_, uint8_t v_shouldExport_2134_, uint8_t v___x_2135_, lean_object* v___x_2136_, lean_object* v___x_2137_, lean_object* v_pkg_2138_, lean_object* v_dir_2139_, lean_object* v_self_2140_, lean_object* v___x_2141_, lean_object* v___y_2142_, lean_object* v___y_2143_, lean_object* v___y_2144_, lean_object* v___y_2145_, lean_object* v___y_2146_, lean_object* v___y_2147_){
_start:
{
size_t v___y_2150_; uint8_t v___y_2151_; lean_object* v___y_2152_; lean_object* v___y_2153_; lean_object* v___y_2154_; lean_object* v___y_2155_; lean_object* v_a_2170_; lean_object* v_a_2171_; lean_object* v___x_2218_; 
lean_inc_ref(v___y_2142_);
lean_inc_ref(v___y_2146_);
lean_inc(v___y_2145_);
lean_inc(v___y_2144_);
lean_inc(v___x_2137_);
v___x_2218_ = lean_apply_7(v___y_2142_, v___x_2141_, v___x_2137_, v___y_2144_, v___y_2145_, v___y_2146_, v___y_2147_, lean_box(0));
if (lean_obj_tag(v___x_2218_) == 0)
{
lean_object* v_a_2219_; lean_object* v_a_2220_; lean_object* v___x_2221_; 
v_a_2219_ = lean_ctor_get(v___x_2218_, 0);
lean_inc(v_a_2219_);
v_a_2220_ = lean_ctor_get(v___x_2218_, 1);
lean_inc(v_a_2220_);
lean_dec_ref_known(v___x_2218_, 2);
v___x_2221_ = l_Lake_Job_await___redArg(v_a_2219_, v_a_2220_);
if (lean_obj_tag(v___x_2221_) == 0)
{
lean_object* v_a_2222_; lean_object* v_a_2223_; lean_object* v___x_2224_; lean_object* v___x_2225_; lean_object* v___x_2226_; uint8_t v___x_2227_; 
v_a_2222_ = lean_ctor_get(v___x_2221_, 0);
lean_inc(v_a_2222_);
v_a_2223_ = lean_ctor_get(v___x_2221_, 1);
lean_inc(v_a_2223_);
lean_dec_ref_known(v___x_2221_, 2);
v___x_2224_ = lean_unsigned_to_nat(0u);
v___x_2225_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__6___closed__2));
v___x_2226_ = lean_array_get_size(v_a_2222_);
v___x_2227_ = lean_nat_dec_lt(v___x_2224_, v___x_2226_);
if (v___x_2227_ == 0)
{
lean_dec(v_a_2222_);
v_a_2170_ = v___x_2225_;
v_a_2171_ = v_a_2223_;
goto v___jp_2169_;
}
else
{
size_t v___x_2228_; size_t v___x_2229_; lean_object* v___x_2230_; 
v___x_2228_ = ((size_t)0ULL);
v___x_2229_ = lean_usize_of_nat(v___x_2226_);
lean_inc_ref(v___y_2142_);
v___x_2230_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__4(v_shouldExport_2134_, v_a_2222_, v___x_2228_, v___x_2229_, v___x_2225_, v___y_2142_, v___x_2137_, v___y_2144_, v___y_2145_, v___y_2146_, v_a_2223_);
lean_dec(v_a_2222_);
if (lean_obj_tag(v___x_2230_) == 0)
{
lean_object* v_a_2231_; lean_object* v_a_2232_; 
v_a_2231_ = lean_ctor_get(v___x_2230_, 0);
lean_inc(v_a_2231_);
v_a_2232_ = lean_ctor_get(v___x_2230_, 1);
lean_inc(v_a_2232_);
lean_dec_ref_known(v___x_2230_, 2);
v_a_2170_ = v_a_2231_;
v_a_2171_ = v_a_2232_;
goto v___jp_2169_;
}
else
{
lean_object* v_a_2233_; lean_object* v_a_2234_; lean_object* v___x_2236_; uint8_t v_isShared_2237_; uint8_t v_isSharedCheck_2241_; 
lean_dec_ref(v___y_2142_);
lean_dec_ref(v_self_2140_);
lean_dec_ref(v_dir_2139_);
lean_dec_ref(v_pkg_2138_);
lean_dec(v___x_2137_);
lean_dec(v___x_2136_);
lean_dec_ref(v_config_2132_);
v_a_2233_ = lean_ctor_get(v___x_2230_, 0);
v_a_2234_ = lean_ctor_get(v___x_2230_, 1);
v_isSharedCheck_2241_ = !lean_is_exclusive(v___x_2230_);
if (v_isSharedCheck_2241_ == 0)
{
v___x_2236_ = v___x_2230_;
v_isShared_2237_ = v_isSharedCheck_2241_;
goto v_resetjp_2235_;
}
else
{
lean_inc(v_a_2234_);
lean_inc(v_a_2233_);
lean_dec(v___x_2230_);
v___x_2236_ = lean_box(0);
v_isShared_2237_ = v_isSharedCheck_2241_;
goto v_resetjp_2235_;
}
v_resetjp_2235_:
{
lean_object* v___x_2239_; 
if (v_isShared_2237_ == 0)
{
v___x_2239_ = v___x_2236_;
goto v_reusejp_2238_;
}
else
{
lean_object* v_reuseFailAlloc_2240_; 
v_reuseFailAlloc_2240_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2240_, 0, v_a_2233_);
lean_ctor_set(v_reuseFailAlloc_2240_, 1, v_a_2234_);
v___x_2239_ = v_reuseFailAlloc_2240_;
goto v_reusejp_2238_;
}
v_reusejp_2238_:
{
return v___x_2239_;
}
}
}
}
}
else
{
lean_object* v_a_2242_; lean_object* v_a_2243_; lean_object* v___x_2245_; uint8_t v_isShared_2246_; uint8_t v_isSharedCheck_2250_; 
lean_dec_ref(v___y_2142_);
lean_dec_ref(v_self_2140_);
lean_dec_ref(v_dir_2139_);
lean_dec_ref(v_pkg_2138_);
lean_dec(v___x_2137_);
lean_dec(v___x_2136_);
lean_dec_ref(v_config_2132_);
v_a_2242_ = lean_ctor_get(v___x_2221_, 0);
v_a_2243_ = lean_ctor_get(v___x_2221_, 1);
v_isSharedCheck_2250_ = !lean_is_exclusive(v___x_2221_);
if (v_isSharedCheck_2250_ == 0)
{
v___x_2245_ = v___x_2221_;
v_isShared_2246_ = v_isSharedCheck_2250_;
goto v_resetjp_2244_;
}
else
{
lean_inc(v_a_2243_);
lean_inc(v_a_2242_);
lean_dec(v___x_2221_);
v___x_2245_ = lean_box(0);
v_isShared_2246_ = v_isSharedCheck_2250_;
goto v_resetjp_2244_;
}
v_resetjp_2244_:
{
lean_object* v___x_2248_; 
if (v_isShared_2246_ == 0)
{
v___x_2248_ = v___x_2245_;
goto v_reusejp_2247_;
}
else
{
lean_object* v_reuseFailAlloc_2249_; 
v_reuseFailAlloc_2249_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2249_, 0, v_a_2242_);
lean_ctor_set(v_reuseFailAlloc_2249_, 1, v_a_2243_);
v___x_2248_ = v_reuseFailAlloc_2249_;
goto v_reusejp_2247_;
}
v_reusejp_2247_:
{
return v___x_2248_;
}
}
}
}
else
{
lean_object* v_a_2251_; lean_object* v_a_2252_; lean_object* v___x_2254_; uint8_t v_isShared_2255_; uint8_t v_isSharedCheck_2259_; 
lean_dec_ref(v___y_2142_);
lean_dec_ref(v_self_2140_);
lean_dec_ref(v_dir_2139_);
lean_dec_ref(v_pkg_2138_);
lean_dec(v___x_2137_);
lean_dec(v___x_2136_);
lean_dec_ref(v_config_2132_);
v_a_2251_ = lean_ctor_get(v___x_2218_, 0);
v_a_2252_ = lean_ctor_get(v___x_2218_, 1);
v_isSharedCheck_2259_ = !lean_is_exclusive(v___x_2218_);
if (v_isSharedCheck_2259_ == 0)
{
v___x_2254_ = v___x_2218_;
v_isShared_2255_ = v_isSharedCheck_2259_;
goto v_resetjp_2253_;
}
else
{
lean_inc(v_a_2252_);
lean_inc(v_a_2251_);
lean_dec(v___x_2218_);
v___x_2254_ = lean_box(0);
v_isShared_2255_ = v_isSharedCheck_2259_;
goto v_resetjp_2253_;
}
v_resetjp_2253_:
{
lean_object* v___x_2257_; 
if (v_isShared_2255_ == 0)
{
v___x_2257_ = v___x_2254_;
goto v_reusejp_2256_;
}
else
{
lean_object* v_reuseFailAlloc_2258_; 
v_reuseFailAlloc_2258_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2258_, 0, v_a_2251_);
lean_ctor_set(v_reuseFailAlloc_2258_, 1, v_a_2252_);
v___x_2257_ = v_reuseFailAlloc_2258_;
goto v_reusejp_2256_;
}
v_reusejp_2256_:
{
return v___x_2257_;
}
}
}
v___jp_2149_:
{
lean_object* v___x_2156_; lean_object* v___x_2157_; lean_object* v___x_2158_; lean_object* v___x_2159_; lean_object* v___f_2160_; lean_object* v___x_2161_; lean_object* v___x_2162_; lean_object* v___x_2163_; lean_object* v___x_2164_; uint8_t v___x_2165_; lean_object* v___x_2166_; lean_object* v___x_2167_; lean_object* v___x_2168_; 
v___x_2156_ = lean_box(v___y_2151_);
v___x_2157_ = lean_box(v_shouldExport_2134_);
v___x_2158_ = lean_box(v___x_2135_);
v___x_2159_ = lean_box_usize(v___y_2150_);
v___f_2160_ = lean_alloc_closure((void*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0___lam__1___boxed), 13, 5);
lean_closure_set(v___f_2160_, 0, v___x_2156_);
lean_closure_set(v___f_2160_, 1, v___y_2155_);
lean_closure_set(v___f_2160_, 2, v___x_2157_);
lean_closure_set(v___f_2160_, 3, v___x_2158_);
lean_closure_set(v___f_2160_, 4, v___x_2159_);
v___x_2161_ = l_Array_append___redArg(v___y_2154_, v___y_2153_);
lean_dec_ref(v___y_2153_);
v___x_2162_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__6___closed__0));
v___x_2163_ = l_Lake_Job_collectArray___redArg(v___x_2161_, v___x_2162_);
lean_dec_ref(v___x_2161_);
v___x_2164_ = lean_unsigned_to_nat(0u);
v___x_2165_ = 0;
v___x_2166_ = lean_obj_once(&l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___lam__0___closed__2, &l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___lam__0___closed__2_once, _init_l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___lam__0___closed__2);
v___x_2167_ = l_Lake_Job_mapM___redArg(v___x_2136_, v___x_2163_, v___f_2160_, v___x_2164_, v___x_2165_, v___y_2142_, v___x_2137_, v___y_2144_, v___y_2145_, v___y_2146_, v___x_2166_);
lean_dec(v___x_2137_);
v___x_2168_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2168_, 0, v___x_2167_);
lean_ctor_set(v___x_2168_, 1, v___y_2152_);
return v___x_2168_;
}
v___jp_2169_:
{
lean_object* v_toLeanConfig_2172_; lean_object* v_toLeanConfig_2173_; uint8_t v_bootstrap_2174_; lean_object* v_buildDir_2175_; lean_object* v_nativeLibDir_2176_; lean_object* v_moreLinkObjs_2177_; lean_object* v_moreLinkObjs_2178_; lean_object* v___x_2179_; size_t v_sz_2180_; size_t v___x_2181_; lean_object* v___x_2182_; lean_object* v___x_2183_; lean_object* v___x_2184_; lean_object* v___x_2185_; lean_object* v___x_5700__overap_2186_; lean_object* v___x_2187_; 
v_toLeanConfig_2172_ = lean_ctor_get(v_config_2132_, 1);
lean_inc_ref(v_toLeanConfig_2172_);
v_toLeanConfig_2173_ = lean_ctor_get(v_config_2133_, 0);
v_bootstrap_2174_ = lean_ctor_get_uint8(v_config_2132_, sizeof(void*)*28);
v_buildDir_2175_ = lean_ctor_get(v_config_2132_, 5);
lean_inc_ref(v_buildDir_2175_);
v_nativeLibDir_2176_ = lean_ctor_get(v_config_2132_, 7);
lean_inc_ref(v_nativeLibDir_2176_);
lean_dec_ref(v_config_2132_);
v_moreLinkObjs_2177_ = lean_ctor_get(v_toLeanConfig_2172_, 6);
lean_inc_ref(v_moreLinkObjs_2177_);
lean_dec_ref(v_toLeanConfig_2172_);
v_moreLinkObjs_2178_ = lean_ctor_get(v_toLeanConfig_2173_, 6);
v___x_2179_ = l_Array_append___redArg(v_moreLinkObjs_2177_, v_moreLinkObjs_2178_);
v_sz_2180_ = lean_array_size(v___x_2179_);
v___x_2181_ = ((size_t)0ULL);
v___x_2182_ = l_unsafeCast___redArg(v___x_2179_);
lean_dec_ref(v___x_2179_);
v___x_2183_ = lean_box_usize(v_sz_2180_);
v___x_2184_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__4___boxed__const__1));
v___x_2185_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__2___boxed), 11, 4);
lean_closure_set(v___x_2185_, 0, v_pkg_2138_);
lean_closure_set(v___x_2185_, 1, v___x_2183_);
lean_closure_set(v___x_2185_, 2, v___x_2184_);
lean_closure_set(v___x_2185_, 3, v___x_2182_);
v___x_5700__overap_2186_ = l_unsafeCast___redArg(v___x_2185_);
lean_dec_ref(v___x_2185_);
lean_inc_ref(v___y_2146_);
lean_inc(v___y_2145_);
lean_inc(v___y_2144_);
lean_inc(v___x_2137_);
lean_inc_ref(v___y_2142_);
v___x_2187_ = lean_apply_7(v___x_5700__overap_2186_, v___y_2142_, v___x_2137_, v___y_2144_, v___y_2145_, v___y_2146_, v_a_2171_, lean_box(0));
if (lean_obj_tag(v___x_2187_) == 0)
{
if (v_shouldExport_2134_ == 0)
{
lean_object* v_a_2188_; lean_object* v_a_2189_; lean_object* v___x_2190_; lean_object* v___x_2191_; lean_object* v___x_2192_; lean_object* v___x_2193_; lean_object* v___x_2194_; lean_object* v___x_2195_; lean_object* v___x_2196_; 
v_a_2188_ = lean_ctor_get(v___x_2187_, 0);
lean_inc(v_a_2188_);
v_a_2189_ = lean_ctor_get(v___x_2187_, 1);
lean_inc(v_a_2189_);
lean_dec_ref_known(v___x_2187_, 2);
v___x_2190_ = l_System_FilePath_normalize(v_buildDir_2175_);
v___x_2191_ = l_Lake_joinRelative(v_dir_2139_, v___x_2190_);
v___x_2192_ = l_System_FilePath_normalize(v_nativeLibDir_2176_);
v___x_2193_ = l_Lake_joinRelative(v___x_2191_, v___x_2192_);
v___x_2194_ = l_Lake_LeanLib_libName(v_self_2140_);
v___x_2195_ = l_Lake_nameToStaticLib(v___x_2194_, v_shouldExport_2134_);
v___x_2196_ = l_Lake_joinRelative(v___x_2193_, v___x_2195_);
v___y_2150_ = v___x_2181_;
v___y_2151_ = v_bootstrap_2174_;
v___y_2152_ = v_a_2189_;
v___y_2153_ = v_a_2188_;
v___y_2154_ = v_a_2170_;
v___y_2155_ = v___x_2196_;
goto v___jp_2149_;
}
else
{
lean_object* v_a_2197_; lean_object* v_a_2198_; lean_object* v___x_2199_; lean_object* v___x_2200_; lean_object* v___x_2201_; lean_object* v___x_2202_; lean_object* v___x_2203_; uint8_t v___x_2204_; lean_object* v___x_2205_; lean_object* v___x_2206_; lean_object* v___x_2207_; lean_object* v___x_2208_; 
v_a_2197_ = lean_ctor_get(v___x_2187_, 0);
lean_inc(v_a_2197_);
v_a_2198_ = lean_ctor_get(v___x_2187_, 1);
lean_inc(v_a_2198_);
lean_dec_ref_known(v___x_2187_, 2);
v___x_2199_ = l_System_FilePath_normalize(v_buildDir_2175_);
v___x_2200_ = l_Lake_joinRelative(v_dir_2139_, v___x_2199_);
v___x_2201_ = l_System_FilePath_normalize(v_nativeLibDir_2176_);
v___x_2202_ = l_Lake_joinRelative(v___x_2200_, v___x_2201_);
v___x_2203_ = l_Lake_LeanLib_libName(v_self_2140_);
v___x_2204_ = 0;
v___x_2205_ = l_Lake_nameToStaticLib(v___x_2203_, v___x_2204_);
v___x_2206_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__6___closed__1));
v___x_2207_ = l_System_FilePath_addExtension(v___x_2205_, v___x_2206_);
v___x_2208_ = l_Lake_joinRelative(v___x_2202_, v___x_2207_);
v___y_2150_ = v___x_2181_;
v___y_2151_ = v_bootstrap_2174_;
v___y_2152_ = v_a_2198_;
v___y_2153_ = v_a_2197_;
v___y_2154_ = v_a_2170_;
v___y_2155_ = v___x_2208_;
goto v___jp_2149_;
}
}
else
{
lean_object* v_a_2209_; lean_object* v_a_2210_; lean_object* v___x_2212_; uint8_t v_isShared_2213_; uint8_t v_isSharedCheck_2217_; 
lean_dec_ref(v_nativeLibDir_2176_);
lean_dec_ref(v_buildDir_2175_);
lean_dec_ref(v_a_2170_);
lean_dec_ref(v___y_2142_);
lean_dec_ref(v_self_2140_);
lean_dec_ref(v_dir_2139_);
lean_dec(v___x_2137_);
lean_dec(v___x_2136_);
v_a_2209_ = lean_ctor_get(v___x_2187_, 0);
v_a_2210_ = lean_ctor_get(v___x_2187_, 1);
v_isSharedCheck_2217_ = !lean_is_exclusive(v___x_2187_);
if (v_isSharedCheck_2217_ == 0)
{
v___x_2212_ = v___x_2187_;
v_isShared_2213_ = v_isSharedCheck_2217_;
goto v_resetjp_2211_;
}
else
{
lean_inc(v_a_2210_);
lean_inc(v_a_2209_);
lean_dec(v___x_2187_);
v___x_2212_ = lean_box(0);
v_isShared_2213_ = v_isSharedCheck_2217_;
goto v_resetjp_2211_;
}
v_resetjp_2211_:
{
lean_object* v___x_2215_; 
if (v_isShared_2213_ == 0)
{
v___x_2215_ = v___x_2212_;
goto v_reusejp_2214_;
}
else
{
lean_object* v_reuseFailAlloc_2216_; 
v_reuseFailAlloc_2216_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2216_, 0, v_a_2209_);
lean_ctor_set(v_reuseFailAlloc_2216_, 1, v_a_2210_);
v___x_2215_ = v_reuseFailAlloc_2216_;
goto v_reusejp_2214_;
}
v_reusejp_2214_:
{
return v___x_2215_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0___lam__2___boxed(lean_object** _args){
lean_object* v_config_2260_ = _args[0];
lean_object* v_config_2261_ = _args[1];
lean_object* v_shouldExport_2262_ = _args[2];
lean_object* v___x_2263_ = _args[3];
lean_object* v___x_2264_ = _args[4];
lean_object* v___x_2265_ = _args[5];
lean_object* v_pkg_2266_ = _args[6];
lean_object* v_dir_2267_ = _args[7];
lean_object* v_self_2268_ = _args[8];
lean_object* v___x_2269_ = _args[9];
lean_object* v___y_2270_ = _args[10];
lean_object* v___y_2271_ = _args[11];
lean_object* v___y_2272_ = _args[12];
lean_object* v___y_2273_ = _args[13];
lean_object* v___y_2274_ = _args[14];
lean_object* v___y_2275_ = _args[15];
lean_object* v___y_2276_ = _args[16];
_start:
{
uint8_t v_shouldExport_boxed_2277_; uint8_t v___x_6748__boxed_2278_; lean_object* v_res_2279_; 
v_shouldExport_boxed_2277_ = lean_unbox(v_shouldExport_2262_);
v___x_6748__boxed_2278_ = lean_unbox(v___x_2263_);
v_res_2279_ = l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0___lam__2(v_config_2260_, v_config_2261_, v_shouldExport_boxed_2277_, v___x_6748__boxed_2278_, v___x_2264_, v___x_2265_, v_pkg_2266_, v_dir_2267_, v_self_2268_, v___x_2269_, v___y_2270_, v___y_2271_, v___y_2272_, v___y_2273_, v___y_2274_, v___y_2275_);
lean_dec_ref(v___y_2274_);
lean_dec(v___y_2273_);
lean_dec(v___y_2272_);
lean_dec(v___y_2271_);
lean_dec(v_config_2261_);
return v_res_2279_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0(lean_object* v___y_2280_, lean_object* v_self_2281_, uint8_t v_shouldExport_2282_, lean_object* v_a_2283_, lean_object* v_a_2284_, lean_object* v_a_2285_, lean_object* v_a_2286_, lean_object* v_a_2287_){
_start:
{
lean_object* v_toBuildConfig_2289_; lean_object* v_registeredJobs_2290_; uint8_t v_verbosity_2291_; lean_object* v___x_2292_; lean_object* v___x_2293_; lean_object* v___x_2294_; uint8_t v___x_2295_; uint8_t v___x_2296_; lean_object* v___y_2298_; 
v_toBuildConfig_2289_ = lean_ctor_get(v_a_2286_, 0);
v_registeredJobs_2290_ = lean_ctor_get(v_a_2286_, 4);
v_verbosity_2291_ = lean_ctor_get_uint8(v_toBuildConfig_2289_, sizeof(void*)*5 + 4);
v___x_2292_ = l_Lake_instDataKindFilePath;
v___x_2293_ = l_Lake_Verbosity_ctorIdx(v_verbosity_2291_);
v___x_2294_ = lean_obj_once(&l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___closed__0, &l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___closed__0_once, _init_l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___closed__0);
v___x_2295_ = lean_nat_dec_eq(v___x_2293_, v___x_2294_);
lean_dec(v___x_2293_);
v___x_2296_ = 1;
if (v___x_2295_ == 0)
{
lean_object* v___x_2343_; 
v___x_2343_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___lam__0___closed__0));
v___y_2298_ = v___x_2343_;
goto v___jp_2297_;
}
else
{
if (v_shouldExport_2282_ == 0)
{
lean_object* v___x_2344_; 
v___x_2344_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___closed__2));
v___y_2298_ = v___x_2344_;
goto v___jp_2297_;
}
else
{
lean_object* v___x_2345_; 
v___x_2345_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___closed__3));
v___y_2298_ = v___x_2345_;
goto v___jp_2297_;
}
}
v___jp_2297_:
{
lean_object* v_pkg_2299_; lean_object* v_name_2300_; lean_object* v_config_2301_; lean_object* v_keyName_2302_; lean_object* v_dir_2303_; lean_object* v_config_2304_; lean_object* v___x_2305_; lean_object* v___x_2306_; lean_object* v___x_2307_; lean_object* v___x_2308_; lean_object* v___x_2309_; lean_object* v___x_2310_; lean_object* v___x_2311_; lean_object* v___x_2312_; lean_object* v___x_2313_; lean_object* v___x_2314_; lean_object* v___x_2315_; lean_object* v___f_2316_; uint8_t v___x_2317_; lean_object* v___x_2318_; 
v_pkg_2299_ = lean_ctor_get(v_self_2281_, 0);
lean_inc_ref_n(v_pkg_2299_, 2);
v_name_2300_ = lean_ctor_get(v_self_2281_, 1);
v_config_2301_ = lean_ctor_get(v_self_2281_, 2);
lean_inc(v_config_2301_);
v_keyName_2302_ = lean_ctor_get(v_pkg_2299_, 2);
v_dir_2303_ = lean_ctor_get(v_pkg_2299_, 4);
lean_inc_ref(v_dir_2303_);
v_config_2304_ = lean_ctor_get(v_pkg_2299_, 6);
lean_inc_ref(v_config_2304_);
lean_inc_n(v_name_2300_, 2);
v___x_2305_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_name_2300_, v___x_2296_);
v___x_2306_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___closed__1));
v___x_2307_ = lean_string_append(v___x_2305_, v___x_2306_);
v___x_2308_ = lean_string_append(v___x_2307_, v___y_2298_);
v___x_2309_ = l_Lake_LeanLib_modulesFacet;
lean_inc(v_keyName_2302_);
v___x_2310_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_2310_, 0, v_keyName_2302_);
lean_ctor_set(v___x_2310_, 1, v_name_2300_);
v___x_2311_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig___closed__2));
lean_inc_ref(v_self_2281_);
v___x_2312_ = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(v___x_2312_, 0, v___x_2310_);
lean_ctor_set(v___x_2312_, 1, v___x_2311_);
lean_ctor_set(v___x_2312_, 2, v_self_2281_);
lean_ctor_set(v___x_2312_, 3, v___x_2309_);
v___x_2313_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2313_, 0, v_pkg_2299_);
v___x_2314_ = lean_box(v_shouldExport_2282_);
v___x_2315_ = lean_box(v___x_2296_);
v___f_2316_ = lean_alloc_closure((void*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0___lam__2___boxed), 17, 10);
lean_closure_set(v___f_2316_, 0, v_config_2304_);
lean_closure_set(v___f_2316_, 1, v_config_2301_);
lean_closure_set(v___f_2316_, 2, v___x_2314_);
lean_closure_set(v___f_2316_, 3, v___x_2315_);
lean_closure_set(v___f_2316_, 4, v___x_2292_);
lean_closure_set(v___f_2316_, 5, v___x_2313_);
lean_closure_set(v___f_2316_, 6, v_pkg_2299_);
lean_closure_set(v___f_2316_, 7, v_dir_2303_);
lean_closure_set(v___f_2316_, 8, v_self_2281_);
lean_closure_set(v___f_2316_, 9, v___x_2312_);
v___x_2317_ = 0;
v___x_2318_ = l_Lake_ensureJob___redArg(v___x_2292_, v___f_2316_, v___y_2280_, v_a_2283_, v_a_2284_, v_a_2285_, v_a_2286_, v_a_2287_);
if (lean_obj_tag(v___x_2318_) == 0)
{
lean_object* v_a_2319_; lean_object* v_a_2320_; lean_object* v___x_2322_; uint8_t v_isShared_2323_; uint8_t v_isSharedCheck_2342_; 
v_a_2319_ = lean_ctor_get(v___x_2318_, 0);
v_a_2320_ = lean_ctor_get(v___x_2318_, 1);
v_isSharedCheck_2342_ = !lean_is_exclusive(v___x_2318_);
if (v_isSharedCheck_2342_ == 0)
{
v___x_2322_ = v___x_2318_;
v_isShared_2323_ = v_isSharedCheck_2342_;
goto v_resetjp_2321_;
}
else
{
lean_inc(v_a_2320_);
lean_inc(v_a_2319_);
lean_dec(v___x_2318_);
v___x_2322_ = lean_box(0);
v_isShared_2323_ = v_isSharedCheck_2342_;
goto v_resetjp_2321_;
}
v_resetjp_2321_:
{
lean_object* v_task_2324_; lean_object* v_kind_2325_; lean_object* v___x_2327_; uint8_t v_isShared_2328_; uint8_t v_isSharedCheck_2340_; 
v_task_2324_ = lean_ctor_get(v_a_2319_, 0);
v_kind_2325_ = lean_ctor_get(v_a_2319_, 1);
v_isSharedCheck_2340_ = !lean_is_exclusive(v_a_2319_);
if (v_isSharedCheck_2340_ == 0)
{
lean_object* v_unused_2341_; 
v_unused_2341_ = lean_ctor_get(v_a_2319_, 2);
lean_dec(v_unused_2341_);
v___x_2327_ = v_a_2319_;
v_isShared_2328_ = v_isSharedCheck_2340_;
goto v_resetjp_2326_;
}
else
{
lean_inc(v_kind_2325_);
lean_inc(v_task_2324_);
lean_dec(v_a_2319_);
v___x_2327_ = lean_box(0);
v_isShared_2328_ = v_isSharedCheck_2340_;
goto v_resetjp_2326_;
}
v_resetjp_2326_:
{
lean_object* v_job_2330_; 
if (v_isShared_2328_ == 0)
{
lean_ctor_set(v___x_2327_, 2, v___x_2308_);
v_job_2330_ = v___x_2327_;
goto v_reusejp_2329_;
}
else
{
lean_object* v_reuseFailAlloc_2339_; 
v_reuseFailAlloc_2339_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_2339_, 0, v_task_2324_);
lean_ctor_set(v_reuseFailAlloc_2339_, 1, v_kind_2325_);
lean_ctor_set(v_reuseFailAlloc_2339_, 2, v___x_2308_);
v_job_2330_ = v_reuseFailAlloc_2339_;
goto v_reusejp_2329_;
}
v_reusejp_2329_:
{
lean_object* v___x_2331_; lean_object* v___x_2332_; lean_object* v___x_2333_; lean_object* v___x_2334_; lean_object* v___x_2335_; lean_object* v___x_2337_; 
lean_ctor_set_uint8(v_job_2330_, sizeof(void*)*3, v___x_2317_);
v___x_2331_ = lean_st_ref_take(v_registeredJobs_2290_);
lean_inc_ref(v_job_2330_);
v___x_2332_ = l_Lake_Job_toOpaque___redArg(v_job_2330_);
v___x_2333_ = lean_array_push(v___x_2331_, v___x_2332_);
v___x_2334_ = lean_st_ref_put(v_registeredJobs_2290_, v___x_2333_);
v___x_2335_ = l_Lake_Job_renew___redArg(v_job_2330_);
if (v_isShared_2323_ == 0)
{
lean_ctor_set(v___x_2322_, 0, v___x_2335_);
v___x_2337_ = v___x_2322_;
goto v_reusejp_2336_;
}
else
{
lean_object* v_reuseFailAlloc_2338_; 
v_reuseFailAlloc_2338_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2338_, 0, v___x_2335_);
lean_ctor_set(v_reuseFailAlloc_2338_, 1, v_a_2320_);
v___x_2337_ = v_reuseFailAlloc_2338_;
goto v_reusejp_2336_;
}
v_reusejp_2336_:
{
return v___x_2337_;
}
}
}
}
}
else
{
lean_dec_ref(v___x_2308_);
return v___x_2318_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0___boxed(lean_object* v___y_2346_, lean_object* v_self_2347_, lean_object* v_shouldExport_2348_, lean_object* v_a_2349_, lean_object* v_a_2350_, lean_object* v_a_2351_, lean_object* v_a_2352_, lean_object* v_a_2353_, lean_object* v_a_2354_){
_start:
{
uint8_t v_shouldExport_boxed_2355_; lean_object* v_res_2356_; 
v_shouldExport_boxed_2355_ = lean_unbox(v_shouldExport_2348_);
v_res_2356_ = l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0(v___y_2346_, v_self_2347_, v_shouldExport_boxed_2355_, v_a_2349_, v_a_2350_, v_a_2351_, v_a_2352_, v_a_2353_);
lean_dec_ref(v_a_2352_);
lean_dec(v_a_2351_);
lean_dec(v_a_2350_);
lean_dec(v_a_2349_);
return v_res_2356_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLib_staticFacetConfig___lam__0(lean_object* v_x_2357_, lean_object* v___y_2358_, lean_object* v___y_2359_, lean_object* v___y_2360_, lean_object* v___y_2361_, lean_object* v___y_2362_, lean_object* v___y_2363_){
_start:
{
uint8_t v___x_2365_; lean_object* v___x_2366_; 
v___x_2365_ = 0;
v___x_2366_ = l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0(v___y_2358_, v_x_2357_, v___x_2365_, v___y_2359_, v___y_2360_, v___y_2361_, v___y_2362_, v___y_2363_);
return v___x_2366_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLib_staticFacetConfig___lam__0___boxed(lean_object* v_x_2367_, lean_object* v___y_2368_, lean_object* v___y_2369_, lean_object* v___y_2370_, lean_object* v___y_2371_, lean_object* v___y_2372_, lean_object* v___y_2373_, lean_object* v___y_2374_){
_start:
{
lean_object* v_res_2375_; 
v_res_2375_ = l_Lake_LeanLib_staticFacetConfig___lam__0(v_x_2367_, v___y_2368_, v___y_2369_, v___y_2370_, v___y_2371_, v___y_2372_, v___y_2373_);
lean_dec_ref(v___y_2372_);
lean_dec(v___y_2371_);
lean_dec(v___y_2370_);
lean_dec(v___y_2369_);
return v_res_2375_;
}
}
static lean_object* _init_l_Lake_LeanLib_staticFacetConfig___closed__2(void){
_start:
{
lean_object* v___f_2378_; uint8_t v___x_2379_; lean_object* v___x_2380_; lean_object* v___f_2381_; lean_object* v___x_2382_; lean_object* v___x_2383_; 
v___f_2378_ = ((lean_object*)(l_Lake_LeanLib_staticFacetConfig___closed__1));
v___x_2379_ = 1;
v___x_2380_ = l_Lake_instDataKindFilePath;
v___f_2381_ = ((lean_object*)(l_Lake_LeanLib_staticFacetConfig___closed__0));
v___x_2382_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig___closed__2));
v___x_2383_ = lean_alloc_ctor(0, 4, 2);
lean_ctor_set(v___x_2383_, 0, v___x_2382_);
lean_ctor_set(v___x_2383_, 1, v___f_2381_);
lean_ctor_set(v___x_2383_, 2, v___x_2380_);
lean_ctor_set(v___x_2383_, 3, v___f_2378_);
lean_ctor_set_uint8(v___x_2383_, sizeof(void*)*4, v___x_2379_);
lean_ctor_set_uint8(v___x_2383_, sizeof(void*)*4 + 1, v___x_2379_);
return v___x_2383_;
}
}
static lean_object* _init_l_Lake_LeanLib_staticFacetConfig(void){
_start:
{
lean_object* v___x_2384_; 
v___x_2384_ = lean_obj_once(&l_Lake_LeanLib_staticFacetConfig___closed__2, &l_Lake_LeanLib_staticFacetConfig___closed__2_once, _init_l_Lake_LeanLib_staticFacetConfig___closed__2);
return v___x_2384_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__3(lean_object* v_a_2385_, lean_object* v_as_2386_, size_t v_i_2387_, size_t v_stop_2388_, lean_object* v_b_2389_, lean_object* v___y_2390_, lean_object* v___y_2391_, lean_object* v___y_2392_, lean_object* v___y_2393_, lean_object* v___y_2394_, lean_object* v___y_2395_){
_start:
{
lean_object* v___x_2397_; 
v___x_2397_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__3___redArg(v_a_2385_, v_as_2386_, v_i_2387_, v_stop_2388_, v_b_2389_, v___y_2395_);
return v___x_2397_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__3___boxed(lean_object* v_a_2398_, lean_object* v_as_2399_, lean_object* v_i_2400_, lean_object* v_stop_2401_, lean_object* v_b_2402_, lean_object* v___y_2403_, lean_object* v___y_2404_, lean_object* v___y_2405_, lean_object* v___y_2406_, lean_object* v___y_2407_, lean_object* v___y_2408_, lean_object* v___y_2409_){
_start:
{
size_t v_i_boxed_2410_; size_t v_stop_boxed_2411_; lean_object* v_res_2412_; 
v_i_boxed_2410_ = lean_unbox_usize(v_i_2400_);
lean_dec(v_i_2400_);
v_stop_boxed_2411_ = lean_unbox_usize(v_stop_2401_);
lean_dec(v_stop_2401_);
v_res_2412_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__3(v_a_2398_, v_as_2399_, v_i_boxed_2410_, v_stop_boxed_2411_, v_b_2402_, v___y_2403_, v___y_2404_, v___y_2405_, v___y_2406_, v___y_2407_, v___y_2408_);
lean_dec_ref(v___y_2407_);
lean_dec(v___y_2406_);
lean_dec(v___y_2405_);
lean_dec(v___y_2404_);
lean_dec_ref(v___y_2403_);
lean_dec_ref(v_as_2399_);
lean_dec(v_a_2398_);
return v_res_2412_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLib_staticExportFacetConfig___lam__0(lean_object* v_x_2413_, lean_object* v___y_2414_, lean_object* v___y_2415_, lean_object* v___y_2416_, lean_object* v___y_2417_, lean_object* v___y_2418_, lean_object* v___y_2419_){
_start:
{
uint8_t v___x_2421_; lean_object* v___x_2422_; 
v___x_2421_ = 1;
v___x_2422_ = l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0(v___y_2414_, v_x_2413_, v___x_2421_, v___y_2415_, v___y_2416_, v___y_2417_, v___y_2418_, v___y_2419_);
return v___x_2422_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLib_staticExportFacetConfig___lam__0___boxed(lean_object* v_x_2423_, lean_object* v___y_2424_, lean_object* v___y_2425_, lean_object* v___y_2426_, lean_object* v___y_2427_, lean_object* v___y_2428_, lean_object* v___y_2429_, lean_object* v___y_2430_){
_start:
{
lean_object* v_res_2431_; 
v_res_2431_ = l_Lake_LeanLib_staticExportFacetConfig___lam__0(v_x_2423_, v___y_2424_, v___y_2425_, v___y_2426_, v___y_2427_, v___y_2428_, v___y_2429_);
lean_dec_ref(v___y_2428_);
lean_dec(v___y_2427_);
lean_dec(v___y_2426_);
lean_dec(v___y_2425_);
return v_res_2431_;
}
}
static lean_object* _init_l_Lake_LeanLib_staticExportFacetConfig___closed__1(void){
_start:
{
lean_object* v___f_2433_; uint8_t v___x_2434_; lean_object* v___x_2435_; lean_object* v___f_2436_; lean_object* v___x_2437_; lean_object* v___x_2438_; 
v___f_2433_ = ((lean_object*)(l_Lake_LeanLib_staticFacetConfig___closed__1));
v___x_2434_ = 1;
v___x_2435_ = l_Lake_instDataKindFilePath;
v___f_2436_ = ((lean_object*)(l_Lake_LeanLib_staticExportFacetConfig___closed__0));
v___x_2437_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig___closed__2));
v___x_2438_ = lean_alloc_ctor(0, 4, 2);
lean_ctor_set(v___x_2438_, 0, v___x_2437_);
lean_ctor_set(v___x_2438_, 1, v___f_2436_);
lean_ctor_set(v___x_2438_, 2, v___x_2435_);
lean_ctor_set(v___x_2438_, 3, v___f_2433_);
lean_ctor_set_uint8(v___x_2438_, sizeof(void*)*4, v___x_2434_);
lean_ctor_set_uint8(v___x_2438_, sizeof(void*)*4 + 1, v___x_2434_);
return v___x_2438_;
}
}
static lean_object* _init_l_Lake_LeanLib_staticExportFacetConfig(void){
_start:
{
lean_object* v___x_2439_; 
v___x_2439_ = lean_obj_once(&l_Lake_LeanLib_staticExportFacetConfig___closed__1, &l_Lake_LeanLib_staticExportFacetConfig___closed__1_once, _init_l_Lake_LeanLib_staticExportFacetConfig___closed__1);
return v___x_2439_;
}
}
static lean_object* _init_l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__1___closed__0(void){
_start:
{
uint8_t v___x_2440_; lean_object* v_name_2441_; lean_object* v___x_2442_; 
v___x_2440_ = 1;
v_name_2441_ = l_Lake_instDataKindDynlib;
v___x_2442_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_name_2441_, v___x_2440_);
return v___x_2442_;
}
}
LEAN_EXPORT lean_object* l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__1(lean_object* v_defaultPkg_2443_, lean_object* v_self_2444_, lean_object* v_a_2445_, lean_object* v_a_2446_, lean_object* v_a_2447_, lean_object* v_a_2448_, lean_object* v_a_2449_, lean_object* v_a_2450_){
_start:
{
lean_object* v_name_2452_; uint8_t v___x_2453_; lean_object* v___x_2454_; 
v_name_2452_ = l_Lake_instDataKindDynlib;
v___x_2453_ = 1;
lean_inc_ref_n(v_self_2444_, 2);
v___x_2454_ = l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux(v_defaultPkg_2443_, v_self_2444_, v_self_2444_, v___x_2453_, v_a_2445_, v_a_2446_, v_a_2447_, v_a_2448_, v_a_2449_, v_a_2450_);
if (lean_obj_tag(v___x_2454_) == 0)
{
lean_object* v_a_2455_; lean_object* v_a_2456_; lean_object* v___x_2458_; uint8_t v_isShared_2459_; uint8_t v_isSharedCheck_2496_; 
v_a_2455_ = lean_ctor_get(v___x_2454_, 0);
v_a_2456_ = lean_ctor_get(v___x_2454_, 1);
v_isSharedCheck_2496_ = !lean_is_exclusive(v___x_2454_);
if (v_isSharedCheck_2496_ == 0)
{
v___x_2458_ = v___x_2454_;
v_isShared_2459_ = v_isSharedCheck_2496_;
goto v_resetjp_2457_;
}
else
{
lean_inc(v_a_2456_);
lean_inc(v_a_2455_);
lean_dec(v___x_2454_);
v___x_2458_ = lean_box(0);
v_isShared_2459_ = v_isSharedCheck_2496_;
goto v_resetjp_2457_;
}
v_resetjp_2457_:
{
lean_object* v___y_2461_; lean_object* v_snd_2479_; lean_object* v___x_2481_; uint8_t v_isShared_2482_; uint8_t v_isSharedCheck_2494_; 
v_snd_2479_ = lean_ctor_get(v_a_2455_, 1);
v_isSharedCheck_2494_ = !lean_is_exclusive(v_a_2455_);
if (v_isSharedCheck_2494_ == 0)
{
lean_object* v_unused_2495_; 
v_unused_2495_ = lean_ctor_get(v_a_2455_, 0);
lean_dec(v_unused_2495_);
v___x_2481_ = v_a_2455_;
v_isShared_2482_ = v_isSharedCheck_2494_;
goto v_resetjp_2480_;
}
else
{
lean_inc(v_snd_2479_);
lean_dec(v_a_2455_);
v___x_2481_ = lean_box(0);
v_isShared_2482_ = v_isSharedCheck_2494_;
goto v_resetjp_2480_;
}
v___jp_2460_:
{
lean_object* v___x_2462_; lean_object* v___x_2463_; lean_object* v___x_2464_; lean_object* v___x_2465_; lean_object* v___x_2466_; lean_object* v___x_2467_; lean_object* v___x_2468_; lean_object* v___x_2469_; lean_object* v___x_2470_; lean_object* v___x_2471_; uint8_t v___x_2472_; lean_object* v___x_2473_; lean_object* v___x_2474_; lean_object* v___x_2475_; lean_object* v___x_2477_; 
v___x_2462_ = ((lean_object*)(l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__1___closed__0));
v___x_2463_ = l_Lake_PartialBuildKey_toString(v_self_2444_);
v___x_2464_ = lean_string_append(v___x_2462_, v___x_2463_);
lean_dec_ref(v___x_2463_);
v___x_2465_ = ((lean_object*)(l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__1___closed__1));
v___x_2466_ = lean_string_append(v___x_2464_, v___x_2465_);
v___x_2467_ = lean_obj_once(&l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__1___closed__0, &l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__1___closed__0_once, _init_l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__1___closed__0);
v___x_2468_ = lean_string_append(v___x_2466_, v___x_2467_);
v___x_2469_ = ((lean_object*)(l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__1___closed__3));
v___x_2470_ = lean_string_append(v___x_2468_, v___x_2469_);
v___x_2471_ = lean_string_append(v___x_2470_, v___y_2461_);
lean_dec_ref(v___y_2461_);
v___x_2472_ = 3;
v___x_2473_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2473_, 0, v___x_2471_);
lean_ctor_set_uint8(v___x_2473_, sizeof(void*)*1, v___x_2472_);
v___x_2474_ = lean_array_get_size(v_a_2456_);
v___x_2475_ = lean_array_push(v_a_2456_, v___x_2473_);
if (v_isShared_2459_ == 0)
{
lean_ctor_set_tag(v___x_2458_, 1);
lean_ctor_set(v___x_2458_, 1, v___x_2475_);
lean_ctor_set(v___x_2458_, 0, v___x_2474_);
v___x_2477_ = v___x_2458_;
goto v_reusejp_2476_;
}
else
{
lean_object* v_reuseFailAlloc_2478_; 
v_reuseFailAlloc_2478_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2478_, 0, v___x_2474_);
lean_ctor_set(v_reuseFailAlloc_2478_, 1, v___x_2475_);
v___x_2477_ = v_reuseFailAlloc_2478_;
goto v_reusejp_2476_;
}
v_reusejp_2476_:
{
return v___x_2477_;
}
}
v_resetjp_2480_:
{
lean_object* v_kind_2483_; uint8_t v___x_2484_; 
v_kind_2483_ = lean_ctor_get(v_snd_2479_, 1);
v___x_2484_ = lean_name_eq(v_kind_2483_, v_name_2452_);
if (v___x_2484_ == 0)
{
uint8_t v___x_2485_; 
lean_inc(v_kind_2483_);
lean_del_object(v___x_2481_);
lean_dec(v_snd_2479_);
v___x_2485_ = l_Lean_Name_isAnonymous(v_kind_2483_);
if (v___x_2485_ == 0)
{
lean_object* v___x_2486_; lean_object* v___x_2487_; lean_object* v___x_2488_; lean_object* v___x_2489_; 
v___x_2486_ = ((lean_object*)(l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__1___closed__4));
v___x_2487_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_kind_2483_, v___x_2453_);
v___x_2488_ = lean_string_append(v___x_2486_, v___x_2487_);
lean_dec_ref(v___x_2487_);
v___x_2489_ = lean_string_append(v___x_2488_, v___x_2486_);
v___y_2461_ = v___x_2489_;
goto v___jp_2460_;
}
else
{
lean_object* v___x_2490_; 
lean_dec(v_kind_2483_);
v___x_2490_ = ((lean_object*)(l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__1___closed__5));
v___y_2461_ = v___x_2490_;
goto v___jp_2460_;
}
}
else
{
lean_object* v___x_2492_; 
lean_del_object(v___x_2458_);
lean_dec_ref(v_self_2444_);
if (v_isShared_2482_ == 0)
{
lean_ctor_set(v___x_2481_, 1, v_a_2456_);
lean_ctor_set(v___x_2481_, 0, v_snd_2479_);
v___x_2492_ = v___x_2481_;
goto v_reusejp_2491_;
}
else
{
lean_object* v_reuseFailAlloc_2493_; 
v_reuseFailAlloc_2493_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2493_, 0, v_snd_2479_);
lean_ctor_set(v_reuseFailAlloc_2493_, 1, v_a_2456_);
v___x_2492_ = v_reuseFailAlloc_2493_;
goto v_reusejp_2491_;
}
v_reusejp_2491_:
{
return v___x_2492_;
}
}
}
}
}
else
{
lean_object* v_a_2497_; lean_object* v_a_2498_; lean_object* v___x_2500_; uint8_t v_isShared_2501_; uint8_t v_isSharedCheck_2505_; 
lean_dec_ref(v_self_2444_);
v_a_2497_ = lean_ctor_get(v___x_2454_, 0);
v_a_2498_ = lean_ctor_get(v___x_2454_, 1);
v_isSharedCheck_2505_ = !lean_is_exclusive(v___x_2454_);
if (v_isSharedCheck_2505_ == 0)
{
v___x_2500_ = v___x_2454_;
v_isShared_2501_ = v_isSharedCheck_2505_;
goto v_resetjp_2499_;
}
else
{
lean_inc(v_a_2498_);
lean_inc(v_a_2497_);
lean_dec(v___x_2454_);
v___x_2500_ = lean_box(0);
v_isShared_2501_ = v_isSharedCheck_2505_;
goto v_resetjp_2499_;
}
v_resetjp_2499_:
{
lean_object* v___x_2503_; 
if (v_isShared_2501_ == 0)
{
v___x_2503_ = v___x_2500_;
goto v_reusejp_2502_;
}
else
{
lean_object* v_reuseFailAlloc_2504_; 
v_reuseFailAlloc_2504_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2504_, 0, v_a_2497_);
lean_ctor_set(v_reuseFailAlloc_2504_, 1, v_a_2498_);
v___x_2503_ = v_reuseFailAlloc_2504_;
goto v_reusejp_2502_;
}
v_reusejp_2502_:
{
return v___x_2503_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__1___boxed(lean_object* v_defaultPkg_2506_, lean_object* v_self_2507_, lean_object* v_a_2508_, lean_object* v_a_2509_, lean_object* v_a_2510_, lean_object* v_a_2511_, lean_object* v_a_2512_, lean_object* v_a_2513_, lean_object* v_a_2514_){
_start:
{
lean_object* v_res_2515_; 
v_res_2515_ = l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__1(v_defaultPkg_2506_, v_self_2507_, v_a_2508_, v_a_2509_, v_a_2510_, v_a_2511_, v_a_2512_, v_a_2513_);
lean_dec_ref(v_a_2512_);
lean_dec(v_a_2511_);
lean_dec(v_a_2510_);
lean_dec(v_a_2509_);
return v_res_2515_;
}
}
static lean_object* _init_l_Lake_OrdHashSet_empty___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__5___closed__1(void){
_start:
{
lean_object* v___x_2518_; lean_object* v___x_2519_; lean_object* v___x_2520_; 
v___x_2518_ = ((lean_object*)(l_Lake_OrdHashSet_empty___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__5___closed__0));
v___x_2519_ = lean_obj_once(&l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___closed__3, &l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___closed__3_once, _init_l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___closed__3);
v___x_2520_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2520_, 0, v___x_2519_);
lean_ctor_set(v___x_2520_, 1, v___x_2518_);
return v___x_2520_;
}
}
static lean_object* _init_l_Lake_OrdHashSet_empty___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__5(void){
_start:
{
lean_object* v___x_2521_; 
v___x_2521_ = lean_obj_once(&l_Lake_OrdHashSet_empty___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__5___closed__1, &l_Lake_OrdHashSet_empty___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__5___closed__1_once, _init_l_Lake_OrdHashSet_empty___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__5___closed__1);
return v___x_2521_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__8(lean_object* v___x_2522_, lean_object* v_as_2523_, size_t v_i_2524_, size_t v_stop_2525_, lean_object* v_b_2526_, lean_object* v___y_2527_, lean_object* v___y_2528_, lean_object* v___y_2529_, lean_object* v___y_2530_, lean_object* v___y_2531_, lean_object* v___y_2532_){
_start:
{
uint8_t v___x_2534_; 
v___x_2534_ = lean_usize_dec_eq(v_i_2524_, v_stop_2525_);
if (v___x_2534_ == 0)
{
lean_object* v___x_2535_; lean_object* v___x_2536_; 
v___x_2535_ = lean_array_uget_borrowed(v_as_2523_, v_i_2524_);
lean_inc_ref(v___y_2527_);
lean_inc(v___x_2535_);
lean_inc_ref(v___x_2522_);
v___x_2536_ = l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__1(v___x_2522_, v___x_2535_, v___y_2527_, v___y_2528_, v___y_2529_, v___y_2530_, v___y_2531_, v___y_2532_);
if (lean_obj_tag(v___x_2536_) == 0)
{
lean_object* v_a_2537_; lean_object* v_a_2538_; lean_object* v___x_2539_; size_t v___x_2540_; size_t v___x_2541_; 
v_a_2537_ = lean_ctor_get(v___x_2536_, 0);
lean_inc(v_a_2537_);
v_a_2538_ = lean_ctor_get(v___x_2536_, 1);
lean_inc(v_a_2538_);
lean_dec_ref_known(v___x_2536_, 2);
v___x_2539_ = lean_array_push(v_b_2526_, v_a_2537_);
v___x_2540_ = ((size_t)1ULL);
v___x_2541_ = lean_usize_add(v_i_2524_, v___x_2540_);
v_i_2524_ = v___x_2541_;
v_b_2526_ = v___x_2539_;
v___y_2532_ = v_a_2538_;
goto _start;
}
else
{
lean_object* v_a_2543_; lean_object* v_a_2544_; lean_object* v___x_2546_; uint8_t v_isShared_2547_; uint8_t v_isSharedCheck_2551_; 
lean_dec_ref(v___y_2527_);
lean_dec_ref(v_b_2526_);
lean_dec_ref(v___x_2522_);
v_a_2543_ = lean_ctor_get(v___x_2536_, 0);
v_a_2544_ = lean_ctor_get(v___x_2536_, 1);
v_isSharedCheck_2551_ = !lean_is_exclusive(v___x_2536_);
if (v_isSharedCheck_2551_ == 0)
{
v___x_2546_ = v___x_2536_;
v_isShared_2547_ = v_isSharedCheck_2551_;
goto v_resetjp_2545_;
}
else
{
lean_inc(v_a_2544_);
lean_inc(v_a_2543_);
lean_dec(v___x_2536_);
v___x_2546_ = lean_box(0);
v_isShared_2547_ = v_isSharedCheck_2551_;
goto v_resetjp_2545_;
}
v_resetjp_2545_:
{
lean_object* v___x_2549_; 
if (v_isShared_2547_ == 0)
{
v___x_2549_ = v___x_2546_;
goto v_reusejp_2548_;
}
else
{
lean_object* v_reuseFailAlloc_2550_; 
v_reuseFailAlloc_2550_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2550_, 0, v_a_2543_);
lean_ctor_set(v_reuseFailAlloc_2550_, 1, v_a_2544_);
v___x_2549_ = v_reuseFailAlloc_2550_;
goto v_reusejp_2548_;
}
v_reusejp_2548_:
{
return v___x_2549_;
}
}
}
}
else
{
lean_object* v___x_2552_; 
lean_dec_ref(v___y_2527_);
lean_dec_ref(v___x_2522_);
v___x_2552_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2552_, 0, v_b_2526_);
lean_ctor_set(v___x_2552_, 1, v___y_2532_);
return v___x_2552_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__8___boxed(lean_object* v___x_2553_, lean_object* v_as_2554_, lean_object* v_i_2555_, lean_object* v_stop_2556_, lean_object* v_b_2557_, lean_object* v___y_2558_, lean_object* v___y_2559_, lean_object* v___y_2560_, lean_object* v___y_2561_, lean_object* v___y_2562_, lean_object* v___y_2563_, lean_object* v___y_2564_){
_start:
{
size_t v_i_boxed_2565_; size_t v_stop_boxed_2566_; lean_object* v_res_2567_; 
v_i_boxed_2565_ = lean_unbox_usize(v_i_2555_);
lean_dec(v_i_2555_);
v_stop_boxed_2566_ = lean_unbox_usize(v_stop_2556_);
lean_dec(v_stop_2556_);
v_res_2567_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__8(v___x_2553_, v_as_2554_, v_i_boxed_2565_, v_stop_boxed_2566_, v_b_2557_, v___y_2558_, v___y_2559_, v___y_2560_, v___y_2561_, v___y_2562_, v___y_2563_);
lean_dec_ref(v___y_2562_);
lean_dec(v___y_2561_);
lean_dec(v___y_2560_);
lean_dec(v___y_2559_);
lean_dec_ref(v_as_2554_);
return v_res_2567_;
}
}
LEAN_EXPORT lean_object* l_Lake_OrdHashSet_insert___at___00Lake_OrdHashSet_appendArray___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__0_spec__0(lean_object* v_self_2568_, lean_object* v_a_2569_){
_start:
{
lean_object* v_toHashSet_2570_; lean_object* v_toArray_2571_; uint8_t v___x_2572_; 
v_toHashSet_2570_ = lean_ctor_get(v_self_2568_, 0);
v_toArray_2571_ = lean_ctor_get(v_self_2568_, 1);
v___x_2572_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__0___redArg(v_toHashSet_2570_, v_a_2569_);
if (v___x_2572_ == 0)
{
lean_object* v___x_2574_; uint8_t v_isShared_2575_; uint8_t v_isSharedCheck_2582_; 
lean_inc_ref(v_toArray_2571_);
lean_inc_ref(v_toHashSet_2570_);
v_isSharedCheck_2582_ = !lean_is_exclusive(v_self_2568_);
if (v_isSharedCheck_2582_ == 0)
{
lean_object* v_unused_2583_; lean_object* v_unused_2584_; 
v_unused_2583_ = lean_ctor_get(v_self_2568_, 1);
lean_dec(v_unused_2583_);
v_unused_2584_ = lean_ctor_get(v_self_2568_, 0);
lean_dec(v_unused_2584_);
v___x_2574_ = v_self_2568_;
v_isShared_2575_ = v_isSharedCheck_2582_;
goto v_resetjp_2573_;
}
else
{
lean_dec(v_self_2568_);
v___x_2574_ = lean_box(0);
v_isShared_2575_ = v_isSharedCheck_2582_;
goto v_resetjp_2573_;
}
v_resetjp_2573_:
{
lean_object* v___x_2576_; lean_object* v___x_2577_; lean_object* v___x_2578_; lean_object* v___x_2580_; 
v___x_2576_ = lean_box(0);
lean_inc_ref(v_a_2569_);
v___x_2577_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules_go_spec__1___redArg(v_toHashSet_2570_, v_a_2569_, v___x_2576_);
v___x_2578_ = lean_array_push(v_toArray_2571_, v_a_2569_);
if (v_isShared_2575_ == 0)
{
lean_ctor_set(v___x_2574_, 1, v___x_2578_);
lean_ctor_set(v___x_2574_, 0, v___x_2577_);
v___x_2580_ = v___x_2574_;
goto v_reusejp_2579_;
}
else
{
lean_object* v_reuseFailAlloc_2581_; 
v_reuseFailAlloc_2581_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2581_, 0, v___x_2577_);
lean_ctor_set(v_reuseFailAlloc_2581_, 1, v___x_2578_);
v___x_2580_ = v_reuseFailAlloc_2581_;
goto v_reusejp_2579_;
}
v_reusejp_2579_:
{
return v___x_2580_;
}
}
}
else
{
lean_dec_ref(v_a_2569_);
return v_self_2568_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_OrdHashSet_appendArray___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__0_spec__1(lean_object* v_as_2585_, size_t v_i_2586_, size_t v_stop_2587_, lean_object* v_b_2588_){
_start:
{
uint8_t v___x_2589_; 
v___x_2589_ = lean_usize_dec_eq(v_i_2586_, v_stop_2587_);
if (v___x_2589_ == 0)
{
lean_object* v___x_2590_; lean_object* v___x_2591_; size_t v___x_2592_; size_t v___x_2593_; 
v___x_2590_ = lean_array_uget_borrowed(v_as_2585_, v_i_2586_);
lean_inc(v___x_2590_);
v___x_2591_ = l_Lake_OrdHashSet_insert___at___00Lake_OrdHashSet_appendArray___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__0_spec__0(v_b_2588_, v___x_2590_);
v___x_2592_ = ((size_t)1ULL);
v___x_2593_ = lean_usize_add(v_i_2586_, v___x_2592_);
v_i_2586_ = v___x_2593_;
v_b_2588_ = v___x_2591_;
goto _start;
}
else
{
return v_b_2588_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_OrdHashSet_appendArray___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__0_spec__1___boxed(lean_object* v_as_2595_, lean_object* v_i_2596_, lean_object* v_stop_2597_, lean_object* v_b_2598_){
_start:
{
size_t v_i_boxed_2599_; size_t v_stop_boxed_2600_; lean_object* v_res_2601_; 
v_i_boxed_2599_ = lean_unbox_usize(v_i_2596_);
lean_dec(v_i_2596_);
v_stop_boxed_2600_ = lean_unbox_usize(v_stop_2597_);
lean_dec(v_stop_2597_);
v_res_2601_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_OrdHashSet_appendArray___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__0_spec__1(v_as_2595_, v_i_boxed_2599_, v_stop_boxed_2600_, v_b_2598_);
lean_dec_ref(v_as_2595_);
return v_res_2601_;
}
}
LEAN_EXPORT lean_object* l_Lake_OrdHashSet_appendArray___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__0(lean_object* v_self_2602_, lean_object* v_arr_2603_){
_start:
{
lean_object* v___x_2604_; lean_object* v___x_2605_; uint8_t v___x_2606_; 
v___x_2604_ = lean_unsigned_to_nat(0u);
v___x_2605_ = lean_array_get_size(v_arr_2603_);
v___x_2606_ = lean_nat_dec_lt(v___x_2604_, v___x_2605_);
if (v___x_2606_ == 0)
{
return v_self_2602_;
}
else
{
size_t v___x_2607_; size_t v___x_2608_; lean_object* v___x_2609_; 
v___x_2607_ = ((size_t)0ULL);
v___x_2608_ = lean_usize_of_nat(v___x_2605_);
v___x_2609_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_OrdHashSet_appendArray___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__0_spec__1(v_arr_2603_, v___x_2607_, v___x_2608_, v_self_2602_);
return v___x_2609_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_OrdHashSet_appendArray___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__0___boxed(lean_object* v_self_2610_, lean_object* v_arr_2611_){
_start:
{
lean_object* v_res_2612_; 
v_res_2612_ = l_Lake_OrdHashSet_appendArray___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__0(v_self_2610_, v_arr_2611_);
lean_dec_ref(v_arr_2611_);
return v_res_2612_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__7(lean_object* v_as_2613_, size_t v_i_2614_, size_t v_stop_2615_, lean_object* v_b_2616_, lean_object* v___y_2617_, lean_object* v___y_2618_, lean_object* v___y_2619_, lean_object* v___y_2620_, lean_object* v___y_2621_, lean_object* v___y_2622_){
_start:
{
uint8_t v___x_2624_; 
v___x_2624_ = lean_usize_dec_eq(v_i_2614_, v_stop_2615_);
if (v___x_2624_ == 0)
{
lean_object* v___x_2625_; lean_object* v_lib_2626_; lean_object* v_pkg_2627_; lean_object* v_name_2628_; lean_object* v_keyName_2629_; lean_object* v___x_2630_; lean_object* v___x_2631_; lean_object* v___x_2632_; lean_object* v___x_2633_; lean_object* v___x_2634_; 
v___x_2625_ = lean_array_uget_borrowed(v_as_2613_, v_i_2614_);
v_lib_2626_ = lean_ctor_get(v___x_2625_, 0);
v_pkg_2627_ = lean_ctor_get(v_lib_2626_, 0);
v_name_2628_ = lean_ctor_get(v___x_2625_, 1);
v_keyName_2629_ = lean_ctor_get(v_pkg_2627_, 2);
v___x_2630_ = l_Lake_Module_transImportsFacet;
lean_inc(v_name_2628_);
lean_inc(v_keyName_2629_);
v___x_2631_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2631_, 0, v_keyName_2629_);
lean_ctor_set(v___x_2631_, 1, v_name_2628_);
v___x_2632_ = l_Lake_Module_keyword;
lean_inc(v___x_2625_);
v___x_2633_ = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(v___x_2633_, 0, v___x_2631_);
lean_ctor_set(v___x_2633_, 1, v___x_2632_);
lean_ctor_set(v___x_2633_, 2, v___x_2625_);
lean_ctor_set(v___x_2633_, 3, v___x_2630_);
lean_inc_ref(v___y_2617_);
lean_inc_ref(v___y_2621_);
lean_inc(v___y_2620_);
lean_inc(v___y_2619_);
lean_inc(v___y_2618_);
v___x_2634_ = lean_apply_7(v___y_2617_, v___x_2633_, v___y_2618_, v___y_2619_, v___y_2620_, v___y_2621_, v___y_2622_, lean_box(0));
if (lean_obj_tag(v___x_2634_) == 0)
{
lean_object* v_a_2635_; lean_object* v_a_2636_; lean_object* v___x_2637_; 
v_a_2635_ = lean_ctor_get(v___x_2634_, 0);
lean_inc(v_a_2635_);
v_a_2636_ = lean_ctor_get(v___x_2634_, 1);
lean_inc(v_a_2636_);
lean_dec_ref_known(v___x_2634_, 2);
v___x_2637_ = l_Lake_Job_await___redArg(v_a_2635_, v_a_2636_);
if (lean_obj_tag(v___x_2637_) == 0)
{
lean_object* v_a_2638_; lean_object* v_a_2639_; lean_object* v___x_2640_; size_t v___x_2641_; size_t v___x_2642_; 
v_a_2638_ = lean_ctor_get(v___x_2637_, 0);
lean_inc(v_a_2638_);
v_a_2639_ = lean_ctor_get(v___x_2637_, 1);
lean_inc(v_a_2639_);
lean_dec_ref_known(v___x_2637_, 2);
v___x_2640_ = l_Lake_OrdHashSet_appendArray___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__0(v_b_2616_, v_a_2638_);
lean_dec(v_a_2638_);
v___x_2641_ = ((size_t)1ULL);
v___x_2642_ = lean_usize_add(v_i_2614_, v___x_2641_);
v_i_2614_ = v___x_2642_;
v_b_2616_ = v___x_2640_;
v___y_2622_ = v_a_2639_;
goto _start;
}
else
{
lean_object* v_a_2644_; lean_object* v_a_2645_; lean_object* v___x_2647_; uint8_t v_isShared_2648_; uint8_t v_isSharedCheck_2652_; 
lean_dec_ref(v___y_2617_);
lean_dec_ref(v_b_2616_);
v_a_2644_ = lean_ctor_get(v___x_2637_, 0);
v_a_2645_ = lean_ctor_get(v___x_2637_, 1);
v_isSharedCheck_2652_ = !lean_is_exclusive(v___x_2637_);
if (v_isSharedCheck_2652_ == 0)
{
v___x_2647_ = v___x_2637_;
v_isShared_2648_ = v_isSharedCheck_2652_;
goto v_resetjp_2646_;
}
else
{
lean_inc(v_a_2645_);
lean_inc(v_a_2644_);
lean_dec(v___x_2637_);
v___x_2647_ = lean_box(0);
v_isShared_2648_ = v_isSharedCheck_2652_;
goto v_resetjp_2646_;
}
v_resetjp_2646_:
{
lean_object* v___x_2650_; 
if (v_isShared_2648_ == 0)
{
v___x_2650_ = v___x_2647_;
goto v_reusejp_2649_;
}
else
{
lean_object* v_reuseFailAlloc_2651_; 
v_reuseFailAlloc_2651_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2651_, 0, v_a_2644_);
lean_ctor_set(v_reuseFailAlloc_2651_, 1, v_a_2645_);
v___x_2650_ = v_reuseFailAlloc_2651_;
goto v_reusejp_2649_;
}
v_reusejp_2649_:
{
return v___x_2650_;
}
}
}
}
else
{
lean_object* v_a_2653_; lean_object* v_a_2654_; lean_object* v___x_2656_; uint8_t v_isShared_2657_; uint8_t v_isSharedCheck_2661_; 
lean_dec_ref(v___y_2617_);
lean_dec_ref(v_b_2616_);
v_a_2653_ = lean_ctor_get(v___x_2634_, 0);
v_a_2654_ = lean_ctor_get(v___x_2634_, 1);
v_isSharedCheck_2661_ = !lean_is_exclusive(v___x_2634_);
if (v_isSharedCheck_2661_ == 0)
{
v___x_2656_ = v___x_2634_;
v_isShared_2657_ = v_isSharedCheck_2661_;
goto v_resetjp_2655_;
}
else
{
lean_inc(v_a_2654_);
lean_inc(v_a_2653_);
lean_dec(v___x_2634_);
v___x_2656_ = lean_box(0);
v_isShared_2657_ = v_isSharedCheck_2661_;
goto v_resetjp_2655_;
}
v_resetjp_2655_:
{
lean_object* v___x_2659_; 
if (v_isShared_2657_ == 0)
{
v___x_2659_ = v___x_2656_;
goto v_reusejp_2658_;
}
else
{
lean_object* v_reuseFailAlloc_2660_; 
v_reuseFailAlloc_2660_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2660_, 0, v_a_2653_);
lean_ctor_set(v_reuseFailAlloc_2660_, 1, v_a_2654_);
v___x_2659_ = v_reuseFailAlloc_2660_;
goto v_reusejp_2658_;
}
v_reusejp_2658_:
{
return v___x_2659_;
}
}
}
}
else
{
lean_object* v___x_2662_; 
lean_dec_ref(v___y_2617_);
v___x_2662_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2662_, 0, v_b_2616_);
lean_ctor_set(v___x_2662_, 1, v___y_2622_);
return v___x_2662_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__7___boxed(lean_object* v_as_2663_, lean_object* v_i_2664_, lean_object* v_stop_2665_, lean_object* v_b_2666_, lean_object* v___y_2667_, lean_object* v___y_2668_, lean_object* v___y_2669_, lean_object* v___y_2670_, lean_object* v___y_2671_, lean_object* v___y_2672_, lean_object* v___y_2673_){
_start:
{
size_t v_i_boxed_2674_; size_t v_stop_boxed_2675_; lean_object* v_res_2676_; 
v_i_boxed_2674_ = lean_unbox_usize(v_i_2664_);
lean_dec(v_i_2664_);
v_stop_boxed_2675_ = lean_unbox_usize(v_stop_2665_);
lean_dec(v_stop_2665_);
v_res_2676_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__7(v_as_2663_, v_i_boxed_2674_, v_stop_boxed_2675_, v_b_2666_, v___y_2667_, v___y_2668_, v___y_2669_, v___y_2670_, v___y_2671_, v___y_2672_);
lean_dec_ref(v___y_2671_);
lean_dec(v___y_2670_);
lean_dec(v___y_2669_);
lean_dec(v___y_2668_);
lean_dec_ref(v_as_2663_);
return v_res_2676_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__2(lean_object* v_as_2677_, size_t v_i_2678_, size_t v_stop_2679_, lean_object* v_b_2680_, lean_object* v___y_2681_, lean_object* v___y_2682_, lean_object* v___y_2683_, lean_object* v___y_2684_, lean_object* v___y_2685_, lean_object* v___y_2686_){
_start:
{
uint8_t v___x_2688_; 
v___x_2688_ = lean_usize_dec_eq(v_i_2678_, v_stop_2679_);
if (v___x_2688_ == 0)
{
lean_object* v___x_2689_; lean_object* v_pkg_2690_; lean_object* v_name_2691_; lean_object* v_keyName_2692_; lean_object* v___x_2693_; lean_object* v___x_2694_; lean_object* v___x_2695_; lean_object* v___x_2696_; lean_object* v___x_2697_; 
v___x_2689_ = lean_array_uget_borrowed(v_as_2677_, v_i_2678_);
v_pkg_2690_ = lean_ctor_get(v___x_2689_, 0);
v_name_2691_ = lean_ctor_get(v___x_2689_, 1);
v_keyName_2692_ = lean_ctor_get(v_pkg_2690_, 2);
v___x_2693_ = l_Lake_ExternLib_dynlibFacet;
lean_inc(v_name_2691_);
lean_inc(v_keyName_2692_);
v___x_2694_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_2694_, 0, v_keyName_2692_);
lean_ctor_set(v___x_2694_, 1, v_name_2691_);
v___x_2695_ = l_Lake_ExternLib_keyword;
lean_inc(v___x_2689_);
v___x_2696_ = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(v___x_2696_, 0, v___x_2694_);
lean_ctor_set(v___x_2696_, 1, v___x_2695_);
lean_ctor_set(v___x_2696_, 2, v___x_2689_);
lean_ctor_set(v___x_2696_, 3, v___x_2693_);
lean_inc_ref(v___y_2681_);
lean_inc_ref(v___y_2685_);
lean_inc(v___y_2684_);
lean_inc(v___y_2683_);
lean_inc(v___y_2682_);
v___x_2697_ = lean_apply_7(v___y_2681_, v___x_2696_, v___y_2682_, v___y_2683_, v___y_2684_, v___y_2685_, v___y_2686_, lean_box(0));
if (lean_obj_tag(v___x_2697_) == 0)
{
lean_object* v_a_2698_; lean_object* v_a_2699_; lean_object* v___x_2700_; size_t v___x_2701_; size_t v___x_2702_; 
v_a_2698_ = lean_ctor_get(v___x_2697_, 0);
lean_inc(v_a_2698_);
v_a_2699_ = lean_ctor_get(v___x_2697_, 1);
lean_inc(v_a_2699_);
lean_dec_ref_known(v___x_2697_, 2);
v___x_2700_ = lean_array_push(v_b_2680_, v_a_2698_);
v___x_2701_ = ((size_t)1ULL);
v___x_2702_ = lean_usize_add(v_i_2678_, v___x_2701_);
v_i_2678_ = v___x_2702_;
v_b_2680_ = v___x_2700_;
v___y_2686_ = v_a_2699_;
goto _start;
}
else
{
lean_object* v_a_2704_; lean_object* v_a_2705_; lean_object* v___x_2707_; uint8_t v_isShared_2708_; uint8_t v_isSharedCheck_2712_; 
lean_dec_ref(v___y_2681_);
lean_dec_ref(v_b_2680_);
v_a_2704_ = lean_ctor_get(v___x_2697_, 0);
v_a_2705_ = lean_ctor_get(v___x_2697_, 1);
v_isSharedCheck_2712_ = !lean_is_exclusive(v___x_2697_);
if (v_isSharedCheck_2712_ == 0)
{
v___x_2707_ = v___x_2697_;
v_isShared_2708_ = v_isSharedCheck_2712_;
goto v_resetjp_2706_;
}
else
{
lean_inc(v_a_2705_);
lean_inc(v_a_2704_);
lean_dec(v___x_2697_);
v___x_2707_ = lean_box(0);
v_isShared_2708_ = v_isSharedCheck_2712_;
goto v_resetjp_2706_;
}
v_resetjp_2706_:
{
lean_object* v___x_2710_; 
if (v_isShared_2708_ == 0)
{
v___x_2710_ = v___x_2707_;
goto v_reusejp_2709_;
}
else
{
lean_object* v_reuseFailAlloc_2711_; 
v_reuseFailAlloc_2711_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2711_, 0, v_a_2704_);
lean_ctor_set(v_reuseFailAlloc_2711_, 1, v_a_2705_);
v___x_2710_ = v_reuseFailAlloc_2711_;
goto v_reusejp_2709_;
}
v_reusejp_2709_:
{
return v___x_2710_;
}
}
}
}
else
{
lean_object* v___x_2713_; 
lean_dec_ref(v___y_2681_);
v___x_2713_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2713_, 0, v_b_2680_);
lean_ctor_set(v___x_2713_, 1, v___y_2686_);
return v___x_2713_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__2___boxed(lean_object* v_as_2714_, lean_object* v_i_2715_, lean_object* v_stop_2716_, lean_object* v_b_2717_, lean_object* v___y_2718_, lean_object* v___y_2719_, lean_object* v___y_2720_, lean_object* v___y_2721_, lean_object* v___y_2722_, lean_object* v___y_2723_, lean_object* v___y_2724_){
_start:
{
size_t v_i_boxed_2725_; size_t v_stop_boxed_2726_; lean_object* v_res_2727_; 
v_i_boxed_2725_ = lean_unbox_usize(v_i_2715_);
lean_dec(v_i_2715_);
v_stop_boxed_2726_ = lean_unbox_usize(v_stop_2716_);
lean_dec(v_stop_2716_);
v_res_2727_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__2(v_as_2714_, v_i_boxed_2725_, v_stop_boxed_2726_, v_b_2717_, v___y_2718_, v___y_2719_, v___y_2720_, v___y_2721_, v___y_2722_, v___y_2723_);
lean_dec_ref(v___y_2722_);
lean_dec(v___y_2721_);
lean_dec(v___y_2720_);
lean_dec(v___y_2719_);
lean_dec_ref(v_as_2714_);
return v_res_2727_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__6(lean_object* v_as_2728_, size_t v_i_2729_, size_t v_stop_2730_, lean_object* v_b_2731_, lean_object* v___y_2732_, lean_object* v___y_2733_, lean_object* v___y_2734_, lean_object* v___y_2735_, lean_object* v___y_2736_, lean_object* v___y_2737_){
_start:
{
lean_object* v_a_2740_; lean_object* v_a_2741_; uint8_t v___x_2745_; 
v___x_2745_ = lean_usize_dec_eq(v_i_2729_, v_stop_2730_);
if (v___x_2745_ == 0)
{
lean_object* v_fst_2746_; lean_object* v_snd_2747_; lean_object* v___x_2748_; lean_object* v_lib_2749_; lean_object* v___x_2751_; uint8_t v_isShared_2752_; uint8_t v_isSharedCheck_2786_; 
v_fst_2746_ = lean_ctor_get(v_b_2731_, 0);
v_snd_2747_ = lean_ctor_get(v_b_2731_, 1);
v___x_2748_ = lean_array_uget(v_as_2728_, v_i_2729_);
v_lib_2749_ = lean_ctor_get(v___x_2748_, 0);
v_isSharedCheck_2786_ = !lean_is_exclusive(v___x_2748_);
if (v_isSharedCheck_2786_ == 0)
{
lean_object* v_unused_2787_; 
v_unused_2787_ = lean_ctor_get(v___x_2748_, 1);
lean_dec(v_unused_2787_);
v___x_2751_ = v___x_2748_;
v_isShared_2752_ = v_isSharedCheck_2786_;
goto v_resetjp_2750_;
}
else
{
lean_inc(v_lib_2749_);
lean_dec(v___x_2748_);
v___x_2751_ = lean_box(0);
v_isShared_2752_ = v_isSharedCheck_2786_;
goto v_resetjp_2750_;
}
v_resetjp_2750_:
{
lean_object* v_pkg_2753_; lean_object* v_name_2754_; uint8_t v___x_2755_; 
v_pkg_2753_ = lean_ctor_get(v_lib_2749_, 0);
v_name_2754_ = lean_ctor_get(v_lib_2749_, 1);
lean_inc(v_name_2754_);
v___x_2755_ = l_Lean_NameSet_contains(v_fst_2746_, v_name_2754_);
if (v___x_2755_ == 0)
{
lean_object* v___x_2757_; uint8_t v_isShared_2758_; uint8_t v_isSharedCheck_2783_; 
lean_inc(v_snd_2747_);
lean_inc(v_fst_2746_);
v_isSharedCheck_2783_ = !lean_is_exclusive(v_b_2731_);
if (v_isSharedCheck_2783_ == 0)
{
lean_object* v_unused_2784_; lean_object* v_unused_2785_; 
v_unused_2784_ = lean_ctor_get(v_b_2731_, 1);
lean_dec(v_unused_2784_);
v_unused_2785_ = lean_ctor_get(v_b_2731_, 0);
lean_dec(v_unused_2785_);
v___x_2757_ = v_b_2731_;
v_isShared_2758_ = v_isSharedCheck_2783_;
goto v_resetjp_2756_;
}
else
{
lean_dec(v_b_2731_);
v___x_2757_ = lean_box(0);
v_isShared_2758_ = v_isSharedCheck_2783_;
goto v_resetjp_2756_;
}
v_resetjp_2756_:
{
lean_object* v_keyName_2759_; lean_object* v___x_2760_; lean_object* v___x_2762_; 
v_keyName_2759_ = lean_ctor_get(v_pkg_2753_, 2);
v___x_2760_ = l_Lake_LeanLib_sharedFacet;
lean_inc(v_name_2754_);
lean_inc(v_keyName_2759_);
if (v_isShared_2752_ == 0)
{
lean_ctor_set_tag(v___x_2751_, 3);
lean_ctor_set(v___x_2751_, 1, v_name_2754_);
lean_ctor_set(v___x_2751_, 0, v_keyName_2759_);
v___x_2762_ = v___x_2751_;
goto v_reusejp_2761_;
}
else
{
lean_object* v_reuseFailAlloc_2782_; 
v_reuseFailAlloc_2782_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2782_, 0, v_keyName_2759_);
lean_ctor_set(v_reuseFailAlloc_2782_, 1, v_name_2754_);
v___x_2762_ = v_reuseFailAlloc_2782_;
goto v_reusejp_2761_;
}
v_reusejp_2761_:
{
lean_object* v___x_2763_; lean_object* v___x_2764_; lean_object* v___x_2765_; 
v___x_2763_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig___closed__2));
v___x_2764_ = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(v___x_2764_, 0, v___x_2762_);
lean_ctor_set(v___x_2764_, 1, v___x_2763_);
lean_ctor_set(v___x_2764_, 2, v_lib_2749_);
lean_ctor_set(v___x_2764_, 3, v___x_2760_);
lean_inc_ref(v___y_2732_);
lean_inc_ref(v___y_2736_);
lean_inc(v___y_2735_);
lean_inc(v___y_2734_);
lean_inc(v___y_2733_);
v___x_2765_ = lean_apply_7(v___y_2732_, v___x_2764_, v___y_2733_, v___y_2734_, v___y_2735_, v___y_2736_, v___y_2737_, lean_box(0));
if (lean_obj_tag(v___x_2765_) == 0)
{
lean_object* v_a_2766_; lean_object* v_a_2767_; lean_object* v___x_2768_; lean_object* v___x_2769_; lean_object* v___x_2771_; 
v_a_2766_ = lean_ctor_get(v___x_2765_, 0);
lean_inc(v_a_2766_);
v_a_2767_ = lean_ctor_get(v___x_2765_, 1);
lean_inc(v_a_2767_);
lean_dec_ref_known(v___x_2765_, 2);
v___x_2768_ = lean_array_push(v_snd_2747_, v_a_2766_);
v___x_2769_ = l_Lean_NameSet_insert(v_fst_2746_, v_name_2754_);
if (v_isShared_2758_ == 0)
{
lean_ctor_set(v___x_2757_, 1, v___x_2768_);
lean_ctor_set(v___x_2757_, 0, v___x_2769_);
v___x_2771_ = v___x_2757_;
goto v_reusejp_2770_;
}
else
{
lean_object* v_reuseFailAlloc_2772_; 
v_reuseFailAlloc_2772_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2772_, 0, v___x_2769_);
lean_ctor_set(v_reuseFailAlloc_2772_, 1, v___x_2768_);
v___x_2771_ = v_reuseFailAlloc_2772_;
goto v_reusejp_2770_;
}
v_reusejp_2770_:
{
v_a_2740_ = v___x_2771_;
v_a_2741_ = v_a_2767_;
goto v___jp_2739_;
}
}
else
{
lean_object* v_a_2773_; lean_object* v_a_2774_; lean_object* v___x_2776_; uint8_t v_isShared_2777_; uint8_t v_isSharedCheck_2781_; 
lean_del_object(v___x_2757_);
lean_dec(v_name_2754_);
lean_dec(v_snd_2747_);
lean_dec(v_fst_2746_);
lean_dec_ref(v___y_2732_);
v_a_2773_ = lean_ctor_get(v___x_2765_, 0);
v_a_2774_ = lean_ctor_get(v___x_2765_, 1);
v_isSharedCheck_2781_ = !lean_is_exclusive(v___x_2765_);
if (v_isSharedCheck_2781_ == 0)
{
v___x_2776_ = v___x_2765_;
v_isShared_2777_ = v_isSharedCheck_2781_;
goto v_resetjp_2775_;
}
else
{
lean_inc(v_a_2774_);
lean_inc(v_a_2773_);
lean_dec(v___x_2765_);
v___x_2776_ = lean_box(0);
v_isShared_2777_ = v_isSharedCheck_2781_;
goto v_resetjp_2775_;
}
v_resetjp_2775_:
{
lean_object* v___x_2779_; 
if (v_isShared_2777_ == 0)
{
v___x_2779_ = v___x_2776_;
goto v_reusejp_2778_;
}
else
{
lean_object* v_reuseFailAlloc_2780_; 
v_reuseFailAlloc_2780_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2780_, 0, v_a_2773_);
lean_ctor_set(v_reuseFailAlloc_2780_, 1, v_a_2774_);
v___x_2779_ = v_reuseFailAlloc_2780_;
goto v_reusejp_2778_;
}
v_reusejp_2778_:
{
return v___x_2779_;
}
}
}
}
}
}
else
{
lean_dec(v_name_2754_);
lean_del_object(v___x_2751_);
lean_dec_ref(v_lib_2749_);
v_a_2740_ = v_b_2731_;
v_a_2741_ = v___y_2737_;
goto v___jp_2739_;
}
}
}
else
{
lean_object* v___x_2788_; 
lean_dec_ref(v___y_2732_);
v___x_2788_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2788_, 0, v_b_2731_);
lean_ctor_set(v___x_2788_, 1, v___y_2737_);
return v___x_2788_;
}
v___jp_2739_:
{
size_t v___x_2742_; size_t v___x_2743_; 
v___x_2742_ = ((size_t)1ULL);
v___x_2743_ = lean_usize_add(v_i_2729_, v___x_2742_);
v_i_2729_ = v___x_2743_;
v_b_2731_ = v_a_2740_;
v___y_2737_ = v_a_2741_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__6___boxed(lean_object* v_as_2789_, lean_object* v_i_2790_, lean_object* v_stop_2791_, lean_object* v_b_2792_, lean_object* v___y_2793_, lean_object* v___y_2794_, lean_object* v___y_2795_, lean_object* v___y_2796_, lean_object* v___y_2797_, lean_object* v___y_2798_, lean_object* v___y_2799_){
_start:
{
size_t v_i_boxed_2800_; size_t v_stop_boxed_2801_; lean_object* v_res_2802_; 
v_i_boxed_2800_ = lean_unbox_usize(v_i_2790_);
lean_dec(v_i_2790_);
v_stop_boxed_2801_ = lean_unbox_usize(v_stop_2791_);
lean_dec(v_stop_2791_);
v_res_2802_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__6(v_as_2789_, v_i_boxed_2800_, v_stop_boxed_2801_, v_b_2792_, v___y_2793_, v___y_2794_, v___y_2795_, v___y_2796_, v___y_2797_, v___y_2798_);
lean_dec_ref(v___y_2797_);
lean_dec(v___y_2796_);
lean_dec(v___y_2795_);
lean_dec(v___y_2794_);
lean_dec_ref(v_as_2789_);
return v_res_2802_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__4(lean_object* v___x_2803_, lean_object* v_as_2804_, size_t v_i_2805_, size_t v_stop_2806_, lean_object* v_b_2807_, lean_object* v___y_2808_, lean_object* v___y_2809_, lean_object* v___y_2810_, lean_object* v___y_2811_, lean_object* v___y_2812_, lean_object* v___y_2813_){
_start:
{
uint8_t v___x_2815_; 
v___x_2815_ = lean_usize_dec_eq(v_i_2805_, v_stop_2806_);
if (v___x_2815_ == 0)
{
lean_object* v___x_2816_; lean_object* v___x_2817_; 
v___x_2816_ = lean_array_uget_borrowed(v_as_2804_, v_i_2805_);
lean_inc_ref(v___y_2808_);
lean_inc(v___x_2816_);
lean_inc_ref(v___x_2803_);
v___x_2817_ = l_Lake_Target_fetchIn___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__1(v___x_2803_, v___x_2816_, v___y_2808_, v___y_2809_, v___y_2810_, v___y_2811_, v___y_2812_, v___y_2813_);
if (lean_obj_tag(v___x_2817_) == 0)
{
lean_object* v_a_2818_; lean_object* v_a_2819_; lean_object* v___x_2820_; size_t v___x_2821_; size_t v___x_2822_; 
v_a_2818_ = lean_ctor_get(v___x_2817_, 0);
lean_inc(v_a_2818_);
v_a_2819_ = lean_ctor_get(v___x_2817_, 1);
lean_inc(v_a_2819_);
lean_dec_ref_known(v___x_2817_, 2);
v___x_2820_ = lean_array_push(v_b_2807_, v_a_2818_);
v___x_2821_ = ((size_t)1ULL);
v___x_2822_ = lean_usize_add(v_i_2805_, v___x_2821_);
v_i_2805_ = v___x_2822_;
v_b_2807_ = v___x_2820_;
v___y_2813_ = v_a_2819_;
goto _start;
}
else
{
lean_object* v_a_2824_; lean_object* v_a_2825_; lean_object* v___x_2827_; uint8_t v_isShared_2828_; uint8_t v_isSharedCheck_2832_; 
lean_dec_ref(v___y_2808_);
lean_dec_ref(v_b_2807_);
lean_dec_ref(v___x_2803_);
v_a_2824_ = lean_ctor_get(v___x_2817_, 0);
v_a_2825_ = lean_ctor_get(v___x_2817_, 1);
v_isSharedCheck_2832_ = !lean_is_exclusive(v___x_2817_);
if (v_isSharedCheck_2832_ == 0)
{
v___x_2827_ = v___x_2817_;
v_isShared_2828_ = v_isSharedCheck_2832_;
goto v_resetjp_2826_;
}
else
{
lean_inc(v_a_2825_);
lean_inc(v_a_2824_);
lean_dec(v___x_2817_);
v___x_2827_ = lean_box(0);
v_isShared_2828_ = v_isSharedCheck_2832_;
goto v_resetjp_2826_;
}
v_resetjp_2826_:
{
lean_object* v___x_2830_; 
if (v_isShared_2828_ == 0)
{
v___x_2830_ = v___x_2827_;
goto v_reusejp_2829_;
}
else
{
lean_object* v_reuseFailAlloc_2831_; 
v_reuseFailAlloc_2831_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2831_, 0, v_a_2824_);
lean_ctor_set(v_reuseFailAlloc_2831_, 1, v_a_2825_);
v___x_2830_ = v_reuseFailAlloc_2831_;
goto v_reusejp_2829_;
}
v_reusejp_2829_:
{
return v___x_2830_;
}
}
}
}
else
{
lean_object* v___x_2833_; 
lean_dec_ref(v___y_2808_);
lean_dec_ref(v___x_2803_);
v___x_2833_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2833_, 0, v_b_2807_);
lean_ctor_set(v___x_2833_, 1, v___y_2813_);
return v___x_2833_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__4___boxed(lean_object* v___x_2834_, lean_object* v_as_2835_, lean_object* v_i_2836_, lean_object* v_stop_2837_, lean_object* v_b_2838_, lean_object* v___y_2839_, lean_object* v___y_2840_, lean_object* v___y_2841_, lean_object* v___y_2842_, lean_object* v___y_2843_, lean_object* v___y_2844_, lean_object* v___y_2845_){
_start:
{
size_t v_i_boxed_2846_; size_t v_stop_boxed_2847_; lean_object* v_res_2848_; 
v_i_boxed_2846_ = lean_unbox_usize(v_i_2836_);
lean_dec(v_i_2836_);
v_stop_boxed_2847_ = lean_unbox_usize(v_stop_2837_);
lean_dec(v_stop_2837_);
v_res_2848_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__4(v___x_2834_, v_as_2835_, v_i_boxed_2846_, v_stop_boxed_2847_, v_b_2838_, v___y_2839_, v___y_2840_, v___y_2841_, v___y_2842_, v___y_2843_, v___y_2844_);
lean_dec_ref(v___y_2843_);
lean_dec(v___y_2842_);
lean_dec(v___y_2841_);
lean_dec(v___y_2840_);
lean_dec_ref(v_as_2835_);
return v_res_2848_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__3(lean_object* v___x_2849_, lean_object* v_as_2850_, size_t v_i_2851_, size_t v_stop_2852_, lean_object* v_b_2853_){
_start:
{
lean_object* v___y_2855_; uint8_t v___x_2859_; 
v___x_2859_ = lean_usize_dec_eq(v_i_2851_, v_stop_2852_);
if (v___x_2859_ == 0)
{
lean_object* v_toConfigDecl_2860_; lean_object* v_name_2861_; lean_object* v_kind_2862_; lean_object* v_config_2863_; lean_object* v___x_2864_; uint8_t v___x_2865_; 
v_toConfigDecl_2860_ = lean_array_uget_borrowed(v_as_2850_, v_i_2851_);
v_name_2861_ = lean_ctor_get(v_toConfigDecl_2860_, 1);
v_kind_2862_ = lean_ctor_get(v_toConfigDecl_2860_, 2);
v_config_2863_ = lean_ctor_get(v_toConfigDecl_2860_, 3);
v___x_2864_ = l_Lake_ExternLib_keyword;
v___x_2865_ = lean_name_eq(v_kind_2862_, v___x_2864_);
if (v___x_2865_ == 0)
{
v___y_2855_ = v_b_2853_;
goto v___jp_2854_;
}
else
{
lean_object* v___x_2866_; lean_object* v___x_2867_; 
lean_inc(v_config_2863_);
lean_inc(v_name_2861_);
lean_inc_ref(v___x_2849_);
v___x_2866_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2866_, 0, v___x_2849_);
lean_ctor_set(v___x_2866_, 1, v_name_2861_);
lean_ctor_set(v___x_2866_, 2, v_config_2863_);
v___x_2867_ = lean_array_push(v_b_2853_, v___x_2866_);
v___y_2855_ = v___x_2867_;
goto v___jp_2854_;
}
}
else
{
lean_dec_ref(v___x_2849_);
return v_b_2853_;
}
v___jp_2854_:
{
size_t v___x_2856_; size_t v___x_2857_; 
v___x_2856_ = ((size_t)1ULL);
v___x_2857_ = lean_usize_add(v_i_2851_, v___x_2856_);
v_i_2851_ = v___x_2857_;
v_b_2853_ = v___y_2855_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__3___boxed(lean_object* v___x_2868_, lean_object* v_as_2869_, lean_object* v_i_2870_, lean_object* v_stop_2871_, lean_object* v_b_2872_){
_start:
{
size_t v_i_boxed_2873_; size_t v_stop_boxed_2874_; lean_object* v_res_2875_; 
v_i_boxed_2873_ = lean_unbox_usize(v_i_2870_);
lean_dec(v_i_2870_);
v_stop_boxed_2874_ = lean_unbox_usize(v_stop_2871_);
lean_dec(v_stop_2871_);
v_res_2875_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__3(v___x_2868_, v_as_2869_, v_i_boxed_2873_, v_stop_boxed_2874_, v_b_2872_);
lean_dec_ref(v_as_2869_);
return v_res_2875_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__9(lean_object* v_as_2876_, size_t v_i_2877_, size_t v_stop_2878_, lean_object* v_b_2879_, lean_object* v___y_2880_, lean_object* v___y_2881_, lean_object* v___y_2882_, lean_object* v___y_2883_, lean_object* v___y_2884_, lean_object* v___y_2885_){
_start:
{
uint8_t v___x_2887_; 
v___x_2887_ = lean_usize_dec_eq(v_i_2877_, v_stop_2878_);
if (v___x_2887_ == 0)
{
lean_object* v___x_2888_; lean_object* v_lib_2889_; lean_object* v_config_2890_; lean_object* v_nativeFacets_2891_; uint8_t v___x_2892_; lean_object* v___x_2893_; lean_object* v___x_2894_; size_t v_sz_2895_; lean_object* v___x_2896_; lean_object* v___x_2897_; lean_object* v___x_2898_; lean_object* v___x_2899_; lean_object* v___x_76280__overap_2900_; lean_object* v___x_2901_; 
v___x_2888_ = lean_array_uget_borrowed(v_as_2876_, v_i_2877_);
v_lib_2889_ = lean_ctor_get(v___x_2888_, 0);
v_config_2890_ = lean_ctor_get(v_lib_2889_, 2);
v_nativeFacets_2891_ = lean_ctor_get(v_config_2890_, 8);
v___x_2892_ = 1;
v___x_2893_ = lean_box(v___x_2892_);
lean_inc_ref(v_nativeFacets_2891_);
v___x_2894_ = lean_apply_1(v_nativeFacets_2891_, v___x_2893_);
v_sz_2895_ = lean_array_size(v___x_2894_);
v___x_2896_ = l_unsafeCast___redArg(v___x_2894_);
lean_dec_ref(v___x_2894_);
v___x_2897_ = lean_box_usize(v_sz_2895_);
v___x_2898_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__4___boxed__const__1));
lean_inc(v___x_2888_);
v___x_2899_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__0___boxed), 11, 4);
lean_closure_set(v___x_2899_, 0, v___x_2888_);
lean_closure_set(v___x_2899_, 1, v___x_2897_);
lean_closure_set(v___x_2899_, 2, v___x_2898_);
lean_closure_set(v___x_2899_, 3, v___x_2896_);
v___x_76280__overap_2900_ = l_unsafeCast___redArg(v___x_2899_);
lean_dec_ref(v___x_2899_);
lean_inc_ref(v___y_2884_);
lean_inc(v___y_2883_);
lean_inc(v___y_2882_);
lean_inc(v___y_2881_);
lean_inc_ref(v___y_2880_);
v___x_2901_ = lean_apply_7(v___x_76280__overap_2900_, v___y_2880_, v___y_2881_, v___y_2882_, v___y_2883_, v___y_2884_, v___y_2885_, lean_box(0));
if (lean_obj_tag(v___x_2901_) == 0)
{
lean_object* v_a_2902_; lean_object* v_a_2903_; lean_object* v___x_2904_; size_t v___x_2905_; size_t v___x_2906_; 
v_a_2902_ = lean_ctor_get(v___x_2901_, 0);
lean_inc(v_a_2902_);
v_a_2903_ = lean_ctor_get(v___x_2901_, 1);
lean_inc(v_a_2903_);
lean_dec_ref_known(v___x_2901_, 2);
v___x_2904_ = l_Array_append___redArg(v_b_2879_, v_a_2902_);
lean_dec(v_a_2902_);
v___x_2905_ = ((size_t)1ULL);
v___x_2906_ = lean_usize_add(v_i_2877_, v___x_2905_);
v_i_2877_ = v___x_2906_;
v_b_2879_ = v___x_2904_;
v___y_2885_ = v_a_2903_;
goto _start;
}
else
{
lean_dec_ref(v___y_2880_);
lean_dec_ref(v_b_2879_);
return v___x_2901_;
}
}
else
{
lean_object* v___x_2908_; 
lean_dec_ref(v___y_2880_);
v___x_2908_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2908_, 0, v_b_2879_);
lean_ctor_set(v___x_2908_, 1, v___y_2885_);
return v___x_2908_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__9___boxed(lean_object* v_as_2909_, lean_object* v_i_2910_, lean_object* v_stop_2911_, lean_object* v_b_2912_, lean_object* v___y_2913_, lean_object* v___y_2914_, lean_object* v___y_2915_, lean_object* v___y_2916_, lean_object* v___y_2917_, lean_object* v___y_2918_, lean_object* v___y_2919_){
_start:
{
size_t v_i_boxed_2920_; size_t v_stop_boxed_2921_; lean_object* v_res_2922_; 
v_i_boxed_2920_ = lean_unbox_usize(v_i_2910_);
lean_dec(v_i_2910_);
v_stop_boxed_2921_ = lean_unbox_usize(v_stop_2911_);
lean_dec(v_stop_2911_);
v_res_2922_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__9(v_as_2909_, v_i_boxed_2920_, v_stop_boxed_2921_, v_b_2912_, v___y_2913_, v___y_2914_, v___y_2915_, v___y_2916_, v___y_2917_, v___y_2918_);
lean_dec_ref(v___y_2917_);
lean_dec(v___y_2916_);
lean_dec(v___y_2915_);
lean_dec(v___y_2914_);
lean_dec_ref(v_as_2909_);
return v_res_2922_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared___lam__0(lean_object* v_self_2923_, lean_object* v_dir_2924_, lean_object* v___x_2925_, lean_object* v_targetDecls_2926_, lean_object* v_pkg_2927_, lean_object* v_name_2928_, lean_object* v___x_2929_, lean_object* v_config_2930_, lean_object* v_config_2931_, lean_object* v___y_2932_, lean_object* v___y_2933_, lean_object* v___y_2934_, lean_object* v___y_2935_, lean_object* v___y_2936_, lean_object* v___y_2937_){
_start:
{
lean_object* v_a_2940_; lean_object* v_a_2941_; lean_object* v___y_2944_; lean_object* v___y_2945_; lean_object* v___y_2946_; lean_object* v___y_2947_; lean_object* v___y_2948_; lean_object* v___y_2949_; lean_object* v___y_2950_; lean_object* v_a_2951_; lean_object* v_a_2952_; lean_object* v___y_2970_; lean_object* v___y_2971_; lean_object* v___y_2972_; lean_object* v___y_2973_; lean_object* v___y_2974_; lean_object* v___y_2975_; lean_object* v___y_2976_; lean_object* v___y_2977_; lean_object* v___y_2983_; lean_object* v___y_2984_; lean_object* v___y_2985_; lean_object* v___y_2986_; lean_object* v___y_2987_; lean_object* v___y_2988_; lean_object* v___y_2989_; lean_object* v___y_2990_; lean_object* v___y_2991_; lean_object* v___y_2992_; lean_object* v___y_2993_; lean_object* v___y_3004_; lean_object* v___y_3005_; lean_object* v___y_3006_; lean_object* v___y_3007_; lean_object* v___y_3008_; lean_object* v___y_3009_; lean_object* v___y_3010_; lean_object* v___y_3011_; lean_object* v_a_3012_; lean_object* v_a_3013_; lean_object* v___y_3021_; lean_object* v___y_3022_; lean_object* v___y_3023_; lean_object* v___y_3024_; lean_object* v___y_3025_; lean_object* v___y_3026_; lean_object* v___y_3027_; lean_object* v___y_3028_; lean_object* v___y_3029_; lean_object* v___y_3035_; lean_object* v___y_3036_; lean_object* v___y_3037_; lean_object* v___y_3038_; lean_object* v___y_3039_; lean_object* v___y_3040_; lean_object* v___y_3041_; lean_object* v___y_3042_; lean_object* v___y_3043_; lean_object* v___y_3044_; lean_object* v_snd_3045_; lean_object* v_a_3046_; lean_object* v___y_3058_; lean_object* v___y_3059_; lean_object* v___y_3060_; lean_object* v___y_3061_; lean_object* v___y_3062_; lean_object* v___y_3063_; lean_object* v___y_3064_; lean_object* v___y_3065_; lean_object* v___y_3066_; lean_object* v___y_3067_; lean_object* v_a_3068_; lean_object* v_a_3069_; lean_object* v___y_3093_; lean_object* v___y_3094_; lean_object* v___y_3095_; lean_object* v___y_3096_; lean_object* v___y_3097_; lean_object* v___y_3098_; lean_object* v___y_3099_; lean_object* v___y_3100_; lean_object* v___y_3101_; lean_object* v___y_3102_; lean_object* v___y_3103_; lean_object* v___x_3108_; 
lean_inc_ref(v___y_2932_);
lean_inc_ref(v___y_2936_);
lean_inc(v___y_2935_);
lean_inc(v___y_2934_);
lean_inc(v___x_2925_);
v___x_3108_ = lean_apply_7(v___y_2932_, v___x_2929_, v___x_2925_, v___y_2934_, v___y_2935_, v___y_2936_, v___y_2937_, lean_box(0));
if (lean_obj_tag(v___x_3108_) == 0)
{
lean_object* v_a_3109_; lean_object* v_a_3110_; lean_object* v___x_3111_; 
v_a_3109_ = lean_ctor_get(v___x_3108_, 0);
lean_inc(v_a_3109_);
v_a_3110_ = lean_ctor_get(v___x_3108_, 1);
lean_inc(v_a_3110_);
lean_dec_ref_known(v___x_3108_, 2);
v___x_3111_ = l_Lake_Job_await___redArg(v_a_3109_, v_a_3110_);
if (lean_obj_tag(v___x_3111_) == 0)
{
lean_object* v_a_3112_; lean_object* v_a_3113_; lean_object* v___y_3115_; lean_object* v___y_3116_; lean_object* v___y_3117_; lean_object* v___y_3118_; lean_object* v___y_3119_; lean_object* v___y_3120_; lean_object* v___y_3121_; lean_object* v___y_3122_; lean_object* v___y_3123_; lean_object* v_a_3124_; lean_object* v_a_3125_; lean_object* v___y_3137_; lean_object* v___y_3138_; lean_object* v___y_3139_; lean_object* v___y_3140_; lean_object* v___y_3141_; lean_object* v___y_3142_; lean_object* v___y_3143_; lean_object* v___y_3144_; lean_object* v___y_3145_; lean_object* v___y_3146_; lean_object* v_a_3159_; lean_object* v_a_3160_; lean_object* v___x_3184_; lean_object* v___x_3185_; lean_object* v___x_3186_; uint8_t v___x_3187_; 
v_a_3112_ = lean_ctor_get(v___x_3111_, 0);
lean_inc(v_a_3112_);
v_a_3113_ = lean_ctor_get(v___x_3111_, 1);
lean_inc(v_a_3113_);
lean_dec_ref_known(v___x_3111_, 2);
v___x_3184_ = lean_unsigned_to_nat(0u);
v___x_3185_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___lam__6___closed__2));
v___x_3186_ = lean_array_get_size(v_a_3112_);
v___x_3187_ = lean_nat_dec_lt(v___x_3184_, v___x_3186_);
if (v___x_3187_ == 0)
{
v_a_3159_ = v___x_3185_;
v_a_3160_ = v_a_3113_;
goto v___jp_3158_;
}
else
{
size_t v___x_3188_; size_t v___x_3189_; lean_object* v___x_3190_; 
v___x_3188_ = ((size_t)0ULL);
v___x_3189_ = lean_usize_of_nat(v___x_3186_);
lean_inc_ref(v___y_2932_);
v___x_3190_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__9(v_a_3112_, v___x_3188_, v___x_3189_, v___x_3185_, v___y_2932_, v___x_2925_, v___y_2934_, v___y_2935_, v___y_2936_, v_a_3113_);
if (lean_obj_tag(v___x_3190_) == 0)
{
lean_object* v_a_3191_; lean_object* v_a_3192_; 
v_a_3191_ = lean_ctor_get(v___x_3190_, 0);
lean_inc(v_a_3191_);
v_a_3192_ = lean_ctor_get(v___x_3190_, 1);
lean_inc(v_a_3192_);
lean_dec_ref_known(v___x_3190_, 2);
v_a_3159_ = v_a_3191_;
v_a_3160_ = v_a_3192_;
goto v___jp_3158_;
}
else
{
lean_object* v_a_3193_; lean_object* v_a_3194_; lean_object* v___x_3196_; uint8_t v_isShared_3197_; uint8_t v_isSharedCheck_3201_; 
lean_dec(v_a_3112_);
lean_dec_ref(v___y_2932_);
lean_dec_ref(v_config_2930_);
lean_dec(v_name_2928_);
lean_dec_ref(v_pkg_2927_);
lean_dec(v___x_2925_);
lean_dec_ref(v_dir_2924_);
lean_dec_ref(v_self_2923_);
v_a_3193_ = lean_ctor_get(v___x_3190_, 0);
v_a_3194_ = lean_ctor_get(v___x_3190_, 1);
v_isSharedCheck_3201_ = !lean_is_exclusive(v___x_3190_);
if (v_isSharedCheck_3201_ == 0)
{
v___x_3196_ = v___x_3190_;
v_isShared_3197_ = v_isSharedCheck_3201_;
goto v_resetjp_3195_;
}
else
{
lean_inc(v_a_3194_);
lean_inc(v_a_3193_);
lean_dec(v___x_3190_);
v___x_3196_ = lean_box(0);
v_isShared_3197_ = v_isSharedCheck_3201_;
goto v_resetjp_3195_;
}
v_resetjp_3195_:
{
lean_object* v___x_3199_; 
if (v_isShared_3197_ == 0)
{
v___x_3199_ = v___x_3196_;
goto v_reusejp_3198_;
}
else
{
lean_object* v_reuseFailAlloc_3200_; 
v_reuseFailAlloc_3200_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3200_, 0, v_a_3193_);
lean_ctor_set(v_reuseFailAlloc_3200_, 1, v_a_3194_);
v___x_3199_ = v_reuseFailAlloc_3200_;
goto v_reusejp_3198_;
}
v_reusejp_3198_:
{
return v___x_3199_;
}
}
}
}
v___jp_3114_:
{
lean_object* v___x_3126_; lean_object* v___x_3127_; uint8_t v___x_3128_; 
v___x_3126_ = l_Lake_OrdHashSet_empty___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__5;
v___x_3127_ = lean_array_get_size(v_a_3112_);
v___x_3128_ = lean_nat_dec_lt(v___y_3116_, v___x_3127_);
if (v___x_3128_ == 0)
{
lean_dec(v_a_3112_);
v___y_3058_ = v___y_3115_;
v___y_3059_ = v___y_3116_;
v___y_3060_ = v___y_3117_;
v___y_3061_ = v_a_3124_;
v___y_3062_ = v___y_3118_;
v___y_3063_ = v___y_3119_;
v___y_3064_ = v___y_3120_;
v___y_3065_ = v___y_3121_;
v___y_3066_ = v___y_3122_;
v___y_3067_ = v___y_3123_;
v_a_3068_ = v___x_3126_;
v_a_3069_ = v_a_3125_;
goto v___jp_3057_;
}
else
{
uint8_t v___x_3129_; 
v___x_3129_ = lean_nat_dec_le(v___x_3127_, v___x_3127_);
if (v___x_3129_ == 0)
{
if (v___x_3128_ == 0)
{
lean_dec(v_a_3112_);
v___y_3058_ = v___y_3115_;
v___y_3059_ = v___y_3116_;
v___y_3060_ = v___y_3117_;
v___y_3061_ = v_a_3124_;
v___y_3062_ = v___y_3118_;
v___y_3063_ = v___y_3119_;
v___y_3064_ = v___y_3120_;
v___y_3065_ = v___y_3121_;
v___y_3066_ = v___y_3122_;
v___y_3067_ = v___y_3123_;
v_a_3068_ = v___x_3126_;
v_a_3069_ = v_a_3125_;
goto v___jp_3057_;
}
else
{
size_t v___x_3130_; size_t v___x_3131_; lean_object* v___x_3132_; 
v___x_3130_ = ((size_t)0ULL);
v___x_3131_ = lean_usize_of_nat(v___x_3127_);
lean_inc_ref(v___y_2932_);
v___x_3132_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__7(v_a_3112_, v___x_3130_, v___x_3131_, v___x_3126_, v___y_2932_, v___x_2925_, v___y_2934_, v___y_2935_, v___y_2936_, v_a_3125_);
lean_dec(v_a_3112_);
v___y_3093_ = v___y_3116_;
v___y_3094_ = v___y_3115_;
v___y_3095_ = v___y_3117_;
v___y_3096_ = v_a_3124_;
v___y_3097_ = v___y_3118_;
v___y_3098_ = v___y_3119_;
v___y_3099_ = v___y_3122_;
v___y_3100_ = v___y_3121_;
v___y_3101_ = v___y_3120_;
v___y_3102_ = v___y_3123_;
v___y_3103_ = v___x_3132_;
goto v___jp_3092_;
}
}
else
{
size_t v___x_3133_; size_t v___x_3134_; lean_object* v___x_3135_; 
v___x_3133_ = ((size_t)0ULL);
v___x_3134_ = lean_usize_of_nat(v___x_3127_);
lean_inc_ref(v___y_2932_);
v___x_3135_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__7(v_a_3112_, v___x_3133_, v___x_3134_, v___x_3126_, v___y_2932_, v___x_2925_, v___y_2934_, v___y_2935_, v___y_2936_, v_a_3125_);
lean_dec(v_a_3112_);
v___y_3093_ = v___y_3116_;
v___y_3094_ = v___y_3115_;
v___y_3095_ = v___y_3117_;
v___y_3096_ = v_a_3124_;
v___y_3097_ = v___y_3118_;
v___y_3098_ = v___y_3119_;
v___y_3099_ = v___y_3122_;
v___y_3100_ = v___y_3121_;
v___y_3101_ = v___y_3120_;
v___y_3102_ = v___y_3123_;
v___y_3103_ = v___x_3135_;
goto v___jp_3092_;
}
}
}
v___jp_3136_:
{
if (lean_obj_tag(v___y_3146_) == 0)
{
lean_object* v_a_3147_; lean_object* v_a_3148_; 
v_a_3147_ = lean_ctor_get(v___y_3146_, 0);
lean_inc(v_a_3147_);
v_a_3148_ = lean_ctor_get(v___y_3146_, 1);
lean_inc(v_a_3148_);
lean_dec_ref_known(v___y_3146_, 2);
v___y_3115_ = v___y_3138_;
v___y_3116_ = v___y_3137_;
v___y_3117_ = v___y_3139_;
v___y_3118_ = v___y_3140_;
v___y_3119_ = v___y_3141_;
v___y_3120_ = v___y_3144_;
v___y_3121_ = v___y_3143_;
v___y_3122_ = v___y_3142_;
v___y_3123_ = v___y_3145_;
v_a_3124_ = v_a_3147_;
v_a_3125_ = v_a_3148_;
goto v___jp_3114_;
}
else
{
lean_object* v_a_3149_; lean_object* v_a_3150_; lean_object* v___x_3152_; uint8_t v_isShared_3153_; uint8_t v_isSharedCheck_3157_; 
lean_dec_ref(v___y_3144_);
lean_dec_ref(v___y_3143_);
lean_dec_ref(v___y_3142_);
lean_dec_ref(v___y_3141_);
lean_dec_ref(v___y_3138_);
lean_dec(v_a_3112_);
lean_dec_ref(v___y_2932_);
lean_dec(v_name_2928_);
lean_dec_ref(v_pkg_2927_);
lean_dec(v___x_2925_);
lean_dec_ref(v_dir_2924_);
lean_dec_ref(v_self_2923_);
v_a_3149_ = lean_ctor_get(v___y_3146_, 0);
v_a_3150_ = lean_ctor_get(v___y_3146_, 1);
v_isSharedCheck_3157_ = !lean_is_exclusive(v___y_3146_);
if (v_isSharedCheck_3157_ == 0)
{
v___x_3152_ = v___y_3146_;
v_isShared_3153_ = v_isSharedCheck_3157_;
goto v_resetjp_3151_;
}
else
{
lean_inc(v_a_3150_);
lean_inc(v_a_3149_);
lean_dec(v___y_3146_);
v___x_3152_ = lean_box(0);
v_isShared_3153_ = v_isSharedCheck_3157_;
goto v_resetjp_3151_;
}
v_resetjp_3151_:
{
lean_object* v___x_3155_; 
if (v_isShared_3153_ == 0)
{
v___x_3155_ = v___x_3152_;
goto v_reusejp_3154_;
}
else
{
lean_object* v_reuseFailAlloc_3156_; 
v_reuseFailAlloc_3156_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3156_, 0, v_a_3149_);
lean_ctor_set(v_reuseFailAlloc_3156_, 1, v_a_3150_);
v___x_3155_ = v_reuseFailAlloc_3156_;
goto v_reusejp_3154_;
}
v_reusejp_3154_:
{
return v___x_3155_;
}
}
}
}
v___jp_3158_:
{
lean_object* v_toLeanConfig_3161_; lean_object* v_toLeanConfig_3162_; lean_object* v_buildDir_3163_; lean_object* v_nativeLibDir_3164_; lean_object* v_moreLinkObjs_3165_; lean_object* v_moreLinkLibs_3166_; lean_object* v_moreLinkArgs_3167_; lean_object* v_weakLinkArgs_3168_; lean_object* v_moreLinkObjs_3169_; lean_object* v_moreLinkLibs_3170_; lean_object* v_moreLinkArgs_3171_; lean_object* v_weakLinkArgs_3172_; lean_object* v___x_3173_; lean_object* v___x_3174_; lean_object* v___x_3175_; uint8_t v___x_3176_; 
v_toLeanConfig_3161_ = lean_ctor_get(v_config_2930_, 1);
lean_inc_ref(v_toLeanConfig_3161_);
v_toLeanConfig_3162_ = lean_ctor_get(v_config_2931_, 0);
v_buildDir_3163_ = lean_ctor_get(v_config_2930_, 5);
lean_inc_ref(v_buildDir_3163_);
v_nativeLibDir_3164_ = lean_ctor_get(v_config_2930_, 7);
lean_inc_ref(v_nativeLibDir_3164_);
lean_dec_ref(v_config_2930_);
v_moreLinkObjs_3165_ = lean_ctor_get(v_toLeanConfig_3161_, 6);
lean_inc_ref(v_moreLinkObjs_3165_);
v_moreLinkLibs_3166_ = lean_ctor_get(v_toLeanConfig_3161_, 7);
lean_inc_ref(v_moreLinkLibs_3166_);
v_moreLinkArgs_3167_ = lean_ctor_get(v_toLeanConfig_3161_, 8);
lean_inc_ref(v_moreLinkArgs_3167_);
v_weakLinkArgs_3168_ = lean_ctor_get(v_toLeanConfig_3161_, 9);
lean_inc_ref(v_weakLinkArgs_3168_);
lean_dec_ref(v_toLeanConfig_3161_);
v_moreLinkObjs_3169_ = lean_ctor_get(v_toLeanConfig_3162_, 6);
v_moreLinkLibs_3170_ = lean_ctor_get(v_toLeanConfig_3162_, 7);
v_moreLinkArgs_3171_ = lean_ctor_get(v_toLeanConfig_3162_, 8);
v_weakLinkArgs_3172_ = lean_ctor_get(v_toLeanConfig_3162_, 9);
v___x_3173_ = l_Array_append___redArg(v_moreLinkObjs_3165_, v_moreLinkObjs_3169_);
v___x_3174_ = lean_unsigned_to_nat(0u);
v___x_3175_ = lean_array_get_size(v___x_3173_);
v___x_3176_ = lean_nat_dec_lt(v___x_3174_, v___x_3175_);
if (v___x_3176_ == 0)
{
lean_dec_ref(v___x_3173_);
v___y_3115_ = v_weakLinkArgs_3168_;
v___y_3116_ = v___x_3174_;
v___y_3117_ = v_moreLinkArgs_3171_;
v___y_3118_ = v_weakLinkArgs_3172_;
v___y_3119_ = v_buildDir_3163_;
v___y_3120_ = v_moreLinkLibs_3166_;
v___y_3121_ = v_moreLinkArgs_3167_;
v___y_3122_ = v_nativeLibDir_3164_;
v___y_3123_ = v_moreLinkLibs_3170_;
v_a_3124_ = v_a_3159_;
v_a_3125_ = v_a_3160_;
goto v___jp_3114_;
}
else
{
uint8_t v___x_3177_; 
v___x_3177_ = lean_nat_dec_le(v___x_3175_, v___x_3175_);
if (v___x_3177_ == 0)
{
if (v___x_3176_ == 0)
{
lean_dec_ref(v___x_3173_);
v___y_3115_ = v_weakLinkArgs_3168_;
v___y_3116_ = v___x_3174_;
v___y_3117_ = v_moreLinkArgs_3171_;
v___y_3118_ = v_weakLinkArgs_3172_;
v___y_3119_ = v_buildDir_3163_;
v___y_3120_ = v_moreLinkLibs_3166_;
v___y_3121_ = v_moreLinkArgs_3167_;
v___y_3122_ = v_nativeLibDir_3164_;
v___y_3123_ = v_moreLinkLibs_3170_;
v_a_3124_ = v_a_3159_;
v_a_3125_ = v_a_3160_;
goto v___jp_3114_;
}
else
{
size_t v___x_3178_; size_t v___x_3179_; lean_object* v___x_3180_; 
v___x_3178_ = ((size_t)0ULL);
v___x_3179_ = lean_usize_of_nat(v___x_3175_);
lean_inc_ref(v___y_2932_);
lean_inc_ref(v_pkg_2927_);
v___x_3180_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__8(v_pkg_2927_, v___x_3173_, v___x_3178_, v___x_3179_, v_a_3159_, v___y_2932_, v___x_2925_, v___y_2934_, v___y_2935_, v___y_2936_, v_a_3160_);
lean_dec_ref(v___x_3173_);
v___y_3137_ = v___x_3174_;
v___y_3138_ = v_weakLinkArgs_3168_;
v___y_3139_ = v_moreLinkArgs_3171_;
v___y_3140_ = v_weakLinkArgs_3172_;
v___y_3141_ = v_buildDir_3163_;
v___y_3142_ = v_nativeLibDir_3164_;
v___y_3143_ = v_moreLinkArgs_3167_;
v___y_3144_ = v_moreLinkLibs_3166_;
v___y_3145_ = v_moreLinkLibs_3170_;
v___y_3146_ = v___x_3180_;
goto v___jp_3136_;
}
}
else
{
size_t v___x_3181_; size_t v___x_3182_; lean_object* v___x_3183_; 
v___x_3181_ = ((size_t)0ULL);
v___x_3182_ = lean_usize_of_nat(v___x_3175_);
lean_inc_ref(v___y_2932_);
lean_inc_ref(v_pkg_2927_);
v___x_3183_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__8(v_pkg_2927_, v___x_3173_, v___x_3181_, v___x_3182_, v_a_3159_, v___y_2932_, v___x_2925_, v___y_2934_, v___y_2935_, v___y_2936_, v_a_3160_);
lean_dec_ref(v___x_3173_);
v___y_3137_ = v___x_3174_;
v___y_3138_ = v_weakLinkArgs_3168_;
v___y_3139_ = v_moreLinkArgs_3171_;
v___y_3140_ = v_weakLinkArgs_3172_;
v___y_3141_ = v_buildDir_3163_;
v___y_3142_ = v_nativeLibDir_3164_;
v___y_3143_ = v_moreLinkArgs_3167_;
v___y_3144_ = v_moreLinkLibs_3166_;
v___y_3145_ = v_moreLinkLibs_3170_;
v___y_3146_ = v___x_3183_;
goto v___jp_3136_;
}
}
}
}
else
{
lean_object* v_a_3202_; lean_object* v_a_3203_; lean_object* v___x_3205_; uint8_t v_isShared_3206_; uint8_t v_isSharedCheck_3210_; 
lean_dec_ref(v___y_2932_);
lean_dec_ref(v_config_2930_);
lean_dec(v_name_2928_);
lean_dec_ref(v_pkg_2927_);
lean_dec(v___x_2925_);
lean_dec_ref(v_dir_2924_);
lean_dec_ref(v_self_2923_);
v_a_3202_ = lean_ctor_get(v___x_3111_, 0);
v_a_3203_ = lean_ctor_get(v___x_3111_, 1);
v_isSharedCheck_3210_ = !lean_is_exclusive(v___x_3111_);
if (v_isSharedCheck_3210_ == 0)
{
v___x_3205_ = v___x_3111_;
v_isShared_3206_ = v_isSharedCheck_3210_;
goto v_resetjp_3204_;
}
else
{
lean_inc(v_a_3203_);
lean_inc(v_a_3202_);
lean_dec(v___x_3111_);
v___x_3205_ = lean_box(0);
v_isShared_3206_ = v_isSharedCheck_3210_;
goto v_resetjp_3204_;
}
v_resetjp_3204_:
{
lean_object* v___x_3208_; 
if (v_isShared_3206_ == 0)
{
v___x_3208_ = v___x_3205_;
goto v_reusejp_3207_;
}
else
{
lean_object* v_reuseFailAlloc_3209_; 
v_reuseFailAlloc_3209_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3209_, 0, v_a_3202_);
lean_ctor_set(v_reuseFailAlloc_3209_, 1, v_a_3203_);
v___x_3208_ = v_reuseFailAlloc_3209_;
goto v_reusejp_3207_;
}
v_reusejp_3207_:
{
return v___x_3208_;
}
}
}
}
else
{
lean_object* v_a_3211_; lean_object* v_a_3212_; lean_object* v___x_3214_; uint8_t v_isShared_3215_; uint8_t v_isSharedCheck_3219_; 
lean_dec_ref(v___y_2932_);
lean_dec_ref(v_config_2930_);
lean_dec(v_name_2928_);
lean_dec_ref(v_pkg_2927_);
lean_dec(v___x_2925_);
lean_dec_ref(v_dir_2924_);
lean_dec_ref(v_self_2923_);
v_a_3211_ = lean_ctor_get(v___x_3108_, 0);
v_a_3212_ = lean_ctor_get(v___x_3108_, 1);
v_isSharedCheck_3219_ = !lean_is_exclusive(v___x_3108_);
if (v_isSharedCheck_3219_ == 0)
{
v___x_3214_ = v___x_3108_;
v_isShared_3215_ = v_isSharedCheck_3219_;
goto v_resetjp_3213_;
}
else
{
lean_inc(v_a_3212_);
lean_inc(v_a_3211_);
lean_dec(v___x_3108_);
v___x_3214_ = lean_box(0);
v_isShared_3215_ = v_isSharedCheck_3219_;
goto v_resetjp_3213_;
}
v_resetjp_3213_:
{
lean_object* v___x_3217_; 
if (v_isShared_3215_ == 0)
{
v___x_3217_ = v___x_3214_;
goto v_reusejp_3216_;
}
else
{
lean_object* v_reuseFailAlloc_3218_; 
v_reuseFailAlloc_3218_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3218_, 0, v_a_3211_);
lean_ctor_set(v_reuseFailAlloc_3218_, 1, v_a_3212_);
v___x_3217_ = v_reuseFailAlloc_3218_;
goto v_reusejp_3216_;
}
v_reusejp_3216_:
{
return v___x_3217_;
}
}
}
v___jp_2939_:
{
lean_object* v___x_2942_; 
v___x_2942_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2942_, 0, v_a_2940_);
lean_ctor_set(v___x_2942_, 1, v_a_2941_);
return v___x_2942_;
}
v___jp_2943_:
{
lean_object* v___x_2953_; lean_object* v___x_2954_; lean_object* v___x_2955_; lean_object* v___x_2956_; lean_object* v___x_2957_; uint8_t v___x_2958_; lean_object* v___x_2959_; lean_object* v___x_2960_; lean_object* v___x_2961_; lean_object* v___x_2962_; uint8_t v___x_2963_; uint8_t v___x_2964_; lean_object* v___x_2965_; lean_object* v___x_2966_; lean_object* v___x_2967_; lean_object* v___x_2968_; 
lean_inc_ref(v_self_2923_);
v___x_2953_ = l_Lake_LeanLib_libName(v_self_2923_);
v___x_2954_ = l_System_FilePath_normalize(v___y_2948_);
v___x_2955_ = l_Lake_joinRelative(v_dir_2924_, v___x_2954_);
v___x_2956_ = l_System_FilePath_normalize(v___y_2950_);
v___x_2957_ = l_Lake_joinRelative(v___x_2955_, v___x_2956_);
v___x_2958_ = 0;
v___x_2959_ = l_Lake_nameToSharedLib(v___x_2953_, v___x_2958_);
v___x_2960_ = l_Lake_joinRelative(v___x_2957_, v___x_2959_);
v___x_2961_ = l_Array_append___redArg(v___y_2944_, v___y_2947_);
v___x_2962_ = l_Array_append___redArg(v___y_2949_, v___y_2945_);
v___x_2963_ = l_Lake_LeanLib_isPlugin(v_self_2923_);
v___x_2964_ = l_System_Platform_isWindows;
v___x_2965_ = lean_box(0);
v___x_2966_ = lean_obj_once(&l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___lam__0___closed__2, &l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___lam__0___closed__2_once, _init_l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___lam__0___closed__2);
v___x_2967_ = l_Lake_buildLeanSharedLib(v___x_2953_, v___x_2960_, v___y_2946_, v_a_2951_, v___x_2961_, v___x_2962_, v___x_2963_, v___x_2964_, v___x_2965_, v___y_2932_, v___x_2925_, v___y_2934_, v___y_2935_, v___y_2936_, v___x_2966_);
lean_dec(v___x_2925_);
lean_dec_ref(v___y_2946_);
v___x_2968_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2968_, 0, v___x_2967_);
lean_ctor_set(v___x_2968_, 1, v_a_2952_);
return v___x_2968_;
}
v___jp_2969_:
{
if (lean_obj_tag(v___y_2977_) == 0)
{
lean_object* v_a_2978_; lean_object* v_a_2979_; 
v_a_2978_ = lean_ctor_get(v___y_2977_, 0);
lean_inc(v_a_2978_);
v_a_2979_ = lean_ctor_get(v___y_2977_, 1);
lean_inc(v_a_2979_);
lean_dec_ref_known(v___y_2977_, 2);
v___y_2944_ = v___y_2970_;
v___y_2945_ = v___y_2971_;
v___y_2946_ = v___y_2972_;
v___y_2947_ = v___y_2973_;
v___y_2948_ = v___y_2974_;
v___y_2949_ = v___y_2976_;
v___y_2950_ = v___y_2975_;
v_a_2951_ = v_a_2978_;
v_a_2952_ = v_a_2979_;
goto v___jp_2943_;
}
else
{
lean_object* v_a_2980_; lean_object* v_a_2981_; 
lean_dec_ref(v___y_2976_);
lean_dec_ref(v___y_2975_);
lean_dec_ref(v___y_2974_);
lean_dec_ref(v___y_2972_);
lean_dec_ref(v___y_2970_);
lean_dec_ref(v___y_2932_);
lean_dec(v___x_2925_);
lean_dec_ref(v_dir_2924_);
lean_dec_ref(v_self_2923_);
v_a_2980_ = lean_ctor_get(v___y_2977_, 0);
lean_inc(v_a_2980_);
v_a_2981_ = lean_ctor_get(v___y_2977_, 1);
lean_inc(v_a_2981_);
lean_dec_ref_known(v___y_2977_, 2);
v_a_2940_ = v_a_2980_;
v_a_2941_ = v_a_2981_;
goto v___jp_2939_;
}
}
v___jp_2982_:
{
lean_object* v___x_2994_; uint8_t v___x_2995_; 
v___x_2994_ = lean_array_get_size(v___y_2993_);
v___x_2995_ = lean_nat_dec_lt(v___y_2984_, v___x_2994_);
if (v___x_2995_ == 0)
{
lean_dec_ref(v___y_2993_);
v___y_2944_ = v___y_2985_;
v___y_2945_ = v___y_2986_;
v___y_2946_ = v___y_2987_;
v___y_2947_ = v___y_2988_;
v___y_2948_ = v___y_2989_;
v___y_2949_ = v___y_2991_;
v___y_2950_ = v___y_2990_;
v_a_2951_ = v___y_2992_;
v_a_2952_ = v___y_2983_;
goto v___jp_2943_;
}
else
{
uint8_t v___x_2996_; 
v___x_2996_ = lean_nat_dec_le(v___x_2994_, v___x_2994_);
if (v___x_2996_ == 0)
{
if (v___x_2995_ == 0)
{
lean_dec_ref(v___y_2993_);
v___y_2944_ = v___y_2985_;
v___y_2945_ = v___y_2986_;
v___y_2946_ = v___y_2987_;
v___y_2947_ = v___y_2988_;
v___y_2948_ = v___y_2989_;
v___y_2949_ = v___y_2991_;
v___y_2950_ = v___y_2990_;
v_a_2951_ = v___y_2992_;
v_a_2952_ = v___y_2983_;
goto v___jp_2943_;
}
else
{
size_t v___x_2997_; size_t v___x_2998_; lean_object* v___x_2999_; 
v___x_2997_ = ((size_t)0ULL);
v___x_2998_ = lean_usize_of_nat(v___x_2994_);
lean_inc_ref(v___y_2932_);
v___x_2999_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__2(v___y_2993_, v___x_2997_, v___x_2998_, v___y_2992_, v___y_2932_, v___x_2925_, v___y_2934_, v___y_2935_, v___y_2936_, v___y_2983_);
lean_dec_ref(v___y_2993_);
v___y_2970_ = v___y_2985_;
v___y_2971_ = v___y_2986_;
v___y_2972_ = v___y_2987_;
v___y_2973_ = v___y_2988_;
v___y_2974_ = v___y_2989_;
v___y_2975_ = v___y_2990_;
v___y_2976_ = v___y_2991_;
v___y_2977_ = v___x_2999_;
goto v___jp_2969_;
}
}
else
{
size_t v___x_3000_; size_t v___x_3001_; lean_object* v___x_3002_; 
v___x_3000_ = ((size_t)0ULL);
v___x_3001_ = lean_usize_of_nat(v___x_2994_);
lean_inc_ref(v___y_2932_);
v___x_3002_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__2(v___y_2993_, v___x_3000_, v___x_3001_, v___y_2992_, v___y_2932_, v___x_2925_, v___y_2934_, v___y_2935_, v___y_2936_, v___y_2983_);
lean_dec_ref(v___y_2993_);
v___y_2970_ = v___y_2985_;
v___y_2971_ = v___y_2986_;
v___y_2972_ = v___y_2987_;
v___y_2973_ = v___y_2988_;
v___y_2974_ = v___y_2989_;
v___y_2975_ = v___y_2990_;
v___y_2976_ = v___y_2991_;
v___y_2977_ = v___x_3002_;
goto v___jp_2969_;
}
}
}
v___jp_3003_:
{
lean_object* v___x_3014_; lean_object* v___x_3015_; uint8_t v___x_3016_; 
v___x_3014_ = lean_mk_empty_array_with_capacity(v___y_3005_);
v___x_3015_ = lean_array_get_size(v_targetDecls_2926_);
v___x_3016_ = lean_nat_dec_lt(v___y_3005_, v___x_3015_);
if (v___x_3016_ == 0)
{
lean_dec_ref(v_pkg_2927_);
v___y_2983_ = v_a_3013_;
v___y_2984_ = v___y_3005_;
v___y_2985_ = v___y_3004_;
v___y_2986_ = v___y_3006_;
v___y_2987_ = v___y_3007_;
v___y_2988_ = v___y_3008_;
v___y_2989_ = v___y_3009_;
v___y_2990_ = v___y_3011_;
v___y_2991_ = v___y_3010_;
v___y_2992_ = v_a_3012_;
v___y_2993_ = v___x_3014_;
goto v___jp_2982_;
}
else
{
size_t v___x_3017_; size_t v___x_3018_; lean_object* v___x_3019_; 
v___x_3017_ = ((size_t)0ULL);
v___x_3018_ = lean_usize_of_nat(v___x_3015_);
v___x_3019_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__3(v_pkg_2927_, v_targetDecls_2926_, v___x_3017_, v___x_3018_, v___x_3014_);
v___y_2983_ = v_a_3013_;
v___y_2984_ = v___y_3005_;
v___y_2985_ = v___y_3004_;
v___y_2986_ = v___y_3006_;
v___y_2987_ = v___y_3007_;
v___y_2988_ = v___y_3008_;
v___y_2989_ = v___y_3009_;
v___y_2990_ = v___y_3011_;
v___y_2991_ = v___y_3010_;
v___y_2992_ = v_a_3012_;
v___y_2993_ = v___x_3019_;
goto v___jp_2982_;
}
}
v___jp_3020_:
{
if (lean_obj_tag(v___y_3029_) == 0)
{
lean_object* v_a_3030_; lean_object* v_a_3031_; 
v_a_3030_ = lean_ctor_get(v___y_3029_, 0);
lean_inc(v_a_3030_);
v_a_3031_ = lean_ctor_get(v___y_3029_, 1);
lean_inc(v_a_3031_);
lean_dec_ref_known(v___y_3029_, 2);
v___y_3004_ = v___y_3022_;
v___y_3005_ = v___y_3021_;
v___y_3006_ = v___y_3023_;
v___y_3007_ = v___y_3024_;
v___y_3008_ = v___y_3025_;
v___y_3009_ = v___y_3026_;
v___y_3010_ = v___y_3028_;
v___y_3011_ = v___y_3027_;
v_a_3012_ = v_a_3030_;
v_a_3013_ = v_a_3031_;
goto v___jp_3003_;
}
else
{
lean_object* v_a_3032_; lean_object* v_a_3033_; 
lean_dec_ref(v___y_3028_);
lean_dec_ref(v___y_3027_);
lean_dec_ref(v___y_3026_);
lean_dec_ref(v___y_3024_);
lean_dec_ref(v___y_3022_);
lean_dec_ref(v___y_2932_);
lean_dec_ref(v_pkg_2927_);
lean_dec(v___x_2925_);
lean_dec_ref(v_dir_2924_);
lean_dec_ref(v_self_2923_);
v_a_3032_ = lean_ctor_get(v___y_3029_, 0);
lean_inc(v_a_3032_);
v_a_3033_ = lean_ctor_get(v___y_3029_, 1);
lean_inc(v_a_3033_);
lean_dec_ref_known(v___y_3029_, 2);
v_a_2940_ = v_a_3032_;
v_a_2941_ = v_a_3033_;
goto v___jp_2939_;
}
}
v___jp_3034_:
{
lean_object* v___x_3047_; lean_object* v___x_3048_; uint8_t v___x_3049_; 
v___x_3047_ = l_Array_append___redArg(v___y_3043_, v___y_3044_);
v___x_3048_ = lean_array_get_size(v___x_3047_);
v___x_3049_ = lean_nat_dec_lt(v___y_3035_, v___x_3048_);
if (v___x_3049_ == 0)
{
lean_dec_ref(v___x_3047_);
v___y_3004_ = v___y_3036_;
v___y_3005_ = v___y_3035_;
v___y_3006_ = v___y_3037_;
v___y_3007_ = v___y_3038_;
v___y_3008_ = v___y_3039_;
v___y_3009_ = v___y_3040_;
v___y_3010_ = v___y_3042_;
v___y_3011_ = v___y_3041_;
v_a_3012_ = v_snd_3045_;
v_a_3013_ = v_a_3046_;
goto v___jp_3003_;
}
else
{
uint8_t v___x_3050_; 
v___x_3050_ = lean_nat_dec_le(v___x_3048_, v___x_3048_);
if (v___x_3050_ == 0)
{
if (v___x_3049_ == 0)
{
lean_dec_ref(v___x_3047_);
v___y_3004_ = v___y_3036_;
v___y_3005_ = v___y_3035_;
v___y_3006_ = v___y_3037_;
v___y_3007_ = v___y_3038_;
v___y_3008_ = v___y_3039_;
v___y_3009_ = v___y_3040_;
v___y_3010_ = v___y_3042_;
v___y_3011_ = v___y_3041_;
v_a_3012_ = v_snd_3045_;
v_a_3013_ = v_a_3046_;
goto v___jp_3003_;
}
else
{
size_t v___x_3051_; size_t v___x_3052_; lean_object* v___x_3053_; 
v___x_3051_ = ((size_t)0ULL);
v___x_3052_ = lean_usize_of_nat(v___x_3048_);
lean_inc_ref(v___y_2932_);
lean_inc_ref(v_pkg_2927_);
v___x_3053_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__4(v_pkg_2927_, v___x_3047_, v___x_3051_, v___x_3052_, v_snd_3045_, v___y_2932_, v___x_2925_, v___y_2934_, v___y_2935_, v___y_2936_, v_a_3046_);
lean_dec_ref(v___x_3047_);
v___y_3021_ = v___y_3035_;
v___y_3022_ = v___y_3036_;
v___y_3023_ = v___y_3037_;
v___y_3024_ = v___y_3038_;
v___y_3025_ = v___y_3039_;
v___y_3026_ = v___y_3040_;
v___y_3027_ = v___y_3041_;
v___y_3028_ = v___y_3042_;
v___y_3029_ = v___x_3053_;
goto v___jp_3020_;
}
}
else
{
size_t v___x_3054_; size_t v___x_3055_; lean_object* v___x_3056_; 
v___x_3054_ = ((size_t)0ULL);
v___x_3055_ = lean_usize_of_nat(v___x_3048_);
lean_inc_ref(v___y_2932_);
lean_inc_ref(v_pkg_2927_);
v___x_3056_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__4(v_pkg_2927_, v___x_3047_, v___x_3054_, v___x_3055_, v_snd_3045_, v___y_2932_, v___x_2925_, v___y_2934_, v___y_2935_, v___y_2936_, v_a_3046_);
lean_dec_ref(v___x_3047_);
v___y_3021_ = v___y_3035_;
v___y_3022_ = v___y_3036_;
v___y_3023_ = v___y_3037_;
v___y_3024_ = v___y_3038_;
v___y_3025_ = v___y_3039_;
v___y_3026_ = v___y_3040_;
v___y_3027_ = v___y_3041_;
v___y_3028_ = v___y_3042_;
v___y_3029_ = v___x_3056_;
goto v___jp_3020_;
}
}
}
v___jp_3057_:
{
lean_object* v_toArray_3070_; lean_object* v___x_3072_; uint8_t v_isShared_3073_; uint8_t v_isSharedCheck_3090_; 
v_toArray_3070_ = lean_ctor_get(v_a_3068_, 1);
v_isSharedCheck_3090_ = !lean_is_exclusive(v_a_3068_);
if (v_isSharedCheck_3090_ == 0)
{
lean_object* v_unused_3091_; 
v_unused_3091_ = lean_ctor_get(v_a_3068_, 0);
lean_dec(v_unused_3091_);
v___x_3072_ = v_a_3068_;
v_isShared_3073_ = v_isSharedCheck_3090_;
goto v_resetjp_3071_;
}
else
{
lean_inc(v_toArray_3070_);
lean_dec(v_a_3068_);
v___x_3072_ = lean_box(0);
v_isShared_3073_ = v_isSharedCheck_3090_;
goto v_resetjp_3071_;
}
v_resetjp_3071_:
{
lean_object* v___x_3074_; lean_object* v___x_3075_; uint8_t v___x_3076_; 
v___x_3074_ = lean_mk_empty_array_with_capacity(v___y_3059_);
v___x_3075_ = lean_array_get_size(v_toArray_3070_);
v___x_3076_ = lean_nat_dec_lt(v___y_3059_, v___x_3075_);
if (v___x_3076_ == 0)
{
lean_del_object(v___x_3072_);
lean_dec_ref(v_toArray_3070_);
lean_dec(v_name_2928_);
v___y_3035_ = v___y_3059_;
v___y_3036_ = v___y_3058_;
v___y_3037_ = v___y_3060_;
v___y_3038_ = v___y_3061_;
v___y_3039_ = v___y_3062_;
v___y_3040_ = v___y_3063_;
v___y_3041_ = v___y_3066_;
v___y_3042_ = v___y_3065_;
v___y_3043_ = v___y_3064_;
v___y_3044_ = v___y_3067_;
v_snd_3045_ = v___x_3074_;
v_a_3046_ = v_a_3069_;
goto v___jp_3034_;
}
else
{
lean_object* v___x_3077_; lean_object* v___x_3078_; lean_object* v___x_3080_; 
v___x_3077_ = l_Lean_NameSet_empty;
v___x_3078_ = l_Lean_NameSet_insert(v___x_3077_, v_name_2928_);
if (v_isShared_3073_ == 0)
{
lean_ctor_set(v___x_3072_, 1, v___x_3074_);
lean_ctor_set(v___x_3072_, 0, v___x_3078_);
v___x_3080_ = v___x_3072_;
goto v_reusejp_3079_;
}
else
{
lean_object* v_reuseFailAlloc_3089_; 
v_reuseFailAlloc_3089_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3089_, 0, v___x_3078_);
lean_ctor_set(v_reuseFailAlloc_3089_, 1, v___x_3074_);
v___x_3080_ = v_reuseFailAlloc_3089_;
goto v_reusejp_3079_;
}
v_reusejp_3079_:
{
size_t v___x_3081_; size_t v___x_3082_; lean_object* v___x_3083_; 
v___x_3081_ = ((size_t)0ULL);
v___x_3082_ = lean_usize_of_nat(v___x_3075_);
lean_inc_ref(v___y_2932_);
v___x_3083_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__6(v_toArray_3070_, v___x_3081_, v___x_3082_, v___x_3080_, v___y_2932_, v___x_2925_, v___y_2934_, v___y_2935_, v___y_2936_, v_a_3069_);
lean_dec_ref(v_toArray_3070_);
if (lean_obj_tag(v___x_3083_) == 0)
{
lean_object* v_a_3084_; lean_object* v_a_3085_; lean_object* v_snd_3086_; 
v_a_3084_ = lean_ctor_get(v___x_3083_, 0);
lean_inc(v_a_3084_);
v_a_3085_ = lean_ctor_get(v___x_3083_, 1);
lean_inc(v_a_3085_);
lean_dec_ref_known(v___x_3083_, 2);
v_snd_3086_ = lean_ctor_get(v_a_3084_, 1);
lean_inc(v_snd_3086_);
lean_dec(v_a_3084_);
v___y_3035_ = v___y_3059_;
v___y_3036_ = v___y_3058_;
v___y_3037_ = v___y_3060_;
v___y_3038_ = v___y_3061_;
v___y_3039_ = v___y_3062_;
v___y_3040_ = v___y_3063_;
v___y_3041_ = v___y_3066_;
v___y_3042_ = v___y_3065_;
v___y_3043_ = v___y_3064_;
v___y_3044_ = v___y_3067_;
v_snd_3045_ = v_snd_3086_;
v_a_3046_ = v_a_3085_;
goto v___jp_3034_;
}
else
{
lean_object* v_a_3087_; lean_object* v_a_3088_; 
lean_dec_ref(v___y_3066_);
lean_dec_ref(v___y_3065_);
lean_dec_ref(v___y_3064_);
lean_dec_ref(v___y_3063_);
lean_dec_ref(v___y_3061_);
lean_dec_ref(v___y_3058_);
lean_dec_ref(v___y_2932_);
lean_dec_ref(v_pkg_2927_);
lean_dec(v___x_2925_);
lean_dec_ref(v_dir_2924_);
lean_dec_ref(v_self_2923_);
v_a_3087_ = lean_ctor_get(v___x_3083_, 0);
lean_inc(v_a_3087_);
v_a_3088_ = lean_ctor_get(v___x_3083_, 1);
lean_inc(v_a_3088_);
lean_dec_ref_known(v___x_3083_, 2);
v_a_2940_ = v_a_3087_;
v_a_2941_ = v_a_3088_;
goto v___jp_2939_;
}
}
}
}
}
v___jp_3092_:
{
if (lean_obj_tag(v___y_3103_) == 0)
{
lean_object* v_a_3104_; lean_object* v_a_3105_; 
v_a_3104_ = lean_ctor_get(v___y_3103_, 0);
lean_inc(v_a_3104_);
v_a_3105_ = lean_ctor_get(v___y_3103_, 1);
lean_inc(v_a_3105_);
lean_dec_ref_known(v___y_3103_, 2);
v___y_3058_ = v___y_3094_;
v___y_3059_ = v___y_3093_;
v___y_3060_ = v___y_3095_;
v___y_3061_ = v___y_3096_;
v___y_3062_ = v___y_3097_;
v___y_3063_ = v___y_3098_;
v___y_3064_ = v___y_3101_;
v___y_3065_ = v___y_3100_;
v___y_3066_ = v___y_3099_;
v___y_3067_ = v___y_3102_;
v_a_3068_ = v_a_3104_;
v_a_3069_ = v_a_3105_;
goto v___jp_3057_;
}
else
{
lean_object* v_a_3106_; lean_object* v_a_3107_; 
lean_dec_ref(v___y_3101_);
lean_dec_ref(v___y_3100_);
lean_dec_ref(v___y_3099_);
lean_dec_ref(v___y_3098_);
lean_dec_ref(v___y_3096_);
lean_dec_ref(v___y_3094_);
lean_dec_ref(v___y_2932_);
lean_dec(v_name_2928_);
lean_dec_ref(v_pkg_2927_);
lean_dec(v___x_2925_);
lean_dec_ref(v_dir_2924_);
lean_dec_ref(v_self_2923_);
v_a_3106_ = lean_ctor_get(v___y_3103_, 0);
lean_inc(v_a_3106_);
v_a_3107_ = lean_ctor_get(v___y_3103_, 1);
lean_inc(v_a_3107_);
lean_dec_ref_known(v___y_3103_, 2);
v_a_2940_ = v_a_3106_;
v_a_2941_ = v_a_3107_;
goto v___jp_2939_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared___lam__0___boxed(lean_object* v_self_3220_, lean_object* v_dir_3221_, lean_object* v___x_3222_, lean_object* v_targetDecls_3223_, lean_object* v_pkg_3224_, lean_object* v_name_3225_, lean_object* v___x_3226_, lean_object* v_config_3227_, lean_object* v_config_3228_, lean_object* v___y_3229_, lean_object* v___y_3230_, lean_object* v___y_3231_, lean_object* v___y_3232_, lean_object* v___y_3233_, lean_object* v___y_3234_, lean_object* v___y_3235_){
_start:
{
lean_object* v_res_3236_; 
v_res_3236_ = l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared___lam__0(v_self_3220_, v_dir_3221_, v___x_3222_, v_targetDecls_3223_, v_pkg_3224_, v_name_3225_, v___x_3226_, v_config_3227_, v_config_3228_, v___y_3229_, v___y_3230_, v___y_3231_, v___y_3232_, v___y_3233_, v___y_3234_);
lean_dec_ref(v___y_3233_);
lean_dec(v___y_3232_);
lean_dec(v___y_3231_);
lean_dec(v___y_3230_);
lean_dec(v_config_3228_);
lean_dec_ref(v_targetDecls_3223_);
return v_res_3236_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared(lean_object* v_self_3238_, lean_object* v_a_3239_, lean_object* v_a_3240_, lean_object* v_a_3241_, lean_object* v_a_3242_, lean_object* v_a_3243_, lean_object* v_a_3244_){
_start:
{
lean_object* v_pkg_3246_; lean_object* v_name_3247_; lean_object* v_config_3248_; lean_object* v_keyName_3249_; lean_object* v_dir_3250_; lean_object* v_config_3251_; lean_object* v_targetDecls_3252_; lean_object* v___x_3253_; uint8_t v___x_3254_; lean_object* v___x_3255_; lean_object* v___x_3256_; lean_object* v___x_3257_; lean_object* v___x_3258_; lean_object* v___x_3259_; lean_object* v___x_3260_; lean_object* v___x_3261_; lean_object* v___x_3262_; lean_object* v___f_3263_; uint8_t v___x_3264_; lean_object* v___x_3265_; 
v_pkg_3246_ = lean_ctor_get(v_self_3238_, 0);
lean_inc_ref_n(v_pkg_3246_, 2);
v_name_3247_ = lean_ctor_get(v_self_3238_, 1);
lean_inc_n(v_name_3247_, 3);
v_config_3248_ = lean_ctor_get(v_self_3238_, 2);
lean_inc(v_config_3248_);
v_keyName_3249_ = lean_ctor_get(v_pkg_3246_, 2);
v_dir_3250_ = lean_ctor_get(v_pkg_3246_, 4);
lean_inc_ref(v_dir_3250_);
v_config_3251_ = lean_ctor_get(v_pkg_3246_, 6);
lean_inc_ref(v_config_3251_);
v_targetDecls_3252_ = lean_ctor_get(v_pkg_3246_, 15);
lean_inc_ref(v_targetDecls_3252_);
v___x_3253_ = l_Lake_instDataKindDynlib;
v___x_3254_ = 1;
v___x_3255_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_name_3247_, v___x_3254_);
v___x_3256_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared___closed__0));
v___x_3257_ = lean_string_append(v___x_3255_, v___x_3256_);
v___x_3258_ = l_Lake_LeanLib_modulesFacet;
lean_inc(v_keyName_3249_);
v___x_3259_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_3259_, 0, v_keyName_3249_);
lean_ctor_set(v___x_3259_, 1, v_name_3247_);
v___x_3260_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig___closed__2));
lean_inc_ref(v_self_3238_);
v___x_3261_ = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(v___x_3261_, 0, v___x_3259_);
lean_ctor_set(v___x_3261_, 1, v___x_3260_);
lean_ctor_set(v___x_3261_, 2, v_self_3238_);
lean_ctor_set(v___x_3261_, 3, v___x_3258_);
v___x_3262_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3262_, 0, v_pkg_3246_);
v___f_3263_ = lean_alloc_closure((void*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared___lam__0___boxed), 16, 9);
lean_closure_set(v___f_3263_, 0, v_self_3238_);
lean_closure_set(v___f_3263_, 1, v_dir_3250_);
lean_closure_set(v___f_3263_, 2, v___x_3262_);
lean_closure_set(v___f_3263_, 3, v_targetDecls_3252_);
lean_closure_set(v___f_3263_, 4, v_pkg_3246_);
lean_closure_set(v___f_3263_, 5, v_name_3247_);
lean_closure_set(v___f_3263_, 6, v___x_3261_);
lean_closure_set(v___f_3263_, 7, v_config_3251_);
lean_closure_set(v___f_3263_, 8, v_config_3248_);
v___x_3264_ = 0;
v___x_3265_ = l_Lake_ensureJob___redArg(v___x_3253_, v___f_3263_, v_a_3239_, v_a_3240_, v_a_3241_, v_a_3242_, v_a_3243_, v_a_3244_);
if (lean_obj_tag(v___x_3265_) == 0)
{
lean_object* v_a_3266_; lean_object* v_a_3267_; lean_object* v___x_3269_; uint8_t v_isShared_3270_; uint8_t v_isSharedCheck_3290_; 
v_a_3266_ = lean_ctor_get(v___x_3265_, 0);
v_a_3267_ = lean_ctor_get(v___x_3265_, 1);
v_isSharedCheck_3290_ = !lean_is_exclusive(v___x_3265_);
if (v_isSharedCheck_3290_ == 0)
{
v___x_3269_ = v___x_3265_;
v_isShared_3270_ = v_isSharedCheck_3290_;
goto v_resetjp_3268_;
}
else
{
lean_inc(v_a_3267_);
lean_inc(v_a_3266_);
lean_dec(v___x_3265_);
v___x_3269_ = lean_box(0);
v_isShared_3270_ = v_isSharedCheck_3290_;
goto v_resetjp_3268_;
}
v_resetjp_3268_:
{
lean_object* v_task_3271_; lean_object* v_kind_3272_; lean_object* v___x_3274_; uint8_t v_isShared_3275_; uint8_t v_isSharedCheck_3288_; 
v_task_3271_ = lean_ctor_get(v_a_3266_, 0);
v_kind_3272_ = lean_ctor_get(v_a_3266_, 1);
v_isSharedCheck_3288_ = !lean_is_exclusive(v_a_3266_);
if (v_isSharedCheck_3288_ == 0)
{
lean_object* v_unused_3289_; 
v_unused_3289_ = lean_ctor_get(v_a_3266_, 2);
lean_dec(v_unused_3289_);
v___x_3274_ = v_a_3266_;
v_isShared_3275_ = v_isSharedCheck_3288_;
goto v_resetjp_3273_;
}
else
{
lean_inc(v_kind_3272_);
lean_inc(v_task_3271_);
lean_dec(v_a_3266_);
v___x_3274_ = lean_box(0);
v_isShared_3275_ = v_isSharedCheck_3288_;
goto v_resetjp_3273_;
}
v_resetjp_3273_:
{
lean_object* v_registeredJobs_3276_; lean_object* v_job_3278_; 
v_registeredJobs_3276_ = lean_ctor_get(v_a_3243_, 4);
if (v_isShared_3275_ == 0)
{
lean_ctor_set(v___x_3274_, 2, v___x_3257_);
v_job_3278_ = v___x_3274_;
goto v_reusejp_3277_;
}
else
{
lean_object* v_reuseFailAlloc_3287_; 
v_reuseFailAlloc_3287_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_3287_, 0, v_task_3271_);
lean_ctor_set(v_reuseFailAlloc_3287_, 1, v_kind_3272_);
lean_ctor_set(v_reuseFailAlloc_3287_, 2, v___x_3257_);
v_job_3278_ = v_reuseFailAlloc_3287_;
goto v_reusejp_3277_;
}
v_reusejp_3277_:
{
lean_object* v___x_3279_; lean_object* v___x_3280_; lean_object* v___x_3281_; lean_object* v___x_3282_; lean_object* v___x_3283_; lean_object* v___x_3285_; 
lean_ctor_set_uint8(v_job_3278_, sizeof(void*)*3, v___x_3264_);
v___x_3279_ = lean_st_ref_take(v_registeredJobs_3276_);
lean_inc_ref(v_job_3278_);
v___x_3280_ = l_Lake_Job_toOpaque___redArg(v_job_3278_);
v___x_3281_ = lean_array_push(v___x_3279_, v___x_3280_);
v___x_3282_ = lean_st_ref_put(v_registeredJobs_3276_, v___x_3281_);
v___x_3283_ = l_Lake_Job_renew___redArg(v_job_3278_);
if (v_isShared_3270_ == 0)
{
lean_ctor_set(v___x_3269_, 0, v___x_3283_);
v___x_3285_ = v___x_3269_;
goto v_reusejp_3284_;
}
else
{
lean_object* v_reuseFailAlloc_3286_; 
v_reuseFailAlloc_3286_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3286_, 0, v___x_3283_);
lean_ctor_set(v_reuseFailAlloc_3286_, 1, v_a_3267_);
v___x_3285_ = v_reuseFailAlloc_3286_;
goto v_reusejp_3284_;
}
v_reusejp_3284_:
{
return v___x_3285_;
}
}
}
}
}
else
{
lean_dec_ref(v___x_3257_);
return v___x_3265_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared___boxed(lean_object* v_self_3291_, lean_object* v_a_3292_, lean_object* v_a_3293_, lean_object* v_a_3294_, lean_object* v_a_3295_, lean_object* v_a_3296_, lean_object* v_a_3297_, lean_object* v_a_3298_){
_start:
{
lean_object* v_res_3299_; 
v_res_3299_ = l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared(v_self_3291_, v_a_3292_, v_a_3293_, v_a_3294_, v_a_3295_, v_a_3296_, v_a_3297_);
lean_dec_ref(v_a_3296_);
lean_dec(v_a_3295_);
lean_dec(v_a_3294_);
lean_dec(v_a_3293_);
return v_res_3299_;
}
}
LEAN_EXPORT lean_object* l_Lake_formatQuery___at___00Lake_LeanLib_sharedFacetConfig_spec__0(uint8_t v_fmt_3300_, lean_object* v_a_3301_){
_start:
{
if (v_fmt_3300_ == 0)
{
lean_object* v_path_3302_; 
v_path_3302_ = lean_ctor_get(v_a_3301_, 0);
lean_inc_ref(v_path_3302_);
return v_path_3302_;
}
else
{
lean_object* v_path_3303_; lean_object* v___x_3304_; lean_object* v___x_3305_; 
v_path_3303_ = lean_ctor_get(v_a_3301_, 0);
lean_inc_ref(v_path_3303_);
v___x_3304_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3304_, 0, v_path_3303_);
v___x_3305_ = l_Lean_Json_compress(v___x_3304_);
return v___x_3305_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_formatQuery___at___00Lake_LeanLib_sharedFacetConfig_spec__0___boxed(lean_object* v_fmt_3306_, lean_object* v_a_3307_){
_start:
{
uint8_t v_fmt_boxed_3308_; lean_object* v_res_3309_; 
v_fmt_boxed_3308_ = lean_unbox(v_fmt_3306_);
v_res_3309_ = l_Lake_formatQuery___at___00Lake_LeanLib_sharedFacetConfig_spec__0(v_fmt_boxed_3308_, v_a_3307_);
lean_dec_ref(v_a_3307_);
return v_res_3309_;
}
}
static lean_object* _init_l_Lake_LeanLib_sharedFacetConfig___closed__2(void){
_start:
{
lean_object* v___f_3312_; uint8_t v___x_3313_; lean_object* v___x_3314_; lean_object* v___x_3315_; lean_object* v___x_3316_; lean_object* v___x_3317_; 
v___f_3312_ = ((lean_object*)(l_Lake_LeanLib_sharedFacetConfig___closed__0));
v___x_3313_ = 1;
v___x_3314_ = l_Lake_instDataKindDynlib;
v___x_3315_ = ((lean_object*)(l_Lake_LeanLib_sharedFacetConfig___closed__1));
v___x_3316_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig___closed__2));
v___x_3317_ = lean_alloc_ctor(0, 4, 2);
lean_ctor_set(v___x_3317_, 0, v___x_3316_);
lean_ctor_set(v___x_3317_, 1, v___x_3315_);
lean_ctor_set(v___x_3317_, 2, v___x_3314_);
lean_ctor_set(v___x_3317_, 3, v___f_3312_);
lean_ctor_set_uint8(v___x_3317_, sizeof(void*)*4, v___x_3313_);
lean_ctor_set_uint8(v___x_3317_, sizeof(void*)*4 + 1, v___x_3313_);
return v___x_3317_;
}
}
static lean_object* _init_l_Lake_LeanLib_sharedFacetConfig(void){
_start:
{
lean_object* v___x_3318_; 
v___x_3318_ = lean_obj_once(&l_Lake_LeanLib_sharedFacetConfig___closed__2, &l_Lake_LeanLib_sharedFacetConfig___closed__2_once, _init_l_Lake_LeanLib_sharedFacetConfig___closed__2);
return v___x_3318_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildExtraDepTargets_spec__1(lean_object* v___x_3319_, lean_object* v_as_3320_, size_t v_sz_3321_, size_t v_i_3322_, lean_object* v_b_3323_, lean_object* v___y_3324_, lean_object* v___y_3325_, lean_object* v___y_3326_, lean_object* v___y_3327_, lean_object* v___y_3328_, lean_object* v___y_3329_){
_start:
{
uint8_t v___x_3331_; 
v___x_3331_ = lean_usize_dec_lt(v_i_3322_, v_sz_3321_);
if (v___x_3331_ == 0)
{
lean_object* v___x_3332_; 
lean_dec_ref(v___y_3324_);
lean_dec_ref(v___x_3319_);
v___x_3332_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3332_, 0, v_b_3323_);
lean_ctor_set(v___x_3332_, 1, v___y_3329_);
return v___x_3332_;
}
else
{
lean_object* v_a_3333_; lean_object* v___x_3334_; 
v_a_3333_ = lean_array_uget_borrowed(v_as_3320_, v_i_3322_);
lean_inc_ref(v___y_3324_);
lean_inc_n(v_a_3333_, 2);
lean_inc_ref(v___x_3319_);
v___x_3334_ = l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux(v___x_3319_, v_a_3333_, v_a_3333_, v___x_3331_, v___y_3324_, v___y_3325_, v___y_3326_, v___y_3327_, v___y_3328_, v___y_3329_);
if (lean_obj_tag(v___x_3334_) == 0)
{
lean_object* v_a_3335_; lean_object* v_a_3336_; lean_object* v_snd_3337_; lean_object* v___x_3338_; lean_object* v___x_3339_; size_t v___x_3340_; size_t v___x_3341_; 
v_a_3335_ = lean_ctor_get(v___x_3334_, 0);
lean_inc(v_a_3335_);
v_a_3336_ = lean_ctor_get(v___x_3334_, 1);
lean_inc(v_a_3336_);
lean_dec_ref_known(v___x_3334_, 2);
v_snd_3337_ = lean_ctor_get(v_a_3335_, 1);
lean_inc(v_snd_3337_);
lean_dec(v_a_3335_);
v___x_3338_ = l_Lake_Job_toOpaque___redArg(v_snd_3337_);
v___x_3339_ = l_Lake_Job_mix___redArg(v_b_3323_, v___x_3338_);
v___x_3340_ = ((size_t)1ULL);
v___x_3341_ = lean_usize_add(v_i_3322_, v___x_3340_);
v_i_3322_ = v___x_3341_;
v_b_3323_ = v___x_3339_;
v___y_3329_ = v_a_3336_;
goto _start;
}
else
{
lean_object* v_a_3343_; lean_object* v_a_3344_; lean_object* v___x_3346_; uint8_t v_isShared_3347_; uint8_t v_isSharedCheck_3351_; 
lean_dec_ref(v___y_3324_);
lean_dec_ref(v_b_3323_);
lean_dec_ref(v___x_3319_);
v_a_3343_ = lean_ctor_get(v___x_3334_, 0);
v_a_3344_ = lean_ctor_get(v___x_3334_, 1);
v_isSharedCheck_3351_ = !lean_is_exclusive(v___x_3334_);
if (v_isSharedCheck_3351_ == 0)
{
v___x_3346_ = v___x_3334_;
v_isShared_3347_ = v_isSharedCheck_3351_;
goto v_resetjp_3345_;
}
else
{
lean_inc(v_a_3344_);
lean_inc(v_a_3343_);
lean_dec(v___x_3334_);
v___x_3346_ = lean_box(0);
v_isShared_3347_ = v_isSharedCheck_3351_;
goto v_resetjp_3345_;
}
v_resetjp_3345_:
{
lean_object* v___x_3349_; 
if (v_isShared_3347_ == 0)
{
v___x_3349_ = v___x_3346_;
goto v_reusejp_3348_;
}
else
{
lean_object* v_reuseFailAlloc_3350_; 
v_reuseFailAlloc_3350_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3350_, 0, v_a_3343_);
lean_ctor_set(v_reuseFailAlloc_3350_, 1, v_a_3344_);
v___x_3349_ = v_reuseFailAlloc_3350_;
goto v_reusejp_3348_;
}
v_reusejp_3348_:
{
return v___x_3349_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildExtraDepTargets_spec__1___boxed(lean_object* v___x_3352_, lean_object* v_as_3353_, lean_object* v_sz_3354_, lean_object* v_i_3355_, lean_object* v_b_3356_, lean_object* v___y_3357_, lean_object* v___y_3358_, lean_object* v___y_3359_, lean_object* v___y_3360_, lean_object* v___y_3361_, lean_object* v___y_3362_, lean_object* v___y_3363_){
_start:
{
size_t v_sz_boxed_3364_; size_t v_i_boxed_3365_; lean_object* v_res_3366_; 
v_sz_boxed_3364_ = lean_unbox_usize(v_sz_3354_);
lean_dec(v_sz_3354_);
v_i_boxed_3365_ = lean_unbox_usize(v_i_3355_);
lean_dec(v_i_3355_);
v_res_3366_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildExtraDepTargets_spec__1(v___x_3352_, v_as_3353_, v_sz_boxed_3364_, v_i_boxed_3365_, v_b_3356_, v___y_3357_, v___y_3358_, v___y_3359_, v___y_3360_, v___y_3361_, v___y_3362_);
lean_dec_ref(v___y_3361_);
lean_dec(v___y_3360_);
lean_dec(v___y_3359_);
lean_dec(v___y_3358_);
lean_dec_ref(v_as_3353_);
return v_res_3366_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildExtraDepTargets_spec__0(lean_object* v___x_3367_, lean_object* v_as_3368_, size_t v_sz_3369_, size_t v_i_3370_, lean_object* v_b_3371_, lean_object* v___y_3372_, lean_object* v___y_3373_, lean_object* v___y_3374_, lean_object* v___y_3375_, lean_object* v___y_3376_, lean_object* v___y_3377_){
_start:
{
uint8_t v___x_3379_; 
v___x_3379_ = lean_usize_dec_lt(v_i_3370_, v_sz_3369_);
if (v___x_3379_ == 0)
{
lean_object* v___x_3380_; 
lean_dec_ref(v___y_3372_);
lean_dec_ref(v___x_3367_);
v___x_3380_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3380_, 0, v_b_3371_);
lean_ctor_set(v___x_3380_, 1, v___y_3377_);
return v___x_3380_;
}
else
{
lean_object* v_a_3381_; lean_object* v___x_3382_; 
v_a_3381_ = lean_array_uget_borrowed(v_as_3368_, v_i_3370_);
lean_inc_ref(v___y_3372_);
lean_inc(v_a_3381_);
lean_inc_ref(v___x_3367_);
v___x_3382_ = l_Lake_Package_fetchTargetJob(v___x_3367_, v_a_3381_, v___y_3372_, v___y_3373_, v___y_3374_, v___y_3375_, v___y_3376_, v___y_3377_);
if (lean_obj_tag(v___x_3382_) == 0)
{
lean_object* v_a_3383_; lean_object* v_a_3384_; lean_object* v___x_3385_; size_t v___x_3386_; size_t v___x_3387_; 
v_a_3383_ = lean_ctor_get(v___x_3382_, 0);
lean_inc(v_a_3383_);
v_a_3384_ = lean_ctor_get(v___x_3382_, 1);
lean_inc(v_a_3384_);
lean_dec_ref_known(v___x_3382_, 2);
v___x_3385_ = l_Lake_Job_mix___redArg(v_b_3371_, v_a_3383_);
v___x_3386_ = ((size_t)1ULL);
v___x_3387_ = lean_usize_add(v_i_3370_, v___x_3386_);
v_i_3370_ = v___x_3387_;
v_b_3371_ = v___x_3385_;
v___y_3377_ = v_a_3384_;
goto _start;
}
else
{
lean_object* v_a_3389_; lean_object* v_a_3390_; lean_object* v___x_3392_; uint8_t v_isShared_3393_; uint8_t v_isSharedCheck_3397_; 
lean_dec_ref(v___y_3372_);
lean_dec_ref(v_b_3371_);
lean_dec_ref(v___x_3367_);
v_a_3389_ = lean_ctor_get(v___x_3382_, 0);
v_a_3390_ = lean_ctor_get(v___x_3382_, 1);
v_isSharedCheck_3397_ = !lean_is_exclusive(v___x_3382_);
if (v_isSharedCheck_3397_ == 0)
{
v___x_3392_ = v___x_3382_;
v_isShared_3393_ = v_isSharedCheck_3397_;
goto v_resetjp_3391_;
}
else
{
lean_inc(v_a_3390_);
lean_inc(v_a_3389_);
lean_dec(v___x_3382_);
v___x_3392_ = lean_box(0);
v_isShared_3393_ = v_isSharedCheck_3397_;
goto v_resetjp_3391_;
}
v_resetjp_3391_:
{
lean_object* v___x_3395_; 
if (v_isShared_3393_ == 0)
{
v___x_3395_ = v___x_3392_;
goto v_reusejp_3394_;
}
else
{
lean_object* v_reuseFailAlloc_3396_; 
v_reuseFailAlloc_3396_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3396_, 0, v_a_3389_);
lean_ctor_set(v_reuseFailAlloc_3396_, 1, v_a_3390_);
v___x_3395_ = v_reuseFailAlloc_3396_;
goto v_reusejp_3394_;
}
v_reusejp_3394_:
{
return v___x_3395_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildExtraDepTargets_spec__0___boxed(lean_object* v___x_3398_, lean_object* v_as_3399_, lean_object* v_sz_3400_, lean_object* v_i_3401_, lean_object* v_b_3402_, lean_object* v___y_3403_, lean_object* v___y_3404_, lean_object* v___y_3405_, lean_object* v___y_3406_, lean_object* v___y_3407_, lean_object* v___y_3408_, lean_object* v___y_3409_){
_start:
{
size_t v_sz_boxed_3410_; size_t v_i_boxed_3411_; lean_object* v_res_3412_; 
v_sz_boxed_3410_ = lean_unbox_usize(v_sz_3400_);
lean_dec(v_sz_3400_);
v_i_boxed_3411_ = lean_unbox_usize(v_i_3401_);
lean_dec(v_i_3401_);
v_res_3412_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildExtraDepTargets_spec__0(v___x_3398_, v_as_3399_, v_sz_boxed_3410_, v_i_boxed_3411_, v_b_3402_, v___y_3403_, v___y_3404_, v___y_3405_, v___y_3406_, v___y_3407_, v___y_3408_);
lean_dec_ref(v___y_3407_);
lean_dec(v___y_3406_);
lean_dec(v___y_3405_);
lean_dec(v___y_3404_);
lean_dec_ref(v_as_3399_);
return v_res_3412_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildExtraDepTargets(lean_object* v_self_3415_, lean_object* v_a_3416_, lean_object* v_a_3417_, lean_object* v_a_3418_, lean_object* v_a_3419_, lean_object* v_a_3420_, lean_object* v_a_3421_){
_start:
{
lean_object* v_pkg_3423_; lean_object* v_name_3424_; lean_object* v_config_3425_; lean_object* v_baseName_3426_; lean_object* v_keyName_3427_; uint8_t v___x_3428_; lean_object* v___x_3429_; lean_object* v___x_3430_; lean_object* v___x_3431_; lean_object* v___x_3432_; lean_object* v___x_3433_; lean_object* v___x_3434_; lean_object* v___x_3435_; lean_object* v___x_3436_; lean_object* v___x_3437_; lean_object* v___x_3438_; lean_object* v___x_3439_; uint8_t v___x_3440_; uint8_t v___x_3441_; lean_object* v___x_3442_; lean_object* v___x_3443_; lean_object* v___x_3444_; lean_object* v___x_3445_; lean_object* v___x_3446_; lean_object* v_job_3447_; lean_object* v___x_3448_; lean_object* v___x_3449_; lean_object* v___x_3450_; lean_object* v___x_3451_; lean_object* v___x_3452_; 
v_pkg_3423_ = lean_ctor_get(v_self_3415_, 0);
lean_inc_ref_n(v_pkg_3423_, 2);
v_name_3424_ = lean_ctor_get(v_self_3415_, 1);
lean_inc(v_name_3424_);
v_config_3425_ = lean_ctor_get(v_self_3415_, 2);
lean_inc(v_config_3425_);
lean_dec_ref(v_self_3415_);
v_baseName_3426_ = lean_ctor_get(v_pkg_3423_, 1);
v_keyName_3427_ = lean_ctor_get(v_pkg_3423_, 2);
v___x_3428_ = 1;
lean_inc(v_baseName_3426_);
v___x_3429_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_baseName_3426_, v___x_3428_);
v___x_3430_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildExtraDepTargets___closed__0));
v___x_3431_ = lean_string_append(v___x_3429_, v___x_3430_);
v___x_3432_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_name_3424_, v___x_3428_);
v___x_3433_ = lean_string_append(v___x_3431_, v___x_3432_);
lean_dec_ref(v___x_3432_);
v___x_3434_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildExtraDepTargets___closed__1));
v___x_3435_ = lean_string_append(v___x_3433_, v___x_3434_);
v___x_3436_ = lean_box(0);
v___x_3437_ = lean_obj_once(&l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___closed__0, &l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___closed__0_once, _init_l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___closed__0);
v___x_3438_ = lean_unsigned_to_nat(0u);
v___x_3439_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildLean___closed__0));
v___x_3440_ = 0;
v___x_3441_ = 0;
v___x_3442_ = l_Lake_BuildTrace_nil(v___x_3435_);
v___x_3443_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_3443_, 0, v___x_3439_);
lean_ctor_set(v___x_3443_, 1, v___x_3442_);
lean_ctor_set(v___x_3443_, 2, v___x_3438_);
lean_ctor_set_uint8(v___x_3443_, sizeof(void*)*3, v___x_3440_);
lean_ctor_set_uint8(v___x_3443_, sizeof(void*)*3 + 1, v___x_3441_);
v___x_3444_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3444_, 0, v___x_3436_);
lean_ctor_set(v___x_3444_, 1, v___x_3443_);
v___x_3445_ = lean_task_pure(v___x_3444_);
v___x_3446_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recCollectLocalModules___lam__0___closed__0));
v_job_3447_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_job_3447_, 0, v___x_3445_);
lean_ctor_set(v_job_3447_, 1, v___x_3437_);
lean_ctor_set(v_job_3447_, 2, v___x_3446_);
lean_ctor_set_uint8(v_job_3447_, sizeof(void*)*3, v___x_3441_);
v___x_3448_ = l_Lake_Package_extraDepFacet;
lean_inc(v_keyName_3427_);
v___x_3449_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3449_, 0, v_keyName_3427_);
v___x_3450_ = l_Lake_Package_keyword;
v___x_3451_ = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(v___x_3451_, 0, v___x_3449_);
lean_ctor_set(v___x_3451_, 1, v___x_3450_);
lean_ctor_set(v___x_3451_, 2, v_pkg_3423_);
lean_ctor_set(v___x_3451_, 3, v___x_3448_);
lean_inc_ref(v_a_3416_);
lean_inc_ref(v_a_3420_);
lean_inc(v_a_3419_);
lean_inc(v_a_3418_);
lean_inc(v_a_3417_);
v___x_3452_ = lean_apply_7(v_a_3416_, v___x_3451_, v_a_3417_, v_a_3418_, v_a_3419_, v_a_3420_, v_a_3421_, lean_box(0));
if (lean_obj_tag(v___x_3452_) == 0)
{
lean_object* v_a_3453_; lean_object* v_a_3454_; lean_object* v_needs_3455_; lean_object* v_extraDepTargets_3456_; lean_object* v___x_3457_; size_t v_sz_3458_; size_t v___x_3459_; lean_object* v___x_3460_; 
v_a_3453_ = lean_ctor_get(v___x_3452_, 0);
lean_inc(v_a_3453_);
v_a_3454_ = lean_ctor_get(v___x_3452_, 1);
lean_inc(v_a_3454_);
lean_dec_ref_known(v___x_3452_, 2);
v_needs_3455_ = lean_ctor_get(v_config_3425_, 5);
lean_inc_ref(v_needs_3455_);
v_extraDepTargets_3456_ = lean_ctor_get(v_config_3425_, 6);
lean_inc_ref(v_extraDepTargets_3456_);
lean_dec(v_config_3425_);
v___x_3457_ = l_Lake_Job_mix___redArg(v_job_3447_, v_a_3453_);
v_sz_3458_ = lean_array_size(v_extraDepTargets_3456_);
v___x_3459_ = ((size_t)0ULL);
lean_inc_ref(v_a_3416_);
lean_inc_ref(v_pkg_3423_);
v___x_3460_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildExtraDepTargets_spec__0(v_pkg_3423_, v_extraDepTargets_3456_, v_sz_3458_, v___x_3459_, v___x_3457_, v_a_3416_, v_a_3417_, v_a_3418_, v_a_3419_, v_a_3420_, v_a_3454_);
lean_dec_ref(v_extraDepTargets_3456_);
if (lean_obj_tag(v___x_3460_) == 0)
{
lean_object* v_a_3461_; lean_object* v_a_3462_; size_t v_sz_3463_; lean_object* v___x_3464_; 
v_a_3461_ = lean_ctor_get(v___x_3460_, 0);
lean_inc(v_a_3461_);
v_a_3462_ = lean_ctor_get(v___x_3460_, 1);
lean_inc(v_a_3462_);
lean_dec_ref_known(v___x_3460_, 2);
v_sz_3463_ = lean_array_size(v_needs_3455_);
v___x_3464_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildExtraDepTargets_spec__1(v_pkg_3423_, v_needs_3455_, v_sz_3463_, v___x_3459_, v_a_3461_, v_a_3416_, v_a_3417_, v_a_3418_, v_a_3419_, v_a_3420_, v_a_3462_);
lean_dec_ref(v_needs_3455_);
return v___x_3464_;
}
else
{
lean_dec_ref(v_needs_3455_);
lean_dec_ref(v_pkg_3423_);
lean_dec_ref(v_a_3416_);
return v___x_3460_;
}
}
else
{
lean_dec_ref_known(v_job_3447_, 3);
lean_dec(v_config_3425_);
lean_dec_ref(v_pkg_3423_);
lean_dec_ref(v_a_3416_);
return v___x_3452_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildExtraDepTargets___boxed(lean_object* v_self_3465_, lean_object* v_a_3466_, lean_object* v_a_3467_, lean_object* v_a_3468_, lean_object* v_a_3469_, lean_object* v_a_3470_, lean_object* v_a_3471_, lean_object* v_a_3472_){
_start:
{
lean_object* v_res_3473_; 
v_res_3473_ = l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildExtraDepTargets(v_self_3465_, v_a_3466_, v_a_3467_, v_a_3468_, v_a_3469_, v_a_3470_, v_a_3471_);
lean_dec_ref(v_a_3470_);
lean_dec(v_a_3469_);
lean_dec(v_a_3468_);
lean_dec(v_a_3467_);
return v_res_3473_;
}
}
static lean_object* _init_l_Lake_LeanLib_extraDepFacetConfig___closed__1(void){
_start:
{
lean_object* v___f_3475_; uint8_t v___x_3476_; lean_object* v___x_3477_; lean_object* v___x_3478_; lean_object* v___x_3479_; lean_object* v___x_3480_; 
v___f_3475_ = ((lean_object*)(l_Lake_LeanLib_leanArtsFacetConfig___closed__0));
v___x_3476_ = 1;
v___x_3477_ = l_Lake_instDataKindUnit;
v___x_3478_ = ((lean_object*)(l_Lake_LeanLib_extraDepFacetConfig___closed__0));
v___x_3479_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig___closed__2));
v___x_3480_ = lean_alloc_ctor(0, 4, 2);
lean_ctor_set(v___x_3480_, 0, v___x_3479_);
lean_ctor_set(v___x_3480_, 1, v___x_3478_);
lean_ctor_set(v___x_3480_, 2, v___x_3477_);
lean_ctor_set(v___x_3480_, 3, v___f_3475_);
lean_ctor_set_uint8(v___x_3480_, sizeof(void*)*4, v___x_3476_);
lean_ctor_set_uint8(v___x_3480_, sizeof(void*)*4 + 1, v___x_3476_);
return v___x_3480_;
}
}
static lean_object* _init_l_Lake_LeanLib_extraDepFacetConfig(void){
_start:
{
lean_object* v___x_3481_; 
v___x_3481_ = lean_obj_once(&l_Lake_LeanLib_extraDepFacetConfig___closed__1, &l_Lake_LeanLib_extraDepFacetConfig___closed__1_once, _init_l_Lake_LeanLib_extraDepFacetConfig___closed__1);
return v___x_3481_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildDefaultFacets_spec__0(lean_object* v_self_3482_, size_t v_sz_3483_, size_t v_i_3484_, lean_object* v_bs_3485_, lean_object* v___y_3486_, lean_object* v___y_3487_, lean_object* v___y_3488_, lean_object* v___y_3489_, lean_object* v___y_3490_, lean_object* v___y_3491_){
_start:
{
uint8_t v___x_3493_; 
v___x_3493_ = lean_usize_dec_lt(v_i_3484_, v_sz_3483_);
if (v___x_3493_ == 0)
{
lean_object* v___x_3494_; lean_object* v___x_3495_; 
lean_dec_ref(v___y_3486_);
lean_dec_ref(v_self_3482_);
v___x_3494_ = l_unsafeCast___redArg(v_bs_3485_);
lean_dec_ref(v_bs_3485_);
v___x_3495_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3495_, 0, v___x_3494_);
lean_ctor_set(v___x_3495_, 1, v___y_3491_);
return v___x_3495_;
}
else
{
lean_object* v_pkg_3496_; lean_object* v_name_3497_; lean_object* v_keyName_3498_; lean_object* v_v_3499_; lean_object* v___x_3500_; lean_object* v_bs_x27_3501_; lean_object* v___x_3502_; lean_object* v___x_3503_; lean_object* v___x_3504_; lean_object* v___x_3505_; lean_object* v___x_3506_; 
v_pkg_3496_ = lean_ctor_get(v_self_3482_, 0);
v_name_3497_ = lean_ctor_get(v_self_3482_, 1);
v_keyName_3498_ = lean_ctor_get(v_pkg_3496_, 2);
v_v_3499_ = lean_array_uget(v_bs_3485_, v_i_3484_);
v___x_3500_ = lean_unsigned_to_nat(0u);
v_bs_x27_3501_ = lean_array_uset(v_bs_3485_, v_i_3484_, v___x_3500_);
v___x_3502_ = l_unsafeCast___redArg(v_v_3499_);
lean_dec(v_v_3499_);
lean_inc(v_name_3497_);
lean_inc(v_keyName_3498_);
v___x_3503_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_3503_, 0, v_keyName_3498_);
lean_ctor_set(v___x_3503_, 1, v_name_3497_);
v___x_3504_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig___closed__2));
lean_inc_ref(v_self_3482_);
v___x_3505_ = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(v___x_3505_, 0, v___x_3503_);
lean_ctor_set(v___x_3505_, 1, v___x_3504_);
lean_ctor_set(v___x_3505_, 2, v_self_3482_);
lean_ctor_set(v___x_3505_, 3, v___x_3502_);
lean_inc_ref(v___y_3486_);
lean_inc_ref(v___y_3490_);
lean_inc(v___y_3489_);
lean_inc(v___y_3488_);
lean_inc(v___y_3487_);
v___x_3506_ = lean_apply_7(v___y_3486_, v___x_3505_, v___y_3487_, v___y_3488_, v___y_3489_, v___y_3490_, v___y_3491_, lean_box(0));
if (lean_obj_tag(v___x_3506_) == 0)
{
lean_object* v_a_3507_; lean_object* v_a_3508_; lean_object* v___x_3509_; size_t v___x_3510_; size_t v___x_3511_; lean_object* v___x_3512_; lean_object* v___x_3513_; 
v_a_3507_ = lean_ctor_get(v___x_3506_, 0);
lean_inc(v_a_3507_);
v_a_3508_ = lean_ctor_get(v___x_3506_, 1);
lean_inc(v_a_3508_);
lean_dec_ref_known(v___x_3506_, 2);
v___x_3509_ = l_Lake_Job_toOpaque___redArg(v_a_3507_);
v___x_3510_ = ((size_t)1ULL);
v___x_3511_ = lean_usize_add(v_i_3484_, v___x_3510_);
v___x_3512_ = l_unsafeCast___redArg(v___x_3509_);
lean_dec_ref(v___x_3509_);
v___x_3513_ = lean_array_uset(v_bs_x27_3501_, v_i_3484_, v___x_3512_);
v_i_3484_ = v___x_3511_;
v_bs_3485_ = v___x_3513_;
v___y_3491_ = v_a_3508_;
goto _start;
}
else
{
lean_object* v_a_3515_; lean_object* v_a_3516_; lean_object* v___x_3518_; uint8_t v_isShared_3519_; uint8_t v_isSharedCheck_3523_; 
lean_dec_ref(v_bs_x27_3501_);
lean_dec_ref(v___y_3486_);
lean_dec_ref(v_self_3482_);
v_a_3515_ = lean_ctor_get(v___x_3506_, 0);
v_a_3516_ = lean_ctor_get(v___x_3506_, 1);
v_isSharedCheck_3523_ = !lean_is_exclusive(v___x_3506_);
if (v_isSharedCheck_3523_ == 0)
{
v___x_3518_ = v___x_3506_;
v_isShared_3519_ = v_isSharedCheck_3523_;
goto v_resetjp_3517_;
}
else
{
lean_inc(v_a_3516_);
lean_inc(v_a_3515_);
lean_dec(v___x_3506_);
v___x_3518_ = lean_box(0);
v_isShared_3519_ = v_isSharedCheck_3523_;
goto v_resetjp_3517_;
}
v_resetjp_3517_:
{
lean_object* v___x_3521_; 
if (v_isShared_3519_ == 0)
{
v___x_3521_ = v___x_3518_;
goto v_reusejp_3520_;
}
else
{
lean_object* v_reuseFailAlloc_3522_; 
v_reuseFailAlloc_3522_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3522_, 0, v_a_3515_);
lean_ctor_set(v_reuseFailAlloc_3522_, 1, v_a_3516_);
v___x_3521_ = v_reuseFailAlloc_3522_;
goto v_reusejp_3520_;
}
v_reusejp_3520_:
{
return v___x_3521_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildDefaultFacets_spec__0___boxed(lean_object* v_self_3524_, lean_object* v_sz_3525_, lean_object* v_i_3526_, lean_object* v_bs_3527_, lean_object* v___y_3528_, lean_object* v___y_3529_, lean_object* v___y_3530_, lean_object* v___y_3531_, lean_object* v___y_3532_, lean_object* v___y_3533_, lean_object* v___y_3534_){
_start:
{
size_t v_sz_boxed_3535_; size_t v_i_boxed_3536_; lean_object* v_res_3537_; 
v_sz_boxed_3535_ = lean_unbox_usize(v_sz_3525_);
lean_dec(v_sz_3525_);
v_i_boxed_3536_ = lean_unbox_usize(v_i_3526_);
lean_dec(v_i_3526_);
v_res_3537_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildDefaultFacets_spec__0(v_self_3524_, v_sz_boxed_3535_, v_i_boxed_3536_, v_bs_3527_, v___y_3528_, v___y_3529_, v___y_3530_, v___y_3531_, v___y_3532_, v___y_3533_);
lean_dec_ref(v___y_3532_);
lean_dec(v___y_3531_);
lean_dec(v___y_3530_);
lean_dec(v___y_3529_);
return v_res_3537_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildDefaultFacets(lean_object* v_self_3539_, lean_object* v_a_3540_, lean_object* v_a_3541_, lean_object* v_a_3542_, lean_object* v_a_3543_, lean_object* v_a_3544_, lean_object* v_a_3545_){
_start:
{
lean_object* v_config_3547_; lean_object* v_defaultFacets_3548_; size_t v_sz_3549_; lean_object* v___x_3550_; lean_object* v___x_3551_; lean_object* v___x_3552_; lean_object* v___x_3553_; lean_object* v___x_2470__overap_3554_; lean_object* v___x_3555_; 
v_config_3547_ = lean_ctor_get(v_self_3539_, 2);
v_defaultFacets_3548_ = lean_ctor_get(v_config_3547_, 7);
v_sz_3549_ = lean_array_size(v_defaultFacets_3548_);
v___x_3550_ = l_unsafeCast___redArg(v_defaultFacets_3548_);
v___x_3551_ = lean_box_usize(v_sz_3549_);
v___x_3552_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildStatic___at___00Lake_LeanLib_staticFacetConfig_spec__0_spec__4___boxed__const__1));
v___x_3553_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildDefaultFacets_spec__0___boxed), 11, 4);
lean_closure_set(v___x_3553_, 0, v_self_3539_);
lean_closure_set(v___x_3553_, 1, v___x_3551_);
lean_closure_set(v___x_3553_, 2, v___x_3552_);
lean_closure_set(v___x_3553_, 3, v___x_3550_);
v___x_2470__overap_3554_ = l_unsafeCast___redArg(v___x_3553_);
lean_dec_ref(v___x_3553_);
lean_inc_ref(v_a_3544_);
lean_inc(v_a_3543_);
lean_inc(v_a_3542_);
lean_inc(v_a_3541_);
v___x_3555_ = lean_apply_7(v___x_2470__overap_3554_, v_a_3540_, v_a_3541_, v_a_3542_, v_a_3543_, v_a_3544_, v_a_3545_, lean_box(0));
if (lean_obj_tag(v___x_3555_) == 0)
{
lean_object* v_a_3556_; lean_object* v_a_3557_; lean_object* v___x_3559_; uint8_t v_isShared_3560_; uint8_t v_isSharedCheck_3566_; 
v_a_3556_ = lean_ctor_get(v___x_3555_, 0);
v_a_3557_ = lean_ctor_get(v___x_3555_, 1);
v_isSharedCheck_3566_ = !lean_is_exclusive(v___x_3555_);
if (v_isSharedCheck_3566_ == 0)
{
v___x_3559_ = v___x_3555_;
v_isShared_3560_ = v_isSharedCheck_3566_;
goto v_resetjp_3558_;
}
else
{
lean_inc(v_a_3557_);
lean_inc(v_a_3556_);
lean_dec(v___x_3555_);
v___x_3559_ = lean_box(0);
v_isShared_3560_ = v_isSharedCheck_3566_;
goto v_resetjp_3558_;
}
v_resetjp_3558_:
{
lean_object* v___x_3561_; lean_object* v___x_3562_; lean_object* v___x_3564_; 
v___x_3561_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildDefaultFacets___closed__0));
v___x_3562_ = l_Lake_Job_mixArray___redArg(v_a_3556_, v___x_3561_);
lean_dec(v_a_3556_);
if (v_isShared_3560_ == 0)
{
lean_ctor_set(v___x_3559_, 0, v___x_3562_);
v___x_3564_ = v___x_3559_;
goto v_reusejp_3563_;
}
else
{
lean_object* v_reuseFailAlloc_3565_; 
v_reuseFailAlloc_3565_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3565_, 0, v___x_3562_);
lean_ctor_set(v_reuseFailAlloc_3565_, 1, v_a_3557_);
v___x_3564_ = v_reuseFailAlloc_3565_;
goto v_reusejp_3563_;
}
v_reusejp_3563_:
{
return v___x_3564_;
}
}
}
else
{
lean_object* v_a_3567_; lean_object* v_a_3568_; lean_object* v___x_3570_; uint8_t v_isShared_3571_; uint8_t v_isSharedCheck_3575_; 
v_a_3567_ = lean_ctor_get(v___x_3555_, 0);
v_a_3568_ = lean_ctor_get(v___x_3555_, 1);
v_isSharedCheck_3575_ = !lean_is_exclusive(v___x_3555_);
if (v_isSharedCheck_3575_ == 0)
{
v___x_3570_ = v___x_3555_;
v_isShared_3571_ = v_isSharedCheck_3575_;
goto v_resetjp_3569_;
}
else
{
lean_inc(v_a_3568_);
lean_inc(v_a_3567_);
lean_dec(v___x_3555_);
v___x_3570_ = lean_box(0);
v_isShared_3571_ = v_isSharedCheck_3575_;
goto v_resetjp_3569_;
}
v_resetjp_3569_:
{
lean_object* v___x_3573_; 
if (v_isShared_3571_ == 0)
{
v___x_3573_ = v___x_3570_;
goto v_reusejp_3572_;
}
else
{
lean_object* v_reuseFailAlloc_3574_; 
v_reuseFailAlloc_3574_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3574_, 0, v_a_3567_);
lean_ctor_set(v_reuseFailAlloc_3574_, 1, v_a_3568_);
v___x_3573_ = v_reuseFailAlloc_3574_;
goto v_reusejp_3572_;
}
v_reusejp_3572_:
{
return v___x_3573_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildDefaultFacets___boxed(lean_object* v_self_3576_, lean_object* v_a_3577_, lean_object* v_a_3578_, lean_object* v_a_3579_, lean_object* v_a_3580_, lean_object* v_a_3581_, lean_object* v_a_3582_, lean_object* v_a_3583_){
_start:
{
lean_object* v_res_3584_; 
v_res_3584_ = l___private_Lake_Build_Library_0__Lake_LeanLib_recBuildDefaultFacets(v_self_3576_, v_a_3577_, v_a_3578_, v_a_3579_, v_a_3580_, v_a_3581_, v_a_3582_);
lean_dec_ref(v_a_3581_);
lean_dec(v_a_3580_);
lean_dec(v_a_3579_);
lean_dec(v_a_3578_);
return v_res_3584_;
}
}
static lean_object* _init_l_Lake_LeanLib_defaultFacetConfig___closed__1(void){
_start:
{
lean_object* v___f_3586_; uint8_t v___x_3587_; lean_object* v___x_3588_; lean_object* v___x_3589_; lean_object* v___x_3590_; lean_object* v___x_3591_; 
v___f_3586_ = ((lean_object*)(l_Lake_LeanLib_leanArtsFacetConfig___closed__0));
v___x_3587_ = 1;
v___x_3588_ = l_Lake_instDataKindUnit;
v___x_3589_ = ((lean_object*)(l_Lake_LeanLib_defaultFacetConfig___closed__0));
v___x_3590_ = ((lean_object*)(l___private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig___closed__2));
v___x_3591_ = lean_alloc_ctor(0, 4, 2);
lean_ctor_set(v___x_3591_, 0, v___x_3590_);
lean_ctor_set(v___x_3591_, 1, v___x_3589_);
lean_ctor_set(v___x_3591_, 2, v___x_3588_);
lean_ctor_set(v___x_3591_, 3, v___f_3586_);
lean_ctor_set_uint8(v___x_3591_, sizeof(void*)*4, v___x_3587_);
lean_ctor_set_uint8(v___x_3591_, sizeof(void*)*4 + 1, v___x_3587_);
return v___x_3591_;
}
}
static lean_object* _init_l_Lake_LeanLib_defaultFacetConfig(void){
_start:
{
lean_object* v___x_3592_; 
v___x_3592_ = lean_obj_once(&l_Lake_LeanLib_defaultFacetConfig___closed__1, &l_Lake_LeanLib_defaultFacetConfig___closed__1_once, _init_l_Lake_LeanLib_defaultFacetConfig___closed__1);
return v___x_3592_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lake_LeanLib_initFacetConfigs_spec__0___redArg(lean_object* v_k_3593_, lean_object* v_v_3594_, lean_object* v_t_3595_){
_start:
{
if (lean_obj_tag(v_t_3595_) == 0)
{
lean_object* v_size_3596_; lean_object* v_k_3597_; lean_object* v_v_3598_; lean_object* v_l_3599_; lean_object* v_r_3600_; lean_object* v___x_3602_; uint8_t v_isShared_3603_; uint8_t v_isSharedCheck_3880_; 
v_size_3596_ = lean_ctor_get(v_t_3595_, 0);
v_k_3597_ = lean_ctor_get(v_t_3595_, 1);
v_v_3598_ = lean_ctor_get(v_t_3595_, 2);
v_l_3599_ = lean_ctor_get(v_t_3595_, 3);
v_r_3600_ = lean_ctor_get(v_t_3595_, 4);
v_isSharedCheck_3880_ = !lean_is_exclusive(v_t_3595_);
if (v_isSharedCheck_3880_ == 0)
{
v___x_3602_ = v_t_3595_;
v_isShared_3603_ = v_isSharedCheck_3880_;
goto v_resetjp_3601_;
}
else
{
lean_inc(v_r_3600_);
lean_inc(v_l_3599_);
lean_inc(v_v_3598_);
lean_inc(v_k_3597_);
lean_inc(v_size_3596_);
lean_dec(v_t_3595_);
v___x_3602_ = lean_box(0);
v_isShared_3603_ = v_isSharedCheck_3880_;
goto v_resetjp_3601_;
}
v_resetjp_3601_:
{
uint8_t v___x_3604_; 
v___x_3604_ = l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(v_k_3593_, v_k_3597_);
switch(v___x_3604_)
{
case 0:
{
lean_object* v_impl_3605_; lean_object* v___x_3606_; 
lean_dec(v_size_3596_);
v_impl_3605_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lake_LeanLib_initFacetConfigs_spec__0___redArg(v_k_3593_, v_v_3594_, v_l_3599_);
v___x_3606_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_r_3600_) == 0)
{
lean_object* v_size_3607_; lean_object* v_size_3608_; lean_object* v_k_3609_; lean_object* v_v_3610_; lean_object* v_l_3611_; lean_object* v_r_3612_; lean_object* v___x_3613_; lean_object* v___x_3614_; uint8_t v___x_3615_; 
v_size_3607_ = lean_ctor_get(v_r_3600_, 0);
v_size_3608_ = lean_ctor_get(v_impl_3605_, 0);
lean_inc(v_size_3608_);
v_k_3609_ = lean_ctor_get(v_impl_3605_, 1);
lean_inc(v_k_3609_);
v_v_3610_ = lean_ctor_get(v_impl_3605_, 2);
lean_inc(v_v_3610_);
v_l_3611_ = lean_ctor_get(v_impl_3605_, 3);
lean_inc(v_l_3611_);
v_r_3612_ = lean_ctor_get(v_impl_3605_, 4);
lean_inc(v_r_3612_);
v___x_3613_ = lean_unsigned_to_nat(3u);
v___x_3614_ = lean_nat_mul(v___x_3613_, v_size_3607_);
v___x_3615_ = lean_nat_dec_lt(v___x_3614_, v_size_3608_);
lean_dec(v___x_3614_);
if (v___x_3615_ == 0)
{
lean_object* v___x_3616_; lean_object* v___x_3617_; lean_object* v___x_3619_; 
lean_dec(v_r_3612_);
lean_dec(v_l_3611_);
lean_dec(v_v_3610_);
lean_dec(v_k_3609_);
v___x_3616_ = lean_nat_add(v___x_3606_, v_size_3608_);
lean_dec(v_size_3608_);
v___x_3617_ = lean_nat_add(v___x_3616_, v_size_3607_);
lean_dec(v___x_3616_);
if (v_isShared_3603_ == 0)
{
lean_ctor_set(v___x_3602_, 3, v_impl_3605_);
lean_ctor_set(v___x_3602_, 0, v___x_3617_);
v___x_3619_ = v___x_3602_;
goto v_reusejp_3618_;
}
else
{
lean_object* v_reuseFailAlloc_3620_; 
v_reuseFailAlloc_3620_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3620_, 0, v___x_3617_);
lean_ctor_set(v_reuseFailAlloc_3620_, 1, v_k_3597_);
lean_ctor_set(v_reuseFailAlloc_3620_, 2, v_v_3598_);
lean_ctor_set(v_reuseFailAlloc_3620_, 3, v_impl_3605_);
lean_ctor_set(v_reuseFailAlloc_3620_, 4, v_r_3600_);
v___x_3619_ = v_reuseFailAlloc_3620_;
goto v_reusejp_3618_;
}
v_reusejp_3618_:
{
return v___x_3619_;
}
}
else
{
lean_object* v___x_3622_; uint8_t v_isShared_3623_; uint8_t v_isSharedCheck_3686_; 
v_isSharedCheck_3686_ = !lean_is_exclusive(v_impl_3605_);
if (v_isSharedCheck_3686_ == 0)
{
lean_object* v_unused_3687_; lean_object* v_unused_3688_; lean_object* v_unused_3689_; lean_object* v_unused_3690_; lean_object* v_unused_3691_; 
v_unused_3687_ = lean_ctor_get(v_impl_3605_, 4);
lean_dec(v_unused_3687_);
v_unused_3688_ = lean_ctor_get(v_impl_3605_, 3);
lean_dec(v_unused_3688_);
v_unused_3689_ = lean_ctor_get(v_impl_3605_, 2);
lean_dec(v_unused_3689_);
v_unused_3690_ = lean_ctor_get(v_impl_3605_, 1);
lean_dec(v_unused_3690_);
v_unused_3691_ = lean_ctor_get(v_impl_3605_, 0);
lean_dec(v_unused_3691_);
v___x_3622_ = v_impl_3605_;
v_isShared_3623_ = v_isSharedCheck_3686_;
goto v_resetjp_3621_;
}
else
{
lean_dec(v_impl_3605_);
v___x_3622_ = lean_box(0);
v_isShared_3623_ = v_isSharedCheck_3686_;
goto v_resetjp_3621_;
}
v_resetjp_3621_:
{
lean_object* v_size_3624_; lean_object* v_size_3625_; lean_object* v_k_3626_; lean_object* v_v_3627_; lean_object* v_l_3628_; lean_object* v_r_3629_; lean_object* v___x_3630_; lean_object* v___x_3631_; uint8_t v___x_3632_; 
v_size_3624_ = lean_ctor_get(v_l_3611_, 0);
v_size_3625_ = lean_ctor_get(v_r_3612_, 0);
v_k_3626_ = lean_ctor_get(v_r_3612_, 1);
v_v_3627_ = lean_ctor_get(v_r_3612_, 2);
v_l_3628_ = lean_ctor_get(v_r_3612_, 3);
v_r_3629_ = lean_ctor_get(v_r_3612_, 4);
v___x_3630_ = lean_unsigned_to_nat(2u);
v___x_3631_ = lean_nat_mul(v___x_3630_, v_size_3624_);
v___x_3632_ = lean_nat_dec_lt(v_size_3625_, v___x_3631_);
lean_dec(v___x_3631_);
if (v___x_3632_ == 0)
{
lean_object* v___x_3634_; uint8_t v_isShared_3635_; uint8_t v_isSharedCheck_3661_; 
lean_inc(v_r_3629_);
lean_inc(v_l_3628_);
lean_inc(v_v_3627_);
lean_inc(v_k_3626_);
v_isSharedCheck_3661_ = !lean_is_exclusive(v_r_3612_);
if (v_isSharedCheck_3661_ == 0)
{
lean_object* v_unused_3662_; lean_object* v_unused_3663_; lean_object* v_unused_3664_; lean_object* v_unused_3665_; lean_object* v_unused_3666_; 
v_unused_3662_ = lean_ctor_get(v_r_3612_, 4);
lean_dec(v_unused_3662_);
v_unused_3663_ = lean_ctor_get(v_r_3612_, 3);
lean_dec(v_unused_3663_);
v_unused_3664_ = lean_ctor_get(v_r_3612_, 2);
lean_dec(v_unused_3664_);
v_unused_3665_ = lean_ctor_get(v_r_3612_, 1);
lean_dec(v_unused_3665_);
v_unused_3666_ = lean_ctor_get(v_r_3612_, 0);
lean_dec(v_unused_3666_);
v___x_3634_ = v_r_3612_;
v_isShared_3635_ = v_isSharedCheck_3661_;
goto v_resetjp_3633_;
}
else
{
lean_dec(v_r_3612_);
v___x_3634_ = lean_box(0);
v_isShared_3635_ = v_isSharedCheck_3661_;
goto v_resetjp_3633_;
}
v_resetjp_3633_:
{
lean_object* v___x_3636_; lean_object* v___x_3637_; lean_object* v___y_3639_; lean_object* v___y_3640_; lean_object* v___y_3641_; lean_object* v___x_3649_; lean_object* v___y_3651_; 
v___x_3636_ = lean_nat_add(v___x_3606_, v_size_3608_);
lean_dec(v_size_3608_);
v___x_3637_ = lean_nat_add(v___x_3636_, v_size_3607_);
lean_dec(v___x_3636_);
v___x_3649_ = lean_nat_add(v___x_3606_, v_size_3624_);
if (lean_obj_tag(v_l_3628_) == 0)
{
lean_object* v_size_3659_; 
v_size_3659_ = lean_ctor_get(v_l_3628_, 0);
lean_inc(v_size_3659_);
v___y_3651_ = v_size_3659_;
goto v___jp_3650_;
}
else
{
lean_object* v___x_3660_; 
v___x_3660_ = lean_unsigned_to_nat(0u);
v___y_3651_ = v___x_3660_;
goto v___jp_3650_;
}
v___jp_3638_:
{
lean_object* v___x_3642_; lean_object* v___x_3644_; 
v___x_3642_ = lean_nat_add(v___y_3640_, v___y_3641_);
lean_dec(v___y_3641_);
lean_dec(v___y_3640_);
if (v_isShared_3635_ == 0)
{
lean_ctor_set(v___x_3634_, 4, v_r_3600_);
lean_ctor_set(v___x_3634_, 3, v_r_3629_);
lean_ctor_set(v___x_3634_, 2, v_v_3598_);
lean_ctor_set(v___x_3634_, 1, v_k_3597_);
lean_ctor_set(v___x_3634_, 0, v___x_3642_);
v___x_3644_ = v___x_3634_;
goto v_reusejp_3643_;
}
else
{
lean_object* v_reuseFailAlloc_3648_; 
v_reuseFailAlloc_3648_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3648_, 0, v___x_3642_);
lean_ctor_set(v_reuseFailAlloc_3648_, 1, v_k_3597_);
lean_ctor_set(v_reuseFailAlloc_3648_, 2, v_v_3598_);
lean_ctor_set(v_reuseFailAlloc_3648_, 3, v_r_3629_);
lean_ctor_set(v_reuseFailAlloc_3648_, 4, v_r_3600_);
v___x_3644_ = v_reuseFailAlloc_3648_;
goto v_reusejp_3643_;
}
v_reusejp_3643_:
{
lean_object* v___x_3646_; 
if (v_isShared_3623_ == 0)
{
lean_ctor_set(v___x_3622_, 4, v___x_3644_);
lean_ctor_set(v___x_3622_, 3, v___y_3639_);
lean_ctor_set(v___x_3622_, 2, v_v_3627_);
lean_ctor_set(v___x_3622_, 1, v_k_3626_);
lean_ctor_set(v___x_3622_, 0, v___x_3637_);
v___x_3646_ = v___x_3622_;
goto v_reusejp_3645_;
}
else
{
lean_object* v_reuseFailAlloc_3647_; 
v_reuseFailAlloc_3647_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3647_, 0, v___x_3637_);
lean_ctor_set(v_reuseFailAlloc_3647_, 1, v_k_3626_);
lean_ctor_set(v_reuseFailAlloc_3647_, 2, v_v_3627_);
lean_ctor_set(v_reuseFailAlloc_3647_, 3, v___y_3639_);
lean_ctor_set(v_reuseFailAlloc_3647_, 4, v___x_3644_);
v___x_3646_ = v_reuseFailAlloc_3647_;
goto v_reusejp_3645_;
}
v_reusejp_3645_:
{
return v___x_3646_;
}
}
}
v___jp_3650_:
{
lean_object* v___x_3652_; lean_object* v___x_3654_; 
v___x_3652_ = lean_nat_add(v___x_3649_, v___y_3651_);
lean_dec(v___y_3651_);
lean_dec(v___x_3649_);
if (v_isShared_3603_ == 0)
{
lean_ctor_set(v___x_3602_, 4, v_l_3628_);
lean_ctor_set(v___x_3602_, 3, v_l_3611_);
lean_ctor_set(v___x_3602_, 2, v_v_3610_);
lean_ctor_set(v___x_3602_, 1, v_k_3609_);
lean_ctor_set(v___x_3602_, 0, v___x_3652_);
v___x_3654_ = v___x_3602_;
goto v_reusejp_3653_;
}
else
{
lean_object* v_reuseFailAlloc_3658_; 
v_reuseFailAlloc_3658_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3658_, 0, v___x_3652_);
lean_ctor_set(v_reuseFailAlloc_3658_, 1, v_k_3609_);
lean_ctor_set(v_reuseFailAlloc_3658_, 2, v_v_3610_);
lean_ctor_set(v_reuseFailAlloc_3658_, 3, v_l_3611_);
lean_ctor_set(v_reuseFailAlloc_3658_, 4, v_l_3628_);
v___x_3654_ = v_reuseFailAlloc_3658_;
goto v_reusejp_3653_;
}
v_reusejp_3653_:
{
lean_object* v___x_3655_; 
v___x_3655_ = lean_nat_add(v___x_3606_, v_size_3607_);
if (lean_obj_tag(v_r_3629_) == 0)
{
lean_object* v_size_3656_; 
v_size_3656_ = lean_ctor_get(v_r_3629_, 0);
lean_inc(v_size_3656_);
v___y_3639_ = v___x_3654_;
v___y_3640_ = v___x_3655_;
v___y_3641_ = v_size_3656_;
goto v___jp_3638_;
}
else
{
lean_object* v___x_3657_; 
v___x_3657_ = lean_unsigned_to_nat(0u);
v___y_3639_ = v___x_3654_;
v___y_3640_ = v___x_3655_;
v___y_3641_ = v___x_3657_;
goto v___jp_3638_;
}
}
}
}
}
else
{
lean_object* v___x_3667_; lean_object* v___x_3668_; lean_object* v___x_3669_; lean_object* v___x_3670_; lean_object* v___x_3672_; 
lean_del_object(v___x_3602_);
v___x_3667_ = lean_nat_add(v___x_3606_, v_size_3608_);
lean_dec(v_size_3608_);
v___x_3668_ = lean_nat_add(v___x_3667_, v_size_3607_);
lean_dec(v___x_3667_);
v___x_3669_ = lean_nat_add(v___x_3606_, v_size_3607_);
v___x_3670_ = lean_nat_add(v___x_3669_, v_size_3625_);
lean_dec(v___x_3669_);
lean_inc_ref(v_r_3600_);
if (v_isShared_3623_ == 0)
{
lean_ctor_set(v___x_3622_, 4, v_r_3600_);
lean_ctor_set(v___x_3622_, 3, v_r_3612_);
lean_ctor_set(v___x_3622_, 2, v_v_3598_);
lean_ctor_set(v___x_3622_, 1, v_k_3597_);
lean_ctor_set(v___x_3622_, 0, v___x_3670_);
v___x_3672_ = v___x_3622_;
goto v_reusejp_3671_;
}
else
{
lean_object* v_reuseFailAlloc_3685_; 
v_reuseFailAlloc_3685_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3685_, 0, v___x_3670_);
lean_ctor_set(v_reuseFailAlloc_3685_, 1, v_k_3597_);
lean_ctor_set(v_reuseFailAlloc_3685_, 2, v_v_3598_);
lean_ctor_set(v_reuseFailAlloc_3685_, 3, v_r_3612_);
lean_ctor_set(v_reuseFailAlloc_3685_, 4, v_r_3600_);
v___x_3672_ = v_reuseFailAlloc_3685_;
goto v_reusejp_3671_;
}
v_reusejp_3671_:
{
lean_object* v___x_3674_; uint8_t v_isShared_3675_; uint8_t v_isSharedCheck_3679_; 
v_isSharedCheck_3679_ = !lean_is_exclusive(v_r_3600_);
if (v_isSharedCheck_3679_ == 0)
{
lean_object* v_unused_3680_; lean_object* v_unused_3681_; lean_object* v_unused_3682_; lean_object* v_unused_3683_; lean_object* v_unused_3684_; 
v_unused_3680_ = lean_ctor_get(v_r_3600_, 4);
lean_dec(v_unused_3680_);
v_unused_3681_ = lean_ctor_get(v_r_3600_, 3);
lean_dec(v_unused_3681_);
v_unused_3682_ = lean_ctor_get(v_r_3600_, 2);
lean_dec(v_unused_3682_);
v_unused_3683_ = lean_ctor_get(v_r_3600_, 1);
lean_dec(v_unused_3683_);
v_unused_3684_ = lean_ctor_get(v_r_3600_, 0);
lean_dec(v_unused_3684_);
v___x_3674_ = v_r_3600_;
v_isShared_3675_ = v_isSharedCheck_3679_;
goto v_resetjp_3673_;
}
else
{
lean_dec(v_r_3600_);
v___x_3674_ = lean_box(0);
v_isShared_3675_ = v_isSharedCheck_3679_;
goto v_resetjp_3673_;
}
v_resetjp_3673_:
{
lean_object* v___x_3677_; 
if (v_isShared_3675_ == 0)
{
lean_ctor_set(v___x_3674_, 4, v___x_3672_);
lean_ctor_set(v___x_3674_, 3, v_l_3611_);
lean_ctor_set(v___x_3674_, 2, v_v_3610_);
lean_ctor_set(v___x_3674_, 1, v_k_3609_);
lean_ctor_set(v___x_3674_, 0, v___x_3668_);
v___x_3677_ = v___x_3674_;
goto v_reusejp_3676_;
}
else
{
lean_object* v_reuseFailAlloc_3678_; 
v_reuseFailAlloc_3678_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3678_, 0, v___x_3668_);
lean_ctor_set(v_reuseFailAlloc_3678_, 1, v_k_3609_);
lean_ctor_set(v_reuseFailAlloc_3678_, 2, v_v_3610_);
lean_ctor_set(v_reuseFailAlloc_3678_, 3, v_l_3611_);
lean_ctor_set(v_reuseFailAlloc_3678_, 4, v___x_3672_);
v___x_3677_ = v_reuseFailAlloc_3678_;
goto v_reusejp_3676_;
}
v_reusejp_3676_:
{
return v___x_3677_;
}
}
}
}
}
}
}
else
{
lean_object* v_l_3692_; 
v_l_3692_ = lean_ctor_get(v_impl_3605_, 3);
lean_inc(v_l_3692_);
if (lean_obj_tag(v_l_3692_) == 0)
{
lean_object* v_r_3693_; lean_object* v_k_3694_; lean_object* v_v_3695_; lean_object* v___x_3697_; uint8_t v_isShared_3698_; uint8_t v_isSharedCheck_3706_; 
v_r_3693_ = lean_ctor_get(v_impl_3605_, 4);
v_k_3694_ = lean_ctor_get(v_impl_3605_, 1);
v_v_3695_ = lean_ctor_get(v_impl_3605_, 2);
v_isSharedCheck_3706_ = !lean_is_exclusive(v_impl_3605_);
if (v_isSharedCheck_3706_ == 0)
{
lean_object* v_unused_3707_; lean_object* v_unused_3708_; 
v_unused_3707_ = lean_ctor_get(v_impl_3605_, 3);
lean_dec(v_unused_3707_);
v_unused_3708_ = lean_ctor_get(v_impl_3605_, 0);
lean_dec(v_unused_3708_);
v___x_3697_ = v_impl_3605_;
v_isShared_3698_ = v_isSharedCheck_3706_;
goto v_resetjp_3696_;
}
else
{
lean_inc(v_r_3693_);
lean_inc(v_v_3695_);
lean_inc(v_k_3694_);
lean_dec(v_impl_3605_);
v___x_3697_ = lean_box(0);
v_isShared_3698_ = v_isSharedCheck_3706_;
goto v_resetjp_3696_;
}
v_resetjp_3696_:
{
lean_object* v___x_3699_; lean_object* v___x_3701_; 
v___x_3699_ = lean_unsigned_to_nat(3u);
lean_inc(v_r_3693_);
if (v_isShared_3698_ == 0)
{
lean_ctor_set(v___x_3697_, 3, v_r_3693_);
lean_ctor_set(v___x_3697_, 2, v_v_3598_);
lean_ctor_set(v___x_3697_, 1, v_k_3597_);
lean_ctor_set(v___x_3697_, 0, v___x_3606_);
v___x_3701_ = v___x_3697_;
goto v_reusejp_3700_;
}
else
{
lean_object* v_reuseFailAlloc_3705_; 
v_reuseFailAlloc_3705_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3705_, 0, v___x_3606_);
lean_ctor_set(v_reuseFailAlloc_3705_, 1, v_k_3597_);
lean_ctor_set(v_reuseFailAlloc_3705_, 2, v_v_3598_);
lean_ctor_set(v_reuseFailAlloc_3705_, 3, v_r_3693_);
lean_ctor_set(v_reuseFailAlloc_3705_, 4, v_r_3693_);
v___x_3701_ = v_reuseFailAlloc_3705_;
goto v_reusejp_3700_;
}
v_reusejp_3700_:
{
lean_object* v___x_3703_; 
if (v_isShared_3603_ == 0)
{
lean_ctor_set(v___x_3602_, 4, v___x_3701_);
lean_ctor_set(v___x_3602_, 3, v_l_3692_);
lean_ctor_set(v___x_3602_, 2, v_v_3695_);
lean_ctor_set(v___x_3602_, 1, v_k_3694_);
lean_ctor_set(v___x_3602_, 0, v___x_3699_);
v___x_3703_ = v___x_3602_;
goto v_reusejp_3702_;
}
else
{
lean_object* v_reuseFailAlloc_3704_; 
v_reuseFailAlloc_3704_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3704_, 0, v___x_3699_);
lean_ctor_set(v_reuseFailAlloc_3704_, 1, v_k_3694_);
lean_ctor_set(v_reuseFailAlloc_3704_, 2, v_v_3695_);
lean_ctor_set(v_reuseFailAlloc_3704_, 3, v_l_3692_);
lean_ctor_set(v_reuseFailAlloc_3704_, 4, v___x_3701_);
v___x_3703_ = v_reuseFailAlloc_3704_;
goto v_reusejp_3702_;
}
v_reusejp_3702_:
{
return v___x_3703_;
}
}
}
}
else
{
lean_object* v_r_3709_; 
v_r_3709_ = lean_ctor_get(v_impl_3605_, 4);
lean_inc(v_r_3709_);
if (lean_obj_tag(v_r_3709_) == 0)
{
lean_object* v_k_3710_; lean_object* v_v_3711_; lean_object* v___x_3713_; uint8_t v_isShared_3714_; uint8_t v_isSharedCheck_3734_; 
v_k_3710_ = lean_ctor_get(v_impl_3605_, 1);
v_v_3711_ = lean_ctor_get(v_impl_3605_, 2);
v_isSharedCheck_3734_ = !lean_is_exclusive(v_impl_3605_);
if (v_isSharedCheck_3734_ == 0)
{
lean_object* v_unused_3735_; lean_object* v_unused_3736_; lean_object* v_unused_3737_; 
v_unused_3735_ = lean_ctor_get(v_impl_3605_, 4);
lean_dec(v_unused_3735_);
v_unused_3736_ = lean_ctor_get(v_impl_3605_, 3);
lean_dec(v_unused_3736_);
v_unused_3737_ = lean_ctor_get(v_impl_3605_, 0);
lean_dec(v_unused_3737_);
v___x_3713_ = v_impl_3605_;
v_isShared_3714_ = v_isSharedCheck_3734_;
goto v_resetjp_3712_;
}
else
{
lean_inc(v_v_3711_);
lean_inc(v_k_3710_);
lean_dec(v_impl_3605_);
v___x_3713_ = lean_box(0);
v_isShared_3714_ = v_isSharedCheck_3734_;
goto v_resetjp_3712_;
}
v_resetjp_3712_:
{
lean_object* v_k_3715_; lean_object* v_v_3716_; lean_object* v___x_3718_; uint8_t v_isShared_3719_; uint8_t v_isSharedCheck_3730_; 
v_k_3715_ = lean_ctor_get(v_r_3709_, 1);
v_v_3716_ = lean_ctor_get(v_r_3709_, 2);
v_isSharedCheck_3730_ = !lean_is_exclusive(v_r_3709_);
if (v_isSharedCheck_3730_ == 0)
{
lean_object* v_unused_3731_; lean_object* v_unused_3732_; lean_object* v_unused_3733_; 
v_unused_3731_ = lean_ctor_get(v_r_3709_, 4);
lean_dec(v_unused_3731_);
v_unused_3732_ = lean_ctor_get(v_r_3709_, 3);
lean_dec(v_unused_3732_);
v_unused_3733_ = lean_ctor_get(v_r_3709_, 0);
lean_dec(v_unused_3733_);
v___x_3718_ = v_r_3709_;
v_isShared_3719_ = v_isSharedCheck_3730_;
goto v_resetjp_3717_;
}
else
{
lean_inc(v_v_3716_);
lean_inc(v_k_3715_);
lean_dec(v_r_3709_);
v___x_3718_ = lean_box(0);
v_isShared_3719_ = v_isSharedCheck_3730_;
goto v_resetjp_3717_;
}
v_resetjp_3717_:
{
lean_object* v___x_3720_; lean_object* v___x_3722_; 
v___x_3720_ = lean_unsigned_to_nat(3u);
if (v_isShared_3719_ == 0)
{
lean_ctor_set(v___x_3718_, 4, v_l_3692_);
lean_ctor_set(v___x_3718_, 3, v_l_3692_);
lean_ctor_set(v___x_3718_, 2, v_v_3711_);
lean_ctor_set(v___x_3718_, 1, v_k_3710_);
lean_ctor_set(v___x_3718_, 0, v___x_3606_);
v___x_3722_ = v___x_3718_;
goto v_reusejp_3721_;
}
else
{
lean_object* v_reuseFailAlloc_3729_; 
v_reuseFailAlloc_3729_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3729_, 0, v___x_3606_);
lean_ctor_set(v_reuseFailAlloc_3729_, 1, v_k_3710_);
lean_ctor_set(v_reuseFailAlloc_3729_, 2, v_v_3711_);
lean_ctor_set(v_reuseFailAlloc_3729_, 3, v_l_3692_);
lean_ctor_set(v_reuseFailAlloc_3729_, 4, v_l_3692_);
v___x_3722_ = v_reuseFailAlloc_3729_;
goto v_reusejp_3721_;
}
v_reusejp_3721_:
{
lean_object* v___x_3724_; 
if (v_isShared_3714_ == 0)
{
lean_ctor_set(v___x_3713_, 4, v_l_3692_);
lean_ctor_set(v___x_3713_, 2, v_v_3598_);
lean_ctor_set(v___x_3713_, 1, v_k_3597_);
lean_ctor_set(v___x_3713_, 0, v___x_3606_);
v___x_3724_ = v___x_3713_;
goto v_reusejp_3723_;
}
else
{
lean_object* v_reuseFailAlloc_3728_; 
v_reuseFailAlloc_3728_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3728_, 0, v___x_3606_);
lean_ctor_set(v_reuseFailAlloc_3728_, 1, v_k_3597_);
lean_ctor_set(v_reuseFailAlloc_3728_, 2, v_v_3598_);
lean_ctor_set(v_reuseFailAlloc_3728_, 3, v_l_3692_);
lean_ctor_set(v_reuseFailAlloc_3728_, 4, v_l_3692_);
v___x_3724_ = v_reuseFailAlloc_3728_;
goto v_reusejp_3723_;
}
v_reusejp_3723_:
{
lean_object* v___x_3726_; 
if (v_isShared_3603_ == 0)
{
lean_ctor_set(v___x_3602_, 4, v___x_3724_);
lean_ctor_set(v___x_3602_, 3, v___x_3722_);
lean_ctor_set(v___x_3602_, 2, v_v_3716_);
lean_ctor_set(v___x_3602_, 1, v_k_3715_);
lean_ctor_set(v___x_3602_, 0, v___x_3720_);
v___x_3726_ = v___x_3602_;
goto v_reusejp_3725_;
}
else
{
lean_object* v_reuseFailAlloc_3727_; 
v_reuseFailAlloc_3727_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3727_, 0, v___x_3720_);
lean_ctor_set(v_reuseFailAlloc_3727_, 1, v_k_3715_);
lean_ctor_set(v_reuseFailAlloc_3727_, 2, v_v_3716_);
lean_ctor_set(v_reuseFailAlloc_3727_, 3, v___x_3722_);
lean_ctor_set(v_reuseFailAlloc_3727_, 4, v___x_3724_);
v___x_3726_ = v_reuseFailAlloc_3727_;
goto v_reusejp_3725_;
}
v_reusejp_3725_:
{
return v___x_3726_;
}
}
}
}
}
}
else
{
lean_object* v___x_3738_; lean_object* v___x_3740_; 
v___x_3738_ = lean_unsigned_to_nat(2u);
if (v_isShared_3603_ == 0)
{
lean_ctor_set(v___x_3602_, 4, v_r_3709_);
lean_ctor_set(v___x_3602_, 3, v_impl_3605_);
lean_ctor_set(v___x_3602_, 0, v___x_3738_);
v___x_3740_ = v___x_3602_;
goto v_reusejp_3739_;
}
else
{
lean_object* v_reuseFailAlloc_3741_; 
v_reuseFailAlloc_3741_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3741_, 0, v___x_3738_);
lean_ctor_set(v_reuseFailAlloc_3741_, 1, v_k_3597_);
lean_ctor_set(v_reuseFailAlloc_3741_, 2, v_v_3598_);
lean_ctor_set(v_reuseFailAlloc_3741_, 3, v_impl_3605_);
lean_ctor_set(v_reuseFailAlloc_3741_, 4, v_r_3709_);
v___x_3740_ = v_reuseFailAlloc_3741_;
goto v_reusejp_3739_;
}
v_reusejp_3739_:
{
return v___x_3740_;
}
}
}
}
}
case 1:
{
lean_object* v___x_3743_; 
lean_dec(v_v_3598_);
lean_dec(v_k_3597_);
if (v_isShared_3603_ == 0)
{
lean_ctor_set(v___x_3602_, 2, v_v_3594_);
lean_ctor_set(v___x_3602_, 1, v_k_3593_);
v___x_3743_ = v___x_3602_;
goto v_reusejp_3742_;
}
else
{
lean_object* v_reuseFailAlloc_3744_; 
v_reuseFailAlloc_3744_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3744_, 0, v_size_3596_);
lean_ctor_set(v_reuseFailAlloc_3744_, 1, v_k_3593_);
lean_ctor_set(v_reuseFailAlloc_3744_, 2, v_v_3594_);
lean_ctor_set(v_reuseFailAlloc_3744_, 3, v_l_3599_);
lean_ctor_set(v_reuseFailAlloc_3744_, 4, v_r_3600_);
v___x_3743_ = v_reuseFailAlloc_3744_;
goto v_reusejp_3742_;
}
v_reusejp_3742_:
{
return v___x_3743_;
}
}
default: 
{
lean_object* v_impl_3745_; lean_object* v___x_3746_; 
lean_dec(v_size_3596_);
v_impl_3745_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lake_LeanLib_initFacetConfigs_spec__0___redArg(v_k_3593_, v_v_3594_, v_r_3600_);
v___x_3746_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_l_3599_) == 0)
{
lean_object* v_size_3747_; lean_object* v_size_3748_; lean_object* v_k_3749_; lean_object* v_v_3750_; lean_object* v_l_3751_; lean_object* v_r_3752_; lean_object* v___x_3753_; lean_object* v___x_3754_; uint8_t v___x_3755_; 
v_size_3747_ = lean_ctor_get(v_l_3599_, 0);
v_size_3748_ = lean_ctor_get(v_impl_3745_, 0);
lean_inc(v_size_3748_);
v_k_3749_ = lean_ctor_get(v_impl_3745_, 1);
lean_inc(v_k_3749_);
v_v_3750_ = lean_ctor_get(v_impl_3745_, 2);
lean_inc(v_v_3750_);
v_l_3751_ = lean_ctor_get(v_impl_3745_, 3);
lean_inc(v_l_3751_);
v_r_3752_ = lean_ctor_get(v_impl_3745_, 4);
lean_inc(v_r_3752_);
v___x_3753_ = lean_unsigned_to_nat(3u);
v___x_3754_ = lean_nat_mul(v___x_3753_, v_size_3747_);
v___x_3755_ = lean_nat_dec_lt(v___x_3754_, v_size_3748_);
lean_dec(v___x_3754_);
if (v___x_3755_ == 0)
{
lean_object* v___x_3756_; lean_object* v___x_3757_; lean_object* v___x_3759_; 
lean_dec(v_r_3752_);
lean_dec(v_l_3751_);
lean_dec(v_v_3750_);
lean_dec(v_k_3749_);
v___x_3756_ = lean_nat_add(v___x_3746_, v_size_3747_);
v___x_3757_ = lean_nat_add(v___x_3756_, v_size_3748_);
lean_dec(v_size_3748_);
lean_dec(v___x_3756_);
if (v_isShared_3603_ == 0)
{
lean_ctor_set(v___x_3602_, 4, v_impl_3745_);
lean_ctor_set(v___x_3602_, 0, v___x_3757_);
v___x_3759_ = v___x_3602_;
goto v_reusejp_3758_;
}
else
{
lean_object* v_reuseFailAlloc_3760_; 
v_reuseFailAlloc_3760_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3760_, 0, v___x_3757_);
lean_ctor_set(v_reuseFailAlloc_3760_, 1, v_k_3597_);
lean_ctor_set(v_reuseFailAlloc_3760_, 2, v_v_3598_);
lean_ctor_set(v_reuseFailAlloc_3760_, 3, v_l_3599_);
lean_ctor_set(v_reuseFailAlloc_3760_, 4, v_impl_3745_);
v___x_3759_ = v_reuseFailAlloc_3760_;
goto v_reusejp_3758_;
}
v_reusejp_3758_:
{
return v___x_3759_;
}
}
else
{
lean_object* v___x_3762_; uint8_t v_isShared_3763_; uint8_t v_isSharedCheck_3824_; 
v_isSharedCheck_3824_ = !lean_is_exclusive(v_impl_3745_);
if (v_isSharedCheck_3824_ == 0)
{
lean_object* v_unused_3825_; lean_object* v_unused_3826_; lean_object* v_unused_3827_; lean_object* v_unused_3828_; lean_object* v_unused_3829_; 
v_unused_3825_ = lean_ctor_get(v_impl_3745_, 4);
lean_dec(v_unused_3825_);
v_unused_3826_ = lean_ctor_get(v_impl_3745_, 3);
lean_dec(v_unused_3826_);
v_unused_3827_ = lean_ctor_get(v_impl_3745_, 2);
lean_dec(v_unused_3827_);
v_unused_3828_ = lean_ctor_get(v_impl_3745_, 1);
lean_dec(v_unused_3828_);
v_unused_3829_ = lean_ctor_get(v_impl_3745_, 0);
lean_dec(v_unused_3829_);
v___x_3762_ = v_impl_3745_;
v_isShared_3763_ = v_isSharedCheck_3824_;
goto v_resetjp_3761_;
}
else
{
lean_dec(v_impl_3745_);
v___x_3762_ = lean_box(0);
v_isShared_3763_ = v_isSharedCheck_3824_;
goto v_resetjp_3761_;
}
v_resetjp_3761_:
{
lean_object* v_size_3764_; lean_object* v_k_3765_; lean_object* v_v_3766_; lean_object* v_l_3767_; lean_object* v_r_3768_; lean_object* v_size_3769_; lean_object* v___x_3770_; lean_object* v___x_3771_; uint8_t v___x_3772_; 
v_size_3764_ = lean_ctor_get(v_l_3751_, 0);
v_k_3765_ = lean_ctor_get(v_l_3751_, 1);
v_v_3766_ = lean_ctor_get(v_l_3751_, 2);
v_l_3767_ = lean_ctor_get(v_l_3751_, 3);
v_r_3768_ = lean_ctor_get(v_l_3751_, 4);
v_size_3769_ = lean_ctor_get(v_r_3752_, 0);
v___x_3770_ = lean_unsigned_to_nat(2u);
v___x_3771_ = lean_nat_mul(v___x_3770_, v_size_3769_);
v___x_3772_ = lean_nat_dec_lt(v_size_3764_, v___x_3771_);
lean_dec(v___x_3771_);
if (v___x_3772_ == 0)
{
lean_object* v___x_3774_; uint8_t v_isShared_3775_; uint8_t v_isSharedCheck_3800_; 
lean_inc(v_r_3768_);
lean_inc(v_l_3767_);
lean_inc(v_v_3766_);
lean_inc(v_k_3765_);
v_isSharedCheck_3800_ = !lean_is_exclusive(v_l_3751_);
if (v_isSharedCheck_3800_ == 0)
{
lean_object* v_unused_3801_; lean_object* v_unused_3802_; lean_object* v_unused_3803_; lean_object* v_unused_3804_; lean_object* v_unused_3805_; 
v_unused_3801_ = lean_ctor_get(v_l_3751_, 4);
lean_dec(v_unused_3801_);
v_unused_3802_ = lean_ctor_get(v_l_3751_, 3);
lean_dec(v_unused_3802_);
v_unused_3803_ = lean_ctor_get(v_l_3751_, 2);
lean_dec(v_unused_3803_);
v_unused_3804_ = lean_ctor_get(v_l_3751_, 1);
lean_dec(v_unused_3804_);
v_unused_3805_ = lean_ctor_get(v_l_3751_, 0);
lean_dec(v_unused_3805_);
v___x_3774_ = v_l_3751_;
v_isShared_3775_ = v_isSharedCheck_3800_;
goto v_resetjp_3773_;
}
else
{
lean_dec(v_l_3751_);
v___x_3774_ = lean_box(0);
v_isShared_3775_ = v_isSharedCheck_3800_;
goto v_resetjp_3773_;
}
v_resetjp_3773_:
{
lean_object* v___x_3776_; lean_object* v___x_3777_; lean_object* v___y_3779_; lean_object* v___y_3780_; lean_object* v___y_3781_; lean_object* v___y_3790_; 
v___x_3776_ = lean_nat_add(v___x_3746_, v_size_3747_);
v___x_3777_ = lean_nat_add(v___x_3776_, v_size_3748_);
lean_dec(v_size_3748_);
if (lean_obj_tag(v_l_3767_) == 0)
{
lean_object* v_size_3798_; 
v_size_3798_ = lean_ctor_get(v_l_3767_, 0);
lean_inc(v_size_3798_);
v___y_3790_ = v_size_3798_;
goto v___jp_3789_;
}
else
{
lean_object* v___x_3799_; 
v___x_3799_ = lean_unsigned_to_nat(0u);
v___y_3790_ = v___x_3799_;
goto v___jp_3789_;
}
v___jp_3778_:
{
lean_object* v___x_3782_; lean_object* v___x_3784_; 
v___x_3782_ = lean_nat_add(v___y_3780_, v___y_3781_);
lean_dec(v___y_3781_);
lean_dec(v___y_3780_);
if (v_isShared_3775_ == 0)
{
lean_ctor_set(v___x_3774_, 4, v_r_3752_);
lean_ctor_set(v___x_3774_, 3, v_r_3768_);
lean_ctor_set(v___x_3774_, 2, v_v_3750_);
lean_ctor_set(v___x_3774_, 1, v_k_3749_);
lean_ctor_set(v___x_3774_, 0, v___x_3782_);
v___x_3784_ = v___x_3774_;
goto v_reusejp_3783_;
}
else
{
lean_object* v_reuseFailAlloc_3788_; 
v_reuseFailAlloc_3788_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3788_, 0, v___x_3782_);
lean_ctor_set(v_reuseFailAlloc_3788_, 1, v_k_3749_);
lean_ctor_set(v_reuseFailAlloc_3788_, 2, v_v_3750_);
lean_ctor_set(v_reuseFailAlloc_3788_, 3, v_r_3768_);
lean_ctor_set(v_reuseFailAlloc_3788_, 4, v_r_3752_);
v___x_3784_ = v_reuseFailAlloc_3788_;
goto v_reusejp_3783_;
}
v_reusejp_3783_:
{
lean_object* v___x_3786_; 
if (v_isShared_3763_ == 0)
{
lean_ctor_set(v___x_3762_, 4, v___x_3784_);
lean_ctor_set(v___x_3762_, 3, v___y_3779_);
lean_ctor_set(v___x_3762_, 2, v_v_3766_);
lean_ctor_set(v___x_3762_, 1, v_k_3765_);
lean_ctor_set(v___x_3762_, 0, v___x_3777_);
v___x_3786_ = v___x_3762_;
goto v_reusejp_3785_;
}
else
{
lean_object* v_reuseFailAlloc_3787_; 
v_reuseFailAlloc_3787_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3787_, 0, v___x_3777_);
lean_ctor_set(v_reuseFailAlloc_3787_, 1, v_k_3765_);
lean_ctor_set(v_reuseFailAlloc_3787_, 2, v_v_3766_);
lean_ctor_set(v_reuseFailAlloc_3787_, 3, v___y_3779_);
lean_ctor_set(v_reuseFailAlloc_3787_, 4, v___x_3784_);
v___x_3786_ = v_reuseFailAlloc_3787_;
goto v_reusejp_3785_;
}
v_reusejp_3785_:
{
return v___x_3786_;
}
}
}
v___jp_3789_:
{
lean_object* v___x_3791_; lean_object* v___x_3793_; 
v___x_3791_ = lean_nat_add(v___x_3776_, v___y_3790_);
lean_dec(v___y_3790_);
lean_dec(v___x_3776_);
if (v_isShared_3603_ == 0)
{
lean_ctor_set(v___x_3602_, 4, v_l_3767_);
lean_ctor_set(v___x_3602_, 0, v___x_3791_);
v___x_3793_ = v___x_3602_;
goto v_reusejp_3792_;
}
else
{
lean_object* v_reuseFailAlloc_3797_; 
v_reuseFailAlloc_3797_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3797_, 0, v___x_3791_);
lean_ctor_set(v_reuseFailAlloc_3797_, 1, v_k_3597_);
lean_ctor_set(v_reuseFailAlloc_3797_, 2, v_v_3598_);
lean_ctor_set(v_reuseFailAlloc_3797_, 3, v_l_3599_);
lean_ctor_set(v_reuseFailAlloc_3797_, 4, v_l_3767_);
v___x_3793_ = v_reuseFailAlloc_3797_;
goto v_reusejp_3792_;
}
v_reusejp_3792_:
{
lean_object* v___x_3794_; 
v___x_3794_ = lean_nat_add(v___x_3746_, v_size_3769_);
if (lean_obj_tag(v_r_3768_) == 0)
{
lean_object* v_size_3795_; 
v_size_3795_ = lean_ctor_get(v_r_3768_, 0);
lean_inc(v_size_3795_);
v___y_3779_ = v___x_3793_;
v___y_3780_ = v___x_3794_;
v___y_3781_ = v_size_3795_;
goto v___jp_3778_;
}
else
{
lean_object* v___x_3796_; 
v___x_3796_ = lean_unsigned_to_nat(0u);
v___y_3779_ = v___x_3793_;
v___y_3780_ = v___x_3794_;
v___y_3781_ = v___x_3796_;
goto v___jp_3778_;
}
}
}
}
}
else
{
lean_object* v___x_3806_; lean_object* v___x_3807_; lean_object* v___x_3808_; lean_object* v___x_3810_; 
lean_del_object(v___x_3602_);
v___x_3806_ = lean_nat_add(v___x_3746_, v_size_3747_);
v___x_3807_ = lean_nat_add(v___x_3806_, v_size_3748_);
lean_dec(v_size_3748_);
v___x_3808_ = lean_nat_add(v___x_3806_, v_size_3764_);
lean_dec(v___x_3806_);
lean_inc_ref(v_l_3599_);
if (v_isShared_3763_ == 0)
{
lean_ctor_set(v___x_3762_, 4, v_l_3751_);
lean_ctor_set(v___x_3762_, 3, v_l_3599_);
lean_ctor_set(v___x_3762_, 2, v_v_3598_);
lean_ctor_set(v___x_3762_, 1, v_k_3597_);
lean_ctor_set(v___x_3762_, 0, v___x_3808_);
v___x_3810_ = v___x_3762_;
goto v_reusejp_3809_;
}
else
{
lean_object* v_reuseFailAlloc_3823_; 
v_reuseFailAlloc_3823_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3823_, 0, v___x_3808_);
lean_ctor_set(v_reuseFailAlloc_3823_, 1, v_k_3597_);
lean_ctor_set(v_reuseFailAlloc_3823_, 2, v_v_3598_);
lean_ctor_set(v_reuseFailAlloc_3823_, 3, v_l_3599_);
lean_ctor_set(v_reuseFailAlloc_3823_, 4, v_l_3751_);
v___x_3810_ = v_reuseFailAlloc_3823_;
goto v_reusejp_3809_;
}
v_reusejp_3809_:
{
lean_object* v___x_3812_; uint8_t v_isShared_3813_; uint8_t v_isSharedCheck_3817_; 
v_isSharedCheck_3817_ = !lean_is_exclusive(v_l_3599_);
if (v_isSharedCheck_3817_ == 0)
{
lean_object* v_unused_3818_; lean_object* v_unused_3819_; lean_object* v_unused_3820_; lean_object* v_unused_3821_; lean_object* v_unused_3822_; 
v_unused_3818_ = lean_ctor_get(v_l_3599_, 4);
lean_dec(v_unused_3818_);
v_unused_3819_ = lean_ctor_get(v_l_3599_, 3);
lean_dec(v_unused_3819_);
v_unused_3820_ = lean_ctor_get(v_l_3599_, 2);
lean_dec(v_unused_3820_);
v_unused_3821_ = lean_ctor_get(v_l_3599_, 1);
lean_dec(v_unused_3821_);
v_unused_3822_ = lean_ctor_get(v_l_3599_, 0);
lean_dec(v_unused_3822_);
v___x_3812_ = v_l_3599_;
v_isShared_3813_ = v_isSharedCheck_3817_;
goto v_resetjp_3811_;
}
else
{
lean_dec(v_l_3599_);
v___x_3812_ = lean_box(0);
v_isShared_3813_ = v_isSharedCheck_3817_;
goto v_resetjp_3811_;
}
v_resetjp_3811_:
{
lean_object* v___x_3815_; 
if (v_isShared_3813_ == 0)
{
lean_ctor_set(v___x_3812_, 4, v_r_3752_);
lean_ctor_set(v___x_3812_, 3, v___x_3810_);
lean_ctor_set(v___x_3812_, 2, v_v_3750_);
lean_ctor_set(v___x_3812_, 1, v_k_3749_);
lean_ctor_set(v___x_3812_, 0, v___x_3807_);
v___x_3815_ = v___x_3812_;
goto v_reusejp_3814_;
}
else
{
lean_object* v_reuseFailAlloc_3816_; 
v_reuseFailAlloc_3816_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3816_, 0, v___x_3807_);
lean_ctor_set(v_reuseFailAlloc_3816_, 1, v_k_3749_);
lean_ctor_set(v_reuseFailAlloc_3816_, 2, v_v_3750_);
lean_ctor_set(v_reuseFailAlloc_3816_, 3, v___x_3810_);
lean_ctor_set(v_reuseFailAlloc_3816_, 4, v_r_3752_);
v___x_3815_ = v_reuseFailAlloc_3816_;
goto v_reusejp_3814_;
}
v_reusejp_3814_:
{
return v___x_3815_;
}
}
}
}
}
}
}
else
{
lean_object* v_l_3830_; 
v_l_3830_ = lean_ctor_get(v_impl_3745_, 3);
lean_inc(v_l_3830_);
if (lean_obj_tag(v_l_3830_) == 0)
{
lean_object* v_r_3831_; lean_object* v_k_3832_; lean_object* v_v_3833_; lean_object* v___x_3835_; uint8_t v_isShared_3836_; uint8_t v_isSharedCheck_3856_; 
v_r_3831_ = lean_ctor_get(v_impl_3745_, 4);
v_k_3832_ = lean_ctor_get(v_impl_3745_, 1);
v_v_3833_ = lean_ctor_get(v_impl_3745_, 2);
v_isSharedCheck_3856_ = !lean_is_exclusive(v_impl_3745_);
if (v_isSharedCheck_3856_ == 0)
{
lean_object* v_unused_3857_; lean_object* v_unused_3858_; 
v_unused_3857_ = lean_ctor_get(v_impl_3745_, 3);
lean_dec(v_unused_3857_);
v_unused_3858_ = lean_ctor_get(v_impl_3745_, 0);
lean_dec(v_unused_3858_);
v___x_3835_ = v_impl_3745_;
v_isShared_3836_ = v_isSharedCheck_3856_;
goto v_resetjp_3834_;
}
else
{
lean_inc(v_r_3831_);
lean_inc(v_v_3833_);
lean_inc(v_k_3832_);
lean_dec(v_impl_3745_);
v___x_3835_ = lean_box(0);
v_isShared_3836_ = v_isSharedCheck_3856_;
goto v_resetjp_3834_;
}
v_resetjp_3834_:
{
lean_object* v_k_3837_; lean_object* v_v_3838_; lean_object* v___x_3840_; uint8_t v_isShared_3841_; uint8_t v_isSharedCheck_3852_; 
v_k_3837_ = lean_ctor_get(v_l_3830_, 1);
v_v_3838_ = lean_ctor_get(v_l_3830_, 2);
v_isSharedCheck_3852_ = !lean_is_exclusive(v_l_3830_);
if (v_isSharedCheck_3852_ == 0)
{
lean_object* v_unused_3853_; lean_object* v_unused_3854_; lean_object* v_unused_3855_; 
v_unused_3853_ = lean_ctor_get(v_l_3830_, 4);
lean_dec(v_unused_3853_);
v_unused_3854_ = lean_ctor_get(v_l_3830_, 3);
lean_dec(v_unused_3854_);
v_unused_3855_ = lean_ctor_get(v_l_3830_, 0);
lean_dec(v_unused_3855_);
v___x_3840_ = v_l_3830_;
v_isShared_3841_ = v_isSharedCheck_3852_;
goto v_resetjp_3839_;
}
else
{
lean_inc(v_v_3838_);
lean_inc(v_k_3837_);
lean_dec(v_l_3830_);
v___x_3840_ = lean_box(0);
v_isShared_3841_ = v_isSharedCheck_3852_;
goto v_resetjp_3839_;
}
v_resetjp_3839_:
{
lean_object* v___x_3842_; lean_object* v___x_3844_; 
v___x_3842_ = lean_unsigned_to_nat(3u);
lean_inc_n(v_r_3831_, 2);
if (v_isShared_3841_ == 0)
{
lean_ctor_set(v___x_3840_, 4, v_r_3831_);
lean_ctor_set(v___x_3840_, 3, v_r_3831_);
lean_ctor_set(v___x_3840_, 2, v_v_3598_);
lean_ctor_set(v___x_3840_, 1, v_k_3597_);
lean_ctor_set(v___x_3840_, 0, v___x_3746_);
v___x_3844_ = v___x_3840_;
goto v_reusejp_3843_;
}
else
{
lean_object* v_reuseFailAlloc_3851_; 
v_reuseFailAlloc_3851_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3851_, 0, v___x_3746_);
lean_ctor_set(v_reuseFailAlloc_3851_, 1, v_k_3597_);
lean_ctor_set(v_reuseFailAlloc_3851_, 2, v_v_3598_);
lean_ctor_set(v_reuseFailAlloc_3851_, 3, v_r_3831_);
lean_ctor_set(v_reuseFailAlloc_3851_, 4, v_r_3831_);
v___x_3844_ = v_reuseFailAlloc_3851_;
goto v_reusejp_3843_;
}
v_reusejp_3843_:
{
lean_object* v___x_3846_; 
lean_inc(v_r_3831_);
if (v_isShared_3836_ == 0)
{
lean_ctor_set(v___x_3835_, 3, v_r_3831_);
lean_ctor_set(v___x_3835_, 0, v___x_3746_);
v___x_3846_ = v___x_3835_;
goto v_reusejp_3845_;
}
else
{
lean_object* v_reuseFailAlloc_3850_; 
v_reuseFailAlloc_3850_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3850_, 0, v___x_3746_);
lean_ctor_set(v_reuseFailAlloc_3850_, 1, v_k_3832_);
lean_ctor_set(v_reuseFailAlloc_3850_, 2, v_v_3833_);
lean_ctor_set(v_reuseFailAlloc_3850_, 3, v_r_3831_);
lean_ctor_set(v_reuseFailAlloc_3850_, 4, v_r_3831_);
v___x_3846_ = v_reuseFailAlloc_3850_;
goto v_reusejp_3845_;
}
v_reusejp_3845_:
{
lean_object* v___x_3848_; 
if (v_isShared_3603_ == 0)
{
lean_ctor_set(v___x_3602_, 4, v___x_3846_);
lean_ctor_set(v___x_3602_, 3, v___x_3844_);
lean_ctor_set(v___x_3602_, 2, v_v_3838_);
lean_ctor_set(v___x_3602_, 1, v_k_3837_);
lean_ctor_set(v___x_3602_, 0, v___x_3842_);
v___x_3848_ = v___x_3602_;
goto v_reusejp_3847_;
}
else
{
lean_object* v_reuseFailAlloc_3849_; 
v_reuseFailAlloc_3849_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3849_, 0, v___x_3842_);
lean_ctor_set(v_reuseFailAlloc_3849_, 1, v_k_3837_);
lean_ctor_set(v_reuseFailAlloc_3849_, 2, v_v_3838_);
lean_ctor_set(v_reuseFailAlloc_3849_, 3, v___x_3844_);
lean_ctor_set(v_reuseFailAlloc_3849_, 4, v___x_3846_);
v___x_3848_ = v_reuseFailAlloc_3849_;
goto v_reusejp_3847_;
}
v_reusejp_3847_:
{
return v___x_3848_;
}
}
}
}
}
}
else
{
lean_object* v_r_3859_; 
v_r_3859_ = lean_ctor_get(v_impl_3745_, 4);
lean_inc(v_r_3859_);
if (lean_obj_tag(v_r_3859_) == 0)
{
lean_object* v_k_3860_; lean_object* v_v_3861_; lean_object* v___x_3863_; uint8_t v_isShared_3864_; uint8_t v_isSharedCheck_3872_; 
v_k_3860_ = lean_ctor_get(v_impl_3745_, 1);
v_v_3861_ = lean_ctor_get(v_impl_3745_, 2);
v_isSharedCheck_3872_ = !lean_is_exclusive(v_impl_3745_);
if (v_isSharedCheck_3872_ == 0)
{
lean_object* v_unused_3873_; lean_object* v_unused_3874_; lean_object* v_unused_3875_; 
v_unused_3873_ = lean_ctor_get(v_impl_3745_, 4);
lean_dec(v_unused_3873_);
v_unused_3874_ = lean_ctor_get(v_impl_3745_, 3);
lean_dec(v_unused_3874_);
v_unused_3875_ = lean_ctor_get(v_impl_3745_, 0);
lean_dec(v_unused_3875_);
v___x_3863_ = v_impl_3745_;
v_isShared_3864_ = v_isSharedCheck_3872_;
goto v_resetjp_3862_;
}
else
{
lean_inc(v_v_3861_);
lean_inc(v_k_3860_);
lean_dec(v_impl_3745_);
v___x_3863_ = lean_box(0);
v_isShared_3864_ = v_isSharedCheck_3872_;
goto v_resetjp_3862_;
}
v_resetjp_3862_:
{
lean_object* v___x_3865_; lean_object* v___x_3867_; 
v___x_3865_ = lean_unsigned_to_nat(3u);
if (v_isShared_3864_ == 0)
{
lean_ctor_set(v___x_3863_, 4, v_l_3830_);
lean_ctor_set(v___x_3863_, 2, v_v_3598_);
lean_ctor_set(v___x_3863_, 1, v_k_3597_);
lean_ctor_set(v___x_3863_, 0, v___x_3746_);
v___x_3867_ = v___x_3863_;
goto v_reusejp_3866_;
}
else
{
lean_object* v_reuseFailAlloc_3871_; 
v_reuseFailAlloc_3871_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3871_, 0, v___x_3746_);
lean_ctor_set(v_reuseFailAlloc_3871_, 1, v_k_3597_);
lean_ctor_set(v_reuseFailAlloc_3871_, 2, v_v_3598_);
lean_ctor_set(v_reuseFailAlloc_3871_, 3, v_l_3830_);
lean_ctor_set(v_reuseFailAlloc_3871_, 4, v_l_3830_);
v___x_3867_ = v_reuseFailAlloc_3871_;
goto v_reusejp_3866_;
}
v_reusejp_3866_:
{
lean_object* v___x_3869_; 
if (v_isShared_3603_ == 0)
{
lean_ctor_set(v___x_3602_, 4, v_r_3859_);
lean_ctor_set(v___x_3602_, 3, v___x_3867_);
lean_ctor_set(v___x_3602_, 2, v_v_3861_);
lean_ctor_set(v___x_3602_, 1, v_k_3860_);
lean_ctor_set(v___x_3602_, 0, v___x_3865_);
v___x_3869_ = v___x_3602_;
goto v_reusejp_3868_;
}
else
{
lean_object* v_reuseFailAlloc_3870_; 
v_reuseFailAlloc_3870_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3870_, 0, v___x_3865_);
lean_ctor_set(v_reuseFailAlloc_3870_, 1, v_k_3860_);
lean_ctor_set(v_reuseFailAlloc_3870_, 2, v_v_3861_);
lean_ctor_set(v_reuseFailAlloc_3870_, 3, v___x_3867_);
lean_ctor_set(v_reuseFailAlloc_3870_, 4, v_r_3859_);
v___x_3869_ = v_reuseFailAlloc_3870_;
goto v_reusejp_3868_;
}
v_reusejp_3868_:
{
return v___x_3869_;
}
}
}
}
else
{
lean_object* v___x_3876_; lean_object* v___x_3878_; 
v___x_3876_ = lean_unsigned_to_nat(2u);
if (v_isShared_3603_ == 0)
{
lean_ctor_set(v___x_3602_, 4, v_impl_3745_);
lean_ctor_set(v___x_3602_, 3, v_r_3859_);
lean_ctor_set(v___x_3602_, 0, v___x_3876_);
v___x_3878_ = v___x_3602_;
goto v_reusejp_3877_;
}
else
{
lean_object* v_reuseFailAlloc_3879_; 
v_reuseFailAlloc_3879_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3879_, 0, v___x_3876_);
lean_ctor_set(v_reuseFailAlloc_3879_, 1, v_k_3597_);
lean_ctor_set(v_reuseFailAlloc_3879_, 2, v_v_3598_);
lean_ctor_set(v_reuseFailAlloc_3879_, 3, v_r_3859_);
lean_ctor_set(v_reuseFailAlloc_3879_, 4, v_impl_3745_);
v___x_3878_ = v_reuseFailAlloc_3879_;
goto v_reusejp_3877_;
}
v_reusejp_3877_:
{
return v___x_3878_;
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
lean_object* v___x_3881_; lean_object* v___x_3882_; 
v___x_3881_ = lean_unsigned_to_nat(1u);
v___x_3882_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_3882_, 0, v___x_3881_);
lean_ctor_set(v___x_3882_, 1, v_k_3593_);
lean_ctor_set(v___x_3882_, 2, v_v_3594_);
lean_ctor_set(v___x_3882_, 3, v_t_3595_);
lean_ctor_set(v___x_3882_, 4, v_t_3595_);
return v___x_3882_;
}
}
}
static lean_object* _init_l_Lake_LeanLib_initFacetConfigs___closed__0(void){
_start:
{
lean_object* v___x_3883_; lean_object* v___x_3884_; lean_object* v___x_3885_; lean_object* v___x_3886_; 
v___x_3883_ = lean_box(1);
v___x_3884_ = l_Lake_LeanLib_defaultFacetConfig;
v___x_3885_ = l_Lake_LeanLib_defaultFacet;
v___x_3886_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lake_LeanLib_initFacetConfigs_spec__0___redArg(v___x_3885_, v___x_3884_, v___x_3883_);
return v___x_3886_;
}
}
static lean_object* _init_l_Lake_LeanLib_initFacetConfigs___closed__1(void){
_start:
{
lean_object* v___x_3887_; lean_object* v___x_3888_; lean_object* v___x_3889_; lean_object* v___x_3890_; 
v___x_3887_ = lean_obj_once(&l_Lake_LeanLib_initFacetConfigs___closed__0, &l_Lake_LeanLib_initFacetConfigs___closed__0_once, _init_l_Lake_LeanLib_initFacetConfigs___closed__0);
v___x_3888_ = l___private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig;
v___x_3889_ = l_Lake_LeanLib_modulesFacet;
v___x_3890_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lake_LeanLib_initFacetConfigs_spec__0___redArg(v___x_3889_, v___x_3888_, v___x_3887_);
return v___x_3890_;
}
}
static lean_object* _init_l_Lake_LeanLib_initFacetConfigs___closed__2(void){
_start:
{
lean_object* v___x_3891_; lean_object* v___x_3892_; lean_object* v___x_3893_; lean_object* v___x_3894_; 
v___x_3891_ = lean_obj_once(&l_Lake_LeanLib_initFacetConfigs___closed__1, &l_Lake_LeanLib_initFacetConfigs___closed__1_once, _init_l_Lake_LeanLib_initFacetConfigs___closed__1);
v___x_3892_ = l_Lake_LeanLib_leanArtsFacetConfig;
v___x_3893_ = l_Lake_LeanLib_leanArtsFacet;
v___x_3894_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lake_LeanLib_initFacetConfigs_spec__0___redArg(v___x_3893_, v___x_3892_, v___x_3891_);
return v___x_3894_;
}
}
static lean_object* _init_l_Lake_LeanLib_initFacetConfigs___closed__3(void){
_start:
{
lean_object* v___x_3895_; lean_object* v___x_3896_; lean_object* v___x_3897_; lean_object* v___x_3898_; 
v___x_3895_ = lean_obj_once(&l_Lake_LeanLib_initFacetConfigs___closed__2, &l_Lake_LeanLib_initFacetConfigs___closed__2_once, _init_l_Lake_LeanLib_initFacetConfigs___closed__2);
v___x_3896_ = l_Lake_LeanLib_staticFacetConfig;
v___x_3897_ = l_Lake_LeanLib_staticFacet;
v___x_3898_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lake_LeanLib_initFacetConfigs_spec__0___redArg(v___x_3897_, v___x_3896_, v___x_3895_);
return v___x_3898_;
}
}
static lean_object* _init_l_Lake_LeanLib_initFacetConfigs___closed__4(void){
_start:
{
lean_object* v___x_3899_; lean_object* v___x_3900_; lean_object* v___x_3901_; lean_object* v___x_3902_; 
v___x_3899_ = lean_obj_once(&l_Lake_LeanLib_initFacetConfigs___closed__3, &l_Lake_LeanLib_initFacetConfigs___closed__3_once, _init_l_Lake_LeanLib_initFacetConfigs___closed__3);
v___x_3900_ = l_Lake_LeanLib_staticExportFacetConfig;
v___x_3901_ = l_Lake_LeanLib_staticExportFacet;
v___x_3902_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lake_LeanLib_initFacetConfigs_spec__0___redArg(v___x_3901_, v___x_3900_, v___x_3899_);
return v___x_3902_;
}
}
static lean_object* _init_l_Lake_LeanLib_initFacetConfigs___closed__5(void){
_start:
{
lean_object* v___x_3903_; lean_object* v___x_3904_; lean_object* v___x_3905_; lean_object* v___x_3906_; 
v___x_3903_ = lean_obj_once(&l_Lake_LeanLib_initFacetConfigs___closed__4, &l_Lake_LeanLib_initFacetConfigs___closed__4_once, _init_l_Lake_LeanLib_initFacetConfigs___closed__4);
v___x_3904_ = l_Lake_LeanLib_sharedFacetConfig;
v___x_3905_ = l_Lake_LeanLib_sharedFacet;
v___x_3906_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lake_LeanLib_initFacetConfigs_spec__0___redArg(v___x_3905_, v___x_3904_, v___x_3903_);
return v___x_3906_;
}
}
static lean_object* _init_l_Lake_LeanLib_initFacetConfigs___closed__6(void){
_start:
{
lean_object* v___x_3907_; lean_object* v___x_3908_; lean_object* v___x_3909_; lean_object* v___x_3910_; 
v___x_3907_ = lean_obj_once(&l_Lake_LeanLib_initFacetConfigs___closed__5, &l_Lake_LeanLib_initFacetConfigs___closed__5_once, _init_l_Lake_LeanLib_initFacetConfigs___closed__5);
v___x_3908_ = l_Lake_LeanLib_extraDepFacetConfig;
v___x_3909_ = l_Lake_LeanLib_extraDepFacet;
v___x_3910_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lake_LeanLib_initFacetConfigs_spec__0___redArg(v___x_3909_, v___x_3908_, v___x_3907_);
return v___x_3910_;
}
}
static lean_object* _init_l_Lake_LeanLib_initFacetConfigs(void){
_start:
{
lean_object* v___x_3911_; 
v___x_3911_ = lean_obj_once(&l_Lake_LeanLib_initFacetConfigs___closed__6, &l_Lake_LeanLib_initFacetConfigs___closed__6_once, _init_l_Lake_LeanLib_initFacetConfigs___closed__6);
return v___x_3911_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lake_LeanLib_initFacetConfigs_spec__0(lean_object* v_00_u03b2_3912_, lean_object* v_k_3913_, lean_object* v_v_3914_, lean_object* v_t_3915_, lean_object* v_hl_3916_){
_start:
{
lean_object* v___x_3917_; 
v___x_3917_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lake_LeanLib_initFacetConfigs_spec__0___redArg(v_k_3913_, v_v_3914_, v_t_3915_);
return v___x_3917_;
}
}
static lean_object* _init_l_Lake_initLibraryFacetConfigs(void){
_start:
{
lean_object* v___x_3918_; 
v___x_3918_ = l_Lake_LeanLib_initFacetConfigs;
return v___x_3918_;
}
}
lean_object* runtime_initialize_Lake_Config_FacetConfig(uint8_t builtin);
lean_object* runtime_initialize_Lake_Build_Common(uint8_t builtin);
lean_object* runtime_initialize_Lake_Build_Targets(uint8_t builtin);
lean_object* runtime_initialize_Lake_Build_Job_Register(uint8_t builtin);
lean_object* runtime_initialize_Lake_Build_Target_Fetch(uint8_t builtin);
lean_object* runtime_initialize_Lake_Build_Infos(uint8_t builtin);
lean_object* runtime_initialize_Lake_Util_Proc(uint8_t builtin);
void lean_initialize();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lake_Build_Library(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize();
res = runtime_initialize_Lake_Config_FacetConfig(builtin);
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
res = runtime_initialize_Lake_Build_Target_Fetch(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Build_Infos(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Util_Proc(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig = _init_l___private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig();
lean_mark_persistent(l___private_Lake_Build_Library_0__Lake_LeanLib_modulesFacetConfig);
l_Lake_LeanLib_leanArtsFacetConfig = _init_l_Lake_LeanLib_leanArtsFacetConfig();
lean_mark_persistent(l_Lake_LeanLib_leanArtsFacetConfig);
l_Lake_LeanLib_staticFacetConfig = _init_l_Lake_LeanLib_staticFacetConfig();
lean_mark_persistent(l_Lake_LeanLib_staticFacetConfig);
l_Lake_LeanLib_staticExportFacetConfig = _init_l_Lake_LeanLib_staticExportFacetConfig();
lean_mark_persistent(l_Lake_LeanLib_staticExportFacetConfig);
l_Lake_OrdHashSet_empty___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__5 = _init_l_Lake_OrdHashSet_empty___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__5();
lean_mark_persistent(l_Lake_OrdHashSet_empty___at___00__private_Lake_Build_Library_0__Lake_LeanLib_recBuildShared_spec__5);
l_Lake_LeanLib_sharedFacetConfig = _init_l_Lake_LeanLib_sharedFacetConfig();
lean_mark_persistent(l_Lake_LeanLib_sharedFacetConfig);
l_Lake_LeanLib_extraDepFacetConfig = _init_l_Lake_LeanLib_extraDepFacetConfig();
lean_mark_persistent(l_Lake_LeanLib_extraDepFacetConfig);
l_Lake_LeanLib_defaultFacetConfig = _init_l_Lake_LeanLib_defaultFacetConfig();
lean_mark_persistent(l_Lake_LeanLib_defaultFacetConfig);
l_Lake_LeanLib_initFacetConfigs = _init_l_Lake_LeanLib_initFacetConfigs();
lean_mark_persistent(l_Lake_LeanLib_initFacetConfigs);
l_Lake_initLibraryFacetConfigs = _init_l_Lake_initLibraryFacetConfigs();
lean_mark_persistent(l_Lake_initLibraryFacetConfigs);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lake_Build_Library(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lake_Config_FacetConfig(uint8_t builtin);
lean_object* initialize_Lake_Build_Common(uint8_t builtin);
lean_object* initialize_Lake_Build_Targets(uint8_t builtin);
lean_object* initialize_Lake_Build_Job_Register(uint8_t builtin);
lean_object* initialize_Lake_Build_Target_Fetch(uint8_t builtin);
lean_object* initialize_Lake_Build_Infos(uint8_t builtin);
lean_object* initialize_Lake_Util_Proc(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lake_Build_Library(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lake_Config_FacetConfig(builtin);
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
res = initialize_Lake_Build_Target_Fetch(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Build_Infos(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Util_Proc(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Build_Library(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lake_Build_Library(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lake_Build_Library(builtin);
}
#ifdef __cplusplus
}
#endif

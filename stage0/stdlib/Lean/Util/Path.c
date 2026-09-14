// Lean compiler output
// Module: Lean.Util.Path
// Imports: public import Init.System.IO import Init.Control.Do import Init.Data.ToString.Name import Init.Data.String.TakeDrop import Init.Data.List.Monadic import Init.Data.Option.BasicAux import Init.Data.ToString.Macro import Init.Data.String.Length
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
extern uint32_t l_System_FilePath_pathSeparator;
lean_object* lean_string_push(lean_object*, uint32_t);
lean_object* l_System_FilePath_join(lean_object*, lean_object*);
uint8_t lean_internal_is_stage0(lean_object*);
lean_object* l_Lean_Name_getRoot(lean_object*);
lean_object* l_Lean_Name_toString(lean_object*, uint8_t);
uint8_t l_System_FilePath_isDir(lean_object*);
lean_object* l_System_FilePath_addExtension(lean_object*, lean_object*);
uint8_t l_System_FilePath_pathExists(lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_String_intercalate(lean_object*, lean_object*);
lean_object* lean_mk_io_user_error(lean_object*);
lean_object* l_instDecidableEqString___boxed(lean_object*, lean_object*);
lean_object* l_instBEqOfDecidableEq___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_System_FilePath_extension(lean_object*);
uint8_t l_Option_instBEq_beq___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_System_FilePath_withExtension(lean_object*, lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
lean_object* l_System_FilePath_readDir___boxed(lean_object*, lean_object*);
lean_object* l_IO_FS_DirEntry_path(lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
lean_object* lean_io_getenv(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_IO_Process_run(lean_object*, lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
lean_object* l_String_Slice_trimAscii(lean_object*);
lean_object* lean_string_utf8_extract_fast(lean_object*, lean_object*, lean_object*);
lean_object* lean_io_realpath(lean_object*);
lean_object* l_System_FilePath_normalize(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
uint8_t lean_string_memcmp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_string_length(lean_object*);
lean_object* l_String_Slice_Pos_nextn(lean_object*, lean_object*, lean_object*);
lean_object* l_System_FilePath_components(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_io_current_dir();
lean_object* l_System_SearchPath_parse(lean_object*);
lean_object* l_List_appendTR___redArg(lean_object*, lean_object*);
lean_object* lean_st_ref_swap(lean_object*, lean_object*);
lean_object* l_System_FilePath_walkDir(lean_object*, lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_add(size_t, size_t);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_IO_appDir();
lean_object* l_System_FilePath_parent(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
LEAN_EXPORT lean_object* l_Lean_forEachModuleInDir___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_forEachModuleInDir___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_forEachModuleInDir___redArg___lam__3(lean_object*);
LEAN_EXPORT lean_object* l_Lean_forEachModuleInDir___redArg___lam__3___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_forEachModuleInDir___redArg___lam__2(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_forEachModuleInDir___redArg___lam__4___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_forEachModuleInDir___redArg___lam__4___closed__0;
static const lean_string_object l_Lean_forEachModuleInDir___redArg___lam__4___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "lean"};
static const lean_object* l_Lean_forEachModuleInDir___redArg___lam__4___closed__1 = (const lean_object*)&l_Lean_forEachModuleInDir___redArg___lam__4___closed__1_value;
static const lean_ctor_object l_Lean_forEachModuleInDir___redArg___lam__4___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_forEachModuleInDir___redArg___lam__4___closed__1_value)}};
static const lean_object* l_Lean_forEachModuleInDir___redArg___lam__4___closed__2 = (const lean_object*)&l_Lean_forEachModuleInDir___redArg___lam__4___closed__2_value;
static const lean_string_object l_Lean_forEachModuleInDir___redArg___lam__4___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_forEachModuleInDir___redArg___lam__4___closed__3 = (const lean_object*)&l_Lean_forEachModuleInDir___redArg___lam__4___closed__3_value;
static lean_once_cell_t l_Lean_forEachModuleInDir___redArg___lam__4___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_forEachModuleInDir___redArg___lam__4___closed__4;
LEAN_EXPORT lean_object* l_Lean_forEachModuleInDir___redArg___lam__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_forEachModuleInDir___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_forEachModuleInDir___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_forEachModuleInDir___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_forEachModuleInDir___redArg___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_forEachModuleInDir(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_realPathNormalized(lean_object*);
LEAN_EXPORT lean_object* l_Lean_realPathNormalized___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Util_Path_0__Lean_modToFilePath_go_spec__0(lean_object*);
static const lean_string_object l___private_Lean_Util_Path_0__Lean_modToFilePath_go___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "Lean.Util.Path"};
static const lean_object* l___private_Lean_Util_Path_0__Lean_modToFilePath_go___closed__0 = (const lean_object*)&l___private_Lean_Util_Path_0__Lean_modToFilePath_go___closed__0_value;
static const lean_string_object l___private_Lean_Util_Path_0__Lean_modToFilePath_go___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 48, .m_capacity = 48, .m_length = 47, .m_data = "_private.Lean.Util.Path.0.Lean.modToFilePath.go"};
static const lean_object* l___private_Lean_Util_Path_0__Lean_modToFilePath_go___closed__1 = (const lean_object*)&l___private_Lean_Util_Path_0__Lean_modToFilePath_go___closed__1_value;
static const lean_string_object l___private_Lean_Util_Path_0__Lean_modToFilePath_go___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "ill-formed import"};
static const lean_object* l___private_Lean_Util_Path_0__Lean_modToFilePath_go___closed__2 = (const lean_object*)&l___private_Lean_Util_Path_0__Lean_modToFilePath_go___closed__2_value;
static lean_once_cell_t l___private_Lean_Util_Path_0__Lean_modToFilePath_go___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Path_0__Lean_modToFilePath_go___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Util_Path_0__Lean_modToFilePath_go(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Path_0__Lean_modToFilePath_go___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_modToFilePath(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_modToFilePath___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_findM_x3f___at___00Lean_SearchPath_findWithExt_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_findM_x3f___at___00Lean_SearchPath_findWithExt_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SearchPath_findWithExt(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SearchPath_findWithExt___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SearchPath_findModuleWithExt(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SearchPath_findModuleWithExt___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Option_instBEq_beq___at___00Lean_SearchPath_findAllWithExt_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Option_instBEq_beq___at___00Lean_SearchPath_findAllWithExt_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_SearchPath_findAllWithExt_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_SearchPath_findAllWithExt_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_SearchPath_findAllWithExt_spec__2___redArg___lam__0(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_SearchPath_findAllWithExt_spec__2___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_array_object l_List_forIn_x27_loop___at___00Lean_SearchPath_findAllWithExt_spec__2___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_List_forIn_x27_loop___at___00Lean_SearchPath_findAllWithExt_spec__2___redArg___closed__0 = (const lean_object*)&l_List_forIn_x27_loop___at___00Lean_SearchPath_findAllWithExt_spec__2___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_SearchPath_findAllWithExt_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_SearchPath_findAllWithExt_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SearchPath_findAllWithExt(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SearchPath_findAllWithExt___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_SearchPath_findAllWithExt_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_SearchPath_findAllWithExt_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Path_0__Lean_initFn_00___x40_Lean_Util_Path_2007882598____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Util_Path_0__Lean_initFn_00___x40_Lean_Util_Path_2007882598____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_searchPathRef;
static const lean_string_object l_Lean_getBuildDir___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "Init.Data.Option.BasicAux"};
static const lean_object* l_Lean_getBuildDir___closed__0 = (const lean_object*)&l_Lean_getBuildDir___closed__0_value;
static const lean_string_object l_Lean_getBuildDir___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "Option.get!"};
static const lean_object* l_Lean_getBuildDir___closed__1 = (const lean_object*)&l_Lean_getBuildDir___closed__1_value;
static const lean_string_object l_Lean_getBuildDir___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "value is none"};
static const lean_object* l_Lean_getBuildDir___closed__2 = (const lean_object*)&l_Lean_getBuildDir___closed__2_value;
static lean_once_cell_t l_Lean_getBuildDir___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_getBuildDir___closed__3;
LEAN_EXPORT lean_object* l_Lean_getBuildDir();
LEAN_EXPORT lean_object* l_Lean_getBuildDir___boxed(lean_object*);
static const lean_string_object l_Lean_getLibDir___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "lib"};
static const lean_object* l_Lean_getLibDir___closed__0 = (const lean_object*)&l_Lean_getLibDir___closed__0_value;
static lean_once_cell_t l_Lean_getLibDir___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l_Lean_getLibDir___closed__1;
static const lean_string_object l_Lean_getLibDir___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ".."};
static const lean_object* l_Lean_getLibDir___closed__2 = (const lean_object*)&l_Lean_getLibDir___closed__2_value;
static const lean_string_object l_Lean_getLibDir___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "stage1"};
static const lean_object* l_Lean_getLibDir___closed__3 = (const lean_object*)&l_Lean_getLibDir___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_getLibDir(lean_object*);
LEAN_EXPORT lean_object* l_Lean_getLibDir___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getBuiltinSearchPath(lean_object*);
LEAN_EXPORT lean_object* l_Lean_getBuiltinSearchPath___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_addSearchPathFromEnv___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "LEAN_PATH"};
static const lean_object* l_Lean_addSearchPathFromEnv___closed__0 = (const lean_object*)&l_Lean_addSearchPathFromEnv___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_addSearchPathFromEnv(lean_object*);
LEAN_EXPORT lean_object* l_Lean_addSearchPathFromEnv___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_initSearchPath(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_initSearchPath___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lean_init_search_path();
LEAN_EXPORT lean_object* l___private_Lean_Util_Path_0__Lean_initSearchPathInternal___boxed(lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_findOLean_spec__0(lean_object*, lean_object*);
static const lean_string_object l_Lean_findOLean___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "olean"};
static const lean_object* l_Lean_findOLean___closed__0 = (const lean_object*)&l_Lean_findOLean___closed__0_value;
static const lean_string_object l_Lean_findOLean___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "unknown module prefix '"};
static const lean_object* l_Lean_findOLean___closed__1 = (const lean_object*)&l_Lean_findOLean___closed__1_value;
static const lean_string_object l_Lean_findOLean___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "'\n\nNo directory '"};
static const lean_object* l_Lean_findOLean___closed__2 = (const lean_object*)&l_Lean_findOLean___closed__2_value;
static const lean_string_object l_Lean_findOLean___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "' or file '"};
static const lean_object* l_Lean_findOLean___closed__3 = (const lean_object*)&l_Lean_findOLean___closed__3_value;
static const lean_string_object l_Lean_findOLean___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = ".olean' in the search path entries:\n"};
static const lean_object* l_Lean_findOLean___closed__4 = (const lean_object*)&l_Lean_findOLean___closed__4_value;
static const lean_string_object l_Lean_findOLean___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "\n"};
static const lean_object* l_Lean_findOLean___closed__5 = (const lean_object*)&l_Lean_findOLean___closed__5_value;
LEAN_EXPORT lean_object* l_Lean_findOLean(lean_object*);
LEAN_EXPORT lean_object* l_Lean_findOLean___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_findLean___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 36, .m_capacity = 36, .m_length = 35, .m_data = ".lean' in the search path entries:\n"};
static const lean_object* l_Lean_findLean___closed__0 = (const lean_object*)&l_Lean_findLean___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_findLean(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_findLean___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_getSrcSearchPath___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "LEAN_SRC_PATH"};
static const lean_object* l_Lean_getSrcSearchPath___closed__0 = (const lean_object*)&l_Lean_getSrcSearchPath___closed__0_value;
static const lean_string_object l_Lean_getSrcSearchPath___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "src"};
static const lean_object* l_Lean_getSrcSearchPath___closed__1 = (const lean_object*)&l_Lean_getSrcSearchPath___closed__1_value;
static const lean_string_object l_Lean_getSrcSearchPath___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "lake"};
static const lean_object* l_Lean_getSrcSearchPath___closed__2 = (const lean_object*)&l_Lean_getSrcSearchPath___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_getSrcSearchPath();
LEAN_EXPORT lean_object* l_Lean_getSrcSearchPath___boxed(lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_moduleNameOfFileName_spec__0(lean_object*, lean_object*);
static const lean_string_object l_Lean_moduleNameOfFileName___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "input file '"};
static const lean_object* l_Lean_moduleNameOfFileName___closed__0 = (const lean_object*)&l_Lean_moduleNameOfFileName___closed__0_value;
static const lean_string_object l_Lean_moduleNameOfFileName___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 40, .m_capacity = 40, .m_length = 39, .m_data = "' must be contained in root directory ("};
static const lean_object* l_Lean_moduleNameOfFileName___closed__1 = (const lean_object*)&l_Lean_moduleNameOfFileName___closed__1_value;
static const lean_string_object l_Lean_moduleNameOfFileName___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l_Lean_moduleNameOfFileName___closed__2 = (const lean_object*)&l_Lean_moduleNameOfFileName___closed__2_value;
static lean_once_cell_t l_Lean_moduleNameOfFileName___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_moduleNameOfFileName___closed__3;
static lean_once_cell_t l_Lean_moduleNameOfFileName___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_moduleNameOfFileName___closed__4;
LEAN_EXPORT lean_object* l_Lean_moduleNameOfFileName(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_moduleNameOfFileName___boxed(lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_List_forIn_x27_loop___at___00Lean_searchModuleNameOfFileName_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_List_forIn_x27_loop___at___00Lean_searchModuleNameOfFileName_spec__0___redArg___closed__0 = (const lean_object*)&l_List_forIn_x27_loop___at___00Lean_searchModuleNameOfFileName_spec__0___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_searchModuleNameOfFileName_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_searchModuleNameOfFileName_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_searchModuleNameOfFileName(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_searchModuleNameOfFileName___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_searchModuleNameOfFileName_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_searchModuleNameOfFileName_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_findSysroot___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "LEAN_SYSROOT"};
static const lean_object* l_Lean_findSysroot___closed__0 = (const lean_object*)&l_Lean_findSysroot___closed__0_value;
static const lean_ctor_object l_Lean_findSysroot___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(1, 1, 1, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lean_findSysroot___closed__1 = (const lean_object*)&l_Lean_findSysroot___closed__1_value;
static const lean_string_object l_Lean_findSysroot___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "--print-prefix"};
static const lean_object* l_Lean_findSysroot___closed__2 = (const lean_object*)&l_Lean_findSysroot___closed__2_value;
static const lean_array_object l_Lean_findSysroot___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 246}, .m_size = 1, .m_capacity = 1, .m_data = {((lean_object*)&l_Lean_findSysroot___closed__2_value)}};
static const lean_object* l_Lean_findSysroot___closed__3 = (const lean_object*)&l_Lean_findSysroot___closed__3_value;
static const lean_array_object l_Lean_findSysroot___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_findSysroot___closed__4 = (const lean_object*)&l_Lean_findSysroot___closed__4_value;
LEAN_EXPORT lean_object* l_Lean_findSysroot(lean_object*);
LEAN_EXPORT lean_object* l_Lean_findSysroot___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_forEachModuleInDir___redArg___lam__0(lean_object* v_toPure_1_, lean_object* v_____s_2_){
_start:
{
lean_object* v___x_3_; lean_object* v___x_4_; 
v___x_3_ = lean_box(0);
v___x_4_ = lean_apply_2(v_toPure_1_, lean_box(0), v___x_3_);
return v___x_4_;
}
}
LEAN_EXPORT lean_object* l_Lean_forEachModuleInDir___redArg___lam__1(lean_object* v___x_5_, lean_object* v_toPure_6_, lean_object* v_r_7_){
_start:
{
lean_object* v___x_8_; lean_object* v___x_9_; 
v___x_8_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_8_, 0, v___x_5_);
v___x_9_ = lean_apply_2(v_toPure_6_, lean_box(0), v___x_8_);
return v___x_9_;
}
}
LEAN_EXPORT lean_object* l_Lean_forEachModuleInDir___redArg___lam__3(lean_object* v___x_10_){
_start:
{
uint8_t v___x_12_; lean_object* v___x_13_; lean_object* v___x_14_; 
v___x_12_ = l_System_FilePath_isDir(v___x_10_);
v___x_13_ = lean_box(v___x_12_);
v___x_14_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_14_, 0, v___x_13_);
return v___x_14_;
}
}
LEAN_EXPORT lean_object* l_Lean_forEachModuleInDir___redArg___lam__3___boxed(lean_object* v___x_15_, lean_object* v___y_16_){
_start:
{
lean_object* v_res_17_; 
v_res_17_ = l_Lean_forEachModuleInDir___redArg___lam__3(v___x_15_);
lean_dec_ref(v___x_15_);
return v_res_17_;
}
}
LEAN_EXPORT lean_object* l_Lean_forEachModuleInDir___redArg___lam__2(lean_object* v___x_18_, lean_object* v_f_19_, lean_object* v_x_20_){
_start:
{
lean_object* v___x_21_; lean_object* v___x_22_; 
v___x_21_ = l_Lean_Name_append(v___x_18_, v_x_20_);
v___x_22_ = lean_apply_1(v_f_19_, v___x_21_);
return v___x_22_;
}
}
static lean_object* _init_l_Lean_forEachModuleInDir___redArg___lam__4___closed__0(void){
_start:
{
lean_object* v___x_23_; lean_object* v___f_24_; 
v___x_23_ = lean_alloc_closure((void*)(l_instDecidableEqString___boxed), 2, 0);
v___f_24_ = lean_alloc_closure((void*)(l_instBEqOfDecidableEq___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_24_, 0, v___x_23_);
return v___f_24_;
}
}
static lean_object* _init_l_Lean_forEachModuleInDir___redArg___lam__4___closed__4(void){
_start:
{
lean_object* v___x_29_; lean_object* v___x_30_; 
v___x_29_ = lean_box(0);
v___x_30_ = l_unsafeCast___redArg(v___x_29_);
return v___x_30_;
}
}
LEAN_EXPORT lean_object* l_Lean_forEachModuleInDir___redArg___lam__6(lean_object* v_toPure_31_, lean_object* v_f_32_, lean_object* v_toBind_33_, lean_object* v_inst_34_, lean_object* v_inst_35_, lean_object* v___f_36_, lean_object* v_____do__lift_37_){
_start:
{
lean_object* v___x_38_; lean_object* v___f_39_; lean_object* v___f_40_; size_t v_sz_41_; size_t v___x_42_; lean_object* v___x_43_; lean_object* v___x_44_; 
v___x_38_ = lean_box(0);
lean_inc(v_toPure_31_);
v___f_39_ = lean_alloc_closure((void*)(l_Lean_forEachModuleInDir___redArg___lam__1), 3, 2);
lean_closure_set(v___f_39_, 0, v___x_38_);
lean_closure_set(v___f_39_, 1, v_toPure_31_);
lean_inc_ref(v_inst_34_);
lean_inc_ref(v___f_39_);
lean_inc(v_toBind_33_);
v___f_40_ = lean_alloc_closure((void*)(l_Lean_forEachModuleInDir___redArg___lam__5), 11, 8);
lean_closure_set(v___f_40_, 0, v___x_38_);
lean_closure_set(v___f_40_, 1, v_toPure_31_);
lean_closure_set(v___f_40_, 2, v_f_32_);
lean_closure_set(v___f_40_, 3, v_toBind_33_);
lean_closure_set(v___f_40_, 4, v___f_39_);
lean_closure_set(v___f_40_, 5, v_inst_34_);
lean_closure_set(v___f_40_, 6, v_inst_35_);
lean_closure_set(v___f_40_, 7, v___f_39_);
v_sz_41_ = lean_array_size(v_____do__lift_37_);
v___x_42_ = ((size_t)0ULL);
v___x_43_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_box(0), lean_box(0), lean_box(0), v_inst_34_, v_____do__lift_37_, v___f_40_, v_sz_41_, v___x_42_, v___x_38_);
v___x_44_ = lean_apply_4(v_toBind_33_, lean_box(0), lean_box(0), v___x_43_, v___f_36_);
return v___x_44_;
}
}
LEAN_EXPORT lean_object* l_Lean_forEachModuleInDir___redArg(lean_object* v_inst_45_, lean_object* v_inst_46_, lean_object* v_dir_47_, lean_object* v_f_48_){
_start:
{
lean_object* v_toApplicative_49_; lean_object* v_toBind_50_; lean_object* v_toPure_51_; lean_object* v___x_52_; lean_object* v___x_53_; lean_object* v___f_54_; lean_object* v___f_55_; lean_object* v___x_56_; 
v_toApplicative_49_ = lean_ctor_get(v_inst_45_, 0);
v_toBind_50_ = lean_ctor_get(v_inst_45_, 1);
lean_inc_n(v_toBind_50_, 2);
v_toPure_51_ = lean_ctor_get(v_toApplicative_49_, 1);
lean_inc_n(v_toPure_51_, 2);
v___x_52_ = lean_alloc_closure((void*)(l_System_FilePath_readDir___boxed), 2, 1);
lean_closure_set(v___x_52_, 0, v_dir_47_);
lean_inc(v_inst_46_);
v___x_53_ = lean_apply_2(v_inst_46_, lean_box(0), v___x_52_);
v___f_54_ = lean_alloc_closure((void*)(l_Lean_forEachModuleInDir___redArg___lam__0), 2, 1);
lean_closure_set(v___f_54_, 0, v_toPure_51_);
v___f_55_ = lean_alloc_closure((void*)(l_Lean_forEachModuleInDir___redArg___lam__6), 7, 6);
lean_closure_set(v___f_55_, 0, v_toPure_51_);
lean_closure_set(v___f_55_, 1, v_f_48_);
lean_closure_set(v___f_55_, 2, v_toBind_50_);
lean_closure_set(v___f_55_, 3, v_inst_45_);
lean_closure_set(v___f_55_, 4, v_inst_46_);
lean_closure_set(v___f_55_, 5, v___f_54_);
v___x_56_ = lean_apply_4(v_toBind_50_, lean_box(0), lean_box(0), v___x_53_, v___f_55_);
return v___x_56_;
}
}
LEAN_EXPORT lean_object* l_Lean_forEachModuleInDir___redArg___lam__4(lean_object* v___x_57_, lean_object* v___x_58_, lean_object* v_toPure_59_, lean_object* v_a_60_, lean_object* v_f_61_, lean_object* v_toBind_62_, lean_object* v___f_63_, lean_object* v_inst_64_, lean_object* v_inst_65_, lean_object* v___f_66_, uint8_t v_____do__lift_67_){
_start:
{
if (v_____do__lift_67_ == 0)
{
lean_object* v___f_68_; lean_object* v___x_69_; lean_object* v___x_70_; uint8_t v___x_71_; 
lean_dec(v___f_66_);
lean_dec(v_inst_65_);
lean_dec_ref(v_inst_64_);
v___f_68_ = lean_obj_once(&l_Lean_forEachModuleInDir___redArg___lam__4___closed__0, &l_Lean_forEachModuleInDir___redArg___lam__4___closed__0_once, _init_l_Lean_forEachModuleInDir___redArg___lam__4___closed__0);
v___x_69_ = l_System_FilePath_extension(v___x_57_);
v___x_70_ = ((lean_object*)(l_Lean_forEachModuleInDir___redArg___lam__4___closed__2));
v___x_71_ = l_Option_instBEq_beq___redArg(v___f_68_, v___x_69_, v___x_70_);
if (v___x_71_ == 0)
{
lean_object* v___x_72_; lean_object* v___x_73_; 
lean_dec(v___f_63_);
lean_dec(v_toBind_62_);
lean_dec(v_f_61_);
lean_dec_ref(v_a_60_);
v___x_72_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_72_, 0, v___x_58_);
v___x_73_ = lean_apply_2(v_toPure_59_, lean_box(0), v___x_72_);
return v___x_73_;
}
else
{
lean_object* v_fileName_74_; lean_object* v___x_75_; lean_object* v___x_76_; lean_object* v___x_77_; lean_object* v___x_78_; lean_object* v___x_79_; lean_object* v___x_80_; 
lean_dec(v_toPure_59_);
v_fileName_74_ = lean_ctor_get(v_a_60_, 1);
lean_inc_ref(v_fileName_74_);
lean_dec_ref(v_a_60_);
v___x_75_ = ((lean_object*)(l_Lean_forEachModuleInDir___redArg___lam__4___closed__3));
v___x_76_ = l_System_FilePath_withExtension(v_fileName_74_, v___x_75_);
v___x_77_ = lean_obj_once(&l_Lean_forEachModuleInDir___redArg___lam__4___closed__4, &l_Lean_forEachModuleInDir___redArg___lam__4___closed__4_once, _init_l_Lean_forEachModuleInDir___redArg___lam__4___closed__4);
v___x_78_ = l_Lean_Name_str___override(v___x_77_, v___x_76_);
v___x_79_ = lean_apply_1(v_f_61_, v___x_78_);
v___x_80_ = lean_apply_4(v_toBind_62_, lean_box(0), lean_box(0), v___x_79_, v___f_63_);
return v___x_80_;
}
}
else
{
lean_object* v_fileName_81_; lean_object* v___x_82_; lean_object* v___x_83_; lean_object* v___f_84_; lean_object* v___x_85_; lean_object* v___x_86_; 
lean_dec(v___f_63_);
lean_dec(v_toPure_59_);
v_fileName_81_ = lean_ctor_get(v_a_60_, 1);
lean_inc_ref(v_fileName_81_);
lean_dec_ref(v_a_60_);
v___x_82_ = lean_obj_once(&l_Lean_forEachModuleInDir___redArg___lam__4___closed__4, &l_Lean_forEachModuleInDir___redArg___lam__4___closed__4_once, _init_l_Lean_forEachModuleInDir___redArg___lam__4___closed__4);
v___x_83_ = l_Lean_Name_str___override(v___x_82_, v_fileName_81_);
v___f_84_ = lean_alloc_closure((void*)(l_Lean_forEachModuleInDir___redArg___lam__2), 3, 2);
lean_closure_set(v___f_84_, 0, v___x_83_);
lean_closure_set(v___f_84_, 1, v_f_61_);
v___x_85_ = l_Lean_forEachModuleInDir___redArg(v_inst_64_, v_inst_65_, v___x_57_, v___f_84_);
v___x_86_ = lean_apply_4(v_toBind_62_, lean_box(0), lean_box(0), v___x_85_, v___f_66_);
return v___x_86_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_forEachModuleInDir___redArg___lam__4___boxed(lean_object* v___x_87_, lean_object* v___x_88_, lean_object* v_toPure_89_, lean_object* v_a_90_, lean_object* v_f_91_, lean_object* v_toBind_92_, lean_object* v___f_93_, lean_object* v_inst_94_, lean_object* v_inst_95_, lean_object* v___f_96_, lean_object* v_____do__lift_97_){
_start:
{
uint8_t v_____do__lift_395__boxed_98_; lean_object* v_res_99_; 
v_____do__lift_395__boxed_98_ = lean_unbox(v_____do__lift_97_);
v_res_99_ = l_Lean_forEachModuleInDir___redArg___lam__4(v___x_87_, v___x_88_, v_toPure_89_, v_a_90_, v_f_91_, v_toBind_92_, v___f_93_, v_inst_94_, v_inst_95_, v___f_96_, v_____do__lift_395__boxed_98_);
return v_res_99_;
}
}
LEAN_EXPORT lean_object* l_Lean_forEachModuleInDir___redArg___lam__5(lean_object* v___x_100_, lean_object* v_toPure_101_, lean_object* v_f_102_, lean_object* v_toBind_103_, lean_object* v___f_104_, lean_object* v_inst_105_, lean_object* v_inst_106_, lean_object* v___f_107_, lean_object* v_a_108_, lean_object* v_x_109_, lean_object* v___y_110_){
_start:
{
lean_object* v___x_111_; lean_object* v___f_112_; lean_object* v___f_113_; lean_object* v___x_114_; lean_object* v___x_115_; 
lean_inc_ref(v_a_108_);
v___x_111_ = l_IO_FS_DirEntry_path(v_a_108_);
lean_inc_ref(v___x_111_);
v___f_112_ = lean_alloc_closure((void*)(l_Lean_forEachModuleInDir___redArg___lam__3___boxed), 2, 1);
lean_closure_set(v___f_112_, 0, v___x_111_);
lean_inc(v_inst_106_);
lean_inc(v_toBind_103_);
v___f_113_ = lean_alloc_closure((void*)(l_Lean_forEachModuleInDir___redArg___lam__4___boxed), 11, 10);
lean_closure_set(v___f_113_, 0, v___x_111_);
lean_closure_set(v___f_113_, 1, v___x_100_);
lean_closure_set(v___f_113_, 2, v_toPure_101_);
lean_closure_set(v___f_113_, 3, v_a_108_);
lean_closure_set(v___f_113_, 4, v_f_102_);
lean_closure_set(v___f_113_, 5, v_toBind_103_);
lean_closure_set(v___f_113_, 6, v___f_104_);
lean_closure_set(v___f_113_, 7, v_inst_105_);
lean_closure_set(v___f_113_, 8, v_inst_106_);
lean_closure_set(v___f_113_, 9, v___f_107_);
v___x_114_ = lean_apply_2(v_inst_106_, lean_box(0), v___f_112_);
v___x_115_ = lean_apply_4(v_toBind_103_, lean_box(0), lean_box(0), v___x_114_, v___f_113_);
return v___x_115_;
}
}
LEAN_EXPORT lean_object* l_Lean_forEachModuleInDir(lean_object* v_m_116_, lean_object* v_inst_117_, lean_object* v_inst_118_, lean_object* v_dir_119_, lean_object* v_f_120_){
_start:
{
lean_object* v___x_121_; 
v___x_121_ = l_Lean_forEachModuleInDir___redArg(v_inst_117_, v_inst_118_, v_dir_119_, v_f_120_);
return v___x_121_;
}
}
LEAN_EXPORT lean_object* l_Lean_realPathNormalized(lean_object* v_p_122_){
_start:
{
lean_object* v___x_124_; 
v___x_124_ = lean_io_realpath(v_p_122_);
if (lean_obj_tag(v___x_124_) == 0)
{
lean_object* v_a_125_; lean_object* v___x_127_; uint8_t v_isShared_128_; uint8_t v_isSharedCheck_133_; 
v_a_125_ = lean_ctor_get(v___x_124_, 0);
v_isSharedCheck_133_ = !lean_is_exclusive(v___x_124_);
if (v_isSharedCheck_133_ == 0)
{
v___x_127_ = v___x_124_;
v_isShared_128_ = v_isSharedCheck_133_;
goto v_resetjp_126_;
}
else
{
lean_inc(v_a_125_);
lean_dec(v___x_124_);
v___x_127_ = lean_box(0);
v_isShared_128_ = v_isSharedCheck_133_;
goto v_resetjp_126_;
}
v_resetjp_126_:
{
lean_object* v___x_129_; lean_object* v___x_131_; 
v___x_129_ = l_System_FilePath_normalize(v_a_125_);
if (v_isShared_128_ == 0)
{
lean_ctor_set(v___x_127_, 0, v___x_129_);
v___x_131_ = v___x_127_;
goto v_reusejp_130_;
}
else
{
lean_object* v_reuseFailAlloc_132_; 
v_reuseFailAlloc_132_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_132_, 0, v___x_129_);
v___x_131_ = v_reuseFailAlloc_132_;
goto v_reusejp_130_;
}
v_reusejp_130_:
{
return v___x_131_;
}
}
}
else
{
return v___x_124_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_realPathNormalized___boxed(lean_object* v_p_134_, lean_object* v_a_135_){
_start:
{
lean_object* v_res_136_; 
v_res_136_ = l_Lean_realPathNormalized(v_p_134_);
return v_res_136_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Util_Path_0__Lean_modToFilePath_go_spec__0(lean_object* v_msg_137_){
_start:
{
lean_object* v___x_138_; lean_object* v___x_139_; 
v___x_138_ = ((lean_object*)(l_Lean_forEachModuleInDir___redArg___lam__4___closed__3));
v___x_139_ = lean_panic_fn_borrowed(v___x_138_, v_msg_137_);
return v___x_139_;
}
}
static lean_object* _init_l___private_Lean_Util_Path_0__Lean_modToFilePath_go___closed__3(void){
_start:
{
lean_object* v___x_143_; lean_object* v___x_144_; lean_object* v___x_145_; lean_object* v___x_146_; lean_object* v___x_147_; lean_object* v___x_148_; 
v___x_143_ = ((lean_object*)(l___private_Lean_Util_Path_0__Lean_modToFilePath_go___closed__2));
v___x_144_ = lean_unsigned_to_nat(20u);
v___x_145_ = lean_unsigned_to_nat(51u);
v___x_146_ = ((lean_object*)(l___private_Lean_Util_Path_0__Lean_modToFilePath_go___closed__1));
v___x_147_ = ((lean_object*)(l___private_Lean_Util_Path_0__Lean_modToFilePath_go___closed__0));
v___x_148_ = l_mkPanicMessageWithDecl(v___x_147_, v___x_146_, v___x_145_, v___x_144_, v___x_143_);
return v___x_148_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Path_0__Lean_modToFilePath_go(lean_object* v_base_149_, lean_object* v_a_150_){
_start:
{
switch(lean_obj_tag(v_a_150_))
{
case 0:
{
lean_inc_ref(v_base_149_);
return v_base_149_;
}
case 1:
{
lean_object* v_pre_151_; lean_object* v_str_152_; lean_object* v___x_153_; lean_object* v___x_154_; 
v_pre_151_ = lean_ctor_get(v_a_150_, 0);
lean_inc(v_pre_151_);
v_str_152_ = lean_ctor_get(v_a_150_, 1);
lean_inc_ref(v_str_152_);
lean_dec_ref_known(v_a_150_, 2);
v___x_153_ = l___private_Lean_Util_Path_0__Lean_modToFilePath_go(v_base_149_, v_pre_151_);
v___x_154_ = l_System_FilePath_join(v___x_153_, v_str_152_);
return v___x_154_;
}
default: 
{
lean_object* v___x_155_; lean_object* v___x_156_; 
lean_dec_ref_known(v_a_150_, 2);
v___x_155_ = lean_obj_once(&l___private_Lean_Util_Path_0__Lean_modToFilePath_go___closed__3, &l___private_Lean_Util_Path_0__Lean_modToFilePath_go___closed__3_once, _init_l___private_Lean_Util_Path_0__Lean_modToFilePath_go___closed__3);
v___x_156_ = l_panic___at___00__private_Lean_Util_Path_0__Lean_modToFilePath_go_spec__0(v___x_155_);
return v___x_156_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Path_0__Lean_modToFilePath_go___boxed(lean_object* v_base_157_, lean_object* v_a_158_){
_start:
{
lean_object* v_res_159_; 
v_res_159_ = l___private_Lean_Util_Path_0__Lean_modToFilePath_go(v_base_157_, v_a_158_);
lean_dec_ref(v_base_157_);
return v_res_159_;
}
}
LEAN_EXPORT lean_object* l_Lean_modToFilePath(lean_object* v_base_160_, lean_object* v_mod_161_, lean_object* v_ext_162_){
_start:
{
lean_object* v___x_163_; lean_object* v___x_164_; 
v___x_163_ = l___private_Lean_Util_Path_0__Lean_modToFilePath_go(v_base_160_, v_mod_161_);
v___x_164_ = l_System_FilePath_addExtension(v___x_163_, v_ext_162_);
return v___x_164_;
}
}
LEAN_EXPORT lean_object* l_Lean_modToFilePath___boxed(lean_object* v_base_165_, lean_object* v_mod_166_, lean_object* v_ext_167_){
_start:
{
lean_object* v_res_168_; 
v_res_168_ = l_Lean_modToFilePath(v_base_165_, v_mod_166_, v_ext_167_);
lean_dec_ref(v_ext_167_);
lean_dec_ref(v_base_165_);
return v_res_168_;
}
}
LEAN_EXPORT lean_object* l_List_findM_x3f___at___00Lean_SearchPath_findWithExt_spec__0(lean_object* v_pkg_169_, lean_object* v_ext_170_, lean_object* v_x_171_){
_start:
{
if (lean_obj_tag(v_x_171_) == 0)
{
lean_object* v___x_173_; lean_object* v___x_174_; 
lean_dec_ref(v_pkg_169_);
v___x_173_ = lean_box(0);
v___x_174_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_174_, 0, v___x_173_);
return v___x_174_;
}
else
{
lean_object* v_head_175_; lean_object* v_tail_176_; lean_object* v___x_180_; uint8_t v___x_181_; 
v_head_175_ = lean_ctor_get(v_x_171_, 0);
lean_inc_n(v_head_175_, 2);
v_tail_176_ = lean_ctor_get(v_x_171_, 1);
lean_inc(v_tail_176_);
lean_dec_ref_known(v_x_171_, 2);
lean_inc_ref(v_pkg_169_);
v___x_180_ = l_System_FilePath_join(v_head_175_, v_pkg_169_);
v___x_181_ = l_System_FilePath_isDir(v___x_180_);
if (v___x_181_ == 0)
{
lean_object* v___x_182_; uint8_t v___x_183_; 
v___x_182_ = l_System_FilePath_addExtension(v___x_180_, v_ext_170_);
v___x_183_ = l_System_FilePath_pathExists(v___x_182_);
lean_dec_ref(v___x_182_);
if (v___x_183_ == 0)
{
lean_dec(v_head_175_);
v_x_171_ = v_tail_176_;
goto _start;
}
else
{
lean_dec(v_tail_176_);
lean_dec_ref(v_pkg_169_);
goto v___jp_177_;
}
}
else
{
lean_dec_ref(v___x_180_);
lean_dec(v_tail_176_);
lean_dec_ref(v_pkg_169_);
goto v___jp_177_;
}
v___jp_177_:
{
lean_object* v___x_178_; lean_object* v___x_179_; 
v___x_178_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_178_, 0, v_head_175_);
v___x_179_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_179_, 0, v___x_178_);
return v___x_179_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_findM_x3f___at___00Lean_SearchPath_findWithExt_spec__0___boxed(lean_object* v_pkg_185_, lean_object* v_ext_186_, lean_object* v_x_187_, lean_object* v___y_188_){
_start:
{
lean_object* v_res_189_; 
v_res_189_ = l_List_findM_x3f___at___00Lean_SearchPath_findWithExt_spec__0(v_pkg_185_, v_ext_186_, v_x_187_);
lean_dec_ref(v_ext_186_);
return v_res_189_;
}
}
LEAN_EXPORT lean_object* l_Lean_SearchPath_findWithExt(lean_object* v_sp_190_, lean_object* v_ext_191_, lean_object* v_mod_192_){
_start:
{
lean_object* v___x_194_; uint8_t v___x_195_; lean_object* v_pkg_196_; lean_object* v___x_197_; lean_object* v_a_198_; 
v___x_194_ = l_Lean_Name_getRoot(v_mod_192_);
v___x_195_ = 0;
v_pkg_196_ = l_Lean_Name_toString(v___x_194_, v___x_195_);
v___x_197_ = l_List_findM_x3f___at___00Lean_SearchPath_findWithExt_spec__0(v_pkg_196_, v_ext_191_, v_sp_190_);
v_a_198_ = lean_ctor_get(v___x_197_, 0);
lean_inc(v_a_198_);
if (lean_obj_tag(v_a_198_) == 0)
{
lean_dec(v_mod_192_);
return v___x_197_;
}
else
{
lean_object* v___x_200_; uint8_t v_isShared_201_; uint8_t v_isSharedCheck_214_; 
v_isSharedCheck_214_ = !lean_is_exclusive(v___x_197_);
if (v_isSharedCheck_214_ == 0)
{
lean_object* v_unused_215_; 
v_unused_215_ = lean_ctor_get(v___x_197_, 0);
lean_dec(v_unused_215_);
v___x_200_ = v___x_197_;
v_isShared_201_ = v_isSharedCheck_214_;
goto v_resetjp_199_;
}
else
{
lean_dec(v___x_197_);
v___x_200_ = lean_box(0);
v_isShared_201_ = v_isSharedCheck_214_;
goto v_resetjp_199_;
}
v_resetjp_199_:
{
lean_object* v_val_202_; lean_object* v___x_204_; uint8_t v_isShared_205_; uint8_t v_isSharedCheck_213_; 
v_val_202_ = lean_ctor_get(v_a_198_, 0);
v_isSharedCheck_213_ = !lean_is_exclusive(v_a_198_);
if (v_isSharedCheck_213_ == 0)
{
v___x_204_ = v_a_198_;
v_isShared_205_ = v_isSharedCheck_213_;
goto v_resetjp_203_;
}
else
{
lean_inc(v_val_202_);
lean_dec(v_a_198_);
v___x_204_ = lean_box(0);
v_isShared_205_ = v_isSharedCheck_213_;
goto v_resetjp_203_;
}
v_resetjp_203_:
{
lean_object* v___x_206_; lean_object* v___x_208_; 
v___x_206_ = l_Lean_modToFilePath(v_val_202_, v_mod_192_, v_ext_191_);
lean_dec(v_val_202_);
if (v_isShared_205_ == 0)
{
lean_ctor_set(v___x_204_, 0, v___x_206_);
v___x_208_ = v___x_204_;
goto v_reusejp_207_;
}
else
{
lean_object* v_reuseFailAlloc_212_; 
v_reuseFailAlloc_212_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_212_, 0, v___x_206_);
v___x_208_ = v_reuseFailAlloc_212_;
goto v_reusejp_207_;
}
v_reusejp_207_:
{
lean_object* v___x_210_; 
if (v_isShared_201_ == 0)
{
lean_ctor_set(v___x_200_, 0, v___x_208_);
v___x_210_ = v___x_200_;
goto v_reusejp_209_;
}
else
{
lean_object* v_reuseFailAlloc_211_; 
v_reuseFailAlloc_211_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_211_, 0, v___x_208_);
v___x_210_ = v_reuseFailAlloc_211_;
goto v_reusejp_209_;
}
v_reusejp_209_:
{
return v___x_210_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_SearchPath_findWithExt___boxed(lean_object* v_sp_216_, lean_object* v_ext_217_, lean_object* v_mod_218_, lean_object* v_a_219_){
_start:
{
lean_object* v_res_220_; 
v_res_220_ = l_Lean_SearchPath_findWithExt(v_sp_216_, v_ext_217_, v_mod_218_);
lean_dec_ref(v_ext_217_);
return v_res_220_;
}
}
LEAN_EXPORT lean_object* l_Lean_SearchPath_findModuleWithExt(lean_object* v_sp_221_, lean_object* v_ext_222_, lean_object* v_mod_223_){
_start:
{
lean_object* v___x_228_; lean_object* v_a_229_; lean_object* v___x_231_; uint8_t v_isShared_232_; uint8_t v_isSharedCheck_238_; 
v___x_228_ = l_Lean_SearchPath_findWithExt(v_sp_221_, v_ext_222_, v_mod_223_);
v_a_229_ = lean_ctor_get(v___x_228_, 0);
v_isSharedCheck_238_ = !lean_is_exclusive(v___x_228_);
if (v_isSharedCheck_238_ == 0)
{
v___x_231_ = v___x_228_;
v_isShared_232_ = v_isSharedCheck_238_;
goto v_resetjp_230_;
}
else
{
lean_inc(v_a_229_);
lean_dec(v___x_228_);
v___x_231_ = lean_box(0);
v_isShared_232_ = v_isSharedCheck_238_;
goto v_resetjp_230_;
}
v___jp_225_:
{
lean_object* v___x_226_; lean_object* v___x_227_; 
v___x_226_ = lean_box(0);
v___x_227_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_227_, 0, v___x_226_);
return v___x_227_;
}
v_resetjp_230_:
{
if (lean_obj_tag(v_a_229_) == 1)
{
lean_object* v_val_233_; uint8_t v___x_234_; 
v_val_233_ = lean_ctor_get(v_a_229_, 0);
v___x_234_ = l_System_FilePath_pathExists(v_val_233_);
if (v___x_234_ == 0)
{
lean_dec_ref_known(v_a_229_, 1);
lean_del_object(v___x_231_);
goto v___jp_225_;
}
else
{
lean_object* v___x_236_; 
if (v_isShared_232_ == 0)
{
v___x_236_ = v___x_231_;
goto v_reusejp_235_;
}
else
{
lean_object* v_reuseFailAlloc_237_; 
v_reuseFailAlloc_237_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_237_, 0, v_a_229_);
v___x_236_ = v_reuseFailAlloc_237_;
goto v_reusejp_235_;
}
v_reusejp_235_:
{
return v___x_236_;
}
}
}
else
{
lean_del_object(v___x_231_);
lean_dec(v_a_229_);
goto v___jp_225_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_SearchPath_findModuleWithExt___boxed(lean_object* v_sp_239_, lean_object* v_ext_240_, lean_object* v_mod_241_, lean_object* v_a_242_){
_start:
{
lean_object* v_res_243_; 
v_res_243_ = l_Lean_SearchPath_findModuleWithExt(v_sp_239_, v_ext_240_, v_mod_241_);
lean_dec_ref(v_ext_240_);
return v_res_243_;
}
}
LEAN_EXPORT uint8_t l_Option_instBEq_beq___at___00Lean_SearchPath_findAllWithExt_spec__0(lean_object* v_x_244_, lean_object* v_x_245_){
_start:
{
if (lean_obj_tag(v_x_244_) == 0)
{
if (lean_obj_tag(v_x_245_) == 0)
{
uint8_t v___x_246_; 
v___x_246_ = 1;
return v___x_246_;
}
else
{
uint8_t v___x_247_; 
v___x_247_ = 0;
return v___x_247_;
}
}
else
{
if (lean_obj_tag(v_x_245_) == 0)
{
uint8_t v___x_248_; 
v___x_248_ = 0;
return v___x_248_;
}
else
{
lean_object* v_val_249_; lean_object* v_val_250_; uint8_t v___x_251_; 
v_val_249_ = lean_ctor_get(v_x_244_, 0);
v_val_250_ = lean_ctor_get(v_x_245_, 0);
v___x_251_ = lean_string_dec_eq(v_val_249_, v_val_250_);
return v___x_251_;
}
}
}
}
LEAN_EXPORT lean_object* l_Option_instBEq_beq___at___00Lean_SearchPath_findAllWithExt_spec__0___boxed(lean_object* v_x_252_, lean_object* v_x_253_){
_start:
{
uint8_t v_res_254_; lean_object* v_r_255_; 
v_res_254_ = l_Option_instBEq_beq___at___00Lean_SearchPath_findAllWithExt_spec__0(v_x_252_, v_x_253_);
lean_dec(v_x_253_);
lean_dec(v_x_252_);
v_r_255_ = lean_box(v_res_254_);
return v_r_255_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_SearchPath_findAllWithExt_spec__1(lean_object* v_ext_256_, lean_object* v_as_257_, size_t v_i_258_, size_t v_stop_259_, lean_object* v_b_260_){
_start:
{
lean_object* v___y_262_; uint8_t v___x_266_; 
v___x_266_ = lean_usize_dec_eq(v_i_258_, v_stop_259_);
if (v___x_266_ == 0)
{
lean_object* v___x_267_; lean_object* v___x_268_; lean_object* v___x_269_; uint8_t v___x_270_; 
v___x_267_ = lean_array_uget_borrowed(v_as_257_, v_i_258_);
lean_inc(v___x_267_);
v___x_268_ = l_System_FilePath_extension(v___x_267_);
lean_inc_ref(v_ext_256_);
v___x_269_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_269_, 0, v_ext_256_);
v___x_270_ = l_Option_instBEq_beq___at___00Lean_SearchPath_findAllWithExt_spec__0(v___x_268_, v___x_269_);
lean_dec_ref_known(v___x_269_, 1);
lean_dec(v___x_268_);
if (v___x_270_ == 0)
{
v___y_262_ = v_b_260_;
goto v___jp_261_;
}
else
{
lean_object* v___x_271_; 
lean_inc(v___x_267_);
v___x_271_ = lean_array_push(v_b_260_, v___x_267_);
v___y_262_ = v___x_271_;
goto v___jp_261_;
}
}
else
{
lean_dec_ref(v_ext_256_);
return v_b_260_;
}
v___jp_261_:
{
size_t v___x_263_; size_t v___x_264_; 
v___x_263_ = ((size_t)1ULL);
v___x_264_ = lean_usize_add(v_i_258_, v___x_263_);
v_i_258_ = v___x_264_;
v_b_260_ = v___y_262_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_SearchPath_findAllWithExt_spec__1___boxed(lean_object* v_ext_272_, lean_object* v_as_273_, lean_object* v_i_274_, lean_object* v_stop_275_, lean_object* v_b_276_){
_start:
{
size_t v_i_boxed_277_; size_t v_stop_boxed_278_; lean_object* v_res_279_; 
v_i_boxed_277_ = lean_unbox_usize(v_i_274_);
lean_dec(v_i_274_);
v_stop_boxed_278_ = lean_unbox_usize(v_stop_275_);
lean_dec(v_stop_275_);
v_res_279_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_SearchPath_findAllWithExt_spec__1(v_ext_272_, v_as_273_, v_i_boxed_277_, v_stop_boxed_278_, v_b_276_);
lean_dec_ref(v_as_273_);
return v_res_279_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_SearchPath_findAllWithExt_spec__2___redArg___lam__0(uint8_t v_val_280_, lean_object* v_x_281_){
_start:
{
lean_object* v___x_283_; lean_object* v___x_284_; 
v___x_283_ = lean_box(v_val_280_);
v___x_284_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_284_, 0, v___x_283_);
return v___x_284_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_SearchPath_findAllWithExt_spec__2___redArg___lam__0___boxed(lean_object* v_val_285_, lean_object* v_x_286_, lean_object* v___y_287_){
_start:
{
uint8_t v_val_901__boxed_288_; lean_object* v_res_289_; 
v_val_901__boxed_288_ = lean_unbox(v_val_285_);
v_res_289_ = l_List_forIn_x27_loop___at___00Lean_SearchPath_findAllWithExt_spec__2___redArg___lam__0(v_val_901__boxed_288_, v_x_286_);
lean_dec_ref(v_x_286_);
return v_res_289_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_SearchPath_findAllWithExt_spec__2___redArg(lean_object* v_ext_292_, lean_object* v_as_x27_293_, lean_object* v_b_294_){
_start:
{
if (lean_obj_tag(v_as_x27_293_) == 0)
{
lean_object* v___x_296_; 
lean_dec_ref(v_ext_292_);
v___x_296_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_296_, 0, v_b_294_);
return v___x_296_;
}
else
{
lean_object* v_head_297_; lean_object* v_tail_298_; uint8_t v___x_299_; 
v_head_297_ = lean_ctor_get(v_as_x27_293_, 0);
v_tail_298_ = lean_ctor_get(v_as_x27_293_, 1);
v___x_299_ = l_System_FilePath_isDir(v_head_297_);
if (v___x_299_ == 0)
{
v_as_x27_293_ = v_tail_298_;
goto _start;
}
else
{
lean_object* v___x_301_; lean_object* v___f_302_; lean_object* v___x_303_; 
v___x_301_ = lean_box(v___x_299_);
v___f_302_ = lean_alloc_closure((void*)(l_List_forIn_x27_loop___at___00Lean_SearchPath_findAllWithExt_spec__2___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_302_, 0, v___x_301_);
lean_inc(v_head_297_);
v___x_303_ = l_System_FilePath_walkDir(v_head_297_, v___f_302_);
if (lean_obj_tag(v___x_303_) == 0)
{
lean_object* v_a_304_; lean_object* v___y_306_; lean_object* v___x_309_; lean_object* v___x_310_; lean_object* v___x_311_; uint8_t v___x_312_; 
v_a_304_ = lean_ctor_get(v___x_303_, 0);
lean_inc(v_a_304_);
lean_dec_ref_known(v___x_303_, 1);
v___x_309_ = lean_unsigned_to_nat(0u);
v___x_310_ = lean_array_get_size(v_a_304_);
v___x_311_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_SearchPath_findAllWithExt_spec__2___redArg___closed__0));
v___x_312_ = lean_nat_dec_lt(v___x_309_, v___x_310_);
if (v___x_312_ == 0)
{
lean_dec(v_a_304_);
v___y_306_ = v___x_311_;
goto v___jp_305_;
}
else
{
uint8_t v___x_313_; 
v___x_313_ = lean_nat_dec_le(v___x_310_, v___x_310_);
if (v___x_313_ == 0)
{
if (v___x_312_ == 0)
{
lean_dec(v_a_304_);
v___y_306_ = v___x_311_;
goto v___jp_305_;
}
else
{
size_t v___x_314_; size_t v___x_315_; lean_object* v___x_316_; 
v___x_314_ = ((size_t)0ULL);
v___x_315_ = lean_usize_of_nat(v___x_310_);
lean_inc_ref(v_ext_292_);
v___x_316_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_SearchPath_findAllWithExt_spec__1(v_ext_292_, v_a_304_, v___x_314_, v___x_315_, v___x_311_);
lean_dec(v_a_304_);
v___y_306_ = v___x_316_;
goto v___jp_305_;
}
}
else
{
size_t v___x_317_; size_t v___x_318_; lean_object* v___x_319_; 
v___x_317_ = ((size_t)0ULL);
v___x_318_ = lean_usize_of_nat(v___x_310_);
lean_inc_ref(v_ext_292_);
v___x_319_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_SearchPath_findAllWithExt_spec__1(v_ext_292_, v_a_304_, v___x_317_, v___x_318_, v___x_311_);
lean_dec(v_a_304_);
v___y_306_ = v___x_319_;
goto v___jp_305_;
}
}
v___jp_305_:
{
lean_object* v___x_307_; 
v___x_307_ = l_Array_append___redArg(v_b_294_, v___y_306_);
lean_dec_ref(v___y_306_);
v_as_x27_293_ = v_tail_298_;
v_b_294_ = v___x_307_;
goto _start;
}
}
else
{
lean_dec_ref(v_b_294_);
lean_dec_ref(v_ext_292_);
return v___x_303_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_SearchPath_findAllWithExt_spec__2___redArg___boxed(lean_object* v_ext_320_, lean_object* v_as_x27_321_, lean_object* v_b_322_, lean_object* v___y_323_){
_start:
{
lean_object* v_res_324_; 
v_res_324_ = l_List_forIn_x27_loop___at___00Lean_SearchPath_findAllWithExt_spec__2___redArg(v_ext_320_, v_as_x27_321_, v_b_322_);
lean_dec(v_as_x27_321_);
return v_res_324_;
}
}
LEAN_EXPORT lean_object* l_Lean_SearchPath_findAllWithExt(lean_object* v_sp_325_, lean_object* v_ext_326_){
_start:
{
lean_object* v_paths_328_; lean_object* v___x_329_; 
v_paths_328_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_SearchPath_findAllWithExt_spec__2___redArg___closed__0));
v___x_329_ = l_List_forIn_x27_loop___at___00Lean_SearchPath_findAllWithExt_spec__2___redArg(v_ext_326_, v_sp_325_, v_paths_328_);
return v___x_329_;
}
}
LEAN_EXPORT lean_object* l_Lean_SearchPath_findAllWithExt___boxed(lean_object* v_sp_330_, lean_object* v_ext_331_, lean_object* v_a_332_){
_start:
{
lean_object* v_res_333_; 
v_res_333_ = l_Lean_SearchPath_findAllWithExt(v_sp_330_, v_ext_331_);
lean_dec(v_sp_330_);
return v_res_333_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_SearchPath_findAllWithExt_spec__2(lean_object* v_ext_334_, lean_object* v_as_335_, lean_object* v_as_x27_336_, lean_object* v_b_337_, lean_object* v_a_338_){
_start:
{
lean_object* v___x_340_; 
v___x_340_ = l_List_forIn_x27_loop___at___00Lean_SearchPath_findAllWithExt_spec__2___redArg(v_ext_334_, v_as_x27_336_, v_b_337_);
return v___x_340_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_SearchPath_findAllWithExt_spec__2___boxed(lean_object* v_ext_341_, lean_object* v_as_342_, lean_object* v_as_x27_343_, lean_object* v_b_344_, lean_object* v_a_345_, lean_object* v___y_346_){
_start:
{
lean_object* v_res_347_; 
v_res_347_ = l_List_forIn_x27_loop___at___00Lean_SearchPath_findAllWithExt_spec__2(v_ext_341_, v_as_342_, v_as_x27_343_, v_b_344_, v_a_345_);
lean_dec(v_as_x27_343_);
lean_dec(v_as_342_);
return v_res_347_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Path_0__Lean_initFn_00___x40_Lean_Util_Path_2007882598____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_349_; lean_object* v___x_350_; lean_object* v___x_351_; 
v___x_349_ = lean_box(0);
v___x_350_ = lean_st_mk_ref(v___x_349_);
v___x_351_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_351_, 0, v___x_350_);
return v___x_351_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Path_0__Lean_initFn_00___x40_Lean_Util_Path_2007882598____hygCtx___hyg_2____boxed(lean_object* v_a_352_){
_start:
{
lean_object* v_res_353_; 
v_res_353_ = l___private_Lean_Util_Path_0__Lean_initFn_00___x40_Lean_Util_Path_2007882598____hygCtx___hyg_2_();
return v_res_353_;
}
}
static lean_object* _init_l_Lean_getBuildDir___closed__3(void){
_start:
{
lean_object* v___x_357_; lean_object* v___x_358_; lean_object* v___x_359_; lean_object* v___x_360_; lean_object* v___x_361_; lean_object* v___x_362_; 
v___x_357_ = ((lean_object*)(l_Lean_getBuildDir___closed__2));
v___x_358_ = lean_unsigned_to_nat(14u);
v___x_359_ = lean_unsigned_to_nat(22u);
v___x_360_ = ((lean_object*)(l_Lean_getBuildDir___closed__1));
v___x_361_ = ((lean_object*)(l_Lean_getBuildDir___closed__0));
v___x_362_ = l_mkPanicMessageWithDecl(v___x_361_, v___x_360_, v___x_359_, v___x_358_, v___x_357_);
return v___x_362_;
}
}
LEAN_EXPORT lean_object* l_Lean_getBuildDir(){
_start:
{
lean_object* v___x_364_; 
v___x_364_ = l_IO_appDir();
if (lean_obj_tag(v___x_364_) == 0)
{
lean_object* v_a_365_; lean_object* v___x_367_; uint8_t v_isShared_368_; uint8_t v_isSharedCheck_379_; 
v_a_365_ = lean_ctor_get(v___x_364_, 0);
v_isSharedCheck_379_ = !lean_is_exclusive(v___x_364_);
if (v_isSharedCheck_379_ == 0)
{
v___x_367_ = v___x_364_;
v_isShared_368_ = v_isSharedCheck_379_;
goto v_resetjp_366_;
}
else
{
lean_inc(v_a_365_);
lean_dec(v___x_364_);
v___x_367_ = lean_box(0);
v_isShared_368_ = v_isSharedCheck_379_;
goto v_resetjp_366_;
}
v_resetjp_366_:
{
lean_object* v___x_369_; 
v___x_369_ = l_System_FilePath_parent(v_a_365_);
if (lean_obj_tag(v___x_369_) == 0)
{
lean_object* v___x_370_; lean_object* v___x_371_; lean_object* v___x_373_; 
v___x_370_ = lean_obj_once(&l_Lean_getBuildDir___closed__3, &l_Lean_getBuildDir___closed__3_once, _init_l_Lean_getBuildDir___closed__3);
v___x_371_ = l_panic___at___00__private_Lean_Util_Path_0__Lean_modToFilePath_go_spec__0(v___x_370_);
if (v_isShared_368_ == 0)
{
lean_ctor_set(v___x_367_, 0, v___x_371_);
v___x_373_ = v___x_367_;
goto v_reusejp_372_;
}
else
{
lean_object* v_reuseFailAlloc_374_; 
v_reuseFailAlloc_374_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_374_, 0, v___x_371_);
v___x_373_ = v_reuseFailAlloc_374_;
goto v_reusejp_372_;
}
v_reusejp_372_:
{
return v___x_373_;
}
}
else
{
lean_object* v_val_375_; lean_object* v___x_377_; 
v_val_375_ = lean_ctor_get(v___x_369_, 0);
lean_inc(v_val_375_);
lean_dec_ref_known(v___x_369_, 1);
if (v_isShared_368_ == 0)
{
lean_ctor_set(v___x_367_, 0, v_val_375_);
v___x_377_ = v___x_367_;
goto v_reusejp_376_;
}
else
{
lean_object* v_reuseFailAlloc_378_; 
v_reuseFailAlloc_378_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_378_, 0, v_val_375_);
v___x_377_ = v_reuseFailAlloc_378_;
goto v_reusejp_376_;
}
v_reusejp_376_:
{
return v___x_377_;
}
}
}
}
else
{
return v___x_364_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_getBuildDir___boxed(lean_object* v_a_380_){
_start:
{
lean_object* v_res_381_; 
v_res_381_ = l_Lean_getBuildDir();
return v_res_381_;
}
}
static uint8_t _init_l_Lean_getLibDir___closed__1(void){
_start:
{
lean_object* v___x_383_; uint8_t v___x_384_; 
v___x_383_ = lean_box(0);
v___x_384_ = lean_internal_is_stage0(v___x_383_);
return v___x_384_;
}
}
LEAN_EXPORT lean_object* l_Lean_getLibDir(lean_object* v_leanSysroot_387_){
_start:
{
lean_object* v_buildDir_390_; uint8_t v___x_396_; 
v___x_396_ = lean_uint8_once(&l_Lean_getLibDir___closed__1, &l_Lean_getLibDir___closed__1_once, _init_l_Lean_getLibDir___closed__1);
if (v___x_396_ == 0)
{
v_buildDir_390_ = v_leanSysroot_387_;
goto v___jp_389_;
}
else
{
lean_object* v___x_397_; lean_object* v___x_398_; lean_object* v___x_399_; lean_object* v_buildDir_400_; 
v___x_397_ = ((lean_object*)(l_Lean_getLibDir___closed__2));
v___x_398_ = l_System_FilePath_join(v_leanSysroot_387_, v___x_397_);
v___x_399_ = ((lean_object*)(l_Lean_getLibDir___closed__3));
v_buildDir_400_ = l_System_FilePath_join(v___x_398_, v___x_399_);
v_buildDir_390_ = v_buildDir_400_;
goto v___jp_389_;
}
v___jp_389_:
{
lean_object* v___x_391_; lean_object* v___x_392_; lean_object* v___x_393_; lean_object* v___x_394_; lean_object* v___x_395_; 
v___x_391_ = ((lean_object*)(l_Lean_getLibDir___closed__0));
v___x_392_ = l_System_FilePath_join(v_buildDir_390_, v___x_391_);
v___x_393_ = ((lean_object*)(l_Lean_forEachModuleInDir___redArg___lam__4___closed__1));
v___x_394_ = l_System_FilePath_join(v___x_392_, v___x_393_);
v___x_395_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_395_, 0, v___x_394_);
return v___x_395_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_getLibDir___boxed(lean_object* v_leanSysroot_401_, lean_object* v_a_402_){
_start:
{
lean_object* v_res_403_; 
v_res_403_ = l_Lean_getLibDir(v_leanSysroot_401_);
return v_res_403_;
}
}
LEAN_EXPORT lean_object* l_Lean_getBuiltinSearchPath(lean_object* v_leanSysroot_404_){
_start:
{
lean_object* v___x_406_; lean_object* v_a_407_; lean_object* v___x_409_; uint8_t v_isShared_410_; uint8_t v_isSharedCheck_416_; 
v___x_406_ = l_Lean_getLibDir(v_leanSysroot_404_);
v_a_407_ = lean_ctor_get(v___x_406_, 0);
v_isSharedCheck_416_ = !lean_is_exclusive(v___x_406_);
if (v_isSharedCheck_416_ == 0)
{
v___x_409_ = v___x_406_;
v_isShared_410_ = v_isSharedCheck_416_;
goto v_resetjp_408_;
}
else
{
lean_inc(v_a_407_);
lean_dec(v___x_406_);
v___x_409_ = lean_box(0);
v_isShared_410_ = v_isSharedCheck_416_;
goto v_resetjp_408_;
}
v_resetjp_408_:
{
lean_object* v___x_411_; lean_object* v___x_412_; lean_object* v___x_414_; 
v___x_411_ = lean_box(0);
v___x_412_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_412_, 0, v_a_407_);
lean_ctor_set(v___x_412_, 1, v___x_411_);
if (v_isShared_410_ == 0)
{
lean_ctor_set(v___x_409_, 0, v___x_412_);
v___x_414_ = v___x_409_;
goto v_reusejp_413_;
}
else
{
lean_object* v_reuseFailAlloc_415_; 
v_reuseFailAlloc_415_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_415_, 0, v___x_412_);
v___x_414_ = v_reuseFailAlloc_415_;
goto v_reusejp_413_;
}
v_reusejp_413_:
{
return v___x_414_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_getBuiltinSearchPath___boxed(lean_object* v_leanSysroot_417_, lean_object* v_a_418_){
_start:
{
lean_object* v_res_419_; 
v_res_419_ = l_Lean_getBuiltinSearchPath(v_leanSysroot_417_);
return v_res_419_;
}
}
LEAN_EXPORT lean_object* l_Lean_addSearchPathFromEnv(lean_object* v_sp_421_){
_start:
{
lean_object* v___x_423_; lean_object* v___x_424_; 
v___x_423_ = ((lean_object*)(l_Lean_addSearchPathFromEnv___closed__0));
v___x_424_ = lean_io_getenv(v___x_423_);
if (lean_obj_tag(v___x_424_) == 0)
{
lean_object* v___x_425_; 
v___x_425_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_425_, 0, v_sp_421_);
return v___x_425_;
}
else
{
lean_object* v_val_426_; lean_object* v___x_428_; uint8_t v_isShared_429_; uint8_t v_isSharedCheck_435_; 
v_val_426_ = lean_ctor_get(v___x_424_, 0);
v_isSharedCheck_435_ = !lean_is_exclusive(v___x_424_);
if (v_isSharedCheck_435_ == 0)
{
v___x_428_ = v___x_424_;
v_isShared_429_ = v_isSharedCheck_435_;
goto v_resetjp_427_;
}
else
{
lean_inc(v_val_426_);
lean_dec(v___x_424_);
v___x_428_ = lean_box(0);
v_isShared_429_ = v_isSharedCheck_435_;
goto v_resetjp_427_;
}
v_resetjp_427_:
{
lean_object* v___x_430_; lean_object* v___x_431_; lean_object* v___x_433_; 
v___x_430_ = l_System_SearchPath_parse(v_val_426_);
v___x_431_ = l_List_appendTR___redArg(v___x_430_, v_sp_421_);
if (v_isShared_429_ == 0)
{
lean_ctor_set_tag(v___x_428_, 0);
lean_ctor_set(v___x_428_, 0, v___x_431_);
v___x_433_ = v___x_428_;
goto v_reusejp_432_;
}
else
{
lean_object* v_reuseFailAlloc_434_; 
v_reuseFailAlloc_434_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_434_, 0, v___x_431_);
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
}
LEAN_EXPORT lean_object* l_Lean_addSearchPathFromEnv___boxed(lean_object* v_sp_436_, lean_object* v_a_437_){
_start:
{
lean_object* v_res_438_; 
v_res_438_ = l_Lean_addSearchPathFromEnv(v_sp_436_);
return v_res_438_;
}
}
LEAN_EXPORT lean_object* l_Lean_initSearchPath(lean_object* v_leanSysroot_439_, lean_object* v_sp_440_){
_start:
{
lean_object* v___x_442_; 
v___x_442_ = l_Lean_getBuiltinSearchPath(v_leanSysroot_439_);
if (lean_obj_tag(v___x_442_) == 0)
{
lean_object* v_a_443_; lean_object* v___x_444_; lean_object* v_a_445_; lean_object* v___x_447_; uint8_t v_isShared_448_; uint8_t v_isSharedCheck_456_; 
v_a_443_ = lean_ctor_get(v___x_442_, 0);
lean_inc(v_a_443_);
lean_dec_ref_known(v___x_442_, 1);
v___x_444_ = l_Lean_addSearchPathFromEnv(v_a_443_);
v_a_445_ = lean_ctor_get(v___x_444_, 0);
v_isSharedCheck_456_ = !lean_is_exclusive(v___x_444_);
if (v_isSharedCheck_456_ == 0)
{
v___x_447_ = v___x_444_;
v_isShared_448_ = v_isSharedCheck_456_;
goto v_resetjp_446_;
}
else
{
lean_inc(v_a_445_);
lean_dec(v___x_444_);
v___x_447_ = lean_box(0);
v_isShared_448_ = v_isSharedCheck_456_;
goto v_resetjp_446_;
}
v_resetjp_446_:
{
lean_object* v___x_449_; lean_object* v___x_450_; lean_object* v___x_451_; lean_object* v___x_452_; lean_object* v___x_454_; 
v___x_449_ = l_List_appendTR___redArg(v_sp_440_, v_a_445_);
v___x_450_ = l_Lean_searchPathRef;
v___x_451_ = lean_box(0);
v___x_452_ = lean_st_ref_swap(v___x_450_, v___x_449_);
lean_dec(v___x_452_);
if (v_isShared_448_ == 0)
{
lean_ctor_set(v___x_447_, 0, v___x_451_);
v___x_454_ = v___x_447_;
goto v_reusejp_453_;
}
else
{
lean_object* v_reuseFailAlloc_455_; 
v_reuseFailAlloc_455_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_455_, 0, v___x_451_);
v___x_454_ = v_reuseFailAlloc_455_;
goto v_reusejp_453_;
}
v_reusejp_453_:
{
return v___x_454_;
}
}
}
else
{
lean_object* v_a_457_; lean_object* v___x_459_; uint8_t v_isShared_460_; uint8_t v_isSharedCheck_464_; 
lean_dec(v_sp_440_);
v_a_457_ = lean_ctor_get(v___x_442_, 0);
v_isSharedCheck_464_ = !lean_is_exclusive(v___x_442_);
if (v_isSharedCheck_464_ == 0)
{
v___x_459_ = v___x_442_;
v_isShared_460_ = v_isSharedCheck_464_;
goto v_resetjp_458_;
}
else
{
lean_inc(v_a_457_);
lean_dec(v___x_442_);
v___x_459_ = lean_box(0);
v_isShared_460_ = v_isSharedCheck_464_;
goto v_resetjp_458_;
}
v_resetjp_458_:
{
lean_object* v___x_462_; 
if (v_isShared_460_ == 0)
{
v___x_462_ = v___x_459_;
goto v_reusejp_461_;
}
else
{
lean_object* v_reuseFailAlloc_463_; 
v_reuseFailAlloc_463_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_463_, 0, v_a_457_);
v___x_462_ = v_reuseFailAlloc_463_;
goto v_reusejp_461_;
}
v_reusejp_461_:
{
return v___x_462_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_initSearchPath___boxed(lean_object* v_leanSysroot_465_, lean_object* v_sp_466_, lean_object* v_a_467_){
_start:
{
lean_object* v_res_468_; 
v_res_468_ = l_Lean_initSearchPath(v_leanSysroot_465_, v_sp_466_);
return v_res_468_;
}
}
LEAN_EXPORT lean_object* lean_init_search_path(){
_start:
{
lean_object* v___x_470_; 
v___x_470_ = l_Lean_getBuildDir();
if (lean_obj_tag(v___x_470_) == 0)
{
lean_object* v_a_471_; lean_object* v___x_472_; lean_object* v___x_473_; 
v_a_471_ = lean_ctor_get(v___x_470_, 0);
lean_inc(v_a_471_);
lean_dec_ref_known(v___x_470_, 1);
v___x_472_ = lean_box(0);
v___x_473_ = l_Lean_initSearchPath(v_a_471_, v___x_472_);
return v___x_473_;
}
else
{
lean_object* v_a_474_; lean_object* v___x_476_; uint8_t v_isShared_477_; uint8_t v_isSharedCheck_481_; 
v_a_474_ = lean_ctor_get(v___x_470_, 0);
v_isSharedCheck_481_ = !lean_is_exclusive(v___x_470_);
if (v_isSharedCheck_481_ == 0)
{
v___x_476_ = v___x_470_;
v_isShared_477_ = v_isSharedCheck_481_;
goto v_resetjp_475_;
}
else
{
lean_inc(v_a_474_);
lean_dec(v___x_470_);
v___x_476_ = lean_box(0);
v_isShared_477_ = v_isSharedCheck_481_;
goto v_resetjp_475_;
}
v_resetjp_475_:
{
lean_object* v___x_479_; 
if (v_isShared_477_ == 0)
{
v___x_479_ = v___x_476_;
goto v_reusejp_478_;
}
else
{
lean_object* v_reuseFailAlloc_480_; 
v_reuseFailAlloc_480_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_480_, 0, v_a_474_);
v___x_479_ = v_reuseFailAlloc_480_;
goto v_reusejp_478_;
}
v_reusejp_478_:
{
return v___x_479_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Path_0__Lean_initSearchPathInternal___boxed(lean_object* v_a_482_){
_start:
{
lean_object* v_res_483_; 
v_res_483_ = lean_init_search_path();
return v_res_483_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_findOLean_spec__0(lean_object* v_a_484_, lean_object* v_a_485_){
_start:
{
if (lean_obj_tag(v_a_484_) == 0)
{
lean_object* v___x_486_; 
v___x_486_ = l_List_reverse___redArg(v_a_485_);
return v___x_486_;
}
else
{
lean_object* v_head_487_; lean_object* v_tail_488_; lean_object* v___x_490_; uint8_t v_isShared_491_; uint8_t v_isSharedCheck_496_; 
v_head_487_ = lean_ctor_get(v_a_484_, 0);
v_tail_488_ = lean_ctor_get(v_a_484_, 1);
v_isSharedCheck_496_ = !lean_is_exclusive(v_a_484_);
if (v_isSharedCheck_496_ == 0)
{
v___x_490_ = v_a_484_;
v_isShared_491_ = v_isSharedCheck_496_;
goto v_resetjp_489_;
}
else
{
lean_inc(v_tail_488_);
lean_inc(v_head_487_);
lean_dec(v_a_484_);
v___x_490_ = lean_box(0);
v_isShared_491_ = v_isSharedCheck_496_;
goto v_resetjp_489_;
}
v_resetjp_489_:
{
lean_object* v___x_493_; 
if (v_isShared_491_ == 0)
{
lean_ctor_set(v___x_490_, 1, v_a_485_);
v___x_493_ = v___x_490_;
goto v_reusejp_492_;
}
else
{
lean_object* v_reuseFailAlloc_495_; 
v_reuseFailAlloc_495_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_495_, 0, v_head_487_);
lean_ctor_set(v_reuseFailAlloc_495_, 1, v_a_485_);
v___x_493_ = v_reuseFailAlloc_495_;
goto v_reusejp_492_;
}
v_reusejp_492_:
{
v_a_484_ = v_tail_488_;
v_a_485_ = v___x_493_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_findOLean(lean_object* v_mod_503_){
_start:
{
lean_object* v___x_505_; lean_object* v___x_506_; lean_object* v___x_507_; lean_object* v___x_508_; lean_object* v_a_509_; lean_object* v___x_511_; uint8_t v_isShared_512_; uint8_t v_isSharedCheck_539_; 
v___x_505_ = l_Lean_searchPathRef;
v___x_506_ = lean_st_ref_get(v___x_505_);
v___x_507_ = ((lean_object*)(l_Lean_findOLean___closed__0));
lean_inc(v_mod_503_);
lean_inc(v___x_506_);
v___x_508_ = l_Lean_SearchPath_findWithExt(v___x_506_, v___x_507_, v_mod_503_);
v_a_509_ = lean_ctor_get(v___x_508_, 0);
v_isSharedCheck_539_ = !lean_is_exclusive(v___x_508_);
if (v_isSharedCheck_539_ == 0)
{
v___x_511_ = v___x_508_;
v_isShared_512_ = v_isSharedCheck_539_;
goto v_resetjp_510_;
}
else
{
lean_inc(v_a_509_);
lean_dec(v___x_508_);
v___x_511_ = lean_box(0);
v_isShared_512_ = v_isSharedCheck_539_;
goto v_resetjp_510_;
}
v_resetjp_510_:
{
if (lean_obj_tag(v_a_509_) == 1)
{
lean_object* v_val_513_; lean_object* v___x_515_; 
lean_dec(v___x_506_);
lean_dec(v_mod_503_);
v_val_513_ = lean_ctor_get(v_a_509_, 0);
lean_inc(v_val_513_);
lean_dec_ref_known(v_a_509_, 1);
if (v_isShared_512_ == 0)
{
lean_ctor_set(v___x_511_, 0, v_val_513_);
v___x_515_ = v___x_511_;
goto v_reusejp_514_;
}
else
{
lean_object* v_reuseFailAlloc_516_; 
v_reuseFailAlloc_516_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_516_, 0, v_val_513_);
v___x_515_ = v_reuseFailAlloc_516_;
goto v_reusejp_514_;
}
v_reusejp_514_:
{
return v___x_515_;
}
}
else
{
lean_object* v___x_517_; uint8_t v___x_518_; lean_object* v___x_519_; lean_object* v___x_520_; lean_object* v___x_521_; lean_object* v___x_522_; lean_object* v___x_523_; lean_object* v___x_524_; lean_object* v___x_525_; lean_object* v___x_526_; lean_object* v___x_527_; lean_object* v___x_528_; lean_object* v___x_529_; lean_object* v___x_530_; lean_object* v___x_531_; lean_object* v___x_532_; lean_object* v___x_533_; lean_object* v___x_534_; lean_object* v___x_535_; lean_object* v___x_537_; 
lean_dec(v_a_509_);
v___x_517_ = l_Lean_Name_getRoot(v_mod_503_);
lean_dec(v_mod_503_);
v___x_518_ = 0;
v___x_519_ = l_Lean_Name_toString(v___x_517_, v___x_518_);
v___x_520_ = ((lean_object*)(l_Lean_findOLean___closed__1));
v___x_521_ = lean_string_append(v___x_520_, v___x_519_);
v___x_522_ = ((lean_object*)(l_Lean_findOLean___closed__2));
v___x_523_ = lean_string_append(v___x_521_, v___x_522_);
v___x_524_ = lean_string_append(v___x_523_, v___x_519_);
v___x_525_ = ((lean_object*)(l_Lean_findOLean___closed__3));
v___x_526_ = lean_string_append(v___x_524_, v___x_525_);
v___x_527_ = lean_string_append(v___x_526_, v___x_519_);
lean_dec_ref(v___x_519_);
v___x_528_ = ((lean_object*)(l_Lean_findOLean___closed__4));
v___x_529_ = lean_string_append(v___x_527_, v___x_528_);
v___x_530_ = ((lean_object*)(l_Lean_findOLean___closed__5));
v___x_531_ = lean_box(0);
v___x_532_ = l_List_mapTR_loop___at___00Lean_findOLean_spec__0(v___x_506_, v___x_531_);
v___x_533_ = l_String_intercalate(v___x_530_, v___x_532_);
v___x_534_ = lean_string_append(v___x_529_, v___x_533_);
lean_dec_ref(v___x_533_);
v___x_535_ = lean_mk_io_user_error(v___x_534_);
if (v_isShared_512_ == 0)
{
lean_ctor_set_tag(v___x_511_, 1);
lean_ctor_set(v___x_511_, 0, v___x_535_);
v___x_537_ = v___x_511_;
goto v_reusejp_536_;
}
else
{
lean_object* v_reuseFailAlloc_538_; 
v_reuseFailAlloc_538_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_538_, 0, v___x_535_);
v___x_537_ = v_reuseFailAlloc_538_;
goto v_reusejp_536_;
}
v_reusejp_536_:
{
return v___x_537_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_findOLean___boxed(lean_object* v_mod_540_, lean_object* v_a_541_){
_start:
{
lean_object* v_res_542_; 
v_res_542_ = l_Lean_findOLean(v_mod_540_);
return v_res_542_;
}
}
LEAN_EXPORT lean_object* l_Lean_findLean(lean_object* v_sp_544_, lean_object* v_mod_545_){
_start:
{
lean_object* v___x_547_; lean_object* v___x_548_; lean_object* v_a_549_; lean_object* v___x_551_; uint8_t v_isShared_552_; uint8_t v_isSharedCheck_579_; 
v___x_547_ = ((lean_object*)(l_Lean_forEachModuleInDir___redArg___lam__4___closed__1));
lean_inc(v_mod_545_);
lean_inc(v_sp_544_);
v___x_548_ = l_Lean_SearchPath_findWithExt(v_sp_544_, v___x_547_, v_mod_545_);
v_a_549_ = lean_ctor_get(v___x_548_, 0);
v_isSharedCheck_579_ = !lean_is_exclusive(v___x_548_);
if (v_isSharedCheck_579_ == 0)
{
v___x_551_ = v___x_548_;
v_isShared_552_ = v_isSharedCheck_579_;
goto v_resetjp_550_;
}
else
{
lean_inc(v_a_549_);
lean_dec(v___x_548_);
v___x_551_ = lean_box(0);
v_isShared_552_ = v_isSharedCheck_579_;
goto v_resetjp_550_;
}
v_resetjp_550_:
{
if (lean_obj_tag(v_a_549_) == 1)
{
lean_object* v_val_553_; lean_object* v___x_555_; 
lean_dec(v_mod_545_);
lean_dec(v_sp_544_);
v_val_553_ = lean_ctor_get(v_a_549_, 0);
lean_inc(v_val_553_);
lean_dec_ref_known(v_a_549_, 1);
if (v_isShared_552_ == 0)
{
lean_ctor_set(v___x_551_, 0, v_val_553_);
v___x_555_ = v___x_551_;
goto v_reusejp_554_;
}
else
{
lean_object* v_reuseFailAlloc_556_; 
v_reuseFailAlloc_556_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_556_, 0, v_val_553_);
v___x_555_ = v_reuseFailAlloc_556_;
goto v_reusejp_554_;
}
v_reusejp_554_:
{
return v___x_555_;
}
}
else
{
lean_object* v___x_557_; uint8_t v___x_558_; lean_object* v___x_559_; lean_object* v___x_560_; lean_object* v___x_561_; lean_object* v___x_562_; lean_object* v___x_563_; lean_object* v___x_564_; lean_object* v___x_565_; lean_object* v___x_566_; lean_object* v___x_567_; lean_object* v___x_568_; lean_object* v___x_569_; lean_object* v___x_570_; lean_object* v___x_571_; lean_object* v___x_572_; lean_object* v___x_573_; lean_object* v___x_574_; lean_object* v___x_575_; lean_object* v___x_577_; 
lean_dec(v_a_549_);
v___x_557_ = l_Lean_Name_getRoot(v_mod_545_);
lean_dec(v_mod_545_);
v___x_558_ = 0;
v___x_559_ = l_Lean_Name_toString(v___x_557_, v___x_558_);
v___x_560_ = ((lean_object*)(l_Lean_findOLean___closed__1));
v___x_561_ = lean_string_append(v___x_560_, v___x_559_);
v___x_562_ = ((lean_object*)(l_Lean_findOLean___closed__2));
v___x_563_ = lean_string_append(v___x_561_, v___x_562_);
v___x_564_ = lean_string_append(v___x_563_, v___x_559_);
v___x_565_ = ((lean_object*)(l_Lean_findOLean___closed__3));
v___x_566_ = lean_string_append(v___x_564_, v___x_565_);
v___x_567_ = lean_string_append(v___x_566_, v___x_559_);
lean_dec_ref(v___x_559_);
v___x_568_ = ((lean_object*)(l_Lean_findLean___closed__0));
v___x_569_ = lean_string_append(v___x_567_, v___x_568_);
v___x_570_ = ((lean_object*)(l_Lean_findOLean___closed__5));
v___x_571_ = lean_box(0);
v___x_572_ = l_List_mapTR_loop___at___00Lean_findOLean_spec__0(v_sp_544_, v___x_571_);
v___x_573_ = l_String_intercalate(v___x_570_, v___x_572_);
v___x_574_ = lean_string_append(v___x_569_, v___x_573_);
lean_dec_ref(v___x_573_);
v___x_575_ = lean_mk_io_user_error(v___x_574_);
if (v_isShared_552_ == 0)
{
lean_ctor_set_tag(v___x_551_, 1);
lean_ctor_set(v___x_551_, 0, v___x_575_);
v___x_577_ = v___x_551_;
goto v_reusejp_576_;
}
else
{
lean_object* v_reuseFailAlloc_578_; 
v_reuseFailAlloc_578_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_578_, 0, v___x_575_);
v___x_577_ = v_reuseFailAlloc_578_;
goto v_reusejp_576_;
}
v_reusejp_576_:
{
return v___x_577_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_findLean___boxed(lean_object* v_sp_580_, lean_object* v_mod_581_, lean_object* v_a_582_){
_start:
{
lean_object* v_res_583_; 
v_res_583_ = l_Lean_findLean(v_sp_580_, v_mod_581_);
return v_res_583_;
}
}
LEAN_EXPORT lean_object* l_Lean_getSrcSearchPath(){
_start:
{
lean_object* v___x_588_; lean_object* v___x_589_; lean_object* v___y_591_; 
v___x_588_ = ((lean_object*)(l_Lean_getSrcSearchPath___closed__0));
v___x_589_ = lean_io_getenv(v___x_588_);
if (lean_obj_tag(v___x_589_) == 0)
{
lean_object* v___x_621_; 
v___x_621_ = lean_box(0);
v___y_591_ = v___x_621_;
goto v___jp_590_;
}
else
{
lean_object* v_val_622_; lean_object* v___x_623_; 
v_val_622_ = lean_ctor_get(v___x_589_, 0);
lean_inc(v_val_622_);
lean_dec_ref_known(v___x_589_, 1);
v___x_623_ = l_System_SearchPath_parse(v_val_622_);
v___y_591_ = v___x_623_;
goto v___jp_590_;
}
v___jp_590_:
{
lean_object* v___x_592_; 
v___x_592_ = l_IO_appDir();
if (lean_obj_tag(v___x_592_) == 0)
{
lean_object* v_a_593_; lean_object* v___x_595_; uint8_t v_isShared_596_; uint8_t v_isSharedCheck_612_; 
v_a_593_ = lean_ctor_get(v___x_592_, 0);
v_isSharedCheck_612_ = !lean_is_exclusive(v___x_592_);
if (v_isSharedCheck_612_ == 0)
{
v___x_595_ = v___x_592_;
v_isShared_596_ = v_isSharedCheck_612_;
goto v_resetjp_594_;
}
else
{
lean_inc(v_a_593_);
lean_dec(v___x_592_);
v___x_595_ = lean_box(0);
v_isShared_596_ = v_isSharedCheck_612_;
goto v_resetjp_594_;
}
v_resetjp_594_:
{
lean_object* v___x_597_; lean_object* v___x_598_; lean_object* v___x_599_; lean_object* v___x_600_; lean_object* v___x_601_; lean_object* v___x_602_; lean_object* v___x_603_; lean_object* v___x_604_; lean_object* v___x_605_; lean_object* v___x_606_; lean_object* v___x_607_; lean_object* v___x_608_; lean_object* v___x_610_; 
v___x_597_ = ((lean_object*)(l_Lean_getLibDir___closed__2));
v___x_598_ = l_System_FilePath_join(v_a_593_, v___x_597_);
v___x_599_ = ((lean_object*)(l_Lean_getSrcSearchPath___closed__1));
v___x_600_ = l_System_FilePath_join(v___x_598_, v___x_599_);
v___x_601_ = ((lean_object*)(l_Lean_forEachModuleInDir___redArg___lam__4___closed__1));
v___x_602_ = l_System_FilePath_join(v___x_600_, v___x_601_);
v___x_603_ = ((lean_object*)(l_Lean_getSrcSearchPath___closed__2));
lean_inc_ref(v___x_602_);
v___x_604_ = l_System_FilePath_join(v___x_602_, v___x_603_);
v___x_605_ = lean_box(0);
v___x_606_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_606_, 0, v___x_602_);
lean_ctor_set(v___x_606_, 1, v___x_605_);
v___x_607_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_607_, 0, v___x_604_);
lean_ctor_set(v___x_607_, 1, v___x_606_);
v___x_608_ = l_List_appendTR___redArg(v___y_591_, v___x_607_);
if (v_isShared_596_ == 0)
{
lean_ctor_set(v___x_595_, 0, v___x_608_);
v___x_610_ = v___x_595_;
goto v_reusejp_609_;
}
else
{
lean_object* v_reuseFailAlloc_611_; 
v_reuseFailAlloc_611_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_611_, 0, v___x_608_);
v___x_610_ = v_reuseFailAlloc_611_;
goto v_reusejp_609_;
}
v_reusejp_609_:
{
return v___x_610_;
}
}
}
else
{
lean_object* v_a_613_; lean_object* v___x_615_; uint8_t v_isShared_616_; uint8_t v_isSharedCheck_620_; 
lean_dec(v___y_591_);
v_a_613_ = lean_ctor_get(v___x_592_, 0);
v_isSharedCheck_620_ = !lean_is_exclusive(v___x_592_);
if (v_isSharedCheck_620_ == 0)
{
v___x_615_ = v___x_592_;
v_isShared_616_ = v_isSharedCheck_620_;
goto v_resetjp_614_;
}
else
{
lean_inc(v_a_613_);
lean_dec(v___x_592_);
v___x_615_ = lean_box(0);
v_isShared_616_ = v_isSharedCheck_620_;
goto v_resetjp_614_;
}
v_resetjp_614_:
{
lean_object* v___x_618_; 
if (v_isShared_616_ == 0)
{
v___x_618_ = v___x_615_;
goto v_reusejp_617_;
}
else
{
lean_object* v_reuseFailAlloc_619_; 
v_reuseFailAlloc_619_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_619_, 0, v_a_613_);
v___x_618_ = v_reuseFailAlloc_619_;
goto v_reusejp_617_;
}
v_reusejp_617_:
{
return v___x_618_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_getSrcSearchPath___boxed(lean_object* v_a_624_){
_start:
{
lean_object* v_res_625_; 
v_res_625_ = l_Lean_getSrcSearchPath();
return v_res_625_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_moduleNameOfFileName_spec__0(lean_object* v_x_626_, lean_object* v_x_627_){
_start:
{
if (lean_obj_tag(v_x_627_) == 0)
{
return v_x_626_;
}
else
{
lean_object* v_head_628_; lean_object* v_tail_629_; lean_object* v___x_630_; 
v_head_628_ = lean_ctor_get(v_x_627_, 0);
lean_inc(v_head_628_);
v_tail_629_ = lean_ctor_get(v_x_627_, 1);
lean_inc(v_tail_629_);
lean_dec_ref_known(v_x_627_, 2);
v___x_630_ = l_Lean_Name_str___override(v_x_626_, v_head_628_);
v_x_626_ = v___x_630_;
v_x_627_ = v_tail_629_;
goto _start;
}
}
}
static lean_object* _init_l_Lean_moduleNameOfFileName___closed__3(void){
_start:
{
uint32_t v___x_635_; lean_object* v___x_636_; lean_object* v___x_637_; 
v___x_635_ = l_System_FilePath_pathSeparator;
v___x_636_ = ((lean_object*)(l_Lean_forEachModuleInDir___redArg___lam__4___closed__3));
v___x_637_ = lean_string_push(v___x_636_, v___x_635_);
return v___x_637_;
}
}
static lean_object* _init_l_Lean_moduleNameOfFileName___closed__4(void){
_start:
{
lean_object* v___x_638_; lean_object* v___x_639_; 
v___x_638_ = lean_obj_once(&l_Lean_moduleNameOfFileName___closed__3, &l_Lean_moduleNameOfFileName___closed__3_once, _init_l_Lean_moduleNameOfFileName___closed__3);
v___x_639_ = lean_string_utf8_byte_size(v___x_638_);
return v___x_639_;
}
}
LEAN_EXPORT lean_object* l_Lean_moduleNameOfFileName(lean_object* v_fname_640_, lean_object* v_rootDir_641_){
_start:
{
lean_object* v___x_643_; 
v___x_643_ = lean_io_realpath(v_fname_640_);
if (lean_obj_tag(v___x_643_) == 0)
{
lean_object* v_a_644_; lean_object* v___x_646_; uint8_t v_isShared_647_; uint8_t v_isSharedCheck_714_; 
v_a_644_ = lean_ctor_get(v___x_643_, 0);
v_isSharedCheck_714_ = !lean_is_exclusive(v___x_643_);
if (v_isSharedCheck_714_ == 0)
{
v___x_646_ = v___x_643_;
v_isShared_647_ = v_isSharedCheck_714_;
goto v_resetjp_645_;
}
else
{
lean_inc(v_a_644_);
lean_dec(v___x_643_);
v___x_646_ = lean_box(0);
v_isShared_647_ = v_isSharedCheck_714_;
goto v_resetjp_645_;
}
v_resetjp_645_:
{
lean_object* v___y_649_; lean_object* v_rootDir_662_; lean_object* v___y_681_; lean_object* v___y_682_; lean_object* v_rootDir_685_; 
if (lean_obj_tag(v_rootDir_641_) == 0)
{
lean_object* v___x_703_; 
v___x_703_ = lean_io_current_dir();
if (lean_obj_tag(v___x_703_) == 0)
{
lean_object* v_a_704_; 
v_a_704_ = lean_ctor_get(v___x_703_, 0);
lean_inc(v_a_704_);
lean_dec_ref_known(v___x_703_, 1);
v_rootDir_685_ = v_a_704_;
goto v___jp_684_;
}
else
{
lean_object* v_a_705_; lean_object* v___x_707_; uint8_t v_isShared_708_; uint8_t v_isSharedCheck_712_; 
lean_del_object(v___x_646_);
lean_dec(v_a_644_);
v_a_705_ = lean_ctor_get(v___x_703_, 0);
v_isSharedCheck_712_ = !lean_is_exclusive(v___x_703_);
if (v_isSharedCheck_712_ == 0)
{
v___x_707_ = v___x_703_;
v_isShared_708_ = v_isSharedCheck_712_;
goto v_resetjp_706_;
}
else
{
lean_inc(v_a_705_);
lean_dec(v___x_703_);
v___x_707_ = lean_box(0);
v_isShared_708_ = v_isSharedCheck_712_;
goto v_resetjp_706_;
}
v_resetjp_706_:
{
lean_object* v___x_710_; 
if (v_isShared_708_ == 0)
{
v___x_710_ = v___x_707_;
goto v_reusejp_709_;
}
else
{
lean_object* v_reuseFailAlloc_711_; 
v_reuseFailAlloc_711_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_711_, 0, v_a_705_);
v___x_710_ = v_reuseFailAlloc_711_;
goto v_reusejp_709_;
}
v_reusejp_709_:
{
return v___x_710_;
}
}
}
}
else
{
lean_object* v_val_713_; 
v_val_713_ = lean_ctor_get(v_rootDir_641_, 0);
lean_inc(v_val_713_);
lean_dec_ref_known(v_rootDir_641_, 1);
v_rootDir_685_ = v_val_713_;
goto v___jp_684_;
}
v___jp_648_:
{
lean_object* v___x_650_; lean_object* v___x_651_; lean_object* v___x_652_; lean_object* v___x_653_; lean_object* v___x_654_; lean_object* v___x_655_; lean_object* v___x_656_; lean_object* v___x_657_; lean_object* v___x_659_; 
v___x_650_ = ((lean_object*)(l_Lean_moduleNameOfFileName___closed__0));
v___x_651_ = lean_string_append(v___x_650_, v_a_644_);
lean_dec(v_a_644_);
v___x_652_ = ((lean_object*)(l_Lean_moduleNameOfFileName___closed__1));
v___x_653_ = lean_string_append(v___x_651_, v___x_652_);
v___x_654_ = lean_string_append(v___x_653_, v___y_649_);
lean_dec_ref(v___y_649_);
v___x_655_ = ((lean_object*)(l_Lean_moduleNameOfFileName___closed__2));
v___x_656_ = lean_string_append(v___x_654_, v___x_655_);
v___x_657_ = lean_mk_io_user_error(v___x_656_);
if (v_isShared_647_ == 0)
{
lean_ctor_set_tag(v___x_646_, 1);
lean_ctor_set(v___x_646_, 0, v___x_657_);
v___x_659_ = v___x_646_;
goto v_reusejp_658_;
}
else
{
lean_object* v_reuseFailAlloc_660_; 
v_reuseFailAlloc_660_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_660_, 0, v___x_657_);
v___x_659_ = v_reuseFailAlloc_660_;
goto v_reusejp_658_;
}
v_reusejp_658_:
{
return v___x_659_;
}
}
v___jp_661_:
{
lean_object* v___x_663_; lean_object* v___x_664_; lean_object* v___x_665_; uint8_t v___x_666_; 
lean_inc(v_a_644_);
v___x_663_ = l_System_FilePath_normalize(v_a_644_);
v___x_664_ = lean_string_utf8_byte_size(v___x_663_);
v___x_665_ = lean_string_utf8_byte_size(v_rootDir_662_);
v___x_666_ = lean_nat_dec_le(v___x_665_, v___x_664_);
if (v___x_666_ == 0)
{
lean_dec_ref(v___x_663_);
v___y_649_ = v_rootDir_662_;
goto v___jp_648_;
}
else
{
lean_object* v___x_667_; uint8_t v___x_668_; 
v___x_667_ = lean_unsigned_to_nat(0u);
v___x_668_ = lean_string_memcmp(v___x_663_, v_rootDir_662_, v___x_667_, v___x_667_, v___x_665_);
lean_dec_ref(v___x_663_);
if (v___x_668_ == 0)
{
v___y_649_ = v_rootDir_662_;
goto v___jp_648_;
}
else
{
lean_object* v___x_669_; lean_object* v___x_670_; lean_object* v___x_671_; lean_object* v___x_672_; lean_object* v___x_673_; lean_object* v___x_674_; lean_object* v___x_675_; lean_object* v___x_676_; lean_object* v___x_677_; lean_object* v___x_678_; lean_object* v___x_679_; 
lean_del_object(v___x_646_);
v___x_669_ = lean_string_length(v_rootDir_662_);
lean_dec_ref(v_rootDir_662_);
v___x_670_ = lean_string_utf8_byte_size(v_a_644_);
lean_inc(v_a_644_);
v___x_671_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_671_, 0, v_a_644_);
lean_ctor_set(v___x_671_, 1, v___x_667_);
lean_ctor_set(v___x_671_, 2, v___x_670_);
v___x_672_ = l_String_Slice_Pos_nextn(v___x_671_, v___x_667_, v___x_669_);
lean_dec_ref_known(v___x_671_, 3);
v___x_673_ = lean_string_utf8_extract_fast(v_a_644_, v___x_672_, v___x_670_);
lean_dec(v___x_672_);
lean_dec(v_a_644_);
v___x_674_ = ((lean_object*)(l_Lean_forEachModuleInDir___redArg___lam__4___closed__3));
v___x_675_ = l_System_FilePath_withExtension(v___x_673_, v___x_674_);
v___x_676_ = lean_obj_once(&l_Lean_forEachModuleInDir___redArg___lam__4___closed__4, &l_Lean_forEachModuleInDir___redArg___lam__4___closed__4_once, _init_l_Lean_forEachModuleInDir___redArg___lam__4___closed__4);
v___x_677_ = l_System_FilePath_components(v___x_675_);
v___x_678_ = l_List_foldl___at___00Lean_moduleNameOfFileName_spec__0(v___x_676_, v___x_677_);
v___x_679_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_679_, 0, v___x_678_);
return v___x_679_;
}
}
}
v___jp_680_:
{
lean_object* v___x_683_; 
v___x_683_ = lean_string_append(v___y_682_, v___y_681_);
v_rootDir_662_ = v___x_683_;
goto v___jp_661_;
}
v___jp_684_:
{
lean_object* v___x_686_; 
v___x_686_ = l_Lean_realPathNormalized(v_rootDir_685_);
if (lean_obj_tag(v___x_686_) == 0)
{
lean_object* v_a_687_; lean_object* v___x_688_; lean_object* v___x_689_; lean_object* v___x_690_; uint8_t v___x_691_; 
v_a_687_ = lean_ctor_get(v___x_686_, 0);
lean_inc(v_a_687_);
lean_dec_ref_known(v___x_686_, 1);
v___x_688_ = lean_obj_once(&l_Lean_moduleNameOfFileName___closed__3, &l_Lean_moduleNameOfFileName___closed__3_once, _init_l_Lean_moduleNameOfFileName___closed__3);
v___x_689_ = lean_string_utf8_byte_size(v_a_687_);
v___x_690_ = lean_obj_once(&l_Lean_moduleNameOfFileName___closed__4, &l_Lean_moduleNameOfFileName___closed__4_once, _init_l_Lean_moduleNameOfFileName___closed__4);
v___x_691_ = lean_nat_dec_le(v___x_690_, v___x_689_);
if (v___x_691_ == 0)
{
v___y_681_ = v___x_688_;
v___y_682_ = v_a_687_;
goto v___jp_680_;
}
else
{
lean_object* v___x_692_; lean_object* v___x_693_; uint8_t v___x_694_; 
v___x_692_ = lean_unsigned_to_nat(0u);
v___x_693_ = lean_nat_sub(v___x_689_, v___x_690_);
v___x_694_ = lean_string_memcmp(v_a_687_, v___x_688_, v___x_693_, v___x_692_, v___x_690_);
lean_dec(v___x_693_);
if (v___x_694_ == 0)
{
v___y_681_ = v___x_688_;
v___y_682_ = v_a_687_;
goto v___jp_680_;
}
else
{
v_rootDir_662_ = v_a_687_;
goto v___jp_661_;
}
}
}
else
{
lean_object* v_a_695_; lean_object* v___x_697_; uint8_t v_isShared_698_; uint8_t v_isSharedCheck_702_; 
lean_del_object(v___x_646_);
lean_dec(v_a_644_);
v_a_695_ = lean_ctor_get(v___x_686_, 0);
v_isSharedCheck_702_ = !lean_is_exclusive(v___x_686_);
if (v_isSharedCheck_702_ == 0)
{
v___x_697_ = v___x_686_;
v_isShared_698_ = v_isSharedCheck_702_;
goto v_resetjp_696_;
}
else
{
lean_inc(v_a_695_);
lean_dec(v___x_686_);
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
}
}
else
{
lean_object* v_a_715_; lean_object* v___x_717_; uint8_t v_isShared_718_; uint8_t v_isSharedCheck_722_; 
lean_dec(v_rootDir_641_);
v_a_715_ = lean_ctor_get(v___x_643_, 0);
v_isSharedCheck_722_ = !lean_is_exclusive(v___x_643_);
if (v_isSharedCheck_722_ == 0)
{
v___x_717_ = v___x_643_;
v_isShared_718_ = v_isSharedCheck_722_;
goto v_resetjp_716_;
}
else
{
lean_inc(v_a_715_);
lean_dec(v___x_643_);
v___x_717_ = lean_box(0);
v_isShared_718_ = v_isSharedCheck_722_;
goto v_resetjp_716_;
}
v_resetjp_716_:
{
lean_object* v___x_720_; 
if (v_isShared_718_ == 0)
{
v___x_720_ = v___x_717_;
goto v_reusejp_719_;
}
else
{
lean_object* v_reuseFailAlloc_721_; 
v_reuseFailAlloc_721_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_721_, 0, v_a_715_);
v___x_720_ = v_reuseFailAlloc_721_;
goto v_reusejp_719_;
}
v_reusejp_719_:
{
return v___x_720_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_moduleNameOfFileName___boxed(lean_object* v_fname_723_, lean_object* v_rootDir_724_, lean_object* v_a_725_){
_start:
{
lean_object* v_res_726_; 
v_res_726_ = l_Lean_moduleNameOfFileName(v_fname_723_, v_rootDir_724_);
return v_res_726_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_searchModuleNameOfFileName_spec__0___redArg(lean_object* v_fname_730_, lean_object* v_as_x27_731_, lean_object* v_b_732_){
_start:
{
if (lean_obj_tag(v_as_x27_731_) == 0)
{
lean_object* v___x_734_; 
lean_dec_ref(v_fname_730_);
v___x_734_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_734_, 0, v_b_732_);
return v___x_734_;
}
else
{
lean_object* v_head_735_; lean_object* v_tail_736_; lean_object* v___x_737_; lean_object* v___x_738_; lean_object* v___x_739_; lean_object* v___x_740_; 
lean_dec_ref(v_b_732_);
v_head_735_ = lean_ctor_get(v_as_x27_731_, 0);
v_tail_736_ = lean_ctor_get(v_as_x27_731_, 1);
v___x_737_ = lean_box(0);
v___x_738_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_searchModuleNameOfFileName_spec__0___redArg___closed__0));
lean_inc(v_head_735_);
v___x_739_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_739_, 0, v_head_735_);
lean_inc_ref(v_fname_730_);
v___x_740_ = l_Lean_moduleNameOfFileName(v_fname_730_, v___x_739_);
if (lean_obj_tag(v___x_740_) == 0)
{
lean_object* v_a_741_; lean_object* v___x_743_; uint8_t v_isShared_744_; uint8_t v_isSharedCheck_751_; 
lean_dec_ref(v_fname_730_);
v_a_741_ = lean_ctor_get(v___x_740_, 0);
v_isSharedCheck_751_ = !lean_is_exclusive(v___x_740_);
if (v_isSharedCheck_751_ == 0)
{
v___x_743_ = v___x_740_;
v_isShared_744_ = v_isSharedCheck_751_;
goto v_resetjp_742_;
}
else
{
lean_inc(v_a_741_);
lean_dec(v___x_740_);
v___x_743_ = lean_box(0);
v_isShared_744_ = v_isSharedCheck_751_;
goto v_resetjp_742_;
}
v_resetjp_742_:
{
lean_object* v___x_745_; lean_object* v___x_746_; lean_object* v___x_747_; lean_object* v___x_749_; 
v___x_745_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_745_, 0, v_a_741_);
v___x_746_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_746_, 0, v___x_745_);
v___x_747_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_747_, 0, v___x_746_);
lean_ctor_set(v___x_747_, 1, v___x_737_);
if (v_isShared_744_ == 0)
{
lean_ctor_set(v___x_743_, 0, v___x_747_);
v___x_749_ = v___x_743_;
goto v_reusejp_748_;
}
else
{
lean_object* v_reuseFailAlloc_750_; 
v_reuseFailAlloc_750_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_750_, 0, v___x_747_);
v___x_749_ = v_reuseFailAlloc_750_;
goto v_reusejp_748_;
}
v_reusejp_748_:
{
return v___x_749_;
}
}
}
else
{
lean_dec_ref_known(v___x_740_, 1);
v_as_x27_731_ = v_tail_736_;
v_b_732_ = v___x_738_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_searchModuleNameOfFileName_spec__0___redArg___boxed(lean_object* v_fname_753_, lean_object* v_as_x27_754_, lean_object* v_b_755_, lean_object* v___y_756_){
_start:
{
lean_object* v_res_757_; 
v_res_757_ = l_List_forIn_x27_loop___at___00Lean_searchModuleNameOfFileName_spec__0___redArg(v_fname_753_, v_as_x27_754_, v_b_755_);
lean_dec(v_as_x27_754_);
return v_res_757_;
}
}
LEAN_EXPORT lean_object* l_Lean_searchModuleNameOfFileName(lean_object* v_fname_758_, lean_object* v_rootDirs_759_){
_start:
{
lean_object* v___x_761_; lean_object* v___x_762_; lean_object* v___x_763_; lean_object* v_a_764_; lean_object* v___x_766_; uint8_t v_isShared_767_; uint8_t v_isSharedCheck_776_; 
v___x_761_ = lean_box(0);
v___x_762_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_searchModuleNameOfFileName_spec__0___redArg___closed__0));
v___x_763_ = l_List_forIn_x27_loop___at___00Lean_searchModuleNameOfFileName_spec__0___redArg(v_fname_758_, v_rootDirs_759_, v___x_762_);
v_a_764_ = lean_ctor_get(v___x_763_, 0);
v_isSharedCheck_776_ = !lean_is_exclusive(v___x_763_);
if (v_isSharedCheck_776_ == 0)
{
v___x_766_ = v___x_763_;
v_isShared_767_ = v_isSharedCheck_776_;
goto v_resetjp_765_;
}
else
{
lean_inc(v_a_764_);
lean_dec(v___x_763_);
v___x_766_ = lean_box(0);
v_isShared_767_ = v_isSharedCheck_776_;
goto v_resetjp_765_;
}
v_resetjp_765_:
{
lean_object* v_fst_768_; 
v_fst_768_ = lean_ctor_get(v_a_764_, 0);
lean_inc(v_fst_768_);
lean_dec(v_a_764_);
if (lean_obj_tag(v_fst_768_) == 0)
{
lean_object* v___x_770_; 
if (v_isShared_767_ == 0)
{
lean_ctor_set(v___x_766_, 0, v___x_761_);
v___x_770_ = v___x_766_;
goto v_reusejp_769_;
}
else
{
lean_object* v_reuseFailAlloc_771_; 
v_reuseFailAlloc_771_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_771_, 0, v___x_761_);
v___x_770_ = v_reuseFailAlloc_771_;
goto v_reusejp_769_;
}
v_reusejp_769_:
{
return v___x_770_;
}
}
else
{
lean_object* v_val_772_; lean_object* v___x_774_; 
v_val_772_ = lean_ctor_get(v_fst_768_, 0);
lean_inc(v_val_772_);
lean_dec_ref_known(v_fst_768_, 1);
if (v_isShared_767_ == 0)
{
lean_ctor_set(v___x_766_, 0, v_val_772_);
v___x_774_ = v___x_766_;
goto v_reusejp_773_;
}
else
{
lean_object* v_reuseFailAlloc_775_; 
v_reuseFailAlloc_775_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_775_, 0, v_val_772_);
v___x_774_ = v_reuseFailAlloc_775_;
goto v_reusejp_773_;
}
v_reusejp_773_:
{
return v___x_774_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_searchModuleNameOfFileName___boxed(lean_object* v_fname_777_, lean_object* v_rootDirs_778_, lean_object* v_a_779_){
_start:
{
lean_object* v_res_780_; 
v_res_780_ = l_Lean_searchModuleNameOfFileName(v_fname_777_, v_rootDirs_778_);
lean_dec(v_rootDirs_778_);
return v_res_780_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_searchModuleNameOfFileName_spec__0(lean_object* v_fname_781_, lean_object* v_as_782_, lean_object* v_as_x27_783_, lean_object* v_b_784_, lean_object* v_a_785_){
_start:
{
lean_object* v___x_787_; 
v___x_787_ = l_List_forIn_x27_loop___at___00Lean_searchModuleNameOfFileName_spec__0___redArg(v_fname_781_, v_as_x27_783_, v_b_784_);
return v___x_787_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_searchModuleNameOfFileName_spec__0___boxed(lean_object* v_fname_788_, lean_object* v_as_789_, lean_object* v_as_x27_790_, lean_object* v_b_791_, lean_object* v_a_792_, lean_object* v___y_793_){
_start:
{
lean_object* v_res_794_; 
v_res_794_ = l_List_forIn_x27_loop___at___00Lean_searchModuleNameOfFileName_spec__0(v_fname_788_, v_as_789_, v_as_x27_790_, v_b_791_, v_a_792_);
lean_dec(v_as_x27_790_);
lean_dec(v_as_789_);
return v_res_794_;
}
}
LEAN_EXPORT lean_object* l_Lean_findSysroot(lean_object* v_lean_805_){
_start:
{
lean_object* v___x_807_; lean_object* v___x_808_; 
v___x_807_ = ((lean_object*)(l_Lean_findSysroot___closed__0));
v___x_808_ = lean_io_getenv(v___x_807_);
if (lean_obj_tag(v___x_808_) == 1)
{
lean_object* v_val_809_; lean_object* v___x_811_; uint8_t v_isShared_812_; uint8_t v_isSharedCheck_816_; 
lean_dec_ref(v_lean_805_);
v_val_809_ = lean_ctor_get(v___x_808_, 0);
v_isSharedCheck_816_ = !lean_is_exclusive(v___x_808_);
if (v_isSharedCheck_816_ == 0)
{
v___x_811_ = v___x_808_;
v_isShared_812_ = v_isSharedCheck_816_;
goto v_resetjp_810_;
}
else
{
lean_inc(v_val_809_);
lean_dec(v___x_808_);
v___x_811_ = lean_box(0);
v_isShared_812_ = v_isSharedCheck_816_;
goto v_resetjp_810_;
}
v_resetjp_810_:
{
lean_object* v___x_814_; 
if (v_isShared_812_ == 0)
{
lean_ctor_set_tag(v___x_811_, 0);
v___x_814_ = v___x_811_;
goto v_reusejp_813_;
}
else
{
lean_object* v_reuseFailAlloc_815_; 
v_reuseFailAlloc_815_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_815_, 0, v_val_809_);
v___x_814_ = v_reuseFailAlloc_815_;
goto v_reusejp_813_;
}
v_reusejp_813_:
{
return v___x_814_;
}
}
}
else
{
lean_object* v___x_817_; lean_object* v___x_818_; lean_object* v___x_819_; lean_object* v___x_820_; lean_object* v___x_821_; uint8_t v___x_822_; uint8_t v___x_823_; lean_object* v___x_824_; lean_object* v___x_825_; 
lean_dec(v___x_808_);
v___x_817_ = ((lean_object*)(l_Lean_findSysroot___closed__1));
v___x_818_ = ((lean_object*)(l_Lean_findSysroot___closed__3));
v___x_819_ = lean_box(0);
v___x_820_ = lean_unsigned_to_nat(0u);
v___x_821_ = ((lean_object*)(l_Lean_findSysroot___closed__4));
v___x_822_ = 1;
v___x_823_ = 0;
v___x_824_ = lean_alloc_ctor(0, 5, 2);
lean_ctor_set(v___x_824_, 0, v___x_817_);
lean_ctor_set(v___x_824_, 1, v_lean_805_);
lean_ctor_set(v___x_824_, 2, v___x_818_);
lean_ctor_set(v___x_824_, 3, v___x_819_);
lean_ctor_set(v___x_824_, 4, v___x_821_);
lean_ctor_set_uint8(v___x_824_, sizeof(void*)*5, v___x_822_);
lean_ctor_set_uint8(v___x_824_, sizeof(void*)*5 + 1, v___x_823_);
v___x_825_ = l_IO_Process_run(v___x_824_, v___x_819_);
if (lean_obj_tag(v___x_825_) == 0)
{
lean_object* v_a_826_; lean_object* v___x_828_; uint8_t v_isShared_829_; uint8_t v_isSharedCheck_840_; 
v_a_826_ = lean_ctor_get(v___x_825_, 0);
v_isSharedCheck_840_ = !lean_is_exclusive(v___x_825_);
if (v_isSharedCheck_840_ == 0)
{
v___x_828_ = v___x_825_;
v_isShared_829_ = v_isSharedCheck_840_;
goto v_resetjp_827_;
}
else
{
lean_inc(v_a_826_);
lean_dec(v___x_825_);
v___x_828_ = lean_box(0);
v_isShared_829_ = v_isSharedCheck_840_;
goto v_resetjp_827_;
}
v_resetjp_827_:
{
lean_object* v___x_830_; lean_object* v___x_831_; lean_object* v___x_832_; lean_object* v_str_833_; lean_object* v_startInclusive_834_; lean_object* v_endExclusive_835_; lean_object* v___x_836_; lean_object* v___x_838_; 
v___x_830_ = lean_string_utf8_byte_size(v_a_826_);
v___x_831_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_831_, 0, v_a_826_);
lean_ctor_set(v___x_831_, 1, v___x_820_);
lean_ctor_set(v___x_831_, 2, v___x_830_);
v___x_832_ = l_String_Slice_trimAscii(v___x_831_);
v_str_833_ = lean_ctor_get(v___x_832_, 0);
lean_inc_ref(v_str_833_);
v_startInclusive_834_ = lean_ctor_get(v___x_832_, 1);
lean_inc(v_startInclusive_834_);
v_endExclusive_835_ = lean_ctor_get(v___x_832_, 2);
lean_inc(v_endExclusive_835_);
lean_dec_ref(v___x_832_);
v___x_836_ = lean_string_utf8_extract_fast(v_str_833_, v_startInclusive_834_, v_endExclusive_835_);
lean_dec(v_endExclusive_835_);
lean_dec(v_startInclusive_834_);
lean_dec_ref(v_str_833_);
if (v_isShared_829_ == 0)
{
lean_ctor_set(v___x_828_, 0, v___x_836_);
v___x_838_ = v___x_828_;
goto v_reusejp_837_;
}
else
{
lean_object* v_reuseFailAlloc_839_; 
v_reuseFailAlloc_839_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_839_, 0, v___x_836_);
v___x_838_ = v_reuseFailAlloc_839_;
goto v_reusejp_837_;
}
v_reusejp_837_:
{
return v___x_838_;
}
}
}
else
{
lean_object* v_a_841_; lean_object* v___x_843_; uint8_t v_isShared_844_; uint8_t v_isSharedCheck_848_; 
v_a_841_ = lean_ctor_get(v___x_825_, 0);
v_isSharedCheck_848_ = !lean_is_exclusive(v___x_825_);
if (v_isSharedCheck_848_ == 0)
{
v___x_843_ = v___x_825_;
v_isShared_844_ = v_isSharedCheck_848_;
goto v_resetjp_842_;
}
else
{
lean_inc(v_a_841_);
lean_dec(v___x_825_);
v___x_843_ = lean_box(0);
v_isShared_844_ = v_isSharedCheck_848_;
goto v_resetjp_842_;
}
v_resetjp_842_:
{
lean_object* v___x_846_; 
if (v_isShared_844_ == 0)
{
v___x_846_ = v___x_843_;
goto v_reusejp_845_;
}
else
{
lean_object* v_reuseFailAlloc_847_; 
v_reuseFailAlloc_847_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_847_, 0, v_a_841_);
v___x_846_ = v_reuseFailAlloc_847_;
goto v_reusejp_845_;
}
v_reusejp_845_:
{
return v___x_846_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_findSysroot___boxed(lean_object* v_lean_849_, lean_object* v_a_850_){
_start:
{
lean_object* v_res_851_; 
v_res_851_ = l_Lean_findSysroot(v_lean_849_);
return v_res_851_;
}
}
lean_object* runtime_initialize_Init_System_IO(uint8_t builtin);
lean_object* runtime_initialize_Init_Control_Do(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_ToString_Name(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_String_TakeDrop(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_List_Monadic(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Option_BasicAux(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_ToString_Macro(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_String_Length(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Util_Path(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Init_System_IO(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Control_Do(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_ToString_Name(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_String_TakeDrop(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_List_Monadic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Option_BasicAux(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_ToString_Macro(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_String_Length(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Util_Path_0__Lean_initFn_00___x40_Lean_Util_Path_2007882598____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l_Lean_searchPathRef = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_searchPathRef);
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Util_Path(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init_System_IO(uint8_t builtin);
lean_object* initialize_Init_Control_Do(uint8_t builtin);
lean_object* initialize_Init_Data_ToString_Name(uint8_t builtin);
lean_object* initialize_Init_Data_String_TakeDrop(uint8_t builtin);
lean_object* initialize_Init_Data_List_Monadic(uint8_t builtin);
lean_object* initialize_Init_Data_Option_BasicAux(uint8_t builtin);
lean_object* initialize_Init_Data_ToString_Macro(uint8_t builtin);
lean_object* initialize_Init_Data_String_Length(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Util_Path(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_System_IO(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Control_Do(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_ToString_Name(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_String_TakeDrop(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_List_Monadic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Option_BasicAux(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_ToString_Macro(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_String_Length(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Util_Path(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Util_Path(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Util_Path(builtin);
}
#ifdef __cplusplus
}
#endif

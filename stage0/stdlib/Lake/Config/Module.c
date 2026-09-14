// Lean compiler output
// Module: Lake.Config.Module
// Imports: public import Lake.Config.LeanLib
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
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
uint8_t lean_string_memcmp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_String_Slice_pos_x21(lean_object*, lean_object*);
lean_object* l_System_FilePath_normalize(lean_object*);
lean_object* l_Lake_joinRelative(lean_object*, lean_object*);
lean_object* l_Lean_modToFilePath(lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
extern uint32_t l_System_FilePath_pathSeparator;
lean_object* lean_string_push(lean_object*, uint32_t);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_add(size_t, size_t);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
lean_object* lean_io_read_dir(lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* l_IO_FS_DirEntry_path(lean_object*);
uint8_t l_System_FilePath_isDir(lean_object*);
lean_object* l_System_FilePath_extension(lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l_System_FilePath_withExtension(lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
uint8_t l_Lake_LeanLibConfig_isBuildableModule___redArg(lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Lean_Name_getPrefix(lean_object*);
lean_object* l_Lake_OrdHashSet_empty___redArg();
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lake_Package_id_x3f(lean_object*);
lean_object* l_Lean_mkModuleInitializationStem(lean_object*, lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
extern lean_object* l_Lake_sharedLibExt;
lean_object* l_Lake_BuildType_leanOptions(uint8_t);
lean_object* l_Lean_LeanOptions_ofArray(lean_object*);
lean_object* l_Lean_LeanOptions_append(lean_object*, lean_object*);
lean_object* l_Lean_LeanOptions_appendArray(lean_object*, lean_object*);
uint8_t l_Lake_instOrdBuildType_ord(uint8_t, uint8_t);
lean_object* l_String_Slice_toString(lean_object*);
lean_object* l_System_FilePath_components(lean_object*);
lean_object* l_String_Slice_Pos_nextn(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t l_Lake_Backend_orPreferLeft(uint8_t, uint8_t);
lean_object* l_Lean_Name_getString_x21(lean_object*);
lean_object* l_System_FilePath_addExtension(lean_object*, lean_object*);
lean_object* l_Lake_BuildType_leanArgs___redArg();
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(lean_object*, uint8_t);
uint8_t lean_internal_has_llvm_backend(lean_object*);
lean_object* l_Lake_BuildType_leancArgs(uint8_t);
lean_object* l_Lean_Name_toString(lean_object*, uint8_t);
lean_object* l_Lake_relPathFrom(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Module_keyName(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Module_keyName___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_instToJsonModule___lam__0(lean_object*);
static const lean_closure_object l_Lake_instToJsonModule___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_instToJsonModule___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_instToJsonModule___closed__0 = (const lean_object*)&l_Lake_instToJsonModule___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_instToJsonModule = (const lean_object*)&l_Lake_instToJsonModule___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_instToStringModule___lam__0(lean_object*);
static const lean_closure_object l_Lake_instToStringModule___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_instToStringModule___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_instToStringModule___closed__0 = (const lean_object*)&l_Lake_instToStringModule___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_instToStringModule = (const lean_object*)&l_Lake_instToStringModule___closed__0_value;
LEAN_EXPORT uint64_t l_Lake_instHashableModule___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lake_instHashableModule___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lake_instHashableModule___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_instHashableModule___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_instHashableModule___closed__0 = (const lean_object*)&l_Lake_instHashableModule___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_instHashableModule = (const lean_object*)&l_Lake_instHashableModule___closed__0_value;
LEAN_EXPORT uint8_t l_Lake_instBEqModule___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_instBEqModule___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lake_instBEqModule___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_instBEqModule___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_instBEqModule___closed__0 = (const lean_object*)&l_Lake_instBEqModule___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_instBEqModule = (const lean_object*)&l_Lake_instBEqModule___closed__0_value;
static lean_once_cell_t l_Lake_ModuleSet_empty___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_ModuleSet_empty___closed__0;
static lean_once_cell_t l_Lake_ModuleSet_empty___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_ModuleSet_empty___closed__1;
LEAN_EXPORT lean_object* l_Lake_ModuleSet_empty;
static lean_once_cell_t l_Lake_OrdModuleSet_empty___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_OrdModuleSet_empty___closed__0;
LEAN_EXPORT lean_object* l_Lake_OrdModuleSet_empty;
LEAN_EXPORT lean_object* l_Lake_ModuleMap_empty___redArg();
LEAN_EXPORT lean_object* l_Lake_ModuleMap_empty___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_ModuleMap_empty(lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanLib_findModule_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_dropPrefix_x3f___at___00Lake_LeanLib_findModuleBySrc_x3f_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_dropPrefix_x3f___at___00Lake_LeanLib_findModuleBySrc_x3f_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_dropPrefix_x3f___at___00Lake_LeanLib_findModuleBySrc_x3f_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_dropPrefix_x3f___at___00Lake_LeanLib_findModuleBySrc_x3f_spec__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_String_dropSuffix_x3f___at___00Lake_LeanLib_findModuleBySrc_x3f_spec__2___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = ".lean"};
static const lean_object* l_String_dropSuffix_x3f___at___00Lake_LeanLib_findModuleBySrc_x3f_spec__2___redArg___closed__0 = (const lean_object*)&l_String_dropSuffix_x3f___at___00Lake_LeanLib_findModuleBySrc_x3f_spec__2___redArg___closed__0_value;
static lean_once_cell_t l_String_dropSuffix_x3f___at___00Lake_LeanLib_findModuleBySrc_x3f_spec__2___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_String_dropSuffix_x3f___at___00Lake_LeanLib_findModuleBySrc_x3f_spec__2___redArg___closed__1;
LEAN_EXPORT lean_object* l_String_dropSuffix_x3f___at___00Lake_LeanLib_findModuleBySrc_x3f_spec__2___redArg(lean_object*);
LEAN_EXPORT lean_object* l_String_dropSuffix_x3f___at___00Lake_LeanLib_findModuleBySrc_x3f_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_dropSuffix_x3f___at___00Lake_LeanLib_findModuleBySrc_x3f_spec__2___boxed(lean_object*, lean_object*);
static const lean_string_object l_String_dropSuffix_x3f___at___00Lake_LeanLib_findModuleBySrc_x3f_spec__3___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_String_dropSuffix_x3f___at___00Lake_LeanLib_findModuleBySrc_x3f_spec__3___redArg___closed__0 = (const lean_object*)&l_String_dropSuffix_x3f___at___00Lake_LeanLib_findModuleBySrc_x3f_spec__3___redArg___closed__0_value;
static lean_once_cell_t l_String_dropSuffix_x3f___at___00Lake_LeanLib_findModuleBySrc_x3f_spec__3___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_String_dropSuffix_x3f___at___00Lake_LeanLib_findModuleBySrc_x3f_spec__3___redArg___closed__1;
static lean_once_cell_t l_String_dropSuffix_x3f___at___00Lake_LeanLib_findModuleBySrc_x3f_spec__3___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_String_dropSuffix_x3f___at___00Lake_LeanLib_findModuleBySrc_x3f_spec__3___redArg___closed__2;
LEAN_EXPORT lean_object* l_String_dropSuffix_x3f___at___00Lake_LeanLib_findModuleBySrc_x3f_spec__3___redArg(lean_object*);
LEAN_EXPORT lean_object* l_String_dropSuffix_x3f___at___00Lake_LeanLib_findModuleBySrc_x3f_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_dropSuffix_x3f___at___00Lake_LeanLib_findModuleBySrc_x3f_spec__3___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Lake_LeanLib_findModuleBySrc_x3f_spec__0(lean_object*, lean_object*);
static lean_once_cell_t l_Lake_LeanLib_findModuleBySrc_x3f___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_LeanLib_findModuleBySrc_x3f___closed__0;
LEAN_EXPORT lean_object* l_Lake_LeanLib_findModuleBySrc_x3f(lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Package_findModule_x3f_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "lean_lib"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Package_findModule_x3f_spec__1___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Package_findModule_x3f_spec__1___closed__0_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Package_findModule_x3f_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Package_findModule_x3f_spec__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(99, 123, 8, 14, 20, 41, 164, 170)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Package_findModule_x3f_spec__1___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Package_findModule_x3f_spec__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Package_findModule_x3f_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Package_findModule_x3f_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lake_Package_findModule_x3f_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lake_Package_findModule_x3f_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lake_Package_findModule_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lake_Package_findModule_x3f___closed__0 = (const lean_object*)&l_Lake_Package_findModule_x3f___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_Package_findModule_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lake_Package_findModule_x3f_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lake_Package_findModule_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Option_instBEq_beq___at___00Lean_forEachModuleInDir___at___00Lake_LeanLib_getModuleArray_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Option_instBEq_beq___at___00Lean_forEachModuleInDir___at___00Lake_LeanLib_getModuleArray_spec__0_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_forEachModuleInDir___at___00Lake_LeanLib_getModuleArray_spec__0_spec__1___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_forEachModuleInDir___at___00Lake_LeanLib_getModuleArray_spec__0_spec__1___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_forEachModuleInDir___at___00Lake_LeanLib_getModuleArray_spec__0_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "lean"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_forEachModuleInDir___at___00Lake_LeanLib_getModuleArray_spec__0_spec__1___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_forEachModuleInDir___at___00Lake_LeanLib_getModuleArray_spec__0_spec__1___closed__0_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_forEachModuleInDir___at___00Lake_LeanLib_getModuleArray_spec__0_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_forEachModuleInDir___at___00Lake_LeanLib_getModuleArray_spec__0_spec__1___closed__0_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_forEachModuleInDir___at___00Lake_LeanLib_getModuleArray_spec__0_spec__1___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_forEachModuleInDir___at___00Lake_LeanLib_getModuleArray_spec__0_spec__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_forEachModuleInDir___at___00Lake_LeanLib_getModuleArray_spec__0_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_forEachModuleInDir___at___00Lake_LeanLib_getModuleArray_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_forEachModuleInDir___at___00Lake_LeanLib_getModuleArray_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_forEachModuleInDir___at___00Lake_LeanLib_getModuleArray_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_LeanLib_getModuleArray_spec__1___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_LeanLib_getModuleArray_spec__1___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_LeanLib_getModuleArray_spec__1___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_LeanLib_getModuleArray_spec__1___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_LeanLib_getModuleArray_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_LeanLib_getModuleArray_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lake_LeanLib_getModuleArray___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lake_LeanLib_getModuleArray___closed__0 = (const lean_object*)&l_Lake_LeanLib_getModuleArray___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_LeanLib_getModuleArray(lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanLib_getModuleArray___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lake_LeanLib_rootModules_spec__0_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lake_LeanLib_rootModules_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Lake_LeanLib_rootModules_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Lake_LeanLib_rootModules_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanLib_rootModules(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Module_pkg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Module_pkg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Module_rootDir(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Module_fileName(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Module_fileName___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Module_filePath(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Module_filePath___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Module_srcPath(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Module_srcPath___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Module_leanFile(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Module_relLeanFile(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Module_leanLibPath(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Module_leanLibPath___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Module_leanLibDir(lean_object*);
static const lean_string_object l_Lake_Module_oleanFile___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "olean"};
static const lean_object* l_Lake_Module_oleanFile___closed__0 = (const lean_object*)&l_Lake_Module_oleanFile___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_Module_oleanFile(lean_object*);
static const lean_string_object l_Lake_Module_oleanServerFile___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "olean.server"};
static const lean_object* l_Lake_Module_oleanServerFile___closed__0 = (const lean_object*)&l_Lake_Module_oleanServerFile___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_Module_oleanServerFile(lean_object*);
static const lean_string_object l_Lake_Module_oleanPrivateFile___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "olean.private"};
static const lean_object* l_Lake_Module_oleanPrivateFile___closed__0 = (const lean_object*)&l_Lake_Module_oleanPrivateFile___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_Module_oleanPrivateFile(lean_object*);
static const lean_string_object l_Lake_Module_ileanFile___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "ilean"};
static const lean_object* l_Lake_Module_ileanFile___closed__0 = (const lean_object*)&l_Lake_Module_ileanFile___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_Module_ileanFile(lean_object*);
static const lean_string_object l_Lake_Module_irSigFile___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "ir.sig"};
static const lean_object* l_Lake_Module_irSigFile___closed__0 = (const lean_object*)&l_Lake_Module_irSigFile___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_Module_irSigFile(lean_object*);
static const lean_string_object l_Lake_Module_irFile___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "ir"};
static const lean_object* l_Lake_Module_irFile___closed__0 = (const lean_object*)&l_Lake_Module_irFile___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_Module_irFile(lean_object*);
static const lean_string_object l_Lake_Module_traceFile___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lake_Module_traceFile___closed__0 = (const lean_object*)&l_Lake_Module_traceFile___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_Module_traceFile(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Module_irPath(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Module_irPath___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Module_irDir(lean_object*);
static const lean_string_object l_Lake_Module_setupFile___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "setup.json"};
static const lean_object* l_Lake_Module_setupFile___closed__0 = (const lean_object*)&l_Lake_Module_setupFile___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_Module_setupFile(lean_object*);
static const lean_string_object l_Lake_Module_cFile___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "c"};
static const lean_object* l_Lake_Module_cFile___closed__0 = (const lean_object*)&l_Lake_Module_cFile___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_Module_cFile(lean_object*);
static const lean_string_object l_Lake_Module_coExportFile___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "c.o.export"};
static const lean_object* l_Lake_Module_coExportFile___closed__0 = (const lean_object*)&l_Lake_Module_coExportFile___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_Module_coExportFile(lean_object*);
static const lean_string_object l_Lake_Module_coNoExportFile___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "c.o.noexport"};
static const lean_object* l_Lake_Module_coNoExportFile___closed__0 = (const lean_object*)&l_Lake_Module_coNoExportFile___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_Module_coNoExportFile(lean_object*);
static const lean_string_object l_Lake_Module_bcFile___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "bc"};
static const lean_object* l_Lake_Module_bcFile___closed__0 = (const lean_object*)&l_Lake_Module_bcFile___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_Module_bcFile(lean_object*);
static lean_once_cell_t l_Lake_Module_bcFile_x3f___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l_Lake_Module_bcFile_x3f___closed__0;
LEAN_EXPORT lean_object* l_Lake_Module_bcFile_x3f(lean_object*);
static const lean_string_object l_Lake_Module_bcoFile___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "bc.o"};
static const lean_object* l_Lake_Module_bcoFile___closed__0 = (const lean_object*)&l_Lake_Module_bcoFile___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_Module_bcoFile(lean_object*);
static const lean_string_object l_Lake_Module_ltarFile___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "ltar"};
static const lean_object* l_Lake_Module_ltarFile___closed__0 = (const lean_object*)&l_Lake_Module_ltarFile___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_Module_ltarFile(lean_object*);
static const lean_string_object l_Lake_Module_dynlibSuffix___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "-1"};
static const lean_object* l_Lake_Module_dynlibSuffix___closed__0 = (const lean_object*)&l_Lake_Module_dynlibSuffix___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_Module_dynlibSuffix = (const lean_object*)&l_Lake_Module_dynlibSuffix___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_Module_dynlibName(lean_object*);
static const lean_string_object l_Lake_Module_dynlibFile___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "."};
static const lean_object* l_Lake_Module_dynlibFile___closed__0 = (const lean_object*)&l_Lake_Module_dynlibFile___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_Module_dynlibFile(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Module_serverOptions(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Module_serverOptions___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lake_Module_buildType(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Module_buildType___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lake_Module_backend(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Module_backend___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lake_Module_allowImportAll(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Module_allowImportAll___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lake_Module_requiresModuleSystem(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Module_requiresModuleSystem___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lake_Module_allowNonModules(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Module_allowNonModules___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Module_dynlibs(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Module_plugins(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Module_leanOptions(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Module_leanOptions___boxed(lean_object*);
static lean_once_cell_t l_Lake_Module_leanArgs___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Module_leanArgs___closed__0;
LEAN_EXPORT lean_object* l_Lake_Module_leanArgs(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Module_leanArgs___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Module_weakLeanArgs(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Module_leancArgs(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Module_leancArgs___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Module_weakLeancArgs(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Module_linkArgs(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Module_weakLinkArgs(lean_object*);
static const lean_string_object l_Lake_Module_leanIncludeDir_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "include"};
static const lean_object* l_Lake_Module_leanIncludeDir_x3f___closed__0 = (const lean_object*)&l_Lake_Module_leanIncludeDir_x3f___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_Module_leanIncludeDir_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Module_platformIndependent(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Module_platformIndependent___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lake_Module_shouldPrecompileImports(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Module_shouldPrecompileImports___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lake_Module_shouldPrecompile(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Module_shouldPrecompile___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Module_nativeFacets(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lake_Module_nativeFacets___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Module_keyName(lean_object* v_self_1_){
_start:
{
lean_object* v_name_2_; 
v_name_2_ = lean_ctor_get(v_self_1_, 1);
lean_inc(v_name_2_);
return v_name_2_;
}
}
LEAN_EXPORT lean_object* l_Lake_Module_keyName___boxed(lean_object* v_self_3_){
_start:
{
lean_object* v_res_4_; 
v_res_4_ = l_Lake_Module_keyName(v_self_3_);
lean_dec_ref(v_self_3_);
return v_res_4_;
}
}
LEAN_EXPORT lean_object* l_Lake_instToJsonModule___lam__0(lean_object* v_x_5_){
_start:
{
lean_object* v_name_6_; uint8_t v___x_7_; lean_object* v___x_8_; lean_object* v___x_9_; 
v_name_6_ = lean_ctor_get(v_x_5_, 1);
lean_inc(v_name_6_);
lean_dec_ref(v_x_5_);
v___x_7_ = 1;
v___x_8_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_name_6_, v___x_7_);
v___x_9_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_9_, 0, v___x_8_);
return v___x_9_;
}
}
LEAN_EXPORT lean_object* l_Lake_instToStringModule___lam__0(lean_object* v_x_12_){
_start:
{
lean_object* v_name_13_; uint8_t v___x_14_; lean_object* v___x_15_; 
v_name_13_ = lean_ctor_get(v_x_12_, 1);
lean_inc(v_name_13_);
lean_dec_ref(v_x_12_);
v___x_14_ = 1;
v___x_15_ = l_Lean_Name_toString(v_name_13_, v___x_14_);
return v___x_15_;
}
}
LEAN_EXPORT uint64_t l_Lake_instHashableModule___lam__0(lean_object* v_m_18_){
_start:
{
lean_object* v_name_19_; lean_object* v___x_20_; 
v_name_19_ = lean_ctor_get(v_m_18_, 1);
v___x_20_ = l_unsafeCast___redArg(v_name_19_);
if (lean_obj_tag(v___x_20_) == 0)
{
uint64_t v___x_21_; 
v___x_21_ = 1723ULL;
return v___x_21_;
}
else
{
uint64_t v_hash_22_; 
v_hash_22_ = lean_ctor_get_uint64(v___x_20_, sizeof(void*)*2);
lean_dec(v___x_20_);
return v_hash_22_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_instHashableModule___lam__0___boxed(lean_object* v_m_23_){
_start:
{
uint64_t v_res_24_; lean_object* v_r_25_; 
v_res_24_ = l_Lake_instHashableModule___lam__0(v_m_23_);
lean_dec_ref(v_m_23_);
v_r_25_ = lean_box_uint64(v_res_24_);
return v_r_25_;
}
}
LEAN_EXPORT uint8_t l_Lake_instBEqModule___lam__0(lean_object* v_m_28_, lean_object* v_n_29_){
_start:
{
lean_object* v_name_30_; lean_object* v_name_31_; uint8_t v___x_32_; 
v_name_30_ = lean_ctor_get(v_m_28_, 1);
v_name_31_ = lean_ctor_get(v_n_29_, 1);
v___x_32_ = lean_name_eq(v_name_30_, v_name_31_);
return v___x_32_;
}
}
LEAN_EXPORT lean_object* l_Lake_instBEqModule___lam__0___boxed(lean_object* v_m_33_, lean_object* v_n_34_){
_start:
{
uint8_t v_res_35_; lean_object* v_r_36_; 
v_res_35_ = l_Lake_instBEqModule___lam__0(v_m_33_, v_n_34_);
lean_dec_ref(v_n_34_);
lean_dec_ref(v_m_33_);
v_r_36_ = lean_box(v_res_35_);
return v_r_36_;
}
}
static lean_object* _init_l_Lake_ModuleSet_empty___closed__0(void){
_start:
{
lean_object* v___x_39_; lean_object* v___x_40_; lean_object* v___x_41_; 
v___x_39_ = lean_box(0);
v___x_40_ = lean_unsigned_to_nat(16u);
v___x_41_ = lean_mk_array(v___x_40_, v___x_39_);
return v___x_41_;
}
}
static lean_object* _init_l_Lake_ModuleSet_empty___closed__1(void){
_start:
{
lean_object* v___x_42_; lean_object* v___x_43_; lean_object* v___x_44_; 
v___x_42_ = lean_obj_once(&l_Lake_ModuleSet_empty___closed__0, &l_Lake_ModuleSet_empty___closed__0_once, _init_l_Lake_ModuleSet_empty___closed__0);
v___x_43_ = lean_unsigned_to_nat(0u);
v___x_44_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_44_, 0, v___x_43_);
lean_ctor_set(v___x_44_, 1, v___x_42_);
return v___x_44_;
}
}
static lean_object* _init_l_Lake_ModuleSet_empty(void){
_start:
{
lean_object* v___x_45_; 
v___x_45_ = lean_obj_once(&l_Lake_ModuleSet_empty___closed__1, &l_Lake_ModuleSet_empty___closed__1_once, _init_l_Lake_ModuleSet_empty___closed__1);
return v___x_45_;
}
}
static lean_object* _init_l_Lake_OrdModuleSet_empty___closed__0(void){
_start:
{
lean_object* v___x_46_; 
v___x_46_ = l_Lake_OrdHashSet_empty___redArg();
return v___x_46_;
}
}
static lean_object* _init_l_Lake_OrdModuleSet_empty(void){
_start:
{
lean_object* v___x_47_; 
v___x_47_ = lean_obj_once(&l_Lake_OrdModuleSet_empty___closed__0, &l_Lake_OrdModuleSet_empty___closed__0_once, _init_l_Lake_OrdModuleSet_empty___closed__0);
return v___x_47_;
}
}
LEAN_EXPORT lean_object* l_Lake_ModuleMap_empty___redArg(){
_start:
{
lean_object* v___x_49_; 
v___x_49_ = lean_box(1);
return v___x_49_;
}
}
LEAN_EXPORT lean_object* l_Lake_ModuleMap_empty___redArg___boxed(lean_object* v___dummy_50_){
_start:
{
lean_object* v_res_51_; 
v_res_51_ = l_Lake_ModuleMap_empty___redArg();
return v_res_51_;
}
}
LEAN_EXPORT lean_object* l_Lake_ModuleMap_empty(lean_object* v_00_u03b1_52_){
_start:
{
lean_object* v___x_53_; 
v___x_53_ = lean_box(1);
return v___x_53_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLib_findModule_x3f(lean_object* v_mod_54_, lean_object* v_self_55_){
_start:
{
lean_object* v_config_56_; uint8_t v___x_57_; 
v_config_56_ = lean_ctor_get(v_self_55_, 2);
v___x_57_ = l_Lake_LeanLibConfig_isBuildableModule___redArg(v_mod_54_, v_config_56_);
if (v___x_57_ == 0)
{
lean_object* v___x_58_; 
lean_dec_ref(v_self_55_);
lean_dec(v_mod_54_);
v___x_58_ = lean_box(0);
return v___x_58_;
}
else
{
lean_object* v___x_59_; lean_object* v___x_60_; 
v___x_59_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_59_, 0, v_self_55_);
lean_ctor_set(v___x_59_, 1, v_mod_54_);
v___x_60_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_60_, 0, v___x_59_);
return v___x_60_;
}
}
}
LEAN_EXPORT lean_object* l_String_dropPrefix_x3f___at___00Lake_LeanLib_findModuleBySrc_x3f_spec__1___redArg(lean_object* v___x_61_, lean_object* v_s_62_){
_start:
{
lean_object* v___x_63_; lean_object* v___x_64_; uint8_t v___x_65_; 
v___x_63_ = lean_string_utf8_byte_size(v_s_62_);
v___x_64_ = lean_string_utf8_byte_size(v___x_61_);
v___x_65_ = lean_nat_dec_le(v___x_64_, v___x_63_);
if (v___x_65_ == 0)
{
lean_object* v___x_66_; 
lean_dec_ref(v_s_62_);
v___x_66_ = lean_box(0);
return v___x_66_;
}
else
{
lean_object* v___x_67_; uint8_t v___x_68_; 
v___x_67_ = lean_unsigned_to_nat(0u);
v___x_68_ = lean_string_memcmp(v_s_62_, v___x_61_, v___x_67_, v___x_67_, v___x_64_);
if (v___x_68_ == 0)
{
lean_object* v___x_69_; 
lean_dec_ref(v_s_62_);
v___x_69_ = lean_box(0);
return v___x_69_;
}
else
{
lean_object* v___x_70_; lean_object* v___x_71_; lean_object* v___x_72_; lean_object* v___x_73_; 
lean_inc_ref(v_s_62_);
v___x_70_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_70_, 0, v_s_62_);
lean_ctor_set(v___x_70_, 1, v___x_67_);
lean_ctor_set(v___x_70_, 2, v___x_63_);
v___x_71_ = l_String_Slice_pos_x21(v___x_70_, v___x_64_);
lean_dec_ref_known(v___x_70_, 3);
v___x_72_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_72_, 0, v_s_62_);
lean_ctor_set(v___x_72_, 1, v___x_71_);
lean_ctor_set(v___x_72_, 2, v___x_63_);
v___x_73_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_73_, 0, v___x_72_);
return v___x_73_;
}
}
}
}
LEAN_EXPORT lean_object* l_String_dropPrefix_x3f___at___00Lake_LeanLib_findModuleBySrc_x3f_spec__1___redArg___boxed(lean_object* v___x_74_, lean_object* v_s_75_){
_start:
{
lean_object* v_res_76_; 
v_res_76_ = l_String_dropPrefix_x3f___at___00Lake_LeanLib_findModuleBySrc_x3f_spec__1___redArg(v___x_74_, v_s_75_);
lean_dec_ref(v___x_74_);
return v_res_76_;
}
}
LEAN_EXPORT lean_object* l_String_dropPrefix_x3f___at___00Lake_LeanLib_findModuleBySrc_x3f_spec__1(lean_object* v___x_77_, lean_object* v_s_78_, lean_object* v_pat_79_){
_start:
{
lean_object* v___x_80_; 
v___x_80_ = l_String_dropPrefix_x3f___at___00Lake_LeanLib_findModuleBySrc_x3f_spec__1___redArg(v___x_77_, v_s_78_);
return v___x_80_;
}
}
LEAN_EXPORT lean_object* l_String_dropPrefix_x3f___at___00Lake_LeanLib_findModuleBySrc_x3f_spec__1___boxed(lean_object* v___x_81_, lean_object* v_s_82_, lean_object* v_pat_83_){
_start:
{
lean_object* v_res_84_; 
v_res_84_ = l_String_dropPrefix_x3f___at___00Lake_LeanLib_findModuleBySrc_x3f_spec__1(v___x_81_, v_s_82_, v_pat_83_);
lean_dec_ref(v_pat_83_);
lean_dec_ref(v___x_81_);
return v_res_84_;
}
}
static lean_object* _init_l_String_dropSuffix_x3f___at___00Lake_LeanLib_findModuleBySrc_x3f_spec__2___redArg___closed__1(void){
_start:
{
lean_object* v___x_86_; lean_object* v___x_87_; 
v___x_86_ = ((lean_object*)(l_String_dropSuffix_x3f___at___00Lake_LeanLib_findModuleBySrc_x3f_spec__2___redArg___closed__0));
v___x_87_ = lean_string_utf8_byte_size(v___x_86_);
return v___x_87_;
}
}
LEAN_EXPORT lean_object* l_String_dropSuffix_x3f___at___00Lake_LeanLib_findModuleBySrc_x3f_spec__2___redArg(lean_object* v_s_88_){
_start:
{
lean_object* v___x_89_; lean_object* v___x_90_; lean_object* v___x_91_; uint8_t v___x_92_; 
v___x_89_ = ((lean_object*)(l_String_dropSuffix_x3f___at___00Lake_LeanLib_findModuleBySrc_x3f_spec__2___redArg___closed__0));
v___x_90_ = lean_string_utf8_byte_size(v_s_88_);
v___x_91_ = lean_obj_once(&l_String_dropSuffix_x3f___at___00Lake_LeanLib_findModuleBySrc_x3f_spec__2___redArg___closed__1, &l_String_dropSuffix_x3f___at___00Lake_LeanLib_findModuleBySrc_x3f_spec__2___redArg___closed__1_once, _init_l_String_dropSuffix_x3f___at___00Lake_LeanLib_findModuleBySrc_x3f_spec__2___redArg___closed__1);
v___x_92_ = lean_nat_dec_le(v___x_91_, v___x_90_);
if (v___x_92_ == 0)
{
lean_object* v___x_93_; 
lean_dec_ref(v_s_88_);
v___x_93_ = lean_box(0);
return v___x_93_;
}
else
{
lean_object* v___x_94_; lean_object* v___x_95_; uint8_t v___x_96_; 
v___x_94_ = lean_unsigned_to_nat(0u);
v___x_95_ = lean_nat_sub(v___x_90_, v___x_91_);
v___x_96_ = lean_string_memcmp(v_s_88_, v___x_89_, v___x_95_, v___x_94_, v___x_91_);
if (v___x_96_ == 0)
{
lean_object* v___x_97_; 
lean_dec(v___x_95_);
lean_dec_ref(v_s_88_);
v___x_97_ = lean_box(0);
return v___x_97_;
}
else
{
lean_object* v___x_98_; lean_object* v___x_99_; lean_object* v___x_100_; lean_object* v___x_101_; 
lean_inc_ref(v_s_88_);
v___x_98_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_98_, 0, v_s_88_);
lean_ctor_set(v___x_98_, 1, v___x_94_);
lean_ctor_set(v___x_98_, 2, v___x_90_);
v___x_99_ = l_String_Slice_pos_x21(v___x_98_, v___x_95_);
lean_dec(v___x_95_);
lean_dec_ref_known(v___x_98_, 3);
v___x_100_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_100_, 0, v_s_88_);
lean_ctor_set(v___x_100_, 1, v___x_94_);
lean_ctor_set(v___x_100_, 2, v___x_99_);
v___x_101_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_101_, 0, v___x_100_);
return v___x_101_;
}
}
}
}
LEAN_EXPORT lean_object* l_String_dropSuffix_x3f___at___00Lake_LeanLib_findModuleBySrc_x3f_spec__2(lean_object* v_s_102_, lean_object* v_pat_103_){
_start:
{
lean_object* v___x_104_; 
v___x_104_ = l_String_dropSuffix_x3f___at___00Lake_LeanLib_findModuleBySrc_x3f_spec__2___redArg(v_s_102_);
return v___x_104_;
}
}
LEAN_EXPORT lean_object* l_String_dropSuffix_x3f___at___00Lake_LeanLib_findModuleBySrc_x3f_spec__2___boxed(lean_object* v_s_105_, lean_object* v_pat_106_){
_start:
{
lean_object* v_res_107_; 
v_res_107_ = l_String_dropSuffix_x3f___at___00Lake_LeanLib_findModuleBySrc_x3f_spec__2(v_s_105_, v_pat_106_);
lean_dec_ref(v_pat_106_);
return v_res_107_;
}
}
static lean_object* _init_l_String_dropSuffix_x3f___at___00Lake_LeanLib_findModuleBySrc_x3f_spec__3___redArg___closed__1(void){
_start:
{
uint32_t v___x_109_; lean_object* v___x_110_; lean_object* v___x_111_; 
v___x_109_ = l_System_FilePath_pathSeparator;
v___x_110_ = ((lean_object*)(l_String_dropSuffix_x3f___at___00Lake_LeanLib_findModuleBySrc_x3f_spec__3___redArg___closed__0));
v___x_111_ = lean_string_push(v___x_110_, v___x_109_);
return v___x_111_;
}
}
static lean_object* _init_l_String_dropSuffix_x3f___at___00Lake_LeanLib_findModuleBySrc_x3f_spec__3___redArg___closed__2(void){
_start:
{
lean_object* v___x_112_; lean_object* v___x_113_; 
v___x_112_ = lean_obj_once(&l_String_dropSuffix_x3f___at___00Lake_LeanLib_findModuleBySrc_x3f_spec__3___redArg___closed__1, &l_String_dropSuffix_x3f___at___00Lake_LeanLib_findModuleBySrc_x3f_spec__3___redArg___closed__1_once, _init_l_String_dropSuffix_x3f___at___00Lake_LeanLib_findModuleBySrc_x3f_spec__3___redArg___closed__1);
v___x_113_ = lean_string_utf8_byte_size(v___x_112_);
return v___x_113_;
}
}
LEAN_EXPORT lean_object* l_String_dropSuffix_x3f___at___00Lake_LeanLib_findModuleBySrc_x3f_spec__3___redArg(lean_object* v_s_114_){
_start:
{
lean_object* v___x_115_; lean_object* v___x_116_; lean_object* v___x_117_; uint8_t v___x_118_; 
v___x_115_ = lean_obj_once(&l_String_dropSuffix_x3f___at___00Lake_LeanLib_findModuleBySrc_x3f_spec__3___redArg___closed__1, &l_String_dropSuffix_x3f___at___00Lake_LeanLib_findModuleBySrc_x3f_spec__3___redArg___closed__1_once, _init_l_String_dropSuffix_x3f___at___00Lake_LeanLib_findModuleBySrc_x3f_spec__3___redArg___closed__1);
v___x_116_ = lean_string_utf8_byte_size(v_s_114_);
v___x_117_ = lean_obj_once(&l_String_dropSuffix_x3f___at___00Lake_LeanLib_findModuleBySrc_x3f_spec__3___redArg___closed__2, &l_String_dropSuffix_x3f___at___00Lake_LeanLib_findModuleBySrc_x3f_spec__3___redArg___closed__2_once, _init_l_String_dropSuffix_x3f___at___00Lake_LeanLib_findModuleBySrc_x3f_spec__3___redArg___closed__2);
v___x_118_ = lean_nat_dec_le(v___x_117_, v___x_116_);
if (v___x_118_ == 0)
{
lean_object* v___x_119_; 
lean_dec_ref(v_s_114_);
v___x_119_ = lean_box(0);
return v___x_119_;
}
else
{
lean_object* v___x_120_; lean_object* v___x_121_; uint8_t v___x_122_; 
v___x_120_ = lean_unsigned_to_nat(0u);
v___x_121_ = lean_nat_sub(v___x_116_, v___x_117_);
v___x_122_ = lean_string_memcmp(v_s_114_, v___x_115_, v___x_121_, v___x_120_, v___x_117_);
if (v___x_122_ == 0)
{
lean_object* v___x_123_; 
lean_dec(v___x_121_);
lean_dec_ref(v_s_114_);
v___x_123_ = lean_box(0);
return v___x_123_;
}
else
{
lean_object* v___x_124_; lean_object* v___x_125_; lean_object* v___x_126_; lean_object* v___x_127_; 
lean_inc_ref(v_s_114_);
v___x_124_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_124_, 0, v_s_114_);
lean_ctor_set(v___x_124_, 1, v___x_120_);
lean_ctor_set(v___x_124_, 2, v___x_116_);
v___x_125_ = l_String_Slice_pos_x21(v___x_124_, v___x_121_);
lean_dec(v___x_121_);
lean_dec_ref_known(v___x_124_, 3);
v___x_126_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_126_, 0, v_s_114_);
lean_ctor_set(v___x_126_, 1, v___x_120_);
lean_ctor_set(v___x_126_, 2, v___x_125_);
v___x_127_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_127_, 0, v___x_126_);
return v___x_127_;
}
}
}
}
LEAN_EXPORT lean_object* l_String_dropSuffix_x3f___at___00Lake_LeanLib_findModuleBySrc_x3f_spec__3(lean_object* v_s_128_, lean_object* v_pat_129_){
_start:
{
lean_object* v___x_130_; 
v___x_130_ = l_String_dropSuffix_x3f___at___00Lake_LeanLib_findModuleBySrc_x3f_spec__3___redArg(v_s_128_);
return v___x_130_;
}
}
LEAN_EXPORT lean_object* l_String_dropSuffix_x3f___at___00Lake_LeanLib_findModuleBySrc_x3f_spec__3___boxed(lean_object* v_s_131_, lean_object* v_pat_132_){
_start:
{
lean_object* v_res_133_; 
v_res_133_ = l_String_dropSuffix_x3f___at___00Lake_LeanLib_findModuleBySrc_x3f_spec__3(v_s_131_, v_pat_132_);
lean_dec_ref(v_pat_132_);
return v_res_133_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lake_LeanLib_findModuleBySrc_x3f_spec__0(lean_object* v_x_134_, lean_object* v_x_135_){
_start:
{
if (lean_obj_tag(v_x_135_) == 0)
{
return v_x_134_;
}
else
{
lean_object* v_head_136_; lean_object* v_tail_137_; lean_object* v___x_138_; 
v_head_136_ = lean_ctor_get(v_x_135_, 0);
lean_inc(v_head_136_);
v_tail_137_ = lean_ctor_get(v_x_135_, 1);
lean_inc(v_tail_137_);
lean_dec_ref_known(v_x_135_, 2);
v___x_138_ = l_Lean_Name_str___override(v_x_134_, v_head_136_);
v_x_134_ = v___x_138_;
v_x_135_ = v_tail_137_;
goto _start;
}
}
}
static lean_object* _init_l_Lake_LeanLib_findModuleBySrc_x3f___closed__0(void){
_start:
{
lean_object* v___x_140_; lean_object* v___x_141_; 
v___x_140_ = lean_box(0);
v___x_141_ = l_unsafeCast___redArg(v___x_140_);
return v___x_141_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLib_findModuleBySrc_x3f(lean_object* v_path_142_, lean_object* v_self_143_){
_start:
{
lean_object* v___y_145_; lean_object* v_pkg_153_; lean_object* v_config_154_; lean_object* v_config_155_; lean_object* v_dir_156_; lean_object* v_srcDir_157_; lean_object* v_srcDir_158_; lean_object* v___x_159_; lean_object* v___x_160_; lean_object* v___x_161_; lean_object* v___x_162_; lean_object* v___x_163_; 
v_pkg_153_ = lean_ctor_get(v_self_143_, 0);
v_config_154_ = lean_ctor_get(v_pkg_153_, 6);
v_config_155_ = lean_ctor_get(v_self_143_, 2);
v_dir_156_ = lean_ctor_get(v_pkg_153_, 4);
v_srcDir_157_ = lean_ctor_get(v_config_154_, 4);
v_srcDir_158_ = lean_ctor_get(v_config_155_, 1);
lean_inc_ref(v_srcDir_157_);
v___x_159_ = l_System_FilePath_normalize(v_srcDir_157_);
lean_inc_ref(v_dir_156_);
v___x_160_ = l_Lake_joinRelative(v_dir_156_, v___x_159_);
lean_inc_ref(v_srcDir_158_);
v___x_161_ = l_System_FilePath_normalize(v_srcDir_158_);
v___x_162_ = l_Lake_joinRelative(v___x_160_, v___x_161_);
v___x_163_ = l_String_dropPrefix_x3f___at___00Lake_LeanLib_findModuleBySrc_x3f_spec__1___redArg(v___x_162_, v_path_142_);
lean_dec_ref(v___x_162_);
if (lean_obj_tag(v___x_163_) == 0)
{
lean_object* v___x_164_; 
lean_dec_ref(v_self_143_);
v___x_164_ = lean_box(0);
return v___x_164_;
}
else
{
lean_object* v_val_165_; lean_object* v_str_166_; lean_object* v_startInclusive_167_; lean_object* v_endExclusive_168_; lean_object* v___x_169_; lean_object* v___x_170_; lean_object* v___x_171_; lean_object* v___x_173_; uint8_t v_isShared_174_; uint8_t v_isSharedCheck_182_; 
v_val_165_ = lean_ctor_get(v___x_163_, 0);
lean_inc(v_val_165_);
lean_dec_ref_known(v___x_163_, 1);
v_str_166_ = lean_ctor_get(v_val_165_, 0);
lean_inc_ref(v_str_166_);
v_startInclusive_167_ = lean_ctor_get(v_val_165_, 1);
lean_inc(v_startInclusive_167_);
v_endExclusive_168_ = lean_ctor_get(v_val_165_, 2);
lean_inc(v_endExclusive_168_);
v___x_169_ = lean_unsigned_to_nat(1u);
v___x_170_ = lean_unsigned_to_nat(0u);
v___x_171_ = l_String_Slice_Pos_nextn(v_val_165_, v___x_170_, v___x_169_);
v_isSharedCheck_182_ = !lean_is_exclusive(v_val_165_);
if (v_isSharedCheck_182_ == 0)
{
lean_object* v_unused_183_; lean_object* v_unused_184_; lean_object* v_unused_185_; 
v_unused_183_ = lean_ctor_get(v_val_165_, 2);
lean_dec(v_unused_183_);
v_unused_184_ = lean_ctor_get(v_val_165_, 1);
lean_dec(v_unused_184_);
v_unused_185_ = lean_ctor_get(v_val_165_, 0);
lean_dec(v_unused_185_);
v___x_173_ = v_val_165_;
v_isShared_174_ = v_isSharedCheck_182_;
goto v_resetjp_172_;
}
else
{
lean_dec(v_val_165_);
v___x_173_ = lean_box(0);
v_isShared_174_ = v_isSharedCheck_182_;
goto v_resetjp_172_;
}
v_resetjp_172_:
{
lean_object* v___x_175_; lean_object* v___x_177_; 
v___x_175_ = lean_nat_add(v_startInclusive_167_, v___x_171_);
lean_dec(v___x_171_);
lean_dec(v_startInclusive_167_);
if (v_isShared_174_ == 0)
{
lean_ctor_set(v___x_173_, 1, v___x_175_);
v___x_177_ = v___x_173_;
goto v_reusejp_176_;
}
else
{
lean_object* v_reuseFailAlloc_181_; 
v_reuseFailAlloc_181_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_181_, 0, v_str_166_);
lean_ctor_set(v_reuseFailAlloc_181_, 1, v___x_175_);
lean_ctor_set(v_reuseFailAlloc_181_, 2, v_endExclusive_168_);
v___x_177_ = v_reuseFailAlloc_181_;
goto v_reusejp_176_;
}
v_reusejp_176_:
{
lean_object* v___x_178_; lean_object* v___x_179_; 
v___x_178_ = l_String_Slice_toString(v___x_177_);
lean_dec_ref(v___x_177_);
lean_inc_ref(v___x_178_);
v___x_179_ = l_String_dropSuffix_x3f___at___00Lake_LeanLib_findModuleBySrc_x3f_spec__2___redArg(v___x_178_);
if (lean_obj_tag(v___x_179_) == 0)
{
lean_object* v___x_180_; 
v___x_180_ = l_String_dropSuffix_x3f___at___00Lake_LeanLib_findModuleBySrc_x3f_spec__3___redArg(v___x_178_);
v___y_145_ = v___x_180_;
goto v___jp_144_;
}
else
{
lean_dec_ref(v___x_178_);
v___y_145_ = v___x_179_;
goto v___jp_144_;
}
}
}
}
v___jp_144_:
{
if (lean_obj_tag(v___y_145_) == 0)
{
lean_object* v___x_146_; 
lean_dec_ref(v_self_143_);
v___x_146_ = lean_box(0);
return v___x_146_;
}
else
{
lean_object* v_val_147_; lean_object* v___x_148_; lean_object* v___x_149_; lean_object* v___x_150_; lean_object* v___x_151_; lean_object* v___x_152_; 
v_val_147_ = lean_ctor_get(v___y_145_, 0);
lean_inc(v_val_147_);
lean_dec_ref_known(v___y_145_, 1);
v___x_148_ = lean_obj_once(&l_Lake_LeanLib_findModuleBySrc_x3f___closed__0, &l_Lake_LeanLib_findModuleBySrc_x3f___closed__0_once, _init_l_Lake_LeanLib_findModuleBySrc_x3f___closed__0);
v___x_149_ = l_String_Slice_toString(v_val_147_);
lean_dec(v_val_147_);
v___x_150_ = l_System_FilePath_components(v___x_149_);
v___x_151_ = l_List_foldl___at___00Lake_LeanLib_findModuleBySrc_x3f_spec__0(v___x_148_, v___x_150_);
v___x_152_ = l_Lake_LeanLib_findModule_x3f(v___x_151_, v_self_143_);
return v___x_152_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Package_findModule_x3f_spec__1(lean_object* v_self_189_, lean_object* v_as_190_, size_t v_i_191_, size_t v_stop_192_, lean_object* v_b_193_){
_start:
{
lean_object* v___y_195_; uint8_t v___x_199_; 
v___x_199_ = lean_usize_dec_eq(v_i_191_, v_stop_192_);
if (v___x_199_ == 0)
{
lean_object* v_toConfigDecl_200_; lean_object* v_name_201_; lean_object* v_kind_202_; lean_object* v_config_203_; lean_object* v___x_204_; uint8_t v___x_205_; 
v_toConfigDecl_200_ = lean_array_uget_borrowed(v_as_190_, v_i_191_);
v_name_201_ = lean_ctor_get(v_toConfigDecl_200_, 1);
v_kind_202_ = lean_ctor_get(v_toConfigDecl_200_, 2);
v_config_203_ = lean_ctor_get(v_toConfigDecl_200_, 3);
v___x_204_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Package_findModule_x3f_spec__1___closed__1));
v___x_205_ = lean_name_eq(v_kind_202_, v___x_204_);
if (v___x_205_ == 0)
{
v___y_195_ = v_b_193_;
goto v___jp_194_;
}
else
{
lean_object* v___x_206_; lean_object* v___x_207_; 
lean_inc(v_config_203_);
lean_inc(v_name_201_);
lean_inc_ref(v_self_189_);
v___x_206_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_206_, 0, v_self_189_);
lean_ctor_set(v___x_206_, 1, v_name_201_);
lean_ctor_set(v___x_206_, 2, v_config_203_);
v___x_207_ = lean_array_push(v_b_193_, v___x_206_);
v___y_195_ = v___x_207_;
goto v___jp_194_;
}
}
else
{
lean_dec_ref(v_self_189_);
return v_b_193_;
}
v___jp_194_:
{
size_t v___x_196_; size_t v___x_197_; 
v___x_196_ = ((size_t)1ULL);
v___x_197_ = lean_usize_add(v_i_191_, v___x_196_);
v_i_191_ = v___x_197_;
v_b_193_ = v___y_195_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Package_findModule_x3f_spec__1___boxed(lean_object* v_self_208_, lean_object* v_as_209_, lean_object* v_i_210_, lean_object* v_stop_211_, lean_object* v_b_212_){
_start:
{
size_t v_i_boxed_213_; size_t v_stop_boxed_214_; lean_object* v_res_215_; 
v_i_boxed_213_ = lean_unbox_usize(v_i_210_);
lean_dec(v_i_210_);
v_stop_boxed_214_ = lean_unbox_usize(v_stop_211_);
lean_dec(v_stop_211_);
v_res_215_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Package_findModule_x3f_spec__1(v_self_208_, v_as_209_, v_i_boxed_213_, v_stop_boxed_214_, v_b_212_);
lean_dec_ref(v_as_209_);
return v_res_215_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lake_Package_findModule_x3f_spec__0___redArg(lean_object* v_mod_216_, lean_object* v_as_217_, lean_object* v_i_218_){
_start:
{
lean_object* v_zero_219_; uint8_t v_isZero_220_; 
v_zero_219_ = lean_unsigned_to_nat(0u);
v_isZero_220_ = lean_nat_dec_eq(v_i_218_, v_zero_219_);
if (v_isZero_220_ == 1)
{
lean_object* v___x_221_; 
lean_dec(v_i_218_);
lean_dec(v_mod_216_);
v___x_221_ = lean_box(0);
return v___x_221_;
}
else
{
lean_object* v_one_222_; lean_object* v_n_223_; lean_object* v___x_224_; lean_object* v___x_225_; 
v_one_222_ = lean_unsigned_to_nat(1u);
v_n_223_ = lean_nat_sub(v_i_218_, v_one_222_);
lean_dec(v_i_218_);
v___x_224_ = lean_array_fget_borrowed(v_as_217_, v_n_223_);
lean_inc(v___x_224_);
lean_inc(v_mod_216_);
v___x_225_ = l_Lake_LeanLib_findModule_x3f(v_mod_216_, v___x_224_);
if (lean_obj_tag(v___x_225_) == 0)
{
v_i_218_ = v_n_223_;
goto _start;
}
else
{
lean_dec(v_n_223_);
lean_dec(v_mod_216_);
return v___x_225_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lake_Package_findModule_x3f_spec__0___redArg___boxed(lean_object* v_mod_227_, lean_object* v_as_228_, lean_object* v_i_229_){
_start:
{
lean_object* v_res_230_; 
v_res_230_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lake_Package_findModule_x3f_spec__0___redArg(v_mod_227_, v_as_228_, v_i_229_);
lean_dec_ref(v_as_228_);
return v_res_230_;
}
}
LEAN_EXPORT lean_object* l_Lake_Package_findModule_x3f(lean_object* v_mod_233_, lean_object* v_self_234_){
_start:
{
lean_object* v___y_236_; lean_object* v_targetDecls_239_; lean_object* v___x_240_; lean_object* v___x_241_; lean_object* v___x_242_; uint8_t v___x_243_; 
v_targetDecls_239_ = lean_ctor_get(v_self_234_, 15);
lean_inc_ref(v_targetDecls_239_);
v___x_240_ = lean_unsigned_to_nat(0u);
v___x_241_ = ((lean_object*)(l_Lake_Package_findModule_x3f___closed__0));
v___x_242_ = lean_array_get_size(v_targetDecls_239_);
v___x_243_ = lean_nat_dec_lt(v___x_240_, v___x_242_);
if (v___x_243_ == 0)
{
lean_dec_ref(v_targetDecls_239_);
lean_dec_ref(v_self_234_);
v___y_236_ = v___x_241_;
goto v___jp_235_;
}
else
{
size_t v___x_244_; size_t v___x_245_; lean_object* v___x_246_; 
v___x_244_ = ((size_t)0ULL);
v___x_245_ = lean_usize_of_nat(v___x_242_);
v___x_246_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Package_findModule_x3f_spec__1(v_self_234_, v_targetDecls_239_, v___x_244_, v___x_245_, v___x_241_);
lean_dec_ref(v_targetDecls_239_);
v___y_236_ = v___x_246_;
goto v___jp_235_;
}
v___jp_235_:
{
lean_object* v___x_237_; lean_object* v___x_238_; 
v___x_237_ = lean_array_get_size(v___y_236_);
v___x_238_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lake_Package_findModule_x3f_spec__0___redArg(v_mod_233_, v___y_236_, v___x_237_);
lean_dec_ref(v___y_236_);
return v___x_238_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lake_Package_findModule_x3f_spec__0(lean_object* v_mod_247_, lean_object* v_as_248_, lean_object* v_i_249_, lean_object* v_a_250_){
_start:
{
lean_object* v___x_251_; 
v___x_251_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lake_Package_findModule_x3f_spec__0___redArg(v_mod_247_, v_as_248_, v_i_249_);
return v___x_251_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lake_Package_findModule_x3f_spec__0___boxed(lean_object* v_mod_252_, lean_object* v_as_253_, lean_object* v_i_254_, lean_object* v_a_255_){
_start:
{
lean_object* v_res_256_; 
v_res_256_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lake_Package_findModule_x3f_spec__0(v_mod_252_, v_as_253_, v_i_254_, v_a_255_);
lean_dec_ref(v_as_253_);
return v_res_256_;
}
}
LEAN_EXPORT uint8_t l_Option_instBEq_beq___at___00Lean_forEachModuleInDir___at___00Lake_LeanLib_getModuleArray_spec__0_spec__0(lean_object* v_x_257_, lean_object* v_x_258_){
_start:
{
if (lean_obj_tag(v_x_257_) == 0)
{
if (lean_obj_tag(v_x_258_) == 0)
{
uint8_t v___x_259_; 
v___x_259_ = 1;
return v___x_259_;
}
else
{
uint8_t v___x_260_; 
v___x_260_ = 0;
return v___x_260_;
}
}
else
{
if (lean_obj_tag(v_x_258_) == 0)
{
uint8_t v___x_261_; 
v___x_261_ = 0;
return v___x_261_;
}
else
{
lean_object* v_val_262_; lean_object* v_val_263_; uint8_t v___x_264_; 
v_val_262_ = lean_ctor_get(v_x_257_, 0);
v_val_263_ = lean_ctor_get(v_x_258_, 0);
v___x_264_ = lean_string_dec_eq(v_val_262_, v_val_263_);
return v___x_264_;
}
}
}
}
LEAN_EXPORT lean_object* l_Option_instBEq_beq___at___00Lean_forEachModuleInDir___at___00Lake_LeanLib_getModuleArray_spec__0_spec__0___boxed(lean_object* v_x_265_, lean_object* v_x_266_){
_start:
{
uint8_t v_res_267_; lean_object* v_r_268_; 
v_res_267_ = l_Option_instBEq_beq___at___00Lean_forEachModuleInDir___at___00Lake_LeanLib_getModuleArray_spec__0_spec__0(v_x_265_, v_x_266_);
lean_dec(v_x_266_);
lean_dec(v_x_265_);
v_r_268_ = lean_box(v_res_267_);
return v_r_268_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_forEachModuleInDir___at___00Lake_LeanLib_getModuleArray_spec__0_spec__1___lam__0(lean_object* v___x_269_, lean_object* v_f_270_, lean_object* v_x_271_, lean_object* v___y_272_){
_start:
{
lean_object* v___x_274_; lean_object* v___x_275_; 
v___x_274_ = l_Lean_Name_append(v___x_269_, v_x_271_);
v___x_275_ = lean_apply_3(v_f_270_, v___x_274_, v___y_272_, lean_box(0));
return v___x_275_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_forEachModuleInDir___at___00Lake_LeanLib_getModuleArray_spec__0_spec__1___lam__0___boxed(lean_object* v___x_276_, lean_object* v_f_277_, lean_object* v_x_278_, lean_object* v___y_279_, lean_object* v___y_280_){
_start:
{
lean_object* v_res_281_; 
v_res_281_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_forEachModuleInDir___at___00Lake_LeanLib_getModuleArray_spec__0_spec__1___lam__0(v___x_276_, v_f_277_, v_x_278_, v___y_279_);
return v_res_281_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_forEachModuleInDir___at___00Lake_LeanLib_getModuleArray_spec__0_spec__1(lean_object* v_f_285_, lean_object* v_as_286_, size_t v_sz_287_, size_t v_i_288_, lean_object* v_b_289_, lean_object* v___y_290_){
_start:
{
lean_object* v_a_293_; lean_object* v_snd_294_; uint8_t v___x_298_; 
v___x_298_ = lean_usize_dec_lt(v_i_288_, v_sz_287_);
if (v___x_298_ == 0)
{
lean_object* v___x_299_; lean_object* v___x_300_; 
lean_dec_ref(v_f_285_);
v___x_299_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_299_, 0, v_b_289_);
lean_ctor_set(v___x_299_, 1, v___y_290_);
v___x_300_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_300_, 0, v___x_299_);
return v___x_300_;
}
else
{
lean_object* v___x_301_; lean_object* v_a_302_; lean_object* v___x_303_; uint8_t v___x_304_; 
v___x_301_ = lean_box(0);
v_a_302_ = lean_array_uget_borrowed(v_as_286_, v_i_288_);
lean_inc(v_a_302_);
v___x_303_ = l_IO_FS_DirEntry_path(v_a_302_);
v___x_304_ = l_System_FilePath_isDir(v___x_303_);
if (v___x_304_ == 0)
{
lean_object* v___x_305_; lean_object* v___x_306_; uint8_t v___x_307_; 
v___x_305_ = l_System_FilePath_extension(v___x_303_);
v___x_306_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_forEachModuleInDir___at___00Lake_LeanLib_getModuleArray_spec__0_spec__1___closed__1));
v___x_307_ = l_Option_instBEq_beq___at___00Lean_forEachModuleInDir___at___00Lake_LeanLib_getModuleArray_spec__0_spec__0(v___x_305_, v___x_306_);
lean_dec(v___x_305_);
if (v___x_307_ == 0)
{
v_a_293_ = v___x_301_;
v_snd_294_ = v___y_290_;
goto v___jp_292_;
}
else
{
lean_object* v_fileName_308_; lean_object* v___x_309_; lean_object* v___x_310_; lean_object* v___x_311_; lean_object* v___x_312_; lean_object* v___x_313_; 
v_fileName_308_ = lean_ctor_get(v_a_302_, 1);
v___x_309_ = ((lean_object*)(l_String_dropSuffix_x3f___at___00Lake_LeanLib_findModuleBySrc_x3f_spec__3___redArg___closed__0));
lean_inc_ref(v_fileName_308_);
v___x_310_ = l_System_FilePath_withExtension(v_fileName_308_, v___x_309_);
v___x_311_ = lean_obj_once(&l_Lake_LeanLib_findModuleBySrc_x3f___closed__0, &l_Lake_LeanLib_findModuleBySrc_x3f___closed__0_once, _init_l_Lake_LeanLib_findModuleBySrc_x3f___closed__0);
v___x_312_ = l_Lean_Name_str___override(v___x_311_, v___x_310_);
lean_inc_ref(v_f_285_);
v___x_313_ = lean_apply_3(v_f_285_, v___x_312_, v___y_290_, lean_box(0));
if (lean_obj_tag(v___x_313_) == 0)
{
lean_object* v_a_314_; lean_object* v_snd_315_; 
v_a_314_ = lean_ctor_get(v___x_313_, 0);
lean_inc(v_a_314_);
lean_dec_ref_known(v___x_313_, 1);
v_snd_315_ = lean_ctor_get(v_a_314_, 1);
lean_inc(v_snd_315_);
lean_dec(v_a_314_);
v_a_293_ = v___x_301_;
v_snd_294_ = v_snd_315_;
goto v___jp_292_;
}
else
{
lean_dec_ref(v_f_285_);
return v___x_313_;
}
}
}
else
{
lean_object* v_fileName_316_; lean_object* v___x_317_; lean_object* v___x_318_; lean_object* v___f_319_; lean_object* v___x_320_; 
v_fileName_316_ = lean_ctor_get(v_a_302_, 1);
v___x_317_ = lean_obj_once(&l_Lake_LeanLib_findModuleBySrc_x3f___closed__0, &l_Lake_LeanLib_findModuleBySrc_x3f___closed__0_once, _init_l_Lake_LeanLib_findModuleBySrc_x3f___closed__0);
lean_inc_ref(v_fileName_316_);
v___x_318_ = l_Lean_Name_str___override(v___x_317_, v_fileName_316_);
lean_inc_ref(v_f_285_);
v___f_319_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_forEachModuleInDir___at___00Lake_LeanLib_getModuleArray_spec__0_spec__1___lam__0___boxed), 5, 2);
lean_closure_set(v___f_319_, 0, v___x_318_);
lean_closure_set(v___f_319_, 1, v_f_285_);
v___x_320_ = l_Lean_forEachModuleInDir___at___00Lake_LeanLib_getModuleArray_spec__0(v___x_303_, v___f_319_, v___y_290_);
lean_dec_ref(v___x_303_);
if (lean_obj_tag(v___x_320_) == 0)
{
lean_object* v_a_321_; lean_object* v_snd_322_; 
v_a_321_ = lean_ctor_get(v___x_320_, 0);
lean_inc(v_a_321_);
lean_dec_ref_known(v___x_320_, 1);
v_snd_322_ = lean_ctor_get(v_a_321_, 1);
lean_inc(v_snd_322_);
lean_dec(v_a_321_);
v_a_293_ = v___x_301_;
v_snd_294_ = v_snd_322_;
goto v___jp_292_;
}
else
{
lean_dec_ref(v_f_285_);
return v___x_320_;
}
}
}
v___jp_292_:
{
size_t v___x_295_; size_t v___x_296_; 
v___x_295_ = ((size_t)1ULL);
v___x_296_ = lean_usize_add(v_i_288_, v___x_295_);
v_i_288_ = v___x_296_;
v_b_289_ = v_a_293_;
v___y_290_ = v_snd_294_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lean_forEachModuleInDir___at___00Lake_LeanLib_getModuleArray_spec__0(lean_object* v_dir_323_, lean_object* v_f_324_, lean_object* v___y_325_){
_start:
{
lean_object* v___x_327_; 
v___x_327_ = lean_io_read_dir(v_dir_323_);
if (lean_obj_tag(v___x_327_) == 0)
{
lean_object* v_a_328_; lean_object* v___x_329_; size_t v_sz_330_; size_t v___x_331_; lean_object* v___x_332_; 
v_a_328_ = lean_ctor_get(v___x_327_, 0);
lean_inc(v_a_328_);
lean_dec_ref_known(v___x_327_, 1);
v___x_329_ = lean_box(0);
v_sz_330_ = lean_array_size(v_a_328_);
v___x_331_ = ((size_t)0ULL);
v___x_332_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_forEachModuleInDir___at___00Lake_LeanLib_getModuleArray_spec__0_spec__1(v_f_324_, v_a_328_, v_sz_330_, v___x_331_, v___x_329_, v___y_325_);
lean_dec(v_a_328_);
if (lean_obj_tag(v___x_332_) == 0)
{
lean_object* v_a_333_; lean_object* v___x_335_; uint8_t v_isShared_336_; uint8_t v_isSharedCheck_349_; 
v_a_333_ = lean_ctor_get(v___x_332_, 0);
v_isSharedCheck_349_ = !lean_is_exclusive(v___x_332_);
if (v_isSharedCheck_349_ == 0)
{
v___x_335_ = v___x_332_;
v_isShared_336_ = v_isSharedCheck_349_;
goto v_resetjp_334_;
}
else
{
lean_inc(v_a_333_);
lean_dec(v___x_332_);
v___x_335_ = lean_box(0);
v_isShared_336_ = v_isSharedCheck_349_;
goto v_resetjp_334_;
}
v_resetjp_334_:
{
lean_object* v_snd_337_; lean_object* v___x_339_; uint8_t v_isShared_340_; uint8_t v_isSharedCheck_347_; 
v_snd_337_ = lean_ctor_get(v_a_333_, 1);
v_isSharedCheck_347_ = !lean_is_exclusive(v_a_333_);
if (v_isSharedCheck_347_ == 0)
{
lean_object* v_unused_348_; 
v_unused_348_ = lean_ctor_get(v_a_333_, 0);
lean_dec(v_unused_348_);
v___x_339_ = v_a_333_;
v_isShared_340_ = v_isSharedCheck_347_;
goto v_resetjp_338_;
}
else
{
lean_inc(v_snd_337_);
lean_dec(v_a_333_);
v___x_339_ = lean_box(0);
v_isShared_340_ = v_isSharedCheck_347_;
goto v_resetjp_338_;
}
v_resetjp_338_:
{
lean_object* v___x_342_; 
if (v_isShared_340_ == 0)
{
lean_ctor_set(v___x_339_, 0, v___x_329_);
v___x_342_ = v___x_339_;
goto v_reusejp_341_;
}
else
{
lean_object* v_reuseFailAlloc_346_; 
v_reuseFailAlloc_346_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_346_, 0, v___x_329_);
lean_ctor_set(v_reuseFailAlloc_346_, 1, v_snd_337_);
v___x_342_ = v_reuseFailAlloc_346_;
goto v_reusejp_341_;
}
v_reusejp_341_:
{
lean_object* v___x_344_; 
if (v_isShared_336_ == 0)
{
lean_ctor_set(v___x_335_, 0, v___x_342_);
v___x_344_ = v___x_335_;
goto v_reusejp_343_;
}
else
{
lean_object* v_reuseFailAlloc_345_; 
v_reuseFailAlloc_345_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_345_, 0, v___x_342_);
v___x_344_ = v_reuseFailAlloc_345_;
goto v_reusejp_343_;
}
v_reusejp_343_:
{
return v___x_344_;
}
}
}
}
}
else
{
return v___x_332_;
}
}
else
{
lean_object* v_a_350_; lean_object* v___x_352_; uint8_t v_isShared_353_; uint8_t v_isSharedCheck_357_; 
lean_dec_ref(v___y_325_);
lean_dec_ref(v_f_324_);
v_a_350_ = lean_ctor_get(v___x_327_, 0);
v_isSharedCheck_357_ = !lean_is_exclusive(v___x_327_);
if (v_isSharedCheck_357_ == 0)
{
v___x_352_ = v___x_327_;
v_isShared_353_ = v_isSharedCheck_357_;
goto v_resetjp_351_;
}
else
{
lean_inc(v_a_350_);
lean_dec(v___x_327_);
v___x_352_ = lean_box(0);
v_isShared_353_ = v_isSharedCheck_357_;
goto v_resetjp_351_;
}
v_resetjp_351_:
{
lean_object* v___x_355_; 
if (v_isShared_353_ == 0)
{
v___x_355_ = v___x_352_;
goto v_reusejp_354_;
}
else
{
lean_object* v_reuseFailAlloc_356_; 
v_reuseFailAlloc_356_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_356_, 0, v_a_350_);
v___x_355_ = v_reuseFailAlloc_356_;
goto v_reusejp_354_;
}
v_reusejp_354_:
{
return v___x_355_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_forEachModuleInDir___at___00Lake_LeanLib_getModuleArray_spec__0___boxed(lean_object* v_dir_358_, lean_object* v_f_359_, lean_object* v___y_360_, lean_object* v___y_361_){
_start:
{
lean_object* v_res_362_; 
v_res_362_ = l_Lean_forEachModuleInDir___at___00Lake_LeanLib_getModuleArray_spec__0(v_dir_358_, v_f_359_, v___y_360_);
lean_dec_ref(v_dir_358_);
return v_res_362_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_forEachModuleInDir___at___00Lake_LeanLib_getModuleArray_spec__0_spec__1___boxed(lean_object* v_f_363_, lean_object* v_as_364_, lean_object* v_sz_365_, lean_object* v_i_366_, lean_object* v_b_367_, lean_object* v___y_368_, lean_object* v___y_369_){
_start:
{
size_t v_sz_boxed_370_; size_t v_i_boxed_371_; lean_object* v_res_372_; 
v_sz_boxed_370_ = lean_unbox_usize(v_sz_365_);
lean_dec(v_sz_365_);
v_i_boxed_371_ = lean_unbox_usize(v_i_366_);
lean_dec(v_i_366_);
v_res_372_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_forEachModuleInDir___at___00Lake_LeanLib_getModuleArray_spec__0_spec__1(v_f_363_, v_as_364_, v_sz_boxed_370_, v_i_boxed_371_, v_b_367_, v___y_368_);
lean_dec_ref(v_as_364_);
return v_res_372_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_LeanLib_getModuleArray_spec__1___lam__0(lean_object* v_self_373_, lean_object* v_mod_374_, lean_object* v___y_375_){
_start:
{
lean_object* v___x_377_; lean_object* v___x_378_; lean_object* v___x_379_; lean_object* v___x_380_; lean_object* v___x_381_; 
v___x_377_ = lean_box(0);
v___x_378_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_378_, 0, v_self_373_);
lean_ctor_set(v___x_378_, 1, v_mod_374_);
v___x_379_ = lean_array_push(v___y_375_, v___x_378_);
v___x_380_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_380_, 0, v___x_377_);
lean_ctor_set(v___x_380_, 1, v___x_379_);
v___x_381_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_381_, 0, v___x_380_);
return v___x_381_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_LeanLib_getModuleArray_spec__1___lam__0___boxed(lean_object* v_self_382_, lean_object* v_mod_383_, lean_object* v___y_384_, lean_object* v___y_385_){
_start:
{
lean_object* v_res_386_; 
v_res_386_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_LeanLib_getModuleArray_spec__1___lam__0(v_self_382_, v_mod_383_, v___y_384_);
return v_res_386_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_LeanLib_getModuleArray_spec__1___lam__1(lean_object* v_a_387_, lean_object* v___f_388_, lean_object* v_x_389_, lean_object* v___y_390_){
_start:
{
lean_object* v___x_392_; lean_object* v___x_393_; 
v___x_392_ = l_Lean_Name_append(v_a_387_, v_x_389_);
v___x_393_ = lean_apply_3(v___f_388_, v___x_392_, v___y_390_, lean_box(0));
return v___x_393_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_LeanLib_getModuleArray_spec__1___lam__1___boxed(lean_object* v_a_394_, lean_object* v___f_395_, lean_object* v_x_396_, lean_object* v___y_397_, lean_object* v___y_398_){
_start:
{
lean_object* v_res_399_; 
v_res_399_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_LeanLib_getModuleArray_spec__1___lam__1(v_a_394_, v___f_395_, v_x_396_, v___y_397_);
return v_res_399_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_LeanLib_getModuleArray_spec__1(lean_object* v_self_400_, lean_object* v_as_401_, size_t v_i_402_, size_t v_stop_403_, lean_object* v_b_404_, lean_object* v___y_405_){
_start:
{
lean_object* v___y_408_; uint8_t v___x_415_; 
v___x_415_ = lean_usize_dec_eq(v_i_402_, v_stop_403_);
if (v___x_415_ == 0)
{
lean_object* v_pkg_416_; lean_object* v_config_417_; lean_object* v_config_418_; lean_object* v_dir_419_; lean_object* v_srcDir_420_; lean_object* v_srcDir_421_; lean_object* v___f_422_; lean_object* v___x_423_; lean_object* v___x_424_; lean_object* v___x_425_; lean_object* v___x_426_; lean_object* v___x_427_; 
v_pkg_416_ = lean_ctor_get(v_self_400_, 0);
v_config_417_ = lean_ctor_get(v_pkg_416_, 6);
v_config_418_ = lean_ctor_get(v_self_400_, 2);
v_dir_419_ = lean_ctor_get(v_pkg_416_, 4);
v_srcDir_420_ = lean_ctor_get(v_config_417_, 4);
v_srcDir_421_ = lean_ctor_get(v_config_418_, 1);
lean_inc_ref(v_self_400_);
v___f_422_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_LeanLib_getModuleArray_spec__1___lam__0___boxed), 4, 1);
lean_closure_set(v___f_422_, 0, v_self_400_);
v___x_423_ = lean_array_uget_borrowed(v_as_401_, v_i_402_);
lean_inc_ref(v_srcDir_420_);
v___x_424_ = l_System_FilePath_normalize(v_srcDir_420_);
lean_inc_ref(v_dir_419_);
v___x_425_ = l_Lake_joinRelative(v_dir_419_, v___x_424_);
lean_inc_ref(v_srcDir_421_);
v___x_426_ = l_System_FilePath_normalize(v_srcDir_421_);
v___x_427_ = l_Lake_joinRelative(v___x_425_, v___x_426_);
switch(lean_obj_tag(v___x_423_))
{
case 0:
{
lean_object* v_a_428_; lean_object* v___x_429_; 
lean_dec_ref(v___x_427_);
lean_dec_ref(v___f_422_);
v_a_428_ = lean_ctor_get(v___x_423_, 0);
lean_inc(v_a_428_);
lean_inc_ref(v_self_400_);
v___x_429_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_LeanLib_getModuleArray_spec__1___lam__0(v_self_400_, v_a_428_, v___y_405_);
v___y_408_ = v___x_429_;
goto v___jp_407_;
}
case 1:
{
lean_object* v_a_430_; lean_object* v___f_431_; lean_object* v___x_432_; lean_object* v___x_433_; lean_object* v___x_434_; 
v_a_430_ = lean_ctor_get(v___x_423_, 0);
lean_inc_n(v_a_430_, 2);
v___f_431_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_LeanLib_getModuleArray_spec__1___lam__1___boxed), 5, 2);
lean_closure_set(v___f_431_, 0, v_a_430_);
lean_closure_set(v___f_431_, 1, v___f_422_);
v___x_432_ = ((lean_object*)(l_String_dropSuffix_x3f___at___00Lake_LeanLib_findModuleBySrc_x3f_spec__3___redArg___closed__0));
v___x_433_ = l_Lean_modToFilePath(v___x_427_, v_a_430_, v___x_432_);
lean_dec_ref(v___x_427_);
v___x_434_ = l_Lean_forEachModuleInDir___at___00Lake_LeanLib_getModuleArray_spec__0(v___x_433_, v___f_431_, v___y_405_);
lean_dec_ref(v___x_433_);
v___y_408_ = v___x_434_;
goto v___jp_407_;
}
default: 
{
lean_object* v_a_435_; lean_object* v___f_436_; lean_object* v___x_437_; 
v_a_435_ = lean_ctor_get(v___x_423_, 0);
lean_inc_n(v_a_435_, 2);
v___f_436_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_LeanLib_getModuleArray_spec__1___lam__1___boxed), 5, 2);
lean_closure_set(v___f_436_, 0, v_a_435_);
lean_closure_set(v___f_436_, 1, v___f_422_);
lean_inc_ref(v_self_400_);
v___x_437_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_LeanLib_getModuleArray_spec__1___lam__0(v_self_400_, v_a_435_, v___y_405_);
if (lean_obj_tag(v___x_437_) == 0)
{
lean_object* v_a_438_; lean_object* v_snd_439_; lean_object* v___x_440_; lean_object* v___x_441_; lean_object* v___x_442_; 
v_a_438_ = lean_ctor_get(v___x_437_, 0);
lean_inc(v_a_438_);
lean_dec_ref_known(v___x_437_, 1);
v_snd_439_ = lean_ctor_get(v_a_438_, 1);
lean_inc(v_snd_439_);
lean_dec(v_a_438_);
v___x_440_ = ((lean_object*)(l_String_dropSuffix_x3f___at___00Lake_LeanLib_findModuleBySrc_x3f_spec__3___redArg___closed__0));
lean_inc(v_a_435_);
v___x_441_ = l_Lean_modToFilePath(v___x_427_, v_a_435_, v___x_440_);
lean_dec_ref(v___x_427_);
v___x_442_ = l_Lean_forEachModuleInDir___at___00Lake_LeanLib_getModuleArray_spec__0(v___x_441_, v___f_436_, v_snd_439_);
lean_dec_ref(v___x_441_);
v___y_408_ = v___x_442_;
goto v___jp_407_;
}
else
{
lean_dec_ref(v___f_436_);
lean_dec_ref(v___x_427_);
lean_dec_ref(v_self_400_);
return v___x_437_;
}
}
}
}
else
{
lean_object* v___x_443_; lean_object* v___x_444_; 
lean_dec_ref(v_self_400_);
v___x_443_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_443_, 0, v_b_404_);
lean_ctor_set(v___x_443_, 1, v___y_405_);
v___x_444_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_444_, 0, v___x_443_);
return v___x_444_;
}
v___jp_407_:
{
if (lean_obj_tag(v___y_408_) == 0)
{
lean_object* v_a_409_; lean_object* v_fst_410_; lean_object* v_snd_411_; size_t v___x_412_; size_t v___x_413_; 
v_a_409_ = lean_ctor_get(v___y_408_, 0);
lean_inc(v_a_409_);
lean_dec_ref_known(v___y_408_, 1);
v_fst_410_ = lean_ctor_get(v_a_409_, 0);
lean_inc(v_fst_410_);
v_snd_411_ = lean_ctor_get(v_a_409_, 1);
lean_inc(v_snd_411_);
lean_dec(v_a_409_);
v___x_412_ = ((size_t)1ULL);
v___x_413_ = lean_usize_add(v_i_402_, v___x_412_);
v_i_402_ = v___x_413_;
v_b_404_ = v_fst_410_;
v___y_405_ = v_snd_411_;
goto _start;
}
else
{
lean_dec_ref(v_self_400_);
return v___y_408_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_LeanLib_getModuleArray_spec__1___boxed(lean_object* v_self_445_, lean_object* v_as_446_, lean_object* v_i_447_, lean_object* v_stop_448_, lean_object* v_b_449_, lean_object* v___y_450_, lean_object* v___y_451_){
_start:
{
size_t v_i_boxed_452_; size_t v_stop_boxed_453_; lean_object* v_res_454_; 
v_i_boxed_452_ = lean_unbox_usize(v_i_447_);
lean_dec(v_i_447_);
v_stop_boxed_453_ = lean_unbox_usize(v_stop_448_);
lean_dec(v_stop_448_);
v_res_454_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_LeanLib_getModuleArray_spec__1(v_self_445_, v_as_446_, v_i_boxed_452_, v_stop_boxed_453_, v_b_449_, v___y_450_);
lean_dec_ref(v_as_446_);
return v_res_454_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLib_getModuleArray(lean_object* v_self_457_){
_start:
{
lean_object* v___y_460_; lean_object* v_config_478_; lean_object* v_globs_479_; lean_object* v___x_480_; lean_object* v___x_481_; lean_object* v___x_482_; uint8_t v___x_483_; 
v_config_478_ = lean_ctor_get(v_self_457_, 2);
v_globs_479_ = lean_ctor_get(v_config_478_, 3);
lean_inc_ref(v_globs_479_);
v___x_480_ = lean_unsigned_to_nat(0u);
v___x_481_ = lean_array_get_size(v_globs_479_);
v___x_482_ = ((lean_object*)(l_Lake_LeanLib_getModuleArray___closed__0));
v___x_483_ = lean_nat_dec_lt(v___x_480_, v___x_481_);
if (v___x_483_ == 0)
{
lean_object* v___x_484_; 
lean_dec_ref(v_globs_479_);
lean_dec_ref(v_self_457_);
v___x_484_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_484_, 0, v___x_482_);
return v___x_484_;
}
else
{
lean_object* v___x_485_; uint8_t v___x_486_; 
v___x_485_ = lean_box(0);
v___x_486_ = lean_nat_dec_le(v___x_481_, v___x_481_);
if (v___x_486_ == 0)
{
if (v___x_483_ == 0)
{
lean_object* v___x_487_; 
lean_dec_ref(v_globs_479_);
lean_dec_ref(v_self_457_);
v___x_487_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_487_, 0, v___x_482_);
return v___x_487_;
}
else
{
size_t v___x_488_; size_t v___x_489_; lean_object* v___x_490_; 
v___x_488_ = ((size_t)0ULL);
v___x_489_ = lean_usize_of_nat(v___x_481_);
v___x_490_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_LeanLib_getModuleArray_spec__1(v_self_457_, v_globs_479_, v___x_488_, v___x_489_, v___x_485_, v___x_482_);
lean_dec_ref(v_globs_479_);
v___y_460_ = v___x_490_;
goto v___jp_459_;
}
}
else
{
size_t v___x_491_; size_t v___x_492_; lean_object* v___x_493_; 
v___x_491_ = ((size_t)0ULL);
v___x_492_ = lean_usize_of_nat(v___x_481_);
v___x_493_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_LeanLib_getModuleArray_spec__1(v_self_457_, v_globs_479_, v___x_491_, v___x_492_, v___x_485_, v___x_482_);
lean_dec_ref(v_globs_479_);
v___y_460_ = v___x_493_;
goto v___jp_459_;
}
}
v___jp_459_:
{
if (lean_obj_tag(v___y_460_) == 0)
{
lean_object* v_a_461_; lean_object* v___x_463_; uint8_t v_isShared_464_; uint8_t v_isSharedCheck_469_; 
v_a_461_ = lean_ctor_get(v___y_460_, 0);
v_isSharedCheck_469_ = !lean_is_exclusive(v___y_460_);
if (v_isSharedCheck_469_ == 0)
{
v___x_463_ = v___y_460_;
v_isShared_464_ = v_isSharedCheck_469_;
goto v_resetjp_462_;
}
else
{
lean_inc(v_a_461_);
lean_dec(v___y_460_);
v___x_463_ = lean_box(0);
v_isShared_464_ = v_isSharedCheck_469_;
goto v_resetjp_462_;
}
v_resetjp_462_:
{
lean_object* v_snd_465_; lean_object* v___x_467_; 
v_snd_465_ = lean_ctor_get(v_a_461_, 1);
lean_inc(v_snd_465_);
lean_dec(v_a_461_);
if (v_isShared_464_ == 0)
{
lean_ctor_set(v___x_463_, 0, v_snd_465_);
v___x_467_ = v___x_463_;
goto v_reusejp_466_;
}
else
{
lean_object* v_reuseFailAlloc_468_; 
v_reuseFailAlloc_468_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_468_, 0, v_snd_465_);
v___x_467_ = v_reuseFailAlloc_468_;
goto v_reusejp_466_;
}
v_reusejp_466_:
{
return v___x_467_;
}
}
}
else
{
lean_object* v_a_470_; lean_object* v___x_472_; uint8_t v_isShared_473_; uint8_t v_isSharedCheck_477_; 
v_a_470_ = lean_ctor_get(v___y_460_, 0);
v_isSharedCheck_477_ = !lean_is_exclusive(v___y_460_);
if (v_isSharedCheck_477_ == 0)
{
v___x_472_ = v___y_460_;
v_isShared_473_ = v_isSharedCheck_477_;
goto v_resetjp_471_;
}
else
{
lean_inc(v_a_470_);
lean_dec(v___y_460_);
v___x_472_ = lean_box(0);
v_isShared_473_ = v_isSharedCheck_477_;
goto v_resetjp_471_;
}
v_resetjp_471_:
{
lean_object* v___x_475_; 
if (v_isShared_473_ == 0)
{
v___x_475_ = v___x_472_;
goto v_reusejp_474_;
}
else
{
lean_object* v_reuseFailAlloc_476_; 
v_reuseFailAlloc_476_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_476_, 0, v_a_470_);
v___x_475_ = v_reuseFailAlloc_476_;
goto v_reusejp_474_;
}
v_reusejp_474_:
{
return v___x_475_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLib_getModuleArray___boxed(lean_object* v_self_494_, lean_object* v_a_495_){
_start:
{
lean_object* v_res_496_; 
v_res_496_ = l_Lake_LeanLib_getModuleArray(v_self_494_);
return v_res_496_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lake_LeanLib_rootModules_spec__0_spec__0(lean_object* v_self_497_, lean_object* v_as_498_, size_t v_i_499_, size_t v_stop_500_, lean_object* v_b_501_){
_start:
{
lean_object* v___y_503_; uint8_t v___x_507_; 
v___x_507_ = lean_usize_dec_eq(v_i_499_, v_stop_500_);
if (v___x_507_ == 0)
{
lean_object* v___x_508_; lean_object* v___x_509_; 
v___x_508_ = lean_array_uget_borrowed(v_as_498_, v_i_499_);
lean_inc_ref(v_self_497_);
lean_inc(v___x_508_);
v___x_509_ = l_Lake_LeanLib_findModule_x3f(v___x_508_, v_self_497_);
if (lean_obj_tag(v___x_509_) == 0)
{
v___y_503_ = v_b_501_;
goto v___jp_502_;
}
else
{
lean_object* v_val_510_; lean_object* v___x_511_; 
v_val_510_ = lean_ctor_get(v___x_509_, 0);
lean_inc(v_val_510_);
lean_dec_ref_known(v___x_509_, 1);
v___x_511_ = lean_array_push(v_b_501_, v_val_510_);
v___y_503_ = v___x_511_;
goto v___jp_502_;
}
}
else
{
lean_dec_ref(v_self_497_);
return v_b_501_;
}
v___jp_502_:
{
size_t v___x_504_; size_t v___x_505_; 
v___x_504_ = ((size_t)1ULL);
v___x_505_ = lean_usize_add(v_i_499_, v___x_504_);
v_i_499_ = v___x_505_;
v_b_501_ = v___y_503_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lake_LeanLib_rootModules_spec__0_spec__0___boxed(lean_object* v_self_512_, lean_object* v_as_513_, lean_object* v_i_514_, lean_object* v_stop_515_, lean_object* v_b_516_){
_start:
{
size_t v_i_boxed_517_; size_t v_stop_boxed_518_; lean_object* v_res_519_; 
v_i_boxed_517_ = lean_unbox_usize(v_i_514_);
lean_dec(v_i_514_);
v_stop_boxed_518_ = lean_unbox_usize(v_stop_515_);
lean_dec(v_stop_515_);
v_res_519_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lake_LeanLib_rootModules_spec__0_spec__0(v_self_512_, v_as_513_, v_i_boxed_517_, v_stop_boxed_518_, v_b_516_);
lean_dec_ref(v_as_513_);
return v_res_519_;
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Lake_LeanLib_rootModules_spec__0(lean_object* v_self_520_, lean_object* v_as_521_, lean_object* v_start_522_, lean_object* v_stop_523_){
_start:
{
lean_object* v___x_524_; uint8_t v___x_525_; 
v___x_524_ = ((lean_object*)(l_Lake_LeanLib_getModuleArray___closed__0));
v___x_525_ = lean_nat_dec_lt(v_start_522_, v_stop_523_);
if (v___x_525_ == 0)
{
lean_dec_ref(v_self_520_);
return v___x_524_;
}
else
{
lean_object* v___x_526_; uint8_t v___x_527_; 
v___x_526_ = lean_array_get_size(v_as_521_);
v___x_527_ = lean_nat_dec_le(v_stop_523_, v___x_526_);
if (v___x_527_ == 0)
{
uint8_t v___x_528_; 
v___x_528_ = lean_nat_dec_lt(v_start_522_, v___x_526_);
if (v___x_528_ == 0)
{
lean_dec_ref(v_self_520_);
return v___x_524_;
}
else
{
size_t v___x_529_; size_t v___x_530_; lean_object* v___x_531_; 
v___x_529_ = lean_usize_of_nat(v_start_522_);
v___x_530_ = lean_usize_of_nat(v___x_526_);
v___x_531_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lake_LeanLib_rootModules_spec__0_spec__0(v_self_520_, v_as_521_, v___x_529_, v___x_530_, v___x_524_);
return v___x_531_;
}
}
else
{
size_t v___x_532_; size_t v___x_533_; lean_object* v___x_534_; 
v___x_532_ = lean_usize_of_nat(v_start_522_);
v___x_533_ = lean_usize_of_nat(v_stop_523_);
v___x_534_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lake_LeanLib_rootModules_spec__0_spec__0(v_self_520_, v_as_521_, v___x_532_, v___x_533_, v___x_524_);
return v___x_534_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Lake_LeanLib_rootModules_spec__0___boxed(lean_object* v_self_535_, lean_object* v_as_536_, lean_object* v_start_537_, lean_object* v_stop_538_){
_start:
{
lean_object* v_res_539_; 
v_res_539_ = l_Array_filterMapM___at___00Lake_LeanLib_rootModules_spec__0(v_self_535_, v_as_536_, v_start_537_, v_stop_538_);
lean_dec(v_stop_538_);
lean_dec(v_start_537_);
lean_dec_ref(v_as_536_);
return v_res_539_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanLib_rootModules(lean_object* v_self_540_){
_start:
{
lean_object* v_config_541_; lean_object* v_roots_542_; lean_object* v___x_543_; lean_object* v___x_544_; lean_object* v___x_545_; 
v_config_541_ = lean_ctor_get(v_self_540_, 2);
v_roots_542_ = lean_ctor_get(v_config_541_, 2);
lean_inc_ref(v_roots_542_);
v___x_543_ = lean_unsigned_to_nat(0u);
v___x_544_ = lean_array_get_size(v_roots_542_);
v___x_545_ = l_Array_filterMapM___at___00Lake_LeanLib_rootModules_spec__0(v_self_540_, v_roots_542_, v___x_543_, v___x_544_);
lean_dec_ref(v_roots_542_);
return v___x_545_;
}
}
LEAN_EXPORT lean_object* l_Lake_Module_pkg(lean_object* v_self_546_){
_start:
{
lean_object* v_lib_547_; lean_object* v_pkg_548_; 
v_lib_547_ = lean_ctor_get(v_self_546_, 0);
v_pkg_548_ = lean_ctor_get(v_lib_547_, 0);
lean_inc_ref(v_pkg_548_);
return v_pkg_548_;
}
}
LEAN_EXPORT lean_object* l_Lake_Module_pkg___boxed(lean_object* v_self_549_){
_start:
{
lean_object* v_res_550_; 
v_res_550_ = l_Lake_Module_pkg(v_self_549_);
lean_dec_ref(v_self_549_);
return v_res_550_;
}
}
LEAN_EXPORT lean_object* l_Lake_Module_rootDir(lean_object* v_self_551_){
_start:
{
lean_object* v_lib_552_; lean_object* v_pkg_553_; lean_object* v_config_554_; lean_object* v_config_555_; lean_object* v_dir_556_; lean_object* v_srcDir_557_; lean_object* v_srcDir_558_; lean_object* v___x_559_; lean_object* v___x_560_; lean_object* v___x_561_; lean_object* v___x_562_; 
v_lib_552_ = lean_ctor_get(v_self_551_, 0);
lean_inc_ref(v_lib_552_);
lean_dec_ref(v_self_551_);
v_pkg_553_ = lean_ctor_get(v_lib_552_, 0);
lean_inc_ref(v_pkg_553_);
v_config_554_ = lean_ctor_get(v_pkg_553_, 6);
lean_inc_ref(v_config_554_);
v_config_555_ = lean_ctor_get(v_lib_552_, 2);
lean_inc(v_config_555_);
lean_dec_ref(v_lib_552_);
v_dir_556_ = lean_ctor_get(v_pkg_553_, 4);
lean_inc_ref(v_dir_556_);
lean_dec_ref(v_pkg_553_);
v_srcDir_557_ = lean_ctor_get(v_config_554_, 4);
lean_inc_ref(v_srcDir_557_);
lean_dec_ref(v_config_554_);
v_srcDir_558_ = lean_ctor_get(v_config_555_, 1);
lean_inc_ref(v_srcDir_558_);
lean_dec(v_config_555_);
v___x_559_ = l_System_FilePath_normalize(v_srcDir_557_);
v___x_560_ = l_Lake_joinRelative(v_dir_556_, v___x_559_);
v___x_561_ = l_System_FilePath_normalize(v_srcDir_558_);
v___x_562_ = l_Lake_joinRelative(v___x_560_, v___x_561_);
return v___x_562_;
}
}
LEAN_EXPORT lean_object* l_Lake_Module_fileName(lean_object* v_ext_563_, lean_object* v_self_564_){
_start:
{
lean_object* v_name_565_; lean_object* v___x_566_; lean_object* v___x_567_; 
v_name_565_ = lean_ctor_get(v_self_564_, 1);
v___x_566_ = l_Lean_Name_getString_x21(v_name_565_);
v___x_567_ = l_System_FilePath_addExtension(v___x_566_, v_ext_563_);
return v___x_567_;
}
}
LEAN_EXPORT lean_object* l_Lake_Module_fileName___boxed(lean_object* v_ext_568_, lean_object* v_self_569_){
_start:
{
lean_object* v_res_570_; 
v_res_570_ = l_Lake_Module_fileName(v_ext_568_, v_self_569_);
lean_dec_ref(v_self_569_);
lean_dec_ref(v_ext_568_);
return v_res_570_;
}
}
LEAN_EXPORT lean_object* l_Lake_Module_filePath(lean_object* v_dir_571_, lean_object* v_ext_572_, lean_object* v_self_573_){
_start:
{
lean_object* v_name_574_; lean_object* v___x_575_; 
v_name_574_ = lean_ctor_get(v_self_573_, 1);
lean_inc(v_name_574_);
lean_dec_ref(v_self_573_);
v___x_575_ = l_Lean_modToFilePath(v_dir_571_, v_name_574_, v_ext_572_);
return v___x_575_;
}
}
LEAN_EXPORT lean_object* l_Lake_Module_filePath___boxed(lean_object* v_dir_576_, lean_object* v_ext_577_, lean_object* v_self_578_){
_start:
{
lean_object* v_res_579_; 
v_res_579_ = l_Lake_Module_filePath(v_dir_576_, v_ext_577_, v_self_578_);
lean_dec_ref(v_ext_577_);
lean_dec_ref(v_dir_576_);
return v_res_579_;
}
}
LEAN_EXPORT lean_object* l_Lake_Module_srcPath(lean_object* v_ext_580_, lean_object* v_self_581_){
_start:
{
lean_object* v_lib_582_; lean_object* v_pkg_583_; lean_object* v_config_584_; lean_object* v_config_585_; lean_object* v_name_586_; lean_object* v_dir_587_; lean_object* v_srcDir_588_; lean_object* v_srcDir_589_; lean_object* v___x_590_; lean_object* v___x_591_; lean_object* v___x_592_; lean_object* v___x_593_; lean_object* v___x_594_; 
v_lib_582_ = lean_ctor_get(v_self_581_, 0);
v_pkg_583_ = lean_ctor_get(v_lib_582_, 0);
lean_inc_ref(v_pkg_583_);
v_config_584_ = lean_ctor_get(v_pkg_583_, 6);
lean_inc_ref(v_config_584_);
v_config_585_ = lean_ctor_get(v_lib_582_, 2);
lean_inc(v_config_585_);
v_name_586_ = lean_ctor_get(v_self_581_, 1);
lean_inc(v_name_586_);
lean_dec_ref(v_self_581_);
v_dir_587_ = lean_ctor_get(v_pkg_583_, 4);
lean_inc_ref(v_dir_587_);
lean_dec_ref(v_pkg_583_);
v_srcDir_588_ = lean_ctor_get(v_config_584_, 4);
lean_inc_ref(v_srcDir_588_);
lean_dec_ref(v_config_584_);
v_srcDir_589_ = lean_ctor_get(v_config_585_, 1);
lean_inc_ref(v_srcDir_589_);
lean_dec(v_config_585_);
v___x_590_ = l_System_FilePath_normalize(v_srcDir_588_);
v___x_591_ = l_Lake_joinRelative(v_dir_587_, v___x_590_);
v___x_592_ = l_System_FilePath_normalize(v_srcDir_589_);
v___x_593_ = l_Lake_joinRelative(v___x_591_, v___x_592_);
v___x_594_ = l_Lean_modToFilePath(v___x_593_, v_name_586_, v_ext_580_);
lean_dec_ref(v___x_593_);
return v___x_594_;
}
}
LEAN_EXPORT lean_object* l_Lake_Module_srcPath___boxed(lean_object* v_ext_595_, lean_object* v_self_596_){
_start:
{
lean_object* v_res_597_; 
v_res_597_ = l_Lake_Module_srcPath(v_ext_595_, v_self_596_);
lean_dec_ref(v_ext_595_);
return v_res_597_;
}
}
LEAN_EXPORT lean_object* l_Lake_Module_leanFile(lean_object* v_self_598_){
_start:
{
lean_object* v_lib_599_; lean_object* v_pkg_600_; lean_object* v_config_601_; lean_object* v_config_602_; lean_object* v_name_603_; lean_object* v_dir_604_; lean_object* v_srcDir_605_; lean_object* v_srcDir_606_; lean_object* v___x_607_; lean_object* v___x_608_; lean_object* v___x_609_; lean_object* v___x_610_; lean_object* v___x_611_; lean_object* v___x_612_; 
v_lib_599_ = lean_ctor_get(v_self_598_, 0);
v_pkg_600_ = lean_ctor_get(v_lib_599_, 0);
lean_inc_ref(v_pkg_600_);
v_config_601_ = lean_ctor_get(v_pkg_600_, 6);
lean_inc_ref(v_config_601_);
v_config_602_ = lean_ctor_get(v_lib_599_, 2);
lean_inc(v_config_602_);
v_name_603_ = lean_ctor_get(v_self_598_, 1);
lean_inc(v_name_603_);
lean_dec_ref(v_self_598_);
v_dir_604_ = lean_ctor_get(v_pkg_600_, 4);
lean_inc_ref(v_dir_604_);
lean_dec_ref(v_pkg_600_);
v_srcDir_605_ = lean_ctor_get(v_config_601_, 4);
lean_inc_ref(v_srcDir_605_);
lean_dec_ref(v_config_601_);
v_srcDir_606_ = lean_ctor_get(v_config_602_, 1);
lean_inc_ref(v_srcDir_606_);
lean_dec(v_config_602_);
v___x_607_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_forEachModuleInDir___at___00Lake_LeanLib_getModuleArray_spec__0_spec__1___closed__0));
v___x_608_ = l_System_FilePath_normalize(v_srcDir_605_);
v___x_609_ = l_Lake_joinRelative(v_dir_604_, v___x_608_);
v___x_610_ = l_System_FilePath_normalize(v_srcDir_606_);
v___x_611_ = l_Lake_joinRelative(v___x_609_, v___x_610_);
v___x_612_ = l_Lean_modToFilePath(v___x_611_, v_name_603_, v___x_607_);
lean_dec_ref(v___x_611_);
return v___x_612_;
}
}
LEAN_EXPORT lean_object* l_Lake_Module_relLeanFile(lean_object* v_self_613_){
_start:
{
lean_object* v_lib_614_; lean_object* v_pkg_615_; lean_object* v_config_616_; lean_object* v_config_617_; lean_object* v_name_618_; lean_object* v_dir_619_; lean_object* v_srcDir_620_; lean_object* v_srcDir_621_; lean_object* v___x_622_; lean_object* v___x_623_; lean_object* v___x_624_; lean_object* v___x_625_; lean_object* v___x_626_; lean_object* v___x_627_; lean_object* v___x_628_; 
v_lib_614_ = lean_ctor_get(v_self_613_, 0);
v_pkg_615_ = lean_ctor_get(v_lib_614_, 0);
lean_inc_ref(v_pkg_615_);
v_config_616_ = lean_ctor_get(v_pkg_615_, 6);
lean_inc_ref(v_config_616_);
v_config_617_ = lean_ctor_get(v_lib_614_, 2);
lean_inc(v_config_617_);
v_name_618_ = lean_ctor_get(v_self_613_, 1);
lean_inc(v_name_618_);
lean_dec_ref(v_self_613_);
v_dir_619_ = lean_ctor_get(v_pkg_615_, 4);
lean_inc_ref_n(v_dir_619_, 2);
lean_dec_ref(v_pkg_615_);
v_srcDir_620_ = lean_ctor_get(v_config_616_, 4);
lean_inc_ref(v_srcDir_620_);
lean_dec_ref(v_config_616_);
v_srcDir_621_ = lean_ctor_get(v_config_617_, 1);
lean_inc_ref(v_srcDir_621_);
lean_dec(v_config_617_);
v___x_622_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_forEachModuleInDir___at___00Lake_LeanLib_getModuleArray_spec__0_spec__1___closed__0));
v___x_623_ = l_System_FilePath_normalize(v_srcDir_620_);
v___x_624_ = l_Lake_joinRelative(v_dir_619_, v___x_623_);
v___x_625_ = l_System_FilePath_normalize(v_srcDir_621_);
v___x_626_ = l_Lake_joinRelative(v___x_624_, v___x_625_);
v___x_627_ = l_Lean_modToFilePath(v___x_626_, v_name_618_, v___x_622_);
lean_dec_ref(v___x_626_);
v___x_628_ = l_Lake_relPathFrom(v_dir_619_, v___x_627_);
lean_dec_ref(v_dir_619_);
return v___x_628_;
}
}
LEAN_EXPORT lean_object* l_Lake_Module_leanLibPath(lean_object* v_ext_629_, lean_object* v_self_630_){
_start:
{
lean_object* v_lib_631_; lean_object* v_pkg_632_; lean_object* v_config_633_; lean_object* v_name_634_; lean_object* v_dir_635_; lean_object* v_buildDir_636_; lean_object* v_leanLibDir_637_; lean_object* v___x_638_; lean_object* v___x_639_; lean_object* v___x_640_; lean_object* v___x_641_; lean_object* v___x_642_; 
v_lib_631_ = lean_ctor_get(v_self_630_, 0);
v_pkg_632_ = lean_ctor_get(v_lib_631_, 0);
lean_inc_ref(v_pkg_632_);
v_config_633_ = lean_ctor_get(v_pkg_632_, 6);
lean_inc_ref(v_config_633_);
v_name_634_ = lean_ctor_get(v_self_630_, 1);
lean_inc(v_name_634_);
lean_dec_ref(v_self_630_);
v_dir_635_ = lean_ctor_get(v_pkg_632_, 4);
lean_inc_ref(v_dir_635_);
lean_dec_ref(v_pkg_632_);
v_buildDir_636_ = lean_ctor_get(v_config_633_, 5);
lean_inc_ref(v_buildDir_636_);
v_leanLibDir_637_ = lean_ctor_get(v_config_633_, 6);
lean_inc_ref(v_leanLibDir_637_);
lean_dec_ref(v_config_633_);
v___x_638_ = l_System_FilePath_normalize(v_buildDir_636_);
v___x_639_ = l_Lake_joinRelative(v_dir_635_, v___x_638_);
v___x_640_ = l_System_FilePath_normalize(v_leanLibDir_637_);
v___x_641_ = l_Lake_joinRelative(v___x_639_, v___x_640_);
v___x_642_ = l_Lean_modToFilePath(v___x_641_, v_name_634_, v_ext_629_);
lean_dec_ref(v___x_641_);
return v___x_642_;
}
}
LEAN_EXPORT lean_object* l_Lake_Module_leanLibPath___boxed(lean_object* v_ext_643_, lean_object* v_self_644_){
_start:
{
lean_object* v_res_645_; 
v_res_645_ = l_Lake_Module_leanLibPath(v_ext_643_, v_self_644_);
lean_dec_ref(v_ext_643_);
return v_res_645_;
}
}
LEAN_EXPORT lean_object* l_Lake_Module_leanLibDir(lean_object* v_self_646_){
_start:
{
lean_object* v_lib_647_; lean_object* v_pkg_648_; lean_object* v_config_649_; lean_object* v_name_650_; lean_object* v_dir_651_; lean_object* v_buildDir_652_; lean_object* v_leanLibDir_653_; lean_object* v___x_654_; lean_object* v___x_655_; lean_object* v___x_656_; lean_object* v___x_657_; lean_object* v___x_658_; lean_object* v___x_659_; lean_object* v___x_660_; 
v_lib_647_ = lean_ctor_get(v_self_646_, 0);
v_pkg_648_ = lean_ctor_get(v_lib_647_, 0);
lean_inc_ref(v_pkg_648_);
v_config_649_ = lean_ctor_get(v_pkg_648_, 6);
lean_inc_ref(v_config_649_);
v_name_650_ = lean_ctor_get(v_self_646_, 1);
lean_inc(v_name_650_);
lean_dec_ref(v_self_646_);
v_dir_651_ = lean_ctor_get(v_pkg_648_, 4);
lean_inc_ref(v_dir_651_);
lean_dec_ref(v_pkg_648_);
v_buildDir_652_ = lean_ctor_get(v_config_649_, 5);
lean_inc_ref(v_buildDir_652_);
v_leanLibDir_653_ = lean_ctor_get(v_config_649_, 6);
lean_inc_ref(v_leanLibDir_653_);
lean_dec_ref(v_config_649_);
v___x_654_ = l_System_FilePath_normalize(v_buildDir_652_);
v___x_655_ = l_Lake_joinRelative(v_dir_651_, v___x_654_);
v___x_656_ = l_System_FilePath_normalize(v_leanLibDir_653_);
v___x_657_ = l_Lake_joinRelative(v___x_655_, v___x_656_);
v___x_658_ = l_Lean_Name_getPrefix(v_name_650_);
lean_dec(v_name_650_);
v___x_659_ = ((lean_object*)(l_String_dropSuffix_x3f___at___00Lake_LeanLib_findModuleBySrc_x3f_spec__3___redArg___closed__0));
v___x_660_ = l_Lean_modToFilePath(v___x_657_, v___x_658_, v___x_659_);
lean_dec_ref(v___x_657_);
return v___x_660_;
}
}
LEAN_EXPORT lean_object* l_Lake_Module_oleanFile(lean_object* v_self_662_){
_start:
{
lean_object* v_lib_663_; lean_object* v_pkg_664_; lean_object* v_config_665_; lean_object* v_name_666_; lean_object* v_dir_667_; lean_object* v_buildDir_668_; lean_object* v_leanLibDir_669_; lean_object* v___x_670_; lean_object* v___x_671_; lean_object* v___x_672_; lean_object* v___x_673_; lean_object* v___x_674_; lean_object* v___x_675_; 
v_lib_663_ = lean_ctor_get(v_self_662_, 0);
v_pkg_664_ = lean_ctor_get(v_lib_663_, 0);
lean_inc_ref(v_pkg_664_);
v_config_665_ = lean_ctor_get(v_pkg_664_, 6);
lean_inc_ref(v_config_665_);
v_name_666_ = lean_ctor_get(v_self_662_, 1);
lean_inc(v_name_666_);
lean_dec_ref(v_self_662_);
v_dir_667_ = lean_ctor_get(v_pkg_664_, 4);
lean_inc_ref(v_dir_667_);
lean_dec_ref(v_pkg_664_);
v_buildDir_668_ = lean_ctor_get(v_config_665_, 5);
lean_inc_ref(v_buildDir_668_);
v_leanLibDir_669_ = lean_ctor_get(v_config_665_, 6);
lean_inc_ref(v_leanLibDir_669_);
lean_dec_ref(v_config_665_);
v___x_670_ = ((lean_object*)(l_Lake_Module_oleanFile___closed__0));
v___x_671_ = l_System_FilePath_normalize(v_buildDir_668_);
v___x_672_ = l_Lake_joinRelative(v_dir_667_, v___x_671_);
v___x_673_ = l_System_FilePath_normalize(v_leanLibDir_669_);
v___x_674_ = l_Lake_joinRelative(v___x_672_, v___x_673_);
v___x_675_ = l_Lean_modToFilePath(v___x_674_, v_name_666_, v___x_670_);
lean_dec_ref(v___x_674_);
return v___x_675_;
}
}
LEAN_EXPORT lean_object* l_Lake_Module_oleanServerFile(lean_object* v_self_677_){
_start:
{
lean_object* v_lib_678_; lean_object* v_pkg_679_; lean_object* v_config_680_; lean_object* v_name_681_; lean_object* v_dir_682_; lean_object* v_buildDir_683_; lean_object* v_leanLibDir_684_; lean_object* v___x_685_; lean_object* v___x_686_; lean_object* v___x_687_; lean_object* v___x_688_; lean_object* v___x_689_; lean_object* v___x_690_; 
v_lib_678_ = lean_ctor_get(v_self_677_, 0);
v_pkg_679_ = lean_ctor_get(v_lib_678_, 0);
lean_inc_ref(v_pkg_679_);
v_config_680_ = lean_ctor_get(v_pkg_679_, 6);
lean_inc_ref(v_config_680_);
v_name_681_ = lean_ctor_get(v_self_677_, 1);
lean_inc(v_name_681_);
lean_dec_ref(v_self_677_);
v_dir_682_ = lean_ctor_get(v_pkg_679_, 4);
lean_inc_ref(v_dir_682_);
lean_dec_ref(v_pkg_679_);
v_buildDir_683_ = lean_ctor_get(v_config_680_, 5);
lean_inc_ref(v_buildDir_683_);
v_leanLibDir_684_ = lean_ctor_get(v_config_680_, 6);
lean_inc_ref(v_leanLibDir_684_);
lean_dec_ref(v_config_680_);
v___x_685_ = ((lean_object*)(l_Lake_Module_oleanServerFile___closed__0));
v___x_686_ = l_System_FilePath_normalize(v_buildDir_683_);
v___x_687_ = l_Lake_joinRelative(v_dir_682_, v___x_686_);
v___x_688_ = l_System_FilePath_normalize(v_leanLibDir_684_);
v___x_689_ = l_Lake_joinRelative(v___x_687_, v___x_688_);
v___x_690_ = l_Lean_modToFilePath(v___x_689_, v_name_681_, v___x_685_);
lean_dec_ref(v___x_689_);
return v___x_690_;
}
}
LEAN_EXPORT lean_object* l_Lake_Module_oleanPrivateFile(lean_object* v_self_692_){
_start:
{
lean_object* v_lib_693_; lean_object* v_pkg_694_; lean_object* v_config_695_; lean_object* v_name_696_; lean_object* v_dir_697_; lean_object* v_buildDir_698_; lean_object* v_leanLibDir_699_; lean_object* v___x_700_; lean_object* v___x_701_; lean_object* v___x_702_; lean_object* v___x_703_; lean_object* v___x_704_; lean_object* v___x_705_; 
v_lib_693_ = lean_ctor_get(v_self_692_, 0);
v_pkg_694_ = lean_ctor_get(v_lib_693_, 0);
lean_inc_ref(v_pkg_694_);
v_config_695_ = lean_ctor_get(v_pkg_694_, 6);
lean_inc_ref(v_config_695_);
v_name_696_ = lean_ctor_get(v_self_692_, 1);
lean_inc(v_name_696_);
lean_dec_ref(v_self_692_);
v_dir_697_ = lean_ctor_get(v_pkg_694_, 4);
lean_inc_ref(v_dir_697_);
lean_dec_ref(v_pkg_694_);
v_buildDir_698_ = lean_ctor_get(v_config_695_, 5);
lean_inc_ref(v_buildDir_698_);
v_leanLibDir_699_ = lean_ctor_get(v_config_695_, 6);
lean_inc_ref(v_leanLibDir_699_);
lean_dec_ref(v_config_695_);
v___x_700_ = ((lean_object*)(l_Lake_Module_oleanPrivateFile___closed__0));
v___x_701_ = l_System_FilePath_normalize(v_buildDir_698_);
v___x_702_ = l_Lake_joinRelative(v_dir_697_, v___x_701_);
v___x_703_ = l_System_FilePath_normalize(v_leanLibDir_699_);
v___x_704_ = l_Lake_joinRelative(v___x_702_, v___x_703_);
v___x_705_ = l_Lean_modToFilePath(v___x_704_, v_name_696_, v___x_700_);
lean_dec_ref(v___x_704_);
return v___x_705_;
}
}
LEAN_EXPORT lean_object* l_Lake_Module_ileanFile(lean_object* v_self_707_){
_start:
{
lean_object* v_lib_708_; lean_object* v_pkg_709_; lean_object* v_config_710_; lean_object* v_name_711_; lean_object* v_dir_712_; lean_object* v_buildDir_713_; lean_object* v_leanLibDir_714_; lean_object* v___x_715_; lean_object* v___x_716_; lean_object* v___x_717_; lean_object* v___x_718_; lean_object* v___x_719_; lean_object* v___x_720_; 
v_lib_708_ = lean_ctor_get(v_self_707_, 0);
v_pkg_709_ = lean_ctor_get(v_lib_708_, 0);
lean_inc_ref(v_pkg_709_);
v_config_710_ = lean_ctor_get(v_pkg_709_, 6);
lean_inc_ref(v_config_710_);
v_name_711_ = lean_ctor_get(v_self_707_, 1);
lean_inc(v_name_711_);
lean_dec_ref(v_self_707_);
v_dir_712_ = lean_ctor_get(v_pkg_709_, 4);
lean_inc_ref(v_dir_712_);
lean_dec_ref(v_pkg_709_);
v_buildDir_713_ = lean_ctor_get(v_config_710_, 5);
lean_inc_ref(v_buildDir_713_);
v_leanLibDir_714_ = lean_ctor_get(v_config_710_, 6);
lean_inc_ref(v_leanLibDir_714_);
lean_dec_ref(v_config_710_);
v___x_715_ = ((lean_object*)(l_Lake_Module_ileanFile___closed__0));
v___x_716_ = l_System_FilePath_normalize(v_buildDir_713_);
v___x_717_ = l_Lake_joinRelative(v_dir_712_, v___x_716_);
v___x_718_ = l_System_FilePath_normalize(v_leanLibDir_714_);
v___x_719_ = l_Lake_joinRelative(v___x_717_, v___x_718_);
v___x_720_ = l_Lean_modToFilePath(v___x_719_, v_name_711_, v___x_715_);
lean_dec_ref(v___x_719_);
return v___x_720_;
}
}
LEAN_EXPORT lean_object* l_Lake_Module_irSigFile(lean_object* v_self_722_){
_start:
{
lean_object* v_lib_723_; lean_object* v_pkg_724_; lean_object* v_config_725_; lean_object* v_name_726_; lean_object* v_dir_727_; lean_object* v_buildDir_728_; lean_object* v_leanLibDir_729_; lean_object* v___x_730_; lean_object* v___x_731_; lean_object* v___x_732_; lean_object* v___x_733_; lean_object* v___x_734_; lean_object* v___x_735_; 
v_lib_723_ = lean_ctor_get(v_self_722_, 0);
v_pkg_724_ = lean_ctor_get(v_lib_723_, 0);
lean_inc_ref(v_pkg_724_);
v_config_725_ = lean_ctor_get(v_pkg_724_, 6);
lean_inc_ref(v_config_725_);
v_name_726_ = lean_ctor_get(v_self_722_, 1);
lean_inc(v_name_726_);
lean_dec_ref(v_self_722_);
v_dir_727_ = lean_ctor_get(v_pkg_724_, 4);
lean_inc_ref(v_dir_727_);
lean_dec_ref(v_pkg_724_);
v_buildDir_728_ = lean_ctor_get(v_config_725_, 5);
lean_inc_ref(v_buildDir_728_);
v_leanLibDir_729_ = lean_ctor_get(v_config_725_, 6);
lean_inc_ref(v_leanLibDir_729_);
lean_dec_ref(v_config_725_);
v___x_730_ = ((lean_object*)(l_Lake_Module_irSigFile___closed__0));
v___x_731_ = l_System_FilePath_normalize(v_buildDir_728_);
v___x_732_ = l_Lake_joinRelative(v_dir_727_, v___x_731_);
v___x_733_ = l_System_FilePath_normalize(v_leanLibDir_729_);
v___x_734_ = l_Lake_joinRelative(v___x_732_, v___x_733_);
v___x_735_ = l_Lean_modToFilePath(v___x_734_, v_name_726_, v___x_730_);
lean_dec_ref(v___x_734_);
return v___x_735_;
}
}
LEAN_EXPORT lean_object* l_Lake_Module_irFile(lean_object* v_self_737_){
_start:
{
lean_object* v_lib_738_; lean_object* v_pkg_739_; lean_object* v_config_740_; lean_object* v_name_741_; lean_object* v_dir_742_; lean_object* v_buildDir_743_; lean_object* v_leanLibDir_744_; lean_object* v___x_745_; lean_object* v___x_746_; lean_object* v___x_747_; lean_object* v___x_748_; lean_object* v___x_749_; lean_object* v___x_750_; 
v_lib_738_ = lean_ctor_get(v_self_737_, 0);
v_pkg_739_ = lean_ctor_get(v_lib_738_, 0);
lean_inc_ref(v_pkg_739_);
v_config_740_ = lean_ctor_get(v_pkg_739_, 6);
lean_inc_ref(v_config_740_);
v_name_741_ = lean_ctor_get(v_self_737_, 1);
lean_inc(v_name_741_);
lean_dec_ref(v_self_737_);
v_dir_742_ = lean_ctor_get(v_pkg_739_, 4);
lean_inc_ref(v_dir_742_);
lean_dec_ref(v_pkg_739_);
v_buildDir_743_ = lean_ctor_get(v_config_740_, 5);
lean_inc_ref(v_buildDir_743_);
v_leanLibDir_744_ = lean_ctor_get(v_config_740_, 6);
lean_inc_ref(v_leanLibDir_744_);
lean_dec_ref(v_config_740_);
v___x_745_ = ((lean_object*)(l_Lake_Module_irFile___closed__0));
v___x_746_ = l_System_FilePath_normalize(v_buildDir_743_);
v___x_747_ = l_Lake_joinRelative(v_dir_742_, v___x_746_);
v___x_748_ = l_System_FilePath_normalize(v_leanLibDir_744_);
v___x_749_ = l_Lake_joinRelative(v___x_747_, v___x_748_);
v___x_750_ = l_Lean_modToFilePath(v___x_749_, v_name_741_, v___x_745_);
lean_dec_ref(v___x_749_);
return v___x_750_;
}
}
LEAN_EXPORT lean_object* l_Lake_Module_traceFile(lean_object* v_self_752_){
_start:
{
lean_object* v_lib_753_; lean_object* v_pkg_754_; lean_object* v_config_755_; lean_object* v_name_756_; lean_object* v_dir_757_; lean_object* v_buildDir_758_; lean_object* v_leanLibDir_759_; lean_object* v___x_760_; lean_object* v___x_761_; lean_object* v___x_762_; lean_object* v___x_763_; lean_object* v___x_764_; lean_object* v___x_765_; 
v_lib_753_ = lean_ctor_get(v_self_752_, 0);
v_pkg_754_ = lean_ctor_get(v_lib_753_, 0);
lean_inc_ref(v_pkg_754_);
v_config_755_ = lean_ctor_get(v_pkg_754_, 6);
lean_inc_ref(v_config_755_);
v_name_756_ = lean_ctor_get(v_self_752_, 1);
lean_inc(v_name_756_);
lean_dec_ref(v_self_752_);
v_dir_757_ = lean_ctor_get(v_pkg_754_, 4);
lean_inc_ref(v_dir_757_);
lean_dec_ref(v_pkg_754_);
v_buildDir_758_ = lean_ctor_get(v_config_755_, 5);
lean_inc_ref(v_buildDir_758_);
v_leanLibDir_759_ = lean_ctor_get(v_config_755_, 6);
lean_inc_ref(v_leanLibDir_759_);
lean_dec_ref(v_config_755_);
v___x_760_ = ((lean_object*)(l_Lake_Module_traceFile___closed__0));
v___x_761_ = l_System_FilePath_normalize(v_buildDir_758_);
v___x_762_ = l_Lake_joinRelative(v_dir_757_, v___x_761_);
v___x_763_ = l_System_FilePath_normalize(v_leanLibDir_759_);
v___x_764_ = l_Lake_joinRelative(v___x_762_, v___x_763_);
v___x_765_ = l_Lean_modToFilePath(v___x_764_, v_name_756_, v___x_760_);
lean_dec_ref(v___x_764_);
return v___x_765_;
}
}
LEAN_EXPORT lean_object* l_Lake_Module_irPath(lean_object* v_ext_766_, lean_object* v_self_767_){
_start:
{
lean_object* v_lib_768_; lean_object* v_pkg_769_; lean_object* v_config_770_; lean_object* v_name_771_; lean_object* v_dir_772_; lean_object* v_buildDir_773_; lean_object* v_irDir_774_; lean_object* v___x_775_; lean_object* v___x_776_; lean_object* v___x_777_; lean_object* v___x_778_; lean_object* v___x_779_; 
v_lib_768_ = lean_ctor_get(v_self_767_, 0);
v_pkg_769_ = lean_ctor_get(v_lib_768_, 0);
lean_inc_ref(v_pkg_769_);
v_config_770_ = lean_ctor_get(v_pkg_769_, 6);
lean_inc_ref(v_config_770_);
v_name_771_ = lean_ctor_get(v_self_767_, 1);
lean_inc(v_name_771_);
lean_dec_ref(v_self_767_);
v_dir_772_ = lean_ctor_get(v_pkg_769_, 4);
lean_inc_ref(v_dir_772_);
lean_dec_ref(v_pkg_769_);
v_buildDir_773_ = lean_ctor_get(v_config_770_, 5);
lean_inc_ref(v_buildDir_773_);
v_irDir_774_ = lean_ctor_get(v_config_770_, 9);
lean_inc_ref(v_irDir_774_);
lean_dec_ref(v_config_770_);
v___x_775_ = l_System_FilePath_normalize(v_buildDir_773_);
v___x_776_ = l_Lake_joinRelative(v_dir_772_, v___x_775_);
v___x_777_ = l_System_FilePath_normalize(v_irDir_774_);
v___x_778_ = l_Lake_joinRelative(v___x_776_, v___x_777_);
v___x_779_ = l_Lean_modToFilePath(v___x_778_, v_name_771_, v_ext_766_);
lean_dec_ref(v___x_778_);
return v___x_779_;
}
}
LEAN_EXPORT lean_object* l_Lake_Module_irPath___boxed(lean_object* v_ext_780_, lean_object* v_self_781_){
_start:
{
lean_object* v_res_782_; 
v_res_782_ = l_Lake_Module_irPath(v_ext_780_, v_self_781_);
lean_dec_ref(v_ext_780_);
return v_res_782_;
}
}
LEAN_EXPORT lean_object* l_Lake_Module_irDir(lean_object* v_self_783_){
_start:
{
lean_object* v_lib_784_; lean_object* v_pkg_785_; lean_object* v_config_786_; lean_object* v_name_787_; lean_object* v_dir_788_; lean_object* v_buildDir_789_; lean_object* v_irDir_790_; lean_object* v___x_791_; lean_object* v___x_792_; lean_object* v___x_793_; lean_object* v___x_794_; lean_object* v___x_795_; lean_object* v___x_796_; lean_object* v___x_797_; 
v_lib_784_ = lean_ctor_get(v_self_783_, 0);
v_pkg_785_ = lean_ctor_get(v_lib_784_, 0);
lean_inc_ref(v_pkg_785_);
v_config_786_ = lean_ctor_get(v_pkg_785_, 6);
lean_inc_ref(v_config_786_);
v_name_787_ = lean_ctor_get(v_self_783_, 1);
lean_inc(v_name_787_);
lean_dec_ref(v_self_783_);
v_dir_788_ = lean_ctor_get(v_pkg_785_, 4);
lean_inc_ref(v_dir_788_);
lean_dec_ref(v_pkg_785_);
v_buildDir_789_ = lean_ctor_get(v_config_786_, 5);
lean_inc_ref(v_buildDir_789_);
v_irDir_790_ = lean_ctor_get(v_config_786_, 9);
lean_inc_ref(v_irDir_790_);
lean_dec_ref(v_config_786_);
v___x_791_ = l_System_FilePath_normalize(v_buildDir_789_);
v___x_792_ = l_Lake_joinRelative(v_dir_788_, v___x_791_);
v___x_793_ = l_System_FilePath_normalize(v_irDir_790_);
v___x_794_ = l_Lake_joinRelative(v___x_792_, v___x_793_);
v___x_795_ = l_Lean_Name_getPrefix(v_name_787_);
lean_dec(v_name_787_);
v___x_796_ = ((lean_object*)(l_String_dropSuffix_x3f___at___00Lake_LeanLib_findModuleBySrc_x3f_spec__3___redArg___closed__0));
v___x_797_ = l_Lean_modToFilePath(v___x_794_, v___x_795_, v___x_796_);
lean_dec_ref(v___x_794_);
return v___x_797_;
}
}
LEAN_EXPORT lean_object* l_Lake_Module_setupFile(lean_object* v_self_799_){
_start:
{
lean_object* v_lib_800_; lean_object* v_pkg_801_; lean_object* v_config_802_; lean_object* v_name_803_; lean_object* v_dir_804_; lean_object* v_buildDir_805_; lean_object* v_irDir_806_; lean_object* v___x_807_; lean_object* v___x_808_; lean_object* v___x_809_; lean_object* v___x_810_; lean_object* v___x_811_; lean_object* v___x_812_; 
v_lib_800_ = lean_ctor_get(v_self_799_, 0);
v_pkg_801_ = lean_ctor_get(v_lib_800_, 0);
lean_inc_ref(v_pkg_801_);
v_config_802_ = lean_ctor_get(v_pkg_801_, 6);
lean_inc_ref(v_config_802_);
v_name_803_ = lean_ctor_get(v_self_799_, 1);
lean_inc(v_name_803_);
lean_dec_ref(v_self_799_);
v_dir_804_ = lean_ctor_get(v_pkg_801_, 4);
lean_inc_ref(v_dir_804_);
lean_dec_ref(v_pkg_801_);
v_buildDir_805_ = lean_ctor_get(v_config_802_, 5);
lean_inc_ref(v_buildDir_805_);
v_irDir_806_ = lean_ctor_get(v_config_802_, 9);
lean_inc_ref(v_irDir_806_);
lean_dec_ref(v_config_802_);
v___x_807_ = ((lean_object*)(l_Lake_Module_setupFile___closed__0));
v___x_808_ = l_System_FilePath_normalize(v_buildDir_805_);
v___x_809_ = l_Lake_joinRelative(v_dir_804_, v___x_808_);
v___x_810_ = l_System_FilePath_normalize(v_irDir_806_);
v___x_811_ = l_Lake_joinRelative(v___x_809_, v___x_810_);
v___x_812_ = l_Lean_modToFilePath(v___x_811_, v_name_803_, v___x_807_);
lean_dec_ref(v___x_811_);
return v___x_812_;
}
}
LEAN_EXPORT lean_object* l_Lake_Module_cFile(lean_object* v_self_814_){
_start:
{
lean_object* v_lib_815_; lean_object* v_pkg_816_; lean_object* v_config_817_; lean_object* v_name_818_; lean_object* v_dir_819_; lean_object* v_buildDir_820_; lean_object* v_irDir_821_; lean_object* v___x_822_; lean_object* v___x_823_; lean_object* v___x_824_; lean_object* v___x_825_; lean_object* v___x_826_; lean_object* v___x_827_; 
v_lib_815_ = lean_ctor_get(v_self_814_, 0);
v_pkg_816_ = lean_ctor_get(v_lib_815_, 0);
lean_inc_ref(v_pkg_816_);
v_config_817_ = lean_ctor_get(v_pkg_816_, 6);
lean_inc_ref(v_config_817_);
v_name_818_ = lean_ctor_get(v_self_814_, 1);
lean_inc(v_name_818_);
lean_dec_ref(v_self_814_);
v_dir_819_ = lean_ctor_get(v_pkg_816_, 4);
lean_inc_ref(v_dir_819_);
lean_dec_ref(v_pkg_816_);
v_buildDir_820_ = lean_ctor_get(v_config_817_, 5);
lean_inc_ref(v_buildDir_820_);
v_irDir_821_ = lean_ctor_get(v_config_817_, 9);
lean_inc_ref(v_irDir_821_);
lean_dec_ref(v_config_817_);
v___x_822_ = ((lean_object*)(l_Lake_Module_cFile___closed__0));
v___x_823_ = l_System_FilePath_normalize(v_buildDir_820_);
v___x_824_ = l_Lake_joinRelative(v_dir_819_, v___x_823_);
v___x_825_ = l_System_FilePath_normalize(v_irDir_821_);
v___x_826_ = l_Lake_joinRelative(v___x_824_, v___x_825_);
v___x_827_ = l_Lean_modToFilePath(v___x_826_, v_name_818_, v___x_822_);
lean_dec_ref(v___x_826_);
return v___x_827_;
}
}
LEAN_EXPORT lean_object* l_Lake_Module_coExportFile(lean_object* v_self_829_){
_start:
{
lean_object* v_lib_830_; lean_object* v_pkg_831_; lean_object* v_config_832_; lean_object* v_name_833_; lean_object* v_dir_834_; lean_object* v_buildDir_835_; lean_object* v_irDir_836_; lean_object* v___x_837_; lean_object* v___x_838_; lean_object* v___x_839_; lean_object* v___x_840_; lean_object* v___x_841_; lean_object* v___x_842_; 
v_lib_830_ = lean_ctor_get(v_self_829_, 0);
v_pkg_831_ = lean_ctor_get(v_lib_830_, 0);
lean_inc_ref(v_pkg_831_);
v_config_832_ = lean_ctor_get(v_pkg_831_, 6);
lean_inc_ref(v_config_832_);
v_name_833_ = lean_ctor_get(v_self_829_, 1);
lean_inc(v_name_833_);
lean_dec_ref(v_self_829_);
v_dir_834_ = lean_ctor_get(v_pkg_831_, 4);
lean_inc_ref(v_dir_834_);
lean_dec_ref(v_pkg_831_);
v_buildDir_835_ = lean_ctor_get(v_config_832_, 5);
lean_inc_ref(v_buildDir_835_);
v_irDir_836_ = lean_ctor_get(v_config_832_, 9);
lean_inc_ref(v_irDir_836_);
lean_dec_ref(v_config_832_);
v___x_837_ = ((lean_object*)(l_Lake_Module_coExportFile___closed__0));
v___x_838_ = l_System_FilePath_normalize(v_buildDir_835_);
v___x_839_ = l_Lake_joinRelative(v_dir_834_, v___x_838_);
v___x_840_ = l_System_FilePath_normalize(v_irDir_836_);
v___x_841_ = l_Lake_joinRelative(v___x_839_, v___x_840_);
v___x_842_ = l_Lean_modToFilePath(v___x_841_, v_name_833_, v___x_837_);
lean_dec_ref(v___x_841_);
return v___x_842_;
}
}
LEAN_EXPORT lean_object* l_Lake_Module_coNoExportFile(lean_object* v_self_844_){
_start:
{
lean_object* v_lib_845_; lean_object* v_pkg_846_; lean_object* v_config_847_; lean_object* v_name_848_; lean_object* v_dir_849_; lean_object* v_buildDir_850_; lean_object* v_irDir_851_; lean_object* v___x_852_; lean_object* v___x_853_; lean_object* v___x_854_; lean_object* v___x_855_; lean_object* v___x_856_; lean_object* v___x_857_; 
v_lib_845_ = lean_ctor_get(v_self_844_, 0);
v_pkg_846_ = lean_ctor_get(v_lib_845_, 0);
lean_inc_ref(v_pkg_846_);
v_config_847_ = lean_ctor_get(v_pkg_846_, 6);
lean_inc_ref(v_config_847_);
v_name_848_ = lean_ctor_get(v_self_844_, 1);
lean_inc(v_name_848_);
lean_dec_ref(v_self_844_);
v_dir_849_ = lean_ctor_get(v_pkg_846_, 4);
lean_inc_ref(v_dir_849_);
lean_dec_ref(v_pkg_846_);
v_buildDir_850_ = lean_ctor_get(v_config_847_, 5);
lean_inc_ref(v_buildDir_850_);
v_irDir_851_ = lean_ctor_get(v_config_847_, 9);
lean_inc_ref(v_irDir_851_);
lean_dec_ref(v_config_847_);
v___x_852_ = ((lean_object*)(l_Lake_Module_coNoExportFile___closed__0));
v___x_853_ = l_System_FilePath_normalize(v_buildDir_850_);
v___x_854_ = l_Lake_joinRelative(v_dir_849_, v___x_853_);
v___x_855_ = l_System_FilePath_normalize(v_irDir_851_);
v___x_856_ = l_Lake_joinRelative(v___x_854_, v___x_855_);
v___x_857_ = l_Lean_modToFilePath(v___x_856_, v_name_848_, v___x_852_);
lean_dec_ref(v___x_856_);
return v___x_857_;
}
}
LEAN_EXPORT lean_object* l_Lake_Module_bcFile(lean_object* v_self_859_){
_start:
{
lean_object* v_lib_860_; lean_object* v_pkg_861_; lean_object* v_config_862_; lean_object* v_name_863_; lean_object* v_dir_864_; lean_object* v_buildDir_865_; lean_object* v_irDir_866_; lean_object* v___x_867_; lean_object* v___x_868_; lean_object* v___x_869_; lean_object* v___x_870_; lean_object* v___x_871_; lean_object* v___x_872_; 
v_lib_860_ = lean_ctor_get(v_self_859_, 0);
v_pkg_861_ = lean_ctor_get(v_lib_860_, 0);
lean_inc_ref(v_pkg_861_);
v_config_862_ = lean_ctor_get(v_pkg_861_, 6);
lean_inc_ref(v_config_862_);
v_name_863_ = lean_ctor_get(v_self_859_, 1);
lean_inc(v_name_863_);
lean_dec_ref(v_self_859_);
v_dir_864_ = lean_ctor_get(v_pkg_861_, 4);
lean_inc_ref(v_dir_864_);
lean_dec_ref(v_pkg_861_);
v_buildDir_865_ = lean_ctor_get(v_config_862_, 5);
lean_inc_ref(v_buildDir_865_);
v_irDir_866_ = lean_ctor_get(v_config_862_, 9);
lean_inc_ref(v_irDir_866_);
lean_dec_ref(v_config_862_);
v___x_867_ = ((lean_object*)(l_Lake_Module_bcFile___closed__0));
v___x_868_ = l_System_FilePath_normalize(v_buildDir_865_);
v___x_869_ = l_Lake_joinRelative(v_dir_864_, v___x_868_);
v___x_870_ = l_System_FilePath_normalize(v_irDir_866_);
v___x_871_ = l_Lake_joinRelative(v___x_869_, v___x_870_);
v___x_872_ = l_Lean_modToFilePath(v___x_871_, v_name_863_, v___x_867_);
lean_dec_ref(v___x_871_);
return v___x_872_;
}
}
static uint8_t _init_l_Lake_Module_bcFile_x3f___closed__0(void){
_start:
{
lean_object* v___x_873_; uint8_t v___x_874_; 
v___x_873_ = lean_box(0);
v___x_874_ = lean_internal_has_llvm_backend(v___x_873_);
return v___x_874_;
}
}
LEAN_EXPORT lean_object* l_Lake_Module_bcFile_x3f(lean_object* v_self_875_){
_start:
{
uint8_t v___x_876_; 
v___x_876_ = lean_uint8_once(&l_Lake_Module_bcFile_x3f___closed__0, &l_Lake_Module_bcFile_x3f___closed__0_once, _init_l_Lake_Module_bcFile_x3f___closed__0);
if (v___x_876_ == 0)
{
lean_object* v___x_877_; 
lean_dec_ref(v_self_875_);
v___x_877_ = lean_box(0);
return v___x_877_;
}
else
{
lean_object* v_lib_878_; lean_object* v_pkg_879_; lean_object* v_config_880_; lean_object* v_name_881_; lean_object* v_dir_882_; lean_object* v_buildDir_883_; lean_object* v_irDir_884_; lean_object* v___x_885_; lean_object* v___x_886_; lean_object* v___x_887_; lean_object* v___x_888_; lean_object* v___x_889_; lean_object* v___x_890_; lean_object* v___x_891_; 
v_lib_878_ = lean_ctor_get(v_self_875_, 0);
v_pkg_879_ = lean_ctor_get(v_lib_878_, 0);
lean_inc_ref(v_pkg_879_);
v_config_880_ = lean_ctor_get(v_pkg_879_, 6);
lean_inc_ref(v_config_880_);
v_name_881_ = lean_ctor_get(v_self_875_, 1);
lean_inc(v_name_881_);
lean_dec_ref(v_self_875_);
v_dir_882_ = lean_ctor_get(v_pkg_879_, 4);
lean_inc_ref(v_dir_882_);
lean_dec_ref(v_pkg_879_);
v_buildDir_883_ = lean_ctor_get(v_config_880_, 5);
lean_inc_ref(v_buildDir_883_);
v_irDir_884_ = lean_ctor_get(v_config_880_, 9);
lean_inc_ref(v_irDir_884_);
lean_dec_ref(v_config_880_);
v___x_885_ = ((lean_object*)(l_Lake_Module_bcFile___closed__0));
v___x_886_ = l_System_FilePath_normalize(v_buildDir_883_);
v___x_887_ = l_Lake_joinRelative(v_dir_882_, v___x_886_);
v___x_888_ = l_System_FilePath_normalize(v_irDir_884_);
v___x_889_ = l_Lake_joinRelative(v___x_887_, v___x_888_);
v___x_890_ = l_Lean_modToFilePath(v___x_889_, v_name_881_, v___x_885_);
lean_dec_ref(v___x_889_);
v___x_891_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_891_, 0, v___x_890_);
return v___x_891_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_Module_bcoFile(lean_object* v_self_893_){
_start:
{
lean_object* v_lib_894_; lean_object* v_pkg_895_; lean_object* v_config_896_; lean_object* v_name_897_; lean_object* v_dir_898_; lean_object* v_buildDir_899_; lean_object* v_irDir_900_; lean_object* v___x_901_; lean_object* v___x_902_; lean_object* v___x_903_; lean_object* v___x_904_; lean_object* v___x_905_; lean_object* v___x_906_; 
v_lib_894_ = lean_ctor_get(v_self_893_, 0);
v_pkg_895_ = lean_ctor_get(v_lib_894_, 0);
lean_inc_ref(v_pkg_895_);
v_config_896_ = lean_ctor_get(v_pkg_895_, 6);
lean_inc_ref(v_config_896_);
v_name_897_ = lean_ctor_get(v_self_893_, 1);
lean_inc(v_name_897_);
lean_dec_ref(v_self_893_);
v_dir_898_ = lean_ctor_get(v_pkg_895_, 4);
lean_inc_ref(v_dir_898_);
lean_dec_ref(v_pkg_895_);
v_buildDir_899_ = lean_ctor_get(v_config_896_, 5);
lean_inc_ref(v_buildDir_899_);
v_irDir_900_ = lean_ctor_get(v_config_896_, 9);
lean_inc_ref(v_irDir_900_);
lean_dec_ref(v_config_896_);
v___x_901_ = ((lean_object*)(l_Lake_Module_bcoFile___closed__0));
v___x_902_ = l_System_FilePath_normalize(v_buildDir_899_);
v___x_903_ = l_Lake_joinRelative(v_dir_898_, v___x_902_);
v___x_904_ = l_System_FilePath_normalize(v_irDir_900_);
v___x_905_ = l_Lake_joinRelative(v___x_903_, v___x_904_);
v___x_906_ = l_Lean_modToFilePath(v___x_905_, v_name_897_, v___x_901_);
lean_dec_ref(v___x_905_);
return v___x_906_;
}
}
LEAN_EXPORT lean_object* l_Lake_Module_ltarFile(lean_object* v_self_908_){
_start:
{
lean_object* v_lib_909_; lean_object* v_pkg_910_; lean_object* v_config_911_; lean_object* v_name_912_; lean_object* v_dir_913_; lean_object* v_buildDir_914_; lean_object* v_irDir_915_; lean_object* v___x_916_; lean_object* v___x_917_; lean_object* v___x_918_; lean_object* v___x_919_; lean_object* v___x_920_; lean_object* v___x_921_; 
v_lib_909_ = lean_ctor_get(v_self_908_, 0);
v_pkg_910_ = lean_ctor_get(v_lib_909_, 0);
lean_inc_ref(v_pkg_910_);
v_config_911_ = lean_ctor_get(v_pkg_910_, 6);
lean_inc_ref(v_config_911_);
v_name_912_ = lean_ctor_get(v_self_908_, 1);
lean_inc(v_name_912_);
lean_dec_ref(v_self_908_);
v_dir_913_ = lean_ctor_get(v_pkg_910_, 4);
lean_inc_ref(v_dir_913_);
lean_dec_ref(v_pkg_910_);
v_buildDir_914_ = lean_ctor_get(v_config_911_, 5);
lean_inc_ref(v_buildDir_914_);
v_irDir_915_ = lean_ctor_get(v_config_911_, 9);
lean_inc_ref(v_irDir_915_);
lean_dec_ref(v_config_911_);
v___x_916_ = ((lean_object*)(l_Lake_Module_ltarFile___closed__0));
v___x_917_ = l_System_FilePath_normalize(v_buildDir_914_);
v___x_918_ = l_Lake_joinRelative(v_dir_913_, v___x_917_);
v___x_919_ = l_System_FilePath_normalize(v_irDir_915_);
v___x_920_ = l_Lake_joinRelative(v___x_918_, v___x_919_);
v___x_921_ = l_Lean_modToFilePath(v___x_920_, v_name_912_, v___x_916_);
lean_dec_ref(v___x_920_);
return v___x_921_;
}
}
LEAN_EXPORT lean_object* l_Lake_Module_dynlibName(lean_object* v_self_924_){
_start:
{
lean_object* v_lib_925_; lean_object* v_name_926_; lean_object* v_pkg_927_; lean_object* v___x_928_; lean_object* v___x_929_; 
v_lib_925_ = lean_ctor_get(v_self_924_, 0);
lean_inc_ref(v_lib_925_);
v_name_926_ = lean_ctor_get(v_self_924_, 1);
lean_inc(v_name_926_);
lean_dec_ref(v_self_924_);
v_pkg_927_ = lean_ctor_get(v_lib_925_, 0);
lean_inc_ref(v_pkg_927_);
lean_dec_ref(v_lib_925_);
v___x_928_ = l_Lake_Package_id_x3f(v_pkg_927_);
v___x_929_ = l_Lean_mkModuleInitializationStem(v_name_926_, v___x_928_);
lean_dec(v___x_928_);
return v___x_929_;
}
}
LEAN_EXPORT lean_object* l_Lake_Module_dynlibFile(lean_object* v_self_931_){
_start:
{
lean_object* v_lib_932_; lean_object* v_pkg_933_; lean_object* v_config_934_; lean_object* v_name_935_; lean_object* v_dir_936_; lean_object* v_buildDir_937_; lean_object* v_leanLibDir_938_; lean_object* v___x_939_; lean_object* v___x_940_; lean_object* v___x_941_; lean_object* v___x_942_; lean_object* v___x_943_; lean_object* v___x_944_; lean_object* v___x_945_; lean_object* v___x_946_; lean_object* v___x_947_; lean_object* v___x_948_; lean_object* v___x_949_; 
v_lib_932_ = lean_ctor_get(v_self_931_, 0);
v_pkg_933_ = lean_ctor_get(v_lib_932_, 0);
lean_inc_ref(v_pkg_933_);
v_config_934_ = lean_ctor_get(v_pkg_933_, 6);
v_name_935_ = lean_ctor_get(v_self_931_, 1);
lean_inc(v_name_935_);
lean_dec_ref(v_self_931_);
v_dir_936_ = lean_ctor_get(v_pkg_933_, 4);
v_buildDir_937_ = lean_ctor_get(v_config_934_, 5);
v_leanLibDir_938_ = lean_ctor_get(v_config_934_, 6);
lean_inc_ref(v_buildDir_937_);
v___x_939_ = l_System_FilePath_normalize(v_buildDir_937_);
lean_inc_ref(v_dir_936_);
v___x_940_ = l_Lake_joinRelative(v_dir_936_, v___x_939_);
lean_inc_ref(v_leanLibDir_938_);
v___x_941_ = l_System_FilePath_normalize(v_leanLibDir_938_);
v___x_942_ = l_Lake_joinRelative(v___x_940_, v___x_941_);
v___x_943_ = l_Lake_Package_id_x3f(v_pkg_933_);
v___x_944_ = l_Lean_mkModuleInitializationStem(v_name_935_, v___x_943_);
lean_dec(v___x_943_);
v___x_945_ = ((lean_object*)(l_Lake_Module_dynlibFile___closed__0));
v___x_946_ = lean_string_append(v___x_944_, v___x_945_);
v___x_947_ = l_Lake_sharedLibExt;
v___x_948_ = lean_string_append(v___x_946_, v___x_947_);
v___x_949_ = l_Lake_joinRelative(v___x_942_, v___x_948_);
return v___x_949_;
}
}
LEAN_EXPORT lean_object* l_Lake_Module_serverOptions(lean_object* v_self_950_){
_start:
{
lean_object* v_lib_951_; lean_object* v_pkg_952_; lean_object* v_config_953_; lean_object* v_toLeanConfig_954_; lean_object* v_config_955_; lean_object* v_toLeanConfig_956_; uint8_t v_buildType_957_; lean_object* v_leanOptions_958_; lean_object* v_moreServerOptions_959_; uint8_t v_buildType_960_; lean_object* v_leanOptions_961_; lean_object* v_moreServerOptions_962_; lean_object* v___x_963_; uint8_t v___y_965_; uint8_t v___x_973_; 
v_lib_951_ = lean_ctor_get(v_self_950_, 0);
v_pkg_952_ = lean_ctor_get(v_lib_951_, 0);
v_config_953_ = lean_ctor_get(v_pkg_952_, 6);
v_toLeanConfig_954_ = lean_ctor_get(v_config_953_, 1);
v_config_955_ = lean_ctor_get(v_lib_951_, 2);
v_toLeanConfig_956_ = lean_ctor_get(v_config_955_, 0);
v_buildType_957_ = lean_ctor_get_uint8(v_toLeanConfig_954_, sizeof(void*)*13);
v_leanOptions_958_ = lean_ctor_get(v_toLeanConfig_954_, 0);
v_moreServerOptions_959_ = lean_ctor_get(v_toLeanConfig_954_, 4);
v_buildType_960_ = lean_ctor_get_uint8(v_toLeanConfig_956_, sizeof(void*)*13);
v_leanOptions_961_ = lean_ctor_get(v_toLeanConfig_956_, 0);
v_moreServerOptions_962_ = lean_ctor_get(v_toLeanConfig_956_, 4);
v___x_963_ = lean_box(1);
v___x_973_ = l_Lake_instOrdBuildType_ord(v_buildType_957_, v_buildType_960_);
if (v___x_973_ == 2)
{
v___y_965_ = v_buildType_960_;
goto v___jp_964_;
}
else
{
v___y_965_ = v_buildType_957_;
goto v___jp_964_;
}
v___jp_964_:
{
lean_object* v___x_966_; lean_object* v___x_967_; lean_object* v___x_968_; lean_object* v___x_969_; lean_object* v___x_970_; lean_object* v___x_971_; lean_object* v___x_972_; 
v___x_966_ = l_Lake_BuildType_leanOptions(v___y_965_);
v___x_967_ = l_Lean_LeanOptions_append(v___x_963_, v___x_966_);
v___x_968_ = l_Lean_LeanOptions_ofArray(v_leanOptions_958_);
v___x_969_ = l_Lean_LeanOptions_appendArray(v___x_968_, v_moreServerOptions_959_);
v___x_970_ = l_Lean_LeanOptions_append(v___x_967_, v___x_969_);
v___x_971_ = l_Lean_LeanOptions_appendArray(v___x_970_, v_leanOptions_961_);
v___x_972_ = l_Lean_LeanOptions_appendArray(v___x_971_, v_moreServerOptions_962_);
return v___x_972_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_Module_serverOptions___boxed(lean_object* v_self_974_){
_start:
{
lean_object* v_res_975_; 
v_res_975_ = l_Lake_Module_serverOptions(v_self_974_);
lean_dec_ref(v_self_974_);
return v_res_975_;
}
}
LEAN_EXPORT uint8_t l_Lake_Module_buildType(lean_object* v_self_976_){
_start:
{
lean_object* v_lib_977_; lean_object* v_pkg_978_; lean_object* v_config_979_; lean_object* v_toLeanConfig_980_; lean_object* v_config_981_; lean_object* v_toLeanConfig_982_; uint8_t v_buildType_983_; uint8_t v_buildType_984_; uint8_t v___x_985_; 
v_lib_977_ = lean_ctor_get(v_self_976_, 0);
v_pkg_978_ = lean_ctor_get(v_lib_977_, 0);
v_config_979_ = lean_ctor_get(v_pkg_978_, 6);
v_toLeanConfig_980_ = lean_ctor_get(v_config_979_, 1);
v_config_981_ = lean_ctor_get(v_lib_977_, 2);
v_toLeanConfig_982_ = lean_ctor_get(v_config_981_, 0);
v_buildType_983_ = lean_ctor_get_uint8(v_toLeanConfig_980_, sizeof(void*)*13);
v_buildType_984_ = lean_ctor_get_uint8(v_toLeanConfig_982_, sizeof(void*)*13);
v___x_985_ = l_Lake_instOrdBuildType_ord(v_buildType_983_, v_buildType_984_);
if (v___x_985_ == 2)
{
return v_buildType_984_;
}
else
{
return v_buildType_983_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_Module_buildType___boxed(lean_object* v_self_986_){
_start:
{
uint8_t v_res_987_; lean_object* v_r_988_; 
v_res_987_ = l_Lake_Module_buildType(v_self_986_);
lean_dec_ref(v_self_986_);
v_r_988_ = lean_box(v_res_987_);
return v_r_988_;
}
}
LEAN_EXPORT uint8_t l_Lake_Module_backend(lean_object* v_self_989_){
_start:
{
lean_object* v_lib_990_; lean_object* v_config_991_; lean_object* v_toLeanConfig_992_; lean_object* v_pkg_993_; lean_object* v_config_994_; lean_object* v_toLeanConfig_995_; uint8_t v_backend_996_; uint8_t v_backend_997_; uint8_t v___x_998_; 
v_lib_990_ = lean_ctor_get(v_self_989_, 0);
v_config_991_ = lean_ctor_get(v_lib_990_, 2);
v_toLeanConfig_992_ = lean_ctor_get(v_config_991_, 0);
v_pkg_993_ = lean_ctor_get(v_lib_990_, 0);
v_config_994_ = lean_ctor_get(v_pkg_993_, 6);
v_toLeanConfig_995_ = lean_ctor_get(v_config_994_, 1);
v_backend_996_ = lean_ctor_get_uint8(v_toLeanConfig_992_, sizeof(void*)*13 + 1);
v_backend_997_ = lean_ctor_get_uint8(v_toLeanConfig_995_, sizeof(void*)*13 + 1);
v___x_998_ = l_Lake_Backend_orPreferLeft(v_backend_996_, v_backend_997_);
return v___x_998_;
}
}
LEAN_EXPORT lean_object* l_Lake_Module_backend___boxed(lean_object* v_self_999_){
_start:
{
uint8_t v_res_1000_; lean_object* v_r_1001_; 
v_res_1000_ = l_Lake_Module_backend(v_self_999_);
lean_dec_ref(v_self_999_);
v_r_1001_ = lean_box(v_res_1000_);
return v_r_1001_;
}
}
LEAN_EXPORT uint8_t l_Lake_Module_allowImportAll(lean_object* v_self_1002_){
_start:
{
lean_object* v_lib_1003_; lean_object* v_config_1004_; uint8_t v_allowImportAll_1005_; 
v_lib_1003_ = lean_ctor_get(v_self_1002_, 0);
v_config_1004_ = lean_ctor_get(v_lib_1003_, 2);
v_allowImportAll_1005_ = lean_ctor_get_uint8(v_config_1004_, sizeof(void*)*9 + 3);
if (v_allowImportAll_1005_ == 0)
{
lean_object* v_pkg_1006_; lean_object* v_config_1007_; uint8_t v_allowImportAll_1008_; 
v_pkg_1006_ = lean_ctor_get(v_lib_1003_, 0);
v_config_1007_ = lean_ctor_get(v_pkg_1006_, 6);
v_allowImportAll_1008_ = lean_ctor_get_uint8(v_config_1007_, sizeof(void*)*28 + 5);
return v_allowImportAll_1008_;
}
else
{
return v_allowImportAll_1005_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_Module_allowImportAll___boxed(lean_object* v_self_1009_){
_start:
{
uint8_t v_res_1010_; lean_object* v_r_1011_; 
v_res_1010_ = l_Lake_Module_allowImportAll(v_self_1009_);
lean_dec_ref(v_self_1009_);
v_r_1011_ = lean_box(v_res_1010_);
return v_r_1011_;
}
}
LEAN_EXPORT uint8_t l_Lake_Module_requiresModuleSystem(lean_object* v_self_1012_){
_start:
{
lean_object* v_lib_1013_; lean_object* v_config_1014_; lean_object* v_toLeanConfig_1015_; uint8_t v_requiresModuleSystem_1016_; 
v_lib_1013_ = lean_ctor_get(v_self_1012_, 0);
v_config_1014_ = lean_ctor_get(v_lib_1013_, 2);
v_toLeanConfig_1015_ = lean_ctor_get(v_config_1014_, 0);
v_requiresModuleSystem_1016_ = lean_ctor_get_uint8(v_toLeanConfig_1015_, sizeof(void*)*13 + 3);
if (v_requiresModuleSystem_1016_ == 0)
{
lean_object* v_pkg_1017_; lean_object* v_config_1018_; lean_object* v_toLeanConfig_1019_; uint8_t v_requiresModuleSystem_1020_; 
v_pkg_1017_ = lean_ctor_get(v_lib_1013_, 0);
v_config_1018_ = lean_ctor_get(v_pkg_1017_, 6);
v_toLeanConfig_1019_ = lean_ctor_get(v_config_1018_, 1);
v_requiresModuleSystem_1020_ = lean_ctor_get_uint8(v_toLeanConfig_1019_, sizeof(void*)*13 + 3);
return v_requiresModuleSystem_1020_;
}
else
{
return v_requiresModuleSystem_1016_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_Module_requiresModuleSystem___boxed(lean_object* v_self_1021_){
_start:
{
uint8_t v_res_1022_; lean_object* v_r_1023_; 
v_res_1022_ = l_Lake_Module_requiresModuleSystem(v_self_1021_);
lean_dec_ref(v_self_1021_);
v_r_1023_ = lean_box(v_res_1022_);
return v_r_1023_;
}
}
LEAN_EXPORT uint8_t l_Lake_Module_allowNonModules(lean_object* v_self_1024_){
_start:
{
lean_object* v_lib_1025_; lean_object* v_config_1026_; lean_object* v_toLeanConfig_1027_; uint8_t v_allowNonModules_1028_; 
v_lib_1025_ = lean_ctor_get(v_self_1024_, 0);
v_config_1026_ = lean_ctor_get(v_lib_1025_, 2);
v_toLeanConfig_1027_ = lean_ctor_get(v_config_1026_, 0);
v_allowNonModules_1028_ = lean_ctor_get_uint8(v_toLeanConfig_1027_, sizeof(void*)*13 + 4);
if (v_allowNonModules_1028_ == 0)
{
lean_object* v_pkg_1029_; lean_object* v_config_1030_; lean_object* v_toLeanConfig_1031_; uint8_t v_allowNonModules_1032_; 
v_pkg_1029_ = lean_ctor_get(v_lib_1025_, 0);
v_config_1030_ = lean_ctor_get(v_pkg_1029_, 6);
v_toLeanConfig_1031_ = lean_ctor_get(v_config_1030_, 1);
v_allowNonModules_1032_ = lean_ctor_get_uint8(v_toLeanConfig_1031_, sizeof(void*)*13 + 4);
return v_allowNonModules_1032_;
}
else
{
return v_allowNonModules_1028_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_Module_allowNonModules___boxed(lean_object* v_self_1033_){
_start:
{
uint8_t v_res_1034_; lean_object* v_r_1035_; 
v_res_1034_ = l_Lake_Module_allowNonModules(v_self_1033_);
lean_dec_ref(v_self_1033_);
v_r_1035_ = lean_box(v_res_1034_);
return v_r_1035_;
}
}
LEAN_EXPORT lean_object* l_Lake_Module_dynlibs(lean_object* v_self_1036_){
_start:
{
lean_object* v_lib_1037_; lean_object* v_pkg_1038_; lean_object* v_config_1039_; lean_object* v_toLeanConfig_1040_; lean_object* v_config_1041_; lean_object* v_toLeanConfig_1042_; lean_object* v_dynlibs_1043_; lean_object* v_dynlibs_1044_; lean_object* v___x_1045_; 
v_lib_1037_ = lean_ctor_get(v_self_1036_, 0);
lean_inc_ref(v_lib_1037_);
lean_dec_ref(v_self_1036_);
v_pkg_1038_ = lean_ctor_get(v_lib_1037_, 0);
v_config_1039_ = lean_ctor_get(v_pkg_1038_, 6);
v_toLeanConfig_1040_ = lean_ctor_get(v_config_1039_, 1);
lean_inc_ref(v_toLeanConfig_1040_);
v_config_1041_ = lean_ctor_get(v_lib_1037_, 2);
lean_inc(v_config_1041_);
lean_dec_ref(v_lib_1037_);
v_toLeanConfig_1042_ = lean_ctor_get(v_config_1041_, 0);
lean_inc_ref(v_toLeanConfig_1042_);
lean_dec(v_config_1041_);
v_dynlibs_1043_ = lean_ctor_get(v_toLeanConfig_1040_, 11);
lean_inc_ref(v_dynlibs_1043_);
lean_dec_ref(v_toLeanConfig_1040_);
v_dynlibs_1044_ = lean_ctor_get(v_toLeanConfig_1042_, 11);
lean_inc_ref(v_dynlibs_1044_);
lean_dec_ref(v_toLeanConfig_1042_);
v___x_1045_ = l_Array_append___redArg(v_dynlibs_1043_, v_dynlibs_1044_);
lean_dec_ref(v_dynlibs_1044_);
return v___x_1045_;
}
}
LEAN_EXPORT lean_object* l_Lake_Module_plugins(lean_object* v_self_1046_){
_start:
{
lean_object* v_lib_1047_; lean_object* v_pkg_1048_; lean_object* v_config_1049_; lean_object* v_toLeanConfig_1050_; lean_object* v_config_1051_; lean_object* v_toLeanConfig_1052_; lean_object* v_plugins_1053_; lean_object* v_plugins_1054_; lean_object* v___x_1055_; 
v_lib_1047_ = lean_ctor_get(v_self_1046_, 0);
lean_inc_ref(v_lib_1047_);
lean_dec_ref(v_self_1046_);
v_pkg_1048_ = lean_ctor_get(v_lib_1047_, 0);
v_config_1049_ = lean_ctor_get(v_pkg_1048_, 6);
v_toLeanConfig_1050_ = lean_ctor_get(v_config_1049_, 1);
lean_inc_ref(v_toLeanConfig_1050_);
v_config_1051_ = lean_ctor_get(v_lib_1047_, 2);
lean_inc(v_config_1051_);
lean_dec_ref(v_lib_1047_);
v_toLeanConfig_1052_ = lean_ctor_get(v_config_1051_, 0);
lean_inc_ref(v_toLeanConfig_1052_);
lean_dec(v_config_1051_);
v_plugins_1053_ = lean_ctor_get(v_toLeanConfig_1050_, 12);
lean_inc_ref(v_plugins_1053_);
lean_dec_ref(v_toLeanConfig_1050_);
v_plugins_1054_ = lean_ctor_get(v_toLeanConfig_1052_, 12);
lean_inc_ref(v_plugins_1054_);
lean_dec_ref(v_toLeanConfig_1052_);
v___x_1055_ = l_Array_append___redArg(v_plugins_1053_, v_plugins_1054_);
lean_dec_ref(v_plugins_1054_);
return v___x_1055_;
}
}
LEAN_EXPORT lean_object* l_Lake_Module_leanOptions(lean_object* v_self_1056_){
_start:
{
lean_object* v_lib_1057_; lean_object* v_pkg_1058_; lean_object* v_config_1059_; lean_object* v_toLeanConfig_1060_; lean_object* v_config_1061_; lean_object* v_toLeanConfig_1062_; uint8_t v_buildType_1063_; lean_object* v_leanOptions_1064_; uint8_t v_buildType_1065_; lean_object* v_leanOptions_1066_; uint8_t v___y_1068_; uint8_t v___x_1073_; 
v_lib_1057_ = lean_ctor_get(v_self_1056_, 0);
v_pkg_1058_ = lean_ctor_get(v_lib_1057_, 0);
v_config_1059_ = lean_ctor_get(v_pkg_1058_, 6);
v_toLeanConfig_1060_ = lean_ctor_get(v_config_1059_, 1);
v_config_1061_ = lean_ctor_get(v_lib_1057_, 2);
v_toLeanConfig_1062_ = lean_ctor_get(v_config_1061_, 0);
v_buildType_1063_ = lean_ctor_get_uint8(v_toLeanConfig_1060_, sizeof(void*)*13);
v_leanOptions_1064_ = lean_ctor_get(v_toLeanConfig_1060_, 0);
v_buildType_1065_ = lean_ctor_get_uint8(v_toLeanConfig_1062_, sizeof(void*)*13);
v_leanOptions_1066_ = lean_ctor_get(v_toLeanConfig_1062_, 0);
v___x_1073_ = l_Lake_instOrdBuildType_ord(v_buildType_1063_, v_buildType_1065_);
if (v___x_1073_ == 2)
{
v___y_1068_ = v_buildType_1065_;
goto v___jp_1067_;
}
else
{
v___y_1068_ = v_buildType_1063_;
goto v___jp_1067_;
}
v___jp_1067_:
{
lean_object* v___x_1069_; lean_object* v___x_1070_; lean_object* v___x_1071_; lean_object* v___x_1072_; 
v___x_1069_ = l_Lake_BuildType_leanOptions(v___y_1068_);
v___x_1070_ = l_Lean_LeanOptions_ofArray(v_leanOptions_1064_);
v___x_1071_ = l_Lean_LeanOptions_append(v___x_1069_, v___x_1070_);
v___x_1072_ = l_Lean_LeanOptions_appendArray(v___x_1071_, v_leanOptions_1066_);
return v___x_1072_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_Module_leanOptions___boxed(lean_object* v_self_1074_){
_start:
{
lean_object* v_res_1075_; 
v_res_1075_ = l_Lake_Module_leanOptions(v_self_1074_);
lean_dec_ref(v_self_1074_);
return v_res_1075_;
}
}
static lean_object* _init_l_Lake_Module_leanArgs___closed__0(void){
_start:
{
lean_object* v___x_1076_; 
v___x_1076_ = l_Lake_BuildType_leanArgs___redArg();
return v___x_1076_;
}
}
LEAN_EXPORT lean_object* l_Lake_Module_leanArgs(lean_object* v_self_1077_){
_start:
{
lean_object* v_lib_1078_; lean_object* v_pkg_1079_; lean_object* v_config_1080_; lean_object* v_toLeanConfig_1081_; lean_object* v_config_1082_; lean_object* v_toLeanConfig_1083_; uint8_t v_buildType_1084_; lean_object* v_moreLeanArgs_1085_; uint8_t v_buildType_1086_; lean_object* v_moreLeanArgs_1087_; uint8_t v___x_1092_; 
v_lib_1078_ = lean_ctor_get(v_self_1077_, 0);
v_pkg_1079_ = lean_ctor_get(v_lib_1078_, 0);
v_config_1080_ = lean_ctor_get(v_pkg_1079_, 6);
v_toLeanConfig_1081_ = lean_ctor_get(v_config_1080_, 1);
v_config_1082_ = lean_ctor_get(v_lib_1078_, 2);
v_toLeanConfig_1083_ = lean_ctor_get(v_config_1082_, 0);
v_buildType_1084_ = lean_ctor_get_uint8(v_toLeanConfig_1081_, sizeof(void*)*13);
v_moreLeanArgs_1085_ = lean_ctor_get(v_toLeanConfig_1081_, 1);
v_buildType_1086_ = lean_ctor_get_uint8(v_toLeanConfig_1083_, sizeof(void*)*13);
v_moreLeanArgs_1087_ = lean_ctor_get(v_toLeanConfig_1083_, 1);
v___x_1092_ = l_Lake_instOrdBuildType_ord(v_buildType_1084_, v_buildType_1086_);
if (v___x_1092_ == 2)
{
goto v___jp_1088_;
}
else
{
goto v___jp_1088_;
}
v___jp_1088_:
{
lean_object* v___x_1089_; lean_object* v___x_1090_; lean_object* v___x_1091_; 
v___x_1089_ = lean_obj_once(&l_Lake_Module_leanArgs___closed__0, &l_Lake_Module_leanArgs___closed__0_once, _init_l_Lake_Module_leanArgs___closed__0);
v___x_1090_ = l_Array_append___redArg(v___x_1089_, v_moreLeanArgs_1085_);
v___x_1091_ = l_Array_append___redArg(v___x_1090_, v_moreLeanArgs_1087_);
return v___x_1091_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_Module_leanArgs___boxed(lean_object* v_self_1093_){
_start:
{
lean_object* v_res_1094_; 
v_res_1094_ = l_Lake_Module_leanArgs(v_self_1093_);
lean_dec_ref(v_self_1093_);
return v_res_1094_;
}
}
LEAN_EXPORT lean_object* l_Lake_Module_weakLeanArgs(lean_object* v_self_1095_){
_start:
{
lean_object* v_lib_1096_; lean_object* v_pkg_1097_; lean_object* v_config_1098_; lean_object* v_toLeanConfig_1099_; lean_object* v_config_1100_; lean_object* v_toLeanConfig_1101_; lean_object* v_weakLeanArgs_1102_; lean_object* v_weakLeanArgs_1103_; lean_object* v___x_1104_; 
v_lib_1096_ = lean_ctor_get(v_self_1095_, 0);
lean_inc_ref(v_lib_1096_);
lean_dec_ref(v_self_1095_);
v_pkg_1097_ = lean_ctor_get(v_lib_1096_, 0);
v_config_1098_ = lean_ctor_get(v_pkg_1097_, 6);
v_toLeanConfig_1099_ = lean_ctor_get(v_config_1098_, 1);
lean_inc_ref(v_toLeanConfig_1099_);
v_config_1100_ = lean_ctor_get(v_lib_1096_, 2);
lean_inc(v_config_1100_);
lean_dec_ref(v_lib_1096_);
v_toLeanConfig_1101_ = lean_ctor_get(v_config_1100_, 0);
lean_inc_ref(v_toLeanConfig_1101_);
lean_dec(v_config_1100_);
v_weakLeanArgs_1102_ = lean_ctor_get(v_toLeanConfig_1099_, 2);
lean_inc_ref(v_weakLeanArgs_1102_);
lean_dec_ref(v_toLeanConfig_1099_);
v_weakLeanArgs_1103_ = lean_ctor_get(v_toLeanConfig_1101_, 2);
lean_inc_ref(v_weakLeanArgs_1103_);
lean_dec_ref(v_toLeanConfig_1101_);
v___x_1104_ = l_Array_append___redArg(v_weakLeanArgs_1102_, v_weakLeanArgs_1103_);
lean_dec_ref(v_weakLeanArgs_1103_);
return v___x_1104_;
}
}
LEAN_EXPORT lean_object* l_Lake_Module_leancArgs(lean_object* v_self_1105_){
_start:
{
lean_object* v_lib_1106_; lean_object* v_pkg_1107_; lean_object* v_config_1108_; lean_object* v_toLeanConfig_1109_; lean_object* v_config_1110_; lean_object* v_toLeanConfig_1111_; uint8_t v_buildType_1112_; lean_object* v_moreLeancArgs_1113_; uint8_t v_buildType_1114_; lean_object* v_moreLeancArgs_1115_; uint8_t v___y_1117_; uint8_t v___x_1121_; 
v_lib_1106_ = lean_ctor_get(v_self_1105_, 0);
v_pkg_1107_ = lean_ctor_get(v_lib_1106_, 0);
v_config_1108_ = lean_ctor_get(v_pkg_1107_, 6);
v_toLeanConfig_1109_ = lean_ctor_get(v_config_1108_, 1);
v_config_1110_ = lean_ctor_get(v_lib_1106_, 2);
v_toLeanConfig_1111_ = lean_ctor_get(v_config_1110_, 0);
v_buildType_1112_ = lean_ctor_get_uint8(v_toLeanConfig_1109_, sizeof(void*)*13);
v_moreLeancArgs_1113_ = lean_ctor_get(v_toLeanConfig_1109_, 3);
v_buildType_1114_ = lean_ctor_get_uint8(v_toLeanConfig_1111_, sizeof(void*)*13);
v_moreLeancArgs_1115_ = lean_ctor_get(v_toLeanConfig_1111_, 3);
v___x_1121_ = l_Lake_instOrdBuildType_ord(v_buildType_1112_, v_buildType_1114_);
if (v___x_1121_ == 2)
{
v___y_1117_ = v_buildType_1114_;
goto v___jp_1116_;
}
else
{
v___y_1117_ = v_buildType_1112_;
goto v___jp_1116_;
}
v___jp_1116_:
{
lean_object* v___x_1118_; lean_object* v___x_1119_; lean_object* v___x_1120_; 
v___x_1118_ = l_Lake_BuildType_leancArgs(v___y_1117_);
v___x_1119_ = l_Array_append___redArg(v___x_1118_, v_moreLeancArgs_1113_);
v___x_1120_ = l_Array_append___redArg(v___x_1119_, v_moreLeancArgs_1115_);
return v___x_1120_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_Module_leancArgs___boxed(lean_object* v_self_1122_){
_start:
{
lean_object* v_res_1123_; 
v_res_1123_ = l_Lake_Module_leancArgs(v_self_1122_);
lean_dec_ref(v_self_1122_);
return v_res_1123_;
}
}
LEAN_EXPORT lean_object* l_Lake_Module_weakLeancArgs(lean_object* v_self_1124_){
_start:
{
lean_object* v_lib_1125_; lean_object* v_pkg_1126_; lean_object* v_config_1127_; lean_object* v_toLeanConfig_1128_; lean_object* v_config_1129_; lean_object* v_toLeanConfig_1130_; lean_object* v_weakLeancArgs_1131_; lean_object* v_weakLeancArgs_1132_; lean_object* v___x_1133_; 
v_lib_1125_ = lean_ctor_get(v_self_1124_, 0);
lean_inc_ref(v_lib_1125_);
lean_dec_ref(v_self_1124_);
v_pkg_1126_ = lean_ctor_get(v_lib_1125_, 0);
v_config_1127_ = lean_ctor_get(v_pkg_1126_, 6);
v_toLeanConfig_1128_ = lean_ctor_get(v_config_1127_, 1);
lean_inc_ref(v_toLeanConfig_1128_);
v_config_1129_ = lean_ctor_get(v_lib_1125_, 2);
lean_inc(v_config_1129_);
lean_dec_ref(v_lib_1125_);
v_toLeanConfig_1130_ = lean_ctor_get(v_config_1129_, 0);
lean_inc_ref(v_toLeanConfig_1130_);
lean_dec(v_config_1129_);
v_weakLeancArgs_1131_ = lean_ctor_get(v_toLeanConfig_1128_, 5);
lean_inc_ref(v_weakLeancArgs_1131_);
lean_dec_ref(v_toLeanConfig_1128_);
v_weakLeancArgs_1132_ = lean_ctor_get(v_toLeanConfig_1130_, 5);
lean_inc_ref(v_weakLeancArgs_1132_);
lean_dec_ref(v_toLeanConfig_1130_);
v___x_1133_ = l_Array_append___redArg(v_weakLeancArgs_1131_, v_weakLeancArgs_1132_);
lean_dec_ref(v_weakLeancArgs_1132_);
return v___x_1133_;
}
}
LEAN_EXPORT lean_object* l_Lake_Module_linkArgs(lean_object* v_self_1134_){
_start:
{
lean_object* v_lib_1135_; lean_object* v_pkg_1136_; lean_object* v_config_1137_; lean_object* v_toLeanConfig_1138_; lean_object* v_config_1139_; lean_object* v_toLeanConfig_1140_; lean_object* v_moreLinkArgs_1141_; lean_object* v_moreLinkArgs_1142_; lean_object* v___x_1143_; 
v_lib_1135_ = lean_ctor_get(v_self_1134_, 0);
lean_inc_ref(v_lib_1135_);
lean_dec_ref(v_self_1134_);
v_pkg_1136_ = lean_ctor_get(v_lib_1135_, 0);
v_config_1137_ = lean_ctor_get(v_pkg_1136_, 6);
v_toLeanConfig_1138_ = lean_ctor_get(v_config_1137_, 1);
lean_inc_ref(v_toLeanConfig_1138_);
v_config_1139_ = lean_ctor_get(v_lib_1135_, 2);
lean_inc(v_config_1139_);
lean_dec_ref(v_lib_1135_);
v_toLeanConfig_1140_ = lean_ctor_get(v_config_1139_, 0);
lean_inc_ref(v_toLeanConfig_1140_);
lean_dec(v_config_1139_);
v_moreLinkArgs_1141_ = lean_ctor_get(v_toLeanConfig_1138_, 8);
lean_inc_ref(v_moreLinkArgs_1141_);
lean_dec_ref(v_toLeanConfig_1138_);
v_moreLinkArgs_1142_ = lean_ctor_get(v_toLeanConfig_1140_, 8);
lean_inc_ref(v_moreLinkArgs_1142_);
lean_dec_ref(v_toLeanConfig_1140_);
v___x_1143_ = l_Array_append___redArg(v_moreLinkArgs_1141_, v_moreLinkArgs_1142_);
lean_dec_ref(v_moreLinkArgs_1142_);
return v___x_1143_;
}
}
LEAN_EXPORT lean_object* l_Lake_Module_weakLinkArgs(lean_object* v_self_1144_){
_start:
{
lean_object* v_lib_1145_; lean_object* v_pkg_1146_; lean_object* v_config_1147_; lean_object* v_toLeanConfig_1148_; lean_object* v_config_1149_; lean_object* v_toLeanConfig_1150_; lean_object* v_weakLinkArgs_1151_; lean_object* v_weakLinkArgs_1152_; lean_object* v___x_1153_; 
v_lib_1145_ = lean_ctor_get(v_self_1144_, 0);
lean_inc_ref(v_lib_1145_);
lean_dec_ref(v_self_1144_);
v_pkg_1146_ = lean_ctor_get(v_lib_1145_, 0);
v_config_1147_ = lean_ctor_get(v_pkg_1146_, 6);
v_toLeanConfig_1148_ = lean_ctor_get(v_config_1147_, 1);
lean_inc_ref(v_toLeanConfig_1148_);
v_config_1149_ = lean_ctor_get(v_lib_1145_, 2);
lean_inc(v_config_1149_);
lean_dec_ref(v_lib_1145_);
v_toLeanConfig_1150_ = lean_ctor_get(v_config_1149_, 0);
lean_inc_ref(v_toLeanConfig_1150_);
lean_dec(v_config_1149_);
v_weakLinkArgs_1151_ = lean_ctor_get(v_toLeanConfig_1148_, 9);
lean_inc_ref(v_weakLinkArgs_1151_);
lean_dec_ref(v_toLeanConfig_1148_);
v_weakLinkArgs_1152_ = lean_ctor_get(v_toLeanConfig_1150_, 9);
lean_inc_ref(v_weakLinkArgs_1152_);
lean_dec_ref(v_toLeanConfig_1150_);
v___x_1153_ = l_Array_append___redArg(v_weakLinkArgs_1151_, v_weakLinkArgs_1152_);
lean_dec_ref(v_weakLinkArgs_1152_);
return v___x_1153_;
}
}
LEAN_EXPORT lean_object* l_Lake_Module_leanIncludeDir_x3f(lean_object* v_self_1155_){
_start:
{
lean_object* v_lib_1156_; lean_object* v_pkg_1157_; lean_object* v_config_1158_; uint8_t v_bootstrap_1159_; 
v_lib_1156_ = lean_ctor_get(v_self_1155_, 0);
lean_inc_ref(v_lib_1156_);
lean_dec_ref(v_self_1155_);
v_pkg_1157_ = lean_ctor_get(v_lib_1156_, 0);
lean_inc_ref(v_pkg_1157_);
lean_dec_ref(v_lib_1156_);
v_config_1158_ = lean_ctor_get(v_pkg_1157_, 6);
lean_inc_ref(v_config_1158_);
v_bootstrap_1159_ = lean_ctor_get_uint8(v_config_1158_, sizeof(void*)*28);
if (v_bootstrap_1159_ == 0)
{
lean_object* v___x_1160_; 
lean_dec_ref(v_config_1158_);
lean_dec_ref(v_pkg_1157_);
v___x_1160_ = lean_box(0);
return v___x_1160_;
}
else
{
lean_object* v_dir_1161_; lean_object* v_buildDir_1162_; lean_object* v___x_1163_; lean_object* v___x_1164_; lean_object* v___x_1165_; lean_object* v___x_1166_; lean_object* v___x_1167_; 
v_dir_1161_ = lean_ctor_get(v_pkg_1157_, 4);
lean_inc_ref(v_dir_1161_);
lean_dec_ref(v_pkg_1157_);
v_buildDir_1162_ = lean_ctor_get(v_config_1158_, 5);
lean_inc_ref(v_buildDir_1162_);
lean_dec_ref(v_config_1158_);
v___x_1163_ = l_System_FilePath_normalize(v_buildDir_1162_);
v___x_1164_ = l_Lake_joinRelative(v_dir_1161_, v___x_1163_);
v___x_1165_ = ((lean_object*)(l_Lake_Module_leanIncludeDir_x3f___closed__0));
v___x_1166_ = l_Lake_joinRelative(v___x_1164_, v___x_1165_);
v___x_1167_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1167_, 0, v___x_1166_);
return v___x_1167_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_Module_platformIndependent(lean_object* v_self_1168_){
_start:
{
lean_object* v_lib_1169_; lean_object* v_config_1170_; lean_object* v_toLeanConfig_1171_; lean_object* v_platformIndependent_1172_; 
v_lib_1169_ = lean_ctor_get(v_self_1168_, 0);
v_config_1170_ = lean_ctor_get(v_lib_1169_, 2);
v_toLeanConfig_1171_ = lean_ctor_get(v_config_1170_, 0);
v_platformIndependent_1172_ = lean_ctor_get(v_toLeanConfig_1171_, 10);
if (lean_obj_tag(v_platformIndependent_1172_) == 0)
{
lean_object* v_pkg_1173_; lean_object* v_config_1174_; lean_object* v_toLeanConfig_1175_; lean_object* v_platformIndependent_1176_; 
v_pkg_1173_ = lean_ctor_get(v_lib_1169_, 0);
v_config_1174_ = lean_ctor_get(v_pkg_1173_, 6);
v_toLeanConfig_1175_ = lean_ctor_get(v_config_1174_, 1);
v_platformIndependent_1176_ = lean_ctor_get(v_toLeanConfig_1175_, 10);
lean_inc(v_platformIndependent_1176_);
return v_platformIndependent_1176_;
}
else
{
lean_inc_ref(v_platformIndependent_1172_);
return v_platformIndependent_1172_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_Module_platformIndependent___boxed(lean_object* v_self_1177_){
_start:
{
lean_object* v_res_1178_; 
v_res_1178_ = l_Lake_Module_platformIndependent(v_self_1177_);
lean_dec_ref(v_self_1177_);
return v_res_1178_;
}
}
LEAN_EXPORT uint8_t l_Lake_Module_shouldPrecompileImports(lean_object* v_self_1179_){
_start:
{
lean_object* v_lib_1180_; lean_object* v_pkg_1181_; lean_object* v_config_1182_; uint8_t v_precompileModules_1183_; 
v_lib_1180_ = lean_ctor_get(v_self_1179_, 0);
v_pkg_1181_ = lean_ctor_get(v_lib_1180_, 0);
v_config_1182_ = lean_ctor_get(v_pkg_1181_, 6);
v_precompileModules_1183_ = lean_ctor_get_uint8(v_config_1182_, sizeof(void*)*28 + 1);
if (v_precompileModules_1183_ == 0)
{
lean_object* v_config_1184_; uint8_t v_precompileModules_1185_; 
v_config_1184_ = lean_ctor_get(v_lib_1180_, 2);
v_precompileModules_1185_ = lean_ctor_get_uint8(v_config_1184_, sizeof(void*)*9 + 2);
if (v_precompileModules_1185_ == 0)
{
lean_object* v_toLeanConfig_1186_; uint8_t v_precompileImports_1187_; 
v_toLeanConfig_1186_ = lean_ctor_get(v_config_1182_, 1);
v_precompileImports_1187_ = lean_ctor_get_uint8(v_toLeanConfig_1186_, sizeof(void*)*13 + 2);
if (v_precompileImports_1187_ == 0)
{
lean_object* v_toLeanConfig_1188_; uint8_t v_precompileImports_1189_; 
v_toLeanConfig_1188_ = lean_ctor_get(v_config_1184_, 0);
v_precompileImports_1189_ = lean_ctor_get_uint8(v_toLeanConfig_1188_, sizeof(void*)*13 + 2);
return v_precompileImports_1189_;
}
else
{
return v_precompileImports_1187_;
}
}
else
{
return v_precompileModules_1185_;
}
}
else
{
return v_precompileModules_1183_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_Module_shouldPrecompileImports___boxed(lean_object* v_self_1190_){
_start:
{
uint8_t v_res_1191_; lean_object* v_r_1192_; 
v_res_1191_ = l_Lake_Module_shouldPrecompileImports(v_self_1190_);
lean_dec_ref(v_self_1190_);
v_r_1192_ = lean_box(v_res_1191_);
return v_r_1192_;
}
}
LEAN_EXPORT uint8_t l_Lake_Module_shouldPrecompile(lean_object* v_self_1193_){
_start:
{
lean_object* v_lib_1194_; lean_object* v_pkg_1195_; lean_object* v_config_1196_; uint8_t v_precompileModules_1197_; 
v_lib_1194_ = lean_ctor_get(v_self_1193_, 0);
v_pkg_1195_ = lean_ctor_get(v_lib_1194_, 0);
v_config_1196_ = lean_ctor_get(v_pkg_1195_, 6);
v_precompileModules_1197_ = lean_ctor_get_uint8(v_config_1196_, sizeof(void*)*28 + 1);
if (v_precompileModules_1197_ == 0)
{
lean_object* v_config_1198_; uint8_t v_precompileModules_1199_; 
v_config_1198_ = lean_ctor_get(v_lib_1194_, 2);
v_precompileModules_1199_ = lean_ctor_get_uint8(v_config_1198_, sizeof(void*)*9 + 2);
return v_precompileModules_1199_;
}
else
{
return v_precompileModules_1197_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_Module_shouldPrecompile___boxed(lean_object* v_self_1200_){
_start:
{
uint8_t v_res_1201_; lean_object* v_r_1202_; 
v_res_1201_ = l_Lake_Module_shouldPrecompile(v_self_1200_);
lean_dec_ref(v_self_1200_);
v_r_1202_ = lean_box(v_res_1201_);
return v_r_1202_;
}
}
LEAN_EXPORT lean_object* l_Lake_Module_nativeFacets(lean_object* v_self_1203_, uint8_t v_shouldExport_1204_){
_start:
{
lean_object* v_lib_1205_; lean_object* v_config_1206_; lean_object* v_nativeFacets_1207_; lean_object* v___x_1208_; lean_object* v___x_1209_; 
v_lib_1205_ = lean_ctor_get(v_self_1203_, 0);
lean_inc_ref(v_lib_1205_);
lean_dec_ref(v_self_1203_);
v_config_1206_ = lean_ctor_get(v_lib_1205_, 2);
lean_inc(v_config_1206_);
lean_dec_ref(v_lib_1205_);
v_nativeFacets_1207_ = lean_ctor_get(v_config_1206_, 8);
lean_inc_ref(v_nativeFacets_1207_);
lean_dec(v_config_1206_);
v___x_1208_ = lean_box(v_shouldExport_1204_);
v___x_1209_ = lean_apply_1(v_nativeFacets_1207_, v___x_1208_);
return v___x_1209_;
}
}
LEAN_EXPORT lean_object* l_Lake_Module_nativeFacets___boxed(lean_object* v_self_1210_, lean_object* v_shouldExport_1211_){
_start:
{
uint8_t v_shouldExport_boxed_1212_; lean_object* v_res_1213_; 
v_shouldExport_boxed_1212_ = lean_unbox(v_shouldExport_1211_);
v_res_1213_ = l_Lake_Module_nativeFacets(v_self_1210_, v_shouldExport_boxed_1212_);
return v_res_1213_;
}
}
lean_object* runtime_initialize_Lake_Config_LeanLib(uint8_t builtin);
void lean_initialize();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lake_Config_Module(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize();
res = runtime_initialize_Lake_Config_LeanLib(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lake_ModuleSet_empty = _init_l_Lake_ModuleSet_empty();
lean_mark_persistent(l_Lake_ModuleSet_empty);
l_Lake_OrdModuleSet_empty = _init_l_Lake_OrdModuleSet_empty();
lean_mark_persistent(l_Lake_OrdModuleSet_empty);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lake_Config_Module(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lake_Config_LeanLib(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lake_Config_Module(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lake_Config_LeanLib(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Config_Module(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lake_Config_Module(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lake_Config_Module(builtin);
}
#ifdef __cplusplus
}
#endif

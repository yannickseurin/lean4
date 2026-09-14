// Lean compiler output
// Module: Lake.Config.LeanExe
// Imports: public import Lake.Config.Module
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
lean_object* l_Id_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Lean_Name_mkStr1(lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__2___boxed(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lake_Package_findTargetDecl_x3f(lean_object*, lean_object*);
extern lean_object* l_Lake_LeanExe_keyword;
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
extern lean_object* l_Lake_LeanLib_leanArtsFacet;
lean_object* l_Id_instMonad___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_System_FilePath_withExtension(lean_object*, lean_object*);
lean_object* l_System_FilePath_normalize(lean_object*);
lean_object* l_Lake_joinRelative(lean_object*, lean_object*);
lean_object* l_Lean_modToFilePath(lean_object*, lean_object*, lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l_Lake_LeanLib_findModuleBySrc_x3f(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* l_Id_instMonad___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
extern uint8_t l_System_Platform_isWindows;
extern lean_object* l_System_FilePath_exeExtension;
lean_object* l_System_FilePath_addExtension(lean_object*, lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* l_Lake_Package_findModule_x3f(lean_object*, lean_object*);
uint8_t lean_strict_and(uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lake_Package_leanExes___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Package_leanExes___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lake_Package_leanExes___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lake_Package_leanExes___closed__0 = (const lean_object*)&l_Lake_Package_leanExes___closed__0_value;
static const lean_closure_object l_Lake_Package_leanExes___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_Package_leanExes___closed__1 = (const lean_object*)&l_Lake_Package_leanExes___closed__1_value;
static const lean_closure_object l_Lake_Package_leanExes___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_Package_leanExes___closed__2 = (const lean_object*)&l_Lake_Package_leanExes___closed__2_value;
static const lean_closure_object l_Lake_Package_leanExes___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_Package_leanExes___closed__3 = (const lean_object*)&l_Lake_Package_leanExes___closed__3_value;
static const lean_closure_object l_Lake_Package_leanExes___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__3, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_Package_leanExes___closed__4 = (const lean_object*)&l_Lake_Package_leanExes___closed__4_value;
static const lean_closure_object l_Lake_Package_leanExes___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__4___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_Package_leanExes___closed__5 = (const lean_object*)&l_Lake_Package_leanExes___closed__5_value;
static const lean_closure_object l_Lake_Package_leanExes___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__5___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_Package_leanExes___closed__6 = (const lean_object*)&l_Lake_Package_leanExes___closed__6_value;
static const lean_closure_object l_Lake_Package_leanExes___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__6, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_Package_leanExes___closed__7 = (const lean_object*)&l_Lake_Package_leanExes___closed__7_value;
static const lean_ctor_object l_Lake_Package_leanExes___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_Package_leanExes___closed__1_value),((lean_object*)&l_Lake_Package_leanExes___closed__2_value)}};
static const lean_object* l_Lake_Package_leanExes___closed__8 = (const lean_object*)&l_Lake_Package_leanExes___closed__8_value;
static const lean_ctor_object l_Lake_Package_leanExes___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_Package_leanExes___closed__8_value),((lean_object*)&l_Lake_Package_leanExes___closed__3_value),((lean_object*)&l_Lake_Package_leanExes___closed__4_value),((lean_object*)&l_Lake_Package_leanExes___closed__5_value),((lean_object*)&l_Lake_Package_leanExes___closed__6_value)}};
static const lean_object* l_Lake_Package_leanExes___closed__9 = (const lean_object*)&l_Lake_Package_leanExes___closed__9_value;
static const lean_ctor_object l_Lake_Package_leanExes___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_Package_leanExes___closed__9_value),((lean_object*)&l_Lake_Package_leanExes___closed__7_value)}};
static const lean_object* l_Lake_Package_leanExes___closed__10 = (const lean_object*)&l_Lake_Package_leanExes___closed__10_value;
LEAN_EXPORT lean_object* l_Lake_Package_leanExes(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Package_findLeanExe_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Package_findLeanExe_x3f___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_LeanExeConfig_toLeanLibConfig_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_LeanExeConfig_toLeanLibConfig_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lake_LeanExeConfig_toLeanLibConfig___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lake_LeanExeConfig_toLeanLibConfig___redArg___closed__0 = (const lean_object*)&l_Lake_LeanExeConfig_toLeanLibConfig___redArg___closed__0_value;
static lean_once_cell_t l_Lake_LeanExeConfig_toLeanLibConfig___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lake_LeanExeConfig_toLeanLibConfig___redArg___closed__1;
static lean_once_cell_t l_Lake_LeanExeConfig_toLeanLibConfig___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_LeanExeConfig_toLeanLibConfig___redArg___closed__2;
static lean_once_cell_t l_Lake_LeanExeConfig_toLeanLibConfig___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_LeanExeConfig_toLeanLibConfig___redArg___closed__3;
static lean_once_cell_t l_Lake_LeanExeConfig_toLeanLibConfig___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_LeanExeConfig_toLeanLibConfig___redArg___closed__4;
static lean_once_cell_t l_Lake_LeanExeConfig_toLeanLibConfig___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_LeanExeConfig_toLeanLibConfig___redArg___closed__5;
LEAN_EXPORT lean_object* l_Lake_LeanExeConfig_toLeanLibConfig___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanExeConfig_toLeanLibConfig___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanExeConfig_toLeanLibConfig(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanExeConfig_toLeanLibConfig___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanExe_config(lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanExe_config___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanExe_toLeanLib(lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanExe_root(lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanExe_isRoot_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanExe_isRoot_x3f___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lake_LeanExe_isRootSrc_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lake_LeanExe_isRootSrc_x3f___closed__0 = (const lean_object*)&l_Lake_LeanExe_isRootSrc_x3f___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_LeanExe_isRootSrc_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanExe_fileName(lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanExe_file(lean_object*);
LEAN_EXPORT uint8_t l_Lake_LeanExe_supportInterpreter(lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanExe_supportInterpreter___boxed(lean_object*);
static const lean_array_object l_Lake_LeanExe_exeOnlyLinkArgs___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lake_LeanExe_exeOnlyLinkArgs___closed__0 = (const lean_object*)&l_Lake_LeanExe_exeOnlyLinkArgs___closed__0_value;
static const lean_string_object l_Lake_LeanExe_exeOnlyLinkArgs___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "-rdynamic"};
static const lean_object* l_Lake_LeanExe_exeOnlyLinkArgs___closed__1 = (const lean_object*)&l_Lake_LeanExe_exeOnlyLinkArgs___closed__1_value;
static const lean_array_object l_Lake_LeanExe_exeOnlyLinkArgs___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 246}, .m_size = 1, .m_capacity = 1, .m_data = {((lean_object*)&l_Lake_LeanExe_exeOnlyLinkArgs___closed__1_value)}};
static const lean_object* l_Lake_LeanExe_exeOnlyLinkArgs___closed__2 = (const lean_object*)&l_Lake_LeanExe_exeOnlyLinkArgs___closed__2_value;
static const lean_string_object l_Lake_LeanExe_exeOnlyLinkArgs___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "-Wl,--whole-archive"};
static const lean_object* l_Lake_LeanExe_exeOnlyLinkArgs___closed__3 = (const lean_object*)&l_Lake_LeanExe_exeOnlyLinkArgs___closed__3_value;
static const lean_string_object l_Lake_LeanExe_exeOnlyLinkArgs___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "-lleanmanifest"};
static const lean_object* l_Lake_LeanExe_exeOnlyLinkArgs___closed__4 = (const lean_object*)&l_Lake_LeanExe_exeOnlyLinkArgs___closed__4_value;
static const lean_string_object l_Lake_LeanExe_exeOnlyLinkArgs___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "-Wl,--no-whole-archive"};
static const lean_object* l_Lake_LeanExe_exeOnlyLinkArgs___closed__5 = (const lean_object*)&l_Lake_LeanExe_exeOnlyLinkArgs___closed__5_value;
static const lean_array_object l_Lake_LeanExe_exeOnlyLinkArgs___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 246}, .m_size = 3, .m_capacity = 3, .m_data = {((lean_object*)&l_Lake_LeanExe_exeOnlyLinkArgs___closed__3_value),((lean_object*)&l_Lake_LeanExe_exeOnlyLinkArgs___closed__4_value),((lean_object*)&l_Lake_LeanExe_exeOnlyLinkArgs___closed__5_value)}};
static const lean_object* l_Lake_LeanExe_exeOnlyLinkArgs___closed__6 = (const lean_object*)&l_Lake_LeanExe_exeOnlyLinkArgs___closed__6_value;
LEAN_EXPORT lean_object* l_Lake_LeanExe_exeOnlyLinkArgs(lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanExe_exeOnlyLinkArgs___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanExe_linkArgs(lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanExe_linkArgs___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lake_LeanExe_sharedLean(lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanExe_sharedLean___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanExe_weakLinkArgs(lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanExe_moreLinkObjs(lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanExe_moreLinkObjs___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanExe_moreLinkLibs(lean_object*);
LEAN_EXPORT lean_object* l_Lake_LeanExe_moreLinkLibs___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lake_Package_findTargetModule_x3f_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lake_Package_findTargetModule_x3f_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Package_findTargetModule_x3f_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Package_findTargetModule_x3f_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Package_findTargetModule_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lake_Package_findTargetModule_x3f_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lake_Package_findTargetModule_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lake_Package_findModuleBySrc_x3f_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lake_Package_findModuleBySrc_x3f_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Package_findModuleBySrc_x3f_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "lean_lib"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Package_findModuleBySrc_x3f_spec__2___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Package_findModuleBySrc_x3f_spec__2___closed__0_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Package_findModuleBySrc_x3f_spec__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Package_findModuleBySrc_x3f_spec__2___closed__0_value),LEAN_SCALAR_PTR_LITERAL(99, 123, 8, 14, 20, 41, 164, 170)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Package_findModuleBySrc_x3f_spec__2___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Package_findModuleBySrc_x3f_spec__2___closed__1_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Package_findModuleBySrc_x3f_spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Package_findModuleBySrc_x3f_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lake_Package_findModuleBySrc_x3f_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lake_Package_findModuleBySrc_x3f_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Package_findModuleBySrc_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lake_Package_findModuleBySrc_x3f_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lake_Package_findModuleBySrc_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lake_Package_findModuleBySrc_x3f_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lake_Package_findModuleBySrc_x3f_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Package_leanExes___lam__0(lean_object* v___x_1_, lean_object* v_self_2_, lean_object* v_x1_3_, lean_object* v_x2_4_){
_start:
{
lean_object* v_name_5_; lean_object* v_kind_6_; lean_object* v_config_7_; uint8_t v___x_8_; 
v_name_5_ = lean_ctor_get(v_x2_4_, 1);
v_kind_6_ = lean_ctor_get(v_x2_4_, 2);
v_config_7_ = lean_ctor_get(v_x2_4_, 3);
v___x_8_ = lean_name_eq(v_kind_6_, v___x_1_);
if (v___x_8_ == 0)
{
lean_dec_ref(v_self_2_);
return v_x1_3_;
}
else
{
lean_object* v___x_9_; lean_object* v___x_10_; 
lean_inc(v_config_7_);
lean_inc(v_name_5_);
v___x_9_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_9_, 0, v_self_2_);
lean_ctor_set(v___x_9_, 1, v_name_5_);
lean_ctor_set(v___x_9_, 2, v_config_7_);
v___x_10_ = lean_array_push(v_x1_3_, v___x_9_);
return v___x_10_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_Package_leanExes___lam__0___boxed(lean_object* v___x_11_, lean_object* v_self_12_, lean_object* v_x1_13_, lean_object* v_x2_14_){
_start:
{
lean_object* v_res_15_; 
v_res_15_ = l_Lake_Package_leanExes___lam__0(v___x_11_, v_self_12_, v_x1_13_, v_x2_14_);
lean_dec_ref(v_x2_14_);
lean_dec(v___x_11_);
return v_res_15_;
}
}
LEAN_EXPORT lean_object* l_Lake_Package_leanExes(lean_object* v_self_37_){
_start:
{
lean_object* v_targetDecls_38_; lean_object* v___x_39_; lean_object* v___x_40_; lean_object* v___x_41_; lean_object* v___x_42_; uint8_t v___x_43_; 
v_targetDecls_38_ = lean_ctor_get(v_self_37_, 15);
lean_inc_ref(v_targetDecls_38_);
v___x_39_ = lean_unsigned_to_nat(0u);
v___x_40_ = ((lean_object*)(l_Lake_Package_leanExes___closed__0));
v___x_41_ = lean_array_get_size(v_targetDecls_38_);
v___x_42_ = ((lean_object*)(l_Lake_Package_leanExes___closed__10));
v___x_43_ = lean_nat_dec_lt(v___x_39_, v___x_41_);
if (v___x_43_ == 0)
{
lean_dec_ref(v_targetDecls_38_);
lean_dec_ref(v_self_37_);
return v___x_40_;
}
else
{
lean_object* v___x_44_; lean_object* v___f_45_; size_t v___x_46_; size_t v___x_47_; lean_object* v___x_48_; 
v___x_44_ = l_Lake_LeanExe_keyword;
v___f_45_ = lean_alloc_closure((void*)(l_Lake_Package_leanExes___lam__0___boxed), 4, 2);
lean_closure_set(v___f_45_, 0, v___x_44_);
lean_closure_set(v___f_45_, 1, v_self_37_);
v___x_46_ = ((size_t)0ULL);
v___x_47_ = lean_usize_of_nat(v___x_41_);
v___x_48_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_42_, v___f_45_, v_targetDecls_38_, v___x_46_, v___x_47_, v___x_40_);
return v___x_48_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_Package_findLeanExe_x3f(lean_object* v_name_49_, lean_object* v_self_50_){
_start:
{
lean_object* v___x_51_; 
v___x_51_ = l_Lake_Package_findTargetDecl_x3f(v_name_49_, v_self_50_);
if (lean_obj_tag(v___x_51_) == 0)
{
lean_object* v___x_52_; 
lean_dec_ref(v_self_50_);
v___x_52_ = lean_box(0);
return v___x_52_;
}
else
{
lean_object* v_val_53_; lean_object* v___x_55_; uint8_t v_isShared_56_; uint8_t v_isSharedCheck_67_; 
v_val_53_ = lean_ctor_get(v___x_51_, 0);
v_isSharedCheck_67_ = !lean_is_exclusive(v___x_51_);
if (v_isSharedCheck_67_ == 0)
{
v___x_55_ = v___x_51_;
v_isShared_56_ = v_isSharedCheck_67_;
goto v_resetjp_54_;
}
else
{
lean_inc(v_val_53_);
lean_dec(v___x_51_);
v___x_55_ = lean_box(0);
v_isShared_56_ = v_isSharedCheck_67_;
goto v_resetjp_54_;
}
v_resetjp_54_:
{
lean_object* v_name_57_; lean_object* v_kind_58_; lean_object* v_config_59_; lean_object* v___x_60_; uint8_t v___x_61_; 
v_name_57_ = lean_ctor_get(v_val_53_, 1);
lean_inc(v_name_57_);
v_kind_58_ = lean_ctor_get(v_val_53_, 2);
lean_inc(v_kind_58_);
v_config_59_ = lean_ctor_get(v_val_53_, 3);
lean_inc(v_config_59_);
lean_dec(v_val_53_);
v___x_60_ = l_Lake_LeanExe_keyword;
v___x_61_ = lean_name_eq(v_kind_58_, v___x_60_);
lean_dec(v_kind_58_);
if (v___x_61_ == 0)
{
lean_object* v___x_62_; 
lean_dec(v_config_59_);
lean_dec(v_name_57_);
lean_del_object(v___x_55_);
lean_dec_ref(v_self_50_);
v___x_62_ = lean_box(0);
return v___x_62_;
}
else
{
lean_object* v___x_63_; lean_object* v___x_65_; 
v___x_63_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_63_, 0, v_self_50_);
lean_ctor_set(v___x_63_, 1, v_name_57_);
lean_ctor_set(v___x_63_, 2, v_config_59_);
if (v_isShared_56_ == 0)
{
lean_ctor_set(v___x_55_, 0, v___x_63_);
v___x_65_ = v___x_55_;
goto v_reusejp_64_;
}
else
{
lean_object* v_reuseFailAlloc_66_; 
v_reuseFailAlloc_66_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_66_, 0, v___x_63_);
v___x_65_ = v_reuseFailAlloc_66_;
goto v_reusejp_64_;
}
v_reusejp_64_:
{
return v___x_65_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Package_findLeanExe_x3f___boxed(lean_object* v_name_68_, lean_object* v_self_69_){
_start:
{
lean_object* v_res_70_; 
v_res_70_ = l_Lake_Package_findLeanExe_x3f(v_name_68_, v_self_69_);
lean_dec(v_name_68_);
return v_res_70_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_LeanExeConfig_toLeanLibConfig_spec__0(size_t v_sz_71_, size_t v_i_72_, lean_object* v_bs_73_){
_start:
{
uint8_t v___x_74_; 
v___x_74_ = lean_usize_dec_lt(v_i_72_, v_sz_71_);
if (v___x_74_ == 0)
{
lean_object* v___x_75_; 
v___x_75_ = l_unsafeCast___redArg(v_bs_73_);
lean_dec_ref(v_bs_73_);
return v___x_75_;
}
else
{
lean_object* v_v_76_; lean_object* v___x_77_; lean_object* v_bs_x27_78_; lean_object* v___x_79_; lean_object* v___x_80_; size_t v___x_81_; size_t v___x_82_; lean_object* v___x_83_; lean_object* v___x_84_; 
v_v_76_ = lean_array_uget(v_bs_73_, v_i_72_);
v___x_77_ = lean_unsigned_to_nat(0u);
v_bs_x27_78_ = lean_array_uset(v_bs_73_, v_i_72_, v___x_77_);
v___x_79_ = l_unsafeCast___redArg(v_v_76_);
lean_dec(v_v_76_);
v___x_80_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_80_, 0, v___x_79_);
v___x_81_ = ((size_t)1ULL);
v___x_82_ = lean_usize_add(v_i_72_, v___x_81_);
v___x_83_ = l_unsafeCast___redArg(v___x_80_);
lean_dec_ref_known(v___x_80_, 1);
v___x_84_ = lean_array_uset(v_bs_x27_78_, v_i_72_, v___x_83_);
v_i_72_ = v___x_82_;
v_bs_73_ = v___x_84_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_LeanExeConfig_toLeanLibConfig_spec__0___boxed(lean_object* v_sz_86_, lean_object* v_i_87_, lean_object* v_bs_88_){
_start:
{
size_t v_sz_boxed_89_; size_t v_i_boxed_90_; lean_object* v_res_91_; 
v_sz_boxed_89_ = lean_unbox_usize(v_sz_86_);
lean_dec(v_sz_86_);
v_i_boxed_90_ = lean_unbox_usize(v_i_87_);
lean_dec(v_i_87_);
v_res_91_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_LeanExeConfig_toLeanLibConfig_spec__0(v_sz_boxed_89_, v_i_boxed_90_, v_bs_88_);
return v_res_91_;
}
}
static size_t _init_l_Lake_LeanExeConfig_toLeanLibConfig___redArg___closed__1(void){
_start:
{
lean_object* v___x_94_; size_t v_sz_95_; 
v___x_94_ = ((lean_object*)(l_Lake_LeanExeConfig_toLeanLibConfig___redArg___closed__0));
v_sz_95_ = lean_array_size(v___x_94_);
return v_sz_95_;
}
}
static lean_object* _init_l_Lake_LeanExeConfig_toLeanLibConfig___redArg___closed__2(void){
_start:
{
lean_object* v___x_96_; lean_object* v___x_97_; 
v___x_96_ = ((lean_object*)(l_Lake_LeanExeConfig_toLeanLibConfig___redArg___closed__0));
v___x_97_ = l_unsafeCast___redArg(v___x_96_);
return v___x_97_;
}
}
static lean_object* _init_l_Lake_LeanExeConfig_toLeanLibConfig___redArg___closed__3(void){
_start:
{
lean_object* v___x_98_; size_t v___x_99_; size_t v_sz_100_; lean_object* v___x_101_; 
v___x_98_ = lean_obj_once(&l_Lake_LeanExeConfig_toLeanLibConfig___redArg___closed__2, &l_Lake_LeanExeConfig_toLeanLibConfig___redArg___closed__2_once, _init_l_Lake_LeanExeConfig_toLeanLibConfig___redArg___closed__2);
v___x_99_ = ((size_t)0ULL);
v_sz_100_ = lean_usize_once(&l_Lake_LeanExeConfig_toLeanLibConfig___redArg___closed__1, &l_Lake_LeanExeConfig_toLeanLibConfig___redArg___closed__1_once, _init_l_Lake_LeanExeConfig_toLeanLibConfig___redArg___closed__1);
v___x_101_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_LeanExeConfig_toLeanLibConfig_spec__0(v_sz_100_, v___x_99_, v___x_98_);
return v___x_101_;
}
}
static lean_object* _init_l_Lake_LeanExeConfig_toLeanLibConfig___redArg___closed__4(void){
_start:
{
lean_object* v___x_102_; lean_object* v___x_103_; 
v___x_102_ = lean_obj_once(&l_Lake_LeanExeConfig_toLeanLibConfig___redArg___closed__3, &l_Lake_LeanExeConfig_toLeanLibConfig___redArg___closed__3_once, _init_l_Lake_LeanExeConfig_toLeanLibConfig___redArg___closed__3);
v___x_103_ = l_unsafeCast___redArg(v___x_102_);
return v___x_103_;
}
}
static lean_object* _init_l_Lake_LeanExeConfig_toLeanLibConfig___redArg___closed__5(void){
_start:
{
lean_object* v___x_104_; lean_object* v___x_105_; lean_object* v___x_106_; lean_object* v___x_107_; 
v___x_104_ = l_Lake_LeanLib_leanArtsFacet;
v___x_105_ = lean_unsigned_to_nat(1u);
v___x_106_ = lean_mk_empty_array_with_capacity(v___x_105_);
v___x_107_ = lean_array_push(v___x_106_, v___x_104_);
return v___x_107_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanExeConfig_toLeanLibConfig___redArg(lean_object* v_self_108_){
_start:
{
lean_object* v_toLeanConfig_109_; lean_object* v_srcDir_110_; lean_object* v_exeName_111_; lean_object* v_needs_112_; lean_object* v_extraDepTargets_113_; lean_object* v_nativeFacets_114_; lean_object* v___x_115_; lean_object* v___x_116_; uint8_t v___x_117_; lean_object* v___x_118_; lean_object* v___x_119_; 
v_toLeanConfig_109_ = lean_ctor_get(v_self_108_, 0);
v_srcDir_110_ = lean_ctor_get(v_self_108_, 1);
v_exeName_111_ = lean_ctor_get(v_self_108_, 3);
v_needs_112_ = lean_ctor_get(v_self_108_, 4);
v_extraDepTargets_113_ = lean_ctor_get(v_self_108_, 5);
v_nativeFacets_114_ = lean_ctor_get(v_self_108_, 6);
v___x_115_ = ((lean_object*)(l_Lake_LeanExeConfig_toLeanLibConfig___redArg___closed__0));
v___x_116_ = lean_obj_once(&l_Lake_LeanExeConfig_toLeanLibConfig___redArg___closed__4, &l_Lake_LeanExeConfig_toLeanLibConfig___redArg___closed__4_once, _init_l_Lake_LeanExeConfig_toLeanLibConfig___redArg___closed__4);
v___x_117_ = 0;
v___x_118_ = lean_obj_once(&l_Lake_LeanExeConfig_toLeanLibConfig___redArg___closed__5, &l_Lake_LeanExeConfig_toLeanLibConfig___redArg___closed__5_once, _init_l_Lake_LeanExeConfig_toLeanLibConfig___redArg___closed__5);
lean_inc_ref(v_nativeFacets_114_);
lean_inc_ref(v_extraDepTargets_113_);
lean_inc_ref(v_needs_112_);
lean_inc_ref(v_exeName_111_);
lean_inc_ref(v_srcDir_110_);
lean_inc_ref(v_toLeanConfig_109_);
v___x_119_ = lean_alloc_ctor(0, 9, 4);
lean_ctor_set(v___x_119_, 0, v_toLeanConfig_109_);
lean_ctor_set(v___x_119_, 1, v_srcDir_110_);
lean_ctor_set(v___x_119_, 2, v___x_115_);
lean_ctor_set(v___x_119_, 3, v___x_116_);
lean_ctor_set(v___x_119_, 4, v_exeName_111_);
lean_ctor_set(v___x_119_, 5, v_needs_112_);
lean_ctor_set(v___x_119_, 6, v_extraDepTargets_113_);
lean_ctor_set(v___x_119_, 7, v___x_118_);
lean_ctor_set(v___x_119_, 8, v_nativeFacets_114_);
lean_ctor_set_uint8(v___x_119_, sizeof(void*)*9, v___x_117_);
lean_ctor_set_uint8(v___x_119_, sizeof(void*)*9 + 1, v___x_117_);
lean_ctor_set_uint8(v___x_119_, sizeof(void*)*9 + 2, v___x_117_);
lean_ctor_set_uint8(v___x_119_, sizeof(void*)*9 + 3, v___x_117_);
return v___x_119_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanExeConfig_toLeanLibConfig___redArg___boxed(lean_object* v_self_120_){
_start:
{
lean_object* v_res_121_; 
v_res_121_ = l_Lake_LeanExeConfig_toLeanLibConfig___redArg(v_self_120_);
lean_dec_ref(v_self_120_);
return v_res_121_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanExeConfig_toLeanLibConfig(lean_object* v_n_122_, lean_object* v_self_123_){
_start:
{
lean_object* v___x_124_; 
v___x_124_ = l_Lake_LeanExeConfig_toLeanLibConfig___redArg(v_self_123_);
return v___x_124_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanExeConfig_toLeanLibConfig___boxed(lean_object* v_n_125_, lean_object* v_self_126_){
_start:
{
lean_object* v_res_127_; 
v_res_127_ = l_Lake_LeanExeConfig_toLeanLibConfig(v_n_125_, v_self_126_);
lean_dec_ref(v_self_126_);
lean_dec(v_n_125_);
return v_res_127_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanExe_config(lean_object* v_self_128_){
_start:
{
lean_object* v_config_129_; 
v_config_129_ = lean_ctor_get(v_self_128_, 2);
lean_inc(v_config_129_);
return v_config_129_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanExe_config___boxed(lean_object* v_self_130_){
_start:
{
lean_object* v_res_131_; 
v_res_131_ = l_Lake_LeanExe_config(v_self_130_);
lean_dec_ref(v_self_130_);
return v_res_131_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanExe_toLeanLib(lean_object* v_self_132_){
_start:
{
lean_object* v_pkg_133_; lean_object* v_name_134_; lean_object* v_config_135_; lean_object* v___x_137_; uint8_t v_isShared_138_; uint8_t v_isSharedCheck_143_; 
v_pkg_133_ = lean_ctor_get(v_self_132_, 0);
v_name_134_ = lean_ctor_get(v_self_132_, 1);
v_config_135_ = lean_ctor_get(v_self_132_, 2);
v_isSharedCheck_143_ = !lean_is_exclusive(v_self_132_);
if (v_isSharedCheck_143_ == 0)
{
v___x_137_ = v_self_132_;
v_isShared_138_ = v_isSharedCheck_143_;
goto v_resetjp_136_;
}
else
{
lean_inc(v_config_135_);
lean_inc(v_name_134_);
lean_inc(v_pkg_133_);
lean_dec(v_self_132_);
v___x_137_ = lean_box(0);
v_isShared_138_ = v_isSharedCheck_143_;
goto v_resetjp_136_;
}
v_resetjp_136_:
{
lean_object* v___x_139_; lean_object* v___x_141_; 
v___x_139_ = l_Lake_LeanExeConfig_toLeanLibConfig___redArg(v_config_135_);
lean_dec(v_config_135_);
if (v_isShared_138_ == 0)
{
lean_ctor_set(v___x_137_, 2, v___x_139_);
v___x_141_ = v___x_137_;
goto v_reusejp_140_;
}
else
{
lean_object* v_reuseFailAlloc_142_; 
v_reuseFailAlloc_142_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_142_, 0, v_pkg_133_);
lean_ctor_set(v_reuseFailAlloc_142_, 1, v_name_134_);
lean_ctor_set(v_reuseFailAlloc_142_, 2, v___x_139_);
v___x_141_ = v_reuseFailAlloc_142_;
goto v_reusejp_140_;
}
v_reusejp_140_:
{
return v___x_141_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_LeanExe_root(lean_object* v_self_144_){
_start:
{
lean_object* v_config_145_; lean_object* v_pkg_146_; lean_object* v_name_147_; lean_object* v___x_149_; uint8_t v_isShared_150_; uint8_t v_isSharedCheck_157_; 
v_config_145_ = lean_ctor_get(v_self_144_, 2);
v_pkg_146_ = lean_ctor_get(v_self_144_, 0);
v_name_147_ = lean_ctor_get(v_self_144_, 1);
v_isSharedCheck_157_ = !lean_is_exclusive(v_self_144_);
if (v_isSharedCheck_157_ == 0)
{
v___x_149_ = v_self_144_;
v_isShared_150_ = v_isSharedCheck_157_;
goto v_resetjp_148_;
}
else
{
lean_inc(v_config_145_);
lean_inc(v_name_147_);
lean_inc(v_pkg_146_);
lean_dec(v_self_144_);
v___x_149_ = lean_box(0);
v_isShared_150_ = v_isSharedCheck_157_;
goto v_resetjp_148_;
}
v_resetjp_148_:
{
lean_object* v_root_151_; lean_object* v___x_152_; lean_object* v___x_154_; 
v_root_151_ = lean_ctor_get(v_config_145_, 2);
lean_inc(v_root_151_);
v___x_152_ = l_Lake_LeanExeConfig_toLeanLibConfig___redArg(v_config_145_);
lean_dec(v_config_145_);
if (v_isShared_150_ == 0)
{
lean_ctor_set(v___x_149_, 2, v___x_152_);
v___x_154_ = v___x_149_;
goto v_reusejp_153_;
}
else
{
lean_object* v_reuseFailAlloc_156_; 
v_reuseFailAlloc_156_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_156_, 0, v_pkg_146_);
lean_ctor_set(v_reuseFailAlloc_156_, 1, v_name_147_);
lean_ctor_set(v_reuseFailAlloc_156_, 2, v___x_152_);
v___x_154_ = v_reuseFailAlloc_156_;
goto v_reusejp_153_;
}
v_reusejp_153_:
{
lean_object* v___x_155_; 
v___x_155_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_155_, 0, v___x_154_);
lean_ctor_set(v___x_155_, 1, v_root_151_);
return v___x_155_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_LeanExe_isRoot_x3f(lean_object* v_name_158_, lean_object* v_self_159_){
_start:
{
lean_object* v_config_160_; lean_object* v_pkg_161_; lean_object* v_name_162_; lean_object* v___x_164_; uint8_t v_isShared_165_; uint8_t v_isSharedCheck_175_; 
v_config_160_ = lean_ctor_get(v_self_159_, 2);
v_pkg_161_ = lean_ctor_get(v_self_159_, 0);
v_name_162_ = lean_ctor_get(v_self_159_, 1);
v_isSharedCheck_175_ = !lean_is_exclusive(v_self_159_);
if (v_isSharedCheck_175_ == 0)
{
v___x_164_ = v_self_159_;
v_isShared_165_ = v_isSharedCheck_175_;
goto v_resetjp_163_;
}
else
{
lean_inc(v_config_160_);
lean_inc(v_name_162_);
lean_inc(v_pkg_161_);
lean_dec(v_self_159_);
v___x_164_ = lean_box(0);
v_isShared_165_ = v_isSharedCheck_175_;
goto v_resetjp_163_;
}
v_resetjp_163_:
{
lean_object* v_root_166_; uint8_t v___x_167_; 
v_root_166_ = lean_ctor_get(v_config_160_, 2);
lean_inc(v_root_166_);
v___x_167_ = lean_name_eq(v_name_158_, v_root_166_);
if (v___x_167_ == 0)
{
lean_object* v___x_168_; 
lean_dec(v_root_166_);
lean_del_object(v___x_164_);
lean_dec(v_name_162_);
lean_dec_ref(v_pkg_161_);
lean_dec(v_config_160_);
v___x_168_ = lean_box(0);
return v___x_168_;
}
else
{
lean_object* v___x_169_; lean_object* v___x_171_; 
v___x_169_ = l_Lake_LeanExeConfig_toLeanLibConfig___redArg(v_config_160_);
lean_dec(v_config_160_);
if (v_isShared_165_ == 0)
{
lean_ctor_set(v___x_164_, 2, v___x_169_);
v___x_171_ = v___x_164_;
goto v_reusejp_170_;
}
else
{
lean_object* v_reuseFailAlloc_174_; 
v_reuseFailAlloc_174_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_174_, 0, v_pkg_161_);
lean_ctor_set(v_reuseFailAlloc_174_, 1, v_name_162_);
lean_ctor_set(v_reuseFailAlloc_174_, 2, v___x_169_);
v___x_171_ = v_reuseFailAlloc_174_;
goto v_reusejp_170_;
}
v_reusejp_170_:
{
lean_object* v___x_172_; lean_object* v___x_173_; 
v___x_172_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_172_, 0, v___x_171_);
lean_ctor_set(v___x_172_, 1, v_root_166_);
v___x_173_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_173_, 0, v___x_172_);
return v___x_173_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_LeanExe_isRoot_x3f___boxed(lean_object* v_name_176_, lean_object* v_self_177_){
_start:
{
lean_object* v_res_178_; 
v_res_178_ = l_Lake_LeanExe_isRoot_x3f(v_name_176_, v_self_177_);
lean_dec(v_name_176_);
return v_res_178_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanExe_isRootSrc_x3f(lean_object* v_path_180_, lean_object* v_self_181_){
_start:
{
lean_object* v_config_182_; lean_object* v_pkg_183_; lean_object* v_config_184_; lean_object* v_name_185_; lean_object* v___x_187_; uint8_t v_isShared_188_; uint8_t v_isSharedCheck_208_; 
v_config_182_ = lean_ctor_get(v_self_181_, 2);
lean_inc(v_config_182_);
v_pkg_183_ = lean_ctor_get(v_self_181_, 0);
lean_inc_ref(v_pkg_183_);
v_config_184_ = lean_ctor_get(v_pkg_183_, 6);
v_name_185_ = lean_ctor_get(v_self_181_, 1);
v_isSharedCheck_208_ = !lean_is_exclusive(v_self_181_);
if (v_isSharedCheck_208_ == 0)
{
lean_object* v_unused_209_; lean_object* v_unused_210_; 
v_unused_209_ = lean_ctor_get(v_self_181_, 2);
lean_dec(v_unused_209_);
v_unused_210_ = lean_ctor_get(v_self_181_, 0);
lean_dec(v_unused_210_);
v___x_187_ = v_self_181_;
v_isShared_188_ = v_isSharedCheck_208_;
goto v_resetjp_186_;
}
else
{
lean_inc(v_name_185_);
lean_dec(v_self_181_);
v___x_187_ = lean_box(0);
v_isShared_188_ = v_isSharedCheck_208_;
goto v_resetjp_186_;
}
v_resetjp_186_:
{
lean_object* v_root_189_; lean_object* v_dir_190_; lean_object* v_srcDir_191_; lean_object* v___x_192_; lean_object* v_srcDir_193_; lean_object* v___x_194_; lean_object* v___x_195_; lean_object* v___x_197_; 
v_root_189_ = lean_ctor_get(v_config_182_, 2);
lean_inc(v_root_189_);
v_dir_190_ = lean_ctor_get(v_pkg_183_, 4);
lean_inc_ref(v_dir_190_);
v_srcDir_191_ = lean_ctor_get(v_config_184_, 4);
lean_inc_ref(v_srcDir_191_);
v___x_192_ = l_Lake_LeanExeConfig_toLeanLibConfig___redArg(v_config_182_);
lean_dec(v_config_182_);
v_srcDir_193_ = lean_ctor_get(v___x_192_, 1);
lean_inc_ref(v_srcDir_193_);
v___x_194_ = ((lean_object*)(l_Lake_LeanExe_isRootSrc_x3f___closed__0));
v___x_195_ = l_System_FilePath_withExtension(v_path_180_, v___x_194_);
if (v_isShared_188_ == 0)
{
lean_ctor_set(v___x_187_, 2, v___x_192_);
v___x_197_ = v___x_187_;
goto v_reusejp_196_;
}
else
{
lean_object* v_reuseFailAlloc_207_; 
v_reuseFailAlloc_207_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_207_, 0, v_pkg_183_);
lean_ctor_set(v_reuseFailAlloc_207_, 1, v_name_185_);
lean_ctor_set(v_reuseFailAlloc_207_, 2, v___x_192_);
v___x_197_ = v_reuseFailAlloc_207_;
goto v_reusejp_196_;
}
v_reusejp_196_:
{
lean_object* v___x_198_; lean_object* v___x_199_; lean_object* v___x_200_; lean_object* v___x_201_; lean_object* v___x_202_; lean_object* v___x_203_; uint8_t v___x_204_; 
lean_inc(v_root_189_);
v___x_198_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_198_, 0, v___x_197_);
lean_ctor_set(v___x_198_, 1, v_root_189_);
v___x_199_ = l_System_FilePath_normalize(v_srcDir_191_);
v___x_200_ = l_Lake_joinRelative(v_dir_190_, v___x_199_);
v___x_201_ = l_System_FilePath_normalize(v_srcDir_193_);
v___x_202_ = l_Lake_joinRelative(v___x_200_, v___x_201_);
v___x_203_ = l_Lean_modToFilePath(v___x_202_, v_root_189_, v___x_194_);
lean_dec_ref(v___x_202_);
v___x_204_ = lean_string_dec_eq(v___x_195_, v___x_203_);
lean_dec_ref(v___x_203_);
lean_dec_ref(v___x_195_);
if (v___x_204_ == 0)
{
lean_object* v___x_205_; 
lean_dec_ref_known(v___x_198_, 2);
v___x_205_ = lean_box(0);
return v___x_205_;
}
else
{
lean_object* v___x_206_; 
v___x_206_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_206_, 0, v___x_198_);
return v___x_206_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_LeanExe_fileName(lean_object* v_self_211_){
_start:
{
lean_object* v_config_212_; lean_object* v_exeName_213_; lean_object* v___x_214_; lean_object* v___x_215_; 
v_config_212_ = lean_ctor_get(v_self_211_, 2);
lean_inc(v_config_212_);
lean_dec_ref(v_self_211_);
v_exeName_213_ = lean_ctor_get(v_config_212_, 3);
lean_inc_ref(v_exeName_213_);
lean_dec(v_config_212_);
v___x_214_ = l_System_FilePath_exeExtension;
v___x_215_ = l_System_FilePath_addExtension(v_exeName_213_, v___x_214_);
return v___x_215_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanExe_file(lean_object* v_self_216_){
_start:
{
lean_object* v_pkg_217_; lean_object* v_config_218_; lean_object* v_config_219_; lean_object* v_dir_220_; lean_object* v_buildDir_221_; lean_object* v_binDir_222_; lean_object* v_exeName_223_; lean_object* v___x_224_; lean_object* v___x_225_; lean_object* v___x_226_; lean_object* v___x_227_; lean_object* v___x_228_; lean_object* v___x_229_; lean_object* v___x_230_; 
v_pkg_217_ = lean_ctor_get(v_self_216_, 0);
lean_inc_ref(v_pkg_217_);
v_config_218_ = lean_ctor_get(v_pkg_217_, 6);
lean_inc_ref(v_config_218_);
v_config_219_ = lean_ctor_get(v_self_216_, 2);
lean_inc(v_config_219_);
lean_dec_ref(v_self_216_);
v_dir_220_ = lean_ctor_get(v_pkg_217_, 4);
lean_inc_ref(v_dir_220_);
lean_dec_ref(v_pkg_217_);
v_buildDir_221_ = lean_ctor_get(v_config_218_, 5);
lean_inc_ref(v_buildDir_221_);
v_binDir_222_ = lean_ctor_get(v_config_218_, 8);
lean_inc_ref(v_binDir_222_);
lean_dec_ref(v_config_218_);
v_exeName_223_ = lean_ctor_get(v_config_219_, 3);
lean_inc_ref(v_exeName_223_);
lean_dec(v_config_219_);
v___x_224_ = l_System_FilePath_normalize(v_buildDir_221_);
v___x_225_ = l_Lake_joinRelative(v_dir_220_, v___x_224_);
v___x_226_ = l_System_FilePath_normalize(v_binDir_222_);
v___x_227_ = l_Lake_joinRelative(v___x_225_, v___x_226_);
v___x_228_ = l_System_FilePath_exeExtension;
v___x_229_ = l_System_FilePath_addExtension(v_exeName_223_, v___x_228_);
v___x_230_ = l_Lake_joinRelative(v___x_227_, v___x_229_);
return v___x_230_;
}
}
LEAN_EXPORT uint8_t l_Lake_LeanExe_supportInterpreter(lean_object* v_self_231_){
_start:
{
lean_object* v_config_232_; uint8_t v_supportInterpreter_233_; 
v_config_232_ = lean_ctor_get(v_self_231_, 2);
v_supportInterpreter_233_ = lean_ctor_get_uint8(v_config_232_, sizeof(void*)*7);
return v_supportInterpreter_233_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanExe_supportInterpreter___boxed(lean_object* v_self_234_){
_start:
{
uint8_t v_res_235_; lean_object* v_r_236_; 
v_res_235_ = l_Lake_LeanExe_supportInterpreter(v_self_234_);
lean_dec_ref(v_self_234_);
v_r_236_ = lean_box(v_res_235_);
return v_r_236_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanExe_exeOnlyLinkArgs(lean_object* v_self_255_){
_start:
{
uint8_t v___x_256_; 
v___x_256_ = l_System_Platform_isWindows;
if (v___x_256_ == 0)
{
lean_object* v_config_257_; uint8_t v_supportInterpreter_258_; 
v_config_257_ = lean_ctor_get(v_self_255_, 2);
v_supportInterpreter_258_ = lean_ctor_get_uint8(v_config_257_, sizeof(void*)*7);
if (v_supportInterpreter_258_ == 0)
{
lean_object* v___x_259_; 
v___x_259_ = ((lean_object*)(l_Lake_LeanExe_exeOnlyLinkArgs___closed__0));
return v___x_259_;
}
else
{
lean_object* v___x_260_; 
v___x_260_ = ((lean_object*)(l_Lake_LeanExe_exeOnlyLinkArgs___closed__2));
return v___x_260_;
}
}
else
{
lean_object* v___x_261_; 
v___x_261_ = ((lean_object*)(l_Lake_LeanExe_exeOnlyLinkArgs___closed__6));
return v___x_261_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_LeanExe_exeOnlyLinkArgs___boxed(lean_object* v_self_262_){
_start:
{
lean_object* v_res_263_; 
v_res_263_ = l_Lake_LeanExe_exeOnlyLinkArgs(v_self_262_);
lean_dec_ref(v_self_262_);
return v_res_263_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanExe_linkArgs(lean_object* v_self_264_){
_start:
{
lean_object* v_pkg_265_; lean_object* v_config_266_; lean_object* v_toLeanConfig_267_; lean_object* v_config_268_; lean_object* v_toLeanConfig_269_; lean_object* v_moreLinkArgs_270_; lean_object* v_moreLinkArgs_271_; lean_object* v___x_272_; lean_object* v___x_273_; lean_object* v___x_274_; 
v_pkg_265_ = lean_ctor_get(v_self_264_, 0);
v_config_266_ = lean_ctor_get(v_pkg_265_, 6);
v_toLeanConfig_267_ = lean_ctor_get(v_config_266_, 1);
v_config_268_ = lean_ctor_get(v_self_264_, 2);
v_toLeanConfig_269_ = lean_ctor_get(v_config_268_, 0);
v_moreLinkArgs_270_ = lean_ctor_get(v_toLeanConfig_267_, 8);
v_moreLinkArgs_271_ = lean_ctor_get(v_toLeanConfig_269_, 8);
v___x_272_ = l_Lake_LeanExe_exeOnlyLinkArgs(v_self_264_);
v___x_273_ = l_Array_append___redArg(v___x_272_, v_moreLinkArgs_270_);
v___x_274_ = l_Array_append___redArg(v___x_273_, v_moreLinkArgs_271_);
return v___x_274_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanExe_linkArgs___boxed(lean_object* v_self_275_){
_start:
{
lean_object* v_res_276_; 
v_res_276_ = l_Lake_LeanExe_linkArgs(v_self_275_);
lean_dec_ref(v_self_275_);
return v_res_276_;
}
}
LEAN_EXPORT uint8_t l_Lake_LeanExe_sharedLean(lean_object* v_self_277_){
_start:
{
lean_object* v_config_278_; uint8_t v_supportInterpreter_279_; uint8_t v___x_280_; uint8_t v___x_281_; 
v_config_278_ = lean_ctor_get(v_self_277_, 2);
v_supportInterpreter_279_ = lean_ctor_get_uint8(v_config_278_, sizeof(void*)*7);
v___x_280_ = l_System_Platform_isWindows;
v___x_281_ = lean_strict_and(v___x_280_, v_supportInterpreter_279_);
return v___x_281_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanExe_sharedLean___boxed(lean_object* v_self_282_){
_start:
{
uint8_t v_res_283_; lean_object* v_r_284_; 
v_res_283_ = l_Lake_LeanExe_sharedLean(v_self_282_);
lean_dec_ref(v_self_282_);
v_r_284_ = lean_box(v_res_283_);
return v_r_284_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanExe_weakLinkArgs(lean_object* v_self_285_){
_start:
{
lean_object* v_pkg_286_; lean_object* v_config_287_; lean_object* v_toLeanConfig_288_; lean_object* v_config_289_; lean_object* v_toLeanConfig_290_; lean_object* v_weakLinkArgs_291_; lean_object* v_weakLinkArgs_292_; lean_object* v___x_293_; 
v_pkg_286_ = lean_ctor_get(v_self_285_, 0);
v_config_287_ = lean_ctor_get(v_pkg_286_, 6);
v_toLeanConfig_288_ = lean_ctor_get(v_config_287_, 1);
lean_inc_ref(v_toLeanConfig_288_);
v_config_289_ = lean_ctor_get(v_self_285_, 2);
lean_inc(v_config_289_);
lean_dec_ref(v_self_285_);
v_toLeanConfig_290_ = lean_ctor_get(v_config_289_, 0);
lean_inc_ref(v_toLeanConfig_290_);
lean_dec(v_config_289_);
v_weakLinkArgs_291_ = lean_ctor_get(v_toLeanConfig_288_, 9);
lean_inc_ref(v_weakLinkArgs_291_);
lean_dec_ref(v_toLeanConfig_288_);
v_weakLinkArgs_292_ = lean_ctor_get(v_toLeanConfig_290_, 9);
lean_inc_ref(v_weakLinkArgs_292_);
lean_dec_ref(v_toLeanConfig_290_);
v___x_293_ = l_Array_append___redArg(v_weakLinkArgs_291_, v_weakLinkArgs_292_);
lean_dec_ref(v_weakLinkArgs_292_);
return v___x_293_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanExe_moreLinkObjs(lean_object* v_self_294_){
_start:
{
lean_object* v_config_295_; lean_object* v_toLeanConfig_296_; lean_object* v_moreLinkObjs_297_; 
v_config_295_ = lean_ctor_get(v_self_294_, 2);
v_toLeanConfig_296_ = lean_ctor_get(v_config_295_, 0);
v_moreLinkObjs_297_ = lean_ctor_get(v_toLeanConfig_296_, 6);
lean_inc_ref(v_moreLinkObjs_297_);
return v_moreLinkObjs_297_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanExe_moreLinkObjs___boxed(lean_object* v_self_298_){
_start:
{
lean_object* v_res_299_; 
v_res_299_ = l_Lake_LeanExe_moreLinkObjs(v_self_298_);
lean_dec_ref(v_self_298_);
return v_res_299_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanExe_moreLinkLibs(lean_object* v_self_300_){
_start:
{
lean_object* v_config_301_; lean_object* v_toLeanConfig_302_; lean_object* v_moreLinkLibs_303_; 
v_config_301_ = lean_ctor_get(v_self_300_, 2);
v_toLeanConfig_302_ = lean_ctor_get(v_config_301_, 0);
v_moreLinkLibs_303_ = lean_ctor_get(v_toLeanConfig_302_, 7);
lean_inc_ref(v_moreLinkLibs_303_);
return v_moreLinkLibs_303_;
}
}
LEAN_EXPORT lean_object* l_Lake_LeanExe_moreLinkLibs___boxed(lean_object* v_self_304_){
_start:
{
lean_object* v_res_305_; 
v_res_305_ = l_Lake_LeanExe_moreLinkLibs(v_self_304_);
lean_dec_ref(v_self_304_);
return v_res_305_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lake_Package_findTargetModule_x3f_spec__0___redArg(lean_object* v_mod_306_, lean_object* v_as_307_, lean_object* v_i_308_){
_start:
{
lean_object* v_zero_309_; uint8_t v_isZero_310_; 
v_zero_309_ = lean_unsigned_to_nat(0u);
v_isZero_310_ = lean_nat_dec_eq(v_i_308_, v_zero_309_);
if (v_isZero_310_ == 1)
{
lean_object* v___x_311_; 
lean_dec(v_i_308_);
v___x_311_ = lean_box(0);
return v___x_311_;
}
else
{
lean_object* v_one_312_; lean_object* v_n_313_; lean_object* v___x_314_; lean_object* v___x_315_; 
v_one_312_ = lean_unsigned_to_nat(1u);
v_n_313_ = lean_nat_sub(v_i_308_, v_one_312_);
lean_dec(v_i_308_);
v___x_314_ = lean_array_fget_borrowed(v_as_307_, v_n_313_);
lean_inc(v___x_314_);
v___x_315_ = l_Lake_LeanExe_isRoot_x3f(v_mod_306_, v___x_314_);
if (lean_obj_tag(v___x_315_) == 0)
{
v_i_308_ = v_n_313_;
goto _start;
}
else
{
lean_dec(v_n_313_);
return v___x_315_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lake_Package_findTargetModule_x3f_spec__0___redArg___boxed(lean_object* v_mod_317_, lean_object* v_as_318_, lean_object* v_i_319_){
_start:
{
lean_object* v_res_320_; 
v_res_320_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lake_Package_findTargetModule_x3f_spec__0___redArg(v_mod_317_, v_as_318_, v_i_319_);
lean_dec_ref(v_as_318_);
lean_dec(v_mod_317_);
return v_res_320_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Package_findTargetModule_x3f_spec__1(lean_object* v_self_321_, lean_object* v_as_322_, size_t v_i_323_, size_t v_stop_324_, lean_object* v_b_325_){
_start:
{
lean_object* v___y_327_; uint8_t v___x_331_; 
v___x_331_ = lean_usize_dec_eq(v_i_323_, v_stop_324_);
if (v___x_331_ == 0)
{
lean_object* v_toConfigDecl_332_; lean_object* v_name_333_; lean_object* v_kind_334_; lean_object* v_config_335_; lean_object* v___x_336_; uint8_t v___x_337_; 
v_toConfigDecl_332_ = lean_array_uget_borrowed(v_as_322_, v_i_323_);
v_name_333_ = lean_ctor_get(v_toConfigDecl_332_, 1);
v_kind_334_ = lean_ctor_get(v_toConfigDecl_332_, 2);
v_config_335_ = lean_ctor_get(v_toConfigDecl_332_, 3);
v___x_336_ = l_Lake_LeanExe_keyword;
v___x_337_ = lean_name_eq(v_kind_334_, v___x_336_);
if (v___x_337_ == 0)
{
v___y_327_ = v_b_325_;
goto v___jp_326_;
}
else
{
lean_object* v___x_338_; lean_object* v___x_339_; 
lean_inc(v_config_335_);
lean_inc(v_name_333_);
lean_inc_ref(v_self_321_);
v___x_338_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_338_, 0, v_self_321_);
lean_ctor_set(v___x_338_, 1, v_name_333_);
lean_ctor_set(v___x_338_, 2, v_config_335_);
v___x_339_ = lean_array_push(v_b_325_, v___x_338_);
v___y_327_ = v___x_339_;
goto v___jp_326_;
}
}
else
{
lean_dec_ref(v_self_321_);
return v_b_325_;
}
v___jp_326_:
{
size_t v___x_328_; size_t v___x_329_; 
v___x_328_ = ((size_t)1ULL);
v___x_329_ = lean_usize_add(v_i_323_, v___x_328_);
v_i_323_ = v___x_329_;
v_b_325_ = v___y_327_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Package_findTargetModule_x3f_spec__1___boxed(lean_object* v_self_340_, lean_object* v_as_341_, lean_object* v_i_342_, lean_object* v_stop_343_, lean_object* v_b_344_){
_start:
{
size_t v_i_boxed_345_; size_t v_stop_boxed_346_; lean_object* v_res_347_; 
v_i_boxed_345_ = lean_unbox_usize(v_i_342_);
lean_dec(v_i_342_);
v_stop_boxed_346_ = lean_unbox_usize(v_stop_343_);
lean_dec(v_stop_343_);
v_res_347_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Package_findTargetModule_x3f_spec__1(v_self_340_, v_as_341_, v_i_boxed_345_, v_stop_boxed_346_, v_b_344_);
lean_dec_ref(v_as_341_);
return v_res_347_;
}
}
LEAN_EXPORT lean_object* l_Lake_Package_findTargetModule_x3f(lean_object* v_mod_348_, lean_object* v_self_349_){
_start:
{
lean_object* v___y_351_; lean_object* v_targetDecls_355_; lean_object* v___x_356_; lean_object* v___x_357_; lean_object* v___x_358_; uint8_t v___x_359_; 
v_targetDecls_355_ = lean_ctor_get(v_self_349_, 15);
v___x_356_ = lean_unsigned_to_nat(0u);
v___x_357_ = ((lean_object*)(l_Lake_Package_leanExes___closed__0));
v___x_358_ = lean_array_get_size(v_targetDecls_355_);
v___x_359_ = lean_nat_dec_lt(v___x_356_, v___x_358_);
if (v___x_359_ == 0)
{
v___y_351_ = v___x_357_;
goto v___jp_350_;
}
else
{
size_t v___x_360_; size_t v___x_361_; lean_object* v___x_362_; 
v___x_360_ = ((size_t)0ULL);
v___x_361_ = lean_usize_of_nat(v___x_358_);
lean_inc_ref(v_self_349_);
v___x_362_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Package_findTargetModule_x3f_spec__1(v_self_349_, v_targetDecls_355_, v___x_360_, v___x_361_, v___x_357_);
v___y_351_ = v___x_362_;
goto v___jp_350_;
}
v___jp_350_:
{
lean_object* v___x_352_; lean_object* v___x_353_; 
v___x_352_ = lean_array_get_size(v___y_351_);
v___x_353_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lake_Package_findTargetModule_x3f_spec__0___redArg(v_mod_348_, v___y_351_, v___x_352_);
lean_dec_ref(v___y_351_);
if (lean_obj_tag(v___x_353_) == 0)
{
lean_object* v___x_354_; 
v___x_354_ = l_Lake_Package_findModule_x3f(v_mod_348_, v_self_349_);
return v___x_354_;
}
else
{
lean_dec_ref(v_self_349_);
lean_dec(v_mod_348_);
return v___x_353_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lake_Package_findTargetModule_x3f_spec__0(lean_object* v_mod_363_, lean_object* v_as_364_, lean_object* v_i_365_, lean_object* v_a_366_){
_start:
{
lean_object* v___x_367_; 
v___x_367_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lake_Package_findTargetModule_x3f_spec__0___redArg(v_mod_363_, v_as_364_, v_i_365_);
return v___x_367_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lake_Package_findTargetModule_x3f_spec__0___boxed(lean_object* v_mod_368_, lean_object* v_as_369_, lean_object* v_i_370_, lean_object* v_a_371_){
_start:
{
lean_object* v_res_372_; 
v_res_372_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lake_Package_findTargetModule_x3f_spec__0(v_mod_368_, v_as_369_, v_i_370_, v_a_371_);
lean_dec_ref(v_as_369_);
lean_dec(v_mod_368_);
return v_res_372_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lake_Package_findModuleBySrc_x3f_spec__0___redArg(lean_object* v_path_373_, lean_object* v_as_374_, lean_object* v_i_375_){
_start:
{
lean_object* v_zero_376_; uint8_t v_isZero_377_; 
v_zero_376_ = lean_unsigned_to_nat(0u);
v_isZero_377_ = lean_nat_dec_eq(v_i_375_, v_zero_376_);
if (v_isZero_377_ == 1)
{
lean_object* v___x_378_; 
lean_dec(v_i_375_);
lean_dec_ref(v_path_373_);
v___x_378_ = lean_box(0);
return v___x_378_;
}
else
{
lean_object* v_one_379_; lean_object* v_n_380_; lean_object* v___x_381_; lean_object* v___x_382_; 
v_one_379_ = lean_unsigned_to_nat(1u);
v_n_380_ = lean_nat_sub(v_i_375_, v_one_379_);
lean_dec(v_i_375_);
v___x_381_ = lean_array_fget_borrowed(v_as_374_, v_n_380_);
lean_inc(v___x_381_);
lean_inc_ref(v_path_373_);
v___x_382_ = l_Lake_LeanExe_isRootSrc_x3f(v_path_373_, v___x_381_);
if (lean_obj_tag(v___x_382_) == 0)
{
v_i_375_ = v_n_380_;
goto _start;
}
else
{
lean_dec(v_n_380_);
lean_dec_ref(v_path_373_);
return v___x_382_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lake_Package_findModuleBySrc_x3f_spec__0___redArg___boxed(lean_object* v_path_384_, lean_object* v_as_385_, lean_object* v_i_386_){
_start:
{
lean_object* v_res_387_; 
v_res_387_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lake_Package_findModuleBySrc_x3f_spec__0___redArg(v_path_384_, v_as_385_, v_i_386_);
lean_dec_ref(v_as_385_);
return v_res_387_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Package_findModuleBySrc_x3f_spec__2(lean_object* v_self_391_, lean_object* v_as_392_, size_t v_i_393_, size_t v_stop_394_, lean_object* v_b_395_){
_start:
{
lean_object* v___y_397_; uint8_t v___x_401_; 
v___x_401_ = lean_usize_dec_eq(v_i_393_, v_stop_394_);
if (v___x_401_ == 0)
{
lean_object* v_toConfigDecl_402_; lean_object* v_name_403_; lean_object* v_kind_404_; lean_object* v_config_405_; lean_object* v___x_406_; uint8_t v___x_407_; 
v_toConfigDecl_402_ = lean_array_uget_borrowed(v_as_392_, v_i_393_);
v_name_403_ = lean_ctor_get(v_toConfigDecl_402_, 1);
v_kind_404_ = lean_ctor_get(v_toConfigDecl_402_, 2);
v_config_405_ = lean_ctor_get(v_toConfigDecl_402_, 3);
v___x_406_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Package_findModuleBySrc_x3f_spec__2___closed__1));
v___x_407_ = lean_name_eq(v_kind_404_, v___x_406_);
if (v___x_407_ == 0)
{
v___y_397_ = v_b_395_;
goto v___jp_396_;
}
else
{
lean_object* v___x_408_; lean_object* v___x_409_; 
lean_inc(v_config_405_);
lean_inc(v_name_403_);
lean_inc_ref(v_self_391_);
v___x_408_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_408_, 0, v_self_391_);
lean_ctor_set(v___x_408_, 1, v_name_403_);
lean_ctor_set(v___x_408_, 2, v_config_405_);
v___x_409_ = lean_array_push(v_b_395_, v___x_408_);
v___y_397_ = v___x_409_;
goto v___jp_396_;
}
}
else
{
lean_dec_ref(v_self_391_);
return v_b_395_;
}
v___jp_396_:
{
size_t v___x_398_; size_t v___x_399_; 
v___x_398_ = ((size_t)1ULL);
v___x_399_ = lean_usize_add(v_i_393_, v___x_398_);
v_i_393_ = v___x_399_;
v_b_395_ = v___y_397_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Package_findModuleBySrc_x3f_spec__2___boxed(lean_object* v_self_410_, lean_object* v_as_411_, lean_object* v_i_412_, lean_object* v_stop_413_, lean_object* v_b_414_){
_start:
{
size_t v_i_boxed_415_; size_t v_stop_boxed_416_; lean_object* v_res_417_; 
v_i_boxed_415_ = lean_unbox_usize(v_i_412_);
lean_dec(v_i_412_);
v_stop_boxed_416_ = lean_unbox_usize(v_stop_413_);
lean_dec(v_stop_413_);
v_res_417_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Package_findModuleBySrc_x3f_spec__2(v_self_410_, v_as_411_, v_i_boxed_415_, v_stop_boxed_416_, v_b_414_);
lean_dec_ref(v_as_411_);
return v_res_417_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lake_Package_findModuleBySrc_x3f_spec__1___redArg(lean_object* v_path_418_, lean_object* v_as_419_, lean_object* v_i_420_){
_start:
{
lean_object* v_zero_421_; uint8_t v_isZero_422_; 
v_zero_421_ = lean_unsigned_to_nat(0u);
v_isZero_422_ = lean_nat_dec_eq(v_i_420_, v_zero_421_);
if (v_isZero_422_ == 1)
{
lean_object* v___x_423_; 
lean_dec(v_i_420_);
lean_dec_ref(v_path_418_);
v___x_423_ = lean_box(0);
return v___x_423_;
}
else
{
lean_object* v_one_424_; lean_object* v_n_425_; lean_object* v___x_426_; lean_object* v___x_427_; 
v_one_424_ = lean_unsigned_to_nat(1u);
v_n_425_ = lean_nat_sub(v_i_420_, v_one_424_);
lean_dec(v_i_420_);
v___x_426_ = lean_array_fget_borrowed(v_as_419_, v_n_425_);
lean_inc(v___x_426_);
lean_inc_ref(v_path_418_);
v___x_427_ = l_Lake_LeanLib_findModuleBySrc_x3f(v_path_418_, v___x_426_);
if (lean_obj_tag(v___x_427_) == 0)
{
v_i_420_ = v_n_425_;
goto _start;
}
else
{
lean_dec(v_n_425_);
lean_dec_ref(v_path_418_);
return v___x_427_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lake_Package_findModuleBySrc_x3f_spec__1___redArg___boxed(lean_object* v_path_429_, lean_object* v_as_430_, lean_object* v_i_431_){
_start:
{
lean_object* v_res_432_; 
v_res_432_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lake_Package_findModuleBySrc_x3f_spec__1___redArg(v_path_429_, v_as_430_, v_i_431_);
lean_dec_ref(v_as_430_);
return v_res_432_;
}
}
LEAN_EXPORT lean_object* l_Lake_Package_findModuleBySrc_x3f(lean_object* v_path_433_, lean_object* v_self_434_){
_start:
{
lean_object* v___y_436_; lean_object* v_targetDecls_439_; lean_object* v___y_441_; lean_object* v___x_451_; lean_object* v___x_452_; lean_object* v___x_453_; uint8_t v___x_454_; 
v_targetDecls_439_ = lean_ctor_get(v_self_434_, 15);
lean_inc_ref(v_targetDecls_439_);
v___x_451_ = lean_unsigned_to_nat(0u);
v___x_452_ = ((lean_object*)(l_Lake_Package_leanExes___closed__0));
v___x_453_ = lean_array_get_size(v_targetDecls_439_);
v___x_454_ = lean_nat_dec_lt(v___x_451_, v___x_453_);
if (v___x_454_ == 0)
{
v___y_441_ = v___x_452_;
goto v___jp_440_;
}
else
{
size_t v___x_455_; size_t v___x_456_; lean_object* v___x_457_; 
v___x_455_ = ((size_t)0ULL);
v___x_456_ = lean_usize_of_nat(v___x_453_);
lean_inc_ref(v_self_434_);
v___x_457_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Package_findModuleBySrc_x3f_spec__2(v_self_434_, v_targetDecls_439_, v___x_455_, v___x_456_, v___x_452_);
v___y_441_ = v___x_457_;
goto v___jp_440_;
}
v___jp_435_:
{
lean_object* v___x_437_; lean_object* v___x_438_; 
v___x_437_ = lean_array_get_size(v___y_436_);
v___x_438_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lake_Package_findModuleBySrc_x3f_spec__0___redArg(v_path_433_, v___y_436_, v___x_437_);
lean_dec_ref(v___y_436_);
return v___x_438_;
}
v___jp_440_:
{
lean_object* v___x_442_; lean_object* v___x_443_; 
v___x_442_ = lean_array_get_size(v___y_441_);
lean_inc_ref(v_path_433_);
v___x_443_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lake_Package_findModuleBySrc_x3f_spec__1___redArg(v_path_433_, v___y_441_, v___x_442_);
lean_dec_ref(v___y_441_);
if (lean_obj_tag(v___x_443_) == 0)
{
lean_object* v___x_444_; lean_object* v___x_445_; lean_object* v___x_446_; uint8_t v___x_447_; 
v___x_444_ = lean_unsigned_to_nat(0u);
v___x_445_ = ((lean_object*)(l_Lake_Package_leanExes___closed__0));
v___x_446_ = lean_array_get_size(v_targetDecls_439_);
v___x_447_ = lean_nat_dec_lt(v___x_444_, v___x_446_);
if (v___x_447_ == 0)
{
lean_dec_ref(v_targetDecls_439_);
lean_dec_ref(v_self_434_);
v___y_436_ = v___x_445_;
goto v___jp_435_;
}
else
{
size_t v___x_448_; size_t v___x_449_; lean_object* v___x_450_; 
v___x_448_ = ((size_t)0ULL);
v___x_449_ = lean_usize_of_nat(v___x_446_);
v___x_450_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lake_Package_findTargetModule_x3f_spec__1(v_self_434_, v_targetDecls_439_, v___x_448_, v___x_449_, v___x_445_);
lean_dec_ref(v_targetDecls_439_);
v___y_436_ = v___x_450_;
goto v___jp_435_;
}
}
else
{
lean_dec_ref(v_targetDecls_439_);
lean_dec_ref(v_self_434_);
lean_dec_ref(v_path_433_);
return v___x_443_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lake_Package_findModuleBySrc_x3f_spec__0(lean_object* v_path_458_, lean_object* v_as_459_, lean_object* v_i_460_, lean_object* v_a_461_){
_start:
{
lean_object* v___x_462_; 
v___x_462_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lake_Package_findModuleBySrc_x3f_spec__0___redArg(v_path_458_, v_as_459_, v_i_460_);
return v___x_462_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lake_Package_findModuleBySrc_x3f_spec__0___boxed(lean_object* v_path_463_, lean_object* v_as_464_, lean_object* v_i_465_, lean_object* v_a_466_){
_start:
{
lean_object* v_res_467_; 
v_res_467_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lake_Package_findModuleBySrc_x3f_spec__0(v_path_463_, v_as_464_, v_i_465_, v_a_466_);
lean_dec_ref(v_as_464_);
return v_res_467_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lake_Package_findModuleBySrc_x3f_spec__1(lean_object* v_path_468_, lean_object* v_as_469_, lean_object* v_i_470_, lean_object* v_a_471_){
_start:
{
lean_object* v___x_472_; 
v___x_472_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lake_Package_findModuleBySrc_x3f_spec__1___redArg(v_path_468_, v_as_469_, v_i_470_);
return v___x_472_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lake_Package_findModuleBySrc_x3f_spec__1___boxed(lean_object* v_path_473_, lean_object* v_as_474_, lean_object* v_i_475_, lean_object* v_a_476_){
_start:
{
lean_object* v_res_477_; 
v_res_477_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lake_Package_findModuleBySrc_x3f_spec__1(v_path_473_, v_as_474_, v_i_475_, v_a_476_);
lean_dec_ref(v_as_474_);
return v_res_477_;
}
}
lean_object* runtime_initialize_Lake_Config_Module(uint8_t builtin);
void lean_initialize();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lake_Config_LeanExe(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize();
res = runtime_initialize_Lake_Config_Module(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lake_Config_LeanExe(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lake_Config_Module(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lake_Config_LeanExe(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lake_Config_Module(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Config_LeanExe(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lake_Config_LeanExe(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lake_Config_LeanExe(builtin);
}
#ifdef __cplusplus
}
#endif

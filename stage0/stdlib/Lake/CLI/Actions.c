// Lean compiler output
// Module: Lake.CLI.Actions
// Imports: public import Lake.Config.Workspace import Lake.Build.Run import Lake.Build.Actions import Lake.Build.Targets import Lake.Build.Module import Lake.Util.Proc
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
extern lean_object* l_Lake_LeanExe_exeFacet;
extern lean_object* l_Lake_LeanExe_keyword;
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
uint8_t lean_name_eq(lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* l_Lake_Workspace_augmentedEnvVars(lean_object*);
lean_object* lean_io_process_spawn(lean_object*);
lean_object* lean_io_process_child_wait(lean_object*, lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Name_toString(lean_object*, uint8_t);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* lean_mk_io_user_error(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_String_Slice_toString(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
uint32_t lean_string_utf8_get_fast(lean_object*, lean_object*);
uint8_t lean_uint32_dec_eq(uint32_t, uint32_t);
lean_object* lean_string_utf8_next_fast(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_String_Slice_subslice_x21(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_String_toName(lean_object*);
size_t lean_array_size(lean_object*);
extern lean_object* l_Lake_LeanLib_defaultFacet;
lean_object* l_Lake_Workspace_runBuild___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lake_Package_findTargetDecl_x3f(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t l_List_isEmpty___redArg(lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_List_appendTR___redArg(lean_object*, lean_object*);
lean_object* l_Lake_Script_run(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_mk(lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* l_System_FilePath_normalize(lean_object*);
lean_object* l_Lake_joinRelative(lean_object*, lean_object*);
lean_object* l_Lake_tar(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lake_Workspace_findLeanExe_x3f(lean_object*, lean_object*);
lean_object* l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(lean_object*, uint8_t);
lean_object* l_Lake_untar(lean_object*, lean_object*, uint8_t, lean_object*);
lean_object* l_Lake_prepareLeanCommand___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lake_proc(lean_object*, uint8_t, lean_object*, lean_object*);
extern lean_object* l_Lake_defaultLakeDir;
static const lean_ctor_object l_Lake_env___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(1, 1, 1, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lake_env___closed__0 = (const lean_object*)&l_Lake_env___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_env(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_env___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_exe___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_exe___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lake_exe___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "unknown executable `"};
static const lean_object* l_Lake_exe___closed__0 = (const lean_object*)&l_Lake_exe___closed__0_value;
static const lean_string_object l_Lake_exe___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l_Lake_exe___closed__1 = (const lean_object*)&l_Lake_exe___closed__1_value;
LEAN_EXPORT lean_object* l_Lake_exe(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_exe___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lake_Package_pack___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "packing "};
static const lean_object* l_Lake_Package_pack___closed__0 = (const lean_object*)&l_Lake_Package_pack___closed__0_value;
static const lean_array_object l_Lake_Package_pack___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lake_Package_pack___closed__1 = (const lean_object*)&l_Lake_Package_pack___closed__1_value;
LEAN_EXPORT lean_object* l_Lake_Package_pack(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Package_pack___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lake_Package_unpack___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "unpacking "};
static const lean_object* l_Lake_Package_unpack___closed__0 = (const lean_object*)&l_Lake_Package_unpack___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_Package_unpack(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Package_unpack___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lake_Package_uploadRelease___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "gh"};
static const lean_object* l_Lake_Package_uploadRelease___closed__0 = (const lean_object*)&l_Lake_Package_uploadRelease___closed__0_value;
static const lean_array_object l_Lake_Package_uploadRelease___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lake_Package_uploadRelease___closed__1 = (const lean_object*)&l_Lake_Package_uploadRelease___closed__1_value;
static const lean_string_object l_Lake_Package_uploadRelease___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "uploading "};
static const lean_object* l_Lake_Package_uploadRelease___closed__2 = (const lean_object*)&l_Lake_Package_uploadRelease___closed__2_value;
static const lean_string_object l_Lake_Package_uploadRelease___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ":"};
static const lean_object* l_Lake_Package_uploadRelease___closed__3 = (const lean_object*)&l_Lake_Package_uploadRelease___closed__3_value;
static const lean_string_object l_Lake_Package_uploadRelease___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "release"};
static const lean_object* l_Lake_Package_uploadRelease___closed__4 = (const lean_object*)&l_Lake_Package_uploadRelease___closed__4_value;
static const lean_string_object l_Lake_Package_uploadRelease___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "upload"};
static const lean_object* l_Lake_Package_uploadRelease___closed__5 = (const lean_object*)&l_Lake_Package_uploadRelease___closed__5_value;
static const lean_string_object l_Lake_Package_uploadRelease___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "--clobber"};
static const lean_object* l_Lake_Package_uploadRelease___closed__6 = (const lean_object*)&l_Lake_Package_uploadRelease___closed__6_value;
static lean_once_cell_t l_Lake_Package_uploadRelease___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Package_uploadRelease___closed__7;
static lean_once_cell_t l_Lake_Package_uploadRelease___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Package_uploadRelease___closed__8;
static const lean_string_object l_Lake_Package_uploadRelease___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "-R"};
static const lean_object* l_Lake_Package_uploadRelease___closed__9 = (const lean_object*)&l_Lake_Package_uploadRelease___closed__9_value;
static lean_once_cell_t l_Lake_Package_uploadRelease___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Package_uploadRelease___closed__10;
LEAN_EXPORT lean_object* l_Lake_Package_uploadRelease(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Package_uploadRelease___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_String_Slice_splitToSubslice___at___00Lake_Package_resolveDriver_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_String_Slice_splitToSubslice___at___00Lake_Package_resolveDriver_spec__0___redArg___closed__0 = (const lean_object*)&l_String_Slice_splitToSubslice___at___00Lake_Package_resolveDriver_spec__0___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00Lake_Package_resolveDriver_spec__0___redArg();
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00Lake_Package_resolveDriver_spec__0___redArg___boxed(lean_object*);
static lean_once_cell_t l_String_Slice_splitToSubslice___at___00Lake_Package_resolveDriver_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_String_Slice_splitToSubslice___at___00Lake_Package_resolveDriver_spec__0___closed__0;
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00Lake_Package_resolveDriver_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00Lake_Package_resolveDriver_spec__0___boxed(lean_object*);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Package_resolveDriver_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Package_resolveDriver_spec__2___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Package_resolveDriver_spec__2___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Package_resolveDriver_spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Package_resolveDriver_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lake_Package_resolveDriver_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lake_Package_resolveDriver_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lake_Package_resolveDriver___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = ": invalid "};
static const lean_object* l_Lake_Package_resolveDriver___closed__0 = (const lean_object*)&l_Lake_Package_resolveDriver___closed__0_value;
static const lean_string_object l_Lake_Package_resolveDriver___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = " driver '"};
static const lean_object* l_Lake_Package_resolveDriver___closed__1 = (const lean_object*)&l_Lake_Package_resolveDriver___closed__1_value;
static const lean_string_object l_Lake_Package_resolveDriver___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "' (too many '/')"};
static const lean_object* l_Lake_Package_resolveDriver___closed__2 = (const lean_object*)&l_Lake_Package_resolveDriver___closed__2_value;
static const lean_string_object l_Lake_Package_resolveDriver___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = ": unknown "};
static const lean_object* l_Lake_Package_resolveDriver___closed__3 = (const lean_object*)&l_Lake_Package_resolveDriver___closed__3_value;
static const lean_string_object l_Lake_Package_resolveDriver___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = " driver package '"};
static const lean_object* l_Lake_Package_resolveDriver___closed__4 = (const lean_object*)&l_Lake_Package_resolveDriver___closed__4_value;
static const lean_string_object l_Lake_Package_resolveDriver___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "'"};
static const lean_object* l_Lake_Package_resolveDriver___closed__5 = (const lean_object*)&l_Lake_Package_resolveDriver___closed__5_value;
static const lean_string_object l_Lake_Package_resolveDriver___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = ": no "};
static const lean_object* l_Lake_Package_resolveDriver___closed__6 = (const lean_object*)&l_Lake_Package_resolveDriver___closed__6_value;
static const lean_string_object l_Lake_Package_resolveDriver___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = " driver configured"};
static const lean_object* l_Lake_Package_resolveDriver___closed__7 = (const lean_object*)&l_Lake_Package_resolveDriver___closed__7_value;
LEAN_EXPORT lean_object* l_Lake_Package_resolveDriver(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Package_resolveDriver___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lake_Package_resolveDriver_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lake_Package_resolveDriver_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Package_test___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Package_test___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Package_test___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Package_test___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lake_Package_test___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "test"};
static const lean_object* l_Lake_Package_test___closed__0 = (const lean_object*)&l_Lake_Package_test___closed__0_value;
static const lean_string_object l_Lake_Package_test___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = ": arguments cannot be passed to a library test driver"};
static const lean_object* l_Lake_Package_test___closed__1 = (const lean_object*)&l_Lake_Package_test___closed__1_value;
static const lean_string_object l_Lake_Package_test___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 64, .m_capacity = 64, .m_length = 63, .m_data = ": invalid test driver: unknown script, executable, or library '"};
static const lean_object* l_Lake_Package_test___closed__2 = (const lean_object*)&l_Lake_Package_test___closed__2_value;
static const lean_string_object l_Lake_Package_test___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "lean_lib"};
static const lean_object* l_Lake_Package_test___closed__3 = (const lean_object*)&l_Lake_Package_test___closed__3_value;
static const lean_ctor_object l_Lake_Package_test___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_Package_test___closed__3_value),LEAN_SCALAR_PTR_LITERAL(99, 123, 8, 14, 20, 41, 164, 170)}};
static const lean_object* l_Lake_Package_test___closed__4 = (const lean_object*)&l_Lake_Package_test___closed__4_value;
LEAN_EXPORT lean_object* l_Lake_Package_test___boxed__const__1;
LEAN_EXPORT lean_object* l_Lake_Package_test(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Package_test___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lake_Package_lint___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "lint"};
static const lean_object* l_Lake_Package_lint___closed__0 = (const lean_object*)&l_Lake_Package_lint___closed__0_value;
static const lean_string_object l_Lake_Package_lint___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = ": invalid lint driver: unknown script or executable '"};
static const lean_object* l_Lake_Package_lint___closed__1 = (const lean_object*)&l_Lake_Package_lint___closed__1_value;
LEAN_EXPORT lean_object* l_Lake_Package_lint(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Package_lint___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Workspace_evalLeanFile(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Workspace_evalLeanFile___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_env(lean_object* v_cmd_3_, lean_object* v_args_4_, lean_object* v_a_5_){
_start:
{
lean_object* v___x_7_; lean_object* v___x_8_; lean_object* v___x_9_; lean_object* v___x_10_; uint8_t v___x_11_; uint8_t v___x_12_; lean_object* v___x_13_; lean_object* v___x_14_; 
v___x_7_ = l_unsafeCast___redArg(v_a_5_);
v___x_8_ = l_Lake_Workspace_augmentedEnvVars(v___x_7_);
v___x_9_ = ((lean_object*)(l_Lake_env___closed__0));
v___x_10_ = lean_box(0);
v___x_11_ = 1;
v___x_12_ = 0;
v___x_13_ = lean_alloc_ctor(0, 5, 2);
lean_ctor_set(v___x_13_, 0, v___x_9_);
lean_ctor_set(v___x_13_, 1, v_cmd_3_);
lean_ctor_set(v___x_13_, 2, v_args_4_);
lean_ctor_set(v___x_13_, 3, v___x_10_);
lean_ctor_set(v___x_13_, 4, v___x_8_);
lean_ctor_set_uint8(v___x_13_, sizeof(void*)*5, v___x_11_);
lean_ctor_set_uint8(v___x_13_, sizeof(void*)*5 + 1, v___x_12_);
v___x_14_ = lean_io_process_spawn(v___x_13_);
if (lean_obj_tag(v___x_14_) == 0)
{
lean_object* v_a_15_; lean_object* v___x_16_; 
v_a_15_ = lean_ctor_get(v___x_14_, 0);
lean_inc(v_a_15_);
lean_dec_ref_known(v___x_14_, 1);
v___x_16_ = lean_io_process_child_wait(v___x_9_, v_a_15_);
lean_dec(v_a_15_);
return v___x_16_;
}
else
{
lean_object* v_a_17_; lean_object* v___x_19_; uint8_t v_isShared_20_; uint8_t v_isSharedCheck_24_; 
v_a_17_ = lean_ctor_get(v___x_14_, 0);
v_isSharedCheck_24_ = !lean_is_exclusive(v___x_14_);
if (v_isSharedCheck_24_ == 0)
{
v___x_19_ = v___x_14_;
v_isShared_20_ = v_isSharedCheck_24_;
goto v_resetjp_18_;
}
else
{
lean_inc(v_a_17_);
lean_dec(v___x_14_);
v___x_19_ = lean_box(0);
v_isShared_20_ = v_isSharedCheck_24_;
goto v_resetjp_18_;
}
v_resetjp_18_:
{
lean_object* v___x_22_; 
if (v_isShared_20_ == 0)
{
v___x_22_ = v___x_19_;
goto v_reusejp_21_;
}
else
{
lean_object* v_reuseFailAlloc_23_; 
v_reuseFailAlloc_23_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_23_, 0, v_a_17_);
v___x_22_ = v_reuseFailAlloc_23_;
goto v_reusejp_21_;
}
v_reusejp_21_:
{
return v___x_22_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_env___boxed(lean_object* v_cmd_25_, lean_object* v_args_26_, lean_object* v_a_27_, lean_object* v_a_28_){
_start:
{
lean_object* v_res_29_; 
v_res_29_ = l_Lake_env(v_cmd_25_, v_args_26_, v_a_27_);
lean_dec(v_a_27_);
return v_res_29_;
}
}
LEAN_EXPORT lean_object* l_Lake_exe___lam__0(lean_object* v_val_30_, lean_object* v___y_31_, lean_object* v___y_32_, lean_object* v___y_33_, lean_object* v___y_34_, lean_object* v___y_35_, lean_object* v___y_36_){
_start:
{
lean_object* v_pkg_38_; lean_object* v_name_39_; lean_object* v_keyName_40_; lean_object* v___x_41_; lean_object* v___x_42_; lean_object* v___x_43_; lean_object* v___x_44_; lean_object* v___x_45_; 
v_pkg_38_ = lean_ctor_get(v_val_30_, 0);
v_name_39_ = lean_ctor_get(v_val_30_, 1);
v_keyName_40_ = lean_ctor_get(v_pkg_38_, 2);
v___x_41_ = l_Lake_LeanExe_exeFacet;
lean_inc(v_name_39_);
lean_inc(v_keyName_40_);
v___x_42_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_42_, 0, v_keyName_40_);
lean_ctor_set(v___x_42_, 1, v_name_39_);
v___x_43_ = l_Lake_LeanExe_keyword;
v___x_44_ = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(v___x_44_, 0, v___x_42_);
lean_ctor_set(v___x_44_, 1, v___x_43_);
lean_ctor_set(v___x_44_, 2, v_val_30_);
lean_ctor_set(v___x_44_, 3, v___x_41_);
v___x_45_ = lean_apply_7(v___y_31_, v___x_44_, v___y_32_, v___y_33_, v___y_34_, v___y_35_, v___y_36_, lean_box(0));
return v___x_45_;
}
}
LEAN_EXPORT lean_object* l_Lake_exe___lam__0___boxed(lean_object* v_val_46_, lean_object* v___y_47_, lean_object* v___y_48_, lean_object* v___y_49_, lean_object* v___y_50_, lean_object* v___y_51_, lean_object* v___y_52_, lean_object* v___y_53_){
_start:
{
lean_object* v_res_54_; 
v_res_54_ = l_Lake_exe___lam__0(v_val_46_, v___y_47_, v___y_48_, v___y_49_, v___y_50_, v___y_51_, v___y_52_);
return v_res_54_;
}
}
LEAN_EXPORT lean_object* l_Lake_exe(lean_object* v_name_57_, lean_object* v_args_58_, lean_object* v_buildConfig_59_, lean_object* v_a_60_){
_start:
{
lean_object* v___x_62_; lean_object* v___x_63_; 
v___x_62_ = l_unsafeCast___redArg(v_a_60_);
v___x_63_ = l_Lake_Workspace_findLeanExe_x3f(v_name_57_, v___x_62_);
if (lean_obj_tag(v___x_63_) == 1)
{
lean_object* v_val_64_; lean_object* v___f_65_; lean_object* v___x_66_; 
lean_dec(v_name_57_);
v_val_64_ = lean_ctor_get(v___x_63_, 0);
lean_inc(v_val_64_);
lean_dec_ref_known(v___x_63_, 1);
v___f_65_ = lean_alloc_closure((void*)(l_Lake_exe___lam__0___boxed), 8, 1);
lean_closure_set(v___f_65_, 0, v_val_64_);
v___x_66_ = l_Lake_Workspace_runBuild___redArg(v___x_62_, v___f_65_, v_buildConfig_59_);
if (lean_obj_tag(v___x_66_) == 0)
{
lean_object* v_a_67_; lean_object* v___x_68_; 
v_a_67_ = lean_ctor_get(v___x_66_, 0);
lean_inc(v_a_67_);
lean_dec_ref_known(v___x_66_, 1);
v___x_68_ = l_Lake_env(v_a_67_, v_args_58_, v_a_60_);
return v___x_68_;
}
else
{
lean_object* v_a_69_; lean_object* v___x_71_; uint8_t v_isShared_72_; uint8_t v_isSharedCheck_76_; 
lean_dec_ref(v_args_58_);
v_a_69_ = lean_ctor_get(v___x_66_, 0);
v_isSharedCheck_76_ = !lean_is_exclusive(v___x_66_);
if (v_isSharedCheck_76_ == 0)
{
v___x_71_ = v___x_66_;
v_isShared_72_ = v_isSharedCheck_76_;
goto v_resetjp_70_;
}
else
{
lean_inc(v_a_69_);
lean_dec(v___x_66_);
v___x_71_ = lean_box(0);
v_isShared_72_ = v_isSharedCheck_76_;
goto v_resetjp_70_;
}
v_resetjp_70_:
{
lean_object* v___x_74_; 
if (v_isShared_72_ == 0)
{
v___x_74_ = v___x_71_;
goto v_reusejp_73_;
}
else
{
lean_object* v_reuseFailAlloc_75_; 
v_reuseFailAlloc_75_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_75_, 0, v_a_69_);
v___x_74_ = v_reuseFailAlloc_75_;
goto v_reusejp_73_;
}
v_reusejp_73_:
{
return v___x_74_;
}
}
}
}
else
{
lean_object* v___x_77_; uint8_t v___x_78_; lean_object* v___x_79_; lean_object* v___x_80_; lean_object* v___x_81_; lean_object* v___x_82_; lean_object* v___x_83_; lean_object* v___x_84_; 
lean_dec(v___x_63_);
lean_dec(v___x_62_);
lean_dec_ref(v_buildConfig_59_);
lean_dec_ref(v_args_58_);
v___x_77_ = ((lean_object*)(l_Lake_exe___closed__0));
v___x_78_ = 1;
v___x_79_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_name_57_, v___x_78_);
v___x_80_ = lean_string_append(v___x_77_, v___x_79_);
lean_dec_ref(v___x_79_);
v___x_81_ = ((lean_object*)(l_Lake_exe___closed__1));
v___x_82_ = lean_string_append(v___x_80_, v___x_81_);
v___x_83_ = lean_mk_io_user_error(v___x_82_);
v___x_84_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_84_, 0, v___x_83_);
return v___x_84_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_exe___boxed(lean_object* v_name_85_, lean_object* v_args_86_, lean_object* v_buildConfig_87_, lean_object* v_a_88_, lean_object* v_a_89_){
_start:
{
lean_object* v_res_90_; 
v_res_90_ = l_Lake_exe(v_name_85_, v_args_86_, v_buildConfig_87_, v_a_88_);
lean_dec(v_a_88_);
return v_res_90_;
}
}
LEAN_EXPORT lean_object* l_Lake_Package_pack(lean_object* v_pkg_94_, lean_object* v_file_95_, lean_object* v_a_96_){
_start:
{
lean_object* v_config_98_; lean_object* v_dir_99_; lean_object* v_buildDir_100_; lean_object* v___x_101_; lean_object* v___x_102_; uint8_t v___x_103_; lean_object* v___x_104_; lean_object* v___x_105_; lean_object* v___x_106_; lean_object* v___x_107_; uint8_t v___x_108_; lean_object* v___x_109_; lean_object* v___x_110_; 
v_config_98_ = lean_ctor_get(v_pkg_94_, 6);
lean_inc_ref(v_config_98_);
v_dir_99_ = lean_ctor_get(v_pkg_94_, 4);
lean_inc_ref(v_dir_99_);
lean_dec_ref(v_pkg_94_);
v_buildDir_100_ = lean_ctor_get(v_config_98_, 5);
lean_inc_ref(v_buildDir_100_);
lean_dec_ref(v_config_98_);
v___x_101_ = ((lean_object*)(l_Lake_Package_pack___closed__0));
v___x_102_ = lean_string_append(v___x_101_, v_file_95_);
v___x_103_ = 1;
v___x_104_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_104_, 0, v___x_102_);
lean_ctor_set_uint8(v___x_104_, sizeof(void*)*1, v___x_103_);
v___x_105_ = lean_array_push(v_a_96_, v___x_104_);
v___x_106_ = l_System_FilePath_normalize(v_buildDir_100_);
v___x_107_ = l_Lake_joinRelative(v_dir_99_, v___x_106_);
v___x_108_ = 1;
v___x_109_ = ((lean_object*)(l_Lake_Package_pack___closed__1));
v___x_110_ = l_Lake_tar(v___x_107_, v_file_95_, v___x_108_, v___x_109_, v___x_105_);
return v___x_110_;
}
}
LEAN_EXPORT lean_object* l_Lake_Package_pack___boxed(lean_object* v_pkg_111_, lean_object* v_file_112_, lean_object* v_a_113_, lean_object* v_a_114_){
_start:
{
lean_object* v_res_115_; 
v_res_115_ = l_Lake_Package_pack(v_pkg_111_, v_file_112_, v_a_113_);
return v_res_115_;
}
}
LEAN_EXPORT lean_object* l_Lake_Package_unpack(lean_object* v_pkg_117_, lean_object* v_file_118_, lean_object* v_a_119_){
_start:
{
lean_object* v_config_121_; lean_object* v_dir_122_; lean_object* v_buildDir_123_; lean_object* v___x_124_; lean_object* v___x_125_; uint8_t v___x_126_; lean_object* v___x_127_; lean_object* v___x_128_; lean_object* v___x_129_; lean_object* v___x_130_; uint8_t v___x_131_; lean_object* v___x_132_; 
v_config_121_ = lean_ctor_get(v_pkg_117_, 6);
lean_inc_ref(v_config_121_);
v_dir_122_ = lean_ctor_get(v_pkg_117_, 4);
lean_inc_ref(v_dir_122_);
lean_dec_ref(v_pkg_117_);
v_buildDir_123_ = lean_ctor_get(v_config_121_, 5);
lean_inc_ref(v_buildDir_123_);
lean_dec_ref(v_config_121_);
v___x_124_ = ((lean_object*)(l_Lake_Package_unpack___closed__0));
v___x_125_ = lean_string_append(v___x_124_, v_file_118_);
v___x_126_ = 1;
v___x_127_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_127_, 0, v___x_125_);
lean_ctor_set_uint8(v___x_127_, sizeof(void*)*1, v___x_126_);
v___x_128_ = lean_array_push(v_a_119_, v___x_127_);
v___x_129_ = l_System_FilePath_normalize(v_buildDir_123_);
v___x_130_ = l_Lake_joinRelative(v_dir_122_, v___x_129_);
v___x_131_ = 1;
v___x_132_ = l_Lake_untar(v_file_118_, v___x_130_, v___x_131_, v___x_128_);
return v___x_132_;
}
}
LEAN_EXPORT lean_object* l_Lake_Package_unpack___boxed(lean_object* v_pkg_133_, lean_object* v_file_134_, lean_object* v_a_135_, lean_object* v_a_136_){
_start:
{
lean_object* v_res_137_; 
v_res_137_ = l_Lake_Package_unpack(v_pkg_133_, v_file_134_, v_a_135_);
return v_res_137_;
}
}
static lean_object* _init_l_Lake_Package_uploadRelease___closed__7(void){
_start:
{
lean_object* v___x_146_; lean_object* v___x_147_; lean_object* v___x_148_; lean_object* v___x_149_; 
v___x_146_ = ((lean_object*)(l_Lake_Package_uploadRelease___closed__4));
v___x_147_ = lean_unsigned_to_nat(5u);
v___x_148_ = lean_mk_empty_array_with_capacity(v___x_147_);
v___x_149_ = lean_array_push(v___x_148_, v___x_146_);
return v___x_149_;
}
}
static lean_object* _init_l_Lake_Package_uploadRelease___closed__8(void){
_start:
{
lean_object* v___x_150_; lean_object* v___x_151_; lean_object* v___x_152_; 
v___x_150_ = ((lean_object*)(l_Lake_Package_uploadRelease___closed__5));
v___x_151_ = lean_obj_once(&l_Lake_Package_uploadRelease___closed__7, &l_Lake_Package_uploadRelease___closed__7_once, _init_l_Lake_Package_uploadRelease___closed__7);
v___x_152_ = lean_array_push(v___x_151_, v___x_150_);
return v___x_152_;
}
}
static lean_object* _init_l_Lake_Package_uploadRelease___closed__10(void){
_start:
{
lean_object* v___x_154_; lean_object* v___x_155_; lean_object* v___x_156_; lean_object* v___x_157_; 
v___x_154_ = ((lean_object*)(l_Lake_Package_uploadRelease___closed__9));
v___x_155_ = lean_unsigned_to_nat(2u);
v___x_156_ = lean_mk_empty_array_with_capacity(v___x_155_);
v___x_157_ = lean_array_push(v___x_156_, v___x_154_);
return v___x_157_;
}
}
LEAN_EXPORT lean_object* l_Lake_Package_uploadRelease(lean_object* v_pkg_158_, lean_object* v_tag_159_, lean_object* v_a_160_){
_start:
{
lean_object* v_args_163_; lean_object* v___y_164_; lean_object* v_dir_173_; lean_object* v_config_174_; lean_object* v_buildArchive_175_; lean_object* v___x_176_; lean_object* v___x_177_; lean_object* v___x_178_; lean_object* v___x_179_; 
v_dir_173_ = lean_ctor_get(v_pkg_158_, 4);
v_config_174_ = lean_ctor_get(v_pkg_158_, 6);
lean_inc_ref(v_config_174_);
v_buildArchive_175_ = lean_ctor_get(v_pkg_158_, 21);
lean_inc_ref_n(v_buildArchive_175_, 2);
v___x_176_ = l_Lake_defaultLakeDir;
lean_inc_ref(v_dir_173_);
v___x_177_ = l_Lake_joinRelative(v_dir_173_, v___x_176_);
v___x_178_ = l_Lake_joinRelative(v___x_177_, v_buildArchive_175_);
lean_inc_ref(v___x_178_);
v___x_179_ = l_Lake_Package_pack(v_pkg_158_, v___x_178_, v_a_160_);
if (lean_obj_tag(v___x_179_) == 0)
{
lean_object* v_a_180_; lean_object* v_releaseRepo_181_; lean_object* v___x_182_; lean_object* v___x_183_; lean_object* v___x_184_; lean_object* v___x_185_; lean_object* v___x_186_; uint8_t v___x_187_; lean_object* v___x_188_; lean_object* v___x_189_; lean_object* v___x_190_; lean_object* v___x_191_; lean_object* v___x_192_; lean_object* v___x_193_; lean_object* v___x_194_; 
v_a_180_ = lean_ctor_get(v___x_179_, 1);
lean_inc(v_a_180_);
lean_dec_ref_known(v___x_179_, 2);
v_releaseRepo_181_ = lean_ctor_get(v_config_174_, 10);
lean_inc(v_releaseRepo_181_);
lean_dec_ref(v_config_174_);
v___x_182_ = ((lean_object*)(l_Lake_Package_uploadRelease___closed__2));
v___x_183_ = lean_string_append(v___x_182_, v_tag_159_);
v___x_184_ = ((lean_object*)(l_Lake_Package_uploadRelease___closed__3));
v___x_185_ = lean_string_append(v___x_183_, v___x_184_);
v___x_186_ = lean_string_append(v___x_185_, v_buildArchive_175_);
lean_dec_ref(v_buildArchive_175_);
v___x_187_ = 1;
v___x_188_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_188_, 0, v___x_186_);
lean_ctor_set_uint8(v___x_188_, sizeof(void*)*1, v___x_187_);
v___x_189_ = lean_array_push(v_a_180_, v___x_188_);
v___x_190_ = ((lean_object*)(l_Lake_Package_uploadRelease___closed__6));
v___x_191_ = lean_obj_once(&l_Lake_Package_uploadRelease___closed__8, &l_Lake_Package_uploadRelease___closed__8_once, _init_l_Lake_Package_uploadRelease___closed__8);
v___x_192_ = lean_array_push(v___x_191_, v_tag_159_);
v___x_193_ = lean_array_push(v___x_192_, v___x_178_);
v___x_194_ = lean_array_push(v___x_193_, v___x_190_);
if (lean_obj_tag(v_releaseRepo_181_) == 1)
{
lean_object* v_val_195_; lean_object* v___x_196_; lean_object* v___x_197_; lean_object* v___x_198_; 
v_val_195_ = lean_ctor_get(v_releaseRepo_181_, 0);
lean_inc(v_val_195_);
lean_dec_ref_known(v_releaseRepo_181_, 1);
v___x_196_ = lean_obj_once(&l_Lake_Package_uploadRelease___closed__10, &l_Lake_Package_uploadRelease___closed__10_once, _init_l_Lake_Package_uploadRelease___closed__10);
v___x_197_ = lean_array_push(v___x_196_, v_val_195_);
v___x_198_ = l_Array_append___redArg(v___x_194_, v___x_197_);
lean_dec_ref(v___x_197_);
v_args_163_ = v___x_198_;
v___y_164_ = v___x_189_;
goto v___jp_162_;
}
else
{
lean_dec(v_releaseRepo_181_);
v_args_163_ = v___x_194_;
v___y_164_ = v___x_189_;
goto v___jp_162_;
}
}
else
{
lean_dec_ref(v___x_178_);
lean_dec_ref(v_buildArchive_175_);
lean_dec_ref(v_config_174_);
lean_dec_ref(v_tag_159_);
return v___x_179_;
}
v___jp_162_:
{
lean_object* v___x_165_; lean_object* v___x_166_; lean_object* v___x_167_; lean_object* v___x_168_; uint8_t v___x_169_; uint8_t v___x_170_; lean_object* v___x_171_; lean_object* v___x_172_; 
v___x_165_ = ((lean_object*)(l_Lake_env___closed__0));
v___x_166_ = ((lean_object*)(l_Lake_Package_uploadRelease___closed__0));
v___x_167_ = lean_box(0);
v___x_168_ = ((lean_object*)(l_Lake_Package_uploadRelease___closed__1));
v___x_169_ = 1;
v___x_170_ = 0;
v___x_171_ = lean_alloc_ctor(0, 5, 2);
lean_ctor_set(v___x_171_, 0, v___x_165_);
lean_ctor_set(v___x_171_, 1, v___x_166_);
lean_ctor_set(v___x_171_, 2, v_args_163_);
lean_ctor_set(v___x_171_, 3, v___x_167_);
lean_ctor_set(v___x_171_, 4, v___x_168_);
lean_ctor_set_uint8(v___x_171_, sizeof(void*)*5, v___x_169_);
lean_ctor_set_uint8(v___x_171_, sizeof(void*)*5 + 1, v___x_170_);
v___x_172_ = l_Lake_proc(v___x_171_, v___x_170_, v___x_167_, v___y_164_);
return v___x_172_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_Package_uploadRelease___boxed(lean_object* v_pkg_199_, lean_object* v_tag_200_, lean_object* v_a_201_, lean_object* v_a_202_){
_start:
{
lean_object* v_res_203_; 
v_res_203_ = l_Lake_Package_uploadRelease(v_pkg_199_, v_tag_200_, v_a_201_);
return v_res_203_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00Lake_Package_resolveDriver_spec__0___redArg(){
_start:
{
lean_object* v___x_207_; 
v___x_207_ = ((lean_object*)(l_String_Slice_splitToSubslice___at___00Lake_Package_resolveDriver_spec__0___redArg___closed__0));
return v___x_207_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00Lake_Package_resolveDriver_spec__0___redArg___boxed(lean_object* v___dummy_208_){
_start:
{
lean_object* v_res_209_; 
v_res_209_ = l_String_Slice_splitToSubslice___at___00Lake_Package_resolveDriver_spec__0___redArg();
return v_res_209_;
}
}
static lean_object* _init_l_String_Slice_splitToSubslice___at___00Lake_Package_resolveDriver_spec__0___closed__0(void){
_start:
{
lean_object* v___x_210_; 
v___x_210_ = l_String_Slice_splitToSubslice___at___00Lake_Package_resolveDriver_spec__0___redArg();
return v___x_210_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00Lake_Package_resolveDriver_spec__0(lean_object* v_s_211_){
_start:
{
lean_object* v___x_212_; 
v___x_212_ = lean_obj_once(&l_String_Slice_splitToSubslice___at___00Lake_Package_resolveDriver_spec__0___closed__0, &l_String_Slice_splitToSubslice___at___00Lake_Package_resolveDriver_spec__0___closed__0_once, _init_l_String_Slice_splitToSubslice___at___00Lake_Package_resolveDriver_spec__0___closed__0);
return v___x_212_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00Lake_Package_resolveDriver_spec__0___boxed(lean_object* v_s_213_){
_start:
{
lean_object* v_res_214_; 
v_res_214_ = l_String_Slice_splitToSubslice___at___00Lake_Package_resolveDriver_spec__0(v_s_213_);
lean_dec_ref(v_s_213_);
return v_res_214_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Package_resolveDriver_spec__2(lean_object* v___x_218_, lean_object* v_as_219_, size_t v_sz_220_, size_t v_i_221_, lean_object* v_b_222_){
_start:
{
uint8_t v___x_223_; 
v___x_223_ = lean_usize_dec_lt(v_i_221_, v_sz_220_);
if (v___x_223_ == 0)
{
lean_inc_ref(v_b_222_);
return v_b_222_;
}
else
{
lean_object* v_a_224_; lean_object* v_baseName_225_; lean_object* v___x_226_; uint8_t v___x_227_; 
v_a_224_ = lean_array_uget_borrowed(v_as_219_, v_i_221_);
v_baseName_225_ = lean_ctor_get(v_a_224_, 1);
v___x_226_ = lean_box(0);
v___x_227_ = lean_name_eq(v_baseName_225_, v___x_218_);
if (v___x_227_ == 0)
{
lean_object* v___x_228_; size_t v___x_229_; size_t v___x_230_; 
v___x_228_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Package_resolveDriver_spec__2___closed__0));
v___x_229_ = ((size_t)1ULL);
v___x_230_ = lean_usize_add(v_i_221_, v___x_229_);
v_i_221_ = v___x_230_;
v_b_222_ = v___x_228_;
goto _start;
}
else
{
lean_object* v___x_232_; lean_object* v___x_233_; lean_object* v___x_234_; 
lean_inc(v_a_224_);
v___x_232_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_232_, 0, v_a_224_);
v___x_233_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_233_, 0, v___x_232_);
v___x_234_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_234_, 0, v___x_233_);
lean_ctor_set(v___x_234_, 1, v___x_226_);
return v___x_234_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Package_resolveDriver_spec__2___boxed(lean_object* v___x_235_, lean_object* v_as_236_, lean_object* v_sz_237_, lean_object* v_i_238_, lean_object* v_b_239_){
_start:
{
size_t v_sz_boxed_240_; size_t v_i_boxed_241_; lean_object* v_res_242_; 
v_sz_boxed_240_ = lean_unbox_usize(v_sz_237_);
lean_dec(v_sz_237_);
v_i_boxed_241_ = lean_unbox_usize(v_i_238_);
lean_dec(v_i_238_);
v_res_242_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Package_resolveDriver_spec__2(v___x_235_, v_as_236_, v_sz_boxed_240_, v_i_boxed_241_, v_b_239_);
lean_dec_ref(v_b_239_);
lean_dec_ref(v_as_236_);
lean_dec(v___x_235_);
return v_res_242_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lake_Package_resolveDriver_spec__1___redArg(lean_object* v_driver_243_, lean_object* v___x_244_, lean_object* v___x_245_, lean_object* v_a_246_, lean_object* v_b_247_){
_start:
{
lean_object* v_it_249_; lean_object* v_startInclusive_250_; lean_object* v_endExclusive_251_; 
if (lean_obj_tag(v_a_246_) == 0)
{
lean_object* v_currPos_256_; lean_object* v_searcher_257_; lean_object* v___x_259_; uint8_t v_isShared_260_; uint8_t v_isSharedCheck_280_; 
v_currPos_256_ = lean_ctor_get(v_a_246_, 0);
v_searcher_257_ = lean_ctor_get(v_a_246_, 1);
v_isSharedCheck_280_ = !lean_is_exclusive(v_a_246_);
if (v_isSharedCheck_280_ == 0)
{
v___x_259_ = v_a_246_;
v_isShared_260_ = v_isSharedCheck_280_;
goto v_resetjp_258_;
}
else
{
lean_inc(v_searcher_257_);
lean_inc(v_currPos_256_);
lean_dec(v_a_246_);
v___x_259_ = lean_box(0);
v_isShared_260_ = v_isSharedCheck_280_;
goto v_resetjp_258_;
}
v_resetjp_258_:
{
uint8_t v_decide_261_; 
v_decide_261_ = lean_nat_dec_eq(v_searcher_257_, v___x_245_);
if (v_decide_261_ == 0)
{
uint32_t v___x_262_; uint32_t v___x_263_; uint8_t v___x_264_; 
v___x_262_ = 47;
v___x_263_ = lean_string_utf8_get_fast(v_driver_243_, v_searcher_257_);
v___x_264_ = lean_uint32_dec_eq(v___x_263_, v___x_262_);
if (v___x_264_ == 0)
{
lean_object* v___x_265_; lean_object* v___x_267_; 
v___x_265_ = lean_string_utf8_next_fast(v_driver_243_, v_searcher_257_);
lean_dec(v_searcher_257_);
if (v_isShared_260_ == 0)
{
lean_ctor_set(v___x_259_, 1, v___x_265_);
v___x_267_ = v___x_259_;
goto v_reusejp_266_;
}
else
{
lean_object* v_reuseFailAlloc_269_; 
v_reuseFailAlloc_269_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_269_, 0, v_currPos_256_);
lean_ctor_set(v_reuseFailAlloc_269_, 1, v___x_265_);
v___x_267_ = v_reuseFailAlloc_269_;
goto v_reusejp_266_;
}
v_reusejp_266_:
{
v_a_246_ = v___x_267_;
goto _start;
}
}
else
{
lean_object* v___x_270_; lean_object* v___x_271_; lean_object* v___x_272_; lean_object* v_slice_273_; lean_object* v_nextIt_275_; 
v___x_270_ = lean_string_utf8_next_fast(v_driver_243_, v_searcher_257_);
v___x_271_ = lean_nat_sub(v___x_270_, v_searcher_257_);
v___x_272_ = lean_nat_add(v_searcher_257_, v___x_271_);
lean_dec(v___x_271_);
v_slice_273_ = l_String_Slice_subslice_x21(v___x_244_, v_currPos_256_, v_searcher_257_);
lean_inc(v___x_272_);
if (v_isShared_260_ == 0)
{
lean_ctor_set(v___x_259_, 1, v___x_272_);
lean_ctor_set(v___x_259_, 0, v___x_272_);
v_nextIt_275_ = v___x_259_;
goto v_reusejp_274_;
}
else
{
lean_object* v_reuseFailAlloc_278_; 
v_reuseFailAlloc_278_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_278_, 0, v___x_272_);
lean_ctor_set(v_reuseFailAlloc_278_, 1, v___x_272_);
v_nextIt_275_ = v_reuseFailAlloc_278_;
goto v_reusejp_274_;
}
v_reusejp_274_:
{
lean_object* v_startInclusive_276_; lean_object* v_endExclusive_277_; 
v_startInclusive_276_ = lean_ctor_get(v_slice_273_, 0);
lean_inc(v_startInclusive_276_);
v_endExclusive_277_ = lean_ctor_get(v_slice_273_, 1);
lean_inc(v_endExclusive_277_);
lean_dec_ref(v_slice_273_);
v_it_249_ = v_nextIt_275_;
v_startInclusive_250_ = v_startInclusive_276_;
v_endExclusive_251_ = v_endExclusive_277_;
goto v___jp_248_;
}
}
}
else
{
lean_object* v___x_279_; 
lean_del_object(v___x_259_);
lean_dec(v_searcher_257_);
v___x_279_ = lean_box(1);
lean_inc(v___x_245_);
v_it_249_ = v___x_279_;
v_startInclusive_250_ = v_currPos_256_;
v_endExclusive_251_ = v___x_245_;
goto v___jp_248_;
}
}
}
else
{
lean_dec(v___x_245_);
lean_dec_ref(v_driver_243_);
return v_b_247_;
}
v___jp_248_:
{
lean_object* v___x_252_; lean_object* v___x_253_; lean_object* v___x_254_; 
lean_inc_ref(v_driver_243_);
v___x_252_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_252_, 0, v_driver_243_);
lean_ctor_set(v___x_252_, 1, v_startInclusive_250_);
lean_ctor_set(v___x_252_, 2, v_endExclusive_251_);
v___x_253_ = l_String_Slice_toString(v___x_252_);
lean_dec_ref_known(v___x_252_, 3);
v___x_254_ = lean_array_push(v_b_247_, v___x_253_);
v_a_246_ = v_it_249_;
v_b_247_ = v___x_254_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lake_Package_resolveDriver_spec__1___redArg___boxed(lean_object* v_driver_281_, lean_object* v___x_282_, lean_object* v___x_283_, lean_object* v_a_284_, lean_object* v_b_285_){
_start:
{
lean_object* v_res_286_; 
v_res_286_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lake_Package_resolveDriver_spec__1___redArg(v_driver_281_, v___x_282_, v___x_283_, v_a_284_, v_b_285_);
lean_dec_ref(v___x_282_);
return v_res_286_;
}
}
LEAN_EXPORT lean_object* l_Lake_Package_resolveDriver(lean_object* v_pkg_295_, lean_object* v_kind_296_, lean_object* v_driver_297_, lean_object* v_a_298_){
_start:
{
lean_object* v___x_300_; lean_object* v___x_301_; uint8_t v___x_302_; 
v___x_300_ = lean_string_utf8_byte_size(v_driver_297_);
v___x_301_ = lean_unsigned_to_nat(0u);
v___x_302_ = lean_nat_dec_eq(v___x_300_, v___x_301_);
if (v___x_302_ == 0)
{
lean_object* v___x_316_; lean_object* v___x_317_; lean_object* v___x_318_; lean_object* v___x_319_; lean_object* v___x_320_; 
lean_inc_ref_n(v_driver_297_, 2);
v___x_316_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_316_, 0, v_driver_297_);
lean_ctor_set(v___x_316_, 1, v___x_301_);
lean_ctor_set(v___x_316_, 2, v___x_300_);
v___x_317_ = lean_obj_once(&l_String_Slice_splitToSubslice___at___00Lake_Package_resolveDriver_spec__0___closed__0, &l_String_Slice_splitToSubslice___at___00Lake_Package_resolveDriver_spec__0___closed__0_once, _init_l_String_Slice_splitToSubslice___at___00Lake_Package_resolveDriver_spec__0___closed__0);
v___x_318_ = ((lean_object*)(l_Lake_Package_pack___closed__1));
v___x_319_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lake_Package_resolveDriver_spec__1___redArg(v_driver_297_, v___x_316_, v___x_300_, v___x_317_, v___x_318_);
lean_dec_ref_known(v___x_316_, 3);
v___x_320_ = lean_array_to_list(v___x_319_);
if (lean_obj_tag(v___x_320_) == 1)
{
lean_object* v_head_321_; lean_object* v_tail_322_; lean_object* v___x_324_; uint8_t v_isShared_325_; uint8_t v_isSharedCheck_370_; 
v_head_321_ = lean_ctor_get(v___x_320_, 0);
v_tail_322_ = lean_ctor_get(v___x_320_, 1);
v_isSharedCheck_370_ = !lean_is_exclusive(v___x_320_);
if (v_isSharedCheck_370_ == 0)
{
v___x_324_ = v___x_320_;
v_isShared_325_ = v_isSharedCheck_370_;
goto v_resetjp_323_;
}
else
{
lean_inc(v_tail_322_);
lean_inc(v_head_321_);
lean_dec(v___x_320_);
v___x_324_ = lean_box(0);
v_isShared_325_ = v_isSharedCheck_370_;
goto v_resetjp_323_;
}
v_resetjp_323_:
{
if (lean_obj_tag(v_tail_322_) == 0)
{
lean_object* v___x_340_; 
lean_dec_ref(v_driver_297_);
if (v_isShared_325_ == 0)
{
lean_ctor_set_tag(v___x_324_, 0);
lean_ctor_set(v___x_324_, 1, v_head_321_);
lean_ctor_set(v___x_324_, 0, v_pkg_295_);
v___x_340_ = v___x_324_;
goto v_reusejp_339_;
}
else
{
lean_object* v_reuseFailAlloc_342_; 
v_reuseFailAlloc_342_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_342_, 0, v_pkg_295_);
lean_ctor_set(v_reuseFailAlloc_342_, 1, v_head_321_);
v___x_340_ = v_reuseFailAlloc_342_;
goto v_reusejp_339_;
}
v_reusejp_339_:
{
lean_object* v___x_341_; 
v___x_341_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_341_, 0, v___x_340_);
return v___x_341_;
}
}
else
{
lean_object* v_tail_343_; 
lean_del_object(v___x_324_);
v_tail_343_ = lean_ctor_get(v_tail_322_, 1);
if (lean_obj_tag(v_tail_343_) == 0)
{
lean_object* v_head_344_; lean_object* v___x_345_; lean_object* v_packages_346_; lean_object* v___x_347_; lean_object* v___x_348_; size_t v_sz_349_; size_t v___x_350_; lean_object* v___x_351_; lean_object* v_fst_352_; lean_object* v___x_354_; uint8_t v_isShared_355_; uint8_t v_isSharedCheck_368_; 
lean_dec_ref(v_driver_297_);
v_head_344_ = lean_ctor_get(v_tail_322_, 0);
lean_inc(v_head_344_);
lean_dec_ref_known(v_tail_322_, 2);
v___x_345_ = l_unsafeCast___redArg(v_a_298_);
v_packages_346_ = lean_ctor_get(v___x_345_, 4);
lean_inc_ref(v_packages_346_);
lean_dec(v___x_345_);
lean_inc(v_head_321_);
v___x_347_ = l_String_toName(v_head_321_);
v___x_348_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Package_resolveDriver_spec__2___closed__0));
v_sz_349_ = lean_array_size(v_packages_346_);
v___x_350_ = ((size_t)0ULL);
v___x_351_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lake_Package_resolveDriver_spec__2(v___x_347_, v_packages_346_, v_sz_349_, v___x_350_, v___x_348_);
lean_dec_ref(v_packages_346_);
lean_dec(v___x_347_);
v_fst_352_ = lean_ctor_get(v___x_351_, 0);
v_isSharedCheck_368_ = !lean_is_exclusive(v___x_351_);
if (v_isSharedCheck_368_ == 0)
{
lean_object* v_unused_369_; 
v_unused_369_ = lean_ctor_get(v___x_351_, 1);
lean_dec(v_unused_369_);
v___x_354_ = v___x_351_;
v_isShared_355_ = v_isSharedCheck_368_;
goto v_resetjp_353_;
}
else
{
lean_inc(v_fst_352_);
lean_dec(v___x_351_);
v___x_354_ = lean_box(0);
v_isShared_355_ = v_isSharedCheck_368_;
goto v_resetjp_353_;
}
v_resetjp_353_:
{
if (lean_obj_tag(v_fst_352_) == 0)
{
lean_del_object(v___x_354_);
lean_dec(v_head_344_);
goto v___jp_326_;
}
else
{
lean_object* v_val_356_; 
v_val_356_ = lean_ctor_get(v_fst_352_, 0);
lean_inc(v_val_356_);
lean_dec_ref_known(v_fst_352_, 1);
if (lean_obj_tag(v_val_356_) == 1)
{
lean_object* v_val_357_; lean_object* v___x_359_; uint8_t v_isShared_360_; uint8_t v_isSharedCheck_367_; 
lean_dec(v_head_321_);
lean_dec_ref(v_pkg_295_);
v_val_357_ = lean_ctor_get(v_val_356_, 0);
v_isSharedCheck_367_ = !lean_is_exclusive(v_val_356_);
if (v_isSharedCheck_367_ == 0)
{
v___x_359_ = v_val_356_;
v_isShared_360_ = v_isSharedCheck_367_;
goto v_resetjp_358_;
}
else
{
lean_inc(v_val_357_);
lean_dec(v_val_356_);
v___x_359_ = lean_box(0);
v_isShared_360_ = v_isSharedCheck_367_;
goto v_resetjp_358_;
}
v_resetjp_358_:
{
lean_object* v___x_362_; 
if (v_isShared_355_ == 0)
{
lean_ctor_set(v___x_354_, 1, v_head_344_);
lean_ctor_set(v___x_354_, 0, v_val_357_);
v___x_362_ = v___x_354_;
goto v_reusejp_361_;
}
else
{
lean_object* v_reuseFailAlloc_366_; 
v_reuseFailAlloc_366_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_366_, 0, v_val_357_);
lean_ctor_set(v_reuseFailAlloc_366_, 1, v_head_344_);
v___x_362_ = v_reuseFailAlloc_366_;
goto v_reusejp_361_;
}
v_reusejp_361_:
{
lean_object* v___x_364_; 
if (v_isShared_360_ == 0)
{
lean_ctor_set_tag(v___x_359_, 0);
lean_ctor_set(v___x_359_, 0, v___x_362_);
v___x_364_ = v___x_359_;
goto v_reusejp_363_;
}
else
{
lean_object* v_reuseFailAlloc_365_; 
v_reuseFailAlloc_365_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_365_, 0, v___x_362_);
v___x_364_ = v_reuseFailAlloc_365_;
goto v_reusejp_363_;
}
v_reusejp_363_:
{
return v___x_364_;
}
}
}
}
else
{
lean_dec(v_val_356_);
lean_del_object(v___x_354_);
lean_dec(v_head_344_);
goto v___jp_326_;
}
}
}
}
else
{
lean_dec_ref_known(v_tail_322_, 2);
lean_dec(v_head_321_);
goto v___jp_303_;
}
}
v___jp_326_:
{
lean_object* v_baseName_327_; lean_object* v___x_328_; lean_object* v___x_329_; lean_object* v___x_330_; lean_object* v___x_331_; lean_object* v___x_332_; lean_object* v___x_333_; lean_object* v___x_334_; lean_object* v___x_335_; lean_object* v___x_336_; lean_object* v___x_337_; lean_object* v___x_338_; 
v_baseName_327_ = lean_ctor_get(v_pkg_295_, 1);
lean_inc(v_baseName_327_);
lean_dec_ref(v_pkg_295_);
v___x_328_ = l_Lean_Name_toString(v_baseName_327_, v___x_302_);
v___x_329_ = ((lean_object*)(l_Lake_Package_resolveDriver___closed__3));
v___x_330_ = lean_string_append(v___x_328_, v___x_329_);
v___x_331_ = lean_string_append(v___x_330_, v_kind_296_);
v___x_332_ = ((lean_object*)(l_Lake_Package_resolveDriver___closed__4));
v___x_333_ = lean_string_append(v___x_331_, v___x_332_);
v___x_334_ = lean_string_append(v___x_333_, v_head_321_);
lean_dec(v_head_321_);
v___x_335_ = ((lean_object*)(l_Lake_Package_resolveDriver___closed__5));
v___x_336_ = lean_string_append(v___x_334_, v___x_335_);
v___x_337_ = lean_mk_io_user_error(v___x_336_);
v___x_338_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_338_, 0, v___x_337_);
return v___x_338_;
}
}
}
else
{
lean_dec(v___x_320_);
goto v___jp_303_;
}
}
else
{
lean_object* v_baseName_371_; uint8_t v___x_372_; lean_object* v___x_373_; lean_object* v___x_374_; lean_object* v___x_375_; lean_object* v___x_376_; lean_object* v___x_377_; lean_object* v___x_378_; lean_object* v___x_379_; lean_object* v___x_380_; 
lean_dec_ref(v_driver_297_);
v_baseName_371_ = lean_ctor_get(v_pkg_295_, 1);
lean_inc(v_baseName_371_);
lean_dec_ref(v_pkg_295_);
v___x_372_ = 0;
v___x_373_ = l_Lean_Name_toString(v_baseName_371_, v___x_372_);
v___x_374_ = ((lean_object*)(l_Lake_Package_resolveDriver___closed__6));
v___x_375_ = lean_string_append(v___x_373_, v___x_374_);
v___x_376_ = lean_string_append(v___x_375_, v_kind_296_);
v___x_377_ = ((lean_object*)(l_Lake_Package_resolveDriver___closed__7));
v___x_378_ = lean_string_append(v___x_376_, v___x_377_);
v___x_379_ = lean_mk_io_user_error(v___x_378_);
v___x_380_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_380_, 0, v___x_379_);
return v___x_380_;
}
v___jp_303_:
{
lean_object* v_baseName_304_; lean_object* v___x_305_; lean_object* v___x_306_; lean_object* v___x_307_; lean_object* v___x_308_; lean_object* v___x_309_; lean_object* v___x_310_; lean_object* v___x_311_; lean_object* v___x_312_; lean_object* v___x_313_; lean_object* v___x_314_; lean_object* v___x_315_; 
v_baseName_304_ = lean_ctor_get(v_pkg_295_, 1);
lean_inc(v_baseName_304_);
lean_dec_ref(v_pkg_295_);
v___x_305_ = l_Lean_Name_toString(v_baseName_304_, v___x_302_);
v___x_306_ = ((lean_object*)(l_Lake_Package_resolveDriver___closed__0));
v___x_307_ = lean_string_append(v___x_305_, v___x_306_);
v___x_308_ = lean_string_append(v___x_307_, v_kind_296_);
v___x_309_ = ((lean_object*)(l_Lake_Package_resolveDriver___closed__1));
v___x_310_ = lean_string_append(v___x_308_, v___x_309_);
v___x_311_ = lean_string_append(v___x_310_, v_driver_297_);
lean_dec_ref(v_driver_297_);
v___x_312_ = ((lean_object*)(l_Lake_Package_resolveDriver___closed__2));
v___x_313_ = lean_string_append(v___x_311_, v___x_312_);
v___x_314_ = lean_mk_io_user_error(v___x_313_);
v___x_315_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_315_, 0, v___x_314_);
return v___x_315_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_Package_resolveDriver___boxed(lean_object* v_pkg_381_, lean_object* v_kind_382_, lean_object* v_driver_383_, lean_object* v_a_384_, lean_object* v_a_385_){
_start:
{
lean_object* v_res_386_; 
v_res_386_ = l_Lake_Package_resolveDriver(v_pkg_381_, v_kind_382_, v_driver_383_, v_a_384_);
lean_dec(v_a_384_);
lean_dec_ref(v_kind_382_);
return v_res_386_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lake_Package_resolveDriver_spec__1(lean_object* v_driver_387_, lean_object* v___x_388_, lean_object* v___x_389_, lean_object* v_inst_390_, lean_object* v_R_391_, lean_object* v_a_392_, lean_object* v_b_393_){
_start:
{
lean_object* v___x_394_; 
v___x_394_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lake_Package_resolveDriver_spec__1___redArg(v_driver_387_, v___x_388_, v___x_389_, v_a_392_, v_b_393_);
return v___x_394_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lake_Package_resolveDriver_spec__1___boxed(lean_object* v_driver_395_, lean_object* v___x_396_, lean_object* v___x_397_, lean_object* v_inst_398_, lean_object* v_R_399_, lean_object* v_a_400_, lean_object* v_b_401_){
_start:
{
lean_object* v_res_402_; 
v_res_402_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lake_Package_resolveDriver_spec__1(v_driver_395_, v___x_396_, v___x_397_, v_inst_398_, v_R_399_, v_a_400_, v_b_401_);
lean_dec_ref(v___x_396_);
return v_res_402_;
}
}
LEAN_EXPORT lean_object* l_Lake_Package_test___lam__0(lean_object* v_keyName_403_, lean_object* v_name_404_, lean_object* v___x_405_, lean_object* v___x_406_, lean_object* v___y_407_, lean_object* v___y_408_, lean_object* v___y_409_, lean_object* v___y_410_, lean_object* v___y_411_, lean_object* v___y_412_){
_start:
{
lean_object* v___x_414_; lean_object* v___x_415_; lean_object* v___x_416_; lean_object* v___x_417_; 
v___x_414_ = l_Lake_LeanLib_defaultFacet;
v___x_415_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_415_, 0, v_keyName_403_);
lean_ctor_set(v___x_415_, 1, v_name_404_);
v___x_416_ = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(v___x_416_, 0, v___x_415_);
lean_ctor_set(v___x_416_, 1, v___x_405_);
lean_ctor_set(v___x_416_, 2, v___x_406_);
lean_ctor_set(v___x_416_, 3, v___x_414_);
v___x_417_ = lean_apply_7(v___y_407_, v___x_416_, v___y_408_, v___y_409_, v___y_410_, v___y_411_, v___y_412_, lean_box(0));
return v___x_417_;
}
}
LEAN_EXPORT lean_object* l_Lake_Package_test___lam__0___boxed(lean_object* v_keyName_418_, lean_object* v_name_419_, lean_object* v___x_420_, lean_object* v___x_421_, lean_object* v___y_422_, lean_object* v___y_423_, lean_object* v___y_424_, lean_object* v___y_425_, lean_object* v___y_426_, lean_object* v___y_427_, lean_object* v___y_428_){
_start:
{
lean_object* v_res_429_; 
v_res_429_ = l_Lake_Package_test___lam__0(v_keyName_418_, v_name_419_, v___x_420_, v___x_421_, v___y_422_, v___y_423_, v___y_424_, v___y_425_, v___y_426_, v___y_427_);
return v_res_429_;
}
}
LEAN_EXPORT lean_object* l_Lake_Package_test___lam__1(lean_object* v_keyName_430_, lean_object* v_name_431_, lean_object* v___x_432_, lean_object* v___x_433_, lean_object* v___y_434_, lean_object* v___y_435_, lean_object* v___y_436_, lean_object* v___y_437_, lean_object* v___y_438_, lean_object* v___y_439_){
_start:
{
lean_object* v___x_441_; lean_object* v___x_442_; lean_object* v___x_443_; lean_object* v___x_444_; 
v___x_441_ = l_Lake_LeanExe_exeFacet;
v___x_442_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_442_, 0, v_keyName_430_);
lean_ctor_set(v___x_442_, 1, v_name_431_);
v___x_443_ = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(v___x_443_, 0, v___x_442_);
lean_ctor_set(v___x_443_, 1, v___x_432_);
lean_ctor_set(v___x_443_, 2, v___x_433_);
lean_ctor_set(v___x_443_, 3, v___x_441_);
v___x_444_ = lean_apply_7(v___y_434_, v___x_443_, v___y_435_, v___y_436_, v___y_437_, v___y_438_, v___y_439_, lean_box(0));
return v___x_444_;
}
}
LEAN_EXPORT lean_object* l_Lake_Package_test___lam__1___boxed(lean_object* v_keyName_445_, lean_object* v_name_446_, lean_object* v___x_447_, lean_object* v___x_448_, lean_object* v___y_449_, lean_object* v___y_450_, lean_object* v___y_451_, lean_object* v___y_452_, lean_object* v___y_453_, lean_object* v___y_454_, lean_object* v___y_455_){
_start:
{
lean_object* v_res_456_; 
v_res_456_ = l_Lake_Package_test___lam__1(v_keyName_445_, v_name_446_, v___x_447_, v___x_448_, v___y_449_, v___y_450_, v___y_451_, v___y_452_, v___y_453_, v___y_454_);
return v_res_456_;
}
}
static lean_object* _init_l_Lake_Package_test___boxed__const__1(void){
_start:
{
uint32_t v___x_463_; lean_object* v___x_464_; 
v___x_463_ = 0;
v___x_464_ = lean_box_uint32(v___x_463_);
return v___x_464_;
}
}
LEAN_EXPORT lean_object* l_Lake_Package_test(lean_object* v_pkg_465_, lean_object* v_args_466_, lean_object* v_buildConfig_467_, lean_object* v_a_468_){
_start:
{
lean_object* v_config_470_; lean_object* v_testDriver_471_; lean_object* v_testDriverArgs_472_; lean_object* v___x_473_; lean_object* v___x_474_; 
v_config_470_ = lean_ctor_get(v_pkg_465_, 6);
v_testDriver_471_ = lean_ctor_get(v_pkg_465_, 22);
lean_inc_ref(v_testDriver_471_);
v_testDriverArgs_472_ = lean_ctor_get(v_config_470_, 13);
lean_inc_ref(v_testDriverArgs_472_);
v___x_473_ = ((lean_object*)(l_Lake_Package_test___closed__0));
v___x_474_ = l_Lake_Package_resolveDriver(v_pkg_465_, v___x_473_, v_testDriver_471_, v_a_468_);
if (lean_obj_tag(v___x_474_) == 0)
{
lean_object* v_a_475_; lean_object* v___x_477_; uint8_t v_isShared_478_; uint8_t v_isSharedCheck_600_; 
v_a_475_ = lean_ctor_get(v___x_474_, 0);
v_isSharedCheck_600_ = !lean_is_exclusive(v___x_474_);
if (v_isSharedCheck_600_ == 0)
{
v___x_477_ = v___x_474_;
v_isShared_478_ = v_isSharedCheck_600_;
goto v_resetjp_476_;
}
else
{
lean_inc(v_a_475_);
lean_dec(v___x_474_);
v___x_477_ = lean_box(0);
v_isShared_478_ = v_isSharedCheck_600_;
goto v_resetjp_476_;
}
v_resetjp_476_:
{
lean_object* v_fst_479_; lean_object* v_snd_480_; lean_object* v_baseName_481_; lean_object* v_keyName_482_; lean_object* v_scripts_483_; lean_object* v___y_485_; lean_object* v___y_486_; lean_object* v___y_487_; lean_object* v___y_488_; uint8_t v___y_489_; lean_object* v___x_571_; lean_object* v___x_572_; 
v_fst_479_ = lean_ctor_get(v_a_475_, 0);
lean_inc(v_fst_479_);
v_snd_480_ = lean_ctor_get(v_a_475_, 1);
lean_inc_n(v_snd_480_, 2);
lean_dec(v_a_475_);
v_baseName_481_ = lean_ctor_get(v_fst_479_, 1);
v_keyName_482_ = lean_ctor_get(v_fst_479_, 2);
lean_inc(v_keyName_482_);
v_scripts_483_ = lean_ctor_get(v_fst_479_, 18);
v___x_571_ = l_String_toName(v_snd_480_);
v___x_572_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_scripts_483_, v___x_571_);
if (lean_obj_tag(v___x_572_) == 1)
{
lean_object* v_val_573_; lean_object* v___x_574_; lean_object* v___x_575_; lean_object* v___x_576_; 
lean_dec(v___x_571_);
lean_dec(v_keyName_482_);
lean_dec(v_snd_480_);
lean_dec(v_fst_479_);
lean_del_object(v___x_477_);
lean_dec_ref(v_buildConfig_467_);
v_val_573_ = lean_ctor_get(v___x_572_, 0);
lean_inc(v_val_573_);
lean_dec_ref_known(v___x_572_, 1);
v___x_574_ = lean_array_to_list(v_testDriverArgs_472_);
v___x_575_ = l_List_appendTR___redArg(v___x_574_, v_args_466_);
v___x_576_ = l_Lake_Script_run(v___x_575_, v_val_573_, v_a_468_);
return v___x_576_;
}
else
{
lean_object* v___x_577_; 
lean_dec(v___x_572_);
v___x_577_ = l_Lake_Package_findTargetDecl_x3f(v___x_571_, v_fst_479_);
lean_dec(v___x_571_);
if (lean_obj_tag(v___x_577_) == 0)
{
goto v___jp_558_;
}
else
{
lean_object* v_val_578_; lean_object* v_name_579_; lean_object* v_kind_580_; lean_object* v_config_581_; lean_object* v___x_582_; uint8_t v___x_583_; 
v_val_578_ = lean_ctor_get(v___x_577_, 0);
lean_inc(v_val_578_);
lean_dec_ref_known(v___x_577_, 1);
v_name_579_ = lean_ctor_get(v_val_578_, 1);
lean_inc(v_name_579_);
v_kind_580_ = lean_ctor_get(v_val_578_, 2);
lean_inc(v_kind_580_);
v_config_581_ = lean_ctor_get(v_val_578_, 3);
lean_inc(v_config_581_);
lean_dec(v_val_578_);
v___x_582_ = l_Lake_LeanExe_keyword;
v___x_583_ = lean_name_eq(v_kind_580_, v___x_582_);
lean_dec(v_kind_580_);
if (v___x_583_ == 0)
{
lean_dec(v_config_581_);
lean_dec(v_name_579_);
goto v___jp_558_;
}
else
{
lean_object* v___x_584_; lean_object* v___f_585_; lean_object* v___x_586_; lean_object* v___x_587_; 
lean_dec(v_snd_480_);
lean_del_object(v___x_477_);
lean_inc(v_name_579_);
v___x_584_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_584_, 0, v_fst_479_);
lean_ctor_set(v___x_584_, 1, v_name_579_);
lean_ctor_set(v___x_584_, 2, v_config_581_);
v___f_585_ = lean_alloc_closure((void*)(l_Lake_Package_test___lam__1___boxed), 11, 4);
lean_closure_set(v___f_585_, 0, v_keyName_482_);
lean_closure_set(v___f_585_, 1, v_name_579_);
lean_closure_set(v___f_585_, 2, v___x_582_);
lean_closure_set(v___f_585_, 3, v___x_584_);
v___x_586_ = l_unsafeCast___redArg(v_a_468_);
v___x_587_ = l_Lake_Workspace_runBuild___redArg(v___x_586_, v___f_585_, v_buildConfig_467_);
if (lean_obj_tag(v___x_587_) == 0)
{
lean_object* v_a_588_; lean_object* v___x_589_; lean_object* v___x_590_; lean_object* v___x_591_; 
v_a_588_ = lean_ctor_get(v___x_587_, 0);
lean_inc(v_a_588_);
lean_dec_ref_known(v___x_587_, 1);
v___x_589_ = lean_array_mk(v_args_466_);
v___x_590_ = l_Array_append___redArg(v_testDriverArgs_472_, v___x_589_);
lean_dec_ref(v___x_589_);
v___x_591_ = l_Lake_env(v_a_588_, v___x_590_, v_a_468_);
return v___x_591_;
}
else
{
lean_object* v_a_592_; lean_object* v___x_594_; uint8_t v_isShared_595_; uint8_t v_isSharedCheck_599_; 
lean_dec_ref(v_testDriverArgs_472_);
lean_dec(v_args_466_);
v_a_592_ = lean_ctor_get(v___x_587_, 0);
v_isSharedCheck_599_ = !lean_is_exclusive(v___x_587_);
if (v_isSharedCheck_599_ == 0)
{
v___x_594_ = v___x_587_;
v_isShared_595_ = v_isSharedCheck_599_;
goto v_resetjp_593_;
}
else
{
lean_inc(v_a_592_);
lean_dec(v___x_587_);
v___x_594_ = lean_box(0);
v_isShared_595_ = v_isSharedCheck_599_;
goto v_resetjp_593_;
}
v_resetjp_593_:
{
lean_object* v___x_597_; 
if (v_isShared_595_ == 0)
{
v___x_597_ = v___x_594_;
goto v_reusejp_596_;
}
else
{
lean_object* v_reuseFailAlloc_598_; 
v_reuseFailAlloc_598_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_598_, 0, v_a_592_);
v___x_597_ = v_reuseFailAlloc_598_;
goto v_reusejp_596_;
}
v_reusejp_596_:
{
return v___x_597_;
}
}
}
}
}
}
v___jp_484_:
{
if (v___y_489_ == 0)
{
lean_object* v___x_490_; lean_object* v___x_491_; lean_object* v___x_492_; lean_object* v___x_493_; lean_object* v___x_495_; 
lean_inc(v_baseName_481_);
lean_dec(v___y_488_);
lean_dec(v___y_487_);
lean_dec(v___y_486_);
lean_dec(v_keyName_482_);
lean_dec(v_fst_479_);
lean_dec_ref(v_buildConfig_467_);
v___x_490_ = l_Lean_Name_toString(v_baseName_481_, v___y_489_);
v___x_491_ = ((lean_object*)(l_Lake_Package_test___closed__1));
v___x_492_ = lean_string_append(v___x_490_, v___x_491_);
v___x_493_ = lean_mk_io_user_error(v___x_492_);
if (v_isShared_478_ == 0)
{
lean_ctor_set_tag(v___x_477_, 1);
lean_ctor_set(v___x_477_, 0, v___x_493_);
v___x_495_ = v___x_477_;
goto v_reusejp_494_;
}
else
{
lean_object* v_reuseFailAlloc_496_; 
v_reuseFailAlloc_496_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_496_, 0, v___x_493_);
v___x_495_ = v_reuseFailAlloc_496_;
goto v_reusejp_494_;
}
v_reusejp_494_:
{
return v___x_495_;
}
}
else
{
lean_object* v_toLogConfig_497_; uint8_t v_oldMode_498_; uint8_t v_trustHash_499_; uint8_t v_noBuild_500_; uint8_t v_failFast_501_; uint8_t v_verbosity_502_; uint8_t v_showSuccess_503_; lean_object* v_outputsFile_x3f_504_; lean_object* v_outputsIdx_505_; lean_object* v_leanOptOverrides_506_; lean_object* v_macosxDeploymentTarget_x3f_507_; lean_object* v___x_509_; uint8_t v_isShared_510_; uint8_t v_isSharedCheck_547_; 
lean_del_object(v___x_477_);
v_toLogConfig_497_ = lean_ctor_get(v_buildConfig_467_, 0);
v_oldMode_498_ = lean_ctor_get_uint8(v_buildConfig_467_, sizeof(void*)*5);
v_trustHash_499_ = lean_ctor_get_uint8(v_buildConfig_467_, sizeof(void*)*5 + 1);
v_noBuild_500_ = lean_ctor_get_uint8(v_buildConfig_467_, sizeof(void*)*5 + 2);
v_failFast_501_ = lean_ctor_get_uint8(v_buildConfig_467_, sizeof(void*)*5 + 3);
v_verbosity_502_ = lean_ctor_get_uint8(v_buildConfig_467_, sizeof(void*)*5 + 4);
v_showSuccess_503_ = lean_ctor_get_uint8(v_buildConfig_467_, sizeof(void*)*5 + 5);
v_outputsFile_x3f_504_ = lean_ctor_get(v_buildConfig_467_, 1);
v_outputsIdx_505_ = lean_ctor_get(v_buildConfig_467_, 2);
v_leanOptOverrides_506_ = lean_ctor_get(v_buildConfig_467_, 3);
v_macosxDeploymentTarget_x3f_507_ = lean_ctor_get(v_buildConfig_467_, 4);
v_isSharedCheck_547_ = !lean_is_exclusive(v_buildConfig_467_);
if (v_isSharedCheck_547_ == 0)
{
v___x_509_ = v_buildConfig_467_;
v_isShared_510_ = v_isSharedCheck_547_;
goto v_resetjp_508_;
}
else
{
lean_inc(v_macosxDeploymentTarget_x3f_507_);
lean_inc(v_leanOptOverrides_506_);
lean_inc(v_outputsIdx_505_);
lean_inc(v_outputsFile_x3f_504_);
lean_inc(v_toLogConfig_497_);
lean_dec(v_buildConfig_467_);
v___x_509_ = lean_box(0);
v_isShared_510_ = v_isSharedCheck_547_;
goto v_resetjp_508_;
}
v_resetjp_508_:
{
uint8_t v_failLv_511_; uint8_t v_outLv_512_; uint8_t v_ansiMode_513_; lean_object* v___x_515_; uint8_t v_isShared_516_; uint8_t v_isSharedCheck_545_; 
v_failLv_511_ = lean_ctor_get_uint8(v_toLogConfig_497_, sizeof(void*)*1);
v_outLv_512_ = lean_ctor_get_uint8(v_toLogConfig_497_, sizeof(void*)*1 + 1);
v_ansiMode_513_ = lean_ctor_get_uint8(v_toLogConfig_497_, sizeof(void*)*1 + 2);
v_isSharedCheck_545_ = !lean_is_exclusive(v_toLogConfig_497_);
if (v_isSharedCheck_545_ == 0)
{
lean_object* v_unused_546_; 
v_unused_546_ = lean_ctor_get(v_toLogConfig_497_, 0);
lean_dec(v_unused_546_);
v___x_515_ = v_toLogConfig_497_;
v_isShared_516_ = v_isSharedCheck_545_;
goto v_resetjp_514_;
}
else
{
lean_dec(v_toLogConfig_497_);
v___x_515_ = lean_box(0);
v_isShared_516_ = v_isSharedCheck_545_;
goto v_resetjp_514_;
}
v_resetjp_514_:
{
lean_object* v___x_517_; lean_object* v___f_518_; lean_object* v___x_519_; lean_object* v___x_521_; 
v___x_517_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_517_, 0, v_fst_479_);
lean_ctor_set(v___x_517_, 1, v___y_487_);
lean_ctor_set(v___x_517_, 2, v___y_488_);
lean_inc(v___y_485_);
v___f_518_ = lean_alloc_closure((void*)(l_Lake_Package_test___lam__0___boxed), 11, 4);
lean_closure_set(v___f_518_, 0, v_keyName_482_);
lean_closure_set(v___f_518_, 1, v___y_486_);
lean_closure_set(v___f_518_, 2, v___y_485_);
lean_closure_set(v___f_518_, 3, v___x_517_);
v___x_519_ = lean_box(0);
if (v_isShared_516_ == 0)
{
lean_ctor_set(v___x_515_, 0, v___x_519_);
v___x_521_ = v___x_515_;
goto v_reusejp_520_;
}
else
{
lean_object* v_reuseFailAlloc_544_; 
v_reuseFailAlloc_544_ = lean_alloc_ctor(0, 1, 3);
lean_ctor_set(v_reuseFailAlloc_544_, 0, v___x_519_);
lean_ctor_set_uint8(v_reuseFailAlloc_544_, sizeof(void*)*1, v_failLv_511_);
lean_ctor_set_uint8(v_reuseFailAlloc_544_, sizeof(void*)*1 + 1, v_outLv_512_);
lean_ctor_set_uint8(v_reuseFailAlloc_544_, sizeof(void*)*1 + 2, v_ansiMode_513_);
v___x_521_ = v_reuseFailAlloc_544_;
goto v_reusejp_520_;
}
v_reusejp_520_:
{
lean_object* v___x_523_; 
if (v_isShared_510_ == 0)
{
lean_ctor_set(v___x_509_, 0, v___x_521_);
v___x_523_ = v___x_509_;
goto v_reusejp_522_;
}
else
{
lean_object* v_reuseFailAlloc_543_; 
v_reuseFailAlloc_543_ = lean_alloc_ctor(0, 5, 6);
lean_ctor_set(v_reuseFailAlloc_543_, 0, v___x_521_);
lean_ctor_set(v_reuseFailAlloc_543_, 1, v_outputsFile_x3f_504_);
lean_ctor_set(v_reuseFailAlloc_543_, 2, v_outputsIdx_505_);
lean_ctor_set(v_reuseFailAlloc_543_, 3, v_leanOptOverrides_506_);
lean_ctor_set(v_reuseFailAlloc_543_, 4, v_macosxDeploymentTarget_x3f_507_);
lean_ctor_set_uint8(v_reuseFailAlloc_543_, sizeof(void*)*5, v_oldMode_498_);
lean_ctor_set_uint8(v_reuseFailAlloc_543_, sizeof(void*)*5 + 1, v_trustHash_499_);
lean_ctor_set_uint8(v_reuseFailAlloc_543_, sizeof(void*)*5 + 2, v_noBuild_500_);
lean_ctor_set_uint8(v_reuseFailAlloc_543_, sizeof(void*)*5 + 3, v_failFast_501_);
lean_ctor_set_uint8(v_reuseFailAlloc_543_, sizeof(void*)*5 + 4, v_verbosity_502_);
lean_ctor_set_uint8(v_reuseFailAlloc_543_, sizeof(void*)*5 + 5, v_showSuccess_503_);
v___x_523_ = v_reuseFailAlloc_543_;
goto v_reusejp_522_;
}
v_reusejp_522_:
{
lean_object* v___x_524_; lean_object* v___x_525_; 
v___x_524_ = l_unsafeCast___redArg(v_a_468_);
v___x_525_ = l_Lake_Workspace_runBuild___redArg(v___x_524_, v___f_518_, v___x_523_);
if (lean_obj_tag(v___x_525_) == 0)
{
lean_object* v___x_527_; uint8_t v_isShared_528_; uint8_t v_isSharedCheck_533_; 
v_isSharedCheck_533_ = !lean_is_exclusive(v___x_525_);
if (v_isSharedCheck_533_ == 0)
{
lean_object* v_unused_534_; 
v_unused_534_ = lean_ctor_get(v___x_525_, 0);
lean_dec(v_unused_534_);
v___x_527_ = v___x_525_;
v_isShared_528_ = v_isSharedCheck_533_;
goto v_resetjp_526_;
}
else
{
lean_dec(v___x_525_);
v___x_527_ = lean_box(0);
v_isShared_528_ = v_isSharedCheck_533_;
goto v_resetjp_526_;
}
v_resetjp_526_:
{
lean_object* v___x_529_; lean_object* v___x_531_; 
v___x_529_ = l_Lake_Package_test___boxed__const__1;
if (v_isShared_528_ == 0)
{
lean_ctor_set(v___x_527_, 0, v___x_529_);
v___x_531_ = v___x_527_;
goto v_reusejp_530_;
}
else
{
lean_object* v_reuseFailAlloc_532_; 
v_reuseFailAlloc_532_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_532_, 0, v___x_529_);
v___x_531_ = v_reuseFailAlloc_532_;
goto v_reusejp_530_;
}
v_reusejp_530_:
{
return v___x_531_;
}
}
}
else
{
lean_object* v_a_535_; lean_object* v___x_537_; uint8_t v_isShared_538_; uint8_t v_isSharedCheck_542_; 
v_a_535_ = lean_ctor_get(v___x_525_, 0);
v_isSharedCheck_542_ = !lean_is_exclusive(v___x_525_);
if (v_isSharedCheck_542_ == 0)
{
v___x_537_ = v___x_525_;
v_isShared_538_ = v_isSharedCheck_542_;
goto v_resetjp_536_;
}
else
{
lean_inc(v_a_535_);
lean_dec(v___x_525_);
v___x_537_ = lean_box(0);
v_isShared_538_ = v_isSharedCheck_542_;
goto v_resetjp_536_;
}
v_resetjp_536_:
{
lean_object* v___x_540_; 
if (v_isShared_538_ == 0)
{
v___x_540_ = v___x_537_;
goto v_reusejp_539_;
}
else
{
lean_object* v_reuseFailAlloc_541_; 
v_reuseFailAlloc_541_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_541_, 0, v_a_535_);
v___x_540_ = v_reuseFailAlloc_541_;
goto v_reusejp_539_;
}
v_reusejp_539_:
{
return v___x_540_;
}
}
}
}
}
}
}
}
}
v___jp_548_:
{
uint8_t v___x_549_; lean_object* v___x_550_; lean_object* v___x_551_; lean_object* v___x_552_; lean_object* v___x_553_; lean_object* v___x_554_; lean_object* v___x_555_; lean_object* v___x_556_; lean_object* v___x_557_; 
v___x_549_ = 0;
v___x_550_ = l_Lean_Name_toString(v_baseName_481_, v___x_549_);
v___x_551_ = ((lean_object*)(l_Lake_Package_test___closed__2));
v___x_552_ = lean_string_append(v___x_550_, v___x_551_);
v___x_553_ = lean_string_append(v___x_552_, v_snd_480_);
lean_dec(v_snd_480_);
v___x_554_ = ((lean_object*)(l_Lake_Package_resolveDriver___closed__5));
v___x_555_ = lean_string_append(v___x_553_, v___x_554_);
v___x_556_ = lean_mk_io_user_error(v___x_555_);
v___x_557_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_557_, 0, v___x_556_);
return v___x_557_;
}
v___jp_558_:
{
lean_object* v___x_559_; lean_object* v___x_560_; 
lean_inc(v_snd_480_);
v___x_559_ = l_String_toName(v_snd_480_);
v___x_560_ = l_Lake_Package_findTargetDecl_x3f(v___x_559_, v_fst_479_);
lean_dec(v___x_559_);
if (lean_obj_tag(v___x_560_) == 0)
{
lean_inc(v_baseName_481_);
lean_dec(v_keyName_482_);
lean_dec(v_fst_479_);
lean_del_object(v___x_477_);
lean_dec_ref(v_testDriverArgs_472_);
lean_dec_ref(v_buildConfig_467_);
lean_dec(v_args_466_);
goto v___jp_548_;
}
else
{
lean_object* v_val_561_; lean_object* v_name_562_; lean_object* v_kind_563_; lean_object* v_config_564_; lean_object* v___x_565_; uint8_t v___x_566_; 
v_val_561_ = lean_ctor_get(v___x_560_, 0);
lean_inc(v_val_561_);
lean_dec_ref_known(v___x_560_, 1);
v_name_562_ = lean_ctor_get(v_val_561_, 1);
lean_inc(v_name_562_);
v_kind_563_ = lean_ctor_get(v_val_561_, 2);
lean_inc(v_kind_563_);
v_config_564_ = lean_ctor_get(v_val_561_, 3);
lean_inc(v_config_564_);
lean_dec(v_val_561_);
v___x_565_ = ((lean_object*)(l_Lake_Package_test___closed__4));
v___x_566_ = lean_name_eq(v_kind_563_, v___x_565_);
lean_dec(v_kind_563_);
if (v___x_566_ == 0)
{
lean_inc(v_baseName_481_);
lean_dec(v_config_564_);
lean_dec(v_name_562_);
lean_dec(v_keyName_482_);
lean_dec(v_fst_479_);
lean_del_object(v___x_477_);
lean_dec_ref(v_testDriverArgs_472_);
lean_dec_ref(v_buildConfig_467_);
lean_dec(v_args_466_);
goto v___jp_548_;
}
else
{
lean_object* v___x_567_; lean_object* v___x_568_; uint8_t v___x_569_; 
lean_dec(v_snd_480_);
v___x_567_ = lean_array_get_size(v_testDriverArgs_472_);
lean_dec_ref(v_testDriverArgs_472_);
v___x_568_ = lean_unsigned_to_nat(0u);
v___x_569_ = lean_nat_dec_eq(v___x_567_, v___x_568_);
if (v___x_569_ == 0)
{
lean_dec(v_args_466_);
lean_inc(v_name_562_);
v___y_485_ = v___x_565_;
v___y_486_ = v_name_562_;
v___y_487_ = v_name_562_;
v___y_488_ = v_config_564_;
v___y_489_ = v___x_569_;
goto v___jp_484_;
}
else
{
uint8_t v___x_570_; 
v___x_570_ = l_List_isEmpty___redArg(v_args_466_);
lean_dec(v_args_466_);
lean_inc(v_name_562_);
v___y_485_ = v___x_565_;
v___y_486_ = v_name_562_;
v___y_487_ = v_name_562_;
v___y_488_ = v_config_564_;
v___y_489_ = v___x_570_;
goto v___jp_484_;
}
}
}
}
}
}
else
{
lean_object* v_a_601_; lean_object* v___x_603_; uint8_t v_isShared_604_; uint8_t v_isSharedCheck_608_; 
lean_dec_ref(v_testDriverArgs_472_);
lean_dec_ref(v_buildConfig_467_);
lean_dec(v_args_466_);
v_a_601_ = lean_ctor_get(v___x_474_, 0);
v_isSharedCheck_608_ = !lean_is_exclusive(v___x_474_);
if (v_isSharedCheck_608_ == 0)
{
v___x_603_ = v___x_474_;
v_isShared_604_ = v_isSharedCheck_608_;
goto v_resetjp_602_;
}
else
{
lean_inc(v_a_601_);
lean_dec(v___x_474_);
v___x_603_ = lean_box(0);
v_isShared_604_ = v_isSharedCheck_608_;
goto v_resetjp_602_;
}
v_resetjp_602_:
{
lean_object* v___x_606_; 
if (v_isShared_604_ == 0)
{
v___x_606_ = v___x_603_;
goto v_reusejp_605_;
}
else
{
lean_object* v_reuseFailAlloc_607_; 
v_reuseFailAlloc_607_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_607_, 0, v_a_601_);
v___x_606_ = v_reuseFailAlloc_607_;
goto v_reusejp_605_;
}
v_reusejp_605_:
{
return v___x_606_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Package_test___boxed(lean_object* v_pkg_609_, lean_object* v_args_610_, lean_object* v_buildConfig_611_, lean_object* v_a_612_, lean_object* v_a_613_){
_start:
{
lean_object* v_res_614_; 
v_res_614_ = l_Lake_Package_test(v_pkg_609_, v_args_610_, v_buildConfig_611_, v_a_612_);
lean_dec(v_a_612_);
return v_res_614_;
}
}
LEAN_EXPORT lean_object* l_Lake_Package_lint(lean_object* v_pkg_617_, lean_object* v_args_618_, lean_object* v_buildConfig_619_, lean_object* v_a_620_){
_start:
{
lean_object* v_config_622_; lean_object* v_lintDriver_623_; lean_object* v_lintDriverArgs_624_; lean_object* v___x_625_; lean_object* v___x_626_; 
v_config_622_ = lean_ctor_get(v_pkg_617_, 6);
v_lintDriver_623_ = lean_ctor_get(v_pkg_617_, 23);
lean_inc_ref(v_lintDriver_623_);
v_lintDriverArgs_624_ = lean_ctor_get(v_config_622_, 15);
lean_inc_ref(v_lintDriverArgs_624_);
v___x_625_ = ((lean_object*)(l_Lake_Package_lint___closed__0));
v___x_626_ = l_Lake_Package_resolveDriver(v_pkg_617_, v___x_625_, v_lintDriver_623_, v_a_620_);
if (lean_obj_tag(v___x_626_) == 0)
{
lean_object* v_a_627_; lean_object* v___x_629_; uint8_t v_isShared_630_; uint8_t v_isSharedCheck_677_; 
v_a_627_ = lean_ctor_get(v___x_626_, 0);
v_isSharedCheck_677_ = !lean_is_exclusive(v___x_626_);
if (v_isSharedCheck_677_ == 0)
{
v___x_629_ = v___x_626_;
v_isShared_630_ = v_isSharedCheck_677_;
goto v_resetjp_628_;
}
else
{
lean_inc(v_a_627_);
lean_dec(v___x_626_);
v___x_629_ = lean_box(0);
v_isShared_630_ = v_isSharedCheck_677_;
goto v_resetjp_628_;
}
v_resetjp_628_:
{
lean_object* v_fst_631_; lean_object* v_snd_632_; lean_object* v_baseName_633_; lean_object* v_keyName_634_; lean_object* v_scripts_635_; lean_object* v___x_648_; lean_object* v___x_649_; 
v_fst_631_ = lean_ctor_get(v_a_627_, 0);
lean_inc(v_fst_631_);
v_snd_632_ = lean_ctor_get(v_a_627_, 1);
lean_inc_n(v_snd_632_, 2);
lean_dec(v_a_627_);
v_baseName_633_ = lean_ctor_get(v_fst_631_, 1);
v_keyName_634_ = lean_ctor_get(v_fst_631_, 2);
lean_inc(v_keyName_634_);
v_scripts_635_ = lean_ctor_get(v_fst_631_, 18);
v___x_648_ = l_String_toName(v_snd_632_);
v___x_649_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_scripts_635_, v___x_648_);
if (lean_obj_tag(v___x_649_) == 1)
{
lean_object* v_val_650_; lean_object* v___x_651_; lean_object* v___x_652_; lean_object* v___x_653_; 
lean_dec(v___x_648_);
lean_dec(v_keyName_634_);
lean_dec(v_snd_632_);
lean_dec(v_fst_631_);
lean_del_object(v___x_629_);
lean_dec_ref(v_buildConfig_619_);
v_val_650_ = lean_ctor_get(v___x_649_, 0);
lean_inc(v_val_650_);
lean_dec_ref_known(v___x_649_, 1);
v___x_651_ = lean_array_to_list(v_lintDriverArgs_624_);
v___x_652_ = l_List_appendTR___redArg(v___x_651_, v_args_618_);
v___x_653_ = l_Lake_Script_run(v___x_652_, v_val_650_, v_a_620_);
return v___x_653_;
}
else
{
lean_object* v___x_654_; 
lean_dec(v___x_649_);
v___x_654_ = l_Lake_Package_findTargetDecl_x3f(v___x_648_, v_fst_631_);
lean_dec(v___x_648_);
if (lean_obj_tag(v___x_654_) == 0)
{
lean_inc(v_baseName_633_);
lean_dec(v_keyName_634_);
lean_dec(v_fst_631_);
lean_dec_ref(v_lintDriverArgs_624_);
lean_dec_ref(v_buildConfig_619_);
lean_dec(v_args_618_);
goto v___jp_636_;
}
else
{
lean_object* v_val_655_; lean_object* v_name_656_; lean_object* v_kind_657_; lean_object* v_config_658_; lean_object* v___x_659_; uint8_t v___x_660_; 
v_val_655_ = lean_ctor_get(v___x_654_, 0);
lean_inc(v_val_655_);
lean_dec_ref_known(v___x_654_, 1);
v_name_656_ = lean_ctor_get(v_val_655_, 1);
lean_inc(v_name_656_);
v_kind_657_ = lean_ctor_get(v_val_655_, 2);
lean_inc(v_kind_657_);
v_config_658_ = lean_ctor_get(v_val_655_, 3);
lean_inc(v_config_658_);
lean_dec(v_val_655_);
v___x_659_ = l_Lake_LeanExe_keyword;
v___x_660_ = lean_name_eq(v_kind_657_, v___x_659_);
lean_dec(v_kind_657_);
if (v___x_660_ == 0)
{
lean_inc(v_baseName_633_);
lean_dec(v_config_658_);
lean_dec(v_name_656_);
lean_dec(v_keyName_634_);
lean_dec(v_fst_631_);
lean_dec_ref(v_lintDriverArgs_624_);
lean_dec_ref(v_buildConfig_619_);
lean_dec(v_args_618_);
goto v___jp_636_;
}
else
{
lean_object* v___x_661_; lean_object* v___f_662_; lean_object* v___x_663_; lean_object* v___x_664_; 
lean_dec(v_snd_632_);
lean_del_object(v___x_629_);
lean_inc(v_name_656_);
v___x_661_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_661_, 0, v_fst_631_);
lean_ctor_set(v___x_661_, 1, v_name_656_);
lean_ctor_set(v___x_661_, 2, v_config_658_);
v___f_662_ = lean_alloc_closure((void*)(l_Lake_Package_test___lam__1___boxed), 11, 4);
lean_closure_set(v___f_662_, 0, v_keyName_634_);
lean_closure_set(v___f_662_, 1, v_name_656_);
lean_closure_set(v___f_662_, 2, v___x_659_);
lean_closure_set(v___f_662_, 3, v___x_661_);
v___x_663_ = l_unsafeCast___redArg(v_a_620_);
v___x_664_ = l_Lake_Workspace_runBuild___redArg(v___x_663_, v___f_662_, v_buildConfig_619_);
if (lean_obj_tag(v___x_664_) == 0)
{
lean_object* v_a_665_; lean_object* v___x_666_; lean_object* v___x_667_; lean_object* v___x_668_; 
v_a_665_ = lean_ctor_get(v___x_664_, 0);
lean_inc(v_a_665_);
lean_dec_ref_known(v___x_664_, 1);
v___x_666_ = lean_array_mk(v_args_618_);
v___x_667_ = l_Array_append___redArg(v_lintDriverArgs_624_, v___x_666_);
lean_dec_ref(v___x_666_);
v___x_668_ = l_Lake_env(v_a_665_, v___x_667_, v_a_620_);
return v___x_668_;
}
else
{
lean_object* v_a_669_; lean_object* v___x_671_; uint8_t v_isShared_672_; uint8_t v_isSharedCheck_676_; 
lean_dec_ref(v_lintDriverArgs_624_);
lean_dec(v_args_618_);
v_a_669_ = lean_ctor_get(v___x_664_, 0);
v_isSharedCheck_676_ = !lean_is_exclusive(v___x_664_);
if (v_isSharedCheck_676_ == 0)
{
v___x_671_ = v___x_664_;
v_isShared_672_ = v_isSharedCheck_676_;
goto v_resetjp_670_;
}
else
{
lean_inc(v_a_669_);
lean_dec(v___x_664_);
v___x_671_ = lean_box(0);
v_isShared_672_ = v_isSharedCheck_676_;
goto v_resetjp_670_;
}
v_resetjp_670_:
{
lean_object* v___x_674_; 
if (v_isShared_672_ == 0)
{
v___x_674_ = v___x_671_;
goto v_reusejp_673_;
}
else
{
lean_object* v_reuseFailAlloc_675_; 
v_reuseFailAlloc_675_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_675_, 0, v_a_669_);
v___x_674_ = v_reuseFailAlloc_675_;
goto v_reusejp_673_;
}
v_reusejp_673_:
{
return v___x_674_;
}
}
}
}
}
}
v___jp_636_:
{
uint8_t v___x_637_; lean_object* v___x_638_; lean_object* v___x_639_; lean_object* v___x_640_; lean_object* v___x_641_; lean_object* v___x_642_; lean_object* v___x_643_; lean_object* v___x_644_; lean_object* v___x_646_; 
v___x_637_ = 0;
v___x_638_ = l_Lean_Name_toString(v_baseName_633_, v___x_637_);
v___x_639_ = ((lean_object*)(l_Lake_Package_lint___closed__1));
v___x_640_ = lean_string_append(v___x_638_, v___x_639_);
v___x_641_ = lean_string_append(v___x_640_, v_snd_632_);
lean_dec(v_snd_632_);
v___x_642_ = ((lean_object*)(l_Lake_Package_resolveDriver___closed__5));
v___x_643_ = lean_string_append(v___x_641_, v___x_642_);
v___x_644_ = lean_mk_io_user_error(v___x_643_);
if (v_isShared_630_ == 0)
{
lean_ctor_set_tag(v___x_629_, 1);
lean_ctor_set(v___x_629_, 0, v___x_644_);
v___x_646_ = v___x_629_;
goto v_reusejp_645_;
}
else
{
lean_object* v_reuseFailAlloc_647_; 
v_reuseFailAlloc_647_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_647_, 0, v___x_644_);
v___x_646_ = v_reuseFailAlloc_647_;
goto v_reusejp_645_;
}
v_reusejp_645_:
{
return v___x_646_;
}
}
}
}
else
{
lean_object* v_a_678_; lean_object* v___x_680_; uint8_t v_isShared_681_; uint8_t v_isSharedCheck_685_; 
lean_dec_ref(v_lintDriverArgs_624_);
lean_dec_ref(v_buildConfig_619_);
lean_dec(v_args_618_);
v_a_678_ = lean_ctor_get(v___x_626_, 0);
v_isSharedCheck_685_ = !lean_is_exclusive(v___x_626_);
if (v_isSharedCheck_685_ == 0)
{
v___x_680_ = v___x_626_;
v_isShared_681_ = v_isSharedCheck_685_;
goto v_resetjp_679_;
}
else
{
lean_inc(v_a_678_);
lean_dec(v___x_626_);
v___x_680_ = lean_box(0);
v_isShared_681_ = v_isSharedCheck_685_;
goto v_resetjp_679_;
}
v_resetjp_679_:
{
lean_object* v___x_683_; 
if (v_isShared_681_ == 0)
{
v___x_683_ = v___x_680_;
goto v_reusejp_682_;
}
else
{
lean_object* v_reuseFailAlloc_684_; 
v_reuseFailAlloc_684_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_684_, 0, v_a_678_);
v___x_683_ = v_reuseFailAlloc_684_;
goto v_reusejp_682_;
}
v_reusejp_682_:
{
return v___x_683_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Package_lint___boxed(lean_object* v_pkg_686_, lean_object* v_args_687_, lean_object* v_buildConfig_688_, lean_object* v_a_689_, lean_object* v_a_690_){
_start:
{
lean_object* v_res_691_; 
v_res_691_ = l_Lake_Package_lint(v_pkg_686_, v_args_687_, v_buildConfig_688_, v_a_689_);
lean_dec(v_a_689_);
return v_res_691_;
}
}
LEAN_EXPORT lean_object* l_Lake_Workspace_evalLeanFile(lean_object* v_ws_692_, lean_object* v_leanFile_693_, lean_object* v_moreArgs_694_, lean_object* v_buildConfig_695_){
_start:
{
lean_object* v___x_697_; lean_object* v___x_698_; 
v___x_697_ = lean_alloc_closure((void*)(l_Lake_prepareLeanCommand___boxed), 9, 2);
lean_closure_set(v___x_697_, 0, v_leanFile_693_);
lean_closure_set(v___x_697_, 1, v_moreArgs_694_);
v___x_698_ = l_Lake_Workspace_runBuild___redArg(v_ws_692_, v___x_697_, v_buildConfig_695_);
if (lean_obj_tag(v___x_698_) == 0)
{
lean_object* v_a_699_; lean_object* v___x_700_; 
v_a_699_ = lean_ctor_get(v___x_698_, 0);
lean_inc_n(v_a_699_, 2);
lean_dec_ref_known(v___x_698_, 1);
v___x_700_ = lean_io_process_spawn(v_a_699_);
if (lean_obj_tag(v___x_700_) == 0)
{
lean_object* v_a_701_; lean_object* v_toStdioConfig_702_; lean_object* v___x_703_; 
v_a_701_ = lean_ctor_get(v___x_700_, 0);
lean_inc(v_a_701_);
lean_dec_ref_known(v___x_700_, 1);
v_toStdioConfig_702_ = lean_ctor_get(v_a_699_, 0);
lean_inc_ref(v_toStdioConfig_702_);
lean_dec(v_a_699_);
v___x_703_ = lean_io_process_child_wait(v_toStdioConfig_702_, v_a_701_);
lean_dec(v_a_701_);
lean_dec_ref(v_toStdioConfig_702_);
return v___x_703_;
}
else
{
lean_object* v_a_704_; lean_object* v___x_706_; uint8_t v_isShared_707_; uint8_t v_isSharedCheck_711_; 
lean_dec(v_a_699_);
v_a_704_ = lean_ctor_get(v___x_700_, 0);
v_isSharedCheck_711_ = !lean_is_exclusive(v___x_700_);
if (v_isSharedCheck_711_ == 0)
{
v___x_706_ = v___x_700_;
v_isShared_707_ = v_isSharedCheck_711_;
goto v_resetjp_705_;
}
else
{
lean_inc(v_a_704_);
lean_dec(v___x_700_);
v___x_706_ = lean_box(0);
v_isShared_707_ = v_isSharedCheck_711_;
goto v_resetjp_705_;
}
v_resetjp_705_:
{
lean_object* v___x_709_; 
if (v_isShared_707_ == 0)
{
v___x_709_ = v___x_706_;
goto v_reusejp_708_;
}
else
{
lean_object* v_reuseFailAlloc_710_; 
v_reuseFailAlloc_710_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_710_, 0, v_a_704_);
v___x_709_ = v_reuseFailAlloc_710_;
goto v_reusejp_708_;
}
v_reusejp_708_:
{
return v___x_709_;
}
}
}
}
else
{
lean_object* v_a_712_; lean_object* v___x_714_; uint8_t v_isShared_715_; uint8_t v_isSharedCheck_719_; 
v_a_712_ = lean_ctor_get(v___x_698_, 0);
v_isSharedCheck_719_ = !lean_is_exclusive(v___x_698_);
if (v_isSharedCheck_719_ == 0)
{
v___x_714_ = v___x_698_;
v_isShared_715_ = v_isSharedCheck_719_;
goto v_resetjp_713_;
}
else
{
lean_inc(v_a_712_);
lean_dec(v___x_698_);
v___x_714_ = lean_box(0);
v_isShared_715_ = v_isSharedCheck_719_;
goto v_resetjp_713_;
}
v_resetjp_713_:
{
lean_object* v___x_717_; 
if (v_isShared_715_ == 0)
{
v___x_717_ = v___x_714_;
goto v_reusejp_716_;
}
else
{
lean_object* v_reuseFailAlloc_718_; 
v_reuseFailAlloc_718_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_718_, 0, v_a_712_);
v___x_717_ = v_reuseFailAlloc_718_;
goto v_reusejp_716_;
}
v_reusejp_716_:
{
return v___x_717_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Workspace_evalLeanFile___boxed(lean_object* v_ws_720_, lean_object* v_leanFile_721_, lean_object* v_moreArgs_722_, lean_object* v_buildConfig_723_, lean_object* v_a_724_){
_start:
{
lean_object* v_res_725_; 
v_res_725_ = l_Lake_Workspace_evalLeanFile(v_ws_720_, v_leanFile_721_, v_moreArgs_722_, v_buildConfig_723_);
return v_res_725_;
}
}
lean_object* runtime_initialize_Lake_Config_Workspace(uint8_t builtin);
lean_object* runtime_initialize_Lake_Build_Run(uint8_t builtin);
lean_object* runtime_initialize_Lake_Build_Actions(uint8_t builtin);
lean_object* runtime_initialize_Lake_Build_Targets(uint8_t builtin);
lean_object* runtime_initialize_Lake_Build_Module(uint8_t builtin);
lean_object* runtime_initialize_Lake_Util_Proc(uint8_t builtin);
void lean_initialize();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lake_CLI_Actions(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize();
res = runtime_initialize_Lake_Config_Workspace(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Build_Run(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Build_Actions(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Build_Targets(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Build_Module(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Util_Proc(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lake_Package_test___boxed__const__1 = _init_l_Lake_Package_test___boxed__const__1();
lean_mark_persistent(l_Lake_Package_test___boxed__const__1);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lake_CLI_Actions(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lake_Config_Workspace(uint8_t builtin);
lean_object* initialize_Lake_Build_Run(uint8_t builtin);
lean_object* initialize_Lake_Build_Actions(uint8_t builtin);
lean_object* initialize_Lake_Build_Targets(uint8_t builtin);
lean_object* initialize_Lake_Build_Module(uint8_t builtin);
lean_object* initialize_Lake_Util_Proc(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lake_CLI_Actions(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lake_Config_Workspace(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Build_Run(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Build_Actions(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Build_Targets(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Build_Module(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Util_Proc(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_CLI_Actions(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lake_CLI_Actions(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lake_CLI_Actions(builtin);
}
#ifdef __cplusplus
}
#endif

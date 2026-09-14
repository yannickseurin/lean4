// Lean compiler output
// Module: Lake.CLI.Check
// Imports: public import Lake.Check.Axioms public import Lake.Check.Compare public import Lake.Config.InstallPath public import Lake.Util.Exit public import Lean.Data.Json.FromToJson import Lean.Environment import Lean.Replay import Init.Data.String.Search import Init.Data.String.TakeDrop import Init.Data.ToString.Macro import Init.System.IO import Init.System.Platform
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
lean_object* lean_string_utf8_byte_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_JsonNumber_fromNat(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* lean_string_push(lean_object*, uint32_t);
lean_object* lean_get_stderr();
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* lean_io_error_to_string(lean_object*);
lean_object* lean_mk_io_user_error(lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* lean_get_stdout();
lean_object* lean_array_to_list(lean_object*);
lean_object* l_String_quote(lean_object*);
lean_object* lean_string_length(lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* l_Std_Format_fill(lean_object*);
lean_object* l_Repr_addAppParen(lean_object*, lean_object*);
lean_object* l_Bool_repr___redArg(uint8_t);
lean_object* l_List_reverse___redArg(lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_io_getenv(lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* lean_io_process_spawn(lean_object*);
lean_object* lean_io_process_child_wait(lean_object*, lean_object*);
uint8_t lean_uint32_dec_eq(uint32_t, uint32_t);
lean_object* lean_uint32_to_nat(uint32_t);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* l_IO_Process_output(lean_object*, lean_object*);
lean_object* l_String_Slice_trimAscii(lean_object*);
lean_object* l_String_Slice_toString(lean_object*);
lean_object* l_unsafeCast___redArg(lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Lean_Name_toString(lean_object*, uint8_t);
lean_object* l_Lean_Json_mkObj(lean_object*);
lean_object* l_Lean_Json_compress(lean_object*);
lean_object* lean_io_prim_handle_put_str(lean_object*, lean_object*);
lean_object* lean_io_prim_handle_flush(lean_object*);
lean_object* l_Array_toSubarray___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_string_utf8_next_fast(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
uint8_t lean_string_get_byte_fast(lean_object*, lean_object*);
uint8_t lean_uint8_dec_eq(uint8_t, uint8_t);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* l_String_Slice_posGE___redArg(lean_object*, lean_object*);
lean_object* l_String_Slice_Pattern_ForwardSliceSearcher_buildTable(lean_object*);
lean_object* lean_io_create_tempfile();
lean_object* lean_io_remove_file(lean_object*);
lean_object* lean_io_prim_handle_read(lean_object*, size_t);
uint8_t l_ByteArray_isEmpty(lean_object*);
lean_object* lean_io_prim_handle_write(lean_object*, lean_object*);
uint8_t lean_string_memcmp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_String_Slice_pos_x21(lean_object*, lean_object*);
lean_object* l_Lean_Json_getBool_x3f(lean_object*);
lean_object* l_System_FilePath_join(lean_object*, lean_object*);
lean_object* lean_io_as_task(lean_object*, lean_object*);
lean_object* l_IO_FS_Handle_readToEnd(lean_object*);
lean_object* lean_task_get_own(lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* lean_io_prim_handle_mk(lean_object*, uint8_t);
lean_object* lean_stream_of_handle(lean_object*);
lean_object* l_LeanExport_parseStream(lean_object*);
lean_object* l_Lake_Check_compareAt(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lake_Check_checkAxioms(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_String_intercalate(lean_object*, lean_object*);
uint8_t l_System_FilePath_pathExists(lean_object*);
lean_object* lean_io_create_dir(lean_object*);
lean_object* l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(lean_object*, uint8_t);
lean_object* l_Lean_Json_getStr_x3f(lean_object*);
lean_object* l_Lean_Json_getObjValD(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Json_pretty(lean_object*, lean_object*);
lean_object* l_String_compare___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Json_getObj_x3f(lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* l_Lake_Check_usedAxioms(lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
uint32_t lean_string_utf8_get_fast(lean_object*, lean_object*);
lean_object* l_String_Slice_subslice_x21(lean_object*, lean_object*, lean_object*);
lean_object* l_String_toName(lean_object*);
extern uint8_t l_System_Platform_isLinux;
extern lean_object* l_System_FilePath_exeExtension;
lean_object* l_System_FilePath_addExtension(lean_object*, lean_object*);
lean_object* lean_io_realpath(lean_object*);
uint8_t lean_string_compare(lean_object*, lean_object*);
lean_object* l_IO_FS_readFile(lean_object*);
lean_object* l_Lean_Json_parse(lean_object*);
lean_object* l_List_foldl___at___00Array_appendList_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_Check_0__Lake_Check_getExternalKernels(lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_Check_0__Lake_Check_getExternalKernels___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_Check_0__Lake_Check_getTheoremNames(lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_Check_0__Lake_Check_getTheoremNames___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_Check_0__Lake_Check_getDefinitionNames(lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_Check_0__Lake_Check_getDefinitionNames___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_Check_0__Lake_Check_getProjectDir(lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_Check_0__Lake_Check_getProjectDir___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_Check_0__Lake_Check_getLeanPrefix(lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_Check_0__Lake_Check_getLeanPrefix___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_Check_0__Lake_Check_getLakeHome(lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_Check_0__Lake_Check_getLakeHome___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_Check_0__Lake_Check_getChallengeModule(lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_Check_0__Lake_Check_getChallengeModule___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_Check_0__Lake_Check_getSolutionModule(lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_Check_0__Lake_Check_getSolutionModule___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_Check_0__Lake_Check_getLegalAxioms(lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_Check_0__Lake_Check_getLegalAxioms___boxed(lean_object*, lean_object*);
static const lean_ctor_object l___private_Lake_CLI_Check_0__Lake_Check_whichExe___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(1, 1, 1, 0, 0, 0, 0, 0)}};
static const lean_object* l___private_Lake_CLI_Check_0__Lake_Check_whichExe___closed__0 = (const lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_whichExe___closed__0_value;
static const lean_string_object l___private_Lake_CLI_Check_0__Lake_Check_whichExe___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "which"};
static const lean_object* l___private_Lake_CLI_Check_0__Lake_Check_whichExe___closed__1 = (const lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_whichExe___closed__1_value;
static const lean_array_object l___private_Lake_CLI_Check_0__Lake_Check_whichExe___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lake_CLI_Check_0__Lake_Check_whichExe___closed__2 = (const lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_whichExe___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lake_CLI_Check_0__Lake_Check_whichExe(lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_Check_0__Lake_Check_whichExe___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Lake_CLI_Check_0__Lake_Check_missingSandboxError___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "`lake "};
static const lean_object* l___private_Lake_CLI_Check_0__Lake_Check_missingSandboxError___closed__0 = (const lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_missingSandboxError___closed__0_value;
static const lean_string_object l___private_Lake_CLI_Check_0__Lake_Check_missingSandboxError___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "` needs `"};
static const lean_object* l___private_Lake_CLI_Check_0__Lake_Check_missingSandboxError___closed__1 = (const lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_missingSandboxError___closed__1_value;
static const lean_string_object l___private_Lake_CLI_Check_0__Lake_Check_missingSandboxError___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 431, .m_capacity = 431, .m_length = 430, .m_data = "` to sandbox the code it checks, and it was not found.\n\n  Install `bubblewrap` from your distribution and put `bwrap` on PATH, or set\n  COMPARATOR_BWRAP to its full path. It needs either unprivileged user\n  namespaces or a `bwrap` installed setuid root, which is how distributions\n  that disable them ship it.\n\n  There is no unsandboxed mode: the code being checked is untrusted, and it\n  is built and exported inside the sandbox."};
static const lean_object* l___private_Lake_CLI_Check_0__Lake_Check_missingSandboxError___closed__2 = (const lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_missingSandboxError___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lake_CLI_Check_0__Lake_Check_missingSandboxError(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_Check_0__Lake_Check_missingSandboxError___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_Check_0__Lake_Check_sandboxEnv_spec__1(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_Check_0__Lake_Check_sandboxEnv_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_Check_0__Lake_Check_sandboxEnv_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_Check_0__Lake_Check_sandboxEnv_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_Check_0__Lake_Check_sandboxEnv_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_Check_0__Lake_Check_sandboxEnv_spec__2___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_Check_0__Lake_Check_sandboxEnv_spec__2___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_Check_0__Lake_Check_sandboxEnv_spec__2(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_Check_0__Lake_Check_sandboxEnv_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_Check_0__Lake_Check_sandboxEnv(lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_Check_0__Lake_Check_sandboxEnv___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "--tmpfs"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs_spec__3___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs_spec__3___closed__0_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs_spec__3___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs_spec__3___closed__1;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs_spec__3(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "--ro-bind"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs_spec__2___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs_spec__2___closed__0_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs_spec__2___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs_spec__2___closed__1;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs_spec__2(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "--bind"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs_spec__1___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs_spec__1___closed__0_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs_spec__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs_spec__1___closed__1;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs_spec__1(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "--setenv"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs_spec__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs_spec__0___closed__0_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs_spec__0___closed__1;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "/"};
static const lean_object* l___private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs___closed__0 = (const lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs___closed__0_value;
static const lean_string_object l___private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "/home"};
static const lean_object* l___private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs___closed__1 = (const lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs___closed__1_value;
static lean_once_cell_t l___private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs___closed__2;
static lean_once_cell_t l___private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs___closed__3;
static lean_once_cell_t l___private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs___closed__4;
static lean_once_cell_t l___private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs___closed__5;
static lean_once_cell_t l___private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs___closed__6;
static lean_once_cell_t l___private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs___closed__7;
static const lean_string_object l___private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "--"};
static const lean_object* l___private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs___closed__8 = (const lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs___closed__8_value;
static lean_once_cell_t l___private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs___closed__9;
static const lean_string_object l___private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "--chdir"};
static const lean_object* l___private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs___closed__10 = (const lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs___closed__10_value;
static lean_once_cell_t l___private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs___closed__11;
static const lean_string_object l___private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "/root"};
static const lean_object* l___private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs___closed__12 = (const lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs___closed__12_value;
static lean_once_cell_t l___private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs___closed__13;
static lean_once_cell_t l___private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs___closed__14;
static const lean_string_object l___private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "/run/user"};
static const lean_object* l___private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs___closed__15 = (const lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs___closed__15_value;
static const lean_string_object l___private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "/tmp"};
static const lean_object* l___private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs___closed__16 = (const lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs___closed__16_value;
static const lean_string_object l___private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "--dir"};
static const lean_object* l___private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs___closed__17 = (const lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs___closed__17_value;
static const lean_string_object l___private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "/tmp/home"};
static const lean_object* l___private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs___closed__18 = (const lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs___closed__18_value;
static const lean_string_object l___private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "HOME"};
static const lean_object* l___private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs___closed__19 = (const lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs___closed__19_value;
static const lean_string_object l___private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "--unshare-all"};
static const lean_object* l___private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs___closed__20 = (const lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs___closed__20_value;
static const lean_string_object l___private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "--die-with-parent"};
static const lean_object* l___private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs___closed__21 = (const lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs___closed__21_value;
static const lean_string_object l___private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "--new-session"};
static const lean_object* l___private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs___closed__22 = (const lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs___closed__22_value;
static const lean_array_object l___private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*6, .m_other = 0, .m_tag = 246}, .m_size = 6, .m_capacity = 6, .m_data = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs_spec__0___closed__0_value),((lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs___closed__19_value),((lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs___closed__18_value),((lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs___closed__20_value),((lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs___closed__21_value),((lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs___closed__22_value)}};
static const lean_object* l___private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs___closed__23 = (const lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs___closed__23_value;
static const lean_string_object l___private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "--share-net"};
static const lean_object* l___private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs___closed__24 = (const lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs___closed__24_value;
static const lean_array_object l___private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 246}, .m_size = 1, .m_capacity = 1, .m_data = {((lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs___closed__24_value)}};
static const lean_object* l___private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs___closed__25 = (const lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs___closed__25_value;
static const lean_string_object l___private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "--dev"};
static const lean_object* l___private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs___closed__26 = (const lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs___closed__26_value;
static const lean_string_object l___private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "/dev"};
static const lean_object* l___private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs___closed__27 = (const lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs___closed__27_value;
static const lean_string_object l___private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "--proc"};
static const lean_object* l___private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs___closed__28 = (const lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs___closed__28_value;
static const lean_string_object l___private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "/proc"};
static const lean_object* l___private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs___closed__29 = (const lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs___closed__29_value;
static const lean_string_object l___private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "--clearenv"};
static const lean_object* l___private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs___closed__30 = (const lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs___closed__30_value;
static lean_once_cell_t l___private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs___closed__31_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs___closed__31;
static lean_once_cell_t l___private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs___closed__32_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs___closed__32;
static lean_once_cell_t l___private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs___closed__33_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs___closed__33;
static lean_once_cell_t l___private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs___closed__34_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs___closed__34;
static lean_once_cell_t l___private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs___closed__35_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs___closed__35;
static lean_once_cell_t l___private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs___closed__36_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs___closed__36;
static lean_once_cell_t l___private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs___closed__37_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs___closed__37;
static lean_once_cell_t l___private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs___closed__38_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs___closed__38;
static lean_once_cell_t l___private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs___closed__39_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs___closed__39;
static lean_once_cell_t l___private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs___closed__40_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs___closed__40;
LEAN_EXPORT lean_object* l___private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lake_CLI_Check_0__Lake_Check_sandboxSpawnArgs___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "-i"};
static const lean_object* l___private_Lake_CLI_Check_0__Lake_Check_sandboxSpawnArgs___closed__0 = (const lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_sandboxSpawnArgs___closed__0_value;
static lean_once_cell_t l___private_Lake_CLI_Check_0__Lake_Check_sandboxSpawnArgs___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_CLI_Check_0__Lake_Check_sandboxSpawnArgs___closed__1;
LEAN_EXPORT lean_object* l___private_Lake_CLI_Check_0__Lake_Check_sandboxSpawnArgs(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_Check_0__Lake_Check_sandboxSpawnArgs___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_Check_0__Lake_Check_runSandBoxedWithStdoutTo_pipedOutput_loop___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_Check_0__Lake_Check_runSandBoxedWithStdoutTo_pipedOutput_loop___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_Check_0__Lake_Check_runSandBoxedWithStdoutTo_pipedOutput_loop(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_Check_0__Lake_Check_runSandBoxedWithStdoutTo_pipedOutput_loop___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_ofExcept___at___00__private_Lake_CLI_Check_0__Lake_Check_runSandBoxedWithStdoutTo_pipedOutput_spec__0___redArg(lean_object*);
LEAN_EXPORT lean_object* l_IO_ofExcept___at___00__private_Lake_CLI_Check_0__Lake_Check_runSandBoxedWithStdoutTo_pipedOutput_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_ofExcept___at___00__private_Lake_CLI_Check_0__Lake_Check_runSandBoxedWithStdoutTo_pipedOutput_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_ofExcept___at___00__private_Lake_CLI_Check_0__Lake_Check_runSandBoxedWithStdoutTo_pipedOutput_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_Check_0__Lake_Check_runSandBoxedWithStdoutTo_pipedOutput___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_Check_0__Lake_Check_runSandBoxedWithStdoutTo_pipedOutput___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lake_CLI_Check_0__Lake_Check_runSandBoxedWithStdoutTo_pipedOutput___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(2, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l___private_Lake_CLI_Check_0__Lake_Check_runSandBoxedWithStdoutTo_pipedOutput___closed__0 = (const lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_runSandBoxedWithStdoutTo_pipedOutput___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lake_CLI_Check_0__Lake_Check_runSandBoxedWithStdoutTo_pipedOutput(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_Check_0__Lake_Check_runSandBoxedWithStdoutTo_pipedOutput___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_eprint___at___00__private_Lake_CLI_Check_0__Lake_Check_runSandBoxedWithStdoutTo_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_IO_eprint___at___00__private_Lake_CLI_Check_0__Lake_Check_runSandBoxedWithStdoutTo_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Lake_CLI_Check_0__Lake_Check_runSandBoxedWithStdoutTo___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Child exited with "};
static const lean_object* l___private_Lake_CLI_Check_0__Lake_Check_runSandBoxedWithStdoutTo___closed__0 = (const lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_runSandBoxedWithStdoutTo___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lake_CLI_Check_0__Lake_Check_runSandBoxedWithStdoutTo(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_Check_0__Lake_Check_runSandBoxedWithStdoutTo___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_Check_0__Lake_Check_runSandBoxedWithStdout(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_Check_0__Lake_Check_runSandBoxedWithStdout___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_Check_0__Lake_Check_runSandBoxedExitCode(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_Check_0__Lake_Check_runSandBoxedExitCode___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_Check_0__Lake_Check_runSandBoxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_Check_0__Lake_Check_runSandBoxed___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_String_dropPrefix_x3f___at___00__private_Lake_CLI_Check_0__Lake_Check_safeResolveWorkspace_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "LEAN_PATH="};
static const lean_object* l_String_dropPrefix_x3f___at___00__private_Lake_CLI_Check_0__Lake_Check_safeResolveWorkspace_spec__0___redArg___closed__0 = (const lean_object*)&l_String_dropPrefix_x3f___at___00__private_Lake_CLI_Check_0__Lake_Check_safeResolveWorkspace_spec__0___redArg___closed__0_value;
static lean_once_cell_t l_String_dropPrefix_x3f___at___00__private_Lake_CLI_Check_0__Lake_Check_safeResolveWorkspace_spec__0___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_String_dropPrefix_x3f___at___00__private_Lake_CLI_Check_0__Lake_Check_safeResolveWorkspace_spec__0___redArg___closed__1;
LEAN_EXPORT lean_object* l_String_dropPrefix_x3f___at___00__private_Lake_CLI_Check_0__Lake_Check_safeResolveWorkspace_spec__0___redArg(lean_object*);
LEAN_EXPORT lean_object* l_String_dropPrefix_x3f___at___00__private_Lake_CLI_Check_0__Lake_Check_safeResolveWorkspace_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_dropPrefix_x3f___at___00__private_Lake_CLI_Check_0__Lake_Check_safeResolveWorkspace_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_String_dropPrefix_x3f___at___00__private_Lake_CLI_Check_0__Lake_Check_safeResolveWorkspace_spec__1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "PATH="};
static const lean_object* l_String_dropPrefix_x3f___at___00__private_Lake_CLI_Check_0__Lake_Check_safeResolveWorkspace_spec__1___redArg___closed__0 = (const lean_object*)&l_String_dropPrefix_x3f___at___00__private_Lake_CLI_Check_0__Lake_Check_safeResolveWorkspace_spec__1___redArg___closed__0_value;
static lean_once_cell_t l_String_dropPrefix_x3f___at___00__private_Lake_CLI_Check_0__Lake_Check_safeResolveWorkspace_spec__1___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_String_dropPrefix_x3f___at___00__private_Lake_CLI_Check_0__Lake_Check_safeResolveWorkspace_spec__1___redArg___closed__1;
LEAN_EXPORT lean_object* l_String_dropPrefix_x3f___at___00__private_Lake_CLI_Check_0__Lake_Check_safeResolveWorkspace_spec__1___redArg(lean_object*);
LEAN_EXPORT lean_object* l_String_dropPrefix_x3f___at___00__private_Lake_CLI_Check_0__Lake_Check_safeResolveWorkspace_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_dropPrefix_x3f___at___00__private_Lake_CLI_Check_0__Lake_Check_safeResolveWorkspace_spec__1___boxed(lean_object*, lean_object*);
static const lean_ctor_object l_String_Slice_splitToSubslice___at___00__private_Lake_CLI_Check_0__Lake_Check_safeResolveWorkspace_spec__3___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_String_Slice_splitToSubslice___at___00__private_Lake_CLI_Check_0__Lake_Check_safeResolveWorkspace_spec__3___redArg___closed__0 = (const lean_object*)&l_String_Slice_splitToSubslice___at___00__private_Lake_CLI_Check_0__Lake_Check_safeResolveWorkspace_spec__3___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Lake_CLI_Check_0__Lake_Check_safeResolveWorkspace_spec__3___redArg();
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Lake_CLI_Check_0__Lake_Check_safeResolveWorkspace_spec__3___redArg___boxed(lean_object*);
static lean_once_cell_t l_String_Slice_splitToSubslice___at___00__private_Lake_CLI_Check_0__Lake_Check_safeResolveWorkspace_spec__3___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_String_Slice_splitToSubslice___at___00__private_Lake_CLI_Check_0__Lake_Check_safeResolveWorkspace_spec__3___closed__0;
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Lake_CLI_Check_0__Lake_Check_safeResolveWorkspace_spec__3(lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Lake_CLI_Check_0__Lake_Check_safeResolveWorkspace_spec__3___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lake_CLI_Check_0__Lake_Check_safeResolveWorkspace_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lake_CLI_Check_0__Lake_Check_safeResolveWorkspace_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lake_CLI_Check_0__Lake_Check_safeResolveWorkspace_spec__5___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lake_CLI_Check_0__Lake_Check_safeResolveWorkspace_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_print___at___00IO_println___at___00__private_Lake_CLI_Check_0__Lake_Check_safeResolveWorkspace_spec__2_spec__2(lean_object*);
LEAN_EXPORT lean_object* l_IO_print___at___00IO_println___at___00__private_Lake_CLI_Check_0__Lake_Check_safeResolveWorkspace_spec__2_spec__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_println___at___00__private_Lake_CLI_Check_0__Lake_Check_safeResolveWorkspace_spec__2(lean_object*);
LEAN_EXPORT lean_object* l_IO_println___at___00__private_Lake_CLI_Check_0__Lake_Check_safeResolveWorkspace_spec__2___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Lake_CLI_Check_0__Lake_Check_safeResolveWorkspace___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 52, .m_capacity = 52, .m_length = 51, .m_data = "`lake env` did not report the project's search path"};
static const lean_object* l___private_Lake_CLI_Check_0__Lake_Check_safeResolveWorkspace___closed__0 = (const lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_safeResolveWorkspace___closed__0_value;
static const lean_ctor_object l___private_Lake_CLI_Check_0__Lake_Check_safeResolveWorkspace___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_safeResolveWorkspace___closed__0_value)}};
static const lean_object* l___private_Lake_CLI_Check_0__Lake_Check_safeResolveWorkspace___closed__1 = (const lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_safeResolveWorkspace___closed__1_value;
static const lean_string_object l___private_Lake_CLI_Check_0__Lake_Check_safeResolveWorkspace___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Resolving dependencies"};
static const lean_object* l___private_Lake_CLI_Check_0__Lake_Check_safeResolveWorkspace___closed__2 = (const lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_safeResolveWorkspace___closed__2_value;
static const lean_string_object l___private_Lake_CLI_Check_0__Lake_Check_safeResolveWorkspace___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = ".lake"};
static const lean_object* l___private_Lake_CLI_Check_0__Lake_Check_safeResolveWorkspace___closed__3 = (const lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_safeResolveWorkspace___closed__3_value;
static const lean_string_object l___private_Lake_CLI_Check_0__Lake_Check_safeResolveWorkspace___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "env"};
static const lean_object* l___private_Lake_CLI_Check_0__Lake_Check_safeResolveWorkspace___closed__4 = (const lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_safeResolveWorkspace___closed__4_value;
static const lean_array_object l___private_Lake_CLI_Check_0__Lake_Check_safeResolveWorkspace___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 246}, .m_size = 1, .m_capacity = 1, .m_data = {((lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_safeResolveWorkspace___closed__4_value)}};
static const lean_object* l___private_Lake_CLI_Check_0__Lake_Check_safeResolveWorkspace___closed__5 = (const lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_safeResolveWorkspace___closed__5_value;
static const lean_string_object l___private_Lake_CLI_Check_0__Lake_Check_safeResolveWorkspace___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "PATH"};
static const lean_object* l___private_Lake_CLI_Check_0__Lake_Check_safeResolveWorkspace___closed__6 = (const lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_safeResolveWorkspace___closed__6_value;
static const lean_string_object l___private_Lake_CLI_Check_0__Lake_Check_safeResolveWorkspace___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "LEAN_ABORT_ON_PANIC"};
static const lean_object* l___private_Lake_CLI_Check_0__Lake_Check_safeResolveWorkspace___closed__7 = (const lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_safeResolveWorkspace___closed__7_value;
static const lean_array_object l___private_Lake_CLI_Check_0__Lake_Check_safeResolveWorkspace___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 246}, .m_size = 2, .m_capacity = 2, .m_data = {((lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_safeResolveWorkspace___closed__6_value),((lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_safeResolveWorkspace___closed__7_value)}};
static const lean_object* l___private_Lake_CLI_Check_0__Lake_Check_safeResolveWorkspace___closed__8 = (const lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_safeResolveWorkspace___closed__8_value;
static const lean_string_object l___private_Lake_CLI_Check_0__Lake_Check_safeResolveWorkspace___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "1"};
static const lean_object* l___private_Lake_CLI_Check_0__Lake_Check_safeResolveWorkspace___closed__9 = (const lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_safeResolveWorkspace___closed__9_value;
static const lean_ctor_object l___private_Lake_CLI_Check_0__Lake_Check_safeResolveWorkspace___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_safeResolveWorkspace___closed__9_value)}};
static const lean_object* l___private_Lake_CLI_Check_0__Lake_Check_safeResolveWorkspace___closed__10 = (const lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_safeResolveWorkspace___closed__10_value;
static const lean_ctor_object l___private_Lake_CLI_Check_0__Lake_Check_safeResolveWorkspace___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_safeResolveWorkspace___closed__7_value),((lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_safeResolveWorkspace___closed__10_value)}};
static const lean_object* l___private_Lake_CLI_Check_0__Lake_Check_safeResolveWorkspace___closed__11 = (const lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_safeResolveWorkspace___closed__11_value;
static const lean_array_object l___private_Lake_CLI_Check_0__Lake_Check_safeResolveWorkspace___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 246}, .m_size = 1, .m_capacity = 1, .m_data = {((lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_safeResolveWorkspace___closed__11_value)}};
static const lean_object* l___private_Lake_CLI_Check_0__Lake_Check_safeResolveWorkspace___closed__12 = (const lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_safeResolveWorkspace___closed__12_value;
static const lean_array_object l___private_Lake_CLI_Check_0__Lake_Check_safeResolveWorkspace___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lake_CLI_Check_0__Lake_Check_safeResolveWorkspace___closed__13 = (const lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_safeResolveWorkspace___closed__13_value;
static const lean_string_object l___private_Lake_CLI_Check_0__Lake_Check_safeResolveWorkspace___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l___private_Lake_CLI_Check_0__Lake_Check_safeResolveWorkspace___closed__14 = (const lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_safeResolveWorkspace___closed__14_value;
static const lean_ctor_object l___private_Lake_CLI_Check_0__Lake_Check_safeResolveWorkspace___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_safeResolveWorkspace___closed__14_value),((lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_safeResolveWorkspace___closed__14_value)}};
static const lean_object* l___private_Lake_CLI_Check_0__Lake_Check_safeResolveWorkspace___closed__15 = (const lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_safeResolveWorkspace___closed__15_value;
LEAN_EXPORT lean_object* l___private_Lake_CLI_Check_0__Lake_Check_safeResolveWorkspace(lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_Check_0__Lake_Check_safeResolveWorkspace___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lake_CLI_Check_0__Lake_Check_safeResolveWorkspace_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lake_CLI_Check_0__Lake_Check_safeResolveWorkspace_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lake_CLI_Check_0__Lake_Check_safeResolveWorkspace_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lake_CLI_Check_0__Lake_Check_safeResolveWorkspace_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lake_CLI_Check_0__Lake_Check_safeResolveDeps___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "resolve-deps"};
static const lean_object* l___private_Lake_CLI_Check_0__Lake_Check_safeResolveDeps___closed__0 = (const lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_safeResolveDeps___closed__0_value;
static const lean_array_object l___private_Lake_CLI_Check_0__Lake_Check_safeResolveDeps___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 246}, .m_size = 1, .m_capacity = 1, .m_data = {((lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_safeResolveDeps___closed__0_value)}};
static const lean_object* l___private_Lake_CLI_Check_0__Lake_Check_safeResolveDeps___closed__1 = (const lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_safeResolveDeps___closed__1_value;
static const lean_array_object l___private_Lake_CLI_Check_0__Lake_Check_safeResolveDeps___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 246}, .m_size = 3, .m_capacity = 3, .m_data = {((lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_safeResolveWorkspace___closed__6_value),((lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs___closed__19_value),((lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_safeResolveWorkspace___closed__7_value)}};
static const lean_object* l___private_Lake_CLI_Check_0__Lake_Check_safeResolveDeps___closed__2 = (const lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_safeResolveDeps___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lake_CLI_Check_0__Lake_Check_safeResolveDeps(lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_Check_0__Lake_Check_safeResolveDeps___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Lake_CLI_Check_0__Lake_Check_forbiddenPaths___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "/run"};
static const lean_object* l___private_Lake_CLI_Check_0__Lake_Check_forbiddenPaths___closed__0 = (const lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_forbiddenPaths___closed__0_value;
static const lean_string_object l___private_Lake_CLI_Check_0__Lake_Check_forbiddenPaths___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "/var"};
static const lean_object* l___private_Lake_CLI_Check_0__Lake_Check_forbiddenPaths___closed__1 = (const lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_forbiddenPaths___closed__1_value;
static const lean_array_object l___private_Lake_CLI_Check_0__Lake_Check_forbiddenPaths___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 246}, .m_size = 2, .m_capacity = 2, .m_data = {((lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_forbiddenPaths___closed__0_value),((lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_forbiddenPaths___closed__1_value)}};
static const lean_object* l___private_Lake_CLI_Check_0__Lake_Check_forbiddenPaths___closed__2 = (const lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_forbiddenPaths___closed__2_value;
LEAN_EXPORT const lean_object* l___private_Lake_CLI_Check_0__Lake_Check_forbiddenPaths = (const lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_forbiddenPaths___closed__2_value;
LEAN_EXPORT lean_object* l_IO_FS_withTempFile___at___00__private_Lake_CLI_Check_0__Lake_Check_withSafeBuildAndExport_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_FS_withTempFile___at___00__private_Lake_CLI_Check_0__Lake_Check_withSafeBuildAndExport_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_FS_withTempFile___at___00__private_Lake_CLI_Check_0__Lake_Check_withSafeBuildAndExport_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_FS_withTempFile___at___00__private_Lake_CLI_Check_0__Lake_Check_withSafeBuildAndExport_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lake_CLI_Check_0__Lake_Check_withSafeBuildAndExport___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "check"};
static const lean_object* l___private_Lake_CLI_Check_0__Lake_Check_withSafeBuildAndExport___redArg___lam__0___closed__0 = (const lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_withSafeBuildAndExport___redArg___lam__0___closed__0_value;
static const lean_array_object l___private_Lake_CLI_Check_0__Lake_Check_withSafeBuildAndExport___redArg___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 246}, .m_size = 1, .m_capacity = 1, .m_data = {((lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_withSafeBuildAndExport___redArg___lam__0___closed__0_value)}};
static const lean_object* l___private_Lake_CLI_Check_0__Lake_Check_withSafeBuildAndExport___redArg___lam__0___closed__1 = (const lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_withSafeBuildAndExport___redArg___lam__0___closed__1_value;
static const lean_string_object l___private_Lake_CLI_Check_0__Lake_Check_withSafeBuildAndExport___redArg___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "LAKE_CHECK_EXPORT"};
static const lean_object* l___private_Lake_CLI_Check_0__Lake_Check_withSafeBuildAndExport___redArg___lam__0___closed__2 = (const lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_withSafeBuildAndExport___redArg___lam__0___closed__2_value;
static const lean_ctor_object l___private_Lake_CLI_Check_0__Lake_Check_withSafeBuildAndExport___redArg___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_withSafeBuildAndExport___redArg___lam__0___closed__2_value),((lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_safeResolveWorkspace___closed__10_value)}};
static const lean_object* l___private_Lake_CLI_Check_0__Lake_Check_withSafeBuildAndExport___redArg___lam__0___closed__3 = (const lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_withSafeBuildAndExport___redArg___lam__0___closed__3_value;
static const lean_array_object l___private_Lake_CLI_Check_0__Lake_Check_withSafeBuildAndExport___redArg___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 246}, .m_size = 2, .m_capacity = 2, .m_data = {((lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_safeResolveWorkspace___closed__11_value),((lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_withSafeBuildAndExport___redArg___lam__0___closed__3_value)}};
static const lean_object* l___private_Lake_CLI_Check_0__Lake_Check_withSafeBuildAndExport___redArg___lam__0___closed__4 = (const lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_withSafeBuildAndExport___redArg___lam__0___closed__4_value;
LEAN_EXPORT lean_object* l___private_Lake_CLI_Check_0__Lake_Check_withSafeBuildAndExport___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_Check_0__Lake_Check_withSafeBuildAndExport___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lake_CLI_Check_0__Lake_Check_withSafeBuildAndExport___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Building and exporting"};
static const lean_object* l___private_Lake_CLI_Check_0__Lake_Check_withSafeBuildAndExport___redArg___closed__0 = (const lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_withSafeBuildAndExport___redArg___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lake_CLI_Check_0__Lake_Check_withSafeBuildAndExport___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_Check_0__Lake_Check_withSafeBuildAndExport___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_Check_0__Lake_Check_withSafeBuildAndExport(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_Check_0__Lake_Check_withSafeBuildAndExport___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_CLI_Check_0__Lake_Check_safeLakeBuild_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_CLI_Check_0__Lake_Check_safeLakeBuild_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lake_CLI_Check_0__Lake_Check_safeLakeBuild___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = " "};
static const lean_object* l___private_Lake_CLI_Check_0__Lake_Check_safeLakeBuild___closed__0 = (const lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_safeLakeBuild___closed__0_value;
static const lean_string_object l___private_Lake_CLI_Check_0__Lake_Check_safeLakeBuild___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "Building "};
static const lean_object* l___private_Lake_CLI_Check_0__Lake_Check_safeLakeBuild___closed__1 = (const lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_safeLakeBuild___closed__1_value;
static const lean_string_object l___private_Lake_CLI_Check_0__Lake_Check_safeLakeBuild___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "build"};
static const lean_object* l___private_Lake_CLI_Check_0__Lake_Check_safeLakeBuild___closed__2 = (const lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_safeLakeBuild___closed__2_value;
static const lean_array_object l___private_Lake_CLI_Check_0__Lake_Check_safeLakeBuild___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 246}, .m_size = 1, .m_capacity = 1, .m_data = {((lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_safeLakeBuild___closed__2_value)}};
static const lean_object* l___private_Lake_CLI_Check_0__Lake_Check_safeLakeBuild___closed__3 = (const lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_safeLakeBuild___closed__3_value;
LEAN_EXPORT lean_object* l___private_Lake_CLI_Check_0__Lake_Check_safeLakeBuild(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_Check_0__Lake_Check_safeLakeBuild___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lake_CLI_Check_0__Lake_Check_withRunExporter___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "LEAN_PATH"};
static const lean_object* l___private_Lake_CLI_Check_0__Lake_Check_withRunExporter___redArg___lam__0___closed__0 = (const lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_withRunExporter___redArg___lam__0___closed__0_value;
static const lean_array_object l___private_Lake_CLI_Check_0__Lake_Check_withRunExporter___redArg___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 246}, .m_size = 3, .m_capacity = 3, .m_data = {((lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_safeResolveWorkspace___closed__6_value),((lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_withRunExporter___redArg___lam__0___closed__0_value),((lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_safeResolveWorkspace___closed__7_value)}};
static const lean_object* l___private_Lake_CLI_Check_0__Lake_Check_withRunExporter___redArg___lam__0___closed__1 = (const lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_withRunExporter___redArg___lam__0___closed__1_value;
static lean_once_cell_t l___private_Lake_CLI_Check_0__Lake_Check_withRunExporter___redArg___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_CLI_Check_0__Lake_Check_withRunExporter___redArg___lam__0___closed__2;
LEAN_EXPORT lean_object* l___private_Lake_CLI_Check_0__Lake_Check_withRunExporter___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_Check_0__Lake_Check_withRunExporter___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_Check_0__Lake_Check_withRunExporter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_Check_0__Lake_Check_withRunExporter___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_Check_0__Lake_Check_withRunExporter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_Check_0__Lake_Check_withRunExporter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_List_foldl___at___00List_toString___at___00__private_Lake_CLI_Check_0__Lake_Check_withSafeExport_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ", "};
static const lean_object* l_List_foldl___at___00List_toString___at___00__private_Lake_CLI_Check_0__Lake_Check_withSafeExport_spec__0_spec__0___closed__0 = (const lean_object*)&l_List_foldl___at___00List_toString___at___00__private_Lake_CLI_Check_0__Lake_Check_withSafeExport_spec__0_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l_List_foldl___at___00List_toString___at___00__private_Lake_CLI_Check_0__Lake_Check_withSafeExport_spec__0_spec__0(lean_object*, lean_object*);
static const lean_string_object l_List_toString___at___00__private_Lake_CLI_Check_0__Lake_Check_withSafeExport_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "[]"};
static const lean_object* l_List_toString___at___00__private_Lake_CLI_Check_0__Lake_Check_withSafeExport_spec__0___closed__0 = (const lean_object*)&l_List_toString___at___00__private_Lake_CLI_Check_0__Lake_Check_withSafeExport_spec__0___closed__0_value;
static const lean_string_object l_List_toString___at___00__private_Lake_CLI_Check_0__Lake_Check_withSafeExport_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "["};
static const lean_object* l_List_toString___at___00__private_Lake_CLI_Check_0__Lake_Check_withSafeExport_spec__0___closed__1 = (const lean_object*)&l_List_toString___at___00__private_Lake_CLI_Check_0__Lake_Check_withSafeExport_spec__0___closed__1_value;
static const lean_string_object l_List_toString___at___00__private_Lake_CLI_Check_0__Lake_Check_withSafeExport_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "]"};
static const lean_object* l_List_toString___at___00__private_Lake_CLI_Check_0__Lake_Check_withSafeExport_spec__0___closed__2 = (const lean_object*)&l_List_toString___at___00__private_Lake_CLI_Check_0__Lake_Check_withSafeExport_spec__0___closed__2_value;
LEAN_EXPORT lean_object* l_List_toString___at___00__private_Lake_CLI_Check_0__Lake_Check_withSafeExport_spec__0(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_CLI_Check_0__Lake_Check_withSafeExport_spec__1(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_CLI_Check_0__Lake_Check_withSafeExport_spec__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lake_CLI_Check_0__Lake_Check_withSafeExport___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "Exporting "};
static const lean_object* l___private_Lake_CLI_Check_0__Lake_Check_withSafeExport___redArg___closed__0 = (const lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_withSafeExport___redArg___closed__0_value;
static const lean_string_object l___private_Lake_CLI_Check_0__Lake_Check_withSafeExport___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "#"};
static const lean_object* l___private_Lake_CLI_Check_0__Lake_Check_withSafeExport___redArg___closed__1 = (const lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_withSafeExport___redArg___closed__1_value;
static const lean_string_object l___private_Lake_CLI_Check_0__Lake_Check_withSafeExport___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = " from "};
static const lean_object* l___private_Lake_CLI_Check_0__Lake_Check_withSafeExport___redArg___closed__2 = (const lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_withSafeExport___redArg___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lake_CLI_Check_0__Lake_Check_withSafeExport___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_Check_0__Lake_Check_withSafeExport___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_Check_0__Lake_Check_withSafeExport(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_Check_0__Lake_Check_withSafeExport___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00__private_Lake_CLI_Check_0__Lake_Check_runExternalKernel_isNanodaKernel_spec__0_spec__0___redArg(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00__private_Lake_CLI_Check_0__Lake_Check_runExternalKernel_isNanodaKernel_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_String_Slice_contains___at___00__private_Lake_CLI_Check_0__Lake_Check_runExternalKernel_isNanodaKernel_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "noda"};
static const lean_object* l_String_Slice_contains___at___00__private_Lake_CLI_Check_0__Lake_Check_runExternalKernel_isNanodaKernel_spec__0___closed__0 = (const lean_object*)&l_String_Slice_contains___at___00__private_Lake_CLI_Check_0__Lake_Check_runExternalKernel_isNanodaKernel_spec__0___closed__0_value;
static lean_once_cell_t l_String_Slice_contains___at___00__private_Lake_CLI_Check_0__Lake_Check_runExternalKernel_isNanodaKernel_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_String_Slice_contains___at___00__private_Lake_CLI_Check_0__Lake_Check_runExternalKernel_isNanodaKernel_spec__0___closed__1;
static lean_once_cell_t l_String_Slice_contains___at___00__private_Lake_CLI_Check_0__Lake_Check_runExternalKernel_isNanodaKernel_spec__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l_String_Slice_contains___at___00__private_Lake_CLI_Check_0__Lake_Check_runExternalKernel_isNanodaKernel_spec__0___closed__2;
static lean_once_cell_t l_String_Slice_contains___at___00__private_Lake_CLI_Check_0__Lake_Check_runExternalKernel_isNanodaKernel_spec__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_String_Slice_contains___at___00__private_Lake_CLI_Check_0__Lake_Check_runExternalKernel_isNanodaKernel_spec__0___closed__3;
static lean_once_cell_t l_String_Slice_contains___at___00__private_Lake_CLI_Check_0__Lake_Check_runExternalKernel_isNanodaKernel_spec__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_String_Slice_contains___at___00__private_Lake_CLI_Check_0__Lake_Check_runExternalKernel_isNanodaKernel_spec__0___closed__4;
static lean_once_cell_t l_String_Slice_contains___at___00__private_Lake_CLI_Check_0__Lake_Check_runExternalKernel_isNanodaKernel_spec__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_String_Slice_contains___at___00__private_Lake_CLI_Check_0__Lake_Check_runExternalKernel_isNanodaKernel_spec__0___closed__5;
static const lean_ctor_object l_String_Slice_contains___at___00__private_Lake_CLI_Check_0__Lake_Check_runExternalKernel_isNanodaKernel_spec__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_String_Slice_contains___at___00__private_Lake_CLI_Check_0__Lake_Check_runExternalKernel_isNanodaKernel_spec__0___closed__6 = (const lean_object*)&l_String_Slice_contains___at___00__private_Lake_CLI_Check_0__Lake_Check_runExternalKernel_isNanodaKernel_spec__0___closed__6_value;
LEAN_EXPORT uint8_t l_String_Slice_contains___at___00__private_Lake_CLI_Check_0__Lake_Check_runExternalKernel_isNanodaKernel_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_contains___at___00__private_Lake_CLI_Check_0__Lake_Check_runExternalKernel_isNanodaKernel_spec__0___boxed(lean_object*);
LEAN_EXPORT uint8_t l___private_Lake_CLI_Check_0__Lake_Check_runExternalKernel_isNanodaKernel(lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_Check_0__Lake_Check_runExternalKernel_isNanodaKernel___boxed(lean_object*);
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00__private_Lake_CLI_Check_0__Lake_Check_runExternalKernel_isNanodaKernel_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00__private_Lake_CLI_Check_0__Lake_Check_runExternalKernel_isNanodaKernel_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lake_CLI_Check_0__Lake_Check_runExternalKernel_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_CLI_Check_0__Lake_Check_runExternalKernel_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_CLI_Check_0__Lake_Check_runExternalKernel_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lake_CLI_Check_0__Lake_Check_runExternalKernel___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "Error while interacting with "};
static const lean_object* l___private_Lake_CLI_Check_0__Lake_Check_runExternalKernel___lam__0___closed__0 = (const lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_runExternalKernel___lam__0___closed__0_value;
static const lean_string_object l___private_Lake_CLI_Check_0__Lake_Check_runExternalKernel___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = " kernel"};
static const lean_object* l___private_Lake_CLI_Check_0__Lake_Check_runExternalKernel___lam__0___closed__1 = (const lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_runExternalKernel___lam__0___closed__1_value;
static const lean_string_object l___private_Lake_CLI_Check_0__Lake_Check_runExternalKernel___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = " kernel: "};
static const lean_object* l___private_Lake_CLI_Check_0__Lake_Check_runExternalKernel___lam__0___closed__2 = (const lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_runExternalKernel___lam__0___closed__2_value;
static const lean_string_object l___private_Lake_CLI_Check_0__Lake_Check_runExternalKernel___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "use_stdin"};
static const lean_object* l___private_Lake_CLI_Check_0__Lake_Check_runExternalKernel___lam__0___closed__3 = (const lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_runExternalKernel___lam__0___closed__3_value;
static const lean_array_object l___private_Lake_CLI_Check_0__Lake_Check_runExternalKernel___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 246}, .m_size = 1, .m_capacity = 1, .m_data = {((lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_safeResolveWorkspace___closed__7_value)}};
static const lean_object* l___private_Lake_CLI_Check_0__Lake_Check_runExternalKernel___lam__0___closed__4 = (const lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_runExternalKernel___lam__0___closed__4_value;
static const lean_ctor_object l___private_Lake_CLI_Check_0__Lake_Check_runExternalKernel___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs___closed__16_value)}};
static const lean_object* l___private_Lake_CLI_Check_0__Lake_Check_runExternalKernel___lam__0___closed__5 = (const lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_runExternalKernel___lam__0___closed__5_value;
static const lean_string_object l___private_Lake_CLI_Check_0__Lake_Check_runExternalKernel___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = " kernel rejected the solution"};
static const lean_object* l___private_Lake_CLI_Check_0__Lake_Check_runExternalKernel___lam__0___closed__6 = (const lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_runExternalKernel___lam__0___closed__6_value;
static const lean_string_object l___private_Lake_CLI_Check_0__Lake_Check_runExternalKernel___lam__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = " exited with "};
static const lean_object* l___private_Lake_CLI_Check_0__Lake_Check_runExternalKernel___lam__0___closed__7 = (const lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_runExternalKernel___lam__0___closed__7_value;
static const lean_string_object l___private_Lake_CLI_Check_0__Lake_Check_runExternalKernel___lam__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = " kernel accepts the solution"};
static const lean_object* l___private_Lake_CLI_Check_0__Lake_Check_runExternalKernel___lam__0___closed__8 = (const lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_runExternalKernel___lam__0___closed__8_value;
static const lean_ctor_object l___private_Lake_CLI_Check_0__Lake_Check_runExternalKernel___lam__0___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 1}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l___private_Lake_CLI_Check_0__Lake_Check_runExternalKernel___lam__0___closed__9 = (const lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_runExternalKernel___lam__0___closed__9_value;
static const lean_ctor_object l___private_Lake_CLI_Check_0__Lake_Check_runExternalKernel___lam__0___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_runExternalKernel___lam__0___closed__3_value),((lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_runExternalKernel___lam__0___closed__9_value)}};
static const lean_object* l___private_Lake_CLI_Check_0__Lake_Check_runExternalKernel___lam__0___closed__10 = (const lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_runExternalKernel___lam__0___closed__10_value;
static const lean_string_object l___private_Lake_CLI_Check_0__Lake_Check_runExternalKernel___lam__0___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "export_file_path"};
static const lean_object* l___private_Lake_CLI_Check_0__Lake_Check_runExternalKernel___lam__0___closed__11 = (const lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_runExternalKernel___lam__0___closed__11_value;
static const lean_string_object l___private_Lake_CLI_Check_0__Lake_Check_runExternalKernel___lam__0___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "permitted_axioms"};
static const lean_object* l___private_Lake_CLI_Check_0__Lake_Check_runExternalKernel___lam__0___closed__12 = (const lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_runExternalKernel___lam__0___closed__12_value;
static const lean_string_object l___private_Lake_CLI_Check_0__Lake_Check_runExternalKernel___lam__0___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "unpermitted_axiom_hard_error"};
static const lean_object* l___private_Lake_CLI_Check_0__Lake_Check_runExternalKernel___lam__0___closed__13 = (const lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_runExternalKernel___lam__0___closed__13_value;
static const lean_ctor_object l___private_Lake_CLI_Check_0__Lake_Check_runExternalKernel___lam__0___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 1}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l___private_Lake_CLI_Check_0__Lake_Check_runExternalKernel___lam__0___closed__14 = (const lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_runExternalKernel___lam__0___closed__14_value;
static const lean_ctor_object l___private_Lake_CLI_Check_0__Lake_Check_runExternalKernel___lam__0___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_runExternalKernel___lam__0___closed__13_value),((lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_runExternalKernel___lam__0___closed__14_value)}};
static const lean_object* l___private_Lake_CLI_Check_0__Lake_Check_runExternalKernel___lam__0___closed__15 = (const lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_runExternalKernel___lam__0___closed__15_value;
static const lean_string_object l___private_Lake_CLI_Check_0__Lake_Check_runExternalKernel___lam__0___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "num_threads"};
static const lean_object* l___private_Lake_CLI_Check_0__Lake_Check_runExternalKernel___lam__0___closed__16 = (const lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_runExternalKernel___lam__0___closed__16_value;
static lean_once_cell_t l___private_Lake_CLI_Check_0__Lake_Check_runExternalKernel___lam__0___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_CLI_Check_0__Lake_Check_runExternalKernel___lam__0___closed__17;
static lean_once_cell_t l___private_Lake_CLI_Check_0__Lake_Check_runExternalKernel___lam__0___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_CLI_Check_0__Lake_Check_runExternalKernel___lam__0___closed__18;
static lean_once_cell_t l___private_Lake_CLI_Check_0__Lake_Check_runExternalKernel___lam__0___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_CLI_Check_0__Lake_Check_runExternalKernel___lam__0___closed__19;
static const lean_string_object l___private_Lake_CLI_Check_0__Lake_Check_runExternalKernel___lam__0___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "nat_extension"};
static const lean_object* l___private_Lake_CLI_Check_0__Lake_Check_runExternalKernel___lam__0___closed__20 = (const lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_runExternalKernel___lam__0___closed__20_value;
static const lean_ctor_object l___private_Lake_CLI_Check_0__Lake_Check_runExternalKernel___lam__0___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_runExternalKernel___lam__0___closed__20_value),((lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_runExternalKernel___lam__0___closed__14_value)}};
static const lean_object* l___private_Lake_CLI_Check_0__Lake_Check_runExternalKernel___lam__0___closed__21 = (const lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_runExternalKernel___lam__0___closed__21_value;
static const lean_string_object l___private_Lake_CLI_Check_0__Lake_Check_runExternalKernel___lam__0___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "string_extension"};
static const lean_object* l___private_Lake_CLI_Check_0__Lake_Check_runExternalKernel___lam__0___closed__22 = (const lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_runExternalKernel___lam__0___closed__22_value;
static const lean_ctor_object l___private_Lake_CLI_Check_0__Lake_Check_runExternalKernel___lam__0___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_runExternalKernel___lam__0___closed__22_value),((lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_runExternalKernel___lam__0___closed__14_value)}};
static const lean_object* l___private_Lake_CLI_Check_0__Lake_Check_runExternalKernel___lam__0___closed__23 = (const lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_runExternalKernel___lam__0___closed__23_value;
static const lean_ctor_object l___private_Lake_CLI_Check_0__Lake_Check_runExternalKernel___lam__0___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_runExternalKernel___lam__0___closed__23_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lake_CLI_Check_0__Lake_Check_runExternalKernel___lam__0___closed__24 = (const lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_runExternalKernel___lam__0___closed__24_value;
static const lean_ctor_object l___private_Lake_CLI_Check_0__Lake_Check_runExternalKernel___lam__0___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_runExternalKernel___lam__0___closed__21_value),((lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_runExternalKernel___lam__0___closed__24_value)}};
static const lean_object* l___private_Lake_CLI_Check_0__Lake_Check_runExternalKernel___lam__0___closed__25 = (const lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_runExternalKernel___lam__0___closed__25_value;
static lean_once_cell_t l___private_Lake_CLI_Check_0__Lake_Check_runExternalKernel___lam__0___closed__26_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_CLI_Check_0__Lake_Check_runExternalKernel___lam__0___closed__26;
static lean_once_cell_t l___private_Lake_CLI_Check_0__Lake_Check_runExternalKernel___lam__0___closed__27_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_CLI_Check_0__Lake_Check_runExternalKernel___lam__0___closed__27;
LEAN_EXPORT lean_object* l___private_Lake_CLI_Check_0__Lake_Check_runExternalKernel___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_Check_0__Lake_Check_runExternalKernel___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lake_CLI_Check_0__Lake_Check_runExternalKernel___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Running "};
static const lean_object* l___private_Lake_CLI_Check_0__Lake_Check_runExternalKernel___closed__0 = (const lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_runExternalKernel___closed__0_value;
static const lean_string_object l___private_Lake_CLI_Check_0__Lake_Check_runExternalKernel___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = " kernel on solution"};
static const lean_object* l___private_Lake_CLI_Check_0__Lake_Check_runExternalKernel___closed__1 = (const lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_runExternalKernel___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lake_CLI_Check_0__Lake_Check_runExternalKernel(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_Check_0__Lake_Check_runExternalKernel___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lake_CLI_Check_0__Lake_Check_runExternalKernel_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lake_CLI_Check_0__Lake_Check_runBuiltinKernel___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "--silent"};
static const lean_object* l___private_Lake_CLI_Check_0__Lake_Check_runBuiltinKernel___closed__0 = (const lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_runBuiltinKernel___closed__0_value;
static const lean_string_object l___private_Lake_CLI_Check_0__Lake_Check_runBuiltinKernel___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "--from-export"};
static const lean_object* l___private_Lake_CLI_Check_0__Lake_Check_runBuiltinKernel___closed__1 = (const lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_runBuiltinKernel___closed__1_value;
static const lean_string_object l___private_Lake_CLI_Check_0__Lake_Check_runBuiltinKernel___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "Lean default"};
static const lean_object* l___private_Lake_CLI_Check_0__Lake_Check_runBuiltinKernel___closed__2 = (const lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_runBuiltinKernel___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lake_CLI_Check_0__Lake_Check_runBuiltinKernel(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_Check_0__Lake_Check_runBuiltinKernel___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Nat"};
static const lean_object* l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__0 = (const lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__0_value;
static const lean_string_object l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "add"};
static const lean_object* l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__1 = (const lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__1_value;
static const lean_ctor_object l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(155, 221, 223, 104, 58, 13, 204, 158)}};
static const lean_ctor_object l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__2_value_aux_0),((lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(210, 189, 86, 121, 130, 22, 242, 236)}};
static const lean_object* l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__2 = (const lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__2_value;
static const lean_string_object l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "sub"};
static const lean_object* l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__3 = (const lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__3_value;
static const lean_ctor_object l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(155, 221, 223, 104, 58, 13, 204, 158)}};
static const lean_ctor_object l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__4_value_aux_0),((lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__3_value),LEAN_SCALAR_PTR_LITERAL(9, 137, 41, 185, 216, 152, 145, 196)}};
static const lean_object* l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__4 = (const lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__4_value;
static const lean_string_object l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "mul"};
static const lean_object* l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__5 = (const lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__5_value;
static const lean_ctor_object l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(155, 221, 223, 104, 58, 13, 204, 158)}};
static const lean_ctor_object l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__6_value_aux_0),((lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__5_value),LEAN_SCALAR_PTR_LITERAL(124, 230, 50, 167, 103, 237, 136, 198)}};
static const lean_object* l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__6 = (const lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__6_value;
static const lean_string_object l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "pow"};
static const lean_object* l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__7 = (const lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__7_value;
static const lean_ctor_object l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__8_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(155, 221, 223, 104, 58, 13, 204, 158)}};
static const lean_ctor_object l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__8_value_aux_0),((lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__7_value),LEAN_SCALAR_PTR_LITERAL(155, 64, 52, 77, 166, 227, 131, 174)}};
static const lean_object* l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__8 = (const lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__8_value;
static const lean_string_object l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "gcd"};
static const lean_object* l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__9 = (const lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__9_value;
static const lean_ctor_object l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__10_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(155, 221, 223, 104, 58, 13, 204, 158)}};
static const lean_ctor_object l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__10_value_aux_0),((lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__9_value),LEAN_SCALAR_PTR_LITERAL(57, 94, 240, 174, 21, 113, 54, 0)}};
static const lean_object* l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__10 = (const lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__10_value;
static const lean_string_object l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "div"};
static const lean_object* l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__11 = (const lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__11_value;
static const lean_ctor_object l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__12_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(155, 221, 223, 104, 58, 13, 204, 158)}};
static const lean_ctor_object l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__12_value_aux_0),((lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__11_value),LEAN_SCALAR_PTR_LITERAL(67, 67, 214, 176, 223, 68, 36, 94)}};
static const lean_object* l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__12 = (const lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__12_value;
static const lean_string_object l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "mod"};
static const lean_object* l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__13 = (const lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__13_value;
static const lean_ctor_object l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__14_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(155, 221, 223, 104, 58, 13, 204, 158)}};
static const lean_ctor_object l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__14_value_aux_0),((lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__13_value),LEAN_SCALAR_PTR_LITERAL(244, 133, 16, 0, 168, 19, 182, 179)}};
static const lean_object* l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__14 = (const lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__14_value;
static const lean_string_object l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "beq"};
static const lean_object* l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__15 = (const lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__15_value;
static const lean_ctor_object l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__16_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(155, 221, 223, 104, 58, 13, 204, 158)}};
static const lean_ctor_object l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__16_value_aux_0),((lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__15_value),LEAN_SCALAR_PTR_LITERAL(58, 27, 161, 98, 177, 242, 252, 86)}};
static const lean_object* l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__16 = (const lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__16_value;
static const lean_string_object l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "ble"};
static const lean_object* l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__17 = (const lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__17_value;
static const lean_ctor_object l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__18_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(155, 221, 223, 104, 58, 13, 204, 158)}};
static const lean_ctor_object l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__18_value_aux_0),((lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__17_value),LEAN_SCALAR_PTR_LITERAL(18, 188, 15, 95, 29, 42, 30, 33)}};
static const lean_object* l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__18 = (const lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__18_value;
static const lean_string_object l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "land"};
static const lean_object* l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__19 = (const lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__19_value;
static const lean_ctor_object l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__20_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(155, 221, 223, 104, 58, 13, 204, 158)}};
static const lean_ctor_object l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__20_value_aux_0),((lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__19_value),LEAN_SCALAR_PTR_LITERAL(188, 247, 118, 195, 143, 11, 83, 131)}};
static const lean_object* l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__20 = (const lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__20_value;
static const lean_string_object l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "lor"};
static const lean_object* l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__21 = (const lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__21_value;
static const lean_ctor_object l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__22_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(155, 221, 223, 104, 58, 13, 204, 158)}};
static const lean_ctor_object l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__22_value_aux_0),((lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__21_value),LEAN_SCALAR_PTR_LITERAL(189, 20, 242, 236, 1, 249, 227, 248)}};
static const lean_object* l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__22 = (const lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__22_value;
static const lean_string_object l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "xor"};
static const lean_object* l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__23 = (const lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__23_value;
static const lean_ctor_object l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__24_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(155, 221, 223, 104, 58, 13, 204, 158)}};
static const lean_ctor_object l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__24_value_aux_0),((lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__23_value),LEAN_SCALAR_PTR_LITERAL(42, 157, 235, 85, 27, 16, 17, 168)}};
static const lean_object* l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__24 = (const lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__24_value;
static const lean_string_object l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "shiftLeft"};
static const lean_object* l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__25 = (const lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__25_value;
static const lean_ctor_object l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__26_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(155, 221, 223, 104, 58, 13, 204, 158)}};
static const lean_ctor_object l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__26_value_aux_0),((lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__25_value),LEAN_SCALAR_PTR_LITERAL(85, 136, 172, 27, 109, 172, 80, 195)}};
static const lean_object* l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__26 = (const lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__26_value;
static const lean_string_object l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "shiftRight"};
static const lean_object* l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__27 = (const lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__27_value;
static const lean_ctor_object l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__28_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(155, 221, 223, 104, 58, 13, 204, 158)}};
static const lean_ctor_object l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__28_value_aux_0),((lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__27_value),LEAN_SCALAR_PTR_LITERAL(119, 176, 216, 253, 49, 85, 187, 63)}};
static const lean_object* l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__28 = (const lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__28_value;
static const lean_string_object l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "String"};
static const lean_object* l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__29 = (const lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__29_value;
static const lean_string_object l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "ofList"};
static const lean_object* l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__30 = (const lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__30_value;
static const lean_ctor_object l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__31_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__29_value),LEAN_SCALAR_PTR_LITERAL(6, 130, 56, 8, 41, 104, 134, 43)}};
static const lean_ctor_object l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__31_value_aux_0),((lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__30_value),LEAN_SCALAR_PTR_LITERAL(118, 246, 177, 142, 179, 9, 199, 233)}};
static const lean_object* l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__31 = (const lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__31_value;
static const lean_string_object l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Char"};
static const lean_object* l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__32 = (const lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__32_value;
static const lean_string_object l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "ofNat"};
static const lean_object* l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__33 = (const lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__33_value;
static const lean_ctor_object l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__34_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__32_value),LEAN_SCALAR_PTR_LITERAL(18, 67, 155, 167, 151, 71, 146, 196)}};
static const lean_ctor_object l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__34_value_aux_0),((lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__33_value),LEAN_SCALAR_PTR_LITERAL(27, 51, 10, 169, 25, 67, 44, 251)}};
static const lean_object* l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__34 = (const lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__34_value;
static const lean_string_object l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "List"};
static const lean_object* l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__35 = (const lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__35_value;
static const lean_ctor_object l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__35_value),LEAN_SCALAR_PTR_LITERAL(245, 188, 225, 225, 165, 5, 251, 132)}};
static const lean_object* l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__36 = (const lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__36_value;
static const lean_string_object l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__37_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "eagerReduce"};
static const lean_object* l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__37 = (const lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__37_value;
static const lean_ctor_object l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__38_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__37_value),LEAN_SCALAR_PTR_LITERAL(238, 243, 67, 12, 220, 84, 120, 222)}};
static const lean_object* l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__38 = (const lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__38_value;
static const lean_ctor_object l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__39_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(155, 221, 223, 104, 58, 13, 204, 158)}};
static const lean_object* l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__39 = (const lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__39_value;
static const lean_ctor_object l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__40_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__29_value),LEAN_SCALAR_PTR_LITERAL(6, 130, 56, 8, 41, 104, 134, 43)}};
static const lean_object* l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__40 = (const lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__40_value;
static const lean_string_object l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__41_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "mk"};
static const lean_object* l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__41 = (const lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__41_value;
static const lean_ctor_object l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__42_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__29_value),LEAN_SCALAR_PTR_LITERAL(6, 130, 56, 8, 41, 104, 134, 43)}};
static const lean_ctor_object l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__42_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__42_value_aux_0),((lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__41_value),LEAN_SCALAR_PTR_LITERAL(118, 80, 194, 26, 119, 145, 0, 103)}};
static const lean_object* l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__42 = (const lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__42_value;
static const lean_ctor_object l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__43_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__32_value),LEAN_SCALAR_PTR_LITERAL(18, 67, 155, 167, 151, 71, 146, 196)}};
static const lean_object* l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__43 = (const lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__43_value;
static const lean_string_object l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__44_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "optParam"};
static const lean_object* l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__44 = (const lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__44_value;
static const lean_ctor_object l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__45_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__44_value),LEAN_SCALAR_PTR_LITERAL(140, 160, 223, 165, 16, 51, 54, 209)}};
static const lean_object* l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__45 = (const lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__45_value;
static const lean_string_object l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__46_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "autoParam"};
static const lean_object* l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__46 = (const lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__46_value;
static const lean_ctor_object l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__47_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__46_value),LEAN_SCALAR_PTR_LITERAL(140, 161, 241, 39, 119, 172, 48, 112)}};
static const lean_object* l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__47 = (const lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__47_value;
static const lean_string_object l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__48_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "semiOutParam"};
static const lean_object* l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__48 = (const lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__48_value;
static const lean_ctor_object l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__49_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__48_value),LEAN_SCALAR_PTR_LITERAL(141, 187, 140, 108, 143, 232, 13, 120)}};
static const lean_object* l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__49 = (const lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__49_value;
static const lean_string_object l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__50_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "outParam"};
static const lean_object* l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__50 = (const lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__50_value;
static const lean_ctor_object l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__51_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__50_value),LEAN_SCALAR_PTR_LITERAL(209, 153, 87, 30, 57, 250, 25, 29)}};
static const lean_object* l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__51 = (const lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__51_value;
static const lean_array_object l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__52_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*26, .m_other = 0, .m_tag = 246}, .m_size = 26, .m_capacity = 26, .m_data = {((lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__2_value),((lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__4_value),((lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__6_value),((lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__8_value),((lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__10_value),((lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__12_value),((lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__14_value),((lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__16_value),((lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__18_value),((lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__20_value),((lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__22_value),((lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__24_value),((lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__26_value),((lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__28_value),((lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__31_value),((lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__34_value),((lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__36_value),((lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__38_value),((lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__39_value),((lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__40_value),((lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__42_value),((lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__43_value),((lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__45_value),((lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__47_value),((lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__49_value),((lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__51_value)}};
static const lean_object* l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__52 = (const lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__52_value;
LEAN_EXPORT lean_object* l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg();
LEAN_EXPORT lean_object* l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets(lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_Lake_CLI_Check_0__Lake_Check_builtinTargets_spec__0_spec__0(lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_Lake_CLI_Check_0__Lake_Check_builtinTargets_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_contains___at___00__private_Lake_CLI_Check_0__Lake_Check_builtinTargets_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_contains___at___00__private_Lake_CLI_Check_0__Lake_Check_builtinTargets_spec__0___boxed(lean_object*, lean_object*);
static const lean_array_object l___private_Lake_CLI_Check_0__Lake_Check_builtinTargets___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lake_CLI_Check_0__Lake_Check_builtinTargets___closed__0 = (const lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_builtinTargets___closed__0_value;
static const lean_string_object l___private_Lake_CLI_Check_0__Lake_Check_builtinTargets___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Quot"};
static const lean_object* l___private_Lake_CLI_Check_0__Lake_Check_builtinTargets___closed__1 = (const lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_builtinTargets___closed__1_value;
static const lean_string_object l___private_Lake_CLI_Check_0__Lake_Check_builtinTargets___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "sound"};
static const lean_object* l___private_Lake_CLI_Check_0__Lake_Check_builtinTargets___closed__2 = (const lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_builtinTargets___closed__2_value;
static const lean_ctor_object l___private_Lake_CLI_Check_0__Lake_Check_builtinTargets___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_builtinTargets___closed__1_value),LEAN_SCALAR_PTR_LITERAL(91, 127, 250, 116, 111, 99, 160, 200)}};
static const lean_ctor_object l___private_Lake_CLI_Check_0__Lake_Check_builtinTargets___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_builtinTargets___closed__3_value_aux_0),((lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_builtinTargets___closed__2_value),LEAN_SCALAR_PTR_LITERAL(255, 255, 230, 69, 40, 79, 199, 28)}};
static const lean_object* l___private_Lake_CLI_Check_0__Lake_Check_builtinTargets___closed__3 = (const lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_builtinTargets___closed__3_value;
static const lean_ctor_object l___private_Lake_CLI_Check_0__Lake_Check_builtinTargets___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_builtinTargets___closed__1_value),LEAN_SCALAR_PTR_LITERAL(91, 127, 250, 116, 111, 99, 160, 200)}};
static const lean_object* l___private_Lake_CLI_Check_0__Lake_Check_builtinTargets___closed__4 = (const lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_builtinTargets___closed__4_value;
static const lean_ctor_object l___private_Lake_CLI_Check_0__Lake_Check_builtinTargets___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_builtinTargets___closed__1_value),LEAN_SCALAR_PTR_LITERAL(91, 127, 250, 116, 111, 99, 160, 200)}};
static const lean_ctor_object l___private_Lake_CLI_Check_0__Lake_Check_builtinTargets___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_builtinTargets___closed__5_value_aux_0),((lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__41_value),LEAN_SCALAR_PTR_LITERAL(255, 113, 137, 82, 82, 132, 58, 248)}};
static const lean_object* l___private_Lake_CLI_Check_0__Lake_Check_builtinTargets___closed__5 = (const lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_builtinTargets___closed__5_value;
static const lean_string_object l___private_Lake_CLI_Check_0__Lake_Check_builtinTargets___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "lift"};
static const lean_object* l___private_Lake_CLI_Check_0__Lake_Check_builtinTargets___closed__6 = (const lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_builtinTargets___closed__6_value;
static const lean_ctor_object l___private_Lake_CLI_Check_0__Lake_Check_builtinTargets___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_builtinTargets___closed__1_value),LEAN_SCALAR_PTR_LITERAL(91, 127, 250, 116, 111, 99, 160, 200)}};
static const lean_ctor_object l___private_Lake_CLI_Check_0__Lake_Check_builtinTargets___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_builtinTargets___closed__7_value_aux_0),((lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_builtinTargets___closed__6_value),LEAN_SCALAR_PTR_LITERAL(91, 125, 38, 34, 222, 200, 201, 80)}};
static const lean_object* l___private_Lake_CLI_Check_0__Lake_Check_builtinTargets___closed__7 = (const lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_builtinTargets___closed__7_value;
static const lean_string_object l___private_Lake_CLI_Check_0__Lake_Check_builtinTargets___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "ind"};
static const lean_object* l___private_Lake_CLI_Check_0__Lake_Check_builtinTargets___closed__8 = (const lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_builtinTargets___closed__8_value;
static const lean_ctor_object l___private_Lake_CLI_Check_0__Lake_Check_builtinTargets___closed__9_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_builtinTargets___closed__1_value),LEAN_SCALAR_PTR_LITERAL(91, 127, 250, 116, 111, 99, 160, 200)}};
static const lean_ctor_object l___private_Lake_CLI_Check_0__Lake_Check_builtinTargets___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_builtinTargets___closed__9_value_aux_0),((lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_builtinTargets___closed__8_value),LEAN_SCALAR_PTR_LITERAL(150, 213, 121, 152, 109, 27, 137, 60)}};
static const lean_object* l___private_Lake_CLI_Check_0__Lake_Check_builtinTargets___closed__9 = (const lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_builtinTargets___closed__9_value;
static const lean_array_object l___private_Lake_CLI_Check_0__Lake_Check_builtinTargets___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 246}, .m_size = 4, .m_capacity = 4, .m_data = {((lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_builtinTargets___closed__4_value),((lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_builtinTargets___closed__5_value),((lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_builtinTargets___closed__7_value),((lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_builtinTargets___closed__9_value)}};
static const lean_object* l___private_Lake_CLI_Check_0__Lake_Check_builtinTargets___closed__10 = (const lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_builtinTargets___closed__10_value;
static lean_once_cell_t l___private_Lake_CLI_Check_0__Lake_Check_builtinTargets___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_CLI_Check_0__Lake_Check_builtinTargets___closed__11;
LEAN_EXPORT lean_object* l___private_Lake_CLI_Check_0__Lake_Check_builtinTargets(lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_Check_0__Lake_Check_builtinTargets___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_ofExcept___at___00__private_Lake_CLI_Check_0__Lake_Check_verifyMatch_verifyCompare_spec__0___redArg(lean_object*);
LEAN_EXPORT lean_object* l_IO_ofExcept___at___00__private_Lake_CLI_Check_0__Lake_Check_verifyMatch_verifyCompare_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_ofExcept___at___00__private_Lake_CLI_Check_0__Lake_Check_verifyMatch_verifyCompare_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_ofExcept___at___00__private_Lake_CLI_Check_0__Lake_Check_verifyMatch_verifyCompare_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_Check_0__Lake_Check_verifyMatch_verifyCompare(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_Check_0__Lake_Check_verifyMatch_verifyCompare___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lake_CLI_Check_0__Lake_Check_verifyMatch_verifyKernels_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lake_CLI_Check_0__Lake_Check_verifyMatch_verifyKernels_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_Check_0__Lake_Check_verifyMatch_verifyKernels(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_Check_0__Lake_Check_verifyMatch_verifyKernels___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_Check_0__Lake_Check_verifyMatch(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_Check_0__Lake_Check_verifyMatch___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lake_Check_compareIt___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Your solution is okay!"};
static const lean_object* l_Lake_Check_compareIt___lam__0___closed__0 = (const lean_object*)&l_Lake_Check_compareIt___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_Check_compareIt___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Check_compareIt___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Check_compareIt___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Check_compareIt___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Check_compareIt(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Check_compareIt___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lake_Check_instFromJsonConfig_fromJson_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lake_Check_instFromJsonConfig_fromJson_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lake_Check_instFromJsonConfig_fromJson_spec__1_spec__1_spec__2(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lake_Check_instFromJsonConfig_fromJson_spec__1_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lake_Check_instFromJsonConfig_fromJson_spec__1_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "expected JSON array, got '"};
static const lean_object* l_Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lake_Check_instFromJsonConfig_fromJson_spec__1_spec__1___closed__0 = (const lean_object*)&l_Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lake_Check_instFromJsonConfig_fromJson_spec__1_spec__1___closed__0_value;
static const lean_string_object l_Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lake_Check_instFromJsonConfig_fromJson_spec__1_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "'"};
static const lean_object* l_Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lake_Check_instFromJsonConfig_fromJson_spec__1_spec__1___closed__1 = (const lean_object*)&l_Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lake_Check_instFromJsonConfig_fromJson_spec__1_spec__1___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lake_Check_instFromJsonConfig_fromJson_spec__1_spec__1(lean_object*);
static const lean_ctor_object l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lake_Check_instFromJsonConfig_fromJson_spec__2_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lake_Check_instFromJsonConfig_fromJson_spec__2_spec__3___closed__0 = (const lean_object*)&l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lake_Check_instFromJsonConfig_fromJson_spec__2_spec__3___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lake_Check_instFromJsonConfig_fromJson_spec__2_spec__3(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lake_Check_instFromJsonConfig_fromJson_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lake_Check_instFromJsonConfig_fromJson_spec__2___boxed(lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lake_Check_instFromJsonConfig_fromJson_spec__3_spec__5___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lake_Check_instFromJsonConfig_fromJson_spec__3_spec__5___closed__0 = (const lean_object*)&l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lake_Check_instFromJsonConfig_fromJson_spec__3_spec__5___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lake_Check_instFromJsonConfig_fromJson_spec__3_spec__5(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lake_Check_instFromJsonConfig_fromJson_spec__3_spec__5___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lake_Check_instFromJsonConfig_fromJson_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lake_Check_instFromJsonConfig_fromJson_spec__3___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lean_Data_Json_FromToJson_Extra_0__Lean_TreeMap_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lake_Check_instFromJsonConfig_fromJson_spec__4_spec__7_spec__9_spec__10___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00__private_Lean_Data_Json_FromToJson_Extra_0__Lean_TreeMap_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lake_Check_instFromJsonConfig_fromJson_spec__4_spec__7_spec__9_spec__11(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Json_FromToJson_Extra_0__Lean_TreeMap_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lake_Check_instFromJsonConfig_fromJson_spec__4_spec__7_spec__9(lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lake_Check_instFromJsonConfig_fromJson_spec__4_spec__7___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lake_Check_instFromJsonConfig_fromJson_spec__4_spec__7___closed__0 = (const lean_object*)&l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lake_Check_instFromJsonConfig_fromJson_spec__4_spec__7___closed__0_value;
static const lean_closure_object l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lake_Check_instFromJsonConfig_fromJson_spec__4_spec__7___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_String_compare___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lake_Check_instFromJsonConfig_fromJson_spec__4_spec__7___closed__1 = (const lean_object*)&l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lake_Check_instFromJsonConfig_fromJson_spec__4_spec__7___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lake_Check_instFromJsonConfig_fromJson_spec__4_spec__7(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lake_Check_instFromJsonConfig_fromJson_spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lake_Check_instFromJsonConfig_fromJson_spec__4___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lake_Check_instFromJsonConfig_fromJson_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lake_Check_instFromJsonConfig_fromJson_spec__1___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lake_Check_instFromJsonConfig_fromJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "challenge_module"};
static const lean_object* l_Lake_Check_instFromJsonConfig_fromJson___closed__0 = (const lean_object*)&l_Lake_Check_instFromJsonConfig_fromJson___closed__0_value;
static const lean_string_object l_Lake_Check_instFromJsonConfig_fromJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lake"};
static const lean_object* l_Lake_Check_instFromJsonConfig_fromJson___closed__1 = (const lean_object*)&l_Lake_Check_instFromJsonConfig_fromJson___closed__1_value;
static const lean_string_object l_Lake_Check_instFromJsonConfig_fromJson___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Check"};
static const lean_object* l_Lake_Check_instFromJsonConfig_fromJson___closed__2 = (const lean_object*)&l_Lake_Check_instFromJsonConfig_fromJson___closed__2_value;
static const lean_string_object l_Lake_Check_instFromJsonConfig_fromJson___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Config"};
static const lean_object* l_Lake_Check_instFromJsonConfig_fromJson___closed__3 = (const lean_object*)&l_Lake_Check_instFromJsonConfig_fromJson___closed__3_value;
static const lean_ctor_object l_Lake_Check_instFromJsonConfig_fromJson___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_Check_instFromJsonConfig_fromJson___closed__1_value),LEAN_SCALAR_PTR_LITERAL(111, 69, 182, 10, 108, 181, 149, 180)}};
static const lean_ctor_object l_Lake_Check_instFromJsonConfig_fromJson___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_Check_instFromJsonConfig_fromJson___closed__4_value_aux_0),((lean_object*)&l_Lake_Check_instFromJsonConfig_fromJson___closed__2_value),LEAN_SCALAR_PTR_LITERAL(246, 121, 61, 181, 100, 226, 26, 39)}};
static const lean_ctor_object l_Lake_Check_instFromJsonConfig_fromJson___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_Check_instFromJsonConfig_fromJson___closed__4_value_aux_1),((lean_object*)&l_Lake_Check_instFromJsonConfig_fromJson___closed__3_value),LEAN_SCALAR_PTR_LITERAL(41, 253, 238, 39, 237, 240, 148, 33)}};
static const lean_object* l_Lake_Check_instFromJsonConfig_fromJson___closed__4 = (const lean_object*)&l_Lake_Check_instFromJsonConfig_fromJson___closed__4_value;
static lean_once_cell_t l_Lake_Check_instFromJsonConfig_fromJson___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Check_instFromJsonConfig_fromJson___closed__5;
static const lean_string_object l_Lake_Check_instFromJsonConfig_fromJson___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "."};
static const lean_object* l_Lake_Check_instFromJsonConfig_fromJson___closed__6 = (const lean_object*)&l_Lake_Check_instFromJsonConfig_fromJson___closed__6_value;
static lean_once_cell_t l_Lake_Check_instFromJsonConfig_fromJson___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Check_instFromJsonConfig_fromJson___closed__7;
static const lean_ctor_object l_Lake_Check_instFromJsonConfig_fromJson___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_Check_instFromJsonConfig_fromJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(21, 239, 122, 143, 156, 150, 119, 228)}};
static const lean_object* l_Lake_Check_instFromJsonConfig_fromJson___closed__8 = (const lean_object*)&l_Lake_Check_instFromJsonConfig_fromJson___closed__8_value;
static lean_once_cell_t l_Lake_Check_instFromJsonConfig_fromJson___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Check_instFromJsonConfig_fromJson___closed__9;
static lean_once_cell_t l_Lake_Check_instFromJsonConfig_fromJson___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Check_instFromJsonConfig_fromJson___closed__10;
static const lean_string_object l_Lake_Check_instFromJsonConfig_fromJson___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ": "};
static const lean_object* l_Lake_Check_instFromJsonConfig_fromJson___closed__11 = (const lean_object*)&l_Lake_Check_instFromJsonConfig_fromJson___closed__11_value;
static lean_once_cell_t l_Lake_Check_instFromJsonConfig_fromJson___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Check_instFromJsonConfig_fromJson___closed__12;
static const lean_string_object l_Lake_Check_instFromJsonConfig_fromJson___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "solution_module"};
static const lean_object* l_Lake_Check_instFromJsonConfig_fromJson___closed__13 = (const lean_object*)&l_Lake_Check_instFromJsonConfig_fromJson___closed__13_value;
static const lean_ctor_object l_Lake_Check_instFromJsonConfig_fromJson___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_Check_instFromJsonConfig_fromJson___closed__13_value),LEAN_SCALAR_PTR_LITERAL(196, 97, 97, 57, 150, 39, 125, 168)}};
static const lean_object* l_Lake_Check_instFromJsonConfig_fromJson___closed__14 = (const lean_object*)&l_Lake_Check_instFromJsonConfig_fromJson___closed__14_value;
static lean_once_cell_t l_Lake_Check_instFromJsonConfig_fromJson___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Check_instFromJsonConfig_fromJson___closed__15;
static lean_once_cell_t l_Lake_Check_instFromJsonConfig_fromJson___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Check_instFromJsonConfig_fromJson___closed__16;
static lean_once_cell_t l_Lake_Check_instFromJsonConfig_fromJson___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Check_instFromJsonConfig_fromJson___closed__17;
static const lean_string_object l_Lake_Check_instFromJsonConfig_fromJson___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "theorem_names"};
static const lean_object* l_Lake_Check_instFromJsonConfig_fromJson___closed__18 = (const lean_object*)&l_Lake_Check_instFromJsonConfig_fromJson___closed__18_value;
static const lean_ctor_object l_Lake_Check_instFromJsonConfig_fromJson___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_Check_instFromJsonConfig_fromJson___closed__18_value),LEAN_SCALAR_PTR_LITERAL(74, 45, 230, 82, 200, 194, 22, 200)}};
static const lean_object* l_Lake_Check_instFromJsonConfig_fromJson___closed__19 = (const lean_object*)&l_Lake_Check_instFromJsonConfig_fromJson___closed__19_value;
static lean_once_cell_t l_Lake_Check_instFromJsonConfig_fromJson___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Check_instFromJsonConfig_fromJson___closed__20;
static lean_once_cell_t l_Lake_Check_instFromJsonConfig_fromJson___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Check_instFromJsonConfig_fromJson___closed__21;
static lean_once_cell_t l_Lake_Check_instFromJsonConfig_fromJson___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Check_instFromJsonConfig_fromJson___closed__22;
static const lean_string_object l_Lake_Check_instFromJsonConfig_fromJson___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "definition_names"};
static const lean_object* l_Lake_Check_instFromJsonConfig_fromJson___closed__23 = (const lean_object*)&l_Lake_Check_instFromJsonConfig_fromJson___closed__23_value;
static const lean_ctor_object l_Lake_Check_instFromJsonConfig_fromJson___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_Check_instFromJsonConfig_fromJson___closed__23_value),LEAN_SCALAR_PTR_LITERAL(142, 234, 197, 41, 94, 48, 219, 189)}};
static const lean_object* l_Lake_Check_instFromJsonConfig_fromJson___closed__24 = (const lean_object*)&l_Lake_Check_instFromJsonConfig_fromJson___closed__24_value;
static lean_once_cell_t l_Lake_Check_instFromJsonConfig_fromJson___closed__25_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Check_instFromJsonConfig_fromJson___closed__25;
static lean_once_cell_t l_Lake_Check_instFromJsonConfig_fromJson___closed__26_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Check_instFromJsonConfig_fromJson___closed__26;
static lean_once_cell_t l_Lake_Check_instFromJsonConfig_fromJson___closed__27_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Check_instFromJsonConfig_fromJson___closed__27;
static const lean_ctor_object l_Lake_Check_instFromJsonConfig_fromJson___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_runExternalKernel___lam__0___closed__12_value),LEAN_SCALAR_PTR_LITERAL(67, 66, 102, 170, 71, 166, 115, 173)}};
static const lean_object* l_Lake_Check_instFromJsonConfig_fromJson___closed__28 = (const lean_object*)&l_Lake_Check_instFromJsonConfig_fromJson___closed__28_value;
static lean_once_cell_t l_Lake_Check_instFromJsonConfig_fromJson___closed__29_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Check_instFromJsonConfig_fromJson___closed__29;
static lean_once_cell_t l_Lake_Check_instFromJsonConfig_fromJson___closed__30_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Check_instFromJsonConfig_fromJson___closed__30;
static lean_once_cell_t l_Lake_Check_instFromJsonConfig_fromJson___closed__31_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Check_instFromJsonConfig_fromJson___closed__31;
static const lean_string_object l_Lake_Check_instFromJsonConfig_fromJson___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "enable_nanoda"};
static const lean_object* l_Lake_Check_instFromJsonConfig_fromJson___closed__32 = (const lean_object*)&l_Lake_Check_instFromJsonConfig_fromJson___closed__32_value;
static const lean_string_object l_Lake_Check_instFromJsonConfig_fromJson___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "enable_nanoda\?"};
static const lean_object* l_Lake_Check_instFromJsonConfig_fromJson___closed__33 = (const lean_object*)&l_Lake_Check_instFromJsonConfig_fromJson___closed__33_value;
static const lean_ctor_object l_Lake_Check_instFromJsonConfig_fromJson___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_Check_instFromJsonConfig_fromJson___closed__33_value),LEAN_SCALAR_PTR_LITERAL(38, 150, 13, 192, 149, 235, 179, 231)}};
static const lean_object* l_Lake_Check_instFromJsonConfig_fromJson___closed__34 = (const lean_object*)&l_Lake_Check_instFromJsonConfig_fromJson___closed__34_value;
static lean_once_cell_t l_Lake_Check_instFromJsonConfig_fromJson___closed__35_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Check_instFromJsonConfig_fromJson___closed__35;
static lean_once_cell_t l_Lake_Check_instFromJsonConfig_fromJson___closed__36_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Check_instFromJsonConfig_fromJson___closed__36;
static lean_once_cell_t l_Lake_Check_instFromJsonConfig_fromJson___closed__37_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Check_instFromJsonConfig_fromJson___closed__37;
static const lean_string_object l_Lake_Check_instFromJsonConfig_fromJson___closed__38_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "external_kernels"};
static const lean_object* l_Lake_Check_instFromJsonConfig_fromJson___closed__38 = (const lean_object*)&l_Lake_Check_instFromJsonConfig_fromJson___closed__38_value;
static const lean_string_object l_Lake_Check_instFromJsonConfig_fromJson___closed__39_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "external_kernels\?"};
static const lean_object* l_Lake_Check_instFromJsonConfig_fromJson___closed__39 = (const lean_object*)&l_Lake_Check_instFromJsonConfig_fromJson___closed__39_value;
static const lean_ctor_object l_Lake_Check_instFromJsonConfig_fromJson___closed__40_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_Check_instFromJsonConfig_fromJson___closed__39_value),LEAN_SCALAR_PTR_LITERAL(141, 143, 112, 163, 13, 61, 174, 161)}};
static const lean_object* l_Lake_Check_instFromJsonConfig_fromJson___closed__40 = (const lean_object*)&l_Lake_Check_instFromJsonConfig_fromJson___closed__40_value;
static lean_once_cell_t l_Lake_Check_instFromJsonConfig_fromJson___closed__41_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Check_instFromJsonConfig_fromJson___closed__41;
static lean_once_cell_t l_Lake_Check_instFromJsonConfig_fromJson___closed__42_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Check_instFromJsonConfig_fromJson___closed__42;
static lean_once_cell_t l_Lake_Check_instFromJsonConfig_fromJson___closed__43_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Check_instFromJsonConfig_fromJson___closed__43;
LEAN_EXPORT lean_object* l_Lake_Check_instFromJsonConfig_fromJson(lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lean_Data_Json_FromToJson_Extra_0__Lean_TreeMap_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lake_Check_instFromJsonConfig_fromJson_spec__4_spec__7_spec__9_spec__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lake_Check_instFromJsonConfig___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_Check_instFromJsonConfig_fromJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_Check_instFromJsonConfig___closed__0 = (const lean_object*)&l_Lake_Check_instFromJsonConfig___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_Check_instFromJsonConfig = (const lean_object*)&l_Lake_Check_instFromJsonConfig___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Json_opt___at___00Lake_Check_instToJsonConfig_toJson_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_opt___at___00Lake_Check_instToJsonConfig_toJson_spec__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lake_Check_instToJsonConfig_toJson_spec__0_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lake_Check_instToJsonConfig_toJson_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Array_toJson___at___00Lake_Check_instToJsonConfig_toJson_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Array_toJson___at___00Lake_Check_instToJsonConfig_toJson_spec__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_toJson___at___00Lake_Check_instToJsonConfig_toJson_spec__1(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_toJson___at___00Lake_Check_instToJsonConfig_toJson_spec__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lake_Check_instToJsonConfig_toJson_spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_map___at___00__private_Lean_Data_Json_FromToJson_Extra_0__Lean_TreeMap_toJson___at___00Lean_Json_opt___at___00Lake_Check_instToJsonConfig_toJson_spec__3_spec__4_spec__5(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_Json_FromToJson_Extra_0__Lean_TreeMap_toJson___at___00Lean_Json_opt___at___00Lake_Check_instToJsonConfig_toJson_spec__3_spec__4(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_opt___at___00Lake_Check_instToJsonConfig_toJson_spec__3(lean_object*, lean_object*);
static const lean_array_object l_Lake_Check_instToJsonConfig_toJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lake_Check_instToJsonConfig_toJson___closed__0 = (const lean_object*)&l_Lake_Check_instToJsonConfig_toJson___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_Check_instToJsonConfig_toJson(lean_object*);
static const lean_closure_object l_Lake_Check_instToJsonConfig___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_Check_instToJsonConfig_toJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_Check_instToJsonConfig___closed__0 = (const lean_object*)&l_Lake_Check_instToJsonConfig___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_Check_instToJsonConfig = (const lean_object*)&l_Lake_Check_instToJsonConfig___closed__0_value;
static const lean_string_object l_Option_repr___at___00Lake_Check_instReprConfig_repr_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "none"};
static const lean_object* l_Option_repr___at___00Lake_Check_instReprConfig_repr_spec__2___closed__0 = (const lean_object*)&l_Option_repr___at___00Lake_Check_instReprConfig_repr_spec__2___closed__0_value;
static const lean_ctor_object l_Option_repr___at___00Lake_Check_instReprConfig_repr_spec__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Option_repr___at___00Lake_Check_instReprConfig_repr_spec__2___closed__0_value)}};
static const lean_object* l_Option_repr___at___00Lake_Check_instReprConfig_repr_spec__2___closed__1 = (const lean_object*)&l_Option_repr___at___00Lake_Check_instReprConfig_repr_spec__2___closed__1_value;
static const lean_string_object l_Option_repr___at___00Lake_Check_instReprConfig_repr_spec__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "some "};
static const lean_object* l_Option_repr___at___00Lake_Check_instReprConfig_repr_spec__2___closed__2 = (const lean_object*)&l_Option_repr___at___00Lake_Check_instReprConfig_repr_spec__2___closed__2_value;
static const lean_ctor_object l_Option_repr___at___00Lake_Check_instReprConfig_repr_spec__2___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Option_repr___at___00Lake_Check_instReprConfig_repr_spec__2___closed__2_value)}};
static const lean_object* l_Option_repr___at___00Lake_Check_instReprConfig_repr_spec__2___closed__3 = (const lean_object*)&l_Option_repr___at___00Lake_Check_instReprConfig_repr_spec__2___closed__3_value;
LEAN_EXPORT lean_object* l_Option_repr___at___00Lake_Check_instReprConfig_repr_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Option_repr___at___00Lake_Check_instReprConfig_repr_spec__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_cast___at___00Lake_Check_instReprConfig_repr_spec__4(lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lake_Check_instReprConfig_repr_spec__0_spec__0_spec__3_spec__6(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lake_Check_instReprConfig_repr_spec__0_spec__0_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Lake_Check_instReprConfig_repr_spec__0_spec__0___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Lake_Check_instReprConfig_repr_spec__0_spec__0(lean_object*, lean_object*);
static const lean_string_object l_Array_repr___at___00Lake_Check_instReprConfig_repr_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "#["};
static const lean_object* l_Array_repr___at___00Lake_Check_instReprConfig_repr_spec__0___closed__0 = (const lean_object*)&l_Array_repr___at___00Lake_Check_instReprConfig_repr_spec__0___closed__0_value;
static const lean_string_object l_Array_repr___at___00Lake_Check_instReprConfig_repr_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ","};
static const lean_object* l_Array_repr___at___00Lake_Check_instReprConfig_repr_spec__0___closed__1 = (const lean_object*)&l_Array_repr___at___00Lake_Check_instReprConfig_repr_spec__0___closed__1_value;
static const lean_ctor_object l_Array_repr___at___00Lake_Check_instReprConfig_repr_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Array_repr___at___00Lake_Check_instReprConfig_repr_spec__0___closed__1_value)}};
static const lean_object* l_Array_repr___at___00Lake_Check_instReprConfig_repr_spec__0___closed__2 = (const lean_object*)&l_Array_repr___at___00Lake_Check_instReprConfig_repr_spec__0___closed__2_value;
static const lean_ctor_object l_Array_repr___at___00Lake_Check_instReprConfig_repr_spec__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Array_repr___at___00Lake_Check_instReprConfig_repr_spec__0___closed__2_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Array_repr___at___00Lake_Check_instReprConfig_repr_spec__0___closed__3 = (const lean_object*)&l_Array_repr___at___00Lake_Check_instReprConfig_repr_spec__0___closed__3_value;
static lean_once_cell_t l_Array_repr___at___00Lake_Check_instReprConfig_repr_spec__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_repr___at___00Lake_Check_instReprConfig_repr_spec__0___closed__4;
static lean_once_cell_t l_Array_repr___at___00Lake_Check_instReprConfig_repr_spec__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_repr___at___00Lake_Check_instReprConfig_repr_spec__0___closed__5;
static const lean_ctor_object l_Array_repr___at___00Lake_Check_instReprConfig_repr_spec__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Array_repr___at___00Lake_Check_instReprConfig_repr_spec__0___closed__0_value)}};
static const lean_object* l_Array_repr___at___00Lake_Check_instReprConfig_repr_spec__0___closed__6 = (const lean_object*)&l_Array_repr___at___00Lake_Check_instReprConfig_repr_spec__0___closed__6_value;
static const lean_ctor_object l_Array_repr___at___00Lake_Check_instReprConfig_repr_spec__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_List_toString___at___00__private_Lake_CLI_Check_0__Lake_Check_withSafeExport_spec__0___closed__2_value)}};
static const lean_object* l_Array_repr___at___00Lake_Check_instReprConfig_repr_spec__0___closed__7 = (const lean_object*)&l_Array_repr___at___00Lake_Check_instReprConfig_repr_spec__0___closed__7_value;
static const lean_string_object l_Array_repr___at___00Lake_Check_instReprConfig_repr_spec__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "#[]"};
static const lean_object* l_Array_repr___at___00Lake_Check_instReprConfig_repr_spec__0___closed__8 = (const lean_object*)&l_Array_repr___at___00Lake_Check_instReprConfig_repr_spec__0___closed__8_value;
static const lean_ctor_object l_Array_repr___at___00Lake_Check_instReprConfig_repr_spec__0___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Array_repr___at___00Lake_Check_instReprConfig_repr_spec__0___closed__8_value)}};
static const lean_object* l_Array_repr___at___00Lake_Check_instReprConfig_repr_spec__0___closed__9 = (const lean_object*)&l_Array_repr___at___00Lake_Check_instReprConfig_repr_spec__0___closed__9_value;
LEAN_EXPORT lean_object* l_Array_repr___at___00Lake_Check_instReprConfig_repr_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Option_repr___at___00Lake_Check_instReprConfig_repr_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Option_repr___at___00Lake_Check_instReprConfig_repr_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldrM___at___00Option_repr___at___00Lake_Check_instReprConfig_repr_spec__3_spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldrM___at___00Option_repr___at___00Lake_Check_instReprConfig_repr_spec__3_spec__4___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Prod_repr___at___00List_repr___at___00Option_repr___at___00Lake_Check_instReprConfig_repr_spec__3_spec__5_spec__8_spec__10_spec__11(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Prod_repr___at___00List_repr___at___00Option_repr___at___00Lake_Check_instReprConfig_repr_spec__3_spec__5_spec__8_spec__10(lean_object*, lean_object*);
static const lean_string_object l_Prod_repr___at___00List_repr___at___00Option_repr___at___00Lake_Check_instReprConfig_repr_spec__3_spec__5_spec__8___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "("};
static const lean_object* l_Prod_repr___at___00List_repr___at___00Option_repr___at___00Lake_Check_instReprConfig_repr_spec__3_spec__5_spec__8___redArg___closed__0 = (const lean_object*)&l_Prod_repr___at___00List_repr___at___00Option_repr___at___00Lake_Check_instReprConfig_repr_spec__3_spec__5_spec__8___redArg___closed__0_value;
static const lean_string_object l_Prod_repr___at___00List_repr___at___00Option_repr___at___00Lake_Check_instReprConfig_repr_spec__3_spec__5_spec__8___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l_Prod_repr___at___00List_repr___at___00Option_repr___at___00Lake_Check_instReprConfig_repr_spec__3_spec__5_spec__8___redArg___closed__1 = (const lean_object*)&l_Prod_repr___at___00List_repr___at___00Option_repr___at___00Lake_Check_instReprConfig_repr_spec__3_spec__5_spec__8___redArg___closed__1_value;
static lean_once_cell_t l_Prod_repr___at___00List_repr___at___00Option_repr___at___00Lake_Check_instReprConfig_repr_spec__3_spec__5_spec__8___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Prod_repr___at___00List_repr___at___00Option_repr___at___00Lake_Check_instReprConfig_repr_spec__3_spec__5_spec__8___redArg___closed__2;
static lean_once_cell_t l_Prod_repr___at___00List_repr___at___00Option_repr___at___00Lake_Check_instReprConfig_repr_spec__3_spec__5_spec__8___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Prod_repr___at___00List_repr___at___00Option_repr___at___00Lake_Check_instReprConfig_repr_spec__3_spec__5_spec__8___redArg___closed__3;
static const lean_ctor_object l_Prod_repr___at___00List_repr___at___00Option_repr___at___00Lake_Check_instReprConfig_repr_spec__3_spec__5_spec__8___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Prod_repr___at___00List_repr___at___00Option_repr___at___00Lake_Check_instReprConfig_repr_spec__3_spec__5_spec__8___redArg___closed__0_value)}};
static const lean_object* l_Prod_repr___at___00List_repr___at___00Option_repr___at___00Lake_Check_instReprConfig_repr_spec__3_spec__5_spec__8___redArg___closed__4 = (const lean_object*)&l_Prod_repr___at___00List_repr___at___00Option_repr___at___00Lake_Check_instReprConfig_repr_spec__3_spec__5_spec__8___redArg___closed__4_value;
static const lean_ctor_object l_Prod_repr___at___00List_repr___at___00Option_repr___at___00Lake_Check_instReprConfig_repr_spec__3_spec__5_spec__8___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Prod_repr___at___00List_repr___at___00Option_repr___at___00Lake_Check_instReprConfig_repr_spec__3_spec__5_spec__8___redArg___closed__1_value)}};
static const lean_object* l_Prod_repr___at___00List_repr___at___00Option_repr___at___00Lake_Check_instReprConfig_repr_spec__3_spec__5_spec__8___redArg___closed__5 = (const lean_object*)&l_Prod_repr___at___00List_repr___at___00Option_repr___at___00Lake_Check_instReprConfig_repr_spec__3_spec__5_spec__8___redArg___closed__5_value;
LEAN_EXPORT lean_object* l_Prod_repr___at___00List_repr___at___00Option_repr___at___00Lake_Check_instReprConfig_repr_spec__3_spec__5_spec__8___redArg(lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00Option_repr___at___00Lake_Check_instReprConfig_repr_spec__3_spec__5_spec__9_spec__12_spec__14(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00Option_repr___at___00Lake_Check_instReprConfig_repr_spec__3_spec__5_spec__9_spec__12(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00List_repr___at___00Option_repr___at___00Lake_Check_instReprConfig_repr_spec__3_spec__5_spec__9(lean_object*, lean_object*);
static const lean_ctor_object l_List_repr___at___00Option_repr___at___00Lake_Check_instReprConfig_repr_spec__3_spec__5___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_List_toString___at___00__private_Lake_CLI_Check_0__Lake_Check_withSafeExport_spec__0___closed__0_value)}};
static const lean_object* l_List_repr___at___00Option_repr___at___00Lake_Check_instReprConfig_repr_spec__3_spec__5___redArg___closed__0 = (const lean_object*)&l_List_repr___at___00Option_repr___at___00Lake_Check_instReprConfig_repr_spec__3_spec__5___redArg___closed__0_value;
static lean_once_cell_t l_List_repr___at___00Option_repr___at___00Lake_Check_instReprConfig_repr_spec__3_spec__5___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_repr___at___00Option_repr___at___00Lake_Check_instReprConfig_repr_spec__3_spec__5___redArg___closed__1;
static lean_once_cell_t l_List_repr___at___00Option_repr___at___00Lake_Check_instReprConfig_repr_spec__3_spec__5___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_repr___at___00Option_repr___at___00Lake_Check_instReprConfig_repr_spec__3_spec__5___redArg___closed__2;
static const lean_ctor_object l_List_repr___at___00Option_repr___at___00Lake_Check_instReprConfig_repr_spec__3_spec__5___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_List_toString___at___00__private_Lake_CLI_Check_0__Lake_Check_withSafeExport_spec__0___closed__1_value)}};
static const lean_object* l_List_repr___at___00Option_repr___at___00Lake_Check_instReprConfig_repr_spec__3_spec__5___redArg___closed__3 = (const lean_object*)&l_List_repr___at___00Option_repr___at___00Lake_Check_instReprConfig_repr_spec__3_spec__5___redArg___closed__3_value;
LEAN_EXPORT lean_object* l_List_repr___at___00Option_repr___at___00Lake_Check_instReprConfig_repr_spec__3_spec__5___redArg(lean_object*);
static const lean_string_object l_Option_repr___at___00Lake_Check_instReprConfig_repr_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "Std.TreeMap.ofList "};
static const lean_object* l_Option_repr___at___00Lake_Check_instReprConfig_repr_spec__3___closed__0 = (const lean_object*)&l_Option_repr___at___00Lake_Check_instReprConfig_repr_spec__3___closed__0_value;
static const lean_ctor_object l_Option_repr___at___00Lake_Check_instReprConfig_repr_spec__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Option_repr___at___00Lake_Check_instReprConfig_repr_spec__3___closed__0_value)}};
static const lean_object* l_Option_repr___at___00Lake_Check_instReprConfig_repr_spec__3___closed__1 = (const lean_object*)&l_Option_repr___at___00Lake_Check_instReprConfig_repr_spec__3___closed__1_value;
LEAN_EXPORT lean_object* l_Option_repr___at___00Lake_Check_instReprConfig_repr_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Option_repr___at___00Lake_Check_instReprConfig_repr_spec__3___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lake_Check_instReprConfig_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "{ "};
static const lean_object* l_Lake_Check_instReprConfig_repr___redArg___closed__0 = (const lean_object*)&l_Lake_Check_instReprConfig_repr___redArg___closed__0_value;
static const lean_ctor_object l_Lake_Check_instReprConfig_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lake_Check_instFromJsonConfig_fromJson___closed__0_value)}};
static const lean_object* l_Lake_Check_instReprConfig_repr___redArg___closed__1 = (const lean_object*)&l_Lake_Check_instReprConfig_repr___redArg___closed__1_value;
static const lean_ctor_object l_Lake_Check_instReprConfig_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_Check_instReprConfig_repr___redArg___closed__1_value)}};
static const lean_object* l_Lake_Check_instReprConfig_repr___redArg___closed__2 = (const lean_object*)&l_Lake_Check_instReprConfig_repr___redArg___closed__2_value;
static const lean_string_object l_Lake_Check_instReprConfig_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " := "};
static const lean_object* l_Lake_Check_instReprConfig_repr___redArg___closed__3 = (const lean_object*)&l_Lake_Check_instReprConfig_repr___redArg___closed__3_value;
static const lean_ctor_object l_Lake_Check_instReprConfig_repr___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lake_Check_instReprConfig_repr___redArg___closed__3_value)}};
static const lean_object* l_Lake_Check_instReprConfig_repr___redArg___closed__4 = (const lean_object*)&l_Lake_Check_instReprConfig_repr___redArg___closed__4_value;
static const lean_ctor_object l_Lake_Check_instReprConfig_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lake_Check_instReprConfig_repr___redArg___closed__2_value),((lean_object*)&l_Lake_Check_instReprConfig_repr___redArg___closed__4_value)}};
static const lean_object* l_Lake_Check_instReprConfig_repr___redArg___closed__5 = (const lean_object*)&l_Lake_Check_instReprConfig_repr___redArg___closed__5_value;
static lean_once_cell_t l_Lake_Check_instReprConfig_repr___redArg___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Check_instReprConfig_repr___redArg___closed__6;
static const lean_ctor_object l_Lake_Check_instReprConfig_repr___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lake_Check_instFromJsonConfig_fromJson___closed__13_value)}};
static const lean_object* l_Lake_Check_instReprConfig_repr___redArg___closed__7 = (const lean_object*)&l_Lake_Check_instReprConfig_repr___redArg___closed__7_value;
static lean_once_cell_t l_Lake_Check_instReprConfig_repr___redArg___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Check_instReprConfig_repr___redArg___closed__8;
static const lean_ctor_object l_Lake_Check_instReprConfig_repr___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lake_Check_instFromJsonConfig_fromJson___closed__18_value)}};
static const lean_object* l_Lake_Check_instReprConfig_repr___redArg___closed__9 = (const lean_object*)&l_Lake_Check_instReprConfig_repr___redArg___closed__9_value;
static lean_once_cell_t l_Lake_Check_instReprConfig_repr___redArg___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Check_instReprConfig_repr___redArg___closed__10;
static const lean_ctor_object l_Lake_Check_instReprConfig_repr___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lake_Check_instFromJsonConfig_fromJson___closed__23_value)}};
static const lean_object* l_Lake_Check_instReprConfig_repr___redArg___closed__11 = (const lean_object*)&l_Lake_Check_instReprConfig_repr___redArg___closed__11_value;
static const lean_ctor_object l_Lake_Check_instReprConfig_repr___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_runExternalKernel___lam__0___closed__12_value)}};
static const lean_object* l_Lake_Check_instReprConfig_repr___redArg___closed__12 = (const lean_object*)&l_Lake_Check_instReprConfig_repr___redArg___closed__12_value;
static const lean_ctor_object l_Lake_Check_instReprConfig_repr___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lake_Check_instFromJsonConfig_fromJson___closed__33_value)}};
static const lean_object* l_Lake_Check_instReprConfig_repr___redArg___closed__13 = (const lean_object*)&l_Lake_Check_instReprConfig_repr___redArg___closed__13_value;
static lean_once_cell_t l_Lake_Check_instReprConfig_repr___redArg___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Check_instReprConfig_repr___redArg___closed__14;
static const lean_ctor_object l_Lake_Check_instReprConfig_repr___redArg___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lake_Check_instFromJsonConfig_fromJson___closed__39_value)}};
static const lean_object* l_Lake_Check_instReprConfig_repr___redArg___closed__15 = (const lean_object*)&l_Lake_Check_instReprConfig_repr___redArg___closed__15_value;
static lean_once_cell_t l_Lake_Check_instReprConfig_repr___redArg___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Check_instReprConfig_repr___redArg___closed__16;
static const lean_string_object l_Lake_Check_instReprConfig_repr___redArg___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " }"};
static const lean_object* l_Lake_Check_instReprConfig_repr___redArg___closed__17 = (const lean_object*)&l_Lake_Check_instReprConfig_repr___redArg___closed__17_value;
static lean_once_cell_t l_Lake_Check_instReprConfig_repr___redArg___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Check_instReprConfig_repr___redArg___closed__18;
static lean_once_cell_t l_Lake_Check_instReprConfig_repr___redArg___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Check_instReprConfig_repr___redArg___closed__19;
static const lean_ctor_object l_Lake_Check_instReprConfig_repr___redArg___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lake_Check_instReprConfig_repr___redArg___closed__0_value)}};
static const lean_object* l_Lake_Check_instReprConfig_repr___redArg___closed__20 = (const lean_object*)&l_Lake_Check_instReprConfig_repr___redArg___closed__20_value;
static const lean_ctor_object l_Lake_Check_instReprConfig_repr___redArg___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lake_Check_instReprConfig_repr___redArg___closed__17_value)}};
static const lean_object* l_Lake_Check_instReprConfig_repr___redArg___closed__21 = (const lean_object*)&l_Lake_Check_instReprConfig_repr___redArg___closed__21_value;
LEAN_EXPORT lean_object* l_Lake_Check_instReprConfig_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Check_instReprConfig_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Check_instReprConfig_repr___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_repr___at___00Option_repr___at___00Lake_Check_instReprConfig_repr_spec__3_spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_repr___at___00Option_repr___at___00Lake_Check_instReprConfig_repr_spec__3_spec__5___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Prod_repr___at___00List_repr___at___00Option_repr___at___00Lake_Check_instReprConfig_repr_spec__3_spec__5_spec__8(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Prod_repr___at___00List_repr___at___00Option_repr___at___00Lake_Check_instReprConfig_repr_spec__3_spec__5_spec__8___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lake_Check_instReprConfig___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_Check_instReprConfig_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_Check_instReprConfig___closed__0 = (const lean_object*)&l_Lake_Check_instReprConfig___closed__0_value;
LEAN_EXPORT const lean_object* l_Lake_Check_instReprConfig = (const lean_object*)&l_Lake_Check_instReprConfig___closed__0_value;
LEAN_EXPORT lean_object* l_IO_eprintln___at___00__private_Lake_CLI_Check_0__Lake_Check_cannotRun_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_IO_eprintln___at___00__private_Lake_CLI_Check_0__Lake_Check_cannotRun_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Lake_CLI_Check_0__Lake_Check_cannotRun___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "error: "};
static const lean_object* l___private_Lake_CLI_Check_0__Lake_Check_cannotRun___closed__0 = (const lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_cannotRun___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lake_CLI_Check_0__Lake_Check_cannotRun___boxed__const__1;
LEAN_EXPORT lean_object* l___private_Lake_CLI_Check_0__Lake_Check_cannotRun(lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_Check_0__Lake_Check_cannotRun___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Lake_CLI_Check_0__Lake_Check_checkManifest___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "lake-manifest.json"};
static const lean_object* l___private_Lake_CLI_Check_0__Lake_Check_checkManifest___closed__0 = (const lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_checkManifest___closed__0_value;
static const lean_string_object l___private_Lake_CLI_Check_0__Lake_Check_checkManifest___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 42, .m_capacity = 42, .m_length = 41, .m_data = "' has no `lake-manifest.json`, and `lake "};
static const lean_object* l___private_Lake_CLI_Check_0__Lake_Check_checkManifest___closed__1 = (const lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_checkManifest___closed__1_value;
static const lean_string_object l___private_Lake_CLI_Check_0__Lake_Check_checkManifest___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 115, .m_capacity = 115, .m_length = 114, .m_data = "` resolves dependencies inside a sandbox that cannot write to the project directory. Run `lake build` there first."};
static const lean_object* l___private_Lake_CLI_Check_0__Lake_Check_checkManifest___closed__2 = (const lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_checkManifest___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lake_CLI_Check_0__Lake_Check_checkManifest(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_Check_0__Lake_Check_checkManifest___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lake_CLI_Check_0__Lake_Check_mkContext___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 153, .m_capacity = 153, .m_length = 152, .m_data = "` sandboxes the code it checks with `bwrap`, which needs Linux namespaces. There is no unsandboxed mode, so the command is unavailable on this platform."};
static const lean_object* l___private_Lake_CLI_Check_0__Lake_Check_mkContext___closed__0 = (const lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_mkContext___closed__0_value;
static const lean_string_object l___private_Lake_CLI_Check_0__Lake_Check_mkContext___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "COMPARATOR_BWRAP"};
static const lean_object* l___private_Lake_CLI_Check_0__Lake_Check_mkContext___closed__1 = (const lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_mkContext___closed__1_value;
static const lean_string_object l___private_Lake_CLI_Check_0__Lake_Check_mkContext___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "leanexport"};
static const lean_object* l___private_Lake_CLI_Check_0__Lake_Check_mkContext___closed__2 = (const lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_mkContext___closed__2_value;
static const lean_string_object l___private_Lake_CLI_Check_0__Lake_Check_mkContext___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "leanchecker"};
static const lean_object* l___private_Lake_CLI_Check_0__Lake_Check_mkContext___closed__3 = (const lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_mkContext___closed__3_value;
static const lean_string_object l___private_Lake_CLI_Check_0__Lake_Check_mkContext___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "git"};
static const lean_object* l___private_Lake_CLI_Check_0__Lake_Check_mkContext___closed__4 = (const lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_mkContext___closed__4_value;
static lean_once_cell_t l___private_Lake_CLI_Check_0__Lake_Check_mkContext___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_CLI_Check_0__Lake_Check_mkContext___closed__5;
static const lean_string_object l___private_Lake_CLI_Check_0__Lake_Check_mkContext___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 50, .m_capacity = 50, .m_length = 49, .m_data = "` needs `env` on PATH to build inside the sandbox"};
static const lean_object* l___private_Lake_CLI_Check_0__Lake_Check_mkContext___closed__6 = (const lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_mkContext___closed__6_value;
static const lean_string_object l___private_Lake_CLI_Check_0__Lake_Check_mkContext___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 50, .m_capacity = 50, .m_length = 49, .m_data = "` needs `git` on PATH to build inside the sandbox"};
static const lean_object* l___private_Lake_CLI_Check_0__Lake_Check_mkContext___closed__7 = (const lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_mkContext___closed__7_value;
static const lean_string_object l___private_Lake_CLI_Check_0__Lake_Check_mkContext___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "bwrap"};
static const lean_object* l___private_Lake_CLI_Check_0__Lake_Check_mkContext___closed__8 = (const lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_mkContext___closed__8_value;
LEAN_EXPORT lean_object* l___private_Lake_CLI_Check_0__Lake_Check_mkContext(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_Check_0__Lake_Check_mkContext___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lake_CLI_Check_0__Lake_Check_resolveExternalKernels_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lake_CLI_Check_0__Lake_Check_resolveExternalKernels_spec__0___closed__0 = (const lean_object*)&l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lake_CLI_Check_0__Lake_Check_resolveExternalKernels_spec__0___closed__0_value;
static const lean_string_object l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lake_CLI_Check_0__Lake_Check_resolveExternalKernels_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lake_CLI_Check_0__Lake_Check_resolveExternalKernels_spec__0___closed__1 = (const lean_object*)&l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lake_CLI_Check_0__Lake_Check_resolveExternalKernels_spec__0___closed__1_value;
static const lean_string_object l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lake_CLI_Check_0__Lake_Check_resolveExternalKernels_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "` kernel `"};
static const lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lake_CLI_Check_0__Lake_Check_resolveExternalKernels_spec__0___closed__2 = (const lean_object*)&l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lake_CLI_Check_0__Lake_Check_resolveExternalKernels_spec__0___closed__2_value;
static const lean_string_object l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lake_CLI_Check_0__Lake_Check_resolveExternalKernels_spec__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "` was not found"};
static const lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lake_CLI_Check_0__Lake_Check_resolveExternalKernels_spec__0___closed__3 = (const lean_object*)&l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lake_CLI_Check_0__Lake_Check_resolveExternalKernels_spec__0___closed__3_value;
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lake_CLI_Check_0__Lake_Check_resolveExternalKernels_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lake_CLI_Check_0__Lake_Check_resolveExternalKernels_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lake_CLI_Check_0__Lake_Check_resolveExternalKernels_spec__1___redArg(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lake_CLI_Check_0__Lake_Check_resolveExternalKernels_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "` has an empty command"};
static const lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lake_CLI_Check_0__Lake_Check_resolveExternalKernels_spec__2___closed__0 = (const lean_object*)&l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lake_CLI_Check_0__Lake_Check_resolveExternalKernels_spec__2___closed__0_value;
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lake_CLI_Check_0__Lake_Check_resolveExternalKernels_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lake_CLI_Check_0__Lake_Check_resolveExternalKernels_spec__2___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lake_CLI_Check_0__Lake_Check_resolveExternalKernels___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "nanoda"};
static const lean_object* l___private_Lake_CLI_Check_0__Lake_Check_resolveExternalKernels___closed__0 = (const lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_resolveExternalKernels___closed__0_value;
static const lean_string_object l___private_Lake_CLI_Check_0__Lake_Check_resolveExternalKernels___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "nanoda_bin"};
static const lean_object* l___private_Lake_CLI_Check_0__Lake_Check_resolveExternalKernels___closed__1 = (const lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_resolveExternalKernels___closed__1_value;
static const lean_array_object l___private_Lake_CLI_Check_0__Lake_Check_resolveExternalKernels___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 246}, .m_size = 1, .m_capacity = 1, .m_data = {((lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_resolveExternalKernels___closed__1_value)}};
static const lean_object* l___private_Lake_CLI_Check_0__Lake_Check_resolveExternalKernels___closed__2 = (const lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_resolveExternalKernels___closed__2_value;
static const lean_string_object l___private_Lake_CLI_Check_0__Lake_Check_resolveExternalKernels___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 104, .m_capacity = 104, .m_length = 103, .m_data = "cannot use `enable_nanoda` and `external_kernels` at the same time; register nanoda in the list instead"};
static const lean_object* l___private_Lake_CLI_Check_0__Lake_Check_resolveExternalKernels___closed__3 = (const lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_resolveExternalKernels___closed__3_value;
LEAN_EXPORT lean_object* l___private_Lake_CLI_Check_0__Lake_Check_resolveExternalKernels(lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_Check_0__Lake_Check_resolveExternalKernels___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lake_CLI_Check_0__Lake_Check_resolveExternalKernels_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lake_CLI_Check_0__Lake_Check_standardAxioms___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "propext"};
static const lean_object* l___private_Lake_CLI_Check_0__Lake_Check_standardAxioms___closed__0 = (const lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_standardAxioms___closed__0_value;
static const lean_ctor_object l___private_Lake_CLI_Check_0__Lake_Check_standardAxioms___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_standardAxioms___closed__0_value),LEAN_SCALAR_PTR_LITERAL(53, 150, 49, 30, 125, 3, 39, 172)}};
static const lean_object* l___private_Lake_CLI_Check_0__Lake_Check_standardAxioms___closed__1 = (const lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_standardAxioms___closed__1_value;
static const lean_string_object l___private_Lake_CLI_Check_0__Lake_Check_standardAxioms___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "Classical"};
static const lean_object* l___private_Lake_CLI_Check_0__Lake_Check_standardAxioms___closed__2 = (const lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_standardAxioms___closed__2_value;
static const lean_string_object l___private_Lake_CLI_Check_0__Lake_Check_standardAxioms___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "choice"};
static const lean_object* l___private_Lake_CLI_Check_0__Lake_Check_standardAxioms___closed__3 = (const lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_standardAxioms___closed__3_value;
static const lean_ctor_object l___private_Lake_CLI_Check_0__Lake_Check_standardAxioms___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_standardAxioms___closed__2_value),LEAN_SCALAR_PTR_LITERAL(40, 236, 220, 79, 38, 141, 161, 150)}};
static const lean_ctor_object l___private_Lake_CLI_Check_0__Lake_Check_standardAxioms___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_standardAxioms___closed__4_value_aux_0),((lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_standardAxioms___closed__3_value),LEAN_SCALAR_PTR_LITERAL(76, 246, 154, 249, 193, 98, 251, 55)}};
static const lean_object* l___private_Lake_CLI_Check_0__Lake_Check_standardAxioms___closed__4 = (const lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_standardAxioms___closed__4_value;
static const lean_array_object l___private_Lake_CLI_Check_0__Lake_Check_standardAxioms___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 246}, .m_size = 3, .m_capacity = 3, .m_data = {((lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_standardAxioms___closed__1_value),((lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_standardAxioms___closed__4_value),((lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_builtinTargets___closed__3_value)}};
static const lean_object* l___private_Lake_CLI_Check_0__Lake_Check_standardAxioms___closed__5 = (const lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_standardAxioms___closed__5_value;
LEAN_EXPORT const lean_object* l___private_Lake_CLI_Check_0__Lake_Check_standardAxioms = (const lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_standardAxioms___closed__5_value;
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lake_CLI_Check_0__Lake_Check_checkUsedAxioms_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_Check_0__Lake_Check_checkUsedAxioms_spec__1(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_Check_0__Lake_Check_checkUsedAxioms_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_List_mapTR_loop___at___00__private_Lake_CLI_Check_0__Lake_Check_checkUsedAxioms_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "Axiom '"};
static const lean_object* l_List_mapTR_loop___at___00__private_Lake_CLI_Check_0__Lake_Check_checkUsedAxioms_spec__0___closed__0 = (const lean_object*)&l_List_mapTR_loop___at___00__private_Lake_CLI_Check_0__Lake_Check_checkUsedAxioms_spec__0___closed__0_value;
static const lean_string_object l_List_mapTR_loop___at___00__private_Lake_CLI_Check_0__Lake_Check_checkUsedAxioms_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 36, .m_capacity = 36, .m_length = 35, .m_data = "' is not permitted; it is used by '"};
static const lean_object* l_List_mapTR_loop___at___00__private_Lake_CLI_Check_0__Lake_Check_checkUsedAxioms_spec__0___closed__1 = (const lean_object*)&l_List_mapTR_loop___at___00__private_Lake_CLI_Check_0__Lake_Check_checkUsedAxioms_spec__0___closed__1_value;
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lake_CLI_Check_0__Lake_Check_checkUsedAxioms_spec__0(lean_object*, lean_object*);
static const lean_string_object l___private_Lake_CLI_Check_0__Lake_Check_checkUsedAxioms___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "\n"};
static const lean_object* l___private_Lake_CLI_Check_0__Lake_Check_checkUsedAxioms___redArg___closed__0 = (const lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_checkUsedAxioms___redArg___closed__0_value;
static const lean_array_object l___private_Lake_CLI_Check_0__Lake_Check_checkUsedAxioms___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lake_CLI_Check_0__Lake_Check_checkUsedAxioms___redArg___closed__1 = (const lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_checkUsedAxioms___redArg___closed__1_value;
static const lean_string_object l___private_Lake_CLI_Check_0__Lake_Check_checkUsedAxioms___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "Uses axioms: "};
static const lean_object* l___private_Lake_CLI_Check_0__Lake_Check_checkUsedAxioms___redArg___closed__2 = (const lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_checkUsedAxioms___redArg___closed__2_value;
static const lean_string_object l___private_Lake_CLI_Check_0__Lake_Check_checkUsedAxioms___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "Uses no axioms"};
static const lean_object* l___private_Lake_CLI_Check_0__Lake_Check_checkUsedAxioms___redArg___closed__3 = (const lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_checkUsedAxioms___redArg___closed__3_value;
LEAN_EXPORT lean_object* l___private_Lake_CLI_Check_0__Lake_Check_checkUsedAxioms___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_Check_0__Lake_Check_checkUsedAxioms___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_Check_0__Lake_Check_checkUsedAxioms(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_Check_0__Lake_Check_checkUsedAxioms___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_Check_0__Lake_Check_checkProject___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_Check_0__Lake_Check_checkProject___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lake_CLI_Check_0__Lake_Check_checkProject___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lake_CLI_Check_0__Lake_Check_checkProject___lam__0___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lake_CLI_Check_0__Lake_Check_checkProject___closed__0 = (const lean_object*)&l___private_Lake_CLI_Check_0__Lake_Check_checkProject___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lake_CLI_Check_0__Lake_Check_checkProject(lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_Check_0__Lake_Check_checkProject___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_Check_runComparator_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_Check_runComparator_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lake_Check_runComparator___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "malformed configuration in '"};
static const lean_object* l_Lake_Check_runComparator___closed__0 = (const lean_object*)&l_Lake_Check_runComparator___closed__0_value;
static const lean_string_object l_Lake_Check_runComparator___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "': "};
static const lean_object* l_Lake_Check_runComparator___closed__1 = (const lean_object*)&l_Lake_Check_runComparator___closed__1_value;
static const lean_string_object l_Lake_Check_runComparator___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "comparator"};
static const lean_object* l_Lake_Check_runComparator___closed__2 = (const lean_object*)&l_Lake_Check_runComparator___closed__2_value;
static const lean_string_object l_Lake_Check_runComparator___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 69, .m_capacity = 69, .m_length = 68, .m_data = "nothing to check: the configuration names no theorems or definitions"};
static const lean_object* l_Lake_Check_runComparator___closed__3 = (const lean_object*)&l_Lake_Check_runComparator___closed__3_value;
static const lean_string_object l_Lake_Check_runComparator___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "could not read the configuration: "};
static const lean_object* l_Lake_Check_runComparator___closed__4 = (const lean_object*)&l_Lake_Check_runComparator___closed__4_value;
static const lean_string_object l_Lake_Check_runComparator___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "comparator.json"};
static const lean_object* l_Lake_Check_runComparator___closed__5 = (const lean_object*)&l_Lake_Check_runComparator___closed__5_value;
LEAN_EXPORT lean_object* l_Lake_Check_runComparator___boxed__const__1;
LEAN_EXPORT lean_object* l_Lake_Check_runComparator___boxed__const__2;
LEAN_EXPORT lean_object* l_Lake_Check_runComparator(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Check_runComparator___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Check_runCheck(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Check_runCheck___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_CLI_Check_0__Lake_Check_getExternalKernels(lean_object* v_a_1_){
_start:
{
lean_object* v_externalKernels_3_; lean_object* v___x_4_; 
v_externalKernels_3_ = lean_ctor_get(v_a_1_, 15);
lean_inc(v_externalKernels_3_);
v___x_4_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4_, 0, v_externalKernels_3_);
return v___x_4_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_Check_0__Lake_Check_getExternalKernels___boxed(lean_object* v_a_5_, lean_object* v_a_6_){
_start:
{
lean_object* v_res_7_; 
v_res_7_ = l___private_Lake_CLI_Check_0__Lake_Check_getExternalKernels(v_a_5_);
lean_dec_ref(v_a_5_);
return v_res_7_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_Check_0__Lake_Check_getTheoremNames(lean_object* v_a_8_){
_start:
{
lean_object* v_theoremNames_10_; lean_object* v___x_11_; 
v_theoremNames_10_ = lean_ctor_get(v_a_8_, 3);
lean_inc_ref(v_theoremNames_10_);
v___x_11_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_11_, 0, v_theoremNames_10_);
return v___x_11_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_Check_0__Lake_Check_getTheoremNames___boxed(lean_object* v_a_12_, lean_object* v_a_13_){
_start:
{
lean_object* v_res_14_; 
v_res_14_ = l___private_Lake_CLI_Check_0__Lake_Check_getTheoremNames(v_a_12_);
lean_dec_ref(v_a_12_);
return v_res_14_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_Check_0__Lake_Check_getDefinitionNames(lean_object* v_a_15_){
_start:
{
lean_object* v_definitionNames_17_; lean_object* v___x_18_; 
v_definitionNames_17_ = lean_ctor_get(v_a_15_, 4);
lean_inc_ref(v_definitionNames_17_);
v___x_18_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_18_, 0, v_definitionNames_17_);
return v___x_18_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_Check_0__Lake_Check_getDefinitionNames___boxed(lean_object* v_a_19_, lean_object* v_a_20_){
_start:
{
lean_object* v_res_21_; 
v_res_21_ = l___private_Lake_CLI_Check_0__Lake_Check_getDefinitionNames(v_a_19_);
lean_dec_ref(v_a_19_);
return v_res_21_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_Check_0__Lake_Check_getProjectDir(lean_object* v_a_22_){
_start:
{
lean_object* v_projectDir_24_; lean_object* v___x_25_; 
v_projectDir_24_ = lean_ctor_get(v_a_22_, 0);
lean_inc_ref(v_projectDir_24_);
v___x_25_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_25_, 0, v_projectDir_24_);
return v___x_25_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_Check_0__Lake_Check_getProjectDir___boxed(lean_object* v_a_26_, lean_object* v_a_27_){
_start:
{
lean_object* v_res_28_; 
v_res_28_ = l___private_Lake_CLI_Check_0__Lake_Check_getProjectDir(v_a_26_);
lean_dec_ref(v_a_26_);
return v_res_28_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_Check_0__Lake_Check_getLeanPrefix(lean_object* v_a_29_){
_start:
{
lean_object* v_leanPrefix_31_; lean_object* v___x_32_; 
v_leanPrefix_31_ = lean_ctor_get(v_a_29_, 6);
lean_inc_ref(v_leanPrefix_31_);
v___x_32_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_32_, 0, v_leanPrefix_31_);
return v___x_32_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_Check_0__Lake_Check_getLeanPrefix___boxed(lean_object* v_a_33_, lean_object* v_a_34_){
_start:
{
lean_object* v_res_35_; 
v_res_35_ = l___private_Lake_CLI_Check_0__Lake_Check_getLeanPrefix(v_a_33_);
lean_dec_ref(v_a_33_);
return v_res_35_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_Check_0__Lake_Check_getLakeHome(lean_object* v_a_36_){
_start:
{
lean_object* v_lakeHome_38_; lean_object* v___x_39_; 
v_lakeHome_38_ = lean_ctor_get(v_a_36_, 11);
lean_inc_ref(v_lakeHome_38_);
v___x_39_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_39_, 0, v_lakeHome_38_);
return v___x_39_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_Check_0__Lake_Check_getLakeHome___boxed(lean_object* v_a_40_, lean_object* v_a_41_){
_start:
{
lean_object* v_res_42_; 
v_res_42_ = l___private_Lake_CLI_Check_0__Lake_Check_getLakeHome(v_a_40_);
lean_dec_ref(v_a_40_);
return v_res_42_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_Check_0__Lake_Check_getChallengeModule(lean_object* v_a_43_){
_start:
{
lean_object* v_challengeModule_45_; lean_object* v___x_46_; 
v_challengeModule_45_ = lean_ctor_get(v_a_43_, 1);
lean_inc(v_challengeModule_45_);
v___x_46_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_46_, 0, v_challengeModule_45_);
return v___x_46_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_Check_0__Lake_Check_getChallengeModule___boxed(lean_object* v_a_47_, lean_object* v_a_48_){
_start:
{
lean_object* v_res_49_; 
v_res_49_ = l___private_Lake_CLI_Check_0__Lake_Check_getChallengeModule(v_a_47_);
lean_dec_ref(v_a_47_);
return v_res_49_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_Check_0__Lake_Check_getSolutionModule(lean_object* v_a_50_){
_start:
{
lean_object* v_solutionModule_52_; lean_object* v___x_53_; 
v_solutionModule_52_ = lean_ctor_get(v_a_50_, 2);
lean_inc(v_solutionModule_52_);
v___x_53_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_53_, 0, v_solutionModule_52_);
return v___x_53_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_Check_0__Lake_Check_getSolutionModule___boxed(lean_object* v_a_54_, lean_object* v_a_55_){
_start:
{
lean_object* v_res_56_; 
v_res_56_ = l___private_Lake_CLI_Check_0__Lake_Check_getSolutionModule(v_a_54_);
lean_dec_ref(v_a_54_);
return v_res_56_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_Check_0__Lake_Check_getLegalAxioms(lean_object* v_a_57_){
_start:
{
lean_object* v_legalAxioms_59_; lean_object* v___x_60_; 
v_legalAxioms_59_ = lean_ctor_get(v_a_57_, 5);
lean_inc_ref(v_legalAxioms_59_);
v___x_60_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_60_, 0, v_legalAxioms_59_);
return v___x_60_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_Check_0__Lake_Check_getLegalAxioms___boxed(lean_object* v_a_61_, lean_object* v_a_62_){
_start:
{
lean_object* v_res_63_; 
v_res_63_ = l___private_Lake_CLI_Check_0__Lake_Check_getLegalAxioms(v_a_61_);
lean_dec_ref(v_a_61_);
return v_res_63_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_Check_0__Lake_Check_whichExe(lean_object* v_exe_69_){
_start:
{
lean_object* v___x_71_; lean_object* v___x_72_; lean_object* v___x_73_; lean_object* v___x_74_; lean_object* v___x_75_; lean_object* v___x_76_; lean_object* v___x_77_; lean_object* v___x_78_; uint8_t v___x_79_; uint8_t v___x_80_; lean_object* v___x_81_; lean_object* v___x_82_; 
v___x_71_ = ((lean_object*)(l___private_Lake_CLI_Check_0__Lake_Check_whichExe___closed__0));
v___x_72_ = ((lean_object*)(l___private_Lake_CLI_Check_0__Lake_Check_whichExe___closed__1));
v___x_73_ = lean_unsigned_to_nat(1u);
v___x_74_ = lean_mk_empty_array_with_capacity(v___x_73_);
v___x_75_ = lean_array_push(v___x_74_, v_exe_69_);
v___x_76_ = lean_box(0);
v___x_77_ = lean_unsigned_to_nat(0u);
v___x_78_ = ((lean_object*)(l___private_Lake_CLI_Check_0__Lake_Check_whichExe___closed__2));
v___x_79_ = 1;
v___x_80_ = 0;
v___x_81_ = lean_alloc_ctor(0, 5, 2);
lean_ctor_set(v___x_81_, 0, v___x_71_);
lean_ctor_set(v___x_81_, 1, v___x_72_);
lean_ctor_set(v___x_81_, 2, v___x_75_);
lean_ctor_set(v___x_81_, 3, v___x_76_);
lean_ctor_set(v___x_81_, 4, v___x_78_);
lean_ctor_set_uint8(v___x_81_, sizeof(void*)*5, v___x_79_);
lean_ctor_set_uint8(v___x_81_, sizeof(void*)*5 + 1, v___x_80_);
v___x_82_ = l_IO_Process_output(v___x_81_, v___x_76_);
if (lean_obj_tag(v___x_82_) == 0)
{
lean_object* v_a_83_; lean_object* v___x_85_; uint8_t v_isShared_86_; uint8_t v_isSharedCheck_107_; 
v_a_83_ = lean_ctor_get(v___x_82_, 0);
v_isSharedCheck_107_ = !lean_is_exclusive(v___x_82_);
if (v_isSharedCheck_107_ == 0)
{
v___x_85_ = v___x_82_;
v_isShared_86_ = v_isSharedCheck_107_;
goto v_resetjp_84_;
}
else
{
lean_inc(v_a_83_);
lean_dec(v___x_82_);
v___x_85_ = lean_box(0);
v_isShared_86_ = v_isSharedCheck_107_;
goto v_resetjp_84_;
}
v_resetjp_84_:
{
uint32_t v_exitCode_87_; lean_object* v_stdout_88_; uint32_t v___x_89_; uint8_t v___x_90_; 
v_exitCode_87_ = lean_ctor_get_uint32(v_a_83_, sizeof(void*)*2);
v_stdout_88_ = lean_ctor_get(v_a_83_, 0);
lean_inc_ref(v_stdout_88_);
lean_dec(v_a_83_);
v___x_89_ = 0;
v___x_90_ = lean_uint32_dec_eq(v_exitCode_87_, v___x_89_);
if (v___x_90_ == 0)
{
lean_object* v___x_92_; 
lean_dec_ref(v_stdout_88_);
if (v_isShared_86_ == 0)
{
lean_ctor_set(v___x_85_, 0, v___x_76_);
v___x_92_ = v___x_85_;
goto v_reusejp_91_;
}
else
{
lean_object* v_reuseFailAlloc_93_; 
v_reuseFailAlloc_93_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_93_, 0, v___x_76_);
v___x_92_ = v_reuseFailAlloc_93_;
goto v_reusejp_91_;
}
v_reusejp_91_:
{
return v___x_92_;
}
}
else
{
lean_object* v___x_94_; lean_object* v___x_95_; lean_object* v___x_96_; lean_object* v___x_97_; lean_object* v___x_98_; uint8_t v___x_99_; 
v___x_94_ = lean_string_utf8_byte_size(v_stdout_88_);
v___x_95_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_95_, 0, v_stdout_88_);
lean_ctor_set(v___x_95_, 1, v___x_77_);
lean_ctor_set(v___x_95_, 2, v___x_94_);
v___x_96_ = l_String_Slice_trimAscii(v___x_95_);
v___x_97_ = l_String_Slice_toString(v___x_96_);
lean_dec_ref(v___x_96_);
v___x_98_ = lean_string_utf8_byte_size(v___x_97_);
v___x_99_ = lean_nat_dec_eq(v___x_98_, v___x_77_);
if (v___x_99_ == 0)
{
lean_object* v___x_100_; lean_object* v___x_102_; 
v___x_100_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_100_, 0, v___x_97_);
if (v_isShared_86_ == 0)
{
lean_ctor_set(v___x_85_, 0, v___x_100_);
v___x_102_ = v___x_85_;
goto v_reusejp_101_;
}
else
{
lean_object* v_reuseFailAlloc_103_; 
v_reuseFailAlloc_103_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_103_, 0, v___x_100_);
v___x_102_ = v_reuseFailAlloc_103_;
goto v_reusejp_101_;
}
v_reusejp_101_:
{
return v___x_102_;
}
}
else
{
lean_object* v___x_105_; 
lean_dec_ref(v___x_97_);
if (v_isShared_86_ == 0)
{
lean_ctor_set(v___x_85_, 0, v___x_76_);
v___x_105_ = v___x_85_;
goto v_reusejp_104_;
}
else
{
lean_object* v_reuseFailAlloc_106_; 
v_reuseFailAlloc_106_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_106_, 0, v___x_76_);
v___x_105_ = v_reuseFailAlloc_106_;
goto v_reusejp_104_;
}
v_reusejp_104_:
{
return v___x_105_;
}
}
}
}
}
else
{
lean_object* v___x_109_; uint8_t v_isShared_110_; uint8_t v_isSharedCheck_114_; 
v_isSharedCheck_114_ = !lean_is_exclusive(v___x_82_);
if (v_isSharedCheck_114_ == 0)
{
lean_object* v_unused_115_; 
v_unused_115_ = lean_ctor_get(v___x_82_, 0);
lean_dec(v_unused_115_);
v___x_109_ = v___x_82_;
v_isShared_110_ = v_isSharedCheck_114_;
goto v_resetjp_108_;
}
else
{
lean_dec(v___x_82_);
v___x_109_ = lean_box(0);
v_isShared_110_ = v_isSharedCheck_114_;
goto v_resetjp_108_;
}
v_resetjp_108_:
{
lean_object* v___x_112_; 
if (v_isShared_110_ == 0)
{
lean_ctor_set_tag(v___x_109_, 0);
lean_ctor_set(v___x_109_, 0, v___x_76_);
v___x_112_ = v___x_109_;
goto v_reusejp_111_;
}
else
{
lean_object* v_reuseFailAlloc_113_; 
v_reuseFailAlloc_113_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_113_, 0, v___x_76_);
v___x_112_ = v_reuseFailAlloc_113_;
goto v_reusejp_111_;
}
v_reusejp_111_:
{
return v___x_112_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_Check_0__Lake_Check_whichExe___boxed(lean_object* v_exe_116_, lean_object* v_a_117_){
_start:
{
lean_object* v_res_118_; 
v_res_118_ = l___private_Lake_CLI_Check_0__Lake_Check_whichExe(v_exe_116_);
return v_res_118_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_Check_0__Lake_Check_missingSandboxError(lean_object* v_cmd_122_, lean_object* v_exe_123_){
_start:
{
lean_object* v___x_124_; lean_object* v___x_125_; lean_object* v___x_126_; lean_object* v___x_127_; lean_object* v___x_128_; lean_object* v___x_129_; lean_object* v___x_130_; 
v___x_124_ = ((lean_object*)(l___private_Lake_CLI_Check_0__Lake_Check_missingSandboxError___closed__0));
v___x_125_ = lean_string_append(v___x_124_, v_cmd_122_);
v___x_126_ = ((lean_object*)(l___private_Lake_CLI_Check_0__Lake_Check_missingSandboxError___closed__1));
v___x_127_ = lean_string_append(v___x_125_, v___x_126_);
v___x_128_ = lean_string_append(v___x_127_, v_exe_123_);
v___x_129_ = ((lean_object*)(l___private_Lake_CLI_Check_0__Lake_Check_missingSandboxError___closed__2));
v___x_130_ = lean_string_append(v___x_128_, v___x_129_);
return v___x_130_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_Check_0__Lake_Check_missingSandboxError___boxed(lean_object* v_cmd_131_, lean_object* v_exe_132_){
_start:
{
lean_object* v_res_133_; 
v_res_133_ = l___private_Lake_CLI_Check_0__Lake_Check_missingSandboxError(v_cmd_131_, v_exe_132_);
lean_dec_ref(v_exe_132_);
lean_dec_ref(v_cmd_131_);
return v_res_133_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_Check_0__Lake_Check_sandboxEnv_spec__1(lean_object* v_as_134_, size_t v_sz_135_, size_t v_i_136_, lean_object* v_b_137_){
_start:
{
lean_object* v_a_140_; uint8_t v___x_144_; 
v___x_144_ = lean_usize_dec_lt(v_i_136_, v_sz_135_);
if (v___x_144_ == 0)
{
lean_object* v___x_145_; 
v___x_145_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_145_, 0, v_b_137_);
return v___x_145_;
}
else
{
lean_object* v_a_146_; lean_object* v___x_147_; 
v_a_146_ = lean_array_uget_borrowed(v_as_134_, v_i_136_);
v___x_147_ = lean_io_getenv(v_a_146_);
if (lean_obj_tag(v___x_147_) == 1)
{
lean_object* v_val_148_; lean_object* v___x_149_; lean_object* v___x_150_; 
v_val_148_ = lean_ctor_get(v___x_147_, 0);
lean_inc(v_val_148_);
lean_dec_ref_known(v___x_147_, 1);
lean_inc(v_a_146_);
v___x_149_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_149_, 0, v_a_146_);
lean_ctor_set(v___x_149_, 1, v_val_148_);
v___x_150_ = lean_array_push(v_b_137_, v___x_149_);
v_a_140_ = v___x_150_;
goto v___jp_139_;
}
else
{
lean_dec(v___x_147_);
v_a_140_ = v_b_137_;
goto v___jp_139_;
}
}
v___jp_139_:
{
size_t v___x_141_; size_t v___x_142_; 
v___x_141_ = ((size_t)1ULL);
v___x_142_ = lean_usize_add(v_i_136_, v___x_141_);
v_i_136_ = v___x_142_;
v_b_137_ = v_a_140_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_Check_0__Lake_Check_sandboxEnv_spec__1___boxed(lean_object* v_as_151_, lean_object* v_sz_152_, lean_object* v_i_153_, lean_object* v_b_154_, lean_object* v___y_155_){
_start:
{
size_t v_sz_boxed_156_; size_t v_i_boxed_157_; lean_object* v_res_158_; 
v_sz_boxed_156_ = lean_unbox_usize(v_sz_152_);
lean_dec(v_sz_152_);
v_i_boxed_157_ = lean_unbox_usize(v_i_153_);
lean_dec(v_i_153_);
v_res_158_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_Check_0__Lake_Check_sandboxEnv_spec__1(v_as_151_, v_sz_boxed_156_, v_i_boxed_157_, v_b_154_);
lean_dec_ref(v_as_151_);
return v_res_158_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_Check_0__Lake_Check_sandboxEnv_spec__0(lean_object* v_fst_159_, lean_object* v_as_160_, size_t v_i_161_, size_t v_stop_162_, lean_object* v_b_163_){
_start:
{
lean_object* v___y_165_; uint8_t v___x_169_; 
v___x_169_ = lean_usize_dec_eq(v_i_161_, v_stop_162_);
if (v___x_169_ == 0)
{
lean_object* v___x_170_; lean_object* v_fst_171_; uint8_t v___x_172_; 
v___x_170_ = lean_array_uget_borrowed(v_as_160_, v_i_161_);
v_fst_171_ = lean_ctor_get(v___x_170_, 0);
v___x_172_ = lean_string_dec_eq(v_fst_171_, v_fst_159_);
if (v___x_172_ == 0)
{
lean_object* v___x_173_; 
lean_inc(v___x_170_);
v___x_173_ = lean_array_push(v_b_163_, v___x_170_);
v___y_165_ = v___x_173_;
goto v___jp_164_;
}
else
{
v___y_165_ = v_b_163_;
goto v___jp_164_;
}
}
else
{
return v_b_163_;
}
v___jp_164_:
{
size_t v___x_166_; size_t v___x_167_; 
v___x_166_ = ((size_t)1ULL);
v___x_167_ = lean_usize_add(v_i_161_, v___x_166_);
v_i_161_ = v___x_167_;
v_b_163_ = v___y_165_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_Check_0__Lake_Check_sandboxEnv_spec__0___boxed(lean_object* v_fst_174_, lean_object* v_as_175_, lean_object* v_i_176_, lean_object* v_stop_177_, lean_object* v_b_178_){
_start:
{
size_t v_i_boxed_179_; size_t v_stop_boxed_180_; lean_object* v_res_181_; 
v_i_boxed_179_ = lean_unbox_usize(v_i_176_);
lean_dec(v_i_176_);
v_stop_boxed_180_ = lean_unbox_usize(v_stop_177_);
lean_dec(v_stop_177_);
v_res_181_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_Check_0__Lake_Check_sandboxEnv_spec__0(v_fst_174_, v_as_175_, v_i_boxed_179_, v_stop_boxed_180_, v_b_178_);
lean_dec_ref(v_as_175_);
lean_dec_ref(v_fst_174_);
return v_res_181_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_Check_0__Lake_Check_sandboxEnv_spec__2(lean_object* v_as_184_, size_t v_sz_185_, size_t v_i_186_, lean_object* v_b_187_){
_start:
{
lean_object* v_a_190_; uint8_t v___x_194_; 
v___x_194_ = lean_usize_dec_lt(v_i_186_, v_sz_185_);
if (v___x_194_ == 0)
{
lean_object* v___x_195_; 
v___x_195_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_195_, 0, v_b_187_);
return v___x_195_;
}
else
{
lean_object* v_a_196_; lean_object* v_fst_197_; lean_object* v_snd_198_; lean_object* v___x_200_; uint8_t v_isShared_201_; uint8_t v_isSharedCheck_220_; 
v_a_196_ = lean_array_uget(v_as_184_, v_i_186_);
v_fst_197_ = lean_ctor_get(v_a_196_, 0);
v_snd_198_ = lean_ctor_get(v_a_196_, 1);
v_isSharedCheck_220_ = !lean_is_exclusive(v_a_196_);
if (v_isSharedCheck_220_ == 0)
{
v___x_200_ = v_a_196_;
v_isShared_201_ = v_isSharedCheck_220_;
goto v_resetjp_199_;
}
else
{
lean_inc(v_snd_198_);
lean_inc(v_fst_197_);
lean_dec(v_a_196_);
v___x_200_ = lean_box(0);
v_isShared_201_ = v_isSharedCheck_220_;
goto v_resetjp_199_;
}
v_resetjp_199_:
{
lean_object* v___y_203_; lean_object* v___x_209_; lean_object* v___x_210_; lean_object* v___x_211_; uint8_t v___x_212_; 
v___x_209_ = lean_unsigned_to_nat(0u);
v___x_210_ = lean_array_get_size(v_b_187_);
v___x_211_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_Check_0__Lake_Check_sandboxEnv_spec__2___closed__0));
v___x_212_ = lean_nat_dec_lt(v___x_209_, v___x_210_);
if (v___x_212_ == 0)
{
lean_dec_ref(v_b_187_);
v___y_203_ = v___x_211_;
goto v___jp_202_;
}
else
{
uint8_t v___x_213_; 
v___x_213_ = lean_nat_dec_le(v___x_210_, v___x_210_);
if (v___x_213_ == 0)
{
if (v___x_212_ == 0)
{
lean_dec_ref(v_b_187_);
v___y_203_ = v___x_211_;
goto v___jp_202_;
}
else
{
size_t v___x_214_; size_t v___x_215_; lean_object* v___x_216_; 
v___x_214_ = ((size_t)0ULL);
v___x_215_ = lean_usize_of_nat(v___x_210_);
v___x_216_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_Check_0__Lake_Check_sandboxEnv_spec__0(v_fst_197_, v_b_187_, v___x_214_, v___x_215_, v___x_211_);
lean_dec_ref(v_b_187_);
v___y_203_ = v___x_216_;
goto v___jp_202_;
}
}
else
{
size_t v___x_217_; size_t v___x_218_; lean_object* v___x_219_; 
v___x_217_ = ((size_t)0ULL);
v___x_218_ = lean_usize_of_nat(v___x_210_);
v___x_219_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_Check_0__Lake_Check_sandboxEnv_spec__0(v_fst_197_, v_b_187_, v___x_217_, v___x_218_, v___x_211_);
lean_dec_ref(v_b_187_);
v___y_203_ = v___x_219_;
goto v___jp_202_;
}
}
v___jp_202_:
{
if (lean_obj_tag(v_snd_198_) == 1)
{
lean_object* v_val_204_; lean_object* v___x_206_; 
v_val_204_ = lean_ctor_get(v_snd_198_, 0);
lean_inc(v_val_204_);
lean_dec_ref_known(v_snd_198_, 1);
if (v_isShared_201_ == 0)
{
lean_ctor_set(v___x_200_, 1, v_val_204_);
v___x_206_ = v___x_200_;
goto v_reusejp_205_;
}
else
{
lean_object* v_reuseFailAlloc_208_; 
v_reuseFailAlloc_208_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_208_, 0, v_fst_197_);
lean_ctor_set(v_reuseFailAlloc_208_, 1, v_val_204_);
v___x_206_ = v_reuseFailAlloc_208_;
goto v_reusejp_205_;
}
v_reusejp_205_:
{
lean_object* v___x_207_; 
v___x_207_ = lean_array_push(v___y_203_, v___x_206_);
v_a_190_ = v___x_207_;
goto v___jp_189_;
}
}
else
{
lean_del_object(v___x_200_);
lean_dec(v_snd_198_);
lean_dec(v_fst_197_);
v_a_190_ = v___y_203_;
goto v___jp_189_;
}
}
}
}
v___jp_189_:
{
size_t v___x_191_; size_t v___x_192_; 
v___x_191_ = ((size_t)1ULL);
v___x_192_ = lean_usize_add(v_i_186_, v___x_191_);
v_i_186_ = v___x_192_;
v_b_187_ = v_a_190_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_Check_0__Lake_Check_sandboxEnv_spec__2___boxed(lean_object* v_as_221_, lean_object* v_sz_222_, lean_object* v_i_223_, lean_object* v_b_224_, lean_object* v___y_225_){
_start:
{
size_t v_sz_boxed_226_; size_t v_i_boxed_227_; lean_object* v_res_228_; 
v_sz_boxed_226_ = lean_unbox_usize(v_sz_222_);
lean_dec(v_sz_222_);
v_i_boxed_227_ = lean_unbox_usize(v_i_223_);
lean_dec(v_i_223_);
v_res_228_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_Check_0__Lake_Check_sandboxEnv_spec__2(v_as_221_, v_sz_boxed_226_, v_i_boxed_227_, v_b_224_);
lean_dec_ref(v_as_221_);
return v_res_228_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_Check_0__Lake_Check_sandboxEnv(lean_object* v_spawnArgs_229_){
_start:
{
lean_object* v_envPass_231_; lean_object* v_envOverride_232_; lean_object* v_env_233_; size_t v_sz_234_; size_t v___x_235_; lean_object* v___x_236_; 
v_envPass_231_ = lean_ctor_get(v_spawnArgs_229_, 2);
v_envOverride_232_ = lean_ctor_get(v_spawnArgs_229_, 3);
v_env_233_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_Check_0__Lake_Check_sandboxEnv_spec__2___closed__0));
v_sz_234_ = lean_array_size(v_envPass_231_);
v___x_235_ = ((size_t)0ULL);
v___x_236_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_Check_0__Lake_Check_sandboxEnv_spec__1(v_envPass_231_, v_sz_234_, v___x_235_, v_env_233_);
if (lean_obj_tag(v___x_236_) == 0)
{
lean_object* v_a_237_; size_t v_sz_238_; lean_object* v___x_239_; 
v_a_237_ = lean_ctor_get(v___x_236_, 0);
lean_inc(v_a_237_);
lean_dec_ref_known(v___x_236_, 1);
v_sz_238_ = lean_array_size(v_envOverride_232_);
v___x_239_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_CLI_Check_0__Lake_Check_sandboxEnv_spec__2(v_envOverride_232_, v_sz_238_, v___x_235_, v_a_237_);
return v___x_239_;
}
else
{
return v___x_236_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_Check_0__Lake_Check_sandboxEnv___boxed(lean_object* v_spawnArgs_240_, lean_object* v_a_241_){
_start:
{
lean_object* v_res_242_; 
v_res_242_ = l___private_Lake_CLI_Check_0__Lake_Check_sandboxEnv(v_spawnArgs_240_);
lean_dec_ref(v_spawnArgs_240_);
return v_res_242_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs_spec__3___closed__1(void){
_start:
{
lean_object* v___x_244_; lean_object* v___x_245_; lean_object* v___x_246_; lean_object* v___x_247_; 
v___x_244_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs_spec__3___closed__0));
v___x_245_ = lean_unsigned_to_nat(2u);
v___x_246_ = lean_mk_empty_array_with_capacity(v___x_245_);
v___x_247_ = lean_array_push(v___x_246_, v___x_244_);
return v___x_247_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs_spec__3(lean_object* v_as_248_, size_t v_i_249_, size_t v_stop_250_, lean_object* v_b_251_){
_start:
{
uint8_t v___x_252_; 
v___x_252_ = lean_usize_dec_eq(v_i_249_, v_stop_250_);
if (v___x_252_ == 0)
{
lean_object* v___x_253_; lean_object* v___x_254_; lean_object* v___x_255_; lean_object* v___x_256_; size_t v___x_257_; size_t v___x_258_; 
v___x_253_ = lean_array_uget_borrowed(v_as_248_, v_i_249_);
v___x_254_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs_spec__3___closed__1, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs_spec__3___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs_spec__3___closed__1);
lean_inc(v___x_253_);
v___x_255_ = lean_array_push(v___x_254_, v___x_253_);
v___x_256_ = l_Array_append___redArg(v_b_251_, v___x_255_);
lean_dec_ref(v___x_255_);
v___x_257_ = ((size_t)1ULL);
v___x_258_ = lean_usize_add(v_i_249_, v___x_257_);
v_i_249_ = v___x_258_;
v_b_251_ = v___x_256_;
goto _start;
}
else
{
return v_b_251_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs_spec__3___boxed(lean_object* v_as_260_, lean_object* v_i_261_, lean_object* v_stop_262_, lean_object* v_b_263_){
_start:
{
size_t v_i_boxed_264_; size_t v_stop_boxed_265_; lean_object* v_res_266_; 
v_i_boxed_264_ = lean_unbox_usize(v_i_261_);
lean_dec(v_i_261_);
v_stop_boxed_265_ = lean_unbox_usize(v_stop_262_);
lean_dec(v_stop_262_);
v_res_266_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs_spec__3(v_as_260_, v_i_boxed_264_, v_stop_boxed_265_, v_b_263_);
lean_dec_ref(v_as_260_);
return v_res_266_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs_spec__2___closed__1(void){
_start:
{
lean_object* v___x_268_; lean_object* v___x_269_; lean_object* v___x_270_; lean_object* v___x_271_; 
v___x_268_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs_spec__2___closed__0));
v___x_269_ = lean_unsigned_to_nat(3u);
v___x_270_ = lean_mk_empty_array_with_capacity(v___x_269_);
v___x_271_ = lean_array_push(v___x_270_, v___x_268_);
return v___x_271_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs_spec__2(lean_object* v_as_272_, size_t v_i_273_, size_t v_stop_274_, lean_object* v_b_275_){
_start:
{
uint8_t v___x_276_; 
v___x_276_ = lean_usize_dec_eq(v_i_273_, v_stop_274_);
if (v___x_276_ == 0)
{
lean_object* v___x_277_; lean_object* v___x_278_; lean_object* v___x_279_; lean_object* v___x_280_; lean_object* v___x_281_; size_t v___x_282_; size_t v___x_283_; 
v___x_277_ = lean_array_uget_borrowed(v_as_272_, v_i_273_);
v___x_278_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs_spec__2___closed__1, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs_spec__2___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs_spec__2___closed__1);
lean_inc_n(v___x_277_, 2);
v___x_279_ = lean_array_push(v___x_278_, v___x_277_);
v___x_280_ = lean_array_push(v___x_279_, v___x_277_);
v___x_281_ = l_Array_append___redArg(v_b_275_, v___x_280_);
lean_dec_ref(v___x_280_);
v___x_282_ = ((size_t)1ULL);
v___x_283_ = lean_usize_add(v_i_273_, v___x_282_);
v_i_273_ = v___x_283_;
v_b_275_ = v___x_281_;
goto _start;
}
else
{
return v_b_275_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs_spec__2___boxed(lean_object* v_as_285_, lean_object* v_i_286_, lean_object* v_stop_287_, lean_object* v_b_288_){
_start:
{
size_t v_i_boxed_289_; size_t v_stop_boxed_290_; lean_object* v_res_291_; 
v_i_boxed_289_ = lean_unbox_usize(v_i_286_);
lean_dec(v_i_286_);
v_stop_boxed_290_ = lean_unbox_usize(v_stop_287_);
lean_dec(v_stop_287_);
v_res_291_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs_spec__2(v_as_285_, v_i_boxed_289_, v_stop_boxed_290_, v_b_288_);
lean_dec_ref(v_as_285_);
return v_res_291_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs_spec__1___closed__1(void){
_start:
{
lean_object* v___x_293_; lean_object* v___x_294_; lean_object* v___x_295_; lean_object* v___x_296_; 
v___x_293_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs_spec__1___closed__0));
v___x_294_ = lean_unsigned_to_nat(3u);
v___x_295_ = lean_mk_empty_array_with_capacity(v___x_294_);
v___x_296_ = lean_array_push(v___x_295_, v___x_293_);
return v___x_296_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs_spec__1(lean_object* v_as_297_, size_t v_i_298_, size_t v_stop_299_, lean_object* v_b_300_){
_start:
{
uint8_t v___x_301_; 
v___x_301_ = lean_usize_dec_eq(v_i_298_, v_stop_299_);
if (v___x_301_ == 0)
{
lean_object* v___x_302_; lean_object* v___x_303_; lean_object* v___x_304_; lean_object* v___x_305_; lean_object* v___x_306_; size_t v___x_307_; size_t v___x_308_; 
v___x_302_ = lean_array_uget_borrowed(v_as_297_, v_i_298_);
v___x_303_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs_spec__1___closed__1, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs_spec__1___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs_spec__1___closed__1);
lean_inc_n(v___x_302_, 2);
v___x_304_ = lean_array_push(v___x_303_, v___x_302_);
v___x_305_ = lean_array_push(v___x_304_, v___x_302_);
v___x_306_ = l_Array_append___redArg(v_b_300_, v___x_305_);
lean_dec_ref(v___x_305_);
v___x_307_ = ((size_t)1ULL);
v___x_308_ = lean_usize_add(v_i_298_, v___x_307_);
v_i_298_ = v___x_308_;
v_b_300_ = v___x_306_;
goto _start;
}
else
{
return v_b_300_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs_spec__1___boxed(lean_object* v_as_310_, lean_object* v_i_311_, lean_object* v_stop_312_, lean_object* v_b_313_){
_start:
{
size_t v_i_boxed_314_; size_t v_stop_boxed_315_; lean_object* v_res_316_; 
v_i_boxed_314_ = lean_unbox_usize(v_i_311_);
lean_dec(v_i_311_);
v_stop_boxed_315_ = lean_unbox_usize(v_stop_312_);
lean_dec(v_stop_312_);
v_res_316_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs_spec__1(v_as_310_, v_i_boxed_314_, v_stop_boxed_315_, v_b_313_);
lean_dec_ref(v_as_310_);
return v_res_316_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs_spec__0___closed__1(void){
_start:
{
lean_object* v___x_318_; lean_object* v___x_319_; lean_object* v___x_320_; lean_object* v___x_321_; 
v___x_318_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs_spec__0___closed__0));
v___x_319_ = lean_unsigned_to_nat(3u);
v___x_320_ = lean_mk_empty_array_with_capacity(v___x_319_);
v___x_321_ = lean_array_push(v___x_320_, v___x_318_);
return v___x_321_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs_spec__0(lean_object* v_as_322_, size_t v_i_323_, size_t v_stop_324_, lean_object* v_b_325_){
_start:
{
uint8_t v___x_326_; 
v___x_326_ = lean_usize_dec_eq(v_i_323_, v_stop_324_);
if (v___x_326_ == 0)
{
lean_object* v___x_327_; lean_object* v_fst_328_; lean_object* v_snd_329_; lean_object* v___x_330_; lean_object* v___x_331_; lean_object* v___x_332_; lean_object* v___x_333_; size_t v___x_334_; size_t v___x_335_; 
v___x_327_ = lean_array_uget_borrowed(v_as_322_, v_i_323_);
v_fst_328_ = lean_ctor_get(v___x_327_, 0);
v_snd_329_ = lean_ctor_get(v___x_327_, 1);
v___x_330_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs_spec__0___closed__1, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs_spec__0___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs_spec__0___closed__1);
lean_inc(v_fst_328_);
v___x_331_ = lean_array_push(v___x_330_, v_fst_328_);
lean_inc(v_snd_329_);
v___x_332_ = lean_array_push(v___x_331_, v_snd_329_);
v___x_333_ = l_Array_append___redArg(v_b_325_, v___x_332_);
lean_dec_ref(v___x_332_);
v___x_334_ = ((size_t)1ULL);
v___x_335_ = lean_usize_add(v_i_323_, v___x_334_);
v_i_323_ = v___x_335_;
v_b_325_ = v___x_333_;
goto _start;
}
else
{
return v_b_325_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs_spec__0___boxed(lean_object* v_as_337_, lean_object* v_i_338_, lean_object* v_stop_339_, lean_object* v_b_340_){
_start:
{
size_t v_i_boxed_341_; size_t v_stop_boxed_342_; lean_object* v_res_343_; 
v_i_boxed_341_ = lean_unbox_usize(v_i_338_);
lean_dec(v_i_338_);
v_stop_boxed_342_ = lean_unbox_usize(v_stop_339_);
lean_dec(v_stop_339_);
v_res_343_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs_spec__0(v_as_337_, v_i_boxed_341_, v_stop_boxed_342_, v_b_340_);
lean_dec_ref(v_as_337_);
return v_res_343_;
}
}
static lean_object* _init_l___private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs___closed__2(void){
_start:
{
lean_object* v___x_346_; lean_object* v___x_347_; lean_object* v___x_348_; lean_object* v___x_349_; 
v___x_346_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs_spec__2___closed__0));
v___x_347_ = lean_unsigned_to_nat(18u);
v___x_348_ = lean_mk_empty_array_with_capacity(v___x_347_);
v___x_349_ = lean_array_push(v___x_348_, v___x_346_);
return v___x_349_;
}
}
static lean_object* _init_l___private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs___closed__3(void){
_start:
{
lean_object* v___x_350_; lean_object* v___x_351_; lean_object* v___x_352_; 
v___x_350_ = ((lean_object*)(l___private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs___closed__0));
v___x_351_ = lean_obj_once(&l___private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs___closed__2, &l___private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs___closed__2_once, _init_l___private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs___closed__2);
v___x_352_ = lean_array_push(v___x_351_, v___x_350_);
return v___x_352_;
}
}
static lean_object* _init_l___private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs___closed__4(void){
_start:
{
lean_object* v___x_353_; lean_object* v___x_354_; lean_object* v___x_355_; 
v___x_353_ = ((lean_object*)(l___private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs___closed__0));
v___x_354_ = lean_obj_once(&l___private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs___closed__3, &l___private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs___closed__3_once, _init_l___private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs___closed__3);
v___x_355_ = lean_array_push(v___x_354_, v___x_353_);
return v___x_355_;
}
}
static lean_object* _init_l___private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs___closed__5(void){
_start:
{
lean_object* v___x_356_; lean_object* v___x_357_; lean_object* v___x_358_; 
v___x_356_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs_spec__3___closed__0));
v___x_357_ = lean_obj_once(&l___private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs___closed__4, &l___private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs___closed__4_once, _init_l___private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs___closed__4);
v___x_358_ = lean_array_push(v___x_357_, v___x_356_);
return v___x_358_;
}
}
static lean_object* _init_l___private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs___closed__6(void){
_start:
{
lean_object* v___x_359_; lean_object* v___x_360_; lean_object* v___x_361_; 
v___x_359_ = ((lean_object*)(l___private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs___closed__1));
v___x_360_ = lean_obj_once(&l___private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs___closed__5, &l___private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs___closed__5_once, _init_l___private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs___closed__5);
v___x_361_ = lean_array_push(v___x_360_, v___x_359_);
return v___x_361_;
}
}
static lean_object* _init_l___private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs___closed__7(void){
_start:
{
lean_object* v___x_362_; lean_object* v___x_363_; lean_object* v___x_364_; 
v___x_362_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs_spec__3___closed__0));
v___x_363_ = lean_obj_once(&l___private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs___closed__6, &l___private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs___closed__6_once, _init_l___private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs___closed__6);
v___x_364_ = lean_array_push(v___x_363_, v___x_362_);
return v___x_364_;
}
}
static lean_object* _init_l___private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs___closed__9(void){
_start:
{
lean_object* v___x_366_; lean_object* v___x_367_; lean_object* v___x_368_; lean_object* v___x_369_; 
v___x_366_ = ((lean_object*)(l___private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs___closed__8));
v___x_367_ = lean_unsigned_to_nat(2u);
v___x_368_ = lean_mk_empty_array_with_capacity(v___x_367_);
v___x_369_ = lean_array_push(v___x_368_, v___x_366_);
return v___x_369_;
}
}
static lean_object* _init_l___private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs___closed__11(void){
_start:
{
lean_object* v___x_371_; lean_object* v___x_372_; lean_object* v___x_373_; lean_object* v___x_374_; 
v___x_371_ = ((lean_object*)(l___private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs___closed__10));
v___x_372_ = lean_unsigned_to_nat(2u);
v___x_373_ = lean_mk_empty_array_with_capacity(v___x_372_);
v___x_374_ = lean_array_push(v___x_373_, v___x_371_);
return v___x_374_;
}
}
static lean_object* _init_l___private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs___closed__13(void){
_start:
{
lean_object* v___x_376_; lean_object* v___x_377_; lean_object* v___x_378_; 
v___x_376_ = ((lean_object*)(l___private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs___closed__12));
v___x_377_ = lean_obj_once(&l___private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs___closed__7, &l___private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs___closed__7_once, _init_l___private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs___closed__7);
v___x_378_ = lean_array_push(v___x_377_, v___x_376_);
return v___x_378_;
}
}
static lean_object* _init_l___private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs___closed__14(void){
_start:
{
lean_object* v___x_379_; lean_object* v___x_380_; lean_object* v___x_381_; 
v___x_379_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs_spec__3___closed__0));
v___x_380_ = lean_obj_once(&l___private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs___closed__13, &l___private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs___closed__13_once, _init_l___private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs___closed__13);
v___x_381_ = lean_array_push(v___x_380_, v___x_379_);
return v___x_381_;
}
}
static lean_object* _init_l___private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs___closed__31(void){
_start:
{
lean_object* v___x_414_; lean_object* v___x_415_; lean_object* v___x_416_; 
v___x_414_ = ((lean_object*)(l___private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs___closed__15));
v___x_415_ = lean_obj_once(&l___private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs___closed__14, &l___private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs___closed__14_once, _init_l___private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs___closed__14);
v___x_416_ = lean_array_push(v___x_415_, v___x_414_);
return v___x_416_;
}
}
static lean_object* _init_l___private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs___closed__32(void){
_start:
{
lean_object* v___x_417_; lean_object* v___x_418_; lean_object* v___x_419_; 
v___x_417_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs_spec__3___closed__0));
v___x_418_ = lean_obj_once(&l___private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs___closed__31, &l___private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs___closed__31_once, _init_l___private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs___closed__31);
v___x_419_ = lean_array_push(v___x_418_, v___x_417_);
return v___x_419_;
}
}
static lean_object* _init_l___private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs___closed__33(void){
_start:
{
lean_object* v___x_420_; lean_object* v___x_421_; lean_object* v___x_422_; 
v___x_420_ = ((lean_object*)(l___private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs___closed__16));
v___x_421_ = lean_obj_once(&l___private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs___closed__32, &l___private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs___closed__32_once, _init_l___private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs___closed__32);
v___x_422_ = lean_array_push(v___x_421_, v___x_420_);
return v___x_422_;
}
}
static lean_object* _init_l___private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs___closed__34(void){
_start:
{
lean_object* v___x_423_; lean_object* v___x_424_; lean_object* v___x_425_; 
v___x_423_ = ((lean_object*)(l___private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs___closed__17));
v___x_424_ = lean_obj_once(&l___private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs___closed__33, &l___private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs___closed__33_once, _init_l___private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs___closed__33);
v___x_425_ = lean_array_push(v___x_424_, v___x_423_);
return v___x_425_;
}
}
static lean_object* _init_l___private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs___closed__35(void){
_start:
{
lean_object* v___x_426_; lean_object* v___x_427_; lean_object* v___x_428_; 
v___x_426_ = ((lean_object*)(l___private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs___closed__18));
v___x_427_ = lean_obj_once(&l___private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs___closed__34, &l___private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs___closed__34_once, _init_l___private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs___closed__34);
v___x_428_ = lean_array_push(v___x_427_, v___x_426_);
return v___x_428_;
}
}
static lean_object* _init_l___private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs___closed__36(void){
_start:
{
lean_object* v___x_429_; lean_object* v___x_430_; lean_object* v___x_431_; 
v___x_429_ = ((lean_object*)(l___private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs___closed__26));
v___x_430_ = lean_obj_once(&l___private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs___closed__35, &l___private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs___closed__35_once, _init_l___private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs___closed__35);
v___x_431_ = lean_array_push(v___x_430_, v___x_429_);
return v___x_431_;
}
}
static lean_object* _init_l___private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs___closed__37(void){
_start:
{
lean_object* v___x_432_; lean_object* v___x_433_; lean_object* v___x_434_; 
v___x_432_ = ((lean_object*)(l___private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs___closed__27));
v___x_433_ = lean_obj_once(&l___private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs___closed__36, &l___private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs___closed__36_once, _init_l___private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs___closed__36);
v___x_434_ = lean_array_push(v___x_433_, v___x_432_);
return v___x_434_;
}
}
static lean_object* _init_l___private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs___closed__38(void){
_start:
{
lean_object* v___x_435_; lean_object* v___x_436_; lean_object* v___x_437_; 
v___x_435_ = ((lean_object*)(l___private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs___closed__28));
v___x_436_ = lean_obj_once(&l___private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs___closed__37, &l___private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs___closed__37_once, _init_l___private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs___closed__37);
v___x_437_ = lean_array_push(v___x_436_, v___x_435_);
return v___x_437_;
}
}
static lean_object* _init_l___private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs___closed__39(void){
_start:
{
lean_object* v___x_438_; lean_object* v___x_439_; lean_object* v___x_440_; 
v___x_438_ = ((lean_object*)(l___private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs___closed__29));
v___x_439_ = lean_obj_once(&l___private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs___closed__38, &l___private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs___closed__38_once, _init_l___private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs___closed__38);
v___x_440_ = lean_array_push(v___x_439_, v___x_438_);
return v___x_440_;
}
}
static lean_object* _init_l___private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs___closed__40(void){
_start:
{
lean_object* v___x_441_; lean_object* v___x_442_; lean_object* v_args_443_; 
v___x_441_ = ((lean_object*)(l___private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs___closed__30));
v___x_442_ = lean_obj_once(&l___private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs___closed__39, &l___private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs___closed__39_once, _init_l___private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs___closed__39);
v_args_443_ = lean_array_push(v___x_442_, v___x_441_);
return v_args_443_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs(lean_object* v_spawnArgs_444_, lean_object* v_env_445_, lean_object* v_projectDir_446_){
_start:
{
lean_object* v_cmd_447_; lean_object* v_args_448_; lean_object* v_readablePaths_449_; lean_object* v_writablePaths_450_; lean_object* v_tmpfsPaths_451_; uint8_t v_network_452_; lean_object* v_cwd_453_; lean_object* v___y_455_; lean_object* v___y_461_; lean_object* v___y_470_; lean_object* v_args_475_; lean_object* v___x_476_; lean_object* v___y_478_; lean_object* v___y_489_; lean_object* v___y_500_; lean_object* v___x_510_; uint8_t v___x_511_; 
v_cmd_447_ = lean_ctor_get(v_spawnArgs_444_, 0);
lean_inc_ref(v_cmd_447_);
v_args_448_ = lean_ctor_get(v_spawnArgs_444_, 1);
lean_inc_ref(v_args_448_);
v_readablePaths_449_ = lean_ctor_get(v_spawnArgs_444_, 4);
lean_inc_ref(v_readablePaths_449_);
v_writablePaths_450_ = lean_ctor_get(v_spawnArgs_444_, 5);
lean_inc_ref(v_writablePaths_450_);
v_tmpfsPaths_451_ = lean_ctor_get(v_spawnArgs_444_, 6);
lean_inc_ref(v_tmpfsPaths_451_);
v_network_452_ = lean_ctor_get_uint8(v_spawnArgs_444_, sizeof(void*)*8);
v_cwd_453_ = lean_ctor_get(v_spawnArgs_444_, 7);
lean_inc(v_cwd_453_);
lean_dec_ref(v_spawnArgs_444_);
v_args_475_ = lean_obj_once(&l___private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs___closed__40, &l___private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs___closed__40_once, _init_l___private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs___closed__40);
v___x_476_ = lean_unsigned_to_nat(0u);
v___x_510_ = lean_array_get_size(v_tmpfsPaths_451_);
v___x_511_ = lean_nat_dec_lt(v___x_476_, v___x_510_);
if (v___x_511_ == 0)
{
lean_dec_ref(v_tmpfsPaths_451_);
v___y_500_ = v_args_475_;
goto v___jp_499_;
}
else
{
uint8_t v___x_512_; 
v___x_512_ = lean_nat_dec_le(v___x_510_, v___x_510_);
if (v___x_512_ == 0)
{
if (v___x_511_ == 0)
{
lean_dec_ref(v_tmpfsPaths_451_);
v___y_500_ = v_args_475_;
goto v___jp_499_;
}
else
{
size_t v___x_513_; size_t v___x_514_; lean_object* v___x_515_; 
v___x_513_ = ((size_t)0ULL);
v___x_514_ = lean_usize_of_nat(v___x_510_);
v___x_515_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs_spec__3(v_tmpfsPaths_451_, v___x_513_, v___x_514_, v_args_475_);
lean_dec_ref(v_tmpfsPaths_451_);
v___y_500_ = v___x_515_;
goto v___jp_499_;
}
}
else
{
size_t v___x_516_; size_t v___x_517_; lean_object* v___x_518_; 
v___x_516_ = ((size_t)0ULL);
v___x_517_ = lean_usize_of_nat(v___x_510_);
v___x_518_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs_spec__3(v_tmpfsPaths_451_, v___x_516_, v___x_517_, v_args_475_);
lean_dec_ref(v_tmpfsPaths_451_);
v___y_500_ = v___x_518_;
goto v___jp_499_;
}
}
v___jp_454_:
{
lean_object* v___x_456_; lean_object* v___x_457_; lean_object* v___x_458_; lean_object* v___x_459_; 
v___x_456_ = lean_obj_once(&l___private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs___closed__9, &l___private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs___closed__9_once, _init_l___private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs___closed__9);
v___x_457_ = lean_array_push(v___x_456_, v_cmd_447_);
v___x_458_ = l_Array_append___redArg(v___y_455_, v___x_457_);
lean_dec_ref(v___x_457_);
v___x_459_ = l_Array_append___redArg(v___x_458_, v_args_448_);
lean_dec_ref(v_args_448_);
return v___x_459_;
}
v___jp_460_:
{
if (lean_obj_tag(v_cwd_453_) == 1)
{
lean_object* v_val_462_; lean_object* v___x_463_; lean_object* v___x_464_; lean_object* v___x_465_; 
lean_dec_ref(v_projectDir_446_);
v_val_462_ = lean_ctor_get(v_cwd_453_, 0);
lean_inc(v_val_462_);
lean_dec_ref_known(v_cwd_453_, 1);
v___x_463_ = lean_obj_once(&l___private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs___closed__11, &l___private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs___closed__11_once, _init_l___private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs___closed__11);
v___x_464_ = lean_array_push(v___x_463_, v_val_462_);
v___x_465_ = l_Array_append___redArg(v___y_461_, v___x_464_);
lean_dec_ref(v___x_464_);
v___y_455_ = v___x_465_;
goto v___jp_454_;
}
else
{
lean_object* v___x_466_; lean_object* v___x_467_; lean_object* v___x_468_; 
lean_dec(v_cwd_453_);
v___x_466_ = lean_obj_once(&l___private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs___closed__11, &l___private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs___closed__11_once, _init_l___private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs___closed__11);
v___x_467_ = lean_array_push(v___x_466_, v_projectDir_446_);
v___x_468_ = l_Array_append___redArg(v___y_461_, v___x_467_);
lean_dec_ref(v___x_467_);
v___y_455_ = v___x_468_;
goto v___jp_454_;
}
}
v___jp_469_:
{
lean_object* v___x_471_; lean_object* v_args_472_; 
v___x_471_ = ((lean_object*)(l___private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs___closed__23));
v_args_472_ = l_Array_append___redArg(v___y_470_, v___x_471_);
if (v_network_452_ == 0)
{
v___y_461_ = v_args_472_;
goto v___jp_460_;
}
else
{
lean_object* v___x_473_; lean_object* v___x_474_; 
v___x_473_ = ((lean_object*)(l___private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs___closed__25));
v___x_474_ = l_Array_append___redArg(v_args_472_, v___x_473_);
v___y_461_ = v___x_474_;
goto v___jp_460_;
}
}
v___jp_477_:
{
lean_object* v___x_479_; uint8_t v___x_480_; 
v___x_479_ = lean_array_get_size(v_env_445_);
v___x_480_ = lean_nat_dec_lt(v___x_476_, v___x_479_);
if (v___x_480_ == 0)
{
v___y_470_ = v___y_478_;
goto v___jp_469_;
}
else
{
uint8_t v___x_481_; 
v___x_481_ = lean_nat_dec_le(v___x_479_, v___x_479_);
if (v___x_481_ == 0)
{
if (v___x_480_ == 0)
{
v___y_470_ = v___y_478_;
goto v___jp_469_;
}
else
{
size_t v___x_482_; size_t v___x_483_; lean_object* v___x_484_; 
v___x_482_ = ((size_t)0ULL);
v___x_483_ = lean_usize_of_nat(v___x_479_);
v___x_484_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs_spec__0(v_env_445_, v___x_482_, v___x_483_, v___y_478_);
v___y_470_ = v___x_484_;
goto v___jp_469_;
}
}
else
{
size_t v___x_485_; size_t v___x_486_; lean_object* v___x_487_; 
v___x_485_ = ((size_t)0ULL);
v___x_486_ = lean_usize_of_nat(v___x_479_);
v___x_487_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs_spec__0(v_env_445_, v___x_485_, v___x_486_, v___y_478_);
v___y_470_ = v___x_487_;
goto v___jp_469_;
}
}
}
v___jp_488_:
{
lean_object* v___x_490_; uint8_t v___x_491_; 
v___x_490_ = lean_array_get_size(v_writablePaths_450_);
v___x_491_ = lean_nat_dec_lt(v___x_476_, v___x_490_);
if (v___x_491_ == 0)
{
lean_dec_ref(v_writablePaths_450_);
v___y_478_ = v___y_489_;
goto v___jp_477_;
}
else
{
uint8_t v___x_492_; 
v___x_492_ = lean_nat_dec_le(v___x_490_, v___x_490_);
if (v___x_492_ == 0)
{
if (v___x_491_ == 0)
{
lean_dec_ref(v_writablePaths_450_);
v___y_478_ = v___y_489_;
goto v___jp_477_;
}
else
{
size_t v___x_493_; size_t v___x_494_; lean_object* v___x_495_; 
v___x_493_ = ((size_t)0ULL);
v___x_494_ = lean_usize_of_nat(v___x_490_);
v___x_495_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs_spec__1(v_writablePaths_450_, v___x_493_, v___x_494_, v___y_489_);
lean_dec_ref(v_writablePaths_450_);
v___y_478_ = v___x_495_;
goto v___jp_477_;
}
}
else
{
size_t v___x_496_; size_t v___x_497_; lean_object* v___x_498_; 
v___x_496_ = ((size_t)0ULL);
v___x_497_ = lean_usize_of_nat(v___x_490_);
v___x_498_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs_spec__1(v_writablePaths_450_, v___x_496_, v___x_497_, v___y_489_);
lean_dec_ref(v_writablePaths_450_);
v___y_478_ = v___x_498_;
goto v___jp_477_;
}
}
}
v___jp_499_:
{
lean_object* v___x_501_; uint8_t v___x_502_; 
v___x_501_ = lean_array_get_size(v_readablePaths_449_);
v___x_502_ = lean_nat_dec_lt(v___x_476_, v___x_501_);
if (v___x_502_ == 0)
{
lean_dec_ref(v_readablePaths_449_);
v___y_489_ = v___y_500_;
goto v___jp_488_;
}
else
{
uint8_t v___x_503_; 
v___x_503_ = lean_nat_dec_le(v___x_501_, v___x_501_);
if (v___x_503_ == 0)
{
if (v___x_502_ == 0)
{
lean_dec_ref(v_readablePaths_449_);
v___y_489_ = v___y_500_;
goto v___jp_488_;
}
else
{
size_t v___x_504_; size_t v___x_505_; lean_object* v___x_506_; 
v___x_504_ = ((size_t)0ULL);
v___x_505_ = lean_usize_of_nat(v___x_501_);
v___x_506_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs_spec__2(v_readablePaths_449_, v___x_504_, v___x_505_, v___y_500_);
lean_dec_ref(v_readablePaths_449_);
v___y_489_ = v___x_506_;
goto v___jp_488_;
}
}
else
{
size_t v___x_507_; size_t v___x_508_; lean_object* v___x_509_; 
v___x_507_ = ((size_t)0ULL);
v___x_508_ = lean_usize_of_nat(v___x_501_);
v___x_509_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs_spec__2(v_readablePaths_449_, v___x_507_, v___x_508_, v___y_500_);
lean_dec_ref(v_readablePaths_449_);
v___y_489_ = v___x_509_;
goto v___jp_488_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs___boxed(lean_object* v_spawnArgs_519_, lean_object* v_env_520_, lean_object* v_projectDir_521_){
_start:
{
lean_object* v_res_522_; 
v_res_522_ = l___private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs(v_spawnArgs_519_, v_env_520_, v_projectDir_521_);
lean_dec_ref(v_env_520_);
return v_res_522_;
}
}
static lean_object* _init_l___private_Lake_CLI_Check_0__Lake_Check_sandboxSpawnArgs___closed__1(void){
_start:
{
lean_object* v___x_524_; lean_object* v___x_525_; lean_object* v___x_526_; lean_object* v___x_527_; 
v___x_524_ = ((lean_object*)(l___private_Lake_CLI_Check_0__Lake_Check_sandboxSpawnArgs___closed__0));
v___x_525_ = lean_unsigned_to_nat(2u);
v___x_526_ = lean_mk_empty_array_with_capacity(v___x_525_);
v___x_527_ = lean_array_push(v___x_526_, v___x_524_);
return v___x_527_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_Check_0__Lake_Check_sandboxSpawnArgs(lean_object* v_spawnArgs_528_, lean_object* v_a_529_){
_start:
{
lean_object* v___x_531_; 
v___x_531_ = l___private_Lake_CLI_Check_0__Lake_Check_sandboxEnv(v_spawnArgs_528_);
if (lean_obj_tag(v___x_531_) == 0)
{
lean_object* v_a_532_; lean_object* v___x_534_; uint8_t v_isShared_535_; uint8_t v_isSharedCheck_552_; 
v_a_532_ = lean_ctor_get(v___x_531_, 0);
v_isSharedCheck_552_ = !lean_is_exclusive(v___x_531_);
if (v_isSharedCheck_552_ == 0)
{
v___x_534_ = v___x_531_;
v_isShared_535_ = v_isSharedCheck_552_;
goto v_resetjp_533_;
}
else
{
lean_inc(v_a_532_);
lean_dec(v___x_531_);
v___x_534_ = lean_box(0);
v_isShared_535_ = v_isSharedCheck_552_;
goto v_resetjp_533_;
}
v_resetjp_533_:
{
lean_object* v_projectDir_536_; lean_object* v_whichSandbox_537_; lean_object* v_whichEnvBin_538_; lean_object* v___x_539_; lean_object* v___x_540_; lean_object* v___x_541_; lean_object* v___x_542_; lean_object* v___x_543_; lean_object* v___x_544_; lean_object* v___x_545_; uint8_t v___x_546_; uint8_t v___x_547_; lean_object* v___x_548_; lean_object* v___x_550_; 
v_projectDir_536_ = lean_ctor_get(v_a_529_, 0);
v_whichSandbox_537_ = lean_ctor_get(v_a_529_, 9);
v_whichEnvBin_538_ = lean_ctor_get(v_a_529_, 14);
v___x_539_ = ((lean_object*)(l___private_Lake_CLI_Check_0__Lake_Check_whichExe___closed__0));
v___x_540_ = lean_obj_once(&l___private_Lake_CLI_Check_0__Lake_Check_sandboxSpawnArgs___closed__1, &l___private_Lake_CLI_Check_0__Lake_Check_sandboxSpawnArgs___closed__1_once, _init_l___private_Lake_CLI_Check_0__Lake_Check_sandboxSpawnArgs___closed__1);
lean_inc_ref(v_whichSandbox_537_);
v___x_541_ = lean_array_push(v___x_540_, v_whichSandbox_537_);
lean_inc_ref_n(v_projectDir_536_, 2);
v___x_542_ = l___private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs(v_spawnArgs_528_, v_a_532_, v_projectDir_536_);
lean_dec(v_a_532_);
v___x_543_ = l_Array_append___redArg(v___x_541_, v___x_542_);
lean_dec_ref(v___x_542_);
v___x_544_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_544_, 0, v_projectDir_536_);
v___x_545_ = ((lean_object*)(l___private_Lake_CLI_Check_0__Lake_Check_whichExe___closed__2));
v___x_546_ = 1;
v___x_547_ = 0;
lean_inc_ref(v_whichEnvBin_538_);
v___x_548_ = lean_alloc_ctor(0, 5, 2);
lean_ctor_set(v___x_548_, 0, v___x_539_);
lean_ctor_set(v___x_548_, 1, v_whichEnvBin_538_);
lean_ctor_set(v___x_548_, 2, v___x_543_);
lean_ctor_set(v___x_548_, 3, v___x_544_);
lean_ctor_set(v___x_548_, 4, v___x_545_);
lean_ctor_set_uint8(v___x_548_, sizeof(void*)*5, v___x_546_);
lean_ctor_set_uint8(v___x_548_, sizeof(void*)*5 + 1, v___x_547_);
if (v_isShared_535_ == 0)
{
lean_ctor_set(v___x_534_, 0, v___x_548_);
v___x_550_ = v___x_534_;
goto v_reusejp_549_;
}
else
{
lean_object* v_reuseFailAlloc_551_; 
v_reuseFailAlloc_551_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_551_, 0, v___x_548_);
v___x_550_ = v_reuseFailAlloc_551_;
goto v_reusejp_549_;
}
v_reusejp_549_:
{
return v___x_550_;
}
}
}
else
{
lean_object* v_a_553_; lean_object* v___x_555_; uint8_t v_isShared_556_; uint8_t v_isSharedCheck_560_; 
lean_dec_ref(v_spawnArgs_528_);
v_a_553_ = lean_ctor_get(v___x_531_, 0);
v_isSharedCheck_560_ = !lean_is_exclusive(v___x_531_);
if (v_isSharedCheck_560_ == 0)
{
v___x_555_ = v___x_531_;
v_isShared_556_ = v_isSharedCheck_560_;
goto v_resetjp_554_;
}
else
{
lean_inc(v_a_553_);
lean_dec(v___x_531_);
v___x_555_ = lean_box(0);
v_isShared_556_ = v_isSharedCheck_560_;
goto v_resetjp_554_;
}
v_resetjp_554_:
{
lean_object* v___x_558_; 
if (v_isShared_556_ == 0)
{
v___x_558_ = v___x_555_;
goto v_reusejp_557_;
}
else
{
lean_object* v_reuseFailAlloc_559_; 
v_reuseFailAlloc_559_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_559_, 0, v_a_553_);
v___x_558_ = v_reuseFailAlloc_559_;
goto v_reusejp_557_;
}
v_reusejp_557_:
{
return v___x_558_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_Check_0__Lake_Check_sandboxSpawnArgs___boxed(lean_object* v_spawnArgs_561_, lean_object* v_a_562_, lean_object* v_a_563_){
_start:
{
lean_object* v_res_564_; 
v_res_564_ = l___private_Lake_CLI_Check_0__Lake_Check_sandboxSpawnArgs(v_spawnArgs_561_, v_a_562_);
lean_dec_ref(v_a_562_);
return v_res_564_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_Check_0__Lake_Check_runSandBoxedWithStdoutTo_pipedOutput_loop___redArg(lean_object* v_handle_565_, lean_object* v_child_566_){
_start:
{
lean_object* v_stdout_568_; size_t v___x_569_; lean_object* v___x_570_; 
v_stdout_568_ = lean_ctor_get(v_child_566_, 1);
v___x_569_ = ((size_t)4096ULL);
v___x_570_ = lean_io_prim_handle_read(v_stdout_568_, v___x_569_);
if (lean_obj_tag(v___x_570_) == 0)
{
lean_object* v_a_571_; uint8_t v___x_572_; 
v_a_571_ = lean_ctor_get(v___x_570_, 0);
lean_inc(v_a_571_);
lean_dec_ref_known(v___x_570_, 1);
v___x_572_ = l_ByteArray_isEmpty(v_a_571_);
if (v___x_572_ == 0)
{
lean_object* v___x_573_; 
v___x_573_ = lean_io_prim_handle_write(v_handle_565_, v_a_571_);
lean_dec(v_a_571_);
if (lean_obj_tag(v___x_573_) == 0)
{
lean_dec_ref_known(v___x_573_, 1);
goto _start;
}
else
{
return v___x_573_;
}
}
else
{
lean_object* v___x_575_; 
lean_dec(v_a_571_);
v___x_575_ = lean_io_prim_handle_flush(v_handle_565_);
if (lean_obj_tag(v___x_575_) == 0)
{
lean_object* v___x_577_; uint8_t v_isShared_578_; uint8_t v_isSharedCheck_583_; 
v_isSharedCheck_583_ = !lean_is_exclusive(v___x_575_);
if (v_isSharedCheck_583_ == 0)
{
lean_object* v_unused_584_; 
v_unused_584_ = lean_ctor_get(v___x_575_, 0);
lean_dec(v_unused_584_);
v___x_577_ = v___x_575_;
v_isShared_578_ = v_isSharedCheck_583_;
goto v_resetjp_576_;
}
else
{
lean_dec(v___x_575_);
v___x_577_ = lean_box(0);
v_isShared_578_ = v_isSharedCheck_583_;
goto v_resetjp_576_;
}
v_resetjp_576_:
{
lean_object* v___x_579_; lean_object* v___x_581_; 
v___x_579_ = lean_box(0);
if (v_isShared_578_ == 0)
{
lean_ctor_set(v___x_577_, 0, v___x_579_);
v___x_581_ = v___x_577_;
goto v_reusejp_580_;
}
else
{
lean_object* v_reuseFailAlloc_582_; 
v_reuseFailAlloc_582_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_582_, 0, v___x_579_);
v___x_581_ = v_reuseFailAlloc_582_;
goto v_reusejp_580_;
}
v_reusejp_580_:
{
return v___x_581_;
}
}
}
else
{
return v___x_575_;
}
}
}
else
{
lean_object* v_a_585_; lean_object* v___x_587_; uint8_t v_isShared_588_; uint8_t v_isSharedCheck_592_; 
v_a_585_ = lean_ctor_get(v___x_570_, 0);
v_isSharedCheck_592_ = !lean_is_exclusive(v___x_570_);
if (v_isSharedCheck_592_ == 0)
{
v___x_587_ = v___x_570_;
v_isShared_588_ = v_isSharedCheck_592_;
goto v_resetjp_586_;
}
else
{
lean_inc(v_a_585_);
lean_dec(v___x_570_);
v___x_587_ = lean_box(0);
v_isShared_588_ = v_isSharedCheck_592_;
goto v_resetjp_586_;
}
v_resetjp_586_:
{
lean_object* v___x_590_; 
if (v_isShared_588_ == 0)
{
v___x_590_ = v___x_587_;
goto v_reusejp_589_;
}
else
{
lean_object* v_reuseFailAlloc_591_; 
v_reuseFailAlloc_591_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_591_, 0, v_a_585_);
v___x_590_ = v_reuseFailAlloc_591_;
goto v_reusejp_589_;
}
v_reusejp_589_:
{
return v___x_590_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_Check_0__Lake_Check_runSandBoxedWithStdoutTo_pipedOutput_loop___redArg___boxed(lean_object* v_handle_593_, lean_object* v_child_594_, lean_object* v_a_595_){
_start:
{
lean_object* v_res_596_; 
v_res_596_ = l___private_Lake_CLI_Check_0__Lake_Check_runSandBoxedWithStdoutTo_pipedOutput_loop___redArg(v_handle_593_, v_child_594_);
lean_dec_ref(v_child_594_);
lean_dec(v_handle_593_);
return v_res_596_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_Check_0__Lake_Check_runSandBoxedWithStdoutTo_pipedOutput_loop(lean_object* v_handle_597_, lean_object* v_args_598_, lean_object* v_child_599_){
_start:
{
lean_object* v___x_601_; 
v___x_601_ = l___private_Lake_CLI_Check_0__Lake_Check_runSandBoxedWithStdoutTo_pipedOutput_loop___redArg(v_handle_597_, v_child_599_);
return v___x_601_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_Check_0__Lake_Check_runSandBoxedWithStdoutTo_pipedOutput_loop___boxed(lean_object* v_handle_602_, lean_object* v_args_603_, lean_object* v_child_604_, lean_object* v_a_605_){
_start:
{
lean_object* v_res_606_; 
v_res_606_ = l___private_Lake_CLI_Check_0__Lake_Check_runSandBoxedWithStdoutTo_pipedOutput_loop(v_handle_602_, v_args_603_, v_child_604_);
lean_dec_ref(v_child_604_);
lean_dec_ref(v_args_603_);
lean_dec(v_handle_602_);
return v_res_606_;
}
}
LEAN_EXPORT lean_object* l_IO_ofExcept___at___00__private_Lake_CLI_Check_0__Lake_Check_runSandBoxedWithStdoutTo_pipedOutput_spec__0___redArg(lean_object* v_e_607_){
_start:
{
if (lean_obj_tag(v_e_607_) == 0)
{
lean_object* v_a_609_; lean_object* v___x_611_; uint8_t v_isShared_612_; uint8_t v_isSharedCheck_618_; 
v_a_609_ = lean_ctor_get(v_e_607_, 0);
v_isSharedCheck_618_ = !lean_is_exclusive(v_e_607_);
if (v_isSharedCheck_618_ == 0)
{
v___x_611_ = v_e_607_;
v_isShared_612_ = v_isSharedCheck_618_;
goto v_resetjp_610_;
}
else
{
lean_inc(v_a_609_);
lean_dec(v_e_607_);
v___x_611_ = lean_box(0);
v_isShared_612_ = v_isSharedCheck_618_;
goto v_resetjp_610_;
}
v_resetjp_610_:
{
lean_object* v___x_613_; lean_object* v___x_614_; lean_object* v___x_616_; 
v___x_613_ = lean_io_error_to_string(v_a_609_);
v___x_614_ = lean_mk_io_user_error(v___x_613_);
if (v_isShared_612_ == 0)
{
lean_ctor_set_tag(v___x_611_, 1);
lean_ctor_set(v___x_611_, 0, v___x_614_);
v___x_616_ = v___x_611_;
goto v_reusejp_615_;
}
else
{
lean_object* v_reuseFailAlloc_617_; 
v_reuseFailAlloc_617_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_617_, 0, v___x_614_);
v___x_616_ = v_reuseFailAlloc_617_;
goto v_reusejp_615_;
}
v_reusejp_615_:
{
return v___x_616_;
}
}
}
else
{
lean_object* v_a_619_; lean_object* v___x_621_; uint8_t v_isShared_622_; uint8_t v_isSharedCheck_626_; 
v_a_619_ = lean_ctor_get(v_e_607_, 0);
v_isSharedCheck_626_ = !lean_is_exclusive(v_e_607_);
if (v_isSharedCheck_626_ == 0)
{
v___x_621_ = v_e_607_;
v_isShared_622_ = v_isSharedCheck_626_;
goto v_resetjp_620_;
}
else
{
lean_inc(v_a_619_);
lean_dec(v_e_607_);
v___x_621_ = lean_box(0);
v_isShared_622_ = v_isSharedCheck_626_;
goto v_resetjp_620_;
}
v_resetjp_620_:
{
lean_object* v___x_624_; 
if (v_isShared_622_ == 0)
{
lean_ctor_set_tag(v___x_621_, 0);
v___x_624_ = v___x_621_;
goto v_reusejp_623_;
}
else
{
lean_object* v_reuseFailAlloc_625_; 
v_reuseFailAlloc_625_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_625_, 0, v_a_619_);
v___x_624_ = v_reuseFailAlloc_625_;
goto v_reusejp_623_;
}
v_reusejp_623_:
{
return v___x_624_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_IO_ofExcept___at___00__private_Lake_CLI_Check_0__Lake_Check_runSandBoxedWithStdoutTo_pipedOutput_spec__0___redArg___boxed(lean_object* v_e_627_, lean_object* v_a_628_){
_start:
{
lean_object* v_res_629_; 
v_res_629_ = l_IO_ofExcept___at___00__private_Lake_CLI_Check_0__Lake_Check_runSandBoxedWithStdoutTo_pipedOutput_spec__0___redArg(v_e_627_);
return v_res_629_;
}
}
LEAN_EXPORT lean_object* l_IO_ofExcept___at___00__private_Lake_CLI_Check_0__Lake_Check_runSandBoxedWithStdoutTo_pipedOutput_spec__0(lean_object* v_00_u03b1_630_, lean_object* v_e_631_){
_start:
{
lean_object* v___x_633_; 
v___x_633_ = l_IO_ofExcept___at___00__private_Lake_CLI_Check_0__Lake_Check_runSandBoxedWithStdoutTo_pipedOutput_spec__0___redArg(v_e_631_);
return v___x_633_;
}
}
LEAN_EXPORT lean_object* l_IO_ofExcept___at___00__private_Lake_CLI_Check_0__Lake_Check_runSandBoxedWithStdoutTo_pipedOutput_spec__0___boxed(lean_object* v_00_u03b1_634_, lean_object* v_e_635_, lean_object* v_a_636_){
_start:
{
lean_object* v_res_637_; 
v_res_637_ = l_IO_ofExcept___at___00__private_Lake_CLI_Check_0__Lake_Check_runSandBoxedWithStdoutTo_pipedOutput_spec__0(v_00_u03b1_634_, v_e_635_);
return v_res_637_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_Check_0__Lake_Check_runSandBoxedWithStdoutTo_pipedOutput___lam__0(lean_object* v_handle_638_, lean_object* v_a_639_){
_start:
{
lean_object* v___x_641_; 
v___x_641_ = l___private_Lake_CLI_Check_0__Lake_Check_runSandBoxedWithStdoutTo_pipedOutput_loop___redArg(v_handle_638_, v_a_639_);
if (lean_obj_tag(v___x_641_) == 0)
{
lean_object* v_a_642_; lean_object* v___x_644_; uint8_t v_isShared_645_; uint8_t v_isSharedCheck_649_; 
v_a_642_ = lean_ctor_get(v___x_641_, 0);
v_isSharedCheck_649_ = !lean_is_exclusive(v___x_641_);
if (v_isSharedCheck_649_ == 0)
{
v___x_644_ = v___x_641_;
v_isShared_645_ = v_isSharedCheck_649_;
goto v_resetjp_643_;
}
else
{
lean_inc(v_a_642_);
lean_dec(v___x_641_);
v___x_644_ = lean_box(0);
v_isShared_645_ = v_isSharedCheck_649_;
goto v_resetjp_643_;
}
v_resetjp_643_:
{
lean_object* v___x_647_; 
if (v_isShared_645_ == 0)
{
lean_ctor_set_tag(v___x_644_, 1);
v___x_647_ = v___x_644_;
goto v_reusejp_646_;
}
else
{
lean_object* v_reuseFailAlloc_648_; 
v_reuseFailAlloc_648_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_648_, 0, v_a_642_);
v___x_647_ = v_reuseFailAlloc_648_;
goto v_reusejp_646_;
}
v_reusejp_646_:
{
return v___x_647_;
}
}
}
else
{
lean_object* v_a_650_; lean_object* v___x_652_; uint8_t v_isShared_653_; uint8_t v_isSharedCheck_657_; 
v_a_650_ = lean_ctor_get(v___x_641_, 0);
v_isSharedCheck_657_ = !lean_is_exclusive(v___x_641_);
if (v_isSharedCheck_657_ == 0)
{
v___x_652_ = v___x_641_;
v_isShared_653_ = v_isSharedCheck_657_;
goto v_resetjp_651_;
}
else
{
lean_inc(v_a_650_);
lean_dec(v___x_641_);
v___x_652_ = lean_box(0);
v_isShared_653_ = v_isSharedCheck_657_;
goto v_resetjp_651_;
}
v_resetjp_651_:
{
lean_object* v___x_655_; 
if (v_isShared_653_ == 0)
{
lean_ctor_set_tag(v___x_652_, 0);
v___x_655_ = v___x_652_;
goto v_reusejp_654_;
}
else
{
lean_object* v_reuseFailAlloc_656_; 
v_reuseFailAlloc_656_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_656_, 0, v_a_650_);
v___x_655_ = v_reuseFailAlloc_656_;
goto v_reusejp_654_;
}
v_reusejp_654_:
{
return v___x_655_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_Check_0__Lake_Check_runSandBoxedWithStdoutTo_pipedOutput___lam__0___boxed(lean_object* v_handle_658_, lean_object* v_a_659_, lean_object* v___y_660_){
_start:
{
lean_object* v_res_661_; 
v_res_661_ = l___private_Lake_CLI_Check_0__Lake_Check_runSandBoxedWithStdoutTo_pipedOutput___lam__0(v_handle_658_, v_a_659_);
lean_dec_ref(v_a_659_);
lean_dec(v_handle_658_);
return v_res_661_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_Check_0__Lake_Check_runSandBoxedWithStdoutTo_pipedOutput(lean_object* v_handle_665_, lean_object* v_args_666_){
_start:
{
lean_object* v___x_668_; lean_object* v_cmd_669_; lean_object* v_args_670_; lean_object* v_cwd_671_; lean_object* v_env_672_; uint8_t v_inheritEnv_673_; uint8_t v_setsid_674_; lean_object* v___x_676_; uint8_t v_isShared_677_; uint8_t v_isSharedCheck_734_; 
v___x_668_ = ((lean_object*)(l___private_Lake_CLI_Check_0__Lake_Check_runSandBoxedWithStdoutTo_pipedOutput___closed__0));
v_cmd_669_ = lean_ctor_get(v_args_666_, 1);
v_args_670_ = lean_ctor_get(v_args_666_, 2);
v_cwd_671_ = lean_ctor_get(v_args_666_, 3);
v_env_672_ = lean_ctor_get(v_args_666_, 4);
v_inheritEnv_673_ = lean_ctor_get_uint8(v_args_666_, sizeof(void*)*5);
v_setsid_674_ = lean_ctor_get_uint8(v_args_666_, sizeof(void*)*5 + 1);
v_isSharedCheck_734_ = !lean_is_exclusive(v_args_666_);
if (v_isSharedCheck_734_ == 0)
{
lean_object* v_unused_735_; 
v_unused_735_ = lean_ctor_get(v_args_666_, 0);
lean_dec(v_unused_735_);
v___x_676_ = v_args_666_;
v_isShared_677_ = v_isSharedCheck_734_;
goto v_resetjp_675_;
}
else
{
lean_inc(v_env_672_);
lean_inc(v_cwd_671_);
lean_inc(v_args_670_);
lean_inc(v_cmd_669_);
lean_dec(v_args_666_);
v___x_676_ = lean_box(0);
v_isShared_677_ = v_isSharedCheck_734_;
goto v_resetjp_675_;
}
v_resetjp_675_:
{
lean_object* v___x_679_; 
if (v_isShared_677_ == 0)
{
lean_ctor_set(v___x_676_, 0, v___x_668_);
v___x_679_ = v___x_676_;
goto v_reusejp_678_;
}
else
{
lean_object* v_reuseFailAlloc_733_; 
v_reuseFailAlloc_733_ = lean_alloc_ctor(0, 5, 2);
lean_ctor_set(v_reuseFailAlloc_733_, 0, v___x_668_);
lean_ctor_set(v_reuseFailAlloc_733_, 1, v_cmd_669_);
lean_ctor_set(v_reuseFailAlloc_733_, 2, v_args_670_);
lean_ctor_set(v_reuseFailAlloc_733_, 3, v_cwd_671_);
lean_ctor_set(v_reuseFailAlloc_733_, 4, v_env_672_);
lean_ctor_set_uint8(v_reuseFailAlloc_733_, sizeof(void*)*5, v_inheritEnv_673_);
lean_ctor_set_uint8(v_reuseFailAlloc_733_, sizeof(void*)*5 + 1, v_setsid_674_);
v___x_679_ = v_reuseFailAlloc_733_;
goto v_reusejp_678_;
}
v_reusejp_678_:
{
lean_object* v___x_680_; 
v___x_680_ = lean_io_process_spawn(v___x_679_);
if (lean_obj_tag(v___x_680_) == 0)
{
lean_object* v_a_681_; lean_object* v___f_682_; lean_object* v___x_683_; lean_object* v___x_684_; lean_object* v_stderr_685_; lean_object* v___x_686_; 
v_a_681_ = lean_ctor_get(v___x_680_, 0);
lean_inc_n(v_a_681_, 2);
lean_dec_ref_known(v___x_680_, 1);
v___f_682_ = lean_alloc_closure((void*)(l___private_Lake_CLI_Check_0__Lake_Check_runSandBoxedWithStdoutTo_pipedOutput___lam__0___boxed), 3, 2);
lean_closure_set(v___f_682_, 0, v_handle_665_);
lean_closure_set(v___f_682_, 1, v_a_681_);
v___x_683_ = lean_unsigned_to_nat(9u);
v___x_684_ = lean_io_as_task(v___f_682_, v___x_683_);
v_stderr_685_ = lean_ctor_get(v_a_681_, 2);
v___x_686_ = l_IO_FS_Handle_readToEnd(v_stderr_685_);
if (lean_obj_tag(v___x_686_) == 0)
{
lean_object* v_a_687_; lean_object* v___x_688_; 
v_a_687_ = lean_ctor_get(v___x_686_, 0);
lean_inc(v_a_687_);
lean_dec_ref_known(v___x_686_, 1);
v___x_688_ = lean_io_process_child_wait(v___x_668_, v_a_681_);
lean_dec(v_a_681_);
if (lean_obj_tag(v___x_688_) == 0)
{
lean_object* v_a_689_; lean_object* v___x_691_; uint8_t v_isShared_692_; uint8_t v_isSharedCheck_708_; 
v_a_689_ = lean_ctor_get(v___x_688_, 0);
v_isSharedCheck_708_ = !lean_is_exclusive(v___x_688_);
if (v_isSharedCheck_708_ == 0)
{
v___x_691_ = v___x_688_;
v_isShared_692_ = v_isSharedCheck_708_;
goto v_resetjp_690_;
}
else
{
lean_inc(v_a_689_);
lean_dec(v___x_688_);
v___x_691_ = lean_box(0);
v_isShared_692_ = v_isSharedCheck_708_;
goto v_resetjp_690_;
}
v_resetjp_690_:
{
lean_object* v___x_698_; lean_object* v___x_699_; 
v___x_698_ = lean_task_get_own(v___x_684_);
v___x_699_ = l_IO_ofExcept___at___00__private_Lake_CLI_Check_0__Lake_Check_runSandBoxedWithStdoutTo_pipedOutput_spec__0___redArg(v___x_698_);
if (lean_obj_tag(v___x_699_) == 0)
{
lean_dec_ref_known(v___x_699_, 1);
goto v___jp_693_;
}
else
{
if (lean_obj_tag(v___x_699_) == 0)
{
lean_dec_ref_known(v___x_699_, 1);
goto v___jp_693_;
}
else
{
lean_object* v_a_700_; lean_object* v___x_702_; uint8_t v_isShared_703_; uint8_t v_isSharedCheck_707_; 
lean_del_object(v___x_691_);
lean_dec(v_a_689_);
lean_dec(v_a_687_);
v_a_700_ = lean_ctor_get(v___x_699_, 0);
v_isSharedCheck_707_ = !lean_is_exclusive(v___x_699_);
if (v_isSharedCheck_707_ == 0)
{
v___x_702_ = v___x_699_;
v_isShared_703_ = v_isSharedCheck_707_;
goto v_resetjp_701_;
}
else
{
lean_inc(v_a_700_);
lean_dec(v___x_699_);
v___x_702_ = lean_box(0);
v_isShared_703_ = v_isSharedCheck_707_;
goto v_resetjp_701_;
}
v_resetjp_701_:
{
lean_object* v___x_705_; 
if (v_isShared_703_ == 0)
{
v___x_705_ = v___x_702_;
goto v_reusejp_704_;
}
else
{
lean_object* v_reuseFailAlloc_706_; 
v_reuseFailAlloc_706_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_706_, 0, v_a_700_);
v___x_705_ = v_reuseFailAlloc_706_;
goto v_reusejp_704_;
}
v_reusejp_704_:
{
return v___x_705_;
}
}
}
}
v___jp_693_:
{
lean_object* v___x_694_; lean_object* v___x_696_; 
v___x_694_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_694_, 0, v_a_687_);
lean_ctor_set(v___x_694_, 1, v_a_689_);
if (v_isShared_692_ == 0)
{
lean_ctor_set(v___x_691_, 0, v___x_694_);
v___x_696_ = v___x_691_;
goto v_reusejp_695_;
}
else
{
lean_object* v_reuseFailAlloc_697_; 
v_reuseFailAlloc_697_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_697_, 0, v___x_694_);
v___x_696_ = v_reuseFailAlloc_697_;
goto v_reusejp_695_;
}
v_reusejp_695_:
{
return v___x_696_;
}
}
}
}
else
{
lean_object* v_a_709_; lean_object* v___x_711_; uint8_t v_isShared_712_; uint8_t v_isSharedCheck_716_; 
lean_dec(v_a_687_);
lean_dec_ref(v___x_684_);
v_a_709_ = lean_ctor_get(v___x_688_, 0);
v_isSharedCheck_716_ = !lean_is_exclusive(v___x_688_);
if (v_isSharedCheck_716_ == 0)
{
v___x_711_ = v___x_688_;
v_isShared_712_ = v_isSharedCheck_716_;
goto v_resetjp_710_;
}
else
{
lean_inc(v_a_709_);
lean_dec(v___x_688_);
v___x_711_ = lean_box(0);
v_isShared_712_ = v_isSharedCheck_716_;
goto v_resetjp_710_;
}
v_resetjp_710_:
{
lean_object* v___x_714_; 
if (v_isShared_712_ == 0)
{
v___x_714_ = v___x_711_;
goto v_reusejp_713_;
}
else
{
lean_object* v_reuseFailAlloc_715_; 
v_reuseFailAlloc_715_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_715_, 0, v_a_709_);
v___x_714_ = v_reuseFailAlloc_715_;
goto v_reusejp_713_;
}
v_reusejp_713_:
{
return v___x_714_;
}
}
}
}
else
{
lean_object* v_a_717_; lean_object* v___x_719_; uint8_t v_isShared_720_; uint8_t v_isSharedCheck_724_; 
lean_dec_ref(v___x_684_);
lean_dec(v_a_681_);
v_a_717_ = lean_ctor_get(v___x_686_, 0);
v_isSharedCheck_724_ = !lean_is_exclusive(v___x_686_);
if (v_isSharedCheck_724_ == 0)
{
v___x_719_ = v___x_686_;
v_isShared_720_ = v_isSharedCheck_724_;
goto v_resetjp_718_;
}
else
{
lean_inc(v_a_717_);
lean_dec(v___x_686_);
v___x_719_ = lean_box(0);
v_isShared_720_ = v_isSharedCheck_724_;
goto v_resetjp_718_;
}
v_resetjp_718_:
{
lean_object* v___x_722_; 
if (v_isShared_720_ == 0)
{
v___x_722_ = v___x_719_;
goto v_reusejp_721_;
}
else
{
lean_object* v_reuseFailAlloc_723_; 
v_reuseFailAlloc_723_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_723_, 0, v_a_717_);
v___x_722_ = v_reuseFailAlloc_723_;
goto v_reusejp_721_;
}
v_reusejp_721_:
{
return v___x_722_;
}
}
}
}
else
{
lean_object* v_a_725_; lean_object* v___x_727_; uint8_t v_isShared_728_; uint8_t v_isSharedCheck_732_; 
lean_dec(v_handle_665_);
v_a_725_ = lean_ctor_get(v___x_680_, 0);
v_isSharedCheck_732_ = !lean_is_exclusive(v___x_680_);
if (v_isSharedCheck_732_ == 0)
{
v___x_727_ = v___x_680_;
v_isShared_728_ = v_isSharedCheck_732_;
goto v_resetjp_726_;
}
else
{
lean_inc(v_a_725_);
lean_dec(v___x_680_);
v___x_727_ = lean_box(0);
v_isShared_728_ = v_isSharedCheck_732_;
goto v_resetjp_726_;
}
v_resetjp_726_:
{
lean_object* v___x_730_; 
if (v_isShared_728_ == 0)
{
v___x_730_ = v___x_727_;
goto v_reusejp_729_;
}
else
{
lean_object* v_reuseFailAlloc_731_; 
v_reuseFailAlloc_731_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_731_, 0, v_a_725_);
v___x_730_ = v_reuseFailAlloc_731_;
goto v_reusejp_729_;
}
v_reusejp_729_:
{
return v___x_730_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_Check_0__Lake_Check_runSandBoxedWithStdoutTo_pipedOutput___boxed(lean_object* v_handle_736_, lean_object* v_args_737_, lean_object* v_a_738_){
_start:
{
lean_object* v_res_739_; 
v_res_739_ = l___private_Lake_CLI_Check_0__Lake_Check_runSandBoxedWithStdoutTo_pipedOutput(v_handle_736_, v_args_737_);
return v_res_739_;
}
}
LEAN_EXPORT lean_object* l_IO_eprint___at___00__private_Lake_CLI_Check_0__Lake_Check_runSandBoxedWithStdoutTo_spec__0(lean_object* v_s_740_){
_start:
{
lean_object* v___x_742_; lean_object* v_putStr_743_; lean_object* v___x_744_; 
v___x_742_ = lean_get_stderr();
v_putStr_743_ = lean_ctor_get(v___x_742_, 4);
lean_inc_ref(v_putStr_743_);
lean_dec_ref(v___x_742_);
v___x_744_ = lean_apply_2(v_putStr_743_, v_s_740_, lean_box(0));
return v___x_744_;
}
}
LEAN_EXPORT lean_object* l_IO_eprint___at___00__private_Lake_CLI_Check_0__Lake_Check_runSandBoxedWithStdoutTo_spec__0___boxed(lean_object* v_s_745_, lean_object* v_a_746_){
_start:
{
lean_object* v_res_747_; 
v_res_747_ = l_IO_eprint___at___00__private_Lake_CLI_Check_0__Lake_Check_runSandBoxedWithStdoutTo_spec__0(v_s_745_);
return v_res_747_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_Check_0__Lake_Check_runSandBoxedWithStdoutTo(lean_object* v_handle_749_, lean_object* v_spawnArgs_750_, lean_object* v_a_751_){
_start:
{
lean_object* v___x_753_; 
v___x_753_ = l___private_Lake_CLI_Check_0__Lake_Check_sandboxSpawnArgs(v_spawnArgs_750_, v_a_751_);
if (lean_obj_tag(v___x_753_) == 0)
{
lean_object* v_a_754_; lean_object* v___x_755_; 
v_a_754_ = lean_ctor_get(v___x_753_, 0);
lean_inc(v_a_754_);
lean_dec_ref_known(v___x_753_, 1);
v___x_755_ = l___private_Lake_CLI_Check_0__Lake_Check_runSandBoxedWithStdoutTo_pipedOutput(v_handle_749_, v_a_754_);
if (lean_obj_tag(v___x_755_) == 0)
{
lean_object* v_a_756_; lean_object* v_fst_757_; lean_object* v_snd_758_; lean_object* v___x_759_; 
v_a_756_ = lean_ctor_get(v___x_755_, 0);
lean_inc(v_a_756_);
lean_dec_ref_known(v___x_755_, 1);
v_fst_757_ = lean_ctor_get(v_a_756_, 0);
lean_inc(v_fst_757_);
v_snd_758_ = lean_ctor_get(v_a_756_, 1);
lean_inc(v_snd_758_);
lean_dec(v_a_756_);
v___x_759_ = l_IO_eprint___at___00__private_Lake_CLI_Check_0__Lake_Check_runSandBoxedWithStdoutTo_spec__0(v_fst_757_);
if (lean_obj_tag(v___x_759_) == 0)
{
lean_object* v___x_761_; uint8_t v_isShared_762_; uint8_t v_isSharedCheck_779_; 
v_isSharedCheck_779_ = !lean_is_exclusive(v___x_759_);
if (v_isSharedCheck_779_ == 0)
{
lean_object* v_unused_780_; 
v_unused_780_ = lean_ctor_get(v___x_759_, 0);
lean_dec(v_unused_780_);
v___x_761_ = v___x_759_;
v_isShared_762_ = v_isSharedCheck_779_;
goto v_resetjp_760_;
}
else
{
lean_dec(v___x_759_);
v___x_761_ = lean_box(0);
v_isShared_762_ = v_isSharedCheck_779_;
goto v_resetjp_760_;
}
v_resetjp_760_:
{
uint32_t v___x_763_; uint32_t v___x_764_; uint8_t v___x_765_; 
v___x_763_ = 0;
v___x_764_ = lean_unbox_uint32(v_snd_758_);
v___x_765_ = lean_uint32_dec_eq(v___x_764_, v___x_763_);
if (v___x_765_ == 0)
{
lean_object* v___x_766_; uint32_t v___x_767_; lean_object* v___x_768_; lean_object* v___x_769_; lean_object* v___x_770_; lean_object* v___x_771_; lean_object* v___x_773_; 
v___x_766_ = ((lean_object*)(l___private_Lake_CLI_Check_0__Lake_Check_runSandBoxedWithStdoutTo___closed__0));
v___x_767_ = lean_unbox_uint32(v_snd_758_);
lean_dec(v_snd_758_);
v___x_768_ = lean_uint32_to_nat(v___x_767_);
v___x_769_ = l_Nat_reprFast(v___x_768_);
v___x_770_ = lean_string_append(v___x_766_, v___x_769_);
lean_dec_ref(v___x_769_);
v___x_771_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_771_, 0, v___x_770_);
if (v_isShared_762_ == 0)
{
lean_ctor_set_tag(v___x_761_, 1);
lean_ctor_set(v___x_761_, 0, v___x_771_);
v___x_773_ = v___x_761_;
goto v_reusejp_772_;
}
else
{
lean_object* v_reuseFailAlloc_774_; 
v_reuseFailAlloc_774_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_774_, 0, v___x_771_);
v___x_773_ = v_reuseFailAlloc_774_;
goto v_reusejp_772_;
}
v_reusejp_772_:
{
return v___x_773_;
}
}
else
{
lean_object* v___x_775_; lean_object* v___x_777_; 
lean_dec(v_snd_758_);
v___x_775_ = lean_box(0);
if (v_isShared_762_ == 0)
{
lean_ctor_set(v___x_761_, 0, v___x_775_);
v___x_777_ = v___x_761_;
goto v_reusejp_776_;
}
else
{
lean_object* v_reuseFailAlloc_778_; 
v_reuseFailAlloc_778_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_778_, 0, v___x_775_);
v___x_777_ = v_reuseFailAlloc_778_;
goto v_reusejp_776_;
}
v_reusejp_776_:
{
return v___x_777_;
}
}
}
}
else
{
lean_dec(v_snd_758_);
return v___x_759_;
}
}
else
{
lean_object* v_a_781_; lean_object* v___x_783_; uint8_t v_isShared_784_; uint8_t v_isSharedCheck_788_; 
v_a_781_ = lean_ctor_get(v___x_755_, 0);
v_isSharedCheck_788_ = !lean_is_exclusive(v___x_755_);
if (v_isSharedCheck_788_ == 0)
{
v___x_783_ = v___x_755_;
v_isShared_784_ = v_isSharedCheck_788_;
goto v_resetjp_782_;
}
else
{
lean_inc(v_a_781_);
lean_dec(v___x_755_);
v___x_783_ = lean_box(0);
v_isShared_784_ = v_isSharedCheck_788_;
goto v_resetjp_782_;
}
v_resetjp_782_:
{
lean_object* v___x_786_; 
if (v_isShared_784_ == 0)
{
v___x_786_ = v___x_783_;
goto v_reusejp_785_;
}
else
{
lean_object* v_reuseFailAlloc_787_; 
v_reuseFailAlloc_787_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_787_, 0, v_a_781_);
v___x_786_ = v_reuseFailAlloc_787_;
goto v_reusejp_785_;
}
v_reusejp_785_:
{
return v___x_786_;
}
}
}
}
else
{
lean_object* v_a_789_; lean_object* v___x_791_; uint8_t v_isShared_792_; uint8_t v_isSharedCheck_796_; 
lean_dec(v_handle_749_);
v_a_789_ = lean_ctor_get(v___x_753_, 0);
v_isSharedCheck_796_ = !lean_is_exclusive(v___x_753_);
if (v_isSharedCheck_796_ == 0)
{
v___x_791_ = v___x_753_;
v_isShared_792_ = v_isSharedCheck_796_;
goto v_resetjp_790_;
}
else
{
lean_inc(v_a_789_);
lean_dec(v___x_753_);
v___x_791_ = lean_box(0);
v_isShared_792_ = v_isSharedCheck_796_;
goto v_resetjp_790_;
}
v_resetjp_790_:
{
lean_object* v___x_794_; 
if (v_isShared_792_ == 0)
{
v___x_794_ = v___x_791_;
goto v_reusejp_793_;
}
else
{
lean_object* v_reuseFailAlloc_795_; 
v_reuseFailAlloc_795_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_795_, 0, v_a_789_);
v___x_794_ = v_reuseFailAlloc_795_;
goto v_reusejp_793_;
}
v_reusejp_793_:
{
return v___x_794_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_Check_0__Lake_Check_runSandBoxedWithStdoutTo___boxed(lean_object* v_handle_797_, lean_object* v_spawnArgs_798_, lean_object* v_a_799_, lean_object* v_a_800_){
_start:
{
lean_object* v_res_801_; 
v_res_801_ = l___private_Lake_CLI_Check_0__Lake_Check_runSandBoxedWithStdoutTo(v_handle_797_, v_spawnArgs_798_, v_a_799_);
lean_dec_ref(v_a_799_);
return v_res_801_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_Check_0__Lake_Check_runSandBoxedWithStdout(lean_object* v_spawnArgs_802_, lean_object* v_a_803_){
_start:
{
lean_object* v___x_805_; 
v___x_805_ = l___private_Lake_CLI_Check_0__Lake_Check_sandboxSpawnArgs(v_spawnArgs_802_, v_a_803_);
if (lean_obj_tag(v___x_805_) == 0)
{
lean_object* v_a_806_; lean_object* v___x_807_; lean_object* v___x_808_; 
v_a_806_ = lean_ctor_get(v___x_805_, 0);
lean_inc(v_a_806_);
lean_dec_ref_known(v___x_805_, 1);
v___x_807_ = lean_box(0);
v___x_808_ = l_IO_Process_output(v_a_806_, v___x_807_);
if (lean_obj_tag(v___x_808_) == 0)
{
lean_object* v_a_809_; uint32_t v_exitCode_810_; lean_object* v_stdout_811_; lean_object* v_stderr_812_; lean_object* v___x_813_; 
v_a_809_ = lean_ctor_get(v___x_808_, 0);
lean_inc(v_a_809_);
lean_dec_ref_known(v___x_808_, 1);
v_exitCode_810_ = lean_ctor_get_uint32(v_a_809_, sizeof(void*)*2);
v_stdout_811_ = lean_ctor_get(v_a_809_, 0);
lean_inc_ref(v_stdout_811_);
v_stderr_812_ = lean_ctor_get(v_a_809_, 1);
lean_inc_ref(v_stderr_812_);
lean_dec(v_a_809_);
v___x_813_ = l_IO_eprint___at___00__private_Lake_CLI_Check_0__Lake_Check_runSandBoxedWithStdoutTo_spec__0(v_stderr_812_);
if (lean_obj_tag(v___x_813_) == 0)
{
lean_object* v___x_815_; uint8_t v_isShared_816_; uint8_t v_isSharedCheck_830_; 
v_isSharedCheck_830_ = !lean_is_exclusive(v___x_813_);
if (v_isSharedCheck_830_ == 0)
{
lean_object* v_unused_831_; 
v_unused_831_ = lean_ctor_get(v___x_813_, 0);
lean_dec(v_unused_831_);
v___x_815_ = v___x_813_;
v_isShared_816_ = v_isSharedCheck_830_;
goto v_resetjp_814_;
}
else
{
lean_dec(v___x_813_);
v___x_815_ = lean_box(0);
v_isShared_816_ = v_isSharedCheck_830_;
goto v_resetjp_814_;
}
v_resetjp_814_:
{
uint32_t v___x_817_; uint8_t v___x_818_; 
v___x_817_ = 0;
v___x_818_ = lean_uint32_dec_eq(v_exitCode_810_, v___x_817_);
if (v___x_818_ == 0)
{
lean_object* v___x_819_; lean_object* v___x_820_; lean_object* v___x_821_; lean_object* v___x_822_; lean_object* v___x_823_; lean_object* v___x_825_; 
lean_dec_ref(v_stdout_811_);
v___x_819_ = ((lean_object*)(l___private_Lake_CLI_Check_0__Lake_Check_runSandBoxedWithStdoutTo___closed__0));
v___x_820_ = lean_uint32_to_nat(v_exitCode_810_);
v___x_821_ = l_Nat_reprFast(v___x_820_);
v___x_822_ = lean_string_append(v___x_819_, v___x_821_);
lean_dec_ref(v___x_821_);
v___x_823_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_823_, 0, v___x_822_);
if (v_isShared_816_ == 0)
{
lean_ctor_set_tag(v___x_815_, 1);
lean_ctor_set(v___x_815_, 0, v___x_823_);
v___x_825_ = v___x_815_;
goto v_reusejp_824_;
}
else
{
lean_object* v_reuseFailAlloc_826_; 
v_reuseFailAlloc_826_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_826_, 0, v___x_823_);
v___x_825_ = v_reuseFailAlloc_826_;
goto v_reusejp_824_;
}
v_reusejp_824_:
{
return v___x_825_;
}
}
else
{
lean_object* v___x_828_; 
if (v_isShared_816_ == 0)
{
lean_ctor_set(v___x_815_, 0, v_stdout_811_);
v___x_828_ = v___x_815_;
goto v_reusejp_827_;
}
else
{
lean_object* v_reuseFailAlloc_829_; 
v_reuseFailAlloc_829_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_829_, 0, v_stdout_811_);
v___x_828_ = v_reuseFailAlloc_829_;
goto v_reusejp_827_;
}
v_reusejp_827_:
{
return v___x_828_;
}
}
}
}
else
{
lean_object* v_a_832_; lean_object* v___x_834_; uint8_t v_isShared_835_; uint8_t v_isSharedCheck_839_; 
lean_dec_ref(v_stdout_811_);
v_a_832_ = lean_ctor_get(v___x_813_, 0);
v_isSharedCheck_839_ = !lean_is_exclusive(v___x_813_);
if (v_isSharedCheck_839_ == 0)
{
v___x_834_ = v___x_813_;
v_isShared_835_ = v_isSharedCheck_839_;
goto v_resetjp_833_;
}
else
{
lean_inc(v_a_832_);
lean_dec(v___x_813_);
v___x_834_ = lean_box(0);
v_isShared_835_ = v_isSharedCheck_839_;
goto v_resetjp_833_;
}
v_resetjp_833_:
{
lean_object* v___x_837_; 
if (v_isShared_835_ == 0)
{
v___x_837_ = v___x_834_;
goto v_reusejp_836_;
}
else
{
lean_object* v_reuseFailAlloc_838_; 
v_reuseFailAlloc_838_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_838_, 0, v_a_832_);
v___x_837_ = v_reuseFailAlloc_838_;
goto v_reusejp_836_;
}
v_reusejp_836_:
{
return v___x_837_;
}
}
}
}
else
{
lean_object* v_a_840_; lean_object* v___x_842_; uint8_t v_isShared_843_; uint8_t v_isSharedCheck_847_; 
v_a_840_ = lean_ctor_get(v___x_808_, 0);
v_isSharedCheck_847_ = !lean_is_exclusive(v___x_808_);
if (v_isSharedCheck_847_ == 0)
{
v___x_842_ = v___x_808_;
v_isShared_843_ = v_isSharedCheck_847_;
goto v_resetjp_841_;
}
else
{
lean_inc(v_a_840_);
lean_dec(v___x_808_);
v___x_842_ = lean_box(0);
v_isShared_843_ = v_isSharedCheck_847_;
goto v_resetjp_841_;
}
v_resetjp_841_:
{
lean_object* v___x_845_; 
if (v_isShared_843_ == 0)
{
v___x_845_ = v___x_842_;
goto v_reusejp_844_;
}
else
{
lean_object* v_reuseFailAlloc_846_; 
v_reuseFailAlloc_846_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_846_, 0, v_a_840_);
v___x_845_ = v_reuseFailAlloc_846_;
goto v_reusejp_844_;
}
v_reusejp_844_:
{
return v___x_845_;
}
}
}
}
else
{
lean_object* v_a_848_; lean_object* v___x_850_; uint8_t v_isShared_851_; uint8_t v_isSharedCheck_855_; 
v_a_848_ = lean_ctor_get(v___x_805_, 0);
v_isSharedCheck_855_ = !lean_is_exclusive(v___x_805_);
if (v_isSharedCheck_855_ == 0)
{
v___x_850_ = v___x_805_;
v_isShared_851_ = v_isSharedCheck_855_;
goto v_resetjp_849_;
}
else
{
lean_inc(v_a_848_);
lean_dec(v___x_805_);
v___x_850_ = lean_box(0);
v_isShared_851_ = v_isSharedCheck_855_;
goto v_resetjp_849_;
}
v_resetjp_849_:
{
lean_object* v___x_853_; 
if (v_isShared_851_ == 0)
{
v___x_853_ = v___x_850_;
goto v_reusejp_852_;
}
else
{
lean_object* v_reuseFailAlloc_854_; 
v_reuseFailAlloc_854_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_854_, 0, v_a_848_);
v___x_853_ = v_reuseFailAlloc_854_;
goto v_reusejp_852_;
}
v_reusejp_852_:
{
return v___x_853_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_Check_0__Lake_Check_runSandBoxedWithStdout___boxed(lean_object* v_spawnArgs_856_, lean_object* v_a_857_, lean_object* v_a_858_){
_start:
{
lean_object* v_res_859_; 
v_res_859_ = l___private_Lake_CLI_Check_0__Lake_Check_runSandBoxedWithStdout(v_spawnArgs_856_, v_a_857_);
lean_dec_ref(v_a_857_);
return v_res_859_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_Check_0__Lake_Check_runSandBoxedExitCode(lean_object* v_spawnArgs_860_, lean_object* v_a_861_){
_start:
{
lean_object* v___x_863_; 
v___x_863_ = l___private_Lake_CLI_Check_0__Lake_Check_sandboxSpawnArgs(v_spawnArgs_860_, v_a_861_);
if (lean_obj_tag(v___x_863_) == 0)
{
lean_object* v_a_864_; lean_object* v___x_865_; 
v_a_864_ = lean_ctor_get(v___x_863_, 0);
lean_inc(v_a_864_);
lean_dec_ref_known(v___x_863_, 1);
v___x_865_ = lean_io_process_spawn(v_a_864_);
if (lean_obj_tag(v___x_865_) == 0)
{
lean_object* v_a_866_; lean_object* v___x_867_; lean_object* v___x_868_; 
v_a_866_ = lean_ctor_get(v___x_865_, 0);
lean_inc(v_a_866_);
lean_dec_ref_known(v___x_865_, 1);
v___x_867_ = ((lean_object*)(l___private_Lake_CLI_Check_0__Lake_Check_whichExe___closed__0));
v___x_868_ = lean_io_process_child_wait(v___x_867_, v_a_866_);
lean_dec(v_a_866_);
return v___x_868_;
}
else
{
lean_object* v_a_869_; lean_object* v___x_871_; uint8_t v_isShared_872_; uint8_t v_isSharedCheck_876_; 
v_a_869_ = lean_ctor_get(v___x_865_, 0);
v_isSharedCheck_876_ = !lean_is_exclusive(v___x_865_);
if (v_isSharedCheck_876_ == 0)
{
v___x_871_ = v___x_865_;
v_isShared_872_ = v_isSharedCheck_876_;
goto v_resetjp_870_;
}
else
{
lean_inc(v_a_869_);
lean_dec(v___x_865_);
v___x_871_ = lean_box(0);
v_isShared_872_ = v_isSharedCheck_876_;
goto v_resetjp_870_;
}
v_resetjp_870_:
{
lean_object* v___x_874_; 
if (v_isShared_872_ == 0)
{
v___x_874_ = v___x_871_;
goto v_reusejp_873_;
}
else
{
lean_object* v_reuseFailAlloc_875_; 
v_reuseFailAlloc_875_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_875_, 0, v_a_869_);
v___x_874_ = v_reuseFailAlloc_875_;
goto v_reusejp_873_;
}
v_reusejp_873_:
{
return v___x_874_;
}
}
}
}
else
{
lean_object* v_a_877_; lean_object* v___x_879_; uint8_t v_isShared_880_; uint8_t v_isSharedCheck_884_; 
v_a_877_ = lean_ctor_get(v___x_863_, 0);
v_isSharedCheck_884_ = !lean_is_exclusive(v___x_863_);
if (v_isSharedCheck_884_ == 0)
{
v___x_879_ = v___x_863_;
v_isShared_880_ = v_isSharedCheck_884_;
goto v_resetjp_878_;
}
else
{
lean_inc(v_a_877_);
lean_dec(v___x_863_);
v___x_879_ = lean_box(0);
v_isShared_880_ = v_isSharedCheck_884_;
goto v_resetjp_878_;
}
v_resetjp_878_:
{
lean_object* v___x_882_; 
if (v_isShared_880_ == 0)
{
v___x_882_ = v___x_879_;
goto v_reusejp_881_;
}
else
{
lean_object* v_reuseFailAlloc_883_; 
v_reuseFailAlloc_883_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_883_, 0, v_a_877_);
v___x_882_ = v_reuseFailAlloc_883_;
goto v_reusejp_881_;
}
v_reusejp_881_:
{
return v___x_882_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_Check_0__Lake_Check_runSandBoxedExitCode___boxed(lean_object* v_spawnArgs_885_, lean_object* v_a_886_, lean_object* v_a_887_){
_start:
{
lean_object* v_res_888_; 
v_res_888_ = l___private_Lake_CLI_Check_0__Lake_Check_runSandBoxedExitCode(v_spawnArgs_885_, v_a_886_);
lean_dec_ref(v_a_886_);
return v_res_888_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_Check_0__Lake_Check_runSandBoxed(lean_object* v_spawnArgs_889_, lean_object* v_a_890_){
_start:
{
lean_object* v___x_892_; 
v___x_892_ = l___private_Lake_CLI_Check_0__Lake_Check_runSandBoxedExitCode(v_spawnArgs_889_, v_a_890_);
if (lean_obj_tag(v___x_892_) == 0)
{
lean_object* v_a_893_; lean_object* v___x_895_; uint8_t v_isShared_896_; uint8_t v_isSharedCheck_913_; 
v_a_893_ = lean_ctor_get(v___x_892_, 0);
v_isSharedCheck_913_ = !lean_is_exclusive(v___x_892_);
if (v_isSharedCheck_913_ == 0)
{
v___x_895_ = v___x_892_;
v_isShared_896_ = v_isSharedCheck_913_;
goto v_resetjp_894_;
}
else
{
lean_inc(v_a_893_);
lean_dec(v___x_892_);
v___x_895_ = lean_box(0);
v_isShared_896_ = v_isSharedCheck_913_;
goto v_resetjp_894_;
}
v_resetjp_894_:
{
uint32_t v___x_897_; uint32_t v___x_898_; uint8_t v___x_899_; 
v___x_897_ = 0;
v___x_898_ = lean_unbox_uint32(v_a_893_);
v___x_899_ = lean_uint32_dec_eq(v___x_898_, v___x_897_);
if (v___x_899_ == 0)
{
lean_object* v___x_900_; uint32_t v___x_901_; lean_object* v___x_902_; lean_object* v___x_903_; lean_object* v___x_904_; lean_object* v___x_905_; lean_object* v___x_907_; 
v___x_900_ = ((lean_object*)(l___private_Lake_CLI_Check_0__Lake_Check_runSandBoxedWithStdoutTo___closed__0));
v___x_901_ = lean_unbox_uint32(v_a_893_);
lean_dec(v_a_893_);
v___x_902_ = lean_uint32_to_nat(v___x_901_);
v___x_903_ = l_Nat_reprFast(v___x_902_);
v___x_904_ = lean_string_append(v___x_900_, v___x_903_);
lean_dec_ref(v___x_903_);
v___x_905_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_905_, 0, v___x_904_);
if (v_isShared_896_ == 0)
{
lean_ctor_set_tag(v___x_895_, 1);
lean_ctor_set(v___x_895_, 0, v___x_905_);
v___x_907_ = v___x_895_;
goto v_reusejp_906_;
}
else
{
lean_object* v_reuseFailAlloc_908_; 
v_reuseFailAlloc_908_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_908_, 0, v___x_905_);
v___x_907_ = v_reuseFailAlloc_908_;
goto v_reusejp_906_;
}
v_reusejp_906_:
{
return v___x_907_;
}
}
else
{
lean_object* v___x_909_; lean_object* v___x_911_; 
lean_dec(v_a_893_);
v___x_909_ = lean_box(0);
if (v_isShared_896_ == 0)
{
lean_ctor_set(v___x_895_, 0, v___x_909_);
v___x_911_ = v___x_895_;
goto v_reusejp_910_;
}
else
{
lean_object* v_reuseFailAlloc_912_; 
v_reuseFailAlloc_912_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_912_, 0, v___x_909_);
v___x_911_ = v_reuseFailAlloc_912_;
goto v_reusejp_910_;
}
v_reusejp_910_:
{
return v___x_911_;
}
}
}
}
else
{
lean_object* v_a_914_; lean_object* v___x_916_; uint8_t v_isShared_917_; uint8_t v_isSharedCheck_921_; 
v_a_914_ = lean_ctor_get(v___x_892_, 0);
v_isSharedCheck_921_ = !lean_is_exclusive(v___x_892_);
if (v_isSharedCheck_921_ == 0)
{
v___x_916_ = v___x_892_;
v_isShared_917_ = v_isSharedCheck_921_;
goto v_resetjp_915_;
}
else
{
lean_inc(v_a_914_);
lean_dec(v___x_892_);
v___x_916_ = lean_box(0);
v_isShared_917_ = v_isSharedCheck_921_;
goto v_resetjp_915_;
}
v_resetjp_915_:
{
lean_object* v___x_919_; 
if (v_isShared_917_ == 0)
{
v___x_919_ = v___x_916_;
goto v_reusejp_918_;
}
else
{
lean_object* v_reuseFailAlloc_920_; 
v_reuseFailAlloc_920_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_920_, 0, v_a_914_);
v___x_919_ = v_reuseFailAlloc_920_;
goto v_reusejp_918_;
}
v_reusejp_918_:
{
return v___x_919_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_Check_0__Lake_Check_runSandBoxed___boxed(lean_object* v_spawnArgs_922_, lean_object* v_a_923_, lean_object* v_a_924_){
_start:
{
lean_object* v_res_925_; 
v_res_925_ = l___private_Lake_CLI_Check_0__Lake_Check_runSandBoxed(v_spawnArgs_922_, v_a_923_);
lean_dec_ref(v_a_923_);
return v_res_925_;
}
}
static lean_object* _init_l_String_dropPrefix_x3f___at___00__private_Lake_CLI_Check_0__Lake_Check_safeResolveWorkspace_spec__0___redArg___closed__1(void){
_start:
{
lean_object* v___x_927_; lean_object* v___x_928_; 
v___x_927_ = ((lean_object*)(l_String_dropPrefix_x3f___at___00__private_Lake_CLI_Check_0__Lake_Check_safeResolveWorkspace_spec__0___redArg___closed__0));
v___x_928_ = lean_string_utf8_byte_size(v___x_927_);
return v___x_928_;
}
}
LEAN_EXPORT lean_object* l_String_dropPrefix_x3f___at___00__private_Lake_CLI_Check_0__Lake_Check_safeResolveWorkspace_spec__0___redArg(lean_object* v_s_929_){
_start:
{
lean_object* v___x_930_; lean_object* v___x_931_; lean_object* v___x_932_; uint8_t v___x_933_; 
v___x_930_ = ((lean_object*)(l_String_dropPrefix_x3f___at___00__private_Lake_CLI_Check_0__Lake_Check_safeResolveWorkspace_spec__0___redArg___closed__0));
v___x_931_ = lean_string_utf8_byte_size(v_s_929_);
v___x_932_ = lean_obj_once(&l_String_dropPrefix_x3f___at___00__private_Lake_CLI_Check_0__Lake_Check_safeResolveWorkspace_spec__0___redArg___closed__1, &l_String_dropPrefix_x3f___at___00__private_Lake_CLI_Check_0__Lake_Check_safeResolveWorkspace_spec__0___redArg___closed__1_once, _init_l_String_dropPrefix_x3f___at___00__private_Lake_CLI_Check_0__Lake_Check_safeResolveWorkspace_spec__0___redArg___closed__1);
v___x_933_ = lean_nat_dec_le(v___x_932_, v___x_931_);
if (v___x_933_ == 0)
{
lean_object* v___x_934_; 
lean_dec_ref(v_s_929_);
v___x_934_ = lean_box(0);
return v___x_934_;
}
else
{
lean_object* v___x_935_; uint8_t v___x_936_; 
v___x_935_ = lean_unsigned_to_nat(0u);
v___x_936_ = lean_string_memcmp(v_s_929_, v___x_930_, v___x_935_, v___x_935_, v___x_932_);
if (v___x_936_ == 0)
{
lean_object* v___x_937_; 
lean_dec_ref(v_s_929_);
v___x_937_ = lean_box(0);
return v___x_937_;
}
else
{
lean_object* v___x_938_; lean_object* v___x_939_; lean_object* v___x_940_; lean_object* v___x_941_; 
lean_inc_ref(v_s_929_);
v___x_938_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_938_, 0, v_s_929_);
lean_ctor_set(v___x_938_, 1, v___x_935_);
lean_ctor_set(v___x_938_, 2, v___x_931_);
v___x_939_ = l_String_Slice_pos_x21(v___x_938_, v___x_932_);
lean_dec_ref_known(v___x_938_, 3);
v___x_940_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_940_, 0, v_s_929_);
lean_ctor_set(v___x_940_, 1, v___x_939_);
lean_ctor_set(v___x_940_, 2, v___x_931_);
v___x_941_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_941_, 0, v___x_940_);
return v___x_941_;
}
}
}
}
LEAN_EXPORT lean_object* l_String_dropPrefix_x3f___at___00__private_Lake_CLI_Check_0__Lake_Check_safeResolveWorkspace_spec__0(lean_object* v_s_942_, lean_object* v_pat_943_){
_start:
{
lean_object* v___x_944_; 
v___x_944_ = l_String_dropPrefix_x3f___at___00__private_Lake_CLI_Check_0__Lake_Check_safeResolveWorkspace_spec__0___redArg(v_s_942_);
return v___x_944_;
}
}
LEAN_EXPORT lean_object* l_String_dropPrefix_x3f___at___00__private_Lake_CLI_Check_0__Lake_Check_safeResolveWorkspace_spec__0___boxed(lean_object* v_s_945_, lean_object* v_pat_946_){
_start:
{
lean_object* v_res_947_; 
v_res_947_ = l_String_dropPrefix_x3f___at___00__private_Lake_CLI_Check_0__Lake_Check_safeResolveWorkspace_spec__0(v_s_945_, v_pat_946_);
lean_dec_ref(v_pat_946_);
return v_res_947_;
}
}
static lean_object* _init_l_String_dropPrefix_x3f___at___00__private_Lake_CLI_Check_0__Lake_Check_safeResolveWorkspace_spec__1___redArg___closed__1(void){
_start:
{
lean_object* v___x_949_; lean_object* v___x_950_; 
v___x_949_ = ((lean_object*)(l_String_dropPrefix_x3f___at___00__private_Lake_CLI_Check_0__Lake_Check_safeResolveWorkspace_spec__1___redArg___closed__0));
v___x_950_ = lean_string_utf8_byte_size(v___x_949_);
return v___x_950_;
}
}
LEAN_EXPORT lean_object* l_String_dropPrefix_x3f___at___00__private_Lake_CLI_Check_0__Lake_Check_safeResolveWorkspace_spec__1___redArg(lean_object* v_s_951_){
_start:
{
lean_object* v___x_952_; lean_object* v___x_953_; lean_object* v___x_954_; uint8_t v___x_955_; 
v___x_952_ = ((lean_object*)(l_String_dropPrefix_x3f___at___00__private_Lake_CLI_Check_0__Lake_Check_safeResolveWorkspace_spec__1___redArg___closed__0));
v___x_953_ = lean_string_utf8_byte_size(v_s_951_);
v___x_954_ = lean_obj_once(&l_String_dropPrefix_x3f___at___00__private_Lake_CLI_Check_0__Lake_Check_safeResolveWorkspace_spec__1___redArg___closed__1, &l_String_dropPrefix_x3f___at___00__private_Lake_CLI_Check_0__Lake_Check_safeResolveWorkspace_spec__1___redArg___closed__1_once, _init_l_String_dropPrefix_x3f___at___00__private_Lake_CLI_Check_0__Lake_Check_safeResolveWorkspace_spec__1___redArg___closed__1);
v___x_955_ = lean_nat_dec_le(v___x_954_, v___x_953_);
if (v___x_955_ == 0)
{
lean_object* v___x_956_; 
lean_dec_ref(v_s_951_);
v___x_956_ = lean_box(0);
return v___x_956_;
}
else
{
lean_object* v___x_957_; uint8_t v___x_958_; 
v___x_957_ = lean_unsigned_to_nat(0u);
v___x_958_ = lean_string_memcmp(v_s_951_, v___x_952_, v___x_957_, v___x_957_, v___x_954_);
if (v___x_958_ == 0)
{
lean_object* v___x_959_; 
lean_dec_ref(v_s_951_);
v___x_959_ = lean_box(0);
return v___x_959_;
}
else
{
lean_object* v___x_960_; lean_object* v___x_961_; lean_object* v___x_962_; lean_object* v___x_963_; 
lean_inc_ref(v_s_951_);
v___x_960_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_960_, 0, v_s_951_);
lean_ctor_set(v___x_960_, 1, v___x_957_);
lean_ctor_set(v___x_960_, 2, v___x_953_);
v___x_961_ = l_String_Slice_pos_x21(v___x_960_, v___x_954_);
lean_dec_ref_known(v___x_960_, 3);
v___x_962_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_962_, 0, v_s_951_);
lean_ctor_set(v___x_962_, 1, v___x_961_);
lean_ctor_set(v___x_962_, 2, v___x_953_);
v___x_963_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_963_, 0, v___x_962_);
return v___x_963_;
}
}
}
}
LEAN_EXPORT lean_object* l_String_dropPrefix_x3f___at___00__private_Lake_CLI_Check_0__Lake_Check_safeResolveWorkspace_spec__1(lean_object* v_s_964_, lean_object* v_pat_965_){
_start:
{
lean_object* v___x_966_; 
v___x_966_ = l_String_dropPrefix_x3f___at___00__private_Lake_CLI_Check_0__Lake_Check_safeResolveWorkspace_spec__1___redArg(v_s_964_);
return v___x_966_;
}
}
LEAN_EXPORT lean_object* l_String_dropPrefix_x3f___at___00__private_Lake_CLI_Check_0__Lake_Check_safeResolveWorkspace_spec__1___boxed(lean_object* v_s_967_, lean_object* v_pat_968_){
_start:
{
lean_object* v_res_969_; 
v_res_969_ = l_String_dropPrefix_x3f___at___00__private_Lake_CLI_Check_0__Lake_Check_safeResolveWorkspace_spec__1(v_s_967_, v_pat_968_);
lean_dec_ref(v_pat_968_);
return v_res_969_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Lake_CLI_Check_0__Lake_Check_safeResolveWorkspace_spec__3___redArg(){
_start:
{
lean_object* v___x_973_; 
v___x_973_ = ((lean_object*)(l_String_Slice_splitToSubslice___at___00__private_Lake_CLI_Check_0__Lake_Check_safeResolveWorkspace_spec__3___redArg___closed__0));
return v___x_973_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Lake_CLI_Check_0__Lake_Check_safeResolveWorkspace_spec__3___redArg___boxed(lean_object* v___dummy_974_){
_start:
{
lean_object* v_res_975_; 
v_res_975_ = l_String_Slice_splitToSubslice___at___00__private_Lake_CLI_Check_0__Lake_Check_safeResolveWorkspace_spec__3___redArg();
return v_res_975_;
}
}
static lean_object* _init_l_String_Slice_splitToSubslice___at___00__private_Lake_CLI_Check_0__Lake_Check_safeResolveWorkspace_spec__3___closed__0(void){
_start:
{
lean_object* v___x_976_; 
v___x_976_ = l_String_Slice_splitToSubslice___at___00__private_Lake_CLI_Check_0__Lake_Check_safeResolveWorkspace_spec__3___redArg();
return v___x_976_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Lake_CLI_Check_0__Lake_Check_safeResolveWorkspace_spec__3(lean_object* v_s_977_){
_start:
{
lean_object* v___x_978_; 
v___x_978_ = lean_obj_once(&l_String_Slice_splitToSubslice___at___00__private_Lake_CLI_Check_0__Lake_Check_safeResolveWorkspace_spec__3___closed__0, &l_String_Slice_splitToSubslice___at___00__private_Lake_CLI_Check_0__Lake_Check_safeResolveWorkspace_spec__3___closed__0_once, _init_l_String_Slice_splitToSubslice___at___00__private_Lake_CLI_Check_0__Lake_Check_safeResolveWorkspace_spec__3___closed__0);
return v___x_978_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00__private_Lake_CLI_Check_0__Lake_Check_safeResolveWorkspace_spec__3___boxed(lean_object* v_s_979_){
_start:
{
lean_object* v_res_980_; 
v_res_980_ = l_String_Slice_splitToSubslice___at___00__private_Lake_CLI_Check_0__Lake_Check_safeResolveWorkspace_spec__3(v_s_979_);
lean_dec_ref(v_s_979_);
return v_res_980_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lake_CLI_Check_0__Lake_Check_safeResolveWorkspace_spec__4___redArg(lean_object* v_a_981_, lean_object* v___x_982_, lean_object* v___x_983_, lean_object* v_a_984_, lean_object* v_b_985_){
_start:
{
lean_object* v_it_987_; lean_object* v_startInclusive_988_; lean_object* v_endExclusive_989_; 
if (lean_obj_tag(v_a_984_) == 0)
{
lean_object* v_currPos_994_; lean_object* v_searcher_995_; lean_object* v___x_997_; uint8_t v_isShared_998_; uint8_t v_isSharedCheck_1018_; 
v_currPos_994_ = lean_ctor_get(v_a_984_, 0);
v_searcher_995_ = lean_ctor_get(v_a_984_, 1);
v_isSharedCheck_1018_ = !lean_is_exclusive(v_a_984_);
if (v_isSharedCheck_1018_ == 0)
{
v___x_997_ = v_a_984_;
v_isShared_998_ = v_isSharedCheck_1018_;
goto v_resetjp_996_;
}
else
{
lean_inc(v_searcher_995_);
lean_inc(v_currPos_994_);
lean_dec(v_a_984_);
v___x_997_ = lean_box(0);
v_isShared_998_ = v_isSharedCheck_1018_;
goto v_resetjp_996_;
}
v_resetjp_996_:
{
uint8_t v_decide_999_; 
v_decide_999_ = lean_nat_dec_eq(v_searcher_995_, v___x_983_);
if (v_decide_999_ == 0)
{
uint32_t v___x_1000_; uint32_t v___x_1001_; uint8_t v___x_1002_; 
v___x_1000_ = 10;
v___x_1001_ = lean_string_utf8_get_fast(v_a_981_, v_searcher_995_);
v___x_1002_ = lean_uint32_dec_eq(v___x_1001_, v___x_1000_);
if (v___x_1002_ == 0)
{
lean_object* v___x_1003_; lean_object* v___x_1005_; 
v___x_1003_ = lean_string_utf8_next_fast(v_a_981_, v_searcher_995_);
lean_dec(v_searcher_995_);
if (v_isShared_998_ == 0)
{
lean_ctor_set(v___x_997_, 1, v___x_1003_);
v___x_1005_ = v___x_997_;
goto v_reusejp_1004_;
}
else
{
lean_object* v_reuseFailAlloc_1007_; 
v_reuseFailAlloc_1007_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1007_, 0, v_currPos_994_);
lean_ctor_set(v_reuseFailAlloc_1007_, 1, v___x_1003_);
v___x_1005_ = v_reuseFailAlloc_1007_;
goto v_reusejp_1004_;
}
v_reusejp_1004_:
{
v_a_984_ = v___x_1005_;
goto _start;
}
}
else
{
lean_object* v___x_1008_; lean_object* v___x_1009_; lean_object* v___x_1010_; lean_object* v_slice_1011_; lean_object* v_nextIt_1013_; 
v___x_1008_ = lean_string_utf8_next_fast(v_a_981_, v_searcher_995_);
v___x_1009_ = lean_nat_sub(v___x_1008_, v_searcher_995_);
v___x_1010_ = lean_nat_add(v_searcher_995_, v___x_1009_);
lean_dec(v___x_1009_);
v_slice_1011_ = l_String_Slice_subslice_x21(v___x_982_, v_currPos_994_, v_searcher_995_);
lean_inc(v___x_1010_);
if (v_isShared_998_ == 0)
{
lean_ctor_set(v___x_997_, 1, v___x_1010_);
lean_ctor_set(v___x_997_, 0, v___x_1010_);
v_nextIt_1013_ = v___x_997_;
goto v_reusejp_1012_;
}
else
{
lean_object* v_reuseFailAlloc_1016_; 
v_reuseFailAlloc_1016_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1016_, 0, v___x_1010_);
lean_ctor_set(v_reuseFailAlloc_1016_, 1, v___x_1010_);
v_nextIt_1013_ = v_reuseFailAlloc_1016_;
goto v_reusejp_1012_;
}
v_reusejp_1012_:
{
lean_object* v_startInclusive_1014_; lean_object* v_endExclusive_1015_; 
v_startInclusive_1014_ = lean_ctor_get(v_slice_1011_, 0);
lean_inc(v_startInclusive_1014_);
v_endExclusive_1015_ = lean_ctor_get(v_slice_1011_, 1);
lean_inc(v_endExclusive_1015_);
lean_dec_ref(v_slice_1011_);
v_it_987_ = v_nextIt_1013_;
v_startInclusive_988_ = v_startInclusive_1014_;
v_endExclusive_989_ = v_endExclusive_1015_;
goto v___jp_986_;
}
}
}
else
{
lean_object* v___x_1017_; 
lean_del_object(v___x_997_);
lean_dec(v_searcher_995_);
v___x_1017_ = lean_box(1);
lean_inc(v___x_983_);
v_it_987_ = v___x_1017_;
v_startInclusive_988_ = v_currPos_994_;
v_endExclusive_989_ = v___x_983_;
goto v___jp_986_;
}
}
}
else
{
lean_dec(v___x_983_);
lean_dec_ref(v_a_981_);
return v_b_985_;
}
v___jp_986_:
{
lean_object* v___x_990_; lean_object* v___x_991_; lean_object* v___x_992_; 
lean_inc_ref(v_a_981_);
v___x_990_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_990_, 0, v_a_981_);
lean_ctor_set(v___x_990_, 1, v_startInclusive_988_);
lean_ctor_set(v___x_990_, 2, v_endExclusive_989_);
v___x_991_ = l_String_Slice_toString(v___x_990_);
lean_dec_ref_known(v___x_990_, 3);
v___x_992_ = lean_array_push(v_b_985_, v___x_991_);
v_a_984_ = v_it_987_;
v_b_985_ = v___x_992_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lake_CLI_Check_0__Lake_Check_safeResolveWorkspace_spec__4___redArg___boxed(lean_object* v_a_1019_, lean_object* v___x_1020_, lean_object* v___x_1021_, lean_object* v_a_1022_, lean_object* v_b_1023_){
_start:
{
lean_object* v_res_1024_; 
v_res_1024_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lake_CLI_Check_0__Lake_Check_safeResolveWorkspace_spec__4___redArg(v_a_1019_, v___x_1020_, v___x_1021_, v_a_1022_, v_b_1023_);
lean_dec_ref(v___x_1020_);
return v_res_1024_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lake_CLI_Check_0__Lake_Check_safeResolveWorkspace_spec__5___redArg(lean_object* v_as_x27_1025_, lean_object* v_b_1026_){
_start:
{
if (lean_obj_tag(v_as_x27_1025_) == 0)
{
lean_object* v___x_1028_; 
v___x_1028_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1028_, 0, v_b_1026_);
return v___x_1028_;
}
else
{
lean_object* v_head_1029_; lean_object* v_tail_1030_; lean_object* v_fst_1031_; lean_object* v_snd_1032_; lean_object* v___x_1034_; uint8_t v_isShared_1035_; uint8_t v_isSharedCheck_1054_; 
v_head_1029_ = lean_ctor_get(v_as_x27_1025_, 0);
v_tail_1030_ = lean_ctor_get(v_as_x27_1025_, 1);
v_fst_1031_ = lean_ctor_get(v_b_1026_, 0);
v_snd_1032_ = lean_ctor_get(v_b_1026_, 1);
v_isSharedCheck_1054_ = !lean_is_exclusive(v_b_1026_);
if (v_isSharedCheck_1054_ == 0)
{
v___x_1034_ = v_b_1026_;
v_isShared_1035_ = v_isSharedCheck_1054_;
goto v_resetjp_1033_;
}
else
{
lean_inc(v_snd_1032_);
lean_inc(v_fst_1031_);
lean_dec(v_b_1026_);
v___x_1034_ = lean_box(0);
v_isShared_1035_ = v_isSharedCheck_1054_;
goto v_resetjp_1033_;
}
v_resetjp_1033_:
{
lean_object* v___x_1036_; 
lean_inc(v_head_1029_);
v___x_1036_ = l_String_dropPrefix_x3f___at___00__private_Lake_CLI_Check_0__Lake_Check_safeResolveWorkspace_spec__0___redArg(v_head_1029_);
if (lean_obj_tag(v___x_1036_) == 1)
{
lean_object* v_val_1037_; lean_object* v___x_1038_; lean_object* v___x_1040_; 
lean_dec(v_fst_1031_);
v_val_1037_ = lean_ctor_get(v___x_1036_, 0);
lean_inc(v_val_1037_);
lean_dec_ref_known(v___x_1036_, 1);
v___x_1038_ = l_String_Slice_toString(v_val_1037_);
lean_dec(v_val_1037_);
if (v_isShared_1035_ == 0)
{
lean_ctor_set(v___x_1034_, 0, v___x_1038_);
v___x_1040_ = v___x_1034_;
goto v_reusejp_1039_;
}
else
{
lean_object* v_reuseFailAlloc_1042_; 
v_reuseFailAlloc_1042_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1042_, 0, v___x_1038_);
lean_ctor_set(v_reuseFailAlloc_1042_, 1, v_snd_1032_);
v___x_1040_ = v_reuseFailAlloc_1042_;
goto v_reusejp_1039_;
}
v_reusejp_1039_:
{
v_as_x27_1025_ = v_tail_1030_;
v_b_1026_ = v___x_1040_;
goto _start;
}
}
else
{
lean_object* v___x_1043_; 
lean_dec(v___x_1036_);
lean_inc(v_head_1029_);
v___x_1043_ = l_String_dropPrefix_x3f___at___00__private_Lake_CLI_Check_0__Lake_Check_safeResolveWorkspace_spec__1___redArg(v_head_1029_);
if (lean_obj_tag(v___x_1043_) == 1)
{
lean_object* v_val_1044_; lean_object* v___x_1045_; lean_object* v___x_1047_; 
lean_dec(v_snd_1032_);
v_val_1044_ = lean_ctor_get(v___x_1043_, 0);
lean_inc(v_val_1044_);
lean_dec_ref_known(v___x_1043_, 1);
v___x_1045_ = l_String_Slice_toString(v_val_1044_);
lean_dec(v_val_1044_);
if (v_isShared_1035_ == 0)
{
lean_ctor_set(v___x_1034_, 1, v___x_1045_);
v___x_1047_ = v___x_1034_;
goto v_reusejp_1046_;
}
else
{
lean_object* v_reuseFailAlloc_1049_; 
v_reuseFailAlloc_1049_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1049_, 0, v_fst_1031_);
lean_ctor_set(v_reuseFailAlloc_1049_, 1, v___x_1045_);
v___x_1047_ = v_reuseFailAlloc_1049_;
goto v_reusejp_1046_;
}
v_reusejp_1046_:
{
v_as_x27_1025_ = v_tail_1030_;
v_b_1026_ = v___x_1047_;
goto _start;
}
}
else
{
lean_object* v___x_1051_; 
lean_dec(v___x_1043_);
if (v_isShared_1035_ == 0)
{
v___x_1051_ = v___x_1034_;
goto v_reusejp_1050_;
}
else
{
lean_object* v_reuseFailAlloc_1053_; 
v_reuseFailAlloc_1053_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1053_, 0, v_fst_1031_);
lean_ctor_set(v_reuseFailAlloc_1053_, 1, v_snd_1032_);
v___x_1051_ = v_reuseFailAlloc_1053_;
goto v_reusejp_1050_;
}
v_reusejp_1050_:
{
v_as_x27_1025_ = v_tail_1030_;
v_b_1026_ = v___x_1051_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lake_CLI_Check_0__Lake_Check_safeResolveWorkspace_spec__5___redArg___boxed(lean_object* v_as_x27_1055_, lean_object* v_b_1056_, lean_object* v___y_1057_){
_start:
{
lean_object* v_res_1058_; 
v_res_1058_ = l_List_forIn_x27_loop___at___00__private_Lake_CLI_Check_0__Lake_Check_safeResolveWorkspace_spec__5___redArg(v_as_x27_1055_, v_b_1056_);
lean_dec(v_as_x27_1055_);
return v_res_1058_;
}
}
LEAN_EXPORT lean_object* l_IO_print___at___00IO_println___at___00__private_Lake_CLI_Check_0__Lake_Check_safeResolveWorkspace_spec__2_spec__2(lean_object* v_s_1059_){
_start:
{
lean_object* v___x_1061_; lean_object* v_putStr_1062_; lean_object* v___x_1063_; 
v___x_1061_ = lean_get_stdout();
v_putStr_1062_ = lean_ctor_get(v___x_1061_, 4);
lean_inc_ref(v_putStr_1062_);
lean_dec_ref(v___x_1061_);
v___x_1063_ = lean_apply_2(v_putStr_1062_, v_s_1059_, lean_box(0));
return v___x_1063_;
}
}
LEAN_EXPORT lean_object* l_IO_print___at___00IO_println___at___00__private_Lake_CLI_Check_0__Lake_Check_safeResolveWorkspace_spec__2_spec__2___boxed(lean_object* v_s_1064_, lean_object* v_a_1065_){
_start:
{
lean_object* v_res_1066_; 
v_res_1066_ = l_IO_print___at___00IO_println___at___00__private_Lake_CLI_Check_0__Lake_Check_safeResolveWorkspace_spec__2_spec__2(v_s_1064_);
return v_res_1066_;
}
}
LEAN_EXPORT lean_object* l_IO_println___at___00__private_Lake_CLI_Check_0__Lake_Check_safeResolveWorkspace_spec__2(lean_object* v_s_1067_){
_start:
{
uint32_t v___x_1069_; lean_object* v___x_1070_; lean_object* v___x_1071_; 
v___x_1069_ = 10;
v___x_1070_ = lean_string_push(v_s_1067_, v___x_1069_);
v___x_1071_ = l_IO_print___at___00IO_println___at___00__private_Lake_CLI_Check_0__Lake_Check_safeResolveWorkspace_spec__2_spec__2(v___x_1070_);
return v___x_1071_;
}
}
LEAN_EXPORT lean_object* l_IO_println___at___00__private_Lake_CLI_Check_0__Lake_Check_safeResolveWorkspace_spec__2___boxed(lean_object* v_s_1072_, lean_object* v_a_1073_){
_start:
{
lean_object* v_res_1074_; 
v_res_1074_ = l_IO_println___at___00__private_Lake_CLI_Check_0__Lake_Check_safeResolveWorkspace_spec__2(v_s_1072_);
return v_res_1074_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_Check_0__Lake_Check_safeResolveWorkspace(lean_object* v_a_1108_){
_start:
{
lean_object* v___x_1113_; lean_object* v___x_1114_; 
v___x_1113_ = ((lean_object*)(l___private_Lake_CLI_Check_0__Lake_Check_safeResolveWorkspace___closed__2));
v___x_1114_ = l_IO_println___at___00__private_Lake_CLI_Check_0__Lake_Check_safeResolveWorkspace_spec__2(v___x_1113_);
if (lean_obj_tag(v___x_1114_) == 0)
{
lean_object* v_projectDir_1115_; lean_object* v_leanPrefix_1116_; lean_object* v_whichLake_1117_; lean_object* v_lakeHome_1118_; lean_object* v___x_1119_; lean_object* v___x_1120_; lean_object* v___y_1122_; lean_object* v_leanPrefix_1123_; lean_object* v_whichLake_1124_; lean_object* v_lakeHome_1125_; uint8_t v___x_1180_; 
lean_dec_ref_known(v___x_1114_, 1);
v_projectDir_1115_ = lean_ctor_get(v_a_1108_, 0);
v_leanPrefix_1116_ = lean_ctor_get(v_a_1108_, 6);
v_whichLake_1117_ = lean_ctor_get(v_a_1108_, 10);
v_lakeHome_1118_ = lean_ctor_get(v_a_1108_, 11);
v___x_1119_ = ((lean_object*)(l___private_Lake_CLI_Check_0__Lake_Check_safeResolveWorkspace___closed__3));
lean_inc_ref(v_projectDir_1115_);
v___x_1120_ = l_System_FilePath_join(v_projectDir_1115_, v___x_1119_);
v___x_1180_ = l_System_FilePath_pathExists(v___x_1120_);
if (v___x_1180_ == 0)
{
lean_object* v___x_1181_; 
v___x_1181_ = lean_io_create_dir(v___x_1120_);
if (lean_obj_tag(v___x_1181_) == 0)
{
lean_dec_ref_known(v___x_1181_, 1);
v___y_1122_ = v_a_1108_;
v_leanPrefix_1123_ = v_leanPrefix_1116_;
v_whichLake_1124_ = v_whichLake_1117_;
v_lakeHome_1125_ = v_lakeHome_1118_;
goto v___jp_1121_;
}
else
{
lean_object* v_a_1182_; lean_object* v___x_1184_; uint8_t v_isShared_1185_; uint8_t v_isSharedCheck_1189_; 
lean_dec_ref(v___x_1120_);
v_a_1182_ = lean_ctor_get(v___x_1181_, 0);
v_isSharedCheck_1189_ = !lean_is_exclusive(v___x_1181_);
if (v_isSharedCheck_1189_ == 0)
{
v___x_1184_ = v___x_1181_;
v_isShared_1185_ = v_isSharedCheck_1189_;
goto v_resetjp_1183_;
}
else
{
lean_inc(v_a_1182_);
lean_dec(v___x_1181_);
v___x_1184_ = lean_box(0);
v_isShared_1185_ = v_isSharedCheck_1189_;
goto v_resetjp_1183_;
}
v_resetjp_1183_:
{
lean_object* v___x_1187_; 
if (v_isShared_1185_ == 0)
{
v___x_1187_ = v___x_1184_;
goto v_reusejp_1186_;
}
else
{
lean_object* v_reuseFailAlloc_1188_; 
v_reuseFailAlloc_1188_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1188_, 0, v_a_1182_);
v___x_1187_ = v_reuseFailAlloc_1188_;
goto v_reusejp_1186_;
}
v_reusejp_1186_:
{
return v___x_1187_;
}
}
}
}
else
{
v___y_1122_ = v_a_1108_;
v_leanPrefix_1123_ = v_leanPrefix_1116_;
v_whichLake_1124_ = v_whichLake_1117_;
v_lakeHome_1125_ = v_lakeHome_1118_;
goto v___jp_1121_;
}
v___jp_1121_:
{
lean_object* v___x_1126_; lean_object* v___x_1127_; lean_object* v___x_1128_; lean_object* v___x_1129_; lean_object* v___x_1130_; lean_object* v___x_1131_; lean_object* v___x_1132_; lean_object* v___x_1133_; lean_object* v___x_1134_; lean_object* v___x_1135_; lean_object* v___x_1136_; lean_object* v___x_1137_; lean_object* v___x_1138_; uint8_t v___x_1139_; lean_object* v___x_1140_; lean_object* v___x_1141_; lean_object* v___x_1142_; 
v___x_1126_ = lean_unsigned_to_nat(1u);
v___x_1127_ = lean_mk_empty_array_with_capacity(v___x_1126_);
v___x_1128_ = ((lean_object*)(l___private_Lake_CLI_Check_0__Lake_Check_safeResolveWorkspace___closed__5));
v___x_1129_ = ((lean_object*)(l___private_Lake_CLI_Check_0__Lake_Check_safeResolveWorkspace___closed__8));
v___x_1130_ = ((lean_object*)(l___private_Lake_CLI_Check_0__Lake_Check_safeResolveWorkspace___closed__12));
v___x_1131_ = lean_unsigned_to_nat(3u);
v___x_1132_ = lean_mk_empty_array_with_capacity(v___x_1131_);
lean_inc_ref(v_projectDir_1115_);
v___x_1133_ = lean_array_push(v___x_1132_, v_projectDir_1115_);
lean_inc_ref(v_leanPrefix_1123_);
v___x_1134_ = lean_array_push(v___x_1133_, v_leanPrefix_1123_);
lean_inc_ref(v_lakeHome_1125_);
v___x_1135_ = lean_array_push(v___x_1134_, v_lakeHome_1125_);
v___x_1136_ = lean_array_push(v___x_1127_, v___x_1120_);
v___x_1137_ = lean_unsigned_to_nat(0u);
v___x_1138_ = ((lean_object*)(l___private_Lake_CLI_Check_0__Lake_Check_safeResolveWorkspace___closed__13));
v___x_1139_ = 1;
v___x_1140_ = lean_box(0);
lean_inc_ref(v_whichLake_1124_);
v___x_1141_ = lean_alloc_ctor(0, 8, 1);
lean_ctor_set(v___x_1141_, 0, v_whichLake_1124_);
lean_ctor_set(v___x_1141_, 1, v___x_1128_);
lean_ctor_set(v___x_1141_, 2, v___x_1129_);
lean_ctor_set(v___x_1141_, 3, v___x_1130_);
lean_ctor_set(v___x_1141_, 4, v___x_1135_);
lean_ctor_set(v___x_1141_, 5, v___x_1136_);
lean_ctor_set(v___x_1141_, 6, v___x_1138_);
lean_ctor_set(v___x_1141_, 7, v___x_1140_);
lean_ctor_set_uint8(v___x_1141_, sizeof(void*)*8, v___x_1139_);
v___x_1142_ = l___private_Lake_CLI_Check_0__Lake_Check_runSandBoxedWithStdout(v___x_1141_, v___y_1122_);
if (lean_obj_tag(v___x_1142_) == 0)
{
lean_object* v_a_1143_; lean_object* v___x_1144_; lean_object* v___x_1145_; lean_object* v___x_1146_; lean_object* v___x_1147_; lean_object* v___x_1148_; lean_object* v___x_1149_; lean_object* v___x_1150_; lean_object* v_a_1151_; lean_object* v___x_1153_; uint8_t v_isShared_1154_; uint8_t v_isSharedCheck_1171_; 
v_a_1143_ = lean_ctor_get(v___x_1142_, 0);
lean_inc_n(v_a_1143_, 2);
lean_dec_ref_known(v___x_1142_, 1);
v___x_1144_ = lean_string_utf8_byte_size(v_a_1143_);
v___x_1145_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1145_, 0, v_a_1143_);
lean_ctor_set(v___x_1145_, 1, v___x_1137_);
lean_ctor_set(v___x_1145_, 2, v___x_1144_);
v___x_1146_ = lean_obj_once(&l_String_Slice_splitToSubslice___at___00__private_Lake_CLI_Check_0__Lake_Check_safeResolveWorkspace_spec__3___closed__0, &l_String_Slice_splitToSubslice___at___00__private_Lake_CLI_Check_0__Lake_Check_safeResolveWorkspace_spec__3___closed__0_once, _init_l_String_Slice_splitToSubslice___at___00__private_Lake_CLI_Check_0__Lake_Check_safeResolveWorkspace_spec__3___closed__0);
v___x_1147_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lake_CLI_Check_0__Lake_Check_safeResolveWorkspace_spec__4___redArg(v_a_1143_, v___x_1145_, v___x_1144_, v___x_1146_, v___x_1138_);
lean_dec_ref_known(v___x_1145_, 3);
v___x_1148_ = lean_array_to_list(v___x_1147_);
v___x_1149_ = ((lean_object*)(l___private_Lake_CLI_Check_0__Lake_Check_safeResolveWorkspace___closed__15));
v___x_1150_ = l_List_forIn_x27_loop___at___00__private_Lake_CLI_Check_0__Lake_Check_safeResolveWorkspace_spec__5___redArg(v___x_1148_, v___x_1149_);
lean_dec(v___x_1148_);
v_a_1151_ = lean_ctor_get(v___x_1150_, 0);
v_isSharedCheck_1171_ = !lean_is_exclusive(v___x_1150_);
if (v_isSharedCheck_1171_ == 0)
{
v___x_1153_ = v___x_1150_;
v_isShared_1154_ = v_isSharedCheck_1171_;
goto v_resetjp_1152_;
}
else
{
lean_inc(v_a_1151_);
lean_dec(v___x_1150_);
v___x_1153_ = lean_box(0);
v_isShared_1154_ = v_isSharedCheck_1171_;
goto v_resetjp_1152_;
}
v_resetjp_1152_:
{
lean_object* v_fst_1155_; lean_object* v_snd_1156_; lean_object* v___x_1158_; uint8_t v_isShared_1159_; uint8_t v_isSharedCheck_1170_; 
v_fst_1155_ = lean_ctor_get(v_a_1151_, 0);
v_snd_1156_ = lean_ctor_get(v_a_1151_, 1);
v_isSharedCheck_1170_ = !lean_is_exclusive(v_a_1151_);
if (v_isSharedCheck_1170_ == 0)
{
v___x_1158_ = v_a_1151_;
v_isShared_1159_ = v_isSharedCheck_1170_;
goto v_resetjp_1157_;
}
else
{
lean_inc(v_snd_1156_);
lean_inc(v_fst_1155_);
lean_dec(v_a_1151_);
v___x_1158_ = lean_box(0);
v_isShared_1159_ = v_isSharedCheck_1170_;
goto v_resetjp_1157_;
}
v_resetjp_1157_:
{
lean_object* v___x_1160_; uint8_t v___x_1161_; 
v___x_1160_ = lean_string_utf8_byte_size(v_fst_1155_);
v___x_1161_ = lean_nat_dec_eq(v___x_1160_, v___x_1137_);
if (v___x_1161_ == 0)
{
lean_object* v___x_1162_; uint8_t v___x_1163_; 
v___x_1162_ = lean_string_utf8_byte_size(v_snd_1156_);
v___x_1163_ = lean_nat_dec_eq(v___x_1162_, v___x_1137_);
if (v___x_1163_ == 0)
{
lean_object* v___x_1165_; 
if (v_isShared_1159_ == 0)
{
v___x_1165_ = v___x_1158_;
goto v_reusejp_1164_;
}
else
{
lean_object* v_reuseFailAlloc_1169_; 
v_reuseFailAlloc_1169_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1169_, 0, v_fst_1155_);
lean_ctor_set(v_reuseFailAlloc_1169_, 1, v_snd_1156_);
v___x_1165_ = v_reuseFailAlloc_1169_;
goto v_reusejp_1164_;
}
v_reusejp_1164_:
{
lean_object* v___x_1167_; 
if (v_isShared_1154_ == 0)
{
lean_ctor_set(v___x_1153_, 0, v___x_1165_);
v___x_1167_ = v___x_1153_;
goto v_reusejp_1166_;
}
else
{
lean_object* v_reuseFailAlloc_1168_; 
v_reuseFailAlloc_1168_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1168_, 0, v___x_1165_);
v___x_1167_ = v_reuseFailAlloc_1168_;
goto v_reusejp_1166_;
}
v_reusejp_1166_:
{
return v___x_1167_;
}
}
}
else
{
lean_del_object(v___x_1158_);
lean_dec(v_snd_1156_);
lean_dec(v_fst_1155_);
lean_del_object(v___x_1153_);
goto v___jp_1110_;
}
}
else
{
lean_del_object(v___x_1158_);
lean_dec(v_snd_1156_);
lean_dec(v_fst_1155_);
lean_del_object(v___x_1153_);
goto v___jp_1110_;
}
}
}
}
else
{
lean_object* v_a_1172_; lean_object* v___x_1174_; uint8_t v_isShared_1175_; uint8_t v_isSharedCheck_1179_; 
v_a_1172_ = lean_ctor_get(v___x_1142_, 0);
v_isSharedCheck_1179_ = !lean_is_exclusive(v___x_1142_);
if (v_isSharedCheck_1179_ == 0)
{
v___x_1174_ = v___x_1142_;
v_isShared_1175_ = v_isSharedCheck_1179_;
goto v_resetjp_1173_;
}
else
{
lean_inc(v_a_1172_);
lean_dec(v___x_1142_);
v___x_1174_ = lean_box(0);
v_isShared_1175_ = v_isSharedCheck_1179_;
goto v_resetjp_1173_;
}
v_resetjp_1173_:
{
lean_object* v___x_1177_; 
if (v_isShared_1175_ == 0)
{
v___x_1177_ = v___x_1174_;
goto v_reusejp_1176_;
}
else
{
lean_object* v_reuseFailAlloc_1178_; 
v_reuseFailAlloc_1178_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1178_, 0, v_a_1172_);
v___x_1177_ = v_reuseFailAlloc_1178_;
goto v_reusejp_1176_;
}
v_reusejp_1176_:
{
return v___x_1177_;
}
}
}
}
}
else
{
lean_object* v_a_1190_; lean_object* v___x_1192_; uint8_t v_isShared_1193_; uint8_t v_isSharedCheck_1197_; 
v_a_1190_ = lean_ctor_get(v___x_1114_, 0);
v_isSharedCheck_1197_ = !lean_is_exclusive(v___x_1114_);
if (v_isSharedCheck_1197_ == 0)
{
v___x_1192_ = v___x_1114_;
v_isShared_1193_ = v_isSharedCheck_1197_;
goto v_resetjp_1191_;
}
else
{
lean_inc(v_a_1190_);
lean_dec(v___x_1114_);
v___x_1192_ = lean_box(0);
v_isShared_1193_ = v_isSharedCheck_1197_;
goto v_resetjp_1191_;
}
v_resetjp_1191_:
{
lean_object* v___x_1195_; 
if (v_isShared_1193_ == 0)
{
v___x_1195_ = v___x_1192_;
goto v_reusejp_1194_;
}
else
{
lean_object* v_reuseFailAlloc_1196_; 
v_reuseFailAlloc_1196_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1196_, 0, v_a_1190_);
v___x_1195_ = v_reuseFailAlloc_1196_;
goto v_reusejp_1194_;
}
v_reusejp_1194_:
{
return v___x_1195_;
}
}
}
v___jp_1110_:
{
lean_object* v___x_1111_; lean_object* v___x_1112_; 
v___x_1111_ = ((lean_object*)(l___private_Lake_CLI_Check_0__Lake_Check_safeResolveWorkspace___closed__1));
v___x_1112_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1112_, 0, v___x_1111_);
return v___x_1112_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_Check_0__Lake_Check_safeResolveWorkspace___boxed(lean_object* v_a_1198_, lean_object* v_a_1199_){
_start:
{
lean_object* v_res_1200_; 
v_res_1200_ = l___private_Lake_CLI_Check_0__Lake_Check_safeResolveWorkspace(v_a_1198_);
lean_dec_ref(v_a_1198_);
return v_res_1200_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lake_CLI_Check_0__Lake_Check_safeResolveWorkspace_spec__4(lean_object* v_a_1201_, lean_object* v___x_1202_, lean_object* v___x_1203_, lean_object* v_inst_1204_, lean_object* v_R_1205_, lean_object* v_a_1206_, lean_object* v_b_1207_){
_start:
{
lean_object* v___x_1208_; 
v___x_1208_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lake_CLI_Check_0__Lake_Check_safeResolveWorkspace_spec__4___redArg(v_a_1201_, v___x_1202_, v___x_1203_, v_a_1206_, v_b_1207_);
return v___x_1208_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lake_CLI_Check_0__Lake_Check_safeResolveWorkspace_spec__4___boxed(lean_object* v_a_1209_, lean_object* v___x_1210_, lean_object* v___x_1211_, lean_object* v_inst_1212_, lean_object* v_R_1213_, lean_object* v_a_1214_, lean_object* v_b_1215_){
_start:
{
lean_object* v_res_1216_; 
v_res_1216_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lake_CLI_Check_0__Lake_Check_safeResolveWorkspace_spec__4(v_a_1209_, v___x_1210_, v___x_1211_, v_inst_1212_, v_R_1213_, v_a_1214_, v_b_1215_);
lean_dec_ref(v___x_1210_);
return v_res_1216_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lake_CLI_Check_0__Lake_Check_safeResolveWorkspace_spec__5(lean_object* v_as_1217_, lean_object* v_as_x27_1218_, lean_object* v_b_1219_, lean_object* v_a_1220_, lean_object* v___y_1221_){
_start:
{
lean_object* v___x_1223_; 
v___x_1223_ = l_List_forIn_x27_loop___at___00__private_Lake_CLI_Check_0__Lake_Check_safeResolveWorkspace_spec__5___redArg(v_as_x27_1218_, v_b_1219_);
return v___x_1223_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lake_CLI_Check_0__Lake_Check_safeResolveWorkspace_spec__5___boxed(lean_object* v_as_1224_, lean_object* v_as_x27_1225_, lean_object* v_b_1226_, lean_object* v_a_1227_, lean_object* v___y_1228_, lean_object* v___y_1229_){
_start:
{
lean_object* v_res_1230_; 
v_res_1230_ = l_List_forIn_x27_loop___at___00__private_Lake_CLI_Check_0__Lake_Check_safeResolveWorkspace_spec__5(v_as_1224_, v_as_x27_1225_, v_b_1226_, v_a_1227_, v___y_1228_);
lean_dec_ref(v___y_1228_);
lean_dec(v_as_x27_1225_);
lean_dec(v_as_1224_);
return v_res_1230_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_Check_0__Lake_Check_safeResolveDeps(lean_object* v_a_1244_){
_start:
{
lean_object* v___x_1246_; lean_object* v___x_1247_; 
v___x_1246_ = ((lean_object*)(l___private_Lake_CLI_Check_0__Lake_Check_safeResolveWorkspace___closed__2));
v___x_1247_ = l_IO_println___at___00__private_Lake_CLI_Check_0__Lake_Check_safeResolveWorkspace_spec__2(v___x_1246_);
if (lean_obj_tag(v___x_1247_) == 0)
{
lean_object* v_projectDir_1248_; lean_object* v_leanPrefix_1249_; lean_object* v_whichLake_1250_; lean_object* v_lakeHome_1251_; lean_object* v___x_1252_; lean_object* v___x_1253_; lean_object* v___y_1255_; lean_object* v_leanPrefix_1256_; lean_object* v_whichLake_1257_; lean_object* v_lakeHome_1258_; uint8_t v___x_1275_; 
lean_dec_ref_known(v___x_1247_, 1);
v_projectDir_1248_ = lean_ctor_get(v_a_1244_, 0);
v_leanPrefix_1249_ = lean_ctor_get(v_a_1244_, 6);
v_whichLake_1250_ = lean_ctor_get(v_a_1244_, 10);
v_lakeHome_1251_ = lean_ctor_get(v_a_1244_, 11);
v___x_1252_ = ((lean_object*)(l___private_Lake_CLI_Check_0__Lake_Check_safeResolveWorkspace___closed__3));
lean_inc_ref(v_projectDir_1248_);
v___x_1253_ = l_System_FilePath_join(v_projectDir_1248_, v___x_1252_);
v___x_1275_ = l_System_FilePath_pathExists(v___x_1253_);
if (v___x_1275_ == 0)
{
lean_object* v___x_1276_; 
v___x_1276_ = lean_io_create_dir(v___x_1253_);
if (lean_obj_tag(v___x_1276_) == 0)
{
lean_dec_ref_known(v___x_1276_, 1);
v___y_1255_ = v_a_1244_;
v_leanPrefix_1256_ = v_leanPrefix_1249_;
v_whichLake_1257_ = v_whichLake_1250_;
v_lakeHome_1258_ = v_lakeHome_1251_;
goto v___jp_1254_;
}
else
{
lean_dec_ref(v___x_1253_);
return v___x_1276_;
}
}
else
{
v___y_1255_ = v_a_1244_;
v_leanPrefix_1256_ = v_leanPrefix_1249_;
v_whichLake_1257_ = v_whichLake_1250_;
v_lakeHome_1258_ = v_lakeHome_1251_;
goto v___jp_1254_;
}
v___jp_1254_:
{
lean_object* v___x_1259_; lean_object* v___x_1260_; lean_object* v___x_1261_; lean_object* v___x_1262_; lean_object* v___x_1263_; lean_object* v___x_1264_; lean_object* v___x_1265_; lean_object* v___x_1266_; lean_object* v___x_1267_; lean_object* v___x_1268_; lean_object* v___x_1269_; lean_object* v___x_1270_; uint8_t v___x_1271_; lean_object* v___x_1272_; lean_object* v___x_1273_; lean_object* v___x_1274_; 
v___x_1259_ = lean_unsigned_to_nat(1u);
v___x_1260_ = lean_mk_empty_array_with_capacity(v___x_1259_);
v___x_1261_ = ((lean_object*)(l___private_Lake_CLI_Check_0__Lake_Check_safeResolveDeps___closed__1));
v___x_1262_ = lean_unsigned_to_nat(3u);
v___x_1263_ = lean_mk_empty_array_with_capacity(v___x_1262_);
v___x_1264_ = ((lean_object*)(l___private_Lake_CLI_Check_0__Lake_Check_safeResolveDeps___closed__2));
v___x_1265_ = ((lean_object*)(l___private_Lake_CLI_Check_0__Lake_Check_safeResolveWorkspace___closed__12));
lean_inc_ref(v_projectDir_1248_);
v___x_1266_ = lean_array_push(v___x_1263_, v_projectDir_1248_);
lean_inc_ref(v_leanPrefix_1256_);
v___x_1267_ = lean_array_push(v___x_1266_, v_leanPrefix_1256_);
lean_inc_ref(v_lakeHome_1258_);
v___x_1268_ = lean_array_push(v___x_1267_, v_lakeHome_1258_);
v___x_1269_ = lean_array_push(v___x_1260_, v___x_1253_);
v___x_1270_ = ((lean_object*)(l___private_Lake_CLI_Check_0__Lake_Check_safeResolveWorkspace___closed__13));
v___x_1271_ = 1;
v___x_1272_ = lean_box(0);
lean_inc_ref(v_whichLake_1257_);
v___x_1273_ = lean_alloc_ctor(0, 8, 1);
lean_ctor_set(v___x_1273_, 0, v_whichLake_1257_);
lean_ctor_set(v___x_1273_, 1, v___x_1261_);
lean_ctor_set(v___x_1273_, 2, v___x_1264_);
lean_ctor_set(v___x_1273_, 3, v___x_1265_);
lean_ctor_set(v___x_1273_, 4, v___x_1268_);
lean_ctor_set(v___x_1273_, 5, v___x_1269_);
lean_ctor_set(v___x_1273_, 6, v___x_1270_);
lean_ctor_set(v___x_1273_, 7, v___x_1272_);
lean_ctor_set_uint8(v___x_1273_, sizeof(void*)*8, v___x_1271_);
v___x_1274_ = l___private_Lake_CLI_Check_0__Lake_Check_runSandBoxed(v___x_1273_, v___y_1255_);
return v___x_1274_;
}
}
else
{
return v___x_1247_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_Check_0__Lake_Check_safeResolveDeps___boxed(lean_object* v_a_1277_, lean_object* v_a_1278_){
_start:
{
lean_object* v_res_1279_; 
v_res_1279_ = l___private_Lake_CLI_Check_0__Lake_Check_safeResolveDeps(v_a_1277_);
lean_dec_ref(v_a_1277_);
return v_res_1279_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_withTempFile___at___00__private_Lake_CLI_Check_0__Lake_Check_withSafeBuildAndExport_spec__0___redArg(lean_object* v_f_1289_, lean_object* v___y_1290_){
_start:
{
lean_object* v___x_1292_; 
v___x_1292_ = lean_io_create_tempfile();
if (lean_obj_tag(v___x_1292_) == 0)
{
lean_object* v_a_1293_; lean_object* v_fst_1294_; lean_object* v_snd_1295_; lean_object* v_r_1296_; 
v_a_1293_ = lean_ctor_get(v___x_1292_, 0);
lean_inc(v_a_1293_);
lean_dec_ref_known(v___x_1292_, 1);
v_fst_1294_ = lean_ctor_get(v_a_1293_, 0);
lean_inc(v_fst_1294_);
v_snd_1295_ = lean_ctor_get(v_a_1293_, 1);
lean_inc_n(v_snd_1295_, 2);
lean_dec(v_a_1293_);
lean_inc_ref(v___y_1290_);
v_r_1296_ = lean_apply_4(v_f_1289_, v_fst_1294_, v_snd_1295_, v___y_1290_, lean_box(0));
if (lean_obj_tag(v_r_1296_) == 0)
{
lean_object* v_a_1297_; lean_object* v___x_1298_; 
v_a_1297_ = lean_ctor_get(v_r_1296_, 0);
lean_inc(v_a_1297_);
lean_dec_ref_known(v_r_1296_, 1);
v___x_1298_ = lean_io_remove_file(v_snd_1295_);
lean_dec(v_snd_1295_);
if (lean_obj_tag(v___x_1298_) == 0)
{
lean_object* v___x_1300_; uint8_t v_isShared_1301_; uint8_t v_isSharedCheck_1305_; 
v_isSharedCheck_1305_ = !lean_is_exclusive(v___x_1298_);
if (v_isSharedCheck_1305_ == 0)
{
lean_object* v_unused_1306_; 
v_unused_1306_ = lean_ctor_get(v___x_1298_, 0);
lean_dec(v_unused_1306_);
v___x_1300_ = v___x_1298_;
v_isShared_1301_ = v_isSharedCheck_1305_;
goto v_resetjp_1299_;
}
else
{
lean_dec(v___x_1298_);
v___x_1300_ = lean_box(0);
v_isShared_1301_ = v_isSharedCheck_1305_;
goto v_resetjp_1299_;
}
v_resetjp_1299_:
{
lean_object* v___x_1303_; 
if (v_isShared_1301_ == 0)
{
lean_ctor_set(v___x_1300_, 0, v_a_1297_);
v___x_1303_ = v___x_1300_;
goto v_reusejp_1302_;
}
else
{
lean_object* v_reuseFailAlloc_1304_; 
v_reuseFailAlloc_1304_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1304_, 0, v_a_1297_);
v___x_1303_ = v_reuseFailAlloc_1304_;
goto v_reusejp_1302_;
}
v_reusejp_1302_:
{
return v___x_1303_;
}
}
}
else
{
lean_object* v_a_1307_; lean_object* v___x_1309_; uint8_t v_isShared_1310_; uint8_t v_isSharedCheck_1314_; 
lean_dec(v_a_1297_);
v_a_1307_ = lean_ctor_get(v___x_1298_, 0);
v_isSharedCheck_1314_ = !lean_is_exclusive(v___x_1298_);
if (v_isSharedCheck_1314_ == 0)
{
v___x_1309_ = v___x_1298_;
v_isShared_1310_ = v_isSharedCheck_1314_;
goto v_resetjp_1308_;
}
else
{
lean_inc(v_a_1307_);
lean_dec(v___x_1298_);
v___x_1309_ = lean_box(0);
v_isShared_1310_ = v_isSharedCheck_1314_;
goto v_resetjp_1308_;
}
v_resetjp_1308_:
{
lean_object* v___x_1312_; 
if (v_isShared_1310_ == 0)
{
v___x_1312_ = v___x_1309_;
goto v_reusejp_1311_;
}
else
{
lean_object* v_reuseFailAlloc_1313_; 
v_reuseFailAlloc_1313_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1313_, 0, v_a_1307_);
v___x_1312_ = v_reuseFailAlloc_1313_;
goto v_reusejp_1311_;
}
v_reusejp_1311_:
{
return v___x_1312_;
}
}
}
}
else
{
lean_object* v_a_1315_; lean_object* v___x_1316_; 
v_a_1315_ = lean_ctor_get(v_r_1296_, 0);
lean_inc(v_a_1315_);
lean_dec_ref_known(v_r_1296_, 1);
v___x_1316_ = lean_io_remove_file(v_snd_1295_);
lean_dec(v_snd_1295_);
if (lean_obj_tag(v___x_1316_) == 0)
{
lean_object* v___x_1318_; uint8_t v_isShared_1319_; uint8_t v_isSharedCheck_1323_; 
v_isSharedCheck_1323_ = !lean_is_exclusive(v___x_1316_);
if (v_isSharedCheck_1323_ == 0)
{
lean_object* v_unused_1324_; 
v_unused_1324_ = lean_ctor_get(v___x_1316_, 0);
lean_dec(v_unused_1324_);
v___x_1318_ = v___x_1316_;
v_isShared_1319_ = v_isSharedCheck_1323_;
goto v_resetjp_1317_;
}
else
{
lean_dec(v___x_1316_);
v___x_1318_ = lean_box(0);
v_isShared_1319_ = v_isSharedCheck_1323_;
goto v_resetjp_1317_;
}
v_resetjp_1317_:
{
lean_object* v___x_1321_; 
if (v_isShared_1319_ == 0)
{
lean_ctor_set_tag(v___x_1318_, 1);
lean_ctor_set(v___x_1318_, 0, v_a_1315_);
v___x_1321_ = v___x_1318_;
goto v_reusejp_1320_;
}
else
{
lean_object* v_reuseFailAlloc_1322_; 
v_reuseFailAlloc_1322_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1322_, 0, v_a_1315_);
v___x_1321_ = v_reuseFailAlloc_1322_;
goto v_reusejp_1320_;
}
v_reusejp_1320_:
{
return v___x_1321_;
}
}
}
else
{
lean_object* v_a_1325_; lean_object* v___x_1327_; uint8_t v_isShared_1328_; uint8_t v_isSharedCheck_1332_; 
lean_dec(v_a_1315_);
v_a_1325_ = lean_ctor_get(v___x_1316_, 0);
v_isSharedCheck_1332_ = !lean_is_exclusive(v___x_1316_);
if (v_isSharedCheck_1332_ == 0)
{
v___x_1327_ = v___x_1316_;
v_isShared_1328_ = v_isSharedCheck_1332_;
goto v_resetjp_1326_;
}
else
{
lean_inc(v_a_1325_);
lean_dec(v___x_1316_);
v___x_1327_ = lean_box(0);
v_isShared_1328_ = v_isSharedCheck_1332_;
goto v_resetjp_1326_;
}
v_resetjp_1326_:
{
lean_object* v___x_1330_; 
if (v_isShared_1328_ == 0)
{
v___x_1330_ = v___x_1327_;
goto v_reusejp_1329_;
}
else
{
lean_object* v_reuseFailAlloc_1331_; 
v_reuseFailAlloc_1331_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1331_, 0, v_a_1325_);
v___x_1330_ = v_reuseFailAlloc_1331_;
goto v_reusejp_1329_;
}
v_reusejp_1329_:
{
return v___x_1330_;
}
}
}
}
}
else
{
lean_object* v_a_1333_; lean_object* v___x_1335_; uint8_t v_isShared_1336_; uint8_t v_isSharedCheck_1340_; 
lean_dec_ref(v_f_1289_);
v_a_1333_ = lean_ctor_get(v___x_1292_, 0);
v_isSharedCheck_1340_ = !lean_is_exclusive(v___x_1292_);
if (v_isSharedCheck_1340_ == 0)
{
v___x_1335_ = v___x_1292_;
v_isShared_1336_ = v_isSharedCheck_1340_;
goto v_resetjp_1334_;
}
else
{
lean_inc(v_a_1333_);
lean_dec(v___x_1292_);
v___x_1335_ = lean_box(0);
v_isShared_1336_ = v_isSharedCheck_1340_;
goto v_resetjp_1334_;
}
v_resetjp_1334_:
{
lean_object* v___x_1338_; 
if (v_isShared_1336_ == 0)
{
v___x_1338_ = v___x_1335_;
goto v_reusejp_1337_;
}
else
{
lean_object* v_reuseFailAlloc_1339_; 
v_reuseFailAlloc_1339_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1339_, 0, v_a_1333_);
v___x_1338_ = v_reuseFailAlloc_1339_;
goto v_reusejp_1337_;
}
v_reusejp_1337_:
{
return v___x_1338_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_IO_FS_withTempFile___at___00__private_Lake_CLI_Check_0__Lake_Check_withSafeBuildAndExport_spec__0___redArg___boxed(lean_object* v_f_1341_, lean_object* v___y_1342_, lean_object* v___y_1343_){
_start:
{
lean_object* v_res_1344_; 
v_res_1344_ = l_IO_FS_withTempFile___at___00__private_Lake_CLI_Check_0__Lake_Check_withSafeBuildAndExport_spec__0___redArg(v_f_1341_, v___y_1342_);
lean_dec_ref(v___y_1342_);
return v_res_1344_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_withTempFile___at___00__private_Lake_CLI_Check_0__Lake_Check_withSafeBuildAndExport_spec__0(lean_object* v_00_u03b1_1345_, lean_object* v_f_1346_, lean_object* v___y_1347_){
_start:
{
lean_object* v___x_1349_; 
v___x_1349_ = l_IO_FS_withTempFile___at___00__private_Lake_CLI_Check_0__Lake_Check_withSafeBuildAndExport_spec__0___redArg(v_f_1346_, v___y_1347_);
return v___x_1349_;
}
}
LEAN_EXPORT lean_object* l_IO_FS_withTempFile___at___00__private_Lake_CLI_Check_0__Lake_Check_withSafeBuildAndExport_spec__0___boxed(lean_object* v_00_u03b1_1350_, lean_object* v_f_1351_, lean_object* v___y_1352_, lean_object* v___y_1353_){
_start:
{
lean_object* v_res_1354_; 
v_res_1354_ = l_IO_FS_withTempFile___at___00__private_Lake_CLI_Check_0__Lake_Check_withSafeBuildAndExport_spec__0(v_00_u03b1_1350_, v_f_1351_, v___y_1352_);
lean_dec_ref(v___y_1352_);
return v_res_1354_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_Check_0__Lake_Check_withSafeBuildAndExport___redArg___lam__0(lean_object* v_projectDir_1370_, lean_object* v_f_1371_, lean_object* v_handle_1372_, lean_object* v_path_1373_, lean_object* v___y_1374_){
_start:
{
lean_object* v_leanPrefix_1376_; lean_object* v_whichLake_1377_; lean_object* v_lakeHome_1378_; lean_object* v___x_1379_; lean_object* v___x_1380_; lean_object* v___x_1381_; lean_object* v___x_1382_; lean_object* v___x_1383_; lean_object* v___x_1384_; lean_object* v___x_1385_; lean_object* v___x_1386_; lean_object* v___x_1387_; lean_object* v___x_1388_; lean_object* v___x_1389_; lean_object* v___x_1390_; lean_object* v___x_1391_; lean_object* v___x_1392_; uint8_t v___x_1393_; lean_object* v___x_1394_; lean_object* v___x_1395_; lean_object* v___x_1396_; 
v_leanPrefix_1376_ = lean_ctor_get(v___y_1374_, 6);
v_whichLake_1377_ = lean_ctor_get(v___y_1374_, 10);
v_lakeHome_1378_ = lean_ctor_get(v___y_1374_, 11);
v___x_1379_ = lean_unsigned_to_nat(1u);
v___x_1380_ = lean_mk_empty_array_with_capacity(v___x_1379_);
v___x_1381_ = ((lean_object*)(l___private_Lake_CLI_Check_0__Lake_Check_withSafeBuildAndExport___redArg___lam__0___closed__1));
v___x_1382_ = lean_unsigned_to_nat(3u);
v___x_1383_ = lean_mk_empty_array_with_capacity(v___x_1382_);
v___x_1384_ = ((lean_object*)(l___private_Lake_CLI_Check_0__Lake_Check_safeResolveDeps___closed__2));
v___x_1385_ = ((lean_object*)(l___private_Lake_CLI_Check_0__Lake_Check_withSafeBuildAndExport___redArg___lam__0___closed__4));
lean_inc_ref(v_projectDir_1370_);
v___x_1386_ = lean_array_push(v___x_1383_, v_projectDir_1370_);
lean_inc_ref(v_leanPrefix_1376_);
v___x_1387_ = lean_array_push(v___x_1386_, v_leanPrefix_1376_);
lean_inc_ref(v_lakeHome_1378_);
v___x_1388_ = lean_array_push(v___x_1387_, v_lakeHome_1378_);
v___x_1389_ = ((lean_object*)(l___private_Lake_CLI_Check_0__Lake_Check_safeResolveWorkspace___closed__3));
v___x_1390_ = l_System_FilePath_join(v_projectDir_1370_, v___x_1389_);
v___x_1391_ = lean_array_push(v___x_1380_, v___x_1390_);
v___x_1392_ = ((lean_object*)(l___private_Lake_CLI_Check_0__Lake_Check_forbiddenPaths));
v___x_1393_ = 0;
v___x_1394_ = lean_box(0);
lean_inc_ref(v_whichLake_1377_);
v___x_1395_ = lean_alloc_ctor(0, 8, 1);
lean_ctor_set(v___x_1395_, 0, v_whichLake_1377_);
lean_ctor_set(v___x_1395_, 1, v___x_1381_);
lean_ctor_set(v___x_1395_, 2, v___x_1384_);
lean_ctor_set(v___x_1395_, 3, v___x_1385_);
lean_ctor_set(v___x_1395_, 4, v___x_1388_);
lean_ctor_set(v___x_1395_, 5, v___x_1391_);
lean_ctor_set(v___x_1395_, 6, v___x_1392_);
lean_ctor_set(v___x_1395_, 7, v___x_1394_);
lean_ctor_set_uint8(v___x_1395_, sizeof(void*)*8, v___x_1393_);
v___x_1396_ = l___private_Lake_CLI_Check_0__Lake_Check_runSandBoxedWithStdoutTo(v_handle_1372_, v___x_1395_, v___y_1374_);
if (lean_obj_tag(v___x_1396_) == 0)
{
lean_object* v___x_1397_; 
lean_dec_ref_known(v___x_1396_, 1);
lean_inc_ref(v___y_1374_);
v___x_1397_ = lean_apply_3(v_f_1371_, v_path_1373_, v___y_1374_, lean_box(0));
return v___x_1397_;
}
else
{
lean_object* v_a_1398_; lean_object* v___x_1400_; uint8_t v_isShared_1401_; uint8_t v_isSharedCheck_1405_; 
lean_dec_ref(v_path_1373_);
lean_dec_ref(v_f_1371_);
v_a_1398_ = lean_ctor_get(v___x_1396_, 0);
v_isSharedCheck_1405_ = !lean_is_exclusive(v___x_1396_);
if (v_isSharedCheck_1405_ == 0)
{
v___x_1400_ = v___x_1396_;
v_isShared_1401_ = v_isSharedCheck_1405_;
goto v_resetjp_1399_;
}
else
{
lean_inc(v_a_1398_);
lean_dec(v___x_1396_);
v___x_1400_ = lean_box(0);
v_isShared_1401_ = v_isSharedCheck_1405_;
goto v_resetjp_1399_;
}
v_resetjp_1399_:
{
lean_object* v___x_1403_; 
if (v_isShared_1401_ == 0)
{
v___x_1403_ = v___x_1400_;
goto v_reusejp_1402_;
}
else
{
lean_object* v_reuseFailAlloc_1404_; 
v_reuseFailAlloc_1404_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1404_, 0, v_a_1398_);
v___x_1403_ = v_reuseFailAlloc_1404_;
goto v_reusejp_1402_;
}
v_reusejp_1402_:
{
return v___x_1403_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_Check_0__Lake_Check_withSafeBuildAndExport___redArg___lam__0___boxed(lean_object* v_projectDir_1406_, lean_object* v_f_1407_, lean_object* v_handle_1408_, lean_object* v_path_1409_, lean_object* v___y_1410_, lean_object* v___y_1411_){
_start:
{
lean_object* v_res_1412_; 
v_res_1412_ = l___private_Lake_CLI_Check_0__Lake_Check_withSafeBuildAndExport___redArg___lam__0(v_projectDir_1406_, v_f_1407_, v_handle_1408_, v_path_1409_, v___y_1410_);
lean_dec_ref(v___y_1410_);
return v_res_1412_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_Check_0__Lake_Check_withSafeBuildAndExport___redArg(lean_object* v_f_1414_, lean_object* v_a_1415_){
_start:
{
lean_object* v___x_1417_; lean_object* v___x_1418_; 
v___x_1417_ = ((lean_object*)(l___private_Lake_CLI_Check_0__Lake_Check_withSafeBuildAndExport___redArg___closed__0));
v___x_1418_ = l_IO_println___at___00__private_Lake_CLI_Check_0__Lake_Check_safeResolveWorkspace_spec__2(v___x_1417_);
if (lean_obj_tag(v___x_1418_) == 0)
{
lean_object* v_projectDir_1419_; lean_object* v___f_1420_; lean_object* v___x_1421_; 
lean_dec_ref_known(v___x_1418_, 1);
v_projectDir_1419_ = lean_ctor_get(v_a_1415_, 0);
lean_inc_ref(v_projectDir_1419_);
v___f_1420_ = lean_alloc_closure((void*)(l___private_Lake_CLI_Check_0__Lake_Check_withSafeBuildAndExport___redArg___lam__0___boxed), 6, 2);
lean_closure_set(v___f_1420_, 0, v_projectDir_1419_);
lean_closure_set(v___f_1420_, 1, v_f_1414_);
v___x_1421_ = l_IO_FS_withTempFile___at___00__private_Lake_CLI_Check_0__Lake_Check_withSafeBuildAndExport_spec__0___redArg(v___f_1420_, v_a_1415_);
return v___x_1421_;
}
else
{
lean_object* v_a_1422_; lean_object* v___x_1424_; uint8_t v_isShared_1425_; uint8_t v_isSharedCheck_1429_; 
lean_dec_ref(v_f_1414_);
v_a_1422_ = lean_ctor_get(v___x_1418_, 0);
v_isSharedCheck_1429_ = !lean_is_exclusive(v___x_1418_);
if (v_isSharedCheck_1429_ == 0)
{
v___x_1424_ = v___x_1418_;
v_isShared_1425_ = v_isSharedCheck_1429_;
goto v_resetjp_1423_;
}
else
{
lean_inc(v_a_1422_);
lean_dec(v___x_1418_);
v___x_1424_ = lean_box(0);
v_isShared_1425_ = v_isSharedCheck_1429_;
goto v_resetjp_1423_;
}
v_resetjp_1423_:
{
lean_object* v___x_1427_; 
if (v_isShared_1425_ == 0)
{
v___x_1427_ = v___x_1424_;
goto v_reusejp_1426_;
}
else
{
lean_object* v_reuseFailAlloc_1428_; 
v_reuseFailAlloc_1428_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1428_, 0, v_a_1422_);
v___x_1427_ = v_reuseFailAlloc_1428_;
goto v_reusejp_1426_;
}
v_reusejp_1426_:
{
return v___x_1427_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_Check_0__Lake_Check_withSafeBuildAndExport___redArg___boxed(lean_object* v_f_1430_, lean_object* v_a_1431_, lean_object* v_a_1432_){
_start:
{
lean_object* v_res_1433_; 
v_res_1433_ = l___private_Lake_CLI_Check_0__Lake_Check_withSafeBuildAndExport___redArg(v_f_1430_, v_a_1431_);
lean_dec_ref(v_a_1431_);
return v_res_1433_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_Check_0__Lake_Check_withSafeBuildAndExport(lean_object* v_00_u03b1_1434_, lean_object* v_f_1435_, lean_object* v_a_1436_){
_start:
{
lean_object* v___x_1438_; 
v___x_1438_ = l___private_Lake_CLI_Check_0__Lake_Check_withSafeBuildAndExport___redArg(v_f_1435_, v_a_1436_);
return v___x_1438_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_Check_0__Lake_Check_withSafeBuildAndExport___boxed(lean_object* v_00_u03b1_1439_, lean_object* v_f_1440_, lean_object* v_a_1441_, lean_object* v_a_1442_){
_start:
{
lean_object* v_res_1443_; 
v_res_1443_ = l___private_Lake_CLI_Check_0__Lake_Check_withSafeBuildAndExport(v_00_u03b1_1439_, v_f_1440_, v_a_1441_);
lean_dec_ref(v_a_1441_);
return v_res_1443_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_CLI_Check_0__Lake_Check_safeLakeBuild_spec__0(size_t v_sz_1444_, size_t v_i_1445_, lean_object* v_bs_1446_){
_start:
{
uint8_t v___x_1447_; 
v___x_1447_ = lean_usize_dec_lt(v_i_1445_, v_sz_1444_);
if (v___x_1447_ == 0)
{
lean_object* v___x_1448_; 
v___x_1448_ = l_unsafeCast___redArg(v_bs_1446_);
lean_dec_ref(v_bs_1446_);
return v___x_1448_;
}
else
{
lean_object* v_v_1449_; lean_object* v___x_1450_; lean_object* v_bs_x27_1451_; lean_object* v___x_1452_; lean_object* v___x_1453_; size_t v___x_1454_; size_t v___x_1455_; lean_object* v___x_1456_; lean_object* v___x_1457_; 
v_v_1449_ = lean_array_uget(v_bs_1446_, v_i_1445_);
v___x_1450_ = lean_unsigned_to_nat(0u);
v_bs_x27_1451_ = lean_array_uset(v_bs_1446_, v_i_1445_, v___x_1450_);
v___x_1452_ = l_unsafeCast___redArg(v_v_1449_);
lean_dec(v_v_1449_);
v___x_1453_ = l_Lean_Name_toString(v___x_1452_, v___x_1447_);
v___x_1454_ = ((size_t)1ULL);
v___x_1455_ = lean_usize_add(v_i_1445_, v___x_1454_);
v___x_1456_ = l_unsafeCast___redArg(v___x_1453_);
lean_dec_ref(v___x_1453_);
v___x_1457_ = lean_array_uset(v_bs_x27_1451_, v_i_1445_, v___x_1456_);
v_i_1445_ = v___x_1455_;
v_bs_1446_ = v___x_1457_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_CLI_Check_0__Lake_Check_safeLakeBuild_spec__0___boxed(lean_object* v_sz_1459_, lean_object* v_i_1460_, lean_object* v_bs_1461_){
_start:
{
size_t v_sz_boxed_1462_; size_t v_i_boxed_1463_; lean_object* v_res_1464_; 
v_sz_boxed_1462_ = lean_unbox_usize(v_sz_1459_);
lean_dec(v_sz_1459_);
v_i_boxed_1463_ = lean_unbox_usize(v_i_1460_);
lean_dec(v_i_1460_);
v_res_1464_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_CLI_Check_0__Lake_Check_safeLakeBuild_spec__0(v_sz_boxed_1462_, v_i_boxed_1463_, v_bs_1461_);
return v_res_1464_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_Check_0__Lake_Check_safeLakeBuild(lean_object* v_targets_1472_, lean_object* v_a_1473_){
_start:
{
size_t v_sz_1475_; size_t v___x_1476_; lean_object* v___x_1477_; lean_object* v___x_1478_; lean_object* v_targetArgs_1479_; lean_object* v___x_1480_; lean_object* v___x_1481_; lean_object* v_targetList_1482_; lean_object* v___x_1483_; lean_object* v___x_1484_; lean_object* v___x_1485_; 
v_sz_1475_ = lean_array_size(v_targets_1472_);
v___x_1476_ = ((size_t)0ULL);
v___x_1477_ = l_unsafeCast___redArg(v_targets_1472_);
v___x_1478_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_CLI_Check_0__Lake_Check_safeLakeBuild_spec__0(v_sz_1475_, v___x_1476_, v___x_1477_);
v_targetArgs_1479_ = l_unsafeCast___redArg(v___x_1478_);
lean_dec_ref(v___x_1478_);
v___x_1480_ = ((lean_object*)(l___private_Lake_CLI_Check_0__Lake_Check_safeLakeBuild___closed__0));
lean_inc(v_targetArgs_1479_);
v___x_1481_ = lean_array_to_list(v_targetArgs_1479_);
v_targetList_1482_ = l_String_intercalate(v___x_1480_, v___x_1481_);
v___x_1483_ = ((lean_object*)(l___private_Lake_CLI_Check_0__Lake_Check_safeLakeBuild___closed__1));
v___x_1484_ = lean_string_append(v___x_1483_, v_targetList_1482_);
lean_dec_ref(v_targetList_1482_);
v___x_1485_ = l_IO_println___at___00__private_Lake_CLI_Check_0__Lake_Check_safeResolveWorkspace_spec__2(v___x_1484_);
if (lean_obj_tag(v___x_1485_) == 0)
{
lean_object* v_projectDir_1486_; lean_object* v_leanPrefix_1487_; lean_object* v_whichLake_1488_; lean_object* v_lakeHome_1489_; lean_object* v___x_1490_; lean_object* v___x_1491_; lean_object* v___y_1493_; lean_object* v_leanPrefix_1494_; lean_object* v_whichLake_1495_; lean_object* v_lakeHome_1496_; uint8_t v___x_1514_; 
lean_dec_ref_known(v___x_1485_, 1);
v_projectDir_1486_ = lean_ctor_get(v_a_1473_, 0);
v_leanPrefix_1487_ = lean_ctor_get(v_a_1473_, 6);
v_whichLake_1488_ = lean_ctor_get(v_a_1473_, 10);
v_lakeHome_1489_ = lean_ctor_get(v_a_1473_, 11);
v___x_1490_ = ((lean_object*)(l___private_Lake_CLI_Check_0__Lake_Check_safeResolveWorkspace___closed__3));
lean_inc_ref(v_projectDir_1486_);
v___x_1491_ = l_System_FilePath_join(v_projectDir_1486_, v___x_1490_);
v___x_1514_ = l_System_FilePath_pathExists(v___x_1491_);
if (v___x_1514_ == 0)
{
lean_object* v___x_1515_; 
v___x_1515_ = lean_io_create_dir(v___x_1491_);
if (lean_obj_tag(v___x_1515_) == 0)
{
lean_dec_ref_known(v___x_1515_, 1);
v___y_1493_ = v_a_1473_;
v_leanPrefix_1494_ = v_leanPrefix_1487_;
v_whichLake_1495_ = v_whichLake_1488_;
v_lakeHome_1496_ = v_lakeHome_1489_;
goto v___jp_1492_;
}
else
{
lean_dec_ref(v___x_1491_);
lean_dec(v_targetArgs_1479_);
return v___x_1515_;
}
}
else
{
v___y_1493_ = v_a_1473_;
v_leanPrefix_1494_ = v_leanPrefix_1487_;
v_whichLake_1495_ = v_whichLake_1488_;
v_lakeHome_1496_ = v_lakeHome_1489_;
goto v___jp_1492_;
}
v___jp_1492_:
{
lean_object* v___x_1497_; lean_object* v___x_1498_; lean_object* v___x_1499_; lean_object* v___x_1500_; lean_object* v___x_1501_; lean_object* v___x_1502_; lean_object* v___x_1503_; lean_object* v___x_1504_; lean_object* v___x_1505_; lean_object* v___x_1506_; lean_object* v___x_1507_; lean_object* v___x_1508_; lean_object* v___x_1509_; uint8_t v___x_1510_; lean_object* v___x_1511_; lean_object* v___x_1512_; lean_object* v___x_1513_; 
v___x_1497_ = lean_unsigned_to_nat(1u);
v___x_1498_ = lean_mk_empty_array_with_capacity(v___x_1497_);
v___x_1499_ = ((lean_object*)(l___private_Lake_CLI_Check_0__Lake_Check_safeLakeBuild___closed__3));
v___x_1500_ = l_Array_append___redArg(v___x_1499_, v_targetArgs_1479_);
lean_dec(v_targetArgs_1479_);
v___x_1501_ = ((lean_object*)(l___private_Lake_CLI_Check_0__Lake_Check_safeResolveWorkspace___closed__8));
v___x_1502_ = ((lean_object*)(l___private_Lake_CLI_Check_0__Lake_Check_safeResolveWorkspace___closed__12));
v___x_1503_ = lean_unsigned_to_nat(3u);
v___x_1504_ = lean_mk_empty_array_with_capacity(v___x_1503_);
lean_inc_ref(v_projectDir_1486_);
v___x_1505_ = lean_array_push(v___x_1504_, v_projectDir_1486_);
lean_inc_ref(v_leanPrefix_1494_);
v___x_1506_ = lean_array_push(v___x_1505_, v_leanPrefix_1494_);
lean_inc_ref(v_lakeHome_1496_);
v___x_1507_ = lean_array_push(v___x_1506_, v_lakeHome_1496_);
v___x_1508_ = lean_array_push(v___x_1498_, v___x_1491_);
v___x_1509_ = ((lean_object*)(l___private_Lake_CLI_Check_0__Lake_Check_forbiddenPaths));
v___x_1510_ = 0;
v___x_1511_ = lean_box(0);
lean_inc_ref(v_whichLake_1495_);
v___x_1512_ = lean_alloc_ctor(0, 8, 1);
lean_ctor_set(v___x_1512_, 0, v_whichLake_1495_);
lean_ctor_set(v___x_1512_, 1, v___x_1500_);
lean_ctor_set(v___x_1512_, 2, v___x_1501_);
lean_ctor_set(v___x_1512_, 3, v___x_1502_);
lean_ctor_set(v___x_1512_, 4, v___x_1507_);
lean_ctor_set(v___x_1512_, 5, v___x_1508_);
lean_ctor_set(v___x_1512_, 6, v___x_1509_);
lean_ctor_set(v___x_1512_, 7, v___x_1511_);
lean_ctor_set_uint8(v___x_1512_, sizeof(void*)*8, v___x_1510_);
v___x_1513_ = l___private_Lake_CLI_Check_0__Lake_Check_runSandBoxed(v___x_1512_, v___y_1493_);
return v___x_1513_;
}
}
else
{
lean_dec(v_targetArgs_1479_);
return v___x_1485_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_Check_0__Lake_Check_safeLakeBuild___boxed(lean_object* v_targets_1516_, lean_object* v_a_1517_, lean_object* v_a_1518_){
_start:
{
lean_object* v_res_1519_; 
v_res_1519_ = l___private_Lake_CLI_Check_0__Lake_Check_safeLakeBuild(v_targets_1516_, v_a_1517_);
lean_dec_ref(v_a_1517_);
lean_dec_ref(v_targets_1516_);
return v_res_1519_;
}
}
static lean_object* _init_l___private_Lake_CLI_Check_0__Lake_Check_withRunExporter___redArg___lam__0___closed__2(void){
_start:
{
lean_object* v___x_1529_; lean_object* v___x_1530_; lean_object* v___x_1531_; lean_object* v___x_1532_; 
v___x_1529_ = ((lean_object*)(l___private_Lake_CLI_Check_0__Lake_Check_safeResolveWorkspace___closed__11));
v___x_1530_ = lean_unsigned_to_nat(3u);
v___x_1531_ = lean_mk_empty_array_with_capacity(v___x_1530_);
v___x_1532_ = lean_array_push(v___x_1531_, v___x_1529_);
return v___x_1532_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_Check_0__Lake_Check_withRunExporter___redArg___lam__0(lean_object* v_projectDir_1533_, lean_object* v_whichLean4Export_1534_, lean_object* v_args_1535_, lean_object* v_f_1536_, lean_object* v_exportHandle_1537_, lean_object* v_exportPath_1538_, lean_object* v___y_1539_){
_start:
{
lean_object* v_leanPrefix_1541_; lean_object* v_leanPath_1542_; lean_object* v_binPath_1543_; lean_object* v___x_1544_; lean_object* v___x_1545_; lean_object* v___x_1546_; lean_object* v___x_1547_; lean_object* v___x_1548_; lean_object* v___x_1549_; lean_object* v___x_1550_; lean_object* v___x_1551_; lean_object* v___x_1552_; lean_object* v___x_1553_; lean_object* v___x_1554_; lean_object* v___x_1555_; lean_object* v___x_1556_; lean_object* v___x_1557_; lean_object* v___x_1558_; lean_object* v___x_1559_; lean_object* v___x_1560_; lean_object* v___x_1561_; lean_object* v___x_1562_; lean_object* v___x_1563_; uint8_t v___x_1564_; lean_object* v___x_1565_; lean_object* v___x_1566_; lean_object* v___x_1567_; 
v_leanPrefix_1541_ = lean_ctor_get(v___y_1539_, 6);
v_leanPath_1542_ = lean_ctor_get(v___y_1539_, 7);
v_binPath_1543_ = lean_ctor_get(v___y_1539_, 8);
v___x_1544_ = ((lean_object*)(l___private_Lake_CLI_Check_0__Lake_Check_safeResolveWorkspace___closed__6));
v___x_1545_ = ((lean_object*)(l___private_Lake_CLI_Check_0__Lake_Check_withRunExporter___redArg___lam__0___closed__0));
v___x_1546_ = ((lean_object*)(l___private_Lake_CLI_Check_0__Lake_Check_withRunExporter___redArg___lam__0___closed__1));
lean_inc_ref(v_leanPath_1542_);
v___x_1547_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1547_, 0, v_leanPath_1542_);
v___x_1548_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1548_, 0, v___x_1545_);
lean_ctor_set(v___x_1548_, 1, v___x_1547_);
lean_inc_ref(v_binPath_1543_);
v___x_1549_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1549_, 0, v_binPath_1543_);
v___x_1550_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1550_, 0, v___x_1544_);
lean_ctor_set(v___x_1550_, 1, v___x_1549_);
v___x_1551_ = lean_obj_once(&l___private_Lake_CLI_Check_0__Lake_Check_withRunExporter___redArg___lam__0___closed__2, &l___private_Lake_CLI_Check_0__Lake_Check_withRunExporter___redArg___lam__0___closed__2_once, _init_l___private_Lake_CLI_Check_0__Lake_Check_withRunExporter___redArg___lam__0___closed__2);
v___x_1552_ = lean_array_push(v___x_1551_, v___x_1548_);
v___x_1553_ = lean_array_push(v___x_1552_, v___x_1550_);
v___x_1554_ = ((lean_object*)(l___private_Lake_CLI_Check_0__Lake_Check_safeResolveWorkspace___closed__3));
lean_inc_ref(v_projectDir_1533_);
v___x_1555_ = l_System_FilePath_join(v_projectDir_1533_, v___x_1554_);
v___x_1556_ = lean_unsigned_to_nat(4u);
v___x_1557_ = lean_mk_empty_array_with_capacity(v___x_1556_);
v___x_1558_ = lean_array_push(v___x_1557_, v_projectDir_1533_);
v___x_1559_ = lean_array_push(v___x_1558_, v___x_1555_);
lean_inc_ref(v_leanPrefix_1541_);
v___x_1560_ = lean_array_push(v___x_1559_, v_leanPrefix_1541_);
lean_inc_ref(v_whichLean4Export_1534_);
v___x_1561_ = lean_array_push(v___x_1560_, v_whichLean4Export_1534_);
v___x_1562_ = ((lean_object*)(l___private_Lake_CLI_Check_0__Lake_Check_safeResolveWorkspace___closed__13));
v___x_1563_ = ((lean_object*)(l___private_Lake_CLI_Check_0__Lake_Check_forbiddenPaths));
v___x_1564_ = 0;
v___x_1565_ = lean_box(0);
v___x_1566_ = lean_alloc_ctor(0, 8, 1);
lean_ctor_set(v___x_1566_, 0, v_whichLean4Export_1534_);
lean_ctor_set(v___x_1566_, 1, v_args_1535_);
lean_ctor_set(v___x_1566_, 2, v___x_1546_);
lean_ctor_set(v___x_1566_, 3, v___x_1553_);
lean_ctor_set(v___x_1566_, 4, v___x_1561_);
lean_ctor_set(v___x_1566_, 5, v___x_1562_);
lean_ctor_set(v___x_1566_, 6, v___x_1563_);
lean_ctor_set(v___x_1566_, 7, v___x_1565_);
lean_ctor_set_uint8(v___x_1566_, sizeof(void*)*8, v___x_1564_);
v___x_1567_ = l___private_Lake_CLI_Check_0__Lake_Check_runSandBoxedWithStdoutTo(v_exportHandle_1537_, v___x_1566_, v___y_1539_);
if (lean_obj_tag(v___x_1567_) == 0)
{
lean_object* v___x_1568_; 
lean_dec_ref_known(v___x_1567_, 1);
lean_inc_ref(v___y_1539_);
v___x_1568_ = lean_apply_3(v_f_1536_, v_exportPath_1538_, v___y_1539_, lean_box(0));
return v___x_1568_;
}
else
{
lean_object* v_a_1569_; lean_object* v___x_1571_; uint8_t v_isShared_1572_; uint8_t v_isSharedCheck_1576_; 
lean_dec_ref(v_exportPath_1538_);
lean_dec_ref(v_f_1536_);
v_a_1569_ = lean_ctor_get(v___x_1567_, 0);
v_isSharedCheck_1576_ = !lean_is_exclusive(v___x_1567_);
if (v_isSharedCheck_1576_ == 0)
{
v___x_1571_ = v___x_1567_;
v_isShared_1572_ = v_isSharedCheck_1576_;
goto v_resetjp_1570_;
}
else
{
lean_inc(v_a_1569_);
lean_dec(v___x_1567_);
v___x_1571_ = lean_box(0);
v_isShared_1572_ = v_isSharedCheck_1576_;
goto v_resetjp_1570_;
}
v_resetjp_1570_:
{
lean_object* v___x_1574_; 
if (v_isShared_1572_ == 0)
{
v___x_1574_ = v___x_1571_;
goto v_reusejp_1573_;
}
else
{
lean_object* v_reuseFailAlloc_1575_; 
v_reuseFailAlloc_1575_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1575_, 0, v_a_1569_);
v___x_1574_ = v_reuseFailAlloc_1575_;
goto v_reusejp_1573_;
}
v_reusejp_1573_:
{
return v___x_1574_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_Check_0__Lake_Check_withRunExporter___redArg___lam__0___boxed(lean_object* v_projectDir_1577_, lean_object* v_whichLean4Export_1578_, lean_object* v_args_1579_, lean_object* v_f_1580_, lean_object* v_exportHandle_1581_, lean_object* v_exportPath_1582_, lean_object* v___y_1583_, lean_object* v___y_1584_){
_start:
{
lean_object* v_res_1585_; 
v_res_1585_ = l___private_Lake_CLI_Check_0__Lake_Check_withRunExporter___redArg___lam__0(v_projectDir_1577_, v_whichLean4Export_1578_, v_args_1579_, v_f_1580_, v_exportHandle_1581_, v_exportPath_1582_, v___y_1583_);
lean_dec_ref(v___y_1583_);
return v_res_1585_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_Check_0__Lake_Check_withRunExporter___redArg(lean_object* v_args_1586_, lean_object* v_f_1587_, lean_object* v_a_1588_){
_start:
{
lean_object* v_projectDir_1590_; lean_object* v_whichLean4Export_1591_; lean_object* v___f_1592_; lean_object* v___x_1593_; 
v_projectDir_1590_ = lean_ctor_get(v_a_1588_, 0);
v_whichLean4Export_1591_ = lean_ctor_get(v_a_1588_, 12);
lean_inc_ref(v_whichLean4Export_1591_);
lean_inc_ref(v_projectDir_1590_);
v___f_1592_ = lean_alloc_closure((void*)(l___private_Lake_CLI_Check_0__Lake_Check_withRunExporter___redArg___lam__0___boxed), 8, 4);
lean_closure_set(v___f_1592_, 0, v_projectDir_1590_);
lean_closure_set(v___f_1592_, 1, v_whichLean4Export_1591_);
lean_closure_set(v___f_1592_, 2, v_args_1586_);
lean_closure_set(v___f_1592_, 3, v_f_1587_);
v___x_1593_ = l_IO_FS_withTempFile___at___00__private_Lake_CLI_Check_0__Lake_Check_withSafeBuildAndExport_spec__0___redArg(v___f_1592_, v_a_1588_);
return v___x_1593_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_Check_0__Lake_Check_withRunExporter___redArg___boxed(lean_object* v_args_1594_, lean_object* v_f_1595_, lean_object* v_a_1596_, lean_object* v_a_1597_){
_start:
{
lean_object* v_res_1598_; 
v_res_1598_ = l___private_Lake_CLI_Check_0__Lake_Check_withRunExporter___redArg(v_args_1594_, v_f_1595_, v_a_1596_);
lean_dec_ref(v_a_1596_);
return v_res_1598_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_Check_0__Lake_Check_withRunExporter(lean_object* v_00_u03b1_1599_, lean_object* v_args_1600_, lean_object* v_f_1601_, lean_object* v_a_1602_){
_start:
{
lean_object* v___x_1604_; 
v___x_1604_ = l___private_Lake_CLI_Check_0__Lake_Check_withRunExporter___redArg(v_args_1600_, v_f_1601_, v_a_1602_);
return v___x_1604_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_Check_0__Lake_Check_withRunExporter___boxed(lean_object* v_00_u03b1_1605_, lean_object* v_args_1606_, lean_object* v_f_1607_, lean_object* v_a_1608_, lean_object* v_a_1609_){
_start:
{
lean_object* v_res_1610_; 
v_res_1610_ = l___private_Lake_CLI_Check_0__Lake_Check_withRunExporter(v_00_u03b1_1605_, v_args_1606_, v_f_1607_, v_a_1608_);
lean_dec_ref(v_a_1608_);
return v_res_1610_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00List_toString___at___00__private_Lake_CLI_Check_0__Lake_Check_withSafeExport_spec__0_spec__0(lean_object* v_x_1612_, lean_object* v_x_1613_){
_start:
{
if (lean_obj_tag(v_x_1613_) == 0)
{
return v_x_1612_;
}
else
{
lean_object* v_head_1614_; lean_object* v_tail_1615_; lean_object* v___x_1616_; lean_object* v___x_1617_; uint8_t v___x_1618_; lean_object* v___x_1619_; lean_object* v___x_1620_; 
v_head_1614_ = lean_ctor_get(v_x_1613_, 0);
lean_inc(v_head_1614_);
v_tail_1615_ = lean_ctor_get(v_x_1613_, 1);
lean_inc(v_tail_1615_);
lean_dec_ref_known(v_x_1613_, 2);
v___x_1616_ = ((lean_object*)(l_List_foldl___at___00List_toString___at___00__private_Lake_CLI_Check_0__Lake_Check_withSafeExport_spec__0_spec__0___closed__0));
v___x_1617_ = lean_string_append(v_x_1612_, v___x_1616_);
v___x_1618_ = 1;
v___x_1619_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_head_1614_, v___x_1618_);
v___x_1620_ = lean_string_append(v___x_1617_, v___x_1619_);
lean_dec_ref(v___x_1619_);
v_x_1612_ = v___x_1620_;
v_x_1613_ = v_tail_1615_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_List_toString___at___00__private_Lake_CLI_Check_0__Lake_Check_withSafeExport_spec__0(lean_object* v_x_1625_){
_start:
{
if (lean_obj_tag(v_x_1625_) == 0)
{
lean_object* v___x_1626_; 
v___x_1626_ = ((lean_object*)(l_List_toString___at___00__private_Lake_CLI_Check_0__Lake_Check_withSafeExport_spec__0___closed__0));
return v___x_1626_;
}
else
{
lean_object* v_tail_1627_; 
v_tail_1627_ = lean_ctor_get(v_x_1625_, 1);
if (lean_obj_tag(v_tail_1627_) == 0)
{
lean_object* v_head_1628_; lean_object* v___x_1629_; uint8_t v___x_1630_; lean_object* v___x_1631_; lean_object* v___x_1632_; lean_object* v___x_1633_; lean_object* v___x_1634_; 
v_head_1628_ = lean_ctor_get(v_x_1625_, 0);
lean_inc(v_head_1628_);
lean_dec_ref_known(v_x_1625_, 2);
v___x_1629_ = ((lean_object*)(l_List_toString___at___00__private_Lake_CLI_Check_0__Lake_Check_withSafeExport_spec__0___closed__1));
v___x_1630_ = 1;
v___x_1631_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_head_1628_, v___x_1630_);
v___x_1632_ = lean_string_append(v___x_1629_, v___x_1631_);
lean_dec_ref(v___x_1631_);
v___x_1633_ = ((lean_object*)(l_List_toString___at___00__private_Lake_CLI_Check_0__Lake_Check_withSafeExport_spec__0___closed__2));
v___x_1634_ = lean_string_append(v___x_1632_, v___x_1633_);
return v___x_1634_;
}
else
{
lean_object* v_head_1635_; lean_object* v___x_1636_; uint8_t v___x_1637_; lean_object* v___x_1638_; lean_object* v___x_1639_; lean_object* v___x_1640_; uint32_t v___x_1641_; lean_object* v___x_1642_; 
lean_inc(v_tail_1627_);
v_head_1635_ = lean_ctor_get(v_x_1625_, 0);
lean_inc(v_head_1635_);
lean_dec_ref_known(v_x_1625_, 2);
v___x_1636_ = ((lean_object*)(l_List_toString___at___00__private_Lake_CLI_Check_0__Lake_Check_withSafeExport_spec__0___closed__1));
v___x_1637_ = 1;
v___x_1638_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_head_1635_, v___x_1637_);
v___x_1639_ = lean_string_append(v___x_1636_, v___x_1638_);
lean_dec_ref(v___x_1638_);
v___x_1640_ = l_List_foldl___at___00List_toString___at___00__private_Lake_CLI_Check_0__Lake_Check_withSafeExport_spec__0_spec__0(v___x_1639_, v_tail_1627_);
v___x_1641_ = 93;
v___x_1642_ = lean_string_push(v___x_1640_, v___x_1641_);
return v___x_1642_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_CLI_Check_0__Lake_Check_withSafeExport_spec__1(size_t v_sz_1643_, size_t v_i_1644_, lean_object* v_bs_1645_){
_start:
{
uint8_t v___x_1646_; 
v___x_1646_ = lean_usize_dec_lt(v_i_1644_, v_sz_1643_);
if (v___x_1646_ == 0)
{
lean_object* v___x_1647_; 
v___x_1647_ = l_unsafeCast___redArg(v_bs_1645_);
lean_dec_ref(v_bs_1645_);
return v___x_1647_;
}
else
{
lean_object* v_v_1648_; lean_object* v___x_1649_; lean_object* v_bs_x27_1650_; lean_object* v___x_1651_; lean_object* v___x_1652_; size_t v___x_1653_; size_t v___x_1654_; lean_object* v___x_1655_; lean_object* v___x_1656_; 
v_v_1648_ = lean_array_uget(v_bs_1645_, v_i_1644_);
v___x_1649_ = lean_unsigned_to_nat(0u);
v_bs_x27_1650_ = lean_array_uset(v_bs_1645_, v_i_1644_, v___x_1649_);
v___x_1651_ = l_unsafeCast___redArg(v_v_1648_);
lean_dec(v_v_1648_);
v___x_1652_ = l_Lean_Name_toString(v___x_1651_, v___x_1646_);
v___x_1653_ = ((size_t)1ULL);
v___x_1654_ = lean_usize_add(v_i_1644_, v___x_1653_);
v___x_1655_ = l_unsafeCast___redArg(v___x_1652_);
lean_dec_ref(v___x_1652_);
v___x_1656_ = lean_array_uset(v_bs_x27_1650_, v_i_1644_, v___x_1655_);
v_i_1644_ = v___x_1654_;
v_bs_1645_ = v___x_1656_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_CLI_Check_0__Lake_Check_withSafeExport_spec__1___boxed(lean_object* v_sz_1658_, lean_object* v_i_1659_, lean_object* v_bs_1660_){
_start:
{
size_t v_sz_boxed_1661_; size_t v_i_boxed_1662_; lean_object* v_res_1663_; 
v_sz_boxed_1661_ = lean_unbox_usize(v_sz_1658_);
lean_dec(v_sz_1658_);
v_i_boxed_1662_ = lean_unbox_usize(v_i_1659_);
lean_dec(v_i_1659_);
v_res_1663_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_CLI_Check_0__Lake_Check_withSafeExport_spec__1(v_sz_boxed_1661_, v_i_boxed_1662_, v_bs_1660_);
return v_res_1663_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_Check_0__Lake_Check_withSafeExport___redArg(lean_object* v_module_1667_, lean_object* v_decls_1668_, lean_object* v_f_1669_, lean_object* v_a_1670_){
_start:
{
lean_object* v___x_1672_; lean_object* v___x_1673_; lean_object* v___x_1674_; lean_object* v___x_1675_; lean_object* v___x_1676_; lean_object* v___x_1677_; lean_object* v___x_1678_; lean_object* v___x_1679_; uint8_t v___x_1680_; lean_object* v___x_1681_; lean_object* v___x_1682_; lean_object* v___x_1683_; 
v___x_1672_ = ((lean_object*)(l___private_Lake_CLI_Check_0__Lake_Check_withSafeExport___redArg___closed__0));
v___x_1673_ = ((lean_object*)(l___private_Lake_CLI_Check_0__Lake_Check_withSafeExport___redArg___closed__1));
lean_inc_ref(v_decls_1668_);
v___x_1674_ = lean_array_to_list(v_decls_1668_);
v___x_1675_ = l_List_toString___at___00__private_Lake_CLI_Check_0__Lake_Check_withSafeExport_spec__0(v___x_1674_);
v___x_1676_ = lean_string_append(v___x_1673_, v___x_1675_);
lean_dec_ref(v___x_1675_);
v___x_1677_ = lean_string_append(v___x_1672_, v___x_1676_);
lean_dec_ref(v___x_1676_);
v___x_1678_ = ((lean_object*)(l___private_Lake_CLI_Check_0__Lake_Check_withSafeExport___redArg___closed__2));
v___x_1679_ = lean_string_append(v___x_1677_, v___x_1678_);
v___x_1680_ = 1;
lean_inc(v_module_1667_);
v___x_1681_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_module_1667_, v___x_1680_);
v___x_1682_ = lean_string_append(v___x_1679_, v___x_1681_);
lean_dec_ref(v___x_1681_);
v___x_1683_ = l_IO_println___at___00__private_Lake_CLI_Check_0__Lake_Check_safeResolveWorkspace_spec__2(v___x_1682_);
if (lean_obj_tag(v___x_1683_) == 0)
{
lean_object* v___x_1684_; lean_object* v___x_1685_; lean_object* v___x_1686_; lean_object* v___x_1687_; lean_object* v___x_1688_; lean_object* v___x_1689_; size_t v_sz_1690_; size_t v___x_1691_; lean_object* v___x_1692_; lean_object* v___x_1693_; lean_object* v___x_1694_; lean_object* v___x_1695_; lean_object* v___x_1696_; 
lean_dec_ref_known(v___x_1683_, 1);
v___x_1684_ = l_Lean_Name_toString(v_module_1667_, v___x_1680_);
v___x_1685_ = ((lean_object*)(l___private_Lake_CLI_Check_0__Lake_Check_buildSandboxArgs___closed__8));
v___x_1686_ = lean_unsigned_to_nat(2u);
v___x_1687_ = lean_mk_empty_array_with_capacity(v___x_1686_);
v___x_1688_ = lean_array_push(v___x_1687_, v___x_1684_);
v___x_1689_ = lean_array_push(v___x_1688_, v___x_1685_);
v_sz_1690_ = lean_array_size(v_decls_1668_);
v___x_1691_ = ((size_t)0ULL);
v___x_1692_ = l_unsafeCast___redArg(v_decls_1668_);
lean_dec_ref(v_decls_1668_);
v___x_1693_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_CLI_Check_0__Lake_Check_withSafeExport_spec__1(v_sz_1690_, v___x_1691_, v___x_1692_);
v___x_1694_ = l_unsafeCast___redArg(v___x_1693_);
lean_dec_ref(v___x_1693_);
v___x_1695_ = l_Array_append___redArg(v___x_1689_, v___x_1694_);
lean_dec(v___x_1694_);
v___x_1696_ = l___private_Lake_CLI_Check_0__Lake_Check_withRunExporter___redArg(v___x_1695_, v_f_1669_, v_a_1670_);
return v___x_1696_;
}
else
{
lean_object* v_a_1697_; lean_object* v___x_1699_; uint8_t v_isShared_1700_; uint8_t v_isSharedCheck_1704_; 
lean_dec_ref(v_f_1669_);
lean_dec_ref(v_decls_1668_);
lean_dec(v_module_1667_);
v_a_1697_ = lean_ctor_get(v___x_1683_, 0);
v_isSharedCheck_1704_ = !lean_is_exclusive(v___x_1683_);
if (v_isSharedCheck_1704_ == 0)
{
v___x_1699_ = v___x_1683_;
v_isShared_1700_ = v_isSharedCheck_1704_;
goto v_resetjp_1698_;
}
else
{
lean_inc(v_a_1697_);
lean_dec(v___x_1683_);
v___x_1699_ = lean_box(0);
v_isShared_1700_ = v_isSharedCheck_1704_;
goto v_resetjp_1698_;
}
v_resetjp_1698_:
{
lean_object* v___x_1702_; 
if (v_isShared_1700_ == 0)
{
v___x_1702_ = v___x_1699_;
goto v_reusejp_1701_;
}
else
{
lean_object* v_reuseFailAlloc_1703_; 
v_reuseFailAlloc_1703_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1703_, 0, v_a_1697_);
v___x_1702_ = v_reuseFailAlloc_1703_;
goto v_reusejp_1701_;
}
v_reusejp_1701_:
{
return v___x_1702_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_Check_0__Lake_Check_withSafeExport___redArg___boxed(lean_object* v_module_1705_, lean_object* v_decls_1706_, lean_object* v_f_1707_, lean_object* v_a_1708_, lean_object* v_a_1709_){
_start:
{
lean_object* v_res_1710_; 
v_res_1710_ = l___private_Lake_CLI_Check_0__Lake_Check_withSafeExport___redArg(v_module_1705_, v_decls_1706_, v_f_1707_, v_a_1708_);
lean_dec_ref(v_a_1708_);
return v_res_1710_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_Check_0__Lake_Check_withSafeExport(lean_object* v_00_u03b1_1711_, lean_object* v_module_1712_, lean_object* v_decls_1713_, lean_object* v_f_1714_, lean_object* v_a_1715_){
_start:
{
lean_object* v___x_1717_; 
v___x_1717_ = l___private_Lake_CLI_Check_0__Lake_Check_withSafeExport___redArg(v_module_1712_, v_decls_1713_, v_f_1714_, v_a_1715_);
return v___x_1717_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_Check_0__Lake_Check_withSafeExport___boxed(lean_object* v_00_u03b1_1718_, lean_object* v_module_1719_, lean_object* v_decls_1720_, lean_object* v_f_1721_, lean_object* v_a_1722_, lean_object* v_a_1723_){
_start:
{
lean_object* v_res_1724_; 
v_res_1724_ = l___private_Lake_CLI_Check_0__Lake_Check_withSafeExport(v_00_u03b1_1718_, v_module_1719_, v_decls_1720_, v_f_1721_, v_a_1722_);
lean_dec_ref(v_a_1722_);
return v_res_1724_;
}
}
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00__private_Lake_CLI_Check_0__Lake_Check_runExternalKernel_isNanodaKernel_spec__0_spec__0___redArg(lean_object* v_s_1725_, lean_object* v_a_1726_, uint8_t v_b_1727_){
_start:
{
uint8_t v___x_1728_; 
v___x_1728_ = 0;
switch(lean_obj_tag(v_a_1726_))
{
case 0:
{
lean_object* v_pos_1729_; lean_object* v_startInclusive_1730_; lean_object* v_endExclusive_1731_; lean_object* v___x_1732_; uint8_t v_decide_1733_; 
v_pos_1729_ = lean_ctor_get(v_a_1726_, 0);
lean_inc(v_pos_1729_);
lean_dec_ref_known(v_a_1726_, 1);
v_startInclusive_1730_ = lean_ctor_get(v_s_1725_, 1);
v_endExclusive_1731_ = lean_ctor_get(v_s_1725_, 2);
v___x_1732_ = lean_nat_sub(v_endExclusive_1731_, v_startInclusive_1730_);
v_decide_1733_ = lean_nat_dec_eq(v_pos_1729_, v___x_1732_);
lean_dec(v___x_1732_);
lean_dec(v_pos_1729_);
if (v_decide_1733_ == 0)
{
uint8_t v___x_1734_; 
v___x_1734_ = 1;
return v___x_1734_;
}
else
{
return v_decide_1733_;
}
}
case 1:
{
lean_object* v_pos_1735_; lean_object* v___x_1737_; uint8_t v_isShared_1738_; uint8_t v_isSharedCheck_1748_; 
v_pos_1735_ = lean_ctor_get(v_a_1726_, 0);
v_isSharedCheck_1748_ = !lean_is_exclusive(v_a_1726_);
if (v_isSharedCheck_1748_ == 0)
{
v___x_1737_ = v_a_1726_;
v_isShared_1738_ = v_isSharedCheck_1748_;
goto v_resetjp_1736_;
}
else
{
lean_inc(v_pos_1735_);
lean_dec(v_a_1726_);
v___x_1737_ = lean_box(0);
v_isShared_1738_ = v_isSharedCheck_1748_;
goto v_resetjp_1736_;
}
v_resetjp_1736_:
{
lean_object* v_str_1739_; lean_object* v_startInclusive_1740_; lean_object* v___x_1741_; lean_object* v___x_1742_; lean_object* v___x_1743_; lean_object* v___x_1745_; 
v_str_1739_ = lean_ctor_get(v_s_1725_, 0);
v_startInclusive_1740_ = lean_ctor_get(v_s_1725_, 1);
v___x_1741_ = lean_nat_add(v_startInclusive_1740_, v_pos_1735_);
lean_dec(v_pos_1735_);
v___x_1742_ = lean_string_utf8_next_fast(v_str_1739_, v___x_1741_);
lean_dec(v___x_1741_);
v___x_1743_ = lean_nat_sub(v___x_1742_, v_startInclusive_1740_);
if (v_isShared_1738_ == 0)
{
lean_ctor_set_tag(v___x_1737_, 0);
lean_ctor_set(v___x_1737_, 0, v___x_1743_);
v___x_1745_ = v___x_1737_;
goto v_reusejp_1744_;
}
else
{
lean_object* v_reuseFailAlloc_1747_; 
v_reuseFailAlloc_1747_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1747_, 0, v___x_1743_);
v___x_1745_ = v_reuseFailAlloc_1747_;
goto v_reusejp_1744_;
}
v_reusejp_1744_:
{
v_a_1726_ = v___x_1745_;
v_b_1727_ = v___x_1728_;
goto _start;
}
}
}
case 2:
{
lean_object* v_needle_1749_; lean_object* v_table_1750_; lean_object* v_stackPos_1751_; lean_object* v_needlePos_1752_; lean_object* v___x_1754_; uint8_t v_isShared_1755_; uint8_t v_isSharedCheck_1807_; 
v_needle_1749_ = lean_ctor_get(v_a_1726_, 0);
v_table_1750_ = lean_ctor_get(v_a_1726_, 1);
v_stackPos_1751_ = lean_ctor_get(v_a_1726_, 2);
v_needlePos_1752_ = lean_ctor_get(v_a_1726_, 3);
v_isSharedCheck_1807_ = !lean_is_exclusive(v_a_1726_);
if (v_isSharedCheck_1807_ == 0)
{
v___x_1754_ = v_a_1726_;
v_isShared_1755_ = v_isSharedCheck_1807_;
goto v_resetjp_1753_;
}
else
{
lean_inc(v_needlePos_1752_);
lean_inc(v_stackPos_1751_);
lean_inc(v_table_1750_);
lean_inc(v_needle_1749_);
lean_dec(v_a_1726_);
v___x_1754_ = lean_box(0);
v_isShared_1755_ = v_isSharedCheck_1807_;
goto v_resetjp_1753_;
}
v_resetjp_1753_:
{
lean_object* v_str_1756_; lean_object* v_startInclusive_1757_; lean_object* v_endExclusive_1758_; lean_object* v_str_1759_; lean_object* v_startInclusive_1760_; lean_object* v_endExclusive_1761_; lean_object* v___x_1762_; lean_object* v___x_1763_; lean_object* v___x_1764_; lean_object* v___x_1765_; uint8_t v___x_1766_; 
v_str_1756_ = lean_ctor_get(v_needle_1749_, 0);
v_startInclusive_1757_ = lean_ctor_get(v_needle_1749_, 1);
v_endExclusive_1758_ = lean_ctor_get(v_needle_1749_, 2);
v_str_1759_ = lean_ctor_get(v_s_1725_, 0);
v_startInclusive_1760_ = lean_ctor_get(v_s_1725_, 1);
v_endExclusive_1761_ = lean_ctor_get(v_s_1725_, 2);
v___x_1762_ = lean_nat_sub(v_stackPos_1751_, v_needlePos_1752_);
v___x_1763_ = lean_nat_sub(v_endExclusive_1758_, v_startInclusive_1757_);
v___x_1764_ = lean_nat_add(v___x_1762_, v___x_1763_);
v___x_1765_ = lean_nat_sub(v_endExclusive_1761_, v_startInclusive_1760_);
v___x_1766_ = lean_nat_dec_le(v___x_1764_, v___x_1765_);
lean_dec(v___x_1764_);
if (v___x_1766_ == 0)
{
lean_object* v___x_1767_; lean_object* v___x_1768_; uint8_t v___x_1769_; 
lean_dec(v___x_1763_);
lean_del_object(v___x_1754_);
lean_dec(v_needlePos_1752_);
lean_dec(v_stackPos_1751_);
lean_dec_ref(v_table_1750_);
lean_dec_ref(v_needle_1749_);
v___x_1767_ = lean_unsigned_to_nat(1u);
v___x_1768_ = lean_nat_add(v___x_1762_, v___x_1767_);
lean_dec(v___x_1762_);
v___x_1769_ = lean_nat_dec_le(v___x_1768_, v___x_1765_);
lean_dec(v___x_1765_);
lean_dec(v___x_1768_);
if (v___x_1769_ == 0)
{
return v_b_1727_;
}
else
{
lean_object* v___x_1770_; 
v___x_1770_ = lean_box(3);
v_a_1726_ = v___x_1770_;
v_b_1727_ = v___x_1728_;
goto _start;
}
}
else
{
lean_object* v___x_1772_; uint8_t v_stackByte_1773_; lean_object* v___x_1774_; uint8_t v_patByte_1775_; uint8_t v___x_1776_; 
lean_dec(v___x_1765_);
lean_dec(v___x_1762_);
v___x_1772_ = lean_nat_add(v_startInclusive_1760_, v_stackPos_1751_);
v_stackByte_1773_ = lean_string_get_byte_fast(v_str_1759_, v___x_1772_);
v___x_1774_ = lean_nat_add(v_startInclusive_1757_, v_needlePos_1752_);
v_patByte_1775_ = lean_string_get_byte_fast(v_str_1756_, v___x_1774_);
v___x_1776_ = lean_uint8_dec_eq(v_stackByte_1773_, v_patByte_1775_);
if (v___x_1776_ == 0)
{
lean_object* v___x_1777_; uint8_t v_decide_1778_; 
lean_dec(v___x_1763_);
v___x_1777_ = lean_unsigned_to_nat(0u);
v_decide_1778_ = lean_nat_dec_eq(v_needlePos_1752_, v___x_1777_);
if (v_decide_1778_ == 0)
{
lean_object* v___x_1779_; lean_object* v___x_1780_; lean_object* v_newNeedlePos_1781_; uint8_t v___x_1782_; 
v___x_1779_ = lean_unsigned_to_nat(1u);
v___x_1780_ = lean_nat_sub(v_needlePos_1752_, v___x_1779_);
lean_dec(v_needlePos_1752_);
v_newNeedlePos_1781_ = lean_array_fget_borrowed(v_table_1750_, v___x_1780_);
lean_dec(v___x_1780_);
v___x_1782_ = lean_nat_dec_eq(v_newNeedlePos_1781_, v___x_1777_);
if (v___x_1782_ == 0)
{
lean_object* v___x_1784_; 
lean_inc(v_newNeedlePos_1781_);
if (v_isShared_1755_ == 0)
{
lean_ctor_set(v___x_1754_, 3, v_newNeedlePos_1781_);
v___x_1784_ = v___x_1754_;
goto v_reusejp_1783_;
}
else
{
lean_object* v_reuseFailAlloc_1786_; 
v_reuseFailAlloc_1786_ = lean_alloc_ctor(2, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1786_, 0, v_needle_1749_);
lean_ctor_set(v_reuseFailAlloc_1786_, 1, v_table_1750_);
lean_ctor_set(v_reuseFailAlloc_1786_, 2, v_stackPos_1751_);
lean_ctor_set(v_reuseFailAlloc_1786_, 3, v_newNeedlePos_1781_);
v___x_1784_ = v_reuseFailAlloc_1786_;
goto v_reusejp_1783_;
}
v_reusejp_1783_:
{
v_a_1726_ = v___x_1784_;
v_b_1727_ = v___x_1728_;
goto _start;
}
}
else
{
lean_object* v_nextStackPos_1787_; lean_object* v___x_1789_; 
v_nextStackPos_1787_ = l_String_Slice_posGE___redArg(v_s_1725_, v_stackPos_1751_);
if (v_isShared_1755_ == 0)
{
lean_ctor_set(v___x_1754_, 3, v___x_1777_);
lean_ctor_set(v___x_1754_, 2, v_nextStackPos_1787_);
v___x_1789_ = v___x_1754_;
goto v_reusejp_1788_;
}
else
{
lean_object* v_reuseFailAlloc_1791_; 
v_reuseFailAlloc_1791_ = lean_alloc_ctor(2, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1791_, 0, v_needle_1749_);
lean_ctor_set(v_reuseFailAlloc_1791_, 1, v_table_1750_);
lean_ctor_set(v_reuseFailAlloc_1791_, 2, v_nextStackPos_1787_);
lean_ctor_set(v_reuseFailAlloc_1791_, 3, v___x_1777_);
v___x_1789_ = v_reuseFailAlloc_1791_;
goto v_reusejp_1788_;
}
v_reusejp_1788_:
{
v_a_1726_ = v___x_1789_;
v_b_1727_ = v___x_1728_;
goto _start;
}
}
}
else
{
lean_object* v___x_1792_; lean_object* v___x_1793_; lean_object* v_nextStackPos_1794_; lean_object* v___x_1796_; 
lean_dec(v_needlePos_1752_);
v___x_1792_ = lean_unsigned_to_nat(1u);
v___x_1793_ = lean_nat_add(v_stackPos_1751_, v___x_1792_);
lean_dec(v_stackPos_1751_);
v_nextStackPos_1794_ = l_String_Slice_posGE___redArg(v_s_1725_, v___x_1793_);
if (v_isShared_1755_ == 0)
{
lean_ctor_set(v___x_1754_, 3, v___x_1777_);
lean_ctor_set(v___x_1754_, 2, v_nextStackPos_1794_);
v___x_1796_ = v___x_1754_;
goto v_reusejp_1795_;
}
else
{
lean_object* v_reuseFailAlloc_1798_; 
v_reuseFailAlloc_1798_ = lean_alloc_ctor(2, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1798_, 0, v_needle_1749_);
lean_ctor_set(v_reuseFailAlloc_1798_, 1, v_table_1750_);
lean_ctor_set(v_reuseFailAlloc_1798_, 2, v_nextStackPos_1794_);
lean_ctor_set(v_reuseFailAlloc_1798_, 3, v___x_1777_);
v___x_1796_ = v_reuseFailAlloc_1798_;
goto v_reusejp_1795_;
}
v_reusejp_1795_:
{
v_a_1726_ = v___x_1796_;
v_b_1727_ = v___x_1728_;
goto _start;
}
}
}
else
{
lean_object* v___x_1799_; lean_object* v_nextNeedlePos_1800_; uint8_t v_decide_1801_; 
v___x_1799_ = lean_unsigned_to_nat(1u);
v_nextNeedlePos_1800_ = lean_nat_add(v_needlePos_1752_, v___x_1799_);
lean_dec(v_needlePos_1752_);
v_decide_1801_ = lean_nat_dec_eq(v_nextNeedlePos_1800_, v___x_1763_);
lean_dec(v___x_1763_);
if (v_decide_1801_ == 0)
{
lean_object* v_nextStackPos_1802_; lean_object* v___x_1804_; 
v_nextStackPos_1802_ = lean_nat_add(v_stackPos_1751_, v___x_1799_);
lean_dec(v_stackPos_1751_);
if (v_isShared_1755_ == 0)
{
lean_ctor_set(v___x_1754_, 3, v_nextNeedlePos_1800_);
lean_ctor_set(v___x_1754_, 2, v_nextStackPos_1802_);
v___x_1804_ = v___x_1754_;
goto v_reusejp_1803_;
}
else
{
lean_object* v_reuseFailAlloc_1806_; 
v_reuseFailAlloc_1806_ = lean_alloc_ctor(2, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1806_, 0, v_needle_1749_);
lean_ctor_set(v_reuseFailAlloc_1806_, 1, v_table_1750_);
lean_ctor_set(v_reuseFailAlloc_1806_, 2, v_nextStackPos_1802_);
lean_ctor_set(v_reuseFailAlloc_1806_, 3, v_nextNeedlePos_1800_);
v___x_1804_ = v_reuseFailAlloc_1806_;
goto v_reusejp_1803_;
}
v_reusejp_1803_:
{
v_a_1726_ = v___x_1804_;
goto _start;
}
}
else
{
lean_dec(v_nextNeedlePos_1800_);
lean_del_object(v___x_1754_);
lean_dec(v_stackPos_1751_);
lean_dec_ref(v_table_1750_);
lean_dec_ref(v_needle_1749_);
return v_decide_1801_;
}
}
}
}
}
default: 
{
return v_b_1727_;
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00__private_Lake_CLI_Check_0__Lake_Check_runExternalKernel_isNanodaKernel_spec__0_spec__0___redArg___boxed(lean_object* v_s_1808_, lean_object* v_a_1809_, lean_object* v_b_1810_){
_start:
{
uint8_t v_b_boxed_1811_; uint8_t v_res_1812_; lean_object* v_r_1813_; 
v_b_boxed_1811_ = lean_unbox(v_b_1810_);
v_res_1812_ = l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00__private_Lake_CLI_Check_0__Lake_Check_runExternalKernel_isNanodaKernel_spec__0_spec__0___redArg(v_s_1808_, v_a_1809_, v_b_boxed_1811_);
lean_dec_ref(v_s_1808_);
v_r_1813_ = lean_box(v_res_1812_);
return v_r_1813_;
}
}
static lean_object* _init_l_String_Slice_contains___at___00__private_Lake_CLI_Check_0__Lake_Check_runExternalKernel_isNanodaKernel_spec__0___closed__1(void){
_start:
{
lean_object* v___x_1815_; lean_object* v___x_1816_; 
v___x_1815_ = ((lean_object*)(l_String_Slice_contains___at___00__private_Lake_CLI_Check_0__Lake_Check_runExternalKernel_isNanodaKernel_spec__0___closed__0));
v___x_1816_ = lean_string_utf8_byte_size(v___x_1815_);
return v___x_1816_;
}
}
static uint8_t _init_l_String_Slice_contains___at___00__private_Lake_CLI_Check_0__Lake_Check_runExternalKernel_isNanodaKernel_spec__0___closed__2(void){
_start:
{
lean_object* v___x_1817_; lean_object* v___x_1818_; uint8_t v___x_1819_; 
v___x_1817_ = lean_unsigned_to_nat(0u);
v___x_1818_ = lean_obj_once(&l_String_Slice_contains___at___00__private_Lake_CLI_Check_0__Lake_Check_runExternalKernel_isNanodaKernel_spec__0___closed__1, &l_String_Slice_contains___at___00__private_Lake_CLI_Check_0__Lake_Check_runExternalKernel_isNanodaKernel_spec__0___closed__1_once, _init_l_String_Slice_contains___at___00__private_Lake_CLI_Check_0__Lake_Check_runExternalKernel_isNanodaKernel_spec__0___closed__1);
v___x_1819_ = lean_nat_dec_eq(v___x_1818_, v___x_1817_);
return v___x_1819_;
}
}
static lean_object* _init_l_String_Slice_contains___at___00__private_Lake_CLI_Check_0__Lake_Check_runExternalKernel_isNanodaKernel_spec__0___closed__3(void){
_start:
{
lean_object* v___x_1820_; lean_object* v___x_1821_; lean_object* v___x_1822_; lean_object* v___x_1823_; 
v___x_1820_ = lean_obj_once(&l_String_Slice_contains___at___00__private_Lake_CLI_Check_0__Lake_Check_runExternalKernel_isNanodaKernel_spec__0___closed__1, &l_String_Slice_contains___at___00__private_Lake_CLI_Check_0__Lake_Check_runExternalKernel_isNanodaKernel_spec__0___closed__1_once, _init_l_String_Slice_contains___at___00__private_Lake_CLI_Check_0__Lake_Check_runExternalKernel_isNanodaKernel_spec__0___closed__1);
v___x_1821_ = lean_unsigned_to_nat(0u);
v___x_1822_ = ((lean_object*)(l_String_Slice_contains___at___00__private_Lake_CLI_Check_0__Lake_Check_runExternalKernel_isNanodaKernel_spec__0___closed__0));
v___x_1823_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1823_, 0, v___x_1822_);
lean_ctor_set(v___x_1823_, 1, v___x_1821_);
lean_ctor_set(v___x_1823_, 2, v___x_1820_);
return v___x_1823_;
}
}
static lean_object* _init_l_String_Slice_contains___at___00__private_Lake_CLI_Check_0__Lake_Check_runExternalKernel_isNanodaKernel_spec__0___closed__4(void){
_start:
{
lean_object* v___x_1824_; lean_object* v___x_1825_; 
v___x_1824_ = lean_obj_once(&l_String_Slice_contains___at___00__private_Lake_CLI_Check_0__Lake_Check_runExternalKernel_isNanodaKernel_spec__0___closed__3, &l_String_Slice_contains___at___00__private_Lake_CLI_Check_0__Lake_Check_runExternalKernel_isNanodaKernel_spec__0___closed__3_once, _init_l_String_Slice_contains___at___00__private_Lake_CLI_Check_0__Lake_Check_runExternalKernel_isNanodaKernel_spec__0___closed__3);
v___x_1825_ = l_String_Slice_Pattern_ForwardSliceSearcher_buildTable(v___x_1824_);
return v___x_1825_;
}
}
static lean_object* _init_l_String_Slice_contains___at___00__private_Lake_CLI_Check_0__Lake_Check_runExternalKernel_isNanodaKernel_spec__0___closed__5(void){
_start:
{
lean_object* v___x_1826_; lean_object* v___x_1827_; lean_object* v___x_1828_; lean_object* v___x_1829_; 
v___x_1826_ = lean_unsigned_to_nat(0u);
v___x_1827_ = lean_obj_once(&l_String_Slice_contains___at___00__private_Lake_CLI_Check_0__Lake_Check_runExternalKernel_isNanodaKernel_spec__0___closed__4, &l_String_Slice_contains___at___00__private_Lake_CLI_Check_0__Lake_Check_runExternalKernel_isNanodaKernel_spec__0___closed__4_once, _init_l_String_Slice_contains___at___00__private_Lake_CLI_Check_0__Lake_Check_runExternalKernel_isNanodaKernel_spec__0___closed__4);
v___x_1828_ = lean_obj_once(&l_String_Slice_contains___at___00__private_Lake_CLI_Check_0__Lake_Check_runExternalKernel_isNanodaKernel_spec__0___closed__3, &l_String_Slice_contains___at___00__private_Lake_CLI_Check_0__Lake_Check_runExternalKernel_isNanodaKernel_spec__0___closed__3_once, _init_l_String_Slice_contains___at___00__private_Lake_CLI_Check_0__Lake_Check_runExternalKernel_isNanodaKernel_spec__0___closed__3);
v___x_1829_ = lean_alloc_ctor(2, 4, 0);
lean_ctor_set(v___x_1829_, 0, v___x_1828_);
lean_ctor_set(v___x_1829_, 1, v___x_1827_);
lean_ctor_set(v___x_1829_, 2, v___x_1826_);
lean_ctor_set(v___x_1829_, 3, v___x_1826_);
return v___x_1829_;
}
}
LEAN_EXPORT uint8_t l_String_Slice_contains___at___00__private_Lake_CLI_Check_0__Lake_Check_runExternalKernel_isNanodaKernel_spec__0(lean_object* v_s_1832_){
_start:
{
lean_object* v___y_1834_; uint8_t v___x_1837_; 
v___x_1837_ = lean_uint8_once(&l_String_Slice_contains___at___00__private_Lake_CLI_Check_0__Lake_Check_runExternalKernel_isNanodaKernel_spec__0___closed__2, &l_String_Slice_contains___at___00__private_Lake_CLI_Check_0__Lake_Check_runExternalKernel_isNanodaKernel_spec__0___closed__2_once, _init_l_String_Slice_contains___at___00__private_Lake_CLI_Check_0__Lake_Check_runExternalKernel_isNanodaKernel_spec__0___closed__2);
if (v___x_1837_ == 0)
{
lean_object* v___x_1838_; 
v___x_1838_ = lean_obj_once(&l_String_Slice_contains___at___00__private_Lake_CLI_Check_0__Lake_Check_runExternalKernel_isNanodaKernel_spec__0___closed__5, &l_String_Slice_contains___at___00__private_Lake_CLI_Check_0__Lake_Check_runExternalKernel_isNanodaKernel_spec__0___closed__5_once, _init_l_String_Slice_contains___at___00__private_Lake_CLI_Check_0__Lake_Check_runExternalKernel_isNanodaKernel_spec__0___closed__5);
v___y_1834_ = v___x_1838_;
goto v___jp_1833_;
}
else
{
lean_object* v___x_1839_; 
v___x_1839_ = ((lean_object*)(l_String_Slice_contains___at___00__private_Lake_CLI_Check_0__Lake_Check_runExternalKernel_isNanodaKernel_spec__0___closed__6));
v___y_1834_ = v___x_1839_;
goto v___jp_1833_;
}
v___jp_1833_:
{
uint8_t v___x_1835_; uint8_t v___x_1836_; 
v___x_1835_ = 0;
lean_inc(v___y_1834_);
v___x_1836_ = l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00__private_Lake_CLI_Check_0__Lake_Check_runExternalKernel_isNanodaKernel_spec__0_spec__0___redArg(v_s_1832_, v___y_1834_, v___x_1835_);
return v___x_1836_;
}
}
}
LEAN_EXPORT lean_object* l_String_Slice_contains___at___00__private_Lake_CLI_Check_0__Lake_Check_runExternalKernel_isNanodaKernel_spec__0___boxed(lean_object* v_s_1840_){
_start:
{
uint8_t v_res_1841_; lean_object* v_r_1842_; 
v_res_1841_ = l_String_Slice_contains___at___00__private_Lake_CLI_Check_0__Lake_Check_runExternalKernel_isNanodaKernel_spec__0(v_s_1840_);
lean_dec_ref(v_s_1840_);
v_r_1842_ = lean_box(v_res_1841_);
return v_r_1842_;
}
}
LEAN_EXPORT uint8_t l___private_Lake_CLI_Check_0__Lake_Check_runExternalKernel_isNanodaKernel(lean_object* v_kernelName_1843_){
_start:
{
lean_object* v___x_1844_; lean_object* v___x_1845_; lean_object* v___x_1846_; uint8_t v___x_1847_; 
v___x_1844_ = lean_unsigned_to_nat(0u);
v___x_1845_ = lean_string_utf8_byte_size(v_kernelName_1843_);
v___x_1846_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1846_, 0, v_kernelName_1843_);
lean_ctor_set(v___x_1846_, 1, v___x_1844_);
lean_ctor_set(v___x_1846_, 2, v___x_1845_);
v___x_1847_ = l_String_Slice_contains___at___00__private_Lake_CLI_Check_0__Lake_Check_runExternalKernel_isNanodaKernel_spec__0(v___x_1846_);
lean_dec_ref_known(v___x_1846_, 3);
return v___x_1847_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_Check_0__Lake_Check_runExternalKernel_isNanodaKernel___boxed(lean_object* v_kernelName_1848_){
_start:
{
uint8_t v_res_1849_; lean_object* v_r_1850_; 
v_res_1849_ = l___private_Lake_CLI_Check_0__Lake_Check_runExternalKernel_isNanodaKernel(v_kernelName_1848_);
v_r_1850_ = lean_box(v_res_1849_);
return v_r_1850_;
}
}
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00__private_Lake_CLI_Check_0__Lake_Check_runExternalKernel_isNanodaKernel_spec__0_spec__0(lean_object* v_s_1851_, lean_object* v_inst_1852_, lean_object* v_R_1853_, lean_object* v_a_1854_, uint8_t v_b_1855_, lean_object* v_c_1856_){
_start:
{
uint8_t v___x_1857_; 
v___x_1857_ = l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00__private_Lake_CLI_Check_0__Lake_Check_runExternalKernel_isNanodaKernel_spec__0_spec__0___redArg(v_s_1851_, v_a_1854_, v_b_1855_);
return v___x_1857_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00__private_Lake_CLI_Check_0__Lake_Check_runExternalKernel_isNanodaKernel_spec__0_spec__0___boxed(lean_object* v_s_1858_, lean_object* v_inst_1859_, lean_object* v_R_1860_, lean_object* v_a_1861_, lean_object* v_b_1862_, lean_object* v_c_1863_){
_start:
{
uint8_t v_b_boxed_1864_; uint8_t v_res_1865_; lean_object* v_r_1866_; 
v_b_boxed_1864_ = lean_unbox(v_b_1862_);
v_res_1865_ = l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00__private_Lake_CLI_Check_0__Lake_Check_runExternalKernel_isNanodaKernel_spec__0_spec__0(v_s_1858_, v_inst_1859_, v_R_1860_, v_a_1861_, v_b_boxed_1864_, v_c_1863_);
lean_dec_ref(v_s_1858_);
v_r_1866_ = lean_box(v_res_1865_);
return v_r_1866_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lake_CLI_Check_0__Lake_Check_runExternalKernel_spec__1___redArg(lean_object* v_a_1867_, lean_object* v_b_1868_){
_start:
{
lean_object* v_array_1869_; lean_object* v_start_1870_; lean_object* v_stop_1871_; lean_object* v___x_1873_; uint8_t v_isShared_1874_; uint8_t v_isSharedCheck_1884_; 
v_array_1869_ = lean_ctor_get(v_a_1867_, 0);
v_start_1870_ = lean_ctor_get(v_a_1867_, 1);
v_stop_1871_ = lean_ctor_get(v_a_1867_, 2);
v_isSharedCheck_1884_ = !lean_is_exclusive(v_a_1867_);
if (v_isSharedCheck_1884_ == 0)
{
v___x_1873_ = v_a_1867_;
v_isShared_1874_ = v_isSharedCheck_1884_;
goto v_resetjp_1872_;
}
else
{
lean_inc(v_stop_1871_);
lean_inc(v_start_1870_);
lean_inc(v_array_1869_);
lean_dec(v_a_1867_);
v___x_1873_ = lean_box(0);
v_isShared_1874_ = v_isSharedCheck_1884_;
goto v_resetjp_1872_;
}
v_resetjp_1872_:
{
uint8_t v___x_1875_; 
v___x_1875_ = lean_nat_dec_lt(v_start_1870_, v_stop_1871_);
if (v___x_1875_ == 0)
{
lean_del_object(v___x_1873_);
lean_dec(v_stop_1871_);
lean_dec(v_start_1870_);
lean_dec_ref(v_array_1869_);
return v_b_1868_;
}
else
{
lean_object* v___x_1876_; lean_object* v___x_1877_; lean_object* v___x_1879_; 
v___x_1876_ = lean_unsigned_to_nat(1u);
v___x_1877_ = lean_nat_add(v_start_1870_, v___x_1876_);
lean_inc_ref(v_array_1869_);
if (v_isShared_1874_ == 0)
{
lean_ctor_set(v___x_1873_, 1, v___x_1877_);
v___x_1879_ = v___x_1873_;
goto v_reusejp_1878_;
}
else
{
lean_object* v_reuseFailAlloc_1883_; 
v_reuseFailAlloc_1883_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1883_, 0, v_array_1869_);
lean_ctor_set(v_reuseFailAlloc_1883_, 1, v___x_1877_);
lean_ctor_set(v_reuseFailAlloc_1883_, 2, v_stop_1871_);
v___x_1879_ = v_reuseFailAlloc_1883_;
goto v_reusejp_1878_;
}
v_reusejp_1878_:
{
lean_object* v___x_1880_; lean_object* v___x_1881_; 
v___x_1880_ = lean_array_fget(v_array_1869_, v_start_1870_);
lean_dec(v_start_1870_);
lean_dec_ref(v_array_1869_);
v___x_1881_ = lean_array_push(v_b_1868_, v___x_1880_);
v_a_1867_ = v___x_1879_;
v_b_1868_ = v___x_1881_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_CLI_Check_0__Lake_Check_runExternalKernel_spec__0(size_t v_sz_1885_, size_t v_i_1886_, lean_object* v_bs_1887_){
_start:
{
uint8_t v___x_1888_; 
v___x_1888_ = lean_usize_dec_lt(v_i_1886_, v_sz_1885_);
if (v___x_1888_ == 0)
{
lean_object* v___x_1889_; 
v___x_1889_ = l_unsafeCast___redArg(v_bs_1887_);
lean_dec_ref(v_bs_1887_);
return v___x_1889_;
}
else
{
lean_object* v_v_1890_; lean_object* v___x_1891_; lean_object* v_bs_x27_1892_; lean_object* v___x_1893_; lean_object* v___x_1894_; lean_object* v___x_1895_; size_t v___x_1896_; size_t v___x_1897_; lean_object* v___x_1898_; lean_object* v___x_1899_; 
v_v_1890_ = lean_array_uget(v_bs_1887_, v_i_1886_);
v___x_1891_ = lean_unsigned_to_nat(0u);
v_bs_x27_1892_ = lean_array_uset(v_bs_1887_, v_i_1886_, v___x_1891_);
v___x_1893_ = l_unsafeCast___redArg(v_v_1890_);
lean_dec(v_v_1890_);
v___x_1894_ = l_Lean_Name_toString(v___x_1893_, v___x_1888_);
v___x_1895_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1895_, 0, v___x_1894_);
v___x_1896_ = ((size_t)1ULL);
v___x_1897_ = lean_usize_add(v_i_1886_, v___x_1896_);
v___x_1898_ = l_unsafeCast___redArg(v___x_1895_);
lean_dec_ref_known(v___x_1895_, 1);
v___x_1899_ = lean_array_uset(v_bs_x27_1892_, v_i_1886_, v___x_1898_);
v_i_1886_ = v___x_1897_;
v_bs_1887_ = v___x_1899_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_CLI_Check_0__Lake_Check_runExternalKernel_spec__0___boxed(lean_object* v_sz_1901_, lean_object* v_i_1902_, lean_object* v_bs_1903_){
_start:
{
size_t v_sz_boxed_1904_; size_t v_i_boxed_1905_; lean_object* v_res_1906_; 
v_sz_boxed_1904_ = lean_unbox_usize(v_sz_1901_);
lean_dec(v_sz_1901_);
v_i_boxed_1905_ = lean_unbox_usize(v_i_1902_);
lean_dec(v_i_1902_);
v_res_1906_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_CLI_Check_0__Lake_Check_runExternalKernel_spec__0(v_sz_boxed_1904_, v_i_boxed_1905_, v_bs_1903_);
return v_res_1906_;
}
}
static lean_object* _init_l___private_Lake_CLI_Check_0__Lake_Check_runExternalKernel___lam__0___closed__17(void){
_start:
{
lean_object* v___x_1934_; lean_object* v___x_1935_; 
v___x_1934_ = lean_unsigned_to_nat(4u);
v___x_1935_ = l_Lean_JsonNumber_fromNat(v___x_1934_);
return v___x_1935_;
}
}
static lean_object* _init_l___private_Lake_CLI_Check_0__Lake_Check_runExternalKernel___lam__0___closed__18(void){
_start:
{
lean_object* v___x_1936_; lean_object* v___x_1937_; 
v___x_1936_ = lean_obj_once(&l___private_Lake_CLI_Check_0__Lake_Check_runExternalKernel___lam__0___closed__17, &l___private_Lake_CLI_Check_0__Lake_Check_runExternalKernel___lam__0___closed__17_once, _init_l___private_Lake_CLI_Check_0__Lake_Check_runExternalKernel___lam__0___closed__17);
v___x_1937_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_1937_, 0, v___x_1936_);
return v___x_1937_;
}
}
static lean_object* _init_l___private_Lake_CLI_Check_0__Lake_Check_runExternalKernel___lam__0___closed__19(void){
_start:
{
lean_object* v___x_1938_; lean_object* v___x_1939_; lean_object* v___x_1940_; 
v___x_1938_ = lean_obj_once(&l___private_Lake_CLI_Check_0__Lake_Check_runExternalKernel___lam__0___closed__18, &l___private_Lake_CLI_Check_0__Lake_Check_runExternalKernel___lam__0___closed__18_once, _init_l___private_Lake_CLI_Check_0__Lake_Check_runExternalKernel___lam__0___closed__18);
v___x_1939_ = ((lean_object*)(l___private_Lake_CLI_Check_0__Lake_Check_runExternalKernel___lam__0___closed__16));
v___x_1940_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1940_, 0, v___x_1939_);
lean_ctor_set(v___x_1940_, 1, v___x_1938_);
return v___x_1940_;
}
}
static lean_object* _init_l___private_Lake_CLI_Check_0__Lake_Check_runExternalKernel___lam__0___closed__26(void){
_start:
{
lean_object* v___x_1955_; lean_object* v___x_1956_; lean_object* v___x_1957_; 
v___x_1955_ = ((lean_object*)(l___private_Lake_CLI_Check_0__Lake_Check_runExternalKernel___lam__0___closed__25));
v___x_1956_ = lean_obj_once(&l___private_Lake_CLI_Check_0__Lake_Check_runExternalKernel___lam__0___closed__19, &l___private_Lake_CLI_Check_0__Lake_Check_runExternalKernel___lam__0___closed__19_once, _init_l___private_Lake_CLI_Check_0__Lake_Check_runExternalKernel___lam__0___closed__19);
v___x_1957_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1957_, 0, v___x_1956_);
lean_ctor_set(v___x_1957_, 1, v___x_1955_);
return v___x_1957_;
}
}
static lean_object* _init_l___private_Lake_CLI_Check_0__Lake_Check_runExternalKernel___lam__0___closed__27(void){
_start:
{
lean_object* v___x_1958_; lean_object* v___x_1959_; lean_object* v___x_1960_; 
v___x_1958_ = lean_obj_once(&l___private_Lake_CLI_Check_0__Lake_Check_runExternalKernel___lam__0___closed__26, &l___private_Lake_CLI_Check_0__Lake_Check_runExternalKernel___lam__0___closed__26_once, _init_l___private_Lake_CLI_Check_0__Lake_Check_runExternalKernel___lam__0___closed__26);
v___x_1959_ = ((lean_object*)(l___private_Lake_CLI_Check_0__Lake_Check_runExternalKernel___lam__0___closed__15));
v___x_1960_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1960_, 0, v___x_1959_);
lean_ctor_set(v___x_1960_, 1, v___x_1958_);
return v___x_1960_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_Check_0__Lake_Check_runExternalKernel___lam__0(lean_object* v_kernelName_1961_, lean_object* v_solutionPath_1962_, lean_object* v___x_1963_, lean_object* v_kernelCommand_1964_, lean_object* v_configHandle_1965_, lean_object* v_configPath_1966_, lean_object* v___y_1967_){
_start:
{
lean_object* v_a_1970_; lean_object* v_legalAxioms_1997_; uint8_t v___x_1998_; lean_object* v___y_2000_; lean_object* v___y_2001_; lean_object* v___y_2002_; lean_object* v___y_2003_; lean_object* v_kernelArgs_2062_; lean_object* v___y_2063_; lean_object* v___x_2069_; lean_object* v___x_2070_; lean_object* v___x_2071_; lean_object* v___x_2072_; lean_object* v___x_2073_; size_t v_sz_2074_; size_t v___x_2075_; lean_object* v___x_2076_; lean_object* v___x_2077_; lean_object* v___x_2078_; lean_object* v___x_2079_; lean_object* v___x_2080_; lean_object* v___x_2081_; lean_object* v___x_2082_; lean_object* v___x_2083_; lean_object* v___x_2084_; lean_object* v___x_2085_; lean_object* v___x_2086_; lean_object* v___x_2087_; 
v_legalAxioms_1997_ = lean_ctor_get(v___y_1967_, 5);
v___x_1998_ = 0;
v___x_2069_ = ((lean_object*)(l___private_Lake_CLI_Check_0__Lake_Check_runExternalKernel___lam__0___closed__10));
v___x_2070_ = ((lean_object*)(l___private_Lake_CLI_Check_0__Lake_Check_runExternalKernel___lam__0___closed__11));
lean_inc_ref(v_solutionPath_1962_);
v___x_2071_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2071_, 0, v_solutionPath_1962_);
v___x_2072_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2072_, 0, v___x_2070_);
lean_ctor_set(v___x_2072_, 1, v___x_2071_);
v___x_2073_ = ((lean_object*)(l___private_Lake_CLI_Check_0__Lake_Check_runExternalKernel___lam__0___closed__12));
v_sz_2074_ = lean_array_size(v_legalAxioms_1997_);
v___x_2075_ = ((size_t)0ULL);
v___x_2076_ = l_unsafeCast___redArg(v_legalAxioms_1997_);
v___x_2077_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lake_CLI_Check_0__Lake_Check_runExternalKernel_spec__0(v_sz_2074_, v___x_2075_, v___x_2076_);
v___x_2078_ = l_unsafeCast___redArg(v___x_2077_);
lean_dec_ref(v___x_2077_);
v___x_2079_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2079_, 0, v___x_2078_);
v___x_2080_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2080_, 0, v___x_2073_);
lean_ctor_set(v___x_2080_, 1, v___x_2079_);
v___x_2081_ = lean_obj_once(&l___private_Lake_CLI_Check_0__Lake_Check_runExternalKernel___lam__0___closed__27, &l___private_Lake_CLI_Check_0__Lake_Check_runExternalKernel___lam__0___closed__27_once, _init_l___private_Lake_CLI_Check_0__Lake_Check_runExternalKernel___lam__0___closed__27);
v___x_2082_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2082_, 0, v___x_2080_);
lean_ctor_set(v___x_2082_, 1, v___x_2081_);
v___x_2083_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2083_, 0, v___x_2072_);
lean_ctor_set(v___x_2083_, 1, v___x_2082_);
v___x_2084_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2084_, 0, v___x_2069_);
lean_ctor_set(v___x_2084_, 1, v___x_2083_);
v___x_2085_ = l_Lean_Json_mkObj(v___x_2084_);
lean_dec_ref_known(v___x_2084_, 2);
v___x_2086_ = l_Lean_Json_compress(v___x_2085_);
v___x_2087_ = lean_io_prim_handle_put_str(v_configHandle_1965_, v___x_2086_);
lean_dec_ref(v___x_2086_);
if (lean_obj_tag(v___x_2087_) == 0)
{
lean_object* v___x_2088_; 
lean_dec_ref_known(v___x_2087_, 1);
v___x_2088_ = lean_io_prim_handle_flush(v_configHandle_1965_);
if (lean_obj_tag(v___x_2088_) == 0)
{
lean_object* v___x_2089_; lean_object* v___x_2090_; lean_object* v___x_2091_; lean_object* v___x_2092_; lean_object* v___x_2093_; uint8_t v___x_2094_; 
lean_dec_ref_known(v___x_2088_, 1);
v___x_2089_ = lean_unsigned_to_nat(1u);
v___x_2090_ = lean_array_get_size(v_kernelCommand_1964_);
lean_inc_ref(v_kernelCommand_1964_);
v___x_2091_ = l_Array_toSubarray___redArg(v_kernelCommand_1964_, v___x_2089_, v___x_2090_);
v___x_2092_ = ((lean_object*)(l___private_Lake_CLI_Check_0__Lake_Check_safeResolveWorkspace___closed__13));
v___x_2093_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lake_CLI_Check_0__Lake_Check_runExternalKernel_spec__1___redArg(v___x_2091_, v___x_2092_);
lean_inc_ref(v_kernelName_1961_);
v___x_2094_ = l___private_Lake_CLI_Check_0__Lake_Check_runExternalKernel_isNanodaKernel(v_kernelName_1961_);
if (v___x_2094_ == 0)
{
lean_object* v___x_2095_; 
lean_inc_ref(v_solutionPath_1962_);
v___x_2095_ = lean_array_push(v___x_2093_, v_solutionPath_1962_);
v_kernelArgs_2062_ = v___x_2095_;
v___y_2063_ = v___y_1967_;
goto v___jp_2061_;
}
else
{
lean_object* v___x_2096_; 
lean_inc_ref(v_configPath_1966_);
v___x_2096_ = lean_array_push(v___x_2093_, v_configPath_1966_);
v_kernelArgs_2062_ = v___x_2096_;
v___y_2063_ = v___y_1967_;
goto v___jp_2061_;
}
}
else
{
lean_object* v_a_2097_; lean_object* v___x_2099_; uint8_t v_isShared_2100_; uint8_t v_isSharedCheck_2104_; 
lean_dec_ref(v_configPath_1966_);
lean_dec_ref(v_kernelCommand_1964_);
lean_dec_ref(v_solutionPath_1962_);
lean_dec_ref(v_kernelName_1961_);
v_a_2097_ = lean_ctor_get(v___x_2088_, 0);
v_isSharedCheck_2104_ = !lean_is_exclusive(v___x_2088_);
if (v_isSharedCheck_2104_ == 0)
{
v___x_2099_ = v___x_2088_;
v_isShared_2100_ = v_isSharedCheck_2104_;
goto v_resetjp_2098_;
}
else
{
lean_inc(v_a_2097_);
lean_dec(v___x_2088_);
v___x_2099_ = lean_box(0);
v_isShared_2100_ = v_isSharedCheck_2104_;
goto v_resetjp_2098_;
}
v_resetjp_2098_:
{
lean_object* v___x_2102_; 
if (v_isShared_2100_ == 0)
{
v___x_2102_ = v___x_2099_;
goto v_reusejp_2101_;
}
else
{
lean_object* v_reuseFailAlloc_2103_; 
v_reuseFailAlloc_2103_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2103_, 0, v_a_2097_);
v___x_2102_ = v_reuseFailAlloc_2103_;
goto v_reusejp_2101_;
}
v_reusejp_2101_:
{
return v___x_2102_;
}
}
}
}
else
{
lean_object* v_a_2105_; lean_object* v___x_2107_; uint8_t v_isShared_2108_; uint8_t v_isSharedCheck_2112_; 
lean_dec_ref(v_configPath_1966_);
lean_dec_ref(v_kernelCommand_1964_);
lean_dec_ref(v_solutionPath_1962_);
lean_dec_ref(v_kernelName_1961_);
v_a_2105_ = lean_ctor_get(v___x_2087_, 0);
v_isSharedCheck_2112_ = !lean_is_exclusive(v___x_2087_);
if (v_isSharedCheck_2112_ == 0)
{
v___x_2107_ = v___x_2087_;
v_isShared_2108_ = v_isSharedCheck_2112_;
goto v_resetjp_2106_;
}
else
{
lean_inc(v_a_2105_);
lean_dec(v___x_2087_);
v___x_2107_ = lean_box(0);
v_isShared_2108_ = v_isSharedCheck_2112_;
goto v_resetjp_2106_;
}
v_resetjp_2106_:
{
lean_object* v___x_2110_; 
if (v_isShared_2108_ == 0)
{
v___x_2110_ = v___x_2107_;
goto v_reusejp_2109_;
}
else
{
lean_object* v_reuseFailAlloc_2111_; 
v_reuseFailAlloc_2111_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2111_, 0, v_a_2105_);
v___x_2110_ = v_reuseFailAlloc_2111_;
goto v_reusejp_2109_;
}
v_reusejp_2109_:
{
return v___x_2110_;
}
}
}
v___jp_1969_:
{
lean_object* v___x_1971_; lean_object* v___x_1972_; lean_object* v___x_1973_; lean_object* v___x_1974_; lean_object* v___x_1975_; 
v___x_1971_ = ((lean_object*)(l___private_Lake_CLI_Check_0__Lake_Check_runExternalKernel___lam__0___closed__0));
v___x_1972_ = lean_string_append(v___x_1971_, v_kernelName_1961_);
lean_dec_ref(v_kernelName_1961_);
v___x_1973_ = ((lean_object*)(l___private_Lake_CLI_Check_0__Lake_Check_runExternalKernel___lam__0___closed__1));
lean_inc_ref(v___x_1972_);
v___x_1974_ = lean_string_append(v___x_1972_, v___x_1973_);
v___x_1975_ = l_IO_println___at___00__private_Lake_CLI_Check_0__Lake_Check_safeResolveWorkspace_spec__2(v___x_1974_);
if (lean_obj_tag(v___x_1975_) == 0)
{
lean_object* v___x_1977_; uint8_t v_isShared_1978_; uint8_t v_isSharedCheck_1987_; 
v_isSharedCheck_1987_ = !lean_is_exclusive(v___x_1975_);
if (v_isSharedCheck_1987_ == 0)
{
lean_object* v_unused_1988_; 
v_unused_1988_ = lean_ctor_get(v___x_1975_, 0);
lean_dec(v_unused_1988_);
v___x_1977_ = v___x_1975_;
v_isShared_1978_ = v_isSharedCheck_1987_;
goto v_resetjp_1976_;
}
else
{
lean_dec(v___x_1975_);
v___x_1977_ = lean_box(0);
v_isShared_1978_ = v_isSharedCheck_1987_;
goto v_resetjp_1976_;
}
v_resetjp_1976_:
{
lean_object* v___x_1979_; lean_object* v___x_1980_; lean_object* v___x_1981_; lean_object* v___x_1982_; lean_object* v___x_1983_; lean_object* v___x_1985_; 
v___x_1979_ = ((lean_object*)(l___private_Lake_CLI_Check_0__Lake_Check_runExternalKernel___lam__0___closed__2));
v___x_1980_ = lean_string_append(v___x_1972_, v___x_1979_);
v___x_1981_ = lean_io_error_to_string(v_a_1970_);
v___x_1982_ = lean_string_append(v___x_1980_, v___x_1981_);
lean_dec_ref(v___x_1981_);
v___x_1983_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1983_, 0, v___x_1982_);
if (v_isShared_1978_ == 0)
{
lean_ctor_set(v___x_1977_, 0, v___x_1983_);
v___x_1985_ = v___x_1977_;
goto v_reusejp_1984_;
}
else
{
lean_object* v_reuseFailAlloc_1986_; 
v_reuseFailAlloc_1986_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1986_, 0, v___x_1983_);
v___x_1985_ = v_reuseFailAlloc_1986_;
goto v_reusejp_1984_;
}
v_reusejp_1984_:
{
return v___x_1985_;
}
}
}
else
{
lean_object* v_a_1989_; lean_object* v___x_1991_; uint8_t v_isShared_1992_; uint8_t v_isSharedCheck_1996_; 
lean_dec_ref(v___x_1972_);
lean_dec(v_a_1970_);
v_a_1989_ = lean_ctor_get(v___x_1975_, 0);
v_isSharedCheck_1996_ = !lean_is_exclusive(v___x_1975_);
if (v_isSharedCheck_1996_ == 0)
{
v___x_1991_ = v___x_1975_;
v_isShared_1992_ = v_isSharedCheck_1996_;
goto v_resetjp_1990_;
}
else
{
lean_inc(v_a_1989_);
lean_dec(v___x_1975_);
v___x_1991_ = lean_box(0);
v_isShared_1992_ = v_isSharedCheck_1996_;
goto v_resetjp_1990_;
}
v_resetjp_1990_:
{
lean_object* v___x_1994_; 
if (v_isShared_1992_ == 0)
{
v___x_1994_ = v___x_1991_;
goto v_reusejp_1993_;
}
else
{
lean_object* v_reuseFailAlloc_1995_; 
v_reuseFailAlloc_1995_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1995_, 0, v_a_1989_);
v___x_1994_ = v_reuseFailAlloc_1995_;
goto v_reusejp_1993_;
}
v_reusejp_1993_:
{
return v___x_1994_;
}
}
}
}
v___jp_1999_:
{
lean_object* v_leanPrefix_2004_; lean_object* v___x_2005_; lean_object* v___x_2006_; lean_object* v___x_2007_; lean_object* v___x_2008_; lean_object* v___x_2009_; lean_object* v___x_2010_; lean_object* v___x_2011_; lean_object* v___x_2012_; lean_object* v___x_2013_; lean_object* v___x_2014_; lean_object* v___x_2015_; lean_object* v___x_2016_; lean_object* v___x_2017_; 
v_leanPrefix_2004_ = lean_ctor_get(v___y_2002_, 6);
v___x_2005_ = ((lean_object*)(l___private_Lake_CLI_Check_0__Lake_Check_runExternalKernel___lam__0___closed__4));
v___x_2006_ = ((lean_object*)(l___private_Lake_CLI_Check_0__Lake_Check_safeResolveWorkspace___closed__12));
v___x_2007_ = lean_unsigned_to_nat(4u);
v___x_2008_ = lean_mk_empty_array_with_capacity(v___x_2007_);
v___x_2009_ = lean_array_push(v___x_2008_, v_configPath_1966_);
v___x_2010_ = lean_array_push(v___x_2009_, v_solutionPath_1962_);
lean_inc_ref(v___y_2003_);
v___x_2011_ = lean_array_push(v___x_2010_, v___y_2003_);
lean_inc_ref(v_leanPrefix_2004_);
v___x_2012_ = lean_array_push(v___x_2011_, v_leanPrefix_2004_);
v___x_2013_ = lean_mk_empty_array_with_capacity(v___y_2000_);
v___x_2014_ = ((lean_object*)(l___private_Lake_CLI_Check_0__Lake_Check_forbiddenPaths));
v___x_2015_ = ((lean_object*)(l___private_Lake_CLI_Check_0__Lake_Check_runExternalKernel___lam__0___closed__5));
v___x_2016_ = lean_alloc_ctor(0, 8, 1);
lean_ctor_set(v___x_2016_, 0, v___y_2003_);
lean_ctor_set(v___x_2016_, 1, v___y_2001_);
lean_ctor_set(v___x_2016_, 2, v___x_2005_);
lean_ctor_set(v___x_2016_, 3, v___x_2006_);
lean_ctor_set(v___x_2016_, 4, v___x_2012_);
lean_ctor_set(v___x_2016_, 5, v___x_2013_);
lean_ctor_set(v___x_2016_, 6, v___x_2014_);
lean_ctor_set(v___x_2016_, 7, v___x_2015_);
lean_ctor_set_uint8(v___x_2016_, sizeof(void*)*8, v___x_1998_);
v___x_2017_ = l___private_Lake_CLI_Check_0__Lake_Check_runSandBoxedExitCode(v___x_2016_, v___y_2002_);
if (lean_obj_tag(v___x_2017_) == 0)
{
lean_object* v_a_2018_; lean_object* v___x_2020_; uint8_t v_isShared_2021_; uint8_t v_isSharedCheck_2059_; 
v_a_2018_ = lean_ctor_get(v___x_2017_, 0);
v_isSharedCheck_2059_ = !lean_is_exclusive(v___x_2017_);
if (v_isSharedCheck_2059_ == 0)
{
v___x_2020_ = v___x_2017_;
v_isShared_2021_ = v_isSharedCheck_2059_;
goto v_resetjp_2019_;
}
else
{
lean_inc(v_a_2018_);
lean_dec(v___x_2017_);
v___x_2020_ = lean_box(0);
v_isShared_2021_ = v_isSharedCheck_2059_;
goto v_resetjp_2019_;
}
v_resetjp_2019_:
{
uint32_t v___x_2022_; uint32_t v___x_2023_; uint8_t v___x_2024_; 
v___x_2022_ = 0;
v___x_2023_ = lean_unbox_uint32(v_a_2018_);
v___x_2024_ = lean_uint32_dec_eq(v___x_2023_, v___x_2022_);
if (v___x_2024_ == 0)
{
lean_object* v___x_2025_; lean_object* v___x_2026_; lean_object* v___x_2027_; 
v___x_2025_ = ((lean_object*)(l___private_Lake_CLI_Check_0__Lake_Check_runExternalKernel___lam__0___closed__6));
lean_inc_ref(v_kernelName_1961_);
v___x_2026_ = lean_string_append(v_kernelName_1961_, v___x_2025_);
v___x_2027_ = l_IO_println___at___00__private_Lake_CLI_Check_0__Lake_Check_safeResolveWorkspace_spec__2(v___x_2026_);
if (lean_obj_tag(v___x_2027_) == 0)
{
lean_object* v___x_2029_; uint8_t v_isShared_2030_; uint8_t v_isSharedCheck_2043_; 
v_isSharedCheck_2043_ = !lean_is_exclusive(v___x_2027_);
if (v_isSharedCheck_2043_ == 0)
{
lean_object* v_unused_2044_; 
v_unused_2044_ = lean_ctor_get(v___x_2027_, 0);
lean_dec(v_unused_2044_);
v___x_2029_ = v___x_2027_;
v_isShared_2030_ = v_isSharedCheck_2043_;
goto v_resetjp_2028_;
}
else
{
lean_dec(v___x_2027_);
v___x_2029_ = lean_box(0);
v_isShared_2030_ = v_isSharedCheck_2043_;
goto v_resetjp_2028_;
}
v_resetjp_2028_:
{
lean_object* v___x_2031_; lean_object* v___x_2032_; uint32_t v___x_2033_; lean_object* v___x_2034_; lean_object* v___x_2035_; lean_object* v___x_2036_; lean_object* v___x_2038_; 
v___x_2031_ = ((lean_object*)(l___private_Lake_CLI_Check_0__Lake_Check_runExternalKernel___lam__0___closed__7));
v___x_2032_ = lean_string_append(v_kernelName_1961_, v___x_2031_);
v___x_2033_ = lean_unbox_uint32(v_a_2018_);
lean_dec(v_a_2018_);
v___x_2034_ = lean_uint32_to_nat(v___x_2033_);
v___x_2035_ = l_Nat_reprFast(v___x_2034_);
v___x_2036_ = lean_string_append(v___x_2032_, v___x_2035_);
lean_dec_ref(v___x_2035_);
if (v_isShared_2021_ == 0)
{
lean_ctor_set_tag(v___x_2020_, 1);
lean_ctor_set(v___x_2020_, 0, v___x_2036_);
v___x_2038_ = v___x_2020_;
goto v_reusejp_2037_;
}
else
{
lean_object* v_reuseFailAlloc_2042_; 
v_reuseFailAlloc_2042_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2042_, 0, v___x_2036_);
v___x_2038_ = v_reuseFailAlloc_2042_;
goto v_reusejp_2037_;
}
v_reusejp_2037_:
{
lean_object* v___x_2040_; 
if (v_isShared_2030_ == 0)
{
lean_ctor_set(v___x_2029_, 0, v___x_2038_);
v___x_2040_ = v___x_2029_;
goto v_reusejp_2039_;
}
else
{
lean_object* v_reuseFailAlloc_2041_; 
v_reuseFailAlloc_2041_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2041_, 0, v___x_2038_);
v___x_2040_ = v_reuseFailAlloc_2041_;
goto v_reusejp_2039_;
}
v_reusejp_2039_:
{
return v___x_2040_;
}
}
}
}
else
{
lean_object* v_a_2045_; 
lean_del_object(v___x_2020_);
lean_dec(v_a_2018_);
v_a_2045_ = lean_ctor_get(v___x_2027_, 0);
lean_inc(v_a_2045_);
lean_dec_ref_known(v___x_2027_, 1);
v_a_1970_ = v_a_2045_;
goto v___jp_1969_;
}
}
else
{
lean_object* v___x_2046_; lean_object* v___x_2047_; lean_object* v___x_2048_; 
lean_del_object(v___x_2020_);
lean_dec(v_a_2018_);
v___x_2046_ = ((lean_object*)(l___private_Lake_CLI_Check_0__Lake_Check_runExternalKernel___lam__0___closed__8));
lean_inc_ref(v_kernelName_1961_);
v___x_2047_ = lean_string_append(v_kernelName_1961_, v___x_2046_);
v___x_2048_ = l_IO_println___at___00__private_Lake_CLI_Check_0__Lake_Check_safeResolveWorkspace_spec__2(v___x_2047_);
if (lean_obj_tag(v___x_2048_) == 0)
{
lean_object* v___x_2050_; uint8_t v_isShared_2051_; uint8_t v_isSharedCheck_2056_; 
lean_dec_ref(v_kernelName_1961_);
v_isSharedCheck_2056_ = !lean_is_exclusive(v___x_2048_);
if (v_isSharedCheck_2056_ == 0)
{
lean_object* v_unused_2057_; 
v_unused_2057_ = lean_ctor_get(v___x_2048_, 0);
lean_dec(v_unused_2057_);
v___x_2050_ = v___x_2048_;
v_isShared_2051_ = v_isSharedCheck_2056_;
goto v_resetjp_2049_;
}
else
{
lean_dec(v___x_2048_);
v___x_2050_ = lean_box(0);
v_isShared_2051_ = v_isSharedCheck_2056_;
goto v_resetjp_2049_;
}
v_resetjp_2049_:
{
lean_object* v___x_2052_; lean_object* v___x_2054_; 
v___x_2052_ = lean_box(0);
if (v_isShared_2051_ == 0)
{
lean_ctor_set(v___x_2050_, 0, v___x_2052_);
v___x_2054_ = v___x_2050_;
goto v_reusejp_2053_;
}
else
{
lean_object* v_reuseFailAlloc_2055_; 
v_reuseFailAlloc_2055_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2055_, 0, v___x_2052_);
v___x_2054_ = v_reuseFailAlloc_2055_;
goto v_reusejp_2053_;
}
v_reusejp_2053_:
{
return v___x_2054_;
}
}
}
else
{
lean_object* v_a_2058_; 
v_a_2058_ = lean_ctor_get(v___x_2048_, 0);
lean_inc(v_a_2058_);
lean_dec_ref_known(v___x_2048_, 1);
v_a_1970_ = v_a_2058_;
goto v___jp_1969_;
}
}
}
}
else
{
lean_object* v_a_2060_; 
v_a_2060_ = lean_ctor_get(v___x_2017_, 0);
lean_inc(v_a_2060_);
lean_dec_ref_known(v___x_2017_, 1);
v_a_1970_ = v_a_2060_;
goto v___jp_1969_;
}
}
v___jp_2061_:
{
lean_object* v___x_2064_; lean_object* v___x_2065_; lean_object* v___x_2066_; lean_object* v_a_2067_; 
v___x_2064_ = lean_unsigned_to_nat(0u);
v___x_2065_ = lean_array_get(v___x_1963_, v_kernelCommand_1964_, v___x_2064_);
lean_dec_ref(v_kernelCommand_1964_);
lean_inc(v___x_2065_);
v___x_2066_ = l___private_Lake_CLI_Check_0__Lake_Check_whichExe(v___x_2065_);
v_a_2067_ = lean_ctor_get(v___x_2066_, 0);
lean_inc(v_a_2067_);
lean_dec_ref(v___x_2066_);
if (lean_obj_tag(v_a_2067_) == 0)
{
v___y_2000_ = v___x_2064_;
v___y_2001_ = v_kernelArgs_2062_;
v___y_2002_ = v___y_2063_;
v___y_2003_ = v___x_2065_;
goto v___jp_1999_;
}
else
{
lean_object* v_val_2068_; 
lean_dec(v___x_2065_);
v_val_2068_ = lean_ctor_get(v_a_2067_, 0);
lean_inc(v_val_2068_);
lean_dec_ref_known(v_a_2067_, 1);
v___y_2000_ = v___x_2064_;
v___y_2001_ = v_kernelArgs_2062_;
v___y_2002_ = v___y_2063_;
v___y_2003_ = v_val_2068_;
goto v___jp_1999_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_Check_0__Lake_Check_runExternalKernel___lam__0___boxed(lean_object* v_kernelName_2113_, lean_object* v_solutionPath_2114_, lean_object* v___x_2115_, lean_object* v_kernelCommand_2116_, lean_object* v_configHandle_2117_, lean_object* v_configPath_2118_, lean_object* v___y_2119_, lean_object* v___y_2120_){
_start:
{
lean_object* v_res_2121_; 
v_res_2121_ = l___private_Lake_CLI_Check_0__Lake_Check_runExternalKernel___lam__0(v_kernelName_2113_, v_solutionPath_2114_, v___x_2115_, v_kernelCommand_2116_, v_configHandle_2117_, v_configPath_2118_, v___y_2119_);
lean_dec_ref(v___y_2119_);
lean_dec(v_configHandle_2117_);
lean_dec_ref(v___x_2115_);
return v_res_2121_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_Check_0__Lake_Check_runExternalKernel(lean_object* v_kernelName_2124_, lean_object* v_kernelCommand_2125_, lean_object* v_solutionPath_2126_, lean_object* v_a_2127_){
_start:
{
lean_object* v___x_2129_; lean_object* v___f_2130_; lean_object* v___x_2131_; lean_object* v___x_2132_; lean_object* v___x_2133_; lean_object* v___x_2134_; lean_object* v___x_2135_; 
v___x_2129_ = ((lean_object*)(l___private_Lake_CLI_Check_0__Lake_Check_safeResolveWorkspace___closed__14));
lean_inc_ref(v_kernelName_2124_);
v___f_2130_ = lean_alloc_closure((void*)(l___private_Lake_CLI_Check_0__Lake_Check_runExternalKernel___lam__0___boxed), 8, 4);
lean_closure_set(v___f_2130_, 0, v_kernelName_2124_);
lean_closure_set(v___f_2130_, 1, v_solutionPath_2126_);
lean_closure_set(v___f_2130_, 2, v___x_2129_);
lean_closure_set(v___f_2130_, 3, v_kernelCommand_2125_);
v___x_2131_ = ((lean_object*)(l___private_Lake_CLI_Check_0__Lake_Check_runExternalKernel___closed__0));
v___x_2132_ = lean_string_append(v___x_2131_, v_kernelName_2124_);
lean_dec_ref(v_kernelName_2124_);
v___x_2133_ = ((lean_object*)(l___private_Lake_CLI_Check_0__Lake_Check_runExternalKernel___closed__1));
v___x_2134_ = lean_string_append(v___x_2132_, v___x_2133_);
v___x_2135_ = l_IO_println___at___00__private_Lake_CLI_Check_0__Lake_Check_safeResolveWorkspace_spec__2(v___x_2134_);
if (lean_obj_tag(v___x_2135_) == 0)
{
lean_object* v___x_2136_; 
lean_dec_ref_known(v___x_2135_, 1);
v___x_2136_ = l_IO_FS_withTempFile___at___00__private_Lake_CLI_Check_0__Lake_Check_withSafeBuildAndExport_spec__0___redArg(v___f_2130_, v_a_2127_);
return v___x_2136_;
}
else
{
lean_object* v_a_2137_; lean_object* v___x_2139_; uint8_t v_isShared_2140_; uint8_t v_isSharedCheck_2144_; 
lean_dec_ref(v___f_2130_);
v_a_2137_ = lean_ctor_get(v___x_2135_, 0);
v_isSharedCheck_2144_ = !lean_is_exclusive(v___x_2135_);
if (v_isSharedCheck_2144_ == 0)
{
v___x_2139_ = v___x_2135_;
v_isShared_2140_ = v_isSharedCheck_2144_;
goto v_resetjp_2138_;
}
else
{
lean_inc(v_a_2137_);
lean_dec(v___x_2135_);
v___x_2139_ = lean_box(0);
v_isShared_2140_ = v_isSharedCheck_2144_;
goto v_resetjp_2138_;
}
v_resetjp_2138_:
{
lean_object* v___x_2142_; 
if (v_isShared_2140_ == 0)
{
v___x_2142_ = v___x_2139_;
goto v_reusejp_2141_;
}
else
{
lean_object* v_reuseFailAlloc_2143_; 
v_reuseFailAlloc_2143_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2143_, 0, v_a_2137_);
v___x_2142_ = v_reuseFailAlloc_2143_;
goto v_reusejp_2141_;
}
v_reusejp_2141_:
{
return v___x_2142_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_Check_0__Lake_Check_runExternalKernel___boxed(lean_object* v_kernelName_2145_, lean_object* v_kernelCommand_2146_, lean_object* v_solutionPath_2147_, lean_object* v_a_2148_, lean_object* v_a_2149_){
_start:
{
lean_object* v_res_2150_; 
v_res_2150_ = l___private_Lake_CLI_Check_0__Lake_Check_runExternalKernel(v_kernelName_2145_, v_kernelCommand_2146_, v_solutionPath_2147_, v_a_2148_);
lean_dec_ref(v_a_2148_);
return v_res_2150_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lake_CLI_Check_0__Lake_Check_runExternalKernel_spec__1(lean_object* v_inst_2151_, lean_object* v_R_2152_, lean_object* v_a_2153_, lean_object* v_b_2154_){
_start:
{
lean_object* v___x_2155_; 
v___x_2155_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lake_CLI_Check_0__Lake_Check_runExternalKernel_spec__1___redArg(v_a_2153_, v_b_2154_);
return v___x_2155_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_Check_0__Lake_Check_runBuiltinKernel(lean_object* v_solutionPath_2159_, lean_object* v_a_2160_){
_start:
{
lean_object* v_whichLeanChecker_2162_; lean_object* v___x_2163_; lean_object* v___x_2164_; lean_object* v___x_2165_; lean_object* v___x_2166_; lean_object* v___x_2167_; lean_object* v___x_2168_; lean_object* v___x_2169_; lean_object* v___x_2170_; lean_object* v___x_2171_; 
v_whichLeanChecker_2162_ = lean_ctor_get(v_a_2160_, 13);
v___x_2163_ = ((lean_object*)(l___private_Lake_CLI_Check_0__Lake_Check_runBuiltinKernel___closed__0));
v___x_2164_ = ((lean_object*)(l___private_Lake_CLI_Check_0__Lake_Check_runBuiltinKernel___closed__1));
v___x_2165_ = lean_unsigned_to_nat(3u);
v___x_2166_ = lean_mk_empty_array_with_capacity(v___x_2165_);
lean_inc_ref(v_whichLeanChecker_2162_);
v___x_2167_ = lean_array_push(v___x_2166_, v_whichLeanChecker_2162_);
v___x_2168_ = lean_array_push(v___x_2167_, v___x_2163_);
v___x_2169_ = lean_array_push(v___x_2168_, v___x_2164_);
v___x_2170_ = ((lean_object*)(l___private_Lake_CLI_Check_0__Lake_Check_runBuiltinKernel___closed__2));
v___x_2171_ = l___private_Lake_CLI_Check_0__Lake_Check_runExternalKernel(v___x_2170_, v___x_2169_, v_solutionPath_2159_, v_a_2160_);
return v___x_2171_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_Check_0__Lake_Check_runBuiltinKernel___boxed(lean_object* v_solutionPath_2172_, lean_object* v_a_2173_, lean_object* v_a_2174_){
_start:
{
lean_object* v_res_2175_; 
v_res_2175_ = l___private_Lake_CLI_Check_0__Lake_Check_runBuiltinKernel(v_solutionPath_2172_, v_a_2173_);
lean_dec_ref(v_a_2173_);
return v_res_2175_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg(){
_start:
{
lean_object* v___x_2326_; lean_object* v___x_2327_; 
v___x_2326_ = ((lean_object*)(l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___closed__52));
v___x_2327_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2327_, 0, v___x_2326_);
return v___x_2327_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg___boxed(lean_object* v_a_2328_){
_start:
{
lean_object* v_res_2329_; 
v_res_2329_ = l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg();
return v_res_2329_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets(lean_object* v_a_2330_){
_start:
{
lean_object* v___x_2332_; 
v___x_2332_ = l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg();
return v___x_2332_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___boxed(lean_object* v_a_2333_, lean_object* v_a_2334_){
_start:
{
lean_object* v_res_2335_; 
v_res_2335_ = l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets(v_a_2333_);
lean_dec_ref(v_a_2333_);
return v_res_2335_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_Lake_CLI_Check_0__Lake_Check_builtinTargets_spec__0_spec__0(lean_object* v_a_2336_, lean_object* v_as_2337_, size_t v_i_2338_, size_t v_stop_2339_){
_start:
{
uint8_t v___x_2340_; 
v___x_2340_ = lean_usize_dec_eq(v_i_2338_, v_stop_2339_);
if (v___x_2340_ == 0)
{
lean_object* v___x_2341_; uint8_t v___x_2342_; 
v___x_2341_ = lean_array_uget_borrowed(v_as_2337_, v_i_2338_);
v___x_2342_ = lean_name_eq(v_a_2336_, v___x_2341_);
if (v___x_2342_ == 0)
{
size_t v___x_2343_; size_t v___x_2344_; 
v___x_2343_ = ((size_t)1ULL);
v___x_2344_ = lean_usize_add(v_i_2338_, v___x_2343_);
v_i_2338_ = v___x_2344_;
goto _start;
}
else
{
return v___x_2342_;
}
}
else
{
uint8_t v___x_2346_; 
v___x_2346_ = 0;
return v___x_2346_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_Lake_CLI_Check_0__Lake_Check_builtinTargets_spec__0_spec__0___boxed(lean_object* v_a_2347_, lean_object* v_as_2348_, lean_object* v_i_2349_, lean_object* v_stop_2350_){
_start:
{
size_t v_i_boxed_2351_; size_t v_stop_boxed_2352_; uint8_t v_res_2353_; lean_object* v_r_2354_; 
v_i_boxed_2351_ = lean_unbox_usize(v_i_2349_);
lean_dec(v_i_2349_);
v_stop_boxed_2352_ = lean_unbox_usize(v_stop_2350_);
lean_dec(v_stop_2350_);
v_res_2353_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_Lake_CLI_Check_0__Lake_Check_builtinTargets_spec__0_spec__0(v_a_2347_, v_as_2348_, v_i_boxed_2351_, v_stop_boxed_2352_);
lean_dec_ref(v_as_2348_);
lean_dec(v_a_2347_);
v_r_2354_ = lean_box(v_res_2353_);
return v_r_2354_;
}
}
LEAN_EXPORT uint8_t l_Array_contains___at___00__private_Lake_CLI_Check_0__Lake_Check_builtinTargets_spec__0(lean_object* v_as_2355_, lean_object* v_a_2356_){
_start:
{
lean_object* v___x_2357_; lean_object* v___x_2358_; uint8_t v___x_2359_; 
v___x_2357_ = lean_unsigned_to_nat(0u);
v___x_2358_ = lean_array_get_size(v_as_2355_);
v___x_2359_ = lean_nat_dec_lt(v___x_2357_, v___x_2358_);
if (v___x_2359_ == 0)
{
return v___x_2359_;
}
else
{
if (v___x_2359_ == 0)
{
return v___x_2359_;
}
else
{
size_t v___x_2360_; size_t v___x_2361_; uint8_t v___x_2362_; 
v___x_2360_ = ((size_t)0ULL);
v___x_2361_ = lean_usize_of_nat(v___x_2358_);
v___x_2362_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_Lake_CLI_Check_0__Lake_Check_builtinTargets_spec__0_spec__0(v_a_2356_, v_as_2355_, v___x_2360_, v___x_2361_);
return v___x_2362_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_contains___at___00__private_Lake_CLI_Check_0__Lake_Check_builtinTargets_spec__0___boxed(lean_object* v_as_2363_, lean_object* v_a_2364_){
_start:
{
uint8_t v_res_2365_; lean_object* v_r_2366_; 
v_res_2365_ = l_Array_contains___at___00__private_Lake_CLI_Check_0__Lake_Check_builtinTargets_spec__0(v_as_2363_, v_a_2364_);
lean_dec(v_a_2364_);
lean_dec_ref(v_as_2363_);
v_r_2366_ = lean_box(v_res_2365_);
return v_r_2366_;
}
}
static lean_object* _init_l___private_Lake_CLI_Check_0__Lake_Check_builtinTargets___closed__11(void){
_start:
{
lean_object* v___x_2397_; lean_object* v_additional_2398_; lean_object* v___x_2399_; 
v___x_2397_ = ((lean_object*)(l___private_Lake_CLI_Check_0__Lake_Check_builtinTargets___closed__10));
v_additional_2398_ = ((lean_object*)(l___private_Lake_CLI_Check_0__Lake_Check_builtinTargets___closed__0));
v___x_2399_ = l_Array_append___redArg(v_additional_2398_, v___x_2397_);
return v___x_2399_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_Check_0__Lake_Check_builtinTargets(lean_object* v_a_2400_){
_start:
{
lean_object* v_legalAxioms_2402_; lean_object* v_additional_2403_; lean_object* v___x_2404_; uint8_t v___x_2405_; 
v_legalAxioms_2402_ = lean_ctor_get(v_a_2400_, 5);
v_additional_2403_ = ((lean_object*)(l___private_Lake_CLI_Check_0__Lake_Check_builtinTargets___closed__0));
v___x_2404_ = ((lean_object*)(l___private_Lake_CLI_Check_0__Lake_Check_builtinTargets___closed__3));
v___x_2405_ = l_Array_contains___at___00__private_Lake_CLI_Check_0__Lake_Check_builtinTargets_spec__0(v_legalAxioms_2402_, v___x_2404_);
if (v___x_2405_ == 0)
{
lean_object* v___x_2406_; 
v___x_2406_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2406_, 0, v_additional_2403_);
return v___x_2406_;
}
else
{
lean_object* v___x_2407_; lean_object* v___x_2408_; 
v___x_2407_ = lean_obj_once(&l___private_Lake_CLI_Check_0__Lake_Check_builtinTargets___closed__11, &l___private_Lake_CLI_Check_0__Lake_Check_builtinTargets___closed__11_once, _init_l___private_Lake_CLI_Check_0__Lake_Check_builtinTargets___closed__11);
v___x_2408_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2408_, 0, v___x_2407_);
return v___x_2408_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_Check_0__Lake_Check_builtinTargets___boxed(lean_object* v_a_2409_, lean_object* v_a_2410_){
_start:
{
lean_object* v_res_2411_; 
v_res_2411_ = l___private_Lake_CLI_Check_0__Lake_Check_builtinTargets(v_a_2409_);
lean_dec_ref(v_a_2409_);
return v_res_2411_;
}
}
LEAN_EXPORT lean_object* l_IO_ofExcept___at___00__private_Lake_CLI_Check_0__Lake_Check_verifyMatch_verifyCompare_spec__0___redArg(lean_object* v_e_2412_){
_start:
{
if (lean_obj_tag(v_e_2412_) == 0)
{
lean_object* v_a_2414_; lean_object* v___x_2416_; uint8_t v_isShared_2417_; uint8_t v_isSharedCheck_2422_; 
v_a_2414_ = lean_ctor_get(v_e_2412_, 0);
v_isSharedCheck_2422_ = !lean_is_exclusive(v_e_2412_);
if (v_isSharedCheck_2422_ == 0)
{
v___x_2416_ = v_e_2412_;
v_isShared_2417_ = v_isSharedCheck_2422_;
goto v_resetjp_2415_;
}
else
{
lean_inc(v_a_2414_);
lean_dec(v_e_2412_);
v___x_2416_ = lean_box(0);
v_isShared_2417_ = v_isSharedCheck_2422_;
goto v_resetjp_2415_;
}
v_resetjp_2415_:
{
lean_object* v___x_2418_; lean_object* v___x_2420_; 
v___x_2418_ = lean_mk_io_user_error(v_a_2414_);
if (v_isShared_2417_ == 0)
{
lean_ctor_set_tag(v___x_2416_, 1);
lean_ctor_set(v___x_2416_, 0, v___x_2418_);
v___x_2420_ = v___x_2416_;
goto v_reusejp_2419_;
}
else
{
lean_object* v_reuseFailAlloc_2421_; 
v_reuseFailAlloc_2421_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2421_, 0, v___x_2418_);
v___x_2420_ = v_reuseFailAlloc_2421_;
goto v_reusejp_2419_;
}
v_reusejp_2419_:
{
return v___x_2420_;
}
}
}
else
{
lean_object* v_a_2423_; lean_object* v___x_2425_; uint8_t v_isShared_2426_; uint8_t v_isSharedCheck_2430_; 
v_a_2423_ = lean_ctor_get(v_e_2412_, 0);
v_isSharedCheck_2430_ = !lean_is_exclusive(v_e_2412_);
if (v_isSharedCheck_2430_ == 0)
{
v___x_2425_ = v_e_2412_;
v_isShared_2426_ = v_isSharedCheck_2430_;
goto v_resetjp_2424_;
}
else
{
lean_inc(v_a_2423_);
lean_dec(v_e_2412_);
v___x_2425_ = lean_box(0);
v_isShared_2426_ = v_isSharedCheck_2430_;
goto v_resetjp_2424_;
}
v_resetjp_2424_:
{
lean_object* v___x_2428_; 
if (v_isShared_2426_ == 0)
{
lean_ctor_set_tag(v___x_2425_, 0);
v___x_2428_ = v___x_2425_;
goto v_reusejp_2427_;
}
else
{
lean_object* v_reuseFailAlloc_2429_; 
v_reuseFailAlloc_2429_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2429_, 0, v_a_2423_);
v___x_2428_ = v_reuseFailAlloc_2429_;
goto v_reusejp_2427_;
}
v_reusejp_2427_:
{
return v___x_2428_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_IO_ofExcept___at___00__private_Lake_CLI_Check_0__Lake_Check_verifyMatch_verifyCompare_spec__0___redArg___boxed(lean_object* v_e_2431_, lean_object* v_a_2432_){
_start:
{
lean_object* v_res_2433_; 
v_res_2433_ = l_IO_ofExcept___at___00__private_Lake_CLI_Check_0__Lake_Check_verifyMatch_verifyCompare_spec__0___redArg(v_e_2431_);
return v_res_2433_;
}
}
LEAN_EXPORT lean_object* l_IO_ofExcept___at___00__private_Lake_CLI_Check_0__Lake_Check_verifyMatch_verifyCompare_spec__0(lean_object* v_00_u03b1_2434_, lean_object* v_e_2435_){
_start:
{
lean_object* v___x_2437_; 
v___x_2437_ = l_IO_ofExcept___at___00__private_Lake_CLI_Check_0__Lake_Check_verifyMatch_verifyCompare_spec__0___redArg(v_e_2435_);
return v___x_2437_;
}
}
LEAN_EXPORT lean_object* l_IO_ofExcept___at___00__private_Lake_CLI_Check_0__Lake_Check_verifyMatch_verifyCompare_spec__0___boxed(lean_object* v_00_u03b1_2438_, lean_object* v_e_2439_, lean_object* v_a_2440_){
_start:
{
lean_object* v_res_2441_; 
v_res_2441_ = l_IO_ofExcept___at___00__private_Lake_CLI_Check_0__Lake_Check_verifyMatch_verifyCompare_spec__0(v_00_u03b1_2438_, v_e_2439_);
return v_res_2441_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_Check_0__Lake_Check_verifyMatch_verifyCompare(lean_object* v_challengeExportPath_2442_, lean_object* v_solutionExportPath_2443_, lean_object* v_a_2444_){
_start:
{
uint8_t v___x_2446_; lean_object* v___x_2447_; 
v___x_2446_ = 0;
v___x_2447_ = lean_io_prim_handle_mk(v_challengeExportPath_2442_, v___x_2446_);
if (lean_obj_tag(v___x_2447_) == 0)
{
lean_object* v_a_2448_; lean_object* v___x_2449_; lean_object* v___x_2450_; 
v_a_2448_ = lean_ctor_get(v___x_2447_, 0);
lean_inc(v_a_2448_);
lean_dec_ref_known(v___x_2447_, 1);
v___x_2449_ = lean_stream_of_handle(v_a_2448_);
v___x_2450_ = l_LeanExport_parseStream(v___x_2449_);
if (lean_obj_tag(v___x_2450_) == 0)
{
lean_object* v_a_2451_; lean_object* v___x_2452_; 
v_a_2451_ = lean_ctor_get(v___x_2450_, 0);
lean_inc(v_a_2451_);
lean_dec_ref_known(v___x_2450_, 1);
v___x_2452_ = lean_io_prim_handle_mk(v_solutionExportPath_2443_, v___x_2446_);
if (lean_obj_tag(v___x_2452_) == 0)
{
lean_object* v_a_2453_; lean_object* v___x_2454_; lean_object* v___x_2455_; 
v_a_2453_ = lean_ctor_get(v___x_2452_, 0);
lean_inc(v_a_2453_);
lean_dec_ref_known(v___x_2452_, 1);
v___x_2454_ = lean_stream_of_handle(v_a_2453_);
v___x_2455_ = l_LeanExport_parseStream(v___x_2454_);
if (lean_obj_tag(v___x_2455_) == 0)
{
lean_object* v_a_2456_; lean_object* v_theoremNames_2457_; lean_object* v_definitionNames_2458_; lean_object* v_legalAxioms_2459_; lean_object* v___x_2460_; lean_object* v___x_2461_; lean_object* v_a_2462_; lean_object* v___x_2463_; lean_object* v___x_2464_; 
v_a_2456_ = lean_ctor_get(v___x_2455_, 0);
lean_inc_n(v_a_2456_, 2);
lean_dec_ref_known(v___x_2455_, 1);
v_theoremNames_2457_ = lean_ctor_get(v_a_2444_, 3);
v_definitionNames_2458_ = lean_ctor_get(v_a_2444_, 4);
v_legalAxioms_2459_ = lean_ctor_get(v_a_2444_, 5);
lean_inc_ref(v_theoremNames_2457_);
v___x_2460_ = l_Array_append___redArg(v_theoremNames_2457_, v_legalAxioms_2459_);
v___x_2461_ = l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg();
v_a_2462_ = lean_ctor_get(v___x_2461_, 0);
lean_inc(v_a_2462_);
lean_dec_ref(v___x_2461_);
v___x_2463_ = l_Lake_Check_compareAt(v_a_2451_, v_a_2456_, v___x_2460_, v_definitionNames_2458_, v_a_2462_);
lean_dec_ref(v___x_2460_);
v___x_2464_ = l_IO_ofExcept___at___00__private_Lake_CLI_Check_0__Lake_Check_verifyMatch_verifyCompare_spec__0___redArg(v___x_2463_);
if (lean_obj_tag(v___x_2464_) == 0)
{
lean_object* v___x_2465_; lean_object* v___x_2466_; 
lean_dec_ref_known(v___x_2464_, 1);
v___x_2465_ = l_Lake_Check_checkAxioms(v_a_2456_, v_theoremNames_2457_, v_definitionNames_2458_, v_legalAxioms_2459_);
v___x_2466_ = l_IO_ofExcept___at___00__private_Lake_CLI_Check_0__Lake_Check_verifyMatch_verifyCompare_spec__0___redArg(v___x_2465_);
return v___x_2466_;
}
else
{
lean_dec(v_a_2456_);
return v___x_2464_;
}
}
else
{
lean_object* v_a_2467_; lean_object* v___x_2469_; uint8_t v_isShared_2470_; uint8_t v_isSharedCheck_2474_; 
lean_dec(v_a_2451_);
v_a_2467_ = lean_ctor_get(v___x_2455_, 0);
v_isSharedCheck_2474_ = !lean_is_exclusive(v___x_2455_);
if (v_isSharedCheck_2474_ == 0)
{
v___x_2469_ = v___x_2455_;
v_isShared_2470_ = v_isSharedCheck_2474_;
goto v_resetjp_2468_;
}
else
{
lean_inc(v_a_2467_);
lean_dec(v___x_2455_);
v___x_2469_ = lean_box(0);
v_isShared_2470_ = v_isSharedCheck_2474_;
goto v_resetjp_2468_;
}
v_resetjp_2468_:
{
lean_object* v___x_2472_; 
if (v_isShared_2470_ == 0)
{
v___x_2472_ = v___x_2469_;
goto v_reusejp_2471_;
}
else
{
lean_object* v_reuseFailAlloc_2473_; 
v_reuseFailAlloc_2473_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2473_, 0, v_a_2467_);
v___x_2472_ = v_reuseFailAlloc_2473_;
goto v_reusejp_2471_;
}
v_reusejp_2471_:
{
return v___x_2472_;
}
}
}
}
else
{
lean_object* v_a_2475_; lean_object* v___x_2477_; uint8_t v_isShared_2478_; uint8_t v_isSharedCheck_2482_; 
lean_dec(v_a_2451_);
v_a_2475_ = lean_ctor_get(v___x_2452_, 0);
v_isSharedCheck_2482_ = !lean_is_exclusive(v___x_2452_);
if (v_isSharedCheck_2482_ == 0)
{
v___x_2477_ = v___x_2452_;
v_isShared_2478_ = v_isSharedCheck_2482_;
goto v_resetjp_2476_;
}
else
{
lean_inc(v_a_2475_);
lean_dec(v___x_2452_);
v___x_2477_ = lean_box(0);
v_isShared_2478_ = v_isSharedCheck_2482_;
goto v_resetjp_2476_;
}
v_resetjp_2476_:
{
lean_object* v___x_2480_; 
if (v_isShared_2478_ == 0)
{
v___x_2480_ = v___x_2477_;
goto v_reusejp_2479_;
}
else
{
lean_object* v_reuseFailAlloc_2481_; 
v_reuseFailAlloc_2481_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2481_, 0, v_a_2475_);
v___x_2480_ = v_reuseFailAlloc_2481_;
goto v_reusejp_2479_;
}
v_reusejp_2479_:
{
return v___x_2480_;
}
}
}
}
else
{
lean_object* v_a_2483_; lean_object* v___x_2485_; uint8_t v_isShared_2486_; uint8_t v_isSharedCheck_2490_; 
v_a_2483_ = lean_ctor_get(v___x_2450_, 0);
v_isSharedCheck_2490_ = !lean_is_exclusive(v___x_2450_);
if (v_isSharedCheck_2490_ == 0)
{
v___x_2485_ = v___x_2450_;
v_isShared_2486_ = v_isSharedCheck_2490_;
goto v_resetjp_2484_;
}
else
{
lean_inc(v_a_2483_);
lean_dec(v___x_2450_);
v___x_2485_ = lean_box(0);
v_isShared_2486_ = v_isSharedCheck_2490_;
goto v_resetjp_2484_;
}
v_resetjp_2484_:
{
lean_object* v___x_2488_; 
if (v_isShared_2486_ == 0)
{
v___x_2488_ = v___x_2485_;
goto v_reusejp_2487_;
}
else
{
lean_object* v_reuseFailAlloc_2489_; 
v_reuseFailAlloc_2489_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2489_, 0, v_a_2483_);
v___x_2488_ = v_reuseFailAlloc_2489_;
goto v_reusejp_2487_;
}
v_reusejp_2487_:
{
return v___x_2488_;
}
}
}
}
else
{
lean_object* v_a_2491_; lean_object* v___x_2493_; uint8_t v_isShared_2494_; uint8_t v_isSharedCheck_2498_; 
v_a_2491_ = lean_ctor_get(v___x_2447_, 0);
v_isSharedCheck_2498_ = !lean_is_exclusive(v___x_2447_);
if (v_isSharedCheck_2498_ == 0)
{
v___x_2493_ = v___x_2447_;
v_isShared_2494_ = v_isSharedCheck_2498_;
goto v_resetjp_2492_;
}
else
{
lean_inc(v_a_2491_);
lean_dec(v___x_2447_);
v___x_2493_ = lean_box(0);
v_isShared_2494_ = v_isSharedCheck_2498_;
goto v_resetjp_2492_;
}
v_resetjp_2492_:
{
lean_object* v___x_2496_; 
if (v_isShared_2494_ == 0)
{
v___x_2496_ = v___x_2493_;
goto v_reusejp_2495_;
}
else
{
lean_object* v_reuseFailAlloc_2497_; 
v_reuseFailAlloc_2497_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2497_, 0, v_a_2491_);
v___x_2496_ = v_reuseFailAlloc_2497_;
goto v_reusejp_2495_;
}
v_reusejp_2495_:
{
return v___x_2496_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_Check_0__Lake_Check_verifyMatch_verifyCompare___boxed(lean_object* v_challengeExportPath_2499_, lean_object* v_solutionExportPath_2500_, lean_object* v_a_2501_, lean_object* v_a_2502_){
_start:
{
lean_object* v_res_2503_; 
v_res_2503_ = l___private_Lake_CLI_Check_0__Lake_Check_verifyMatch_verifyCompare(v_challengeExportPath_2499_, v_solutionExportPath_2500_, v_a_2501_);
lean_dec_ref(v_a_2501_);
lean_dec_ref(v_solutionExportPath_2500_);
lean_dec_ref(v_challengeExportPath_2499_);
return v_res_2503_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lake_CLI_Check_0__Lake_Check_verifyMatch_verifyKernels_spec__0(lean_object* v_solutionExportPath_2504_, lean_object* v_init_2505_, lean_object* v_x_2506_, lean_object* v___y_2507_){
_start:
{
if (lean_obj_tag(v_x_2506_) == 0)
{
lean_object* v_k_2509_; lean_object* v_v_2510_; lean_object* v_l_2511_; lean_object* v_r_2512_; lean_object* v___x_2513_; 
v_k_2509_ = lean_ctor_get(v_x_2506_, 1);
lean_inc(v_k_2509_);
v_v_2510_ = lean_ctor_get(v_x_2506_, 2);
lean_inc(v_v_2510_);
v_l_2511_ = lean_ctor_get(v_x_2506_, 3);
lean_inc(v_l_2511_);
v_r_2512_ = lean_ctor_get(v_x_2506_, 4);
lean_inc(v_r_2512_);
lean_dec_ref_known(v_x_2506_, 5);
lean_inc_ref(v_solutionExportPath_2504_);
v___x_2513_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lake_CLI_Check_0__Lake_Check_verifyMatch_verifyKernels_spec__0(v_solutionExportPath_2504_, v_init_2505_, v_l_2511_, v___y_2507_);
if (lean_obj_tag(v___x_2513_) == 0)
{
lean_object* v_a_2514_; lean_object* v_a_2515_; lean_object* v___x_2516_; 
v_a_2514_ = lean_ctor_get(v___x_2513_, 0);
lean_inc(v_a_2514_);
lean_dec_ref_known(v___x_2513_, 1);
v_a_2515_ = lean_ctor_get(v_a_2514_, 0);
lean_inc(v_a_2515_);
lean_dec(v_a_2514_);
lean_inc_ref(v_solutionExportPath_2504_);
v___x_2516_ = l___private_Lake_CLI_Check_0__Lake_Check_runExternalKernel(v_k_2509_, v_v_2510_, v_solutionExportPath_2504_, v___y_2507_);
if (lean_obj_tag(v___x_2516_) == 0)
{
if (lean_obj_tag(v_a_2515_) == 0)
{
lean_object* v_a_2517_; 
v_a_2517_ = lean_ctor_get(v___x_2516_, 0);
lean_inc(v_a_2517_);
lean_dec_ref_known(v___x_2516_, 1);
v_init_2505_ = v_a_2517_;
v_x_2506_ = v_r_2512_;
goto _start;
}
else
{
lean_dec_ref_known(v___x_2516_, 1);
v_init_2505_ = v_a_2515_;
v_x_2506_ = v_r_2512_;
goto _start;
}
}
else
{
lean_object* v_a_2520_; lean_object* v___x_2522_; uint8_t v_isShared_2523_; uint8_t v_isSharedCheck_2527_; 
lean_dec(v_a_2515_);
lean_dec(v_r_2512_);
lean_dec_ref(v_solutionExportPath_2504_);
v_a_2520_ = lean_ctor_get(v___x_2516_, 0);
v_isSharedCheck_2527_ = !lean_is_exclusive(v___x_2516_);
if (v_isSharedCheck_2527_ == 0)
{
v___x_2522_ = v___x_2516_;
v_isShared_2523_ = v_isSharedCheck_2527_;
goto v_resetjp_2521_;
}
else
{
lean_inc(v_a_2520_);
lean_dec(v___x_2516_);
v___x_2522_ = lean_box(0);
v_isShared_2523_ = v_isSharedCheck_2527_;
goto v_resetjp_2521_;
}
v_resetjp_2521_:
{
lean_object* v___x_2525_; 
if (v_isShared_2523_ == 0)
{
v___x_2525_ = v___x_2522_;
goto v_reusejp_2524_;
}
else
{
lean_object* v_reuseFailAlloc_2526_; 
v_reuseFailAlloc_2526_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2526_, 0, v_a_2520_);
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
else
{
lean_dec(v_r_2512_);
lean_dec(v_v_2510_);
lean_dec(v_k_2509_);
lean_dec_ref(v_solutionExportPath_2504_);
return v___x_2513_;
}
}
else
{
lean_object* v___x_2528_; lean_object* v___x_2529_; 
lean_dec_ref(v_solutionExportPath_2504_);
v___x_2528_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2528_, 0, v_init_2505_);
v___x_2529_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2529_, 0, v___x_2528_);
return v___x_2529_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lake_CLI_Check_0__Lake_Check_verifyMatch_verifyKernels_spec__0___boxed(lean_object* v_solutionExportPath_2530_, lean_object* v_init_2531_, lean_object* v_x_2532_, lean_object* v___y_2533_, lean_object* v___y_2534_){
_start:
{
lean_object* v_res_2535_; 
v_res_2535_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lake_CLI_Check_0__Lake_Check_verifyMatch_verifyKernels_spec__0(v_solutionExportPath_2530_, v_init_2531_, v_x_2532_, v___y_2533_);
lean_dec_ref(v___y_2533_);
return v_res_2535_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_Check_0__Lake_Check_verifyMatch_verifyKernels(lean_object* v_solutionExportPath_2536_, lean_object* v_a_2537_){
_start:
{
lean_object* v_val_2540_; lean_object* v_a_2544_; lean_object* v_externalKernels_2565_; lean_object* v_result_2566_; lean_object* v___x_2567_; 
v_externalKernels_2565_ = lean_ctor_get(v_a_2537_, 15);
v_result_2566_ = lean_box(0);
lean_inc(v_externalKernels_2565_);
lean_inc_ref(v_solutionExportPath_2536_);
v___x_2567_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lake_CLI_Check_0__Lake_Check_verifyMatch_verifyKernels_spec__0(v_solutionExportPath_2536_, v_result_2566_, v_externalKernels_2565_, v_a_2537_);
if (lean_obj_tag(v___x_2567_) == 0)
{
lean_object* v_a_2568_; lean_object* v_a_2569_; 
v_a_2568_ = lean_ctor_get(v___x_2567_, 0);
lean_inc(v_a_2568_);
lean_dec_ref_known(v___x_2567_, 1);
v_a_2569_ = lean_ctor_get(v_a_2568_, 0);
lean_inc(v_a_2569_);
lean_dec(v_a_2568_);
v_a_2544_ = v_a_2569_;
goto v___jp_2543_;
}
else
{
lean_object* v_a_2570_; lean_object* v___x_2572_; uint8_t v_isShared_2573_; uint8_t v_isSharedCheck_2577_; 
lean_dec_ref(v_solutionExportPath_2536_);
v_a_2570_ = lean_ctor_get(v___x_2567_, 0);
v_isSharedCheck_2577_ = !lean_is_exclusive(v___x_2567_);
if (v_isSharedCheck_2577_ == 0)
{
v___x_2572_ = v___x_2567_;
v_isShared_2573_ = v_isSharedCheck_2577_;
goto v_resetjp_2571_;
}
else
{
lean_inc(v_a_2570_);
lean_dec(v___x_2567_);
v___x_2572_ = lean_box(0);
v_isShared_2573_ = v_isSharedCheck_2577_;
goto v_resetjp_2571_;
}
v_resetjp_2571_:
{
lean_object* v___x_2575_; 
if (v_isShared_2573_ == 0)
{
v___x_2575_ = v___x_2572_;
goto v_reusejp_2574_;
}
else
{
lean_object* v_reuseFailAlloc_2576_; 
v_reuseFailAlloc_2576_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2576_, 0, v_a_2570_);
v___x_2575_ = v_reuseFailAlloc_2576_;
goto v_reusejp_2574_;
}
v_reusejp_2574_:
{
return v___x_2575_;
}
}
}
v___jp_2539_:
{
lean_object* v___x_2541_; lean_object* v___x_2542_; 
v___x_2541_ = lean_mk_io_user_error(v_val_2540_);
v___x_2542_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2542_, 0, v___x_2541_);
return v___x_2542_;
}
v___jp_2543_:
{
lean_object* v___x_2545_; 
v___x_2545_ = l___private_Lake_CLI_Check_0__Lake_Check_runBuiltinKernel(v_solutionExportPath_2536_, v_a_2537_);
if (lean_obj_tag(v___x_2545_) == 0)
{
if (lean_obj_tag(v_a_2544_) == 0)
{
lean_object* v_a_2546_; lean_object* v___x_2548_; uint8_t v_isShared_2549_; uint8_t v_isSharedCheck_2555_; 
v_a_2546_ = lean_ctor_get(v___x_2545_, 0);
v_isSharedCheck_2555_ = !lean_is_exclusive(v___x_2545_);
if (v_isSharedCheck_2555_ == 0)
{
v___x_2548_ = v___x_2545_;
v_isShared_2549_ = v_isSharedCheck_2555_;
goto v_resetjp_2547_;
}
else
{
lean_inc(v_a_2546_);
lean_dec(v___x_2545_);
v___x_2548_ = lean_box(0);
v_isShared_2549_ = v_isSharedCheck_2555_;
goto v_resetjp_2547_;
}
v_resetjp_2547_:
{
if (lean_obj_tag(v_a_2546_) == 1)
{
lean_object* v_val_2550_; 
lean_del_object(v___x_2548_);
v_val_2550_ = lean_ctor_get(v_a_2546_, 0);
lean_inc(v_val_2550_);
lean_dec_ref_known(v_a_2546_, 1);
v_val_2540_ = v_val_2550_;
goto v___jp_2539_;
}
else
{
lean_object* v___x_2551_; lean_object* v___x_2553_; 
lean_dec(v_a_2546_);
v___x_2551_ = lean_box(0);
if (v_isShared_2549_ == 0)
{
lean_ctor_set(v___x_2548_, 0, v___x_2551_);
v___x_2553_ = v___x_2548_;
goto v_reusejp_2552_;
}
else
{
lean_object* v_reuseFailAlloc_2554_; 
v_reuseFailAlloc_2554_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2554_, 0, v___x_2551_);
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
lean_object* v_val_2556_; 
lean_dec_ref_known(v___x_2545_, 1);
v_val_2556_ = lean_ctor_get(v_a_2544_, 0);
lean_inc(v_val_2556_);
lean_dec_ref_known(v_a_2544_, 1);
v_val_2540_ = v_val_2556_;
goto v___jp_2539_;
}
}
else
{
lean_object* v_a_2557_; lean_object* v___x_2559_; uint8_t v_isShared_2560_; uint8_t v_isSharedCheck_2564_; 
lean_dec(v_a_2544_);
v_a_2557_ = lean_ctor_get(v___x_2545_, 0);
v_isSharedCheck_2564_ = !lean_is_exclusive(v___x_2545_);
if (v_isSharedCheck_2564_ == 0)
{
v___x_2559_ = v___x_2545_;
v_isShared_2560_ = v_isSharedCheck_2564_;
goto v_resetjp_2558_;
}
else
{
lean_inc(v_a_2557_);
lean_dec(v___x_2545_);
v___x_2559_ = lean_box(0);
v_isShared_2560_ = v_isSharedCheck_2564_;
goto v_resetjp_2558_;
}
v_resetjp_2558_:
{
lean_object* v___x_2562_; 
if (v_isShared_2560_ == 0)
{
v___x_2562_ = v___x_2559_;
goto v_reusejp_2561_;
}
else
{
lean_object* v_reuseFailAlloc_2563_; 
v_reuseFailAlloc_2563_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2563_, 0, v_a_2557_);
v___x_2562_ = v_reuseFailAlloc_2563_;
goto v_reusejp_2561_;
}
v_reusejp_2561_:
{
return v___x_2562_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_Check_0__Lake_Check_verifyMatch_verifyKernels___boxed(lean_object* v_solutionExportPath_2578_, lean_object* v_a_2579_, lean_object* v_a_2580_){
_start:
{
lean_object* v_res_2581_; 
v_res_2581_ = l___private_Lake_CLI_Check_0__Lake_Check_verifyMatch_verifyKernels(v_solutionExportPath_2578_, v_a_2579_);
lean_dec_ref(v_a_2579_);
return v_res_2581_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_Check_0__Lake_Check_verifyMatch(lean_object* v_challengeExportPath_2582_, lean_object* v_solutionExportPath_2583_, lean_object* v_a_2584_){
_start:
{
lean_object* v___x_2586_; 
v___x_2586_ = l___private_Lake_CLI_Check_0__Lake_Check_verifyMatch_verifyCompare(v_challengeExportPath_2582_, v_solutionExportPath_2583_, v_a_2584_);
if (lean_obj_tag(v___x_2586_) == 0)
{
lean_object* v___x_2587_; 
lean_dec_ref_known(v___x_2586_, 1);
v___x_2587_ = l___private_Lake_CLI_Check_0__Lake_Check_verifyMatch_verifyKernels(v_solutionExportPath_2583_, v_a_2584_);
return v___x_2587_;
}
else
{
lean_dec_ref(v_solutionExportPath_2583_);
return v___x_2586_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_Check_0__Lake_Check_verifyMatch___boxed(lean_object* v_challengeExportPath_2588_, lean_object* v_solutionExportPath_2589_, lean_object* v_a_2590_, lean_object* v_a_2591_){
_start:
{
lean_object* v_res_2592_; 
v_res_2592_ = l___private_Lake_CLI_Check_0__Lake_Check_verifyMatch(v_challengeExportPath_2588_, v_solutionExportPath_2589_, v_a_2590_);
lean_dec_ref(v_a_2590_);
lean_dec_ref(v_challengeExportPath_2588_);
return v_res_2592_;
}
}
LEAN_EXPORT lean_object* l_Lake_Check_compareIt___lam__0(lean_object* v_challengeExportPath_2594_, lean_object* v_solutionExportPath_2595_, lean_object* v___y_2596_){
_start:
{
lean_object* v___x_2598_; 
v___x_2598_ = l___private_Lake_CLI_Check_0__Lake_Check_verifyMatch(v_challengeExportPath_2594_, v_solutionExportPath_2595_, v___y_2596_);
if (lean_obj_tag(v___x_2598_) == 0)
{
lean_object* v___x_2599_; lean_object* v___x_2600_; 
lean_dec_ref_known(v___x_2598_, 1);
v___x_2599_ = ((lean_object*)(l_Lake_Check_compareIt___lam__0___closed__0));
v___x_2600_ = l_IO_println___at___00__private_Lake_CLI_Check_0__Lake_Check_safeResolveWorkspace_spec__2(v___x_2599_);
return v___x_2600_;
}
else
{
return v___x_2598_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_Check_compareIt___lam__0___boxed(lean_object* v_challengeExportPath_2601_, lean_object* v_solutionExportPath_2602_, lean_object* v___y_2603_, lean_object* v___y_2604_){
_start:
{
lean_object* v_res_2605_; 
v_res_2605_ = l_Lake_Check_compareIt___lam__0(v_challengeExportPath_2601_, v_solutionExportPath_2602_, v___y_2603_);
lean_dec_ref(v___y_2603_);
lean_dec_ref(v_challengeExportPath_2601_);
return v_res_2605_;
}
}
LEAN_EXPORT lean_object* l_Lake_Check_compareIt___lam__1(lean_object* v___x_2606_, lean_object* v_challengeExportPath_2607_, lean_object* v___y_2608_){
_start:
{
lean_object* v_solutionModule_2610_; lean_object* v___f_2611_; lean_object* v___x_2612_; lean_object* v___x_2613_; lean_object* v___x_2614_; lean_object* v___x_2615_; 
v_solutionModule_2610_ = lean_ctor_get(v___y_2608_, 2);
v___f_2611_ = lean_alloc_closure((void*)(l_Lake_Check_compareIt___lam__0___boxed), 4, 1);
lean_closure_set(v___f_2611_, 0, v_challengeExportPath_2607_);
v___x_2612_ = lean_unsigned_to_nat(1u);
v___x_2613_ = lean_mk_empty_array_with_capacity(v___x_2612_);
lean_inc(v_solutionModule_2610_);
v___x_2614_ = lean_array_push(v___x_2613_, v_solutionModule_2610_);
v___x_2615_ = l___private_Lake_CLI_Check_0__Lake_Check_safeLakeBuild(v___x_2614_, v___y_2608_);
lean_dec_ref(v___x_2614_);
if (lean_obj_tag(v___x_2615_) == 0)
{
lean_object* v___x_2616_; 
lean_dec_ref_known(v___x_2615_, 1);
lean_inc(v_solutionModule_2610_);
v___x_2616_ = l___private_Lake_CLI_Check_0__Lake_Check_withSafeExport___redArg(v_solutionModule_2610_, v___x_2606_, v___f_2611_, v___y_2608_);
return v___x_2616_;
}
else
{
lean_dec_ref(v___f_2611_);
lean_dec_ref(v___x_2606_);
return v___x_2615_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_Check_compareIt___lam__1___boxed(lean_object* v___x_2617_, lean_object* v_challengeExportPath_2618_, lean_object* v___y_2619_, lean_object* v___y_2620_){
_start:
{
lean_object* v_res_2621_; 
v_res_2621_ = l_Lake_Check_compareIt___lam__1(v___x_2617_, v_challengeExportPath_2618_, v___y_2619_);
lean_dec_ref(v___y_2619_);
return v_res_2621_;
}
}
LEAN_EXPORT lean_object* l_Lake_Check_compareIt(lean_object* v_a_2622_){
_start:
{
lean_object* v___x_2624_; lean_object* v_a_2625_; lean_object* v_challengeModule_2626_; lean_object* v_theoremNames_2627_; lean_object* v_definitionNames_2628_; lean_object* v_legalAxioms_2629_; lean_object* v___x_2630_; lean_object* v_a_2631_; lean_object* v___x_2632_; lean_object* v___x_2633_; lean_object* v___x_2634_; lean_object* v___x_2635_; lean_object* v___f_2636_; lean_object* v___x_2637_; lean_object* v___x_2638_; lean_object* v___x_2639_; lean_object* v___x_2640_; 
v___x_2624_ = l___private_Lake_CLI_Check_0__Lake_Check_builtinTargets(v_a_2622_);
v_a_2625_ = lean_ctor_get(v___x_2624_, 0);
lean_inc(v_a_2625_);
lean_dec_ref(v___x_2624_);
v_challengeModule_2626_ = lean_ctor_get(v_a_2622_, 1);
v_theoremNames_2627_ = lean_ctor_get(v_a_2622_, 3);
v_definitionNames_2628_ = lean_ctor_get(v_a_2622_, 4);
v_legalAxioms_2629_ = lean_ctor_get(v_a_2622_, 5);
v___x_2630_ = l___private_Lake_CLI_Check_0__Lake_Check_primitiveTargets___redArg();
v_a_2631_ = lean_ctor_get(v___x_2630_, 0);
lean_inc(v_a_2631_);
lean_dec_ref(v___x_2630_);
v___x_2632_ = l_Array_append___redArg(v_a_2625_, v_theoremNames_2627_);
v___x_2633_ = l_Array_append___redArg(v___x_2632_, v_legalAxioms_2629_);
v___x_2634_ = l_Array_append___redArg(v___x_2633_, v_a_2631_);
lean_dec(v_a_2631_);
v___x_2635_ = l_Array_append___redArg(v___x_2634_, v_definitionNames_2628_);
lean_inc_ref(v___x_2635_);
v___f_2636_ = lean_alloc_closure((void*)(l_Lake_Check_compareIt___lam__1___boxed), 4, 1);
lean_closure_set(v___f_2636_, 0, v___x_2635_);
v___x_2637_ = lean_unsigned_to_nat(1u);
v___x_2638_ = lean_mk_empty_array_with_capacity(v___x_2637_);
lean_inc(v_challengeModule_2626_);
v___x_2639_ = lean_array_push(v___x_2638_, v_challengeModule_2626_);
v___x_2640_ = l___private_Lake_CLI_Check_0__Lake_Check_safeLakeBuild(v___x_2639_, v_a_2622_);
lean_dec_ref(v___x_2639_);
if (lean_obj_tag(v___x_2640_) == 0)
{
lean_object* v___x_2641_; 
lean_dec_ref_known(v___x_2640_, 1);
lean_inc(v_challengeModule_2626_);
v___x_2641_ = l___private_Lake_CLI_Check_0__Lake_Check_withSafeExport___redArg(v_challengeModule_2626_, v___x_2635_, v___f_2636_, v_a_2622_);
return v___x_2641_;
}
else
{
lean_dec_ref(v___f_2636_);
lean_dec_ref(v___x_2635_);
return v___x_2640_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_Check_compareIt___boxed(lean_object* v_a_2642_, lean_object* v_a_2643_){
_start:
{
lean_object* v_res_2644_; 
v_res_2644_ = l_Lake_Check_compareIt(v_a_2642_);
lean_dec_ref(v_a_2642_);
return v_res_2644_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lake_Check_instFromJsonConfig_fromJson_spec__0(lean_object* v_j_2645_, lean_object* v_k_2646_){
_start:
{
lean_object* v___x_2647_; lean_object* v___x_2648_; 
v___x_2647_ = l_Lean_Json_getObjValD(v_j_2645_, v_k_2646_);
v___x_2648_ = l_Lean_Json_getStr_x3f(v___x_2647_);
return v___x_2648_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lake_Check_instFromJsonConfig_fromJson_spec__0___boxed(lean_object* v_j_2649_, lean_object* v_k_2650_){
_start:
{
lean_object* v_res_2651_; 
v_res_2651_ = l_Lean_Json_getObjValAs_x3f___at___00Lake_Check_instFromJsonConfig_fromJson_spec__0(v_j_2649_, v_k_2650_);
lean_dec_ref(v_k_2650_);
return v_res_2651_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lake_Check_instFromJsonConfig_fromJson_spec__1_spec__1_spec__2(size_t v_sz_2652_, size_t v_i_2653_, lean_object* v_bs_2654_){
_start:
{
uint8_t v___x_2655_; 
v___x_2655_ = lean_usize_dec_lt(v_i_2653_, v_sz_2652_);
if (v___x_2655_ == 0)
{
lean_object* v___x_2656_; lean_object* v___x_2657_; 
v___x_2656_ = l_unsafeCast___redArg(v_bs_2654_);
lean_dec_ref(v_bs_2654_);
v___x_2657_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2657_, 0, v___x_2656_);
return v___x_2657_;
}
else
{
lean_object* v_v_2658_; lean_object* v___x_2659_; lean_object* v___x_2660_; 
v_v_2658_ = lean_array_uget_borrowed(v_bs_2654_, v_i_2653_);
v___x_2659_ = l_unsafeCast___redArg(v_v_2658_);
v___x_2660_ = l_Lean_Json_getStr_x3f(v___x_2659_);
if (lean_obj_tag(v___x_2660_) == 0)
{
lean_object* v_a_2661_; lean_object* v___x_2663_; uint8_t v_isShared_2664_; uint8_t v_isSharedCheck_2668_; 
lean_dec_ref(v_bs_2654_);
v_a_2661_ = lean_ctor_get(v___x_2660_, 0);
v_isSharedCheck_2668_ = !lean_is_exclusive(v___x_2660_);
if (v_isSharedCheck_2668_ == 0)
{
v___x_2663_ = v___x_2660_;
v_isShared_2664_ = v_isSharedCheck_2668_;
goto v_resetjp_2662_;
}
else
{
lean_inc(v_a_2661_);
lean_dec(v___x_2660_);
v___x_2663_ = lean_box(0);
v_isShared_2664_ = v_isSharedCheck_2668_;
goto v_resetjp_2662_;
}
v_resetjp_2662_:
{
lean_object* v___x_2666_; 
if (v_isShared_2664_ == 0)
{
v___x_2666_ = v___x_2663_;
goto v_reusejp_2665_;
}
else
{
lean_object* v_reuseFailAlloc_2667_; 
v_reuseFailAlloc_2667_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2667_, 0, v_a_2661_);
v___x_2666_ = v_reuseFailAlloc_2667_;
goto v_reusejp_2665_;
}
v_reusejp_2665_:
{
return v___x_2666_;
}
}
}
else
{
lean_object* v_a_2669_; lean_object* v___x_2670_; lean_object* v_bs_x27_2671_; size_t v___x_2672_; size_t v___x_2673_; lean_object* v___x_2674_; lean_object* v___x_2675_; 
v_a_2669_ = lean_ctor_get(v___x_2660_, 0);
lean_inc(v_a_2669_);
lean_dec_ref_known(v___x_2660_, 1);
v___x_2670_ = lean_unsigned_to_nat(0u);
v_bs_x27_2671_ = lean_array_uset(v_bs_2654_, v_i_2653_, v___x_2670_);
v___x_2672_ = ((size_t)1ULL);
v___x_2673_ = lean_usize_add(v_i_2653_, v___x_2672_);
v___x_2674_ = l_unsafeCast___redArg(v_a_2669_);
lean_dec(v_a_2669_);
v___x_2675_ = lean_array_uset(v_bs_x27_2671_, v_i_2653_, v___x_2674_);
v_i_2653_ = v___x_2673_;
v_bs_2654_ = v___x_2675_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lake_Check_instFromJsonConfig_fromJson_spec__1_spec__1_spec__2___boxed(lean_object* v_sz_2677_, lean_object* v_i_2678_, lean_object* v_bs_2679_){
_start:
{
size_t v_sz_boxed_2680_; size_t v_i_boxed_2681_; lean_object* v_res_2682_; 
v_sz_boxed_2680_ = lean_unbox_usize(v_sz_2677_);
lean_dec(v_sz_2677_);
v_i_boxed_2681_ = lean_unbox_usize(v_i_2678_);
lean_dec(v_i_2678_);
v_res_2682_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lake_Check_instFromJsonConfig_fromJson_spec__1_spec__1_spec__2(v_sz_boxed_2680_, v_i_boxed_2681_, v_bs_2679_);
return v_res_2682_;
}
}
LEAN_EXPORT lean_object* l_Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lake_Check_instFromJsonConfig_fromJson_spec__1_spec__1(lean_object* v_x_2685_){
_start:
{
if (lean_obj_tag(v_x_2685_) == 4)
{
lean_object* v_elems_2686_; size_t v_sz_2687_; size_t v___x_2688_; lean_object* v___x_2689_; lean_object* v___x_2690_; lean_object* v___x_2691_; 
v_elems_2686_ = lean_ctor_get(v_x_2685_, 0);
lean_inc_ref(v_elems_2686_);
lean_dec_ref_known(v_x_2685_, 1);
v_sz_2687_ = lean_array_size(v_elems_2686_);
v___x_2688_ = ((size_t)0ULL);
v___x_2689_ = l_unsafeCast___redArg(v_elems_2686_);
lean_dec_ref(v_elems_2686_);
v___x_2690_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lake_Check_instFromJsonConfig_fromJson_spec__1_spec__1_spec__2(v_sz_2687_, v___x_2688_, v___x_2689_);
v___x_2691_ = l_unsafeCast___redArg(v___x_2690_);
lean_dec_ref(v___x_2690_);
return v___x_2691_;
}
else
{
lean_object* v___x_2692_; lean_object* v___x_2693_; lean_object* v___x_2694_; lean_object* v___x_2695_; lean_object* v___x_2696_; lean_object* v___x_2697_; lean_object* v___x_2698_; 
v___x_2692_ = ((lean_object*)(l_Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lake_Check_instFromJsonConfig_fromJson_spec__1_spec__1___closed__0));
v___x_2693_ = lean_unsigned_to_nat(80u);
v___x_2694_ = l_Lean_Json_pretty(v_x_2685_, v___x_2693_);
v___x_2695_ = lean_string_append(v___x_2692_, v___x_2694_);
lean_dec_ref(v___x_2694_);
v___x_2696_ = ((lean_object*)(l_Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lake_Check_instFromJsonConfig_fromJson_spec__1_spec__1___closed__1));
v___x_2697_ = lean_string_append(v___x_2695_, v___x_2696_);
v___x_2698_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2698_, 0, v___x_2697_);
return v___x_2698_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lake_Check_instFromJsonConfig_fromJson_spec__2_spec__3(lean_object* v_x_2701_){
_start:
{
if (lean_obj_tag(v_x_2701_) == 0)
{
lean_object* v___x_2702_; 
v___x_2702_ = ((lean_object*)(l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lake_Check_instFromJsonConfig_fromJson_spec__2_spec__3___closed__0));
return v___x_2702_;
}
else
{
lean_object* v___x_2703_; 
v___x_2703_ = l_Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lake_Check_instFromJsonConfig_fromJson_spec__1_spec__1(v_x_2701_);
if (lean_obj_tag(v___x_2703_) == 0)
{
lean_object* v_a_2704_; lean_object* v___x_2706_; uint8_t v_isShared_2707_; uint8_t v_isSharedCheck_2711_; 
v_a_2704_ = lean_ctor_get(v___x_2703_, 0);
v_isSharedCheck_2711_ = !lean_is_exclusive(v___x_2703_);
if (v_isSharedCheck_2711_ == 0)
{
v___x_2706_ = v___x_2703_;
v_isShared_2707_ = v_isSharedCheck_2711_;
goto v_resetjp_2705_;
}
else
{
lean_inc(v_a_2704_);
lean_dec(v___x_2703_);
v___x_2706_ = lean_box(0);
v_isShared_2707_ = v_isSharedCheck_2711_;
goto v_resetjp_2705_;
}
v_resetjp_2705_:
{
lean_object* v___x_2709_; 
if (v_isShared_2707_ == 0)
{
v___x_2709_ = v___x_2706_;
goto v_reusejp_2708_;
}
else
{
lean_object* v_reuseFailAlloc_2710_; 
v_reuseFailAlloc_2710_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2710_, 0, v_a_2704_);
v___x_2709_ = v_reuseFailAlloc_2710_;
goto v_reusejp_2708_;
}
v_reusejp_2708_:
{
return v___x_2709_;
}
}
}
else
{
lean_object* v_a_2712_; lean_object* v___x_2714_; uint8_t v_isShared_2715_; uint8_t v_isSharedCheck_2720_; 
v_a_2712_ = lean_ctor_get(v___x_2703_, 0);
v_isSharedCheck_2720_ = !lean_is_exclusive(v___x_2703_);
if (v_isSharedCheck_2720_ == 0)
{
v___x_2714_ = v___x_2703_;
v_isShared_2715_ = v_isSharedCheck_2720_;
goto v_resetjp_2713_;
}
else
{
lean_inc(v_a_2712_);
lean_dec(v___x_2703_);
v___x_2714_ = lean_box(0);
v_isShared_2715_ = v_isSharedCheck_2720_;
goto v_resetjp_2713_;
}
v_resetjp_2713_:
{
lean_object* v___x_2716_; lean_object* v___x_2718_; 
v___x_2716_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2716_, 0, v_a_2712_);
if (v_isShared_2715_ == 0)
{
lean_ctor_set(v___x_2714_, 0, v___x_2716_);
v___x_2718_ = v___x_2714_;
goto v_reusejp_2717_;
}
else
{
lean_object* v_reuseFailAlloc_2719_; 
v_reuseFailAlloc_2719_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2719_, 0, v___x_2716_);
v___x_2718_ = v_reuseFailAlloc_2719_;
goto v_reusejp_2717_;
}
v_reusejp_2717_:
{
return v___x_2718_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lake_Check_instFromJsonConfig_fromJson_spec__2(lean_object* v_j_2721_, lean_object* v_k_2722_){
_start:
{
lean_object* v___x_2723_; lean_object* v___x_2724_; 
v___x_2723_ = l_Lean_Json_getObjValD(v_j_2721_, v_k_2722_);
v___x_2724_ = l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lake_Check_instFromJsonConfig_fromJson_spec__2_spec__3(v___x_2723_);
return v___x_2724_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lake_Check_instFromJsonConfig_fromJson_spec__2___boxed(lean_object* v_j_2725_, lean_object* v_k_2726_){
_start:
{
lean_object* v_res_2727_; 
v_res_2727_ = l_Lean_Json_getObjValAs_x3f___at___00Lake_Check_instFromJsonConfig_fromJson_spec__2(v_j_2725_, v_k_2726_);
lean_dec_ref(v_k_2726_);
return v_res_2727_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lake_Check_instFromJsonConfig_fromJson_spec__3_spec__5(lean_object* v_x_2730_){
_start:
{
if (lean_obj_tag(v_x_2730_) == 0)
{
lean_object* v___x_2731_; 
v___x_2731_ = ((lean_object*)(l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lake_Check_instFromJsonConfig_fromJson_spec__3_spec__5___closed__0));
return v___x_2731_;
}
else
{
lean_object* v___x_2732_; 
v___x_2732_ = l_Lean_Json_getBool_x3f(v_x_2730_);
if (lean_obj_tag(v___x_2732_) == 0)
{
lean_object* v_a_2733_; lean_object* v___x_2735_; uint8_t v_isShared_2736_; uint8_t v_isSharedCheck_2740_; 
v_a_2733_ = lean_ctor_get(v___x_2732_, 0);
v_isSharedCheck_2740_ = !lean_is_exclusive(v___x_2732_);
if (v_isSharedCheck_2740_ == 0)
{
v___x_2735_ = v___x_2732_;
v_isShared_2736_ = v_isSharedCheck_2740_;
goto v_resetjp_2734_;
}
else
{
lean_inc(v_a_2733_);
lean_dec(v___x_2732_);
v___x_2735_ = lean_box(0);
v_isShared_2736_ = v_isSharedCheck_2740_;
goto v_resetjp_2734_;
}
v_resetjp_2734_:
{
lean_object* v___x_2738_; 
if (v_isShared_2736_ == 0)
{
v___x_2738_ = v___x_2735_;
goto v_reusejp_2737_;
}
else
{
lean_object* v_reuseFailAlloc_2739_; 
v_reuseFailAlloc_2739_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2739_, 0, v_a_2733_);
v___x_2738_ = v_reuseFailAlloc_2739_;
goto v_reusejp_2737_;
}
v_reusejp_2737_:
{
return v___x_2738_;
}
}
}
else
{
lean_object* v_a_2741_; lean_object* v___x_2743_; uint8_t v_isShared_2744_; uint8_t v_isSharedCheck_2749_; 
v_a_2741_ = lean_ctor_get(v___x_2732_, 0);
v_isSharedCheck_2749_ = !lean_is_exclusive(v___x_2732_);
if (v_isSharedCheck_2749_ == 0)
{
v___x_2743_ = v___x_2732_;
v_isShared_2744_ = v_isSharedCheck_2749_;
goto v_resetjp_2742_;
}
else
{
lean_inc(v_a_2741_);
lean_dec(v___x_2732_);
v___x_2743_ = lean_box(0);
v_isShared_2744_ = v_isSharedCheck_2749_;
goto v_resetjp_2742_;
}
v_resetjp_2742_:
{
lean_object* v___x_2745_; lean_object* v___x_2747_; 
v___x_2745_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2745_, 0, v_a_2741_);
if (v_isShared_2744_ == 0)
{
lean_ctor_set(v___x_2743_, 0, v___x_2745_);
v___x_2747_ = v___x_2743_;
goto v_reusejp_2746_;
}
else
{
lean_object* v_reuseFailAlloc_2748_; 
v_reuseFailAlloc_2748_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2748_, 0, v___x_2745_);
v___x_2747_ = v_reuseFailAlloc_2748_;
goto v_reusejp_2746_;
}
v_reusejp_2746_:
{
return v___x_2747_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lake_Check_instFromJsonConfig_fromJson_spec__3_spec__5___boxed(lean_object* v_x_2750_){
_start:
{
lean_object* v_res_2751_; 
v_res_2751_ = l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lake_Check_instFromJsonConfig_fromJson_spec__3_spec__5(v_x_2750_);
lean_dec(v_x_2750_);
return v_res_2751_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lake_Check_instFromJsonConfig_fromJson_spec__3(lean_object* v_j_2752_, lean_object* v_k_2753_){
_start:
{
lean_object* v___x_2754_; lean_object* v___x_2755_; 
v___x_2754_ = l_Lean_Json_getObjValD(v_j_2752_, v_k_2753_);
v___x_2755_ = l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lake_Check_instFromJsonConfig_fromJson_spec__3_spec__5(v___x_2754_);
lean_dec(v___x_2754_);
return v___x_2755_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lake_Check_instFromJsonConfig_fromJson_spec__3___boxed(lean_object* v_j_2756_, lean_object* v_k_2757_){
_start:
{
lean_object* v_res_2758_; 
v_res_2758_ = l_Lean_Json_getObjValAs_x3f___at___00Lake_Check_instFromJsonConfig_fromJson_spec__3(v_j_2756_, v_k_2757_);
lean_dec_ref(v_k_2757_);
return v_res_2758_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lean_Data_Json_FromToJson_Extra_0__Lean_TreeMap_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lake_Check_instFromJsonConfig_fromJson_spec__4_spec__7_spec__9_spec__10___redArg(lean_object* v_cmp_2759_, lean_object* v_k_2760_, lean_object* v_v_2761_, lean_object* v_t_2762_){
_start:
{
if (lean_obj_tag(v_t_2762_) == 0)
{
lean_object* v_size_2763_; lean_object* v_k_2764_; lean_object* v_v_2765_; lean_object* v_l_2766_; lean_object* v_r_2767_; lean_object* v___x_2769_; uint8_t v_isShared_2770_; uint8_t v_isSharedCheck_3048_; 
v_size_2763_ = lean_ctor_get(v_t_2762_, 0);
v_k_2764_ = lean_ctor_get(v_t_2762_, 1);
v_v_2765_ = lean_ctor_get(v_t_2762_, 2);
v_l_2766_ = lean_ctor_get(v_t_2762_, 3);
v_r_2767_ = lean_ctor_get(v_t_2762_, 4);
v_isSharedCheck_3048_ = !lean_is_exclusive(v_t_2762_);
if (v_isSharedCheck_3048_ == 0)
{
v___x_2769_ = v_t_2762_;
v_isShared_2770_ = v_isSharedCheck_3048_;
goto v_resetjp_2768_;
}
else
{
lean_inc(v_r_2767_);
lean_inc(v_l_2766_);
lean_inc(v_v_2765_);
lean_inc(v_k_2764_);
lean_inc(v_size_2763_);
lean_dec(v_t_2762_);
v___x_2769_ = lean_box(0);
v_isShared_2770_ = v_isSharedCheck_3048_;
goto v_resetjp_2768_;
}
v_resetjp_2768_:
{
lean_object* v___x_2771_; uint8_t v___x_2772_; 
lean_inc_ref(v_cmp_2759_);
lean_inc(v_k_2764_);
lean_inc_ref(v_k_2760_);
v___x_2771_ = lean_apply_2(v_cmp_2759_, v_k_2760_, v_k_2764_);
v___x_2772_ = lean_unbox(v___x_2771_);
switch(v___x_2772_)
{
case 0:
{
lean_object* v_impl_2773_; lean_object* v___x_2774_; 
lean_dec(v_size_2763_);
v_impl_2773_ = l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lean_Data_Json_FromToJson_Extra_0__Lean_TreeMap_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lake_Check_instFromJsonConfig_fromJson_spec__4_spec__7_spec__9_spec__10___redArg(v_cmp_2759_, v_k_2760_, v_v_2761_, v_l_2766_);
v___x_2774_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_r_2767_) == 0)
{
lean_object* v_size_2775_; lean_object* v_size_2776_; lean_object* v_k_2777_; lean_object* v_v_2778_; lean_object* v_l_2779_; lean_object* v_r_2780_; lean_object* v___x_2781_; lean_object* v___x_2782_; uint8_t v___x_2783_; 
v_size_2775_ = lean_ctor_get(v_r_2767_, 0);
v_size_2776_ = lean_ctor_get(v_impl_2773_, 0);
lean_inc(v_size_2776_);
v_k_2777_ = lean_ctor_get(v_impl_2773_, 1);
lean_inc(v_k_2777_);
v_v_2778_ = lean_ctor_get(v_impl_2773_, 2);
lean_inc(v_v_2778_);
v_l_2779_ = lean_ctor_get(v_impl_2773_, 3);
lean_inc(v_l_2779_);
v_r_2780_ = lean_ctor_get(v_impl_2773_, 4);
lean_inc(v_r_2780_);
v___x_2781_ = lean_unsigned_to_nat(3u);
v___x_2782_ = lean_nat_mul(v___x_2781_, v_size_2775_);
v___x_2783_ = lean_nat_dec_lt(v___x_2782_, v_size_2776_);
lean_dec(v___x_2782_);
if (v___x_2783_ == 0)
{
lean_object* v___x_2784_; lean_object* v___x_2785_; lean_object* v___x_2787_; 
lean_dec(v_r_2780_);
lean_dec(v_l_2779_);
lean_dec(v_v_2778_);
lean_dec(v_k_2777_);
v___x_2784_ = lean_nat_add(v___x_2774_, v_size_2776_);
lean_dec(v_size_2776_);
v___x_2785_ = lean_nat_add(v___x_2784_, v_size_2775_);
lean_dec(v___x_2784_);
if (v_isShared_2770_ == 0)
{
lean_ctor_set(v___x_2769_, 3, v_impl_2773_);
lean_ctor_set(v___x_2769_, 0, v___x_2785_);
v___x_2787_ = v___x_2769_;
goto v_reusejp_2786_;
}
else
{
lean_object* v_reuseFailAlloc_2788_; 
v_reuseFailAlloc_2788_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2788_, 0, v___x_2785_);
lean_ctor_set(v_reuseFailAlloc_2788_, 1, v_k_2764_);
lean_ctor_set(v_reuseFailAlloc_2788_, 2, v_v_2765_);
lean_ctor_set(v_reuseFailAlloc_2788_, 3, v_impl_2773_);
lean_ctor_set(v_reuseFailAlloc_2788_, 4, v_r_2767_);
v___x_2787_ = v_reuseFailAlloc_2788_;
goto v_reusejp_2786_;
}
v_reusejp_2786_:
{
return v___x_2787_;
}
}
else
{
lean_object* v___x_2790_; uint8_t v_isShared_2791_; uint8_t v_isSharedCheck_2854_; 
v_isSharedCheck_2854_ = !lean_is_exclusive(v_impl_2773_);
if (v_isSharedCheck_2854_ == 0)
{
lean_object* v_unused_2855_; lean_object* v_unused_2856_; lean_object* v_unused_2857_; lean_object* v_unused_2858_; lean_object* v_unused_2859_; 
v_unused_2855_ = lean_ctor_get(v_impl_2773_, 4);
lean_dec(v_unused_2855_);
v_unused_2856_ = lean_ctor_get(v_impl_2773_, 3);
lean_dec(v_unused_2856_);
v_unused_2857_ = lean_ctor_get(v_impl_2773_, 2);
lean_dec(v_unused_2857_);
v_unused_2858_ = lean_ctor_get(v_impl_2773_, 1);
lean_dec(v_unused_2858_);
v_unused_2859_ = lean_ctor_get(v_impl_2773_, 0);
lean_dec(v_unused_2859_);
v___x_2790_ = v_impl_2773_;
v_isShared_2791_ = v_isSharedCheck_2854_;
goto v_resetjp_2789_;
}
else
{
lean_dec(v_impl_2773_);
v___x_2790_ = lean_box(0);
v_isShared_2791_ = v_isSharedCheck_2854_;
goto v_resetjp_2789_;
}
v_resetjp_2789_:
{
lean_object* v_size_2792_; lean_object* v_size_2793_; lean_object* v_k_2794_; lean_object* v_v_2795_; lean_object* v_l_2796_; lean_object* v_r_2797_; lean_object* v___x_2798_; lean_object* v___x_2799_; uint8_t v___x_2800_; 
v_size_2792_ = lean_ctor_get(v_l_2779_, 0);
v_size_2793_ = lean_ctor_get(v_r_2780_, 0);
v_k_2794_ = lean_ctor_get(v_r_2780_, 1);
v_v_2795_ = lean_ctor_get(v_r_2780_, 2);
v_l_2796_ = lean_ctor_get(v_r_2780_, 3);
v_r_2797_ = lean_ctor_get(v_r_2780_, 4);
v___x_2798_ = lean_unsigned_to_nat(2u);
v___x_2799_ = lean_nat_mul(v___x_2798_, v_size_2792_);
v___x_2800_ = lean_nat_dec_lt(v_size_2793_, v___x_2799_);
lean_dec(v___x_2799_);
if (v___x_2800_ == 0)
{
lean_object* v___x_2802_; uint8_t v_isShared_2803_; uint8_t v_isSharedCheck_2829_; 
lean_inc(v_r_2797_);
lean_inc(v_l_2796_);
lean_inc(v_v_2795_);
lean_inc(v_k_2794_);
v_isSharedCheck_2829_ = !lean_is_exclusive(v_r_2780_);
if (v_isSharedCheck_2829_ == 0)
{
lean_object* v_unused_2830_; lean_object* v_unused_2831_; lean_object* v_unused_2832_; lean_object* v_unused_2833_; lean_object* v_unused_2834_; 
v_unused_2830_ = lean_ctor_get(v_r_2780_, 4);
lean_dec(v_unused_2830_);
v_unused_2831_ = lean_ctor_get(v_r_2780_, 3);
lean_dec(v_unused_2831_);
v_unused_2832_ = lean_ctor_get(v_r_2780_, 2);
lean_dec(v_unused_2832_);
v_unused_2833_ = lean_ctor_get(v_r_2780_, 1);
lean_dec(v_unused_2833_);
v_unused_2834_ = lean_ctor_get(v_r_2780_, 0);
lean_dec(v_unused_2834_);
v___x_2802_ = v_r_2780_;
v_isShared_2803_ = v_isSharedCheck_2829_;
goto v_resetjp_2801_;
}
else
{
lean_dec(v_r_2780_);
v___x_2802_ = lean_box(0);
v_isShared_2803_ = v_isSharedCheck_2829_;
goto v_resetjp_2801_;
}
v_resetjp_2801_:
{
lean_object* v___x_2804_; lean_object* v___x_2805_; lean_object* v___y_2807_; lean_object* v___y_2808_; lean_object* v___y_2809_; lean_object* v___x_2817_; lean_object* v___y_2819_; 
v___x_2804_ = lean_nat_add(v___x_2774_, v_size_2776_);
lean_dec(v_size_2776_);
v___x_2805_ = lean_nat_add(v___x_2804_, v_size_2775_);
lean_dec(v___x_2804_);
v___x_2817_ = lean_nat_add(v___x_2774_, v_size_2792_);
if (lean_obj_tag(v_l_2796_) == 0)
{
lean_object* v_size_2827_; 
v_size_2827_ = lean_ctor_get(v_l_2796_, 0);
lean_inc(v_size_2827_);
v___y_2819_ = v_size_2827_;
goto v___jp_2818_;
}
else
{
lean_object* v___x_2828_; 
v___x_2828_ = lean_unsigned_to_nat(0u);
v___y_2819_ = v___x_2828_;
goto v___jp_2818_;
}
v___jp_2806_:
{
lean_object* v___x_2810_; lean_object* v___x_2812_; 
v___x_2810_ = lean_nat_add(v___y_2808_, v___y_2809_);
lean_dec(v___y_2809_);
lean_dec(v___y_2808_);
if (v_isShared_2803_ == 0)
{
lean_ctor_set(v___x_2802_, 4, v_r_2767_);
lean_ctor_set(v___x_2802_, 3, v_r_2797_);
lean_ctor_set(v___x_2802_, 2, v_v_2765_);
lean_ctor_set(v___x_2802_, 1, v_k_2764_);
lean_ctor_set(v___x_2802_, 0, v___x_2810_);
v___x_2812_ = v___x_2802_;
goto v_reusejp_2811_;
}
else
{
lean_object* v_reuseFailAlloc_2816_; 
v_reuseFailAlloc_2816_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2816_, 0, v___x_2810_);
lean_ctor_set(v_reuseFailAlloc_2816_, 1, v_k_2764_);
lean_ctor_set(v_reuseFailAlloc_2816_, 2, v_v_2765_);
lean_ctor_set(v_reuseFailAlloc_2816_, 3, v_r_2797_);
lean_ctor_set(v_reuseFailAlloc_2816_, 4, v_r_2767_);
v___x_2812_ = v_reuseFailAlloc_2816_;
goto v_reusejp_2811_;
}
v_reusejp_2811_:
{
lean_object* v___x_2814_; 
if (v_isShared_2791_ == 0)
{
lean_ctor_set(v___x_2790_, 4, v___x_2812_);
lean_ctor_set(v___x_2790_, 3, v___y_2807_);
lean_ctor_set(v___x_2790_, 2, v_v_2795_);
lean_ctor_set(v___x_2790_, 1, v_k_2794_);
lean_ctor_set(v___x_2790_, 0, v___x_2805_);
v___x_2814_ = v___x_2790_;
goto v_reusejp_2813_;
}
else
{
lean_object* v_reuseFailAlloc_2815_; 
v_reuseFailAlloc_2815_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2815_, 0, v___x_2805_);
lean_ctor_set(v_reuseFailAlloc_2815_, 1, v_k_2794_);
lean_ctor_set(v_reuseFailAlloc_2815_, 2, v_v_2795_);
lean_ctor_set(v_reuseFailAlloc_2815_, 3, v___y_2807_);
lean_ctor_set(v_reuseFailAlloc_2815_, 4, v___x_2812_);
v___x_2814_ = v_reuseFailAlloc_2815_;
goto v_reusejp_2813_;
}
v_reusejp_2813_:
{
return v___x_2814_;
}
}
}
v___jp_2818_:
{
lean_object* v___x_2820_; lean_object* v___x_2822_; 
v___x_2820_ = lean_nat_add(v___x_2817_, v___y_2819_);
lean_dec(v___y_2819_);
lean_dec(v___x_2817_);
if (v_isShared_2770_ == 0)
{
lean_ctor_set(v___x_2769_, 4, v_l_2796_);
lean_ctor_set(v___x_2769_, 3, v_l_2779_);
lean_ctor_set(v___x_2769_, 2, v_v_2778_);
lean_ctor_set(v___x_2769_, 1, v_k_2777_);
lean_ctor_set(v___x_2769_, 0, v___x_2820_);
v___x_2822_ = v___x_2769_;
goto v_reusejp_2821_;
}
else
{
lean_object* v_reuseFailAlloc_2826_; 
v_reuseFailAlloc_2826_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2826_, 0, v___x_2820_);
lean_ctor_set(v_reuseFailAlloc_2826_, 1, v_k_2777_);
lean_ctor_set(v_reuseFailAlloc_2826_, 2, v_v_2778_);
lean_ctor_set(v_reuseFailAlloc_2826_, 3, v_l_2779_);
lean_ctor_set(v_reuseFailAlloc_2826_, 4, v_l_2796_);
v___x_2822_ = v_reuseFailAlloc_2826_;
goto v_reusejp_2821_;
}
v_reusejp_2821_:
{
lean_object* v___x_2823_; 
v___x_2823_ = lean_nat_add(v___x_2774_, v_size_2775_);
if (lean_obj_tag(v_r_2797_) == 0)
{
lean_object* v_size_2824_; 
v_size_2824_ = lean_ctor_get(v_r_2797_, 0);
lean_inc(v_size_2824_);
v___y_2807_ = v___x_2822_;
v___y_2808_ = v___x_2823_;
v___y_2809_ = v_size_2824_;
goto v___jp_2806_;
}
else
{
lean_object* v___x_2825_; 
v___x_2825_ = lean_unsigned_to_nat(0u);
v___y_2807_ = v___x_2822_;
v___y_2808_ = v___x_2823_;
v___y_2809_ = v___x_2825_;
goto v___jp_2806_;
}
}
}
}
}
else
{
lean_object* v___x_2835_; lean_object* v___x_2836_; lean_object* v___x_2837_; lean_object* v___x_2838_; lean_object* v___x_2840_; 
lean_del_object(v___x_2769_);
v___x_2835_ = lean_nat_add(v___x_2774_, v_size_2776_);
lean_dec(v_size_2776_);
v___x_2836_ = lean_nat_add(v___x_2835_, v_size_2775_);
lean_dec(v___x_2835_);
v___x_2837_ = lean_nat_add(v___x_2774_, v_size_2775_);
v___x_2838_ = lean_nat_add(v___x_2837_, v_size_2793_);
lean_dec(v___x_2837_);
lean_inc_ref(v_r_2767_);
if (v_isShared_2791_ == 0)
{
lean_ctor_set(v___x_2790_, 4, v_r_2767_);
lean_ctor_set(v___x_2790_, 3, v_r_2780_);
lean_ctor_set(v___x_2790_, 2, v_v_2765_);
lean_ctor_set(v___x_2790_, 1, v_k_2764_);
lean_ctor_set(v___x_2790_, 0, v___x_2838_);
v___x_2840_ = v___x_2790_;
goto v_reusejp_2839_;
}
else
{
lean_object* v_reuseFailAlloc_2853_; 
v_reuseFailAlloc_2853_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2853_, 0, v___x_2838_);
lean_ctor_set(v_reuseFailAlloc_2853_, 1, v_k_2764_);
lean_ctor_set(v_reuseFailAlloc_2853_, 2, v_v_2765_);
lean_ctor_set(v_reuseFailAlloc_2853_, 3, v_r_2780_);
lean_ctor_set(v_reuseFailAlloc_2853_, 4, v_r_2767_);
v___x_2840_ = v_reuseFailAlloc_2853_;
goto v_reusejp_2839_;
}
v_reusejp_2839_:
{
lean_object* v___x_2842_; uint8_t v_isShared_2843_; uint8_t v_isSharedCheck_2847_; 
v_isSharedCheck_2847_ = !lean_is_exclusive(v_r_2767_);
if (v_isSharedCheck_2847_ == 0)
{
lean_object* v_unused_2848_; lean_object* v_unused_2849_; lean_object* v_unused_2850_; lean_object* v_unused_2851_; lean_object* v_unused_2852_; 
v_unused_2848_ = lean_ctor_get(v_r_2767_, 4);
lean_dec(v_unused_2848_);
v_unused_2849_ = lean_ctor_get(v_r_2767_, 3);
lean_dec(v_unused_2849_);
v_unused_2850_ = lean_ctor_get(v_r_2767_, 2);
lean_dec(v_unused_2850_);
v_unused_2851_ = lean_ctor_get(v_r_2767_, 1);
lean_dec(v_unused_2851_);
v_unused_2852_ = lean_ctor_get(v_r_2767_, 0);
lean_dec(v_unused_2852_);
v___x_2842_ = v_r_2767_;
v_isShared_2843_ = v_isSharedCheck_2847_;
goto v_resetjp_2841_;
}
else
{
lean_dec(v_r_2767_);
v___x_2842_ = lean_box(0);
v_isShared_2843_ = v_isSharedCheck_2847_;
goto v_resetjp_2841_;
}
v_resetjp_2841_:
{
lean_object* v___x_2845_; 
if (v_isShared_2843_ == 0)
{
lean_ctor_set(v___x_2842_, 4, v___x_2840_);
lean_ctor_set(v___x_2842_, 3, v_l_2779_);
lean_ctor_set(v___x_2842_, 2, v_v_2778_);
lean_ctor_set(v___x_2842_, 1, v_k_2777_);
lean_ctor_set(v___x_2842_, 0, v___x_2836_);
v___x_2845_ = v___x_2842_;
goto v_reusejp_2844_;
}
else
{
lean_object* v_reuseFailAlloc_2846_; 
v_reuseFailAlloc_2846_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2846_, 0, v___x_2836_);
lean_ctor_set(v_reuseFailAlloc_2846_, 1, v_k_2777_);
lean_ctor_set(v_reuseFailAlloc_2846_, 2, v_v_2778_);
lean_ctor_set(v_reuseFailAlloc_2846_, 3, v_l_2779_);
lean_ctor_set(v_reuseFailAlloc_2846_, 4, v___x_2840_);
v___x_2845_ = v_reuseFailAlloc_2846_;
goto v_reusejp_2844_;
}
v_reusejp_2844_:
{
return v___x_2845_;
}
}
}
}
}
}
}
else
{
lean_object* v_l_2860_; 
v_l_2860_ = lean_ctor_get(v_impl_2773_, 3);
lean_inc(v_l_2860_);
if (lean_obj_tag(v_l_2860_) == 0)
{
lean_object* v_r_2861_; lean_object* v_k_2862_; lean_object* v_v_2863_; lean_object* v___x_2865_; uint8_t v_isShared_2866_; uint8_t v_isSharedCheck_2874_; 
v_r_2861_ = lean_ctor_get(v_impl_2773_, 4);
v_k_2862_ = lean_ctor_get(v_impl_2773_, 1);
v_v_2863_ = lean_ctor_get(v_impl_2773_, 2);
v_isSharedCheck_2874_ = !lean_is_exclusive(v_impl_2773_);
if (v_isSharedCheck_2874_ == 0)
{
lean_object* v_unused_2875_; lean_object* v_unused_2876_; 
v_unused_2875_ = lean_ctor_get(v_impl_2773_, 3);
lean_dec(v_unused_2875_);
v_unused_2876_ = lean_ctor_get(v_impl_2773_, 0);
lean_dec(v_unused_2876_);
v___x_2865_ = v_impl_2773_;
v_isShared_2866_ = v_isSharedCheck_2874_;
goto v_resetjp_2864_;
}
else
{
lean_inc(v_r_2861_);
lean_inc(v_v_2863_);
lean_inc(v_k_2862_);
lean_dec(v_impl_2773_);
v___x_2865_ = lean_box(0);
v_isShared_2866_ = v_isSharedCheck_2874_;
goto v_resetjp_2864_;
}
v_resetjp_2864_:
{
lean_object* v___x_2867_; lean_object* v___x_2869_; 
v___x_2867_ = lean_unsigned_to_nat(3u);
lean_inc(v_r_2861_);
if (v_isShared_2866_ == 0)
{
lean_ctor_set(v___x_2865_, 3, v_r_2861_);
lean_ctor_set(v___x_2865_, 2, v_v_2765_);
lean_ctor_set(v___x_2865_, 1, v_k_2764_);
lean_ctor_set(v___x_2865_, 0, v___x_2774_);
v___x_2869_ = v___x_2865_;
goto v_reusejp_2868_;
}
else
{
lean_object* v_reuseFailAlloc_2873_; 
v_reuseFailAlloc_2873_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2873_, 0, v___x_2774_);
lean_ctor_set(v_reuseFailAlloc_2873_, 1, v_k_2764_);
lean_ctor_set(v_reuseFailAlloc_2873_, 2, v_v_2765_);
lean_ctor_set(v_reuseFailAlloc_2873_, 3, v_r_2861_);
lean_ctor_set(v_reuseFailAlloc_2873_, 4, v_r_2861_);
v___x_2869_ = v_reuseFailAlloc_2873_;
goto v_reusejp_2868_;
}
v_reusejp_2868_:
{
lean_object* v___x_2871_; 
if (v_isShared_2770_ == 0)
{
lean_ctor_set(v___x_2769_, 4, v___x_2869_);
lean_ctor_set(v___x_2769_, 3, v_l_2860_);
lean_ctor_set(v___x_2769_, 2, v_v_2863_);
lean_ctor_set(v___x_2769_, 1, v_k_2862_);
lean_ctor_set(v___x_2769_, 0, v___x_2867_);
v___x_2871_ = v___x_2769_;
goto v_reusejp_2870_;
}
else
{
lean_object* v_reuseFailAlloc_2872_; 
v_reuseFailAlloc_2872_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2872_, 0, v___x_2867_);
lean_ctor_set(v_reuseFailAlloc_2872_, 1, v_k_2862_);
lean_ctor_set(v_reuseFailAlloc_2872_, 2, v_v_2863_);
lean_ctor_set(v_reuseFailAlloc_2872_, 3, v_l_2860_);
lean_ctor_set(v_reuseFailAlloc_2872_, 4, v___x_2869_);
v___x_2871_ = v_reuseFailAlloc_2872_;
goto v_reusejp_2870_;
}
v_reusejp_2870_:
{
return v___x_2871_;
}
}
}
}
else
{
lean_object* v_r_2877_; 
v_r_2877_ = lean_ctor_get(v_impl_2773_, 4);
lean_inc(v_r_2877_);
if (lean_obj_tag(v_r_2877_) == 0)
{
lean_object* v_k_2878_; lean_object* v_v_2879_; lean_object* v___x_2881_; uint8_t v_isShared_2882_; uint8_t v_isSharedCheck_2902_; 
v_k_2878_ = lean_ctor_get(v_impl_2773_, 1);
v_v_2879_ = lean_ctor_get(v_impl_2773_, 2);
v_isSharedCheck_2902_ = !lean_is_exclusive(v_impl_2773_);
if (v_isSharedCheck_2902_ == 0)
{
lean_object* v_unused_2903_; lean_object* v_unused_2904_; lean_object* v_unused_2905_; 
v_unused_2903_ = lean_ctor_get(v_impl_2773_, 4);
lean_dec(v_unused_2903_);
v_unused_2904_ = lean_ctor_get(v_impl_2773_, 3);
lean_dec(v_unused_2904_);
v_unused_2905_ = lean_ctor_get(v_impl_2773_, 0);
lean_dec(v_unused_2905_);
v___x_2881_ = v_impl_2773_;
v_isShared_2882_ = v_isSharedCheck_2902_;
goto v_resetjp_2880_;
}
else
{
lean_inc(v_v_2879_);
lean_inc(v_k_2878_);
lean_dec(v_impl_2773_);
v___x_2881_ = lean_box(0);
v_isShared_2882_ = v_isSharedCheck_2902_;
goto v_resetjp_2880_;
}
v_resetjp_2880_:
{
lean_object* v_k_2883_; lean_object* v_v_2884_; lean_object* v___x_2886_; uint8_t v_isShared_2887_; uint8_t v_isSharedCheck_2898_; 
v_k_2883_ = lean_ctor_get(v_r_2877_, 1);
v_v_2884_ = lean_ctor_get(v_r_2877_, 2);
v_isSharedCheck_2898_ = !lean_is_exclusive(v_r_2877_);
if (v_isSharedCheck_2898_ == 0)
{
lean_object* v_unused_2899_; lean_object* v_unused_2900_; lean_object* v_unused_2901_; 
v_unused_2899_ = lean_ctor_get(v_r_2877_, 4);
lean_dec(v_unused_2899_);
v_unused_2900_ = lean_ctor_get(v_r_2877_, 3);
lean_dec(v_unused_2900_);
v_unused_2901_ = lean_ctor_get(v_r_2877_, 0);
lean_dec(v_unused_2901_);
v___x_2886_ = v_r_2877_;
v_isShared_2887_ = v_isSharedCheck_2898_;
goto v_resetjp_2885_;
}
else
{
lean_inc(v_v_2884_);
lean_inc(v_k_2883_);
lean_dec(v_r_2877_);
v___x_2886_ = lean_box(0);
v_isShared_2887_ = v_isSharedCheck_2898_;
goto v_resetjp_2885_;
}
v_resetjp_2885_:
{
lean_object* v___x_2888_; lean_object* v___x_2890_; 
v___x_2888_ = lean_unsigned_to_nat(3u);
if (v_isShared_2887_ == 0)
{
lean_ctor_set(v___x_2886_, 4, v_l_2860_);
lean_ctor_set(v___x_2886_, 3, v_l_2860_);
lean_ctor_set(v___x_2886_, 2, v_v_2879_);
lean_ctor_set(v___x_2886_, 1, v_k_2878_);
lean_ctor_set(v___x_2886_, 0, v___x_2774_);
v___x_2890_ = v___x_2886_;
goto v_reusejp_2889_;
}
else
{
lean_object* v_reuseFailAlloc_2897_; 
v_reuseFailAlloc_2897_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2897_, 0, v___x_2774_);
lean_ctor_set(v_reuseFailAlloc_2897_, 1, v_k_2878_);
lean_ctor_set(v_reuseFailAlloc_2897_, 2, v_v_2879_);
lean_ctor_set(v_reuseFailAlloc_2897_, 3, v_l_2860_);
lean_ctor_set(v_reuseFailAlloc_2897_, 4, v_l_2860_);
v___x_2890_ = v_reuseFailAlloc_2897_;
goto v_reusejp_2889_;
}
v_reusejp_2889_:
{
lean_object* v___x_2892_; 
if (v_isShared_2882_ == 0)
{
lean_ctor_set(v___x_2881_, 4, v_l_2860_);
lean_ctor_set(v___x_2881_, 2, v_v_2765_);
lean_ctor_set(v___x_2881_, 1, v_k_2764_);
lean_ctor_set(v___x_2881_, 0, v___x_2774_);
v___x_2892_ = v___x_2881_;
goto v_reusejp_2891_;
}
else
{
lean_object* v_reuseFailAlloc_2896_; 
v_reuseFailAlloc_2896_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2896_, 0, v___x_2774_);
lean_ctor_set(v_reuseFailAlloc_2896_, 1, v_k_2764_);
lean_ctor_set(v_reuseFailAlloc_2896_, 2, v_v_2765_);
lean_ctor_set(v_reuseFailAlloc_2896_, 3, v_l_2860_);
lean_ctor_set(v_reuseFailAlloc_2896_, 4, v_l_2860_);
v___x_2892_ = v_reuseFailAlloc_2896_;
goto v_reusejp_2891_;
}
v_reusejp_2891_:
{
lean_object* v___x_2894_; 
if (v_isShared_2770_ == 0)
{
lean_ctor_set(v___x_2769_, 4, v___x_2892_);
lean_ctor_set(v___x_2769_, 3, v___x_2890_);
lean_ctor_set(v___x_2769_, 2, v_v_2884_);
lean_ctor_set(v___x_2769_, 1, v_k_2883_);
lean_ctor_set(v___x_2769_, 0, v___x_2888_);
v___x_2894_ = v___x_2769_;
goto v_reusejp_2893_;
}
else
{
lean_object* v_reuseFailAlloc_2895_; 
v_reuseFailAlloc_2895_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2895_, 0, v___x_2888_);
lean_ctor_set(v_reuseFailAlloc_2895_, 1, v_k_2883_);
lean_ctor_set(v_reuseFailAlloc_2895_, 2, v_v_2884_);
lean_ctor_set(v_reuseFailAlloc_2895_, 3, v___x_2890_);
lean_ctor_set(v_reuseFailAlloc_2895_, 4, v___x_2892_);
v___x_2894_ = v_reuseFailAlloc_2895_;
goto v_reusejp_2893_;
}
v_reusejp_2893_:
{
return v___x_2894_;
}
}
}
}
}
}
else
{
lean_object* v___x_2906_; lean_object* v___x_2908_; 
v___x_2906_ = lean_unsigned_to_nat(2u);
if (v_isShared_2770_ == 0)
{
lean_ctor_set(v___x_2769_, 4, v_r_2877_);
lean_ctor_set(v___x_2769_, 3, v_impl_2773_);
lean_ctor_set(v___x_2769_, 0, v___x_2906_);
v___x_2908_ = v___x_2769_;
goto v_reusejp_2907_;
}
else
{
lean_object* v_reuseFailAlloc_2909_; 
v_reuseFailAlloc_2909_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2909_, 0, v___x_2906_);
lean_ctor_set(v_reuseFailAlloc_2909_, 1, v_k_2764_);
lean_ctor_set(v_reuseFailAlloc_2909_, 2, v_v_2765_);
lean_ctor_set(v_reuseFailAlloc_2909_, 3, v_impl_2773_);
lean_ctor_set(v_reuseFailAlloc_2909_, 4, v_r_2877_);
v___x_2908_ = v_reuseFailAlloc_2909_;
goto v_reusejp_2907_;
}
v_reusejp_2907_:
{
return v___x_2908_;
}
}
}
}
}
case 1:
{
lean_object* v___x_2911_; 
lean_dec(v_v_2765_);
lean_dec(v_k_2764_);
lean_dec_ref(v_cmp_2759_);
if (v_isShared_2770_ == 0)
{
lean_ctor_set(v___x_2769_, 2, v_v_2761_);
lean_ctor_set(v___x_2769_, 1, v_k_2760_);
v___x_2911_ = v___x_2769_;
goto v_reusejp_2910_;
}
else
{
lean_object* v_reuseFailAlloc_2912_; 
v_reuseFailAlloc_2912_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2912_, 0, v_size_2763_);
lean_ctor_set(v_reuseFailAlloc_2912_, 1, v_k_2760_);
lean_ctor_set(v_reuseFailAlloc_2912_, 2, v_v_2761_);
lean_ctor_set(v_reuseFailAlloc_2912_, 3, v_l_2766_);
lean_ctor_set(v_reuseFailAlloc_2912_, 4, v_r_2767_);
v___x_2911_ = v_reuseFailAlloc_2912_;
goto v_reusejp_2910_;
}
v_reusejp_2910_:
{
return v___x_2911_;
}
}
default: 
{
lean_object* v_impl_2913_; lean_object* v___x_2914_; 
lean_dec(v_size_2763_);
v_impl_2913_ = l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lean_Data_Json_FromToJson_Extra_0__Lean_TreeMap_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lake_Check_instFromJsonConfig_fromJson_spec__4_spec__7_spec__9_spec__10___redArg(v_cmp_2759_, v_k_2760_, v_v_2761_, v_r_2767_);
v___x_2914_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_l_2766_) == 0)
{
lean_object* v_size_2915_; lean_object* v_size_2916_; lean_object* v_k_2917_; lean_object* v_v_2918_; lean_object* v_l_2919_; lean_object* v_r_2920_; lean_object* v___x_2921_; lean_object* v___x_2922_; uint8_t v___x_2923_; 
v_size_2915_ = lean_ctor_get(v_l_2766_, 0);
v_size_2916_ = lean_ctor_get(v_impl_2913_, 0);
lean_inc(v_size_2916_);
v_k_2917_ = lean_ctor_get(v_impl_2913_, 1);
lean_inc(v_k_2917_);
v_v_2918_ = lean_ctor_get(v_impl_2913_, 2);
lean_inc(v_v_2918_);
v_l_2919_ = lean_ctor_get(v_impl_2913_, 3);
lean_inc(v_l_2919_);
v_r_2920_ = lean_ctor_get(v_impl_2913_, 4);
lean_inc(v_r_2920_);
v___x_2921_ = lean_unsigned_to_nat(3u);
v___x_2922_ = lean_nat_mul(v___x_2921_, v_size_2915_);
v___x_2923_ = lean_nat_dec_lt(v___x_2922_, v_size_2916_);
lean_dec(v___x_2922_);
if (v___x_2923_ == 0)
{
lean_object* v___x_2924_; lean_object* v___x_2925_; lean_object* v___x_2927_; 
lean_dec(v_r_2920_);
lean_dec(v_l_2919_);
lean_dec(v_v_2918_);
lean_dec(v_k_2917_);
v___x_2924_ = lean_nat_add(v___x_2914_, v_size_2915_);
v___x_2925_ = lean_nat_add(v___x_2924_, v_size_2916_);
lean_dec(v_size_2916_);
lean_dec(v___x_2924_);
if (v_isShared_2770_ == 0)
{
lean_ctor_set(v___x_2769_, 4, v_impl_2913_);
lean_ctor_set(v___x_2769_, 0, v___x_2925_);
v___x_2927_ = v___x_2769_;
goto v_reusejp_2926_;
}
else
{
lean_object* v_reuseFailAlloc_2928_; 
v_reuseFailAlloc_2928_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2928_, 0, v___x_2925_);
lean_ctor_set(v_reuseFailAlloc_2928_, 1, v_k_2764_);
lean_ctor_set(v_reuseFailAlloc_2928_, 2, v_v_2765_);
lean_ctor_set(v_reuseFailAlloc_2928_, 3, v_l_2766_);
lean_ctor_set(v_reuseFailAlloc_2928_, 4, v_impl_2913_);
v___x_2927_ = v_reuseFailAlloc_2928_;
goto v_reusejp_2926_;
}
v_reusejp_2926_:
{
return v___x_2927_;
}
}
else
{
lean_object* v___x_2930_; uint8_t v_isShared_2931_; uint8_t v_isSharedCheck_2992_; 
v_isSharedCheck_2992_ = !lean_is_exclusive(v_impl_2913_);
if (v_isSharedCheck_2992_ == 0)
{
lean_object* v_unused_2993_; lean_object* v_unused_2994_; lean_object* v_unused_2995_; lean_object* v_unused_2996_; lean_object* v_unused_2997_; 
v_unused_2993_ = lean_ctor_get(v_impl_2913_, 4);
lean_dec(v_unused_2993_);
v_unused_2994_ = lean_ctor_get(v_impl_2913_, 3);
lean_dec(v_unused_2994_);
v_unused_2995_ = lean_ctor_get(v_impl_2913_, 2);
lean_dec(v_unused_2995_);
v_unused_2996_ = lean_ctor_get(v_impl_2913_, 1);
lean_dec(v_unused_2996_);
v_unused_2997_ = lean_ctor_get(v_impl_2913_, 0);
lean_dec(v_unused_2997_);
v___x_2930_ = v_impl_2913_;
v_isShared_2931_ = v_isSharedCheck_2992_;
goto v_resetjp_2929_;
}
else
{
lean_dec(v_impl_2913_);
v___x_2930_ = lean_box(0);
v_isShared_2931_ = v_isSharedCheck_2992_;
goto v_resetjp_2929_;
}
v_resetjp_2929_:
{
lean_object* v_size_2932_; lean_object* v_k_2933_; lean_object* v_v_2934_; lean_object* v_l_2935_; lean_object* v_r_2936_; lean_object* v_size_2937_; lean_object* v___x_2938_; lean_object* v___x_2939_; uint8_t v___x_2940_; 
v_size_2932_ = lean_ctor_get(v_l_2919_, 0);
v_k_2933_ = lean_ctor_get(v_l_2919_, 1);
v_v_2934_ = lean_ctor_get(v_l_2919_, 2);
v_l_2935_ = lean_ctor_get(v_l_2919_, 3);
v_r_2936_ = lean_ctor_get(v_l_2919_, 4);
v_size_2937_ = lean_ctor_get(v_r_2920_, 0);
v___x_2938_ = lean_unsigned_to_nat(2u);
v___x_2939_ = lean_nat_mul(v___x_2938_, v_size_2937_);
v___x_2940_ = lean_nat_dec_lt(v_size_2932_, v___x_2939_);
lean_dec(v___x_2939_);
if (v___x_2940_ == 0)
{
lean_object* v___x_2942_; uint8_t v_isShared_2943_; uint8_t v_isSharedCheck_2968_; 
lean_inc(v_r_2936_);
lean_inc(v_l_2935_);
lean_inc(v_v_2934_);
lean_inc(v_k_2933_);
v_isSharedCheck_2968_ = !lean_is_exclusive(v_l_2919_);
if (v_isSharedCheck_2968_ == 0)
{
lean_object* v_unused_2969_; lean_object* v_unused_2970_; lean_object* v_unused_2971_; lean_object* v_unused_2972_; lean_object* v_unused_2973_; 
v_unused_2969_ = lean_ctor_get(v_l_2919_, 4);
lean_dec(v_unused_2969_);
v_unused_2970_ = lean_ctor_get(v_l_2919_, 3);
lean_dec(v_unused_2970_);
v_unused_2971_ = lean_ctor_get(v_l_2919_, 2);
lean_dec(v_unused_2971_);
v_unused_2972_ = lean_ctor_get(v_l_2919_, 1);
lean_dec(v_unused_2972_);
v_unused_2973_ = lean_ctor_get(v_l_2919_, 0);
lean_dec(v_unused_2973_);
v___x_2942_ = v_l_2919_;
v_isShared_2943_ = v_isSharedCheck_2968_;
goto v_resetjp_2941_;
}
else
{
lean_dec(v_l_2919_);
v___x_2942_ = lean_box(0);
v_isShared_2943_ = v_isSharedCheck_2968_;
goto v_resetjp_2941_;
}
v_resetjp_2941_:
{
lean_object* v___x_2944_; lean_object* v___x_2945_; lean_object* v___y_2947_; lean_object* v___y_2948_; lean_object* v___y_2949_; lean_object* v___y_2958_; 
v___x_2944_ = lean_nat_add(v___x_2914_, v_size_2915_);
v___x_2945_ = lean_nat_add(v___x_2944_, v_size_2916_);
lean_dec(v_size_2916_);
if (lean_obj_tag(v_l_2935_) == 0)
{
lean_object* v_size_2966_; 
v_size_2966_ = lean_ctor_get(v_l_2935_, 0);
lean_inc(v_size_2966_);
v___y_2958_ = v_size_2966_;
goto v___jp_2957_;
}
else
{
lean_object* v___x_2967_; 
v___x_2967_ = lean_unsigned_to_nat(0u);
v___y_2958_ = v___x_2967_;
goto v___jp_2957_;
}
v___jp_2946_:
{
lean_object* v___x_2950_; lean_object* v___x_2952_; 
v___x_2950_ = lean_nat_add(v___y_2948_, v___y_2949_);
lean_dec(v___y_2949_);
lean_dec(v___y_2948_);
if (v_isShared_2943_ == 0)
{
lean_ctor_set(v___x_2942_, 4, v_r_2920_);
lean_ctor_set(v___x_2942_, 3, v_r_2936_);
lean_ctor_set(v___x_2942_, 2, v_v_2918_);
lean_ctor_set(v___x_2942_, 1, v_k_2917_);
lean_ctor_set(v___x_2942_, 0, v___x_2950_);
v___x_2952_ = v___x_2942_;
goto v_reusejp_2951_;
}
else
{
lean_object* v_reuseFailAlloc_2956_; 
v_reuseFailAlloc_2956_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2956_, 0, v___x_2950_);
lean_ctor_set(v_reuseFailAlloc_2956_, 1, v_k_2917_);
lean_ctor_set(v_reuseFailAlloc_2956_, 2, v_v_2918_);
lean_ctor_set(v_reuseFailAlloc_2956_, 3, v_r_2936_);
lean_ctor_set(v_reuseFailAlloc_2956_, 4, v_r_2920_);
v___x_2952_ = v_reuseFailAlloc_2956_;
goto v_reusejp_2951_;
}
v_reusejp_2951_:
{
lean_object* v___x_2954_; 
if (v_isShared_2931_ == 0)
{
lean_ctor_set(v___x_2930_, 4, v___x_2952_);
lean_ctor_set(v___x_2930_, 3, v___y_2947_);
lean_ctor_set(v___x_2930_, 2, v_v_2934_);
lean_ctor_set(v___x_2930_, 1, v_k_2933_);
lean_ctor_set(v___x_2930_, 0, v___x_2945_);
v___x_2954_ = v___x_2930_;
goto v_reusejp_2953_;
}
else
{
lean_object* v_reuseFailAlloc_2955_; 
v_reuseFailAlloc_2955_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2955_, 0, v___x_2945_);
lean_ctor_set(v_reuseFailAlloc_2955_, 1, v_k_2933_);
lean_ctor_set(v_reuseFailAlloc_2955_, 2, v_v_2934_);
lean_ctor_set(v_reuseFailAlloc_2955_, 3, v___y_2947_);
lean_ctor_set(v_reuseFailAlloc_2955_, 4, v___x_2952_);
v___x_2954_ = v_reuseFailAlloc_2955_;
goto v_reusejp_2953_;
}
v_reusejp_2953_:
{
return v___x_2954_;
}
}
}
v___jp_2957_:
{
lean_object* v___x_2959_; lean_object* v___x_2961_; 
v___x_2959_ = lean_nat_add(v___x_2944_, v___y_2958_);
lean_dec(v___y_2958_);
lean_dec(v___x_2944_);
if (v_isShared_2770_ == 0)
{
lean_ctor_set(v___x_2769_, 4, v_l_2935_);
lean_ctor_set(v___x_2769_, 0, v___x_2959_);
v___x_2961_ = v___x_2769_;
goto v_reusejp_2960_;
}
else
{
lean_object* v_reuseFailAlloc_2965_; 
v_reuseFailAlloc_2965_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2965_, 0, v___x_2959_);
lean_ctor_set(v_reuseFailAlloc_2965_, 1, v_k_2764_);
lean_ctor_set(v_reuseFailAlloc_2965_, 2, v_v_2765_);
lean_ctor_set(v_reuseFailAlloc_2965_, 3, v_l_2766_);
lean_ctor_set(v_reuseFailAlloc_2965_, 4, v_l_2935_);
v___x_2961_ = v_reuseFailAlloc_2965_;
goto v_reusejp_2960_;
}
v_reusejp_2960_:
{
lean_object* v___x_2962_; 
v___x_2962_ = lean_nat_add(v___x_2914_, v_size_2937_);
if (lean_obj_tag(v_r_2936_) == 0)
{
lean_object* v_size_2963_; 
v_size_2963_ = lean_ctor_get(v_r_2936_, 0);
lean_inc(v_size_2963_);
v___y_2947_ = v___x_2961_;
v___y_2948_ = v___x_2962_;
v___y_2949_ = v_size_2963_;
goto v___jp_2946_;
}
else
{
lean_object* v___x_2964_; 
v___x_2964_ = lean_unsigned_to_nat(0u);
v___y_2947_ = v___x_2961_;
v___y_2948_ = v___x_2962_;
v___y_2949_ = v___x_2964_;
goto v___jp_2946_;
}
}
}
}
}
else
{
lean_object* v___x_2974_; lean_object* v___x_2975_; lean_object* v___x_2976_; lean_object* v___x_2978_; 
lean_del_object(v___x_2769_);
v___x_2974_ = lean_nat_add(v___x_2914_, v_size_2915_);
v___x_2975_ = lean_nat_add(v___x_2974_, v_size_2916_);
lean_dec(v_size_2916_);
v___x_2976_ = lean_nat_add(v___x_2974_, v_size_2932_);
lean_dec(v___x_2974_);
lean_inc_ref(v_l_2766_);
if (v_isShared_2931_ == 0)
{
lean_ctor_set(v___x_2930_, 4, v_l_2919_);
lean_ctor_set(v___x_2930_, 3, v_l_2766_);
lean_ctor_set(v___x_2930_, 2, v_v_2765_);
lean_ctor_set(v___x_2930_, 1, v_k_2764_);
lean_ctor_set(v___x_2930_, 0, v___x_2976_);
v___x_2978_ = v___x_2930_;
goto v_reusejp_2977_;
}
else
{
lean_object* v_reuseFailAlloc_2991_; 
v_reuseFailAlloc_2991_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2991_, 0, v___x_2976_);
lean_ctor_set(v_reuseFailAlloc_2991_, 1, v_k_2764_);
lean_ctor_set(v_reuseFailAlloc_2991_, 2, v_v_2765_);
lean_ctor_set(v_reuseFailAlloc_2991_, 3, v_l_2766_);
lean_ctor_set(v_reuseFailAlloc_2991_, 4, v_l_2919_);
v___x_2978_ = v_reuseFailAlloc_2991_;
goto v_reusejp_2977_;
}
v_reusejp_2977_:
{
lean_object* v___x_2980_; uint8_t v_isShared_2981_; uint8_t v_isSharedCheck_2985_; 
v_isSharedCheck_2985_ = !lean_is_exclusive(v_l_2766_);
if (v_isSharedCheck_2985_ == 0)
{
lean_object* v_unused_2986_; lean_object* v_unused_2987_; lean_object* v_unused_2988_; lean_object* v_unused_2989_; lean_object* v_unused_2990_; 
v_unused_2986_ = lean_ctor_get(v_l_2766_, 4);
lean_dec(v_unused_2986_);
v_unused_2987_ = lean_ctor_get(v_l_2766_, 3);
lean_dec(v_unused_2987_);
v_unused_2988_ = lean_ctor_get(v_l_2766_, 2);
lean_dec(v_unused_2988_);
v_unused_2989_ = lean_ctor_get(v_l_2766_, 1);
lean_dec(v_unused_2989_);
v_unused_2990_ = lean_ctor_get(v_l_2766_, 0);
lean_dec(v_unused_2990_);
v___x_2980_ = v_l_2766_;
v_isShared_2981_ = v_isSharedCheck_2985_;
goto v_resetjp_2979_;
}
else
{
lean_dec(v_l_2766_);
v___x_2980_ = lean_box(0);
v_isShared_2981_ = v_isSharedCheck_2985_;
goto v_resetjp_2979_;
}
v_resetjp_2979_:
{
lean_object* v___x_2983_; 
if (v_isShared_2981_ == 0)
{
lean_ctor_set(v___x_2980_, 4, v_r_2920_);
lean_ctor_set(v___x_2980_, 3, v___x_2978_);
lean_ctor_set(v___x_2980_, 2, v_v_2918_);
lean_ctor_set(v___x_2980_, 1, v_k_2917_);
lean_ctor_set(v___x_2980_, 0, v___x_2975_);
v___x_2983_ = v___x_2980_;
goto v_reusejp_2982_;
}
else
{
lean_object* v_reuseFailAlloc_2984_; 
v_reuseFailAlloc_2984_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2984_, 0, v___x_2975_);
lean_ctor_set(v_reuseFailAlloc_2984_, 1, v_k_2917_);
lean_ctor_set(v_reuseFailAlloc_2984_, 2, v_v_2918_);
lean_ctor_set(v_reuseFailAlloc_2984_, 3, v___x_2978_);
lean_ctor_set(v_reuseFailAlloc_2984_, 4, v_r_2920_);
v___x_2983_ = v_reuseFailAlloc_2984_;
goto v_reusejp_2982_;
}
v_reusejp_2982_:
{
return v___x_2983_;
}
}
}
}
}
}
}
else
{
lean_object* v_l_2998_; 
v_l_2998_ = lean_ctor_get(v_impl_2913_, 3);
lean_inc(v_l_2998_);
if (lean_obj_tag(v_l_2998_) == 0)
{
lean_object* v_r_2999_; lean_object* v_k_3000_; lean_object* v_v_3001_; lean_object* v___x_3003_; uint8_t v_isShared_3004_; uint8_t v_isSharedCheck_3024_; 
v_r_2999_ = lean_ctor_get(v_impl_2913_, 4);
v_k_3000_ = lean_ctor_get(v_impl_2913_, 1);
v_v_3001_ = lean_ctor_get(v_impl_2913_, 2);
v_isSharedCheck_3024_ = !lean_is_exclusive(v_impl_2913_);
if (v_isSharedCheck_3024_ == 0)
{
lean_object* v_unused_3025_; lean_object* v_unused_3026_; 
v_unused_3025_ = lean_ctor_get(v_impl_2913_, 3);
lean_dec(v_unused_3025_);
v_unused_3026_ = lean_ctor_get(v_impl_2913_, 0);
lean_dec(v_unused_3026_);
v___x_3003_ = v_impl_2913_;
v_isShared_3004_ = v_isSharedCheck_3024_;
goto v_resetjp_3002_;
}
else
{
lean_inc(v_r_2999_);
lean_inc(v_v_3001_);
lean_inc(v_k_3000_);
lean_dec(v_impl_2913_);
v___x_3003_ = lean_box(0);
v_isShared_3004_ = v_isSharedCheck_3024_;
goto v_resetjp_3002_;
}
v_resetjp_3002_:
{
lean_object* v_k_3005_; lean_object* v_v_3006_; lean_object* v___x_3008_; uint8_t v_isShared_3009_; uint8_t v_isSharedCheck_3020_; 
v_k_3005_ = lean_ctor_get(v_l_2998_, 1);
v_v_3006_ = lean_ctor_get(v_l_2998_, 2);
v_isSharedCheck_3020_ = !lean_is_exclusive(v_l_2998_);
if (v_isSharedCheck_3020_ == 0)
{
lean_object* v_unused_3021_; lean_object* v_unused_3022_; lean_object* v_unused_3023_; 
v_unused_3021_ = lean_ctor_get(v_l_2998_, 4);
lean_dec(v_unused_3021_);
v_unused_3022_ = lean_ctor_get(v_l_2998_, 3);
lean_dec(v_unused_3022_);
v_unused_3023_ = lean_ctor_get(v_l_2998_, 0);
lean_dec(v_unused_3023_);
v___x_3008_ = v_l_2998_;
v_isShared_3009_ = v_isSharedCheck_3020_;
goto v_resetjp_3007_;
}
else
{
lean_inc(v_v_3006_);
lean_inc(v_k_3005_);
lean_dec(v_l_2998_);
v___x_3008_ = lean_box(0);
v_isShared_3009_ = v_isSharedCheck_3020_;
goto v_resetjp_3007_;
}
v_resetjp_3007_:
{
lean_object* v___x_3010_; lean_object* v___x_3012_; 
v___x_3010_ = lean_unsigned_to_nat(3u);
lean_inc_n(v_r_2999_, 2);
if (v_isShared_3009_ == 0)
{
lean_ctor_set(v___x_3008_, 4, v_r_2999_);
lean_ctor_set(v___x_3008_, 3, v_r_2999_);
lean_ctor_set(v___x_3008_, 2, v_v_2765_);
lean_ctor_set(v___x_3008_, 1, v_k_2764_);
lean_ctor_set(v___x_3008_, 0, v___x_2914_);
v___x_3012_ = v___x_3008_;
goto v_reusejp_3011_;
}
else
{
lean_object* v_reuseFailAlloc_3019_; 
v_reuseFailAlloc_3019_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3019_, 0, v___x_2914_);
lean_ctor_set(v_reuseFailAlloc_3019_, 1, v_k_2764_);
lean_ctor_set(v_reuseFailAlloc_3019_, 2, v_v_2765_);
lean_ctor_set(v_reuseFailAlloc_3019_, 3, v_r_2999_);
lean_ctor_set(v_reuseFailAlloc_3019_, 4, v_r_2999_);
v___x_3012_ = v_reuseFailAlloc_3019_;
goto v_reusejp_3011_;
}
v_reusejp_3011_:
{
lean_object* v___x_3014_; 
lean_inc(v_r_2999_);
if (v_isShared_3004_ == 0)
{
lean_ctor_set(v___x_3003_, 3, v_r_2999_);
lean_ctor_set(v___x_3003_, 0, v___x_2914_);
v___x_3014_ = v___x_3003_;
goto v_reusejp_3013_;
}
else
{
lean_object* v_reuseFailAlloc_3018_; 
v_reuseFailAlloc_3018_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3018_, 0, v___x_2914_);
lean_ctor_set(v_reuseFailAlloc_3018_, 1, v_k_3000_);
lean_ctor_set(v_reuseFailAlloc_3018_, 2, v_v_3001_);
lean_ctor_set(v_reuseFailAlloc_3018_, 3, v_r_2999_);
lean_ctor_set(v_reuseFailAlloc_3018_, 4, v_r_2999_);
v___x_3014_ = v_reuseFailAlloc_3018_;
goto v_reusejp_3013_;
}
v_reusejp_3013_:
{
lean_object* v___x_3016_; 
if (v_isShared_2770_ == 0)
{
lean_ctor_set(v___x_2769_, 4, v___x_3014_);
lean_ctor_set(v___x_2769_, 3, v___x_3012_);
lean_ctor_set(v___x_2769_, 2, v_v_3006_);
lean_ctor_set(v___x_2769_, 1, v_k_3005_);
lean_ctor_set(v___x_2769_, 0, v___x_3010_);
v___x_3016_ = v___x_2769_;
goto v_reusejp_3015_;
}
else
{
lean_object* v_reuseFailAlloc_3017_; 
v_reuseFailAlloc_3017_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3017_, 0, v___x_3010_);
lean_ctor_set(v_reuseFailAlloc_3017_, 1, v_k_3005_);
lean_ctor_set(v_reuseFailAlloc_3017_, 2, v_v_3006_);
lean_ctor_set(v_reuseFailAlloc_3017_, 3, v___x_3012_);
lean_ctor_set(v_reuseFailAlloc_3017_, 4, v___x_3014_);
v___x_3016_ = v_reuseFailAlloc_3017_;
goto v_reusejp_3015_;
}
v_reusejp_3015_:
{
return v___x_3016_;
}
}
}
}
}
}
else
{
lean_object* v_r_3027_; 
v_r_3027_ = lean_ctor_get(v_impl_2913_, 4);
lean_inc(v_r_3027_);
if (lean_obj_tag(v_r_3027_) == 0)
{
lean_object* v_k_3028_; lean_object* v_v_3029_; lean_object* v___x_3031_; uint8_t v_isShared_3032_; uint8_t v_isSharedCheck_3040_; 
v_k_3028_ = lean_ctor_get(v_impl_2913_, 1);
v_v_3029_ = lean_ctor_get(v_impl_2913_, 2);
v_isSharedCheck_3040_ = !lean_is_exclusive(v_impl_2913_);
if (v_isSharedCheck_3040_ == 0)
{
lean_object* v_unused_3041_; lean_object* v_unused_3042_; lean_object* v_unused_3043_; 
v_unused_3041_ = lean_ctor_get(v_impl_2913_, 4);
lean_dec(v_unused_3041_);
v_unused_3042_ = lean_ctor_get(v_impl_2913_, 3);
lean_dec(v_unused_3042_);
v_unused_3043_ = lean_ctor_get(v_impl_2913_, 0);
lean_dec(v_unused_3043_);
v___x_3031_ = v_impl_2913_;
v_isShared_3032_ = v_isSharedCheck_3040_;
goto v_resetjp_3030_;
}
else
{
lean_inc(v_v_3029_);
lean_inc(v_k_3028_);
lean_dec(v_impl_2913_);
v___x_3031_ = lean_box(0);
v_isShared_3032_ = v_isSharedCheck_3040_;
goto v_resetjp_3030_;
}
v_resetjp_3030_:
{
lean_object* v___x_3033_; lean_object* v___x_3035_; 
v___x_3033_ = lean_unsigned_to_nat(3u);
if (v_isShared_3032_ == 0)
{
lean_ctor_set(v___x_3031_, 4, v_l_2998_);
lean_ctor_set(v___x_3031_, 2, v_v_2765_);
lean_ctor_set(v___x_3031_, 1, v_k_2764_);
lean_ctor_set(v___x_3031_, 0, v___x_2914_);
v___x_3035_ = v___x_3031_;
goto v_reusejp_3034_;
}
else
{
lean_object* v_reuseFailAlloc_3039_; 
v_reuseFailAlloc_3039_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3039_, 0, v___x_2914_);
lean_ctor_set(v_reuseFailAlloc_3039_, 1, v_k_2764_);
lean_ctor_set(v_reuseFailAlloc_3039_, 2, v_v_2765_);
lean_ctor_set(v_reuseFailAlloc_3039_, 3, v_l_2998_);
lean_ctor_set(v_reuseFailAlloc_3039_, 4, v_l_2998_);
v___x_3035_ = v_reuseFailAlloc_3039_;
goto v_reusejp_3034_;
}
v_reusejp_3034_:
{
lean_object* v___x_3037_; 
if (v_isShared_2770_ == 0)
{
lean_ctor_set(v___x_2769_, 4, v_r_3027_);
lean_ctor_set(v___x_2769_, 3, v___x_3035_);
lean_ctor_set(v___x_2769_, 2, v_v_3029_);
lean_ctor_set(v___x_2769_, 1, v_k_3028_);
lean_ctor_set(v___x_2769_, 0, v___x_3033_);
v___x_3037_ = v___x_2769_;
goto v_reusejp_3036_;
}
else
{
lean_object* v_reuseFailAlloc_3038_; 
v_reuseFailAlloc_3038_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3038_, 0, v___x_3033_);
lean_ctor_set(v_reuseFailAlloc_3038_, 1, v_k_3028_);
lean_ctor_set(v_reuseFailAlloc_3038_, 2, v_v_3029_);
lean_ctor_set(v_reuseFailAlloc_3038_, 3, v___x_3035_);
lean_ctor_set(v_reuseFailAlloc_3038_, 4, v_r_3027_);
v___x_3037_ = v_reuseFailAlloc_3038_;
goto v_reusejp_3036_;
}
v_reusejp_3036_:
{
return v___x_3037_;
}
}
}
}
else
{
lean_object* v___x_3044_; lean_object* v___x_3046_; 
v___x_3044_ = lean_unsigned_to_nat(2u);
if (v_isShared_2770_ == 0)
{
lean_ctor_set(v___x_2769_, 4, v_impl_2913_);
lean_ctor_set(v___x_2769_, 3, v_r_3027_);
lean_ctor_set(v___x_2769_, 0, v___x_3044_);
v___x_3046_ = v___x_2769_;
goto v_reusejp_3045_;
}
else
{
lean_object* v_reuseFailAlloc_3047_; 
v_reuseFailAlloc_3047_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3047_, 0, v___x_3044_);
lean_ctor_set(v_reuseFailAlloc_3047_, 1, v_k_2764_);
lean_ctor_set(v_reuseFailAlloc_3047_, 2, v_v_2765_);
lean_ctor_set(v_reuseFailAlloc_3047_, 3, v_r_3027_);
lean_ctor_set(v_reuseFailAlloc_3047_, 4, v_impl_2913_);
v___x_3046_ = v_reuseFailAlloc_3047_;
goto v_reusejp_3045_;
}
v_reusejp_3045_:
{
return v___x_3046_;
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
lean_object* v___x_3049_; lean_object* v___x_3050_; 
lean_dec_ref(v_cmp_2759_);
v___x_3049_ = lean_unsigned_to_nat(1u);
v___x_3050_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_3050_, 0, v___x_3049_);
lean_ctor_set(v___x_3050_, 1, v_k_2760_);
lean_ctor_set(v___x_3050_, 2, v_v_2761_);
lean_ctor_set(v___x_3050_, 3, v_t_2762_);
lean_ctor_set(v___x_3050_, 4, v_t_2762_);
return v___x_3050_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00__private_Lean_Data_Json_FromToJson_Extra_0__Lean_TreeMap_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lake_Check_instFromJsonConfig_fromJson_spec__4_spec__7_spec__9_spec__11(lean_object* v_cmp_3051_, lean_object* v_init_3052_, lean_object* v_x_3053_){
_start:
{
if (lean_obj_tag(v_x_3053_) == 0)
{
lean_object* v_k_3054_; lean_object* v_v_3055_; lean_object* v_l_3056_; lean_object* v_r_3057_; lean_object* v___x_3058_; 
v_k_3054_ = lean_ctor_get(v_x_3053_, 1);
lean_inc(v_k_3054_);
v_v_3055_ = lean_ctor_get(v_x_3053_, 2);
lean_inc(v_v_3055_);
v_l_3056_ = lean_ctor_get(v_x_3053_, 3);
lean_inc(v_l_3056_);
v_r_3057_ = lean_ctor_get(v_x_3053_, 4);
lean_inc(v_r_3057_);
lean_dec_ref_known(v_x_3053_, 5);
lean_inc_ref(v_cmp_3051_);
v___x_3058_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00__private_Lean_Data_Json_FromToJson_Extra_0__Lean_TreeMap_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lake_Check_instFromJsonConfig_fromJson_spec__4_spec__7_spec__9_spec__11(v_cmp_3051_, v_init_3052_, v_l_3056_);
if (lean_obj_tag(v___x_3058_) == 0)
{
lean_dec(v_r_3057_);
lean_dec(v_v_3055_);
lean_dec(v_k_3054_);
lean_dec_ref(v_cmp_3051_);
return v___x_3058_;
}
else
{
lean_object* v_a_3059_; lean_object* v___x_3060_; 
v_a_3059_ = lean_ctor_get(v___x_3058_, 0);
lean_inc(v_a_3059_);
lean_dec_ref_known(v___x_3058_, 1);
v___x_3060_ = l_Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lake_Check_instFromJsonConfig_fromJson_spec__1_spec__1(v_v_3055_);
if (lean_obj_tag(v___x_3060_) == 0)
{
lean_object* v_a_3061_; lean_object* v___x_3063_; uint8_t v_isShared_3064_; uint8_t v_isSharedCheck_3068_; 
lean_dec(v_a_3059_);
lean_dec(v_r_3057_);
lean_dec(v_k_3054_);
lean_dec_ref(v_cmp_3051_);
v_a_3061_ = lean_ctor_get(v___x_3060_, 0);
v_isSharedCheck_3068_ = !lean_is_exclusive(v___x_3060_);
if (v_isSharedCheck_3068_ == 0)
{
v___x_3063_ = v___x_3060_;
v_isShared_3064_ = v_isSharedCheck_3068_;
goto v_resetjp_3062_;
}
else
{
lean_inc(v_a_3061_);
lean_dec(v___x_3060_);
v___x_3063_ = lean_box(0);
v_isShared_3064_ = v_isSharedCheck_3068_;
goto v_resetjp_3062_;
}
v_resetjp_3062_:
{
lean_object* v___x_3066_; 
if (v_isShared_3064_ == 0)
{
v___x_3066_ = v___x_3063_;
goto v_reusejp_3065_;
}
else
{
lean_object* v_reuseFailAlloc_3067_; 
v_reuseFailAlloc_3067_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3067_, 0, v_a_3061_);
v___x_3066_ = v_reuseFailAlloc_3067_;
goto v_reusejp_3065_;
}
v_reusejp_3065_:
{
return v___x_3066_;
}
}
}
else
{
lean_object* v_a_3069_; lean_object* v___x_3070_; 
v_a_3069_ = lean_ctor_get(v___x_3060_, 0);
lean_inc(v_a_3069_);
lean_dec_ref_known(v___x_3060_, 1);
lean_inc_ref(v_cmp_3051_);
v___x_3070_ = l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lean_Data_Json_FromToJson_Extra_0__Lean_TreeMap_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lake_Check_instFromJsonConfig_fromJson_spec__4_spec__7_spec__9_spec__10___redArg(v_cmp_3051_, v_k_3054_, v_a_3069_, v_a_3059_);
v_init_3052_ = v___x_3070_;
v_x_3053_ = v_r_3057_;
goto _start;
}
}
}
else
{
lean_object* v___x_3072_; 
lean_dec_ref(v_cmp_3051_);
v___x_3072_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3072_, 0, v_init_3052_);
return v___x_3072_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Json_FromToJson_Extra_0__Lean_TreeMap_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lake_Check_instFromJsonConfig_fromJson_spec__4_spec__7_spec__9(lean_object* v_cmp_3073_, lean_object* v_j_3074_){
_start:
{
lean_object* v___x_3075_; 
v___x_3075_ = l_Lean_Json_getObj_x3f(v_j_3074_);
if (lean_obj_tag(v___x_3075_) == 0)
{
lean_object* v_a_3076_; lean_object* v___x_3078_; uint8_t v_isShared_3079_; uint8_t v_isSharedCheck_3083_; 
lean_dec_ref(v_cmp_3073_);
v_a_3076_ = lean_ctor_get(v___x_3075_, 0);
v_isSharedCheck_3083_ = !lean_is_exclusive(v___x_3075_);
if (v_isSharedCheck_3083_ == 0)
{
v___x_3078_ = v___x_3075_;
v_isShared_3079_ = v_isSharedCheck_3083_;
goto v_resetjp_3077_;
}
else
{
lean_inc(v_a_3076_);
lean_dec(v___x_3075_);
v___x_3078_ = lean_box(0);
v_isShared_3079_ = v_isSharedCheck_3083_;
goto v_resetjp_3077_;
}
v_resetjp_3077_:
{
lean_object* v___x_3081_; 
if (v_isShared_3079_ == 0)
{
v___x_3081_ = v___x_3078_;
goto v_reusejp_3080_;
}
else
{
lean_object* v_reuseFailAlloc_3082_; 
v_reuseFailAlloc_3082_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3082_, 0, v_a_3076_);
v___x_3081_ = v_reuseFailAlloc_3082_;
goto v_reusejp_3080_;
}
v_reusejp_3080_:
{
return v___x_3081_;
}
}
}
else
{
lean_object* v_a_3084_; lean_object* v___x_3085_; lean_object* v___x_3086_; 
v_a_3084_ = lean_ctor_get(v___x_3075_, 0);
lean_inc(v_a_3084_);
lean_dec_ref_known(v___x_3075_, 1);
v___x_3085_ = lean_box(1);
v___x_3086_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00__private_Lean_Data_Json_FromToJson_Extra_0__Lean_TreeMap_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lake_Check_instFromJsonConfig_fromJson_spec__4_spec__7_spec__9_spec__11(v_cmp_3073_, v___x_3085_, v_a_3084_);
return v___x_3086_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lake_Check_instFromJsonConfig_fromJson_spec__4_spec__7(lean_object* v_x_3090_){
_start:
{
if (lean_obj_tag(v_x_3090_) == 0)
{
lean_object* v___x_3091_; 
v___x_3091_ = ((lean_object*)(l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lake_Check_instFromJsonConfig_fromJson_spec__4_spec__7___closed__0));
return v___x_3091_;
}
else
{
lean_object* v___x_3092_; lean_object* v___x_3093_; 
v___x_3092_ = ((lean_object*)(l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lake_Check_instFromJsonConfig_fromJson_spec__4_spec__7___closed__1));
v___x_3093_ = l___private_Lean_Data_Json_FromToJson_Extra_0__Lean_TreeMap_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lake_Check_instFromJsonConfig_fromJson_spec__4_spec__7_spec__9(v___x_3092_, v_x_3090_);
if (lean_obj_tag(v___x_3093_) == 0)
{
lean_object* v_a_3094_; lean_object* v___x_3096_; uint8_t v_isShared_3097_; uint8_t v_isSharedCheck_3101_; 
v_a_3094_ = lean_ctor_get(v___x_3093_, 0);
v_isSharedCheck_3101_ = !lean_is_exclusive(v___x_3093_);
if (v_isSharedCheck_3101_ == 0)
{
v___x_3096_ = v___x_3093_;
v_isShared_3097_ = v_isSharedCheck_3101_;
goto v_resetjp_3095_;
}
else
{
lean_inc(v_a_3094_);
lean_dec(v___x_3093_);
v___x_3096_ = lean_box(0);
v_isShared_3097_ = v_isSharedCheck_3101_;
goto v_resetjp_3095_;
}
v_resetjp_3095_:
{
lean_object* v___x_3099_; 
if (v_isShared_3097_ == 0)
{
v___x_3099_ = v___x_3096_;
goto v_reusejp_3098_;
}
else
{
lean_object* v_reuseFailAlloc_3100_; 
v_reuseFailAlloc_3100_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3100_, 0, v_a_3094_);
v___x_3099_ = v_reuseFailAlloc_3100_;
goto v_reusejp_3098_;
}
v_reusejp_3098_:
{
return v___x_3099_;
}
}
}
else
{
lean_object* v_a_3102_; lean_object* v___x_3104_; uint8_t v_isShared_3105_; uint8_t v_isSharedCheck_3110_; 
v_a_3102_ = lean_ctor_get(v___x_3093_, 0);
v_isSharedCheck_3110_ = !lean_is_exclusive(v___x_3093_);
if (v_isSharedCheck_3110_ == 0)
{
v___x_3104_ = v___x_3093_;
v_isShared_3105_ = v_isSharedCheck_3110_;
goto v_resetjp_3103_;
}
else
{
lean_inc(v_a_3102_);
lean_dec(v___x_3093_);
v___x_3104_ = lean_box(0);
v_isShared_3105_ = v_isSharedCheck_3110_;
goto v_resetjp_3103_;
}
v_resetjp_3103_:
{
lean_object* v___x_3106_; lean_object* v___x_3108_; 
v___x_3106_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3106_, 0, v_a_3102_);
if (v_isShared_3105_ == 0)
{
lean_ctor_set(v___x_3104_, 0, v___x_3106_);
v___x_3108_ = v___x_3104_;
goto v_reusejp_3107_;
}
else
{
lean_object* v_reuseFailAlloc_3109_; 
v_reuseFailAlloc_3109_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3109_, 0, v___x_3106_);
v___x_3108_ = v_reuseFailAlloc_3109_;
goto v_reusejp_3107_;
}
v_reusejp_3107_:
{
return v___x_3108_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lake_Check_instFromJsonConfig_fromJson_spec__4(lean_object* v_j_3111_, lean_object* v_k_3112_){
_start:
{
lean_object* v___x_3113_; lean_object* v___x_3114_; 
v___x_3113_ = l_Lean_Json_getObjValD(v_j_3111_, v_k_3112_);
v___x_3114_ = l_Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lake_Check_instFromJsonConfig_fromJson_spec__4_spec__7(v___x_3113_);
return v___x_3114_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lake_Check_instFromJsonConfig_fromJson_spec__4___boxed(lean_object* v_j_3115_, lean_object* v_k_3116_){
_start:
{
lean_object* v_res_3117_; 
v_res_3117_ = l_Lean_Json_getObjValAs_x3f___at___00Lake_Check_instFromJsonConfig_fromJson_spec__4(v_j_3115_, v_k_3116_);
lean_dec_ref(v_k_3116_);
return v_res_3117_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lake_Check_instFromJsonConfig_fromJson_spec__1(lean_object* v_j_3118_, lean_object* v_k_3119_){
_start:
{
lean_object* v___x_3120_; lean_object* v___x_3121_; 
v___x_3120_ = l_Lean_Json_getObjValD(v_j_3118_, v_k_3119_);
v___x_3121_ = l_Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lake_Check_instFromJsonConfig_fromJson_spec__1_spec__1(v___x_3120_);
return v___x_3121_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lake_Check_instFromJsonConfig_fromJson_spec__1___boxed(lean_object* v_j_3122_, lean_object* v_k_3123_){
_start:
{
lean_object* v_res_3124_; 
v_res_3124_ = l_Lean_Json_getObjValAs_x3f___at___00Lake_Check_instFromJsonConfig_fromJson_spec__1(v_j_3122_, v_k_3123_);
lean_dec_ref(v_k_3123_);
return v_res_3124_;
}
}
static lean_object* _init_l_Lake_Check_instFromJsonConfig_fromJson___closed__5(void){
_start:
{
uint8_t v___x_3133_; lean_object* v___x_3134_; lean_object* v___x_3135_; 
v___x_3133_ = 1;
v___x_3134_ = ((lean_object*)(l_Lake_Check_instFromJsonConfig_fromJson___closed__4));
v___x_3135_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_3134_, v___x_3133_);
return v___x_3135_;
}
}
static lean_object* _init_l_Lake_Check_instFromJsonConfig_fromJson___closed__7(void){
_start:
{
lean_object* v___x_3137_; lean_object* v___x_3138_; lean_object* v___x_3139_; 
v___x_3137_ = ((lean_object*)(l_Lake_Check_instFromJsonConfig_fromJson___closed__6));
v___x_3138_ = lean_obj_once(&l_Lake_Check_instFromJsonConfig_fromJson___closed__5, &l_Lake_Check_instFromJsonConfig_fromJson___closed__5_once, _init_l_Lake_Check_instFromJsonConfig_fromJson___closed__5);
v___x_3139_ = lean_string_append(v___x_3138_, v___x_3137_);
return v___x_3139_;
}
}
static lean_object* _init_l_Lake_Check_instFromJsonConfig_fromJson___closed__9(void){
_start:
{
uint8_t v___x_3142_; lean_object* v___x_3143_; lean_object* v___x_3144_; 
v___x_3142_ = 1;
v___x_3143_ = ((lean_object*)(l_Lake_Check_instFromJsonConfig_fromJson___closed__8));
v___x_3144_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_3143_, v___x_3142_);
return v___x_3144_;
}
}
static lean_object* _init_l_Lake_Check_instFromJsonConfig_fromJson___closed__10(void){
_start:
{
lean_object* v___x_3145_; lean_object* v___x_3146_; lean_object* v___x_3147_; 
v___x_3145_ = lean_obj_once(&l_Lake_Check_instFromJsonConfig_fromJson___closed__9, &l_Lake_Check_instFromJsonConfig_fromJson___closed__9_once, _init_l_Lake_Check_instFromJsonConfig_fromJson___closed__9);
v___x_3146_ = lean_obj_once(&l_Lake_Check_instFromJsonConfig_fromJson___closed__7, &l_Lake_Check_instFromJsonConfig_fromJson___closed__7_once, _init_l_Lake_Check_instFromJsonConfig_fromJson___closed__7);
v___x_3147_ = lean_string_append(v___x_3146_, v___x_3145_);
return v___x_3147_;
}
}
static lean_object* _init_l_Lake_Check_instFromJsonConfig_fromJson___closed__12(void){
_start:
{
lean_object* v___x_3149_; lean_object* v___x_3150_; lean_object* v___x_3151_; 
v___x_3149_ = ((lean_object*)(l_Lake_Check_instFromJsonConfig_fromJson___closed__11));
v___x_3150_ = lean_obj_once(&l_Lake_Check_instFromJsonConfig_fromJson___closed__10, &l_Lake_Check_instFromJsonConfig_fromJson___closed__10_once, _init_l_Lake_Check_instFromJsonConfig_fromJson___closed__10);
v___x_3151_ = lean_string_append(v___x_3150_, v___x_3149_);
return v___x_3151_;
}
}
static lean_object* _init_l_Lake_Check_instFromJsonConfig_fromJson___closed__15(void){
_start:
{
uint8_t v___x_3155_; lean_object* v___x_3156_; lean_object* v___x_3157_; 
v___x_3155_ = 1;
v___x_3156_ = ((lean_object*)(l_Lake_Check_instFromJsonConfig_fromJson___closed__14));
v___x_3157_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_3156_, v___x_3155_);
return v___x_3157_;
}
}
static lean_object* _init_l_Lake_Check_instFromJsonConfig_fromJson___closed__16(void){
_start:
{
lean_object* v___x_3158_; lean_object* v___x_3159_; lean_object* v___x_3160_; 
v___x_3158_ = lean_obj_once(&l_Lake_Check_instFromJsonConfig_fromJson___closed__15, &l_Lake_Check_instFromJsonConfig_fromJson___closed__15_once, _init_l_Lake_Check_instFromJsonConfig_fromJson___closed__15);
v___x_3159_ = lean_obj_once(&l_Lake_Check_instFromJsonConfig_fromJson___closed__7, &l_Lake_Check_instFromJsonConfig_fromJson___closed__7_once, _init_l_Lake_Check_instFromJsonConfig_fromJson___closed__7);
v___x_3160_ = lean_string_append(v___x_3159_, v___x_3158_);
return v___x_3160_;
}
}
static lean_object* _init_l_Lake_Check_instFromJsonConfig_fromJson___closed__17(void){
_start:
{
lean_object* v___x_3161_; lean_object* v___x_3162_; lean_object* v___x_3163_; 
v___x_3161_ = ((lean_object*)(l_Lake_Check_instFromJsonConfig_fromJson___closed__11));
v___x_3162_ = lean_obj_once(&l_Lake_Check_instFromJsonConfig_fromJson___closed__16, &l_Lake_Check_instFromJsonConfig_fromJson___closed__16_once, _init_l_Lake_Check_instFromJsonConfig_fromJson___closed__16);
v___x_3163_ = lean_string_append(v___x_3162_, v___x_3161_);
return v___x_3163_;
}
}
static lean_object* _init_l_Lake_Check_instFromJsonConfig_fromJson___closed__20(void){
_start:
{
uint8_t v___x_3167_; lean_object* v___x_3168_; lean_object* v___x_3169_; 
v___x_3167_ = 1;
v___x_3168_ = ((lean_object*)(l_Lake_Check_instFromJsonConfig_fromJson___closed__19));
v___x_3169_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_3168_, v___x_3167_);
return v___x_3169_;
}
}
static lean_object* _init_l_Lake_Check_instFromJsonConfig_fromJson___closed__21(void){
_start:
{
lean_object* v___x_3170_; lean_object* v___x_3171_; lean_object* v___x_3172_; 
v___x_3170_ = lean_obj_once(&l_Lake_Check_instFromJsonConfig_fromJson___closed__20, &l_Lake_Check_instFromJsonConfig_fromJson___closed__20_once, _init_l_Lake_Check_instFromJsonConfig_fromJson___closed__20);
v___x_3171_ = lean_obj_once(&l_Lake_Check_instFromJsonConfig_fromJson___closed__7, &l_Lake_Check_instFromJsonConfig_fromJson___closed__7_once, _init_l_Lake_Check_instFromJsonConfig_fromJson___closed__7);
v___x_3172_ = lean_string_append(v___x_3171_, v___x_3170_);
return v___x_3172_;
}
}
static lean_object* _init_l_Lake_Check_instFromJsonConfig_fromJson___closed__22(void){
_start:
{
lean_object* v___x_3173_; lean_object* v___x_3174_; lean_object* v___x_3175_; 
v___x_3173_ = ((lean_object*)(l_Lake_Check_instFromJsonConfig_fromJson___closed__11));
v___x_3174_ = lean_obj_once(&l_Lake_Check_instFromJsonConfig_fromJson___closed__21, &l_Lake_Check_instFromJsonConfig_fromJson___closed__21_once, _init_l_Lake_Check_instFromJsonConfig_fromJson___closed__21);
v___x_3175_ = lean_string_append(v___x_3174_, v___x_3173_);
return v___x_3175_;
}
}
static lean_object* _init_l_Lake_Check_instFromJsonConfig_fromJson___closed__25(void){
_start:
{
uint8_t v___x_3179_; lean_object* v___x_3180_; lean_object* v___x_3181_; 
v___x_3179_ = 1;
v___x_3180_ = ((lean_object*)(l_Lake_Check_instFromJsonConfig_fromJson___closed__24));
v___x_3181_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_3180_, v___x_3179_);
return v___x_3181_;
}
}
static lean_object* _init_l_Lake_Check_instFromJsonConfig_fromJson___closed__26(void){
_start:
{
lean_object* v___x_3182_; lean_object* v___x_3183_; lean_object* v___x_3184_; 
v___x_3182_ = lean_obj_once(&l_Lake_Check_instFromJsonConfig_fromJson___closed__25, &l_Lake_Check_instFromJsonConfig_fromJson___closed__25_once, _init_l_Lake_Check_instFromJsonConfig_fromJson___closed__25);
v___x_3183_ = lean_obj_once(&l_Lake_Check_instFromJsonConfig_fromJson___closed__7, &l_Lake_Check_instFromJsonConfig_fromJson___closed__7_once, _init_l_Lake_Check_instFromJsonConfig_fromJson___closed__7);
v___x_3184_ = lean_string_append(v___x_3183_, v___x_3182_);
return v___x_3184_;
}
}
static lean_object* _init_l_Lake_Check_instFromJsonConfig_fromJson___closed__27(void){
_start:
{
lean_object* v___x_3185_; lean_object* v___x_3186_; lean_object* v___x_3187_; 
v___x_3185_ = ((lean_object*)(l_Lake_Check_instFromJsonConfig_fromJson___closed__11));
v___x_3186_ = lean_obj_once(&l_Lake_Check_instFromJsonConfig_fromJson___closed__26, &l_Lake_Check_instFromJsonConfig_fromJson___closed__26_once, _init_l_Lake_Check_instFromJsonConfig_fromJson___closed__26);
v___x_3187_ = lean_string_append(v___x_3186_, v___x_3185_);
return v___x_3187_;
}
}
static lean_object* _init_l_Lake_Check_instFromJsonConfig_fromJson___closed__29(void){
_start:
{
uint8_t v___x_3190_; lean_object* v___x_3191_; lean_object* v___x_3192_; 
v___x_3190_ = 1;
v___x_3191_ = ((lean_object*)(l_Lake_Check_instFromJsonConfig_fromJson___closed__28));
v___x_3192_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_3191_, v___x_3190_);
return v___x_3192_;
}
}
static lean_object* _init_l_Lake_Check_instFromJsonConfig_fromJson___closed__30(void){
_start:
{
lean_object* v___x_3193_; lean_object* v___x_3194_; lean_object* v___x_3195_; 
v___x_3193_ = lean_obj_once(&l_Lake_Check_instFromJsonConfig_fromJson___closed__29, &l_Lake_Check_instFromJsonConfig_fromJson___closed__29_once, _init_l_Lake_Check_instFromJsonConfig_fromJson___closed__29);
v___x_3194_ = lean_obj_once(&l_Lake_Check_instFromJsonConfig_fromJson___closed__7, &l_Lake_Check_instFromJsonConfig_fromJson___closed__7_once, _init_l_Lake_Check_instFromJsonConfig_fromJson___closed__7);
v___x_3195_ = lean_string_append(v___x_3194_, v___x_3193_);
return v___x_3195_;
}
}
static lean_object* _init_l_Lake_Check_instFromJsonConfig_fromJson___closed__31(void){
_start:
{
lean_object* v___x_3196_; lean_object* v___x_3197_; lean_object* v___x_3198_; 
v___x_3196_ = ((lean_object*)(l_Lake_Check_instFromJsonConfig_fromJson___closed__11));
v___x_3197_ = lean_obj_once(&l_Lake_Check_instFromJsonConfig_fromJson___closed__30, &l_Lake_Check_instFromJsonConfig_fromJson___closed__30_once, _init_l_Lake_Check_instFromJsonConfig_fromJson___closed__30);
v___x_3198_ = lean_string_append(v___x_3197_, v___x_3196_);
return v___x_3198_;
}
}
static lean_object* _init_l_Lake_Check_instFromJsonConfig_fromJson___closed__35(void){
_start:
{
uint8_t v___x_3203_; lean_object* v___x_3204_; lean_object* v___x_3205_; 
v___x_3203_ = 1;
v___x_3204_ = ((lean_object*)(l_Lake_Check_instFromJsonConfig_fromJson___closed__34));
v___x_3205_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_3204_, v___x_3203_);
return v___x_3205_;
}
}
static lean_object* _init_l_Lake_Check_instFromJsonConfig_fromJson___closed__36(void){
_start:
{
lean_object* v___x_3206_; lean_object* v___x_3207_; lean_object* v___x_3208_; 
v___x_3206_ = lean_obj_once(&l_Lake_Check_instFromJsonConfig_fromJson___closed__35, &l_Lake_Check_instFromJsonConfig_fromJson___closed__35_once, _init_l_Lake_Check_instFromJsonConfig_fromJson___closed__35);
v___x_3207_ = lean_obj_once(&l_Lake_Check_instFromJsonConfig_fromJson___closed__7, &l_Lake_Check_instFromJsonConfig_fromJson___closed__7_once, _init_l_Lake_Check_instFromJsonConfig_fromJson___closed__7);
v___x_3208_ = lean_string_append(v___x_3207_, v___x_3206_);
return v___x_3208_;
}
}
static lean_object* _init_l_Lake_Check_instFromJsonConfig_fromJson___closed__37(void){
_start:
{
lean_object* v___x_3209_; lean_object* v___x_3210_; lean_object* v___x_3211_; 
v___x_3209_ = ((lean_object*)(l_Lake_Check_instFromJsonConfig_fromJson___closed__11));
v___x_3210_ = lean_obj_once(&l_Lake_Check_instFromJsonConfig_fromJson___closed__36, &l_Lake_Check_instFromJsonConfig_fromJson___closed__36_once, _init_l_Lake_Check_instFromJsonConfig_fromJson___closed__36);
v___x_3211_ = lean_string_append(v___x_3210_, v___x_3209_);
return v___x_3211_;
}
}
static lean_object* _init_l_Lake_Check_instFromJsonConfig_fromJson___closed__41(void){
_start:
{
uint8_t v___x_3216_; lean_object* v___x_3217_; lean_object* v___x_3218_; 
v___x_3216_ = 1;
v___x_3217_ = ((lean_object*)(l_Lake_Check_instFromJsonConfig_fromJson___closed__40));
v___x_3218_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_3217_, v___x_3216_);
return v___x_3218_;
}
}
static lean_object* _init_l_Lake_Check_instFromJsonConfig_fromJson___closed__42(void){
_start:
{
lean_object* v___x_3219_; lean_object* v___x_3220_; lean_object* v___x_3221_; 
v___x_3219_ = lean_obj_once(&l_Lake_Check_instFromJsonConfig_fromJson___closed__41, &l_Lake_Check_instFromJsonConfig_fromJson___closed__41_once, _init_l_Lake_Check_instFromJsonConfig_fromJson___closed__41);
v___x_3220_ = lean_obj_once(&l_Lake_Check_instFromJsonConfig_fromJson___closed__7, &l_Lake_Check_instFromJsonConfig_fromJson___closed__7_once, _init_l_Lake_Check_instFromJsonConfig_fromJson___closed__7);
v___x_3221_ = lean_string_append(v___x_3220_, v___x_3219_);
return v___x_3221_;
}
}
static lean_object* _init_l_Lake_Check_instFromJsonConfig_fromJson___closed__43(void){
_start:
{
lean_object* v___x_3222_; lean_object* v___x_3223_; lean_object* v___x_3224_; 
v___x_3222_ = ((lean_object*)(l_Lake_Check_instFromJsonConfig_fromJson___closed__11));
v___x_3223_ = lean_obj_once(&l_Lake_Check_instFromJsonConfig_fromJson___closed__42, &l_Lake_Check_instFromJsonConfig_fromJson___closed__42_once, _init_l_Lake_Check_instFromJsonConfig_fromJson___closed__42);
v___x_3224_ = lean_string_append(v___x_3223_, v___x_3222_);
return v___x_3224_;
}
}
LEAN_EXPORT lean_object* l_Lake_Check_instFromJsonConfig_fromJson(lean_object* v_json_3225_){
_start:
{
lean_object* v___x_3226_; lean_object* v___x_3227_; 
v___x_3226_ = ((lean_object*)(l_Lake_Check_instFromJsonConfig_fromJson___closed__0));
lean_inc(v_json_3225_);
v___x_3227_ = l_Lean_Json_getObjValAs_x3f___at___00Lake_Check_instFromJsonConfig_fromJson_spec__0(v_json_3225_, v___x_3226_);
if (lean_obj_tag(v___x_3227_) == 0)
{
lean_object* v_a_3228_; lean_object* v___x_3230_; uint8_t v_isShared_3231_; uint8_t v_isSharedCheck_3237_; 
lean_dec(v_json_3225_);
v_a_3228_ = lean_ctor_get(v___x_3227_, 0);
v_isSharedCheck_3237_ = !lean_is_exclusive(v___x_3227_);
if (v_isSharedCheck_3237_ == 0)
{
v___x_3230_ = v___x_3227_;
v_isShared_3231_ = v_isSharedCheck_3237_;
goto v_resetjp_3229_;
}
else
{
lean_inc(v_a_3228_);
lean_dec(v___x_3227_);
v___x_3230_ = lean_box(0);
v_isShared_3231_ = v_isSharedCheck_3237_;
goto v_resetjp_3229_;
}
v_resetjp_3229_:
{
lean_object* v___x_3232_; lean_object* v___x_3233_; lean_object* v___x_3235_; 
v___x_3232_ = lean_obj_once(&l_Lake_Check_instFromJsonConfig_fromJson___closed__12, &l_Lake_Check_instFromJsonConfig_fromJson___closed__12_once, _init_l_Lake_Check_instFromJsonConfig_fromJson___closed__12);
v___x_3233_ = lean_string_append(v___x_3232_, v_a_3228_);
lean_dec(v_a_3228_);
if (v_isShared_3231_ == 0)
{
lean_ctor_set(v___x_3230_, 0, v___x_3233_);
v___x_3235_ = v___x_3230_;
goto v_reusejp_3234_;
}
else
{
lean_object* v_reuseFailAlloc_3236_; 
v_reuseFailAlloc_3236_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3236_, 0, v___x_3233_);
v___x_3235_ = v_reuseFailAlloc_3236_;
goto v_reusejp_3234_;
}
v_reusejp_3234_:
{
return v___x_3235_;
}
}
}
else
{
if (lean_obj_tag(v___x_3227_) == 0)
{
lean_object* v_a_3238_; lean_object* v___x_3240_; uint8_t v_isShared_3241_; uint8_t v_isSharedCheck_3245_; 
lean_dec(v_json_3225_);
v_a_3238_ = lean_ctor_get(v___x_3227_, 0);
v_isSharedCheck_3245_ = !lean_is_exclusive(v___x_3227_);
if (v_isSharedCheck_3245_ == 0)
{
v___x_3240_ = v___x_3227_;
v_isShared_3241_ = v_isSharedCheck_3245_;
goto v_resetjp_3239_;
}
else
{
lean_inc(v_a_3238_);
lean_dec(v___x_3227_);
v___x_3240_ = lean_box(0);
v_isShared_3241_ = v_isSharedCheck_3245_;
goto v_resetjp_3239_;
}
v_resetjp_3239_:
{
lean_object* v___x_3243_; 
if (v_isShared_3241_ == 0)
{
lean_ctor_set_tag(v___x_3240_, 0);
v___x_3243_ = v___x_3240_;
goto v_reusejp_3242_;
}
else
{
lean_object* v_reuseFailAlloc_3244_; 
v_reuseFailAlloc_3244_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3244_, 0, v_a_3238_);
v___x_3243_ = v_reuseFailAlloc_3244_;
goto v_reusejp_3242_;
}
v_reusejp_3242_:
{
return v___x_3243_;
}
}
}
else
{
lean_object* v_a_3246_; lean_object* v___x_3247_; lean_object* v___x_3248_; 
v_a_3246_ = lean_ctor_get(v___x_3227_, 0);
lean_inc(v_a_3246_);
lean_dec_ref_known(v___x_3227_, 1);
v___x_3247_ = ((lean_object*)(l_Lake_Check_instFromJsonConfig_fromJson___closed__13));
lean_inc(v_json_3225_);
v___x_3248_ = l_Lean_Json_getObjValAs_x3f___at___00Lake_Check_instFromJsonConfig_fromJson_spec__0(v_json_3225_, v___x_3247_);
if (lean_obj_tag(v___x_3248_) == 0)
{
lean_object* v_a_3249_; lean_object* v___x_3251_; uint8_t v_isShared_3252_; uint8_t v_isSharedCheck_3258_; 
lean_dec(v_a_3246_);
lean_dec(v_json_3225_);
v_a_3249_ = lean_ctor_get(v___x_3248_, 0);
v_isSharedCheck_3258_ = !lean_is_exclusive(v___x_3248_);
if (v_isSharedCheck_3258_ == 0)
{
v___x_3251_ = v___x_3248_;
v_isShared_3252_ = v_isSharedCheck_3258_;
goto v_resetjp_3250_;
}
else
{
lean_inc(v_a_3249_);
lean_dec(v___x_3248_);
v___x_3251_ = lean_box(0);
v_isShared_3252_ = v_isSharedCheck_3258_;
goto v_resetjp_3250_;
}
v_resetjp_3250_:
{
lean_object* v___x_3253_; lean_object* v___x_3254_; lean_object* v___x_3256_; 
v___x_3253_ = lean_obj_once(&l_Lake_Check_instFromJsonConfig_fromJson___closed__17, &l_Lake_Check_instFromJsonConfig_fromJson___closed__17_once, _init_l_Lake_Check_instFromJsonConfig_fromJson___closed__17);
v___x_3254_ = lean_string_append(v___x_3253_, v_a_3249_);
lean_dec(v_a_3249_);
if (v_isShared_3252_ == 0)
{
lean_ctor_set(v___x_3251_, 0, v___x_3254_);
v___x_3256_ = v___x_3251_;
goto v_reusejp_3255_;
}
else
{
lean_object* v_reuseFailAlloc_3257_; 
v_reuseFailAlloc_3257_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3257_, 0, v___x_3254_);
v___x_3256_ = v_reuseFailAlloc_3257_;
goto v_reusejp_3255_;
}
v_reusejp_3255_:
{
return v___x_3256_;
}
}
}
else
{
if (lean_obj_tag(v___x_3248_) == 0)
{
lean_object* v_a_3259_; lean_object* v___x_3261_; uint8_t v_isShared_3262_; uint8_t v_isSharedCheck_3266_; 
lean_dec(v_a_3246_);
lean_dec(v_json_3225_);
v_a_3259_ = lean_ctor_get(v___x_3248_, 0);
v_isSharedCheck_3266_ = !lean_is_exclusive(v___x_3248_);
if (v_isSharedCheck_3266_ == 0)
{
v___x_3261_ = v___x_3248_;
v_isShared_3262_ = v_isSharedCheck_3266_;
goto v_resetjp_3260_;
}
else
{
lean_inc(v_a_3259_);
lean_dec(v___x_3248_);
v___x_3261_ = lean_box(0);
v_isShared_3262_ = v_isSharedCheck_3266_;
goto v_resetjp_3260_;
}
v_resetjp_3260_:
{
lean_object* v___x_3264_; 
if (v_isShared_3262_ == 0)
{
lean_ctor_set_tag(v___x_3261_, 0);
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
lean_object* v_a_3267_; lean_object* v___x_3268_; lean_object* v___x_3269_; 
v_a_3267_ = lean_ctor_get(v___x_3248_, 0);
lean_inc(v_a_3267_);
lean_dec_ref_known(v___x_3248_, 1);
v___x_3268_ = ((lean_object*)(l_Lake_Check_instFromJsonConfig_fromJson___closed__18));
lean_inc(v_json_3225_);
v___x_3269_ = l_Lean_Json_getObjValAs_x3f___at___00Lake_Check_instFromJsonConfig_fromJson_spec__1(v_json_3225_, v___x_3268_);
if (lean_obj_tag(v___x_3269_) == 0)
{
lean_object* v_a_3270_; lean_object* v___x_3272_; uint8_t v_isShared_3273_; uint8_t v_isSharedCheck_3279_; 
lean_dec(v_a_3267_);
lean_dec(v_a_3246_);
lean_dec(v_json_3225_);
v_a_3270_ = lean_ctor_get(v___x_3269_, 0);
v_isSharedCheck_3279_ = !lean_is_exclusive(v___x_3269_);
if (v_isSharedCheck_3279_ == 0)
{
v___x_3272_ = v___x_3269_;
v_isShared_3273_ = v_isSharedCheck_3279_;
goto v_resetjp_3271_;
}
else
{
lean_inc(v_a_3270_);
lean_dec(v___x_3269_);
v___x_3272_ = lean_box(0);
v_isShared_3273_ = v_isSharedCheck_3279_;
goto v_resetjp_3271_;
}
v_resetjp_3271_:
{
lean_object* v___x_3274_; lean_object* v___x_3275_; lean_object* v___x_3277_; 
v___x_3274_ = lean_obj_once(&l_Lake_Check_instFromJsonConfig_fromJson___closed__22, &l_Lake_Check_instFromJsonConfig_fromJson___closed__22_once, _init_l_Lake_Check_instFromJsonConfig_fromJson___closed__22);
v___x_3275_ = lean_string_append(v___x_3274_, v_a_3270_);
lean_dec(v_a_3270_);
if (v_isShared_3273_ == 0)
{
lean_ctor_set(v___x_3272_, 0, v___x_3275_);
v___x_3277_ = v___x_3272_;
goto v_reusejp_3276_;
}
else
{
lean_object* v_reuseFailAlloc_3278_; 
v_reuseFailAlloc_3278_ = lean_alloc_ctor(0, 1, 0);
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
else
{
if (lean_obj_tag(v___x_3269_) == 0)
{
lean_object* v_a_3280_; lean_object* v___x_3282_; uint8_t v_isShared_3283_; uint8_t v_isSharedCheck_3287_; 
lean_dec(v_a_3267_);
lean_dec(v_a_3246_);
lean_dec(v_json_3225_);
v_a_3280_ = lean_ctor_get(v___x_3269_, 0);
v_isSharedCheck_3287_ = !lean_is_exclusive(v___x_3269_);
if (v_isSharedCheck_3287_ == 0)
{
v___x_3282_ = v___x_3269_;
v_isShared_3283_ = v_isSharedCheck_3287_;
goto v_resetjp_3281_;
}
else
{
lean_inc(v_a_3280_);
lean_dec(v___x_3269_);
v___x_3282_ = lean_box(0);
v_isShared_3283_ = v_isSharedCheck_3287_;
goto v_resetjp_3281_;
}
v_resetjp_3281_:
{
lean_object* v___x_3285_; 
if (v_isShared_3283_ == 0)
{
lean_ctor_set_tag(v___x_3282_, 0);
v___x_3285_ = v___x_3282_;
goto v_reusejp_3284_;
}
else
{
lean_object* v_reuseFailAlloc_3286_; 
v_reuseFailAlloc_3286_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3286_, 0, v_a_3280_);
v___x_3285_ = v_reuseFailAlloc_3286_;
goto v_reusejp_3284_;
}
v_reusejp_3284_:
{
return v___x_3285_;
}
}
}
else
{
lean_object* v_a_3288_; lean_object* v___x_3289_; lean_object* v___x_3290_; 
v_a_3288_ = lean_ctor_get(v___x_3269_, 0);
lean_inc(v_a_3288_);
lean_dec_ref_known(v___x_3269_, 1);
v___x_3289_ = ((lean_object*)(l_Lake_Check_instFromJsonConfig_fromJson___closed__23));
lean_inc(v_json_3225_);
v___x_3290_ = l_Lean_Json_getObjValAs_x3f___at___00Lake_Check_instFromJsonConfig_fromJson_spec__2(v_json_3225_, v___x_3289_);
if (lean_obj_tag(v___x_3290_) == 0)
{
lean_object* v_a_3291_; lean_object* v___x_3293_; uint8_t v_isShared_3294_; uint8_t v_isSharedCheck_3300_; 
lean_dec(v_a_3288_);
lean_dec(v_a_3267_);
lean_dec(v_a_3246_);
lean_dec(v_json_3225_);
v_a_3291_ = lean_ctor_get(v___x_3290_, 0);
v_isSharedCheck_3300_ = !lean_is_exclusive(v___x_3290_);
if (v_isSharedCheck_3300_ == 0)
{
v___x_3293_ = v___x_3290_;
v_isShared_3294_ = v_isSharedCheck_3300_;
goto v_resetjp_3292_;
}
else
{
lean_inc(v_a_3291_);
lean_dec(v___x_3290_);
v___x_3293_ = lean_box(0);
v_isShared_3294_ = v_isSharedCheck_3300_;
goto v_resetjp_3292_;
}
v_resetjp_3292_:
{
lean_object* v___x_3295_; lean_object* v___x_3296_; lean_object* v___x_3298_; 
v___x_3295_ = lean_obj_once(&l_Lake_Check_instFromJsonConfig_fromJson___closed__27, &l_Lake_Check_instFromJsonConfig_fromJson___closed__27_once, _init_l_Lake_Check_instFromJsonConfig_fromJson___closed__27);
v___x_3296_ = lean_string_append(v___x_3295_, v_a_3291_);
lean_dec(v_a_3291_);
if (v_isShared_3294_ == 0)
{
lean_ctor_set(v___x_3293_, 0, v___x_3296_);
v___x_3298_ = v___x_3293_;
goto v_reusejp_3297_;
}
else
{
lean_object* v_reuseFailAlloc_3299_; 
v_reuseFailAlloc_3299_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3299_, 0, v___x_3296_);
v___x_3298_ = v_reuseFailAlloc_3299_;
goto v_reusejp_3297_;
}
v_reusejp_3297_:
{
return v___x_3298_;
}
}
}
else
{
if (lean_obj_tag(v___x_3290_) == 0)
{
lean_object* v_a_3301_; lean_object* v___x_3303_; uint8_t v_isShared_3304_; uint8_t v_isSharedCheck_3308_; 
lean_dec(v_a_3288_);
lean_dec(v_a_3267_);
lean_dec(v_a_3246_);
lean_dec(v_json_3225_);
v_a_3301_ = lean_ctor_get(v___x_3290_, 0);
v_isSharedCheck_3308_ = !lean_is_exclusive(v___x_3290_);
if (v_isSharedCheck_3308_ == 0)
{
v___x_3303_ = v___x_3290_;
v_isShared_3304_ = v_isSharedCheck_3308_;
goto v_resetjp_3302_;
}
else
{
lean_inc(v_a_3301_);
lean_dec(v___x_3290_);
v___x_3303_ = lean_box(0);
v_isShared_3304_ = v_isSharedCheck_3308_;
goto v_resetjp_3302_;
}
v_resetjp_3302_:
{
lean_object* v___x_3306_; 
if (v_isShared_3304_ == 0)
{
lean_ctor_set_tag(v___x_3303_, 0);
v___x_3306_ = v___x_3303_;
goto v_reusejp_3305_;
}
else
{
lean_object* v_reuseFailAlloc_3307_; 
v_reuseFailAlloc_3307_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3307_, 0, v_a_3301_);
v___x_3306_ = v_reuseFailAlloc_3307_;
goto v_reusejp_3305_;
}
v_reusejp_3305_:
{
return v___x_3306_;
}
}
}
else
{
lean_object* v_a_3309_; lean_object* v___x_3310_; lean_object* v___x_3311_; 
v_a_3309_ = lean_ctor_get(v___x_3290_, 0);
lean_inc(v_a_3309_);
lean_dec_ref_known(v___x_3290_, 1);
v___x_3310_ = ((lean_object*)(l___private_Lake_CLI_Check_0__Lake_Check_runExternalKernel___lam__0___closed__12));
lean_inc(v_json_3225_);
v___x_3311_ = l_Lean_Json_getObjValAs_x3f___at___00Lake_Check_instFromJsonConfig_fromJson_spec__1(v_json_3225_, v___x_3310_);
if (lean_obj_tag(v___x_3311_) == 0)
{
lean_object* v_a_3312_; lean_object* v___x_3314_; uint8_t v_isShared_3315_; uint8_t v_isSharedCheck_3321_; 
lean_dec(v_a_3309_);
lean_dec(v_a_3288_);
lean_dec(v_a_3267_);
lean_dec(v_a_3246_);
lean_dec(v_json_3225_);
v_a_3312_ = lean_ctor_get(v___x_3311_, 0);
v_isSharedCheck_3321_ = !lean_is_exclusive(v___x_3311_);
if (v_isSharedCheck_3321_ == 0)
{
v___x_3314_ = v___x_3311_;
v_isShared_3315_ = v_isSharedCheck_3321_;
goto v_resetjp_3313_;
}
else
{
lean_inc(v_a_3312_);
lean_dec(v___x_3311_);
v___x_3314_ = lean_box(0);
v_isShared_3315_ = v_isSharedCheck_3321_;
goto v_resetjp_3313_;
}
v_resetjp_3313_:
{
lean_object* v___x_3316_; lean_object* v___x_3317_; lean_object* v___x_3319_; 
v___x_3316_ = lean_obj_once(&l_Lake_Check_instFromJsonConfig_fromJson___closed__31, &l_Lake_Check_instFromJsonConfig_fromJson___closed__31_once, _init_l_Lake_Check_instFromJsonConfig_fromJson___closed__31);
v___x_3317_ = lean_string_append(v___x_3316_, v_a_3312_);
lean_dec(v_a_3312_);
if (v_isShared_3315_ == 0)
{
lean_ctor_set(v___x_3314_, 0, v___x_3317_);
v___x_3319_ = v___x_3314_;
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
if (lean_obj_tag(v___x_3311_) == 0)
{
lean_object* v_a_3322_; lean_object* v___x_3324_; uint8_t v_isShared_3325_; uint8_t v_isSharedCheck_3329_; 
lean_dec(v_a_3309_);
lean_dec(v_a_3288_);
lean_dec(v_a_3267_);
lean_dec(v_a_3246_);
lean_dec(v_json_3225_);
v_a_3322_ = lean_ctor_get(v___x_3311_, 0);
v_isSharedCheck_3329_ = !lean_is_exclusive(v___x_3311_);
if (v_isSharedCheck_3329_ == 0)
{
v___x_3324_ = v___x_3311_;
v_isShared_3325_ = v_isSharedCheck_3329_;
goto v_resetjp_3323_;
}
else
{
lean_inc(v_a_3322_);
lean_dec(v___x_3311_);
v___x_3324_ = lean_box(0);
v_isShared_3325_ = v_isSharedCheck_3329_;
goto v_resetjp_3323_;
}
v_resetjp_3323_:
{
lean_object* v___x_3327_; 
if (v_isShared_3325_ == 0)
{
lean_ctor_set_tag(v___x_3324_, 0);
v___x_3327_ = v___x_3324_;
goto v_reusejp_3326_;
}
else
{
lean_object* v_reuseFailAlloc_3328_; 
v_reuseFailAlloc_3328_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3328_, 0, v_a_3322_);
v___x_3327_ = v_reuseFailAlloc_3328_;
goto v_reusejp_3326_;
}
v_reusejp_3326_:
{
return v___x_3327_;
}
}
}
else
{
lean_object* v_a_3330_; lean_object* v___x_3331_; lean_object* v___x_3332_; 
v_a_3330_ = lean_ctor_get(v___x_3311_, 0);
lean_inc(v_a_3330_);
lean_dec_ref_known(v___x_3311_, 1);
v___x_3331_ = ((lean_object*)(l_Lake_Check_instFromJsonConfig_fromJson___closed__32));
lean_inc(v_json_3225_);
v___x_3332_ = l_Lean_Json_getObjValAs_x3f___at___00Lake_Check_instFromJsonConfig_fromJson_spec__3(v_json_3225_, v___x_3331_);
if (lean_obj_tag(v___x_3332_) == 0)
{
lean_object* v_a_3333_; lean_object* v___x_3335_; uint8_t v_isShared_3336_; uint8_t v_isSharedCheck_3342_; 
lean_dec(v_a_3330_);
lean_dec(v_a_3309_);
lean_dec(v_a_3288_);
lean_dec(v_a_3267_);
lean_dec(v_a_3246_);
lean_dec(v_json_3225_);
v_a_3333_ = lean_ctor_get(v___x_3332_, 0);
v_isSharedCheck_3342_ = !lean_is_exclusive(v___x_3332_);
if (v_isSharedCheck_3342_ == 0)
{
v___x_3335_ = v___x_3332_;
v_isShared_3336_ = v_isSharedCheck_3342_;
goto v_resetjp_3334_;
}
else
{
lean_inc(v_a_3333_);
lean_dec(v___x_3332_);
v___x_3335_ = lean_box(0);
v_isShared_3336_ = v_isSharedCheck_3342_;
goto v_resetjp_3334_;
}
v_resetjp_3334_:
{
lean_object* v___x_3337_; lean_object* v___x_3338_; lean_object* v___x_3340_; 
v___x_3337_ = lean_obj_once(&l_Lake_Check_instFromJsonConfig_fromJson___closed__37, &l_Lake_Check_instFromJsonConfig_fromJson___closed__37_once, _init_l_Lake_Check_instFromJsonConfig_fromJson___closed__37);
v___x_3338_ = lean_string_append(v___x_3337_, v_a_3333_);
lean_dec(v_a_3333_);
if (v_isShared_3336_ == 0)
{
lean_ctor_set(v___x_3335_, 0, v___x_3338_);
v___x_3340_ = v___x_3335_;
goto v_reusejp_3339_;
}
else
{
lean_object* v_reuseFailAlloc_3341_; 
v_reuseFailAlloc_3341_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3341_, 0, v___x_3338_);
v___x_3340_ = v_reuseFailAlloc_3341_;
goto v_reusejp_3339_;
}
v_reusejp_3339_:
{
return v___x_3340_;
}
}
}
else
{
if (lean_obj_tag(v___x_3332_) == 0)
{
lean_object* v_a_3343_; lean_object* v___x_3345_; uint8_t v_isShared_3346_; uint8_t v_isSharedCheck_3350_; 
lean_dec(v_a_3330_);
lean_dec(v_a_3309_);
lean_dec(v_a_3288_);
lean_dec(v_a_3267_);
lean_dec(v_a_3246_);
lean_dec(v_json_3225_);
v_a_3343_ = lean_ctor_get(v___x_3332_, 0);
v_isSharedCheck_3350_ = !lean_is_exclusive(v___x_3332_);
if (v_isSharedCheck_3350_ == 0)
{
v___x_3345_ = v___x_3332_;
v_isShared_3346_ = v_isSharedCheck_3350_;
goto v_resetjp_3344_;
}
else
{
lean_inc(v_a_3343_);
lean_dec(v___x_3332_);
v___x_3345_ = lean_box(0);
v_isShared_3346_ = v_isSharedCheck_3350_;
goto v_resetjp_3344_;
}
v_resetjp_3344_:
{
lean_object* v___x_3348_; 
if (v_isShared_3346_ == 0)
{
lean_ctor_set_tag(v___x_3345_, 0);
v___x_3348_ = v___x_3345_;
goto v_reusejp_3347_;
}
else
{
lean_object* v_reuseFailAlloc_3349_; 
v_reuseFailAlloc_3349_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3349_, 0, v_a_3343_);
v___x_3348_ = v_reuseFailAlloc_3349_;
goto v_reusejp_3347_;
}
v_reusejp_3347_:
{
return v___x_3348_;
}
}
}
else
{
lean_object* v_a_3351_; lean_object* v___x_3352_; lean_object* v___x_3353_; 
v_a_3351_ = lean_ctor_get(v___x_3332_, 0);
lean_inc(v_a_3351_);
lean_dec_ref_known(v___x_3332_, 1);
v___x_3352_ = ((lean_object*)(l_Lake_Check_instFromJsonConfig_fromJson___closed__38));
v___x_3353_ = l_Lean_Json_getObjValAs_x3f___at___00Lake_Check_instFromJsonConfig_fromJson_spec__4(v_json_3225_, v___x_3352_);
if (lean_obj_tag(v___x_3353_) == 0)
{
lean_object* v_a_3354_; lean_object* v___x_3356_; uint8_t v_isShared_3357_; uint8_t v_isSharedCheck_3363_; 
lean_dec(v_a_3351_);
lean_dec(v_a_3330_);
lean_dec(v_a_3309_);
lean_dec(v_a_3288_);
lean_dec(v_a_3267_);
lean_dec(v_a_3246_);
v_a_3354_ = lean_ctor_get(v___x_3353_, 0);
v_isSharedCheck_3363_ = !lean_is_exclusive(v___x_3353_);
if (v_isSharedCheck_3363_ == 0)
{
v___x_3356_ = v___x_3353_;
v_isShared_3357_ = v_isSharedCheck_3363_;
goto v_resetjp_3355_;
}
else
{
lean_inc(v_a_3354_);
lean_dec(v___x_3353_);
v___x_3356_ = lean_box(0);
v_isShared_3357_ = v_isSharedCheck_3363_;
goto v_resetjp_3355_;
}
v_resetjp_3355_:
{
lean_object* v___x_3358_; lean_object* v___x_3359_; lean_object* v___x_3361_; 
v___x_3358_ = lean_obj_once(&l_Lake_Check_instFromJsonConfig_fromJson___closed__43, &l_Lake_Check_instFromJsonConfig_fromJson___closed__43_once, _init_l_Lake_Check_instFromJsonConfig_fromJson___closed__43);
v___x_3359_ = lean_string_append(v___x_3358_, v_a_3354_);
lean_dec(v_a_3354_);
if (v_isShared_3357_ == 0)
{
lean_ctor_set(v___x_3356_, 0, v___x_3359_);
v___x_3361_ = v___x_3356_;
goto v_reusejp_3360_;
}
else
{
lean_object* v_reuseFailAlloc_3362_; 
v_reuseFailAlloc_3362_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3362_, 0, v___x_3359_);
v___x_3361_ = v_reuseFailAlloc_3362_;
goto v_reusejp_3360_;
}
v_reusejp_3360_:
{
return v___x_3361_;
}
}
}
else
{
if (lean_obj_tag(v___x_3353_) == 0)
{
lean_object* v_a_3364_; lean_object* v___x_3366_; uint8_t v_isShared_3367_; uint8_t v_isSharedCheck_3371_; 
lean_dec(v_a_3351_);
lean_dec(v_a_3330_);
lean_dec(v_a_3309_);
lean_dec(v_a_3288_);
lean_dec(v_a_3267_);
lean_dec(v_a_3246_);
v_a_3364_ = lean_ctor_get(v___x_3353_, 0);
v_isSharedCheck_3371_ = !lean_is_exclusive(v___x_3353_);
if (v_isSharedCheck_3371_ == 0)
{
v___x_3366_ = v___x_3353_;
v_isShared_3367_ = v_isSharedCheck_3371_;
goto v_resetjp_3365_;
}
else
{
lean_inc(v_a_3364_);
lean_dec(v___x_3353_);
v___x_3366_ = lean_box(0);
v_isShared_3367_ = v_isSharedCheck_3371_;
goto v_resetjp_3365_;
}
v_resetjp_3365_:
{
lean_object* v___x_3369_; 
if (v_isShared_3367_ == 0)
{
lean_ctor_set_tag(v___x_3366_, 0);
v___x_3369_ = v___x_3366_;
goto v_reusejp_3368_;
}
else
{
lean_object* v_reuseFailAlloc_3370_; 
v_reuseFailAlloc_3370_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3370_, 0, v_a_3364_);
v___x_3369_ = v_reuseFailAlloc_3370_;
goto v_reusejp_3368_;
}
v_reusejp_3368_:
{
return v___x_3369_;
}
}
}
else
{
lean_object* v_a_3372_; lean_object* v___x_3374_; uint8_t v_isShared_3375_; uint8_t v_isSharedCheck_3380_; 
v_a_3372_ = lean_ctor_get(v___x_3353_, 0);
v_isSharedCheck_3380_ = !lean_is_exclusive(v___x_3353_);
if (v_isSharedCheck_3380_ == 0)
{
v___x_3374_ = v___x_3353_;
v_isShared_3375_ = v_isSharedCheck_3380_;
goto v_resetjp_3373_;
}
else
{
lean_inc(v_a_3372_);
lean_dec(v___x_3353_);
v___x_3374_ = lean_box(0);
v_isShared_3375_ = v_isSharedCheck_3380_;
goto v_resetjp_3373_;
}
v_resetjp_3373_:
{
lean_object* v___x_3376_; lean_object* v___x_3378_; 
v___x_3376_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v___x_3376_, 0, v_a_3246_);
lean_ctor_set(v___x_3376_, 1, v_a_3267_);
lean_ctor_set(v___x_3376_, 2, v_a_3288_);
lean_ctor_set(v___x_3376_, 3, v_a_3309_);
lean_ctor_set(v___x_3376_, 4, v_a_3330_);
lean_ctor_set(v___x_3376_, 5, v_a_3351_);
lean_ctor_set(v___x_3376_, 6, v_a_3372_);
if (v_isShared_3375_ == 0)
{
lean_ctor_set(v___x_3374_, 0, v___x_3376_);
v___x_3378_ = v___x_3374_;
goto v_reusejp_3377_;
}
else
{
lean_object* v_reuseFailAlloc_3379_; 
v_reuseFailAlloc_3379_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3379_, 0, v___x_3376_);
v___x_3378_ = v_reuseFailAlloc_3379_;
goto v_reusejp_3377_;
}
v_reusejp_3377_:
{
return v___x_3378_;
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lean_Data_Json_FromToJson_Extra_0__Lean_TreeMap_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lake_Check_instFromJsonConfig_fromJson_spec__4_spec__7_spec__9_spec__10(lean_object* v_cmp_3381_, lean_object* v_00_u03b2_3382_, lean_object* v_k_3383_, lean_object* v_v_3384_, lean_object* v_t_3385_, lean_object* v_hl_3386_){
_start:
{
lean_object* v___x_3387_; 
v___x_3387_ = l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lean_Data_Json_FromToJson_Extra_0__Lean_TreeMap_fromJson_x3f___at___00Lean_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lake_Check_instFromJsonConfig_fromJson_spec__4_spec__7_spec__9_spec__10___redArg(v_cmp_3381_, v_k_3383_, v_v_3384_, v_t_3385_);
return v___x_3387_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_opt___at___00Lake_Check_instToJsonConfig_toJson_spec__2(lean_object* v_k_3390_, lean_object* v_x_3391_){
_start:
{
if (lean_obj_tag(v_x_3391_) == 0)
{
lean_object* v___x_3392_; 
lean_dec_ref(v_k_3390_);
v___x_3392_ = lean_box(0);
return v___x_3392_;
}
else
{
lean_object* v_val_3393_; lean_object* v___x_3394_; uint8_t v___x_3395_; lean_object* v___x_3396_; lean_object* v___x_3397_; lean_object* v___x_3398_; 
v_val_3393_ = lean_ctor_get(v_x_3391_, 0);
v___x_3394_ = lean_alloc_ctor(1, 0, 1);
v___x_3395_ = lean_unbox(v_val_3393_);
lean_ctor_set_uint8(v___x_3394_, 0, v___x_3395_);
v___x_3396_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3396_, 0, v_k_3390_);
lean_ctor_set(v___x_3396_, 1, v___x_3394_);
v___x_3397_ = lean_box(0);
v___x_3398_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3398_, 0, v___x_3396_);
lean_ctor_set(v___x_3398_, 1, v___x_3397_);
return v___x_3398_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_opt___at___00Lake_Check_instToJsonConfig_toJson_spec__2___boxed(lean_object* v_k_3399_, lean_object* v_x_3400_){
_start:
{
lean_object* v_res_3401_; 
v_res_3401_ = l_Lean_Json_opt___at___00Lake_Check_instToJsonConfig_toJson_spec__2(v_k_3399_, v_x_3400_);
lean_dec(v_x_3400_);
return v_res_3401_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lake_Check_instToJsonConfig_toJson_spec__0_spec__0(size_t v_sz_3402_, size_t v_i_3403_, lean_object* v_bs_3404_){
_start:
{
uint8_t v___x_3405_; 
v___x_3405_ = lean_usize_dec_lt(v_i_3403_, v_sz_3402_);
if (v___x_3405_ == 0)
{
lean_object* v___x_3406_; 
v___x_3406_ = l_unsafeCast___redArg(v_bs_3404_);
lean_dec_ref(v_bs_3404_);
return v___x_3406_;
}
else
{
lean_object* v_v_3407_; lean_object* v___x_3408_; lean_object* v_bs_x27_3409_; lean_object* v___x_3410_; lean_object* v___x_3411_; size_t v___x_3412_; size_t v___x_3413_; lean_object* v___x_3414_; lean_object* v___x_3415_; 
v_v_3407_ = lean_array_uget(v_bs_3404_, v_i_3403_);
v___x_3408_ = lean_unsigned_to_nat(0u);
v_bs_x27_3409_ = lean_array_uset(v_bs_3404_, v_i_3403_, v___x_3408_);
v___x_3410_ = l_unsafeCast___redArg(v_v_3407_);
lean_dec(v_v_3407_);
v___x_3411_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3411_, 0, v___x_3410_);
v___x_3412_ = ((size_t)1ULL);
v___x_3413_ = lean_usize_add(v_i_3403_, v___x_3412_);
v___x_3414_ = l_unsafeCast___redArg(v___x_3411_);
lean_dec_ref_known(v___x_3411_, 1);
v___x_3415_ = lean_array_uset(v_bs_x27_3409_, v_i_3403_, v___x_3414_);
v_i_3403_ = v___x_3413_;
v_bs_3404_ = v___x_3415_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lake_Check_instToJsonConfig_toJson_spec__0_spec__0___boxed(lean_object* v_sz_3417_, lean_object* v_i_3418_, lean_object* v_bs_3419_){
_start:
{
size_t v_sz_boxed_3420_; size_t v_i_boxed_3421_; lean_object* v_res_3422_; 
v_sz_boxed_3420_ = lean_unbox_usize(v_sz_3417_);
lean_dec(v_sz_3417_);
v_i_boxed_3421_ = lean_unbox_usize(v_i_3418_);
lean_dec(v_i_3418_);
v_res_3422_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lake_Check_instToJsonConfig_toJson_spec__0_spec__0(v_sz_boxed_3420_, v_i_boxed_3421_, v_bs_3419_);
return v_res_3422_;
}
}
LEAN_EXPORT lean_object* l_Lean_Array_toJson___at___00Lake_Check_instToJsonConfig_toJson_spec__0(lean_object* v_a_3423_){
_start:
{
size_t v_sz_3424_; size_t v___x_3425_; lean_object* v___x_3426_; lean_object* v___x_3427_; lean_object* v___x_3428_; lean_object* v___x_3429_; 
v_sz_3424_ = lean_array_size(v_a_3423_);
v___x_3425_ = ((size_t)0ULL);
v___x_3426_ = l_unsafeCast___redArg(v_a_3423_);
v___x_3427_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_toJson___at___00Lake_Check_instToJsonConfig_toJson_spec__0_spec__0(v_sz_3424_, v___x_3425_, v___x_3426_);
v___x_3428_ = l_unsafeCast___redArg(v___x_3427_);
lean_dec_ref(v___x_3427_);
v___x_3429_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3429_, 0, v___x_3428_);
return v___x_3429_;
}
}
LEAN_EXPORT lean_object* l_Lean_Array_toJson___at___00Lake_Check_instToJsonConfig_toJson_spec__0___boxed(lean_object* v_a_3430_){
_start:
{
lean_object* v_res_3431_; 
v_res_3431_ = l_Lean_Array_toJson___at___00Lake_Check_instToJsonConfig_toJson_spec__0(v_a_3430_);
lean_dec_ref(v_a_3430_);
return v_res_3431_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_toJson___at___00Lake_Check_instToJsonConfig_toJson_spec__1(lean_object* v_x_3432_){
_start:
{
if (lean_obj_tag(v_x_3432_) == 0)
{
lean_object* v___x_3433_; 
v___x_3433_ = lean_box(0);
return v___x_3433_;
}
else
{
lean_object* v_val_3434_; lean_object* v___x_3435_; 
v_val_3434_ = lean_ctor_get(v_x_3432_, 0);
v___x_3435_ = l_Lean_Array_toJson___at___00Lake_Check_instToJsonConfig_toJson_spec__0(v_val_3434_);
return v___x_3435_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_toJson___at___00Lake_Check_instToJsonConfig_toJson_spec__1___boxed(lean_object* v_x_3436_){
_start:
{
lean_object* v_res_3437_; 
v_res_3437_ = l_Lean_Option_toJson___at___00Lake_Check_instToJsonConfig_toJson_spec__1(v_x_3436_);
lean_dec(v_x_3436_);
return v_res_3437_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lake_Check_instToJsonConfig_toJson_spec__4(lean_object* v_a_3438_, lean_object* v_a_3439_){
_start:
{
if (lean_obj_tag(v_a_3438_) == 0)
{
lean_object* v___x_3440_; 
v___x_3440_ = lean_array_to_list(v_a_3439_);
return v___x_3440_;
}
else
{
lean_object* v_head_3441_; lean_object* v_tail_3442_; lean_object* v___x_3443_; 
v_head_3441_ = lean_ctor_get(v_a_3438_, 0);
lean_inc(v_head_3441_);
v_tail_3442_ = lean_ctor_get(v_a_3438_, 1);
lean_inc(v_tail_3442_);
lean_dec_ref_known(v_a_3438_, 2);
v___x_3443_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_a_3439_, v_head_3441_);
v_a_3438_ = v_tail_3442_;
v_a_3439_ = v___x_3443_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_map___at___00__private_Lean_Data_Json_FromToJson_Extra_0__Lean_TreeMap_toJson___at___00Lean_Json_opt___at___00Lake_Check_instToJsonConfig_toJson_spec__3_spec__4_spec__5(lean_object* v_t_3445_){
_start:
{
if (lean_obj_tag(v_t_3445_) == 0)
{
lean_object* v_size_3446_; lean_object* v_k_3447_; lean_object* v_v_3448_; lean_object* v_l_3449_; lean_object* v_r_3450_; lean_object* v___x_3452_; uint8_t v_isShared_3453_; uint8_t v_isSharedCheck_3460_; 
v_size_3446_ = lean_ctor_get(v_t_3445_, 0);
v_k_3447_ = lean_ctor_get(v_t_3445_, 1);
v_v_3448_ = lean_ctor_get(v_t_3445_, 2);
v_l_3449_ = lean_ctor_get(v_t_3445_, 3);
v_r_3450_ = lean_ctor_get(v_t_3445_, 4);
v_isSharedCheck_3460_ = !lean_is_exclusive(v_t_3445_);
if (v_isSharedCheck_3460_ == 0)
{
v___x_3452_ = v_t_3445_;
v_isShared_3453_ = v_isSharedCheck_3460_;
goto v_resetjp_3451_;
}
else
{
lean_inc(v_r_3450_);
lean_inc(v_l_3449_);
lean_inc(v_v_3448_);
lean_inc(v_k_3447_);
lean_inc(v_size_3446_);
lean_dec(v_t_3445_);
v___x_3452_ = lean_box(0);
v_isShared_3453_ = v_isSharedCheck_3460_;
goto v_resetjp_3451_;
}
v_resetjp_3451_:
{
lean_object* v___x_3454_; lean_object* v___x_3455_; lean_object* v___x_3456_; lean_object* v___x_3458_; 
v___x_3454_ = l_Lean_Array_toJson___at___00Lake_Check_instToJsonConfig_toJson_spec__0(v_v_3448_);
lean_dec(v_v_3448_);
v___x_3455_ = l_Std_DTreeMap_Internal_Impl_map___at___00__private_Lean_Data_Json_FromToJson_Extra_0__Lean_TreeMap_toJson___at___00Lean_Json_opt___at___00Lake_Check_instToJsonConfig_toJson_spec__3_spec__4_spec__5(v_l_3449_);
v___x_3456_ = l_Std_DTreeMap_Internal_Impl_map___at___00__private_Lean_Data_Json_FromToJson_Extra_0__Lean_TreeMap_toJson___at___00Lean_Json_opt___at___00Lake_Check_instToJsonConfig_toJson_spec__3_spec__4_spec__5(v_r_3450_);
if (v_isShared_3453_ == 0)
{
lean_ctor_set(v___x_3452_, 4, v___x_3456_);
lean_ctor_set(v___x_3452_, 3, v___x_3455_);
lean_ctor_set(v___x_3452_, 2, v___x_3454_);
v___x_3458_ = v___x_3452_;
goto v_reusejp_3457_;
}
else
{
lean_object* v_reuseFailAlloc_3459_; 
v_reuseFailAlloc_3459_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3459_, 0, v_size_3446_);
lean_ctor_set(v_reuseFailAlloc_3459_, 1, v_k_3447_);
lean_ctor_set(v_reuseFailAlloc_3459_, 2, v___x_3454_);
lean_ctor_set(v_reuseFailAlloc_3459_, 3, v___x_3455_);
lean_ctor_set(v_reuseFailAlloc_3459_, 4, v___x_3456_);
v___x_3458_ = v_reuseFailAlloc_3459_;
goto v_reusejp_3457_;
}
v_reusejp_3457_:
{
return v___x_3458_;
}
}
}
else
{
lean_object* v___x_3461_; 
v___x_3461_ = lean_box(1);
return v___x_3461_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_Json_FromToJson_Extra_0__Lean_TreeMap_toJson___at___00Lean_Json_opt___at___00Lake_Check_instToJsonConfig_toJson_spec__3_spec__4(lean_object* v_map_3462_){
_start:
{
lean_object* v___x_3463_; lean_object* v___x_3464_; 
v___x_3463_ = l_Std_DTreeMap_Internal_Impl_map___at___00__private_Lean_Data_Json_FromToJson_Extra_0__Lean_TreeMap_toJson___at___00Lean_Json_opt___at___00Lake_Check_instToJsonConfig_toJson_spec__3_spec__4_spec__5(v_map_3462_);
v___x_3464_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_3464_, 0, v___x_3463_);
return v___x_3464_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_opt___at___00Lake_Check_instToJsonConfig_toJson_spec__3(lean_object* v_k_3465_, lean_object* v_x_3466_){
_start:
{
if (lean_obj_tag(v_x_3466_) == 0)
{
lean_object* v___x_3467_; 
lean_dec_ref(v_k_3465_);
v___x_3467_ = lean_box(0);
return v___x_3467_;
}
else
{
lean_object* v_val_3468_; lean_object* v___x_3469_; lean_object* v___x_3470_; lean_object* v___x_3471_; lean_object* v___x_3472_; 
v_val_3468_ = lean_ctor_get(v_x_3466_, 0);
lean_inc(v_val_3468_);
lean_dec_ref_known(v_x_3466_, 1);
v___x_3469_ = l___private_Lean_Data_Json_FromToJson_Extra_0__Lean_TreeMap_toJson___at___00Lean_Json_opt___at___00Lake_Check_instToJsonConfig_toJson_spec__3_spec__4(v_val_3468_);
v___x_3470_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3470_, 0, v_k_3465_);
lean_ctor_set(v___x_3470_, 1, v___x_3469_);
v___x_3471_ = lean_box(0);
v___x_3472_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3472_, 0, v___x_3470_);
lean_ctor_set(v___x_3472_, 1, v___x_3471_);
return v___x_3472_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_Check_instToJsonConfig_toJson(lean_object* v_x_3475_){
_start:
{
lean_object* v_challenge__module_3476_; lean_object* v_solution__module_3477_; lean_object* v_theorem__names_3478_; lean_object* v_definition__names_3479_; lean_object* v_permitted__axioms_3480_; lean_object* v_enable__nanoda_x3f_3481_; lean_object* v_external__kernels_x3f_3482_; lean_object* v___x_3483_; lean_object* v___x_3484_; lean_object* v___x_3485_; lean_object* v___x_3486_; lean_object* v___x_3487_; lean_object* v___x_3488_; lean_object* v___x_3489_; lean_object* v___x_3490_; lean_object* v___x_3491_; lean_object* v___x_3492_; lean_object* v___x_3493_; lean_object* v___x_3494_; lean_object* v___x_3495_; lean_object* v___x_3496_; lean_object* v___x_3497_; lean_object* v___x_3498_; lean_object* v___x_3499_; lean_object* v___x_3500_; lean_object* v___x_3501_; lean_object* v___x_3502_; lean_object* v___x_3503_; lean_object* v___x_3504_; lean_object* v___x_3505_; lean_object* v___x_3506_; lean_object* v___x_3507_; lean_object* v___x_3508_; lean_object* v___x_3509_; lean_object* v___x_3510_; lean_object* v___x_3511_; lean_object* v___x_3512_; lean_object* v___x_3513_; lean_object* v___x_3514_; lean_object* v___x_3515_; lean_object* v___x_3516_; lean_object* v___x_3517_; 
v_challenge__module_3476_ = lean_ctor_get(v_x_3475_, 0);
lean_inc_ref(v_challenge__module_3476_);
v_solution__module_3477_ = lean_ctor_get(v_x_3475_, 1);
lean_inc_ref(v_solution__module_3477_);
v_theorem__names_3478_ = lean_ctor_get(v_x_3475_, 2);
lean_inc_ref(v_theorem__names_3478_);
v_definition__names_3479_ = lean_ctor_get(v_x_3475_, 3);
lean_inc(v_definition__names_3479_);
v_permitted__axioms_3480_ = lean_ctor_get(v_x_3475_, 4);
lean_inc_ref(v_permitted__axioms_3480_);
v_enable__nanoda_x3f_3481_ = lean_ctor_get(v_x_3475_, 5);
lean_inc(v_enable__nanoda_x3f_3481_);
v_external__kernels_x3f_3482_ = lean_ctor_get(v_x_3475_, 6);
lean_inc(v_external__kernels_x3f_3482_);
lean_dec_ref(v_x_3475_);
v___x_3483_ = ((lean_object*)(l_Lake_Check_instFromJsonConfig_fromJson___closed__0));
v___x_3484_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3484_, 0, v_challenge__module_3476_);
v___x_3485_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3485_, 0, v___x_3483_);
lean_ctor_set(v___x_3485_, 1, v___x_3484_);
v___x_3486_ = lean_box(0);
v___x_3487_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3487_, 0, v___x_3485_);
lean_ctor_set(v___x_3487_, 1, v___x_3486_);
v___x_3488_ = ((lean_object*)(l_Lake_Check_instFromJsonConfig_fromJson___closed__13));
v___x_3489_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3489_, 0, v_solution__module_3477_);
v___x_3490_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3490_, 0, v___x_3488_);
lean_ctor_set(v___x_3490_, 1, v___x_3489_);
v___x_3491_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3491_, 0, v___x_3490_);
lean_ctor_set(v___x_3491_, 1, v___x_3486_);
v___x_3492_ = ((lean_object*)(l_Lake_Check_instFromJsonConfig_fromJson___closed__18));
v___x_3493_ = l_Lean_Array_toJson___at___00Lake_Check_instToJsonConfig_toJson_spec__0(v_theorem__names_3478_);
lean_dec_ref(v_theorem__names_3478_);
v___x_3494_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3494_, 0, v___x_3492_);
lean_ctor_set(v___x_3494_, 1, v___x_3493_);
v___x_3495_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3495_, 0, v___x_3494_);
lean_ctor_set(v___x_3495_, 1, v___x_3486_);
v___x_3496_ = ((lean_object*)(l_Lake_Check_instFromJsonConfig_fromJson___closed__23));
v___x_3497_ = l_Lean_Option_toJson___at___00Lake_Check_instToJsonConfig_toJson_spec__1(v_definition__names_3479_);
lean_dec(v_definition__names_3479_);
v___x_3498_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3498_, 0, v___x_3496_);
lean_ctor_set(v___x_3498_, 1, v___x_3497_);
v___x_3499_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3499_, 0, v___x_3498_);
lean_ctor_set(v___x_3499_, 1, v___x_3486_);
v___x_3500_ = ((lean_object*)(l___private_Lake_CLI_Check_0__Lake_Check_runExternalKernel___lam__0___closed__12));
v___x_3501_ = l_Lean_Array_toJson___at___00Lake_Check_instToJsonConfig_toJson_spec__0(v_permitted__axioms_3480_);
lean_dec_ref(v_permitted__axioms_3480_);
v___x_3502_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3502_, 0, v___x_3500_);
lean_ctor_set(v___x_3502_, 1, v___x_3501_);
v___x_3503_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3503_, 0, v___x_3502_);
lean_ctor_set(v___x_3503_, 1, v___x_3486_);
v___x_3504_ = ((lean_object*)(l_Lake_Check_instFromJsonConfig_fromJson___closed__32));
v___x_3505_ = l_Lean_Json_opt___at___00Lake_Check_instToJsonConfig_toJson_spec__2(v___x_3504_, v_enable__nanoda_x3f_3481_);
lean_dec(v_enable__nanoda_x3f_3481_);
v___x_3506_ = ((lean_object*)(l_Lake_Check_instFromJsonConfig_fromJson___closed__38));
v___x_3507_ = l_Lean_Json_opt___at___00Lake_Check_instToJsonConfig_toJson_spec__3(v___x_3506_, v_external__kernels_x3f_3482_);
v___x_3508_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3508_, 0, v___x_3507_);
lean_ctor_set(v___x_3508_, 1, v___x_3486_);
v___x_3509_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3509_, 0, v___x_3505_);
lean_ctor_set(v___x_3509_, 1, v___x_3508_);
v___x_3510_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3510_, 0, v___x_3503_);
lean_ctor_set(v___x_3510_, 1, v___x_3509_);
v___x_3511_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3511_, 0, v___x_3499_);
lean_ctor_set(v___x_3511_, 1, v___x_3510_);
v___x_3512_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3512_, 0, v___x_3495_);
lean_ctor_set(v___x_3512_, 1, v___x_3511_);
v___x_3513_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3513_, 0, v___x_3491_);
lean_ctor_set(v___x_3513_, 1, v___x_3512_);
v___x_3514_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3514_, 0, v___x_3487_);
lean_ctor_set(v___x_3514_, 1, v___x_3513_);
v___x_3515_ = ((lean_object*)(l_Lake_Check_instToJsonConfig_toJson___closed__0));
v___x_3516_ = l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lake_Check_instToJsonConfig_toJson_spec__4(v___x_3514_, v___x_3515_);
v___x_3517_ = l_Lean_Json_mkObj(v___x_3516_);
lean_dec(v___x_3516_);
return v___x_3517_;
}
}
LEAN_EXPORT lean_object* l_Option_repr___at___00Lake_Check_instReprConfig_repr_spec__2(lean_object* v_x_3526_, lean_object* v_x_3527_){
_start:
{
if (lean_obj_tag(v_x_3526_) == 0)
{
lean_object* v___x_3528_; 
v___x_3528_ = ((lean_object*)(l_Option_repr___at___00Lake_Check_instReprConfig_repr_spec__2___closed__1));
return v___x_3528_;
}
else
{
lean_object* v_val_3529_; lean_object* v___x_3530_; uint8_t v___x_3531_; lean_object* v___x_3532_; lean_object* v___x_3533_; lean_object* v___x_3534_; 
v_val_3529_ = lean_ctor_get(v_x_3526_, 0);
v___x_3530_ = ((lean_object*)(l_Option_repr___at___00Lake_Check_instReprConfig_repr_spec__2___closed__3));
v___x_3531_ = lean_unbox(v_val_3529_);
v___x_3532_ = l_Bool_repr___redArg(v___x_3531_);
v___x_3533_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3533_, 0, v___x_3530_);
lean_ctor_set(v___x_3533_, 1, v___x_3532_);
v___x_3534_ = l_Repr_addAppParen(v___x_3533_, v_x_3527_);
return v___x_3534_;
}
}
}
LEAN_EXPORT lean_object* l_Option_repr___at___00Lake_Check_instReprConfig_repr_spec__2___boxed(lean_object* v_x_3535_, lean_object* v_x_3536_){
_start:
{
lean_object* v_res_3537_; 
v_res_3537_ = l_Option_repr___at___00Lake_Check_instReprConfig_repr_spec__2(v_x_3535_, v_x_3536_);
lean_dec(v_x_3536_);
lean_dec(v_x_3535_);
return v_res_3537_;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at___00Lake_Check_instReprConfig_repr_spec__4(lean_object* v_a_3538_){
_start:
{
lean_object* v___x_3539_; 
v___x_3539_ = lean_nat_to_int(v_a_3538_);
return v___x_3539_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lake_Check_instReprConfig_repr_spec__0_spec__0_spec__3_spec__6(lean_object* v_x_3540_, lean_object* v_x_3541_, lean_object* v_x_3542_){
_start:
{
if (lean_obj_tag(v_x_3542_) == 0)
{
lean_dec(v_x_3540_);
return v_x_3541_;
}
else
{
lean_object* v_head_3543_; lean_object* v_tail_3544_; lean_object* v___x_3546_; uint8_t v_isShared_3547_; uint8_t v_isSharedCheck_3555_; 
v_head_3543_ = lean_ctor_get(v_x_3542_, 0);
v_tail_3544_ = lean_ctor_get(v_x_3542_, 1);
v_isSharedCheck_3555_ = !lean_is_exclusive(v_x_3542_);
if (v_isSharedCheck_3555_ == 0)
{
v___x_3546_ = v_x_3542_;
v_isShared_3547_ = v_isSharedCheck_3555_;
goto v_resetjp_3545_;
}
else
{
lean_inc(v_tail_3544_);
lean_inc(v_head_3543_);
lean_dec(v_x_3542_);
v___x_3546_ = lean_box(0);
v_isShared_3547_ = v_isSharedCheck_3555_;
goto v_resetjp_3545_;
}
v_resetjp_3545_:
{
lean_object* v___x_3549_; 
lean_inc(v_x_3540_);
if (v_isShared_3547_ == 0)
{
lean_ctor_set_tag(v___x_3546_, 5);
lean_ctor_set(v___x_3546_, 1, v_x_3540_);
lean_ctor_set(v___x_3546_, 0, v_x_3541_);
v___x_3549_ = v___x_3546_;
goto v_reusejp_3548_;
}
else
{
lean_object* v_reuseFailAlloc_3554_; 
v_reuseFailAlloc_3554_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3554_, 0, v_x_3541_);
lean_ctor_set(v_reuseFailAlloc_3554_, 1, v_x_3540_);
v___x_3549_ = v_reuseFailAlloc_3554_;
goto v_reusejp_3548_;
}
v_reusejp_3548_:
{
lean_object* v___x_3550_; lean_object* v___x_3551_; lean_object* v___x_3552_; 
v___x_3550_ = l_String_quote(v_head_3543_);
v___x_3551_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3551_, 0, v___x_3550_);
v___x_3552_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3552_, 0, v___x_3549_);
lean_ctor_set(v___x_3552_, 1, v___x_3551_);
v_x_3541_ = v___x_3552_;
v_x_3542_ = v_tail_3544_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lake_Check_instReprConfig_repr_spec__0_spec__0_spec__3(lean_object* v_x_3556_, lean_object* v_x_3557_, lean_object* v_x_3558_){
_start:
{
if (lean_obj_tag(v_x_3558_) == 0)
{
lean_dec(v_x_3556_);
return v_x_3557_;
}
else
{
lean_object* v_head_3559_; lean_object* v_tail_3560_; lean_object* v___x_3562_; uint8_t v_isShared_3563_; uint8_t v_isSharedCheck_3571_; 
v_head_3559_ = lean_ctor_get(v_x_3558_, 0);
v_tail_3560_ = lean_ctor_get(v_x_3558_, 1);
v_isSharedCheck_3571_ = !lean_is_exclusive(v_x_3558_);
if (v_isSharedCheck_3571_ == 0)
{
v___x_3562_ = v_x_3558_;
v_isShared_3563_ = v_isSharedCheck_3571_;
goto v_resetjp_3561_;
}
else
{
lean_inc(v_tail_3560_);
lean_inc(v_head_3559_);
lean_dec(v_x_3558_);
v___x_3562_ = lean_box(0);
v_isShared_3563_ = v_isSharedCheck_3571_;
goto v_resetjp_3561_;
}
v_resetjp_3561_:
{
lean_object* v___x_3565_; 
lean_inc(v_x_3556_);
if (v_isShared_3563_ == 0)
{
lean_ctor_set_tag(v___x_3562_, 5);
lean_ctor_set(v___x_3562_, 1, v_x_3556_);
lean_ctor_set(v___x_3562_, 0, v_x_3557_);
v___x_3565_ = v___x_3562_;
goto v_reusejp_3564_;
}
else
{
lean_object* v_reuseFailAlloc_3570_; 
v_reuseFailAlloc_3570_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3570_, 0, v_x_3557_);
lean_ctor_set(v_reuseFailAlloc_3570_, 1, v_x_3556_);
v___x_3565_ = v_reuseFailAlloc_3570_;
goto v_reusejp_3564_;
}
v_reusejp_3564_:
{
lean_object* v___x_3566_; lean_object* v___x_3567_; lean_object* v___x_3568_; lean_object* v___x_3569_; 
v___x_3566_ = l_String_quote(v_head_3559_);
v___x_3567_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3567_, 0, v___x_3566_);
v___x_3568_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3568_, 0, v___x_3565_);
lean_ctor_set(v___x_3568_, 1, v___x_3567_);
v___x_3569_ = l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lake_Check_instReprConfig_repr_spec__0_spec__0_spec__3_spec__6(v_x_3556_, v___x_3568_, v_tail_3560_);
return v___x_3569_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Lake_Check_instReprConfig_repr_spec__0_spec__0___lam__0(lean_object* v___y_3572_){
_start:
{
lean_object* v___x_3573_; lean_object* v___x_3574_; 
v___x_3573_ = l_String_quote(v___y_3572_);
v___x_3574_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3574_, 0, v___x_3573_);
return v___x_3574_;
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Lake_Check_instReprConfig_repr_spec__0_spec__0(lean_object* v_x_3575_, lean_object* v_x_3576_){
_start:
{
if (lean_obj_tag(v_x_3575_) == 0)
{
lean_object* v___x_3577_; 
lean_dec(v_x_3576_);
v___x_3577_ = lean_box(0);
return v___x_3577_;
}
else
{
lean_object* v_tail_3578_; 
v_tail_3578_ = lean_ctor_get(v_x_3575_, 1);
if (lean_obj_tag(v_tail_3578_) == 0)
{
lean_object* v_head_3579_; lean_object* v___x_3580_; 
lean_dec(v_x_3576_);
v_head_3579_ = lean_ctor_get(v_x_3575_, 0);
lean_inc(v_head_3579_);
lean_dec_ref_known(v_x_3575_, 2);
v___x_3580_ = l_Std_Format_joinSep___at___00Array_repr___at___00Lake_Check_instReprConfig_repr_spec__0_spec__0___lam__0(v_head_3579_);
return v___x_3580_;
}
else
{
lean_object* v_head_3581_; lean_object* v___x_3582_; lean_object* v___x_3583_; 
lean_inc(v_tail_3578_);
v_head_3581_ = lean_ctor_get(v_x_3575_, 0);
lean_inc(v_head_3581_);
lean_dec_ref_known(v_x_3575_, 2);
v___x_3582_ = l_Std_Format_joinSep___at___00Array_repr___at___00Lake_Check_instReprConfig_repr_spec__0_spec__0___lam__0(v_head_3581_);
v___x_3583_ = l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lake_Check_instReprConfig_repr_spec__0_spec__0_spec__3(v_x_3576_, v___x_3582_, v_tail_3578_);
return v___x_3583_;
}
}
}
}
static lean_object* _init_l_Array_repr___at___00Lake_Check_instReprConfig_repr_spec__0___closed__4(void){
_start:
{
lean_object* v___x_3591_; lean_object* v___x_3592_; 
v___x_3591_ = ((lean_object*)(l_Array_repr___at___00Lake_Check_instReprConfig_repr_spec__0___closed__0));
v___x_3592_ = lean_string_length(v___x_3591_);
return v___x_3592_;
}
}
static lean_object* _init_l_Array_repr___at___00Lake_Check_instReprConfig_repr_spec__0___closed__5(void){
_start:
{
lean_object* v___x_3593_; lean_object* v___x_3594_; 
v___x_3593_ = lean_obj_once(&l_Array_repr___at___00Lake_Check_instReprConfig_repr_spec__0___closed__4, &l_Array_repr___at___00Lake_Check_instReprConfig_repr_spec__0___closed__4_once, _init_l_Array_repr___at___00Lake_Check_instReprConfig_repr_spec__0___closed__4);
v___x_3594_ = lean_nat_to_int(v___x_3593_);
return v___x_3594_;
}
}
LEAN_EXPORT lean_object* l_Array_repr___at___00Lake_Check_instReprConfig_repr_spec__0(lean_object* v_xs_3602_){
_start:
{
lean_object* v___x_3603_; lean_object* v___x_3604_; uint8_t v___x_3605_; 
v___x_3603_ = lean_array_get_size(v_xs_3602_);
v___x_3604_ = lean_unsigned_to_nat(0u);
v___x_3605_ = lean_nat_dec_eq(v___x_3603_, v___x_3604_);
if (v___x_3605_ == 0)
{
lean_object* v___x_3606_; lean_object* v___x_3607_; lean_object* v___x_3608_; lean_object* v___x_3609_; lean_object* v___x_3610_; lean_object* v___x_3611_; lean_object* v___x_3612_; lean_object* v___x_3613_; lean_object* v___x_3614_; lean_object* v___x_3615_; 
v___x_3606_ = lean_array_to_list(v_xs_3602_);
v___x_3607_ = ((lean_object*)(l_Array_repr___at___00Lake_Check_instReprConfig_repr_spec__0___closed__3));
v___x_3608_ = l_Std_Format_joinSep___at___00Array_repr___at___00Lake_Check_instReprConfig_repr_spec__0_spec__0(v___x_3606_, v___x_3607_);
v___x_3609_ = lean_obj_once(&l_Array_repr___at___00Lake_Check_instReprConfig_repr_spec__0___closed__5, &l_Array_repr___at___00Lake_Check_instReprConfig_repr_spec__0___closed__5_once, _init_l_Array_repr___at___00Lake_Check_instReprConfig_repr_spec__0___closed__5);
v___x_3610_ = ((lean_object*)(l_Array_repr___at___00Lake_Check_instReprConfig_repr_spec__0___closed__6));
v___x_3611_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3611_, 0, v___x_3610_);
lean_ctor_set(v___x_3611_, 1, v___x_3608_);
v___x_3612_ = ((lean_object*)(l_Array_repr___at___00Lake_Check_instReprConfig_repr_spec__0___closed__7));
v___x_3613_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3613_, 0, v___x_3611_);
lean_ctor_set(v___x_3613_, 1, v___x_3612_);
v___x_3614_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3614_, 0, v___x_3609_);
lean_ctor_set(v___x_3614_, 1, v___x_3613_);
v___x_3615_ = l_Std_Format_fill(v___x_3614_);
return v___x_3615_;
}
else
{
lean_object* v___x_3616_; 
lean_dec_ref(v_xs_3602_);
v___x_3616_ = ((lean_object*)(l_Array_repr___at___00Lake_Check_instReprConfig_repr_spec__0___closed__9));
return v___x_3616_;
}
}
}
LEAN_EXPORT lean_object* l_Option_repr___at___00Lake_Check_instReprConfig_repr_spec__1(lean_object* v_x_3617_, lean_object* v_x_3618_){
_start:
{
if (lean_obj_tag(v_x_3617_) == 0)
{
lean_object* v___x_3619_; 
v___x_3619_ = ((lean_object*)(l_Option_repr___at___00Lake_Check_instReprConfig_repr_spec__2___closed__1));
return v___x_3619_;
}
else
{
lean_object* v_val_3620_; lean_object* v___x_3621_; lean_object* v___x_3622_; lean_object* v___x_3623_; lean_object* v___x_3624_; 
v_val_3620_ = lean_ctor_get(v_x_3617_, 0);
lean_inc(v_val_3620_);
lean_dec_ref_known(v_x_3617_, 1);
v___x_3621_ = ((lean_object*)(l_Option_repr___at___00Lake_Check_instReprConfig_repr_spec__2___closed__3));
v___x_3622_ = l_Array_repr___at___00Lake_Check_instReprConfig_repr_spec__0(v_val_3620_);
v___x_3623_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3623_, 0, v___x_3621_);
lean_ctor_set(v___x_3623_, 1, v___x_3622_);
v___x_3624_ = l_Repr_addAppParen(v___x_3623_, v_x_3618_);
return v___x_3624_;
}
}
}
LEAN_EXPORT lean_object* l_Option_repr___at___00Lake_Check_instReprConfig_repr_spec__1___boxed(lean_object* v_x_3625_, lean_object* v_x_3626_){
_start:
{
lean_object* v_res_3627_; 
v_res_3627_ = l_Option_repr___at___00Lake_Check_instReprConfig_repr_spec__1(v_x_3625_, v_x_3626_);
lean_dec(v_x_3626_);
return v_res_3627_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldrM___at___00Option_repr___at___00Lake_Check_instReprConfig_repr_spec__3_spec__4(lean_object* v_init_3628_, lean_object* v_x_3629_){
_start:
{
if (lean_obj_tag(v_x_3629_) == 0)
{
lean_object* v_k_3630_; lean_object* v_v_3631_; lean_object* v_l_3632_; lean_object* v_r_3633_; lean_object* v___x_3634_; lean_object* v___x_3635_; lean_object* v___x_3636_; 
v_k_3630_ = lean_ctor_get(v_x_3629_, 1);
v_v_3631_ = lean_ctor_get(v_x_3629_, 2);
v_l_3632_ = lean_ctor_get(v_x_3629_, 3);
v_r_3633_ = lean_ctor_get(v_x_3629_, 4);
v___x_3634_ = l_Std_DTreeMap_Internal_Impl_foldrM___at___00Option_repr___at___00Lake_Check_instReprConfig_repr_spec__3_spec__4(v_init_3628_, v_r_3633_);
lean_inc(v_v_3631_);
lean_inc(v_k_3630_);
v___x_3635_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3635_, 0, v_k_3630_);
lean_ctor_set(v___x_3635_, 1, v_v_3631_);
v___x_3636_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3636_, 0, v___x_3635_);
lean_ctor_set(v___x_3636_, 1, v___x_3634_);
v_init_3628_ = v___x_3636_;
v_x_3629_ = v_l_3632_;
goto _start;
}
else
{
return v_init_3628_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldrM___at___00Option_repr___at___00Lake_Check_instReprConfig_repr_spec__3_spec__4___boxed(lean_object* v_init_3638_, lean_object* v_x_3639_){
_start:
{
lean_object* v_res_3640_; 
v_res_3640_ = l_Std_DTreeMap_Internal_Impl_foldrM___at___00Option_repr___at___00Lake_Check_instReprConfig_repr_spec__3_spec__4(v_init_3638_, v_x_3639_);
lean_dec(v_x_3639_);
return v_res_3640_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Prod_repr___at___00List_repr___at___00Option_repr___at___00Lake_Check_instReprConfig_repr_spec__3_spec__5_spec__8_spec__10_spec__11(lean_object* v_x_3641_, lean_object* v_x_3642_, lean_object* v_x_3643_){
_start:
{
if (lean_obj_tag(v_x_3643_) == 0)
{
lean_dec(v_x_3641_);
return v_x_3642_;
}
else
{
lean_object* v_head_3644_; lean_object* v_tail_3645_; lean_object* v___x_3647_; uint8_t v_isShared_3648_; uint8_t v_isSharedCheck_3654_; 
v_head_3644_ = lean_ctor_get(v_x_3643_, 0);
v_tail_3645_ = lean_ctor_get(v_x_3643_, 1);
v_isSharedCheck_3654_ = !lean_is_exclusive(v_x_3643_);
if (v_isSharedCheck_3654_ == 0)
{
v___x_3647_ = v_x_3643_;
v_isShared_3648_ = v_isSharedCheck_3654_;
goto v_resetjp_3646_;
}
else
{
lean_inc(v_tail_3645_);
lean_inc(v_head_3644_);
lean_dec(v_x_3643_);
v___x_3647_ = lean_box(0);
v_isShared_3648_ = v_isSharedCheck_3654_;
goto v_resetjp_3646_;
}
v_resetjp_3646_:
{
lean_object* v___x_3650_; 
lean_inc(v_x_3641_);
if (v_isShared_3648_ == 0)
{
lean_ctor_set_tag(v___x_3647_, 5);
lean_ctor_set(v___x_3647_, 1, v_x_3641_);
lean_ctor_set(v___x_3647_, 0, v_x_3642_);
v___x_3650_ = v___x_3647_;
goto v_reusejp_3649_;
}
else
{
lean_object* v_reuseFailAlloc_3653_; 
v_reuseFailAlloc_3653_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3653_, 0, v_x_3642_);
lean_ctor_set(v_reuseFailAlloc_3653_, 1, v_x_3641_);
v___x_3650_ = v_reuseFailAlloc_3653_;
goto v_reusejp_3649_;
}
v_reusejp_3649_:
{
lean_object* v___x_3651_; 
v___x_3651_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3651_, 0, v___x_3650_);
lean_ctor_set(v___x_3651_, 1, v_head_3644_);
v_x_3642_ = v___x_3651_;
v_x_3643_ = v_tail_3645_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Prod_repr___at___00List_repr___at___00Option_repr___at___00Lake_Check_instReprConfig_repr_spec__3_spec__5_spec__8_spec__10(lean_object* v_x_3655_, lean_object* v_x_3656_){
_start:
{
if (lean_obj_tag(v_x_3655_) == 0)
{
lean_object* v___x_3657_; 
lean_dec(v_x_3656_);
v___x_3657_ = lean_box(0);
return v___x_3657_;
}
else
{
lean_object* v_tail_3658_; 
v_tail_3658_ = lean_ctor_get(v_x_3655_, 1);
if (lean_obj_tag(v_tail_3658_) == 0)
{
lean_object* v_head_3659_; 
lean_dec(v_x_3656_);
v_head_3659_ = lean_ctor_get(v_x_3655_, 0);
lean_inc(v_head_3659_);
lean_dec_ref_known(v_x_3655_, 2);
return v_head_3659_;
}
else
{
lean_object* v_head_3660_; lean_object* v___x_3661_; 
lean_inc(v_tail_3658_);
v_head_3660_ = lean_ctor_get(v_x_3655_, 0);
lean_inc(v_head_3660_);
lean_dec_ref_known(v_x_3655_, 2);
v___x_3661_ = l_List_foldl___at___00Std_Format_joinSep___at___00Prod_repr___at___00List_repr___at___00Option_repr___at___00Lake_Check_instReprConfig_repr_spec__3_spec__5_spec__8_spec__10_spec__11(v_x_3656_, v_head_3660_, v_tail_3658_);
return v___x_3661_;
}
}
}
}
static lean_object* _init_l_Prod_repr___at___00List_repr___at___00Option_repr___at___00Lake_Check_instReprConfig_repr_spec__3_spec__5_spec__8___redArg___closed__2(void){
_start:
{
lean_object* v___x_3664_; lean_object* v___x_3665_; 
v___x_3664_ = ((lean_object*)(l_Prod_repr___at___00List_repr___at___00Option_repr___at___00Lake_Check_instReprConfig_repr_spec__3_spec__5_spec__8___redArg___closed__0));
v___x_3665_ = lean_string_length(v___x_3664_);
return v___x_3665_;
}
}
static lean_object* _init_l_Prod_repr___at___00List_repr___at___00Option_repr___at___00Lake_Check_instReprConfig_repr_spec__3_spec__5_spec__8___redArg___closed__3(void){
_start:
{
lean_object* v___x_3666_; lean_object* v___x_3667_; 
v___x_3666_ = lean_obj_once(&l_Prod_repr___at___00List_repr___at___00Option_repr___at___00Lake_Check_instReprConfig_repr_spec__3_spec__5_spec__8___redArg___closed__2, &l_Prod_repr___at___00List_repr___at___00Option_repr___at___00Lake_Check_instReprConfig_repr_spec__3_spec__5_spec__8___redArg___closed__2_once, _init_l_Prod_repr___at___00List_repr___at___00Option_repr___at___00Lake_Check_instReprConfig_repr_spec__3_spec__5_spec__8___redArg___closed__2);
v___x_3667_ = lean_nat_to_int(v___x_3666_);
return v___x_3667_;
}
}
LEAN_EXPORT lean_object* l_Prod_repr___at___00List_repr___at___00Option_repr___at___00Lake_Check_instReprConfig_repr_spec__3_spec__5_spec__8___redArg(lean_object* v_x_3672_){
_start:
{
lean_object* v_fst_3673_; lean_object* v_snd_3674_; lean_object* v___x_3676_; uint8_t v_isShared_3677_; uint8_t v_isSharedCheck_3697_; 
v_fst_3673_ = lean_ctor_get(v_x_3672_, 0);
v_snd_3674_ = lean_ctor_get(v_x_3672_, 1);
v_isSharedCheck_3697_ = !lean_is_exclusive(v_x_3672_);
if (v_isSharedCheck_3697_ == 0)
{
v___x_3676_ = v_x_3672_;
v_isShared_3677_ = v_isSharedCheck_3697_;
goto v_resetjp_3675_;
}
else
{
lean_inc(v_snd_3674_);
lean_inc(v_fst_3673_);
lean_dec(v_x_3672_);
v___x_3676_ = lean_box(0);
v_isShared_3677_ = v_isSharedCheck_3697_;
goto v_resetjp_3675_;
}
v_resetjp_3675_:
{
lean_object* v___x_3678_; lean_object* v___x_3679_; lean_object* v___x_3680_; lean_object* v___x_3682_; 
v___x_3678_ = l_String_quote(v_fst_3673_);
v___x_3679_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3679_, 0, v___x_3678_);
v___x_3680_ = lean_box(0);
if (v_isShared_3677_ == 0)
{
lean_ctor_set_tag(v___x_3676_, 1);
lean_ctor_set(v___x_3676_, 1, v___x_3680_);
lean_ctor_set(v___x_3676_, 0, v___x_3679_);
v___x_3682_ = v___x_3676_;
goto v_reusejp_3681_;
}
else
{
lean_object* v_reuseFailAlloc_3696_; 
v_reuseFailAlloc_3696_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3696_, 0, v___x_3679_);
lean_ctor_set(v_reuseFailAlloc_3696_, 1, v___x_3680_);
v___x_3682_ = v_reuseFailAlloc_3696_;
goto v_reusejp_3681_;
}
v_reusejp_3681_:
{
lean_object* v___x_3683_; lean_object* v___x_3684_; lean_object* v___x_3685_; lean_object* v___x_3686_; lean_object* v___x_3687_; lean_object* v___x_3688_; lean_object* v___x_3689_; lean_object* v___x_3690_; lean_object* v___x_3691_; lean_object* v___x_3692_; lean_object* v___x_3693_; uint8_t v___x_3694_; lean_object* v___x_3695_; 
v___x_3683_ = l_Array_repr___at___00Lake_Check_instReprConfig_repr_spec__0(v_snd_3674_);
v___x_3684_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3684_, 0, v___x_3683_);
lean_ctor_set(v___x_3684_, 1, v___x_3682_);
v___x_3685_ = l_List_reverse___redArg(v___x_3684_);
v___x_3686_ = ((lean_object*)(l_Array_repr___at___00Lake_Check_instReprConfig_repr_spec__0___closed__3));
v___x_3687_ = l_Std_Format_joinSep___at___00Prod_repr___at___00List_repr___at___00Option_repr___at___00Lake_Check_instReprConfig_repr_spec__3_spec__5_spec__8_spec__10(v___x_3685_, v___x_3686_);
v___x_3688_ = lean_obj_once(&l_Prod_repr___at___00List_repr___at___00Option_repr___at___00Lake_Check_instReprConfig_repr_spec__3_spec__5_spec__8___redArg___closed__3, &l_Prod_repr___at___00List_repr___at___00Option_repr___at___00Lake_Check_instReprConfig_repr_spec__3_spec__5_spec__8___redArg___closed__3_once, _init_l_Prod_repr___at___00List_repr___at___00Option_repr___at___00Lake_Check_instReprConfig_repr_spec__3_spec__5_spec__8___redArg___closed__3);
v___x_3689_ = ((lean_object*)(l_Prod_repr___at___00List_repr___at___00Option_repr___at___00Lake_Check_instReprConfig_repr_spec__3_spec__5_spec__8___redArg___closed__4));
v___x_3690_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3690_, 0, v___x_3689_);
lean_ctor_set(v___x_3690_, 1, v___x_3687_);
v___x_3691_ = ((lean_object*)(l_Prod_repr___at___00List_repr___at___00Option_repr___at___00Lake_Check_instReprConfig_repr_spec__3_spec__5_spec__8___redArg___closed__5));
v___x_3692_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3692_, 0, v___x_3690_);
lean_ctor_set(v___x_3692_, 1, v___x_3691_);
v___x_3693_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3693_, 0, v___x_3688_);
lean_ctor_set(v___x_3693_, 1, v___x_3692_);
v___x_3694_ = 0;
v___x_3695_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3695_, 0, v___x_3693_);
lean_ctor_set_uint8(v___x_3695_, sizeof(void*)*1, v___x_3694_);
return v___x_3695_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00Option_repr___at___00Lake_Check_instReprConfig_repr_spec__3_spec__5_spec__9_spec__12_spec__14(lean_object* v_x_3698_, lean_object* v_x_3699_, lean_object* v_x_3700_){
_start:
{
if (lean_obj_tag(v_x_3700_) == 0)
{
lean_dec(v_x_3698_);
return v_x_3699_;
}
else
{
lean_object* v_head_3701_; lean_object* v_tail_3702_; lean_object* v___x_3704_; uint8_t v_isShared_3705_; uint8_t v_isSharedCheck_3712_; 
v_head_3701_ = lean_ctor_get(v_x_3700_, 0);
v_tail_3702_ = lean_ctor_get(v_x_3700_, 1);
v_isSharedCheck_3712_ = !lean_is_exclusive(v_x_3700_);
if (v_isSharedCheck_3712_ == 0)
{
v___x_3704_ = v_x_3700_;
v_isShared_3705_ = v_isSharedCheck_3712_;
goto v_resetjp_3703_;
}
else
{
lean_inc(v_tail_3702_);
lean_inc(v_head_3701_);
lean_dec(v_x_3700_);
v___x_3704_ = lean_box(0);
v_isShared_3705_ = v_isSharedCheck_3712_;
goto v_resetjp_3703_;
}
v_resetjp_3703_:
{
lean_object* v___x_3707_; 
lean_inc(v_x_3698_);
if (v_isShared_3705_ == 0)
{
lean_ctor_set_tag(v___x_3704_, 5);
lean_ctor_set(v___x_3704_, 1, v_x_3698_);
lean_ctor_set(v___x_3704_, 0, v_x_3699_);
v___x_3707_ = v___x_3704_;
goto v_reusejp_3706_;
}
else
{
lean_object* v_reuseFailAlloc_3711_; 
v_reuseFailAlloc_3711_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3711_, 0, v_x_3699_);
lean_ctor_set(v_reuseFailAlloc_3711_, 1, v_x_3698_);
v___x_3707_ = v_reuseFailAlloc_3711_;
goto v_reusejp_3706_;
}
v_reusejp_3706_:
{
lean_object* v___x_3708_; lean_object* v___x_3709_; 
v___x_3708_ = l_Prod_repr___at___00List_repr___at___00Option_repr___at___00Lake_Check_instReprConfig_repr_spec__3_spec__5_spec__8___redArg(v_head_3701_);
v___x_3709_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3709_, 0, v___x_3707_);
lean_ctor_set(v___x_3709_, 1, v___x_3708_);
v_x_3699_ = v___x_3709_;
v_x_3700_ = v_tail_3702_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00Option_repr___at___00Lake_Check_instReprConfig_repr_spec__3_spec__5_spec__9_spec__12(lean_object* v_x_3713_, lean_object* v_x_3714_, lean_object* v_x_3715_){
_start:
{
if (lean_obj_tag(v_x_3715_) == 0)
{
lean_dec(v_x_3713_);
return v_x_3714_;
}
else
{
lean_object* v_head_3716_; lean_object* v_tail_3717_; lean_object* v___x_3719_; uint8_t v_isShared_3720_; uint8_t v_isSharedCheck_3727_; 
v_head_3716_ = lean_ctor_get(v_x_3715_, 0);
v_tail_3717_ = lean_ctor_get(v_x_3715_, 1);
v_isSharedCheck_3727_ = !lean_is_exclusive(v_x_3715_);
if (v_isSharedCheck_3727_ == 0)
{
v___x_3719_ = v_x_3715_;
v_isShared_3720_ = v_isSharedCheck_3727_;
goto v_resetjp_3718_;
}
else
{
lean_inc(v_tail_3717_);
lean_inc(v_head_3716_);
lean_dec(v_x_3715_);
v___x_3719_ = lean_box(0);
v_isShared_3720_ = v_isSharedCheck_3727_;
goto v_resetjp_3718_;
}
v_resetjp_3718_:
{
lean_object* v___x_3722_; 
lean_inc(v_x_3713_);
if (v_isShared_3720_ == 0)
{
lean_ctor_set_tag(v___x_3719_, 5);
lean_ctor_set(v___x_3719_, 1, v_x_3713_);
lean_ctor_set(v___x_3719_, 0, v_x_3714_);
v___x_3722_ = v___x_3719_;
goto v_reusejp_3721_;
}
else
{
lean_object* v_reuseFailAlloc_3726_; 
v_reuseFailAlloc_3726_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3726_, 0, v_x_3714_);
lean_ctor_set(v_reuseFailAlloc_3726_, 1, v_x_3713_);
v___x_3722_ = v_reuseFailAlloc_3726_;
goto v_reusejp_3721_;
}
v_reusejp_3721_:
{
lean_object* v___x_3723_; lean_object* v___x_3724_; lean_object* v___x_3725_; 
v___x_3723_ = l_Prod_repr___at___00List_repr___at___00Option_repr___at___00Lake_Check_instReprConfig_repr_spec__3_spec__5_spec__8___redArg(v_head_3716_);
v___x_3724_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3724_, 0, v___x_3722_);
lean_ctor_set(v___x_3724_, 1, v___x_3723_);
v___x_3725_ = l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00Option_repr___at___00Lake_Check_instReprConfig_repr_spec__3_spec__5_spec__9_spec__12_spec__14(v_x_3713_, v___x_3724_, v_tail_3717_);
return v___x_3725_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00List_repr___at___00Option_repr___at___00Lake_Check_instReprConfig_repr_spec__3_spec__5_spec__9(lean_object* v_x_3728_, lean_object* v_x_3729_){
_start:
{
if (lean_obj_tag(v_x_3728_) == 0)
{
lean_object* v___x_3730_; 
lean_dec(v_x_3729_);
v___x_3730_ = lean_box(0);
return v___x_3730_;
}
else
{
lean_object* v_tail_3731_; 
v_tail_3731_ = lean_ctor_get(v_x_3728_, 1);
if (lean_obj_tag(v_tail_3731_) == 0)
{
lean_object* v_head_3732_; lean_object* v___x_3733_; 
lean_dec(v_x_3729_);
v_head_3732_ = lean_ctor_get(v_x_3728_, 0);
lean_inc(v_head_3732_);
lean_dec_ref_known(v_x_3728_, 2);
v___x_3733_ = l_Prod_repr___at___00List_repr___at___00Option_repr___at___00Lake_Check_instReprConfig_repr_spec__3_spec__5_spec__8___redArg(v_head_3732_);
return v___x_3733_;
}
else
{
lean_object* v_head_3734_; lean_object* v___x_3735_; lean_object* v___x_3736_; 
lean_inc(v_tail_3731_);
v_head_3734_ = lean_ctor_get(v_x_3728_, 0);
lean_inc(v_head_3734_);
lean_dec_ref_known(v_x_3728_, 2);
v___x_3735_ = l_Prod_repr___at___00List_repr___at___00Option_repr___at___00Lake_Check_instReprConfig_repr_spec__3_spec__5_spec__8___redArg(v_head_3734_);
v___x_3736_ = l_List_foldl___at___00Std_Format_joinSep___at___00List_repr___at___00Option_repr___at___00Lake_Check_instReprConfig_repr_spec__3_spec__5_spec__9_spec__12(v_x_3729_, v___x_3735_, v_tail_3731_);
return v___x_3736_;
}
}
}
}
static lean_object* _init_l_List_repr___at___00Option_repr___at___00Lake_Check_instReprConfig_repr_spec__3_spec__5___redArg___closed__1(void){
_start:
{
lean_object* v___x_3739_; lean_object* v___x_3740_; 
v___x_3739_ = ((lean_object*)(l_List_toString___at___00__private_Lake_CLI_Check_0__Lake_Check_withSafeExport_spec__0___closed__1));
v___x_3740_ = lean_string_length(v___x_3739_);
return v___x_3740_;
}
}
static lean_object* _init_l_List_repr___at___00Option_repr___at___00Lake_Check_instReprConfig_repr_spec__3_spec__5___redArg___closed__2(void){
_start:
{
lean_object* v___x_3741_; lean_object* v___x_3742_; 
v___x_3741_ = lean_obj_once(&l_List_repr___at___00Option_repr___at___00Lake_Check_instReprConfig_repr_spec__3_spec__5___redArg___closed__1, &l_List_repr___at___00Option_repr___at___00Lake_Check_instReprConfig_repr_spec__3_spec__5___redArg___closed__1_once, _init_l_List_repr___at___00Option_repr___at___00Lake_Check_instReprConfig_repr_spec__3_spec__5___redArg___closed__1);
v___x_3742_ = lean_nat_to_int(v___x_3741_);
return v___x_3742_;
}
}
LEAN_EXPORT lean_object* l_List_repr___at___00Option_repr___at___00Lake_Check_instReprConfig_repr_spec__3_spec__5___redArg(lean_object* v_a_3745_){
_start:
{
if (lean_obj_tag(v_a_3745_) == 0)
{
lean_object* v___x_3746_; 
v___x_3746_ = ((lean_object*)(l_List_repr___at___00Option_repr___at___00Lake_Check_instReprConfig_repr_spec__3_spec__5___redArg___closed__0));
return v___x_3746_;
}
else
{
lean_object* v___x_3747_; lean_object* v___x_3748_; lean_object* v___x_3749_; lean_object* v___x_3750_; lean_object* v___x_3751_; lean_object* v___x_3752_; lean_object* v___x_3753_; lean_object* v___x_3754_; uint8_t v___x_3755_; lean_object* v___x_3756_; 
v___x_3747_ = ((lean_object*)(l_Array_repr___at___00Lake_Check_instReprConfig_repr_spec__0___closed__3));
v___x_3748_ = l_Std_Format_joinSep___at___00List_repr___at___00Option_repr___at___00Lake_Check_instReprConfig_repr_spec__3_spec__5_spec__9(v_a_3745_, v___x_3747_);
v___x_3749_ = lean_obj_once(&l_List_repr___at___00Option_repr___at___00Lake_Check_instReprConfig_repr_spec__3_spec__5___redArg___closed__2, &l_List_repr___at___00Option_repr___at___00Lake_Check_instReprConfig_repr_spec__3_spec__5___redArg___closed__2_once, _init_l_List_repr___at___00Option_repr___at___00Lake_Check_instReprConfig_repr_spec__3_spec__5___redArg___closed__2);
v___x_3750_ = ((lean_object*)(l_List_repr___at___00Option_repr___at___00Lake_Check_instReprConfig_repr_spec__3_spec__5___redArg___closed__3));
v___x_3751_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3751_, 0, v___x_3750_);
lean_ctor_set(v___x_3751_, 1, v___x_3748_);
v___x_3752_ = ((lean_object*)(l_Array_repr___at___00Lake_Check_instReprConfig_repr_spec__0___closed__7));
v___x_3753_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3753_, 0, v___x_3751_);
lean_ctor_set(v___x_3753_, 1, v___x_3752_);
v___x_3754_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3754_, 0, v___x_3749_);
lean_ctor_set(v___x_3754_, 1, v___x_3753_);
v___x_3755_ = 0;
v___x_3756_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3756_, 0, v___x_3754_);
lean_ctor_set_uint8(v___x_3756_, sizeof(void*)*1, v___x_3755_);
return v___x_3756_;
}
}
}
LEAN_EXPORT lean_object* l_Option_repr___at___00Lake_Check_instReprConfig_repr_spec__3(lean_object* v_x_3760_, lean_object* v_x_3761_){
_start:
{
if (lean_obj_tag(v_x_3760_) == 0)
{
lean_object* v___x_3762_; 
v___x_3762_ = ((lean_object*)(l_Option_repr___at___00Lake_Check_instReprConfig_repr_spec__2___closed__1));
return v___x_3762_;
}
else
{
lean_object* v_val_3763_; lean_object* v___x_3764_; lean_object* v___x_3765_; lean_object* v___x_3766_; lean_object* v___x_3767_; lean_object* v___x_3768_; lean_object* v___x_3769_; lean_object* v___x_3770_; lean_object* v___x_3771_; lean_object* v___x_3772_; lean_object* v___x_3773_; 
v_val_3763_ = lean_ctor_get(v_x_3760_, 0);
v___x_3764_ = ((lean_object*)(l_Option_repr___at___00Lake_Check_instReprConfig_repr_spec__2___closed__3));
v___x_3765_ = lean_unsigned_to_nat(1024u);
v___x_3766_ = ((lean_object*)(l_Option_repr___at___00Lake_Check_instReprConfig_repr_spec__3___closed__1));
v___x_3767_ = lean_box(0);
v___x_3768_ = l_Std_DTreeMap_Internal_Impl_foldrM___at___00Option_repr___at___00Lake_Check_instReprConfig_repr_spec__3_spec__4(v___x_3767_, v_val_3763_);
v___x_3769_ = l_List_repr___at___00Option_repr___at___00Lake_Check_instReprConfig_repr_spec__3_spec__5___redArg(v___x_3768_);
v___x_3770_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3770_, 0, v___x_3766_);
lean_ctor_set(v___x_3770_, 1, v___x_3769_);
v___x_3771_ = l_Repr_addAppParen(v___x_3770_, v___x_3765_);
v___x_3772_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3772_, 0, v___x_3764_);
lean_ctor_set(v___x_3772_, 1, v___x_3771_);
v___x_3773_ = l_Repr_addAppParen(v___x_3772_, v_x_3761_);
return v___x_3773_;
}
}
}
LEAN_EXPORT lean_object* l_Option_repr___at___00Lake_Check_instReprConfig_repr_spec__3___boxed(lean_object* v_x_3774_, lean_object* v_x_3775_){
_start:
{
lean_object* v_res_3776_; 
v_res_3776_ = l_Option_repr___at___00Lake_Check_instReprConfig_repr_spec__3(v_x_3774_, v_x_3775_);
lean_dec(v_x_3775_);
lean_dec(v_x_3774_);
return v_res_3776_;
}
}
static lean_object* _init_l_Lake_Check_instReprConfig_repr___redArg___closed__6(void){
_start:
{
lean_object* v___x_3789_; lean_object* v___x_3790_; 
v___x_3789_ = lean_unsigned_to_nat(20u);
v___x_3790_ = lean_nat_to_int(v___x_3789_);
return v___x_3790_;
}
}
static lean_object* _init_l_Lake_Check_instReprConfig_repr___redArg___closed__8(void){
_start:
{
lean_object* v___x_3793_; lean_object* v___x_3794_; 
v___x_3793_ = lean_unsigned_to_nat(19u);
v___x_3794_ = lean_nat_to_int(v___x_3793_);
return v___x_3794_;
}
}
static lean_object* _init_l_Lake_Check_instReprConfig_repr___redArg___closed__10(void){
_start:
{
lean_object* v___x_3797_; lean_object* v___x_3798_; 
v___x_3797_ = lean_unsigned_to_nat(17u);
v___x_3798_ = lean_nat_to_int(v___x_3797_);
return v___x_3798_;
}
}
static lean_object* _init_l_Lake_Check_instReprConfig_repr___redArg___closed__14(void){
_start:
{
lean_object* v___x_3805_; lean_object* v___x_3806_; 
v___x_3805_ = lean_unsigned_to_nat(18u);
v___x_3806_ = lean_nat_to_int(v___x_3805_);
return v___x_3806_;
}
}
static lean_object* _init_l_Lake_Check_instReprConfig_repr___redArg___closed__16(void){
_start:
{
lean_object* v___x_3809_; lean_object* v___x_3810_; 
v___x_3809_ = lean_unsigned_to_nat(21u);
v___x_3810_ = lean_nat_to_int(v___x_3809_);
return v___x_3810_;
}
}
static lean_object* _init_l_Lake_Check_instReprConfig_repr___redArg___closed__18(void){
_start:
{
lean_object* v___x_3812_; lean_object* v___x_3813_; 
v___x_3812_ = ((lean_object*)(l_Lake_Check_instReprConfig_repr___redArg___closed__0));
v___x_3813_ = lean_string_length(v___x_3812_);
return v___x_3813_;
}
}
static lean_object* _init_l_Lake_Check_instReprConfig_repr___redArg___closed__19(void){
_start:
{
lean_object* v___x_3814_; lean_object* v___x_3815_; 
v___x_3814_ = lean_obj_once(&l_Lake_Check_instReprConfig_repr___redArg___closed__18, &l_Lake_Check_instReprConfig_repr___redArg___closed__18_once, _init_l_Lake_Check_instReprConfig_repr___redArg___closed__18);
v___x_3815_ = lean_nat_to_int(v___x_3814_);
return v___x_3815_;
}
}
LEAN_EXPORT lean_object* l_Lake_Check_instReprConfig_repr___redArg(lean_object* v_x_3820_){
_start:
{
lean_object* v_challenge__module_3821_; lean_object* v_solution__module_3822_; lean_object* v_theorem__names_3823_; lean_object* v_definition__names_3824_; lean_object* v_permitted__axioms_3825_; lean_object* v_enable__nanoda_x3f_3826_; lean_object* v_external__kernels_x3f_3827_; lean_object* v___x_3828_; lean_object* v___x_3829_; lean_object* v___x_3830_; lean_object* v___x_3831_; lean_object* v___x_3832_; lean_object* v___x_3833_; uint8_t v___x_3834_; lean_object* v___x_3835_; lean_object* v___x_3836_; lean_object* v___x_3837_; lean_object* v___x_3838_; lean_object* v___x_3839_; lean_object* v___x_3840_; lean_object* v___x_3841_; lean_object* v___x_3842_; lean_object* v___x_3843_; lean_object* v___x_3844_; lean_object* v___x_3845_; lean_object* v___x_3846_; lean_object* v___x_3847_; lean_object* v___x_3848_; lean_object* v___x_3849_; lean_object* v___x_3850_; lean_object* v___x_3851_; lean_object* v___x_3852_; lean_object* v___x_3853_; lean_object* v___x_3854_; lean_object* v___x_3855_; lean_object* v___x_3856_; lean_object* v___x_3857_; lean_object* v___x_3858_; lean_object* v___x_3859_; lean_object* v___x_3860_; lean_object* v___x_3861_; lean_object* v___x_3862_; lean_object* v___x_3863_; lean_object* v___x_3864_; lean_object* v___x_3865_; lean_object* v___x_3866_; lean_object* v___x_3867_; lean_object* v___x_3868_; lean_object* v___x_3869_; lean_object* v___x_3870_; lean_object* v___x_3871_; lean_object* v___x_3872_; lean_object* v___x_3873_; lean_object* v___x_3874_; lean_object* v___x_3875_; lean_object* v___x_3876_; lean_object* v___x_3877_; lean_object* v___x_3878_; lean_object* v___x_3879_; lean_object* v___x_3880_; lean_object* v___x_3881_; lean_object* v___x_3882_; lean_object* v___x_3883_; lean_object* v___x_3884_; lean_object* v___x_3885_; lean_object* v___x_3886_; lean_object* v___x_3887_; lean_object* v___x_3888_; lean_object* v___x_3889_; lean_object* v___x_3890_; lean_object* v___x_3891_; lean_object* v___x_3892_; lean_object* v___x_3893_; lean_object* v___x_3894_; lean_object* v___x_3895_; lean_object* v___x_3896_; lean_object* v___x_3897_; lean_object* v___x_3898_; lean_object* v___x_3899_; lean_object* v___x_3900_; lean_object* v___x_3901_; lean_object* v___x_3902_; lean_object* v___x_3903_; lean_object* v___x_3904_; lean_object* v___x_3905_; 
v_challenge__module_3821_ = lean_ctor_get(v_x_3820_, 0);
lean_inc_ref(v_challenge__module_3821_);
v_solution__module_3822_ = lean_ctor_get(v_x_3820_, 1);
lean_inc_ref(v_solution__module_3822_);
v_theorem__names_3823_ = lean_ctor_get(v_x_3820_, 2);
lean_inc_ref(v_theorem__names_3823_);
v_definition__names_3824_ = lean_ctor_get(v_x_3820_, 3);
lean_inc(v_definition__names_3824_);
v_permitted__axioms_3825_ = lean_ctor_get(v_x_3820_, 4);
lean_inc_ref(v_permitted__axioms_3825_);
v_enable__nanoda_x3f_3826_ = lean_ctor_get(v_x_3820_, 5);
lean_inc(v_enable__nanoda_x3f_3826_);
v_external__kernels_x3f_3827_ = lean_ctor_get(v_x_3820_, 6);
lean_inc(v_external__kernels_x3f_3827_);
lean_dec_ref(v_x_3820_);
v___x_3828_ = ((lean_object*)(l_Lake_Check_instReprConfig_repr___redArg___closed__4));
v___x_3829_ = ((lean_object*)(l_Lake_Check_instReprConfig_repr___redArg___closed__5));
v___x_3830_ = lean_obj_once(&l_Lake_Check_instReprConfig_repr___redArg___closed__6, &l_Lake_Check_instReprConfig_repr___redArg___closed__6_once, _init_l_Lake_Check_instReprConfig_repr___redArg___closed__6);
v___x_3831_ = l_String_quote(v_challenge__module_3821_);
v___x_3832_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3832_, 0, v___x_3831_);
v___x_3833_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3833_, 0, v___x_3830_);
lean_ctor_set(v___x_3833_, 1, v___x_3832_);
v___x_3834_ = 0;
v___x_3835_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3835_, 0, v___x_3833_);
lean_ctor_set_uint8(v___x_3835_, sizeof(void*)*1, v___x_3834_);
v___x_3836_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3836_, 0, v___x_3829_);
lean_ctor_set(v___x_3836_, 1, v___x_3835_);
v___x_3837_ = ((lean_object*)(l_Array_repr___at___00Lake_Check_instReprConfig_repr_spec__0___closed__2));
v___x_3838_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3838_, 0, v___x_3836_);
lean_ctor_set(v___x_3838_, 1, v___x_3837_);
v___x_3839_ = lean_box(1);
v___x_3840_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3840_, 0, v___x_3838_);
lean_ctor_set(v___x_3840_, 1, v___x_3839_);
v___x_3841_ = ((lean_object*)(l_Lake_Check_instReprConfig_repr___redArg___closed__7));
v___x_3842_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3842_, 0, v___x_3840_);
lean_ctor_set(v___x_3842_, 1, v___x_3841_);
v___x_3843_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3843_, 0, v___x_3842_);
lean_ctor_set(v___x_3843_, 1, v___x_3828_);
v___x_3844_ = lean_obj_once(&l_Lake_Check_instReprConfig_repr___redArg___closed__8, &l_Lake_Check_instReprConfig_repr___redArg___closed__8_once, _init_l_Lake_Check_instReprConfig_repr___redArg___closed__8);
v___x_3845_ = l_String_quote(v_solution__module_3822_);
v___x_3846_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3846_, 0, v___x_3845_);
v___x_3847_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3847_, 0, v___x_3844_);
lean_ctor_set(v___x_3847_, 1, v___x_3846_);
v___x_3848_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3848_, 0, v___x_3847_);
lean_ctor_set_uint8(v___x_3848_, sizeof(void*)*1, v___x_3834_);
v___x_3849_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3849_, 0, v___x_3843_);
lean_ctor_set(v___x_3849_, 1, v___x_3848_);
v___x_3850_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3850_, 0, v___x_3849_);
lean_ctor_set(v___x_3850_, 1, v___x_3837_);
v___x_3851_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3851_, 0, v___x_3850_);
lean_ctor_set(v___x_3851_, 1, v___x_3839_);
v___x_3852_ = ((lean_object*)(l_Lake_Check_instReprConfig_repr___redArg___closed__9));
v___x_3853_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3853_, 0, v___x_3851_);
lean_ctor_set(v___x_3853_, 1, v___x_3852_);
v___x_3854_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3854_, 0, v___x_3853_);
lean_ctor_set(v___x_3854_, 1, v___x_3828_);
v___x_3855_ = lean_obj_once(&l_Lake_Check_instReprConfig_repr___redArg___closed__10, &l_Lake_Check_instReprConfig_repr___redArg___closed__10_once, _init_l_Lake_Check_instReprConfig_repr___redArg___closed__10);
v___x_3856_ = l_Array_repr___at___00Lake_Check_instReprConfig_repr_spec__0(v_theorem__names_3823_);
v___x_3857_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3857_, 0, v___x_3855_);
lean_ctor_set(v___x_3857_, 1, v___x_3856_);
v___x_3858_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3858_, 0, v___x_3857_);
lean_ctor_set_uint8(v___x_3858_, sizeof(void*)*1, v___x_3834_);
v___x_3859_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3859_, 0, v___x_3854_);
lean_ctor_set(v___x_3859_, 1, v___x_3858_);
v___x_3860_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3860_, 0, v___x_3859_);
lean_ctor_set(v___x_3860_, 1, v___x_3837_);
v___x_3861_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3861_, 0, v___x_3860_);
lean_ctor_set(v___x_3861_, 1, v___x_3839_);
v___x_3862_ = ((lean_object*)(l_Lake_Check_instReprConfig_repr___redArg___closed__11));
v___x_3863_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3863_, 0, v___x_3861_);
lean_ctor_set(v___x_3863_, 1, v___x_3862_);
v___x_3864_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3864_, 0, v___x_3863_);
lean_ctor_set(v___x_3864_, 1, v___x_3828_);
v___x_3865_ = lean_unsigned_to_nat(0u);
v___x_3866_ = l_Option_repr___at___00Lake_Check_instReprConfig_repr_spec__1(v_definition__names_3824_, v___x_3865_);
v___x_3867_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3867_, 0, v___x_3830_);
lean_ctor_set(v___x_3867_, 1, v___x_3866_);
v___x_3868_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3868_, 0, v___x_3867_);
lean_ctor_set_uint8(v___x_3868_, sizeof(void*)*1, v___x_3834_);
v___x_3869_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3869_, 0, v___x_3864_);
lean_ctor_set(v___x_3869_, 1, v___x_3868_);
v___x_3870_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3870_, 0, v___x_3869_);
lean_ctor_set(v___x_3870_, 1, v___x_3837_);
v___x_3871_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3871_, 0, v___x_3870_);
lean_ctor_set(v___x_3871_, 1, v___x_3839_);
v___x_3872_ = ((lean_object*)(l_Lake_Check_instReprConfig_repr___redArg___closed__12));
v___x_3873_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3873_, 0, v___x_3871_);
lean_ctor_set(v___x_3873_, 1, v___x_3872_);
v___x_3874_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3874_, 0, v___x_3873_);
lean_ctor_set(v___x_3874_, 1, v___x_3828_);
v___x_3875_ = l_Array_repr___at___00Lake_Check_instReprConfig_repr_spec__0(v_permitted__axioms_3825_);
v___x_3876_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3876_, 0, v___x_3830_);
lean_ctor_set(v___x_3876_, 1, v___x_3875_);
v___x_3877_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3877_, 0, v___x_3876_);
lean_ctor_set_uint8(v___x_3877_, sizeof(void*)*1, v___x_3834_);
v___x_3878_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3878_, 0, v___x_3874_);
lean_ctor_set(v___x_3878_, 1, v___x_3877_);
v___x_3879_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3879_, 0, v___x_3878_);
lean_ctor_set(v___x_3879_, 1, v___x_3837_);
v___x_3880_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3880_, 0, v___x_3879_);
lean_ctor_set(v___x_3880_, 1, v___x_3839_);
v___x_3881_ = ((lean_object*)(l_Lake_Check_instReprConfig_repr___redArg___closed__13));
v___x_3882_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3882_, 0, v___x_3880_);
lean_ctor_set(v___x_3882_, 1, v___x_3881_);
v___x_3883_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3883_, 0, v___x_3882_);
lean_ctor_set(v___x_3883_, 1, v___x_3828_);
v___x_3884_ = lean_obj_once(&l_Lake_Check_instReprConfig_repr___redArg___closed__14, &l_Lake_Check_instReprConfig_repr___redArg___closed__14_once, _init_l_Lake_Check_instReprConfig_repr___redArg___closed__14);
v___x_3885_ = l_Option_repr___at___00Lake_Check_instReprConfig_repr_spec__2(v_enable__nanoda_x3f_3826_, v___x_3865_);
lean_dec(v_enable__nanoda_x3f_3826_);
v___x_3886_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3886_, 0, v___x_3884_);
lean_ctor_set(v___x_3886_, 1, v___x_3885_);
v___x_3887_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3887_, 0, v___x_3886_);
lean_ctor_set_uint8(v___x_3887_, sizeof(void*)*1, v___x_3834_);
v___x_3888_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3888_, 0, v___x_3883_);
lean_ctor_set(v___x_3888_, 1, v___x_3887_);
v___x_3889_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3889_, 0, v___x_3888_);
lean_ctor_set(v___x_3889_, 1, v___x_3837_);
v___x_3890_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3890_, 0, v___x_3889_);
lean_ctor_set(v___x_3890_, 1, v___x_3839_);
v___x_3891_ = ((lean_object*)(l_Lake_Check_instReprConfig_repr___redArg___closed__15));
v___x_3892_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3892_, 0, v___x_3890_);
lean_ctor_set(v___x_3892_, 1, v___x_3891_);
v___x_3893_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3893_, 0, v___x_3892_);
lean_ctor_set(v___x_3893_, 1, v___x_3828_);
v___x_3894_ = lean_obj_once(&l_Lake_Check_instReprConfig_repr___redArg___closed__16, &l_Lake_Check_instReprConfig_repr___redArg___closed__16_once, _init_l_Lake_Check_instReprConfig_repr___redArg___closed__16);
v___x_3895_ = l_Option_repr___at___00Lake_Check_instReprConfig_repr_spec__3(v_external__kernels_x3f_3827_, v___x_3865_);
lean_dec(v_external__kernels_x3f_3827_);
v___x_3896_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3896_, 0, v___x_3894_);
lean_ctor_set(v___x_3896_, 1, v___x_3895_);
v___x_3897_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3897_, 0, v___x_3896_);
lean_ctor_set_uint8(v___x_3897_, sizeof(void*)*1, v___x_3834_);
v___x_3898_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3898_, 0, v___x_3893_);
lean_ctor_set(v___x_3898_, 1, v___x_3897_);
v___x_3899_ = lean_obj_once(&l_Lake_Check_instReprConfig_repr___redArg___closed__19, &l_Lake_Check_instReprConfig_repr___redArg___closed__19_once, _init_l_Lake_Check_instReprConfig_repr___redArg___closed__19);
v___x_3900_ = ((lean_object*)(l_Lake_Check_instReprConfig_repr___redArg___closed__20));
v___x_3901_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3901_, 0, v___x_3900_);
lean_ctor_set(v___x_3901_, 1, v___x_3898_);
v___x_3902_ = ((lean_object*)(l_Lake_Check_instReprConfig_repr___redArg___closed__21));
v___x_3903_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3903_, 0, v___x_3901_);
lean_ctor_set(v___x_3903_, 1, v___x_3902_);
v___x_3904_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3904_, 0, v___x_3899_);
lean_ctor_set(v___x_3904_, 1, v___x_3903_);
v___x_3905_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3905_, 0, v___x_3904_);
lean_ctor_set_uint8(v___x_3905_, sizeof(void*)*1, v___x_3834_);
return v___x_3905_;
}
}
LEAN_EXPORT lean_object* l_Lake_Check_instReprConfig_repr(lean_object* v_x_3906_, lean_object* v_prec_3907_){
_start:
{
lean_object* v___x_3908_; 
v___x_3908_ = l_Lake_Check_instReprConfig_repr___redArg(v_x_3906_);
return v___x_3908_;
}
}
LEAN_EXPORT lean_object* l_Lake_Check_instReprConfig_repr___boxed(lean_object* v_x_3909_, lean_object* v_prec_3910_){
_start:
{
lean_object* v_res_3911_; 
v_res_3911_ = l_Lake_Check_instReprConfig_repr(v_x_3909_, v_prec_3910_);
lean_dec(v_prec_3910_);
return v_res_3911_;
}
}
LEAN_EXPORT lean_object* l_List_repr___at___00Option_repr___at___00Lake_Check_instReprConfig_repr_spec__3_spec__5(lean_object* v_a_3912_, lean_object* v_n_3913_){
_start:
{
lean_object* v___x_3914_; 
v___x_3914_ = l_List_repr___at___00Option_repr___at___00Lake_Check_instReprConfig_repr_spec__3_spec__5___redArg(v_a_3912_);
return v___x_3914_;
}
}
LEAN_EXPORT lean_object* l_List_repr___at___00Option_repr___at___00Lake_Check_instReprConfig_repr_spec__3_spec__5___boxed(lean_object* v_a_3915_, lean_object* v_n_3916_){
_start:
{
lean_object* v_res_3917_; 
v_res_3917_ = l_List_repr___at___00Option_repr___at___00Lake_Check_instReprConfig_repr_spec__3_spec__5(v_a_3915_, v_n_3916_);
lean_dec(v_n_3916_);
return v_res_3917_;
}
}
LEAN_EXPORT lean_object* l_Prod_repr___at___00List_repr___at___00Option_repr___at___00Lake_Check_instReprConfig_repr_spec__3_spec__5_spec__8(lean_object* v_x_3918_, lean_object* v_x_3919_){
_start:
{
lean_object* v___x_3920_; 
v___x_3920_ = l_Prod_repr___at___00List_repr___at___00Option_repr___at___00Lake_Check_instReprConfig_repr_spec__3_spec__5_spec__8___redArg(v_x_3918_);
return v___x_3920_;
}
}
LEAN_EXPORT lean_object* l_Prod_repr___at___00List_repr___at___00Option_repr___at___00Lake_Check_instReprConfig_repr_spec__3_spec__5_spec__8___boxed(lean_object* v_x_3921_, lean_object* v_x_3922_){
_start:
{
lean_object* v_res_3923_; 
v_res_3923_ = l_Prod_repr___at___00List_repr___at___00Option_repr___at___00Lake_Check_instReprConfig_repr_spec__3_spec__5_spec__8(v_x_3921_, v_x_3922_);
lean_dec(v_x_3922_);
return v_res_3923_;
}
}
LEAN_EXPORT lean_object* l_IO_eprintln___at___00__private_Lake_CLI_Check_0__Lake_Check_cannotRun_spec__0(lean_object* v_s_3926_){
_start:
{
uint32_t v___x_3928_; lean_object* v___x_3929_; lean_object* v___x_3930_; 
v___x_3928_ = 10;
v___x_3929_ = lean_string_push(v_s_3926_, v___x_3928_);
v___x_3930_ = l_IO_eprint___at___00__private_Lake_CLI_Check_0__Lake_Check_runSandBoxedWithStdoutTo_spec__0(v___x_3929_);
return v___x_3930_;
}
}
LEAN_EXPORT lean_object* l_IO_eprintln___at___00__private_Lake_CLI_Check_0__Lake_Check_cannotRun_spec__0___boxed(lean_object* v_s_3931_, lean_object* v_a_3932_){
_start:
{
lean_object* v_res_3933_; 
v_res_3933_ = l_IO_eprintln___at___00__private_Lake_CLI_Check_0__Lake_Check_cannotRun_spec__0(v_s_3931_);
return v_res_3933_;
}
}
static lean_object* _init_l___private_Lake_CLI_Check_0__Lake_Check_cannotRun___boxed__const__1(void){
_start:
{
uint32_t v___x_3935_; lean_object* v___x_3936_; 
v___x_3935_ = 2;
v___x_3936_ = lean_box_uint32(v___x_3935_);
return v___x_3936_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_Check_0__Lake_Check_cannotRun(lean_object* v_msg_3937_){
_start:
{
lean_object* v___x_3939_; lean_object* v___x_3940_; lean_object* v___x_3941_; 
v___x_3939_ = ((lean_object*)(l___private_Lake_CLI_Check_0__Lake_Check_cannotRun___closed__0));
v___x_3940_ = lean_string_append(v___x_3939_, v_msg_3937_);
v___x_3941_ = l_IO_eprintln___at___00__private_Lake_CLI_Check_0__Lake_Check_cannotRun_spec__0(v___x_3940_);
if (lean_obj_tag(v___x_3941_) == 0)
{
lean_object* v___x_3943_; uint8_t v_isShared_3944_; uint8_t v_isSharedCheck_3949_; 
v_isSharedCheck_3949_ = !lean_is_exclusive(v___x_3941_);
if (v_isSharedCheck_3949_ == 0)
{
lean_object* v_unused_3950_; 
v_unused_3950_ = lean_ctor_get(v___x_3941_, 0);
lean_dec(v_unused_3950_);
v___x_3943_ = v___x_3941_;
v_isShared_3944_ = v_isSharedCheck_3949_;
goto v_resetjp_3942_;
}
else
{
lean_dec(v___x_3941_);
v___x_3943_ = lean_box(0);
v_isShared_3944_ = v_isSharedCheck_3949_;
goto v_resetjp_3942_;
}
v_resetjp_3942_:
{
lean_object* v___x_3945_; lean_object* v___x_3947_; 
v___x_3945_ = l___private_Lake_CLI_Check_0__Lake_Check_cannotRun___boxed__const__1;
if (v_isShared_3944_ == 0)
{
lean_ctor_set(v___x_3943_, 0, v___x_3945_);
v___x_3947_ = v___x_3943_;
goto v_reusejp_3946_;
}
else
{
lean_object* v_reuseFailAlloc_3948_; 
v_reuseFailAlloc_3948_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3948_, 0, v___x_3945_);
v___x_3947_ = v_reuseFailAlloc_3948_;
goto v_reusejp_3946_;
}
v_reusejp_3946_:
{
return v___x_3947_;
}
}
}
else
{
lean_object* v_a_3951_; lean_object* v___x_3953_; uint8_t v_isShared_3954_; uint8_t v_isSharedCheck_3958_; 
v_a_3951_ = lean_ctor_get(v___x_3941_, 0);
v_isSharedCheck_3958_ = !lean_is_exclusive(v___x_3941_);
if (v_isSharedCheck_3958_ == 0)
{
v___x_3953_ = v___x_3941_;
v_isShared_3954_ = v_isSharedCheck_3958_;
goto v_resetjp_3952_;
}
else
{
lean_inc(v_a_3951_);
lean_dec(v___x_3941_);
v___x_3953_ = lean_box(0);
v_isShared_3954_ = v_isSharedCheck_3958_;
goto v_resetjp_3952_;
}
v_resetjp_3952_:
{
lean_object* v___x_3956_; 
if (v_isShared_3954_ == 0)
{
v___x_3956_ = v___x_3953_;
goto v_reusejp_3955_;
}
else
{
lean_object* v_reuseFailAlloc_3957_; 
v_reuseFailAlloc_3957_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3957_, 0, v_a_3951_);
v___x_3956_ = v_reuseFailAlloc_3957_;
goto v_reusejp_3955_;
}
v_reusejp_3955_:
{
return v___x_3956_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_Check_0__Lake_Check_cannotRun___boxed(lean_object* v_msg_3959_, lean_object* v_a_3960_){
_start:
{
lean_object* v_res_3961_; 
v_res_3961_ = l___private_Lake_CLI_Check_0__Lake_Check_cannotRun(v_msg_3959_);
lean_dec_ref(v_msg_3959_);
return v_res_3961_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_Check_0__Lake_Check_checkManifest(lean_object* v_cmd_3965_, lean_object* v_projectDir_3966_){
_start:
{
lean_object* v___x_3968_; lean_object* v___x_3969_; uint8_t v___x_3970_; 
v___x_3968_ = ((lean_object*)(l___private_Lake_CLI_Check_0__Lake_Check_checkManifest___closed__0));
lean_inc_ref(v_projectDir_3966_);
v___x_3969_ = l_System_FilePath_join(v_projectDir_3966_, v___x_3968_);
v___x_3970_ = l_System_FilePath_pathExists(v___x_3969_);
lean_dec_ref(v___x_3969_);
if (v___x_3970_ == 0)
{
lean_object* v___x_3971_; lean_object* v___x_3972_; lean_object* v___x_3973_; lean_object* v___x_3974_; lean_object* v___x_3975_; lean_object* v___x_3976_; lean_object* v___x_3977_; lean_object* v___x_3978_; 
v___x_3971_ = ((lean_object*)(l_Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lake_Check_instFromJsonConfig_fromJson_spec__1_spec__1___closed__1));
v___x_3972_ = lean_string_append(v___x_3971_, v_projectDir_3966_);
lean_dec_ref(v_projectDir_3966_);
v___x_3973_ = ((lean_object*)(l___private_Lake_CLI_Check_0__Lake_Check_checkManifest___closed__1));
v___x_3974_ = lean_string_append(v___x_3972_, v___x_3973_);
v___x_3975_ = lean_string_append(v___x_3974_, v_cmd_3965_);
v___x_3976_ = ((lean_object*)(l___private_Lake_CLI_Check_0__Lake_Check_checkManifest___closed__2));
v___x_3977_ = lean_string_append(v___x_3975_, v___x_3976_);
v___x_3978_ = l___private_Lake_CLI_Check_0__Lake_Check_cannotRun(v___x_3977_);
lean_dec_ref(v___x_3977_);
if (lean_obj_tag(v___x_3978_) == 0)
{
lean_object* v_a_3979_; lean_object* v___x_3981_; uint8_t v_isShared_3982_; uint8_t v_isSharedCheck_3987_; 
v_a_3979_ = lean_ctor_get(v___x_3978_, 0);
v_isSharedCheck_3987_ = !lean_is_exclusive(v___x_3978_);
if (v_isSharedCheck_3987_ == 0)
{
v___x_3981_ = v___x_3978_;
v_isShared_3982_ = v_isSharedCheck_3987_;
goto v_resetjp_3980_;
}
else
{
lean_inc(v_a_3979_);
lean_dec(v___x_3978_);
v___x_3981_ = lean_box(0);
v_isShared_3982_ = v_isSharedCheck_3987_;
goto v_resetjp_3980_;
}
v_resetjp_3980_:
{
lean_object* v___x_3983_; lean_object* v___x_3985_; 
v___x_3983_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3983_, 0, v_a_3979_);
if (v_isShared_3982_ == 0)
{
lean_ctor_set(v___x_3981_, 0, v___x_3983_);
v___x_3985_ = v___x_3981_;
goto v_reusejp_3984_;
}
else
{
lean_object* v_reuseFailAlloc_3986_; 
v_reuseFailAlloc_3986_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3986_, 0, v___x_3983_);
v___x_3985_ = v_reuseFailAlloc_3986_;
goto v_reusejp_3984_;
}
v_reusejp_3984_:
{
return v___x_3985_;
}
}
}
else
{
lean_object* v_a_3988_; lean_object* v___x_3990_; uint8_t v_isShared_3991_; uint8_t v_isSharedCheck_3995_; 
v_a_3988_ = lean_ctor_get(v___x_3978_, 0);
v_isSharedCheck_3995_ = !lean_is_exclusive(v___x_3978_);
if (v_isSharedCheck_3995_ == 0)
{
v___x_3990_ = v___x_3978_;
v_isShared_3991_ = v_isSharedCheck_3995_;
goto v_resetjp_3989_;
}
else
{
lean_inc(v_a_3988_);
lean_dec(v___x_3978_);
v___x_3990_ = lean_box(0);
v_isShared_3991_ = v_isSharedCheck_3995_;
goto v_resetjp_3989_;
}
v_resetjp_3989_:
{
lean_object* v___x_3993_; 
if (v_isShared_3991_ == 0)
{
v___x_3993_ = v___x_3990_;
goto v_reusejp_3992_;
}
else
{
lean_object* v_reuseFailAlloc_3994_; 
v_reuseFailAlloc_3994_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3994_, 0, v_a_3988_);
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
else
{
lean_object* v___x_3996_; lean_object* v___x_3997_; 
lean_dec_ref(v_projectDir_3966_);
v___x_3996_ = lean_box(0);
v___x_3997_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3997_, 0, v___x_3996_);
return v___x_3997_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_Check_0__Lake_Check_checkManifest___boxed(lean_object* v_cmd_3998_, lean_object* v_projectDir_3999_, lean_object* v_a_4000_){
_start:
{
lean_object* v_res_4001_; 
v_res_4001_ = l___private_Lake_CLI_Check_0__Lake_Check_checkManifest(v_cmd_3998_, v_projectDir_3999_);
lean_dec_ref(v_cmd_3998_);
return v_res_4001_;
}
}
static lean_object* _init_l___private_Lake_CLI_Check_0__Lake_Check_mkContext___closed__5(void){
_start:
{
lean_object* v___x_4007_; lean_object* v___x_4008_; 
v___x_4007_ = lean_box(0);
v___x_4008_ = l_unsafeCast___redArg(v___x_4007_);
return v___x_4008_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_Check_0__Lake_Check_mkContext(lean_object* v_cmd_4012_, lean_object* v_lean_4013_, lean_object* v_lake_4014_, lean_object* v_projectDir_4015_){
_start:
{
uint8_t v___x_4017_; 
v___x_4017_ = l_System_Platform_isLinux;
if (v___x_4017_ == 0)
{
lean_object* v___x_4018_; lean_object* v___x_4019_; lean_object* v___x_4020_; lean_object* v___x_4021_; lean_object* v___x_4022_; 
lean_dec_ref(v_projectDir_4015_);
lean_dec_ref(v_lean_4013_);
v___x_4018_ = ((lean_object*)(l___private_Lake_CLI_Check_0__Lake_Check_missingSandboxError___closed__0));
v___x_4019_ = lean_string_append(v___x_4018_, v_cmd_4012_);
v___x_4020_ = ((lean_object*)(l___private_Lake_CLI_Check_0__Lake_Check_mkContext___closed__0));
v___x_4021_ = lean_string_append(v___x_4019_, v___x_4020_);
v___x_4022_ = l___private_Lake_CLI_Check_0__Lake_Check_cannotRun(v___x_4021_);
lean_dec_ref(v___x_4021_);
if (lean_obj_tag(v___x_4022_) == 0)
{
lean_object* v_a_4023_; lean_object* v___x_4025_; uint8_t v_isShared_4026_; uint8_t v_isSharedCheck_4031_; 
v_a_4023_ = lean_ctor_get(v___x_4022_, 0);
v_isSharedCheck_4031_ = !lean_is_exclusive(v___x_4022_);
if (v_isSharedCheck_4031_ == 0)
{
v___x_4025_ = v___x_4022_;
v_isShared_4026_ = v_isSharedCheck_4031_;
goto v_resetjp_4024_;
}
else
{
lean_inc(v_a_4023_);
lean_dec(v___x_4022_);
v___x_4025_ = lean_box(0);
v_isShared_4026_ = v_isSharedCheck_4031_;
goto v_resetjp_4024_;
}
v_resetjp_4024_:
{
lean_object* v___x_4027_; lean_object* v___x_4029_; 
v___x_4027_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4027_, 0, v_a_4023_);
if (v_isShared_4026_ == 0)
{
lean_ctor_set(v___x_4025_, 0, v___x_4027_);
v___x_4029_ = v___x_4025_;
goto v_reusejp_4028_;
}
else
{
lean_object* v_reuseFailAlloc_4030_; 
v_reuseFailAlloc_4030_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4030_, 0, v___x_4027_);
v___x_4029_ = v_reuseFailAlloc_4030_;
goto v_reusejp_4028_;
}
v_reusejp_4028_:
{
return v___x_4029_;
}
}
}
else
{
lean_object* v_a_4032_; lean_object* v___x_4034_; uint8_t v_isShared_4035_; uint8_t v_isSharedCheck_4039_; 
v_a_4032_ = lean_ctor_get(v___x_4022_, 0);
v_isSharedCheck_4039_ = !lean_is_exclusive(v___x_4022_);
if (v_isSharedCheck_4039_ == 0)
{
v___x_4034_ = v___x_4022_;
v_isShared_4035_ = v_isSharedCheck_4039_;
goto v_resetjp_4033_;
}
else
{
lean_inc(v_a_4032_);
lean_dec(v___x_4022_);
v___x_4034_ = lean_box(0);
v_isShared_4035_ = v_isSharedCheck_4039_;
goto v_resetjp_4033_;
}
v_resetjp_4033_:
{
lean_object* v___x_4037_; 
if (v_isShared_4035_ == 0)
{
v___x_4037_ = v___x_4034_;
goto v_reusejp_4036_;
}
else
{
lean_object* v_reuseFailAlloc_4038_; 
v_reuseFailAlloc_4038_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4038_, 0, v_a_4032_);
v___x_4037_ = v_reuseFailAlloc_4038_;
goto v_reusejp_4036_;
}
v_reusejp_4036_:
{
return v___x_4037_;
}
}
}
}
else
{
lean_object* v___x_4040_; lean_object* v___x_4041_; lean_object* v___y_4043_; 
v___x_4040_ = ((lean_object*)(l___private_Lake_CLI_Check_0__Lake_Check_mkContext___closed__1));
v___x_4041_ = lean_io_getenv(v___x_4040_);
if (lean_obj_tag(v___x_4041_) == 0)
{
lean_object* v___x_4175_; 
v___x_4175_ = ((lean_object*)(l___private_Lake_CLI_Check_0__Lake_Check_mkContext___closed__8));
v___y_4043_ = v___x_4175_;
goto v___jp_4042_;
}
else
{
lean_object* v_val_4176_; 
v_val_4176_ = lean_ctor_get(v___x_4041_, 0);
lean_inc(v_val_4176_);
lean_dec_ref_known(v___x_4041_, 1);
v___y_4043_ = v_val_4176_;
goto v___jp_4042_;
}
v___jp_4042_:
{
lean_object* v___x_4044_; lean_object* v_a_4045_; lean_object* v___x_4047_; uint8_t v_isShared_4048_; uint8_t v_isSharedCheck_4174_; 
lean_inc_ref(v___y_4043_);
v___x_4044_ = l___private_Lake_CLI_Check_0__Lake_Check_whichExe(v___y_4043_);
v_a_4045_ = lean_ctor_get(v___x_4044_, 0);
v_isSharedCheck_4174_ = !lean_is_exclusive(v___x_4044_);
if (v_isSharedCheck_4174_ == 0)
{
v___x_4047_ = v___x_4044_;
v_isShared_4048_ = v_isSharedCheck_4174_;
goto v_resetjp_4046_;
}
else
{
lean_inc(v_a_4045_);
lean_dec(v___x_4044_);
v___x_4047_ = lean_box(0);
v_isShared_4048_ = v_isSharedCheck_4174_;
goto v_resetjp_4046_;
}
v_resetjp_4046_:
{
if (lean_obj_tag(v_a_4045_) == 1)
{
lean_object* v_val_4049_; lean_object* v_sysroot_4050_; lean_object* v_binDir_4051_; lean_object* v___x_4052_; lean_object* v___x_4053_; lean_object* v___x_4054_; lean_object* v___x_4055_; lean_object* v___x_4056_; lean_object* v___x_4057_; lean_object* v___x_4058_; lean_object* v___x_4059_; lean_object* v___x_4060_; lean_object* v_a_4061_; lean_object* v___x_4063_; uint8_t v_isShared_4064_; uint8_t v_isSharedCheck_4152_; 
lean_del_object(v___x_4047_);
lean_dec_ref(v___y_4043_);
v_val_4049_ = lean_ctor_get(v_a_4045_, 0);
lean_inc(v_val_4049_);
lean_dec_ref_known(v_a_4045_, 1);
v_sysroot_4050_ = lean_ctor_get(v_lean_4013_, 0);
lean_inc_ref(v_sysroot_4050_);
v_binDir_4051_ = lean_ctor_get(v_lean_4013_, 6);
lean_inc_ref_n(v_binDir_4051_, 2);
lean_dec_ref(v_lean_4013_);
v___x_4052_ = ((lean_object*)(l___private_Lake_CLI_Check_0__Lake_Check_mkContext___closed__2));
v___x_4053_ = l_System_FilePath_join(v_binDir_4051_, v___x_4052_);
v___x_4054_ = l_System_FilePath_exeExtension;
v___x_4055_ = l_System_FilePath_addExtension(v___x_4053_, v___x_4054_);
v___x_4056_ = ((lean_object*)(l___private_Lake_CLI_Check_0__Lake_Check_mkContext___closed__3));
v___x_4057_ = l_System_FilePath_join(v_binDir_4051_, v___x_4056_);
v___x_4058_ = l_System_FilePath_addExtension(v___x_4057_, v___x_4054_);
v___x_4059_ = ((lean_object*)(l___private_Lake_CLI_Check_0__Lake_Check_mkContext___closed__4));
v___x_4060_ = l___private_Lake_CLI_Check_0__Lake_Check_whichExe(v___x_4059_);
v_a_4061_ = lean_ctor_get(v___x_4060_, 0);
v_isSharedCheck_4152_ = !lean_is_exclusive(v___x_4060_);
if (v_isSharedCheck_4152_ == 0)
{
v___x_4063_ = v___x_4060_;
v_isShared_4064_ = v_isSharedCheck_4152_;
goto v_resetjp_4062_;
}
else
{
lean_inc(v_a_4061_);
lean_dec(v___x_4060_);
v___x_4063_ = lean_box(0);
v_isShared_4064_ = v_isSharedCheck_4152_;
goto v_resetjp_4062_;
}
v_resetjp_4062_:
{
if (lean_obj_tag(v_a_4061_) == 1)
{
lean_object* v___x_4065_; lean_object* v___x_4066_; lean_object* v_a_4067_; lean_object* v___x_4069_; uint8_t v_isShared_4070_; uint8_t v_isSharedCheck_4127_; 
lean_dec_ref_known(v_a_4061_, 1);
lean_del_object(v___x_4063_);
v___x_4065_ = ((lean_object*)(l___private_Lake_CLI_Check_0__Lake_Check_safeResolveWorkspace___closed__4));
v___x_4066_ = l___private_Lake_CLI_Check_0__Lake_Check_whichExe(v___x_4065_);
v_a_4067_ = lean_ctor_get(v___x_4066_, 0);
v_isSharedCheck_4127_ = !lean_is_exclusive(v___x_4066_);
if (v_isSharedCheck_4127_ == 0)
{
v___x_4069_ = v___x_4066_;
v_isShared_4070_ = v_isSharedCheck_4127_;
goto v_resetjp_4068_;
}
else
{
lean_inc(v_a_4067_);
lean_dec(v___x_4066_);
v___x_4069_ = lean_box(0);
v_isShared_4070_ = v_isSharedCheck_4127_;
goto v_resetjp_4068_;
}
v_resetjp_4068_:
{
if (lean_obj_tag(v_a_4067_) == 1)
{
lean_object* v_val_4071_; lean_object* v___x_4073_; uint8_t v_isShared_4074_; uint8_t v_isSharedCheck_4102_; 
lean_del_object(v___x_4069_);
v_val_4071_ = lean_ctor_get(v_a_4067_, 0);
v_isSharedCheck_4102_ = !lean_is_exclusive(v_a_4067_);
if (v_isSharedCheck_4102_ == 0)
{
v___x_4073_ = v_a_4067_;
v_isShared_4074_ = v_isSharedCheck_4102_;
goto v_resetjp_4072_;
}
else
{
lean_inc(v_val_4071_);
lean_dec(v_a_4067_);
v___x_4073_ = lean_box(0);
v_isShared_4074_ = v_isSharedCheck_4102_;
goto v_resetjp_4072_;
}
v_resetjp_4072_:
{
lean_object* v___x_4075_; 
v___x_4075_ = lean_io_realpath(v_projectDir_4015_);
if (lean_obj_tag(v___x_4075_) == 0)
{
lean_object* v_a_4076_; lean_object* v___x_4078_; uint8_t v_isShared_4079_; uint8_t v_isSharedCheck_4093_; 
v_a_4076_ = lean_ctor_get(v___x_4075_, 0);
v_isSharedCheck_4093_ = !lean_is_exclusive(v___x_4075_);
if (v_isSharedCheck_4093_ == 0)
{
v___x_4078_ = v___x_4075_;
v_isShared_4079_ = v_isSharedCheck_4093_;
goto v_resetjp_4077_;
}
else
{
lean_inc(v_a_4076_);
lean_dec(v___x_4075_);
v___x_4078_ = lean_box(0);
v_isShared_4079_ = v_isSharedCheck_4093_;
goto v_resetjp_4077_;
}
v_resetjp_4077_:
{
lean_object* v_home_4080_; lean_object* v_lake_4081_; lean_object* v___x_4082_; lean_object* v___x_4083_; lean_object* v___x_4084_; lean_object* v___x_4085_; lean_object* v___x_4086_; lean_object* v___x_4088_; 
v_home_4080_ = lean_ctor_get(v_lake_4014_, 0);
v_lake_4081_ = lean_ctor_get(v_lake_4014_, 5);
v___x_4082_ = lean_obj_once(&l___private_Lake_CLI_Check_0__Lake_Check_mkContext___closed__5, &l___private_Lake_CLI_Check_0__Lake_Check_mkContext___closed__5_once, _init_l___private_Lake_CLI_Check_0__Lake_Check_mkContext___closed__5);
v___x_4083_ = ((lean_object*)(l___private_Lake_CLI_Check_0__Lake_Check_builtinTargets___closed__0));
v___x_4084_ = ((lean_object*)(l___private_Lake_CLI_Check_0__Lake_Check_safeResolveWorkspace___closed__14));
v___x_4085_ = lean_box(1);
lean_inc_ref(v_home_4080_);
lean_inc_ref(v_lake_4081_);
v___x_4086_ = lean_alloc_ctor(0, 16, 0);
lean_ctor_set(v___x_4086_, 0, v_a_4076_);
lean_ctor_set(v___x_4086_, 1, v___x_4082_);
lean_ctor_set(v___x_4086_, 2, v___x_4082_);
lean_ctor_set(v___x_4086_, 3, v___x_4083_);
lean_ctor_set(v___x_4086_, 4, v___x_4083_);
lean_ctor_set(v___x_4086_, 5, v___x_4083_);
lean_ctor_set(v___x_4086_, 6, v_sysroot_4050_);
lean_ctor_set(v___x_4086_, 7, v___x_4084_);
lean_ctor_set(v___x_4086_, 8, v___x_4084_);
lean_ctor_set(v___x_4086_, 9, v_val_4049_);
lean_ctor_set(v___x_4086_, 10, v_lake_4081_);
lean_ctor_set(v___x_4086_, 11, v_home_4080_);
lean_ctor_set(v___x_4086_, 12, v___x_4055_);
lean_ctor_set(v___x_4086_, 13, v___x_4058_);
lean_ctor_set(v___x_4086_, 14, v_val_4071_);
lean_ctor_set(v___x_4086_, 15, v___x_4085_);
if (v_isShared_4074_ == 0)
{
lean_ctor_set(v___x_4073_, 0, v___x_4086_);
v___x_4088_ = v___x_4073_;
goto v_reusejp_4087_;
}
else
{
lean_object* v_reuseFailAlloc_4092_; 
v_reuseFailAlloc_4092_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4092_, 0, v___x_4086_);
v___x_4088_ = v_reuseFailAlloc_4092_;
goto v_reusejp_4087_;
}
v_reusejp_4087_:
{
lean_object* v___x_4090_; 
if (v_isShared_4079_ == 0)
{
lean_ctor_set(v___x_4078_, 0, v___x_4088_);
v___x_4090_ = v___x_4078_;
goto v_reusejp_4089_;
}
else
{
lean_object* v_reuseFailAlloc_4091_; 
v_reuseFailAlloc_4091_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4091_, 0, v___x_4088_);
v___x_4090_ = v_reuseFailAlloc_4091_;
goto v_reusejp_4089_;
}
v_reusejp_4089_:
{
return v___x_4090_;
}
}
}
}
else
{
lean_object* v_a_4094_; lean_object* v___x_4096_; uint8_t v_isShared_4097_; uint8_t v_isSharedCheck_4101_; 
lean_del_object(v___x_4073_);
lean_dec(v_val_4071_);
lean_dec_ref(v___x_4058_);
lean_dec_ref(v___x_4055_);
lean_dec_ref(v_sysroot_4050_);
lean_dec(v_val_4049_);
v_a_4094_ = lean_ctor_get(v___x_4075_, 0);
v_isSharedCheck_4101_ = !lean_is_exclusive(v___x_4075_);
if (v_isSharedCheck_4101_ == 0)
{
v___x_4096_ = v___x_4075_;
v_isShared_4097_ = v_isSharedCheck_4101_;
goto v_resetjp_4095_;
}
else
{
lean_inc(v_a_4094_);
lean_dec(v___x_4075_);
v___x_4096_ = lean_box(0);
v_isShared_4097_ = v_isSharedCheck_4101_;
goto v_resetjp_4095_;
}
v_resetjp_4095_:
{
lean_object* v___x_4099_; 
if (v_isShared_4097_ == 0)
{
v___x_4099_ = v___x_4096_;
goto v_reusejp_4098_;
}
else
{
lean_object* v_reuseFailAlloc_4100_; 
v_reuseFailAlloc_4100_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4100_, 0, v_a_4094_);
v___x_4099_ = v_reuseFailAlloc_4100_;
goto v_reusejp_4098_;
}
v_reusejp_4098_:
{
return v___x_4099_;
}
}
}
}
}
else
{
lean_object* v___x_4103_; lean_object* v___x_4104_; lean_object* v___x_4105_; lean_object* v___x_4106_; lean_object* v___x_4107_; 
lean_dec(v_a_4067_);
lean_dec_ref(v___x_4058_);
lean_dec_ref(v___x_4055_);
lean_dec_ref(v_sysroot_4050_);
lean_dec(v_val_4049_);
lean_dec_ref(v_projectDir_4015_);
v___x_4103_ = ((lean_object*)(l___private_Lake_CLI_Check_0__Lake_Check_missingSandboxError___closed__0));
v___x_4104_ = lean_string_append(v___x_4103_, v_cmd_4012_);
v___x_4105_ = ((lean_object*)(l___private_Lake_CLI_Check_0__Lake_Check_mkContext___closed__6));
v___x_4106_ = lean_string_append(v___x_4104_, v___x_4105_);
v___x_4107_ = l___private_Lake_CLI_Check_0__Lake_Check_cannotRun(v___x_4106_);
lean_dec_ref(v___x_4106_);
if (lean_obj_tag(v___x_4107_) == 0)
{
lean_object* v_a_4108_; lean_object* v___x_4110_; uint8_t v_isShared_4111_; uint8_t v_isSharedCheck_4118_; 
v_a_4108_ = lean_ctor_get(v___x_4107_, 0);
v_isSharedCheck_4118_ = !lean_is_exclusive(v___x_4107_);
if (v_isSharedCheck_4118_ == 0)
{
v___x_4110_ = v___x_4107_;
v_isShared_4111_ = v_isSharedCheck_4118_;
goto v_resetjp_4109_;
}
else
{
lean_inc(v_a_4108_);
lean_dec(v___x_4107_);
v___x_4110_ = lean_box(0);
v_isShared_4111_ = v_isSharedCheck_4118_;
goto v_resetjp_4109_;
}
v_resetjp_4109_:
{
lean_object* v___x_4113_; 
if (v_isShared_4070_ == 0)
{
lean_ctor_set(v___x_4069_, 0, v_a_4108_);
v___x_4113_ = v___x_4069_;
goto v_reusejp_4112_;
}
else
{
lean_object* v_reuseFailAlloc_4117_; 
v_reuseFailAlloc_4117_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4117_, 0, v_a_4108_);
v___x_4113_ = v_reuseFailAlloc_4117_;
goto v_reusejp_4112_;
}
v_reusejp_4112_:
{
lean_object* v___x_4115_; 
if (v_isShared_4111_ == 0)
{
lean_ctor_set(v___x_4110_, 0, v___x_4113_);
v___x_4115_ = v___x_4110_;
goto v_reusejp_4114_;
}
else
{
lean_object* v_reuseFailAlloc_4116_; 
v_reuseFailAlloc_4116_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4116_, 0, v___x_4113_);
v___x_4115_ = v_reuseFailAlloc_4116_;
goto v_reusejp_4114_;
}
v_reusejp_4114_:
{
return v___x_4115_;
}
}
}
}
else
{
lean_object* v_a_4119_; lean_object* v___x_4121_; uint8_t v_isShared_4122_; uint8_t v_isSharedCheck_4126_; 
lean_del_object(v___x_4069_);
v_a_4119_ = lean_ctor_get(v___x_4107_, 0);
v_isSharedCheck_4126_ = !lean_is_exclusive(v___x_4107_);
if (v_isSharedCheck_4126_ == 0)
{
v___x_4121_ = v___x_4107_;
v_isShared_4122_ = v_isSharedCheck_4126_;
goto v_resetjp_4120_;
}
else
{
lean_inc(v_a_4119_);
lean_dec(v___x_4107_);
v___x_4121_ = lean_box(0);
v_isShared_4122_ = v_isSharedCheck_4126_;
goto v_resetjp_4120_;
}
v_resetjp_4120_:
{
lean_object* v___x_4124_; 
if (v_isShared_4122_ == 0)
{
v___x_4124_ = v___x_4121_;
goto v_reusejp_4123_;
}
else
{
lean_object* v_reuseFailAlloc_4125_; 
v_reuseFailAlloc_4125_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4125_, 0, v_a_4119_);
v___x_4124_ = v_reuseFailAlloc_4125_;
goto v_reusejp_4123_;
}
v_reusejp_4123_:
{
return v___x_4124_;
}
}
}
}
}
}
else
{
lean_object* v___x_4128_; lean_object* v___x_4129_; lean_object* v___x_4130_; lean_object* v___x_4131_; lean_object* v___x_4132_; 
lean_dec(v_a_4061_);
lean_dec_ref(v___x_4058_);
lean_dec_ref(v___x_4055_);
lean_dec_ref(v_sysroot_4050_);
lean_dec(v_val_4049_);
lean_dec_ref(v_projectDir_4015_);
v___x_4128_ = ((lean_object*)(l___private_Lake_CLI_Check_0__Lake_Check_missingSandboxError___closed__0));
v___x_4129_ = lean_string_append(v___x_4128_, v_cmd_4012_);
v___x_4130_ = ((lean_object*)(l___private_Lake_CLI_Check_0__Lake_Check_mkContext___closed__7));
v___x_4131_ = lean_string_append(v___x_4129_, v___x_4130_);
v___x_4132_ = l___private_Lake_CLI_Check_0__Lake_Check_cannotRun(v___x_4131_);
lean_dec_ref(v___x_4131_);
if (lean_obj_tag(v___x_4132_) == 0)
{
lean_object* v_a_4133_; lean_object* v___x_4135_; uint8_t v_isShared_4136_; uint8_t v_isSharedCheck_4143_; 
v_a_4133_ = lean_ctor_get(v___x_4132_, 0);
v_isSharedCheck_4143_ = !lean_is_exclusive(v___x_4132_);
if (v_isSharedCheck_4143_ == 0)
{
v___x_4135_ = v___x_4132_;
v_isShared_4136_ = v_isSharedCheck_4143_;
goto v_resetjp_4134_;
}
else
{
lean_inc(v_a_4133_);
lean_dec(v___x_4132_);
v___x_4135_ = lean_box(0);
v_isShared_4136_ = v_isSharedCheck_4143_;
goto v_resetjp_4134_;
}
v_resetjp_4134_:
{
lean_object* v___x_4138_; 
if (v_isShared_4064_ == 0)
{
lean_ctor_set(v___x_4063_, 0, v_a_4133_);
v___x_4138_ = v___x_4063_;
goto v_reusejp_4137_;
}
else
{
lean_object* v_reuseFailAlloc_4142_; 
v_reuseFailAlloc_4142_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4142_, 0, v_a_4133_);
v___x_4138_ = v_reuseFailAlloc_4142_;
goto v_reusejp_4137_;
}
v_reusejp_4137_:
{
lean_object* v___x_4140_; 
if (v_isShared_4136_ == 0)
{
lean_ctor_set(v___x_4135_, 0, v___x_4138_);
v___x_4140_ = v___x_4135_;
goto v_reusejp_4139_;
}
else
{
lean_object* v_reuseFailAlloc_4141_; 
v_reuseFailAlloc_4141_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4141_, 0, v___x_4138_);
v___x_4140_ = v_reuseFailAlloc_4141_;
goto v_reusejp_4139_;
}
v_reusejp_4139_:
{
return v___x_4140_;
}
}
}
}
else
{
lean_object* v_a_4144_; lean_object* v___x_4146_; uint8_t v_isShared_4147_; uint8_t v_isSharedCheck_4151_; 
lean_del_object(v___x_4063_);
v_a_4144_ = lean_ctor_get(v___x_4132_, 0);
v_isSharedCheck_4151_ = !lean_is_exclusive(v___x_4132_);
if (v_isSharedCheck_4151_ == 0)
{
v___x_4146_ = v___x_4132_;
v_isShared_4147_ = v_isSharedCheck_4151_;
goto v_resetjp_4145_;
}
else
{
lean_inc(v_a_4144_);
lean_dec(v___x_4132_);
v___x_4146_ = lean_box(0);
v_isShared_4147_ = v_isSharedCheck_4151_;
goto v_resetjp_4145_;
}
v_resetjp_4145_:
{
lean_object* v___x_4149_; 
if (v_isShared_4147_ == 0)
{
v___x_4149_ = v___x_4146_;
goto v_reusejp_4148_;
}
else
{
lean_object* v_reuseFailAlloc_4150_; 
v_reuseFailAlloc_4150_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4150_, 0, v_a_4144_);
v___x_4149_ = v_reuseFailAlloc_4150_;
goto v_reusejp_4148_;
}
v_reusejp_4148_:
{
return v___x_4149_;
}
}
}
}
}
}
else
{
lean_object* v___x_4153_; lean_object* v___x_4154_; 
lean_dec(v_a_4045_);
lean_dec_ref(v_projectDir_4015_);
lean_dec_ref(v_lean_4013_);
v___x_4153_ = l___private_Lake_CLI_Check_0__Lake_Check_missingSandboxError(v_cmd_4012_, v___y_4043_);
lean_dec_ref(v___y_4043_);
v___x_4154_ = l___private_Lake_CLI_Check_0__Lake_Check_cannotRun(v___x_4153_);
lean_dec_ref(v___x_4153_);
if (lean_obj_tag(v___x_4154_) == 0)
{
lean_object* v_a_4155_; lean_object* v___x_4157_; uint8_t v_isShared_4158_; uint8_t v_isSharedCheck_4165_; 
v_a_4155_ = lean_ctor_get(v___x_4154_, 0);
v_isSharedCheck_4165_ = !lean_is_exclusive(v___x_4154_);
if (v_isSharedCheck_4165_ == 0)
{
v___x_4157_ = v___x_4154_;
v_isShared_4158_ = v_isSharedCheck_4165_;
goto v_resetjp_4156_;
}
else
{
lean_inc(v_a_4155_);
lean_dec(v___x_4154_);
v___x_4157_ = lean_box(0);
v_isShared_4158_ = v_isSharedCheck_4165_;
goto v_resetjp_4156_;
}
v_resetjp_4156_:
{
lean_object* v___x_4160_; 
if (v_isShared_4048_ == 0)
{
lean_ctor_set(v___x_4047_, 0, v_a_4155_);
v___x_4160_ = v___x_4047_;
goto v_reusejp_4159_;
}
else
{
lean_object* v_reuseFailAlloc_4164_; 
v_reuseFailAlloc_4164_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4164_, 0, v_a_4155_);
v___x_4160_ = v_reuseFailAlloc_4164_;
goto v_reusejp_4159_;
}
v_reusejp_4159_:
{
lean_object* v___x_4162_; 
if (v_isShared_4158_ == 0)
{
lean_ctor_set(v___x_4157_, 0, v___x_4160_);
v___x_4162_ = v___x_4157_;
goto v_reusejp_4161_;
}
else
{
lean_object* v_reuseFailAlloc_4163_; 
v_reuseFailAlloc_4163_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4163_, 0, v___x_4160_);
v___x_4162_ = v_reuseFailAlloc_4163_;
goto v_reusejp_4161_;
}
v_reusejp_4161_:
{
return v___x_4162_;
}
}
}
}
else
{
lean_object* v_a_4166_; lean_object* v___x_4168_; uint8_t v_isShared_4169_; uint8_t v_isSharedCheck_4173_; 
lean_del_object(v___x_4047_);
v_a_4166_ = lean_ctor_get(v___x_4154_, 0);
v_isSharedCheck_4173_ = !lean_is_exclusive(v___x_4154_);
if (v_isSharedCheck_4173_ == 0)
{
v___x_4168_ = v___x_4154_;
v_isShared_4169_ = v_isSharedCheck_4173_;
goto v_resetjp_4167_;
}
else
{
lean_inc(v_a_4166_);
lean_dec(v___x_4154_);
v___x_4168_ = lean_box(0);
v_isShared_4169_ = v_isSharedCheck_4173_;
goto v_resetjp_4167_;
}
v_resetjp_4167_:
{
lean_object* v___x_4171_; 
if (v_isShared_4169_ == 0)
{
v___x_4171_ = v___x_4168_;
goto v_reusejp_4170_;
}
else
{
lean_object* v_reuseFailAlloc_4172_; 
v_reuseFailAlloc_4172_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4172_, 0, v_a_4166_);
v___x_4171_ = v_reuseFailAlloc_4172_;
goto v_reusejp_4170_;
}
v_reusejp_4170_:
{
return v___x_4171_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_Check_0__Lake_Check_mkContext___boxed(lean_object* v_cmd_4177_, lean_object* v_lean_4178_, lean_object* v_lake_4179_, lean_object* v_projectDir_4180_, lean_object* v_a_4181_){
_start:
{
lean_object* v_res_4182_; 
v_res_4182_ = l___private_Lake_CLI_Check_0__Lake_Check_mkContext(v_cmd_4177_, v_lean_4178_, v_lake_4179_, v_projectDir_4180_);
lean_dec_ref(v_lake_4179_);
lean_dec_ref(v_cmd_4177_);
return v_res_4182_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lake_CLI_Check_0__Lake_Check_resolveExternalKernels_spec__0(lean_object* v_init_4189_, lean_object* v_x_4190_){
_start:
{
lean_object* v_d_4193_; 
if (lean_obj_tag(v_x_4190_) == 0)
{
lean_object* v_k_4196_; lean_object* v_v_4197_; lean_object* v_l_4198_; lean_object* v_r_4199_; lean_object* v___x_4200_; lean_object* v___x_4201_; lean_object* v___x_4202_; lean_object* v___x_4203_; 
v_k_4196_ = lean_ctor_get(v_x_4190_, 1);
v_v_4197_ = lean_ctor_get(v_x_4190_, 2);
v_l_4198_ = lean_ctor_get(v_x_4190_, 3);
v_r_4199_ = lean_ctor_get(v_x_4190_, 4);
v___x_4200_ = ((lean_object*)(l___private_Lake_CLI_Check_0__Lake_Check_safeResolveWorkspace___closed__14));
v___x_4201_ = lean_box(0);
v___x_4202_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lake_CLI_Check_0__Lake_Check_resolveExternalKernels_spec__0___closed__0));
v___x_4203_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lake_CLI_Check_0__Lake_Check_resolveExternalKernels_spec__0(v_init_4189_, v_l_4198_);
if (lean_obj_tag(v___x_4203_) == 0)
{
lean_object* v_a_4204_; 
v_a_4204_ = lean_ctor_get(v___x_4203_, 0);
lean_inc(v_a_4204_);
lean_dec_ref_known(v___x_4203_, 1);
if (lean_obj_tag(v_a_4204_) == 0)
{
lean_object* v_a_4205_; 
v_a_4205_ = lean_ctor_get(v_a_4204_, 0);
lean_inc(v_a_4205_);
lean_dec_ref_known(v_a_4204_, 1);
v_d_4193_ = v_a_4205_;
goto v___jp_4192_;
}
else
{
lean_object* v___x_4207_; uint8_t v_isShared_4208_; uint8_t v_isSharedCheck_4242_; 
v_isSharedCheck_4242_ = !lean_is_exclusive(v_a_4204_);
if (v_isSharedCheck_4242_ == 0)
{
lean_object* v_unused_4243_; 
v_unused_4243_ = lean_ctor_get(v_a_4204_, 0);
lean_dec(v_unused_4243_);
v___x_4207_ = v_a_4204_;
v_isShared_4208_ = v_isSharedCheck_4242_;
goto v_resetjp_4206_;
}
else
{
lean_dec(v_a_4204_);
v___x_4207_ = lean_box(0);
v_isShared_4208_ = v_isSharedCheck_4242_;
goto v_resetjp_4206_;
}
v_resetjp_4206_:
{
lean_object* v___x_4209_; lean_object* v___x_4210_; lean_object* v___x_4211_; lean_object* v_a_4212_; lean_object* v___x_4214_; uint8_t v_isShared_4215_; uint8_t v_isSharedCheck_4241_; 
v___x_4209_ = lean_unsigned_to_nat(0u);
v___x_4210_ = lean_array_get_borrowed(v___x_4200_, v_v_4197_, v___x_4209_);
lean_inc(v___x_4210_);
v___x_4211_ = l___private_Lake_CLI_Check_0__Lake_Check_whichExe(v___x_4210_);
v_a_4212_ = lean_ctor_get(v___x_4211_, 0);
v_isSharedCheck_4241_ = !lean_is_exclusive(v___x_4211_);
if (v_isSharedCheck_4241_ == 0)
{
v___x_4214_ = v___x_4211_;
v_isShared_4215_ = v_isSharedCheck_4241_;
goto v_resetjp_4213_;
}
else
{
lean_inc(v_a_4212_);
lean_dec(v___x_4211_);
v___x_4214_ = lean_box(0);
v_isShared_4215_ = v_isSharedCheck_4241_;
goto v_resetjp_4213_;
}
v_resetjp_4213_:
{
if (lean_obj_tag(v_a_4212_) == 0)
{
lean_object* v___x_4216_; lean_object* v___x_4217_; lean_object* v___x_4218_; lean_object* v___x_4219_; lean_object* v___x_4220_; lean_object* v___x_4221_; lean_object* v___x_4222_; lean_object* v___x_4223_; 
v___x_4216_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lake_CLI_Check_0__Lake_Check_resolveExternalKernels_spec__0___closed__1));
v___x_4217_ = lean_string_append(v___x_4216_, v_k_4196_);
v___x_4218_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lake_CLI_Check_0__Lake_Check_resolveExternalKernels_spec__0___closed__2));
v___x_4219_ = lean_string_append(v___x_4217_, v___x_4218_);
v___x_4220_ = lean_string_append(v___x_4219_, v___x_4210_);
v___x_4221_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lake_CLI_Check_0__Lake_Check_resolveExternalKernels_spec__0___closed__3));
v___x_4222_ = lean_string_append(v___x_4220_, v___x_4221_);
v___x_4223_ = l___private_Lake_CLI_Check_0__Lake_Check_cannotRun(v___x_4222_);
lean_dec_ref(v___x_4222_);
if (lean_obj_tag(v___x_4223_) == 0)
{
lean_object* v_a_4224_; lean_object* v___x_4226_; 
v_a_4224_ = lean_ctor_get(v___x_4223_, 0);
lean_inc(v_a_4224_);
lean_dec_ref_known(v___x_4223_, 1);
if (v_isShared_4215_ == 0)
{
lean_ctor_set(v___x_4214_, 0, v_a_4224_);
v___x_4226_ = v___x_4214_;
goto v_reusejp_4225_;
}
else
{
lean_object* v_reuseFailAlloc_4231_; 
v_reuseFailAlloc_4231_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4231_, 0, v_a_4224_);
v___x_4226_ = v_reuseFailAlloc_4231_;
goto v_reusejp_4225_;
}
v_reusejp_4225_:
{
lean_object* v___x_4228_; 
if (v_isShared_4208_ == 0)
{
lean_ctor_set(v___x_4207_, 0, v___x_4226_);
v___x_4228_ = v___x_4207_;
goto v_reusejp_4227_;
}
else
{
lean_object* v_reuseFailAlloc_4230_; 
v_reuseFailAlloc_4230_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4230_, 0, v___x_4226_);
v___x_4228_ = v_reuseFailAlloc_4230_;
goto v_reusejp_4227_;
}
v_reusejp_4227_:
{
lean_object* v___x_4229_; 
v___x_4229_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4229_, 0, v___x_4228_);
lean_ctor_set(v___x_4229_, 1, v___x_4201_);
v_d_4193_ = v___x_4229_;
goto v___jp_4192_;
}
}
}
else
{
lean_object* v_a_4232_; lean_object* v___x_4234_; uint8_t v_isShared_4235_; uint8_t v_isSharedCheck_4239_; 
lean_del_object(v___x_4214_);
lean_del_object(v___x_4207_);
v_a_4232_ = lean_ctor_get(v___x_4223_, 0);
v_isSharedCheck_4239_ = !lean_is_exclusive(v___x_4223_);
if (v_isSharedCheck_4239_ == 0)
{
v___x_4234_ = v___x_4223_;
v_isShared_4235_ = v_isSharedCheck_4239_;
goto v_resetjp_4233_;
}
else
{
lean_inc(v_a_4232_);
lean_dec(v___x_4223_);
v___x_4234_ = lean_box(0);
v_isShared_4235_ = v_isSharedCheck_4239_;
goto v_resetjp_4233_;
}
v_resetjp_4233_:
{
lean_object* v___x_4237_; 
if (v_isShared_4235_ == 0)
{
v___x_4237_ = v___x_4234_;
goto v_reusejp_4236_;
}
else
{
lean_object* v_reuseFailAlloc_4238_; 
v_reuseFailAlloc_4238_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4238_, 0, v_a_4232_);
v___x_4237_ = v_reuseFailAlloc_4238_;
goto v_reusejp_4236_;
}
v_reusejp_4236_:
{
return v___x_4237_;
}
}
}
}
else
{
lean_dec_ref_known(v_a_4212_, 1);
lean_del_object(v___x_4214_);
lean_del_object(v___x_4207_);
v_init_4189_ = v___x_4202_;
v_x_4190_ = v_r_4199_;
goto _start;
}
}
}
}
}
else
{
return v___x_4203_;
}
}
else
{
lean_object* v___x_4244_; lean_object* v___x_4245_; 
v___x_4244_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4244_, 0, v_init_4189_);
v___x_4245_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4245_, 0, v___x_4244_);
return v___x_4245_;
}
v___jp_4192_:
{
lean_object* v___x_4194_; lean_object* v___x_4195_; 
v___x_4194_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4194_, 0, v_d_4193_);
v___x_4195_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4195_, 0, v___x_4194_);
return v___x_4195_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lake_CLI_Check_0__Lake_Check_resolveExternalKernels_spec__0___boxed(lean_object* v_init_4246_, lean_object* v_x_4247_, lean_object* v___y_4248_){
_start:
{
lean_object* v_res_4249_; 
v_res_4249_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lake_CLI_Check_0__Lake_Check_resolveExternalKernels_spec__0(v_init_4246_, v_x_4247_);
lean_dec(v_x_4247_);
return v_res_4249_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lake_CLI_Check_0__Lake_Check_resolveExternalKernels_spec__1___redArg(lean_object* v_k_4250_, lean_object* v_v_4251_, lean_object* v_t_4252_){
_start:
{
if (lean_obj_tag(v_t_4252_) == 0)
{
lean_object* v_size_4253_; lean_object* v_k_4254_; lean_object* v_v_4255_; lean_object* v_l_4256_; lean_object* v_r_4257_; lean_object* v___x_4259_; uint8_t v_isShared_4260_; uint8_t v_isSharedCheck_4537_; 
v_size_4253_ = lean_ctor_get(v_t_4252_, 0);
v_k_4254_ = lean_ctor_get(v_t_4252_, 1);
v_v_4255_ = lean_ctor_get(v_t_4252_, 2);
v_l_4256_ = lean_ctor_get(v_t_4252_, 3);
v_r_4257_ = lean_ctor_get(v_t_4252_, 4);
v_isSharedCheck_4537_ = !lean_is_exclusive(v_t_4252_);
if (v_isSharedCheck_4537_ == 0)
{
v___x_4259_ = v_t_4252_;
v_isShared_4260_ = v_isSharedCheck_4537_;
goto v_resetjp_4258_;
}
else
{
lean_inc(v_r_4257_);
lean_inc(v_l_4256_);
lean_inc(v_v_4255_);
lean_inc(v_k_4254_);
lean_inc(v_size_4253_);
lean_dec(v_t_4252_);
v___x_4259_ = lean_box(0);
v_isShared_4260_ = v_isSharedCheck_4537_;
goto v_resetjp_4258_;
}
v_resetjp_4258_:
{
uint8_t v___x_4261_; 
v___x_4261_ = lean_string_compare(v_k_4250_, v_k_4254_);
switch(v___x_4261_)
{
case 0:
{
lean_object* v_impl_4262_; lean_object* v___x_4263_; 
lean_dec(v_size_4253_);
v_impl_4262_ = l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lake_CLI_Check_0__Lake_Check_resolveExternalKernels_spec__1___redArg(v_k_4250_, v_v_4251_, v_l_4256_);
v___x_4263_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_r_4257_) == 0)
{
lean_object* v_size_4264_; lean_object* v_size_4265_; lean_object* v_k_4266_; lean_object* v_v_4267_; lean_object* v_l_4268_; lean_object* v_r_4269_; lean_object* v___x_4270_; lean_object* v___x_4271_; uint8_t v___x_4272_; 
v_size_4264_ = lean_ctor_get(v_r_4257_, 0);
v_size_4265_ = lean_ctor_get(v_impl_4262_, 0);
lean_inc(v_size_4265_);
v_k_4266_ = lean_ctor_get(v_impl_4262_, 1);
lean_inc(v_k_4266_);
v_v_4267_ = lean_ctor_get(v_impl_4262_, 2);
lean_inc(v_v_4267_);
v_l_4268_ = lean_ctor_get(v_impl_4262_, 3);
lean_inc(v_l_4268_);
v_r_4269_ = lean_ctor_get(v_impl_4262_, 4);
lean_inc(v_r_4269_);
v___x_4270_ = lean_unsigned_to_nat(3u);
v___x_4271_ = lean_nat_mul(v___x_4270_, v_size_4264_);
v___x_4272_ = lean_nat_dec_lt(v___x_4271_, v_size_4265_);
lean_dec(v___x_4271_);
if (v___x_4272_ == 0)
{
lean_object* v___x_4273_; lean_object* v___x_4274_; lean_object* v___x_4276_; 
lean_dec(v_r_4269_);
lean_dec(v_l_4268_);
lean_dec(v_v_4267_);
lean_dec(v_k_4266_);
v___x_4273_ = lean_nat_add(v___x_4263_, v_size_4265_);
lean_dec(v_size_4265_);
v___x_4274_ = lean_nat_add(v___x_4273_, v_size_4264_);
lean_dec(v___x_4273_);
if (v_isShared_4260_ == 0)
{
lean_ctor_set(v___x_4259_, 3, v_impl_4262_);
lean_ctor_set(v___x_4259_, 0, v___x_4274_);
v___x_4276_ = v___x_4259_;
goto v_reusejp_4275_;
}
else
{
lean_object* v_reuseFailAlloc_4277_; 
v_reuseFailAlloc_4277_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4277_, 0, v___x_4274_);
lean_ctor_set(v_reuseFailAlloc_4277_, 1, v_k_4254_);
lean_ctor_set(v_reuseFailAlloc_4277_, 2, v_v_4255_);
lean_ctor_set(v_reuseFailAlloc_4277_, 3, v_impl_4262_);
lean_ctor_set(v_reuseFailAlloc_4277_, 4, v_r_4257_);
v___x_4276_ = v_reuseFailAlloc_4277_;
goto v_reusejp_4275_;
}
v_reusejp_4275_:
{
return v___x_4276_;
}
}
else
{
lean_object* v___x_4279_; uint8_t v_isShared_4280_; uint8_t v_isSharedCheck_4343_; 
v_isSharedCheck_4343_ = !lean_is_exclusive(v_impl_4262_);
if (v_isSharedCheck_4343_ == 0)
{
lean_object* v_unused_4344_; lean_object* v_unused_4345_; lean_object* v_unused_4346_; lean_object* v_unused_4347_; lean_object* v_unused_4348_; 
v_unused_4344_ = lean_ctor_get(v_impl_4262_, 4);
lean_dec(v_unused_4344_);
v_unused_4345_ = lean_ctor_get(v_impl_4262_, 3);
lean_dec(v_unused_4345_);
v_unused_4346_ = lean_ctor_get(v_impl_4262_, 2);
lean_dec(v_unused_4346_);
v_unused_4347_ = lean_ctor_get(v_impl_4262_, 1);
lean_dec(v_unused_4347_);
v_unused_4348_ = lean_ctor_get(v_impl_4262_, 0);
lean_dec(v_unused_4348_);
v___x_4279_ = v_impl_4262_;
v_isShared_4280_ = v_isSharedCheck_4343_;
goto v_resetjp_4278_;
}
else
{
lean_dec(v_impl_4262_);
v___x_4279_ = lean_box(0);
v_isShared_4280_ = v_isSharedCheck_4343_;
goto v_resetjp_4278_;
}
v_resetjp_4278_:
{
lean_object* v_size_4281_; lean_object* v_size_4282_; lean_object* v_k_4283_; lean_object* v_v_4284_; lean_object* v_l_4285_; lean_object* v_r_4286_; lean_object* v___x_4287_; lean_object* v___x_4288_; uint8_t v___x_4289_; 
v_size_4281_ = lean_ctor_get(v_l_4268_, 0);
v_size_4282_ = lean_ctor_get(v_r_4269_, 0);
v_k_4283_ = lean_ctor_get(v_r_4269_, 1);
v_v_4284_ = lean_ctor_get(v_r_4269_, 2);
v_l_4285_ = lean_ctor_get(v_r_4269_, 3);
v_r_4286_ = lean_ctor_get(v_r_4269_, 4);
v___x_4287_ = lean_unsigned_to_nat(2u);
v___x_4288_ = lean_nat_mul(v___x_4287_, v_size_4281_);
v___x_4289_ = lean_nat_dec_lt(v_size_4282_, v___x_4288_);
lean_dec(v___x_4288_);
if (v___x_4289_ == 0)
{
lean_object* v___x_4291_; uint8_t v_isShared_4292_; uint8_t v_isSharedCheck_4318_; 
lean_inc(v_r_4286_);
lean_inc(v_l_4285_);
lean_inc(v_v_4284_);
lean_inc(v_k_4283_);
v_isSharedCheck_4318_ = !lean_is_exclusive(v_r_4269_);
if (v_isSharedCheck_4318_ == 0)
{
lean_object* v_unused_4319_; lean_object* v_unused_4320_; lean_object* v_unused_4321_; lean_object* v_unused_4322_; lean_object* v_unused_4323_; 
v_unused_4319_ = lean_ctor_get(v_r_4269_, 4);
lean_dec(v_unused_4319_);
v_unused_4320_ = lean_ctor_get(v_r_4269_, 3);
lean_dec(v_unused_4320_);
v_unused_4321_ = lean_ctor_get(v_r_4269_, 2);
lean_dec(v_unused_4321_);
v_unused_4322_ = lean_ctor_get(v_r_4269_, 1);
lean_dec(v_unused_4322_);
v_unused_4323_ = lean_ctor_get(v_r_4269_, 0);
lean_dec(v_unused_4323_);
v___x_4291_ = v_r_4269_;
v_isShared_4292_ = v_isSharedCheck_4318_;
goto v_resetjp_4290_;
}
else
{
lean_dec(v_r_4269_);
v___x_4291_ = lean_box(0);
v_isShared_4292_ = v_isSharedCheck_4318_;
goto v_resetjp_4290_;
}
v_resetjp_4290_:
{
lean_object* v___x_4293_; lean_object* v___x_4294_; lean_object* v___y_4296_; lean_object* v___y_4297_; lean_object* v___y_4298_; lean_object* v___x_4306_; lean_object* v___y_4308_; 
v___x_4293_ = lean_nat_add(v___x_4263_, v_size_4265_);
lean_dec(v_size_4265_);
v___x_4294_ = lean_nat_add(v___x_4293_, v_size_4264_);
lean_dec(v___x_4293_);
v___x_4306_ = lean_nat_add(v___x_4263_, v_size_4281_);
if (lean_obj_tag(v_l_4285_) == 0)
{
lean_object* v_size_4316_; 
v_size_4316_ = lean_ctor_get(v_l_4285_, 0);
lean_inc(v_size_4316_);
v___y_4308_ = v_size_4316_;
goto v___jp_4307_;
}
else
{
lean_object* v___x_4317_; 
v___x_4317_ = lean_unsigned_to_nat(0u);
v___y_4308_ = v___x_4317_;
goto v___jp_4307_;
}
v___jp_4295_:
{
lean_object* v___x_4299_; lean_object* v___x_4301_; 
v___x_4299_ = lean_nat_add(v___y_4296_, v___y_4298_);
lean_dec(v___y_4298_);
lean_dec(v___y_4296_);
if (v_isShared_4292_ == 0)
{
lean_ctor_set(v___x_4291_, 4, v_r_4257_);
lean_ctor_set(v___x_4291_, 3, v_r_4286_);
lean_ctor_set(v___x_4291_, 2, v_v_4255_);
lean_ctor_set(v___x_4291_, 1, v_k_4254_);
lean_ctor_set(v___x_4291_, 0, v___x_4299_);
v___x_4301_ = v___x_4291_;
goto v_reusejp_4300_;
}
else
{
lean_object* v_reuseFailAlloc_4305_; 
v_reuseFailAlloc_4305_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4305_, 0, v___x_4299_);
lean_ctor_set(v_reuseFailAlloc_4305_, 1, v_k_4254_);
lean_ctor_set(v_reuseFailAlloc_4305_, 2, v_v_4255_);
lean_ctor_set(v_reuseFailAlloc_4305_, 3, v_r_4286_);
lean_ctor_set(v_reuseFailAlloc_4305_, 4, v_r_4257_);
v___x_4301_ = v_reuseFailAlloc_4305_;
goto v_reusejp_4300_;
}
v_reusejp_4300_:
{
lean_object* v___x_4303_; 
if (v_isShared_4280_ == 0)
{
lean_ctor_set(v___x_4279_, 4, v___x_4301_);
lean_ctor_set(v___x_4279_, 3, v___y_4297_);
lean_ctor_set(v___x_4279_, 2, v_v_4284_);
lean_ctor_set(v___x_4279_, 1, v_k_4283_);
lean_ctor_set(v___x_4279_, 0, v___x_4294_);
v___x_4303_ = v___x_4279_;
goto v_reusejp_4302_;
}
else
{
lean_object* v_reuseFailAlloc_4304_; 
v_reuseFailAlloc_4304_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4304_, 0, v___x_4294_);
lean_ctor_set(v_reuseFailAlloc_4304_, 1, v_k_4283_);
lean_ctor_set(v_reuseFailAlloc_4304_, 2, v_v_4284_);
lean_ctor_set(v_reuseFailAlloc_4304_, 3, v___y_4297_);
lean_ctor_set(v_reuseFailAlloc_4304_, 4, v___x_4301_);
v___x_4303_ = v_reuseFailAlloc_4304_;
goto v_reusejp_4302_;
}
v_reusejp_4302_:
{
return v___x_4303_;
}
}
}
v___jp_4307_:
{
lean_object* v___x_4309_; lean_object* v___x_4311_; 
v___x_4309_ = lean_nat_add(v___x_4306_, v___y_4308_);
lean_dec(v___y_4308_);
lean_dec(v___x_4306_);
if (v_isShared_4260_ == 0)
{
lean_ctor_set(v___x_4259_, 4, v_l_4285_);
lean_ctor_set(v___x_4259_, 3, v_l_4268_);
lean_ctor_set(v___x_4259_, 2, v_v_4267_);
lean_ctor_set(v___x_4259_, 1, v_k_4266_);
lean_ctor_set(v___x_4259_, 0, v___x_4309_);
v___x_4311_ = v___x_4259_;
goto v_reusejp_4310_;
}
else
{
lean_object* v_reuseFailAlloc_4315_; 
v_reuseFailAlloc_4315_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4315_, 0, v___x_4309_);
lean_ctor_set(v_reuseFailAlloc_4315_, 1, v_k_4266_);
lean_ctor_set(v_reuseFailAlloc_4315_, 2, v_v_4267_);
lean_ctor_set(v_reuseFailAlloc_4315_, 3, v_l_4268_);
lean_ctor_set(v_reuseFailAlloc_4315_, 4, v_l_4285_);
v___x_4311_ = v_reuseFailAlloc_4315_;
goto v_reusejp_4310_;
}
v_reusejp_4310_:
{
lean_object* v___x_4312_; 
v___x_4312_ = lean_nat_add(v___x_4263_, v_size_4264_);
if (lean_obj_tag(v_r_4286_) == 0)
{
lean_object* v_size_4313_; 
v_size_4313_ = lean_ctor_get(v_r_4286_, 0);
lean_inc(v_size_4313_);
v___y_4296_ = v___x_4312_;
v___y_4297_ = v___x_4311_;
v___y_4298_ = v_size_4313_;
goto v___jp_4295_;
}
else
{
lean_object* v___x_4314_; 
v___x_4314_ = lean_unsigned_to_nat(0u);
v___y_4296_ = v___x_4312_;
v___y_4297_ = v___x_4311_;
v___y_4298_ = v___x_4314_;
goto v___jp_4295_;
}
}
}
}
}
else
{
lean_object* v___x_4324_; lean_object* v___x_4325_; lean_object* v___x_4326_; lean_object* v___x_4327_; lean_object* v___x_4329_; 
lean_del_object(v___x_4259_);
v___x_4324_ = lean_nat_add(v___x_4263_, v_size_4265_);
lean_dec(v_size_4265_);
v___x_4325_ = lean_nat_add(v___x_4324_, v_size_4264_);
lean_dec(v___x_4324_);
v___x_4326_ = lean_nat_add(v___x_4263_, v_size_4264_);
v___x_4327_ = lean_nat_add(v___x_4326_, v_size_4282_);
lean_dec(v___x_4326_);
lean_inc_ref(v_r_4257_);
if (v_isShared_4280_ == 0)
{
lean_ctor_set(v___x_4279_, 4, v_r_4257_);
lean_ctor_set(v___x_4279_, 3, v_r_4269_);
lean_ctor_set(v___x_4279_, 2, v_v_4255_);
lean_ctor_set(v___x_4279_, 1, v_k_4254_);
lean_ctor_set(v___x_4279_, 0, v___x_4327_);
v___x_4329_ = v___x_4279_;
goto v_reusejp_4328_;
}
else
{
lean_object* v_reuseFailAlloc_4342_; 
v_reuseFailAlloc_4342_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4342_, 0, v___x_4327_);
lean_ctor_set(v_reuseFailAlloc_4342_, 1, v_k_4254_);
lean_ctor_set(v_reuseFailAlloc_4342_, 2, v_v_4255_);
lean_ctor_set(v_reuseFailAlloc_4342_, 3, v_r_4269_);
lean_ctor_set(v_reuseFailAlloc_4342_, 4, v_r_4257_);
v___x_4329_ = v_reuseFailAlloc_4342_;
goto v_reusejp_4328_;
}
v_reusejp_4328_:
{
lean_object* v___x_4331_; uint8_t v_isShared_4332_; uint8_t v_isSharedCheck_4336_; 
v_isSharedCheck_4336_ = !lean_is_exclusive(v_r_4257_);
if (v_isSharedCheck_4336_ == 0)
{
lean_object* v_unused_4337_; lean_object* v_unused_4338_; lean_object* v_unused_4339_; lean_object* v_unused_4340_; lean_object* v_unused_4341_; 
v_unused_4337_ = lean_ctor_get(v_r_4257_, 4);
lean_dec(v_unused_4337_);
v_unused_4338_ = lean_ctor_get(v_r_4257_, 3);
lean_dec(v_unused_4338_);
v_unused_4339_ = lean_ctor_get(v_r_4257_, 2);
lean_dec(v_unused_4339_);
v_unused_4340_ = lean_ctor_get(v_r_4257_, 1);
lean_dec(v_unused_4340_);
v_unused_4341_ = lean_ctor_get(v_r_4257_, 0);
lean_dec(v_unused_4341_);
v___x_4331_ = v_r_4257_;
v_isShared_4332_ = v_isSharedCheck_4336_;
goto v_resetjp_4330_;
}
else
{
lean_dec(v_r_4257_);
v___x_4331_ = lean_box(0);
v_isShared_4332_ = v_isSharedCheck_4336_;
goto v_resetjp_4330_;
}
v_resetjp_4330_:
{
lean_object* v___x_4334_; 
if (v_isShared_4332_ == 0)
{
lean_ctor_set(v___x_4331_, 4, v___x_4329_);
lean_ctor_set(v___x_4331_, 3, v_l_4268_);
lean_ctor_set(v___x_4331_, 2, v_v_4267_);
lean_ctor_set(v___x_4331_, 1, v_k_4266_);
lean_ctor_set(v___x_4331_, 0, v___x_4325_);
v___x_4334_ = v___x_4331_;
goto v_reusejp_4333_;
}
else
{
lean_object* v_reuseFailAlloc_4335_; 
v_reuseFailAlloc_4335_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4335_, 0, v___x_4325_);
lean_ctor_set(v_reuseFailAlloc_4335_, 1, v_k_4266_);
lean_ctor_set(v_reuseFailAlloc_4335_, 2, v_v_4267_);
lean_ctor_set(v_reuseFailAlloc_4335_, 3, v_l_4268_);
lean_ctor_set(v_reuseFailAlloc_4335_, 4, v___x_4329_);
v___x_4334_ = v_reuseFailAlloc_4335_;
goto v_reusejp_4333_;
}
v_reusejp_4333_:
{
return v___x_4334_;
}
}
}
}
}
}
}
else
{
lean_object* v_l_4349_; 
v_l_4349_ = lean_ctor_get(v_impl_4262_, 3);
lean_inc(v_l_4349_);
if (lean_obj_tag(v_l_4349_) == 0)
{
lean_object* v_r_4350_; lean_object* v_k_4351_; lean_object* v_v_4352_; lean_object* v___x_4354_; uint8_t v_isShared_4355_; uint8_t v_isSharedCheck_4363_; 
v_r_4350_ = lean_ctor_get(v_impl_4262_, 4);
v_k_4351_ = lean_ctor_get(v_impl_4262_, 1);
v_v_4352_ = lean_ctor_get(v_impl_4262_, 2);
v_isSharedCheck_4363_ = !lean_is_exclusive(v_impl_4262_);
if (v_isSharedCheck_4363_ == 0)
{
lean_object* v_unused_4364_; lean_object* v_unused_4365_; 
v_unused_4364_ = lean_ctor_get(v_impl_4262_, 3);
lean_dec(v_unused_4364_);
v_unused_4365_ = lean_ctor_get(v_impl_4262_, 0);
lean_dec(v_unused_4365_);
v___x_4354_ = v_impl_4262_;
v_isShared_4355_ = v_isSharedCheck_4363_;
goto v_resetjp_4353_;
}
else
{
lean_inc(v_r_4350_);
lean_inc(v_v_4352_);
lean_inc(v_k_4351_);
lean_dec(v_impl_4262_);
v___x_4354_ = lean_box(0);
v_isShared_4355_ = v_isSharedCheck_4363_;
goto v_resetjp_4353_;
}
v_resetjp_4353_:
{
lean_object* v___x_4356_; lean_object* v___x_4358_; 
v___x_4356_ = lean_unsigned_to_nat(3u);
lean_inc(v_r_4350_);
if (v_isShared_4355_ == 0)
{
lean_ctor_set(v___x_4354_, 3, v_r_4350_);
lean_ctor_set(v___x_4354_, 2, v_v_4255_);
lean_ctor_set(v___x_4354_, 1, v_k_4254_);
lean_ctor_set(v___x_4354_, 0, v___x_4263_);
v___x_4358_ = v___x_4354_;
goto v_reusejp_4357_;
}
else
{
lean_object* v_reuseFailAlloc_4362_; 
v_reuseFailAlloc_4362_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4362_, 0, v___x_4263_);
lean_ctor_set(v_reuseFailAlloc_4362_, 1, v_k_4254_);
lean_ctor_set(v_reuseFailAlloc_4362_, 2, v_v_4255_);
lean_ctor_set(v_reuseFailAlloc_4362_, 3, v_r_4350_);
lean_ctor_set(v_reuseFailAlloc_4362_, 4, v_r_4350_);
v___x_4358_ = v_reuseFailAlloc_4362_;
goto v_reusejp_4357_;
}
v_reusejp_4357_:
{
lean_object* v___x_4360_; 
if (v_isShared_4260_ == 0)
{
lean_ctor_set(v___x_4259_, 4, v___x_4358_);
lean_ctor_set(v___x_4259_, 3, v_l_4349_);
lean_ctor_set(v___x_4259_, 2, v_v_4352_);
lean_ctor_set(v___x_4259_, 1, v_k_4351_);
lean_ctor_set(v___x_4259_, 0, v___x_4356_);
v___x_4360_ = v___x_4259_;
goto v_reusejp_4359_;
}
else
{
lean_object* v_reuseFailAlloc_4361_; 
v_reuseFailAlloc_4361_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4361_, 0, v___x_4356_);
lean_ctor_set(v_reuseFailAlloc_4361_, 1, v_k_4351_);
lean_ctor_set(v_reuseFailAlloc_4361_, 2, v_v_4352_);
lean_ctor_set(v_reuseFailAlloc_4361_, 3, v_l_4349_);
lean_ctor_set(v_reuseFailAlloc_4361_, 4, v___x_4358_);
v___x_4360_ = v_reuseFailAlloc_4361_;
goto v_reusejp_4359_;
}
v_reusejp_4359_:
{
return v___x_4360_;
}
}
}
}
else
{
lean_object* v_r_4366_; 
v_r_4366_ = lean_ctor_get(v_impl_4262_, 4);
lean_inc(v_r_4366_);
if (lean_obj_tag(v_r_4366_) == 0)
{
lean_object* v_k_4367_; lean_object* v_v_4368_; lean_object* v___x_4370_; uint8_t v_isShared_4371_; uint8_t v_isSharedCheck_4391_; 
v_k_4367_ = lean_ctor_get(v_impl_4262_, 1);
v_v_4368_ = lean_ctor_get(v_impl_4262_, 2);
v_isSharedCheck_4391_ = !lean_is_exclusive(v_impl_4262_);
if (v_isSharedCheck_4391_ == 0)
{
lean_object* v_unused_4392_; lean_object* v_unused_4393_; lean_object* v_unused_4394_; 
v_unused_4392_ = lean_ctor_get(v_impl_4262_, 4);
lean_dec(v_unused_4392_);
v_unused_4393_ = lean_ctor_get(v_impl_4262_, 3);
lean_dec(v_unused_4393_);
v_unused_4394_ = lean_ctor_get(v_impl_4262_, 0);
lean_dec(v_unused_4394_);
v___x_4370_ = v_impl_4262_;
v_isShared_4371_ = v_isSharedCheck_4391_;
goto v_resetjp_4369_;
}
else
{
lean_inc(v_v_4368_);
lean_inc(v_k_4367_);
lean_dec(v_impl_4262_);
v___x_4370_ = lean_box(0);
v_isShared_4371_ = v_isSharedCheck_4391_;
goto v_resetjp_4369_;
}
v_resetjp_4369_:
{
lean_object* v_k_4372_; lean_object* v_v_4373_; lean_object* v___x_4375_; uint8_t v_isShared_4376_; uint8_t v_isSharedCheck_4387_; 
v_k_4372_ = lean_ctor_get(v_r_4366_, 1);
v_v_4373_ = lean_ctor_get(v_r_4366_, 2);
v_isSharedCheck_4387_ = !lean_is_exclusive(v_r_4366_);
if (v_isSharedCheck_4387_ == 0)
{
lean_object* v_unused_4388_; lean_object* v_unused_4389_; lean_object* v_unused_4390_; 
v_unused_4388_ = lean_ctor_get(v_r_4366_, 4);
lean_dec(v_unused_4388_);
v_unused_4389_ = lean_ctor_get(v_r_4366_, 3);
lean_dec(v_unused_4389_);
v_unused_4390_ = lean_ctor_get(v_r_4366_, 0);
lean_dec(v_unused_4390_);
v___x_4375_ = v_r_4366_;
v_isShared_4376_ = v_isSharedCheck_4387_;
goto v_resetjp_4374_;
}
else
{
lean_inc(v_v_4373_);
lean_inc(v_k_4372_);
lean_dec(v_r_4366_);
v___x_4375_ = lean_box(0);
v_isShared_4376_ = v_isSharedCheck_4387_;
goto v_resetjp_4374_;
}
v_resetjp_4374_:
{
lean_object* v___x_4377_; lean_object* v___x_4379_; 
v___x_4377_ = lean_unsigned_to_nat(3u);
if (v_isShared_4376_ == 0)
{
lean_ctor_set(v___x_4375_, 4, v_l_4349_);
lean_ctor_set(v___x_4375_, 3, v_l_4349_);
lean_ctor_set(v___x_4375_, 2, v_v_4368_);
lean_ctor_set(v___x_4375_, 1, v_k_4367_);
lean_ctor_set(v___x_4375_, 0, v___x_4263_);
v___x_4379_ = v___x_4375_;
goto v_reusejp_4378_;
}
else
{
lean_object* v_reuseFailAlloc_4386_; 
v_reuseFailAlloc_4386_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4386_, 0, v___x_4263_);
lean_ctor_set(v_reuseFailAlloc_4386_, 1, v_k_4367_);
lean_ctor_set(v_reuseFailAlloc_4386_, 2, v_v_4368_);
lean_ctor_set(v_reuseFailAlloc_4386_, 3, v_l_4349_);
lean_ctor_set(v_reuseFailAlloc_4386_, 4, v_l_4349_);
v___x_4379_ = v_reuseFailAlloc_4386_;
goto v_reusejp_4378_;
}
v_reusejp_4378_:
{
lean_object* v___x_4381_; 
if (v_isShared_4371_ == 0)
{
lean_ctor_set(v___x_4370_, 4, v_l_4349_);
lean_ctor_set(v___x_4370_, 2, v_v_4255_);
lean_ctor_set(v___x_4370_, 1, v_k_4254_);
lean_ctor_set(v___x_4370_, 0, v___x_4263_);
v___x_4381_ = v___x_4370_;
goto v_reusejp_4380_;
}
else
{
lean_object* v_reuseFailAlloc_4385_; 
v_reuseFailAlloc_4385_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4385_, 0, v___x_4263_);
lean_ctor_set(v_reuseFailAlloc_4385_, 1, v_k_4254_);
lean_ctor_set(v_reuseFailAlloc_4385_, 2, v_v_4255_);
lean_ctor_set(v_reuseFailAlloc_4385_, 3, v_l_4349_);
lean_ctor_set(v_reuseFailAlloc_4385_, 4, v_l_4349_);
v___x_4381_ = v_reuseFailAlloc_4385_;
goto v_reusejp_4380_;
}
v_reusejp_4380_:
{
lean_object* v___x_4383_; 
if (v_isShared_4260_ == 0)
{
lean_ctor_set(v___x_4259_, 4, v___x_4381_);
lean_ctor_set(v___x_4259_, 3, v___x_4379_);
lean_ctor_set(v___x_4259_, 2, v_v_4373_);
lean_ctor_set(v___x_4259_, 1, v_k_4372_);
lean_ctor_set(v___x_4259_, 0, v___x_4377_);
v___x_4383_ = v___x_4259_;
goto v_reusejp_4382_;
}
else
{
lean_object* v_reuseFailAlloc_4384_; 
v_reuseFailAlloc_4384_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4384_, 0, v___x_4377_);
lean_ctor_set(v_reuseFailAlloc_4384_, 1, v_k_4372_);
lean_ctor_set(v_reuseFailAlloc_4384_, 2, v_v_4373_);
lean_ctor_set(v_reuseFailAlloc_4384_, 3, v___x_4379_);
lean_ctor_set(v_reuseFailAlloc_4384_, 4, v___x_4381_);
v___x_4383_ = v_reuseFailAlloc_4384_;
goto v_reusejp_4382_;
}
v_reusejp_4382_:
{
return v___x_4383_;
}
}
}
}
}
}
else
{
lean_object* v___x_4395_; lean_object* v___x_4397_; 
v___x_4395_ = lean_unsigned_to_nat(2u);
if (v_isShared_4260_ == 0)
{
lean_ctor_set(v___x_4259_, 4, v_r_4366_);
lean_ctor_set(v___x_4259_, 3, v_impl_4262_);
lean_ctor_set(v___x_4259_, 0, v___x_4395_);
v___x_4397_ = v___x_4259_;
goto v_reusejp_4396_;
}
else
{
lean_object* v_reuseFailAlloc_4398_; 
v_reuseFailAlloc_4398_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4398_, 0, v___x_4395_);
lean_ctor_set(v_reuseFailAlloc_4398_, 1, v_k_4254_);
lean_ctor_set(v_reuseFailAlloc_4398_, 2, v_v_4255_);
lean_ctor_set(v_reuseFailAlloc_4398_, 3, v_impl_4262_);
lean_ctor_set(v_reuseFailAlloc_4398_, 4, v_r_4366_);
v___x_4397_ = v_reuseFailAlloc_4398_;
goto v_reusejp_4396_;
}
v_reusejp_4396_:
{
return v___x_4397_;
}
}
}
}
}
case 1:
{
lean_object* v___x_4400_; 
lean_dec(v_v_4255_);
lean_dec(v_k_4254_);
if (v_isShared_4260_ == 0)
{
lean_ctor_set(v___x_4259_, 2, v_v_4251_);
lean_ctor_set(v___x_4259_, 1, v_k_4250_);
v___x_4400_ = v___x_4259_;
goto v_reusejp_4399_;
}
else
{
lean_object* v_reuseFailAlloc_4401_; 
v_reuseFailAlloc_4401_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4401_, 0, v_size_4253_);
lean_ctor_set(v_reuseFailAlloc_4401_, 1, v_k_4250_);
lean_ctor_set(v_reuseFailAlloc_4401_, 2, v_v_4251_);
lean_ctor_set(v_reuseFailAlloc_4401_, 3, v_l_4256_);
lean_ctor_set(v_reuseFailAlloc_4401_, 4, v_r_4257_);
v___x_4400_ = v_reuseFailAlloc_4401_;
goto v_reusejp_4399_;
}
v_reusejp_4399_:
{
return v___x_4400_;
}
}
default: 
{
lean_object* v_impl_4402_; lean_object* v___x_4403_; 
lean_dec(v_size_4253_);
v_impl_4402_ = l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lake_CLI_Check_0__Lake_Check_resolveExternalKernels_spec__1___redArg(v_k_4250_, v_v_4251_, v_r_4257_);
v___x_4403_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_l_4256_) == 0)
{
lean_object* v_size_4404_; lean_object* v_size_4405_; lean_object* v_k_4406_; lean_object* v_v_4407_; lean_object* v_l_4408_; lean_object* v_r_4409_; lean_object* v___x_4410_; lean_object* v___x_4411_; uint8_t v___x_4412_; 
v_size_4404_ = lean_ctor_get(v_l_4256_, 0);
v_size_4405_ = lean_ctor_get(v_impl_4402_, 0);
lean_inc(v_size_4405_);
v_k_4406_ = lean_ctor_get(v_impl_4402_, 1);
lean_inc(v_k_4406_);
v_v_4407_ = lean_ctor_get(v_impl_4402_, 2);
lean_inc(v_v_4407_);
v_l_4408_ = lean_ctor_get(v_impl_4402_, 3);
lean_inc(v_l_4408_);
v_r_4409_ = lean_ctor_get(v_impl_4402_, 4);
lean_inc(v_r_4409_);
v___x_4410_ = lean_unsigned_to_nat(3u);
v___x_4411_ = lean_nat_mul(v___x_4410_, v_size_4404_);
v___x_4412_ = lean_nat_dec_lt(v___x_4411_, v_size_4405_);
lean_dec(v___x_4411_);
if (v___x_4412_ == 0)
{
lean_object* v___x_4413_; lean_object* v___x_4414_; lean_object* v___x_4416_; 
lean_dec(v_r_4409_);
lean_dec(v_l_4408_);
lean_dec(v_v_4407_);
lean_dec(v_k_4406_);
v___x_4413_ = lean_nat_add(v___x_4403_, v_size_4404_);
v___x_4414_ = lean_nat_add(v___x_4413_, v_size_4405_);
lean_dec(v_size_4405_);
lean_dec(v___x_4413_);
if (v_isShared_4260_ == 0)
{
lean_ctor_set(v___x_4259_, 4, v_impl_4402_);
lean_ctor_set(v___x_4259_, 0, v___x_4414_);
v___x_4416_ = v___x_4259_;
goto v_reusejp_4415_;
}
else
{
lean_object* v_reuseFailAlloc_4417_; 
v_reuseFailAlloc_4417_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4417_, 0, v___x_4414_);
lean_ctor_set(v_reuseFailAlloc_4417_, 1, v_k_4254_);
lean_ctor_set(v_reuseFailAlloc_4417_, 2, v_v_4255_);
lean_ctor_set(v_reuseFailAlloc_4417_, 3, v_l_4256_);
lean_ctor_set(v_reuseFailAlloc_4417_, 4, v_impl_4402_);
v___x_4416_ = v_reuseFailAlloc_4417_;
goto v_reusejp_4415_;
}
v_reusejp_4415_:
{
return v___x_4416_;
}
}
else
{
lean_object* v___x_4419_; uint8_t v_isShared_4420_; uint8_t v_isSharedCheck_4481_; 
v_isSharedCheck_4481_ = !lean_is_exclusive(v_impl_4402_);
if (v_isSharedCheck_4481_ == 0)
{
lean_object* v_unused_4482_; lean_object* v_unused_4483_; lean_object* v_unused_4484_; lean_object* v_unused_4485_; lean_object* v_unused_4486_; 
v_unused_4482_ = lean_ctor_get(v_impl_4402_, 4);
lean_dec(v_unused_4482_);
v_unused_4483_ = lean_ctor_get(v_impl_4402_, 3);
lean_dec(v_unused_4483_);
v_unused_4484_ = lean_ctor_get(v_impl_4402_, 2);
lean_dec(v_unused_4484_);
v_unused_4485_ = lean_ctor_get(v_impl_4402_, 1);
lean_dec(v_unused_4485_);
v_unused_4486_ = lean_ctor_get(v_impl_4402_, 0);
lean_dec(v_unused_4486_);
v___x_4419_ = v_impl_4402_;
v_isShared_4420_ = v_isSharedCheck_4481_;
goto v_resetjp_4418_;
}
else
{
lean_dec(v_impl_4402_);
v___x_4419_ = lean_box(0);
v_isShared_4420_ = v_isSharedCheck_4481_;
goto v_resetjp_4418_;
}
v_resetjp_4418_:
{
lean_object* v_size_4421_; lean_object* v_k_4422_; lean_object* v_v_4423_; lean_object* v_l_4424_; lean_object* v_r_4425_; lean_object* v_size_4426_; lean_object* v___x_4427_; lean_object* v___x_4428_; uint8_t v___x_4429_; 
v_size_4421_ = lean_ctor_get(v_l_4408_, 0);
v_k_4422_ = lean_ctor_get(v_l_4408_, 1);
v_v_4423_ = lean_ctor_get(v_l_4408_, 2);
v_l_4424_ = lean_ctor_get(v_l_4408_, 3);
v_r_4425_ = lean_ctor_get(v_l_4408_, 4);
v_size_4426_ = lean_ctor_get(v_r_4409_, 0);
v___x_4427_ = lean_unsigned_to_nat(2u);
v___x_4428_ = lean_nat_mul(v___x_4427_, v_size_4426_);
v___x_4429_ = lean_nat_dec_lt(v_size_4421_, v___x_4428_);
lean_dec(v___x_4428_);
if (v___x_4429_ == 0)
{
lean_object* v___x_4431_; uint8_t v_isShared_4432_; uint8_t v_isSharedCheck_4457_; 
lean_inc(v_r_4425_);
lean_inc(v_l_4424_);
lean_inc(v_v_4423_);
lean_inc(v_k_4422_);
v_isSharedCheck_4457_ = !lean_is_exclusive(v_l_4408_);
if (v_isSharedCheck_4457_ == 0)
{
lean_object* v_unused_4458_; lean_object* v_unused_4459_; lean_object* v_unused_4460_; lean_object* v_unused_4461_; lean_object* v_unused_4462_; 
v_unused_4458_ = lean_ctor_get(v_l_4408_, 4);
lean_dec(v_unused_4458_);
v_unused_4459_ = lean_ctor_get(v_l_4408_, 3);
lean_dec(v_unused_4459_);
v_unused_4460_ = lean_ctor_get(v_l_4408_, 2);
lean_dec(v_unused_4460_);
v_unused_4461_ = lean_ctor_get(v_l_4408_, 1);
lean_dec(v_unused_4461_);
v_unused_4462_ = lean_ctor_get(v_l_4408_, 0);
lean_dec(v_unused_4462_);
v___x_4431_ = v_l_4408_;
v_isShared_4432_ = v_isSharedCheck_4457_;
goto v_resetjp_4430_;
}
else
{
lean_dec(v_l_4408_);
v___x_4431_ = lean_box(0);
v_isShared_4432_ = v_isSharedCheck_4457_;
goto v_resetjp_4430_;
}
v_resetjp_4430_:
{
lean_object* v___x_4433_; lean_object* v___x_4434_; lean_object* v___y_4436_; lean_object* v___y_4437_; lean_object* v___y_4438_; lean_object* v___y_4447_; 
v___x_4433_ = lean_nat_add(v___x_4403_, v_size_4404_);
v___x_4434_ = lean_nat_add(v___x_4433_, v_size_4405_);
lean_dec(v_size_4405_);
if (lean_obj_tag(v_l_4424_) == 0)
{
lean_object* v_size_4455_; 
v_size_4455_ = lean_ctor_get(v_l_4424_, 0);
lean_inc(v_size_4455_);
v___y_4447_ = v_size_4455_;
goto v___jp_4446_;
}
else
{
lean_object* v___x_4456_; 
v___x_4456_ = lean_unsigned_to_nat(0u);
v___y_4447_ = v___x_4456_;
goto v___jp_4446_;
}
v___jp_4435_:
{
lean_object* v___x_4439_; lean_object* v___x_4441_; 
v___x_4439_ = lean_nat_add(v___y_4437_, v___y_4438_);
lean_dec(v___y_4438_);
lean_dec(v___y_4437_);
if (v_isShared_4432_ == 0)
{
lean_ctor_set(v___x_4431_, 4, v_r_4409_);
lean_ctor_set(v___x_4431_, 3, v_r_4425_);
lean_ctor_set(v___x_4431_, 2, v_v_4407_);
lean_ctor_set(v___x_4431_, 1, v_k_4406_);
lean_ctor_set(v___x_4431_, 0, v___x_4439_);
v___x_4441_ = v___x_4431_;
goto v_reusejp_4440_;
}
else
{
lean_object* v_reuseFailAlloc_4445_; 
v_reuseFailAlloc_4445_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4445_, 0, v___x_4439_);
lean_ctor_set(v_reuseFailAlloc_4445_, 1, v_k_4406_);
lean_ctor_set(v_reuseFailAlloc_4445_, 2, v_v_4407_);
lean_ctor_set(v_reuseFailAlloc_4445_, 3, v_r_4425_);
lean_ctor_set(v_reuseFailAlloc_4445_, 4, v_r_4409_);
v___x_4441_ = v_reuseFailAlloc_4445_;
goto v_reusejp_4440_;
}
v_reusejp_4440_:
{
lean_object* v___x_4443_; 
if (v_isShared_4420_ == 0)
{
lean_ctor_set(v___x_4419_, 4, v___x_4441_);
lean_ctor_set(v___x_4419_, 3, v___y_4436_);
lean_ctor_set(v___x_4419_, 2, v_v_4423_);
lean_ctor_set(v___x_4419_, 1, v_k_4422_);
lean_ctor_set(v___x_4419_, 0, v___x_4434_);
v___x_4443_ = v___x_4419_;
goto v_reusejp_4442_;
}
else
{
lean_object* v_reuseFailAlloc_4444_; 
v_reuseFailAlloc_4444_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4444_, 0, v___x_4434_);
lean_ctor_set(v_reuseFailAlloc_4444_, 1, v_k_4422_);
lean_ctor_set(v_reuseFailAlloc_4444_, 2, v_v_4423_);
lean_ctor_set(v_reuseFailAlloc_4444_, 3, v___y_4436_);
lean_ctor_set(v_reuseFailAlloc_4444_, 4, v___x_4441_);
v___x_4443_ = v_reuseFailAlloc_4444_;
goto v_reusejp_4442_;
}
v_reusejp_4442_:
{
return v___x_4443_;
}
}
}
v___jp_4446_:
{
lean_object* v___x_4448_; lean_object* v___x_4450_; 
v___x_4448_ = lean_nat_add(v___x_4433_, v___y_4447_);
lean_dec(v___y_4447_);
lean_dec(v___x_4433_);
if (v_isShared_4260_ == 0)
{
lean_ctor_set(v___x_4259_, 4, v_l_4424_);
lean_ctor_set(v___x_4259_, 0, v___x_4448_);
v___x_4450_ = v___x_4259_;
goto v_reusejp_4449_;
}
else
{
lean_object* v_reuseFailAlloc_4454_; 
v_reuseFailAlloc_4454_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4454_, 0, v___x_4448_);
lean_ctor_set(v_reuseFailAlloc_4454_, 1, v_k_4254_);
lean_ctor_set(v_reuseFailAlloc_4454_, 2, v_v_4255_);
lean_ctor_set(v_reuseFailAlloc_4454_, 3, v_l_4256_);
lean_ctor_set(v_reuseFailAlloc_4454_, 4, v_l_4424_);
v___x_4450_ = v_reuseFailAlloc_4454_;
goto v_reusejp_4449_;
}
v_reusejp_4449_:
{
lean_object* v___x_4451_; 
v___x_4451_ = lean_nat_add(v___x_4403_, v_size_4426_);
if (lean_obj_tag(v_r_4425_) == 0)
{
lean_object* v_size_4452_; 
v_size_4452_ = lean_ctor_get(v_r_4425_, 0);
lean_inc(v_size_4452_);
v___y_4436_ = v___x_4450_;
v___y_4437_ = v___x_4451_;
v___y_4438_ = v_size_4452_;
goto v___jp_4435_;
}
else
{
lean_object* v___x_4453_; 
v___x_4453_ = lean_unsigned_to_nat(0u);
v___y_4436_ = v___x_4450_;
v___y_4437_ = v___x_4451_;
v___y_4438_ = v___x_4453_;
goto v___jp_4435_;
}
}
}
}
}
else
{
lean_object* v___x_4463_; lean_object* v___x_4464_; lean_object* v___x_4465_; lean_object* v___x_4467_; 
lean_del_object(v___x_4259_);
v___x_4463_ = lean_nat_add(v___x_4403_, v_size_4404_);
v___x_4464_ = lean_nat_add(v___x_4463_, v_size_4405_);
lean_dec(v_size_4405_);
v___x_4465_ = lean_nat_add(v___x_4463_, v_size_4421_);
lean_dec(v___x_4463_);
lean_inc_ref(v_l_4256_);
if (v_isShared_4420_ == 0)
{
lean_ctor_set(v___x_4419_, 4, v_l_4408_);
lean_ctor_set(v___x_4419_, 3, v_l_4256_);
lean_ctor_set(v___x_4419_, 2, v_v_4255_);
lean_ctor_set(v___x_4419_, 1, v_k_4254_);
lean_ctor_set(v___x_4419_, 0, v___x_4465_);
v___x_4467_ = v___x_4419_;
goto v_reusejp_4466_;
}
else
{
lean_object* v_reuseFailAlloc_4480_; 
v_reuseFailAlloc_4480_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4480_, 0, v___x_4465_);
lean_ctor_set(v_reuseFailAlloc_4480_, 1, v_k_4254_);
lean_ctor_set(v_reuseFailAlloc_4480_, 2, v_v_4255_);
lean_ctor_set(v_reuseFailAlloc_4480_, 3, v_l_4256_);
lean_ctor_set(v_reuseFailAlloc_4480_, 4, v_l_4408_);
v___x_4467_ = v_reuseFailAlloc_4480_;
goto v_reusejp_4466_;
}
v_reusejp_4466_:
{
lean_object* v___x_4469_; uint8_t v_isShared_4470_; uint8_t v_isSharedCheck_4474_; 
v_isSharedCheck_4474_ = !lean_is_exclusive(v_l_4256_);
if (v_isSharedCheck_4474_ == 0)
{
lean_object* v_unused_4475_; lean_object* v_unused_4476_; lean_object* v_unused_4477_; lean_object* v_unused_4478_; lean_object* v_unused_4479_; 
v_unused_4475_ = lean_ctor_get(v_l_4256_, 4);
lean_dec(v_unused_4475_);
v_unused_4476_ = lean_ctor_get(v_l_4256_, 3);
lean_dec(v_unused_4476_);
v_unused_4477_ = lean_ctor_get(v_l_4256_, 2);
lean_dec(v_unused_4477_);
v_unused_4478_ = lean_ctor_get(v_l_4256_, 1);
lean_dec(v_unused_4478_);
v_unused_4479_ = lean_ctor_get(v_l_4256_, 0);
lean_dec(v_unused_4479_);
v___x_4469_ = v_l_4256_;
v_isShared_4470_ = v_isSharedCheck_4474_;
goto v_resetjp_4468_;
}
else
{
lean_dec(v_l_4256_);
v___x_4469_ = lean_box(0);
v_isShared_4470_ = v_isSharedCheck_4474_;
goto v_resetjp_4468_;
}
v_resetjp_4468_:
{
lean_object* v___x_4472_; 
if (v_isShared_4470_ == 0)
{
lean_ctor_set(v___x_4469_, 4, v_r_4409_);
lean_ctor_set(v___x_4469_, 3, v___x_4467_);
lean_ctor_set(v___x_4469_, 2, v_v_4407_);
lean_ctor_set(v___x_4469_, 1, v_k_4406_);
lean_ctor_set(v___x_4469_, 0, v___x_4464_);
v___x_4472_ = v___x_4469_;
goto v_reusejp_4471_;
}
else
{
lean_object* v_reuseFailAlloc_4473_; 
v_reuseFailAlloc_4473_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4473_, 0, v___x_4464_);
lean_ctor_set(v_reuseFailAlloc_4473_, 1, v_k_4406_);
lean_ctor_set(v_reuseFailAlloc_4473_, 2, v_v_4407_);
lean_ctor_set(v_reuseFailAlloc_4473_, 3, v___x_4467_);
lean_ctor_set(v_reuseFailAlloc_4473_, 4, v_r_4409_);
v___x_4472_ = v_reuseFailAlloc_4473_;
goto v_reusejp_4471_;
}
v_reusejp_4471_:
{
return v___x_4472_;
}
}
}
}
}
}
}
else
{
lean_object* v_l_4487_; 
v_l_4487_ = lean_ctor_get(v_impl_4402_, 3);
lean_inc(v_l_4487_);
if (lean_obj_tag(v_l_4487_) == 0)
{
lean_object* v_r_4488_; lean_object* v_k_4489_; lean_object* v_v_4490_; lean_object* v___x_4492_; uint8_t v_isShared_4493_; uint8_t v_isSharedCheck_4513_; 
v_r_4488_ = lean_ctor_get(v_impl_4402_, 4);
v_k_4489_ = lean_ctor_get(v_impl_4402_, 1);
v_v_4490_ = lean_ctor_get(v_impl_4402_, 2);
v_isSharedCheck_4513_ = !lean_is_exclusive(v_impl_4402_);
if (v_isSharedCheck_4513_ == 0)
{
lean_object* v_unused_4514_; lean_object* v_unused_4515_; 
v_unused_4514_ = lean_ctor_get(v_impl_4402_, 3);
lean_dec(v_unused_4514_);
v_unused_4515_ = lean_ctor_get(v_impl_4402_, 0);
lean_dec(v_unused_4515_);
v___x_4492_ = v_impl_4402_;
v_isShared_4493_ = v_isSharedCheck_4513_;
goto v_resetjp_4491_;
}
else
{
lean_inc(v_r_4488_);
lean_inc(v_v_4490_);
lean_inc(v_k_4489_);
lean_dec(v_impl_4402_);
v___x_4492_ = lean_box(0);
v_isShared_4493_ = v_isSharedCheck_4513_;
goto v_resetjp_4491_;
}
v_resetjp_4491_:
{
lean_object* v_k_4494_; lean_object* v_v_4495_; lean_object* v___x_4497_; uint8_t v_isShared_4498_; uint8_t v_isSharedCheck_4509_; 
v_k_4494_ = lean_ctor_get(v_l_4487_, 1);
v_v_4495_ = lean_ctor_get(v_l_4487_, 2);
v_isSharedCheck_4509_ = !lean_is_exclusive(v_l_4487_);
if (v_isSharedCheck_4509_ == 0)
{
lean_object* v_unused_4510_; lean_object* v_unused_4511_; lean_object* v_unused_4512_; 
v_unused_4510_ = lean_ctor_get(v_l_4487_, 4);
lean_dec(v_unused_4510_);
v_unused_4511_ = lean_ctor_get(v_l_4487_, 3);
lean_dec(v_unused_4511_);
v_unused_4512_ = lean_ctor_get(v_l_4487_, 0);
lean_dec(v_unused_4512_);
v___x_4497_ = v_l_4487_;
v_isShared_4498_ = v_isSharedCheck_4509_;
goto v_resetjp_4496_;
}
else
{
lean_inc(v_v_4495_);
lean_inc(v_k_4494_);
lean_dec(v_l_4487_);
v___x_4497_ = lean_box(0);
v_isShared_4498_ = v_isSharedCheck_4509_;
goto v_resetjp_4496_;
}
v_resetjp_4496_:
{
lean_object* v___x_4499_; lean_object* v___x_4501_; 
v___x_4499_ = lean_unsigned_to_nat(3u);
lean_inc_n(v_r_4488_, 2);
if (v_isShared_4498_ == 0)
{
lean_ctor_set(v___x_4497_, 4, v_r_4488_);
lean_ctor_set(v___x_4497_, 3, v_r_4488_);
lean_ctor_set(v___x_4497_, 2, v_v_4255_);
lean_ctor_set(v___x_4497_, 1, v_k_4254_);
lean_ctor_set(v___x_4497_, 0, v___x_4403_);
v___x_4501_ = v___x_4497_;
goto v_reusejp_4500_;
}
else
{
lean_object* v_reuseFailAlloc_4508_; 
v_reuseFailAlloc_4508_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4508_, 0, v___x_4403_);
lean_ctor_set(v_reuseFailAlloc_4508_, 1, v_k_4254_);
lean_ctor_set(v_reuseFailAlloc_4508_, 2, v_v_4255_);
lean_ctor_set(v_reuseFailAlloc_4508_, 3, v_r_4488_);
lean_ctor_set(v_reuseFailAlloc_4508_, 4, v_r_4488_);
v___x_4501_ = v_reuseFailAlloc_4508_;
goto v_reusejp_4500_;
}
v_reusejp_4500_:
{
lean_object* v___x_4503_; 
lean_inc(v_r_4488_);
if (v_isShared_4493_ == 0)
{
lean_ctor_set(v___x_4492_, 3, v_r_4488_);
lean_ctor_set(v___x_4492_, 0, v___x_4403_);
v___x_4503_ = v___x_4492_;
goto v_reusejp_4502_;
}
else
{
lean_object* v_reuseFailAlloc_4507_; 
v_reuseFailAlloc_4507_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4507_, 0, v___x_4403_);
lean_ctor_set(v_reuseFailAlloc_4507_, 1, v_k_4489_);
lean_ctor_set(v_reuseFailAlloc_4507_, 2, v_v_4490_);
lean_ctor_set(v_reuseFailAlloc_4507_, 3, v_r_4488_);
lean_ctor_set(v_reuseFailAlloc_4507_, 4, v_r_4488_);
v___x_4503_ = v_reuseFailAlloc_4507_;
goto v_reusejp_4502_;
}
v_reusejp_4502_:
{
lean_object* v___x_4505_; 
if (v_isShared_4260_ == 0)
{
lean_ctor_set(v___x_4259_, 4, v___x_4503_);
lean_ctor_set(v___x_4259_, 3, v___x_4501_);
lean_ctor_set(v___x_4259_, 2, v_v_4495_);
lean_ctor_set(v___x_4259_, 1, v_k_4494_);
lean_ctor_set(v___x_4259_, 0, v___x_4499_);
v___x_4505_ = v___x_4259_;
goto v_reusejp_4504_;
}
else
{
lean_object* v_reuseFailAlloc_4506_; 
v_reuseFailAlloc_4506_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4506_, 0, v___x_4499_);
lean_ctor_set(v_reuseFailAlloc_4506_, 1, v_k_4494_);
lean_ctor_set(v_reuseFailAlloc_4506_, 2, v_v_4495_);
lean_ctor_set(v_reuseFailAlloc_4506_, 3, v___x_4501_);
lean_ctor_set(v_reuseFailAlloc_4506_, 4, v___x_4503_);
v___x_4505_ = v_reuseFailAlloc_4506_;
goto v_reusejp_4504_;
}
v_reusejp_4504_:
{
return v___x_4505_;
}
}
}
}
}
}
else
{
lean_object* v_r_4516_; 
v_r_4516_ = lean_ctor_get(v_impl_4402_, 4);
lean_inc(v_r_4516_);
if (lean_obj_tag(v_r_4516_) == 0)
{
lean_object* v_k_4517_; lean_object* v_v_4518_; lean_object* v___x_4520_; uint8_t v_isShared_4521_; uint8_t v_isSharedCheck_4529_; 
v_k_4517_ = lean_ctor_get(v_impl_4402_, 1);
v_v_4518_ = lean_ctor_get(v_impl_4402_, 2);
v_isSharedCheck_4529_ = !lean_is_exclusive(v_impl_4402_);
if (v_isSharedCheck_4529_ == 0)
{
lean_object* v_unused_4530_; lean_object* v_unused_4531_; lean_object* v_unused_4532_; 
v_unused_4530_ = lean_ctor_get(v_impl_4402_, 4);
lean_dec(v_unused_4530_);
v_unused_4531_ = lean_ctor_get(v_impl_4402_, 3);
lean_dec(v_unused_4531_);
v_unused_4532_ = lean_ctor_get(v_impl_4402_, 0);
lean_dec(v_unused_4532_);
v___x_4520_ = v_impl_4402_;
v_isShared_4521_ = v_isSharedCheck_4529_;
goto v_resetjp_4519_;
}
else
{
lean_inc(v_v_4518_);
lean_inc(v_k_4517_);
lean_dec(v_impl_4402_);
v___x_4520_ = lean_box(0);
v_isShared_4521_ = v_isSharedCheck_4529_;
goto v_resetjp_4519_;
}
v_resetjp_4519_:
{
lean_object* v___x_4522_; lean_object* v___x_4524_; 
v___x_4522_ = lean_unsigned_to_nat(3u);
if (v_isShared_4521_ == 0)
{
lean_ctor_set(v___x_4520_, 4, v_l_4487_);
lean_ctor_set(v___x_4520_, 2, v_v_4255_);
lean_ctor_set(v___x_4520_, 1, v_k_4254_);
lean_ctor_set(v___x_4520_, 0, v___x_4403_);
v___x_4524_ = v___x_4520_;
goto v_reusejp_4523_;
}
else
{
lean_object* v_reuseFailAlloc_4528_; 
v_reuseFailAlloc_4528_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4528_, 0, v___x_4403_);
lean_ctor_set(v_reuseFailAlloc_4528_, 1, v_k_4254_);
lean_ctor_set(v_reuseFailAlloc_4528_, 2, v_v_4255_);
lean_ctor_set(v_reuseFailAlloc_4528_, 3, v_l_4487_);
lean_ctor_set(v_reuseFailAlloc_4528_, 4, v_l_4487_);
v___x_4524_ = v_reuseFailAlloc_4528_;
goto v_reusejp_4523_;
}
v_reusejp_4523_:
{
lean_object* v___x_4526_; 
if (v_isShared_4260_ == 0)
{
lean_ctor_set(v___x_4259_, 4, v_r_4516_);
lean_ctor_set(v___x_4259_, 3, v___x_4524_);
lean_ctor_set(v___x_4259_, 2, v_v_4518_);
lean_ctor_set(v___x_4259_, 1, v_k_4517_);
lean_ctor_set(v___x_4259_, 0, v___x_4522_);
v___x_4526_ = v___x_4259_;
goto v_reusejp_4525_;
}
else
{
lean_object* v_reuseFailAlloc_4527_; 
v_reuseFailAlloc_4527_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4527_, 0, v___x_4522_);
lean_ctor_set(v_reuseFailAlloc_4527_, 1, v_k_4517_);
lean_ctor_set(v_reuseFailAlloc_4527_, 2, v_v_4518_);
lean_ctor_set(v_reuseFailAlloc_4527_, 3, v___x_4524_);
lean_ctor_set(v_reuseFailAlloc_4527_, 4, v_r_4516_);
v___x_4526_ = v_reuseFailAlloc_4527_;
goto v_reusejp_4525_;
}
v_reusejp_4525_:
{
return v___x_4526_;
}
}
}
}
else
{
lean_object* v___x_4533_; lean_object* v___x_4535_; 
v___x_4533_ = lean_unsigned_to_nat(2u);
if (v_isShared_4260_ == 0)
{
lean_ctor_set(v___x_4259_, 4, v_impl_4402_);
lean_ctor_set(v___x_4259_, 3, v_r_4516_);
lean_ctor_set(v___x_4259_, 0, v___x_4533_);
v___x_4535_ = v___x_4259_;
goto v_reusejp_4534_;
}
else
{
lean_object* v_reuseFailAlloc_4536_; 
v_reuseFailAlloc_4536_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4536_, 0, v___x_4533_);
lean_ctor_set(v_reuseFailAlloc_4536_, 1, v_k_4254_);
lean_ctor_set(v_reuseFailAlloc_4536_, 2, v_v_4255_);
lean_ctor_set(v_reuseFailAlloc_4536_, 3, v_r_4516_);
lean_ctor_set(v_reuseFailAlloc_4536_, 4, v_impl_4402_);
v___x_4535_ = v_reuseFailAlloc_4536_;
goto v_reusejp_4534_;
}
v_reusejp_4534_:
{
return v___x_4535_;
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
lean_object* v___x_4538_; lean_object* v___x_4539_; 
v___x_4538_ = lean_unsigned_to_nat(1u);
v___x_4539_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_4539_, 0, v___x_4538_);
lean_ctor_set(v___x_4539_, 1, v_k_4250_);
lean_ctor_set(v___x_4539_, 2, v_v_4251_);
lean_ctor_set(v___x_4539_, 3, v_t_4252_);
lean_ctor_set(v___x_4539_, 4, v_t_4252_);
return v___x_4539_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lake_CLI_Check_0__Lake_Check_resolveExternalKernels_spec__2(lean_object* v_init_4541_, lean_object* v_x_4542_){
_start:
{
lean_object* v_d_4545_; 
if (lean_obj_tag(v_x_4542_) == 0)
{
lean_object* v_k_4548_; lean_object* v_v_4549_; lean_object* v_l_4550_; lean_object* v_r_4551_; lean_object* v___x_4552_; lean_object* v___x_4553_; lean_object* v___x_4554_; 
v_k_4548_ = lean_ctor_get(v_x_4542_, 1);
v_v_4549_ = lean_ctor_get(v_x_4542_, 2);
v_l_4550_ = lean_ctor_get(v_x_4542_, 3);
v_r_4551_ = lean_ctor_get(v_x_4542_, 4);
v___x_4552_ = lean_box(0);
v___x_4553_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lake_CLI_Check_0__Lake_Check_resolveExternalKernels_spec__0___closed__0));
v___x_4554_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lake_CLI_Check_0__Lake_Check_resolveExternalKernels_spec__2(v_init_4541_, v_l_4550_);
if (lean_obj_tag(v___x_4554_) == 0)
{
lean_object* v_a_4555_; lean_object* v___x_4557_; uint8_t v_isShared_4558_; uint8_t v_isSharedCheck_4590_; 
v_a_4555_ = lean_ctor_get(v___x_4554_, 0);
v_isSharedCheck_4590_ = !lean_is_exclusive(v___x_4554_);
if (v_isSharedCheck_4590_ == 0)
{
v___x_4557_ = v___x_4554_;
v_isShared_4558_ = v_isSharedCheck_4590_;
goto v_resetjp_4556_;
}
else
{
lean_inc(v_a_4555_);
lean_dec(v___x_4554_);
v___x_4557_ = lean_box(0);
v_isShared_4558_ = v_isSharedCheck_4590_;
goto v_resetjp_4556_;
}
v_resetjp_4556_:
{
if (lean_obj_tag(v_a_4555_) == 0)
{
lean_object* v_a_4559_; 
lean_del_object(v___x_4557_);
v_a_4559_ = lean_ctor_get(v_a_4555_, 0);
lean_inc(v_a_4559_);
lean_dec_ref_known(v_a_4555_, 1);
v_d_4545_ = v_a_4559_;
goto v___jp_4544_;
}
else
{
lean_object* v___x_4561_; uint8_t v_isShared_4562_; uint8_t v_isSharedCheck_4588_; 
v_isSharedCheck_4588_ = !lean_is_exclusive(v_a_4555_);
if (v_isSharedCheck_4588_ == 0)
{
lean_object* v_unused_4589_; 
v_unused_4589_ = lean_ctor_get(v_a_4555_, 0);
lean_dec(v_unused_4589_);
v___x_4561_ = v_a_4555_;
v_isShared_4562_ = v_isSharedCheck_4588_;
goto v_resetjp_4560_;
}
else
{
lean_dec(v_a_4555_);
v___x_4561_ = lean_box(0);
v_isShared_4562_ = v_isSharedCheck_4588_;
goto v_resetjp_4560_;
}
v_resetjp_4560_:
{
lean_object* v___x_4563_; lean_object* v___x_4564_; uint8_t v___x_4565_; 
v___x_4563_ = lean_array_get_size(v_v_4549_);
v___x_4564_ = lean_unsigned_to_nat(0u);
v___x_4565_ = lean_nat_dec_eq(v___x_4563_, v___x_4564_);
if (v___x_4565_ == 0)
{
lean_del_object(v___x_4561_);
lean_del_object(v___x_4557_);
v_init_4541_ = v___x_4553_;
v_x_4542_ = v_r_4551_;
goto _start;
}
else
{
lean_object* v___x_4567_; lean_object* v___x_4568_; lean_object* v___x_4569_; lean_object* v___x_4570_; lean_object* v___x_4571_; 
v___x_4567_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lake_CLI_Check_0__Lake_Check_resolveExternalKernels_spec__0___closed__1));
v___x_4568_ = lean_string_append(v___x_4567_, v_k_4548_);
v___x_4569_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lake_CLI_Check_0__Lake_Check_resolveExternalKernels_spec__2___closed__0));
v___x_4570_ = lean_string_append(v___x_4568_, v___x_4569_);
v___x_4571_ = l___private_Lake_CLI_Check_0__Lake_Check_cannotRun(v___x_4570_);
lean_dec_ref(v___x_4570_);
if (lean_obj_tag(v___x_4571_) == 0)
{
lean_object* v_a_4572_; lean_object* v___x_4574_; 
v_a_4572_ = lean_ctor_get(v___x_4571_, 0);
lean_inc(v_a_4572_);
lean_dec_ref_known(v___x_4571_, 1);
if (v_isShared_4562_ == 0)
{
lean_ctor_set_tag(v___x_4561_, 0);
lean_ctor_set(v___x_4561_, 0, v_a_4572_);
v___x_4574_ = v___x_4561_;
goto v_reusejp_4573_;
}
else
{
lean_object* v_reuseFailAlloc_4579_; 
v_reuseFailAlloc_4579_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4579_, 0, v_a_4572_);
v___x_4574_ = v_reuseFailAlloc_4579_;
goto v_reusejp_4573_;
}
v_reusejp_4573_:
{
lean_object* v___x_4576_; 
if (v_isShared_4558_ == 0)
{
lean_ctor_set_tag(v___x_4557_, 1);
lean_ctor_set(v___x_4557_, 0, v___x_4574_);
v___x_4576_ = v___x_4557_;
goto v_reusejp_4575_;
}
else
{
lean_object* v_reuseFailAlloc_4578_; 
v_reuseFailAlloc_4578_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4578_, 0, v___x_4574_);
v___x_4576_ = v_reuseFailAlloc_4578_;
goto v_reusejp_4575_;
}
v_reusejp_4575_:
{
lean_object* v___x_4577_; 
v___x_4577_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4577_, 0, v___x_4576_);
lean_ctor_set(v___x_4577_, 1, v___x_4552_);
v_d_4545_ = v___x_4577_;
goto v___jp_4544_;
}
}
}
else
{
lean_object* v_a_4580_; lean_object* v___x_4582_; uint8_t v_isShared_4583_; uint8_t v_isSharedCheck_4587_; 
lean_del_object(v___x_4561_);
lean_del_object(v___x_4557_);
v_a_4580_ = lean_ctor_get(v___x_4571_, 0);
v_isSharedCheck_4587_ = !lean_is_exclusive(v___x_4571_);
if (v_isSharedCheck_4587_ == 0)
{
v___x_4582_ = v___x_4571_;
v_isShared_4583_ = v_isSharedCheck_4587_;
goto v_resetjp_4581_;
}
else
{
lean_inc(v_a_4580_);
lean_dec(v___x_4571_);
v___x_4582_ = lean_box(0);
v_isShared_4583_ = v_isSharedCheck_4587_;
goto v_resetjp_4581_;
}
v_resetjp_4581_:
{
lean_object* v___x_4585_; 
if (v_isShared_4583_ == 0)
{
v___x_4585_ = v___x_4582_;
goto v_reusejp_4584_;
}
else
{
lean_object* v_reuseFailAlloc_4586_; 
v_reuseFailAlloc_4586_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4586_, 0, v_a_4580_);
v___x_4585_ = v_reuseFailAlloc_4586_;
goto v_reusejp_4584_;
}
v_reusejp_4584_:
{
return v___x_4585_;
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
return v___x_4554_;
}
}
else
{
lean_object* v___x_4591_; lean_object* v___x_4592_; 
v___x_4591_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4591_, 0, v_init_4541_);
v___x_4592_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4592_, 0, v___x_4591_);
return v___x_4592_;
}
v___jp_4544_:
{
lean_object* v___x_4546_; lean_object* v___x_4547_; 
v___x_4546_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4546_, 0, v_d_4545_);
v___x_4547_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4547_, 0, v___x_4546_);
return v___x_4547_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lake_CLI_Check_0__Lake_Check_resolveExternalKernels_spec__2___boxed(lean_object* v_init_4593_, lean_object* v_x_4594_, lean_object* v___y_4595_){
_start:
{
lean_object* v_res_4596_; 
v_res_4596_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lake_CLI_Check_0__Lake_Check_resolveExternalKernels_spec__2(v_init_4593_, v_x_4594_);
lean_dec(v_x_4594_);
return v_res_4596_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_Check_0__Lake_Check_resolveExternalKernels(lean_object* v_cfg_4604_){
_start:
{
lean_object* v___y_4607_; lean_object* v_a_4608_; lean_object* v___y_4621_; lean_object* v_externalKernels_4622_; lean_object* v___y_4635_; uint8_t v___y_4636_; lean_object* v___y_4637_; lean_object* v_a_4638_; uint8_t v___y_4652_; lean_object* v___y_4653_; lean_object* v_enable__nanoda_x3f_4666_; lean_object* v_external__kernels_x3f_4667_; lean_object* v___y_4669_; 
v_enable__nanoda_x3f_4666_ = lean_ctor_get(v_cfg_4604_, 5);
lean_inc(v_enable__nanoda_x3f_4666_);
v_external__kernels_x3f_4667_ = lean_ctor_get(v_cfg_4604_, 6);
lean_inc(v_external__kernels_x3f_4667_);
lean_dec_ref(v_cfg_4604_);
if (lean_obj_tag(v_external__kernels_x3f_4667_) == 0)
{
lean_object* v___x_4700_; 
v___x_4700_ = lean_box(1);
v___y_4669_ = v___x_4700_;
goto v___jp_4668_;
}
else
{
lean_object* v_val_4701_; 
v_val_4701_ = lean_ctor_get(v_external__kernels_x3f_4667_, 0);
lean_inc(v_val_4701_);
lean_dec_ref_known(v_external__kernels_x3f_4667_, 1);
v___y_4669_ = v_val_4701_;
goto v___jp_4668_;
}
v___jp_4606_:
{
lean_object* v_fst_4609_; 
v_fst_4609_ = lean_ctor_get(v_a_4608_, 0);
lean_inc(v_fst_4609_);
lean_dec_ref(v_a_4608_);
if (lean_obj_tag(v_fst_4609_) == 0)
{
lean_object* v___x_4610_; lean_object* v___x_4611_; 
v___x_4610_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4610_, 0, v___y_4607_);
v___x_4611_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4611_, 0, v___x_4610_);
return v___x_4611_;
}
else
{
lean_object* v_val_4612_; lean_object* v___x_4614_; uint8_t v_isShared_4615_; uint8_t v_isSharedCheck_4619_; 
lean_dec(v___y_4607_);
v_val_4612_ = lean_ctor_get(v_fst_4609_, 0);
v_isSharedCheck_4619_ = !lean_is_exclusive(v_fst_4609_);
if (v_isSharedCheck_4619_ == 0)
{
v___x_4614_ = v_fst_4609_;
v_isShared_4615_ = v_isSharedCheck_4619_;
goto v_resetjp_4613_;
}
else
{
lean_inc(v_val_4612_);
lean_dec(v_fst_4609_);
v___x_4614_ = lean_box(0);
v_isShared_4615_ = v_isSharedCheck_4619_;
goto v_resetjp_4613_;
}
v_resetjp_4613_:
{
lean_object* v___x_4617_; 
if (v_isShared_4615_ == 0)
{
lean_ctor_set_tag(v___x_4614_, 0);
v___x_4617_ = v___x_4614_;
goto v_reusejp_4616_;
}
else
{
lean_object* v_reuseFailAlloc_4618_; 
v_reuseFailAlloc_4618_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4618_, 0, v_val_4612_);
v___x_4617_ = v_reuseFailAlloc_4618_;
goto v_reusejp_4616_;
}
v_reusejp_4616_:
{
return v___x_4617_;
}
}
}
}
v___jp_4620_:
{
lean_object* v___x_4623_; 
v___x_4623_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lake_CLI_Check_0__Lake_Check_resolveExternalKernels_spec__0(v___y_4621_, v_externalKernels_4622_);
if (lean_obj_tag(v___x_4623_) == 0)
{
lean_object* v_a_4624_; lean_object* v_a_4625_; 
v_a_4624_ = lean_ctor_get(v___x_4623_, 0);
lean_inc(v_a_4624_);
lean_dec_ref_known(v___x_4623_, 1);
v_a_4625_ = lean_ctor_get(v_a_4624_, 0);
lean_inc(v_a_4625_);
lean_dec(v_a_4624_);
v___y_4607_ = v_externalKernels_4622_;
v_a_4608_ = v_a_4625_;
goto v___jp_4606_;
}
else
{
lean_object* v_a_4626_; lean_object* v___x_4628_; uint8_t v_isShared_4629_; uint8_t v_isSharedCheck_4633_; 
lean_dec(v_externalKernels_4622_);
v_a_4626_ = lean_ctor_get(v___x_4623_, 0);
v_isSharedCheck_4633_ = !lean_is_exclusive(v___x_4623_);
if (v_isSharedCheck_4633_ == 0)
{
v___x_4628_ = v___x_4623_;
v_isShared_4629_ = v_isSharedCheck_4633_;
goto v_resetjp_4627_;
}
else
{
lean_inc(v_a_4626_);
lean_dec(v___x_4623_);
v___x_4628_ = lean_box(0);
v_isShared_4629_ = v_isSharedCheck_4633_;
goto v_resetjp_4627_;
}
v_resetjp_4627_:
{
lean_object* v___x_4631_; 
if (v_isShared_4629_ == 0)
{
v___x_4631_ = v___x_4628_;
goto v_reusejp_4630_;
}
else
{
lean_object* v_reuseFailAlloc_4632_; 
v_reuseFailAlloc_4632_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4632_, 0, v_a_4626_);
v___x_4631_ = v_reuseFailAlloc_4632_;
goto v_reusejp_4630_;
}
v_reusejp_4630_:
{
return v___x_4631_;
}
}
}
}
v___jp_4634_:
{
lean_object* v_fst_4639_; 
v_fst_4639_ = lean_ctor_get(v_a_4638_, 0);
lean_inc(v_fst_4639_);
lean_dec_ref(v_a_4638_);
if (lean_obj_tag(v_fst_4639_) == 0)
{
if (v___y_4636_ == 0)
{
v___y_4621_ = v___y_4635_;
v_externalKernels_4622_ = v___y_4637_;
goto v___jp_4620_;
}
else
{
lean_object* v___x_4640_; lean_object* v___x_4641_; lean_object* v___x_4642_; 
v___x_4640_ = ((lean_object*)(l___private_Lake_CLI_Check_0__Lake_Check_resolveExternalKernels___closed__0));
v___x_4641_ = ((lean_object*)(l___private_Lake_CLI_Check_0__Lake_Check_resolveExternalKernels___closed__2));
v___x_4642_ = l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lake_CLI_Check_0__Lake_Check_resolveExternalKernels_spec__1___redArg(v___x_4640_, v___x_4641_, v___y_4637_);
v___y_4621_ = v___y_4635_;
v_externalKernels_4622_ = v___x_4642_;
goto v___jp_4620_;
}
}
else
{
lean_object* v_val_4643_; lean_object* v___x_4645_; uint8_t v_isShared_4646_; uint8_t v_isSharedCheck_4650_; 
lean_dec(v___y_4637_);
lean_dec_ref(v___y_4635_);
v_val_4643_ = lean_ctor_get(v_fst_4639_, 0);
v_isSharedCheck_4650_ = !lean_is_exclusive(v_fst_4639_);
if (v_isSharedCheck_4650_ == 0)
{
v___x_4645_ = v_fst_4639_;
v_isShared_4646_ = v_isSharedCheck_4650_;
goto v_resetjp_4644_;
}
else
{
lean_inc(v_val_4643_);
lean_dec(v_fst_4639_);
v___x_4645_ = lean_box(0);
v_isShared_4646_ = v_isSharedCheck_4650_;
goto v_resetjp_4644_;
}
v_resetjp_4644_:
{
lean_object* v___x_4648_; 
if (v_isShared_4646_ == 0)
{
lean_ctor_set_tag(v___x_4645_, 0);
v___x_4648_ = v___x_4645_;
goto v_reusejp_4647_;
}
else
{
lean_object* v_reuseFailAlloc_4649_; 
v_reuseFailAlloc_4649_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4649_, 0, v_val_4643_);
v___x_4648_ = v_reuseFailAlloc_4649_;
goto v_reusejp_4647_;
}
v_reusejp_4647_:
{
return v___x_4648_;
}
}
}
}
v___jp_4651_:
{
lean_object* v___x_4654_; lean_object* v___x_4655_; 
v___x_4654_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lake_CLI_Check_0__Lake_Check_resolveExternalKernels_spec__0___closed__0));
v___x_4655_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lake_CLI_Check_0__Lake_Check_resolveExternalKernels_spec__2(v___x_4654_, v___y_4653_);
if (lean_obj_tag(v___x_4655_) == 0)
{
lean_object* v_a_4656_; lean_object* v_a_4657_; 
v_a_4656_ = lean_ctor_get(v___x_4655_, 0);
lean_inc(v_a_4656_);
lean_dec_ref_known(v___x_4655_, 1);
v_a_4657_ = lean_ctor_get(v_a_4656_, 0);
lean_inc(v_a_4657_);
lean_dec(v_a_4656_);
v___y_4635_ = v___x_4654_;
v___y_4636_ = v___y_4652_;
v___y_4637_ = v___y_4653_;
v_a_4638_ = v_a_4657_;
goto v___jp_4634_;
}
else
{
lean_object* v_a_4658_; lean_object* v___x_4660_; uint8_t v_isShared_4661_; uint8_t v_isSharedCheck_4665_; 
lean_dec(v___y_4653_);
v_a_4658_ = lean_ctor_get(v___x_4655_, 0);
v_isSharedCheck_4665_ = !lean_is_exclusive(v___x_4655_);
if (v_isSharedCheck_4665_ == 0)
{
v___x_4660_ = v___x_4655_;
v_isShared_4661_ = v_isSharedCheck_4665_;
goto v_resetjp_4659_;
}
else
{
lean_inc(v_a_4658_);
lean_dec(v___x_4655_);
v___x_4660_ = lean_box(0);
v_isShared_4661_ = v_isSharedCheck_4665_;
goto v_resetjp_4659_;
}
v_resetjp_4659_:
{
lean_object* v___x_4663_; 
if (v_isShared_4661_ == 0)
{
v___x_4663_ = v___x_4660_;
goto v_reusejp_4662_;
}
else
{
lean_object* v_reuseFailAlloc_4664_; 
v_reuseFailAlloc_4664_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4664_, 0, v_a_4658_);
v___x_4663_ = v_reuseFailAlloc_4664_;
goto v_reusejp_4662_;
}
v_reusejp_4662_:
{
return v___x_4663_;
}
}
}
}
v___jp_4668_:
{
if (lean_obj_tag(v_enable__nanoda_x3f_4666_) == 0)
{
uint8_t v___x_4670_; 
v___x_4670_ = 0;
v___y_4652_ = v___x_4670_;
v___y_4653_ = v___y_4669_;
goto v___jp_4651_;
}
else
{
lean_object* v_val_4671_; lean_object* v___x_4673_; uint8_t v_isShared_4674_; uint8_t v_isSharedCheck_4699_; 
v_val_4671_ = lean_ctor_get(v_enable__nanoda_x3f_4666_, 0);
v_isSharedCheck_4699_ = !lean_is_exclusive(v_enable__nanoda_x3f_4666_);
if (v_isSharedCheck_4699_ == 0)
{
v___x_4673_ = v_enable__nanoda_x3f_4666_;
v_isShared_4674_ = v_isSharedCheck_4699_;
goto v_resetjp_4672_;
}
else
{
lean_inc(v_val_4671_);
lean_dec(v_enable__nanoda_x3f_4666_);
v___x_4673_ = lean_box(0);
v_isShared_4674_ = v_isSharedCheck_4699_;
goto v_resetjp_4672_;
}
v_resetjp_4672_:
{
uint8_t v___x_4675_; 
v___x_4675_ = lean_unbox(v_val_4671_);
if (v___x_4675_ == 0)
{
uint8_t v___x_4676_; 
lean_del_object(v___x_4673_);
v___x_4676_ = lean_unbox(v_val_4671_);
lean_dec(v_val_4671_);
v___y_4652_ = v___x_4676_;
v___y_4653_ = v___y_4669_;
goto v___jp_4651_;
}
else
{
if (lean_obj_tag(v___y_4669_) == 0)
{
lean_object* v___x_4677_; lean_object* v___x_4678_; 
lean_dec_ref_known(v___y_4669_, 5);
lean_dec(v_val_4671_);
v___x_4677_ = ((lean_object*)(l___private_Lake_CLI_Check_0__Lake_Check_resolveExternalKernels___closed__3));
v___x_4678_ = l___private_Lake_CLI_Check_0__Lake_Check_cannotRun(v___x_4677_);
if (lean_obj_tag(v___x_4678_) == 0)
{
lean_object* v_a_4679_; lean_object* v___x_4681_; uint8_t v_isShared_4682_; uint8_t v_isSharedCheck_4689_; 
v_a_4679_ = lean_ctor_get(v___x_4678_, 0);
v_isSharedCheck_4689_ = !lean_is_exclusive(v___x_4678_);
if (v_isSharedCheck_4689_ == 0)
{
v___x_4681_ = v___x_4678_;
v_isShared_4682_ = v_isSharedCheck_4689_;
goto v_resetjp_4680_;
}
else
{
lean_inc(v_a_4679_);
lean_dec(v___x_4678_);
v___x_4681_ = lean_box(0);
v_isShared_4682_ = v_isSharedCheck_4689_;
goto v_resetjp_4680_;
}
v_resetjp_4680_:
{
lean_object* v___x_4684_; 
if (v_isShared_4674_ == 0)
{
lean_ctor_set_tag(v___x_4673_, 0);
lean_ctor_set(v___x_4673_, 0, v_a_4679_);
v___x_4684_ = v___x_4673_;
goto v_reusejp_4683_;
}
else
{
lean_object* v_reuseFailAlloc_4688_; 
v_reuseFailAlloc_4688_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4688_, 0, v_a_4679_);
v___x_4684_ = v_reuseFailAlloc_4688_;
goto v_reusejp_4683_;
}
v_reusejp_4683_:
{
lean_object* v___x_4686_; 
if (v_isShared_4682_ == 0)
{
lean_ctor_set(v___x_4681_, 0, v___x_4684_);
v___x_4686_ = v___x_4681_;
goto v_reusejp_4685_;
}
else
{
lean_object* v_reuseFailAlloc_4687_; 
v_reuseFailAlloc_4687_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4687_, 0, v___x_4684_);
v___x_4686_ = v_reuseFailAlloc_4687_;
goto v_reusejp_4685_;
}
v_reusejp_4685_:
{
return v___x_4686_;
}
}
}
}
else
{
lean_object* v_a_4690_; lean_object* v___x_4692_; uint8_t v_isShared_4693_; uint8_t v_isSharedCheck_4697_; 
lean_del_object(v___x_4673_);
v_a_4690_ = lean_ctor_get(v___x_4678_, 0);
v_isSharedCheck_4697_ = !lean_is_exclusive(v___x_4678_);
if (v_isSharedCheck_4697_ == 0)
{
v___x_4692_ = v___x_4678_;
v_isShared_4693_ = v_isSharedCheck_4697_;
goto v_resetjp_4691_;
}
else
{
lean_inc(v_a_4690_);
lean_dec(v___x_4678_);
v___x_4692_ = lean_box(0);
v_isShared_4693_ = v_isSharedCheck_4697_;
goto v_resetjp_4691_;
}
v_resetjp_4691_:
{
lean_object* v___x_4695_; 
if (v_isShared_4693_ == 0)
{
v___x_4695_ = v___x_4692_;
goto v_reusejp_4694_;
}
else
{
lean_object* v_reuseFailAlloc_4696_; 
v_reuseFailAlloc_4696_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4696_, 0, v_a_4690_);
v___x_4695_ = v_reuseFailAlloc_4696_;
goto v_reusejp_4694_;
}
v_reusejp_4694_:
{
return v___x_4695_;
}
}
}
}
else
{
uint8_t v___x_4698_; 
lean_del_object(v___x_4673_);
v___x_4698_ = lean_unbox(v_val_4671_);
lean_dec(v_val_4671_);
v___y_4652_ = v___x_4698_;
v___y_4653_ = v___y_4669_;
goto v___jp_4651_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_Check_0__Lake_Check_resolveExternalKernels___boxed(lean_object* v_cfg_4702_, lean_object* v_a_4703_){
_start:
{
lean_object* v_res_4704_; 
v_res_4704_ = l___private_Lake_CLI_Check_0__Lake_Check_resolveExternalKernels(v_cfg_4702_);
return v_res_4704_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lake_CLI_Check_0__Lake_Check_resolveExternalKernels_spec__1(lean_object* v_00_u03b2_4705_, lean_object* v_k_4706_, lean_object* v_v_4707_, lean_object* v_t_4708_, lean_object* v_hl_4709_){
_start:
{
lean_object* v___x_4710_; 
v___x_4710_ = l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lake_CLI_Check_0__Lake_Check_resolveExternalKernels_spec__1___redArg(v_k_4706_, v_v_4707_, v_t_4708_);
return v___x_4710_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lake_CLI_Check_0__Lake_Check_checkUsedAxioms_spec__2(lean_object* v_a_4728_, lean_object* v_a_4729_){
_start:
{
if (lean_obj_tag(v_a_4728_) == 0)
{
lean_object* v___x_4730_; 
v___x_4730_ = l_List_reverse___redArg(v_a_4729_);
return v___x_4730_;
}
else
{
lean_object* v_head_4731_; lean_object* v_tail_4732_; lean_object* v___x_4734_; uint8_t v_isShared_4735_; uint8_t v_isSharedCheck_4743_; 
v_head_4731_ = lean_ctor_get(v_a_4728_, 0);
v_tail_4732_ = lean_ctor_get(v_a_4728_, 1);
v_isSharedCheck_4743_ = !lean_is_exclusive(v_a_4728_);
if (v_isSharedCheck_4743_ == 0)
{
v___x_4734_ = v_a_4728_;
v_isShared_4735_ = v_isSharedCheck_4743_;
goto v_resetjp_4733_;
}
else
{
lean_inc(v_tail_4732_);
lean_inc(v_head_4731_);
lean_dec(v_a_4728_);
v___x_4734_ = lean_box(0);
v_isShared_4735_ = v_isSharedCheck_4743_;
goto v_resetjp_4733_;
}
v_resetjp_4733_:
{
lean_object* v_fst_4736_; uint8_t v___x_4737_; lean_object* v___x_4738_; lean_object* v___x_4740_; 
v_fst_4736_ = lean_ctor_get(v_head_4731_, 0);
lean_inc(v_fst_4736_);
lean_dec(v_head_4731_);
v___x_4737_ = 1;
v___x_4738_ = l_Lean_Name_toString(v_fst_4736_, v___x_4737_);
if (v_isShared_4735_ == 0)
{
lean_ctor_set(v___x_4734_, 1, v_a_4729_);
lean_ctor_set(v___x_4734_, 0, v___x_4738_);
v___x_4740_ = v___x_4734_;
goto v_reusejp_4739_;
}
else
{
lean_object* v_reuseFailAlloc_4742_; 
v_reuseFailAlloc_4742_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4742_, 0, v___x_4738_);
lean_ctor_set(v_reuseFailAlloc_4742_, 1, v_a_4729_);
v___x_4740_ = v_reuseFailAlloc_4742_;
goto v_reusejp_4739_;
}
v_reusejp_4739_:
{
v_a_4728_ = v_tail_4732_;
v_a_4729_ = v___x_4740_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_Check_0__Lake_Check_checkUsedAxioms_spec__1(lean_object* v_as_4744_, size_t v_i_4745_, size_t v_stop_4746_, lean_object* v_b_4747_){
_start:
{
lean_object* v___y_4749_; uint8_t v___x_4753_; 
v___x_4753_ = lean_usize_dec_eq(v_i_4745_, v_stop_4746_);
if (v___x_4753_ == 0)
{
lean_object* v___x_4754_; lean_object* v_fst_4755_; lean_object* v___x_4756_; uint8_t v___x_4757_; 
v___x_4754_ = lean_array_uget_borrowed(v_as_4744_, v_i_4745_);
v_fst_4755_ = lean_ctor_get(v___x_4754_, 0);
v___x_4756_ = ((lean_object*)(l___private_Lake_CLI_Check_0__Lake_Check_standardAxioms));
v___x_4757_ = l_Array_contains___at___00__private_Lake_CLI_Check_0__Lake_Check_builtinTargets_spec__0(v___x_4756_, v_fst_4755_);
if (v___x_4757_ == 0)
{
lean_object* v___x_4758_; 
lean_inc(v___x_4754_);
v___x_4758_ = lean_array_push(v_b_4747_, v___x_4754_);
v___y_4749_ = v___x_4758_;
goto v___jp_4748_;
}
else
{
v___y_4749_ = v_b_4747_;
goto v___jp_4748_;
}
}
else
{
return v_b_4747_;
}
v___jp_4748_:
{
size_t v___x_4750_; size_t v___x_4751_; 
v___x_4750_ = ((size_t)1ULL);
v___x_4751_ = lean_usize_add(v_i_4745_, v___x_4750_);
v_i_4745_ = v___x_4751_;
v_b_4747_ = v___y_4749_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_Check_0__Lake_Check_checkUsedAxioms_spec__1___boxed(lean_object* v_as_4759_, lean_object* v_i_4760_, lean_object* v_stop_4761_, lean_object* v_b_4762_){
_start:
{
size_t v_i_boxed_4763_; size_t v_stop_boxed_4764_; lean_object* v_res_4765_; 
v_i_boxed_4763_ = lean_unbox_usize(v_i_4760_);
lean_dec(v_i_4760_);
v_stop_boxed_4764_ = lean_unbox_usize(v_stop_4761_);
lean_dec(v_stop_4761_);
v_res_4765_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_Check_0__Lake_Check_checkUsedAxioms_spec__1(v_as_4759_, v_i_boxed_4763_, v_stop_boxed_4764_, v_b_4762_);
lean_dec_ref(v_as_4759_);
return v_res_4765_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lake_CLI_Check_0__Lake_Check_checkUsedAxioms_spec__0(lean_object* v_a_4768_, lean_object* v_a_4769_){
_start:
{
if (lean_obj_tag(v_a_4768_) == 0)
{
lean_object* v___x_4770_; 
v___x_4770_ = l_List_reverse___redArg(v_a_4769_);
return v___x_4770_;
}
else
{
lean_object* v_head_4771_; lean_object* v_tail_4772_; lean_object* v___x_4774_; uint8_t v_isShared_4775_; uint8_t v_isSharedCheck_4792_; 
v_head_4771_ = lean_ctor_get(v_a_4768_, 0);
v_tail_4772_ = lean_ctor_get(v_a_4768_, 1);
v_isSharedCheck_4792_ = !lean_is_exclusive(v_a_4768_);
if (v_isSharedCheck_4792_ == 0)
{
v___x_4774_ = v_a_4768_;
v_isShared_4775_ = v_isSharedCheck_4792_;
goto v_resetjp_4773_;
}
else
{
lean_inc(v_tail_4772_);
lean_inc(v_head_4771_);
lean_dec(v_a_4768_);
v___x_4774_ = lean_box(0);
v_isShared_4775_ = v_isSharedCheck_4792_;
goto v_resetjp_4773_;
}
v_resetjp_4773_:
{
lean_object* v_fst_4776_; lean_object* v_snd_4777_; lean_object* v___x_4778_; uint8_t v___x_4779_; lean_object* v___x_4780_; lean_object* v___x_4781_; lean_object* v___x_4782_; lean_object* v___x_4783_; lean_object* v___x_4784_; lean_object* v___x_4785_; lean_object* v___x_4786_; lean_object* v___x_4787_; lean_object* v___x_4789_; 
v_fst_4776_ = lean_ctor_get(v_head_4771_, 0);
lean_inc(v_fst_4776_);
v_snd_4777_ = lean_ctor_get(v_head_4771_, 1);
lean_inc(v_snd_4777_);
lean_dec(v_head_4771_);
v___x_4778_ = ((lean_object*)(l_List_mapTR_loop___at___00__private_Lake_CLI_Check_0__Lake_Check_checkUsedAxioms_spec__0___closed__0));
v___x_4779_ = 1;
v___x_4780_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_fst_4776_, v___x_4779_);
v___x_4781_ = lean_string_append(v___x_4778_, v___x_4780_);
lean_dec_ref(v___x_4780_);
v___x_4782_ = ((lean_object*)(l_List_mapTR_loop___at___00__private_Lake_CLI_Check_0__Lake_Check_checkUsedAxioms_spec__0___closed__1));
v___x_4783_ = lean_string_append(v___x_4781_, v___x_4782_);
v___x_4784_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_snd_4777_, v___x_4779_);
v___x_4785_ = lean_string_append(v___x_4783_, v___x_4784_);
lean_dec_ref(v___x_4784_);
v___x_4786_ = ((lean_object*)(l_Lean_Array_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lake_Check_instFromJsonConfig_fromJson_spec__1_spec__1___closed__1));
v___x_4787_ = lean_string_append(v___x_4785_, v___x_4786_);
if (v_isShared_4775_ == 0)
{
lean_ctor_set(v___x_4774_, 1, v_a_4769_);
lean_ctor_set(v___x_4774_, 0, v___x_4787_);
v___x_4789_ = v___x_4774_;
goto v_reusejp_4788_;
}
else
{
lean_object* v_reuseFailAlloc_4791_; 
v_reuseFailAlloc_4791_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4791_, 0, v___x_4787_);
lean_ctor_set(v_reuseFailAlloc_4791_, 1, v_a_4769_);
v___x_4789_ = v_reuseFailAlloc_4791_;
goto v_reusejp_4788_;
}
v_reusejp_4788_:
{
v_a_4768_ = v_tail_4772_;
v_a_4769_ = v___x_4789_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_Check_0__Lake_Check_checkUsedAxioms___redArg(lean_object* v_exported_4798_){
_start:
{
lean_object* v___y_4801_; lean_object* v_used_4814_; lean_object* v___x_4827_; lean_object* v___x_4828_; uint8_t v___x_4829_; 
v_used_4814_ = l_Lake_Check_usedAxioms(v_exported_4798_);
v___x_4827_ = lean_array_get_size(v_used_4814_);
v___x_4828_ = lean_unsigned_to_nat(0u);
v___x_4829_ = lean_nat_dec_eq(v___x_4827_, v___x_4828_);
if (v___x_4829_ == 0)
{
lean_object* v___x_4830_; lean_object* v___x_4831_; lean_object* v___x_4832_; lean_object* v___x_4833_; lean_object* v___x_4834_; lean_object* v___x_4835_; lean_object* v___x_4836_; lean_object* v___x_4837_; 
v___x_4830_ = ((lean_object*)(l___private_Lake_CLI_Check_0__Lake_Check_checkUsedAxioms___redArg___closed__2));
v___x_4831_ = ((lean_object*)(l_List_foldl___at___00List_toString___at___00__private_Lake_CLI_Check_0__Lake_Check_withSafeExport_spec__0_spec__0___closed__0));
lean_inc_ref(v_used_4814_);
v___x_4832_ = lean_array_to_list(v_used_4814_);
v___x_4833_ = lean_box(0);
v___x_4834_ = l_List_mapTR_loop___at___00__private_Lake_CLI_Check_0__Lake_Check_checkUsedAxioms_spec__2(v___x_4832_, v___x_4833_);
v___x_4835_ = l_String_intercalate(v___x_4831_, v___x_4834_);
v___x_4836_ = lean_string_append(v___x_4830_, v___x_4835_);
lean_dec_ref(v___x_4835_);
v___x_4837_ = l_IO_println___at___00__private_Lake_CLI_Check_0__Lake_Check_safeResolveWorkspace_spec__2(v___x_4836_);
if (lean_obj_tag(v___x_4837_) == 0)
{
lean_dec_ref_known(v___x_4837_, 1);
goto v___jp_4815_;
}
else
{
lean_dec_ref(v_used_4814_);
return v___x_4837_;
}
}
else
{
lean_object* v___x_4838_; lean_object* v___x_4839_; 
v___x_4838_ = ((lean_object*)(l___private_Lake_CLI_Check_0__Lake_Check_checkUsedAxioms___redArg___closed__3));
v___x_4839_ = l_IO_println___at___00__private_Lake_CLI_Check_0__Lake_Check_safeResolveWorkspace_spec__2(v___x_4838_);
if (lean_obj_tag(v___x_4839_) == 0)
{
lean_dec_ref_known(v___x_4839_, 1);
goto v___jp_4815_;
}
else
{
lean_dec_ref(v_used_4814_);
return v___x_4839_;
}
}
v___jp_4800_:
{
lean_object* v___x_4802_; lean_object* v___x_4803_; uint8_t v___x_4804_; 
v___x_4802_ = lean_array_get_size(v___y_4801_);
v___x_4803_ = lean_unsigned_to_nat(0u);
v___x_4804_ = lean_nat_dec_eq(v___x_4802_, v___x_4803_);
if (v___x_4804_ == 0)
{
lean_object* v___x_4805_; lean_object* v___x_4806_; lean_object* v___x_4807_; lean_object* v___x_4808_; lean_object* v___x_4809_; lean_object* v___x_4810_; lean_object* v___x_4811_; 
v___x_4805_ = ((lean_object*)(l___private_Lake_CLI_Check_0__Lake_Check_checkUsedAxioms___redArg___closed__0));
v___x_4806_ = lean_array_to_list(v___y_4801_);
v___x_4807_ = lean_box(0);
v___x_4808_ = l_List_mapTR_loop___at___00__private_Lake_CLI_Check_0__Lake_Check_checkUsedAxioms_spec__0(v___x_4806_, v___x_4807_);
v___x_4809_ = l_String_intercalate(v___x_4805_, v___x_4808_);
v___x_4810_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_4810_, 0, v___x_4809_);
v___x_4811_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4811_, 0, v___x_4810_);
return v___x_4811_;
}
else
{
lean_object* v___x_4812_; lean_object* v___x_4813_; 
lean_dec_ref(v___y_4801_);
v___x_4812_ = lean_box(0);
v___x_4813_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4813_, 0, v___x_4812_);
return v___x_4813_;
}
}
v___jp_4815_:
{
lean_object* v___x_4816_; lean_object* v___x_4817_; lean_object* v___x_4818_; uint8_t v___x_4819_; 
v___x_4816_ = lean_unsigned_to_nat(0u);
v___x_4817_ = lean_array_get_size(v_used_4814_);
v___x_4818_ = ((lean_object*)(l___private_Lake_CLI_Check_0__Lake_Check_checkUsedAxioms___redArg___closed__1));
v___x_4819_ = lean_nat_dec_lt(v___x_4816_, v___x_4817_);
if (v___x_4819_ == 0)
{
lean_dec_ref(v_used_4814_);
v___y_4801_ = v___x_4818_;
goto v___jp_4800_;
}
else
{
uint8_t v___x_4820_; 
v___x_4820_ = lean_nat_dec_le(v___x_4817_, v___x_4817_);
if (v___x_4820_ == 0)
{
if (v___x_4819_ == 0)
{
lean_dec_ref(v_used_4814_);
v___y_4801_ = v___x_4818_;
goto v___jp_4800_;
}
else
{
size_t v___x_4821_; size_t v___x_4822_; lean_object* v___x_4823_; 
v___x_4821_ = ((size_t)0ULL);
v___x_4822_ = lean_usize_of_nat(v___x_4817_);
v___x_4823_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_Check_0__Lake_Check_checkUsedAxioms_spec__1(v_used_4814_, v___x_4821_, v___x_4822_, v___x_4818_);
lean_dec_ref(v_used_4814_);
v___y_4801_ = v___x_4823_;
goto v___jp_4800_;
}
}
else
{
size_t v___x_4824_; size_t v___x_4825_; lean_object* v___x_4826_; 
v___x_4824_ = ((size_t)0ULL);
v___x_4825_ = lean_usize_of_nat(v___x_4817_);
v___x_4826_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lake_CLI_Check_0__Lake_Check_checkUsedAxioms_spec__1(v_used_4814_, v___x_4824_, v___x_4825_, v___x_4818_);
lean_dec_ref(v_used_4814_);
v___y_4801_ = v___x_4826_;
goto v___jp_4800_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_Check_0__Lake_Check_checkUsedAxioms___redArg___boxed(lean_object* v_exported_4840_, lean_object* v_a_4841_){
_start:
{
lean_object* v_res_4842_; 
v_res_4842_ = l___private_Lake_CLI_Check_0__Lake_Check_checkUsedAxioms___redArg(v_exported_4840_);
return v_res_4842_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_Check_0__Lake_Check_checkUsedAxioms(lean_object* v_exported_4843_, lean_object* v_a_4844_){
_start:
{
lean_object* v___x_4846_; 
v___x_4846_ = l___private_Lake_CLI_Check_0__Lake_Check_checkUsedAxioms___redArg(v_exported_4843_);
return v___x_4846_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_Check_0__Lake_Check_checkUsedAxioms___boxed(lean_object* v_exported_4847_, lean_object* v_a_4848_, lean_object* v_a_4849_){
_start:
{
lean_object* v_res_4850_; 
v_res_4850_ = l___private_Lake_CLI_Check_0__Lake_Check_checkUsedAxioms(v_exported_4847_, v_a_4848_);
lean_dec_ref(v_a_4848_);
return v_res_4850_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_Check_0__Lake_Check_checkProject___lam__0(lean_object* v_exportPath_4851_, lean_object* v___y_4852_){
_start:
{
lean_object* v___x_4854_; 
lean_inc_ref(v_exportPath_4851_);
v___x_4854_ = l___private_Lake_CLI_Check_0__Lake_Check_runBuiltinKernel(v_exportPath_4851_, v___y_4852_);
if (lean_obj_tag(v___x_4854_) == 0)
{
lean_object* v_a_4855_; lean_object* v___x_4857_; uint8_t v_isShared_4858_; uint8_t v_isSharedCheck_4893_; 
v_a_4855_ = lean_ctor_get(v___x_4854_, 0);
v_isSharedCheck_4893_ = !lean_is_exclusive(v___x_4854_);
if (v_isSharedCheck_4893_ == 0)
{
v___x_4857_ = v___x_4854_;
v_isShared_4858_ = v_isSharedCheck_4893_;
goto v_resetjp_4856_;
}
else
{
lean_inc(v_a_4855_);
lean_dec(v___x_4854_);
v___x_4857_ = lean_box(0);
v_isShared_4858_ = v_isSharedCheck_4893_;
goto v_resetjp_4856_;
}
v_resetjp_4856_:
{
if (lean_obj_tag(v_a_4855_) == 1)
{
lean_object* v_val_4859_; lean_object* v___x_4861_; uint8_t v_isShared_4862_; uint8_t v_isSharedCheck_4869_; 
lean_dec_ref(v_exportPath_4851_);
v_val_4859_ = lean_ctor_get(v_a_4855_, 0);
v_isSharedCheck_4869_ = !lean_is_exclusive(v_a_4855_);
if (v_isSharedCheck_4869_ == 0)
{
v___x_4861_ = v_a_4855_;
v_isShared_4862_ = v_isSharedCheck_4869_;
goto v_resetjp_4860_;
}
else
{
lean_inc(v_val_4859_);
lean_dec(v_a_4855_);
v___x_4861_ = lean_box(0);
v_isShared_4862_ = v_isSharedCheck_4869_;
goto v_resetjp_4860_;
}
v_resetjp_4860_:
{
lean_object* v___x_4864_; 
if (v_isShared_4862_ == 0)
{
lean_ctor_set_tag(v___x_4861_, 18);
v___x_4864_ = v___x_4861_;
goto v_reusejp_4863_;
}
else
{
lean_object* v_reuseFailAlloc_4868_; 
v_reuseFailAlloc_4868_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4868_, 0, v_val_4859_);
v___x_4864_ = v_reuseFailAlloc_4868_;
goto v_reusejp_4863_;
}
v_reusejp_4863_:
{
lean_object* v___x_4866_; 
if (v_isShared_4858_ == 0)
{
lean_ctor_set_tag(v___x_4857_, 1);
lean_ctor_set(v___x_4857_, 0, v___x_4864_);
v___x_4866_ = v___x_4857_;
goto v_reusejp_4865_;
}
else
{
lean_object* v_reuseFailAlloc_4867_; 
v_reuseFailAlloc_4867_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4867_, 0, v___x_4864_);
v___x_4866_ = v_reuseFailAlloc_4867_;
goto v_reusejp_4865_;
}
v_reusejp_4865_:
{
return v___x_4866_;
}
}
}
}
else
{
uint8_t v___x_4870_; lean_object* v___x_4871_; 
lean_del_object(v___x_4857_);
lean_dec(v_a_4855_);
v___x_4870_ = 0;
v___x_4871_ = lean_io_prim_handle_mk(v_exportPath_4851_, v___x_4870_);
lean_dec_ref(v_exportPath_4851_);
if (lean_obj_tag(v___x_4871_) == 0)
{
lean_object* v_a_4872_; lean_object* v___x_4873_; lean_object* v___x_4874_; 
v_a_4872_ = lean_ctor_get(v___x_4871_, 0);
lean_inc(v_a_4872_);
lean_dec_ref_known(v___x_4871_, 1);
v___x_4873_ = lean_stream_of_handle(v_a_4872_);
v___x_4874_ = l_LeanExport_parseStream(v___x_4873_);
if (lean_obj_tag(v___x_4874_) == 0)
{
lean_object* v_a_4875_; lean_object* v___x_4876_; 
v_a_4875_ = lean_ctor_get(v___x_4874_, 0);
lean_inc(v_a_4875_);
lean_dec_ref_known(v___x_4874_, 1);
v___x_4876_ = l___private_Lake_CLI_Check_0__Lake_Check_checkUsedAxioms___redArg(v_a_4875_);
return v___x_4876_;
}
else
{
lean_object* v_a_4877_; lean_object* v___x_4879_; uint8_t v_isShared_4880_; uint8_t v_isSharedCheck_4884_; 
v_a_4877_ = lean_ctor_get(v___x_4874_, 0);
v_isSharedCheck_4884_ = !lean_is_exclusive(v___x_4874_);
if (v_isSharedCheck_4884_ == 0)
{
v___x_4879_ = v___x_4874_;
v_isShared_4880_ = v_isSharedCheck_4884_;
goto v_resetjp_4878_;
}
else
{
lean_inc(v_a_4877_);
lean_dec(v___x_4874_);
v___x_4879_ = lean_box(0);
v_isShared_4880_ = v_isSharedCheck_4884_;
goto v_resetjp_4878_;
}
v_resetjp_4878_:
{
lean_object* v___x_4882_; 
if (v_isShared_4880_ == 0)
{
v___x_4882_ = v___x_4879_;
goto v_reusejp_4881_;
}
else
{
lean_object* v_reuseFailAlloc_4883_; 
v_reuseFailAlloc_4883_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4883_, 0, v_a_4877_);
v___x_4882_ = v_reuseFailAlloc_4883_;
goto v_reusejp_4881_;
}
v_reusejp_4881_:
{
return v___x_4882_;
}
}
}
}
else
{
lean_object* v_a_4885_; lean_object* v___x_4887_; uint8_t v_isShared_4888_; uint8_t v_isSharedCheck_4892_; 
v_a_4885_ = lean_ctor_get(v___x_4871_, 0);
v_isSharedCheck_4892_ = !lean_is_exclusive(v___x_4871_);
if (v_isSharedCheck_4892_ == 0)
{
v___x_4887_ = v___x_4871_;
v_isShared_4888_ = v_isSharedCheck_4892_;
goto v_resetjp_4886_;
}
else
{
lean_inc(v_a_4885_);
lean_dec(v___x_4871_);
v___x_4887_ = lean_box(0);
v_isShared_4888_ = v_isSharedCheck_4892_;
goto v_resetjp_4886_;
}
v_resetjp_4886_:
{
lean_object* v___x_4890_; 
if (v_isShared_4888_ == 0)
{
v___x_4890_ = v___x_4887_;
goto v_reusejp_4889_;
}
else
{
lean_object* v_reuseFailAlloc_4891_; 
v_reuseFailAlloc_4891_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4891_, 0, v_a_4885_);
v___x_4890_ = v_reuseFailAlloc_4891_;
goto v_reusejp_4889_;
}
v_reusejp_4889_:
{
return v___x_4890_;
}
}
}
}
}
}
else
{
lean_object* v_a_4894_; lean_object* v___x_4896_; uint8_t v_isShared_4897_; uint8_t v_isSharedCheck_4901_; 
lean_dec_ref(v_exportPath_4851_);
v_a_4894_ = lean_ctor_get(v___x_4854_, 0);
v_isSharedCheck_4901_ = !lean_is_exclusive(v___x_4854_);
if (v_isSharedCheck_4901_ == 0)
{
v___x_4896_ = v___x_4854_;
v_isShared_4897_ = v_isSharedCheck_4901_;
goto v_resetjp_4895_;
}
else
{
lean_inc(v_a_4894_);
lean_dec(v___x_4854_);
v___x_4896_ = lean_box(0);
v_isShared_4897_ = v_isSharedCheck_4901_;
goto v_resetjp_4895_;
}
v_resetjp_4895_:
{
lean_object* v___x_4899_; 
if (v_isShared_4897_ == 0)
{
v___x_4899_ = v___x_4896_;
goto v_reusejp_4898_;
}
else
{
lean_object* v_reuseFailAlloc_4900_; 
v_reuseFailAlloc_4900_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4900_, 0, v_a_4894_);
v___x_4899_ = v_reuseFailAlloc_4900_;
goto v_reusejp_4898_;
}
v_reusejp_4898_:
{
return v___x_4899_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_Check_0__Lake_Check_checkProject___lam__0___boxed(lean_object* v_exportPath_4902_, lean_object* v___y_4903_, lean_object* v___y_4904_){
_start:
{
lean_object* v_res_4905_; 
v_res_4905_ = l___private_Lake_CLI_Check_0__Lake_Check_checkProject___lam__0(v_exportPath_4902_, v___y_4903_);
lean_dec_ref(v___y_4903_);
return v_res_4905_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_Check_0__Lake_Check_checkProject(lean_object* v_a_4907_){
_start:
{
lean_object* v___f_4909_; lean_object* v___x_4910_; 
v___f_4909_ = ((lean_object*)(l___private_Lake_CLI_Check_0__Lake_Check_checkProject___closed__0));
v___x_4910_ = l___private_Lake_CLI_Check_0__Lake_Check_safeResolveDeps(v_a_4907_);
if (lean_obj_tag(v___x_4910_) == 0)
{
lean_object* v___x_4911_; 
lean_dec_ref_known(v___x_4910_, 1);
v___x_4911_ = l___private_Lake_CLI_Check_0__Lake_Check_withSafeBuildAndExport___redArg(v___f_4909_, v_a_4907_);
return v___x_4911_;
}
else
{
return v___x_4910_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_CLI_Check_0__Lake_Check_checkProject___boxed(lean_object* v_a_4912_, lean_object* v_a_4913_){
_start:
{
lean_object* v_res_4914_; 
v_res_4914_ = l___private_Lake_CLI_Check_0__Lake_Check_checkProject(v_a_4912_);
lean_dec_ref(v_a_4912_);
return v_res_4914_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_Check_runComparator_spec__0(size_t v_sz_4915_, size_t v_i_4916_, lean_object* v_bs_4917_){
_start:
{
uint8_t v___x_4918_; 
v___x_4918_ = lean_usize_dec_lt(v_i_4916_, v_sz_4915_);
if (v___x_4918_ == 0)
{
lean_object* v___x_4919_; 
v___x_4919_ = l_unsafeCast___redArg(v_bs_4917_);
lean_dec_ref(v_bs_4917_);
return v___x_4919_;
}
else
{
lean_object* v_v_4920_; lean_object* v___x_4921_; lean_object* v_bs_x27_4922_; lean_object* v___x_4923_; lean_object* v___x_4924_; size_t v___x_4925_; size_t v___x_4926_; lean_object* v___x_4927_; lean_object* v___x_4928_; 
v_v_4920_ = lean_array_uget(v_bs_4917_, v_i_4916_);
v___x_4921_ = lean_unsigned_to_nat(0u);
v_bs_x27_4922_ = lean_array_uset(v_bs_4917_, v_i_4916_, v___x_4921_);
v___x_4923_ = l_unsafeCast___redArg(v_v_4920_);
lean_dec(v_v_4920_);
v___x_4924_ = l_String_toName(v___x_4923_);
v___x_4925_ = ((size_t)1ULL);
v___x_4926_ = lean_usize_add(v_i_4916_, v___x_4925_);
v___x_4927_ = l_unsafeCast___redArg(v___x_4924_);
lean_dec(v___x_4924_);
v___x_4928_ = lean_array_uset(v_bs_x27_4922_, v_i_4916_, v___x_4927_);
v_i_4916_ = v___x_4926_;
v_bs_4917_ = v___x_4928_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_Check_runComparator_spec__0___boxed(lean_object* v_sz_4930_, lean_object* v_i_4931_, lean_object* v_bs_4932_){
_start:
{
size_t v_sz_boxed_4933_; size_t v_i_boxed_4934_; lean_object* v_res_4935_; 
v_sz_boxed_4933_ = lean_unbox_usize(v_sz_4930_);
lean_dec(v_sz_4930_);
v_i_boxed_4934_ = lean_unbox_usize(v_i_4931_);
lean_dec(v_i_4931_);
v_res_4935_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_Check_runComparator_spec__0(v_sz_boxed_4933_, v_i_boxed_4934_, v_bs_4932_);
return v_res_4935_;
}
}
static lean_object* _init_l_Lake_Check_runComparator___boxed__const__1(void){
_start:
{
uint32_t v___x_4942_; lean_object* v___x_4943_; 
v___x_4942_ = 1;
v___x_4943_ = lean_box_uint32(v___x_4942_);
return v___x_4943_;
}
}
static lean_object* _init_l_Lake_Check_runComparator___boxed__const__2(void){
_start:
{
uint32_t v___x_4944_; lean_object* v___x_4945_; 
v___x_4944_ = 0;
v___x_4945_ = lean_box_uint32(v___x_4944_);
return v___x_4945_;
}
}
LEAN_EXPORT lean_object* l_Lake_Check_runComparator(lean_object* v_configFile_x3f_4946_, lean_object* v_lean_4947_, lean_object* v_lake_4948_, lean_object* v_projectDir_4949_){
_start:
{
lean_object* v_a_4952_; lean_object* v___y_4975_; lean_object* v_a_4976_; lean_object* v___x_4983_; lean_object* v___x_4984_; 
v___x_4983_ = ((lean_object*)(l_Lake_Check_runComparator___closed__2));
v___x_4984_ = l___private_Lake_CLI_Check_0__Lake_Check_mkContext(v___x_4983_, v_lean_4947_, v_lake_4948_, v_projectDir_4949_);
if (lean_obj_tag(v___x_4984_) == 0)
{
lean_object* v_a_4985_; lean_object* v___x_4987_; uint8_t v_isShared_4988_; uint8_t v_isSharedCheck_5133_; 
v_a_4985_ = lean_ctor_get(v___x_4984_, 0);
v_isSharedCheck_5133_ = !lean_is_exclusive(v___x_4984_);
if (v_isSharedCheck_5133_ == 0)
{
v___x_4987_ = v___x_4984_;
v_isShared_4988_ = v_isSharedCheck_5133_;
goto v_resetjp_4986_;
}
else
{
lean_inc(v_a_4985_);
lean_dec(v___x_4984_);
v___x_4987_ = lean_box(0);
v_isShared_4988_ = v_isSharedCheck_5133_;
goto v_resetjp_4986_;
}
v_resetjp_4986_:
{
if (lean_obj_tag(v_a_4985_) == 0)
{
lean_object* v_a_4989_; lean_object* v___x_4991_; 
v_a_4989_ = lean_ctor_get(v_a_4985_, 0);
lean_inc(v_a_4989_);
lean_dec_ref_known(v_a_4985_, 1);
if (v_isShared_4988_ == 0)
{
lean_ctor_set(v___x_4987_, 0, v_a_4989_);
v___x_4991_ = v___x_4987_;
goto v_reusejp_4990_;
}
else
{
lean_object* v_reuseFailAlloc_4992_; 
v_reuseFailAlloc_4992_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4992_, 0, v_a_4989_);
v___x_4991_ = v_reuseFailAlloc_4992_;
goto v_reusejp_4990_;
}
v_reusejp_4990_:
{
return v___x_4991_;
}
}
else
{
lean_object* v_a_4993_; lean_object* v___y_4995_; lean_object* v___y_4996_; size_t v___y_4997_; lean_object* v___y_4998_; lean_object* v___y_4999_; lean_object* v___y_5000_; lean_object* v___y_5001_; lean_object* v___y_5086_; size_t v___y_5087_; lean_object* v___y_5088_; lean_object* v___y_5089_; lean_object* v___y_5090_; lean_object* v___y_5091_; lean_object* v___y_5092_; lean_object* v___y_5105_; 
lean_del_object(v___x_4987_);
v_a_4993_ = lean_ctor_get(v_a_4985_, 0);
lean_inc(v_a_4993_);
lean_dec_ref_known(v_a_4985_, 1);
if (lean_obj_tag(v_configFile_x3f_4946_) == 0)
{
lean_object* v___x_5131_; 
v___x_5131_ = ((lean_object*)(l_Lake_Check_runComparator___closed__5));
v___y_5105_ = v___x_5131_;
goto v___jp_5104_;
}
else
{
lean_object* v_val_5132_; 
v_val_5132_ = lean_ctor_get(v_configFile_x3f_4946_, 0);
v___y_5105_ = v_val_5132_;
goto v___jp_5104_;
}
v___jp_4994_:
{
lean_object* v___x_5002_; 
v___x_5002_ = l___private_Lake_CLI_Check_0__Lake_Check_resolveExternalKernels(v___y_4996_);
if (lean_obj_tag(v___x_5002_) == 0)
{
lean_object* v_a_5003_; lean_object* v___x_5005_; uint8_t v_isShared_5006_; uint8_t v_isSharedCheck_5076_; 
v_a_5003_ = lean_ctor_get(v___x_5002_, 0);
v_isSharedCheck_5076_ = !lean_is_exclusive(v___x_5002_);
if (v_isSharedCheck_5076_ == 0)
{
v___x_5005_ = v___x_5002_;
v_isShared_5006_ = v_isSharedCheck_5076_;
goto v_resetjp_5004_;
}
else
{
lean_inc(v_a_5003_);
lean_dec(v___x_5002_);
v___x_5005_ = lean_box(0);
v_isShared_5006_ = v_isSharedCheck_5076_;
goto v_resetjp_5004_;
}
v_resetjp_5004_:
{
if (lean_obj_tag(v_a_5003_) == 0)
{
lean_object* v_a_5007_; lean_object* v___x_5009_; 
lean_dec_ref(v___y_5001_);
lean_dec_ref(v___y_5000_);
lean_dec_ref(v___y_4999_);
lean_dec(v___y_4998_);
lean_dec(v___y_4995_);
lean_dec(v_a_4993_);
v_a_5007_ = lean_ctor_get(v_a_5003_, 0);
lean_inc(v_a_5007_);
lean_dec_ref_known(v_a_5003_, 1);
if (v_isShared_5006_ == 0)
{
lean_ctor_set(v___x_5005_, 0, v_a_5007_);
v___x_5009_ = v___x_5005_;
goto v_reusejp_5008_;
}
else
{
lean_object* v_reuseFailAlloc_5010_; 
v_reuseFailAlloc_5010_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5010_, 0, v_a_5007_);
v___x_5009_ = v_reuseFailAlloc_5010_;
goto v_reusejp_5008_;
}
v_reusejp_5008_:
{
return v___x_5009_;
}
}
else
{
lean_object* v_a_5011_; lean_object* v_projectDir_5012_; lean_object* v_leanPrefix_5013_; lean_object* v_leanPath_5014_; lean_object* v_binPath_5015_; lean_object* v_whichSandbox_5016_; lean_object* v_whichLake_5017_; lean_object* v_lakeHome_5018_; lean_object* v_whichLean4Export_5019_; lean_object* v_whichLeanChecker_5020_; lean_object* v_whichEnvBin_5021_; lean_object* v___x_5023_; uint8_t v_isShared_5024_; uint8_t v_isSharedCheck_5069_; 
lean_del_object(v___x_5005_);
v_a_5011_ = lean_ctor_get(v_a_5003_, 0);
lean_inc(v_a_5011_);
lean_dec_ref_known(v_a_5003_, 1);
v_projectDir_5012_ = lean_ctor_get(v_a_4993_, 0);
v_leanPrefix_5013_ = lean_ctor_get(v_a_4993_, 6);
v_leanPath_5014_ = lean_ctor_get(v_a_4993_, 7);
v_binPath_5015_ = lean_ctor_get(v_a_4993_, 8);
v_whichSandbox_5016_ = lean_ctor_get(v_a_4993_, 9);
v_whichLake_5017_ = lean_ctor_get(v_a_4993_, 10);
v_lakeHome_5018_ = lean_ctor_get(v_a_4993_, 11);
v_whichLean4Export_5019_ = lean_ctor_get(v_a_4993_, 12);
v_whichLeanChecker_5020_ = lean_ctor_get(v_a_4993_, 13);
v_whichEnvBin_5021_ = lean_ctor_get(v_a_4993_, 14);
v_isSharedCheck_5069_ = !lean_is_exclusive(v_a_4993_);
if (v_isSharedCheck_5069_ == 0)
{
lean_object* v_unused_5070_; lean_object* v_unused_5071_; lean_object* v_unused_5072_; lean_object* v_unused_5073_; lean_object* v_unused_5074_; lean_object* v_unused_5075_; 
v_unused_5070_ = lean_ctor_get(v_a_4993_, 15);
lean_dec(v_unused_5070_);
v_unused_5071_ = lean_ctor_get(v_a_4993_, 5);
lean_dec(v_unused_5071_);
v_unused_5072_ = lean_ctor_get(v_a_4993_, 4);
lean_dec(v_unused_5072_);
v_unused_5073_ = lean_ctor_get(v_a_4993_, 3);
lean_dec(v_unused_5073_);
v_unused_5074_ = lean_ctor_get(v_a_4993_, 2);
lean_dec(v_unused_5074_);
v_unused_5075_ = lean_ctor_get(v_a_4993_, 1);
lean_dec(v_unused_5075_);
v___x_5023_ = v_a_4993_;
v_isShared_5024_ = v_isSharedCheck_5069_;
goto v_resetjp_5022_;
}
else
{
lean_inc(v_whichEnvBin_5021_);
lean_inc(v_whichLeanChecker_5020_);
lean_inc(v_whichLean4Export_5019_);
lean_inc(v_lakeHome_5018_);
lean_inc(v_whichLake_5017_);
lean_inc(v_whichSandbox_5016_);
lean_inc(v_binPath_5015_);
lean_inc(v_leanPath_5014_);
lean_inc(v_leanPrefix_5013_);
lean_inc(v_projectDir_5012_);
lean_dec(v_a_4993_);
v___x_5023_ = lean_box(0);
v_isShared_5024_ = v_isSharedCheck_5069_;
goto v_resetjp_5022_;
}
v_resetjp_5022_:
{
lean_object* v___x_5025_; 
lean_inc_ref(v_projectDir_5012_);
v___x_5025_ = l___private_Lake_CLI_Check_0__Lake_Check_checkManifest(v___x_4983_, v_projectDir_5012_);
if (lean_obj_tag(v___x_5025_) == 0)
{
lean_object* v_a_5026_; lean_object* v___x_5028_; uint8_t v_isShared_5029_; uint8_t v_isSharedCheck_5060_; 
v_a_5026_ = lean_ctor_get(v___x_5025_, 0);
v_isSharedCheck_5060_ = !lean_is_exclusive(v___x_5025_);
if (v_isSharedCheck_5060_ == 0)
{
v___x_5028_ = v___x_5025_;
v_isShared_5029_ = v_isSharedCheck_5060_;
goto v_resetjp_5027_;
}
else
{
lean_inc(v_a_5026_);
lean_dec(v___x_5025_);
v___x_5028_ = lean_box(0);
v_isShared_5029_ = v_isSharedCheck_5060_;
goto v_resetjp_5027_;
}
v_resetjp_5027_:
{
if (lean_obj_tag(v_a_5026_) == 1)
{
lean_object* v_val_5030_; lean_object* v___x_5032_; 
lean_del_object(v___x_5023_);
lean_dec_ref(v_whichEnvBin_5021_);
lean_dec_ref(v_whichLeanChecker_5020_);
lean_dec_ref(v_whichLean4Export_5019_);
lean_dec_ref(v_lakeHome_5018_);
lean_dec_ref(v_whichLake_5017_);
lean_dec_ref(v_whichSandbox_5016_);
lean_dec_ref(v_binPath_5015_);
lean_dec_ref(v_leanPath_5014_);
lean_dec_ref(v_leanPrefix_5013_);
lean_dec_ref(v_projectDir_5012_);
lean_dec(v_a_5011_);
lean_dec_ref(v___y_5001_);
lean_dec_ref(v___y_5000_);
lean_dec_ref(v___y_4999_);
lean_dec(v___y_4998_);
lean_dec(v___y_4995_);
v_val_5030_ = lean_ctor_get(v_a_5026_, 0);
lean_inc(v_val_5030_);
lean_dec_ref_known(v_a_5026_, 1);
if (v_isShared_5029_ == 0)
{
lean_ctor_set(v___x_5028_, 0, v_val_5030_);
v___x_5032_ = v___x_5028_;
goto v_reusejp_5031_;
}
else
{
lean_object* v_reuseFailAlloc_5033_; 
v_reuseFailAlloc_5033_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5033_, 0, v_val_5030_);
v___x_5032_ = v_reuseFailAlloc_5033_;
goto v_reusejp_5031_;
}
v_reusejp_5031_:
{
return v___x_5032_;
}
}
else
{
lean_object* v___x_5034_; lean_object* v___x_5035_; size_t v_sz_5036_; lean_object* v___x_5037_; lean_object* v___x_5038_; lean_object* v___x_5039_; lean_object* v___x_5041_; 
lean_del_object(v___x_5028_);
lean_dec(v_a_5026_);
v___x_5034_ = l_String_toName(v___y_5000_);
v___x_5035_ = l_String_toName(v___y_5001_);
v_sz_5036_ = lean_array_size(v___y_4999_);
v___x_5037_ = l_unsafeCast___redArg(v___y_4999_);
lean_dec_ref(v___y_4999_);
v___x_5038_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_Check_runComparator_spec__0(v_sz_5036_, v___y_4997_, v___x_5037_);
v___x_5039_ = l_unsafeCast___redArg(v___x_5038_);
lean_dec_ref(v___x_5038_);
lean_inc(v_a_5011_);
lean_inc_ref(v_whichEnvBin_5021_);
lean_inc_ref(v_whichLeanChecker_5020_);
lean_inc_ref(v_whichLean4Export_5019_);
lean_inc_ref(v_lakeHome_5018_);
lean_inc_ref(v_whichLake_5017_);
lean_inc_ref(v_whichSandbox_5016_);
lean_inc_ref(v_leanPrefix_5013_);
lean_inc(v___x_5039_);
lean_inc(v___y_4995_);
lean_inc(v___y_4998_);
lean_inc(v___x_5035_);
lean_inc(v___x_5034_);
lean_inc_ref(v_projectDir_5012_);
if (v_isShared_5024_ == 0)
{
lean_ctor_set(v___x_5023_, 15, v_a_5011_);
lean_ctor_set(v___x_5023_, 5, v___x_5039_);
lean_ctor_set(v___x_5023_, 4, v___y_4995_);
lean_ctor_set(v___x_5023_, 3, v___y_4998_);
lean_ctor_set(v___x_5023_, 2, v___x_5035_);
lean_ctor_set(v___x_5023_, 1, v___x_5034_);
v___x_5041_ = v___x_5023_;
goto v_reusejp_5040_;
}
else
{
lean_object* v_reuseFailAlloc_5059_; 
v_reuseFailAlloc_5059_ = lean_alloc_ctor(0, 16, 0);
lean_ctor_set(v_reuseFailAlloc_5059_, 0, v_projectDir_5012_);
lean_ctor_set(v_reuseFailAlloc_5059_, 1, v___x_5034_);
lean_ctor_set(v_reuseFailAlloc_5059_, 2, v___x_5035_);
lean_ctor_set(v_reuseFailAlloc_5059_, 3, v___y_4998_);
lean_ctor_set(v_reuseFailAlloc_5059_, 4, v___y_4995_);
lean_ctor_set(v_reuseFailAlloc_5059_, 5, v___x_5039_);
lean_ctor_set(v_reuseFailAlloc_5059_, 6, v_leanPrefix_5013_);
lean_ctor_set(v_reuseFailAlloc_5059_, 7, v_leanPath_5014_);
lean_ctor_set(v_reuseFailAlloc_5059_, 8, v_binPath_5015_);
lean_ctor_set(v_reuseFailAlloc_5059_, 9, v_whichSandbox_5016_);
lean_ctor_set(v_reuseFailAlloc_5059_, 10, v_whichLake_5017_);
lean_ctor_set(v_reuseFailAlloc_5059_, 11, v_lakeHome_5018_);
lean_ctor_set(v_reuseFailAlloc_5059_, 12, v_whichLean4Export_5019_);
lean_ctor_set(v_reuseFailAlloc_5059_, 13, v_whichLeanChecker_5020_);
lean_ctor_set(v_reuseFailAlloc_5059_, 14, v_whichEnvBin_5021_);
lean_ctor_set(v_reuseFailAlloc_5059_, 15, v_a_5011_);
v___x_5041_ = v_reuseFailAlloc_5059_;
goto v_reusejp_5040_;
}
v_reusejp_5040_:
{
lean_object* v___x_5042_; 
v___x_5042_ = l___private_Lake_CLI_Check_0__Lake_Check_safeResolveWorkspace(v___x_5041_);
lean_dec_ref(v___x_5041_);
if (lean_obj_tag(v___x_5042_) == 0)
{
lean_object* v_a_5043_; lean_object* v_fst_5044_; lean_object* v_snd_5045_; lean_object* v___x_5046_; lean_object* v___x_5047_; 
v_a_5043_ = lean_ctor_get(v___x_5042_, 0);
lean_inc(v_a_5043_);
lean_dec_ref_known(v___x_5042_, 1);
v_fst_5044_ = lean_ctor_get(v_a_5043_, 0);
lean_inc(v_fst_5044_);
v_snd_5045_ = lean_ctor_get(v_a_5043_, 1);
lean_inc(v_snd_5045_);
lean_dec(v_a_5043_);
v___x_5046_ = lean_alloc_ctor(0, 16, 0);
lean_ctor_set(v___x_5046_, 0, v_projectDir_5012_);
lean_ctor_set(v___x_5046_, 1, v___x_5034_);
lean_ctor_set(v___x_5046_, 2, v___x_5035_);
lean_ctor_set(v___x_5046_, 3, v___y_4998_);
lean_ctor_set(v___x_5046_, 4, v___y_4995_);
lean_ctor_set(v___x_5046_, 5, v___x_5039_);
lean_ctor_set(v___x_5046_, 6, v_leanPrefix_5013_);
lean_ctor_set(v___x_5046_, 7, v_fst_5044_);
lean_ctor_set(v___x_5046_, 8, v_snd_5045_);
lean_ctor_set(v___x_5046_, 9, v_whichSandbox_5016_);
lean_ctor_set(v___x_5046_, 10, v_whichLake_5017_);
lean_ctor_set(v___x_5046_, 11, v_lakeHome_5018_);
lean_ctor_set(v___x_5046_, 12, v_whichLean4Export_5019_);
lean_ctor_set(v___x_5046_, 13, v_whichLeanChecker_5020_);
lean_ctor_set(v___x_5046_, 14, v_whichEnvBin_5021_);
lean_ctor_set(v___x_5046_, 15, v_a_5011_);
v___x_5047_ = l_Lake_Check_compareIt(v___x_5046_);
lean_dec_ref_known(v___x_5046_, 16);
if (lean_obj_tag(v___x_5047_) == 0)
{
lean_object* v___x_5049_; uint8_t v_isShared_5050_; uint8_t v_isSharedCheck_5055_; 
v_isSharedCheck_5055_ = !lean_is_exclusive(v___x_5047_);
if (v_isSharedCheck_5055_ == 0)
{
lean_object* v_unused_5056_; 
v_unused_5056_ = lean_ctor_get(v___x_5047_, 0);
lean_dec(v_unused_5056_);
v___x_5049_ = v___x_5047_;
v_isShared_5050_ = v_isSharedCheck_5055_;
goto v_resetjp_5048_;
}
else
{
lean_dec(v___x_5047_);
v___x_5049_ = lean_box(0);
v_isShared_5050_ = v_isSharedCheck_5055_;
goto v_resetjp_5048_;
}
v_resetjp_5048_:
{
lean_object* v___x_5051_; lean_object* v___x_5053_; 
v___x_5051_ = l_Lake_Check_runComparator___boxed__const__2;
if (v_isShared_5050_ == 0)
{
lean_ctor_set(v___x_5049_, 0, v___x_5051_);
v___x_5053_ = v___x_5049_;
goto v_reusejp_5052_;
}
else
{
lean_object* v_reuseFailAlloc_5054_; 
v_reuseFailAlloc_5054_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5054_, 0, v___x_5051_);
v___x_5053_ = v_reuseFailAlloc_5054_;
goto v_reusejp_5052_;
}
v_reusejp_5052_:
{
return v___x_5053_;
}
}
}
else
{
lean_object* v_a_5057_; 
v_a_5057_ = lean_ctor_get(v___x_5047_, 0);
lean_inc(v_a_5057_);
lean_dec_ref_known(v___x_5047_, 1);
v_a_4952_ = v_a_5057_;
goto v___jp_4951_;
}
}
else
{
lean_object* v_a_5058_; 
lean_dec(v___x_5039_);
lean_dec(v___x_5035_);
lean_dec(v___x_5034_);
lean_dec_ref(v_whichEnvBin_5021_);
lean_dec_ref(v_whichLeanChecker_5020_);
lean_dec_ref(v_whichLean4Export_5019_);
lean_dec_ref(v_lakeHome_5018_);
lean_dec_ref(v_whichLake_5017_);
lean_dec_ref(v_whichSandbox_5016_);
lean_dec_ref(v_leanPrefix_5013_);
lean_dec_ref(v_projectDir_5012_);
lean_dec(v_a_5011_);
lean_dec(v___y_4998_);
lean_dec(v___y_4995_);
v_a_5058_ = lean_ctor_get(v___x_5042_, 0);
lean_inc(v_a_5058_);
lean_dec_ref_known(v___x_5042_, 1);
v_a_4952_ = v_a_5058_;
goto v___jp_4951_;
}
}
}
}
}
else
{
lean_object* v_a_5061_; lean_object* v___x_5063_; uint8_t v_isShared_5064_; uint8_t v_isSharedCheck_5068_; 
lean_del_object(v___x_5023_);
lean_dec_ref(v_whichEnvBin_5021_);
lean_dec_ref(v_whichLeanChecker_5020_);
lean_dec_ref(v_whichLean4Export_5019_);
lean_dec_ref(v_lakeHome_5018_);
lean_dec_ref(v_whichLake_5017_);
lean_dec_ref(v_whichSandbox_5016_);
lean_dec_ref(v_binPath_5015_);
lean_dec_ref(v_leanPath_5014_);
lean_dec_ref(v_leanPrefix_5013_);
lean_dec_ref(v_projectDir_5012_);
lean_dec(v_a_5011_);
lean_dec_ref(v___y_5001_);
lean_dec_ref(v___y_5000_);
lean_dec_ref(v___y_4999_);
lean_dec(v___y_4998_);
lean_dec(v___y_4995_);
v_a_5061_ = lean_ctor_get(v___x_5025_, 0);
v_isSharedCheck_5068_ = !lean_is_exclusive(v___x_5025_);
if (v_isSharedCheck_5068_ == 0)
{
v___x_5063_ = v___x_5025_;
v_isShared_5064_ = v_isSharedCheck_5068_;
goto v_resetjp_5062_;
}
else
{
lean_inc(v_a_5061_);
lean_dec(v___x_5025_);
v___x_5063_ = lean_box(0);
v_isShared_5064_ = v_isSharedCheck_5068_;
goto v_resetjp_5062_;
}
v_resetjp_5062_:
{
lean_object* v___x_5066_; 
if (v_isShared_5064_ == 0)
{
v___x_5066_ = v___x_5063_;
goto v_reusejp_5065_;
}
else
{
lean_object* v_reuseFailAlloc_5067_; 
v_reuseFailAlloc_5067_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5067_, 0, v_a_5061_);
v___x_5066_ = v_reuseFailAlloc_5067_;
goto v_reusejp_5065_;
}
v_reusejp_5065_:
{
return v___x_5066_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_5077_; lean_object* v___x_5079_; uint8_t v_isShared_5080_; uint8_t v_isSharedCheck_5084_; 
lean_dec_ref(v___y_5001_);
lean_dec_ref(v___y_5000_);
lean_dec_ref(v___y_4999_);
lean_dec(v___y_4998_);
lean_dec(v___y_4995_);
lean_dec(v_a_4993_);
v_a_5077_ = lean_ctor_get(v___x_5002_, 0);
v_isSharedCheck_5084_ = !lean_is_exclusive(v___x_5002_);
if (v_isSharedCheck_5084_ == 0)
{
v___x_5079_ = v___x_5002_;
v_isShared_5080_ = v_isSharedCheck_5084_;
goto v_resetjp_5078_;
}
else
{
lean_inc(v_a_5077_);
lean_dec(v___x_5002_);
v___x_5079_ = lean_box(0);
v_isShared_5080_ = v_isSharedCheck_5084_;
goto v_resetjp_5078_;
}
v_resetjp_5078_:
{
lean_object* v___x_5082_; 
if (v_isShared_5080_ == 0)
{
v___x_5082_ = v___x_5079_;
goto v_reusejp_5081_;
}
else
{
lean_object* v_reuseFailAlloc_5083_; 
v_reuseFailAlloc_5083_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5083_, 0, v_a_5077_);
v___x_5082_ = v_reuseFailAlloc_5083_;
goto v_reusejp_5081_;
}
v_reusejp_5081_:
{
return v___x_5082_;
}
}
}
}
v___jp_5085_:
{
size_t v_sz_5093_; lean_object* v___x_5094_; lean_object* v___x_5095_; lean_object* v___x_5096_; lean_object* v___x_5097_; lean_object* v___x_5098_; uint8_t v___x_5099_; 
v_sz_5093_ = lean_array_size(v___y_5092_);
v___x_5094_ = l_unsafeCast___redArg(v___y_5092_);
lean_dec_ref(v___y_5092_);
v___x_5095_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_Check_runComparator_spec__0(v_sz_5093_, v___y_5087_, v___x_5094_);
v___x_5096_ = l_unsafeCast___redArg(v___x_5095_);
lean_dec_ref(v___x_5095_);
v___x_5097_ = lean_array_get_size(v___y_5090_);
v___x_5098_ = lean_unsigned_to_nat(0u);
v___x_5099_ = lean_nat_dec_eq(v___x_5097_, v___x_5098_);
if (v___x_5099_ == 0)
{
v___y_4995_ = v___x_5096_;
v___y_4996_ = v___y_5086_;
v___y_4997_ = v___y_5087_;
v___y_4998_ = v___y_5090_;
v___y_4999_ = v___y_5089_;
v___y_5000_ = v___y_5088_;
v___y_5001_ = v___y_5091_;
goto v___jp_4994_;
}
else
{
lean_object* v___x_5100_; uint8_t v___x_5101_; 
v___x_5100_ = lean_array_get_size(v___x_5096_);
v___x_5101_ = lean_nat_dec_eq(v___x_5100_, v___x_5098_);
if (v___x_5101_ == 0)
{
v___y_4995_ = v___x_5096_;
v___y_4996_ = v___y_5086_;
v___y_4997_ = v___y_5087_;
v___y_4998_ = v___y_5090_;
v___y_4999_ = v___y_5089_;
v___y_5000_ = v___y_5088_;
v___y_5001_ = v___y_5091_;
goto v___jp_4994_;
}
else
{
lean_object* v___x_5102_; lean_object* v___x_5103_; 
lean_dec(v___x_5096_);
lean_dec_ref(v___y_5091_);
lean_dec(v___y_5090_);
lean_dec_ref(v___y_5089_);
lean_dec_ref(v___y_5088_);
lean_dec_ref(v___y_5086_);
lean_dec(v_a_4993_);
v___x_5102_ = ((lean_object*)(l_Lake_Check_runComparator___closed__3));
v___x_5103_ = l___private_Lake_CLI_Check_0__Lake_Check_cannotRun(v___x_5102_);
return v___x_5103_;
}
}
}
v___jp_5104_:
{
lean_object* v___x_5106_; 
v___x_5106_ = l_IO_FS_readFile(v___y_5105_);
if (lean_obj_tag(v___x_5106_) == 0)
{
lean_object* v_a_5107_; lean_object* v___x_5108_; 
v_a_5107_ = lean_ctor_get(v___x_5106_, 0);
lean_inc(v_a_5107_);
lean_dec_ref_known(v___x_5106_, 1);
v___x_5108_ = l_Lean_Json_parse(v_a_5107_);
if (lean_obj_tag(v___x_5108_) == 0)
{
lean_object* v_a_5109_; 
lean_dec(v_a_4993_);
v_a_5109_ = lean_ctor_get(v___x_5108_, 0);
lean_inc(v_a_5109_);
lean_dec_ref_known(v___x_5108_, 1);
v___y_4975_ = v___y_5105_;
v_a_4976_ = v_a_5109_;
goto v___jp_4974_;
}
else
{
lean_object* v_a_5110_; lean_object* v___x_5111_; 
v_a_5110_ = lean_ctor_get(v___x_5108_, 0);
lean_inc(v_a_5110_);
lean_dec_ref_known(v___x_5108_, 1);
v___x_5111_ = l_Lake_Check_instFromJsonConfig_fromJson(v_a_5110_);
if (lean_obj_tag(v___x_5111_) == 0)
{
lean_object* v_a_5112_; 
lean_dec(v_a_4993_);
v_a_5112_ = lean_ctor_get(v___x_5111_, 0);
lean_inc(v_a_5112_);
lean_dec_ref_known(v___x_5111_, 1);
v___y_4975_ = v___y_5105_;
v_a_4976_ = v_a_5112_;
goto v___jp_4974_;
}
else
{
lean_object* v_a_5113_; lean_object* v_challenge__module_5114_; lean_object* v_solution__module_5115_; lean_object* v_theorem__names_5116_; lean_object* v_definition__names_5117_; lean_object* v_permitted__axioms_5118_; size_t v_sz_5119_; size_t v___x_5120_; lean_object* v___x_5121_; lean_object* v___x_5122_; lean_object* v___x_5123_; 
v_a_5113_ = lean_ctor_get(v___x_5111_, 0);
lean_inc(v_a_5113_);
lean_dec_ref_known(v___x_5111_, 1);
v_challenge__module_5114_ = lean_ctor_get(v_a_5113_, 0);
lean_inc_ref(v_challenge__module_5114_);
v_solution__module_5115_ = lean_ctor_get(v_a_5113_, 1);
lean_inc_ref(v_solution__module_5115_);
v_theorem__names_5116_ = lean_ctor_get(v_a_5113_, 2);
v_definition__names_5117_ = lean_ctor_get(v_a_5113_, 3);
v_permitted__axioms_5118_ = lean_ctor_get(v_a_5113_, 4);
lean_inc_ref(v_permitted__axioms_5118_);
v_sz_5119_ = lean_array_size(v_theorem__names_5116_);
v___x_5120_ = ((size_t)0ULL);
v___x_5121_ = l_unsafeCast___redArg(v_theorem__names_5116_);
v___x_5122_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake_Check_runComparator_spec__0(v_sz_5119_, v___x_5120_, v___x_5121_);
v___x_5123_ = l_unsafeCast___redArg(v___x_5122_);
lean_dec_ref(v___x_5122_);
if (lean_obj_tag(v_definition__names_5117_) == 0)
{
lean_object* v___x_5124_; 
v___x_5124_ = ((lean_object*)(l___private_Lake_CLI_Check_0__Lake_Check_safeResolveWorkspace___closed__13));
v___y_5086_ = v_a_5113_;
v___y_5087_ = v___x_5120_;
v___y_5088_ = v_challenge__module_5114_;
v___y_5089_ = v_permitted__axioms_5118_;
v___y_5090_ = v___x_5123_;
v___y_5091_ = v_solution__module_5115_;
v___y_5092_ = v___x_5124_;
goto v___jp_5085_;
}
else
{
lean_object* v_val_5125_; 
v_val_5125_ = lean_ctor_get(v_definition__names_5117_, 0);
lean_inc(v_val_5125_);
v___y_5086_ = v_a_5113_;
v___y_5087_ = v___x_5120_;
v___y_5088_ = v_challenge__module_5114_;
v___y_5089_ = v_permitted__axioms_5118_;
v___y_5090_ = v___x_5123_;
v___y_5091_ = v_solution__module_5115_;
v___y_5092_ = v_val_5125_;
goto v___jp_5085_;
}
}
}
}
else
{
lean_object* v_a_5126_; lean_object* v___x_5127_; lean_object* v___x_5128_; lean_object* v___x_5129_; lean_object* v___x_5130_; 
lean_dec(v_a_4993_);
v_a_5126_ = lean_ctor_get(v___x_5106_, 0);
lean_inc(v_a_5126_);
lean_dec_ref_known(v___x_5106_, 1);
v___x_5127_ = ((lean_object*)(l_Lake_Check_runComparator___closed__4));
v___x_5128_ = lean_io_error_to_string(v_a_5126_);
v___x_5129_ = lean_string_append(v___x_5127_, v___x_5128_);
lean_dec_ref(v___x_5128_);
v___x_5130_ = l___private_Lake_CLI_Check_0__Lake_Check_cannotRun(v___x_5129_);
lean_dec_ref(v___x_5129_);
return v___x_5130_;
}
}
}
}
}
else
{
lean_object* v_a_5134_; lean_object* v___x_5136_; uint8_t v_isShared_5137_; uint8_t v_isSharedCheck_5141_; 
v_a_5134_ = lean_ctor_get(v___x_4984_, 0);
v_isSharedCheck_5141_ = !lean_is_exclusive(v___x_4984_);
if (v_isSharedCheck_5141_ == 0)
{
v___x_5136_ = v___x_4984_;
v_isShared_5137_ = v_isSharedCheck_5141_;
goto v_resetjp_5135_;
}
else
{
lean_inc(v_a_5134_);
lean_dec(v___x_4984_);
v___x_5136_ = lean_box(0);
v_isShared_5137_ = v_isSharedCheck_5141_;
goto v_resetjp_5135_;
}
v_resetjp_5135_:
{
lean_object* v___x_5139_; 
if (v_isShared_5137_ == 0)
{
v___x_5139_ = v___x_5136_;
goto v_reusejp_5138_;
}
else
{
lean_object* v_reuseFailAlloc_5140_; 
v_reuseFailAlloc_5140_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5140_, 0, v_a_5134_);
v___x_5139_ = v_reuseFailAlloc_5140_;
goto v_reusejp_5138_;
}
v_reusejp_5138_:
{
return v___x_5139_;
}
}
}
v___jp_4951_:
{
lean_object* v___x_4953_; lean_object* v___x_4954_; lean_object* v___x_4955_; lean_object* v___x_4956_; 
v___x_4953_ = ((lean_object*)(l___private_Lake_CLI_Check_0__Lake_Check_cannotRun___closed__0));
v___x_4954_ = lean_io_error_to_string(v_a_4952_);
v___x_4955_ = lean_string_append(v___x_4953_, v___x_4954_);
lean_dec_ref(v___x_4954_);
v___x_4956_ = l_IO_eprintln___at___00__private_Lake_CLI_Check_0__Lake_Check_cannotRun_spec__0(v___x_4955_);
if (lean_obj_tag(v___x_4956_) == 0)
{
lean_object* v___x_4958_; uint8_t v_isShared_4959_; uint8_t v_isSharedCheck_4964_; 
v_isSharedCheck_4964_ = !lean_is_exclusive(v___x_4956_);
if (v_isSharedCheck_4964_ == 0)
{
lean_object* v_unused_4965_; 
v_unused_4965_ = lean_ctor_get(v___x_4956_, 0);
lean_dec(v_unused_4965_);
v___x_4958_ = v___x_4956_;
v_isShared_4959_ = v_isSharedCheck_4964_;
goto v_resetjp_4957_;
}
else
{
lean_dec(v___x_4956_);
v___x_4958_ = lean_box(0);
v_isShared_4959_ = v_isSharedCheck_4964_;
goto v_resetjp_4957_;
}
v_resetjp_4957_:
{
lean_object* v___x_4960_; lean_object* v___x_4962_; 
v___x_4960_ = l_Lake_Check_runComparator___boxed__const__1;
if (v_isShared_4959_ == 0)
{
lean_ctor_set(v___x_4958_, 0, v___x_4960_);
v___x_4962_ = v___x_4958_;
goto v_reusejp_4961_;
}
else
{
lean_object* v_reuseFailAlloc_4963_; 
v_reuseFailAlloc_4963_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4963_, 0, v___x_4960_);
v___x_4962_ = v_reuseFailAlloc_4963_;
goto v_reusejp_4961_;
}
v_reusejp_4961_:
{
return v___x_4962_;
}
}
}
else
{
lean_object* v_a_4966_; lean_object* v___x_4968_; uint8_t v_isShared_4969_; uint8_t v_isSharedCheck_4973_; 
v_a_4966_ = lean_ctor_get(v___x_4956_, 0);
v_isSharedCheck_4973_ = !lean_is_exclusive(v___x_4956_);
if (v_isSharedCheck_4973_ == 0)
{
v___x_4968_ = v___x_4956_;
v_isShared_4969_ = v_isSharedCheck_4973_;
goto v_resetjp_4967_;
}
else
{
lean_inc(v_a_4966_);
lean_dec(v___x_4956_);
v___x_4968_ = lean_box(0);
v_isShared_4969_ = v_isSharedCheck_4973_;
goto v_resetjp_4967_;
}
v_resetjp_4967_:
{
lean_object* v___x_4971_; 
if (v_isShared_4969_ == 0)
{
v___x_4971_ = v___x_4968_;
goto v_reusejp_4970_;
}
else
{
lean_object* v_reuseFailAlloc_4972_; 
v_reuseFailAlloc_4972_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4972_, 0, v_a_4966_);
v___x_4971_ = v_reuseFailAlloc_4972_;
goto v_reusejp_4970_;
}
v_reusejp_4970_:
{
return v___x_4971_;
}
}
}
}
v___jp_4974_:
{
lean_object* v___x_4977_; lean_object* v___x_4978_; lean_object* v___x_4979_; lean_object* v___x_4980_; lean_object* v___x_4981_; lean_object* v___x_4982_; 
v___x_4977_ = ((lean_object*)(l_Lake_Check_runComparator___closed__0));
v___x_4978_ = lean_string_append(v___x_4977_, v___y_4975_);
v___x_4979_ = ((lean_object*)(l_Lake_Check_runComparator___closed__1));
v___x_4980_ = lean_string_append(v___x_4978_, v___x_4979_);
v___x_4981_ = lean_string_append(v___x_4980_, v_a_4976_);
lean_dec_ref(v_a_4976_);
v___x_4982_ = l___private_Lake_CLI_Check_0__Lake_Check_cannotRun(v___x_4981_);
lean_dec_ref(v___x_4981_);
return v___x_4982_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_Check_runComparator___boxed(lean_object* v_configFile_x3f_5142_, lean_object* v_lean_5143_, lean_object* v_lake_5144_, lean_object* v_projectDir_5145_, lean_object* v_a_5146_){
_start:
{
lean_object* v_res_5147_; 
v_res_5147_ = l_Lake_Check_runComparator(v_configFile_x3f_5142_, v_lean_5143_, v_lake_5144_, v_projectDir_5145_);
lean_dec_ref(v_lake_5144_);
lean_dec(v_configFile_x3f_5142_);
return v_res_5147_;
}
}
LEAN_EXPORT lean_object* l_Lake_Check_runCheck(lean_object* v_lean_5148_, lean_object* v_lake_5149_, lean_object* v_projectDir_5150_){
_start:
{
lean_object* v___x_5152_; lean_object* v___x_5153_; 
v___x_5152_ = ((lean_object*)(l___private_Lake_CLI_Check_0__Lake_Check_withSafeBuildAndExport___redArg___lam__0___closed__0));
v___x_5153_ = l___private_Lake_CLI_Check_0__Lake_Check_mkContext(v___x_5152_, v_lean_5148_, v_lake_5149_, v_projectDir_5150_);
if (lean_obj_tag(v___x_5153_) == 0)
{
lean_object* v_a_5154_; lean_object* v___x_5156_; uint8_t v_isShared_5157_; uint8_t v_isSharedCheck_5214_; 
v_a_5154_ = lean_ctor_get(v___x_5153_, 0);
v_isSharedCheck_5214_ = !lean_is_exclusive(v___x_5153_);
if (v_isSharedCheck_5214_ == 0)
{
v___x_5156_ = v___x_5153_;
v_isShared_5157_ = v_isSharedCheck_5214_;
goto v_resetjp_5155_;
}
else
{
lean_inc(v_a_5154_);
lean_dec(v___x_5153_);
v___x_5156_ = lean_box(0);
v_isShared_5157_ = v_isSharedCheck_5214_;
goto v_resetjp_5155_;
}
v_resetjp_5155_:
{
if (lean_obj_tag(v_a_5154_) == 0)
{
lean_object* v_a_5158_; lean_object* v___x_5160_; 
v_a_5158_ = lean_ctor_get(v_a_5154_, 0);
lean_inc(v_a_5158_);
lean_dec_ref_known(v_a_5154_, 1);
if (v_isShared_5157_ == 0)
{
lean_ctor_set(v___x_5156_, 0, v_a_5158_);
v___x_5160_ = v___x_5156_;
goto v_reusejp_5159_;
}
else
{
lean_object* v_reuseFailAlloc_5161_; 
v_reuseFailAlloc_5161_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5161_, 0, v_a_5158_);
v___x_5160_ = v_reuseFailAlloc_5161_;
goto v_reusejp_5159_;
}
v_reusejp_5159_:
{
return v___x_5160_;
}
}
else
{
lean_object* v_a_5162_; lean_object* v_projectDir_5163_; lean_object* v___x_5164_; 
lean_del_object(v___x_5156_);
v_a_5162_ = lean_ctor_get(v_a_5154_, 0);
lean_inc(v_a_5162_);
lean_dec_ref_known(v_a_5154_, 1);
v_projectDir_5163_ = lean_ctor_get(v_a_5162_, 0);
lean_inc_ref(v_projectDir_5163_);
v___x_5164_ = l___private_Lake_CLI_Check_0__Lake_Check_checkManifest(v___x_5152_, v_projectDir_5163_);
if (lean_obj_tag(v___x_5164_) == 0)
{
lean_object* v_a_5165_; lean_object* v___x_5167_; uint8_t v_isShared_5168_; uint8_t v_isSharedCheck_5205_; 
v_a_5165_ = lean_ctor_get(v___x_5164_, 0);
v_isSharedCheck_5205_ = !lean_is_exclusive(v___x_5164_);
if (v_isSharedCheck_5205_ == 0)
{
v___x_5167_ = v___x_5164_;
v_isShared_5168_ = v_isSharedCheck_5205_;
goto v_resetjp_5166_;
}
else
{
lean_inc(v_a_5165_);
lean_dec(v___x_5164_);
v___x_5167_ = lean_box(0);
v_isShared_5168_ = v_isSharedCheck_5205_;
goto v_resetjp_5166_;
}
v_resetjp_5166_:
{
if (lean_obj_tag(v_a_5165_) == 1)
{
lean_object* v_val_5169_; lean_object* v___x_5171_; 
lean_dec(v_a_5162_);
v_val_5169_ = lean_ctor_get(v_a_5165_, 0);
lean_inc(v_val_5169_);
lean_dec_ref_known(v_a_5165_, 1);
if (v_isShared_5168_ == 0)
{
lean_ctor_set(v___x_5167_, 0, v_val_5169_);
v___x_5171_ = v___x_5167_;
goto v_reusejp_5170_;
}
else
{
lean_object* v_reuseFailAlloc_5172_; 
v_reuseFailAlloc_5172_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5172_, 0, v_val_5169_);
v___x_5171_ = v_reuseFailAlloc_5172_;
goto v_reusejp_5170_;
}
v_reusejp_5170_:
{
return v___x_5171_;
}
}
else
{
lean_object* v___x_5173_; 
lean_del_object(v___x_5167_);
lean_dec(v_a_5165_);
v___x_5173_ = l___private_Lake_CLI_Check_0__Lake_Check_checkProject(v_a_5162_);
lean_dec(v_a_5162_);
if (lean_obj_tag(v___x_5173_) == 0)
{
lean_object* v___x_5175_; uint8_t v_isShared_5176_; uint8_t v_isSharedCheck_5181_; 
v_isSharedCheck_5181_ = !lean_is_exclusive(v___x_5173_);
if (v_isSharedCheck_5181_ == 0)
{
lean_object* v_unused_5182_; 
v_unused_5182_ = lean_ctor_get(v___x_5173_, 0);
lean_dec(v_unused_5182_);
v___x_5175_ = v___x_5173_;
v_isShared_5176_ = v_isSharedCheck_5181_;
goto v_resetjp_5174_;
}
else
{
lean_dec(v___x_5173_);
v___x_5175_ = lean_box(0);
v_isShared_5176_ = v_isSharedCheck_5181_;
goto v_resetjp_5174_;
}
v_resetjp_5174_:
{
lean_object* v___x_5177_; lean_object* v___x_5179_; 
v___x_5177_ = l_Lake_Check_runComparator___boxed__const__2;
if (v_isShared_5176_ == 0)
{
lean_ctor_set(v___x_5175_, 0, v___x_5177_);
v___x_5179_ = v___x_5175_;
goto v_reusejp_5178_;
}
else
{
lean_object* v_reuseFailAlloc_5180_; 
v_reuseFailAlloc_5180_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5180_, 0, v___x_5177_);
v___x_5179_ = v_reuseFailAlloc_5180_;
goto v_reusejp_5178_;
}
v_reusejp_5178_:
{
return v___x_5179_;
}
}
}
else
{
lean_object* v_a_5183_; lean_object* v___x_5184_; lean_object* v___x_5185_; lean_object* v___x_5186_; lean_object* v___x_5187_; 
v_a_5183_ = lean_ctor_get(v___x_5173_, 0);
lean_inc(v_a_5183_);
lean_dec_ref_known(v___x_5173_, 1);
v___x_5184_ = ((lean_object*)(l___private_Lake_CLI_Check_0__Lake_Check_cannotRun___closed__0));
v___x_5185_ = lean_io_error_to_string(v_a_5183_);
v___x_5186_ = lean_string_append(v___x_5184_, v___x_5185_);
lean_dec_ref(v___x_5185_);
v___x_5187_ = l_IO_eprintln___at___00__private_Lake_CLI_Check_0__Lake_Check_cannotRun_spec__0(v___x_5186_);
if (lean_obj_tag(v___x_5187_) == 0)
{
lean_object* v___x_5189_; uint8_t v_isShared_5190_; uint8_t v_isSharedCheck_5195_; 
v_isSharedCheck_5195_ = !lean_is_exclusive(v___x_5187_);
if (v_isSharedCheck_5195_ == 0)
{
lean_object* v_unused_5196_; 
v_unused_5196_ = lean_ctor_get(v___x_5187_, 0);
lean_dec(v_unused_5196_);
v___x_5189_ = v___x_5187_;
v_isShared_5190_ = v_isSharedCheck_5195_;
goto v_resetjp_5188_;
}
else
{
lean_dec(v___x_5187_);
v___x_5189_ = lean_box(0);
v_isShared_5190_ = v_isSharedCheck_5195_;
goto v_resetjp_5188_;
}
v_resetjp_5188_:
{
lean_object* v___x_5191_; lean_object* v___x_5193_; 
v___x_5191_ = l_Lake_Check_runComparator___boxed__const__1;
if (v_isShared_5190_ == 0)
{
lean_ctor_set(v___x_5189_, 0, v___x_5191_);
v___x_5193_ = v___x_5189_;
goto v_reusejp_5192_;
}
else
{
lean_object* v_reuseFailAlloc_5194_; 
v_reuseFailAlloc_5194_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5194_, 0, v___x_5191_);
v___x_5193_ = v_reuseFailAlloc_5194_;
goto v_reusejp_5192_;
}
v_reusejp_5192_:
{
return v___x_5193_;
}
}
}
else
{
lean_object* v_a_5197_; lean_object* v___x_5199_; uint8_t v_isShared_5200_; uint8_t v_isSharedCheck_5204_; 
v_a_5197_ = lean_ctor_get(v___x_5187_, 0);
v_isSharedCheck_5204_ = !lean_is_exclusive(v___x_5187_);
if (v_isSharedCheck_5204_ == 0)
{
v___x_5199_ = v___x_5187_;
v_isShared_5200_ = v_isSharedCheck_5204_;
goto v_resetjp_5198_;
}
else
{
lean_inc(v_a_5197_);
lean_dec(v___x_5187_);
v___x_5199_ = lean_box(0);
v_isShared_5200_ = v_isSharedCheck_5204_;
goto v_resetjp_5198_;
}
v_resetjp_5198_:
{
lean_object* v___x_5202_; 
if (v_isShared_5200_ == 0)
{
v___x_5202_ = v___x_5199_;
goto v_reusejp_5201_;
}
else
{
lean_object* v_reuseFailAlloc_5203_; 
v_reuseFailAlloc_5203_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5203_, 0, v_a_5197_);
v___x_5202_ = v_reuseFailAlloc_5203_;
goto v_reusejp_5201_;
}
v_reusejp_5201_:
{
return v___x_5202_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_5206_; lean_object* v___x_5208_; uint8_t v_isShared_5209_; uint8_t v_isSharedCheck_5213_; 
lean_dec(v_a_5162_);
v_a_5206_ = lean_ctor_get(v___x_5164_, 0);
v_isSharedCheck_5213_ = !lean_is_exclusive(v___x_5164_);
if (v_isSharedCheck_5213_ == 0)
{
v___x_5208_ = v___x_5164_;
v_isShared_5209_ = v_isSharedCheck_5213_;
goto v_resetjp_5207_;
}
else
{
lean_inc(v_a_5206_);
lean_dec(v___x_5164_);
v___x_5208_ = lean_box(0);
v_isShared_5209_ = v_isSharedCheck_5213_;
goto v_resetjp_5207_;
}
v_resetjp_5207_:
{
lean_object* v___x_5211_; 
if (v_isShared_5209_ == 0)
{
v___x_5211_ = v___x_5208_;
goto v_reusejp_5210_;
}
else
{
lean_object* v_reuseFailAlloc_5212_; 
v_reuseFailAlloc_5212_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5212_, 0, v_a_5206_);
v___x_5211_ = v_reuseFailAlloc_5212_;
goto v_reusejp_5210_;
}
v_reusejp_5210_:
{
return v___x_5211_;
}
}
}
}
}
}
else
{
lean_object* v_a_5215_; lean_object* v___x_5217_; uint8_t v_isShared_5218_; uint8_t v_isSharedCheck_5222_; 
v_a_5215_ = lean_ctor_get(v___x_5153_, 0);
v_isSharedCheck_5222_ = !lean_is_exclusive(v___x_5153_);
if (v_isSharedCheck_5222_ == 0)
{
v___x_5217_ = v___x_5153_;
v_isShared_5218_ = v_isSharedCheck_5222_;
goto v_resetjp_5216_;
}
else
{
lean_inc(v_a_5215_);
lean_dec(v___x_5153_);
v___x_5217_ = lean_box(0);
v_isShared_5218_ = v_isSharedCheck_5222_;
goto v_resetjp_5216_;
}
v_resetjp_5216_:
{
lean_object* v___x_5220_; 
if (v_isShared_5218_ == 0)
{
v___x_5220_ = v___x_5217_;
goto v_reusejp_5219_;
}
else
{
lean_object* v_reuseFailAlloc_5221_; 
v_reuseFailAlloc_5221_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5221_, 0, v_a_5215_);
v___x_5220_ = v_reuseFailAlloc_5221_;
goto v_reusejp_5219_;
}
v_reusejp_5219_:
{
return v___x_5220_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Check_runCheck___boxed(lean_object* v_lean_5223_, lean_object* v_lake_5224_, lean_object* v_projectDir_5225_, lean_object* v_a_5226_){
_start:
{
lean_object* v_res_5227_; 
v_res_5227_ = l_Lake_Check_runCheck(v_lean_5223_, v_lake_5224_, v_projectDir_5225_);
lean_dec_ref(v_lake_5224_);
return v_res_5227_;
}
}
lean_object* runtime_initialize_Lake_Check_Axioms(uint8_t builtin);
lean_object* runtime_initialize_Lake_Check_Compare(uint8_t builtin);
lean_object* runtime_initialize_Lake_Config_InstallPath(uint8_t builtin);
lean_object* runtime_initialize_Lake_Util_Exit(uint8_t builtin);
lean_object* runtime_initialize_Lean_Data_Json_FromToJson(uint8_t builtin);
lean_object* runtime_initialize_Lean_Environment(uint8_t builtin);
lean_object* runtime_initialize_Lean_Replay(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_String_Search(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_String_TakeDrop(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_ToString_Macro(uint8_t builtin);
lean_object* runtime_initialize_Init_System_IO(uint8_t builtin);
lean_object* runtime_initialize_Init_System_Platform(uint8_t builtin);
void lean_initialize();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lake_CLI_Check(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize();
res = runtime_initialize_Lake_Check_Axioms(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Check_Compare(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Config_InstallPath(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Util_Exit(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Data_Json_FromToJson(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Environment(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Replay(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_String_Search(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_String_TakeDrop(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_ToString_Macro(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_System_IO(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_System_Platform(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___private_Lake_CLI_Check_0__Lake_Check_cannotRun___boxed__const__1 = _init_l___private_Lake_CLI_Check_0__Lake_Check_cannotRun___boxed__const__1();
lean_mark_persistent(l___private_Lake_CLI_Check_0__Lake_Check_cannotRun___boxed__const__1);
l_Lake_Check_runComparator___boxed__const__1 = _init_l_Lake_Check_runComparator___boxed__const__1();
lean_mark_persistent(l_Lake_Check_runComparator___boxed__const__1);
l_Lake_Check_runComparator___boxed__const__2 = _init_l_Lake_Check_runComparator___boxed__const__2();
lean_mark_persistent(l_Lake_Check_runComparator___boxed__const__2);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lake_CLI_Check(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lake_Check_Axioms(uint8_t builtin);
lean_object* initialize_Lake_Check_Compare(uint8_t builtin);
lean_object* initialize_Lake_Config_InstallPath(uint8_t builtin);
lean_object* initialize_Lake_Util_Exit(uint8_t builtin);
lean_object* initialize_Lean_Data_Json_FromToJson(uint8_t builtin);
lean_object* initialize_Lean_Environment(uint8_t builtin);
lean_object* initialize_Lean_Replay(uint8_t builtin);
lean_object* initialize_Init_Data_String_Search(uint8_t builtin);
lean_object* initialize_Init_Data_String_TakeDrop(uint8_t builtin);
lean_object* initialize_Init_Data_ToString_Macro(uint8_t builtin);
lean_object* initialize_Init_System_IO(uint8_t builtin);
lean_object* initialize_Init_System_Platform(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lake_CLI_Check(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lake_Check_Axioms(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Check_Compare(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Config_InstallPath(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Util_Exit(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Data_Json_FromToJson(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Environment(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Replay(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_String_Search(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_String_TakeDrop(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_ToString_Macro(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_System_IO(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_System_Platform(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_CLI_Check(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lake_CLI_Check(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lake_CLI_Check(builtin);
}
#ifdef __cplusplus
}
#endif
